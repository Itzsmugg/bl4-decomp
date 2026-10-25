// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14140c7ea FUN_14140c7ea body=1542 status=ok
// SIG undefined FUN_14140c7ea(void)

void FUN_14140c7ea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  byte local_a5;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14082167c();
  local_88 = *(undefined4 *)(param_1 + 0x80);
  local_90 = *(undefined8 *)(param_1 + 0x78);
  if ((int)local_90 != 0) {
    uVar14 = FUN_141193194(param_1,param_2,param_1 + 0x78);
    local_b8 = 2;
    FUN_1408234aa(uVar14,local_80,param_2,&DAT_14cb86eb8);
    lVar11 = FUN_140823ef2(param_1,param_2,&local_90);
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = (undefined4 *)(lVar13 + 0xc7c);
    local_a4 = *puVar4;
    pbVar5 = (byte *)(lVar13 + 0xc80);
    local_a5 = *pbVar5;
    if ((local_a5 & 1) != 0) {
      *pbVar5 = 0;
      *puVar4 = 0xffffffff;
    }
    plVar12 = (longlong *)FUN_14001cc68(0x338);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14b97de40;
    plVar1 = plVar12 + 3;
    memset(plVar1,0,800);
    plVar12[2] = (longlong)&PTR_FUN_14b5c7300;
    *(undefined4 *)(plVar12 + 0xc) = 0;
    plVar12[0xd] = 0;
    plVar12[0xe] = 0;
    plVar12[0xf] = 0;
    plVar12[0x10] = 0;
    plVar12[6] = 0;
    plVar12[7] = 0;
    plVar12[8] = 0;
    plVar12[9] = 0;
    *(undefined8 *)((longlong)plVar12 + 0x49) = 0;
    *(undefined8 *)((longlong)plVar12 + 0x51) = 0;
    plVar12[0x11] = (longlong)&PTR_FUN_14b023b08;
    *(undefined4 *)(plVar12 + 0x13) = 0;
    *(undefined1 *)(plVar12 + 0x15) = 0;
    plVar12[0x16] = 0;
    plVar12[0x17] = 0;
    plVar12[0x18] = 0;
    plVar12[0x19] = 0;
    *(undefined4 *)(plVar12 + 0x1a) = 0x3b9cbb9e;
    *(undefined4 *)(plVar12 + 0x20) = 0;
    plVar12[0x1b] = 0;
    plVar12[0x1c] = 0;
    *(undefined8 *)((longlong)plVar12 + 0xe1) = 0;
    *(undefined8 *)((longlong)plVar12 + 0xe9) = 0;
    plVar12[0x21] = 0;
    plVar12[0x22] = 0;
    *(undefined4 *)(plVar12 + 0x23) = 0;
    plVar12[0x2a] = 0;
    plVar12[0x2b] = 0;
    plVar12[0x28] = 0;
    plVar12[0x29] = 0;
    plVar12[0x26] = 0;
    plVar12[0x27] = 0;
    plVar12[0x24] = 0;
    plVar12[0x25] = 0;
    iVar8 = DAT_14c844850;
    iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110);
    *(undefined4 *)((longlong)plVar12 + 0x164) = 0;
    plVar12[0x2f] = DAT_14c8464f0;
    lVar13 = DAT_14c8464e8;
    plVar12[0x2d] = DAT_14c8464e0;
    plVar12[0x2e] = lVar13;
    lVar13 = DAT_14c846500;
    plVar12[0x30] = DAT_14c8464f8;
    plVar12[0x31] = lVar13;
    plVar12[0x32] = DAT_14c846508;
    uVar10 = DAT_14c846518._4_4_;
    uVar9 = (undefined4)DAT_14c846518;
    uVar14 = DAT_14c846510._4_4_;
    *(undefined4 *)(plVar12 + 0x33) = (undefined4)DAT_14c846510;
    *(undefined4 *)((longlong)plVar12 + 0x19c) = uVar14;
    *(undefined4 *)(plVar12 + 0x34) = uVar9;
    *(undefined4 *)((longlong)plVar12 + 0x1a4) = uVar10;
    plVar12[0x35] = DAT_14c846520;
    plVar12[0x38] = 0;
    plVar12[0x36] = 0;
    *(undefined2 *)(plVar12 + 0x37) = 0;
    *(undefined4 *)(plVar12 + 0x39) = 0x10;
    plVar12[0x3c] = 0;
    plVar12[0x3b] = (longlong)&PTR_FUN_14b023b20;
    plVar12[0x3e] = (longlong)&PTR_FUN_14b023b40;
    plVar12[0x3f] = 0;
    plVar12[0x40] = 0;
    plVar12[0x41] = (longlong)&PTR_FUN_14b00be70;
    *(undefined4 *)(plVar12 + 0x43) = 0xf00000d0;
    *(undefined4 *)(plVar12 + 0x45) = 0;
    *(undefined4 *)(plVar12 + 0x46) = 0;
    *(undefined1 *)((longlong)plVar12 + 0x234) = 1;
    *(undefined4 *)(plVar12 + 0x48) = 0xf00000d0;
    plVar12[0x49] = 0;
    plVar12[0x4a] = 0;
    *(undefined4 *)(plVar12 + 0x4b) = 0xf00000d0;
    *(undefined1 *)(plVar12 + 0x4d) = 0;
    *(undefined4 *)((longlong)plVar12 + 0x26c) = 0;
    *(undefined1 *)((longlong)plVar12 + 0x271) = 0;
    *(undefined4 *)((longlong)plVar12 + 0x274) = 6;
    if (iVar7 < iVar8) {
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
    plVar2 = DAT_14c844840;
    plVar12[0x50] = (longlong)DAT_14c844840;
    if (plVar2 != (longlong *)0x0) {
      if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plVar2 + 8))();
      }
    }
    *(undefined4 *)(plVar12 + 0x51) = 0;
    *(undefined4 *)(plVar12 + 0x52) = 0;
    *(undefined2 *)(plVar12 + 0x53) = 0;
    *(undefined4 *)(plVar12 + 0x54) = 0;
    plVar12[0x55] = 0;
    plVar12[0x56] = 0;
    plVar12[0x57] = 0;
    plVar12[0x58] = 0;
    plVar12[0x59] = 0;
    plVar12[0x5a] = 0;
    *(undefined4 *)(plVar12 + 0x5b) = 0xf00000d0;
    plVar12[0x5c] = 0;
    *(undefined4 *)(plVar12 + 0x5d) = 0x3f800000;
    plVar12[0x5e] = 0;
    plVar12[0x5f] = 0;
    plVar12[0x60] = 0;
    plVar12[0x61] = 0;
    plVar12[0x62] = 0;
    plVar12[99] = 0;
    plVar12[100] = 0;
    plVar12[0x65] = 0;
    plVar12[0x66] = 0;
    if ((local_a5 & 1) != 0) {
      *puVar4 = local_a4;
      *pbVar5 = 1;
    }
    FUN_14140cdf2(plVar12 + 5,param_1 + 0x90);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    iVar7 = *(int *)(lVar11 + 0x50);
    *(uint *)(lVar11 + 0x50) = iVar7 + 1U;
    if (*(uint *)(lVar11 + 0x54) < iVar7 + 1U) {
      FUN_140822376((longlong *)(lVar11 + 0x48),iVar7);
    }
    lVar13 = *(longlong *)(lVar11 + 0x48);
    *(longlong **)(lVar13 + (longlong)iVar7 * 0x10) = plVar12 + 2;
    *(longlong **)(lVar13 + 8 + (longlong)iVar7 * 0x10) = plVar12;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar12 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar3 = (int *)((longlong)plVar12 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    iVar7 = (int)plVar12[4];
    *(uint *)(plVar12 + 4) = iVar7 + 1U;
    if (*(uint *)((longlong)plVar12 + 0x24) < iVar7 + 1U) {
      FUN_140823334(plVar1,iVar7);
    }
    puVar6 = (undefined8 *)(*plVar1 + (longlong)iVar7 * 0x28);
    *puVar6 = DAT_14cbc2d38;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    local_a0 = CONCAT31(local_a0._1_3_,1);
    local_94 = 1;
    uStack_9c = (undefined4)DAT_14cb7c588;
    uStack_98 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
    FUN_140821fec(puVar6,local_80,&local_a0,0);
    param_2 = param_2 + 0x2c0;
    FUN_14082207e(&local_a0,local_80,0);
    FUN_140822770(param_2,&local_a0,1);
    FUN_1447cd778(CONCAT44(uStack_9c,local_a0),uStack_98);
    if (CONCAT44(uStack_9c,local_a0) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar13 = FUN_1406b3bde(param_2);
      lVar13 = FUN_1457a5b8c(lVar13 + 0x140);
      FUN_140d895f4(lVar13 + 0x20,param_1 + 0x188);
      lVar13 = FUN_1406b2efc(param_2);
      lVar13 = FUN_1457a5bd4(lVar13 + 0x140);
      FUN_140d895f4(lVar13 + 0x20,param_1 + 0x188);
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar3 = (int *)((longlong)plVar12 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14140cdf2 FUN_14140cdf2 body=898 status=ok
// SIG undefined FUN_14140cdf2(void)

undefined1 * FUN_14140cdf2(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x28);
    pvVar2 = *(void **)(param_2 + 0x20);
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x2c) == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x20,iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x20),pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  lVar8 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_1 + 0x40) != lVar8) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(longlong *)(param_1 + 0x40) = lVar8;
  if (*(longlong *)(param_1 + 0x48) != *(longlong *)(param_2 + 0x48)) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar7 = FUN_14477b664();
  uVar7 = FUN_14477b664(uVar7);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  if ((*(longlong *)(param_1 + 0x58) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x50));
  }
  bVar6 = DAT_14cb26569;
  lVar8 = *(longlong *)(param_2 + 0x58);
  *(longlong *)(param_1 + 0x58) = lVar8;
  if ((lVar8 != 0) && ((bVar6 & 1) != 0)) {
    FUN_14036e5a4(*(undefined8 *)(lVar8 + 0x50));
  }
  if ((*(longlong *)(param_1 + 0x68) != *(longlong *)(param_2 + 0x68)) ||
     (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70))) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_2 + 0x80);
  FUN_1401f3db8(param_1 + 0x88,param_2 + 0x88);
  if ((*(longlong *)(param_1 + 0xa0) != *(longlong *)(param_2 + 0xa0)) ||
     (*(int *)(param_1 + 0xa8) != *(int *)(param_2 + 0xa8))) {
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_2 + 0xa0);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  FUN_140e8ab18(param_1 + 0xb8,param_2 + 0xb8);
  param_1[200] = param_2[200];
  if ((*(longlong *)(param_1 + 0xd0) != *(longlong *)(param_2 + 0xd0)) ||
     (*(int *)(param_1 + 0xd8) != *(int *)(param_2 + 0xd8))) {
    *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  lVar8 = *(longlong *)(param_2 + 0xf8);
  if (*(longlong *)(param_1 + 0xf8) != lVar8) {
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(longlong *)(param_1 + 0xf8) = lVar8;
  if (*(longlong *)(param_1 + 0x100) != *(longlong *)(param_2 + 0x100)) {
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  uVar7 = FUN_14477b664();
  uVar7 = FUN_14477b664(uVar7);
  *(undefined8 *)(param_1 + 0x100) = uVar7;
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  uVar3 = *(undefined4 *)(param_2 + 0x11c);
  uVar4 = *(undefined4 *)(param_2 + 0x120);
  uVar5 = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = uVar3;
  *(undefined4 *)(param_1 + 0x120) = uVar4;
  *(undefined4 *)(param_1 + 0x124) = uVar5;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x130);
    pvVar2 = *(void **)(param_2 + 0x128);
    *(int *)(param_1 + 0x130) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x134) == 0) {
      *(undefined4 *)(param_1 + 0x134) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x128,iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x128),pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  puVar9 = (undefined8 *)(param_2 + 0x138);
  puVar10 = (undefined8 *)(param_1 + 0x138);
  for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  if ((*(longlong *)(param_1 + 0x198) != *(longlong *)(param_2 + 0x198)) ||
     (*(int *)(param_1 + 0x1a0) != *(int *)(param_2 + 0x1a0))) {
    *(longlong *)(param_1 + 0x198) = *(longlong *)(param_2 + 0x198);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  FUN_14070e2ba(param_1 + 0x1b0,param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 14140d174 FUN_14140d174 body=320 status=ok
// SIG undefined FUN_14140d174(void)

void FUN_14140d174(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = DAT_14c9a1ab0;
  if (((DAT_14c9a1ab0 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) != 0)) {
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x8c) == -1) {
      plVar1 = (longlong *)(DAT_14c9a1ab0 + 0x288);
      FUN_1411d1b51(*(undefined8 *)(DAT_14c9a1ab0 + 0x288),*(undefined4 *)(DAT_14c9a1ab0 + 0x290));
      *(undefined4 *)(lVar5 + 0x290) = 0;
      if (*(int *)(lVar5 + 0x294) != 0) {
        FUN_145836590(plVar1,0);
      }
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x18);
      if (lVar7 != 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        lVar6 = 0;
        do {
          uVar4 = *(undefined8 *)(lVar3 + lVar6);
          iVar2 = *(int *)(lVar5 + 0x290);
          *(uint *)(lVar5 + 0x290) = iVar2 + 1U;
          if (*(uint *)(lVar5 + 0x294) < iVar2 + 1U) {
            FUN_14597f1e8(plVar1,iVar2);
          }
          FUN_14140d2b4((longlong)iVar2 * 0x238 + *plVar1,uVar4);
          lVar6 = lVar6 + 0x10;
        } while (lVar7 * 0x10 != lVar6);
      }
    }
    FUN_14140d694(param_1);
    FUN_14140d772(param_1);
    FUN_14140d616();
    FUN_14140dbba(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14140d2b4 FUN_14140d2b4 body=866 status=ok
// SIG undefined FUN_14140d2b4(void)

undefined8 * FUN_14140d2b4(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[9] = &DAT_14a171d50;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_2[10];
  FUN_1406022fe(param_1 + 0xb,param_2 + 0xb);
  param_1[0xd] = &DAT_14a171d50;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = param_2[0xe];
  FUN_1406022fe(param_1 + 0xf,param_2 + 0xf);
  param_1[0x11] = &DAT_14a171d50;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = param_2[0x12];
  FUN_1406022fe(param_1 + 0x13,param_2 + 0x13);
  param_1[0x15] = &DAT_14a171d50;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = param_2[0x16];
  FUN_1406022fe(param_1 + 0x17,param_2 + 0x17);
  param_1[0x19] = &DAT_14a171d50;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = param_2[0x1a];
  FUN_1406022fe(param_1 + 0x1b,param_2 + 0x1b);
  param_1[0x1d] = param_2[0x1d];
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_144881636(param_1 + 0x1f,param_2 + 0x1f);
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  FUN_144881636(param_1 + 0x29,param_2 + 0x29);
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_144881636(param_1 + 0x33,param_2 + 0x33);
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  FUN_144881636(param_1 + 0x3d,param_2 + 0x3d);
  return param_1;
}



// FUNCTION 14140d616 FUN_14140d616 body=126 status=ok
// SIG undefined FUN_14140d616(void)

void FUN_14140d616(void)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = DAT_14c9a1ab0;
  if (1 < *(int *)(DAT_14c9a1ab0 + 0x58)) {
    return;
  }
  *(undefined4 *)(DAT_14c9a1ab0 + 0x58) = 2;
  FUN_145835dd8(lVar4 + 0x580,2);
  iVar1 = *(int *)(lVar4 + 0xd0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(lVar4 + 200);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x3c0))();
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  FUN_142b28514(lVar4);
  return;
}



// FUNCTION 14140d694 FUN_14140d694 body=221 status=ok
// SIG undefined FUN_14140d694(void)

void FUN_14140d694(longlong param_1)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = DAT_14c9a1ab0;
  lVar4 = DAT_14c9a1ab0 + 0x278;
  FUN_1459afa96(*(undefined8 *)(DAT_14c9a1ab0 + 0x278),*(undefined4 *)(DAT_14c9a1ab0 + 0x280));
  *(undefined4 *)(lVar3 + 0x280) = 0;
  if (*(int *)(lVar3 + 0x284) != 0) {
    FUN_147099c82(lVar4,0);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 8) != 0) {
    FUN_14708d392(lVar4);
    lVar4 = 0;
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x6c) != -1) {
      lVar4 = *(longlong *)(param_1 + 8) + 0x60;
    }
    if ((longlong)*(int *)(lVar3 + 0x280) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x278);
      lVar6 = (longlong)*(int *)(lVar3 + 0x280) * 0x250;
      do {
        uVar1 = *(ushort *)(lVar5 + 0x248);
        if (((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(lVar3 + 0xd0))) &&
           (plVar2 = *(longlong **)(*(longlong *)(lVar3 + 200) + (ulonglong)uVar1 * 8),
           plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x3c8))(plVar2,lVar5,lVar4);
        }
        lVar5 = lVar5 + 0x250;
        lVar6 = lVar6 + -0x250;
      } while (lVar6 != 0);
    }
  }
  return;
}



// FUNCTION 14140d772 FUN_14140d772 body=1095 status=ok
// SIG undefined FUN_14140d772(void)

void FUN_14140d772(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined2 *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  lVar10 = DAT_14c9a1ab0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  lVar23 = (longlong)*(int *)(lVar22 + 0x18);
  local_80 = param_1;
  if (lVar23 != 0) {
    lVar22 = *(longlong *)(lVar22 + 0x10);
    iVar19 = 0;
    lVar25 = 0;
    do {
      lVar13 = *(longlong *)(lVar22 + lVar25);
      local_88 = 1;
      lVar13 = FUN_1412927d8(lVar10,lVar13 + 0x18,lVar13 + 0xc0);
      if (lVar13 != 0) {
        lVar5 = *(longlong *)(lVar22 + lVar25);
        *(longlong *)(lVar5 + 0x170) = lVar13;
        puVar6 = *(undefined8 **)(lVar5 + 8);
        if ((puVar6 != (undefined8 *)0x0) && (puVar6[8] != 0)) {
          iVar12 = *(int *)(puVar6 + 1) + -1;
          if (*(int *)(puVar6 + 1) == 0) {
            iVar12 = iVar19;
          }
          FUN_1402980a2(lVar13 + 8,*puVar6,iVar12);
          lVar13 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x40);
          iVar12 = *(int *)(lVar13 + 0x18);
          iVar20 = iVar12 + -1;
          if (iVar12 == 0) {
            iVar20 = iVar19;
          }
          puVar18 = &DAT_149dfb77a;
          if (iVar12 != 0) {
            puVar18 = *(undefined2 **)(lVar13 + 0x10);
          }
          FUN_140c540b4(*(longlong *)(lVar5 + 0x170) + 8,puVar18,iVar20,1);
          lVar13 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x40);
          iVar12 = *(int *)(lVar13 + 0x18);
          iVar20 = iVar12 + -1;
          if (iVar12 == 0) {
            iVar20 = iVar19;
          }
          FUN_1402980a2(*(longlong *)(lVar5 + 0x170) + 0x28,*(undefined8 *)(lVar13 + 0x10),iVar20);
          puVar6 = *(undefined8 **)(*(longlong *)(lVar5 + 8) + 0x40);
          local_68 = *puVar6;
          iVar12 = *(int *)(puVar6 + 1);
          local_60 = iVar12 + -1;
          if (iVar12 == 0) {
            local_60 = 0;
          }
          local_58 = *(undefined8 *)(*(longlong *)(lVar5 + 0x170) + 8);
          iVar12 = *(int *)(*(longlong *)(lVar5 + 0x170) + 0x10);
          local_50 = iVar12 + -1;
          if (iVar12 == 0) {
            local_50 = 0;
          }
          FUN_140bee87a(&local_78,&local_68,2);
          lVar13 = *(longlong *)(lVar5 + 0x170);
          if ((longlong *)(lVar13 + 0x18) == &local_78) {
            if (local_78 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(lVar13 + 0x18) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar13 + 0x18) = local_78;
            local_78 = 0;
            *(undefined4 *)(lVar13 + 0x20) = local_70;
            *(undefined4 *)(lVar13 + 0x24) = local_6c;
          }
          *(undefined8 *)(*(longlong *)(lVar5 + 0x170) + 0x148) =
               *(undefined8 *)(*(longlong *)(lVar5 + 8) + 0x18);
          puVar7 = *(undefined **)(lVar5 + 0x170);
          if (puVar7 != &DAT_14c9a1198) {
            uVar8 = *(undefined8 *)(lVar5 + 0x128);
            lVar13 = *(longlong *)(lVar5 + 0x130);
            if (lVar13 != 0) {
              LOCK();
              *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
              UNLOCK();
            }
            plVar9 = *(longlong **)(puVar7 + 0x178);
            *(undefined8 *)(puVar7 + 0x170) = uVar8;
            *(longlong *)(puVar7 + 0x178) = lVar13;
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
          }
        }
      }
      lVar25 = lVar25 + 0x10;
    } while (lVar23 * 0x10 != lVar25);
  }
  iVar19 = *(int *)(lVar10 + 0x98);
  if (iVar19 == 0) {
    uVar24 = 1;
    uVar26 = 0;
    iVar20 = 0;
    iVar12 = 0;
  }
  else {
    puVar14 = *(uint **)(lVar10 + 0x90);
    if (*(uint **)(lVar10 + 0x90) == (uint *)0x0) {
      puVar14 = (uint *)(lVar10 + 0x80);
    }
    uVar21 = *puVar14;
    if (uVar21 == 0) {
      iVar12 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar12 = iVar19 + -1;
      }
      uVar26 = 0;
      uVar24 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar24 = uVar26;
      }
      iVar20 = 0;
      do {
        if (uVar24 == uVar26) goto LAB_14140da62;
        iVar20 = iVar20 + 0x20;
        uVar21 = puVar14[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar26 = 0;
      iVar20 = 0;
    }
    uVar24 = (ulonglong)(-uVar21 & uVar21);
    uVar3 = uVar24 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar12 = (iVar20 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if (iVar19 <= iVar12) {
      iVar12 = iVar19;
    }
  }
  if (iVar12 != iVar19) {
    uVar21 = 0xffffffff;
    do {
      lVar22 = *(longlong *)(*(longlong *)(lVar10 + 0x70) + 8 + (longlong)iVar12 * 0x18);
      if ((((lVar22 != 0) &&
           (*(byte *)(lVar22 + 0x160) = *(byte *)(lVar22 + 0x160) & 0xfb,
           *(char *)(lVar22 + 0x161) == '\x01')) &&
          (*(int *)(lVar22 + 0x164) != *(int *)(lVar10 + 0x5c))) &&
         (((cVar11 = FUN_140e89b52(*(undefined8 *)(local_80 + 8),lVar22 + 8), cVar11 != '\0' &&
           (*(int *)(*(longlong *)(local_80 + 8) + 0x7c) == -1)) &&
          (*(int *)(*(longlong *)(local_80 + 8) + 0x8c) == -1)))) {
        *(byte *)(lVar22 + 0x160) = *(byte *)(lVar22 + 0x160) | 4;
      }
      uVar21 = uVar21 & ~(uint)uVar24;
      puVar14 = *(uint **)(lVar10 + 0x90);
      if (*(uint **)(lVar10 + 0x90) == (uint *)0x0) {
        puVar14 = (uint *)(lVar10 + 0x80);
      }
      iVar4 = *(int *)(lVar10 + 0x98);
      iVar12 = (int)uVar26;
      lVar22 = (longlong)iVar12;
      uVar17 = puVar14[lVar22] & uVar21;
      if (uVar17 == 0) {
        iVar15 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar15 = iVar4 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar12) {
          iVar16 = iVar12;
        }
        if (iVar12 < iVar15) {
          lVar23 = 0;
          do {
            uVar17 = puVar14[lVar22 + lVar23 + 1];
            if (uVar17 != 0) {
              uVar26 = (ulonglong)(iVar12 + (int)lVar23 + 1);
              uVar21 = 0xffffffff;
              goto LAB_14140db71;
            }
            iVar20 = iVar20 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar16 - lVar22 != lVar23);
          uVar21 = 0xffffffff;
          iVar12 = iVar16;
        }
        uVar26 = (ulonglong)(iVar12 + 1);
        iVar12 = iVar4;
      }
      else {
LAB_14140db71:
        uVar24 = (ulonglong)(-uVar17 & uVar17);
        uVar3 = uVar24 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar12 = (iVar20 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar12) {
          iVar12 = iVar4;
        }
      }
    } while (iVar12 != iVar19);
  }
LAB_14140da62:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14140dbba FUN_14140dbba body=1904 status=ok
// SIG undefined FUN_14140dbba(void)

void FUN_14140dbba(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong *plVar12;
  byte bVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  longlong *local_1f0;
  ulonglong local_1e8;
  int local_1dc;
  longlong local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined4 local_19e;
  undefined1 local_19a;
  undefined8 *local_198;
  undefined4 local_190;
  longlong local_188;
  undefined8 local_180;
  code *local_178 [2];
  undefined8 *local_168;
  code *local_138 [2];
  undefined8 *local_128;
  code *local_f8 [2];
  undefined8 *local_e8;
  code *local_b8 [2];
  undefined8 *local_a8;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  puVar22 = DAT_14c9a1ab0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar24 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8);
  uVar20 = (ulonglong)uVar24;
  local_1d8 = param_1;
  if (*(int *)(DAT_14c9a1ab0 + 0x1a) < (int)uVar24) goto LAB_14140e2d6;
  plVar12 = (longlong *)FUN_14001cc68(0x30);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14a176150;
  plVar12[4] = 0;
  *(undefined4 *)((longlong)plVar12 + 0x2c) = 0x80;
  plVar14 = plVar12 + 2;
  *(uint *)(plVar12 + 5) = uVar24;
  uVar24 = uVar24 + 0x1f;
  local_1f0 = plVar14;
  local_1e8 = uVar20;
  if (0x1f < uVar24) {
    if (uVar24 < 0xa0) {
LAB_14140dcb5:
      uVar24 = uVar24 >> 3 & 0xfffffffc;
    }
    else {
      FUN_1446efa72(plVar12 + 4,0,uVar24 >> 5,4);
      *(uint *)((longlong)plVar12 + 0x2c) = uVar24 & 0xffffffe0;
      plVar14 = (longlong *)plVar12[4];
      if ((longlong *)plVar12[4] == (longlong *)0x0) {
        plVar14 = local_1f0;
      }
      if (uVar24 < 0x120) goto LAB_14140dcb5;
      uVar24 = (uVar24 >> 5) << 2;
    }
    memset(plVar14,0,(ulonglong)uVar24);
    iVar2 = (int)plVar12[5];
    iVar9 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar9 = iVar2;
    }
    if (iVar2 % 0x20 != 0) {
      plVar14 = (longlong *)plVar12[4];
      if (plVar14 == (longlong *)0x0) {
        plVar14 = local_1f0;
      }
      bVar13 = -(char)(iVar2 % 0x20);
      *(uint *)((longlong)plVar14 + (longlong)(iVar9 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar9 >> 5) * 4) << (bVar13 & 0x1f)) >>
           (bVar13 & 0x1f);
    }
  }
  uVar20 = local_1e8;
  lVar23 = DAT_14c9a0aa8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_1d0 = param_2;
  if ((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) {
    uVar17 = 0;
  }
  else if (iVar2 == 2) {
    uVar17 = 0;
  }
  else if (iVar2 == 1) {
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    uVar17 = (ulonglong)(DVar10 != DVar11);
  }
  else {
    uVar17 = 1;
  }
  if (0 < (int)uVar20) {
    local_1dc = *(int *)(lVar23 + uVar17 * 4);
    lVar23 = 8;
    uVar17 = 0;
    local_1c8 = puVar22;
    do {
      plVar14 = *(longlong **)(puVar22[0x19] + uVar17 * 8);
      if (plVar14 != (longlong *)0x0) {
        cVar8 = (**(code **)(*plVar14 + 0x300))();
        if (cVar8 != '\0') {
          (**(code **)(*plVar14 + 0x2f8))();
        }
        uVar16 = (undefined4)uVar17;
        lVar18 = **(longlong **)(*(longlong *)(local_1d8 + 0x10) + 0x20);
        local_188 = 0;
        iVar2 = *(int *)(lVar18 + lVar23);
        uVar3 = *(undefined8 *)(lVar18 + -8 + lVar23);
        local_180 = CONCAT44(local_180._4_4_,iVar2);
        local_198 = puVar22;
        local_190 = uVar16;
        if (iVar2 == 0) {
          local_180 = 0;
        }
        else {
          FUN_14173867e(&local_188,iVar2);
          FUN_142b1cfd4(local_188,uVar3,iVar2);
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (local_1dc == 0) {
          local_19e = 0x1000000;
          local_19a = 1;
          local_19e._2_1_ = 0;
          local_19e._1_1_ = 0;
          local_19e._0_1_ = 0;
        }
        else {
          (**(code **)(*plVar14 + 0x3e0))(plVar14,&local_19e);
        }
        uVar21 = 1;
        if (((byte)local_19e & 1) != 0) {
          uVar21 = 0xff;
        }
        uVar25 = 1;
        if ((local_19e._1_1_ & 1) != 0) {
          uVar25 = 0xff;
        }
        uVar19 = 1;
        if ((local_19e._2_1_ & 1) != 0) {
          uVar19 = 0xff;
        }
        local_b8[0] = (code *)0x0;
        local_a8 = (undefined8 *)0x0;
        local_a8 = (undefined8 *)FUN_14001cc68(0x28,8);
        lVar18 = local_188;
        *local_a8 = &PTR_LAB_14a176170;
        local_188 = 0;
        uVar5 = (undefined4)local_180;
        uVar6 = local_180._4_4_;
        local_180 = 0;
        puVar22 = local_a8 + 1;
        *puVar22 = local_198;
        *(undefined4 *)(local_a8 + 2) = local_190;
        local_a8[3] = lVar18;
        *(undefined4 *)(local_a8 + 4) = uVar5;
        *(undefined4 *)((longlong)local_a8 + 0x24) = uVar6;
        if (puVar22 != (undefined8 *)0x0) {
          local_b8[0] = FUN_142b1cffc;
        }
        local_1f8 = uVar21;
        FUN_14014aede(&local_1a8,local_b8,puVar22,0);
        local_f8[0] = (code *)0x0;
        local_e8 = (undefined8 *)0x0;
        local_e8 = (undefined8 *)FUN_14001cc68(0x30,8);
        puVar22 = local_1c8;
        *local_e8 = &PTR_LAB_14a176190;
        local_e8[1] = local_1c8;
        local_e8[2] = plVar14;
        *(undefined4 *)(local_e8 + 3) = uVar16;
        local_e8[4] = local_1f0;
        local_e8[5] = plVar12;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (local_e8 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_f8[0] = FUN_142b1d31c;
        }
        local_1f8 = uVar25;
        FUN_140e6df44(&local_1b0,local_f8);
        local_138[0] = (code *)0x0;
        local_128 = (undefined8 *)0x0;
        local_128 = (undefined8 *)FUN_14001cc68(0x30,8);
        uVar20 = local_1e8;
        *local_128 = &PTR_LAB_14a1761b0;
        local_128[1] = puVar22;
        local_128[2] = plVar14;
        *(undefined4 *)(local_128 + 3) = uVar16;
        local_128[4] = local_1f0;
        local_128[5] = plVar12;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (local_128 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_138[0] = FUN_142b1d420;
        }
        local_1f8 = uVar19;
        FUN_140e6df44(&local_1b8,local_138);
        uVar7 = local_50;
        lVar18 = (longlong)(int)local_50;
        uVar24 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar24);
        if (local_50._4_4_ < uVar24) {
          FUN_14476a5c8(local_78,uVar7 & 0xffffffff);
        }
        puVar15 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar15 = local_78;
        }
        *(undefined8 **)(puVar15 + lVar18 * 8) = local_1b8;
        if (local_1b8 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_1b8 + 1) = *(int *)(local_1b8 + 1) + 1;
          UNLOCK();
          if (local_1b8 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_1b8 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_1b8)(local_1b8,1);
            }
          }
        }
        if (local_1b0 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_1b0 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_1b0)(local_1b0,1);
          }
        }
        if (local_1a8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_1a8 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_1a8)(local_1a8,1);
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar12 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
          LOCK();
          plVar14 = plVar12 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        FUN_141183afa(local_188);
        if (local_188 != 0) {
          FUN_1400020a8();
        }
      }
      uVar17 = uVar17 + 1;
      lVar23 = lVar23 + 0x10;
    } while (uVar20 != uVar17);
  }
  puVar4 = local_1d0;
  uVar3 = *(undefined8 *)(local_1d8 + 0x10);
  lVar23 = *(longlong *)(local_1d8 + 0x18);
  if (lVar23 != 0) {
    LOCK();
    *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
    UNLOCK();
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_178[0] = (code *)0x0;
  local_168 = (undefined8 *)FUN_14001cc68(0x30,8);
  *local_168 = &PTR_LAB_14a1761d0;
  local_168[1] = puVar22;
  local_168[2] = uVar3;
  local_168[3] = lVar23;
  local_168[4] = local_1f0;
  local_168[5] = plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  if (local_168 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_178[0] = FUN_142b1d520;
  }
  local_1f8 = 1;
  FUN_14014aede(&local_198,local_178);
  uVar3 = *puVar4;
  local_1c0 = local_198;
  if (local_198 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_198 + 1) = *(int *)(local_198 + 1) + 1;
    UNLOCK();
  }
  FUN_14002c244(uVar3,&local_1c0);
  if (local_198 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_198 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_198)(local_198,1);
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  puVar15 = local_78;
  if (local_58 != (undefined1 *)0x0) {
    puVar15 = local_58;
  }
  FUN_144717c65(puVar15,local_50 & 0xffffffff);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
LAB_14140e2d6:
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14140e32c FUN_14140e32c body=7 status=ok
// SIG undefined FUN_14140e32c(void)

undefined4 FUN_14140e32c(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x6d0);
}



// FUNCTION 14140e334 FUN_14140e334 body=682 status=ok
// SIG undefined FUN_14140e334(void)

void FUN_14140e334(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined4 local_50;
  longlong *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = FUN_140612812();
  if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x178) != 0)) {
    lVar8 = FUN_14030d660();
    lVar7 = *(longlong *)(lVar7 + 0x178);
    if ((lVar7 != 0) &&
       ((((lVar8 != 0 && (lVar3 = *(longlong *)(lVar7 + 0x10), lVar3 != 0)) &&
         (*(int *)(lVar8 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
         lVar8 + 0x30)))) {
      if (param_2 != '\0') {
        if (*(longlong *)(param_1 + 0x730) != 0) goto LAB_14140e3ac;
        local_58 = &LAB_144229a7c;
        local_50 = 0;
        FUN_146636508(&local_48,param_1);
        if (((local_40 == 0) || (local_48 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*local_48 + 0x30))(), cVar5 == '\0')) {
          if (local_40 == 0) {
            puVar10 = (undefined1 *)0x0;
            goto LAB_14140e571;
          }
          if (local_48 != (longlong *)0x0) {
            puVar10 = (undefined1 *)0x0;
            (**(code **)*local_48)(local_48,0);
            FUN_1446efa72(&local_48,0,0,0x10);
            goto LAB_14140e564;
          }
          puVar10 = (undefined1 *)0x0;
        }
        else {
          plVar1 = (longlong *)(lVar7 + 0x558);
          if (*(int *)(lVar7 + 0x56c) < 1) {
            iVar2 = *(int *)(lVar7 + 0x560);
            iVar6 = *(int *)(lVar7 + 0x568) + -1;
            *(int *)(lVar7 + 0x568) = iVar6;
            if (iVar6 <= iVar2) {
              iVar6 = iVar2;
              if (0 < iVar2) {
                iVar9 = 0;
                do {
                  if (((*(int *)(*plVar1 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                      (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar9 * 0x10),
                      plVar4 == (longlong *)0x0)) ||
                     (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
                    FUN_14005b288(plVar1,iVar9);
                    FUN_14005b248(plVar1);
                  }
                  else {
                    iVar9 = iVar9 + 1;
                  }
                  iVar6 = *(int *)(lVar7 + 0x560);
                } while (iVar9 < iVar6);
              }
              iVar9 = 2;
              if (2 < iVar6 * 2) {
                iVar9 = iVar6 * 2;
              }
              *(int *)(lVar7 + 0x568) = iVar9;
              if ((iVar9 < iVar2) && (*(int *)(lVar7 + 0x564) != iVar6)) {
                FUN_14045812c();
              }
            }
          }
          puVar10 = (undefined1 *)0x0;
          if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
            (**(code **)(*local_48 + 0x38))(local_48,&local_58);
            puVar10 = local_58;
          }
          iVar2 = *(int *)(lVar7 + 0x560);
          *(uint *)(lVar7 + 0x560) = iVar2 + 1U;
          if (*(uint *)(lVar7 + 0x564) < iVar2 + 1U) {
            FUN_1447a71f6(plVar1,iVar2);
          }
          lVar7 = *plVar1;
          lVar8 = (longlong)iVar2 * 0x10;
          *(undefined8 *)(lVar7 + lVar8) = 0;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          *(longlong **)(lVar7 + lVar8) = local_48;
          local_48 = (longlong *)0x0;
          *(int *)(lVar7 + 8 + lVar8) = local_40;
LAB_14140e564:
          local_40 = 0;
LAB_14140e571:
          if (local_48 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        *(undefined1 **)(param_1 + 0x730) = puVar10;
        goto LAB_14140e3ac;
      }
      if (*(longlong *)(param_1 + 0x730) == 0) goto LAB_14140e3ac;
      FUN_14480f766(lVar7 + 0x558);
    }
  }
  *(undefined8 *)(param_1 + 0x730) = 0;
LAB_14140e3ac:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14140e5e0 FUN_14140e5e0 body=111 status=ok
// SIG undefined FUN_14140e5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14140e5e0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cbd0058;
  if (DAT_14cbd0058 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x3500,0);
    lVar4 = 0x1f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x35;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cbd0058;
    DAT_14cbd0060 = DAT_14cbd0060 + 0x20;
  }
  DAT_14cbd0058 = (undefined8 *)*puVar2;
  _DAT_14cbd0064 = _DAT_14cbd0064 + 1;
  return;
}



// FUNCTION 14140e650 FUN_14140e650 body=580 status=ok
// SIG undefined FUN_14140e650(void)

void FUN_14140e650(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)((longlong)param_1 + 0x65) & 2) != 0) goto LAB_14140e714;
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    if (param_1[0x76] == 0) {
      pcVar2 = *(code **)(*param_1 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (((((*(int *)((longlong)param_1 + 0x75b4) == 0) ||
                (uVar1 = *(uint *)(param_1 + 0xeb6), (int)uVar1 < 0)) ||
               (DAT_14c9647dc <= (int)uVar1)) ||
              ((plVar6 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_1 + 0x75b4))
               ))) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_14140e714;
          if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
            lVar3 = *plVar6;
          }
          else {
            lVar3 = 0;
          }
          lVar3 = lVar3 + 0x110;
        }
        else {
          lVar3 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
        }
        if (lVar3 == 0) goto LAB_14140e714;
        lVar3 = *(longlong *)(lVar3 + 0x20);
      }
      else {
        lVar3 = (*pcVar2)(param_1);
      }
      if (lVar3 == 0) goto LAB_14140e714;
      lVar3 = *(longlong *)(lVar3 + 0x3b0);
      goto LAB_14140e761;
    }
  }
  else {
    lVar3 = (*pcVar2)(param_1);
LAB_14140e761:
    if (lVar3 == 0) goto LAB_14140e714;
  }
  lVar3 = FUN_1447210f0(param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_1400f6f32(lVar3);
    if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x68), lVar3 != 0)) && (param_1[0x76] != 0))
    {
      lVar4 = FUN_140082f10();
      if ((((param_1[0x76] != 0) && (lVar4 != 0)) &&
          (lVar5 = *(longlong *)(param_1[0x76] + 0x10), lVar5 != 0)) &&
         ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)))) {
        FUN_14042af24(lVar3,&local_2c);
        if (-1 < (short)local_2c) {
          lVar4 = param_1[0x78];
          if (lVar4 != 0) {
            lVar5 = FUN_1449f3324();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
               (*(longlong **)(lVar4 + 0xa08) != param_1)) goto LAB_14140e714;
          }
          FUN_14140eaa2(lVar3,&local_30,&local_2c,param_1);
          local_2c = local_30;
          FUN_14140e896(lVar3,&local_30,&local_2c,param_1[0x27f]);
        }
      }
    }
  }
LAB_14140e714:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14140e896 FUN_14140e896 body=152 status=ok
// SIG undefined FUN_14140e896(void)

undefined2 * FUN_14140e896(longlong param_1,undefined2 *param_2,ushort *param_3,longlong param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  longlong lVar4;
  
  uVar1 = *param_3;
  uVar2 = 0xffff;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar4 != 0) && (*(uint *)(lVar4 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar4 + 4)) {
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar4 + 2) * 8);
        } while (-1 < *(short *)(lVar4 + 4));
        if (lVar4 == 0) goto LAB_14140e91a;
      }
      if (*(longlong *)(lVar4 + 0x40) != param_4) {
        *(longlong *)(lVar4 + 0x40) = param_4;
        FUN_1414f506e(param_1,lVar4);
        FUN_141323fc0(param_1,lVar4,0x200);
      }
      uVar2 = *(undefined2 *)(lVar4 + 2);
      uVar3 = *(undefined2 *)(lVar4 + 8);
      goto LAB_14140e91c;
    }
  }
LAB_14140e91a:
  uVar3 = 0;
LAB_14140e91c:
  *param_2 = uVar2;
  param_2[1] = uVar3;
  return param_2;
}



// FUNCTION 14140e92e FUN_14140e92e body=370 status=ok
// SIG undefined FUN_14140e92e(void)

void FUN_14140e92e(longlong *param_1,char param_2,char param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)((longlong)param_1 + 99) & 8) != 0) {
    lVar4 = param_1[0xd];
    *(char *)(param_1 + 0xd) = param_2 + '\x01';
    if ((param_3 != '\0') && ((char)(param_2 + '\x01') != (char)lVar4)) {
      uVar1 = param_1[5];
      if (uVar1 < 0xffffffff00000000) {
        plVar8 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar8 = (longlong *)0x0;
        }
        (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar1,4);
      }
      else {
        uVar9 = (uint)uVar1;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
          puVar6 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar6 = DAT_14c998080;
          }
          if ((*(uint *)(puVar6 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
            lVar4 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
            puVar7 = *(uint **)(lVar4 + 0x18);
            if (*(uint **)(lVar4 + 0x18) == (uint *)0x0) {
              puVar7 = (uint *)(lVar4 + 8);
            }
            *puVar7 = *puVar7 | 0x10;
            *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) | 1;
          }
        }
      }
      FUN_140de30c6(param_1);
      uVar3 = (**(code **)(*param_1 + 0x488))(param_1);
      lVar4 = FUN_1405f1a34(uVar3);
      if (((lVar4 != 0) && (lVar5 = FUN_146f23e78(lVar4), lVar5 != 0)) &&
         (FUN_146f33cf2(lVar5,&local_28,param_1,0), local_28 != 0)) {
        uVar2 = FUN_146f45b3c(lVar4,local_28);
        local_38 = (char)param_1[0xd] == '\x02';
        FUN_146f46156(lVar4,local_28,0,uVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14140eaa2 FUN_14140eaa2 body=654 status=ok
// SIG undefined FUN_14140eaa2(void)

undefined2 * FUN_14140eaa2(longlong param_1,undefined2 *param_2,ushort *param_3,longlong *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  longlong lVar8;
  undefined2 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_3;
  uVar6 = 0xffff;
  if ((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 0x10))) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 8);
    if ((lVar8 != 0) && (*(uint *)(lVar8 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar8 + 4)) {
        do {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar8 + 2) * 8);
        } while (-1 < *(short *)(lVar8 + 4));
        if (lVar8 == 0) goto LAB_14140ec57;
      }
      if (((param_4 != (longlong *)0x0) && ((*(uint *)(param_4 + 1) >> 0x1e & 1) == 0)) &&
         ((*(byte *)((longlong)param_4 + 0x65) & 2) == 0)) {
        cVar5 = FUN_140cf9e2e((uint *)(lVar8 + 0x2c),param_4);
        if (cVar5 == '\0') {
          uVar3 = *(uint *)((longlong)param_4 + 0xc);
          *(uint *)(lVar8 + 0x2c) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          iVar7 = *(int *)(lVar11 + 0x10);
          if (*(int *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar12 = DAT_14c964868 + 1;
            bVar13 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar13) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar12);
            }
            LOCK();
            iVar7 = *(int *)(lVar11 + 0x10);
            bVar13 = iVar7 == 0;
            if (bVar13) {
              *(int *)(lVar11 + 0x10) = iVar12;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar13) {
              iVar7 = iVar12;
            }
          }
          *(int *)(lVar8 + 0x30) = iVar7;
          (**(code **)(*param_4 + 0x980))(param_4,&local_48);
          plVar10 = local_48;
          plVar1 = (longlong *)(lVar8 + 0x38);
          if (plVar1 == &local_48) {
LAB_14140ebe0:
            if (local_48 != (longlong *)0x0) {
              (**(code **)*local_48)(local_48,1);
            }
            plVar10 = (longlong *)*plVar1;
          }
          else {
            puVar4 = (undefined8 *)*plVar1;
            *plVar1 = (longlong)local_48;
            local_48 = (longlong *)0x0;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,1);
              goto LAB_14140ebe0;
            }
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 8))(plVar10,param_1,param_4);
          }
        }
        FUN_140cf9daa(param_1,&local_48,param_4);
        if ((-1 < (short)local_48) && ((int)(short)local_48 < *(int *)(param_1 + 0x10))) {
          lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + ((ulonglong)local_48 & 0xffff) * 8);
          if ((lVar11 != 0) && (*(uint *)(lVar11 + 8) == (uint)local_48._2_2_)) {
            for (; -1 < *(short *)(lVar11 + 4);
                lVar11 = *(longlong *)
                          (*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar11 + 2) * 8)) {
            }
            if ((lVar11 != 0) && (lVar11 != lVar8)) {
              lVar8 = FUN_143d9c13a(param_1,lVar8);
            }
          }
        }
        if (cVar5 == '\0') {
          if (4 < *(uint *)(lVar8 + 0x118)) {
            *(undefined4 *)(lVar8 + 0x118) = 4;
          }
          FUN_1414f506e(param_1,lVar8);
          FUN_141323fc0(param_1,lVar8,0x100);
        }
        uVar6 = *(undefined2 *)(lVar8 + 2);
        uVar9 = *(undefined2 *)(lVar8 + 8);
        goto LAB_14140ec59;
      }
    }
  }
LAB_14140ec57:
  uVar9 = 0;
LAB_14140ec59:
  *param_2 = uVar6;
  param_2[1] = uVar9;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14140f0d8 FUN_14140f0d8 body=323 status=ok
// SIG undefined FUN_14140f0d8(void)

longlong FUN_14140f0d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448ec792(param_1,&local_28);
  if (local_28 != 0) {
    iVar6 = *(int *)(param_1 + 0x58);
    if ((longlong)iVar6 < 0) {
      lVar5 = *(longlong *)(local_28 + 0x78);
      uVar8 = *(uint *)(local_28 + 0x80);
LAB_14140f1d5:
      if (uVar8 != 0) {
        lVar7 = (longlong)(int)uVar8 * 0x90 + lVar5;
        lVar4 = *(longlong *)(param_1 + 0x50);
        goto LAB_14140f18a;
      }
    }
    else {
      uVar8 = *(uint *)(local_28 + 0x80);
      lVar5 = *(longlong *)(local_28 + 0x78);
      if ((int)uVar8 <= iVar6) goto LAB_14140f1d5;
      lVar4 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(lVar5 + (longlong)iVar6 * 0x90) == lVar4) {
LAB_14140f13c:
        lVar5 = (longlong)iVar6 * 0x90 + lVar5;
        goto LAB_14140f14a;
      }
      lVar7 = (ulonglong)uVar8 * 0x90 + lVar5;
LAB_14140f18a:
      uVar9 = 0;
      do {
        if (*(longlong *)(lVar5 + uVar9) == lVar4) {
          iVar6 = (int)(uVar9 >> 4) * 0x38e38e39;
          *(int *)(param_1 + 0x58) = iVar6;
          if (iVar6 == -1) goto LAB_14140f215;
          lVar5 = *(longlong *)(local_28 + 0x78);
          goto LAB_14140f13c;
        }
        lVar3 = lVar5 + uVar9;
        uVar9 = uVar9 + 0x90;
      } while (lVar3 + 0x90 != lVar7);
    }
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  }
LAB_14140f215:
  lVar5 = 0;
LAB_14140f14a:
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14140f21c FUN_14140f21c body=847 status=ok
// SIG undefined FUN_14140f21c(void)

void FUN_14140f21c(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_168 [36];
  undefined1 local_144 [12];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined1 local_130 [15];
  char local_121;
  undefined8 local_120;
  undefined4 local_118;
  longlong local_110;
  ulonglong uStack_108;
  undefined4 local_100;
  char local_fc;
  undefined1 local_f8;
  undefined1 uStack_f7;
  undefined2 uStack_f6;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  longlong *local_e8 [2];
  longlong local_d8;
  longlong local_d0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined6 local_ae;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_80 [24];
  longlong local_68;
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_121 = param_2;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar2 = FUN_1447210f0();
    lVar3 = FUN_140149a73(lVar2,0);
    if (lVar3 != 0 && param_1 + 0x3c0 != 0) {
      local_120 = 0;
      local_118 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = *(undefined4 *)(param_1 + 0x750);
      local_fc = '\x01';
      FUN_144928b90(&local_90,1);
      local_58[0] = 0;
      local_54 = 0;
      local_4c = 0;
      FUN_1406f1bc8(param_1 + 0x3c0,&local_f8);
      local_90 = local_f8;
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      FUN_1404e49fa(local_80,local_e8);
      local_8f = uStack_f7;
      uStack_f7 = 0;
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      lVar4 = (longlong)*(int *)(param_1 + 0x4f0 + (longlong)param_2 * 0x10);
      if (lVar4 != 0) {
        plVar5 = *(longlong **)(param_1 + 0x4e8 + (longlong)param_2 * 0x10);
        plVar6 = plVar5 + lVar4 * 3;
        do {
          if (((*plVar5 != 0) && (lVar4 = plVar5[1], lVar4 != 0)) &&
             (iVar1 = FUN_148dc5a5e(param_1,plVar5), iVar1 != 0)) {
            local_f8 = (undefined1)lVar4;
            uStack_f7 = (undefined1)((ulonglong)lVar4 >> 8);
            uStack_f6 = (undefined2)((ulonglong)lVar4 >> 0x10);
            uStack_f4 = (undefined4)((ulonglong)lVar4 >> 0x20);
            FUN_1401533ba(local_130,&local_f8,1);
            FUN_144928d62(local_80,5,local_130);
            FUN_144976b9c(local_58,plVar5[2]);
            if (0 < iVar1) {
              iVar7 = 0;
              do {
                FUN_146632800(&local_138,plVar5,iVar7);
                local_f8 = (undefined1)local_138;
                uStack_f7 = (undefined1)((uint)local_138 >> 8);
                uStack_f6 = (undefined2)((uint)local_138 >> 0x10);
                uStack_f4 = uStack_134;
                FUN_1401533ba(local_144,&local_f8,1);
                FUN_144928d62(local_80,4,local_144);
                FUN_1461dc90a(&local_120,&local_90);
                iVar7 = iVar7 + 1;
              } while (iVar1 != iVar7);
            }
          }
          plVar5 = plVar5 + 3;
        } while (plVar5 != plVar6);
        if (0 < (longlong)(int)uStack_108) {
          local_138 = local_100;
          if (local_fc == '\0') {
            local_138 = 0xc69c4000;
          }
          local_f8 = 0;
          uStack_f7 = 0;
          uStack_f6 = 0;
          uStack_f4 = 0;
          local_e8[0] = (longlong *)0x0;
          uStack_a0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          local_ae = 0;
          uStack_a8 = SUB82(&local_138,0);
          uStack_a6 = (undefined6)((ulonglong)&local_138 >> 0x10);
          lVar4 = local_110 + (longlong)(int)uStack_108 * 0x48;
          lVar8 = local_110;
          do {
            FUN_140bc53f1(lVar8,lVar8 + 0x38,lVar3,&local_f8);
            lVar8 = lVar8 + 0x48;
          } while (lVar8 != lVar4);
          if (CONCAT44(uStack_f4,CONCAT22(uStack_f6,CONCAT11(uStack_f7,local_f8))) != 0) {
            plVar5 = local_e8[0];
            if (local_e8[0] == (longlong *)0x0) {
              plVar5 = &local_d8;
            }
            (**(code **)(*plVar5 + 0x10))();
          }
        }
      }
      if (((lVar2 != 0) && (lVar2 = FUN_1400f6e0c(lVar2), lVar2 != 0)) &&
         (*(longlong *)(lVar2 + 0xc0) != 0)) {
        FUN_145723226(*(longlong *)(lVar2 + 0xc0),param_1,&local_121);
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_fc == '\x01') {
        local_fc = '\0';
      }
      FUN_14654d34a(local_110,uStack_108 & 0xffffffff);
      if (local_110 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14140f56c FUN_14140f56c body=1534 status=ok
// SIG undefined FUN_14140f56c(void)

void FUN_14140f56c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_28 = 0;
  uStack_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_28);
    }
  }
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  iVar4 = local_2c;
  uStack_30 = uStack_30 & 0xffffff;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,(longlong)&uStack_30 + 3);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,(longlong)&uStack_30 + 3);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,(longlong)&uStack_30 + 3);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30._3_1_ = (undefined1)uVar2;
      local_2c = (int)((ulonglong)uVar2 >> 8);
      uStack_28._0_3_ = (undefined3)((ulonglong)uVar2 >> 0x28);
    }
    else {
      (*pcVar3)(uVar2,param_2,(longlong)&uStack_30 + 3);
    }
  }
  local_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_34 = (int)uVar2;
      uStack_30 = (uint)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_34);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = CONCAT71(local_58._1_7_,local_34 != 0);
  FUN_14140fb6c(param_1,CONCAT44(uStack_24,uStack_28),iVar4 != 0,uStack_30._3_1_);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14140fb6c FUN_14140fb6c body=147 status=ok
// SIG undefined FUN_14140fb6c(void)

void FUN_14140fb6c(longlong *param_1,undefined8 param_2,char param_3,undefined1 param_4,char param_5
                  )

{
  if ((char)param_1[0x2f] != '\x03') {
    return;
  }
  (**(code **)(*param_1 + 0x708))();
  FUN_14485c47a((longlong)param_1 + 0x16d4,param_2);
  *(undefined1 *)(param_1 + 0x3bf) = 0;
  *(undefined1 *)(param_1 + 0x2e6) = 0;
  *(undefined1 *)(param_1 + 0x2df) = 0;
  if (param_3 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x16d2) = param_4;
  }
  if (param_5 != '\0') {
    FUN_14485c47a((longlong)param_1 + 0x16fc,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00014140fbe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x710))(param_1);
  return;
}



// FUNCTION 14140fc00 FUN_14140fc00 body=120 status=ok
// SIG undefined FUN_14140fc00(void)

longlong FUN_14140fc00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x44);
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
    return local_28 + 0x650;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14140fc7a FUN_14140fc7a body=1327 status=ok
// SIG undefined FUN_14140fc7a(void)

void FUN_14140fc7a(undefined8 param_1,undefined8 param_2,void *param_3,undefined2 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_178 [32];
  undefined1 **local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [200];
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 *local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_148 = param_1;
  local_140 = param_2;
  memcpy(local_138,param_3,200);
  local_70 = *param_4;
  local_6e = *(undefined1 *)(param_4 + 1);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14140fcef;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14140fcf4;
      goto LAB_14140fd25;
    }
  }
  else {
LAB_14140fcef:
    if (iVar6 != 0x10) {
LAB_14140fd25:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14140fcf4;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14140fcf4;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14140febf;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14379017d);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_14140febf:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x31);
          uVar13 = puVar11[0x12];
          if (puVar14 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x31);
            uVar13 = 0;
            if (puVar14 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_14140ff3f;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14140ff3f:
        *(uint **)(puVar11 + 0x10) = puVar14;
        puVar11[0x12] = uVar13;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14ab08458;
        memcpy(puVar16 + 0x15,&local_148,0xe0);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_68[0] = (undefined1 *)0x0;
        plVar9 = (longlong *)FUN_14001cc68(0xe8,8);
        *plVar9 = (longlong)&PTR_LAB_14ab083e0;
        local_58 = plVar9;
        memcpy(plVar9 + 1,&local_148,0xe0);
        if (plVar9 != (longlong *)&DAT_fffffffffffffff8) {
          local_68[0] = &LAB_14122f478;
        }
        local_158 = local_68;
        FUN_14005a792(&DAT_14ca9a440,L"FRuntimeVirtualTextureRenderResource_Init",&DAT_14cb10518);
        if (local_68[0] != (undefined1 *)0x0) {
          plVar9 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar9 = local_48;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      goto LAB_14140fdfa;
    }
  }
LAB_14140fcf4:
  FUN_14122f47e(&local_148,&DAT_14ca85100);
LAB_14140fdfa:
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414101aa FUN_1414101aa body=228 status=ok
// SIG undefined FUN_1414101aa(void)

longlong FUN_1414101aa(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb46d48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459950bc;
    local_38 = &LAB_1483e17c5;
    local_40 = &LAB_145850f5b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Water",L"GerstnerWaterWaves",&DAT_14cb46d48,&DAT_1483e17c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46d48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414102aa FUN_1414102aa body=4320 status=ok
// SIG undefined FUN_1414102aa(void)

void FUN_1414102aa(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_688 [32];
  undefined8 *local_668;
  undefined8 *local_660;
  undefined8 local_658;
  code *local_650;
  int local_644;
  undefined8 local_640;
  undefined8 local_638 [12];
  undefined8 local_5d8 [12];
  undefined8 local_578 [9];
  ulonglong local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  int local_50c;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined1 local_4f4;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  uint local_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined2 local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_48c;
  undefined4 local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 local_468;
  undefined8 local_460;
  uint local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined2 local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined8 local_424;
  undefined4 local_418;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined **local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0 [13];
  undefined8 local_368;
  undefined4 local_360;
  undefined8 local_358;
  undefined1 auStack_350 [48];
  undefined8 local_320;
  undefined4 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined8 auStack_2a8 [9];
  undefined **local_260;
  undefined *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  int local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined **local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 local_208 [4];
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined1 auStack_188 [48];
  undefined1 *local_158;
  ulonglong local_150;
  undefined4 local_148;
  uint local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 auStack_e0 [3];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_ac;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined **local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_688;
  local_228 = &PTR_FUN_14b32b680;
  local_220 = 0;
  local_218 = 0x34001;
  local_210 = 0;
  local_208[0] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_208[1] = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_208[2] = DAT_14c8464f0;
  local_1e0 = DAT_14c8464f0;
  local_1c8 = DAT_14c8464f0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0x3002;
  local_190 = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x200000000;
  local_148 = 0;
  local_140 = local_140 & 0xffffff00;
  uStack_13c = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_128 = 0xf00000d0;
  local_120 = 0;
  local_118 = 0;
  uStack_114 = uStack_114 & 0xffffff00;
  auStack_e0[1] = 0;
  auStack_e0[2] = 0;
  local_e8 = 0;
  auStack_e0[0] = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_c8 = (undefined4)DAT_14c8464e0;
  uStack_c4 = DAT_14c8464e0._4_4_;
  uStack_c0 = (undefined4)DAT_14c8464e8;
  uStack_bc = DAT_14c8464e8._4_4_;
  local_b8 = DAT_14c8464f0;
  local_b0 = 0;
  local_ac = 0xbf80000000000000;
  local_a4 = 0;
  local_a0 = 0;
  local_208[3] = local_208[0];
  uStack_1e8 = local_208[1];
  local_1d8 = local_208[0];
  uStack_1d0 = local_208[1];
  FUN_1405c5fa2();
  local_90 = &DAT_14cb769e8;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = &PTR_FUN_14b0394b0;
  uStack_64 = 0;
  local_78 = 0;
  iStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = (uint)uStack_68._3_1_ << 0x18;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_658 = FUN_1446ddbd2();
      local_650 = FUN_1403a682c;
      local_660 = (undefined8 *)0x0;
      local_668 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_228);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_228);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_228);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_228 = *(undefined ***)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_228);
    }
  }
  local_3f8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_658 = FUN_1446ddbd2();
      local_650 = FUN_1468d96f0;
      local_660 = (undefined8 *)0x0;
      local_668 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3f8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_3f8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_3f8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_3f8 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3f8);
    }
  }
  local_458 = local_458 & 0xffffff00;
  uStack_454 = 0;
  uStack_450 = 0;
  local_448 = 0;
  local_440 = DAT_14c8464f8;
  uStack_438 = DAT_14c846500;
  local_430 = DAT_14c846508;
  local_428 = 0;
  local_424 = 0;
  local_418 = 0;
  local_410 = (undefined4)DAT_14c8464e0;
  uStack_40c = DAT_14c8464e0._4_4_;
  uStack_408 = (undefined4)DAT_14c8464e8;
  uStack_404 = DAT_14c8464e8._4_4_;
  local_400 = DAT_14c8464f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_658 = FUN_1446ddbd2();
      local_650 = FUN_1403a682c;
      local_660 = (undefined8 *)0x0;
      local_668 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_458);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_458);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_458);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_458 = (uint)uVar2;
      uStack_454 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_458);
    }
  }
  local_460 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_658 = FUN_1446ddbd2();
      local_650 = FUN_1468d96f0;
      local_660 = (undefined8 *)0x0;
      local_668 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_460);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_460);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_460);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_460 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_460);
    }
  }
  local_4c0 = local_4c0 & 0xffffff00;
  uStack_4bc = 0;
  uStack_4b8 = 0;
  local_4b0 = 0;
  local_4a8 = DAT_14c8464f8;
  uStack_4a0 = DAT_14c846500;
  local_498 = DAT_14c846508;
  local_490 = 0;
  local_48c = 0;
  local_480 = 0;
  local_478 = (undefined4)DAT_14c8464e0;
  uStack_474 = DAT_14c8464e0._4_4_;
  uStack_470 = (undefined4)DAT_14c8464e8;
  uStack_46c = DAT_14c8464e8._4_4_;
  local_468 = DAT_14c8464f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_658 = FUN_1446ddbd2();
      local_650 = FUN_1403a682c;
      local_660 = (undefined8 *)0x0;
      local_668 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_4c0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_4c0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_4c0 = (uint)uVar2;
      uStack_4bc = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_4c0);
    }
  }
  uStack_508._0_4_ = 0;
  uStack_508._4_4_ = uStack_508._4_4_ & 0xffffff00;
  local_500 = 0xbf80000000000000;
  local_4f8 = 0xc4750000;
  local_4f4 = 0;
  local_4f0 = 0;
  uStack_4e8 = 0;
  local_4e0 = 0;
  uStack_4d8 = 0;
  local_4d0 = 0;
  uStack_4c8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_658 = FUN_1446ddbd2();
      local_650 = FUN_1403a682c;
      local_660 = (undefined8 *)0x0;
      local_668 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_508);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_508);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_508);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_508._0_4_ = (undefined4)uVar2;
      uStack_508._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_508);
    }
  }
  local_50c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_658 = FUN_1446ddbd2();
      local_650 = FUN_14067a048;
      local_660 = (undefined8 *)0x0;
      local_668 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_50c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_50c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_50c = (int)uVar2;
      uStack_508._0_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_50c);
    }
  }
  local_530 = local_530 & 0xffffffffffffff00;
  local_518 = DAT_14c8464f0;
  local_528 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_520 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  local_644 = local_50c;
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_530);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_530);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_530);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_530 = *(ulonglong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_530);
    }
  }
  puVar4 = *(ulonglong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar10 = &uStack_508;
  puVar11 = local_578;
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = &local_4c0;
  puVar10 = local_5d8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *(undefined8 *)puVar9;
    puVar9 = puVar9 + 2;
    puVar10 = puVar10 + 1;
  }
  local_640 = local_460;
  puVar9 = &local_458;
  puVar10 = local_638;
  for (lVar7 = 0xc; uVar2 = local_3f8, lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *(undefined8 *)puVar9;
    puVar9 = puVar9 + 2;
    puVar10 = puVar10 + 1;
  }
  local_3f0 = &PTR_FUN_14b32b680;
  local_3e8 = local_220;
  local_3e0 = local_218;
  local_3d8 = 0;
  puVar10 = local_208;
  puVar11 = local_3d0;
  for (lVar7 = 0xd; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_368 = local_1a0;
  local_360 = local_198;
  local_358 = 0;
  local_320 = 0;
  puVar8 = auStack_188;
  if (local_158 != (undefined1 *)0x0) {
    puVar8 = local_158;
  }
  FUN_1400709d4(auStack_350,puVar8,local_150 & 0xffffffff,0);
  local_310 = local_148;
  local_300 = uStack_138;
  local_308 = CONCAT44(uStack_13c,local_140);
  local_2f8 = local_130;
  local_2f0 = local_128;
  local_2e8 = 0;
  local_2e0 = CONCAT44(uStack_114,local_118);
  uStack_2d8 = uStack_110;
  local_2d0 = (undefined4)uStack_108;
  uStack_2cc = uStack_108._4_4_;
  uStack_2c8 = (undefined4)uStack_100;
  uStack_2c4 = uStack_100._4_4_;
  local_2c0 = uStack_f8;
  local_2b8 = local_f0;
  local_2b0 = 0;
  puVar10 = auStack_e0;
  puVar11 = auStack_2a8;
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_260 = (undefined **)&DAT_14a171d50;
  local_250 = 0;
  uStack_248 = 0;
  local_258 = local_90;
  FUN_1406022fe(&local_250,&local_88);
  iVar6 = iStack_70;
  uVar5 = local_78;
  local_260 = &PTR_FUN_14b0394b0;
  local_240 = 0;
  local_238 = iStack_70;
  if (iStack_70 == 0) {
    local_234 = 0;
  }
  else {
    FUN_1403e11c4(&local_240,iStack_70,0);
    FUN_1403e103e(local_240,uVar5,iVar6);
  }
  local_650 = (code *)&local_530;
  if (puVar4 != (ulonglong *)0x0) {
    local_650 = (code *)puVar4;
  }
  local_230 = CONCAT44(uStack_64,uStack_68);
  local_658 = CONCAT71(local_658._1_7_,local_644 != 0);
  local_660 = local_578;
  local_668 = local_5d8;
  FUN_14141138c(&local_3f0,uVar2,local_638,local_640);
  FUN_140bba396(&local_228);
  if ((local_60 ^ (ulonglong)auStack_688) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141138c FUN_14141138c body=1311 status=ok
// SIG undefined FUN_14141138c(void)

void FUN_14141138c(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  char *param_5,longlong param_6,char param_7,undefined8 param_8)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_148 [32];
  char *local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  float local_d8 [2];
  longlong local_d0;
  undefined1 local_c8 [24];
  double local_b0;
  double local_a8;
  double local_a0;
  float local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_d0 = param_4;
  if ((((param_2 != 0) && (lVar5 = FUN_1447210f0(param_2), lVar5 != 0)) &&
      (iVar4 = FUN_14490d72a(lVar5), iVar4 != 3)) &&
     (lVar6 = FUN_1403d77ae(param_1 + 8), lVar6 != 0)) {
    if (((*(char *)(param_6 + 0x14) == '\x01') && (*(float *)(param_6 + 0x10) == 0.0)) &&
       ((!NAN(*(float *)(param_6 + 0x10)) && (*(float *)(param_6 + 8) <= 0.0)))) {
      *(undefined4 *)(param_6 + 8) = *(undefined4 *)(lVar6 + 0x2d4);
    }
    FUN_140d4f03f(&local_120,param_2,param_3,param_8);
    *(undefined8 *)(param_1 + 0x30) = local_110;
    *(undefined4 *)(param_1 + 0x20) = local_120;
    *(undefined4 *)(param_1 + 0x24) = uStack_11c;
    *(undefined4 *)(param_1 + 0x28) = uStack_118;
    *(undefined4 *)(param_1 + 0x2c) = uStack_114;
    local_128 = param_5;
    FUN_14133f9d4(&local_120,param_2,param_1 + 0x20,&local_d0);
    FUN_14125d732(param_6,local_c8,&local_120);
    pfVar7 = (float *)(param_6 + 0x10);
    if (*(char *)(param_6 + 0x14) == '\0') {
      pfVar7 = local_d8;
    }
    fVar1 = *pfVar7;
    *(undefined8 *)(param_1 + 0x30) = local_110;
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_11c,local_120);
    *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_114,uStack_118);
    dVar3 = local_a0 * local_a0 + local_b0 * local_b0 + local_a8 * local_a8;
    if (((dVar3 != 1.0) || (dVar13 = local_b0, dVar11 = local_a8, dVar12 = local_a0, NAN(dVar3))) &&
       (dVar13 = DAT_14c8464e0, dVar11 = DAT_14c8464e8, dVar12 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar3)) {
      dVar13 = 1.0 / SQRT(dVar3);
      dVar12 = local_a0 * dVar13;
      dVar11 = local_a8 * dVar13;
      dVar13 = local_b0 * dVar13;
    }
    *(double *)(param_1 + 0x38) = dVar13;
    *(double *)(param_1 + 0x40) = dVar11;
    *(double *)(param_1 + 0x48) = dVar12;
    uVar10 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x74) = uVar10;
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar10 = -(uint)(fVar1 != 0.0);
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar6 + 0x10) = iVar8;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar8;
      }
    }
    *(int *)(param_1 + 0x78) = iVar4;
    if (param_7 != '\0') {
      uVar2 = *(uint *)(param_2 + 0xc);
      *(uint *)(param_1 + 0x6c) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(lVar6 + 0x10) = iVar8;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar4 = iVar8;
        }
      }
      *(int *)(param_1 + 0x70) = iVar4;
    }
    if ((*(int *)(param_1 + 0x80) == 0) && (*(int *)(param_1 + 0x84) == 0)) {
      uVar2 = *(uint *)(param_2 + 0xc);
      *(uint *)(param_1 + 0x80) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(lVar6 + 0x10) = iVar8;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar4 = iVar8;
        }
      }
      *(int *)(param_1 + 0x84) = iVar4;
    }
    if (local_d0 == 0) {
      *(undefined4 *)(param_1 + 0x148) = 0;
      iVar4 = 0;
    }
    else {
      uVar2 = *(uint *)(local_d0 + 0xc);
      *(uint *)(param_1 + 0x148) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(lVar6 + 0x10) = iVar8;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar4 = iVar8;
        }
      }
    }
    *(int *)(param_1 + 0x14c) = iVar4;
    if (*param_5 == '\x01') {
      *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_5 + 4);
    }
    *(undefined1 *)(param_1 + 0x179) = 2;
    *(float *)(param_1 + 0x17c) = (float)SQRT(dVar3);
    *(uint *)(param_1 + 0x180) = ~uVar10 & 0x3f800000 | (uint)(local_98 / fVar1) & uVar10;
    FUN_141142006(lVar5,param_1);
  }
  FUN_140bba396(param_1);
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414118ac FUN_1414118ac body=11 status=ok
// SIG undefined FUN_1414118ac(void)

void FUN_1414118ac(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_14afb8328;
  return;
}



// FUNCTION 1414118b8 FUN_1414118b8 body=565 status=ok
// SIG undefined FUN_1414118b8(void)

void FUN_1414118b8(longlong param_1,char param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [40];
  longlong local_d0 [16];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    if (param_2 == '\0') {
      iVar3 = *(int *)(param_1 + 0x230);
      if ((longlong)iVar3 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x228);
        lVar6 = 0;
        do {
          lVar5 = *(longlong *)(lVar4 + 8 + lVar6);
          if (lVar5 != 0) {
            FUN_1449e3cec(lVar5,*(undefined1 *)(lVar4 + lVar6),1);
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)iVar3 * 0x10 != lVar6);
      }
      *(undefined4 *)(param_1 + 0x230) = 0;
      if (*(int *)(param_1 + 0x234) < 0) {
        FUN_148cdde26(param_1 + 0x228,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
    }
    local_50 = (longlong *)0x0;
    local_48 = 0x1000000000;
    FUN_145983014(*(longlong *)(param_1 + 0x48),local_d0);
    plVar7 = local_50;
    if (local_50 == (longlong *)0x0) {
      plVar7 = local_d0;
    }
    if ((longlong)(int)local_48 != 0) {
      plVar1 = plVar7 + (int)local_48;
      do {
        lVar4 = *plVar7;
        if (lVar4 != 0) {
          if ((DAT_14cbc2ce0 != 0) && ((longlong)*(int *)(lVar4 + 0x78) != 0)) {
            lVar6 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0x70) + lVar6) == DAT_14cbc2ce0)
              goto LAB_141411a51;
              lVar6 = lVar6 + 8;
            } while ((longlong)*(int *)(lVar4 + 0x78) * 8 != lVar6);
          }
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar4);
          }
          bVar2 = *(byte *)(lVar4 + 0x1f9);
          iVar3 = *(int *)(param_1 + 0x230);
          *(uint *)(param_1 + 0x230) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x234) < iVar3 + 1U) {
            FUN_1459830a6((longlong *)(param_1 + 0x228),iVar3);
          }
          lVar6 = *(longlong *)(param_1 + 0x228);
          *(byte *)(lVar6 + (longlong)iVar3 * 0x10) = bVar2 >> 3 & 1;
          *(longlong *)(lVar6 + 8 + (longlong)iVar3 * 0x10) = lVar4;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar4);
          }
          FUN_1449e3cec(lVar4,1);
        }
LAB_141411a51:
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
    FUN_141411b10(*(undefined8 *)(param_1 + 0x48),DAT_14cbc2cd0,1,0);
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141411b10 FUN_141411b10 body=328 status=ok
// SIG undefined FUN_141411b10(void)

void FUN_141411b10(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    if (DAT_14cb94538 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148a18249;
      local_60 = FUN_14657713c;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar1 = (longlong *)FUN_144718840(param_1,DAT_14cb94538);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
      local_88 = CONCAT31(local_88._1_3_,param_4);
      FUN_140e16d82(uVar2,param_2,1,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141411c5a FUN_141411c5a body=946 status=ok
// SIG undefined FUN_141411c5a(void)

void FUN_141411c5a(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong local_88;
  longlong *local_80;
  int local_74;
  longlong local_70;
  code *local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_70 = param_1 + 0x250;
  local_68 = (code *)0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_80 = param_2;
  local_60 = local_70;
  if (*(int *)(param_1 + 0x268) == 0) {
    uVar9 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar10 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = (ulonglong)local_68 >> 0x20;
    iVar10 = *(int *)(param_1 + 0x268);
  }
  lVar3 = local_60;
  plVar13 = local_80;
  iVar5 = (int)local_68;
  uVar7 = (uint)local_58;
  iVar4 = local_58._4_4_;
  iVar14 = local_50;
  if (local_58._4_4_ != iVar10 || local_60 != local_70) {
    do {
      local_74 = iVar10;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
      if (lVar12 != 0) {
        lVar8 = *plVar13;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          local_88 = param_1;
          FUN_1456cec3c(lVar8);
          param_1 = local_88;
          plVar13 = local_80;
LAB_141411d6c:
          if (DAT_14cad00c8 == 0) {
            local_68 = FUN_144a7958c;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_14081d0ea;
            local_a0 = &local_68;
            local_a8 = &LAB_1479b7a0c;
            local_b0 = &LAB_1463b464e;
            local_b8 = L"Engine";
            local_c0 = 0;
            local_c8 = 0x10000005;
            local_d0 = 8;
            local_d8 = 0x110;
            local_88 = param_1;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            param_1 = local_88;
            plVar13 = local_80;
            if (DAT_14cad00c8 == 0) goto LAB_141411f9b;
          }
          if (*(int *)(lVar8 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_141411f9b;
          if (*(longlong *)
               (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar8 = 0;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_141411d6c;
LAB_141411f9b:
          lVar8 = 0;
        }
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
          iVar10 = *(int *)(param_3 + 0x88);
          *(uint *)(param_3 + 0x88) = iVar10 + 1U;
          if (*(uint *)(param_3 + 0x8c) < iVar10 + 1U) {
            local_88 = param_1;
            FUN_145983282(param_3,iVar10);
            param_1 = local_88;
            plVar13 = local_80;
          }
          lVar8 = *(longlong *)(param_3 + 0x80);
          if (*(longlong *)(param_3 + 0x80) == 0) {
            lVar8 = param_3;
          }
          *(longlong *)(lVar8 + (longlong)iVar10 * 8) = lVar12;
        }
      }
      uVar7 = uVar7 & ~(uint)uVar9;
      lVar12 = *(longlong *)(lVar3 + 0x10);
      if (*(longlong *)(lVar3 + 0x10) == 0) {
        lVar12 = lVar3;
      }
      iVar10 = *(int *)(lVar3 + 0x18);
      lVar8 = (longlong)iVar5;
      uVar6 = *(uint *)(lVar12 + lVar8 * 4) & uVar7;
      if (uVar6 == 0) {
        iVar4 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar4 = iVar10 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar2 = iVar4;
        if (iVar4 < iVar5) {
          iVar2 = iVar5;
        }
        if (iVar5 < iVar4) {
          lVar11 = 0;
          do {
            uVar6 = *(uint *)(lVar12 + lVar8 * 4 + 4 + lVar11 * 4);
            if (uVar6 != 0) {
              iVar5 = iVar5 + (int)lVar11 + 1;
              uVar7 = 0xffffffff;
              goto LAB_141411e58;
            }
            iVar14 = iVar14 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar2 - lVar8 != lVar11);
          uVar7 = 0xffffffff;
          iVar5 = iVar2;
        }
        iVar5 = iVar5 + 1;
        plVar13 = local_80;
        iVar4 = iVar10;
      }
      else {
LAB_141411e58:
        uVar9 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar4) {
          iVar4 = iVar10;
        }
      }
      iVar10 = local_74;
    } while (iVar4 != local_74 || lVar3 != local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14141200e FUN_14141200e body=104 status=ok
// SIG undefined FUN_14141200e(void)

void FUN_14141200e(longlong param_1)

{
  longlong *_Dst;
  ulonglong uVar1;
  
  if ((DAT_14c75f464 == '\x01') && (0 < (int)DAT_14c9997a8)) {
    _Dst = &DAT_14c9996e8;
    uVar1 = 0;
    do {
      if (*_Dst == param_1) {
        if (DAT_14c9997a8 - 1 != (int)uVar1) {
          memmove(_Dst,_Dst + 3,(longlong)(int)((DAT_14c9997a8 - 1) - (int)uVar1) * 0x18);
        }
        DAT_14c9997a8 = DAT_14c9997a8 - 1;
        return;
      }
      uVar1 = uVar1 + 1;
      _Dst = _Dst + 3;
    } while (DAT_14c9997a8 != uVar1);
  }
  return;
}



// FUNCTION 141412076 FUN_141412076 body=457 status=ok
// SIG undefined FUN_141412076(void)

void FUN_141412076(void)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  
  iVar2 = DAT_14caf5fe8;
  if (DAT_14caf5fe8 == 0) {
    uVar16 = 1;
    uVar10 = 0;
    iVar12 = 0;
    iVar7 = 0;
  }
  else {
    puVar15 = &DAT_14caf5fd0;
    if (DAT_14caf5fe0 != (uint *)0x0) {
      puVar15 = DAT_14caf5fe0;
    }
    uVar11 = *puVar15;
    if (uVar11 == 0) {
      iVar12 = DAT_14caf5fe8 + 0x1e;
      if (-1 < DAT_14caf5fe8 + -1) {
        iVar12 = DAT_14caf5fe8 + -1;
      }
      uVar10 = 0;
      uVar8 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar8 = uVar10;
      }
      iVar12 = 0;
      do {
        if (uVar8 == uVar10) goto LAB_14141210b;
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar15[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar10 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar16 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar7 = (iVar12 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (DAT_14caf5fe8 <= iVar7) {
      iVar7 = DAT_14caf5fe8;
    }
  }
  if (iVar7 != DAT_14caf5fe8) {
    uVar11 = 0xffffffff;
    lVar3 = DAT_14caf5fc0;
    iVar9 = DAT_14caf5fe8;
    do {
      puVar1 = *(undefined8 **)(lVar3 + 8 + (longlong)iVar7 * 0x18);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        lVar3 = DAT_14caf5fc0;
        iVar9 = DAT_14caf5fe8;
      }
      uVar11 = uVar11 & ~(uint)uVar16;
      puVar15 = DAT_14caf5fe0;
      if (DAT_14caf5fe0 == (uint *)0x0) {
        puVar15 = &DAT_14caf5fd0;
      }
      iVar7 = (int)uVar10;
      lVar13 = (longlong)iVar7;
      uVar4 = puVar15[lVar13] & uVar11;
      if (uVar4 == 0) {
        iVar5 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar5 = iVar9 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar7 < iVar5) {
          lVar14 = 0;
          do {
            uVar4 = puVar15[lVar13 + lVar14 + 1];
            if (uVar4 != 0) {
              uVar10 = (ulonglong)(iVar7 + (int)lVar14 + 1);
              uVar11 = 0xffffffff;
              goto LAB_1414121e9;
            }
            iVar12 = iVar12 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar6 - lVar13 != lVar14);
          uVar11 = 0xffffffff;
          lVar13 = (longlong)iVar6;
        }
        uVar10 = lVar13 + 1U & 0xffffffff;
        iVar7 = iVar9;
      }
      else {
LAB_1414121e9:
        uVar16 = (ulonglong)(-uVar4 & uVar4);
        uVar8 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar7) {
          iVar7 = iVar9;
        }
      }
    } while (iVar7 != iVar2);
  }
LAB_14141210b:
  FUN_1463f1604();
  if (DAT_14caf59f8 == 0) {
    return;
  }
  FUN_14480f766(&DAT_14c867408);
  return;
}



// FUNCTION 141412240 FUN_141412240 body=473 status=ok
// SIG undefined FUN_141412240(void)

void FUN_141412240(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
  }
  plVar7 = local_60;
  iVar16 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_141412383;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_141412383:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141241a FUN_14141241a body=62 status=ok
// SIG undefined FUN_14141241a(void)

void FUN_14141241a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141412458 FUN_141412458 body=473 status=ok
// SIG undefined FUN_141412458(void)

void FUN_141412458(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
  }
  plVar7 = local_60;
  iVar16 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar9 * 0x28);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_14141259b;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_14141259b:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141412632 FUN_141412632 body=183 status=ok
// SIG undefined FUN_141412632(void)

void FUN_141412632(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 == 0)) {
    return;
  }
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar4 = FUN_145c2bba6();
    lVar6 = FUN_14477b664(uVar4);
    param_2[1] = lVar6;
  }
  lVar5 = param_2[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar6 == 0)) || (*param_2 == 0)) goto LAB_1414126ac;
  plVar2 = *(longlong **)(lVar6 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_1414126e5:
    lVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_1414126e5;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_2);
  }
  param_2[2] = lVar5;
LAB_1414126ac:
  FUN_143e306f0(lVar1 + 0x78,lVar5,param_3);
  return;
}



// FUNCTION 1414126ea FUN_1414126ea body=66 status=ok
// SIG undefined FUN_1414126ea(void)

void FUN_1414126ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b97d940;
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_146558af2(param_1);
  return;
}



// FUNCTION 14141272c FUN_14141272c body=1280 status=ok
// SIG undefined FUN_14141272c(void)

void FUN_14141272c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  undefined8 uVar14;
  double *pdVar15;
  undefined4 uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined1 auStack_2a8 [32];
  ulonglong *local_288;
  undefined1 local_280 [104];
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d8;
  double local_1d0;
  ulonglong local_1b8 [2];
  longlong local_1a8;
  undefined4 local_190;
  undefined1 local_188;
  byte local_186;
  undefined4 local_184;
  longlong local_178;
  longlong *local_168;
  longlong local_158 [4];
  undefined1 local_138 [24];
  longlong local_120;
  ulonglong local_60;
  ulonglong *puVar19;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar1 = param_1 + -0x400;
  FUN_14101c080();
  plVar2 = (longlong *)*param_2;
  if (plVar2 == (longlong *)0x0) {
LAB_141412781:
    plVar18 = (longlong *)0x0;
  }
  else {
    lVar11 = (**(code **)(*plVar2 + 8))();
    lVar12 = FUN_14598450e();
    if ((lVar12 == 0) || (*(int *)(lVar11 + 0x38) < *(int *)(lVar12 + 0x38))) goto LAB_141412781;
    plVar18 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
        lVar12 + 0x30) {
      plVar18 = plVar2;
    }
  }
  *(longlong **)(param_1 + 0x21f8) = plVar18;
  FUN_140655f5e(param_1,param_2);
  FUN_1412560ee(lVar1);
  lVar11 = FUN_1447210f0();
  if (*(longlong *)(param_1 + 0x2220) == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x2220) + 0x2a8);
    if ((lVar12 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      goto LAB_141412813;
    }
  }
  if (((lVar11 == 0) || (lVar12 != 0)) || (*(longlong *)(param_1 + 0x21f8) == 0))
  goto LAB_141412813;
  local_1b8[0] = *(ulonglong *)(*(longlong *)(param_1 + 0x21f8) + 0x4e0);
  FUN_1446dcdd4(local_138);
  lVar12 = thunk_FUN_140cde312(local_138);
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  if (lVar12 == 0) goto LAB_141412813;
  FUN_145e127ec(local_280,1,lVar12,0);
  local_1b8[0] = local_1b8[0] & 0xffffffffffffff00;
  local_190 = 0;
  FUN_1456bb102(local_1b8,lVar1);
  FUN_140368c94(local_280,local_138,local_1b8,0);
  FUN_144a5ac3a(local_1b8);
  cVar9 = FUN_1415b545a(local_138);
  if (cVar9 != '\0') {
    lVar12 = *(longlong *)(param_1 + 0x2220);
    if ((lVar12 == 0) || ((*(uint *)(lVar12 + 8) >> 0x1e & 1) != 0)) {
      lVar12 = FUN_148cc8d92(lVar1);
      if ((lVar12 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar12);
      }
      *(longlong *)(param_1 + 0x2220) = lVar12;
      FUN_144757f48(lVar12,0x800040);
      lVar12 = *(longlong *)(param_1 + 0x2220);
    }
    if ((*(byte *)(lVar12 + 0x9c) & 1) == 0) {
      FUN_140b506a4();
    }
    puVar19 = local_1b8;
    dVar13 = (double)FUN_1411371f6();
    uVar16 = SUB84(puVar19,0);
    local_188 = 1;
    local_184 = 0x800040;
    local_186 = local_186 | 4;
    lVar12 = *(longlong *)(param_1 + -0x238);
    local_1a8 = lVar1;
    if (lVar12 == 0) {
      local_208 = DAT_14c846508;
      local_218 = DAT_14c8464f8;
      dStack_210 = DAT_14c846500;
LAB_141412a7f:
      local_1e8 = (double)DAT_14c8464f0;
      local_1f8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_1f0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      dVar5 = *(double *)(lVar12 + 0x240);
      dVar6 = *(double *)(lVar12 + 0x248);
      dVar7 = *(double *)(lVar12 + 0x250);
      dVar8 = *(double *)(lVar12 + 600);
      pdVar15 = *(double **)(lVar12 + 0x228);
      local_1f8 = (code *)dVar5;
      uStack_1f0 = dVar6;
      local_1e8 = dVar7;
      uStack_1e0 = dVar8;
      if (pdVar15 == (double *)0x0) {
        uVar16 = 0x40;
        pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
        dVar13 = DAT_14c8463d8;
        *pdVar15 = DAT_14c8463d0;
        pdVar15[1] = dVar13;
        dVar13 = DAT_14c8463e8;
        pdVar15[2] = DAT_14c8463e0;
        pdVar15[3] = dVar13;
        dVar13 = DAT_14c846500;
        pdVar15[4] = DAT_14c8464f8;
        pdVar15[5] = dVar13;
        dVar13 = DAT_14c846508;
        pdVar15[6] = DAT_14c846508;
        *(double **)(lVar12 + 0x228) = pdVar15;
      }
      auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar15[1]);
      auVar3._0_8_ = -(ulonglong)(dVar5 != *pdVar15);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar15[1]) >> 0x20);
      iVar10 = movmskpd(SUB84(dVar13,0),auVar3);
      auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar15[3]);
      auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar15[2]);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar15[3]) >> 0x20);
      uVar17 = movmskpd(uVar16,auVar4);
      if ((uVar17 & 0x3fffffff) != 0 || iVar10 != 0) {
        *(undefined4 *)(pdVar15 + 2) = (undefined4)local_1e8;
        *(undefined4 *)((longlong)pdVar15 + 0x14) = local_1e8._4_4_;
        *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_1e0;
        *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_1e0._4_4_;
        *(undefined4 *)pdVar15 = (undefined4)local_1f8;
        *(undefined4 *)((longlong)pdVar15 + 4) = local_1f8._4_4_;
        *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_1f0;
        *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_1f0._4_4_;
        FUN_1448052ee(&local_1f8,&local_218);
        pdVar15[6] = local_208;
        pdVar15[4] = local_218;
        pdVar15[5] = dStack_210;
      }
      local_208 = pdVar15[6];
      local_218 = pdVar15[4];
      dStack_210 = pdVar15[5];
      lVar12 = *(longlong *)(param_1 + -0x238);
      if (lVar12 == 0) goto LAB_141412a7f;
      local_1f8 = *(code **)(lVar12 + 0x260);
      uStack_1f0 = *(double *)(lVar12 + 0x268);
      local_1e8 = *(double *)(lVar12 + 0x270);
    }
    uVar14 = FUN_140126fc0();
    local_288 = local_1b8;
    lVar11 = FUN_141137228(lVar11,uVar14,&local_1f8,&local_218);
    if (lVar11 != 0) {
      lVar12 = *(longlong *)(param_1 + 0x2220);
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar11);
      }
      *(longlong *)(lVar12 + 0x2a8) = lVar11;
      FUN_14485c47a(lVar11 + 0x1e8,*(undefined8 *)(param_1 + 0x2220));
      local_218 = 0.0;
      FUN_14485c47a(&local_218,lVar1);
      local_1e8 = 0.0;
      local_1d8 = &PTR_LAB_14b958520;
      local_1d0 = local_218;
      local_1f8 = FUN_1440a7e56;
      FUN_140f6405a(lVar11,local_138);
    }
    if (local_178 != 0) {
      if (local_168 == (longlong *)0x0) {
        local_168 = local_158;
      }
      (**(code **)(*local_168 + 0x10))();
    }
  }
  FUN_140368b56(local_138);
  FUN_140372a38(local_280);
LAB_141412813:
  if ((local_60 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1412561f0(lVar1);
  return;
}



// FUNCTION 141412c2d thunk_FUN_140cde312 body=5 status=ok
// SIG undefined thunk_FUN_140cde312(void)

longlong * thunk_FUN_140cde312(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_48 [32];
  ulonglong uStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  plVar4 = DAT_14cb848c0;
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1[1] < 2) && (DAT_14cb848c0 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*DAT_14cb848c0 + 0x300))(DAT_14cb848c0);
    if (cVar1 == '\0') {
      lVar5 = FUN_1400e3c00(plVar4,param_1,1);
      if (lVar5 != 0) {
        plVar10 = *(longlong **)(lVar5 + 0x30);
LAB_140cde383:
        if (plVar10 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar10 + 8))(plVar10);
          lVar6 = FUN_14042c486();
          if ((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) {
            plVar4 = (longlong *)0x0;
            if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30) {
              plVar4 = plVar10;
            }
            goto LAB_140cde32f;
          }
        }
      }
    }
    else {
      if ((((*param_1 == 0) || (iVar2 = param_1[1], iVar2 == 0)) || (*param_1 == DAT_14c948000)) ||
         (iVar2 < 1)) {
        iStack_20 = DAT_14c948620;
        uStack_28 = DAT_14c948618;
      }
      else {
        puVar7 = (ulonglong *)(param_1 + 2);
        if (0 < param_1[9]) {
          puVar7 = *(ulonglong **)(param_1 + 6);
        }
        if (iVar2 != 1) {
          puVar7 = *(ulonglong **)(param_1 + 6);
        }
        iStack_20 = (int)puVar7[1];
        uStack_28 = *puVar7;
      }
      plVar4 = plVar4 + 0x3f;
      uVar9 = uStack_28 & 0xffffffff;
      if (iStack_20 != 0) {
        uVar3 = FUN_144a78877(uVar9,iStack_20);
        uVar9 = (ulonglong)uVar3;
      }
      iVar2 = FUN_1448467de(plVar4,uVar9,&uStack_28);
      if (iVar2 != -1) {
        lVar5 = *plVar4;
        plVar4 = (longlong *)0x0;
        if ((lVar5 + (longlong)iVar2 * 0x70 == 0) ||
           (puVar8 = (undefined8 *)(lVar5 + (longlong)iVar2 * 0x70 + 0x10),
           puVar8 == (undefined8 *)0x0)) goto LAB_140cde32f;
        plVar10 = (longlong *)*puVar8;
        goto LAB_140cde383;
      }
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140cde32f:
  if ((uStack_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 141412c32 FUN_141412c32 body=77 status=ok
// SIG undefined FUN_141412c32(void)

void FUN_141412c32(longlong param_1,int param_2)

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



// FUNCTION 141412c80 FUN_141412c80 body=1796 status=ok
// SIG undefined FUN_141412c80(void)

void FUN_141412c80(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  char cVar14;
  uint uVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  undefined1 auStack_518 [40];
  undefined8 local_4f0;
  longlong local_4e8;
  uint local_4e0;
  undefined8 local_4d8 [9];
  undefined4 local_490;
  longlong local_48c;
  undefined4 local_484;
  undefined1 local_480 [156];
  undefined4 local_3e4;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined1 local_3b4;
  undefined2 local_3b3;
  undefined1 local_3b1;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388 [4];
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  longlong local_338;
  longlong *local_330;
  longlong local_328;
  undefined8 uStack_320;
  undefined8 *local_318;
  undefined8 uStack_310;
  undefined8 local_308 [12];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298 [12];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  longlong lStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0 [9];
  undefined8 local_188 [12];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  longlong lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_518;
  if (((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (cVar14 = FUN_1405bb4f2(), cVar14 == '\0')) {
    iVar22 = *(int *)(param_1 + 0x50);
    iVar20 = iVar22;
    if (param_2 == '\0') {
      iVar20 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x40);
      if (*(int *)(param_1 + 0x40) < iVar20) {
        iVar20 = *(int *)(param_1 + 0x40);
      }
      iVar20 = iVar20 + iVar22;
    }
    local_328 = 0;
    uStack_320 = 0;
    if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar20);
    }
    if (iVar20 != 0) {
      FUN_140d0ddb4(&local_328);
      iVar22 = *(int *)(param_1 + 0x50);
    }
    local_338 = param_1;
    local_330 = &local_328;
    if (iVar22 != 0) {
      lVar17 = *(longlong *)(param_1 + 0x48);
      lVar24 = (longlong)iVar22 * 0x18;
      do {
        FUN_143d8ff3a(&local_338,lVar17);
        lVar17 = lVar17 + 0x18;
        lVar24 = lVar24 + -0x18;
      } while (lVar24 != 0);
    }
    if ((param_2 == '\0') && (uVar15 = *(uint *)(param_1 + 0x40), 0 < (int)uVar15)) {
      local_4e8 = 0;
      uVar16 = *(undefined8 *)(param_1 + 0x38);
      local_4e0 = uVar15;
      FUN_1459847a4(&local_4e8,uVar15,0);
      FUN_141413385(local_4e8,uVar16,uVar15);
      local_318 = local_388;
      local_308[0] = 0xffffffff;
      uStack_310 = 0x20;
      FUN_141413624(local_4e8,local_4e8 + (longlong)(int)local_4e0 * 0x18);
      uVar15 = 0;
      if ((longlong)(int)local_4e0 != 0) {
        lVar17 = local_4e8 + (longlong)(int)local_4e0 * 0x18;
        iVar22 = 0;
        lVar24 = local_4e8;
        do {
          uVar13 = uStack_320;
          lVar18 = *(longlong *)(*(longlong *)(lVar24 + 8) + 0x18);
          if ((lVar18 != 0) && (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c))) {
            uVar15 = (uint)((ulonglong)lVar18 >> 0x10);
            uVar21 = (uint)lVar18 & 0xffff;
            lVar27 = *(longlong *)(param_1 + 0x128);
            if (*(longlong *)(param_1 + 0x128) == 0) {
              lVar27 = param_1 + 0x120;
            }
            iVar20 = *(int *)(lVar27 + (ulonglong)
                                       (*(int *)(param_1 + 0x130) - 1U &
                                       (int)((ulonglong)lVar18 >> 0x20) +
                                       ((uint)lVar18 << 0x10 | uVar21) +
                                       (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar21 >> 4)) * 4);
            if (iVar20 != -1) {
              do {
                plVar1 = (longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar20 * 0x14);
                if (*plVar1 == lVar18) {
                  if ((((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) &&
                      ((int)plVar1[1] != -1)) && (*(char *)(lVar24 + 0x10) == '\0')) {
                    lVar18 = (longlong)(int)uStack_320;
                    uVar15 = (int)uStack_320 + 1;
                    uStack_320 = CONCAT44(uStack_320._4_4_,uVar15);
                    if (uStack_320._4_4_ < uVar15) {
                      FUN_145984818(&local_328,uVar13 & 0xffffffff);
                    }
                    *(undefined ***)(local_328 + lVar18 * 0x18) = &PTR_FUN_14b2e1720;
                    *(undefined1 *)(local_328 + 0x10 + lVar18 * 0x18) =
                         *(undefined1 *)(lVar24 + 0x10);
                    *(undefined8 *)(local_328 + 8 + lVar18 * 0x18) = *(undefined8 *)(lVar24 + 8);
                    iVar22 = iVar22 + 1;
                    uVar15 = local_4e0;
                    if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x40) <= iVar22)
                    goto LAB_141412f24;
                  }
                  break;
                }
                iVar20 = *(int *)((longlong)plVar1 + 0xc);
              } while (iVar20 != -1);
            }
          }
          lVar24 = lVar24 + 0x18;
          uVar15 = local_4e0;
        } while (lVar24 != lVar17);
      }
LAB_141412f24:
      FUN_140893af5(local_4e8,uVar15);
      if (local_4e8 != 0) {
        FUN_1400020a8();
      }
    }
    local_388[2] = *(undefined8 *)(param_1 + 0x358);
    local_388[0] = *(undefined8 *)(param_1 + 0x348);
    local_388[1] = *(undefined8 *)(param_1 + 0x350);
    local_360 = *(undefined8 *)(param_1 + 0x370);
    local_388[3] = *(undefined8 *)(param_1 + 0x360);
    uStack_368 = *(undefined8 *)(param_1 + 0x368);
    local_358 = *(undefined8 *)(param_1 + 0x378);
    uStack_350 = *(undefined8 *)(param_1 + 0x380);
    local_348 = *(undefined8 *)(param_1 + 0x388);
    uVar15 = *(uint *)(param_1 + 0x398);
    uVar23 = *(undefined4 *)(param_1 + 0x39c);
    uVar3 = *(undefined4 *)(param_1 + 0x43c);
    uVar16 = *(undefined8 *)(param_1 + 0x440);
    uVar5 = *(undefined8 *)(param_1 + 0x448);
    uVar6 = *(undefined8 *)(param_1 + 0x450);
    uVar7 = *(undefined8 *)(param_1 + 0x458);
    uVar8 = *(undefined8 *)(param_1 + 0x460);
    uVar4 = *(undefined4 *)(param_1 + 0x468);
    uVar2 = *(undefined1 *)(param_1 + 0x46c);
    uVar9 = *(undefined8 *)(param_1 + 0x470);
    uVar10 = *(undefined8 *)(param_1 + 0x478);
    local_4f0 = *(undefined8 *)(param_1 + 0x480);
    uVar11 = *(undefined8 *)(param_1 + 0x488);
    uVar12 = *(undefined8 *)(param_1 + 0x490);
    local_4e8 = 0xffffffff;
    local_4e0 = local_4e0 & 0xffffff00;
    puVar25 = local_388;
    puVar26 = local_4d8;
    for (lVar17 = 9; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar26 = *puVar25;
      puVar25 = puVar25 + 1;
      puVar26 = puVar26 + 1;
    }
    local_490 = 0x3f800000;
    local_48c = (ulonglong)uVar15 << 0x20;
    local_484 = uVar23;
    memcpy(local_480,(void *)(param_1 + 0x3a0),0x9c);
    local_3b3 = *(undefined2 *)(param_1 + 0x46d);
    local_3b1 = *(undefined1 *)(param_1 + 0x46f);
    local_3a0 = local_4f0;
    local_4e0._0_2_ = (ushort)(byte)local_4e0;
    uVar23 = 0;
    local_3e4 = uVar3;
    local_3e0 = uVar16;
    local_3d8 = uVar5;
    uStack_3d0 = uVar6;
    local_3c8 = uVar7;
    uStack_3c0 = uVar8;
    local_3b8 = uVar4;
    local_3b4 = uVar2;
    local_3b0 = uVar9;
    uStack_3a8 = uVar10;
    local_398 = uVar11;
    uStack_390 = uVar12;
    if ((longlong)(int)uStack_320 != 0) {
      lVar17 = (longlong)(int)uStack_320 * 0x18;
      lVar24 = local_328;
      do {
        local_318 = (undefined8 *)0x0;
        uStack_310 = 0;
        puVar25 = &DAT_14c846480;
        puVar26 = local_308;
        for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
          *puVar26 = *puVar25;
          puVar25 = puVar25 + 1;
          puVar26 = puVar26 + 1;
        }
        local_2a8 = 0;
        uStack_2a0 = 0;
        puVar25 = &DAT_14c846480;
        puVar26 = local_298;
        for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
          *puVar26 = *puVar25;
          puVar25 = puVar25 + 1;
          puVar26 = puVar26 + 1;
        }
        local_1d8 = 0;
        local_1e8 = 0;
        lStack_1e0 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_238 = 0;
        uStack_230 = 0;
        lVar18 = *(longlong *)(param_1 + 0x20);
        lVar27 = *(longlong *)(param_1 + 0x28);
        puVar25 = &DAT_14c964b40;
        puVar26 = local_1d0;
        for (lVar19 = 9; lVar19 != 0; lVar19 = lVar19 + -1) {
          *puVar26 = *puVar25;
          puVar25 = puVar25 + 1;
          puVar26 = puVar26 + 1;
        }
        puVar25 = &DAT_14c846480;
        puVar26 = local_188;
        for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
          *puVar26 = *puVar25;
          puVar25 = puVar25 + 1;
          puVar26 = puVar26 + 1;
        }
        local_f8 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_f0 = 0x3ecccccd42c80000;
        local_e8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        lStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        lVar19 = 0;
        if (lVar18 != 0) {
          FUN_1447210f0(lVar18);
          lVar19 = local_d0;
        }
        local_d0 = *(longlong *)(lVar27 + 0x48);
        if (lVar19 != local_d0) {
          local_c0 = 0;
        }
        if (lStack_c8 != *(longlong *)(lVar27 + 0x50)) {
          local_c0 = 0;
        }
        uVar16 = FUN_14477b664();
        lStack_c8 = FUN_14477b664(uVar16);
        local_c0 = *(undefined8 *)(lVar27 + 0x58);
        uVar16 = *(undefined8 *)(lVar24 + 8);
        if (*(longlong *)(param_1 + 0x20) != 0) {
          FUN_1447210f0();
        }
        FUN_1414141fa(uVar16,&local_318);
        *(undefined1 *)(lVar24 + 0x10) = 1;
        FUN_1414133b8(param_1,lVar24,&local_318);
        FUN_1414136a2(param_1,&local_318,&local_4e8);
        if (local_e0 != 0) {
          FUN_1400020a8();
        }
        if (lStack_1e0 != 0) {
          FUN_1400020a8();
        }
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        lVar24 = lVar24 + 0x18;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != 0);
      uVar23 = (int)uStack_320;
    }
    FUN_140893af5(local_328,uVar23);
    if (local_328 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_518) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141413385 FUN_141413385 body=51 status=ok
// SIG undefined FUN_141413385(void)

void FUN_141413385(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined ***)(param_1 + lVar1) = &PTR_FUN_14b2e1720;
      *(undefined8 *)(param_1 + 8 + lVar1) = *(undefined8 *)(param_2 + 8 + lVar1);
      *(undefined1 *)(param_1 + 0x10 + lVar1) = *(undefined1 *)(param_2 + 0x10 + lVar1);
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1414133b8 FUN_1414133b8 body=620 status=ok
// SIG undefined FUN_1414133b8(void)

void FUN_1414133b8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x18);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c))) {
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    lVar10 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar10 = param_1 + 0x120;
    }
    iVar8 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x130) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar8 * 0x14);
        if (*plVar1 == lVar3) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          if (plVar1 + 1 == (longlong *)0x0) {
            return;
          }
          iVar8 = (int)plVar1[1];
          if (iVar8 == -1) {
            return;
          }
          iVar6 = *(int *)(param_1 + 0x40);
          if (iVar6 < 1) {
            return;
          }
          lVar10 = 0;
          do {
            if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x10 + lVar10 * 0x18) == '\0') {
              lVar2 = *(longlong *)(param_1 + 0x38) + lVar10 * 0x18;
              lVar13 = *(longlong *)(lVar2 + 8);
              lVar4 = *(longlong *)(lVar13 + 0x18);
              if (lVar4 != lVar3) {
                iVar9 = -1;
                if ((lVar4 != 0) && (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c))) {
                  uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
                  uVar7 = (uint)lVar4 & 0xffff;
                  lVar12 = *(longlong *)(param_1 + 0x128);
                  if (*(longlong *)(param_1 + 0x128) == 0) {
                    lVar12 = param_1 + 0x120;
                  }
                  iVar11 = *(int *)(lVar12 + (ulonglong)
                                             (*(int *)(param_1 + 0x130) - 1U &
                                             (int)((ulonglong)lVar4 >> 0x20) +
                                             ((uint)lVar4 << 0x10 | uVar7) +
                                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4)) * 4);
                  if (iVar11 != -1) {
                    do {
                      plVar1 = (longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar11 * 0x14)
                      ;
                      if (*plVar1 == lVar4) {
                        if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
                          iVar9 = (int)plVar1[1];
                        }
                        break;
                      }
                      iVar11 = *(int *)((longlong)plVar1 + 0xc);
                    } while (iVar11 != -1);
                  }
                }
                if (iVar8 <= iVar9) {
                  iVar11 = 0;
                  do {
                    if (iVar9 == iVar8) {
                      if (iVar11 != 0) {
                        if (*(char *)(*(longlong *)(param_2 + 8) + 0x2e) == '\x01') {
                          iVar6 = *(int *)(param_3 + 0x240);
                          *(uint *)(param_3 + 0x240) = iVar6 + 1U;
                          if (*(uint *)(param_3 + 0x244) < iVar6 + 1U) {
                            FUN_1446f48e2((longlong *)(param_3 + 0x238),iVar6);
                          }
                          *(int *)(*(longlong *)(param_3 + 0x238) + (longlong)iVar6 * 4) =
                               (int)lVar10;
                          lVar13 = *(longlong *)(lVar2 + 8);
                        }
                        *(uint *)(param_3 + 0x230) =
                             *(uint *)(param_3 + 0x230) | *(uint *)(lVar13 + 0x34);
                        *(undefined1 *)(lVar2 + 0x10) = 1;
                        iVar6 = *(int *)(param_1 + 0x40);
                      }
                      break;
                    }
                    iVar9 = *(int *)(*(longlong *)(param_1 + 0x78) + 8 + (longlong)iVar9 * 0xc);
                    iVar11 = iVar11 + -1;
                  } while (iVar9 != -1);
                }
              }
            }
            lVar10 = lVar10 + 1;
            if (iVar6 <= lVar10) {
              return;
            }
          } while( true );
        }
        iVar8 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar8 != -1);
    }
  }
  return;
}



// FUNCTION 141413624 FUN_141413624 body=126 status=ok
// SIG undefined FUN_141413624(void)

void FUN_141413624(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_1 != param_2) && (lVar5 = param_1 + 0x18, lVar5 != param_2)) {
    lVar4 = 1;
    do {
      lVar3 = FUN_14051345a(param_3,lVar4 + 1);
      if (lVar4 != lVar3) {
        uVar2 = *(undefined8 *)(lVar5 + 8);
        uVar1 = *(undefined1 *)(lVar5 + 0x10);
        *(undefined1 *)(lVar5 + 0x10) = *(undefined1 *)(param_1 + 0x10 + lVar3 * 0x18);
        *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(param_1 + 8 + lVar3 * 0x18);
        *(undefined8 *)(param_1 + 8 + lVar3 * 0x18) = uVar2;
        *(undefined1 *)(param_1 + 0x10 + lVar3 * 0x18) = uVar1;
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + 1;
    } while (lVar5 != param_2);
  }
  return;
}



// FUNCTION 1414136a2 FUN_1414136a2 body=2010 status=ok
// SIG undefined FUN_1414136a2(void)

void FUN_1414136a2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_4d8 [32];
  undefined8 **local_4b8;
  longlong *local_4b0;
  undefined8 *local_4a8;
  int local_4a0;
  longlong local_498;
  longlong local_490;
  longlong local_488 [12];
  longlong local_428;
  longlong local_420;
  longlong local_418 [15];
  longlong local_3a0;
  longlong local_398;
  longlong lStack_390;
  longlong local_388;
  undefined8 local_380;
  longlong local_378;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  longlong local_360;
  undefined8 local_358;
  longlong local_350 [9];
  longlong local_308 [13];
  longlong local_2a0;
  undefined8 local_298;
  longlong local_290;
  longlong local_288;
  undefined8 local_280;
  longlong local_278;
  longlong local_270;
  undefined4 local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  longlong local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  longlong local_218;
  undefined2 local_210;
  longlong local_208 [9];
  undefined4 local_1c0;
  undefined1 local_1b8 [184];
  longlong local_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  longlong local_b8;
  code *local_a8;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  if ((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 0x28) == 0))
  goto LAB_141413d55;
  FUN_141413e7e(&local_498);
  local_218 = *param_3;
  local_210 = (undefined2)param_3[1];
  plVar3 = param_3 + 2;
  plVar9 = local_208;
  for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar9 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar9 = plVar9 + 1;
  }
  local_1c0 = (undefined4)param_3[0xb];
  memcpy(local_1b8,param_3 + 0xc,0xb8);
  local_100 = param_3[0x23];
  local_f8 = param_3[0x24];
  lStack_f0 = param_3[0x25];
  local_e8 = (undefined4)param_3[0x26];
  local_e4 = *(undefined1 *)((longlong)param_3 + 0x134);
  local_c0 = param_3[0x2b];
  local_e0 = (undefined4)param_3[0x27];
  uStack_dc = *(undefined4 *)((longlong)param_3 + 0x13c);
  uStack_d8 = (undefined4)param_3[0x28];
  uStack_d4 = *(undefined4 *)((longlong)param_3 + 0x144);
  local_d0 = (undefined4)param_3[0x29];
  uStack_cc = *(undefined4 *)((longlong)param_3 + 0x14c);
  uStack_c8 = (undefined4)param_3[0x2a];
  uStack_c4 = *(undefined4 *)((longlong)param_3 + 0x154);
  local_a8 = (code *)0x0;
  local_b8 = param_1;
  plVar3 = (longlong *)FUN_14001cc68(0x400,0x10);
  local_98 = plVar3;
  *plVar3 = (longlong)&PTR_FUN_14b40fc70;
  plVar3[2] = local_498;
  plVar3[3] = local_490;
  if ((local_490 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar7 = DAT_14c950c29;
  plVar9 = local_488;
  plVar10 = plVar3 + 4;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar10 = *plVar9;
    plVar9 = plVar9 + 1;
    plVar10 = plVar10 + 1;
  }
  plVar3[0x10] = local_428;
  if ((local_428 != 0 & bVar7) == 1) {
    FUN_1456cec3c();
    bVar7 = DAT_14c950c29;
  }
  local_4b0 = plVar3 + 2;
  plVar3[0x11] = local_420;
  if ((local_420 != 0 & bVar7) == 1) {
    FUN_1456cec3c();
  }
  plVar9 = local_418;
  plVar10 = plVar3 + 0x12;
  for (lVar5 = 0xf; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar10 = *plVar9;
    plVar9 = plVar9 + 1;
    plVar10 = plVar10 + 1;
  }
  plVar3[0x21] = local_3a0;
  plVar3[0x22] = local_398;
  plVar3[0x23] = lStack_390;
  plVar3[0x24] = local_388;
  local_388 = 0;
  *(undefined4 *)(plVar3 + 0x25) = (undefined4)local_380;
  *(undefined4 *)((longlong)plVar3 + 300) = local_380._4_4_;
  local_380 = 0;
  plVar3[0x26] = local_378;
  *(undefined4 *)(plVar3 + 0x27) = local_370;
  *(undefined4 *)((longlong)plVar3 + 0x13c) = uStack_36c;
  *(undefined4 *)(plVar3 + 0x28) = uStack_368;
  *(undefined4 *)((longlong)plVar3 + 0x144) = uStack_364;
  plVar3[0x29] = local_360;
  local_360 = 0;
  *(undefined4 *)(plVar3 + 0x2a) = (undefined4)local_358;
  *(undefined4 *)((longlong)plVar3 + 0x154) = local_358._4_4_;
  local_358 = 0;
  plVar9 = local_350;
  plVar10 = plVar3 + 0x2b;
  for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar10 = *plVar9;
    plVar9 = plVar9 + 1;
    plVar10 = plVar10 + 1;
  }
  plVar9 = local_308;
  plVar10 = plVar3 + 0x34;
  for (lVar5 = 0xd; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar10 = *plVar9;
    plVar9 = plVar9 + 1;
    plVar10 = plVar10 + 1;
  }
  plVar3[0x42] = 0;
  plVar3[0x43] = 0;
  plVar3[0x41] = local_2a0;
  uVar4 = FUN_14477b664(local_298);
  lVar5 = FUN_14477b664(uVar4);
  plVar3[0x42] = lVar5;
  plVar3[0x43] = local_290;
  plVar3[0x46] = 0;
  plVar3[0x44] = 0;
  plVar3[0x45] = 0;
  plVar3[0x44] = local_288;
  uVar4 = FUN_14477b664(local_280);
  lVar5 = FUN_14477b664(uVar4);
  plVar3[0x45] = lVar5;
  plVar3[0x46] = local_278;
  plVar3[0x47] = local_270;
  *(undefined4 *)(plVar3 + 0x48) = local_268;
  plVar3[0x49] = local_260;
  local_260 = 0;
  *(undefined4 *)(plVar3 + 0x4a) = (undefined4)local_258;
  *(undefined4 *)((longlong)plVar3 + 0x254) = local_258._4_4_;
  local_258 = 0;
  plVar3[0x4c] = 0;
  plVar3[0x4d] = 0;
  plVar3[0x4b] = local_250;
  uVar4 = FUN_14477b664(local_248);
  lVar5 = FUN_14477b664(uVar4);
  plVar3[0x4c] = lVar5;
  plVar3[0x4d] = local_240;
  plVar3[0x50] = 0;
  plVar3[0x4e] = 0;
  plVar3[0x4f] = 0;
  plVar3[0x4e] = local_238;
  uVar4 = FUN_14477b664(local_230);
  lVar5 = FUN_14477b664(uVar4);
  plVar3[0x4f] = lVar5;
  plVar3[0x50] = local_228;
  *(undefined2 *)(plVar3 + 0x53) = local_210;
  plVar3[0x52] = local_218;
  plVar9 = local_208;
  plVar10 = plVar3 + 0x54;
  for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar10 = *plVar9;
    plVar9 = plVar9 + 1;
    plVar10 = plVar10 + 1;
  }
  *(undefined4 *)(plVar3 + 0x5d) = local_1c0;
  memcpy(plVar3 + 0x5e,local_1b8,0xb8);
  plVar3[0x75] = local_100;
  plVar3[0x76] = local_f8;
  plVar3[0x77] = lStack_f0;
  *(undefined4 *)(plVar3 + 0x78) = local_e8;
  *(undefined1 *)((longlong)plVar3 + 0x3c4) = local_e4;
  plVar3[0x7d] = local_c0;
  *(undefined4 *)(plVar3 + 0x7b) = local_d0;
  *(undefined4 *)((longlong)plVar3 + 0x3dc) = uStack_cc;
  *(undefined4 *)(plVar3 + 0x7c) = uStack_c8;
  *(undefined4 *)((longlong)plVar3 + 0x3e4) = uStack_c4;
  *(undefined4 *)(plVar3 + 0x79) = local_e0;
  *(undefined4 *)((longlong)plVar3 + 0x3cc) = uStack_dc;
  *(undefined4 *)(plVar3 + 0x7a) = uStack_d8;
  *(undefined4 *)((longlong)plVar3 + 0x3d4) = uStack_d4;
  plVar3[0x7e] = local_b8;
  if (local_4b0 != (longlong *)0x0) {
    local_a8 = FUN_143d95334;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  local_4a8 = (undefined8 *)0x0;
  local_4a0 = 0;
  FUN_1446efa72(&local_4a8,0,6,0x10);
  puVar2 = local_4a8;
  local_4a0 = 6;
  *local_4a8 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  local_4a8[2] = lVar6;
  *local_4a8 = &PTR_FUN_14b40fc00;
  local_4a8[3] = 0;
  iVar8 = 0;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    *(uint *)(local_4a8 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar8 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar8 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar8 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar11;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar8 = iVar11;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar8;
  puVar2[4] = local_a8;
  puVar2[6] = 0;
  if (local_a8 != (code *)0x0) {
    plVar3 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar3 = local_88;
    }
    (**(code **)*plVar3)(plVar3,puVar2 + 6);
  }
  uVar4 = FUN_1447210f0(lVar5);
  local_4b8 = &local_4a8;
  FUN_140d5f492(uVar4,2,3,&DAT_14cb814c8);
  if (local_4a0 == 0) {
LAB_141413cf0:
    if (local_4a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_4a8 != (undefined8 *)0x0) {
    (**(code **)*local_4a8)(local_4a8,0);
    FUN_1446efa72(&local_4a8,0,0,0x10);
    local_4a0 = 0;
    goto LAB_141413cf0;
  }
  if (local_a8 != (code *)0x0) {
    plVar3 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar3 = local_88;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_260 != 0) {
    FUN_1400020a8();
  }
  if (local_360 != 0) {
    FUN_1400020a8();
  }
  if (local_388 != 0) {
    FUN_1400020a8();
  }
LAB_141413d55:
  if ((local_60 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141413e7e FUN_141413e7e body=891 status=ok
// SIG undefined FUN_141413e7e(void)

undefined8 * FUN_141413e7e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  *param_1 = *param_2;
  lVar8 = param_2[1];
  param_1[1] = lVar8;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar6 = DAT_14c950c29;
  puVar9 = param_2 + 2;
  puVar10 = param_1 + 2;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  lVar8 = param_2[0xe];
  param_1[0xe] = lVar8;
  if ((lVar8 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
    bVar6 = DAT_14c950c29;
  }
  lVar8 = param_2[0xf];
  param_1[0xf] = lVar8;
  if ((lVar8 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
  }
  puVar9 = param_2 + 0x10;
  puVar10 = param_1 + 0x10;
  for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  param_1[0x1f] = param_2[0x1f];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x104);
  uVar4 = *(undefined4 *)(param_2 + 0x21);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar3;
  *(undefined4 *)(param_1 + 0x21) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar5;
  param_1[0x22] = 0;
  iVar1 = *(int *)(param_2 + 0x23);
  pvVar2 = (void *)param_2[0x22];
  *(int *)(param_1 + 0x23) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x22,iVar1,0);
    memcpy((void *)param_1[0x22],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x24] = param_2[0x24];
  uVar3 = *(undefined4 *)((longlong)param_2 + 300);
  uVar4 = *(undefined4 *)(param_2 + 0x26);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = uVar3;
  *(undefined4 *)(param_1 + 0x26) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar5;
  param_1[0x27] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  pvVar2 = (void *)param_2[0x27];
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x27,iVar1,0);
    memcpy((void *)param_1[0x27],pvVar2,(longlong)iVar1 * 2);
  }
  puVar9 = param_2 + 0x29;
  puVar10 = param_1 + 0x29;
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = param_2 + 0x32;
  puVar10 = param_1 + 0x32;
  for (lVar8 = 0xd; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = param_2[0x3f];
  uVar7 = FUN_14477b664(param_2[0x40]);
  uVar7 = FUN_14477b664(uVar7);
  param_1[0x40] = uVar7;
  param_1[0x41] = param_2[0x41];
  param_1[0x44] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = param_2[0x42];
  uVar7 = FUN_14477b664(param_2[0x43]);
  uVar7 = FUN_14477b664(uVar7);
  param_1[0x43] = uVar7;
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_2 + 0x46);
  param_1[0x47] = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  pvVar2 = (void *)param_2[0x47];
  *(int *)(param_1 + 0x48) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x47,iVar1,0);
    memcpy((void *)param_1[0x47],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x49] = param_2[0x49];
  uVar7 = FUN_14477b664(param_2[0x4a]);
  uVar7 = FUN_14477b664(uVar7);
  param_1[0x4a] = uVar7;
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4e] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = param_2[0x4c];
  uVar7 = FUN_14477b664(param_2[0x4d]);
  uVar7 = FUN_14477b664(uVar7);
  param_1[0x4d] = uVar7;
  param_1[0x4e] = param_2[0x4e];
  return param_1;
}



// FUNCTION 1414141fa FUN_1414141fa body=2556 status=ok
// SIG undefined FUN_1414141fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414141fa(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  void *pvVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  DWORD DVar15;
  DWORD DVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  int iVar23;
  bool bVar24;
  double dVar25;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  uVar22 = 0;
  param_2[0x44] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  puVar21 = (undefined8 *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x20) != '\0') {
    puVar21 = (undefined8 *)(param_1 + 0x24);
  }
  *param_2 = *puVar21;
  lVar17 = DAT_14cb81480;
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar18 + 0xc60);
  if (iVar3 != 0x40000002) {
    bVar24 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar3 != 2)) {
      if (iVar3 == 1) {
        DVar15 = FUN_140ad26c0();
        DVar16 = GetCurrentThreadId();
        bVar24 = DVar15 == DVar16;
      }
      else {
        bVar24 = false;
      }
    }
    uVar22 = (ulonglong)(bVar24 ^ 1);
  }
  if (*(char *)(lVar17 + uVar22) == '\x01') {
    if (*(int *)(param_1 + 0x40) < 1) goto LAB_141414b6b;
  }
  else {
    if (*(int *)(param_1 + 0x40) < 1) {
LAB_141414b6b:
      lVar17 = 0;
      goto LAB_141414345;
    }
    rand();
  }
  lVar17 = FUN_1401ca522();
  if ((lVar17 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
LAB_141414345:
  param_2[1] = lVar17;
  auVar34 = _DAT_1499387d0;
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x60);
  dVar5 = (double)DAT_1499387d0;
  dVar6 = DAT_1499387d0._8_8_;
  auVar33 = divpd(auVar2,_DAT_1499387d0);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = *(double *)(param_1 + 0x70);
  auVar35 = divpd(auVar35,_DAT_1499387d0);
  auVar33 = roundpd(auVar33,auVar33,3);
  auVar35 = roundpd(auVar35,auVar35,3);
  dVar28 = (auVar2._0_8_ - auVar33._0_8_ * dVar5) * 0.008726646259971648;
  dVar29 = (auVar2._8_8_ - auVar33._8_8_ * dVar6) * 0.008726646259971648;
  dVar31 = (*(double *)(param_1 + 0x70) - auVar35._0_8_ * dVar5) * 0.008726646259971648;
  dVar32 = (0.0 - auVar35._8_8_ * dVar6) * 0.008726646259971648;
  dVar25 = sin(dVar28);
  dVar26 = sin(dVar29);
  dVar27 = sin(dVar31);
  sin(dVar32);
  dVar28 = cos(dVar28);
  dVar29 = cos(dVar29);
  dVar30 = cos(dVar31);
  cos(dVar32);
  dVar31 = dVar26 * dVar25 * dVar27 + dVar29 * dVar28 * dVar30;
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  uVar20 = *(undefined8 *)(param_1 + 0x58);
  uVar7 = *(undefined4 *)(param_1 + 0x78);
  uVar8 = *(undefined4 *)(param_1 + 0x7c);
  uVar9 = *(undefined4 *)(param_1 + 0x80);
  uVar10 = *(undefined4 *)(param_1 + 0x84);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  param_2[2] = dVar25 * dVar26 * dVar30 - dVar28 * dVar29 * dVar27;
  param_2[3] = -(dVar25 * dVar29 * dVar30) - dVar28 * dVar26 * dVar27;
  auVar2._8_4_ = SUB84(dVar31,0);
  auVar2._0_8_ = -(dVar29 * dVar25 * dVar27) + dVar26 * dVar28 * dVar30;
  auVar2._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 4) = auVar2;
  param_2[6] = uVar11;
  param_2[7] = uVar12;
  param_2[8] = uVar20;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x54) = uVar8;
  *(undefined4 *)(param_2 + 0xb) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uVar10;
  param_2[0xc] = uVar1;
  param_2[0xd] = 0;
  if (*(int *)(param_1 + 0x98) < 1) {
    lVar17 = 0;
  }
  else {
    rand();
    lVar17 = FUN_1402d1dc0();
    if ((lVar17 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
  }
  param_2[0xe] = lVar17;
  param_2[0x1e] = *(undefined8 *)(param_1 + 0xb0);
  uVar20 = *(undefined8 *)(param_1 + 0xa8);
  param_2[0x1c] = *(undefined8 *)(param_1 + 0xa0);
  param_2[0x1d] = uVar20;
  if (*(int *)(param_1 + 200) < 1) {
    lVar17 = 0;
  }
  else {
    rand();
    lVar17 = FUN_1402d20ea();
    if ((lVar17 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
  }
  param_2[0xf] = lVar17;
  auVar2 = *(undefined1 (*) [16])(param_1 + 0xe8);
  auVar33 = divpd(auVar2,auVar34);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *(double *)(param_1 + 0xf8);
  auVar35 = divpd(auVar36,auVar34);
  auVar33 = roundpd(auVar33,auVar33,3);
  auVar35 = roundpd(auVar35,auVar35,3);
  dVar28 = (auVar2._0_8_ - auVar33._0_8_ * dVar5) * 0.008726646259971648;
  dVar29 = (auVar2._8_8_ - auVar33._8_8_ * dVar6) * 0.008726646259971648;
  dVar31 = (*(double *)(param_1 + 0xf8) - auVar35._0_8_ * dVar5) * 0.008726646259971648;
  dVar32 = (0.0 - auVar35._8_8_ * dVar6) * 0.008726646259971648;
  dVar25 = sin(dVar28);
  dVar26 = sin(dVar29);
  dVar27 = sin(dVar31);
  sin(dVar32);
  dVar28 = cos(dVar28);
  dVar29 = cos(dVar29);
  dVar30 = cos(dVar31);
  cos(dVar32);
  dVar31 = dVar26 * dVar25 * dVar27 + dVar29 * dVar28 * dVar30;
  uVar11 = *(undefined8 *)(param_1 + 0xd0);
  uVar12 = *(undefined8 *)(param_1 + 0xd8);
  uVar20 = *(undefined8 *)(param_1 + 0xe0);
  uVar7 = *(undefined4 *)(param_1 + 0x100);
  uVar8 = *(undefined4 *)(param_1 + 0x104);
  uVar9 = *(undefined4 *)(param_1 + 0x108);
  uVar10 = *(undefined4 *)(param_1 + 0x10c);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  param_2[0x10] = dVar25 * dVar26 * dVar30 - dVar28 * dVar29 * dVar27;
  param_2[0x11] = -(dVar25 * dVar29 * dVar30) - dVar28 * dVar26 * dVar27;
  auVar33._8_4_ = SUB84(dVar31,0);
  auVar33._0_8_ = -(dVar29 * dVar25 * dVar27) + dVar26 * dVar28 * dVar30;
  auVar33._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x12) = auVar33;
  param_2[0x14] = uVar11;
  param_2[0x15] = uVar12;
  param_2[0x16] = uVar20;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xc4) = uVar8;
  *(undefined4 *)(param_2 + 0x19) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0xcc) = uVar10;
  param_2[0x1a] = uVar1;
  param_2[0x1b] = 0;
  lVar17 = DAT_14cb81480;
  if (0 < *(int *)(param_1 + 0x130)) {
    iVar3 = *(int *)(lVar18 + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar22 = 0;
    }
    else if (iVar3 == 1) {
      DVar15 = FUN_140ad26c0();
      DVar16 = GetCurrentThreadId();
      uVar22 = (ulonglong)(DVar15 != DVar16);
    }
    else {
      uVar22 = 1;
    }
    if ((*(char *)(lVar17 + uVar22) == '\0') && (iVar3 = *(int *)(param_1 + 0x130), 0 < iVar3)) {
      uVar13 = rand();
      iVar14 = (int)((float)iVar3 * ((float)(uVar13 & 0x7fff) / 32767.0));
      iVar23 = iVar3 + -1;
      if (iVar14 < iVar3 + -1) {
        iVar23 = iVar14;
      }
      lVar18 = (longlong)iVar23;
    }
    else {
      lVar18 = 0;
    }
    lVar17 = *(longlong *)(param_1 + 0x128) + lVar18 * 0x98;
    puVar19 = (undefined8 *)(lVar18 * 0x98 + *(longlong *)(param_1 + 0x128));
    param_2[0x1f] = *puVar19;
    uVar20 = puVar19[2];
    param_2[0x20] = puVar19[1];
    param_2[0x21] = uVar20;
    puVar21 = param_2 + 0x22;
    if (puVar21 != puVar19 + 3) {
      iVar3 = *(int *)(lVar17 + 0x20);
      pvVar4 = *(void **)(lVar17 + 0x18);
      *(int *)(param_2 + 0x23) = iVar3;
      if (iVar3 == 0 && *(int *)((longlong)param_2 + 0x11c) == 0) {
        *(undefined4 *)((longlong)param_2 + 0x11c) = 0;
      }
      else {
        FUN_1446dd670(puVar21,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)*puVar21,pvVar4,(longlong)iVar3 * 2);
        }
      }
    }
    param_2[0x24] = *(undefined8 *)(lVar17 + 0x28);
    uVar20 = *(undefined8 *)(lVar17 + 0x38);
    param_2[0x25] = *(undefined8 *)(lVar17 + 0x30);
    param_2[0x26] = uVar20;
    puVar21 = param_2 + 0x27;
    if (puVar21 != (undefined8 *)(lVar17 + 0x40)) {
      iVar3 = *(int *)(lVar17 + 0x48);
      pvVar4 = *(void **)(lVar17 + 0x40);
      *(int *)(param_2 + 0x28) = iVar3;
      if (iVar3 == 0 && *(int *)((longlong)param_2 + 0x144) == 0) {
        *(undefined4 *)((longlong)param_2 + 0x144) = 0;
      }
      else {
        FUN_1446dd670(puVar21,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)*puVar21,pvVar4,(longlong)iVar3 * 2);
        }
      }
    }
    puVar21 = (undefined8 *)(lVar17 + 0x50);
    puVar19 = param_2 + 0x29;
    for (lVar18 = 9; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar19 = *puVar21;
      puVar21 = puVar21 + 1;
      puVar19 = puVar19 + 1;
    }
  }
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x150);
  auVar33 = divpd(auVar2,auVar34);
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *(double *)(param_1 + 0x160);
  auVar35 = divpd(auVar37,auVar34);
  auVar34 = roundpd(auVar33,auVar33,3);
  auVar33 = roundpd(auVar35,auVar35,3);
  dVar31 = (auVar2._0_8_ - auVar34._0_8_ * dVar5) * 0.008726646259971648;
  dVar32 = (auVar2._8_8_ - auVar34._8_8_ * dVar6) * 0.008726646259971648;
  dVar5 = (*(double *)(param_1 + 0x160) - auVar33._0_8_ * dVar5) * 0.008726646259971648;
  dVar6 = (0.0 - auVar33._8_8_ * dVar6) * 0.008726646259971648;
  dVar28 = sin(dVar31);
  dVar29 = sin(dVar32);
  dVar25 = sin(dVar5);
  sin(dVar6);
  dVar31 = cos(dVar31);
  dVar32 = cos(dVar32);
  dVar26 = cos(dVar5);
  cos(dVar6);
  dVar5 = dVar29 * dVar28 * dVar25 + dVar32 * dVar31 * dVar26;
  uVar11 = *(undefined8 *)(param_1 + 0x138);
  uVar12 = *(undefined8 *)(param_1 + 0x140);
  uVar20 = *(undefined8 *)(param_1 + 0x148);
  uVar7 = *(undefined4 *)(param_1 + 0x168);
  uVar8 = *(undefined4 *)(param_1 + 0x16c);
  uVar9 = *(undefined4 *)(param_1 + 0x170);
  uVar10 = *(undefined4 *)(param_1 + 0x174);
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  param_2[0x32] = dVar28 * dVar29 * dVar26 - dVar31 * dVar32 * dVar25;
  param_2[0x33] = -(dVar28 * dVar32 * dVar26) - dVar31 * dVar29 * dVar25;
  auVar34._8_4_ = SUB84(dVar5,0);
  auVar34._0_8_ = -(dVar32 * dVar28 * dVar25) + dVar29 * dVar31 * dVar26;
  auVar34._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x34) = auVar34;
  param_2[0x36] = uVar11;
  param_2[0x37] = uVar12;
  param_2[0x38] = uVar20;
  param_2[0x39] = 0;
  *(undefined4 *)(param_2 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x1d4) = uVar8;
  *(undefined4 *)(param_2 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = uVar10;
  param_2[0x3c] = uVar1;
  param_2[0x3d] = 0;
  param_2[0x3e] = *(undefined8 *)(param_1 + 0x180);
  if (*(char *)(param_1 + 0x1b0) == '\x01') {
    FUN_141844d90(param_2 + 0x42,param_1 + 0x1b8);
    param_2[0x45] = *(undefined8 *)(param_1 + 0x1d0);
  }
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    FUN_141414bf6(param_2 + 0x4c,param_1 + 0x1e0);
  }
  lVar18 = *(longlong *)(param_1 + 0x198);
  if (param_2[0x3f] != lVar18) {
    param_2[0x41] = 0;
  }
  param_2[0x3f] = lVar18;
  if (param_2[0x40] != *(longlong *)(param_1 + 0x1a0)) {
    param_2[0x41] = 0;
  }
  uVar20 = FUN_14477b664();
  uVar20 = FUN_14477b664(uVar20);
  param_2[0x40] = uVar20;
  param_2[0x41] = *(undefined8 *)(param_1 + 0x1a8);
  *(uint *)(param_2 + 0x46) = *(uint *)(param_2 + 0x46) | *(uint *)(param_1 + 0x34);
  return;
}



// FUNCTION 141414bf6 FUN_141414bf6 body=84 status=ok
// SIG undefined FUN_141414bf6(void)

longlong * FUN_141414bf6(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141414c4a FUN_141414c4a body=1 status=ok
// SIG undefined FUN_141414c4a(void)

void FUN_141414c4a(void)

{
  return;
}



// FUNCTION 141414c4c FUN_141414c4c body=2047 status=ok
// SIG undefined FUN_141414c4c(void)

void FUN_141414c4c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  undefined8 uVar7;
  char cVar8;
  undefined *puVar9;
  longlong lVar10;
  code ****ppppcVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  int *piVar15;
  uint *puVar16;
  uint *puVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  code *local_100;
  wchar_t *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code ***local_e0;
  code *local_d8;
  code *local_d0;
  undefined2 *local_c0;
  uint *local_b8;
  int *local_b0;
  undefined1 local_a8 [24];
  byte local_90;
  code ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar3 = *(int *)(param_1 + 400);
  if (0 < (longlong)iVar3) {
    piVar5 = *(int **)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    puVar17 = (uint *)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x128) != (uint *)0x0) {
      puVar17 = *(uint **)(param_1 + 0x128);
    }
    if ((longlong)*(int *)(param_1 + 0x130) != 0) {
      puVar16 = puVar17 + (longlong)*(int *)(param_1 + 0x130) * 6;
      local_b0 = piVar5 + (longlong)iVar3 * 0x16;
      do {
        if ((((((puVar17[1] != 0) && (uVar4 = *puVar17, -1 < (int)uVar4)) &&
              ((int)uVar4 < DAT_14c9647dc)) &&
             ((plVar12 = (longlong *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
              plVar12 != (longlong *)0x0 && (*(uint *)(plVar12 + 2) == puVar17[1])))) &&
            ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)) &&
           (plVar12 = (longlong *)*plVar12, plVar12 != (longlong *)0x0)) {
          local_90 = 0;
          piVar15 = piVar5;
          local_b8 = puVar16;
          do {
            piVar1 = piVar15 + 2;
            if (*piVar15 == DAT_14cb7e048) {
              if (DAT_14cac6e60 == 0) {
                local_88[0] = (code ***)FUN_144a7958c;
                local_d0 = FUN_14081d0ea;
                local_d8 = FUN_142b47bc4;
                local_e0 = (code ***)local_88;
                local_e8 = &LAB_1478989f1;
                local_f0 = &LAB_146391124;
                local_f8 = L"Engine";
                local_100 = (code *)0x10000000000;
                local_108 = CONCAT44(local_108._4_4_,0x10000005);
                local_110 = CONCAT44(local_110._4_4_,0x10);
                local_118 = (longlong *)CONCAT44(local_118._4_4_,0x620);
                FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
              }
              if (((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8
                    ) == DAT_14cac6e60 + 0x30)) && (lVar14 = FUN_14070d842(piVar1), lVar14 != 0)) {
                lVar10 = FUN_1402d2740();
                if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                  (**(code **)(*plVar12 + 0x638))(plVar12,piVar15[1] + -1,lVar14);
                }
              }
            }
            else if (((((piVar15[0xd] == 0) || (uVar4 = piVar15[0xc], (int)uVar4 < 0)) ||
                      (DAT_14c9647dc <= (int)uVar4)) ||
                     ((plVar13 = (longlong *)
                                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                      plVar13 == (longlong *)0x0 || ((int)plVar13[2] != piVar15[0xd])))) ||
                    (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 ||
                     (plVar2 = (longlong *)(piVar15 + 0xe), *plVar13 == 0)))) {
              piVar15[0xe] = 0;
              piVar15[0xf] = 0;
            }
            else {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951a88) &&
                 (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                local_108 = FUN_140342cba();
                local_100 = FUN_1468c7f1e;
                local_110 = 0;
                local_118 = (longlong *)0x8001;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                atexit(FUN_14280c819);
                _Init_thread_footer(&DAT_14c951a88);
              }
              plVar13 = (longlong *)*plVar2;
              if ((((plVar13 == (longlong *)0x0) || (piVar15[0x11] == 0)) ||
                  (uVar4 = piVar15[0x10], (int)uVar4 < 0)) ||
                 (((DAT_14c9647dc <= (int)uVar4 ||
                   (lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8),
                   lVar14 == 0)) ||
                  ((*(int *)(lVar14 + 0x10) != piVar15[0x11] ||
                   ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)))))) {
                if (piVar15[0x14] != 0) {
                  plVar13 = (longlong *)FUN_14007daa4(plVar2,0,0);
                  if (plVar13 == (longlong *)0x0) {
LAB_14141518b:
                    if (*plVar2 != 0) {
                      *plVar2 = 0;
                      piVar15[0x10] = 0;
                      piVar15[0x11] = 0;
                    }
                    goto LAB_141414f93;
                  }
                  puVar9 = (undefined *)plVar13[1];
                  if (DAT_14c951a40 == 0) {
                    bVar18 = puVar9 != (undefined *)0x0;
                    if (puVar9 != &DAT_14c951a38 && bVar18) {
                      do {
                        puVar9 = *(undefined **)(puVar9 + 0x30);
                        bVar18 = puVar9 != (undefined *)0x0;
                        if (puVar9 == &DAT_14c951a38) break;
                      } while (puVar9 != (undefined *)0x0);
                    }
                    if (!bVar18) goto LAB_14141518b;
                  }
                  else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c951a40) == 0) goto LAB_14141518b;
                  *plVar2 = (longlong)plVar13;
                }
                if (plVar13 == (longlong *)0x0) goto LAB_141414f93;
              }
              lVar14 = plVar13[4];
              if (lVar14 == DAT_14cb7e028) {
                if ((char)piVar15[10] == '\x01') {
                  bVar18 = *piVar1 != 0;
                }
                else {
                  FUN_1400b56fe(local_88,piVar1,1);
                  bVar18 = local_68 != 0;
                  bVar19 = (int)local_88[0] != 0;
                  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120)
                                     );
                  if (pcVar6 != (code *)0x0) {
                    ppppcVar11 = local_88;
                    if (0x18 < local_70) {
                      ppppcVar11 = (code ****)local_88[0];
                    }
                    (*pcVar6)(ppppcVar11);
                  }
                  if (0x18 < local_70) {
                    FUN_1400020a8(local_88[0]);
                  }
                  bVar18 = bVar18 && bVar19;
                }
                FUN_1449e3cec(plVar12,CONCAT71((int7)((ulonglong)piVar1 >> 8),bVar18) & 0xffffffff,1
                             );
              }
              else {
                if (lVar14 == DAT_14cb7e030) {
                  lVar10 = FUN_144a7a726();
                  if ((*(int *)(lVar10 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                      lVar10 + 0x30)) {
                    lVar14 = FUN_14070d842(piVar1);
                    if (lVar14 == 0) {
LAB_141415392:
                      lVar14 = 0;
                    }
                    else {
                      lVar10 = FUN_1406d0862();
                      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                              (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30))
                      goto LAB_141415392;
                    }
                    (**(code **)(*plVar12 + 0xa78))(plVar12,lVar14);
                    goto LAB_141414f93;
                  }
                }
                if ((*(uint *)(plVar12 + 1) & 0x20) == 0) {
                  if (lVar14 == DAT_14cb7e038) {
                    lVar10 = FUN_14081cebe();
                    if ((*(int *)(lVar10 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                        == lVar10 + 0x30)) {
                      lVar14 = FUN_14070d842(piVar1);
                      if (lVar14 == 0) {
LAB_1414150df:
                        lVar14 = 0;
                      }
                      else {
                        lVar10 = FUN_1402d2740();
                        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)
                            ) || (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                                   (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30))
                        goto LAB_1414150df;
                      }
                      (**(code **)(*plVar12 + 0x660))(plVar12,lVar14);
                      goto LAB_141414f93;
                    }
                  }
                  if (lVar14 == DAT_14cb7e040) {
                    lVar14 = FUN_14081cebe();
                    if ((*(int *)(lVar14 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
                        == lVar14 + 0x30)) {
                      lVar14 = FUN_14070d842(piVar1);
                      if (lVar14 == 0) {
LAB_141415401:
                        lVar14 = 0;
                      }
                      else {
                        lVar10 = FUN_1402d2740();
                        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)
                            ) || (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                                   (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30))
                        goto LAB_141415401;
                      }
                      (**(code **)(*plVar12 + 0x650))(plVar12,lVar14);
                      goto LAB_141414f93;
                    }
                  }
                }
                if (local_90 == 0) {
                  FUN_140719760(local_a8,plVar12,0);
                  local_90 = 1;
                }
                lVar14 = (longlong)*(int *)((longlong)plVar13 + 0x44) + (longlong)plVar12;
                cVar8 = FUN_144a82d4a(piVar1,plVar13,lVar14);
                uVar7 = DAT_14c872be8;
                if ((cVar8 == '\0') && ((char)piVar15[10] == '\b')) {
                  local_c0 = &DAT_149dfb77a;
                  if (piVar15[4] != 0) {
                    local_c0 = *(undefined2 **)piVar1;
                  }
                  cVar8 = FUN_140d50488(plVar13,0,DAT_14c872be8);
                  if ((local_c0 != (undefined2 *)0x0) && (cVar8 != '\0')) {
                    local_108 = uVar7;
                    local_110 = CONCAT44(local_110._4_4_,0x8000000);
                    local_118 = plVar12;
                    (**(code **)(*plVar13 + 0xf8))(plVar13,local_c0,lVar14);
                  }
                }
              }
            }
LAB_141414f93:
            piVar15 = piVar15 + 0x16;
          } while (piVar15 != local_b0);
          puVar16 = local_b8;
          if ((local_90 & 1) != 0) {
            FUN_14071963e(local_a8);
            puVar16 = local_b8;
          }
        }
        puVar17 = puVar17 + 6;
      } while (puVar17 != puVar16);
    }
    FUN_1401610c7(piVar5,iVar3);
    if (piVar5 != (int *)0x0) {
      FUN_1400020a8(piVar5);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14141545c FUN_14141545c body=231 status=ok
// SIG undefined FUN_14141545c(void)

undefined8 FUN_14141545c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 != 0) {
    lVar5 = (longlong)iVar1 * 2;
    lVar3 = 0;
    do {
      if (*(short *)(*param_1 + lVar3 * 2) == 0x27) {
        iVar2 = (int)lVar3;
        if (iVar2 != -1) {
          uVar4 = 0;
          if (iVar2 < -1) goto LAB_141415499;
          iVar6 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar6 = 0;
          }
          if (iVar6 <= (int)(lVar3 + 1)) goto LAB_141415499;
          if (*(short *)(*param_1 + -2 + (longlong)iVar6 * 2) == 0x27) {
            uVar4 = 1;
            if (param_2 != (longlong *)0x0) {
              FUN_144a63a7c(param_1,&local_30,lVar3 + 1,(iVar6 - iVar2) + -2);
              if (&local_30 == param_2) {
                if (local_30 != 0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*param_2 != 0) {
                  FUN_1400020a8();
                }
                *param_2 = local_30;
                *(undefined4 *)(param_2 + 1) = local_28;
                *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
              }
            }
            goto LAB_141415499;
          }
        }
        break;
      }
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + -2;
    } while (lVar5 != 0);
  }
  uVar4 = 0;
LAB_141415499:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141415544 FUN_141415544 body=221 status=ok
// SIG undefined FUN_141415544(void)

longlong FUN_141415544(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb62020 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486e06fd;
    local_40 = &LAB_1464f6490;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xf8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxProfileProgressRole",&DAT_14cb62020,&DAT_1486e06fc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62020;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141415622 FUN_141415622 body=2564 status=ok
// SIG undefined FUN_141415622(void)

void FUN_141415622(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *_Src;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  longlong *plStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((*(int *)((longlong)param_1 + 0x54) == 4) || (iVar7 = *(int *)(param_2 + 8), iVar7 == 0)) ||
     (iVar4 = FUN_14119d564(), iVar7 != iVar4)) goto LAB_1414156b0;
  FUN_1411cb5f6(&local_70,*(undefined4 *)(param_2 + 4));
  plVar8 = local_68;
  if (local_70 == (undefined8 *)0x0) goto LAB_141415686;
  local_80 = local_70;
  local_78 = local_68;
  if (local_68 == (longlong *)0x0) {
    cVar3 = FUN_146583796(&local_80);
    if (cVar3 == '\0') goto LAB_141415718;
LAB_1414157ad:
    plVar8 = local_68;
    if (*(char *)(param_2 + 0xc) != '\x03') goto LAB_141415686;
    local_98 = local_70;
    uStack_90 = local_68;
    if (local_68 == (longlong *)0x0) {
      FUN_140b7090e(param_1,&local_80,&local_98);
    }
    else {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      FUN_140b7090e(param_1,&local_80);
      if (plVar8 != (longlong *)0x0) {
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
    plVar8 = local_68;
    if (((local_80 == (undefined8 *)0x0) || (*(int *)(local_80 + 2) == 3)) ||
       (*(int *)((longlong)local_80 + 0x14) != 0)) goto LAB_141415e31;
    local_98 = local_70;
    uStack_90 = local_68;
    if (local_68 == (longlong *)0x0) {
      cVar3 = FUN_148a98e32(param_1,&local_98);
    }
    else {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      cVar3 = FUN_148a98e32(param_1);
      if (plVar8 != (longlong *)0x0) {
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
    if (cVar3 == '\0') {
      FUN_148a97324(param_1);
      goto LAB_141415e31;
    }
    FUN_148a96856(param_1);
    FUN_140056680(&local_98,&DAT_14b438b8e);
    (**(code **)(*param_1 + 0xa8))(param_1,&local_98);
LAB_141415e27:
    if (local_98 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
LAB_141415e31:
    plVar8 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_78 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          lVar15 = *plVar8;
          goto LAB_141415e64;
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    cVar3 = FUN_146583796();
    if (plVar8 != (longlong *)0x0) {
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
    if (cVar3 != '\0') goto LAB_1414157ad;
LAB_141415718:
    plVar8 = local_68;
    if (*(char *)(param_2 + 0xc) == '\0') {
      local_98 = local_70;
      uStack_90 = local_68;
      if (local_68 == (longlong *)0x0) {
        FUN_140b7090e(param_1,&local_80,&local_98);
      }
      else {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
        FUN_140b7090e(param_1,&local_80);
        if (plVar8 != (longlong *)0x0) {
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
      if (local_80 == (undefined8 *)0x0) {
        local_a8 = local_70;
        plStack_a0 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
        local_f8 = 0;
        FUN_141647a44(param_1,&local_98,&local_a8,1);
        plVar8 = local_78;
        plVar2 = uStack_90;
        if (uStack_90 == (longlong *)0x0) {
          local_80 = local_98;
          if (local_78 != (longlong *)0x0) {
            local_78 = (longlong *)0x0;
LAB_1414159ff:
            local_80 = local_98;
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar7 = *piVar1;
              UNLOCK();
joined_r0x000141415a2c:
              if (iVar7 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
          UNLOCK();
          local_80 = local_98;
          if (uStack_90 == local_78) {
            LOCK();
            plVar8 = uStack_90 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*uStack_90)(uStack_90);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar7 = *piVar1;
              UNLOCK();
              plVar8 = plVar2;
              goto joined_r0x000141415a2c;
            }
          }
          else {
            local_78 = uStack_90;
            if (plVar8 != (longlong *)0x0) goto LAB_1414159ff;
          }
        }
        plVar8 = uStack_90;
        if (uStack_90 != (longlong *)0x0) {
          LOCK();
          plVar2 = uStack_90 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*uStack_90)(uStack_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        plVar8 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_a0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (local_80 != (undefined8 *)0x0) goto LAB_141415a99;
      }
      else {
LAB_141415a99:
        if (*(int *)((longlong)local_80 + 0x14) != 0) {
          local_e8 = local_80;
          local_98 = (undefined8 *)0x0;
          uStack_90 = (longlong *)0x0;
          FUN_1408be27e(&local_98,(int)param_1[0x7b]);
          if ((longlong)(int)param_1[0x7b] != 0) {
            lVar15 = param_1[0x7a];
            local_e0 = local_e8 + 4;
            lVar17 = (longlong)(int)param_1[0x7b] << 4;
            do {
              local_a8 = (undefined8 *)0x0;
              plStack_a0 = (longlong *)0x0;
              FUN_14101cdd4(local_e0,lVar15,&local_a8);
              plVar8 = uStack_90;
              lVar11 = (longlong)(int)uStack_90;
              uVar5 = (int)uStack_90 + 1;
              uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,uVar5);
              if (uStack_90._4_4_ < uVar5) {
                FUN_1447a1bd6(&local_98,(ulonglong)plVar8 & 0xffffffff);
              }
              _Src = local_a8;
              puVar16 = local_98 + lVar11 * 2;
              local_98[lVar11 * 2] = 0;
              lVar14 = (longlong)(int)plStack_a0;
              *(int *)(local_98 + lVar11 * 2 + 1) = (int)plStack_a0;
              if (lVar14 == 0) {
                *(undefined4 *)((longlong)puVar16 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(puVar16,(ulonglong)plStack_a0 & 0xffffffff,0);
                memcpy((void *)*puVar16,_Src,lVar14 * 2);
              }
              if (local_a8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              lVar15 = lVar15 + 0x10;
              lVar17 = lVar17 + -0x10;
            } while (lVar17 != 0);
          }
          FUN_1418c07b4(local_e8 + 4,param_2 + 0x10);
          if (0 < (int)param_1[0x7b]) {
            lVar15 = 0;
            do {
              puVar16 = local_80;
              lVar17 = param_1[0x7a] + lVar15 * 0x10;
              local_a8 = (undefined8 *)0x0;
              plStack_a0 = (longlong *)0x0;
              FUN_14101cdd4(local_80 + 4,lVar17);
              if ((int)plStack_a0 == *(int *)(local_98 + lVar15 * 2 + 1)) {
                if (1 < (int)plStack_a0) {
                  lVar11 = 0;
                  while( true ) {
                    uVar9 = *(ushort *)((longlong)local_a8 + lVar11);
                    uVar10 = (ulonglong)uVar9;
                    uVar12 = *(ushort *)(local_98[lVar15 * 2] + lVar11);
                    if (uVar9 != uVar12) break;
                    if (uVar9 == 0) goto LAB_141415ccf;
LAB_141415c45:
                    lVar11 = lVar11 + 2;
                  }
                  if ((uVar12 | uVar9) < 0x80) {
                    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                    uVar13 = (ulonglong)uVar12;
                    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar13]) goto LAB_141415c45;
                  }
                  if (uVar9 != uVar12) goto LAB_141415c79;
                }
              }
              else if (*(int *)(local_98 + lVar15 * 2 + 1) + (int)plStack_a0 != 1) {
LAB_141415c79:
                local_b8 = puVar16;
                local_b0 = local_78;
                if (local_78 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_78 + 1) = (int)local_78[1] + 1;
                  UNLOCK();
                }
                (**(code **)(*param_1 + 0x78))(param_1,&local_b8,lVar17,&local_a8);
                plVar8 = local_b0;
                if (local_b0 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_b0 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_b0)(local_b0);
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
LAB_141415ccf:
              if (local_a8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < (int)param_1[0x7b]);
          }
          local_c8 = (longlong *)*local_80;
          local_c0 = (longlong *)local_80[1];
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
            UNLOCK();
          }
          uVar6 = (**(code **)(*local_c8 + 0x40))();
          iVar7 = FUN_140b6c20e(param_1 + 0x6e,uVar6,&local_c8);
          plVar8 = local_c0;
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_c0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          puVar16 = local_80;
          if (iVar7 != -1) {
            local_a8 = (undefined8 *)0x0;
            plStack_a0 = (longlong *)0x0;
            cVar3 = FUN_14101cdd4(local_80 + 4,&DAT_14cb97670);
            if (cVar3 != '\0') {
              local_d8 = *puVar16;
              local_d0 = puVar16[1];
              if (local_d0 != 0) {
                LOCK();
                *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
                UNLOCK();
                puVar16 = local_80;
              }
              FUN_1459b6cd8(param_1 + 0x6e,&local_d8);
              local_b0 = local_78;
              if (local_78 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_78 + 1) = (int)local_78[1] + 1;
                UNLOCK();
              }
              local_b8 = puVar16;
              FUN_145c7d50e(param_1,&local_b8);
              plVar8 = local_b0;
              if (local_b0 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_b0 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_b0)(local_b0);
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
            if (local_a8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          plVar8 = local_78;
          if (param_1[0x24] != 0) {
            local_a8 = local_80;
            plStack_a0 = local_78;
            if (local_78 == (longlong *)0x0) {
              FUN_145c65538(param_1[0x24],&local_a8);
            }
            else {
              LOCK();
              *(int *)(local_78 + 1) = (int)local_78[1] + 1;
              UNLOCK();
              FUN_145c65538();
              if (plVar8 != (longlong *)0x0) {
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
          }
          plStack_a0 = local_78;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_78 + 1) = (int)local_78[1] + 1;
            UNLOCK();
          }
          local_a8 = local_80;
          (**(code **)(*param_1 + 0x70))(param_1,&local_a8);
          plVar8 = plStack_a0;
          if (plStack_a0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_a0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_a0)(plStack_a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          FUN_1447a1747(local_98,(ulonglong)uStack_90 & 0xffffffff);
          goto LAB_141415e27;
        }
      }
      goto LAB_141415e31;
    }
    if (*(char *)(param_2 + 0xc) == '\x03') {
      local_80 = local_70;
      local_78 = local_68;
      if (local_68 == (longlong *)0x0) {
        FUN_145ffe406(param_1,&local_80);
        goto LAB_141415686;
      }
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      FUN_145ffe406(param_1);
      if (plVar8 == (longlong *)0x0) goto LAB_141415686;
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) goto LAB_141415686;
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_141415686;
      lVar15 = *plVar8;
LAB_141415e64:
      (**(code **)(lVar15 + 0x10))(plVar8);
    }
  }
LAB_141415686:
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_68 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
LAB_1414156b0:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141416028 FUN_141416028 body=498 status=ok
// SIG undefined FUN_141416028(void)

undefined8
FUN_141416028(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,byte param_6,ulonglong param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = ((param_7 & 0x5555555555555555) >> 1 | param_7 & 0x5555555555555555) & 0x3333333333333333;
  uVar3 = (uVar3 >> 2 | uVar3) & 0xf0f0f0f0f0f0f0f;
  uVar3 = (uVar3 >> 4 | uVar3) & 0xff00ff00ff00ff;
  uVar3 = uVar3 >> 8 | uVar3;
  iVar1 = (uint)param_6 + *(int *)(param_1 + 0x18);
  uVar4 = (ulonglong)
          ((*(int *)(param_1 + 0x10) >> ((byte)iVar1 & 0x1f)) +
          ((uint)uVar3 & 0xffff | (uint)(uVar3 >> 0x10) & 0xffff0000));
  uVar3 = param_7 & 0x2222222222222222 | param_7 >> 1 & 0x4444444444444444;
  uVar3 = (uVar3 >> 3 | uVar3 >> 1) & 0xf0f0f0f0f0f0f0f;
  uVar3 = (uVar3 >> 4 | uVar3) & 0xff00ff00ff00ff;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar5 = (ulonglong)
          ((*(int *)(param_1 + 0x14) >> ((byte)iVar1 & 0x1f)) +
          ((uint)uVar3 & 0xffff | (uint)(uVar3 >> 0x10) & 0xffff0000));
  uVar3 = (uVar4 << 0x10 | uVar4) & 0xffff0000ffff;
  uVar3 = (uVar3 << 8 | uVar3) & 0xff00ff00ff00ff;
  uVar3 = (uVar3 << 4 | uVar3) & 0xf0f0f0f0f0f0f0f;
  uVar4 = (uVar3 * 4 | uVar3) & 0x3333333333333333;
  uVar3 = (uVar5 << 0x10 | uVar5) & 0xffff0000ffff;
  uVar3 = (uVar3 << 8 | uVar3) & 0xff00ff00ff00ff;
  uVar3 = (uVar3 << 4 | uVar3) & 0xf0f0f0f0f0f0f0f;
  uVar3 = (uVar3 * 4 | uVar3) & 0x3333333333333333;
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
            (*(longlong **)(param_1 + 8),param_2,param_3,param_4,param_5,(char)iVar2,
             (uVar3 * 2 | uVar3 * 4) & 0xaaaaaaaaaaaaaaaa | (uVar4 * 2 | uVar4) & 0x5555555555555555
             ,param_8);
  return param_2;
}



// FUNCTION 14141621a FUN_14141621a body=91 status=ok
// SIG undefined FUN_14141621a(void)

undefined8 * FUN_14141621a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  *param_2 = 0;
  plVar1 = *(longlong **)(param_1 + 0xf0);
  iVar3 = 1;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x3e0))(plVar1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*plVar1 + 0x3e0))(plVar1);
      iVar3 = (uint)*(byte *)(lVar2 + 0x4285) * 2 + 1;
    }
  }
  *(int *)(param_2 + 1) = iVar3;
  return param_2;
}



// FUNCTION 141416276 FUN_141416276 body=62 status=ok
// SIG undefined FUN_141416276(void)

longlong FUN_141416276(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (lVar1 != 0) {
    lVar2 = FUN_1410758a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1414162b4 FUN_1414162b4 body=873 status=ok
// SIG undefined FUN_1414162b4(void)

void FUN_1414162b4(longlong param_1,double *param_2,float param_3,float param_4,int param_5,
                  char param_6)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x40);
  bVar5 = lVar1 == 0 || *(byte *)(lVar1 + 0x90) < 2;
  if (bVar5) {
    uVar15 = 0;
    uVar16 = 0;
    uVar13 = 0;
    uVar14 = 0;
    dVar9 = 0.0;
  }
  else {
    dVar9 = *(double *)(lVar1 + 0xf0);
    uVar13 = (undefined4)*(undefined8 *)(lVar1 + 0xf8);
    uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0xf8) >> 0x20);
    uVar15 = (undefined4)*(undefined8 *)(lVar1 + 0x100);
    uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x100) >> 0x20);
  }
  dVar6 = (double)*(float *)(lVar1 + 0x40);
  dVar8 = (double)*(float *)(lVar1 + 0x44);
  dVar10 = (double)*(float *)(lVar1 + 0x48);
  dVar11 = (double)*(float *)(lVar1 + 0x4c);
  dVar12 = dVar6 * (double)CONCAT44(uVar14,uVar13) - dVar9 * dVar8;
  dVar2 = dVar10 * dVar9 - (double)CONCAT44(uVar16,uVar15) * dVar6;
  dVar3 = dVar8 * (double)CONCAT44(uVar16,uVar15) - (double)CONCAT44(uVar14,uVar13) * dVar10;
  dVar12 = dVar12 + dVar12;
  dVar2 = dVar2 + dVar2;
  dVar3 = dVar3 + dVar3;
  dVar7 = ((dVar6 * dVar2 - dVar3 * dVar8) + dVar12 * dVar11 + (double)CONCAT44(uVar16,uVar15) +
          *(double *)(lVar1 + 0x30)) - param_2[2];
  dVar6 = ((dVar10 * dVar3 - dVar12 * dVar6) + dVar2 * dVar11 + (double)CONCAT44(uVar14,uVar13) +
          *(double *)(lVar1 + 0x28)) - param_2[1];
  dVar9 = ((dVar8 * dVar12 - dVar2 * dVar10) + dVar11 * dVar3 + dVar9 + *(double *)(lVar1 + 0x20)) -
          *param_2;
  dVar12 = SQRT(dVar7 * dVar7 + dVar9 * dVar9 + dVar6 * dVar6);
  dVar10 = (double)param_3;
  if (dVar10 <= dVar12) goto LAB_14141652d;
  local_b8 = DAT_14c8464f0;
  local_c8 = DAT_14c8464e0;
  dStack_c0 = DAT_14c8464e8;
  if (dVar12 <= 0.0) {
    local_c8 = (double)param_4;
    dVar7 = DAT_14c8462e8 * local_c8;
    dStack_c0 = DAT_14c8462e0 * local_c8;
    local_c8 = local_c8 * DAT_14c8462d8;
    local_b8 = dVar7;
  }
  else {
    dVar7 = dVar7 / dVar12;
    if (param_5 != 0) {
      if ((param_5 != 1) || (dVar10 - dVar12 <= 0.0)) goto LAB_1414164e2;
      param_4 = (float)((double)param_4 * ((dVar10 - dVar12) / dVar10) + 0.0);
    }
    local_c8 = (double)param_4;
    dVar7 = dVar7 * local_c8;
    dStack_c0 = (dVar6 / dVar12) * local_c8;
    local_c8 = (dVar9 / dVar12) * local_c8;
    local_b8 = dVar7;
  }
LAB_1414164e2:
  if (param_6 == '\0') {
    pdVar4 = &local_c8;
  }
  else {
    if (bVar5) {
      dVar7 = 0.0;
    }
    else {
      dVar7 = *(double *)(lVar1 + 0x148);
    }
    local_98 = local_b8 * dVar7;
    local_a0 = dStack_c0 * dVar7;
    dVar7 = dVar7 * local_c8;
    pdVar4 = &local_a8;
    local_a8 = dVar7;
  }
  FUN_140e0d8e0(dVar7,pdVar4);
LAB_14141652d:
  if ((local_90 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14141661e FUN_14141661e body=51 status=ok
// SIG undefined FUN_14141661e(void)

void FUN_14141661e(LPCRITICAL_SECTION param_1)

{
  FUN_144760e21(param_1[1].DebugInfo,param_1[1].LockCount);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000141416643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 141416652 FUN_141416652 body=1082 status=ok
// SIG undefined FUN_141416652(void)

void FUN_141416652(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xe30) != 0) {
    FUN_14018802a();
    *(undefined8 *)(param_1 + 0xe30) = 0;
  }
  FUN_146ffca6c(*(undefined8 *)(param_1 + 0xe18),*(undefined4 *)(param_1 + 0xe20));
  if (*(longlong *)(param_1 + 0xe18) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe10) = 0;
  if (*(longlong *)(param_1 + 0xe08) != 0) {
    FUN_1400020a8();
  }
  FUN_1403950f6(param_1 + 0xdc8);
  *(undefined4 *)(param_1 + 0xda0) = 0;
  if (*(longlong *)(param_1 + 0xd98) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd60) = 0;
  if (*(int *)(param_1 + 0xd64) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0xd58),0);
  }
  *(undefined8 *)(param_1 + 0xd88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd80) = 0;
  if (0x80 < *(uint *)(param_1 + 0xd84)) {
    *(undefined4 *)(param_1 + 0xd84) = 0x80;
    FUN_1446efbd8(param_1 + 0xd68,0);
  }
  if (*(longlong *)(param_1 + 0xd78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd50) = 0;
  if (*(longlong *)(param_1 + 0xd48) != 0) {
    FUN_1400020a8();
  }
  FUN_145c17632(param_1 + 0xd08);
  *(undefined4 *)(param_1 + 0xd00) = 0;
  if (*(longlong *)(param_1 + 0xcf8) != 0) {
    FUN_1400020a8();
  }
  FUN_145c17632(param_1 + 0xcb8);
  *(undefined4 *)(param_1 + 0xcb0) = 0;
  if (*(longlong *)(param_1 + 0xca8) != 0) {
    FUN_1400020a8();
  }
  FUN_145c17668(param_1 + 0xc68);
  *(undefined4 *)(param_1 + 0xc60) = 0;
  if (*(longlong *)(param_1 + 0xc58) != 0) {
    FUN_1400020a8();
  }
  FUN_145c17668(param_1 + 0xc18);
  FUN_145c17520(param_1 + 0x978);
  plVar1 = *(longlong **)(param_1 + 0x970);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  FUN_146294f82(param_1 + 0x8d0);
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    FUN_1400020a8();
  }
  FUN_140cb527e(param_1 + 0x860);
  *(undefined4 *)(param_1 + 0x858) = 0;
  if (*(longlong *)(param_1 + 0x850) != 0) {
    FUN_1400020a8();
  }
  FUN_14010514e(param_1 + 0x810);
  *(undefined4 *)(param_1 + 0x800) = 0;
  if (*(longlong *)(param_1 + 0x7f8) != 0) {
    FUN_1400020a8();
  }
  FUN_14010514e(param_1 + 0x7b8);
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x770) = 0;
  if (*(int *)(param_1 + 0x774) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0x768),0);
  }
  *(undefined8 *)(param_1 + 0x798) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x790) = 0;
  if (0x80 < *(uint *)(param_1 + 0x794)) {
    *(undefined4 *)(param_1 + 0x794) = 0x80;
    FUN_1446efbd8(param_1 + 0x778,0);
  }
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x768) != 0) {
    FUN_1400020a8();
  }
  FUN_1456bc624(param_1 + 0x668);
  FUN_1456bc624(param_1 + 0x568);
  *(undefined4 *)(param_1 + 0x560) = 0;
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FUN_1400020a8();
  }
  FUN_1401fc242(param_1 + 0x518);
  *(undefined4 *)(param_1 + 0x510) = 0;
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (*(int *)(param_1 + 0x4d4) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0x4c8),0);
  }
  *(undefined8 *)(param_1 + 0x4f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  if (0x80 < *(uint *)(param_1 + 0x4f4)) {
    *(undefined4 *)(param_1 + 0x4f4) = 0x80;
    FUN_1446efbd8(param_1 + 0x4d8,0);
  }
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FUN_1400020a8();
  }
  FUN_145969a1a(param_1);
  return;
}



// FUNCTION 141416a8c FUN_141416a8c body=228 status=ok
// SIG undefined FUN_141416a8c(void)

longlong FUN_141416a8c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbd0b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140940982;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465be858;
    local_38 = &LAB_148ca0a77;
    local_40 = FUN_1418d1d37;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x1068;
    FUN_14081cfa3(L"/Script/OakGame",L"OakVehicleWeapon",&DAT_14cbbd0b8,&DAT_148ca0a76);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbd0b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141416b72 FUN_141416b72 body=72 status=ok
// SIG undefined FUN_141416b72(void)

void FUN_141416b72(uint *param_1,longlong param_2)

{
  if ((char)param_1[1] == '\0') {
    FUN_145811d76(param_1,0);
    *param_1 = *param_1 & ~*(uint *)(param_2 + 8);
    if ((*param_1 == 0) && (*(longlong *)(param_1 + 10) != 0)) {
      FUN_140ae0922();
      FUN_1463cd9b8(*(undefined8 *)(param_1 + 10),0);
      return;
    }
  }
  return;
}



// FUNCTION 141416bba FUN_141416bba body=184 status=ok
// SIG undefined FUN_141416bba(void)

bool FUN_141416bba(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc))) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x108);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 200) + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar3 * 0x20) == param_2) {
          if (lVar2 == 0) {
            return false;
          }
          if (lVar2 == -8) {
            return false;
          }
          return 0 < *(int *)(lVar2 + 0x10);
        }
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
    }
  }
  return false;
}



// FUNCTION 141416c72 FUN_141416c72 body=868 status=ok
// SIG undefined FUN_141416c72(void)

void FUN_141416c72(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1403a682c;
      local_90 = 0;
      local_98 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = 0;
      local_98 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_50 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_50);
    }
  }
  uVar2 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar5 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar5);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar4 = FUN_141416fd8(&local_70,uVar2);
  *param_3 = uVar4;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141416fd8 FUN_141416fd8 body=302 status=ok
// SIG undefined FUN_141416fd8(void)

int FUN_141416fd8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)FUN_1401cd47c(param_2);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  lVar4 = FUN_1401cd3fa(param_1);
  if (lVar4 != 0) {
    lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    iVar7 = *(int *)(lVar5 + 0xb8);
    if ((longlong)iVar7 == 0) {
      return 0;
    }
    lVar5 = *(longlong *)(lVar5 + 0xb0);
    lVar10 = 0;
    while ((lVar1 = *(longlong *)(lVar5 + lVar10), lVar1 == 0 ||
           (lVar6 = FUN_1401cd362(lVar1), lVar6 != lVar4))) {
      lVar10 = lVar10 + 8;
      if ((longlong)iVar7 * 8 == lVar10) {
        return 0;
      }
    }
    if ((longlong)*(int *)(lVar1 + 0x140) == 0) {
      return 0;
    }
    lVar4 = *(longlong *)(lVar1 + 0x138);
    lVar5 = (longlong)*(int *)(lVar1 + 0x140) * 0xa8;
    while( true ) {
      puVar2 = *(ulonglong **)(lVar4 + 0x50);
      if (puVar2 == (ulonglong *)0x0) {
        uVar9 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar2 & 0xffffffff;
        uVar9 = *puVar2 & 0xffffffff00000000;
      }
      if ((*(ulonglong *)(param_1 + 0x18) == *(ulonglong *)(lVar4 + 0x48)) ||
         ((uVar8 | uVar9) != 0 && *(ulonglong *)(param_1 + 0x18) == (uVar8 | uVar9))) break;
      lVar4 = lVar4 + 0xa8;
      lVar5 = lVar5 + -0xa8;
      if (lVar5 == 0) {
        return 0;
      }
    }
    if (lVar4 == 0) {
      return 0;
    }
    if (puVar2 == (ulonglong *)0x0) {
      iVar7 = 0;
    }
    else if ((char)puVar2[1] == '\x01') {
      iVar7 = *(int *)((longlong)puVar2 + 0xc);
    }
    else {
      iVar7 = 0x7fffffff;
    }
    if (*(int *)(lVar4 + 0x98) < iVar7) {
      iVar7 = *(int *)(lVar4 + 0x98);
    }
    return iVar7 + *(int *)(lVar4 + 0x94);
  }
  return 0;
}



// FUNCTION 141417106 FUN_141417106 body=1155 status=ok
// SIG undefined FUN_141417106(void)

void FUN_141417106(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0xb;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_14170fd90;
      local_a0 = 0x8000000000000000;
      local_a8 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_50);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_50 = (undefined4)uVar2;
      uStack_4c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_50);
    }
  }
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1408a629c;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_54 = (undefined4)uVar2;
      uStack_50 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_54);
    }
  }
  uVar4 = local_54;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = CONCAT44(uStack_4c,uStack_50);
  local_68 = local_48;
  local_60 = 0;
  local_80 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_78 = uStack_30;
  FUN_14141758a(&local_80,&local_70,uVar4);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141758a FUN_14141758a body=350 status=ok
// SIG undefined FUN_14141758a(void)

void FUN_14141758a(longlong *param_1,undefined8 param_2,float param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar2 = FUN_140414d56();
    if (lVar2 != 0) {
      if (*param_1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      uVar3 = (**(code **)(*plVar4 + 0x10))();
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      local_3c = 0xff;
      local_40 = 0;
      local_48 = 0;
      FUN_14488cef8(uVar3,&local_58,lVar2,0);
      if ((((plStack_50 != (longlong *)0x0) && (local_58._4_4_ != 0)) && (-1 < (int)(uint)local_58))
         && ((int)(uint)local_58 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == local_58._4_4_)) &&
           ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
          uVar3 = (**(code **)(*plStack_50 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar3,&local_58);
          if (cVar1 != '\0') {
            lVar2 = FUN_14008e0ae(&local_58);
            if (1.0 <= param_3) {
              param_3 = 1.0;
            }
            if (param_3 <= 0.0) {
              param_3 = 0.0;
            }
            FUN_1409d461e(lVar2,(*(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x24)) * param_3,0);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414176ea FUN_1414176ea body=115 status=ok
// SIG undefined FUN_1414176ea(void)

undefined4 FUN_1414176ea(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)param_1;
  uStack_34 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_30 = *(undefined4 *)(param_1 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
  uVar1 = FUN_1449072f6(&local_38,0);
  if ((char)uVar1 != '\0') {
    FUN_1446f82e2(&local_28,*(undefined4 *)(param_1 + 1),*param_1,1);
    *param_2 = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141775e FUN_14141775e body=37 status=ok
// SIG undefined FUN_14141775e(void)

bool FUN_14141775e(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_140d80c3e();
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_14490d72a(lVar2);
    bVar3 = iVar1 == 3;
  }
  return bVar3;
}



// FUNCTION 141417784 FUN_141417784 body=1752 status=ok
// SIG undefined FUN_141417784(void)

void FUN_141417784(longlong param_1,uint *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  int local_98 [2];
  undefined8 local_90;
  uint local_88;
  longlong *local_80;
  longlong *local_78;
  uint *local_70;
  longlong **local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar19 = (longlong *)(param_1 + 0x118);
  uVar12 = *param_2;
  uVar13 = param_2[2];
  if (param_3 == '\0') {
    if (uVar13 != 0) {
      uVar12 = uVar13 >> 0xd ^ uVar12 - uVar13;
      uVar14 = uVar12 << 8 ^ (-0x61c88647 - uVar13) - uVar12;
      uVar18 = uVar14 >> 0xd ^ (uVar13 - uVar12) - uVar14;
      uVar12 = uVar18 >> 0xc ^ (uVar12 - uVar14) - uVar18;
      uVar13 = uVar12 << 0x10 ^ (uVar14 - uVar18) - uVar12;
      uVar18 = uVar13 >> 5 ^ (uVar18 - uVar12) - uVar13;
      uVar14 = uVar18 >> 3 ^ (uVar12 - uVar13) - uVar18;
      uVar12 = uVar14 << 10 ^ (uVar13 - uVar18) - uVar14;
      uVar12 = uVar12 >> 0xf ^ uVar18 - (uVar14 + uVar12);
    }
    iVar9 = FUN_1414b9be0(plVar19,uVar12,param_2);
    if ((iVar9 != -1) &&
       (lVar17 = *plVar19 + (longlong)iVar9 * 0x28, plVar19 = (longlong *)(lVar17 + 0x10),
       plVar19 != (longlong *)0x0 && lVar17 != 0)) {
      lVar17 = *plVar19;
      lVar10 = *(longlong *)(lVar17 + 0x18);
      iVar9 = *(int *)(lVar17 + 0x20);
      uVar15 = 0;
      if ((longlong)iVar9 != 0) {
        lVar17 = 0;
        do {
          (**(code **)(**(longlong **)(lVar10 + lVar17) + 0x18))();
          lVar17 = lVar17 + 0x10;
        } while ((longlong)iVar9 * 0x10 != lVar17);
        lVar17 = *plVar19;
        uVar15 = *(undefined4 *)(lVar17 + 0x20);
        lVar10 = *(longlong *)(lVar17 + 0x18);
      }
      FUN_140e02d42(lVar10,uVar15);
      *(undefined4 *)(lVar17 + 0x20) = 0;
      if (*(int *)(lVar17 + 0x24) != 0) {
        FUN_1457b2512(lVar17 + 0x18,0);
      }
      FUN_145a324b4(*plVar19,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
    }
  }
  else {
    if (uVar13 != 0) {
      uVar12 = uVar13 >> 0xd ^ uVar12 - uVar13;
      uVar14 = uVar12 << 8 ^ (-0x61c88647 - uVar13) - uVar12;
      uVar18 = uVar14 >> 0xd ^ (uVar13 - uVar12) - uVar14;
      uVar12 = uVar18 >> 0xc ^ (uVar12 - uVar14) - uVar18;
      uVar13 = uVar12 << 0x10 ^ (uVar14 - uVar18) - uVar12;
      uVar18 = uVar13 >> 5 ^ (uVar18 - uVar12) - uVar13;
      uVar14 = uVar18 >> 3 ^ (uVar12 - uVar13) - uVar18;
      uVar12 = uVar14 << 10 ^ (uVar13 - uVar18) - uVar14;
      uVar12 = uVar12 >> 0xf ^ uVar18 - (uVar14 + uVar12);
    }
    iVar9 = FUN_1414b9be0(plVar19,uVar12,param_2);
    if (iVar9 == -1) {
      local_78 = (longlong *)FUN_14001cc68(0x40,0x10);
      local_78[1] = (longlong)&DAT_100000001;
      *local_78 = (longlong)&PTR_FUN_14b97d3e0;
      local_80 = local_78 + 2;
      local_78[2] = param_1;
      local_78[3] = 0;
      *(undefined4 *)(local_78 + 4) = 0;
      local_78[5] = 0;
      local_78[6] = 0;
      *(undefined1 *)(local_78 + 7) = 0;
      local_68 = &local_80;
      local_70 = param_2;
      FUN_145af1c1a(plVar19,local_98);
      plVar19 = local_78;
      lVar17 = *(longlong *)(param_1 + 0x118);
      local_b0 = (longlong *)(lVar17 + (longlong)local_98[0] * 0x28 + 0x10);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_78 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
      plVar19 = local_b0;
      lVar10 = *local_b0;
      *(uint *)(lVar10 + 0x10) = param_2[2];
      *(undefined8 *)(lVar10 + 8) = *(undefined8 *)param_2;
      cVar8 = FUN_14141775e(param_1);
      if (cVar8 == '\0') {
        local_90 = *(undefined8 *)param_2;
        local_88 = param_2[2];
        FUN_1448075d0(&local_70);
        if (DAT_14cbcdc38 == 0) {
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          lVar10 = FUN_144837462(DAT_14cbcdc38,&local_70);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if ((lVar10 != 0) && ((longlong)*(int *)(lVar10 + 0xb8) != 0)) {
            lVar4 = *(longlong *)(lVar10 + 0xb0);
            local_a8 = (longlong *)(lVar17 + (longlong)local_98[0] * 0x28 + 0x18);
            local_a0 = (longlong)*(int *)(lVar10 + 0xb8) * 0x18;
            lVar17 = 0;
            do {
              (**(code **)(**(longlong **)(lVar4 + lVar17) + 0x10))
                        (*(longlong **)(lVar4 + lVar17),&local_80);
              plVar2 = local_78;
              plVar6 = local_80;
              if (local_80 != (longlong *)0x0) {
                lVar10 = *plVar19;
                if (local_78 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_78 + 1) = (int)local_78[1] + 1;
                  UNLOCK();
                }
                iVar9 = *(int *)(lVar10 + 0x20);
                *(uint *)(lVar10 + 0x20) = iVar9 + 1U;
                if (*(uint *)(lVar10 + 0x24) < iVar9 + 1U) {
                  FUN_146557a24((longlong *)(lVar10 + 0x18),iVar9);
                }
                lVar10 = *(longlong *)(lVar10 + 0x18);
                *(longlong **)(lVar10 + (longlong)iVar9 * 0x10) = plVar6;
                *(longlong **)(lVar10 + 8 + (longlong)iVar9 * 0x10) = plVar2;
                if (plVar2 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar19 = plVar2 + 1;
                  *(int *)plVar19 = (int)*plVar19 + -1;
                  UNLOCK();
                  if ((int)*plVar19 == 0) {
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
                plVar6 = local_80;
                puVar5 = *(uint **)(lVar4 + lVar17);
                plVar19 = *(longlong **)(lVar4 + 8 + lVar17);
                if (plVar19 == (longlong *)0x0) {
                  local_68 = (longlong **)0x0;
                  local_70 = puVar5;
                  uVar11 = FUN_143defffc(param_1);
                  FUN_143defa18(plVar6,uVar11,&local_70);
                }
                else {
                  LOCK();
                  *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar2 = plVar19 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*plVar19)(plVar19);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar19 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar19 + 0x10))(plVar19);
                    }
                  }
                  local_70 = puVar5;
                  local_68 = (longlong **)plVar19;
                  uVar11 = FUN_143defffc(param_1);
                  FUN_143defa18(plVar6,uVar11,&local_70);
                  LOCK();
                  plVar6 = plVar19 + 1;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)*plVar6 == 0) {
                    (**(code **)*plVar19)(plVar19);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar19 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar19 + 0x10))(plVar19);
                    }
                  }
                }
                (**(code **)(*local_80 + 0x10))();
                plVar2 = local_80;
                local_70 = (uint *)0x0;
                local_68 = (longlong **)((ulonglong)local_68 & 0xffffffff00000000);
                FUN_1446efa72(&local_70,0,3,0x10);
                plVar19 = local_b0;
                local_68 = (longlong **)CONCAT44(local_68._4_4_,3);
                lVar10 = *local_b0;
                plVar6 = (longlong *)*local_a8;
                if (plVar6 == (longlong *)0x0) {
                  *(undefined ***)local_70 = &PTR_LAB_149e020b0;
                  LOCK();
                  UNLOCK();
                  lVar16 = DAT_14c758608 + 1;
                  lVar7 = DAT_14c758608 + 1;
                  if (lVar16 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar16 = DAT_14c758608 + 2;
                    lVar7 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar7;
                  *(longlong *)(local_70 + 4) = lVar16;
                  *(undefined ***)local_70 = &PTR_FUN_14b97d400;
                  *(longlong *)(local_70 + 6) = lVar10;
                  local_70[8] = 0;
                  local_70[9] = 0;
                  *(code **)(local_70 + 10) = FUN_145a32460;
                }
                else {
                  LOCK();
                  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                  UNLOCK();
                  *(undefined ***)local_70 = &PTR_LAB_149e020b0;
                  LOCK();
                  UNLOCK();
                  lVar16 = DAT_14c758608 + 1;
                  lVar7 = DAT_14c758608 + 1;
                  if (lVar16 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar16 = DAT_14c758608 + 2;
                    lVar7 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar7;
                  *(longlong *)(local_70 + 4) = lVar16;
                  *(undefined ***)local_70 = &PTR_FUN_14b97d400;
                  *(longlong *)(local_70 + 6) = lVar10;
                  *(longlong **)(local_70 + 8) = plVar6;
                  LOCK();
                  *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
                  UNLOCK();
                  *(code **)(local_70 + 10) = FUN_145a32460;
                  LOCK();
                  plVar3 = plVar6 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
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
                FUN_1448b6402(plVar2 + 4,local_98,&local_70);
                if ((int)local_68 != 0) {
                  if (local_70 == (uint *)0x0) goto LAB_141417d7e;
                  (*(code *)**(undefined8 **)local_70)(local_70,0);
                  FUN_1446efa72(&local_70,0,0,0x10);
                  local_68 = (longlong **)((ulonglong)local_68 & 0xffffffff00000000);
                }
                if (local_70 != (uint *)0x0) {
                  FUN_1400020a8();
                }
              }
LAB_141417d7e:
              plVar6 = local_78;
              if (local_78 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_78 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_78)(local_78);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                  }
                }
              }
              lVar17 = lVar17 + 0x18;
            } while (local_a0 != lVar17);
          }
        }
      }
      FUN_145a32460(*plVar19);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141417e7c FUN_141417e7c body=57 status=ok
// SIG undefined FUN_141417e7c(void)

void FUN_141417e7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0450 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0450 = FUN_140002ddd(FUN_146616d56,uVar1,L"TraitMissionDef");
  }
  return;
}



// FUNCTION 141417eb6 thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141417ebc FUN_141417ebc body=513 status=ok
// SIG undefined FUN_141417ebc(void)

void FUN_141417ebc(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
  }
  plVar3 = local_60;
  iVar4 = (int)local_60[3];
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar4) {
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar6 * 0x30) != 0) {
        FUN_1400020a8();
        iVar4 = (int)plVar3[3];
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar7 = plVar3;
      }
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar13) {
          iVar2 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_141417fef;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_141417fef:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414180c0 FUN_1414180c0 body=222 status=ok
// SIG undefined FUN_1414180c0(void)

ulonglong FUN_1414180c0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar4 = FUN_1409ff8bc();
    lVar6 = FUN_14477b664(uVar4);
    param_2[1] = lVar6;
  }
  lVar5 = param_2[2];
  if (lVar5 == 0) {
    uVar7 = 0;
    if ((lVar6 == 0) || (*param_2 == 0)) goto LAB_141418117;
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
      param_2[2] = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar5 = FUN_144aff482(uVar4,param_2);
      param_2[2] = lVar5;
      if (lVar5 != 0) goto LAB_1414180ed;
    }
    uVar7 = 0;
  }
  else {
LAB_1414180ed:
    plVar3 = (longlong *)FUN_1409fe326(param_1);
    if (plVar3 == (longlong *)0x0) {
      bVar1 = 0;
    }
    else {
      param_1 = plVar3;
      bVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar5,param_3,param_4);
    }
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),plVar3 != (longlong *)0x0 & bVar1);
  }
LAB_141418117:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14141819e FUN_14141819e body=1957 status=ok
// SIG undefined FUN_14141819e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14141819e(undefined1 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  bool bVar27;
  undefined4 uVar28;
  float fVar29;
  undefined1 auStack_5a8 [32];
  undefined8 *local_588;
  code *local_580;
  longlong *local_578;
  float local_56c;
  undefined1 local_568 [512];
  undefined1 *local_368;
  ulonglong local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 *local_348 [94];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  FUN_1406ff33a();
  lVar25 = *(longlong *)(param_1 + 0x48);
  lVar11 = *(longlong *)(param_1 + 0x40) + 0x240;
  plVar10 = &local_358;
  FUN_140309ec4(lVar25 + 0x80,plVar10,lVar11);
  *(undefined1 **)(param_1 + 0x88) = local_348[0];
  *(undefined4 *)(param_1 + 0x78) = (undefined4)local_358;
  *(undefined4 *)(param_1 + 0x7c) = local_358._4_4_;
  *(undefined4 *)(param_1 + 0x80) = (undefined4)uStack_350;
  *(undefined4 *)(param_1 + 0x84) = uStack_350._4_4_;
  uVar28 = FUN_140309e34(lVar25 + 0x118,lVar11,lVar25 + 0x130);
  *(undefined4 *)(param_1 + 0x90) = uVar28;
  cVar5 = FUN_140337e44(lVar25 + 0x138,lVar11,lVar25 + 0x150);
  param_1[0x94] = *(char *)(lVar25 + 0x151) != cVar5;
  *(undefined4 *)(param_1 + 0x60) = 0x10;
  cVar5 = FUN_140337e44(lVar25 + 0x158,lVar11,lVar25 + 0x170);
  if (*(char *)(lVar25 + 0x171) != cVar5) {
    param_1[0x60] = param_1[0x60] | 0x20;
    cVar5 = FUN_140337e44(lVar25 + 0x178,lVar11,lVar25 + 400);
    if (*(char *)(lVar25 + 0x191) != cVar5) {
      param_1[0x60] = param_1[0x60] | 0x40;
    }
  }
  cVar5 = FUN_140337e44(lVar25 + 0x198,lVar11,lVar25 + 0x1b0);
  if (*(char *)(lVar25 + 0x1b1) != cVar5) {
    param_1[0x60] = param_1[0x60] | 0x80;
  }
  local_56c = *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90);
  local_368 = (undefined1 *)0x0;
  local_360 = 0x2000000000;
  uVar16 = *(uint *)(param_1 + 0x70);
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar16);
  }
  if (0x20 < uVar16) {
    FUN_148d47290(local_568);
  }
  plVar1 = (longlong *)(param_1 + 0x68);
  uStack_350 = &local_56c;
  local_580 = FUN_1441651ea;
  local_578 = plVar10;
  local_358 = param_1;
  local_348[0] = local_568;
  uVar6 = FUN_1405f939e(param_1);
  FUN_141060490(uVar6);
  iVar9 = (int)local_360;
  uVar22 = (ulonglong)(int)local_360;
  if (1 < (longlong)uVar22) {
    puVar20 = local_368;
    if (local_368 == (undefined1 *)0x0) {
      puVar20 = local_568;
    }
    memset(local_348,0,0x2f0);
    uStack_350 = (float *)(puVar20 + uVar22 * 0x10 + -0x10);
    local_358 = puVar20;
    fVar29 = logf((float)iVar9);
    local_348[0] = (undefined1 *)CONCAT44(local_348[0]._4_4_,(int)(longlong)(fVar29 + fVar29));
    do {
      puVar23 = (undefined8 *)*plVar10;
      puVar12 = (undefined8 *)plVar10[1];
      iVar9 = (int)plVar10[2];
      iVar17 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar23) >> 4);
      uVar16 = iVar17 + 1;
      puVar8 = puVar23;
      puVar19 = puVar12;
      if (iVar9 != 0) {
LAB_1414183df:
        puVar7 = puVar8;
        if (8 < (int)uVar16) {
          uVar6 = puVar7[(ulonglong)(uVar16 >> 1) * 2];
          uVar3 = (puVar7 + (ulonglong)(uVar16 >> 1) * 2)[1];
          uVar4 = puVar7[1];
          puVar7[(ulonglong)(uVar16 >> 1) * 2] = *puVar7;
          (puVar7 + (ulonglong)(uVar16 >> 1) * 2)[1] = uVar4;
          *puVar7 = uVar6;
          puVar7[1] = uVar3;
          puVar18 = puVar12 + 2;
          local_588 = puVar7;
          do {
            puVar8 = local_588 + 2;
            puVar13 = local_588 + 2;
            do {
              local_588 = puVar13;
              puVar21 = puVar8;
              if (puVar12 < local_588) break;
              puVar8 = puVar21 + 2;
              puVar13 = local_588 + 2;
            } while (*(float *)(local_588 + 1) < *(float *)(puVar7 + 1) ||
                     *(float *)(local_588 + 1) == *(float *)(puVar7 + 1));
            puVar8 = puVar18 + -4;
            do {
              puVar13 = puVar18;
              puVar26 = puVar8;
              puVar18 = puVar13 + -2;
              if (puVar18 <= puVar7) break;
              puVar8 = puVar26 + -2;
            } while (*(float *)(puVar7 + 1) < *(float *)(puVar13 + -1) ||
                     *(float *)(puVar7 + 1) == *(float *)(puVar13 + -1));
            if (puVar18 < local_588) goto LAB_14141886f;
            uVar6 = *local_588;
            uVar3 = local_588[1];
            uVar4 = puVar13[-1];
            *local_588 = *puVar18;
            local_588[1] = uVar4;
            *puVar18 = uVar6;
            puVar13[-1] = uVar3;
          } while( true );
        }
        for (; puVar8 = puVar7, puVar23 = puVar7, puVar7 < puVar12; puVar12 = puVar12 + -2) {
          while (puVar19 = puVar8, puVar23 = puVar23 + 2, puVar23 <= puVar12) {
            puVar8 = puVar23;
            if (*(float *)(puVar23 + 1) < *(float *)(puVar19 + 1) ||
                *(float *)(puVar23 + 1) == *(float *)(puVar19 + 1)) {
              puVar8 = puVar19;
            }
          }
          local_58 = *puVar19;
          uStack_50 = puVar19[1];
          uVar3 = local_58;
          uVar4 = uStack_50;
          uVar6 = puVar12[1];
          *puVar19 = *puVar12;
          puVar19[1] = uVar6;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar12 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar12 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_50._4_4_;
          local_58 = uVar3;
          uStack_50 = uVar4;
        }
        goto LAB_14141844b;
      }
LAB_1414185ba:
      local_588 = puVar8;
      if (uVar16 != 0) {
        iVar9 = (iVar17 - (iVar17 + -1 >> 0x1f)) + -1 >> 1;
        iVar17 = iVar9;
joined_r0x0001414185db:
        do {
          iVar15 = iVar9 * 2 + 1;
          if (iVar15 < (int)uVar16) {
            iVar14 = iVar9 * 2 + 2;
            if ((iVar14 < (int)uVar16) &&
               (*(float *)(local_588 + (longlong)iVar15 * 2 + 1) <
                *(float *)(local_588 + (longlong)iVar14 * 2 + 1) ||
                *(float *)(local_588 + (longlong)iVar15 * 2 + 1) ==
                *(float *)(local_588 + (longlong)iVar14 * 2 + 1))) {
              iVar15 = iVar14;
            }
            if (*(float *)(local_588 + (longlong)iVar9 * 2 + 1) <=
                *(float *)(local_588 + (longlong)iVar15 * 2 + 1) &&
                *(float *)(local_588 + (longlong)iVar15 * 2 + 1) !=
                *(float *)(local_588 + (longlong)iVar9 * 2 + 1)) {
              puVar12 = local_588 + (longlong)iVar9 * 2;
              puVar23 = local_588 + (longlong)iVar15 * 2;
              local_58 = *puVar12;
              uStack_50 = puVar12[1];
              uVar3 = local_58;
              uVar4 = uStack_50;
              uVar6 = puVar23[1];
              *puVar12 = *puVar23;
              puVar12[1] = uVar6;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              *(undefined4 *)puVar23 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar23 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_50._4_4_;
              iVar9 = iVar15;
              local_58 = uVar3;
              uStack_50 = uVar4;
              goto joined_r0x0001414185db;
            }
          }
          bVar27 = iVar17 != 0;
          iVar9 = iVar17 + -1;
          iVar17 = iVar9;
        } while (bVar27);
        if (1 < (int)uVar16) {
          uVar22 = (ulonglong)uVar16 - 1;
          local_58 = *local_588;
          uStack_50 = local_588[1];
          uVar3 = local_58;
          uVar4 = uStack_50;
          uVar6 = (local_588 + uVar22 * 2)[1];
          *local_588 = local_588[uVar22 * 2];
          local_588[1] = uVar6;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          puVar12 = local_588 + uVar22 * 2;
          *(undefined4 *)puVar12 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar12 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_50._4_4_;
          local_58 = uVar3;
          uStack_50 = uVar4;
          if (uVar16 != 2) {
            do {
              iVar9 = 0;
              iVar15 = 1;
              iVar17 = 0;
              do {
                iVar9 = iVar9 + 2;
                iVar14 = iVar15;
                if (((longlong)iVar9 < (longlong)uVar22) &&
                   (*(float *)(local_588 + (longlong)iVar15 * 2 + 1) <
                    *(float *)(local_588 + (longlong)iVar9 * 2 + 1) ||
                    *(float *)(local_588 + (longlong)iVar15 * 2 + 1) ==
                    *(float *)(local_588 + (longlong)iVar9 * 2 + 1))) {
                  iVar14 = iVar9;
                }
                if (*(float *)(local_588 + (longlong)iVar14 * 2 + 1) <
                    *(float *)(local_588 + (longlong)iVar17 * 2 + 1) ||
                    *(float *)(local_588 + (longlong)iVar14 * 2 + 1) ==
                    *(float *)(local_588 + (longlong)iVar17 * 2 + 1)) break;
                puVar12 = local_588 + (longlong)iVar17 * 2;
                puVar23 = local_588 + (longlong)iVar14 * 2;
                uVar6 = *puVar12;
                uVar3 = puVar12[1];
                uVar4 = puVar23[1];
                *puVar12 = *puVar23;
                puVar12[1] = uVar4;
                *puVar23 = uVar6;
                puVar23[1] = uVar3;
                iVar9 = iVar14 * 2;
                iVar15 = iVar14 * 2 + 1;
                iVar17 = iVar14;
              } while ((longlong)iVar15 < (longlong)uVar22);
              uVar2 = uVar22 - 1;
              local_58 = *local_588;
              uStack_50 = local_588[1];
              uVar3 = local_58;
              uVar4 = uStack_50;
              uVar6 = (local_588 + uVar2 * 2)[1];
              *local_588 = local_588[uVar2 * 2];
              local_588[1] = uVar6;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              puVar12 = local_588 + uVar2 * 2;
              *(undefined4 *)puVar12 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar12 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_50._4_4_;
              bVar27 = 2 < uVar22;
              uVar22 = uVar2;
              local_58 = uVar3;
              uStack_50 = uVar4;
            } while (bVar27);
          }
        }
      }
LAB_14141844b:
      plVar10 = plVar10 + -3;
    } while (&local_358 <= plVar10);
    uVar22 = local_360 & 0xffffffff;
  }
  FUN_141418944(plVar1,uVar22 & 0xffffffff);
  puVar20 = local_568;
  if (local_368 != (undefined1 *)0x0) {
    puVar20 = local_368;
  }
  lVar25 = (longlong)(int)local_360;
  if (lVar25 != 0) {
    lVar11 = 0;
    do {
      uVar16 = 0;
      iVar9 = 0;
      if (*(longlong *)(puVar20 + lVar11) != 0) {
        uVar16 = *(uint *)(*(longlong *)(puVar20 + lVar11) + 0xc);
        if ((int)uVar16 < DAT_14c9647dc) {
          lVar24 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
        }
        else {
          lVar24 = 0;
        }
        iVar9 = *(int *)(lVar24 + 0x10);
        if (*(int *)(lVar24 + 0x10) == 0) {
          LOCK();
          iVar17 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar17;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar17 = *(int *)(lVar24 + 0x10);
          bVar27 = iVar17 == 0;
          if (bVar27) {
            *(int *)(lVar24 + 0x10) = iVar9;
            iVar17 = 0;
          }
          UNLOCK();
          if (!bVar27) {
            iVar9 = iVar17;
          }
        }
      }
      iVar17 = *(int *)(param_1 + 0x70);
      *(uint *)(param_1 + 0x70) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x74) < iVar17 + 1U) {
        FUN_140e16a7e(plVar1,iVar17);
      }
      *(ulonglong *)(*plVar1 + (longlong)iVar17 * 8) = CONCAT44(iVar9,uVar16);
      lVar11 = lVar11 + 0x10;
    } while (lVar25 * 0x10 != lVar11);
  }
  if (local_368 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_5a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14141886f:
  local_58 = *puVar7;
  uStack_50 = puVar7[1];
  uVar3 = local_58;
  uVar4 = uStack_50;
  uVar6 = puVar13[-1];
  *puVar7 = *puVar18;
  puVar7[1] = uVar6;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar18 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar13 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar13 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar13 + -4) = uStack_50._4_4_;
  iVar9 = iVar9 + -1;
  puVar13 = puVar13 + -4;
  local_58 = uVar3;
  uStack_50 = uVar4;
  if ((longlong)puVar26 - (longlong)puVar23 < (longlong)puVar19 - (longlong)puVar21) {
    if (local_588 < puVar12) {
      *plVar10 = (longlong)local_588;
      plVar10[1] = (longlong)puVar12;
      *(int *)(plVar10 + 2) = iVar9;
      plVar10 = plVar10 + 3;
    }
    puVar8 = puVar7;
    if (puVar18 <= puVar7 + 2) goto LAB_14141844b;
  }
  else {
    if (puVar7 + 2 < puVar18) {
      *plVar10 = (longlong)puVar7;
      plVar10[1] = (longlong)puVar13;
      *(int *)(plVar10 + 2) = iVar9;
      plVar10 = plVar10 + 3;
    }
    puVar7 = puVar21;
    puVar8 = local_588;
    puVar13 = puVar12;
    puVar26 = puVar12;
    if (puVar12 <= local_588) goto LAB_14141844b;
  }
  iVar17 = (int)((ulonglong)((longlong)puVar26 - (longlong)puVar7) >> 4);
  uVar16 = iVar17 + 1;
  puVar12 = puVar13;
  puVar19 = puVar26;
  puVar23 = puVar7;
  local_588 = puVar8;
  if (iVar9 == 0) goto LAB_1414185ba;
  goto LAB_1414183df;
}



// FUNCTION 141418944 FUN_141418944 body=42 status=ok
// SIG undefined FUN_141418944(void)

void FUN_141418944(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_14141896e();
    return;
  }
  return;
}



// FUNCTION 14141896e FUN_14141896e body=320 status=ok
// SIG undefined FUN_14141896e(void)

void FUN_14141896e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1414189d7;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1414189d7:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,4);
  }
  return;
}



// FUNCTION 141418aae FUN_141418aae body=272 status=ok
// SIG undefined FUN_141418aae(void)

void FUN_141418aae(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_68 [44];
  undefined1 local_3c [8];
  undefined4 local_34;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar3 = FUN_144a7be76();
  if (lVar3 != 0) {
    lVar4 = FUN_144a6c4d8();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) && (*(char *)(lVar3 + 0x178) == '\x03')) &&
       (plVar5 = (longlong *)FUN_14598d578(lVar3), plVar5 != (longlong *)0x0)) {
      iVar1 = (int)plVar5[1];
      if ((longlong)iVar1 != 0) {
        uVar6 = 0;
        do {
          if (*(longlong *)(*plVar5 + 0x68 + uVar6) == *(longlong *)(lVar2 + 0x44)) {
            iVar7 = (int)(uVar6 >> 3) * -0xf0f0f0f;
            if ((-1 < iVar7) && (iVar7 < iVar1)) {
              FUN_141418bc0(param_1,local_3c);
              local_2c = 0;
              local_34 = 0xffffffff;
              FUN_140640e4a(plVar5,iVar7,local_3c);
            }
            break;
          }
          uVar6 = uVar6 + 0x88;
        } while ((longlong)iVar1 * 0x88 != uVar6);
      }
    }
  }
  FUN_1405786a4(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141418bc0 FUN_141418bc0 body=370 status=ok
// SIG undefined FUN_141418bc0(void)

undefined8 * FUN_141418bc0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [64];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar5 = (longlong)*(int *)(lVar1 + 0x80);
  local_70 = (undefined1 *)0x0;
  local_68 = 0x1000000000;
  FUN_14097f3c8(local_b0,*(int *)(lVar1 + 0x80),1);
  if (0 < lVar5) {
    fVar7 = 0.0;
    lVar3 = 0;
    do {
      fVar6 = *(float *)(*(longlong *)(lVar1 + 0x78) + lVar3 * 4);
      puVar4 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar4 = local_b0;
      }
      fVar7 = fVar7 + fVar6;
      *(float *)(puVar4 + lVar3 * 4) = fVar6;
      lVar3 = lVar3 + 1;
    } while (lVar5 != lVar3);
    if (0.0001 < fVar7) {
      do {
        uVar2 = rand();
        fVar6 = ((float)(uVar2 & 0x7fff) / 32767.0) * fVar7 + 0.0;
        puVar4 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar4 = local_b0;
        }
        lVar3 = 0;
        do {
          if ((0.0 < *(float *)(puVar4 + lVar3 * 4)) &&
             (fVar6 = fVar6 - *(float *)(puVar4 + lVar3 * 4), fVar6 <= 0.0)) {
            *param_2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x50) + lVar3 * 8);
            goto LAB_141418cd7;
          }
          lVar3 = lVar3 + 1;
        } while (lVar5 != lVar3);
      } while( true );
    }
  }
  *param_2 = 0;
LAB_141418cd7:
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141418d40 FUN_141418d40 body=10 status=ok
// SIG undefined FUN_141418d40(void)

void FUN_141418d40(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141418d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



// FUNCTION 141418d4a FUN_141418d4a body=923 status=ok
// SIG undefined FUN_141418d4a(void)

void FUN_141418d4a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  code **ppcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined2 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_110;
  code *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  code **local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar2 = *(longlong **)(param_1 + 0x3c0);
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_140 = &local_108;
      local_108 = FUN_141030f22;
      local_130 = FUN_14081d0ea;
      local_138 = &LAB_1459f2e4c;
      local_148 = &LAB_148c39de3;
      local_150 = &LAB_1457a9eb2;
      local_158 = &DAT_149e063b2;
      local_160 = 0;
      local_168 = 0x10000004;
      local_170 = 0x10;
      local_178 = CONCAT44(local_178._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
         DAT_14cbadd90 + 0x30)) && ((*(byte *)(plVar2 + 0x84) & 2) != 0)) {
      lVar5 = *(longlong *)(param_1 + 0x1a08);
      cVar3 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
      if ((lVar5 != 0) && (cVar3 != '\0')) {
        plVar1 = plVar2 + 300;
        local_108 = *(code **)(lVar5 + 0x738);
        local_100 = *(undefined4 *)(lVar5 + 0x740);
        local_f8 = 0;
        FUN_140fd0a38(plVar2,&local_108,plVar1,0);
        local_108 = *(code **)(lVar5 + 0x750);
        local_100 = *(undefined4 *)(lVar5 + 0x758);
        local_f8 = 0;
        FUN_140fd0a38(plVar2,&local_108,plVar1,0);
        local_108 = *(code **)(lVar5 + 0x768);
        local_100 = *(undefined4 *)(lVar5 + 0x770);
        local_f8 = 0;
        FUN_140fd0a38(plVar2,&local_108,plVar1,0);
        local_108 = *(code **)(lVar5 + 0x798);
        local_100 = *(undefined4 *)(lVar5 + 0x7a0);
        local_f8 = 0;
        FUN_140fd0a38(plVar2,&local_108,plVar1,0);
      }
    }
  }
  local_110 = param_1;
  FUN_1440bc292(&local_110,0);
  FUN_1440bc292(&local_110,1);
  lVar5 = *(longlong *)(param_1 + 0x1a00);
  if ((lVar5 != 0) && (*(char *)(param_1 + 0x17d0) == '\x01')) {
    local_178 = 0;
    FUN_140b32deb(&local_128,param_1,lVar5 + 0x1558,*(undefined8 *)(lVar5 + 0x1588));
    local_128 = 0;
    local_120 = 0xffffffffffffffff;
  }
  cVar3 = FUN_1404fa388(param_1 + 0x1ae0);
  if (cVar3 != '\0') {
    FUN_140bd765a(param_1 + 0x1ae0,0,0);
  }
  cVar3 = FUN_1404fa388(param_1 + 0x1b60);
  if (cVar3 != '\0') {
    FUN_140bd765a(param_1 + 0x1b60,0,0);
  }
  cVar3 = FUN_144904448(param_1 + 0x1b00);
  if (cVar3 != '\0') {
    FUN_14072d42a(param_1 + 0x1b00,0);
  }
  cVar3 = FUN_144904448(param_1 + 0x1b48);
  if (cVar3 != '\0') {
    FUN_14072d42a(param_1 + 0x1b48,0);
  }
  local_48 = (code **)0x0;
  local_40 = 0x1800000000;
  FUN_140d0296a(param_1,&local_108);
  ppcVar4 = local_48;
  if (local_48 == (code **)0x0) {
    ppcVar4 = &local_108;
  }
  lVar5 = (longlong)(int)local_40;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)((longlong)ppcVar4 + lVar6) != 0) {
        FUN_14045627c(*(longlong *)((longlong)ppcVar4 + lVar6),0,1);
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  *(undefined1 *)(param_1 + 0x17d0) = 0;
  if (local_48 != (code **)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414190e6 FUN_1414190e6 body=792 status=ok
// SIG undefined FUN_1414190e6(void)

void FUN_1414190e6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1403a682c;
      local_40 = 0;
      local_48 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_141419400(local_20,local_28);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141419400 FUN_141419400 body=169 status=ok
// SIG undefined FUN_141419400(void)

undefined8 FUN_141419400(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_1401b0f18();
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_1401b0f18();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      uVar2 = 0;
      if ((plVar3 == plVar4) || (plVar4 == (longlong *)0x0)) goto LAB_141419489;
      lVar5 = (**(code **)(*plVar4 + 0x28))();
      iVar1 = FUN_1405b18ba(lVar5 + 0x78,&local_18);
      if (0 < iVar1) {
        FUN_1401fa756(lVar5 + 0x78);
        uVar2 = 1;
        goto LAB_141419489;
      }
    }
  }
  uVar2 = 0;
LAB_141419489:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414194aa FUN_1414194aa body=1156 status=ok
// SIG undefined FUN_1414194aa(void)

void FUN_1414194aa(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1408a629c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (undefined4)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141419930(local_18,CONCAT44(uStack_1c,uStack_20),local_24);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141419930 FUN_141419930 body=146 status=ok
// SIG undefined FUN_141419930(void)

void FUN_141419930(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 3;
  local_38 = param_3;
  FUN_14125081c(param_1,param_2,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414199c4 FUN_1414199c4 body=228 status=ok
// SIG undefined FUN_1414199c4(void)

longlong FUN_1414199c4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacd370 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14793be0c;
    local_40 = &LAB_1463aab3a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x410;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshActor",&DAT_14cacd370,FUN_1463aab18);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacd370;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141419aaa FUN_141419aaa body=228 status=ok
// SIG undefined FUN_141419aaa(void)

longlong FUN_141419aaa(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb53a40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1485fc0e0;
    local_40 = FUN_1464ab104;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxFaceFX",L"FaceFXOwner",&DAT_14cb53a40,FUN_1464ab0e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb53a40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141419b90 FUN_141419b90 body=228 status=ok
// SIG undefined FUN_141419b90(void)

longlong FUN_141419b90(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb56788 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148634fb5;
    local_40 = FUN_1464b85f2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageModifierInterface",&DAT_14cb56788,&DAT_148634fb4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb56788;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141419c76 FUN_141419c76 body=228 status=ok
// SIG undefined FUN_141419c76(void)

longlong FUN_141419c76(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb58de8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c4830;
    local_38 = &LAB_14865a550;
    local_40 = &LAB_140aadc7d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x900;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActorStateSequencePlayer",&DAT_14cb58de8,FUN_1464c480e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58de8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141419d5c FUN_141419d5c body=228 status=ok
// SIG undefined FUN_141419d5c(void)

longlong FUN_141419d5c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb673f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145908fe6;
    local_38 = &LAB_148735693;
    local_40 = FUN_1465155f6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectScript",&DAT_14cb673f0,&DAT_148735692);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb673f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141419e42 FUN_141419e42 body=228 status=ok
// SIG undefined FUN_141419e42(void)

longlong FUN_141419e42(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb909c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a9566;
    local_38 = &LAB_1489c960b;
    local_40 = &LAB_146144158;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 800;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlWidget",&DAT_14cb909c8,FUN_146567146);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb909c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141419f28 FUN_141419f28 body=228 status=ok
// SIG undefined FUN_141419f28(void)

longlong FUN_141419f28(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb94008 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145840f42;
    local_38 = &LAB_148a13fcd;
    local_40 = FUN_146575334;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior_PreUse",&DAT_14cb94008,&DAT_148a13fcc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb94008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141a00e FUN_14141a00e body=228 status=ok
// SIG undefined FUN_14141a00e(void)

longlong FUN_14141a00e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb95800 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1414bb1f4;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463c345a;
    local_38 = &LAB_148a369ff;
    local_40 = &LAB_146579554;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x9a0;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"IpNetDriver",&DAT_14cb95800,&DAT_148a369fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95800;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141a0f4 FUN_14141a0f4 body=1 status=ok
// SIG undefined FUN_14141a0f4(void)

void FUN_14141a0f4(void)

{
  return;
}



// FUNCTION 14141a0f6 FUN_14141a0f6 body=10 status=ok
// SIG undefined FUN_14141a0f6(void)

undefined8 * FUN_14141a0f6(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 14141a100 FUN_14141a100 body=248 status=ok
// SIG undefined FUN_14141a100(void)

undefined1 (*) [16] FUN_14141a100(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar4 = *(double *)(param_1 + 0x240);
  dVar5 = *(double *)(param_1 + 0x248);
  dVar6 = *(double *)(param_1 + 0x250);
  dVar1 = *(double *)(param_1 + 600);
  dVar7 = dVar4 * 0.0 - dVar5 * 1.0;
  dVar8 = dVar5 * 0.0 - dVar6 * 0.0;
  dVar9 = dVar6 * 1.0 - dVar4 * 0.0;
  dVar8 = dVar8 + dVar8;
  dVar9 = dVar9 + dVar9;
  dVar7 = dVar7 + dVar7;
  dVar3 = (dVar6 * dVar8 - dVar4 * dVar7) + *(double *)(param_1 + 600) * dVar9 + 0.0;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar7 * dVar5 - dVar9 * dVar6) + dVar1 * dVar8 + 1.0;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar7 * dVar1 + 0.0 + (dVar9 * dVar4 - dVar8 * dVar5);
  return param_2;
}



// FUNCTION 14141a1f8 FUN_14141a1f8 body=118 status=ok
// SIG undefined FUN_14141a1f8(void)

undefined4 * FUN_14141a1f8(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  longlong local_28;
  undefined1 *local_20;
  undefined4 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  local_18 = &local_30;
  local_20 = &LAB_143620340;
  local_30 = param_2;
  local_28 = param_1;
  FUN_1448e6002(param_1 + 0x138);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141a270 FUN_14141a270 body=114 status=ok
// SIG undefined FUN_14141a270(void)

undefined4 * FUN_14141a270(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined1 *local_20;
  undefined4 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  local_18 = &local_28;
  local_20 = &LAB_1436203a6;
  local_28 = param_2;
  FUN_1448e6002(param_1 + 0x138);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141a2e4 FUN_14141a2e4 body=228 status=ok
// SIG undefined FUN_14141a2e4(void)

longlong FUN_14141a2e4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc1378 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1413594aa;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465c526e;
    local_38 = &LAB_148cc4f73;
    local_40 = &LAB_145c5907e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x18e0;
    FUN_14081cfa3(L"/Script/OakGame",L"WeaponProjectile",&DAT_14cbc1378,FUN_14661b5d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc1378;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141a3ca FUN_14141a3ca body=341 status=ok
// SIG undefined FUN_14141a3ca(void)

void FUN_14141a3ca(longlong param_1,double *param_2)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  dVar3 = DAT_14c8463f8;
  lVar2 = *(longlong *)(param_1 + 0x208);
  if (*(char *)(lVar2 + 0x39) == DAT_14c96b1e1) {
    *param_2 = DAT_14c8463f0;
    param_2[1] = dVar3;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x230);
    fVar7 = *(float *)(param_1 + 0x234);
    if ((fVar7 == -1.0) && (!NAN(fVar7))) {
      fVar7 = *(float *)(param_1 + 0x23c);
      puVar5 = &DAT_14c84635c;
      if ((*(byte *)(lVar2 + 0x31) & 0x20) != 0) {
        puVar5 = (undefined8 *)(lVar2 + 0x168);
      }
      fVar8 = *(float *)(param_1 + 0x21c) + *(float *)(param_1 + 0x224) +
              *(float *)((longlong)puVar5 + 4);
      fVar1 = *(float *)(param_1 + 0x244);
      fVar9 = fVar8;
      if (fVar8 <= fVar7) {
        fVar9 = fVar7;
      }
      fVar7 = (float)(-(uint)(fVar7 != -1.0) & (uint)fVar9 | ~-(uint)(fVar7 != -1.0) & (uint)fVar8);
      fVar9 = fVar7;
      if (fVar1 <= fVar7) {
        fVar9 = fVar1;
      }
      fVar7 = (float)(-(uint)(fVar1 != -1.0) & (uint)fVar9 | ~-(uint)(fVar1 != -1.0) & (uint)fVar7);
    }
    if ((fVar6 == -1.0) && (!NAN(fVar6))) {
      fVar6 = *(float *)(param_1 + 0x238);
      pfVar4 = (float *)&DAT_14c84635c;
      if ((*(byte *)(lVar2 + 0x31) & 0x20) != 0) {
        pfVar4 = (float *)(lVar2 + 0x168);
      }
      fVar8 = *(float *)(param_1 + 0x218) + *(float *)(param_1 + 0x220) + *pfVar4;
      fVar1 = *(float *)(param_1 + 0x240);
      fVar9 = fVar8;
      if (fVar8 <= fVar6) {
        fVar9 = fVar6;
      }
      fVar6 = (float)(-(uint)(fVar6 != -1.0) & (uint)fVar9 | ~-(uint)(fVar6 != -1.0) & (uint)fVar8);
      fVar9 = fVar6;
      if (fVar1 <= fVar6) {
        fVar9 = fVar1;
      }
      fVar6 = (float)(-(uint)(fVar1 != -1.0) & (uint)fVar9 | ~-(uint)(fVar1 != -1.0) & (uint)fVar6);
    }
    *param_2 = (double)fVar6;
    param_2[1] = (double)fVar7;
  }
  return;
}



// FUNCTION 14141a520 FUN_14141a520 body=679 status=ok
// SIG undefined FUN_14141a520(void)

void FUN_14141a520(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  longlong local_a8;
  undefined1 local_a0;
  uint local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != (longlong *)0x0) {
    lVar9 = (**(code **)(*param_2 + 8))(param_2);
    lVar10 = FUN_14141a7c8();
    if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
        lVar10 + 0x30)) {
      if (*param_3 == 0) {
        puVar11 = &DAT_14c9a1308;
      }
      else {
        puVar11 = (undefined8 *)FUN_1446e60f4(*param_3,&DAT_14cb243c0);
      }
      pbVar6 = (byte *)*puVar11;
      if (((pbVar6 != (byte *)0x0) && (bVar12 = *pbVar6 & 3, (*pbVar6 & 0x68) == 0 && bVar12 != 0))
         && (bVar12 == 2)) {
        local_a8 = 0;
        local_a0 = 0;
        uVar4 = *(uint *)(*(undefined8 **)(pbVar6 + 8) + 2);
        uVar7 = **(undefined8 **)(pbVar6 + 8);
        local_98 = uVar4;
        if (uVar4 == 0) {
          local_94 = 0;
          uVar13 = 0;
        }
        else {
          FUN_145de92b4(&local_a8,uVar4,0);
          FUN_14709b573(local_a8,uVar7,uVar4);
          uVar13 = (ulonglong)local_98;
          if (0 < (int)local_98) {
            lVar10 = 0;
            lVar9 = 0;
            do {
              lVar14 = local_a8 + lVar10;
              FUN_1446ddc76(local_b8,"Invalid",1);
              FUN_1400bc2c2(lVar14,local_b0,local_b8);
              uVar8 = FUN_147f5dc0e(local_b0);
              iVar5 = (int)param_2[8];
              *(uint *)(param_2 + 8) = iVar5 + 1U;
              if (*(uint *)((longlong)param_2 + 0x44) < iVar5 + 1U) {
                FUN_144860b82(param_2 + 7,iVar5);
              }
              *(undefined1 *)(param_2[7] + (longlong)iVar5) = uVar8;
              lVar9 = lVar9 + 1;
              uVar13 = (ulonglong)(int)local_98;
              lVar10 = lVar10 + 0x10;
            } while (lVar9 < (longlong)uVar13);
          }
        }
        FUN_14474dad8(local_a8,uVar13);
        if (local_a8 != 0) {
          FUN_14005b77c(local_a0);
        }
      }
      if ((longlong)(int)param_2[8] != 0) {
        bVar12 = *(byte *)(param_2 + 6);
        lVar9 = 0;
        do {
          bVar12 = bVar12 & ~(byte)(1 << (*(byte *)(param_2[7] + lVar9) & 0x1f));
          *(byte *)(param_2 + 6) = bVar12;
          lVar9 = lVar9 + 1;
        } while ((int)param_2[8] != lVar9);
      }
      lVar9 = param_2[3];
      fVar1 = *(float *)((longlong)param_2 + 0x1c);
      fVar2 = *(float *)((longlong)param_2 + 0x24);
      fVar3 = *(float *)(param_2 + 5);
      uVar7 = *(undefined8 *)((longlong)param_2 + 0x2c);
      fVar15 = cosf(*(float *)(param_2 + 4) * 0.017453292);
      *(int *)(param_2 + 9) = (int)lVar9;
      *(float *)((longlong)param_2 + 0x4c) = fVar1 * fVar1;
      *(float *)(param_2 + 10) = fVar15;
      *(float *)((longlong)param_2 + 0x54) = fVar2 * *(float *)((longlong)param_2 + 0x24);
      *(float *)(param_2 + 0xb) = fVar3 * *(float *)(param_2 + 5);
      *(undefined8 *)((longlong)param_2 + 0x5c) = uVar7;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14141a7c8 FUN_14141a7c8 body=57 status=ok
// SIG undefined FUN_14141a7c8(void)

void FUN_14141a7c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22170 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22170 = FUN_140002ddd(FUN_14643788e,uVar1,L"GbxSenseConfigDef");
  }
  return;
}



// FUNCTION 14141a802 FUN_14141a802 body=288 status=ok
// SIG undefined FUN_14141a802(void)

char FUN_14141a802(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_48 [44];
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14021e994();
  if (cVar1 != '\x01') goto LAB_14141a826;
  if ((*(float *)((longlong)param_1 + 0x144) == 0.0) &&
     (!NAN(*(float *)((longlong)param_1 + 0x144)))) {
    FUN_140f00d84(param_1,1);
  }
  local_1c = 0;
  FUN_14141a924(param_1);
  if (*(char *)((longlong)param_1 + 0x13d) == '\x01') {
    fVar2 = *(float *)((longlong)param_1 + 0x144) - *(float *)((longlong)param_1 + 300);
    *(float *)((longlong)param_1 + 0x144) = fVar2;
    *(undefined2 *)((longlong)param_1 + 0x179) = 0;
    if (fVar2 <= -*(float *)(param_1 + 0x25)) goto LAB_14141a8da;
  }
  else {
    fVar2 = *(float *)((longlong)param_1 + 0x144) + *(float *)((longlong)param_1 + 300);
    *(float *)((longlong)param_1 + 0x144) = fVar2;
    *(undefined2 *)((longlong)param_1 + 0x179) = 0;
    if (*(float *)(param_1 + 0x25) <= fVar2) {
LAB_14141a8da:
      cVar1 = FUN_140c1b3f4(param_1);
      if (cVar1 != '\0') {
        if ((char)param_1[0x2e] == '\x01') {
          *(undefined1 *)(param_1 + 0x2e) = 0;
        }
        *(undefined4 *)(param_1 + 0x2f) = 0;
        *(undefined1 *)((longlong)param_1 + 0x13c) = 1;
        cVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_2);
        if (cVar1 != '\0') goto LAB_14141a8d3;
      }
      cVar1 = '\x01';
      goto LAB_14141a826;
    }
  }
LAB_14141a8d3:
  cVar1 = '\0';
LAB_14141a826:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar1;
}



// FUNCTION 14141a924 FUN_14141a924 body=1096 status=ok
// SIG undefined FUN_14141a924(void)

void FUN_14141a924(longlong param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  char local_a0 [8];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar11 = *(longlong *)(param_1 + 0x40);
  if (lVar11 == 0) {
    lVar10 = 0;
    local_98 = 0;
  }
  else {
    if (*(int *)(lVar11 + 0x4c) == 0) {
LAB_14141ac81:
      lVar10 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar11 + 0x48);
      lVar10 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar9 == (longlong *)0x0) ||
           (((int)plVar9[2] != *(int *)(lVar11 + 0x4c) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_14141ac81;
        lVar10 = *plVar9;
      }
    }
    plVar9 = *(longlong **)(lVar11 + 0x118);
    local_98 = param_1;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
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
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      bVar6 = false;
      local_90 = plVar9;
      goto LAB_14141aa05;
    }
  }
  local_90 = (longlong *)0x0;
  bVar6 = true;
LAB_14141aa05:
  plVar9 = local_90;
  local_78[0] = 0;
  local_a0[0] = '\x03';
  local_88._0_4_ = 0;
  if (lVar10 == 0) {
    iVar7 = 0;
    uVar3 = (uint)local_88;
  }
  else {
    uVar3 = *(uint *)(lVar10 + 0xc);
    local_88 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar7 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar7 = *(int *)(lVar11 + 0x10);
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)(lVar11 + 0x10) = iVar8;
        iVar7 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_88;
      if (bVar13) {
        iVar7 = iVar8;
      }
    }
  }
  local_88._0_4_ = uVar3;
  local_88 = CONCAT44(iVar7,(uint)local_88);
  local_80 = 2;
  if (local_78[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
    local_78[0] = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  FUN_1447c3578(lVar4 + 0x1e8,local_70,local_a0);
  FUN_1405b801a(local_70,&local_b8,&DAT_14cb23ae0);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar12 = local_70;
    if (0x18 < local_58) {
      ppppuVar12 = (undefined8 ****)local_70[0];
    }
    (*pcVar5)(ppppuVar12);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  FUN_1448173f8(local_78);
  if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_90 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (((((-DAT_14cb23ae0 < local_b8) && (local_b8 < DAT_14cb23ae0)) && (-DAT_14cb23ae8 < local_b0))
      && ((((local_b0 < DAT_14cb23ae8 && (-DAT_14cb23af0 < local_a8)) &&
           ((local_a8 < DAT_14cb23af0 &&
            ((iVar7 = _finite(local_b8), iVar7 != 0 && (iVar7 = _finite(local_b0), iVar7 != 0))))))
          && (iVar7 = _finite(local_a8), iVar7 != 0)))) &&
     (((*(char *)(param_2 + 1) != '\x01' || (*(char *)(param_1 + 0x1b8) != '\x01')) ||
      (dVar14 = local_b8 - *(double *)(param_1 + 0x1a0),
      dVar15 = local_b0 - *(double *)(param_1 + 0x1a8),
      (double)(*param_2 * *param_2) < dVar15 * dVar15 + dVar14 * dVar14)))) {
    *(double *)(param_1 + 0x1a0) = local_b8;
    *(double *)(param_1 + 0x1a8) = local_b0;
    *(double *)(param_1 + 0x1b0) = local_a8;
    *(undefined1 *)(param_1 + 0x1b8) = 1;
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14141ad6e FUN_14141ad6e body=249 status=ok
// SIG undefined FUN_14141ad6e(void)

bool FUN_14141ad6e(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar5 = (longlong *)FUN_140e92164();
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0xe8))(plVar5,param_2,0);
  if ((plVar5 != (longlong *)0x0) &&
     (lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5), lVar6 < 0x7ffffffe)) {
    plVar7 = (longlong *)FUN_14001cc68(0xe8,0x10);
    FUN_140996eb8(plVar7,plVar5,param_2,lVar6,0x400,0);
    if (plVar7 != (longlong *)0x0) {
      uVar3 = (uint)lVar6;
      FUN_1400ec3e6(param_1,uVar3 + 2);
      iVar2 = *(int *)(param_1 + 1);
      iVar4 = iVar2 + uVar3;
      *(int *)(param_1 + 1) = iVar4;
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar3) {
        FUN_1447403be(param_1);
        iVar4 = *(int *)(param_1 + 1);
      }
      (**(code **)(*plVar7 + 0x170))(plVar7,*param_1,(longlong)iVar4);
      (**(code **)(*plVar7 + 0x1f8))(plVar7);
      bVar1 = *(byte *)((longlong)plVar7 + 0x29);
      (**(code **)*plVar7)(plVar7,1);
      return (bVar1 & 6) == 0;
    }
  }
  return false;
}



// FUNCTION 14141ae68 FUN_14141ae68 body=298 status=ok
// SIG undefined FUN_14141ae68(void)

int FUN_14141ae68(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar4 = FUN_14141af92(lVar1,*param_2);
    iVar10 = 0;
    iVar11 = 0;
    do {
      lVar9 = (longlong)iVar11;
      iVar2 = iVar11 + 1;
      if (iVar11 + 1 < iVar7) {
        iVar2 = iVar7;
      }
      lVar13 = lVar1 + 8 + lVar9 * 8;
      lVar6 = lVar9;
      iVar12 = iVar11;
      do {
        lVar6 = lVar6 + 1;
        iVar3 = iVar2;
        if (lVar8 <= lVar6) break;
        bVar5 = FUN_14141af92(lVar13,*param_2);
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 8;
        iVar3 = iVar12;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar10 != iVar11) {
          memmove((void *)(lVar1 + (longlong)iVar10 * 8),(void *)(lVar1 + lVar9 * 8),
                  (longlong)(iVar3 - iVar11) << 3);
        }
        iVar10 = iVar10 + (iVar3 - iVar11);
      }
      iVar11 = iVar3;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar8);
    *(int *)(param_1 + 1) = iVar10;
    iVar7 = iVar7 - iVar10;
  }
  return iVar7;
}



// FUNCTION 14141af92 FUN_14141af92 body=55 status=ok
// SIG undefined FUN_14141af92(void)

ulonglong FUN_14141af92(int *param_1,int *param_2)

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



// FUNCTION 14141afca FUN_14141afca body=229 status=ok
// SIG undefined FUN_14141afca(void)

void FUN_14141afca(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (param_3 < iVar5) {
    FUN_1446f8d3c(param_1,0,iVar5,0x70,8);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14141b0b0 FUN_14141b0b0 body=1726 status=ok
// SIG undefined FUN_14141b0b0(void)

void FUN_14141b0b0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = *param_3;
  plVar9 = (longlong *)param_3[1];
  if (plVar9 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar6;
    plVar7 = *(longlong **)(param_1 + 0x10);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
LAB_14141b524:
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x00014141b60c:
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar6;
    plVar7 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == plVar7) {
      LOCK();
      plVar7 = plVar9 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar7 = plVar9;
        goto joined_r0x00014141b60c;
      }
    }
    else {
      *(longlong **)(param_1 + 0x10) = plVar9;
      if (plVar7 != (longlong *)0x0) goto LAB_14141b524;
    }
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x288) = 0;
    iVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x288) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar5 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar5 = iVar8;
      }
    }
  }
  *(int *)(param_1 + 0x28c) = iVar5;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x2e2) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  lVar10 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar10 + 0xa8) != 0) {
    FUN_1459a0a58(lVar10 + 0xa8,&local_58);
    plVar9 = local_50;
    local_48 = local_58;
    local_40 = local_50;
    lVar10 = FUN_14141b931();
    if (lVar10 != 0) {
      plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b975ed0;
      plVar7[2] = lVar10;
      *(longlong *)(param_1 + 600) = lVar10;
      plVar9 = *(longlong **)(param_1 + 0x260);
      if (plVar7 == plVar9) {
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar7 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar5 = *piVar1;
            UNLOCK();
            plVar9 = plVar7;
            goto joined_r0x00014141b6f6;
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x260) = plVar7;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar9 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar5 = *piVar1;
            UNLOCK();
joined_r0x00014141b6f6:
            if (iVar5 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      plVar7 = *(longlong **)(param_1 + 600);
      local_68 = local_48;
      local_60 = local_40;
      if (local_40 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
        plVar9 = local_40;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_68);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar9 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    lVar10 = *(longlong *)(param_1 + 8);
  }
  if (*(longlong *)(lVar10 + 0xc0) == 0) goto LAB_14141b19c;
  FUN_1459a0a58(lVar10 + 0xc0,&local_58);
  local_48 = local_58;
  local_40 = local_50;
  lVar10 = FUN_14141b931();
  plVar9 = local_50;
  if (lVar10 != 0) {
    plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b975ed0;
    plVar7[2] = lVar10;
    *(longlong *)(param_1 + 0x268) = lVar10;
    plVar9 = *(longlong **)(param_1 + 0x270);
    if (plVar7 == plVar9) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
          plVar9 = plVar7;
          goto joined_r0x00014141b664;
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x270) = plVar7;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar9 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
joined_r0x00014141b664:
          if (iVar5 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    plVar7 = *(longlong **)(param_1 + 0x268);
    local_78 = local_48;
    local_70 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      plVar9 = local_40;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7,&local_78);
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar9 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar10 = *(longlong *)(param_1 + 8);
LAB_14141b19c:
  FUN_14141b770(param_1 + 0x38,lVar10 + 0x288);
  lVar10 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(lVar10 + 0x300);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar10 + 0x2f8);
  lVar3 = *(longlong *)(lVar10 + 0x308);
  if (*(longlong *)(param_1 + 0xd0) != lVar3) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  *(longlong *)(param_1 + 0xd0) = lVar3;
  if (*(longlong *)(param_1 + 0xd8) != *(longlong *)(lVar10 + 0x310)) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  uVar6 = FUN_14477b664();
  uVar6 = FUN_14477b664(uVar6);
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar10 + 0x318);
  if ((*(longlong *)(param_1 + 0xe8) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x50));
  }
  bVar4 = DAT_14cb26569;
  lVar3 = *(longlong *)(lVar10 + 800);
  *(longlong *)(param_1 + 0xe8) = lVar3;
  if ((lVar3 != 0) && ((bVar4 & 1) != 0)) {
    FUN_14036e5a4(*(undefined8 *)(lVar3 + 0x50));
  }
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(lVar10 + 0x328);
  FUN_14141b770(param_1 + 0x148,*(longlong *)(param_1 + 8) + 0x330);
  lVar10 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(lVar10 + 0x3a8);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(lVar10 + 0x3a0);
  lVar3 = *(longlong *)(lVar10 + 0x3b0);
  if (*(longlong *)(param_1 + 0x1e0) != lVar3) {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  *(longlong *)(param_1 + 0x1e0) = lVar3;
  if (*(longlong *)(param_1 + 0x1e8) != *(longlong *)(lVar10 + 0x3b8)) {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  uVar6 = FUN_14477b664();
  uVar6 = FUN_14477b664(uVar6);
  *(undefined8 *)(param_1 + 0x1e8) = uVar6;
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(lVar10 + 0x3c0);
  if ((*(longlong *)(param_1 + 0x1f8) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + 0x50));
  }
  bVar4 = DAT_14cb26569;
  lVar3 = *(longlong *)(lVar10 + 0x3c8);
  *(longlong *)(param_1 + 0x1f8) = lVar3;
  if ((lVar3 != 0) && ((bVar4 & 1) != 0)) {
    FUN_14036e5a4(*(undefined8 *)(lVar3 + 0x50));
  }
  *(undefined1 *)(param_1 + 0x200) = *(undefined1 *)(lVar10 + 0x3d0);
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar9 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141b770 FUN_14141b770 body=423 status=ok
// SIG undefined FUN_14141b770(void)

void FUN_14141b770(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(undefined4 *)(param_2 + 1);
  local_50 = *param_2;
  lVar3 = param_2[2];
  uVar6 = FUN_14477b664(param_2[3]);
  lVar7 = FUN_14477b664(uVar6);
  uVar6 = param_2[4];
  lVar4 = param_2[5];
  if ((lVar4 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_14036e5a4(*(undefined8 *)(lVar4 + 0x50),lVar4);
  }
  uVar1 = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 1) = local_48;
  *param_1 = local_50;
  if (param_1[2] != lVar3) {
    param_1[4] = 0;
  }
  param_1[2] = lVar3;
  if (param_1[3] != lVar7) {
    param_1[4] = 0;
  }
  uVar8 = FUN_14477b664(lVar7);
  uVar8 = FUN_14477b664(uVar8);
  param_1[3] = uVar8;
  param_1[4] = uVar6;
  if ((param_1[5] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[5] + 0x50));
  }
  bVar5 = DAT_14cb26569;
  param_1[5] = lVar4;
  if ((lVar4 != 0 & bVar5) == 1) {
    FUN_14036e5a4(*(undefined8 *)(lVar4 + 0x50),lVar4);
    bVar5 = DAT_14cb26569;
  }
  *(undefined1 *)(param_1 + 6) = uVar1;
  if ((lVar4 != 0) && ((bVar5 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lVar4 + 0x50),lVar4);
  }
  cVar2 = *(char *)(param_2 + 7);
  *(char *)((longlong)param_1 + 0x31) = cVar2;
  if (cVar2 != '\x01') {
    if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 9);
  param_1[7] = param_2[8];
  FUN_144a7bb84(param_1 + 9,param_2 + 10);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 14141b931 FUN_14141b931 body=604 status=ok
// SIG undefined FUN_14141b931(void)

undefined8 FUN_14141b931(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined1 local_40 [8];
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)FUN_1401fe4bc(*param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14c948fa0 == 0) {
      local_48 = (code *)&DAT_1427db2a2;
      lVar3 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar3;
      FUN_1446f470e(local_40,L"ScriptStruct",1);
      local_68 = &LAB_1468915ce;
      local_70 = FUN_1427dc742;
      local_80 = L"Engine";
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,199);
      local_88 = 0x10;
      local_90 = 0x10000020;
      local_98._0_4_ = 8;
      local_60 = &local_48;
      FUN_14574b4b2(lVar3);
      DAT_14c948fa0 = lVar3;
      if (DAT_14c927740 == 0) {
        local_60 = &local_38;
        local_38 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_146856450;
        local_70 = FUN_1427b121c;
        local_78 = L"Engine";
        local_80 = (wchar_t *)0x0;
        local_88 = CONCAT44(local_88._4_4_,0x10000021);
        local_90 = 8;
        local_98._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar1 = DAT_14c948fa0;
      lVar3 = DAT_14c927740;
      uVar4 = FUN_1449e2fb2();
      local_98 = L"ScriptStruct";
      FUN_14574b446(uVar4,lVar1,lVar3,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
        DAT_14c948fa0 + 0x30)) {
      lVar3 = FUN_1465c0018();
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x38) <= (int)plVar2[7] &&
          (*(longlong *)(plVar2[6] + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)))) {
        uVar4 = FUN_14001cc68((longlong)
                              (int)(-*(int *)((longlong)plVar2 + 0x5c) &
                                   ((int)plVar2[0xb] + *(int *)((longlong)plVar2 + 0x5c)) - 1U));
        (**(code **)(*plVar2 + 0x2e8))(plVar2,uVar4,1);
        goto LAB_14141b992;
      }
    }
  }
  uVar4 = 0;
LAB_14141b992:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141bba4 FUN_14141bba4 body=55 status=ok
// SIG undefined FUN_14141bba4(void)

void FUN_14141bba4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014141bbd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14141bbdc FUN_14141bbdc body=47 status=ok
// SIG undefined FUN_14141bbdc(void)

void FUN_14141bbdc(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 2 && *(int *)(param_1 + 0x24) < 1) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = *(longlong *)(param_1 + 0x18);
  }
  *param_2 = param_1;
  *(int *)(param_2 + 1) = iVar1;
  return;
}



// FUNCTION 14141bc0c FUN_14141bc0c body=140 status=ok
// SIG undefined FUN_14141bc0c(void)

void FUN_14141bc0c(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  longlong local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x58);
    lVar2 = (longlong)*(int *)(param_1 + 0x60) << 5;
    do {
      if (*(int *)(*plVar1 + 8) == param_2) {
        if ((plVar1 != (longlong *)0x0) && (plVar1[2] != 0)) {
          local_38 = 0;
          local_28 = &PTR_LAB_14b42a330;
          local_48 = FUN_143e2dbfc;
          local_20 = plVar1[2];
          FUN_14103f5f0();
        }
        break;
      }
      plVar1 = plVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14141bc9a FUN_14141bc9a body=507 status=ok
// SIG undefined FUN_14141bc9a(void)

void FUN_14141bc9a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    plVar3 = *(longlong **)(param_1 + 0x3d8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x3d8) = 0;
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
  }
  FUN_140ee576a(param_1,param_2);
  if (param_2 != 0) {
    lVar4 = FUN_140d12354();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      FUN_140b515ce(param_2,*(undefined8 *)(param_1 + 0xa8));
    }
  }
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    FUN_14026e798(&local_30,*(undefined8 *)(param_1 + 0xa8));
    if (local_30 != 0) {
      FUN_14026e798(&local_40,*(undefined8 *)(param_1 + 0x2c8));
      plVar3 = local_38;
      if (local_40 != 0) {
        local_50 = local_40;
        local_48 = local_38;
        if (local_38 == (longlong *)0x0) {
          FUN_14141be96(local_30,param_1 + 0x3c0,&local_50);
        }
        else {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
          FUN_14141be96(local_30,param_1 + 0x3c0);
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
        }
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_38 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141be96 FUN_14141be96 body=140 status=ok
// SIG undefined FUN_14141be96(void)

void FUN_14141be96(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    local_38 = *param_3;
    local_30 = (longlong *)param_3[1];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
    }
    local_20 = &local_38;
    local_28 = param_2;
    FUN_14141bf24(param_1 + 0x230,local_14,&local_28,0);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141bf24 FUN_14141bf24 body=1646 status=ok
// SIG undefined FUN_14141bf24(void)

int * FUN_14141bf24(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  char cVar15;
  byte bVar16;
  int iVar17;
  uint *puVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar28 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar28 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar28) {
      FUN_1447711aa(param_1,iVar28);
    }
    iVar24 = (int)param_1[5];
    if (iVar24 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar11 = iVar24 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar19 = param_1 + 2;
    iVar17 = iVar24 + 1;
    iVar20 = iVar24 + 0x1f;
    if (-1 < iVar24) {
      iVar20 = iVar24;
    }
    if (iVar20 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar24) {
        if (iVar24 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar11 = iVar24;
        }
        else {
          uVar29 = iVar24 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar26 = 4;
            if (4 < uVar29) {
              uVar26 = uVar29;
            }
          }
          else {
            uVar26 = (uVar29 * 3 >> 3) + uVar29 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar26 << 2,0);
          iVar11 = (int)(uVar14 >> 2);
          iVar17 = -0x20;
          if ((int)uVar29 <= iVar11) {
            iVar17 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar19,iVar11);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar11 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar11 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar22 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar22 = plVar19;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar22 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar11 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar28;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[4];
    }
    bVar16 = (byte)iVar24 & 0x1f;
    puVar4 = (uint *)((longlong)plVar19 + (longlong)(iVar20 >> 5) * 4);
    *puVar4 = *puVar4 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar28 = (int)param_1[6];
    lVar13 = (longlong)iVar28;
    iVar24 = *(int *)(*param_1 + 4 + lVar13 * 0x20);
    *(int *)(param_1 + 6) = iVar24;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar24 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = (uint *)(param_1 + 2);
  puVar18 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar18 = puVar4;
  }
  iVar24 = iVar28 + 0x1f;
  if (-1 < iVar28) {
    iVar24 = iVar28;
  }
  puVar18[iVar24 >> 5] = puVar18[iVar24 >> 5] | 1 << ((byte)iVar28 & 0x1f);
  lVar27 = *param_1;
  lVar13 = lVar13 * 0x20;
  puVar2 = (undefined4 *)(lVar27 + lVar13);
  puVar5 = (undefined8 *)param_3[1];
  *(undefined8 *)(lVar27 + lVar13) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar27 + 8 + lVar13) = *puVar5;
  *(undefined8 *)(lVar27 + 0x10 + lVar13) = puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(lVar27 + 0x18 + lVar13) = 0xffffffff;
  lVar13 = *(longlong *)(lVar27 + lVar13);
  uVar29 = (uint)((ulonglong)lVar13 >> 0x10);
  uVar26 = (uint)lVar13 & 0xffff;
  uVar29 = ((uint)lVar13 << 0x10 | uVar26) + (int)((ulonglong)lVar13 >> 0x20) +
           (uVar29 << 0x13 | uVar29 & 0xffff) + (uVar26 >> 4);
  if ((uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) < 2) {
LAB_14141c07f:
    cVar15 = '\0';
  }
  else {
    plVar19 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[8];
    }
    iVar24 = *(int *)((longlong)plVar19 + (ulonglong)((int)param_1[9] - 1U & uVar29) * 4);
    if (iVar24 == -1) goto LAB_14141c07f;
    do {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar24 * 0x20);
      if (*(longlong *)(*param_1 + (longlong)iVar24 * 0x20) == lVar13) {
        plVar19 = *(longlong **)(puVar3 + 4);
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))();
          }
        }
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
        *puVar3 = uVar7;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        FUN_140e68b6e(param_1,iVar28,1);
        cVar15 = '\x01';
        iVar28 = iVar24;
        break;
      }
      iVar24 = puVar3[6];
      cVar15 = '\0';
    } while (iVar24 != -1);
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar15;
  }
  if (cVar15 != '\0') goto LAB_14141c333;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar26 = 1;
  if (3 < uVar12) {
    uVar14 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar26 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || ((int)uVar26 <= (int)param_1[9])) {
    uVar29 = (int)param_1[9] - 1U & uVar29;
    puVar2[7] = uVar29;
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar29) * 4);
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    *(int *)((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar29) * 4) =
         iVar28;
    goto LAB_14141c333;
  }
  *(uint *)(param_1 + 9) = uVar26;
  plVar19 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar19,0,0,4);
    uVar26 = *(uint *)(param_1 + 9);
  }
  plVar22 = param_1 + 7;
  if (uVar26 == 1) {
    if (*plVar19 != 0) {
      FUN_1446efa72(plVar19,0,0,4);
    }
LAB_14141c0e5:
    uVar29 = 0;
    do {
      plVar19 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar19 = plVar22;
      }
      *(undefined4 *)((longlong)plVar19 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar29) * 4) =
           0xffffffff;
      uVar29 = uVar29 + 1;
    } while (uVar26 != uVar29);
  }
  else {
    if (uVar26 == 0) goto LAB_14141c333;
    FUN_1446efa72(plVar19,0,uVar26,4);
    if (0 < (int)uVar26) goto LAB_14141c0e5;
  }
  iVar24 = (int)param_1[5];
  if (iVar24 == 0) {
    uVar14 = 0;
    uVar23 = 1;
    iVar11 = 0;
    iVar17 = 0;
  }
  else {
    puVar18 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar18 = puVar4;
    }
    uVar29 = *puVar18;
    if (uVar29 == 0) {
      iVar11 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar11 = iVar24 + -1;
      }
      uVar14 = 0;
      uVar23 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar23 = uVar14;
      }
      iVar17 = 0;
      do {
        if (uVar23 == uVar14) goto LAB_14141c333;
        iVar17 = iVar17 + 0x20;
        uVar29 = puVar18[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar29 == 0);
    }
    else {
      uVar14 = 0;
      iVar17 = 0;
    }
    uVar23 = (ulonglong)(-uVar29 & uVar29);
    uVar25 = uVar23 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar24 <= iVar11) {
      iVar11 = iVar24;
    }
  }
  if (iVar11 < iVar24) {
    uVar29 = 0xffffffff;
    do {
      lVar13 = *param_1;
      lVar27 = (longlong)iVar11 * 0x20;
      uVar6 = *(undefined8 *)(lVar13 + lVar27);
      uVar26 = (uint)((ulonglong)uVar6 >> 0x10);
      uVar12 = (uint)uVar6 & 0xffff;
      uVar25 = (longlong)
               (int)(((uint)uVar6 << 0x10 | uVar12) + (int)((ulonglong)uVar6 >> 0x20) +
                     (uVar26 << 0x13 | uVar26 & 0xffff) + (uVar12 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar24 = (int)uVar25;
      *(int *)(lVar13 + 0x1c + lVar27) = iVar24;
      plVar19 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar19 = plVar22;
      }
      *(undefined4 *)(lVar13 + 0x18 + lVar27) =
           *(undefined4 *)((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & uVar25) * 4);
      plVar19 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar19 = plVar22;
      }
      *(int *)((longlong)plVar19 + ((longlong)iVar24 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
      ;
      uVar29 = ~(uint)uVar23 & uVar29;
      puVar18 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar18 = puVar4;
      }
      iVar24 = (int)param_1[5];
      iVar11 = (int)uVar14;
      lVar13 = (longlong)iVar11;
      uVar26 = puVar18[lVar13] & uVar29;
      if (uVar26 == 0) {
        iVar20 = iVar24 + 0x1e;
        if (-1 < iVar24 + -1) {
          iVar20 = iVar24 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar21 = iVar20;
        if (iVar20 < iVar11) {
          iVar21 = iVar11;
        }
        if (iVar20 <= iVar11) break;
        lVar27 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar26 = puVar18[lVar13 + lVar27 + 1];
          if (uVar26 != 0) break;
          lVar27 = lVar27 + 1;
          if (iVar21 - lVar13 == lVar27) goto LAB_14141c333;
        }
        uVar14 = (ulonglong)(iVar11 + (int)lVar27 + 1);
        uVar29 = 0xffffffff;
      }
      uVar23 = (ulonglong)(-uVar26 & uVar26);
      uVar25 = uVar23 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar24);
  }
LAB_14141c333:
  *param_2 = iVar28;
  return param_2;
}



// FUNCTION 14141c592 FUN_14141c592 body=1614 status=ok
// SIG undefined FUN_14141c592(void)

void FUN_14141c592(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 unaff_R14;
  ulonglong uVar17;
  uint uVar19;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  bool local_79;
  longlong *local_78;
  longlong local_70;
  uint *local_68;
  uint local_5c;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  undefined7 uVar18;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_2 + 1) = 0;
  local_78 = param_2;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1488c1150(param_2);
  }
  local_70 = FUN_14141cbe2();
  bVar4 = local_70 != 0;
  if ((local_70 == 0) || (DAT_14c950c29 == 0)) {
    if (local_70 != 0) goto LAB_14141c609;
    uVar18 = (undefined7)((ulonglong)unaff_R14 >> 8);
    uVar17 = CONCAT71(uVar18,1);
    if (DAT_14cad00c8 == 0) goto LAB_14141ca80;
    lVar13 = 0;
    uVar17 = CONCAT71(uVar18,1);
LAB_14141c63d:
    local_79 = bVar4;
    if (lVar13 == DAT_14cad00c8) {
      if ((local_70 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(local_70);
      }
      FUN_1488c1180(param_1,local_78);
      goto LAB_14141cb5d;
    }
  }
  else {
    FUN_1456cec3c();
LAB_14141c609:
    if (DAT_14cad00c8 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) {
        uVar17 = 0;
LAB_14141ca80:
        local_a0 = &local_50;
        local_50 = FUN_144a7958c;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_1479b7a0c;
        local_b0 = &LAB_1463b464e;
        local_b8 = L"Engine";
        local_c0 = 0;
        local_c8 = 0x10000005;
        local_d0 = 8;
        local_d8 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        lVar13 = 0;
        goto LAB_14141c63d;
      }
    }
    local_79 = true;
    if (*(int *)(local_70 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      lVar13 = local_70;
      if (*(longlong *)
           (*(longlong *)(local_70 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
          DAT_14cad00c8 + 0x30) goto LAB_14141c63d;
    }
  }
  if ((local_79 != false) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(local_70);
  }
  puVar14 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  if (iVar2 == 0) {
    uVar16 = 1;
    uVar10 = 0;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar6 = puVar14;
    }
    uVar19 = *puVar6;
    if (uVar19 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar16 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar16 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar16 == uVar10) goto LAB_14141cb5d;
        iVar11 = iVar11 + 0x20;
        uVar19 = puVar6[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar16 = (ulonglong)(-uVar19 & uVar19);
    uVar1 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar19 = 0xffffffff;
    local_5c = (uint)uVar17;
    plVar15 = local_78;
    local_58 = param_1;
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar5 * 0x10);
      if (lVar13 != 0) {
        if ((DAT_14c950c29 & local_79) == 1) {
          local_68 = puVar14;
          FUN_1456cec3c();
          puVar14 = local_68;
          plVar15 = local_78;
LAB_14141c73a:
          if (DAT_14cad00c8 == 0) {
            local_a0 = &local_50;
            local_50 = FUN_144a7958c;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_14081d0ea;
            local_a8 = &LAB_1479b7a0c;
            local_b0 = &LAB_1463b464e;
            local_b8 = L"Engine";
            local_c0 = 0;
            local_c8 = 0x10000005;
            local_d0 = 8;
            local_d8 = 0x110;
            local_68 = puVar14;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar14 = local_68;
            plVar15 = local_78;
            if (DAT_14cad00c8 == 0) goto LAB_14141c94f;
          }
          if (*(int *)(local_70 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_14141c94f;
          lVar12 = 0;
          if (*(longlong *)
               (*(longlong *)(local_70 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
              DAT_14cad00c8 + 0x30) {
            lVar12 = local_70;
          }
        }
        else {
          if ((char)uVar17 == '\0') goto LAB_14141c73a;
LAB_14141c94f:
          lVar12 = 0;
        }
        if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
          iVar5 = (int)plVar15[1];
          *(uint *)(plVar15 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)plVar15 + 0xc) < iVar5 + 1U) {
            FUN_14141ccc8(plVar15,iVar5);
            plVar15 = local_78;
          }
          *(longlong *)(*plVar15 + (longlong)iVar5 * 8) = lVar13;
          uVar17 = (ulonglong)local_5c;
          param_1 = local_58;
        }
      }
      uVar19 = uVar19 & ~(uint)uVar16;
      puVar6 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar6 = puVar14;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar5 = (int)uVar10;
      lVar13 = (longlong)iVar5;
      uVar9 = puVar6[lVar13] & uVar19;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar12 = 0;
          do {
            uVar9 = puVar6[lVar13 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar10 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar19 = 0xffffffff;
              goto LAB_14141c7f4;
            }
            iVar11 = iVar11 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar13 != lVar12);
          uVar19 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar10 = (ulonglong)(iVar5 + 1);
        plVar15 = local_78;
        iVar5 = iVar3;
      }
      else {
LAB_14141c7f4:
        uVar16 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar5 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_14141cb5d:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14141cbe2 FUN_14141cbe2 body=228 status=ok
// SIG undefined FUN_14141cbe2(void)

longlong FUN_14141cbe2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb58e40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146431868;
    local_38 = &LAB_14865a582;
    local_40 = &LAB_145c932e6;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x3f0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAIHeldProjectileComponent",&DAT_14cb58e40,FUN_1464c490a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58e40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141ccc8 FUN_14141ccc8 body=353 status=ok
// SIG undefined FUN_14141ccc8(void)

void FUN_14141ccc8(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14141cd4d;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14141cd4d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14141ce2a FUN_14141ce2a body=467 status=ok
// SIG undefined FUN_14141ce2a(void)

void FUN_14141ce2a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar10);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14141cffe FUN_14141cffe body=2616 status=ok
// SIG undefined FUN_14141cffe(void)

/* WARNING: Removing unreachable block (ram,0x00014141d6f9) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14141cffe(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  int *piVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStack_198 [36];
  int local_174;
  longlong local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong local_150;
  longlong local_148;
  undefined8 *local_140;
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  longlong *local_110;
  longlong local_108;
  undefined1 local_100;
  undefined4 local_f8 [2];
  char local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined4 local_c8 [2];
  int local_c0 [2];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  int local_a0 [2];
  undefined4 local_98;
  undefined1 local_90 [8];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  int local_70 [2];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = param_1;
  cVar6 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar6 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_198);
  }
  FUN_1404e37f4(*param_3,&local_138,&DAT_14cb8b8c0);
  if (local_138 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar19 = param_3[1];
    uVar10 = 0;
    if ((*(longlong *)(lVar19 + 0x88) == 0) || (*(longlong **)(lVar19 + 0x90) == (longlong *)0x0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)(**(longlong **)(lVar19 + 0x90) + 8))();
      lVar19 = param_3[1];
    }
    local_c0[0]._0_1_ = 0;
    local_98 = 0;
    FUN_1456bb102(local_c0,lVar19);
    local_90[0] = 0;
    local_68 = 0;
    FUN_1456bb102(local_90,uVar14);
    plVar9 = (longlong *)FUN_14001cc68(0x80,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14b426d00;
    plVar9[8] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar9[5] = 0;
    plVar9[6] = 0;
    *(undefined8 *)((longlong)plVar9 + 0x31) = 0;
    *(undefined8 *)((longlong)plVar9 + 0x39) = 0;
    *(undefined4 *)((longlong)plVar9 + 0x44) = 0xffffffff;
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 2;
    plVar9[2] = (longlong)&PTR_FUN_14b242730;
    plVar9[0xc] = 0;
    plVar9[0xd] = 0;
    plVar9[0xe] = 0;
    plVar9[0xf] = 0;
    local_158 = param_2;
    if (*(longlong *)(param_3[1] + 0x40) != 0) {
      uVar10 = FUN_1447210f0();
    }
    FUN_140cfc686(&local_120,uVar10);
    plVar9[0xc] = (longlong)local_120;
    local_120 = (undefined8 *)0x0;
    plVar11 = (longlong *)plVar9[0xd];
    plVar9[0xd] = (longlong)local_118;
    local_118 = (longlong *)0x0;
    local_140 = param_3;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar16 = (int *)((longlong)plVar11 + 0xc);
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (*piVar16 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      if (local_118 != (longlong *)0x0) {
        LOCK();
        piVar16 = (int *)((longlong)local_118 + 0xc);
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (*piVar16 == 0) {
          (**(code **)(*local_118 + 0x10))();
        }
      }
    }
    local_160 = plVar9 + 2;
    if ((longlong)*(int *)(local_170 + 0x60) != 0) {
      local_168 = plVar9 + 0xe;
      lVar19 = *(longlong *)(local_170 + 0x58);
      local_148 = (longlong)*(int *)(local_170 + 0x60) * 0xc0 + lVar19;
      local_150 = local_170 + 0x48;
      do {
        puVar15 = DAT_14cb8aa68;
        if (DAT_14cb8aa68 == (undefined8 *)0x0) {
          puVar15 = (undefined8 *)FUN_140595974(0x13000,0);
          lVar18 = 0x7f;
          puVar12 = puVar15;
          do {
            puVar13 = puVar12 + 0x4c;
            *puVar12 = puVar13;
            lVar18 = lVar18 + -1;
            puVar12 = puVar13;
          } while (lVar18 != 0);
          *puVar13 = DAT_14cb8aa68;
          _DAT_14cb8aa70 = _DAT_14cb8aa70 + 0x80;
        }
        DAT_14cb8aa68 = (undefined8 *)*puVar15;
        _DAT_14cb8aa74 = _DAT_14cb8aa74 + 1;
        uVar2 = *(undefined1 *)(lVar19 + 0x90);
        lVar18 = *(longlong *)(lVar19 + 0x38);
        if (lVar18 == 0) {
          local_128 = *(undefined8 *)(lVar19 + 0x28);
          FUN_1446dcdd4(&local_120,&local_128);
          lVar18 = FUN_1448fdc6e(&local_120);
          if (local_108 != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar19 + 0x38) = lVar18;
        }
        cVar6 = *(char *)(lVar19 + 0x91);
        piVar16 = (int *)local_90;
        if (cVar6 == '\x01') {
          piVar16 = local_c0;
        }
        cVar3 = (char)*piVar16;
        local_120 = (undefined8 *)CONCAT71(local_120._1_7_,cVar3);
        if (cVar3 == '\x01') {
          plVar11 = &local_88;
          if (cVar6 == '\x01') {
            plVar11 = (longlong *)(local_c0 + 2);
          }
          local_120 = (undefined8 *)CONCAT71(local_120._1_7_,2);
          if (*plVar11 == 0) {
            local_118._0_4_ = 0;
            iVar7 = 0;
            uVar8 = (uint)local_118;
          }
          else {
            uVar8 = *(uint *)(*plVar11 + 0xc);
            local_118 = (longlong *)(ulonglong)uVar8;
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar20 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar20 = 0;
            }
            iVar7 = *(int *)(lVar20 + 0x10);
            if (*(int *)(lVar20 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar21 = DAT_14c964868 + 1;
              bVar22 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar22) {
                local_174 = iVar21;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar21);
                iVar21 = local_174;
              }
              LOCK();
              iVar7 = *(int *)(lVar20 + 0x10);
              bVar22 = iVar7 == 0;
              if (bVar22) {
                *(int *)(lVar20 + 0x10) = iVar21;
                iVar7 = 0;
              }
              UNLOCK();
              uVar8 = (uint)local_118;
              if (bVar22) {
                iVar7 = iVar21;
              }
            }
          }
          local_118._0_4_ = uVar8;
          local_118 = (longlong *)CONCAT44(iVar7,(uint)local_118);
        }
        else if (cVar3 == '\x02') {
          plVar11 = &local_88;
          if (cVar6 == '\x01') {
            plVar11 = (longlong *)(local_c0 + 2);
          }
          local_118 = (longlong *)*plVar11;
        }
        else if (cVar3 == '\x03') {
          plVar11 = &local_88;
          if (cVar6 == '\x01') {
            plVar11 = (longlong *)(local_c0 + 2);
          }
          local_110 = &local_80;
          if (cVar6 == '\x01') {
            local_110 = (longlong *)(local_c0 + 4);
          }
          local_118 = (longlong *)*plVar11;
          local_110 = (longlong *)*local_110;
          if (local_110 == (longlong *)0x0) {
            plVar11 = &local_78;
            if (cVar6 == '\x01') {
              plVar11 = (longlong *)(local_c0 + 6);
            }
            local_108 = *plVar11;
            piVar16 = local_70;
            if (cVar6 == '\x01') {
              piVar16 = local_c0 + 8;
            }
            local_100 = (char)*piVar16;
          }
          else {
            LOCK();
            *(int *)((longlong)local_110 + 0xc) = *(int *)((longlong)local_110 + 0xc) + 1;
            UNLOCK();
            plVar11 = &local_78;
            if (cVar6 == '\x01') {
              plVar11 = (longlong *)(local_c0 + 6);
            }
            local_108 = *plVar11;
            piVar16 = local_70;
            if (cVar6 == '\x01') {
              piVar16 = local_c0 + 8;
            }
            local_100 = (char)*piVar16;
          }
        }
        lVar20 = 0x58;
        if (cVar6 == '\x01') {
          lVar20 = 0x28;
        }
        local_f8[0] = 0;
        if (*(int *)((longlong)local_c0 + lVar20) != 0) {
          uVar10 = FUN_1448174c4(local_f8);
          FUN_1400e08b0(uVar10,DAT_14c9a3da0 +
                               (longlong)*(int *)((longlong)local_c0 + lVar20) * 0x10 + -0x10);
        }
        local_f0 = '\0';
        local_c8[0] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        *(byte *)(puVar15 + 4) = *(byte *)(puVar15 + 4) & 0xf8;
        puVar15[6] = 0;
        puVar15[7] = 0;
        *(undefined1 *)(puVar15 + 8) = 0;
        *puVar15 = &PTR_FUN_14b4256f8;
        puVar15[1] = &PTR_FUN_14b425710;
        puVar15[5] = &PTR_FUN_14b425728;
        FUN_14141da3a(puVar15 + 9,&local_120);
        *(undefined4 *)(puVar15 + 0x15) = *(undefined4 *)(lVar19 + 0x40);
        puVar15[0x18] = 0;
        puVar15[0x16] = 0;
        puVar15[0x17] = 0;
        puVar15[0x16] = *(undefined8 *)(lVar19 + 0x48);
        uVar10 = FUN_14477b664(*(undefined8 *)(lVar19 + 0x50));
        uVar10 = FUN_14477b664(uVar10);
        puVar15[0x17] = uVar10;
        puVar15[0x18] = *(undefined8 *)(lVar19 + 0x58);
        uVar10 = *(undefined8 *)(lVar19 + 0x68);
        puVar15[0x19] = *(undefined8 *)(lVar19 + 0x60);
        puVar15[0x1a] = uVar10;
        puVar15[0x1b] = *(undefined8 *)(lVar19 + 0x70);
        *(undefined4 *)(puVar15 + 0x1c) = *(undefined4 *)(lVar19 + 0x78);
        puVar15[0x1d] = 0;
        *(undefined4 *)(puVar15 + 0x1e) = *(undefined4 *)(lVar19 + 0x88);
        puVar15[0x1f] = lVar18;
        *(undefined1 *)(puVar15 + 0x20) = uVar2;
        puVar15[0x49] = 0;
        puVar15[0x4a] = 0x500000000;
        *(undefined1 *)((longlong)puVar15 + 0x25c) = 0;
        plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_14b426d20;
        plVar11[2] = (longlong)puVar15;
        FUN_1448173f8(local_c8);
        puVar12 = local_140;
        if (local_f0 != '\0') {
          if (local_f0 == '\x01') {
            local_e8 = 0;
          }
          else if ((local_f0 == '\x03') && (local_e0 != (longlong *)0x0)) {
            LOCK();
            piVar16 = (int *)((longlong)local_e0 + 0xc);
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (*piVar16 == 0) {
              (**(code **)(*local_e0 + 0x10))();
            }
          }
          local_f0 = '\0';
        }
        FUN_1448173f8(local_f8);
        if (((char)local_120 == '\x03') && (local_110 != (longlong *)0x0)) {
          LOCK();
          piVar16 = (int *)((longlong)local_110 + 0xc);
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (*piVar16 == 0) {
            (**(code **)(*local_110 + 0x10))();
          }
        }
        puVar13 = puVar15 + 1;
        uVar10 = *puVar12;
        plVar17 = *(longlong **)(lVar19 + 0x98);
        if ((plVar17 != (longlong *)0x0) ||
           (plVar17 = *(longlong **)(local_170 + 0x30), plVar17 != (longlong *)0x0)) {
          if (puVar15 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)0x0;
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          local_120 = puVar13;
          local_118 = plVar11;
          (**(code **)(*plVar17 + 0x18))(plVar17,uVar10,&local_120);
          plVar17 = local_118;
          if (local_118 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_118 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_118)(local_118);
              LOCK();
              piVar16 = (int *)((longlong)plVar17 + 0xc);
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (*piVar16 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb8aa88) &&
           (FUN_144b3d300(&DAT_14cb8aa88), DAT_14cb8aa88 == -1)) {
          DAT_14cb8aa78 = 0;
          _DAT_14cb8aa80 = 0;
          atexit(FUN_143e2306c);
          _Init_thread_footer(&DAT_14cb8aa88);
        }
        uVar5 = _DAT_14cb8aa80;
        FUN_140b47c46(DAT_14cb8aa78,_DAT_14cb8aa80 & 0xffffffff);
        uVar4 = _DAT_14cb8aa80 >> 0x20;
        _DAT_14cb8aa80 = _DAT_14cb8aa80 & 0xffffffff00000000;
        if (((longlong)uVar5 < 0) && ((int)uVar4 != 0)) {
          FUN_14896cd66(&DAT_14cb8aa78,0);
        }
        FUN_1404e3746(&DAT_14cb8aa78,local_150);
        FUN_1404e3746(&DAT_14cb8aa78,lVar19 + 0xb0);
        FUN_1404e38dc(local_138,*puVar12,puVar15 + 5,&DAT_14cb8aa78);
        lVar18 = plVar9[0xf];
        uVar8 = (int)lVar18 + 1;
        *(uint *)(plVar9 + 0xf) = uVar8;
        if (*(uint *)((longlong)plVar9 + 0x7c) < uVar8) {
          FUN_14141dd22(local_168);
        }
        lVar20 = *local_168;
        lVar18 = (longlong)(int)lVar18 * 0x10;
        *(undefined8 **)(lVar20 + lVar18) = puVar15;
        *(longlong **)(lVar20 + 8 + lVar18) = plVar11;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          plVar17 = plVar11 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar16 = (int *)((longlong)plVar11 + 0xc);
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (*piVar16 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        lVar19 = lVar19 + 0xc0;
      } while (lVar19 != local_148);
    }
    param_2 = local_158;
    *local_158 = (longlong)local_160;
    local_158[1] = (longlong)plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar16 = (int *)((longlong)plVar9 + 0xc);
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (*piVar16 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    FUN_144a5ac3a(local_90);
    FUN_144a5ac3a(local_c0);
  }
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_130 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar16 = (int *)((longlong)local_130 + 0xc);
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (*piVar16 == 0) {
        (**(code **)(*local_130 + 0x10))(local_130);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141da3a FUN_14141da3a body=744 status=ok
// SIG undefined FUN_14141da3a(void)

char * FUN_14141da3a(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  *param_1 = '\0';
  cVar1 = *param_2;
  *param_1 = cVar1;
  pcVar3 = param_2;
  if (cVar1 == '\x01') {
LAB_14141da5e:
    lVar7 = *(longlong *)(pcVar3 + 8);
    *param_1 = '\x02';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    if (lVar7 == 0) {
      iVar4 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar7 + 0xc);
      *(uint *)(param_1 + 8) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar4 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar4 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar4 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar4 = iVar6;
        }
      }
    }
    *(int *)(param_1 + 0xc) = iVar4;
  }
  else if (cVar1 == '\x02') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  else if (cVar1 == '\x03') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    lVar7 = *(longlong *)(param_2 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar7;
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      param_1[0x20] = param_2[0x20];
    }
    else {
      LOCK();
      *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      param_1[0x20] = param_2[0x20];
      pcVar3 = param_1;
      if (*param_1 == '\x01') goto LAB_14141da5e;
    }
  }
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar5 = FUN_1448174c4(param_1 + 0x28);
    FUN_1400e08b0(uVar5,DAT_14c9a3da0 + (longlong)*(int *)(param_2 + 0x28) * 0x10 + -0x10);
  }
  param_1[0x30] = '\0';
  cVar1 = param_2[0x30];
  param_1[0x30] = cVar1;
  pcVar3 = param_2;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      goto LAB_14141db2a;
    }
    if (cVar1 != '\x03') goto LAB_14141db2a;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    lVar7 = *(longlong *)(param_2 + 0x40);
    *(longlong *)(param_1 + 0x40) = lVar7;
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      param_1[0x50] = param_2[0x50];
      goto LAB_14141db2a;
    }
    LOCK();
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    param_1[0x50] = param_2[0x50];
    pcVar3 = param_1;
    if (param_1[0x30] != '\x01') goto LAB_14141db2a;
  }
  lVar7 = *(longlong *)(pcVar3 + 0x38);
  param_1[0x30] = '\x02';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  if (lVar7 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 0x38) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar4 = iVar6;
      }
    }
  }
  *(int *)(param_1 + 0x3c) = iVar4;
LAB_14141db2a:
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  if (*(int *)(param_2 + 0x58) != 0) {
    uVar5 = FUN_1448174c4(param_1 + 0x58);
    FUN_1400e08b0(uVar5,DAT_14c9a3da0 + (longlong)*(int *)(param_2 + 0x58) * 0x10 + -0x10);
  }
  return param_1;
}



// FUNCTION 14141dd22 FUN_14141dd22 body=269 status=ok
// SIG undefined FUN_14141dd22(void)

void FUN_14141dd22(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14141de30 FUN_14141de30 body=138 status=ok
// SIG undefined FUN_14141de30(void)

void FUN_14141de30(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_145a00d9c(param_1,*param_4);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_14141de9b;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_14141de9b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14141deba FUN_14141deba body=486 status=ok
// SIG undefined FUN_14141deba(void)

void FUN_14141deba(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14141e0a2 FUN_14141e0a2 body=701 status=ok
// SIG undefined FUN_14141e0a2(void)

undefined8
FUN_14141e0a2(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) &&
      (lVar1 = FUN_1400f6f32(lVar1), lVar1 != 0)) &&
     ((*(longlong *)(lVar1 + 0x68) != 0 &&
      (lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18), lVar1 != 0)))) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = L"Game";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar3 = *(longlong *)(lVar1 + 0x430), lVar3 != 0)) {
      if (DAT_14cae9568 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1417de738;
        local_30 = (code *)&LAB_145893408;
        local_38 = &LAB_1458cbbd2;
        local_48 = &LAB_147ba21f1;
        local_50 = &LAB_1463e9233;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x1000000c;
        local_70 = 8;
        local_78 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar3 = *(longlong *)(lVar1 + 0x430);
        if (lVar3 == 0) goto LAB_14141e29e;
      }
      uVar2 = 0;
      if ((DAT_14cae9568 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
      goto LAB_14141e2a0;
      if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30)) {
        lVar1 = FUN_14030d4a0();
        if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
           (lVar1 = FUN_140e76a6a(lVar3), lVar1 != 0)) {
          FUN_14141e360(lVar1,param_4,param_5);
          uVar2 = 1;
          goto LAB_14141e2a0;
        }
      }
    }
  }
LAB_14141e29e:
  uVar2 = 0;
LAB_14141e2a0:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14141e360 FUN_14141e360 body=1549 status=ok
// SIG undefined FUN_14141e360(void)

void FUN_14141e360(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  uint local_144;
  longlong local_140;
  uint *local_138;
  longlong *local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined4 local_110;
  longlong local_108 [2];
  undefined4 local_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined2 local_d8 [2];
  int local_d4;
  longlong local_c0;
  int local_b4;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong local_90;
  longlong local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((byte *)*param_3 == (byte *)0x0) || ((*(byte *)*param_3 & 3) == 0)) {
    FUN_14009b010(param_3,3,0);
  }
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  cVar6 = '\0';
  FUN_14009b010(&local_a8,2,0);
  if (*param_3 != 0) {
    local_158 = 0;
    cVar6 = FUN_14014191c(*param_3,&DAT_14cbd79e0,&local_a8,0);
  }
  plVar7 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (cVar6 != '\0') {
    plVar7 = (longlong *)FUN_14039d0c8(param_3,&DAT_14cbd79e0);
    iVar4 = *(int *)(param_1 + 0xd0);
    if (iVar4 == 0) {
      uVar12 = 1;
      uVar19 = 0;
      iVar18 = 0;
      iVar17 = 0;
    }
    else {
      puVar13 = *(uint **)(param_1 + 200);
      if (*(uint **)(param_1 + 200) == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 0xb8);
      }
      uVar16 = *puVar13;
      if (uVar16 == 0) {
        iVar17 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar17 = iVar4 + -1;
        }
        uVar19 = 0;
        uVar12 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar12 = uVar19;
        }
        iVar18 = 0;
        do {
          if (uVar12 == uVar19) goto LAB_14141e91f;
          iVar18 = iVar18 + 0x20;
          uVar16 = puVar13[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar19 = 0;
        iVar18 = 0;
      }
      uVar12 = (ulonglong)(-uVar16 & uVar16);
      uVar3 = uVar12 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar17 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar17) {
        iVar17 = iVar4;
      }
    }
    if (iVar17 != iVar4) {
      local_144 = 0xffffffff;
      local_140 = param_1;
      local_138 = (uint *)(param_1 + 0xb8);
      local_130 = plVar7;
      do {
        lVar14 = *(longlong *)(param_1 + 0xa8);
        iVar5 = *(int *)(lVar14 + (longlong)iVar17 * 0x20);
        local_108[0] = 0;
        local_108[1] = 0;
        lVar11 = 0xf;
        iVar9 = 0x10;
        lVar8 = 0x1000000000;
        iVar10 = iVar5;
        do {
          lVar8 = lVar8 + -0x100000000;
          local_d8[lVar11] = *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar10 % 10) * 2);
          uVar16 = iVar10 + 9;
          lVar11 = lVar11 + -1;
          iVar9 = iVar9 + -1;
          iVar10 = iVar10 / 10;
        } while (0x12 < uVar16);
        if (iVar5 < 0) {
          iVar9 = (int)lVar11;
          lVar8 = (longlong)iVar9;
          local_d8[lVar8] = 0x2d;
        }
        else {
          lVar8 = lVar8 >> 0x20;
        }
        FUN_1400020e8(local_108,local_d8 + lVar8,0x10 - iVar9);
        FUN_14000bbd8(&local_a8,local_108,0);
        if (local_108[0] != 0) {
          FUN_1400020a8();
        }
        FUN_14000bbd8(local_d8,lVar14 + (longlong)iVar17 * 0x20 + 8,0);
        if (local_d4 < 2 && local_b4 < 1 || local_d4 != 2) {
          if (local_c0 != 0) {
            FUN_1400020a8();
          }
          if (local_90 != 0) {
            FUN_1400020a8();
          }
          break;
        }
        if (DAT_14c947fe0 == 0) {
          lVar14 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar14);
          DAT_14c947fe0 = lVar14;
        }
        FUN_140045924(DAT_14c947fe0,&local_120,local_d8,1);
        if (DAT_14c947fe0 == 0) {
          lVar14 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar14);
          DAT_14c947fe0 = lVar14;
        }
        FUN_140045924(DAT_14c947fe0,&local_128,&local_a8,1);
        local_108[0] = 0;
        local_108[1] = 0;
        local_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_78 = local_128;
        plStack_70 = (longlong *)local_120;
        local_110 = 2;
        local_118 = &local_78;
        FUN_140ebdb32(local_108,&local_118,0);
        local_78 = 0;
        plStack_70 = (longlong *)0x0;
        FUN_14009b010(&local_78,1,0);
        if (local_78 != 0) {
          FUN_1402afb64(local_78,local_108);
        }
        if (*local_130 != 0) {
          local_158 = 0;
          FUN_140141db6(*local_130,&local_78,0,0);
        }
        plVar7 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (local_f0 != 0) {
          FUN_1400020a8();
        }
        puVar13 = local_138;
        param_1 = local_140;
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        local_144 = local_144 & ~(uint)uVar12;
        puVar15 = *(uint **)(param_1 + 200);
        if (*(uint **)(param_1 + 200) == (uint *)0x0) {
          puVar15 = puVar13;
        }
        iVar5 = *(int *)(param_1 + 0xd0);
        iVar17 = (int)uVar19;
        lVar14 = (longlong)iVar17;
        uVar16 = puVar15[lVar14] & local_144;
        if (uVar16 == 0) {
          iVar10 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar10 = iVar5 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar18 = iVar18 + 0x20;
          iVar9 = iVar10;
          if (iVar10 < iVar17) {
            iVar9 = iVar17;
          }
          if (iVar17 < iVar10) {
            lVar8 = 0;
            do {
              uVar16 = puVar15[lVar14 + lVar8 + 1];
              if (uVar16 != 0) {
                uVar19 = (ulonglong)(iVar17 + (int)lVar8 + 1);
                local_144 = 0xffffffff;
                goto LAB_14141e802;
              }
              iVar18 = iVar18 + 0x20;
              lVar8 = lVar8 + 1;
            } while (iVar9 - lVar14 != lVar8);
            local_144 = 0xffffffff;
            iVar17 = iVar9;
          }
          uVar19 = (ulonglong)(iVar17 + 1);
          param_1 = local_140;
          iVar17 = iVar5;
        }
        else {
LAB_14141e802:
          uVar12 = (ulonglong)(-uVar16 & uVar16);
          uVar3 = uVar12 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar17 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar17) {
            iVar17 = iVar5;
          }
        }
      } while (iVar17 != iVar4);
    }
  }
LAB_14141e91f:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14141e96e FUN_14141e96e body=579 status=ok
// SIG undefined FUN_14141e96e(void)

void FUN_14141e96e(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [36];
  int local_74;
  longlong local_70;
  ulonglong local_68;
  undefined4 *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0x100000000;
  local_60 = &DAT_14cb44460;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = param_1;
  if (DAT_14cb44478 == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar10 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    iVar10 = DAT_14cb44478;
  }
  puVar4 = local_60;
  iVar8 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar14 = local_50;
  if (local_58._4_4_ != iVar10 || local_60 != &DAT_14cb44460) {
    do {
      local_74 = iVar10;
      lVar11 = DAT_14cb44450;
      lVar6 = *(longlong *)(DAT_14cb44450 + (longlong)iVar7 * 0x18);
      if (((lVar6 == 0) || (plVar2 = *(longlong **)(lVar6 + 0x218), plVar2 == (longlong *)0x0)) ||
         (puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x420))(), puVar5 == (undefined8 *)0x0)) {
        lVar6 = 0;
      }
      else {
        lVar6 = (**(code **)*puVar5)(puVar5,&DAT_14cb3e918);
      }
      if (lVar6 == local_70) {
        FUN_1459a2b7a(*(undefined8 *)(lVar11 + (longlong)iVar7 * 0x18 + 8),local_70);
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar12 = *(undefined4 **)(puVar4 + 4);
      if (*(undefined4 **)(puVar4 + 4) == (undefined4 *)0x0) {
        puVar12 = puVar4;
      }
      iVar10 = puVar4[6];
      lVar6 = (longlong)iVar8;
      uVar9 = puVar12[lVar6] & uVar13;
      if (uVar9 == 0) {
        iVar7 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar7 = iVar10 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar3 = iVar7;
        if (iVar7 < iVar8) {
          iVar3 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar11 = 0;
          do {
            uVar9 = puVar12[lVar6 + lVar11 + 1];
            if (uVar9 != 0) {
              iVar8 = iVar8 + (int)lVar11 + 1;
              uVar13 = 0xffffffff;
              goto LAB_14141eaed;
            }
            iVar14 = iVar14 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar3 - lVar6 != lVar11);
          uVar13 = 0xffffffff;
          iVar8 = iVar3;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar10;
      }
      else {
LAB_14141eaed:
        uVar15 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar15 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar7 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar7) {
          iVar7 = iVar10;
        }
      }
      iVar10 = local_74;
    } while (iVar7 != local_74 || puVar4 != &DAT_14cb44460);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14141ebb2 FUN_14141ebb2 body=109 status=ok
// SIG undefined FUN_14141ebb2(void)

void FUN_14141ebb2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5b3a20;
  FUN_1447a1747(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14141ec20 FUN_14141ec20 body=38 status=ok
// SIG undefined FUN_14141ec20(void)

undefined8 FUN_14141ec20(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"SHIFT",1);
  return param_2;
}



// FUNCTION 14141ec46 FUN_14141ec46 body=350 status=ok
// SIG undefined FUN_14141ec46(void)

undefined4 FUN_14141ec46(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 *unaff_RBP;
  undefined8 *puVar9;
  
  lVar6 = (**(code **)(*param_1 + 0x20))();
  if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x100) == 0)) {
    uVar8 = 0;
  }
  else {
    if ((longlong)(int)param_3[1] != 0) {
      unaff_RBP = (undefined8 *)*param_3;
      puVar9 = unaff_RBP + (longlong)(int)param_3[1] * 2;
      do {
        iVar1 = *(int *)(lVar6 + 0x140);
        if ((longlong)iVar1 != 0) {
          puVar2 = (undefined8 *)*unaff_RBP;
          lVar3 = *(longlong *)(lVar6 + 0x138);
          uVar7 = 0;
          do {
            cVar5 = (**(code **)*puVar2)(puVar2,*(undefined8 *)(lVar3 + uVar7));
            if (cVar5 != '\0') {
              if ((~uVar7 & 0xffffffff0) != 0) goto LAB_14141ed47;
              break;
            }
            uVar7 = uVar7 + 0x10;
          } while ((longlong)iVar1 * 0x10 != uVar7);
        }
        iVar1 = *(int *)(lVar6 + 0x140);
        *(uint *)(lVar6 + 0x140) = iVar1 + 1U;
        if (*(uint *)(lVar6 + 0x144) < iVar1 + 1U) {
          FUN_1413eac7e((longlong *)(lVar6 + 0x138),iVar1);
        }
        lVar3 = *(longlong *)(lVar6 + 0x138);
        *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = *unaff_RBP;
        lVar4 = unaff_RBP[1];
        *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
LAB_14141ed47:
        unaff_RBP = unaff_RBP + 2;
      } while (unaff_RBP != puVar9);
    }
    *(int *)(lVar6 + 0x114) = *(int *)(lVar6 + 0x30) - *(int *)(lVar6 + 0x140);
    uVar8 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  (**(code **)(*param_1 + 0x3b8))(param_1,param_2,param_3,uVar8);
  return uVar8;
}



// FUNCTION 14141eda4 FUN_14141eda4 body=178 status=ok
// SIG undefined FUN_14141eda4(void)

void FUN_14141eda4(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Parameters";
  local_38 = 10;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Parameters";
  local_38 = 10;
  FUN_140208c1e(&DAT_14caeb1d0,local_48,local_44,&local_40);
  DAT_14caeb1e0 = DAT_14caeb1c8;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141ee58 FUN_14141ee58 body=1216 status=ok
// SIG undefined FUN_14141ee58(void)

void FUN_14141ee58(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48;
  int local_40;
  undefined1 local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1468d96f0;
    local_60 = 0;
    local_68 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  uStack_28 = 0;
  uStack_21 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1409e12a0;
    local_60 = 0;
    local_68 = 0xa001;
    FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
    atexit(FUN_142816ef9);
    _Init_thread_footer(&DAT_14c9520b0);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_28 = (undefined7)uVar2;
      uStack_21 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_28);
    }
  }
  local_29 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_140a4831c;
    local_68 = 0x1000000008001;
    local_60 = 0;
    FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
    atexit(FUN_1427e14fe);
    _Init_thread_footer(&DAT_14c9496d8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_29);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_29 = (undefined1)uVar2;
      uStack_28 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_29);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14141f31a(&local_48,local_20,CONCAT17(uStack_21,uStack_28),local_29);
  if ((*param_3 != local_48) || ((int)param_3[1] != local_40)) {
    *param_3 = local_48;
    *(int *)(param_3 + 1) = local_40;
    param_3[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14141f31a FUN_14141f31a body=153 status=ok
// SIG undefined FUN_14141f31a(void)

undefined8 * FUN_14141f31a(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14141f3b4(&local_28);
  if ((local_20 < 1) || (*local_28 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(longlong *)(*local_28 + 0xe10);
    if (lVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      uVar2 = 0;
    }
    else {
      *param_1 = *(undefined8 *)(lVar1 + 0x698);
      uVar2 = *(undefined4 *)(lVar1 + 0x6a0);
    }
    *(undefined4 *)(param_1 + 1) = uVar2;
  }
  param_1[2] = 0;
  if (local_28 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141f3b4 FUN_14141f3b4 body=305 status=ok
// SIG undefined FUN_14141f3b4(void)

longlong * FUN_14141f3b4(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = param_3;
  local_48 = param_4;
  FUN_14141c592(param_2,&local_68);
  lVar3 = local_68;
  lVar7 = (longlong)(int)uStack_60;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar8);
      if ((plVar2 != (longlong *)0x0) && (cVar4 = FUN_143893b9e(plVar2,&local_50), cVar4 != '\0')) {
        lVar5 = (**(code **)(*plVar2 + 0x5d8))(plVar2);
        if (lVar5 == 0) {
LAB_14141f469:
          lVar5 = 0;
        }
        else {
          lVar6 = FUN_140d12354();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_14141f469;
        }
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1418927d0(param_1,iVar1);
        }
        *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar5;
      }
      lVar8 = lVar8 + 8;
    } while (lVar7 * 8 != lVar8);
  }
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141f4e6 FUN_14141f4e6 body=276 status=ok
// SIG undefined FUN_14141f4e6(void)

undefined8 FUN_14141f4e6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14141f5f4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14141f5f4;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14141f5f4:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14141f5a3;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_14141f5a3;
    }
  }
  uVar6 = 0;
LAB_14141f5a3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14141f5fc FUN_14141f5fc body=1521 status=ok
// SIG undefined FUN_14141f5fc(void)

void FUN_14141f5fc(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)FUN_14141fbee();
  if ((plVar6 == (longlong *)0x0) || (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar7 == 0))
  goto LAB_14141f969;
  plVar6 = (longlong *)(lVar7 + 0x48);
  FUN_140457ffc(plVar6,param_1);
  plVar1 = (longlong *)(lVar7 + 0x30);
  FUN_140457ffc(plVar1,param_1);
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b9ba770;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar8;
  *local_60 = (longlong)&PTR_FUN_14b9bcd70;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_60 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = (longlong)&LAB_145bf6630;
  *(undefined4 *)(plVar3 + 5) = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 == 0) goto LAB_14141f7e2;
    if (local_60 != (longlong *)0x0) {
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_14141f7d5;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x5c) < 1) {
      iVar10 = *(int *)(lVar7 + 0x50);
      iVar5 = *(int *)(lVar7 + 0x58) + -1;
      *(int *)(lVar7 + 0x58) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar6 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar6 + (longlong)iVar9 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar6,iVar9);
              FUN_14005b248(plVar6);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar5 = *(int *)(lVar7 + 0x50);
          } while (iVar9 < iVar5);
        }
        iVar9 = 2;
        if (2 < iVar5 * 2) {
          iVar9 = iVar5 * 2;
        }
        *(int *)(lVar7 + 0x58) = iVar9;
        if ((iVar9 < iVar10) && (*(int *)(lVar7 + 0x54) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,local_50);
    }
    iVar10 = *(int *)(lVar7 + 0x50);
    *(uint *)(lVar7 + 0x50) = iVar10 + 1U;
    if (*(uint *)(lVar7 + 0x54) < iVar10 + 1U) {
      FUN_1447a71f6(plVar6,iVar10);
    }
    lVar11 = *plVar6;
    lVar8 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar11 + lVar8) = 0;
    *(undefined4 *)(lVar11 + 8 + lVar8) = 0;
    *(longlong **)(lVar11 + lVar8) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar11 + 8 + lVar8) = local_58;
LAB_14141f7d5:
    local_58 = 0;
LAB_14141f7e2:
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar6 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b421670;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar8;
  *local_60 = (longlong)&PTR_FUN_14b9bcde0;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_60 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar6 + 0x1c) = iVar10;
  plVar6[4] = (longlong)FUN_14128f9d2;
  *(undefined4 *)(plVar6 + 5) = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_14141f969;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_14141f953;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x44) < 1) {
      iVar10 = *(int *)(lVar7 + 0x38);
      iVar5 = *(int *)(lVar7 + 0x40) + -1;
      *(int *)(lVar7 + 0x40) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar6 = *(longlong **)(*plVar1 + (longlong)iVar9 * 0x10),
                plVar6 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar6 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar1,iVar9);
              FUN_14005b248(plVar1);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar5 = *(int *)(lVar7 + 0x38);
          } while (iVar9 < iVar5);
        }
        iVar9 = 2;
        if (2 < iVar5 * 2) {
          iVar9 = iVar5 * 2;
        }
        *(int *)(lVar7 + 0x40) = iVar9;
        if ((iVar9 < iVar10) && (*(int *)(lVar7 + 0x3c) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,local_50);
    }
    iVar10 = *(int *)(lVar7 + 0x38);
    *(uint *)(lVar7 + 0x38) = iVar10 + 1U;
    if (*(uint *)(lVar7 + 0x3c) < iVar10 + 1U) {
      FUN_1447a71f6(plVar1,iVar10);
    }
    lVar7 = *plVar1;
    lVar11 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar7 + lVar11) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar11) = 0;
    *(longlong **)(lVar7 + lVar11) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar7 + 8 + lVar11) = local_58;
LAB_14141f953:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14141f969:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14141fbee FUN_14141fbee body=452 status=ok
// SIG undefined FUN_14141fbee(void)

longlong FUN_14141fbee(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1400d7050(param_1 + 6);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      plVar4 = *(longlong **)(lVar1 + 0xf48);
      if (plVar4 != (longlong *)0x0) {
        uVar2 = FUN_140f5697c();
        lVar1 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar2);
        if (lVar1 != 0) {
          uVar2 = FUN_140f5697c();
          lVar3 = FUN_144718840(lVar1,uVar2);
          if ((lVar1 != lVar3) && (lVar3 != 0)) goto LAB_14141fc93;
        }
      }
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
      if (plVar4 != (longlong *)0x0) {
        uVar2 = FUN_140f5697c();
        lVar1 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar2);
        if (lVar1 != 0) {
          uVar2 = FUN_140f5697c();
          lVar5 = FUN_144718840(lVar1,uVar2);
          lVar3 = 0;
          if (lVar1 != lVar5) {
            lVar3 = lVar5;
          }
          goto LAB_14141fc93;
        }
      }
    }
  }
  lVar3 = 0;
LAB_14141fc93:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14141fe50 FUN_14141fe50 body=101 status=ok
// SIG undefined FUN_14141fe50(void)

int FUN_14141fe50(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x30;
        if ((*(longlong *)(lVar2 + lVar4) == *param_3) &&
           (((*(uint *)(lVar2 + lVar4 + 0x18) ^ *(uint *)(param_3 + 3)) & 0xf) == 0)) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14141feb6 FUN_14141feb6 body=498 status=ok
// SIG undefined FUN_14141feb6(void)

void FUN_14141feb6(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(*(uint *)(lVar3 + 0x18 + lVar7) & 0xf ^
                      ((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 1414200aa FUN_1414200aa body=94 status=ok
// SIG undefined FUN_1414200aa(void)

void FUN_1414200aa(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_14cb0d2b0 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1459a5a14();
  }
  if ((longlong)*(int *)(lVar2 + 0x98) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x90);
    lVar2 = (longlong)*(int *)(lVar2 + 0x98) << 4;
    do {
      uVar1 = FUN_143797b5a(param_1,lVar3);
      FUN_147db36c4(param_1,uVar1);
      lVar3 = lVar3 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 141420108 FUN_141420108 body=51 status=ok
// SIG undefined FUN_141420108(void)

void FUN_141420108(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x58);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14142013c FUN_14142013c body=32 status=ok
// SIG undefined FUN_14142013c(void)

undefined8 * FUN_14142013c(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b713650;
  return param_1;
}



// FUNCTION 14142015c FUN_14142015c body=32 status=ok
// SIG undefined FUN_14142015c(void)

undefined8 * FUN_14142015c(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b73b790;
  return param_1;
}



// FUNCTION 14142017c FUN_14142017c body=32 status=ok
// SIG undefined FUN_14142017c(void)

undefined8 * FUN_14142017c(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b7d42f0;
  return param_1;
}



// FUNCTION 14142019c FUN_14142019c body=32 status=ok
// SIG undefined FUN_14142019c(void)

undefined8 * FUN_14142019c(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b7e2970;
  return param_1;
}



// FUNCTION 1414201bc FUN_1414201bc body=2202 status=ok
// SIG undefined FUN_1414201bc(void)

void FUN_1414201bc(longlong *param_1,undefined4 param_2,longlong param_3,double *param_4,
                  undefined8 param_5,double *param_6,float param_7)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  float fVar7;
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
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_1a8 [32];
  double *local_188;
  double *local_180;
  float local_178;
  double local_168;
  undefined4 local_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_148 = *param_6;
  local_150 = param_6[1];
  local_158 = param_6[2];
  local_100 = local_158 * local_158 + local_148 * local_148 + local_150 * local_150;
  if (((local_100 != 1.0) ||
      (local_118 = local_158, local_110 = local_150, local_108 = local_148, NAN(local_100))) &&
     (local_118 = DAT_14c8464f0, local_110 = DAT_14c8464e8, local_108 = DAT_14c8464e0,
     9.99999993922529e-09 <= local_100)) {
    dVar8 = 1.0 / SQRT(local_100);
    local_118 = local_158 * dVar8;
    local_110 = local_150 * dVar8;
    local_108 = dVar8 * local_148;
  }
  local_140 = local_110 * DAT_14c8462c0 - local_108 * DAT_14c8462c8;
  local_168 = local_108 * DAT_14c8462d0 - DAT_14c8462c0 * local_118;
  dVar21 = DAT_14c8462c8 * local_118 - DAT_14c8462d0 * local_110;
  dVar8 = local_140 * local_140 + dVar21 * dVar21 + local_168 * local_168;
  if ((dVar8 != 1.0) || (NAN(dVar8))) {
    if (dVar8 < 9.99999993922529e-09) {
      local_168 = DAT_14c8464e8;
      local_140 = DAT_14c8464f0;
      dVar21 = DAT_14c8464e0;
    }
    else {
      dVar8 = 1.0 / SQRT(dVar8);
      local_140 = local_140 * dVar8;
      local_168 = local_168 * dVar8;
      dVar21 = dVar21 * dVar8;
    }
  }
  dVar8 = *param_4;
  dVar1 = param_4[1];
  local_138 = param_4[2];
  local_15c = param_2;
  dVar11 = (double)FUN_144719204(SUB84(param_4[3],0),0x4076800000000000);
  dVar4 = (double)FUN_144719204(SUB84(param_4[4],0),0x4076800000000000);
  dVar20 = sin(dVar11 * 0.017453292519943295);
  dVar11 = cos(dVar11 * 0.017453292519943295);
  dVar3 = sin(dVar4 * 0.017453292519943295);
  local_130 = cos(dVar4 * 0.017453292519943295);
  dVar10 = local_168;
  local_128 = dVar3 * dVar11;
  local_130 = local_130 * dVar11;
  dVar15 = local_130 * DAT_14c8462c8 - DAT_14c8462c0 * local_128;
  dVar3 = DAT_14c8462c0 * dVar20 - DAT_14c8462d0 * local_130;
  dVar4 = DAT_14c8462d0 * local_128 - DAT_14c8462c8 * dVar20;
  dVar11 = dVar15 * dVar15 + dVar4 * dVar4 + dVar3 * dVar3;
  if (((dVar11 != 1.0) || (dVar12 = dVar15, dVar14 = dVar3, dVar19 = dVar4, NAN(dVar11))) &&
     (dVar12 = DAT_14c8464f0, dVar14 = DAT_14c8464e8, dVar19 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar11)) {
    dVar11 = 1.0 / SQRT(dVar11);
    dVar12 = dVar15 * dVar11;
    dVar14 = dVar3 * dVar11;
    dVar19 = dVar4 * dVar11;
  }
  local_158 = local_158 + local_138;
  local_150 = local_150 + dVar1;
  local_148 = local_148 + dVar8;
  local_168 = param_6[4];
  local_120 = dVar20;
  if (0.5 <= param_7) {
    fVar7 = powf(1.0 - (param_7 + param_7 + -1.0),*(float *)((longlong)param_1 + 0xc));
    fVar7 = (1.0 - fVar7) * 0.5 + 0.5;
  }
  else {
    fVar7 = powf(param_7 + param_7,*(float *)((longlong)param_1 + 0xc));
    fVar7 = (fVar7 + 0.0) * 0.5;
  }
  bVar6 = local_168 < 0.0;
  dVar5 = (double)(fVar7 + 0.0);
  local_e8 = param_6[2] * dVar5 + param_4[2];
  dStack_f0 = param_6[1] * dVar5 + param_4[1];
  local_f8 = *param_6 * dVar5 + *param_4;
  local_178 = param_7;
  local_180 = param_6;
  local_188 = (double *)param_5;
  FUN_141420a58(param_1,local_15c,param_3,param_4);
  dVar11 = (double)*(float *)((longlong)param_1 + 0x24);
  dVar20 = (double)(&DAT_149931160)[bVar6];
  dVar3 = (double)*(float *)(param_1 + 4);
  dVar4 = (double)*(float *)(param_1 + 5) * SQRT(local_100);
  dVar13 = (double)*(float *)((longlong)param_1 + 0x2c);
  dVar16 = (double)*(float *)(param_1 + 6);
  dVar9 = (double)*(float *)((longlong)param_1 + 0x34) * SQRT(local_100);
  dVar18 = (local_140 * dVar11 * dVar20 - local_118 * dVar3) * dVar4 + local_158;
  dVar15 = (dVar10 * dVar11 * dVar20 - local_110 * dVar3) * dVar4 + local_150;
  dVar17 = local_138 - (dVar12 * dVar16 * dVar20 + local_120 * dVar13) * dVar9;
  dVar14 = dVar1 - (dVar14 * dVar16 * dVar20 + local_128 * dVar13) * dVar9;
  dVar19 = dVar8 - dVar9 * (dVar19 * dVar16 * dVar20 + local_130 * dVar13);
  dVar10 = (dVar18 - local_158) * dVar5 + local_158;
  dVar12 = (dVar15 - local_150) * dVar5 + local_150;
  dVar21 = dVar4 * (dVar21 * dVar11 * dVar20 - local_108 * dVar3) + local_148;
  dVar20 = (dVar19 - dVar21) * dVar5 + dVar21;
  dVar21 = (dVar21 - local_148) * dVar5 + local_148;
  dVar18 = (dVar17 - dVar18) * dVar5 + dVar18;
  dVar15 = (dVar14 - dVar15) * dVar5 + dVar15;
  dVar10 = (dVar18 - dVar10) * dVar5 + dVar10;
  dVar12 = (dVar15 - dVar12) * dVar5 + dVar12;
  dVar21 = (dVar20 - dVar21) * dVar5 + dVar21;
  *param_4 = (((((dVar8 - dVar19) * dVar5 + dVar19) - dVar20) * dVar5 + dVar20) - dVar21) * dVar5 +
             dVar21;
  param_4[1] = (((((dVar1 - dVar14) * dVar5 + dVar14) - dVar15) * dVar5 + dVar15) - dVar12) * dVar5
               + dVar12;
  param_4[2] = (((((local_138 - dVar17) * dVar5 + dVar17) - dVar18) * dVar5 + dVar18) - dVar10) *
               dVar5 + dVar10;
  if ((param_3 != 0) && (lVar2 = *(longlong *)(param_3 + 0x28), lVar2 != 0)) {
    local_e8 = *(double *)(lVar2 + 0xd8);
    local_f8 = *(double *)(lVar2 + 200);
    dStack_f0 = *(double *)(lVar2 + 0xd0);
  }
  local_188 = param_4;
  (**(code **)(*param_1 + 0x58))(param_1,local_15c,param_3,&local_f8);
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141420a58 FUN_141420a58 body=399 status=ok
// SIG undefined FUN_141420a58(void)

void FUN_141420a58(longlong param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                  undefined8 param_5,double *param_6,float param_7)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  
  if (0.5 <= param_7) {
    fVar3 = powf(1.0 - (param_7 + param_7 + -1.0),*(float *)(param_1 + 0xc));
    fVar3 = (1.0 - fVar3) * 0.5 + 0.5;
  }
  else {
    fVar3 = powf(param_7 + param_7,*(float *)(param_1 + 0xc));
    fVar3 = (fVar3 + 0.0) * 0.5;
  }
  dVar4 = (double)(1.0 - fVar3);
  dVar1 = param_6[2];
  dVar2 = param_6[1];
  *param_4 = *param_6 * dVar4 + *param_4;
  param_4[1] = dVar2 * dVar4 + param_4[1];
  param_4[2] = dVar1 * dVar4 + param_4[2];
  dVar1 = param_6[5];
  dVar2 = param_6[4];
  param_4[3] = param_6[3] * dVar4 + param_4[3];
  param_4[4] = dVar2 * dVar4 + param_4[4];
  param_4[5] = dVar1 * dVar4 + param_4[5];
  *(float *)(param_4 + 6) = (1.0 - fVar3) * *(float *)(param_6 + 6) + *(float *)(param_4 + 6);
  dVar1 = param_6[0x12f];
  param_4[0x12e] = param_6[0x12e] * dVar4 + param_4[0x12e];
  param_4[0x12f] = dVar1 * dVar4 + param_4[0x12f];
  dVar1 = param_6[0x131];
  param_4[0x130] = dVar4 * param_6[0x130] + param_4[0x130];
  param_4[0x131] = dVar1 * dVar4 + param_4[0x131];
  return;
}



// FUNCTION 141420be8 FUN_141420be8 body=123 status=ok
// SIG undefined FUN_141420be8(void)

void FUN_141420be8(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_LAB_14aac3580;
  param_1[1] = *(undefined8 *)(param_2 + 0xc0);
  *(uint *)(param_1 + 2) = (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc5);
  *(uint *)((longlong)param_1 + 0x14) =
       (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc6);
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14aac2d40;
  param_1[0x14] = 0;
  param_1[0x15] = 0xf00000000;
  param_1[0x25] = 0;
  param_1[0x26] = 0xf00000000;
  return;
}



// FUNCTION 141420c64 FUN_141420c64 body=993 status=ok
// SIG undefined FUN_141420c64(void)

void FUN_141420c64(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  *param_1 = &PTR_FUN_14b6879e0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)((longlong)param_1 + 0x284) != 0) {
    FUN_14480809c(param_1 + 0x4f,0);
  }
  lVar7 = 0;
  do {
    lVar5 = DAT_14c9a3d60;
    iVar6 = *(int *)((longlong)param_1 + lVar7 + 0x2b8);
    if (iVar6 != 0) {
      if (DAT_14c9a3d68 != DAT_14c9a3d94) {
        iVar6 = iVar6 + -1;
        lVar4 = (longlong)iVar6 * 0x88;
        FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                      *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
        if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar5 + lVar4 + 0x60) != 0) {
          FUN_1400020a8();
        }
        FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
      }
      *(undefined4 *)((longlong)param_1 + lVar7 + 0x2b8) = 0;
    }
    lVar7 = lVar7 + -0xc;
  } while (lVar7 != -0x24);
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x4e];
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
  plVar3 = (longlong *)param_1[0x4c];
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
  plVar3 = (longlong *)param_1[0x48];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((param_1[0x46] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x46] + 0x50));
  }
  if ((param_1[0x3f] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x3f] + 0x50));
  }
  plVar3 = (longlong *)param_1[0x37];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((param_1[0x35] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x35] + 0x50));
  }
  if ((param_1[0x2e] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2e] + 0x50));
  }
  plVar3 = (longlong *)param_1[0x26];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((param_1[0x24] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x24] + 0x50));
  }
  if ((param_1[0x1d] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x1d] + 0x50));
  }
  plVar3 = (longlong *)param_1[0x15];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((param_1[0x13] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x13] + 0x50));
  }
  if ((param_1[0xc] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xc] + 0x50));
  }
  FUN_140368c45(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140368c45(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x000141420e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141421054 FUN_141421054 body=809 status=ok
// SIG undefined FUN_141421054(void)

bool FUN_141421054(longlong *param_1,float param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  float fVar16;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  uStack_80 = 0;
  iVar3 = (int)param_1[0x8a];
  if (iVar3 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar8 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = (uint *)param_1[0x89];
    if ((uint *)param_1[0x89] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x87);
    }
    uVar15 = *puVar7;
    if (uVar15 == 0) {
      iVar8 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar8 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_141421207;
        iVar10 = iVar10 + 0x20;
        uVar15 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar8) {
      iVar8 = iVar3;
    }
  }
  if (iVar8 < iVar3) {
    plVar12 = param_1 + 0x85;
    uVar15 = 0xffffffff;
    do {
      if (*(int *)(*(longlong *)(*plVar12 + 0x10 + (longlong)iVar8 * 0x30) + 0x14) != 0) {
        lVar11 = *plVar12 + (longlong)iVar8 * 0x30;
        fVar16 = *(float *)(lVar11 + 0x20) - param_2;
        *(float *)(lVar11 + 0x20) = fVar16;
        if (fVar16 <= 0.0) {
          local_98 = (longlong)(int)uStack_80;
          uVar4 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
          local_90 = plVar12;
          if (uStack_80._4_4_ < uVar4) {
            FUN_146584b16(&local_88,local_98);
          }
          plVar12 = local_90;
          *(undefined8 *)(local_88 + local_98 * 0x10) = *(undefined8 *)(lVar11 + 0x10);
          lVar11 = *(longlong *)(lVar11 + 0x18);
          *(longlong *)(local_88 + 8 + local_98 * 0x10) = lVar11;
          if (lVar11 != 0) {
            LOCK();
            *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
            UNLOCK();
          }
          FUN_1461bd99a(local_90,iVar8);
        }
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[0x89];
      if ((uint *)param_1[0x89] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x87);
      }
      iVar3 = (int)param_1[0x8a];
      iVar8 = (int)uVar13;
      lVar11 = (longlong)iVar8;
      uVar4 = puVar7[lVar11] & uVar15;
      if (uVar4 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar5 <= iVar8) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar7[lVar11 + lVar9 + 1];
          if (uVar4 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar6 - lVar11 == lVar9) goto LAB_1414211f3;
        }
        uVar13 = (ulonglong)(iVar8 + (int)lVar9 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar3);
LAB_1414211f3:
    if (0 < (int)uStack_80) {
      FUN_145c7d76c(param_1);
    }
    if ((int)uStack_80 != 0) {
      lVar9 = (longlong)(int)uStack_80 << 4;
      lVar11 = local_88;
      do {
        (**(code **)(*param_1 + 0x80))(param_1,lVar11,1);
        lVar11 = lVar11 + 0x10;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
    }
  }
LAB_141421207:
  lVar11 = param_1[0x86];
  iVar3 = *(int *)((longlong)param_1 + 0x45c);
  if ((int)lVar11 <= iVar3) {
    plVar12 = (longlong *)param_1[0x79];
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
    }
  }
  FUN_14101cee4(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar3 < (int)lVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142137e FUN_14142137e body=69 status=ok
// SIG undefined FUN_14142137e(void)

void FUN_14142137e(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *param_1;
    FUN_140457ffc(param_2,uVar1);
    FUN_140457ffc(param_2 + 0x18,uVar1);
    FUN_140457ffc(param_2 + 0x30,uVar1);
    return;
  }
  return;
}



// FUNCTION 1414213c4 FUN_1414213c4 body=76 status=ok
// SIG undefined FUN_1414213c4(void)

void FUN_1414213c4(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14011c349();
  local_18 = *(undefined8 *)(lVar1 + 0x60);
  FUN_140254f32(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141421412 FUN_141421412 body=59 status=ok
// SIG undefined FUN_141421412(void)

void FUN_141421412(undefined8 *param_1)

{
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xf8;
  return;
}



// FUNCTION 14142144e FUN_14142144e body=35 status=ok
// SIG undefined FUN_14142144e(void)

void FUN_14142144e(uint *param_1,longlong param_2,uint param_3)

{
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = -*(int *)(param_2 + 0x5c) & (*(int *)(param_2 + 0x58) + *(int *)(param_2 + 0x5c)) - 1U;
  return;
}



// FUNCTION 141421472 FUN_141421472 body=55 status=ok
// SIG undefined FUN_141421472(void)

void FUN_141421472(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f148 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f148 = FUN_140002ddd(FUN_143c8a2b8,uVar1,L"ReplicatedMissionObjectiveUxModifierUpdate")
    ;
  }
  return;
}



// FUNCTION 1414214aa FUN_1414214aa body=445 status=ok
// SIG undefined FUN_1414214aa(void)

void FUN_1414214aa(longlong *param_1)

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



// FUNCTION 141421668 FUN_141421668 body=215 status=ok
// SIG undefined FUN_141421668(void)

void FUN_141421668(undefined8 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  bVar1 = *(byte *)*param_1;
  *(uint *)(&DAT_14cb87aa8 + (ulonglong)bVar1 * 0xc) = param_2[2];
  *(undefined8 *)(&DAT_14cb87aa0 + (ulonglong)bVar1 * 0xc) = *(undefined8 *)param_2;
  uVar2 = *(undefined1 *)*param_1;
  uVar3 = *param_2;
  uVar6 = param_2[2];
  if (uVar6 != 0) {
    uVar3 = uVar6 >> 0xd ^ uVar3 - uVar6;
    uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar6) - uVar3;
    uVar7 = uVar5 >> 0xd ^ (uVar6 - uVar3) - uVar5;
    uVar6 = uVar7 >> 0xc ^ (uVar3 - uVar5) - uVar7;
    uVar3 = uVar6 << 0x10 ^ (uVar5 - uVar7) - uVar6;
    uVar5 = uVar3 >> 5 ^ (uVar7 - uVar6) - uVar3;
    uVar6 = uVar5 >> 3 ^ (uVar6 - uVar3) - uVar5;
    uVar3 = uVar6 << 10 ^ (uVar3 - uVar5) - uVar6;
    uVar3 = uVar3 >> 0xf ^ uVar5 - (uVar6 + uVar3);
  }
  puVar4 = (undefined1 *)FUN_1459e0ca6(uVar3);
  *puVar4 = uVar2;
  *(char *)*param_1 = *(char *)*param_1 + '\x01';
  return;
}



// FUNCTION 141421740 FUN_141421740 body=471 status=ok
// SIG undefined FUN_141421740(void)

void FUN_141421740(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
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
  if (DAT_14cb7c660 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7c660,0,0,4);
  }
  uVar7 = DAT_14cb7c668;
  uVar2 = local_50;
  if (DAT_14cb7c668 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cb7c658,0,DAT_14cb7c668,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14cb7c660;
        if (DAT_14cb7c660 == (undefined *)0x0) {
          puVar4 = &DAT_14cb7c658;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14cb7c668 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7c630;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7c648 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7c620;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x20;
        uVar7 = DAT_14cb7c668 - 1 & (uint)*(byte *)(lVar1 + lVar5);
        *(uint *)(lVar1 + 0x1c + lVar5) = uVar7;
        puVar4 = DAT_14cb7c660;
        if (DAT_14cb7c660 == (undefined *)0x0) {
          puVar4 = &DAT_14cb7c658;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar5) =
             *(undefined4 *)(puVar4 + (ulonglong)(DAT_14cb7c668 - 1 & uVar7) * 4);
        puVar4 = DAT_14cb7c660;
        if (DAT_14cb7c660 == (undefined *)0x0) {
          puVar4 = &DAT_14cb7c658;
        }
        *(int *)(puVar4 + (ulonglong)(DAT_14cb7c668 - 1 & uVar7) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141421918 FUN_141421918 body=1043 status=ok
// SIG undefined FUN_141421918(void)

void FUN_141421918(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  uint local_70;
  int local_6c;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  uint *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7c6c0 = DAT_14cb7c6c0 + '\x01';
  if (param_1 == 0) {
    local_50._0_4_ = 0;
    iVar6 = 0;
    uVar3 = (uint)local_50;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc);
    local_50 = (uint *)(ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_50;
      if (bVar11) {
        iVar6 = iVar8;
      }
    }
  }
  local_50._0_4_ = uVar3;
  local_50 = (uint *)CONCAT44(iVar6,(uint)local_50);
  local_68 = (longlong *)&DAT_14cb7c6c0;
  plStack_60 = &local_50;
  FUN_145ef550a(&DAT_14cb7c6c8,&local_70);
  if (param_1 == 0) {
    local_50._0_4_ = 0;
    iVar6 = 0;
    uVar3 = (uint)local_50;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc);
    local_50 = (uint *)(ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_50;
      if (bVar11) {
        iVar6 = iVar8;
      }
    }
  }
  local_50._0_4_ = uVar3;
  local_50 = (uint *)CONCAT44(iVar6,(uint)local_50);
  plStack_60 = (longlong *)&DAT_14cb7c6c0;
  local_68 = &local_50;
  FUN_1459a9ac6(&DAT_14cb7c718,&local_70,&local_68);
  local_68 = (longlong *)0x0;
  plStack_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_140005f6c(&local_68,param_1,0,0);
  plVar4 = local_68;
  if (local_68 != (longlong *)0x0) {
    uVar7 = FUN_1465329f4();
    cVar5 = FUN_1448093f4(plVar4,uVar7);
    plVar4 = plStack_60;
    if (cVar5 != '\0') {
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
      }
      if ((local_68 != (longlong *)0x0) && (lVar9 = (**(code **)(*local_68 + 0x28))(), lVar9 != 0))
      {
        local_6c = 0;
        local_70 = *(uint *)(lVar9 + 0xc);
        if ((int)local_70 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((local_70 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_70 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar6 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar6 = *(int *)(lVar10 + 0x10);
          bVar11 = iVar6 == 0;
          if (bVar11) {
            *(int *)(lVar10 + 0x10) = iVar8;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar6 = iVar8;
          }
        }
        local_50 = (uint *)&DAT_14cb7c6c0;
        local_6c = iVar6;
        local_48 = &local_70;
        FUN_145ef550a(&DAT_14cb7c768,local_3c);
        local_6c = 0;
        local_70 = *(uint *)(lVar9 + 0xc);
        if ((int)local_70 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((local_70 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_70 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar6 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar6 = *(int *)(lVar9 + 0x10);
          bVar11 = iVar6 == 0;
          if (bVar11) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar6 = iVar8;
          }
        }
        local_48 = (uint *)&DAT_14cb7c6c0;
        local_6c = iVar6;
        local_50 = &local_70;
        FUN_1459a9ac6(&DAT_14cb7c7b8,local_3c);
      }
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
  plVar4 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141421d2c FUN_141421d2c body=444 status=ok
// SIG undefined FUN_141421d2c(void)

longlong * FUN_141421d2c(uint param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_48 [2];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb87a50 != DAT_14cb87a7c) {
    puVar5 = &DAT_14cb87a80;
    if (DAT_14cb87a88 != (undefined *)0x0) {
      puVar5 = DAT_14cb87a88;
    }
    iVar7 = *(int *)(puVar5 + (ulonglong)(DAT_14cb87a90 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb87a48 + (longlong)iVar7 * 0x14);
        if (*plVar1 == *param_2) {
          if (plVar1 != (longlong *)0x0) goto LAB_141421e98;
          break;
        }
        iVar7 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140bbd0fe(&DAT_14cb87a48,local_48);
  *local_40 = *param_2;
  *(undefined1 *)(local_40 + 1) = 0;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_58 = 0;
  cVar3 = FUN_140bbcfd8(&DAT_14cb87a48,param_1,local_40,local_48);
  if (cVar3 == '\0') {
    uVar4 = DAT_14cb87a50 - DAT_14cb87a7c;
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= DAT_14cb87a90)) {
      param_1 = DAT_14cb87a90 - 1U & param_1;
      *(uint *)(local_40 + 2) = param_1;
      puVar5 = DAT_14cb87a88;
      if (DAT_14cb87a88 == (undefined *)0x0) {
        puVar5 = &DAT_14cb87a80;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)(puVar5 + ((longlong)DAT_14cb87a90 - 1U & (longlong)(int)param_1) * 4);
      puVar5 = DAT_14cb87a88;
      if (DAT_14cb87a88 == (undefined *)0x0) {
        puVar5 = &DAT_14cb87a80;
      }
      *(int *)(puVar5 + ((longlong)DAT_14cb87a90 - 1U & (longlong)(int)param_1) * 4) = local_48[0];
    }
    else {
      DAT_14cb87a90 = iVar7;
      FUN_140bbd39c(&DAT_14cb87a48);
    }
  }
  plVar1 = (longlong *)(DAT_14cb87a48 + (longlong)local_48[0] * 0x14);
LAB_141421e98:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1 + 1;
}



// FUNCTION 141421eea FUN_141421eea body=1533 status=ok
// SIG undefined FUN_141421eea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_141421eea(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar6 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_70 = &local_58;
      local_58 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_146431698;
      local_78 = &LAB_1486775cb;
      local_80 = &LAB_1464cee35;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 0x10;
      local_a8 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
       (lVar6 = *(longlong *)(lVar6 + 0x11e8), lVar6 != 0)) {
      cVar5 = FUN_1402a7098(param_1,lVar6);
      lVar12 = param_3[1];
      plVar4 = (longlong *)param_3[2];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      plVar7 = (longlong *)FUN_14001cc68(0x50,0x10);
      plVar1 = plVar7 + 2;
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b428cd0;
      plVar7[3] = 0;
      plVar7[4] = 0;
      *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
      *(char *)(plVar7 + 7) = cVar5 * '\x02';
      plVar7[2] = (longlong)&PTR_FUN_14b428d10;
      plVar7[8] = lVar12;
      plVar7[9] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      *plVar1 = (longlong)&PTR_FUN_14b428cf0;
      if ((plVar1 != (longlong *)0x0) &&
         (((plVar7[3] == 0 || (plVar7[4] == 0)) || (*(int *)(plVar7[4] + 8) < 1)))) {
        if (plVar7 == (longlong *)0x0) {
          _DAT_00000018 = 0x10;
          plVar13 = (longlong *)&DAT_00000020;
          plVar8 = _DAT_00000020;
          if (_DAT_00000020 != (longlong *)0x0) {
LAB_141422386:
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
            *plVar13 = (longlong)plVar7;
            if (plVar7 != (longlong *)0x0) goto LAB_141422034;
          }
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          plVar7[3] = (longlong)plVar1;
          if ((longlong *)plVar7[4] != plVar7) {
            LOCK();
            *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
            UNLOCK();
            if ((longlong *)plVar7[4] != (longlong *)0x0) {
              plVar13 = plVar7 + 4;
              plVar8 = (longlong *)plVar7[4];
              goto LAB_141422386;
            }
            plVar7[4] = (longlong)plVar7;
          }
LAB_141422034:
          LOCK();
          plVar13 = plVar7 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
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
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar4 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      local_58 = (code *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,4,0x10);
      local_50 = 4;
      if (plVar7 == (longlong *)0x0) {
        *(undefined ***)local_58 = &PTR_LAB_14b428da0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar12 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar12 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar12;
        *(longlong *)(local_58 + 0x10) = lVar10;
        *(undefined ***)local_58 = &PTR_FUN_14b428d30;
        *(longlong *)(local_58 + 0x18) = 0x10;
        *(longlong *)(local_58 + 0x20) = 0;
        *(code **)(local_58 + 0x28) = FUN_1402a7034;
        *(undefined4 *)(local_58 + 0x30) = 0;
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *(undefined ***)local_58 = &PTR_LAB_14b428da0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar12 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar12 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar12;
        *(longlong *)(local_58 + 0x10) = lVar10;
        *(undefined ***)local_58 = &PTR_FUN_14b428d30;
        *(longlong **)(local_58 + 0x18) = plVar1;
        *(longlong **)(local_58 + 0x20) = plVar7;
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        *(code **)(local_58 + 0x28) = FUN_1402a7034;
        *(undefined4 *)(local_58 + 0x30) = 0;
        LOCK();
        plVar4 = plVar7 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      if (((local_50 == 0) || (local_58 == (code *)0x0)) ||
         (cVar5 = (**(code **)(*(longlong *)local_58 + 0x30))(), cVar5 == '\0')) {
        if (local_50 == 0) goto LAB_1414221b8;
        if (local_58 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          goto LAB_1414221ab;
        }
      }
      else {
        plVar4 = (longlong *)(lVar6 + 0x4198);
        if (*(int *)(lVar6 + 0x41ac) < 1) {
          iVar3 = *(int *)(lVar6 + 0x41a0);
          iVar9 = *(int *)(&DAT_000041a8 + lVar6);
          *(int *)(&DAT_000041a8 + lVar6) = iVar9 + -1;
          if (iVar9 + -1 <= iVar3) {
            iVar9 = iVar3;
            if (0 < iVar3) {
              iVar11 = 0;
              do {
                if (((*(int *)(*plVar4 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                    (plVar13 = *(longlong **)(*plVar4 + (longlong)iVar11 * 0x10),
                    plVar13 == (longlong *)0x0)) ||
                   (cVar5 = (**(code **)(*plVar13 + 0x28))(), cVar5 != '\0')) {
                  FUN_14005b288(plVar4,iVar11);
                  FUN_14005b248(plVar4);
                }
                else {
                  iVar11 = iVar11 + 1;
                }
                iVar9 = *(int *)(lVar6 + 0x41a0);
              } while (iVar11 < iVar9);
            }
            iVar11 = 2;
            if (2 < iVar9 * 2) {
              iVar11 = iVar9 * 2;
            }
            *(int *)(&DAT_000041a8 + lVar6) = iVar11;
            if ((iVar11 < iVar3) && (*(int *)(lVar6 + 0x41a4) != iVar9)) {
              FUN_14045812c();
            }
          }
        }
        if ((local_50 != 0) && (local_58 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_58 + 0x38))(local_58,local_48);
        }
        iVar3 = *(int *)(lVar6 + 0x41a0);
        *(uint *)(lVar6 + 0x41a0) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x41a4) < iVar3 + 1U) {
          FUN_1447a71f6(plVar4,iVar3);
        }
        lVar6 = *plVar4;
        lVar12 = (longlong)iVar3 * 0x10;
        *(undefined8 *)(lVar6 + lVar12) = 0;
        *(undefined4 *)(lVar6 + 8 + lVar12) = 0;
        *(code **)(lVar6 + lVar12) = local_58;
        local_58 = (code *)0x0;
        *(int *)(lVar6 + 8 + lVar12) = local_50;
LAB_1414221ab:
        local_50 = 0;
LAB_1414221b8:
        if (local_58 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar4 = plVar7 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      goto LAB_1414221db;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1414221db:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141422510 FUN_141422510 body=181 status=ok
// SIG undefined FUN_141422510(void)

void FUN_141422510(longlong param_1)

{
  bool bVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(byte *)(param_1 + 0x65) & 0x18) == 0x10) && (*(longlong *)(param_1 + 0x25f8) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x25f8) + 0x458) == '\x01')) {
    local_38 = DAT_14cbc1968;
    local_30 = 0xffffffff;
    FUN_140c823b2(param_1 + 0x4d8,local_28);
    bVar1 = local_28[0] == DAT_14cbc1958 && local_28[0] != DAT_14cbc1950;
    if ((bool)*(char *)(param_1 + 0x1ae8) != bVar1) {
      *(bool *)(param_1 + 0x1ae8) = bVar1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414225d4 FUN_1414225d4 body=20 status=ok
// SIG undefined FUN_1414225d4(void)

undefined8 FUN_1414225d4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  return 0;
}



// FUNCTION 1414225e8 FUN_1414225e8 body=379 status=ok
// SIG undefined FUN_1414225e8(void)

longlong FUN_1414225e8(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    uVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar9 = local_60 & 0xffffffff;
    uVar13 = local_60 >> 0x20;
  }
  iVar2 = (int)local_58[3];
  if (local_50._4_4_ < iVar2) {
    iVar6 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar6 = iVar2 + -1;
    }
    iVar6 = iVar6 >> 5;
    lVar3 = 0;
    uVar5 = (uint)local_50;
    iVar14 = local_50._4_4_;
    iVar4 = local_48;
    do {
      iVar8 = (int)uVar9;
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar14 * 0x28) == *param_2) {
        lVar3 = *param_1 + (longlong)iVar14 * 0x28;
        break;
      }
      uVar5 = uVar5 & ~(uint)uVar13;
      plVar11 = (longlong *)local_58[2];
      if ((longlong *)local_58[2] == (longlong *)0x0) {
        plVar11 = local_58;
      }
      lVar10 = (longlong)iVar8;
      uVar7 = *(uint *)((longlong)plVar11 + lVar10 * 4) & uVar5;
      if (uVar7 == 0) {
        iVar14 = iVar6;
        if (iVar6 < iVar8) {
          iVar14 = iVar8;
        }
        if (iVar6 <= iVar8) break;
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar7 = *(uint *)((longlong)plVar11 + lVar12 * 4 + lVar10 * 4 + 4);
          if (uVar7 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar14 - lVar10 == lVar12) goto LAB_141422748;
        }
        uVar9 = (ulonglong)(iVar8 + (int)lVar12 + 1);
        uVar5 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar13 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar14 = (iVar4 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar2);
  }
  else {
LAB_141422748:
    lVar3 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141422764 FUN_141422764 body=26 status=ok
// SIG undefined FUN_141422764(void)

undefined8 * FUN_141422764(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14142277e FUN_14142277e body=555 status=ok
// SIG undefined FUN_14142277e(void)

void FUN_14142277e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  IAsyncResourceResponse *this;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [44];
  int local_6c;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_1[0x45] == 0) || (param_1[0x46] == 0)) || (*(int *)(param_1[0x46] + 8) < 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
  }
  (**(code **)(*param_2 + 0x68))(param_2,&local_68);
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  FUN_140ba69b6(&local_58,uVar2,&local_68);
  cVar1 = (**(code **)(param_1[-1] + 0x80))(param_1 + -1,param_2,&local_6c,&local_58);
  _Src = local_58;
  if (cVar1 == '\0') {
    (**(code **)(*param_3 + 0x10))(param_3,1);
    goto LAB_141422962;
  }
  if (local_6c == 2) {
    this = (IAsyncResourceResponse *)FUN_14001cc68(0x28,0x10);
    cohtml::IAsyncResourceResponse::IAsyncResourceResponse(this);
    *(undefined ***)this = &PTR_FUN_14b452950;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(longlong **)(this + 0x18) = param_3;
    (**(code **)(*param_1 + 8))(param_1,param_2,this);
    goto LAB_141422962;
  }
  local_68 = (undefined2 *)0x0;
  local_60 = local_50;
  if ((longlong)local_50 == 0) {
    local_5c = 0;
LAB_14142290b:
    puVar5 = &DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(&local_68,local_50,0);
    memcpy(local_68,_Src,(longlong)local_50 * 2);
    puVar5 = local_68;
    if (local_60 == 0) goto LAB_14142290b;
  }
  plVar3 = (longlong *)FUN_14001cc68(0x98,0x10);
  FUN_1459ac5de(plVar3,puVar5);
  lVar4 = FUN_1411dff66(plVar3);
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  else {
    (**(code **)(*param_3 + 8))(param_3,plVar3);
  }
  (**(code **)(*param_3 + 0x10))(param_3,lVar4 == 0);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_141422962:
  FUN_1447a1747(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414229c6 FUN_1414229c6 body=7 status=ok
// SIG undefined FUN_1414229c6(void)

undefined1 FUN_1414229c6(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1f8);
}



// FUNCTION 1414229ce FUN_1414229ce body=17 status=ok
// SIG undefined FUN_1414229ce(void)

undefined4 FUN_1414229ce(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(param_1 + 0x152) - 2;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 3);
}



// FUNCTION 1414229e0 FUN_1414229e0 body=73 status=ok
// SIG undefined FUN_1414229e0(void)

void FUN_1414229e0(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = DAT_14cb24ad0;
  if (DAT_14cb24ad0 == 0) {
    plVar2 = (longlong *)FUN_145a7712c();
    lVar1 = plVar2[0x22];
    if (plVar2[0x22] == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar1 = plVar2[0x22];
    }
  }
  DAT_14cb24ad0 = lVar1;
  return;
}



// FUNCTION 141422a29 FUN_141422a29 body=49 status=ok
// SIG undefined FUN_141422a29(void)

void FUN_141422a29(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141422a5a FUN_141422a5a body=202 status=ok
// SIG undefined FUN_141422a5a(void)

int FUN_141422a5a(longlong *param_1,uint param_2,longlong *param_3)

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



// FUNCTION 141422b24 FUN_141422b24 body=517 status=ok
// SIG undefined FUN_141422b24(void)

void FUN_141422b24(longlong *param_1)

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



// FUNCTION 141422d2a FUN_141422d2a body=861 status=ok
// SIG undefined FUN_141422d2a(void)

void FUN_141422d2a(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141423088();
  if ((*(char *)(param_1 + 0x468) != '\x01') ||
     (plVar5 = *(longlong **)(param_1 + 0xa8), plVar5 == (longlong *)0x0)) goto LAB_141422f3e;
  uVar4 = FUN_140da3b08();
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar4);
  if (plVar5 == (longlong *)0x0) goto LAB_141422f3e;
  uVar4 = FUN_140da3b08();
  plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
  if ((plVar5 == plVar6) || (plVar6 == (longlong *)0x0)) goto LAB_141422f3e;
  lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar5 = local_50;
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14b95ff40;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_50[2] = lVar8;
  *local_50 = (longlong)&PTR_FUN_14b961820;
  local_50[3] = 0;
  iVar9 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar9 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar9 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar9 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar3;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar9 = iVar3;
      }
    }
  }
  *(int *)((longlong)plVar5 + 0x1c) = iVar9;
  plVar5[4] = (longlong)FUN_14100a61c;
  *(undefined4 *)(plVar5 + 5) = 0;
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*local_50 + 0x30))(), cVar2 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_141422f3e;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_141422f28;
    }
  }
  else {
    plVar5 = (longlong *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x24) < 1) {
      iVar9 = *(int *)(lVar7 + 0x18);
      iVar3 = *(int *)(lVar7 + 0x20) + -1;
      *(int *)(lVar7 + 0x20) = iVar3;
      if (iVar3 <= iVar9) {
        iVar3 = iVar9;
        if (0 < iVar9) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar5 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar6 = *(longlong **)(*plVar5 + (longlong)iVar10 * 0x10),
                plVar6 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar6 + 0x28))(), cVar2 != '\0')) {
              FUN_14005b288(plVar5,iVar10);
              FUN_14005b248(plVar5);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar3 = *(int *)(lVar7 + 0x18);
          } while (iVar10 < iVar3);
        }
        iVar10 = 2;
        if (2 < iVar3 * 2) {
          iVar10 = iVar3 * 2;
        }
        *(int *)(lVar7 + 0x20) = iVar10;
        if ((iVar10 < iVar9) && (*(int *)(lVar7 + 0x1c) != iVar3)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,local_40);
    }
    iVar9 = *(int *)(lVar7 + 0x18);
    *(uint *)(lVar7 + 0x18) = iVar9 + 1U;
    if (*(uint *)(lVar7 + 0x1c) < iVar9 + 1U) {
      FUN_1447a71f6(plVar5,iVar9);
    }
    lVar11 = *plVar5;
    lVar7 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar11 + lVar7) = 0;
    *(undefined4 *)(lVar11 + 8 + lVar7) = 0;
    *(longlong **)(lVar11 + lVar7) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar11 + 8 + lVar7) = local_48;
LAB_141422f28:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141422f3e:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141423088 FUN_141423088 body=4465 status=ok
// SIG undefined FUN_141423088(void)

void FUN_141423088(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  bool bVar30;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  code *local_b8;
  code *local_b0;
  uint local_9c;
  longlong *local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  undefined8 local_70;
  longlong *local_60;
  int local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar9 = *(longlong **)(param_1 + 0xa8);
  if (plVar9 == (longlong *)0x0) {
LAB_141423198:
    uStack_80 = (longlong *)0x0;
    plVar10 = (longlong *)0x0;
LAB_14142319a:
    local_88 = (code *)0x0;
    iVar28 = 0;
  }
  else {
    uVar8 = FUN_14131a30e();
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar8);
    if (plVar9 == (longlong *)0x0) goto LAB_141423198;
    uVar8 = FUN_14131a30e();
    plVar10 = (longlong *)FUN_144718840(plVar9,uVar8);
    if (plVar9 == plVar10) goto LAB_141423198;
    local_88 = (code *)0x0;
    uStack_80 = (longlong *)0x0;
    if (plVar10 == (longlong *)0x0) goto LAB_141423198;
    lVar11 = (**(code **)(*plVar10 + 8))(plVar10);
    if (lVar11 == 0) goto LAB_14142319a;
    uVar18 = *(uint *)(lVar11 + 0xc);
    local_88 = (code *)CONCAT44(local_88._4_4_,uVar18);
    if ((int)uVar18 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar28 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar28 = DAT_14c964868 + 1;
      UNLOCK();
      iVar20 = DAT_14c964868 + 1;
      bVar30 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar28;
      if (bVar30) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar20);
      }
      LOCK();
      iVar28 = *(int *)(lVar11 + 0x10);
      bVar30 = iVar28 == 0;
      if (bVar30) {
        *(int *)(lVar11 + 0x10) = iVar20;
        iVar28 = 0;
      }
      UNLOCK();
      if (bVar30) {
        iVar28 = iVar20;
      }
    }
  }
  local_88._4_4_ = iVar28;
  cVar3 = FUN_14493c216(&local_88,0);
  if (cVar3 == '\0') {
    uStack_80 = plVar10;
  }
  *(uint *)(param_1 + 0x430) = (uint)local_88;
  *(int *)(param_1 + 0x434) = local_88._4_4_;
  *(undefined4 *)(param_1 + 0x438) = (undefined4)uStack_80;
  *(undefined4 *)(param_1 + 0x43c) = uStack_80._4_4_;
  plVar9 = *(longlong **)(param_1 + 0xa8);
  if (plVar9 == (longlong *)0x0) {
LAB_1414232bb:
    uStack_80 = (longlong *)0x0;
    plVar10 = (longlong *)0x0;
LAB_1414232bd:
    local_88 = (code *)0x0;
    iVar28 = 0;
  }
  else {
    uVar8 = FUN_14018b740();
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar8);
    if (plVar9 == (longlong *)0x0) goto LAB_1414232bb;
    uVar8 = FUN_14018b740();
    plVar10 = (longlong *)FUN_144718840(plVar9,uVar8);
    if (plVar9 == plVar10) goto LAB_1414232bb;
    local_88 = (code *)0x0;
    uStack_80 = (longlong *)0x0;
    if (plVar10 == (longlong *)0x0) goto LAB_1414232bb;
    lVar11 = (**(code **)(*plVar10 + 8))(plVar10);
    if (lVar11 == 0) goto LAB_1414232bd;
    uVar18 = *(uint *)(lVar11 + 0xc);
    local_88 = (code *)CONCAT44(local_88._4_4_,uVar18);
    if ((int)uVar18 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar28 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar28 = DAT_14c964868 + 1;
      UNLOCK();
      iVar20 = DAT_14c964868 + 1;
      bVar30 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar28;
      if (bVar30) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar20);
      }
      LOCK();
      iVar28 = *(int *)(lVar11 + 0x10);
      bVar30 = iVar28 == 0;
      if (bVar30) {
        *(int *)(lVar11 + 0x10) = iVar20;
        iVar28 = 0;
      }
      UNLOCK();
      if (bVar30) {
        iVar28 = iVar20;
      }
    }
  }
  local_88 = (code *)CONCAT44(iVar28,(uint)local_88);
  cVar3 = FUN_14493c216(&local_88,0);
  if (cVar3 == '\0') {
    uStack_80 = plVar10;
  }
  *(uint *)(param_1 + 0x440) = (uint)local_88;
  *(int *)(param_1 + 0x444) = local_88._4_4_;
  *(undefined4 *)(param_1 + 0x448) = (undefined4)uStack_80;
  *(undefined4 *)(param_1 + 0x44c) = uStack_80._4_4_;
  plVar9 = *(longlong **)(param_1 + 0xa8);
  if (plVar9 == (longlong *)0x0) {
LAB_141423347:
    lVar12 = 0;
  }
  else {
    if (DAT_14cb94538 == 0) {
      local_88 = FUN_1449e2820;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_1427b09ee;
      local_c8 = &LAB_148a18249;
      local_d0 = FUN_14657713c;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10004001;
      local_f0 = 8;
      local_f8 = 0x28;
      local_c0 = &local_88;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    lVar11 = (**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb94538);
    if (lVar11 == 0) goto LAB_141423347;
    if (DAT_14cb94538 == 0) {
      local_88 = FUN_1449e2820;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_1427b09ee;
      local_c8 = &LAB_148a18249;
      local_d0 = FUN_14657713c;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10004001;
      local_f0 = 8;
      local_f8 = 0x28;
      local_c0 = &local_88;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    lVar12 = FUN_144718840(lVar11,DAT_14cb94538);
    if (lVar11 == lVar12) goto LAB_141423347;
  }
  FUN_140371688(&local_88,lVar12);
  *(uint *)(param_1 + 0x450) = (uint)local_88;
  *(int *)(param_1 + 0x454) = local_88._4_4_;
  *(undefined4 *)(param_1 + 0x458) = (undefined4)uStack_80;
  *(undefined4 *)(param_1 + 0x45c) = uStack_80._4_4_;
  if (((((*(longlong **)(param_1 + 0x438) != (longlong *)0x0) && (*(int *)(param_1 + 0x434) != 0))
       && (uVar18 = *(uint *)(param_1 + 0x430), -1 < (int)uVar18)) &&
      (((int)uVar18 < DAT_14c9647dc &&
       (lVar11 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8), lVar11 != 0)))) &&
     ((*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0x434) &&
      ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0xb8))();
    *(undefined4 *)(param_1 + 0x460) = uVar4;
    plVar9 = *(longlong **)(param_1 + 0x438);
    local_88 = (code *)0x14b4aa9e8;
    uStack_80 = (longlong *)CONCAT35(uStack_80._5_3_,6);
    uVar4 = FUN_14001a6c0(&local_88,1);
    (**(code **)(*plVar9 + 0xb0))(plVar9,*(undefined4 *)(param_1 + 0x460),0,uVar4);
  }
  if ((((*(longlong **)(param_1 + 0x458) != (longlong *)0x0) && (*(int *)(param_1 + 0x454) != 0)) &&
      ((uVar18 = *(uint *)(param_1 + 0x450), -1 < (int)uVar18 &&
       ((((int)uVar18 < DAT_14c9647dc &&
         (lVar11 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8), lVar11 != 0)) &&
        (*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0x454))))))) &&
     (((*(uint *)(lVar11 + 8) & 0x10200000) == 0 &&
      (lVar11 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0x18))(), lVar11 != 0)))) {
    uStack_80 = (longlong *)0x0;
    local_78 = 10;
    local_70 = 0;
    if (*(longlong **)(param_1 + 0x410) != (longlong *)0x0 || *(int *)(param_1 + 0x418) != 10) {
      uStack_80 = *(longlong **)(param_1 + 0x410);
      local_78 = *(int *)(param_1 + 0x418);
    }
    local_88 = *(code **)(param_1 + 0x128);
    iVar28 = *(int *)(param_1 + 0x460);
    *(int *)(param_1 + 0x464) = iVar28;
    if (iVar28 < *(int *)(lVar11 + 0xa8)) {
      FUN_14036c13e(lVar11,iVar28,&local_88);
    }
    else {
      uVar4 = FUN_14036b6d0(lVar11,&local_88);
      *(undefined4 *)(param_1 + 0x464) = uVar4;
    }
    local_60 = (longlong *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    plVar9 = local_60;
    local_58 = 3;
    *local_60 = (longlong)&PTR_LAB_14b4aa9f0;
    LOCK();
    UNLOCK();
    lVar16 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar16 == 0) {
      LOCK();
      UNLOCK();
      lVar16 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_60[2] = lVar16;
    *local_60 = (longlong)&PTR_FUN_14b4aa2b0;
    local_60[3] = 0;
    iVar28 = 0;
    if (param_1 != 0) {
      uVar18 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_60 + 3) = uVar18;
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar28 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar28 = DAT_14c964868 + 1;
        UNLOCK();
        iVar20 = DAT_14c964868 + 1;
        bVar30 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar28;
        if (bVar30) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar20);
        }
        LOCK();
        iVar28 = *(int *)(lVar12 + 0x10);
        bVar30 = iVar28 == 0;
        if (bVar30) {
          *(int *)(lVar12 + 0x10) = iVar20;
          iVar28 = 0;
        }
        UNLOCK();
        if (bVar30) {
          iVar28 = iVar20;
        }
      }
    }
    *(int *)((longlong)plVar9 + 0x1c) = iVar28;
    plVar9[4] = (longlong)FUN_140c5ea2e;
    *(undefined4 *)(plVar9 + 5) = 0;
    if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*local_60 + 0x30))(), cVar3 == '\0')) {
      if (local_58 != 0) {
        if (local_60 == (longlong *)0x0) goto LAB_141423767;
        (**(code **)*local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        goto LAB_14142374b;
      }
    }
    else {
      plVar9 = (longlong *)(lVar11 + 0x88);
      if (*(int *)(lVar11 + 0x9c) < 1) {
        iVar28 = *(int *)(lVar11 + 0x90);
        iVar20 = *(int *)(lVar11 + 0x98) + -1;
        *(int *)(lVar11 + 0x98) = iVar20;
        if (iVar20 <= iVar28) {
          iVar20 = iVar28;
          if (0 < iVar28) {
            iVar21 = 0;
            do {
              if (((*(int *)(*plVar9 + 8 + (longlong)iVar21 * 0x10) == 0) ||
                  (plVar10 = *(longlong **)(*plVar9 + (longlong)iVar21 * 0x10),
                  plVar10 == (longlong *)0x0)) ||
                 (cVar3 = (**(code **)(*plVar10 + 0x28))(), cVar3 != '\0')) {
                FUN_14005b288(plVar9,iVar21);
                FUN_14005b248(plVar9);
              }
              else {
                iVar21 = iVar21 + 1;
              }
              iVar20 = *(int *)(lVar11 + 0x90);
            } while (iVar21 < iVar20);
          }
          iVar21 = 2;
          if (2 < iVar20 * 2) {
            iVar21 = iVar20 * 2;
          }
          *(int *)(lVar11 + 0x98) = iVar21;
          if ((iVar21 < iVar28) && (*(int *)(lVar11 + 0x94) != iVar20)) {
            FUN_14045812c();
          }
        }
      }
      if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
        (**(code **)(*local_60 + 0x38))(local_60,local_50);
      }
      iVar28 = *(int *)(lVar11 + 0x90);
      *(uint *)(lVar11 + 0x90) = iVar28 + 1U;
      if (*(uint *)(lVar11 + 0x94) < iVar28 + 1U) {
        FUN_1447a71f6(plVar9,iVar28);
      }
      lVar11 = *plVar9;
      lVar12 = (longlong)iVar28 * 0x10;
      *(undefined8 *)(lVar11 + lVar12) = 0;
      *(undefined4 *)(lVar11 + 8 + lVar12) = 0;
      *(longlong **)(lVar11 + lVar12) = local_60;
      local_60 = (longlong *)0x0;
      *(int *)(lVar11 + 8 + lVar12) = local_58;
LAB_14142374b:
      local_58 = 0;
    }
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141423767:
  plVar9 = *(longlong **)(param_1 + 0xa8);
  if (plVar9 == (longlong *)0x0) goto LAB_141423bb4;
  uVar8 = FUN_14058c734();
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar8);
  if (plVar9 == (longlong *)0x0) goto LAB_141423bb4;
  uVar8 = FUN_14058c734();
  plVar10 = (longlong *)FUN_144718840(plVar9,uVar8);
  if ((((plVar9 == plVar10) || (plVar10 == (longlong *)0x0)) ||
      (lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10), param_1 == 0)) ||
     ((lVar11 == 0 || (*(int *)(param_1 + 0x464) == 0x7fffffff)))) goto LAB_141423bb4;
  uVar18 = *(uint *)(param_1 + 0xc);
  if ((int)uVar18 < DAT_14c9647dc) {
    lVar12 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
  }
  else {
    lVar12 = 0;
  }
  iVar28 = *(int *)(lVar12 + 0x10);
  if (*(int *)(lVar12 + 0x10) == 0) {
    LOCK();
    iVar28 = DAT_14c964868 + 1;
    UNLOCK();
    iVar20 = DAT_14c964868 + 1;
    bVar30 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar28;
    if (bVar30) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar20);
    }
    LOCK();
    iVar28 = *(int *)(lVar12 + 0x10);
    bVar30 = iVar28 == 0;
    if (bVar30) {
      *(int *)(lVar12 + 0x10) = iVar20;
      iVar28 = 0;
    }
    UNLOCK();
    if (bVar30) {
      iVar28 = iVar20;
    }
  }
  local_98 = (longlong *)(lVar11 + 0x1a0);
  uVar27 = *(uint *)(param_1 + 0x464);
  if (*(int *)(lVar11 + 0x1d4) == 0) {
    iVar20 = *(int *)(lVar11 + 0x1a8);
    *(int *)(lVar11 + 0x1a8) = iVar20 + 1;
    if (*(int *)(lVar11 + 0x1ac) == iVar20) {
      FUN_140171ad2(local_98,iVar20);
    }
    iVar21 = *(int *)(lVar11 + 0x1c8);
    if (iVar21 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar5 = iVar21 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    lVar16 = lVar11 + 0x1b0;
    iVar15 = iVar21 + 1;
    iVar22 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar22 = iVar21;
    }
    if (iVar22 >> 5 == iVar5) {
      *(int *)(lVar11 + 0x1c8) = iVar15;
    }
    else {
      if (*(int *)(lVar11 + 0x1cc) <= iVar21) {
        iVar5 = iVar21;
        local_9c = uVar27;
        if (iVar21 + 0x20U < 0xa0) {
          iVar15 = 0x80;
        }
        else {
          uVar27 = iVar21 + 0x20U >> 5;
          if (*(int *)(lVar11 + 0x1cc) + 0x1fU < 0xa0) {
            uVar23 = 4;
            if (4 < uVar27) {
              uVar23 = uVar27;
            }
          }
          else {
            uVar23 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
          }
          uVar13 = (ulonglong)(uVar23 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar6 = (uint)(uVar13 + 0xf);
              if (uVar23 < 0x1ffd) {
                uVar13 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar13 + 0xf >> 4]];
              }
              else {
                uVar19 = (ulonglong)(uVar6 & 0xfffffff0);
                if (uVar19 < 0x7ff1) {
                  bVar14 = (&DAT_14c841e00)[uVar6 >> 4];
                  uVar29 = 0x32;
                  if (0x32 < bVar14) {
                    uVar29 = (ulonglong)bVar14;
                  }
                  uVar25 = 0x32 - (ulonglong)bVar14;
                  do {
                    uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0) goto LAB_141423dcc;
                    lVar12 = uVar29 + 1 + uVar25;
                    uVar25 = uVar25 - 1;
                  } while (lVar12 != 0x33);
                }
                uVar13 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar13 = (ulonglong)DAT_14c841df8;
                }
                uVar13 = -uVar13 & (uVar19 + uVar13) - 1;
              }
            }
            else {
              local_90 = (ulonglong)uVar27;
              uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
              uVar27 = (uint)local_90;
              iVar5 = *(int *)(lVar11 + 0x1c8);
            }
          }
LAB_141423dcc:
          iVar7 = (int)(uVar13 >> 2);
          iVar15 = -0x20;
          if ((int)uVar27 <= iVar7) {
            iVar15 = iVar7 << 5;
          }
        }
        *(int *)(lVar11 + 0x1cc) = iVar15;
        FUN_1446efbd8(lVar16,iVar5);
        iVar15 = *(int *)(lVar11 + 0x1c8) + 1;
        uVar27 = local_9c;
      }
      iVar5 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar5 = iVar15;
      }
      *(int *)(lVar11 + 0x1c8) = iVar15;
      if (iVar15 % 0x20 != 0) {
        lVar12 = *(longlong *)(lVar11 + 0x1c0);
        if (*(longlong *)(lVar11 + 0x1c0) == 0) {
          lVar12 = lVar16;
        }
        bVar14 = -(char)(iVar15 % 0x20);
        *(uint *)(lVar12 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)(lVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar12 = (longlong)iVar20;
    if (*(longlong *)(lVar11 + 0x1c0) != 0) {
      lVar16 = *(longlong *)(lVar11 + 0x1c0);
    }
    bVar14 = (byte)iVar21 & 0x1f;
    puVar2 = (uint *)(lVar16 + (longlong)(iVar22 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar20 = *(int *)(lVar11 + 0x1d0);
    lVar12 = (longlong)iVar20;
    iVar21 = *(int *)(*(longlong *)(lVar11 + 0x1a0) + 4 + lVar12 * 0x14);
    *(int *)(lVar11 + 0x1d0) = iVar21;
    iVar5 = *(int *)(lVar11 + 0x1d4) + -1;
    *(int *)(lVar11 + 0x1d4) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*(longlong *)(lVar11 + 0x1a0) + (longlong)iVar21 * 0x14) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(lVar11 + 0x1b0);
  puVar17 = *(uint **)(lVar11 + 0x1c0);
  if (*(uint **)(lVar11 + 0x1c0) == (uint *)0x0) {
    puVar17 = puVar2;
  }
  iVar21 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar21 = iVar20;
  }
  puVar17[iVar21 >> 5] = puVar17[iVar21 >> 5] | 1 << ((byte)iVar20 & 0x1f);
  uVar23 = 1;
  puVar17 = (uint *)(*(longlong *)(lVar11 + 0x1a0) + lVar12 * 0x14);
  *puVar17 = uVar27;
  *(ulonglong *)(puVar17 + 1) = CONCAT44(iVar28,uVar18);
  puVar17[3] = 0xffffffff;
  uVar18 = *(int *)(lVar11 + 0x1a8) - *(int *)(lVar11 + 0x1d4);
  if (1 < uVar18) {
    lVar12 = lVar11 + 0x1d8;
    if (*(longlong *)(lVar11 + 0x1e0) != 0) {
      lVar12 = *(longlong *)(lVar11 + 0x1e0);
    }
    uVar6 = *(uint *)(lVar12 + (ulonglong)(*(int *)(lVar11 + 0x1e8) - 1U & uVar27) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*local_98 + (longlong)(int)uVar6 * 0x14);
        if (*puVar1 == uVar27) {
          uVar8 = *(undefined8 *)puVar17;
          puVar1[2] = puVar17[2];
          *(undefined8 *)puVar1 = uVar8;
          FUN_140e979cc(local_98,iVar20,1);
          goto LAB_141423bb4;
        }
        uVar6 = puVar1[3];
      } while (uVar6 != 0xffffffff);
    }
  }
  if (3 < uVar18) {
    uVar13 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar23 = 1 << ((byte)lVar12 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar23 <= *(int *)(lVar11 + 0x1e8))) {
    uVar27 = *(int *)(lVar11 + 0x1e8) - 1U & uVar27;
    puVar17[4] = uVar27;
    lVar12 = *(longlong *)(lVar11 + 0x1e0);
    if (*(longlong *)(lVar11 + 0x1e0) == 0) {
      lVar12 = lVar11 + 0x1d8;
    }
    puVar17[3] = *(uint *)(lVar12 + ((longlong)*(int *)(lVar11 + 0x1e8) - 1U & (longlong)(int)uVar27
                                    ) * 4);
    lVar12 = lVar11 + 0x1d8;
    if (*(longlong *)(lVar11 + 0x1e0) != 0) {
      lVar12 = *(longlong *)(lVar11 + 0x1e0);
    }
    *(int *)(lVar12 + ((longlong)*(int *)(lVar11 + 0x1e8) - 1U & (longlong)(int)uVar27) * 4) =
         iVar20;
    goto LAB_141423bb4;
  }
  *(uint *)(lVar11 + 0x1e8) = uVar23;
  plVar9 = (longlong *)(lVar11 + 0x1e0);
  if (*(longlong *)(lVar11 + 0x1e0) != 0) {
    FUN_1446efa72(plVar9,0,0,4);
    uVar23 = *(uint *)(lVar11 + 0x1e8);
  }
  lVar12 = lVar11 + 0x1d8;
  if (uVar23 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
LAB_1414239dd:
    uVar18 = 0;
    do {
      lVar16 = *(longlong *)(lVar11 + 0x1e0);
      if (*(longlong *)(lVar11 + 0x1e0) == 0) {
        lVar16 = lVar12;
      }
      *(undefined4 *)(lVar16 + (ulonglong)(*(int *)(lVar11 + 0x1e8) + 0x7fffffffU & uVar18) * 4) =
           0xffffffff;
      uVar18 = uVar18 + 1;
    } while (uVar23 != uVar18);
  }
  else {
    if (uVar23 == 0) goto LAB_141423bb4;
    FUN_1446efa72(plVar9,0,uVar23,4);
    if (0 < (int)uVar23) goto LAB_1414239dd;
  }
  iVar28 = *(int *)(lVar11 + 0x1c8);
  if (iVar28 == 0) {
    uVar13 = 0;
    uVar19 = 1;
    iVar20 = 0;
    iVar21 = 0;
  }
  else {
    puVar17 = *(uint **)(lVar11 + 0x1c0);
    if (*(uint **)(lVar11 + 0x1c0) == (uint *)0x0) {
      puVar17 = puVar2;
    }
    uVar18 = *puVar17;
    if (uVar18 == 0) {
      iVar20 = iVar28 + 0x1e;
      if (-1 < iVar28 + -1) {
        iVar20 = iVar28 + -1;
      }
      uVar13 = 0;
      uVar19 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar19 = uVar13;
      }
      iVar21 = 0;
      do {
        if (uVar19 == uVar13) goto LAB_141423bb4;
        iVar21 = iVar21 + 0x20;
        uVar18 = puVar17[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar13 = 0;
      iVar21 = 0;
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18);
    uVar29 = uVar19 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar20 = (iVar21 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar28 <= iVar20) {
      iVar20 = iVar28;
    }
  }
  if (iVar20 < iVar28) {
    uVar18 = 0xffffffff;
    do {
      lVar16 = *(longlong *)(lVar11 + 0x1a0);
      lVar24 = (longlong)iVar20;
      uVar29 = (longlong)*(int *)(lVar11 + 0x1e8) - 1U & (longlong)*(int *)(lVar16 + lVar24 * 0x14);
      iVar28 = (int)uVar29;
      *(int *)(lVar16 + 0x10 + lVar24 * 0x14) = iVar28;
      lVar26 = *(longlong *)(lVar11 + 0x1e0);
      if (*(longlong *)(lVar11 + 0x1e0) == 0) {
        lVar26 = lVar12;
      }
      *(undefined4 *)(lVar16 + 0xc + lVar24 * 0x14) =
           *(undefined4 *)(lVar26 + ((longlong)*(int *)(lVar11 + 0x1e8) - 1U & uVar29) * 4);
      lVar16 = *(longlong *)(lVar11 + 0x1e0);
      if (*(longlong *)(lVar11 + 0x1e0) == 0) {
        lVar16 = lVar12;
      }
      *(int *)(lVar16 + ((longlong)iVar28 & (longlong)*(int *)(lVar11 + 0x1e8) - 1U) * 4) = iVar20;
      uVar18 = ~(uint)uVar19 & uVar18;
      puVar17 = *(uint **)(lVar11 + 0x1c0);
      if (*(uint **)(lVar11 + 0x1c0) == (uint *)0x0) {
        puVar17 = puVar2;
      }
      iVar28 = *(int *)(lVar11 + 0x1c8);
      iVar20 = (int)uVar13;
      lVar16 = (longlong)iVar20;
      uVar27 = puVar17[lVar16] & uVar18;
      if (uVar27 == 0) {
        iVar5 = iVar28 + 0x1e;
        if (-1 < iVar28 + -1) {
          iVar5 = iVar28 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar15 = iVar5;
        if (iVar5 < iVar20) {
          iVar15 = iVar20;
        }
        if (iVar5 <= iVar20) break;
        lVar26 = 0;
        while( true ) {
          iVar21 = iVar21 + 0x20;
          uVar27 = puVar17[lVar16 + lVar26 + 1];
          if (uVar27 != 0) break;
          lVar26 = lVar26 + 1;
          if (iVar15 - lVar16 == lVar26) goto LAB_141423bb4;
        }
        uVar13 = (ulonglong)(iVar20 + (int)lVar26 + 1);
        uVar18 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar27 & uVar27);
      uVar29 = uVar19 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar20 = (iVar21 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar20 < iVar28);
  }
LAB_141423bb4:
  FUN_1401a0912(param_1);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414241fa FUN_1414241fa body=454 status=ok
// SIG undefined FUN_1414241fa(void)

void FUN_1414241fa(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*param_1 != 0) && (*(longlong **)(param_1 + 2) != (longlong *)0x0)) &&
      (lVar7 = (**(code **)(**(longlong **)(param_1 + 2) + 0x180))(), lVar7 != 0)) &&
     (plVar3 = *(longlong **)(lVar7 + 0x1f0), plVar3 != (longlong *)0x0)) {
    lVar7 = FUN_144a79464();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30)) {
      uVar4 = (**(code **)(*plVar3 + 0x498))(plVar3);
      FUN_1459ae0cc(&local_48,uVar4);
      lVar7 = FUN_1402735c8();
      if ((longlong)*(int *)(lVar7 + 0x80) != 0) {
        lVar8 = *(longlong *)(lVar7 + 0x78);
        lVar7 = lVar8 + (longlong)*(int *)(lVar7 + 0x80) * 0x48;
        do {
          FUN_1400021e4(lVar8 + 8,&local_58);
          if (local_40 == local_50) {
            if (local_40 < 2) {
              bVar11 = true;
            }
            else {
              lVar9 = 0;
              while( true ) {
                uVar1 = *(ushort *)(local_48 + lVar9);
                uVar5 = (uint)uVar1;
                uVar2 = *(ushort *)(local_58 + lVar9);
                uVar10 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14142432a;
                  }
                  iVar6 = uVar5 - uVar10;
                  goto LAB_141424352;
                }
                if (uVar1 == 0) break;
LAB_14142432a:
                lVar9 = lVar9 + 2;
              }
              iVar6 = 0;
LAB_141424352:
              bVar11 = iVar6 == 0;
            }
          }
          else {
            bVar11 = local_50 + local_40 == 1;
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if (bVar11) {
            uVar5 = *(uint *)(lVar8 + 0x30);
            if ((ulonglong)uVar5 != 0) {
              lVar7 = 0;
              do {
                FUN_1403ca8ec(param_1,*(longlong *)(lVar8 + 0x28) + lVar7);
                lVar7 = lVar7 + 8;
              } while ((ulonglong)uVar5 << 3 != lVar7);
            }
            break;
          }
          lVar8 = lVar8 + 0x48;
        } while (lVar8 != lVar7);
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414243c2 FUN_1414243c2 body=269 status=ok
// SIG undefined FUN_1414243c2(void)

void FUN_1414243c2(undefined1 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7d940) {
    FUN_144b3d300(&DAT_14cb7d940);
    if (DAT_14cb7d940 == -1) {
      DAT_14cb7d938 = FUN_1459ae0ed();
      _Init_thread_footer(&DAT_14cb7d940);
    }
  }
  if (DAT_14cb7d938 == 0) {
    FUN_140056680(&local_28,&DAT_149dfb77a);
  }
  else {
    FUN_1401cfad2(DAT_14cb7d938,&local_28,param_1);
  }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414244d0 FUN_1414244d0 body=1237 status=ok
// SIG undefined FUN_1414244d0(void)

void FUN_1414244d0(ulonglong *param_1,undefined8 param_2,int param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *_Src;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  void *pvVar19;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar20;
  uint uVar21;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  int local_64;
  undefined2 *local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar15 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  local_70 = param_2;
  uVar13 = FUN_14613828a();
  uVar14 = 0;
  FUN_1448e935e(uVar15,&local_58,uVar13,0);
  FUN_14613828a();
  lVar10 = local_58;
  if (local_58 != 0) {
    uVar14 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar14 == 0) {
      uVar14 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar15 = FUN_140029432(param_1,uVar14,0);
  param_1[0x37] = uVar14;
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 3;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x20);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 3;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a37d340;
  puVar16[2] = uVar15;
  lVar17 = FUN_144821ef4(param_1);
  FUN_144abcaea(lVar17,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar17,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar17,lVar10 + 0xec,&local_58,0);
  puVar20 = (undefined2 *)(lVar10 + 0xf8);
  FUN_144a86a8e(lVar17,puVar20,local_70);
  iVar11 = *(int *)(lVar17 + 0x30) + *(int *)(lVar17 + 0x20);
  iVar12 = iVar11 + *(int *)(lVar17 + 0x40);
  local_70 = uVar14;
  if (iVar12 != 0 && SCARRY4(iVar11,*(int *)(lVar17 + 0x40)) == iVar12 < 0) {
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 0xb;
    local_64 = param_4;
    local_60 = puVar20;
    if ((undefined8 *)param_1[1] < puVar18) {
      FUN_140023dd8(param_1,0x60);
      puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar16 + 0xb;
    }
    *param_1 = (ulonglong)puVar18;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar16;
    param_1[6] = (ulonglong)(puVar16 + 1);
    uVar15 = *(undefined8 *)(lVar17 + 0x38);
    uVar4 = *(undefined4 *)(lVar17 + 0x40);
    uVar13 = *(undefined8 *)(lVar17 + 0x28);
    uVar5 = *(undefined4 *)(lVar17 + 0x30);
    uVar8 = *(undefined8 *)(lVar17 + 0x18);
    uVar6 = *(undefined4 *)(lVar17 + 0x20);
    uVar9 = *(undefined8 *)(lVar17 + 8);
    uVar7 = *(undefined4 *)(lVar17 + 0x10);
    puVar16[1] = 0;
    *puVar16 = &PTR_FUN_14a1e7fa8;
    puVar16[2] = local_70;
    puVar16[3] = uVar9;
    *(undefined4 *)(puVar16 + 4) = uVar7;
    puVar16[5] = uVar8;
    *(undefined4 *)(puVar16 + 6) = uVar6;
    puVar16[7] = uVar13;
    *(undefined4 *)(puVar16 + 8) = uVar5;
    puVar16[9] = uVar15;
    *(undefined4 *)(puVar16 + 10) = uVar4;
    *(undefined8 *)(lVar17 + 8) = 0;
    *(undefined4 *)(lVar17 + 0x10) = 0;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    *(undefined4 *)(lVar17 + 0x20) = 0;
    *(undefined8 *)(lVar17 + 0x28) = 0;
    *(undefined4 *)(lVar17 + 0x30) = 0;
    *(undefined8 *)(lVar17 + 0x38) = 0;
    *(undefined4 *)(lVar17 + 0x40) = 0;
    puVar20 = local_60;
    param_4 = local_64;
  }
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 4;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x28);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 4;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar16 + 2) = param_3 + 7U >> 3;
  *(uint *)((longlong)puVar16 + 0x14) = param_4 + 7U >> 3;
  *(uint *)(puVar16 + 3) = param_5;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar21 = (uint)param_1[0x13];
    if (0 < (int)uVar21) {
      uVar21 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar21 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar10 + 0xfa) != '\0') && (*(char *)(lVar10 + 0xfb) != '\x06')) {
      uVar3 = *puVar20;
      *(uint *)(param_1 + 0x13) = uVar21 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar21 + 1) {
        FUN_1447477d8(puVar2,uVar21);
      }
      uVar14 = param_1[0x12];
      *(undefined2 *)(uVar14 + (longlong)(int)uVar21 * 4) = uVar3;
      *(undefined1 *)(uVar14 + 2 + (longlong)(int)uVar21 * 4) = 1;
      uVar21 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar21) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar16 + 5;
        if ((undefined8 *)param_1[1] < puVar18) {
          FUN_140023dd8(param_1,0x30);
          puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar16 + 5;
        }
        *param_1 = (ulonglong)puVar18;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar16;
        param_1[6] = (ulonglong)(puVar16 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar19 = (void *)((ulonglong)uVar21 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar21 * 4;
        if ((void *)param_1[1] < pvVar19) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar19 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar19;
        memcpy(_Dst,_Src,_Size);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fbc38;
        puVar16[2] = local_70;
        puVar16[3] = _Dst;
        *(uint *)(puVar16 + 4) = uVar21;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414249a6 FUN_1414249a6 body=1237 status=ok
// SIG undefined FUN_1414249a6(void)

void FUN_1414249a6(ulonglong *param_1,undefined8 param_2,int param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *_Src;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  void *pvVar19;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar20;
  uint uVar21;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  int local_64;
  undefined2 *local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar15 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  local_70 = param_2;
  uVar13 = FUN_1461390d6();
  uVar14 = 0;
  FUN_1448e935e(uVar15,&local_58,uVar13,0);
  FUN_1461390d6();
  lVar10 = local_58;
  if (local_58 != 0) {
    uVar14 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar14 == 0) {
      uVar14 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar15 = FUN_140029432(param_1,uVar14,0);
  param_1[0x37] = uVar14;
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 3;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x20);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 3;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a37d340;
  puVar16[2] = uVar15;
  lVar17 = FUN_144821ef4(param_1);
  FUN_14736a06d(lVar17,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar17,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar17,lVar10 + 0xec,&local_58,0);
  puVar20 = (undefined2 *)(lVar10 + 0xf8);
  FUN_144a86a8e(lVar17,puVar20,local_70);
  iVar11 = *(int *)(lVar17 + 0x30) + *(int *)(lVar17 + 0x20);
  iVar12 = iVar11 + *(int *)(lVar17 + 0x40);
  local_70 = uVar14;
  if (iVar12 != 0 && SCARRY4(iVar11,*(int *)(lVar17 + 0x40)) == iVar12 < 0) {
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 0xb;
    local_64 = param_4;
    local_60 = puVar20;
    if ((undefined8 *)param_1[1] < puVar18) {
      FUN_140023dd8(param_1,0x60);
      puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar16 + 0xb;
    }
    *param_1 = (ulonglong)puVar18;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar16;
    param_1[6] = (ulonglong)(puVar16 + 1);
    uVar15 = *(undefined8 *)(lVar17 + 0x38);
    uVar4 = *(undefined4 *)(lVar17 + 0x40);
    uVar13 = *(undefined8 *)(lVar17 + 0x28);
    uVar5 = *(undefined4 *)(lVar17 + 0x30);
    uVar8 = *(undefined8 *)(lVar17 + 0x18);
    uVar6 = *(undefined4 *)(lVar17 + 0x20);
    uVar9 = *(undefined8 *)(lVar17 + 8);
    uVar7 = *(undefined4 *)(lVar17 + 0x10);
    puVar16[1] = 0;
    *puVar16 = &PTR_FUN_14a1e7fa8;
    puVar16[2] = local_70;
    puVar16[3] = uVar9;
    *(undefined4 *)(puVar16 + 4) = uVar7;
    puVar16[5] = uVar8;
    *(undefined4 *)(puVar16 + 6) = uVar6;
    puVar16[7] = uVar13;
    *(undefined4 *)(puVar16 + 8) = uVar5;
    puVar16[9] = uVar15;
    *(undefined4 *)(puVar16 + 10) = uVar4;
    *(undefined8 *)(lVar17 + 8) = 0;
    *(undefined4 *)(lVar17 + 0x10) = 0;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    *(undefined4 *)(lVar17 + 0x20) = 0;
    *(undefined8 *)(lVar17 + 0x28) = 0;
    *(undefined4 *)(lVar17 + 0x30) = 0;
    *(undefined8 *)(lVar17 + 0x38) = 0;
    *(undefined4 *)(lVar17 + 0x40) = 0;
    puVar20 = local_60;
    param_4 = local_64;
  }
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 4;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x28);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 4;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar16 + 2) = param_3 + 7U >> 3;
  *(uint *)((longlong)puVar16 + 0x14) = param_4 + 7U >> 3;
  *(uint *)(puVar16 + 3) = param_5;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar21 = (uint)param_1[0x13];
    if (0 < (int)uVar21) {
      uVar21 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar21 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar10 + 0xfa) != '\0') && (*(char *)(lVar10 + 0xfb) != '\x06')) {
      uVar3 = *puVar20;
      *(uint *)(param_1 + 0x13) = uVar21 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar21 + 1) {
        FUN_1447477d8(puVar2,uVar21);
      }
      uVar14 = param_1[0x12];
      *(undefined2 *)(uVar14 + (longlong)(int)uVar21 * 4) = uVar3;
      *(undefined1 *)(uVar14 + 2 + (longlong)(int)uVar21 * 4) = 1;
      uVar21 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar21) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar16 + 5;
        if ((undefined8 *)param_1[1] < puVar18) {
          FUN_140023dd8(param_1,0x30);
          puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar16 + 5;
        }
        *param_1 = (ulonglong)puVar18;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar16;
        param_1[6] = (ulonglong)(puVar16 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar19 = (void *)((ulonglong)uVar21 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar21 * 4;
        if ((void *)param_1[1] < pvVar19) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar19 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar19;
        memcpy(_Dst,_Src,_Size);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fbc38;
        puVar16[2] = local_70;
        puVar16[3] = _Dst;
        *(uint *)(puVar16 + 4) = uVar21;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141424e9e FUN_141424e9e body=122 status=ok
// SIG undefined FUN_141424e9e(void)

undefined8 FUN_141424e9e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x178))(plVar1,&local_24,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x188))(plVar1,local_24);
    uVar3 = FUN_141424f26(*(undefined8 *)(param_1 + 0xe8),uVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141424f26 FUN_141424f26 body=125 status=ok
// SIG undefined FUN_141424f26(void)

undefined8 FUN_141424f26(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x1c4)) {
    lVar1 = param_1 + 0x1c8;
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x1d0);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x1d8) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      while (lVar1 = *(longlong *)(param_1 + 400) + (longlong)iVar2 * 0x20,
            *(uint *)(*(longlong *)(param_1 + 400) + (longlong)iVar2 * 0x20) != param_2) {
        iVar2 = *(int *)(lVar1 + 0x18);
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if ((longlong *)(lVar1 + 8) == (longlong *)0x0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar1 + 8);
      if (*(int *)(lVar1 + 0x14) == 2) {
        return *(undefined8 *)(lVar1 + 0x18);
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 141424fa4 FUN_141424fa4 body=222 status=ok
// SIG undefined FUN_141424fa4(void)

int * FUN_141424fa4(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = 0;
  do {
    (**(code **)(*param_1 + 0x110))(param_1,&local_48,iVar5);
    if (local_48 != (undefined8 *)0x0) {
      cVar4 = (**(code **)*local_48)(local_48,param_3);
      if (cVar4 != '\0') {
        *param_2 = iVar5;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar3 = (int *)((longlong)local_40 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
        goto LAB_141425009;
      }
    }
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  *param_2 = -1;
LAB_141425009:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141425083 FUN_141425083 body=354 status=ok
// SIG undefined FUN_141425083(void)

void FUN_141425083(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  code *local_38;
  code *local_30;
  code *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    local_a8 = 2;
    uStack_a0 = 200;
    local_98 = 1;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,3,&local_a8);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    local_78 = *param_3;
    *param_3 = 0;
    local_70 = (undefined4)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
    local_38 = FUN_143efc550;
    local_30 = FUN_143efc634;
    local_28 = FUN_143efc660;
    local_20 = FUN_143efc6ce;
    local_68 = (undefined4)param_2;
    bifrost::messaging::getRoomParams(*(undefined8 *)(param_1 + 0x2b8));
  }
  puVar2 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_141425148;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar2 = (undefined8 *)*param_3;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141425148:
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414251e6 FUN_1414251e6 body=547 status=ok
// SIG undefined FUN_1414251e6(void)

void FUN_1414251e6(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar8 = 1;
    local_58._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
    uVar12 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0xc0;
      *(undefined4 *)(lVar11 + 0x98 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x90 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_1404112b2(lVar11 + lVar10 + 0x50);
      uVar12 = uVar12 & ~(uint)uVar8;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar3 - lVar11 == lVar10) goto LAB_14142532a;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar12 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14142532a:
  plVar4 = local_70;
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_1407da7e2(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar4,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142540c FUN_14142540c body=767 status=ok
// SIG undefined FUN_14142540c(void)

void FUN_14142540c(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  int local_d0;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  longlong *local_a8;
  int local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined2 local_37;
  undefined1 local_35;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[0x41] != 0) {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar9 = param_1[0x41];
    lVar7 = param_1[0x42];
    lVar5 = FUN_140149a73(uVar4,0);
    if (lVar5 != 0) {
      FUN_140825b72(lVar9 + 0x188,lVar7,lVar5,0);
    }
    param_1[0x41] = 0;
    param_1[0x42] = 0;
  }
  if ((param_1[0x3e] != 0) && (cVar2 = FUN_140114204(param_1[0x3e] + 0x188), cVar2 != '\0')) {
    param_1[0x41] = param_1[0x3e];
    local_c8[0] = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    local_ac = 0;
    local_98 = 0xc69c4000;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_37 = 1;
    local_35 = 0;
    local_34 = 0;
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    FUN_1446efa72(&local_d8,0,3,0x10);
    plVar6 = local_d8;
    local_d0 = 3;
    *local_d8 = (longlong)&PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_d8[2] = lVar7;
    *local_d8 = (longlong)&PTR_FUN_14b9aac10;
    local_d8[3] = 0;
    iVar3 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_d8 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar3 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar3 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar3 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar3 = iVar8;
        }
      }
    }
    *(int *)((longlong)plVar6 + 0x1c) = iVar3;
    plVar6[4] = (longlong)param_1;
    local_a8 = local_d8;
    local_a0 = local_d0;
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar9 = param_1[0x41];
    lVar7 = FUN_140149a73(uVar4,0);
    if (lVar7 == 0) {
      local_34 = 2;
    }
    else {
      FUN_140983ba6(lVar9 + 0x188,lVar7,local_c8);
      if (local_34 == 1) {
        if (local_a8 == (longlong *)0x0 || local_a0 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          (**(code **)(*local_a8 + 0x38))(local_a8,&local_d8);
          plVar6 = local_d8;
        }
        param_1[0x42] = (longlong)plVar6;
      }
    }
    FUN_1409838b8(local_c8);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14142570c FUN_14142570c body=67 status=ok
// SIG undefined FUN_14142570c(void)

undefined8 * FUN_14142570c(undefined8 *param_1)

{
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a494480;
  param_1[0x1f] = &PTR_FUN_14a4947f0;
  param_1[0x20] = &PTR_FUN_14a494820;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfc;
  return param_1;
}



// FUNCTION 141425750 FUN_141425750 body=2697 status=ok
// SIG undefined FUN_141425750(void)

void FUN_141425750(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined ***pppuVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong **local_130;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_118 = param_1;
  local_110 = param_4;
  if (*param_2 == 0) goto LAB_141425e21;
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14b406f80;
  local_80 = &LAB_1441736bc;
  local_a8[0] = &LAB_140255cce;
  if ((longlong)(int)param_2[3] != 0) {
    plVar13 = (longlong *)param_2[2];
    plVar16 = plVar13 + (int)param_2[3];
    plVar14 = (longlong *)0x0;
    lVar18 = 0;
    local_120 = 0;
    local_108 = param_2;
    local_100 = plVar16;
    do {
      lVar17 = *plVar13;
      if (lVar17 != 0) {
        local_d8 = (void *)0x0;
        uStack_d0 = 0;
        plVar10 = DAT_14cbcb694;
        if ((DAT_14cbcb694 == DAT_14c948034) &&
           (plVar10 = DAT_14c948034, DAT_14cbcb690 != DAT_14c948030)) {
          FUN_14011791e(&local_f8,DAT_14cbcb690,(ulonglong)DAT_14cbcb694 >> 0x20);
          DAT_14cbcb694 = local_f8;
          plVar10 = local_f8;
        }
        plVar9 = *(longlong **)(lVar17 + 0x40);
        if (plVar9 == plVar10) {
          FUN_140255b38(lVar17,&local_d8,local_a8);
          pvVar3 = local_d8;
          lVar17 = (longlong)(int)uStack_d0;
          if (lVar17 != 0) {
            lVar12 = 0;
            do {
              plVar16 = *(longlong **)((longlong)pvVar3 + lVar12);
              if (plVar16 != (longlong *)0x0) {
                lVar7 = (**(code **)(*plVar16 + 8))(plVar16);
                lVar8 = FUN_14001d604();
                uVar4 = uStack_b0;
                if ((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) {
                  plVar16 = (longlong *)0x0;
                }
                else if (*(longlong *)
                          (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
                         lVar8 + 0x30) {
                  plVar16 = (longlong *)0x0;
                }
                lVar7 = (longlong)(int)uStack_b0;
                uVar6 = (int)uStack_b0 + 1;
                uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
                if (uStack_b0._4_4_ < uVar6) {
                  FUN_14001d74c(&local_b8,uVar4 & 0xffffffff);
                }
                local_b8[lVar7] = (longlong)plVar16;
              }
              lVar12 = lVar12 + 0x10;
              plVar16 = local_100;
            } while (lVar17 * 0x10 != lVar12);
          }
        }
        else {
          plVar10 = DAT_14cbcb6ac;
          if ((DAT_14cbcb6ac == DAT_14c948034) &&
             (plVar10 = DAT_14c948034, DAT_14cbcb6a8 != DAT_14c948030)) {
            FUN_14011791e(&local_f8,DAT_14cbcb6a8,(ulonglong)DAT_14cbcb6ac >> 0x20);
            DAT_14cbcb6ac = local_f8;
            plVar9 = *(longlong **)(lVar17 + 0x40);
            plVar10 = local_f8;
          }
          if (plVar9 != plVar10) {
            plVar10 = DAT_14cbcb6c4;
            if ((DAT_14cbcb6c4 == DAT_14c948034) &&
               (plVar10 = DAT_14c948034, DAT_14cbcb6c0 != DAT_14c948030)) {
              FUN_14011791e(&local_f8,DAT_14cbcb6c0,(ulonglong)DAT_14cbcb6c4 >> 0x20);
              DAT_14cbcb6c4 = local_f8;
              plVar9 = *(longlong **)(lVar17 + 0x40);
              plVar10 = local_f8;
            }
            if (plVar9 != plVar10) {
              plVar10 = DAT_14cbcb6dc;
              if ((DAT_14cbcb6dc == DAT_14c948034) &&
                 (plVar10 = DAT_14c948034, DAT_14cbcb6d8 != DAT_14c948030)) {
                FUN_14011791e(&local_f8,DAT_14cbcb6d8,(ulonglong)DAT_14cbcb6dc >> 0x20);
                DAT_14cbcb6dc = local_f8;
                plVar9 = *(longlong **)(lVar17 + 0x40);
                plVar10 = local_f8;
              }
              if (plVar9 != plVar10) goto LAB_1414258b6;
            }
          }
          FUN_140255b38(lVar17,&local_d8,local_a8);
          plVar10 = DAT_14cbcb6ac;
          if ((DAT_14cbcb6ac == DAT_14c948034) &&
             (plVar10 = DAT_14c948034, DAT_14cbcb6a8 != DAT_14c948030)) {
            FUN_14011791e(&local_f8,DAT_14cbcb6a8,(ulonglong)DAT_14cbcb6ac >> 0x20);
            DAT_14cbcb6ac = local_f8;
            plVar10 = local_f8;
          }
          plVar9 = *(longlong **)(lVar17 + 0x40);
          if (plVar9 == plVar10) {
            if ((longlong)(int)uStack_d0 != 0) {
              lVar17 = 0;
              do {
                plVar14 = *(longlong **)((longlong)local_d8 + lVar17);
                if (plVar14 != (longlong *)0x0) {
                  lVar17 = (**(code **)(*plVar14 + 8))(plVar14);
                  lVar12 = FUN_14001d604();
                  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x38) <= *(int *)(lVar17 + 0x38))) {
                    if (*(longlong *)
                         (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
                        lVar12 + 0x30) {
                      plVar14 = (longlong *)0x0;
                    }
                    goto LAB_1414258b6;
                  }
                  break;
                }
                lVar17 = lVar17 + 0x10;
              } while ((longlong)(int)uStack_d0 * 0x10 != lVar17);
            }
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar10 = DAT_14cbcb6c4;
            if ((DAT_14cbcb6c4 == DAT_14c948034) &&
               (plVar10 = DAT_14c948034, DAT_14cbcb6c0 != DAT_14c948030)) {
              FUN_14011791e(&local_f8,DAT_14cbcb6c0,(ulonglong)DAT_14cbcb6c4 >> 0x20);
              DAT_14cbcb6c4 = local_f8;
              plVar9 = *(longlong **)(lVar17 + 0x40);
              plVar10 = local_f8;
            }
            if (plVar9 == plVar10) {
              lVar18 = FUN_141426226(&local_d8);
            }
            else {
              plVar10 = (longlong *)FUN_144a8232a(&DAT_14cbcb6d8);
              if (*(longlong *)(lVar17 + 0x40) == *plVar10) {
                local_120 = FUN_141426226(&local_d8);
              }
            }
          }
        }
LAB_1414258b6:
        FUN_140255aed(local_d8,uStack_d0 & 0xffffffff);
        if (local_d8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar4 = uStack_c0;
      param_2 = local_108;
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar16);
    if (plVar14 != (longlong *)0x0) {
      lVar17 = (longlong)(int)(uint)uStack_c0;
      uVar6 = (uint)uStack_c0 + 1;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
      if (uStack_c0._4_4_ < uVar6) {
        FUN_14001d74c(&local_c8,uVar4 & 0xffffffff);
      }
      uVar4 = uStack_c0;
      local_c8[lVar17] = (longlong)plVar14;
      if (lVar18 != 0) {
        lVar17 = (longlong)(int)(uint)uStack_c0;
        uVar6 = (uint)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
        if (uStack_c0._4_4_ < uVar6) {
          FUN_14001d74c(&local_c8,uVar4 & 0xffffffff);
        }
        uVar4 = uStack_c0;
        local_c8[lVar17] = lVar18;
        if (local_120 != 0) {
          lVar18 = (longlong)(int)(uint)uStack_c0;
          uVar6 = (uint)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
          if (uStack_c0._4_4_ < uVar6) {
            FUN_14001d74c(&local_c8,uVar4 & 0xffffffff);
          }
          local_c8[lVar18] = local_120;
        }
      }
    }
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  lVar18 = (longlong)(int)uStack_b0;
  if (lVar18 == 0) {
    local_e0 = 0;
  }
  else {
    uStack_d0 = uStack_b0 & 0xffffffff;
    FUN_14001d74c(&local_d8,0);
    memcpy(local_d8,local_b8,lVar18 << 3);
    local_e0 = (int)uStack_d0;
  }
  plVar16 = local_110;
  lVar18 = local_118;
  lVar17 = (longlong)(int)(uint)uStack_c0;
  if (lVar17 != 0) {
    uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_c0 + local_e0);
    if ((uint)(uStack_d0._4_4_ - local_e0) < (uint)uStack_c0) {
      FUN_14001d74c(&local_d8,local_e0);
    }
    memcpy((void *)((longlong)local_e0 * 8 + (longlong)local_d8),local_c8,lVar17 << 3);
    local_e0 = (int)uStack_d0;
  }
  local_e8 = local_d8;
  cVar5 = FUN_14144426c(param_2);
  if (cVar5 == '\0') {
    local_f8 = (longlong *)0x0;
    uStack_f0 = 0;
    uVar15 = 0;
    if ((uint)uStack_c0 == 2) {
      FUN_141426333(lVar18 + 0x18,*local_c8 + 0x30,local_c8[1] + 0x30,&local_f8);
LAB_141425c5b:
      if ((longlong)(int)uStack_f0 != 0) {
        plVar14 = local_f8 + (longlong)(int)uStack_f0 * 2;
        plVar13 = local_f8;
        do {
          lVar17 = *plVar13;
          plVar10 = (longlong *)plVar13[1];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          if (lVar17 != 0) {
            iVar2 = (int)plVar16[1];
            *(uint *)(plVar16 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)plVar16 + 0xc) < iVar2 + 1U) {
              FUN_14001d63e(plVar16,iVar2);
            }
            lVar12 = *plVar16;
            plVar9 = *(longlong **)(lVar17 + 0x18);
            *(longlong **)(lVar12 + (longlong)iVar2 * 0x10) = plVar9;
            if (plVar9 != (longlong *)0x0) {
              (**(code **)(*plVar9 + 8))();
            }
            *(undefined4 *)(lVar12 + (longlong)iVar2 * 0x10 + 8) = *(undefined4 *)(lVar17 + 0x20);
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar10 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
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
          plVar13 = plVar13 + 2;
        } while (plVar13 != plVar14);
        uVar15 = (int)uStack_f0;
      }
    }
    else {
      if ((uint)uStack_c0 == 1) {
        FUN_141426294(lVar18 + 8,*local_c8 + 0x30,&local_f8);
        goto LAB_141425c5b;
      }
      if ((uint)uStack_c0 == 3) {
        local_138 = local_c8[2] + 0x30;
        local_130 = &local_f8;
        FUN_141426501(lVar18 + 8,lVar18 + 0x18,*local_c8 + 0x30,local_c8[1] + 0x30);
        goto LAB_141425c5b;
      }
    }
    FUN_1414261da(local_f8,uVar15);
    if (local_f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((int)uStack_b0 == 1) {
    if ((longlong)*(int *)(lVar18 + 0x30) != 0) {
      lVar17 = *(longlong *)(lVar18 + 0x28);
      lVar12 = 0;
LAB_141425d45:
      if (*(longlong *)(lVar17 + lVar12) != *(longlong *)(*local_b8 + 0x30))
      goto code_r0x000141425d4b;
      lVar18 = *(longlong *)(lVar17 + 0x10 + lVar12);
      plVar13 = *(longlong **)(lVar17 + 0x18 + lVar12);
LAB_141425d60:
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        plVar14 = plVar13 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      iVar2 = (int)plVar16[1];
      *(uint *)(plVar16 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar16 + 0xc) < iVar2 + 1U) {
        FUN_14001d63e(plVar16,iVar2);
      }
      lVar17 = *plVar16;
      plVar16 = *(longlong **)(lVar18 + 0x18);
      *(longlong **)(lVar17 + (longlong)iVar2 * 0x10) = plVar16;
      if (plVar16 != (longlong *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
      *(undefined4 *)(lVar17 + (longlong)iVar2 * 0x10 + 8) = *(undefined4 *)(lVar18 + 0x20);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar13 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
  }
  else if (((int)uStack_b0 == 2) && ((longlong)*(int *)(lVar18 + 0x40) != 0)) {
    lVar17 = *(longlong *)(lVar18 + 0x38);
    lVar12 = 0;
    do {
      if (*(longlong *)(lVar17 + lVar12) == *(longlong *)(*local_b8 + 0x30)) {
        lVar7 = *(longlong *)(local_b8[1] + 0x30);
        if (*(longlong *)(lVar17 + 8 + lVar12) != lVar7) goto LAB_141425f63;
LAB_141425f7d:
        lVar18 = *(longlong *)(lVar17 + 0x10 + lVar12);
        plVar13 = *(longlong **)(lVar17 + 0x18 + lVar12);
        goto LAB_141425d60;
      }
      lVar7 = *(longlong *)(local_b8[1] + 0x30);
LAB_141425f63:
      if ((*(longlong *)(lVar17 + lVar12) == lVar7) &&
         (*(longlong *)(lVar17 + 8 + lVar12) == *(longlong *)(*local_b8 + 0x30)))
      goto LAB_141425f7d;
      lVar12 = lVar12 + 0x28;
    } while ((longlong)*(int *)(lVar18 + 0x40) * 0x28 != lVar12);
  }
LAB_141425dc7:
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != (undefined1 *)0x0) {
    pppuVar11 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar11 = &local_88;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (local_c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141425e21:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000141425d4b:
  lVar12 = lVar12 + 0x28;
  if ((longlong)*(int *)(lVar18 + 0x30) * 0x28 == lVar12) goto LAB_141425dc7;
  goto LAB_141425d45;
}



// FUNCTION 1414261da FUN_1414261da body=75 status=ok
// SIG undefined FUN_1414261da(void)

void FUN_1414261da(longlong param_1,int param_2)

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



// FUNCTION 141426226 FUN_141426226 body=110 status=ok
// SIG undefined FUN_141426226(void)

longlong * FUN_141426226(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*param_1 + lVar3);
      if (plVar1 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar1 + 8))(plVar1);
        lVar2 = FUN_14001d604();
        if (lVar2 == 0) {
          return (longlong *)0x0;
        }
        if (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38)) {
          return (longlong *)0x0;
        }
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30) {
          return (longlong *)0x0;
        }
        return plVar1;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar3);
  }
  return (longlong *)0x0;
}



// FUNCTION 141426294 FUN_141426294 body=159 status=ok
// SIG undefined FUN_141426294(void)

void FUN_141426294(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = *param_1;
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar7) == *param_2) {
        uVar5 = *(undefined8 *)(lVar4 + 0x10 + lVar7);
        plVar6 = *(longlong **)(lVar4 + 0x18 + lVar7);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
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
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1414263f4(param_3,iVar3);
        }
        lVar4 = *param_3;
        *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = uVar5;
        *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
        return;
      }
      lVar7 = lVar7 + 0x28;
    } while ((longlong)(int)param_1[1] * 0x28 != lVar7);
  }
  return;
}



// FUNCTION 141426333 FUN_141426333 body=192 status=ok
// SIG undefined FUN_141426333(void)

void FUN_141426333(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = *param_1;
    lVar7 = 0;
    do {
      if (((*(longlong *)(lVar4 + lVar7) == *param_2) &&
          (*(longlong *)(lVar4 + 8 + lVar7) == *param_3)) ||
         ((*(longlong *)(lVar4 + lVar7) == *param_3 &&
          (*(longlong *)(lVar4 + 8 + lVar7) == *param_2)))) {
        uVar5 = *(undefined8 *)(lVar4 + 0x10 + lVar7);
        plVar6 = *(longlong **)(lVar4 + 0x18 + lVar7);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
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
        iVar3 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
          FUN_1414263f4(param_4,iVar3);
        }
        lVar4 = *param_4;
        *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = uVar5;
        *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
        return;
      }
      lVar7 = lVar7 + 0x28;
    } while ((longlong)(int)param_1[1] * 0x28 != lVar7);
  }
  return;
}



// FUNCTION 1414263f4 FUN_1414263f4 body=269 status=ok
// SIG undefined FUN_1414263f4(void)

void FUN_1414263f4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141426501 FUN_141426501 body=532 status=ok
// SIG undefined FUN_141426501(void)

void FUN_141426501(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  if ((longlong)(int)param_2[1] == 0) {
    local_60 = 0;
    local_58 = 0;
  }
  else {
    lVar1 = *param_2;
    lVar2 = *param_3;
    lVar3 = *param_4;
    lVar4 = *param_5;
    lVar7 = 0;
    bVar9 = false;
    bVar6 = false;
    bVar5 = false;
    local_58 = 0;
    local_60 = 0;
    do {
      if (local_50 == 0) {
        if ((bVar5) || (*(longlong *)(lVar1 + lVar7) != lVar2)) {
          if ((bVar6) || (*(longlong *)(lVar1 + lVar7) != lVar3)) {
            if (bVar9) {
              local_50 = 0;
            }
            else {
              bVar9 = *(longlong *)(lVar1 + lVar7) == lVar4;
              local_50 = 0;
              if (bVar9) {
                local_50 = lVar4;
              }
            }
          }
          else {
            bVar6 = true;
            local_50 = lVar3;
          }
        }
        else {
          bVar5 = true;
          local_50 = lVar2;
        }
      }
      if (local_58 == 0) {
        if ((bVar5) || (*(longlong *)(lVar1 + lVar7) != lVar2)) {
          if ((bVar6) || (*(longlong *)(lVar1 + lVar7) != lVar3)) {
            if (bVar9) {
              local_58 = 0;
            }
            else {
              local_58 = 0;
              if (*(longlong *)(lVar1 + lVar7) == lVar4) {
                bVar9 = true;
                local_58 = lVar4;
              }
            }
          }
          else {
            bVar6 = true;
            local_58 = lVar3;
          }
        }
        else {
          bVar5 = true;
          local_58 = lVar2;
        }
      }
      if (local_60 == 0) {
        if ((bVar5) || (*(longlong *)(lVar1 + lVar7) != lVar2)) {
          if ((bVar6) || (*(longlong *)(lVar1 + lVar7) != lVar3)) {
            if (bVar9) {
              local_60 = 0;
            }
            else {
              bVar8 = *(longlong *)(lVar1 + lVar7) == lVar4;
              local_60 = 0;
              if (bVar8) {
                local_60 = lVar4;
              }
              bVar9 = false;
              if (bVar8) {
                bVar9 = true;
              }
            }
          }
          else {
            bVar6 = true;
            local_60 = lVar3;
          }
          goto LAB_141426600;
        }
        bVar5 = true;
        local_60 = lVar2;
LAB_141426676:
        if ((bVar6) && (bVar9)) break;
      }
      else {
LAB_141426600:
        if (bVar5) goto LAB_141426676;
      }
      lVar7 = lVar7 + 0x28;
    } while ((longlong)(int)param_2[1] * 0x28 != lVar7);
  }
  FUN_141426333(param_2,&local_50,&local_58,param_6);
  FUN_141426294(param_1,&local_60,param_6);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141426716 FUN_141426716 body=394 status=ok
// SIG undefined FUN_141426716(void)

longlong FUN_141426716(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_1 + 0x1810;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  if (*(int *)(param_1 + 0x1838) == 0) {
    uVar14 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    uVar8 = 0;
  }
  else {
    FUN_144a844ac(&local_60);
    uVar8 = local_60 & 0xffffffff;
    uVar14 = local_60 >> 0x20;
  }
  iVar2 = *(int *)(local_58 + 0x28);
  if (local_50._4_4_ < iVar2) {
    lVar9 = *(longlong *)(param_1 + 0x1800);
    if (*(longlong *)(param_1 + 0x1800) == 0) {
      lVar9 = param_1;
    }
    iVar10 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar10 = iVar2 + -1;
    }
    iVar10 = iVar10 >> 5;
    lVar3 = 0;
    uVar5 = (uint)local_50;
    iVar15 = local_50._4_4_;
    iVar4 = local_48;
    do {
      iVar7 = (int)uVar8;
      if (*(longlong *)(lVar9 + 8 + (longlong)iVar15 * 0x18) == param_2) {
        lVar3 = lVar9 + (longlong)iVar15 * 0x18;
        break;
      }
      uVar5 = uVar5 & ~(uint)uVar14;
      lVar12 = *(longlong *)(local_58 + 0x20);
      if (*(longlong *)(local_58 + 0x20) == 0) {
        lVar12 = local_58;
      }
      lVar11 = (longlong)iVar7;
      uVar6 = *(uint *)(lVar12 + lVar11 * 4) & uVar5;
      if (uVar6 == 0) {
        iVar15 = iVar10;
        if (iVar10 < iVar7) {
          iVar15 = iVar7;
        }
        if (iVar10 <= iVar7) break;
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar6 = *(uint *)(lVar12 + lVar11 * 4 + 4 + lVar13 * 4);
          if (uVar6 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar15 - lVar11 == lVar13) goto LAB_141426885;
        }
        uVar8 = (ulonglong)(iVar7 + (int)lVar13 + 1);
        uVar5 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar15 = (iVar4 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar2);
  }
  else {
LAB_141426885:
    lVar3 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414268a2 FUN_1414268a2 body=517 status=ok
// SIG undefined FUN_1414268a2(void)

void FUN_1414268a2(longlong *param_1)

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



// FUNCTION 141426aa8 FUN_141426aa8 body=936 status=ok
// SIG undefined FUN_141426aa8(void)

void FUN_141426aa8(uint param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  undefined *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  
  iVar8 = FUN_141426e50();
  iVar18 = DAT_14cc16be0;
  iVar17 = DAT_14cc16bb8;
  if ((iVar8 == -1) || ((longlong)iVar8 * 0x20 + DAT_14cc16bb0 == 0)) {
    if (DAT_14cc16be4 == 0) {
      iVar18 = DAT_14cc16bb8 + 1;
      bVar19 = DAT_14cc16bbc == DAT_14cc16bb8;
      DAT_14cc16bb8 = iVar18;
      if (bVar19) {
        FUN_1447711aa(&DAT_14cc16bb0,iVar17);
      }
      iVar18 = DAT_14cc16bd8;
      if (DAT_14cc16bd8 == 0) {
        iVar8 = -1;
      }
      else {
        iVar8 = DAT_14cc16bd8 + 0x1e;
        if (-1 < DAT_14cc16bd8 + -1) {
          iVar8 = DAT_14cc16bd8 + -1;
        }
        iVar8 = iVar8 >> 5;
      }
      iVar13 = DAT_14cc16bd8 + 1;
      iVar16 = DAT_14cc16bd8 + 0x1f;
      if (-1 < DAT_14cc16bd8) {
        iVar16 = DAT_14cc16bd8;
      }
      if (iVar16 >> 5 != iVar8) {
        if (DAT_14cc16bdc <= DAT_14cc16bd8) {
          if (DAT_14cc16bd8 + 0x20U < 0xa0) {
            DAT_14cc16bdc = 0x80;
          }
          else {
            uVar15 = DAT_14cc16bd8 + 0x20U >> 5;
            if (DAT_14cc16bdc + 0x1fU < 0xa0) {
              uVar12 = 4;
              if (4 < uVar15) {
                uVar12 = uVar15;
              }
            }
            else {
              uVar12 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
            }
            uVar10 = FUN_144a3809e(uVar12 << 2,0);
            iVar8 = (int)(uVar10 >> 2);
            DAT_14cc16bdc = -0x20;
            if ((int)uVar15 <= iVar8) {
              DAT_14cc16bdc = iVar8 << 5;
            }
          }
          FUN_1446efbd8(&DAT_14cc16bc0,DAT_14cc16bd8);
          iVar13 = DAT_14cc16bd8 + 1;
        }
        iVar8 = iVar13 + 0x1f;
        if (-1 < iVar13) {
          iVar8 = iVar13;
        }
        if (iVar13 % 0x20 != 0) {
          puVar14 = &DAT_14cc16bc0;
          if (DAT_14cc16bd0 != (undefined *)0x0) {
            puVar14 = DAT_14cc16bd0;
          }
          bVar11 = -(char)(iVar13 % 0x20);
          DAT_14cc16bd8 = iVar13;
          *(uint *)(puVar14 + (longlong)(iVar8 >> 5) * 4) =
               (uint)(*(int *)(puVar14 + (longlong)(iVar8 >> 5) * 4) << (bVar11 & 0x1f)) >>
               (bVar11 & 0x1f);
          iVar13 = DAT_14cc16bd8;
        }
      }
      DAT_14cc16bd8 = iVar13;
      lVar9 = (longlong)iVar17;
      puVar14 = &DAT_14cc16bc0;
      if (DAT_14cc16bd0 != (undefined *)0x0) {
        puVar14 = DAT_14cc16bd0;
      }
      bVar11 = (byte)iVar18 & 0x1f;
      *(uint *)(puVar14 + (longlong)(iVar16 >> 5) * 4) =
           *(uint *)(puVar14 + (longlong)(iVar16 >> 5) * 4) &
           (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
      iVar18 = iVar17;
    }
    else {
      lVar9 = (longlong)DAT_14cc16be0;
      DAT_14cc16be0 = *(int *)(DAT_14cc16bb0 + 4 + lVar9 * 0x20);
      DAT_14cc16be4 = DAT_14cc16be4 + -1;
      if (DAT_14cc16be4 != 0) {
        *(undefined4 *)(DAT_14cc16bb0 + (longlong)DAT_14cc16be0 * 0x20) = 0xffffffff;
      }
    }
    iVar17 = 1;
    puVar14 = &DAT_14cc16bc0;
    if (DAT_14cc16bd0 != (undefined *)0x0) {
      puVar14 = DAT_14cc16bd0;
    }
    iVar8 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar8 = iVar18;
    }
    *(uint *)(puVar14 + (longlong)(iVar8 >> 5) * 4) =
         *(uint *)(puVar14 + (longlong)(iVar8 >> 5) * 4) | 1 << ((byte)iVar18 & 0x1f);
    puVar1 = (undefined4 *)(DAT_14cc16bb0 + lVar9 * 0x20);
    puVar2 = (undefined8 *)(DAT_14cc16bb0 + lVar9 * 0x20);
    *puVar2 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    bVar11 = *(byte *)(param_3 + 1);
    *(byte *)((longlong)puVar2 + 0x11) = bVar11;
    (*(code *)(&PTR_LAB_14bcca870)[bVar11])(puVar2 + 2,param_3);
    *(undefined4 *)(puVar2 + 3) = 0xffffffff;
    uVar15 = DAT_14cc16bb8 - DAT_14cc16be4;
    if (uVar15 != 1) {
      iVar8 = FUN_141426e50(param_1,puVar1);
      if (iVar8 != -1) {
        puVar3 = (undefined4 *)(DAT_14cc16bb0 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(DAT_14cc16bb0 + (longlong)iVar8 * 0x20) != 0) {
          FUN_1400020a8();
        }
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar1 + 4);
        *puVar3 = uVar4;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
        FUN_149443524(iVar18);
        return;
      }
      if (3 < uVar15) {
        uVar10 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
        lVar9 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar17 = 1 << ((byte)lVar9 & 0x1f);
      }
    }
    if ((0 < (int)uVar15) && (DAT_14cc16bf8 < iVar17)) {
      DAT_14cc16bf8 = iVar17;
      FUN_141426f26();
      return;
    }
    param_1 = DAT_14cc16bf8 - 1U & param_1;
    puVar1[7] = param_1;
    puVar14 = DAT_14cc16bf0;
    if (DAT_14cc16bf0 == (undefined *)0x0) {
      puVar14 = &DAT_14cc16be8;
    }
    puVar1[6] = *(undefined4 *)
                 (puVar14 + ((longlong)DAT_14cc16bf8 - 1U & (longlong)(int)param_1) * 4);
    puVar14 = DAT_14cc16bf0;
    if (DAT_14cc16bf0 == (undefined *)0x0) {
      puVar14 = &DAT_14cc16be8;
    }
    *(int *)(puVar14 + ((longlong)DAT_14cc16bf8 - 1U & (longlong)(int)param_1) * 4) = iVar18;
  }
  return;
}



// FUNCTION 141426e50 FUN_141426e50 body=214 status=ok
// SIG undefined FUN_141426e50(void)

int FUN_141426e50(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (DAT_14cc16bb8 != DAT_14cc16be4) {
    puVar8 = &DAT_14cc16be8;
    if (DAT_14cc16bf0 != (undefined *)0x0) {
      puVar8 = DAT_14cc16bf0;
    }
    iVar1 = *(int *)(puVar8 + (ulonglong)(DAT_14cc16bf8 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_2[1];
LAB_141426ea2:
      lVar9 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(DAT_14cc16bb0 + 8 + lVar9);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar4 = 0;
        do {
          uVar6 = *(ushort *)(*(longlong *)(DAT_14cc16bb0 + lVar9) + lVar4);
          uVar7 = (ulonglong)uVar6;
          uVar5 = *(ushort *)(*param_2 + lVar4);
          if (uVar6 == uVar5) {
            if (uVar6 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar5 | uVar6)) goto LAB_141426efe;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar10 = (ulonglong)uVar5;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar10]) goto LAB_141426efe;
          }
          lVar4 = lVar4 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_141426ebc;
    }
  }
  return -1;
LAB_141426efe:
  if (uVar6 == uVar5) {
    return iVar1;
  }
LAB_141426ebc:
  iVar1 = *(int *)(DAT_14cc16bb0 + 0x18 + lVar9);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_141426ea2;
}



// FUNCTION 141426f26 FUN_141426f26 body=742 status=ok
// SIG undefined FUN_141426f26(void)

void FUN_141426f26(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  undefined1 auStack_98 [36];
  int local_74;
  undefined *local_70;
  ulonglong local_68;
  undefined *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc16bf0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cc16bf0,0,0,4);
  }
  uVar12 = DAT_14cc16bf8;
  if (DAT_14cc16bf8 != 0) {
    FUN_144a1cbf0(&DAT_14cc16be8,0,DAT_14cc16bf8,4);
    if (0 < (int)uVar12) {
      uVar3 = 0;
      do {
        puVar7 = DAT_14cc16bf0;
        if (DAT_14cc16bf0 == (undefined *)0x0) {
          puVar7 = &DAT_14cc16be8;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cc16bf8 + 0x7fffffff & uVar3) * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar12 != uVar3);
    }
    local_68 = 0x100000000;
    local_60 = &DAT_14cc16bc0;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (DAT_14cc16bd8 == 0) {
      uVar14 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar14 = local_68 >> 0x20;
    }
    iVar4 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar6 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
      do {
        local_74 = iVar10;
        puVar1 = (undefined8 *)(DAT_14cc16bb0 + (longlong)iVar6 * 0x20);
        iVar10 = *(int *)(DAT_14cc16bb0 + 8 + (longlong)iVar6 * 0x20);
        iVar5 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar5 = 0;
        }
        uVar3 = 0;
        if (0 < iVar5) {
          puVar15 = &DAT_149dfb77a;
          if (iVar10 != 0) {
            puVar15 = (undefined2 *)*puVar1;
          }
          lVar8 = 0;
          uVar3 = 0;
          do {
            uVar9 = ((uint)(ushort)puVar15[lVar8] +
                    (uint)(0x19 < (ushort)puVar15[lVar8] - 0x61) * 0x20) - 0x20;
            uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar3 ^ uVar9) & 0xff) * 4)
            ;
            uVar3 = uVar3 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar3 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
            lVar8 = lVar8 + 1;
          } while (iVar5 != (int)lVar8);
        }
        uVar11 = (longlong)(int)uVar3 & (longlong)(int)DAT_14cc16bf8 - 1U;
        iVar10 = (int)uVar11;
        *(int *)((longlong)puVar1 + 0x1c) = iVar10;
        puVar7 = DAT_14cc16bf0;
        if (DAT_14cc16bf0 == (undefined *)0x0) {
          puVar7 = &DAT_14cc16be8;
        }
        *(undefined4 *)(puVar1 + 3) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14cc16bf8 - 1U & uVar11) * 4);
        puVar7 = DAT_14cc16bf0;
        if (DAT_14cc16bf0 == (undefined *)0x0) {
          puVar7 = &DAT_14cc16be8;
        }
        *(int *)(puVar7 + ((longlong)iVar10 & (longlong)(int)DAT_14cc16bf8 - 1U) * 4) = iVar6;
        uVar12 = uVar12 & ~(uint)uVar14;
        puVar7 = *(undefined **)(local_60 + 0x10);
        if (*(undefined **)(local_60 + 0x10) == (undefined *)0x0) {
          puVar7 = local_60;
        }
        iVar5 = *(int *)(local_60 + 0x18);
        lVar8 = (longlong)iVar4;
        uVar3 = *(uint *)(puVar7 + lVar8 * 4) & uVar12;
        iVar10 = local_74;
        local_70 = local_60;
        if (uVar3 == 0) {
          iVar6 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar6 = iVar5 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar13 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = *(uint *)(puVar7 + lVar13 * 4 + lVar8 * 4 + 4);
            if (uVar3 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar2 - lVar8 == lVar13) goto LAB_1414271d0;
          }
          iVar4 = iVar4 + (int)lVar13 + 1;
          uVar12 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar3 & uVar3);
        uVar11 = uVar14 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar5);
    }
  }
LAB_1414271d0:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142720e FUN_14142720e body=129 status=ok
// SIG undefined FUN_14142720e(void)

void FUN_14142720e(longlong param_1)

{
  *(undefined2 **)(param_1 + 0x100) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_140115c12(param_1 + 0x110,0);
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141427290 FUN_141427290 body=597 status=ok
// SIG undefined FUN_141427290(void)

void FUN_141427290(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_78 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar11 = 1;
    local_58._4_4_ = 0;
    uVar15 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
    uVar15 = (uint)local_58;
    iVar14 = (int)local_68;
  }
  plVar6 = local_60;
  iVar8 = local_58._4_4_;
  iVar13 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar12 = *param_1;
      plVar9 = *(longlong **)(lVar12 + 0x18 + (longlong)iVar8 * 0x28);
      local_74 = iVar13;
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
      plVar9 = *(longlong **)(lVar12 + (longlong)iVar8 * 0x28 + 8);
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
      uVar15 = uVar15 & ~(uint)uVar11;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar12 = (longlong)iVar14;
      uVar7 = *(uint *)((longlong)plVar9 + lVar12 * 4) & uVar15;
      iVar13 = local_74;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar14) {
          iVar5 = iVar14;
        }
        if (iVar8 <= iVar14) break;
        lVar10 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar12 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar12 == lVar10) goto LAB_141427411;
        }
        iVar14 = iVar14 + (int)lVar10 + 1;
        uVar15 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar11 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar8 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_141427411:
  iVar14 = local_78;
  if (local_78 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_78);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_78) {
    FUN_140549ad6(param_1,local_78);
  }
  param_1[6] = 0xffffffff;
  uVar15 = iVar14 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar15) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar15) {
      uVar7 = uVar15;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414274e8 FUN_1414274e8 body=66 status=ok
// SIG undefined FUN_1414274e8(void)

void FUN_1414274e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ba3d370;
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000141427526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14142752a FUN_14142752a body=228 status=ok
// SIG undefined FUN_14142752a(void)

longlong FUN_14142752a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb97048 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148a68e41;
    local_40 = &LAB_14657f3f3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x220;
    FUN_14081cfa3(L"/Script/GbxOnline",L"GbxVoice",&DAT_14cb97048,&DAT_148a68e40);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb97048;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141427610 FUN_141427610 body=47 status=ok
// SIG undefined FUN_141427610(void)

undefined8 FUN_141427610(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"";
  if (*(int *)(param_1 + 0x40) == 1) {
    pwVar1 = L"Default System Device";
  }
  FUN_140056680(param_2,pwVar1);
  return param_2;
}



// FUNCTION 141427640 FUN_141427640 body=47 status=ok
// SIG undefined FUN_141427640(void)

undefined8 FUN_141427640(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"";
  if (*(int *)(param_1 + 0x40) == 1) {
    pwVar1 = L"Default System Device";
  }
  FUN_140056680(param_2,pwVar1);
  return param_2;
}



// FUNCTION 141427670 FUN_141427670 body=94 status=ok
// SIG undefined FUN_141427670(void)

ulonglong FUN_141427670(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1414276c3:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1414276c3;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 1414276ce FUN_1414276ce body=49 status=ok
// SIG undefined FUN_1414276ce(void)

void FUN_1414276ce(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(char *)(param_1 + 10) == '\x01') &&
     (puVar1 = *(undefined8 **)(param_1 + 0x10), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 141427700 FUN_141427700 body=68 status=ok
// SIG undefined FUN_141427700(void)

undefined8 FUN_141427700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
  (**(code **)(*plVar2 + 0xb0))(plVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 141427744 FUN_141427744 body=46 status=ok
// SIG undefined FUN_141427744(void)

void FUN_141427744(uint param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  if (param_1 < 0x71) {
    pwVar2 = (wchar_t *)(&DAT_149f7d3e0 + *(int *)(&DAT_149f7d3e0 + (ulonglong)param_1 * 4));
  }
  else {
    pwVar2 = L"::Invalid";
  }
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L':');
  return;
}



// FUNCTION 141427772 caseD_0 body=91 status=ok
// SIG undefined caseD_0(void)

void switchD_148704b3c::caseD_0(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_1 + 8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_1 + 0x20) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 1414277ce FUN_1414277ce body=282 status=ok
// SIG undefined FUN_1414277ce(void)

longlong FUN_1414277ce(longlong param_1,longlong *param_2,char param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x588))(param_2,&local_48,local_60);
      if (param_3 == '\0') {
        lVar2 = FUN_1414278ea(param_1,&local_48,param_4);
      }
      else {
        FUN_144a76660(local_60,local_78);
        lVar2 = FUN_147f5dd54(param_1,&local_48,local_78,param_4);
      }
      goto LAB_141427838;
    }
    lVar2 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x108);
    }
    lVar3 = (longlong)*(int *)(param_1 + 0x110) * 0x14;
    do {
      cVar1 = FUN_1447c3142(param_1,lVar2,&local_48);
      if (cVar1 != '\0') {
        if (param_4 != (undefined4 *)0x0) {
          *(undefined8 *)(param_4 + 4) = local_38;
          *param_4 = local_48;
          param_4[1] = uStack_44;
          param_4[2] = uStack_40;
          param_4[3] = uStack_3c;
        }
        goto LAB_141427838;
      }
      lVar2 = lVar2 + 0x14;
      lVar3 = lVar3 + -0x14;
    } while (lVar3 != 0);
  }
  lVar2 = 0;
LAB_141427838:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1414278ea FUN_1414278ea body=628 status=ok
// SIG undefined FUN_1414278ea(void)

uint * FUN_1414278ea(uint *param_1,double *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint *puVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar17 = (undefined4)DAT_14c8464e0;
  uVar18 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
  uVar15 = (undefined4)DAT_14c8464e8;
  uVar16 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
  uVar13 = (undefined4)DAT_14c8464f0;
  uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  puVar11 = param_1 + 0x2e;
  if (*(uint **)(param_1 + 0x42) != (uint *)0x0) {
    puVar11 = *(uint **)(param_1 + 0x42);
  }
  if ((longlong)(int)param_1[0x44] == 0) {
    puVar7 = (uint *)0x0;
  }
  else {
    lVar8 = (longlong)(int)param_1[0x44] * 0x14;
    dVar3 = 1.79769313486232e+308;
    puVar7 = (uint *)0x0;
    do {
      lVar9 = *(longlong *)(puVar11 + 2);
      if (((lVar9 != 0) && (puVar11[1] != 0)) && (uVar1 = *puVar11, -1 < (int)uVar1)) {
        if ((int)uVar1 < DAT_14c9647dc) {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar10 != (longlong *)0x0) && (*(uint *)(plVar10 + 2) == puVar11[1])) &&
             (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
              (plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0)))) {
            uVar1 = puVar11[4];
            if ((-1 < (longlong)(int)uVar1) && ((int)uVar1 < (int)param_1[0x2c])) {
              if ((param_1[1] == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) {
LAB_141427b54:
                uVar5 = 0;
              }
              else {
                uVar5 = 0;
                if ((int)uVar2 < DAT_14c9647dc) {
                  puVar6 = (undefined8 *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                  if (((puVar6 == (undefined8 *)0x0) || (*(uint *)(puVar6 + 2) != param_1[1])) ||
                     ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_141427b54;
                  uVar5 = *puVar6;
                }
              }
              cVar4 = FUN_1447c3330((longlong)(int)uVar1 * 0x50 + *(longlong *)(param_1 + 0x2a),
                                    uVar5);
              if (cVar4 == '\0') goto LAB_141427aee;
              lVar9 = *(longlong *)(puVar11 + 2);
            }
            (**(code **)(*plVar10 + 0x4b0))(plVar10,&local_a8,lVar9);
            dVar12 = (param_2[2] - local_98) * (param_2[2] - local_98) +
                     (param_2[1] - local_a0) * (param_2[1] - local_a0) +
                     (*param_2 - local_a8) * (*param_2 - local_a8);
            if (dVar12 < dVar3) {
              uVar13 = SUB84(local_98,0);
              uVar14 = (undefined4)((ulonglong)local_98 >> 0x20);
              uVar15 = SUB84(local_a0,0);
              uVar16 = (undefined4)((ulonglong)local_a0 >> 0x20);
              uVar17 = SUB84(local_a8,0);
              uVar18 = (undefined4)((ulonglong)local_a8 >> 0x20);
              puVar7 = puVar11;
              dVar3 = dVar12;
            }
          }
        }
      }
LAB_141427aee:
      puVar11 = puVar11 + 5;
      lVar8 = lVar8 + -0x14;
    } while (lVar8 != 0);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = CONCAT44(uVar18,uVar17);
    param_3[1] = CONCAT44(uVar16,uVar15);
    param_3[2] = CONCAT44(uVar14,uVar13);
  }
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141427b60 FUN_141427b60 body=310 status=ok
// SIG undefined FUN_141427b60(void)

undefined4
FUN_141427b60(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x18);
    lVar4 = (longlong)*(int *)(param_1 + 0x20) << 3;
    do {
      lVar3 = *plVar5;
      cVar2 = FUN_140aee426(lVar3,param_3);
      if (cVar2 != '\0') {
        if ((plVar5 != (longlong *)0x0) && (lVar3 != 0)) goto LAB_141427bc3;
        break;
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  lVar3 = FUN_14001cc68(0x40,0x10);
  FUN_1459257dc(lVar3,param_3,param_4,param_2);
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1462a5d52((longlong *)(param_1 + 0x18),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = lVar3;
  if (((char)param_2 == '\0') && (iVar1 = *(int *)(param_1 + 0x10), (longlong)iVar1 != 0)) {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    do {
      local_44 = FUN_142b2ba8a(param_1,*(undefined8 *)(lVar4 + lVar6),lVar3);
      (*(code *)*param_5)(param_5[1],(longlong)local_44 * 0x28 + *(longlong *)(param_1 + 0x28),
                          &local_44);
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
LAB_141427bc3:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined4 *)(lVar3 + 0x28);
}



// FUNCTION 141427c98 FUN_141427c98 body=567 status=ok
// SIG undefined FUN_141427c98(void)

void FUN_141427c98(longlong param_1,undefined8 param_2,uchar param_3 [8])

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  code *local_88;
  GUID *local_80;
  code *local_78;
  GUID *local_70;
  GUID local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((DAT_14c9a3000 == 0 && DAT_14c9a2ffc == 0) && DAT_14c9a3004 == 0) && DAT_14c9a3008 == 0) {
    local_68.Data1 = 0;
    local_68.Data2 = 0;
    local_68.Data3 = 0;
    local_68.Data4[0] = '\0';
    local_68.Data4[1] = '\0';
    local_68.Data4[2] = '\0';
    local_68.Data4[3] = '\0';
    local_68.Data4[4] = '\0';
    local_68.Data4[5] = '\0';
    local_68.Data4[6] = '\0';
    local_68.Data4[7] = '\0';
    CoCreateGuid(&local_68);
  }
  else {
    local_68.Data1 = DAT_14c9a2ffc;
    local_68._4_4_ = DAT_14c9a3000;
    local_68.Data4._0_4_ = DAT_14c9a3004;
    local_68.Data4._4_4_ = DAT_14c9a3008;
  }
  local_58 = CONCAT44(DAT_14c9a3000,DAT_14c9a2ffc);
  uStack_50 = CONCAT44(DAT_14c9a3008,DAT_14c9a3004);
  DAT_14c9a2ffc = local_68.Data1;
  DAT_14c9a3000._0_2_ = local_68.Data2;
  DAT_14c9a3000._2_2_ = local_68.Data3;
  DAT_14c9a3004._0_1_ = local_68.Data4[0];
  DAT_14c9a3004._1_1_ = local_68.Data4[1];
  DAT_14c9a3004._2_1_ = local_68.Data4[2];
  DAT_14c9a3004._3_1_ = local_68.Data4[3];
  DAT_14c9a3008._0_1_ = local_68.Data4[4];
  DAT_14c9a3008._1_1_ = local_68.Data4[5];
  DAT_14c9a3008._2_1_ = local_68.Data4[6];
  DAT_14c9a3008._3_1_ = local_68.Data4[7];
  iVar3 = *(int *)(param_1 + 0x10);
  local_68._0_8_ = param_1;
  local_68.Data4 = param_3;
  if ((longlong)iVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar6 = (longlong)iVar3 * 8;
    lVar8 = 0;
    do {
      cVar2 = FUN_140aee426(*(undefined8 *)(lVar1 + lVar8 * 8),param_2);
      if (cVar2 != '\0') {
        uVar7 = (uint)lVar8;
        if ((int)uVar7 < iVar3 && -1 < (int)uVar7) {
          local_70 = &local_68;
          local_78 = FUN_142b2ca7e;
          FUN_140aee220(param_1,param_2,0);
          iVar3 = *(int *)(param_1 + 0x10);
          if (iVar3 - 1U != uVar7) {
            iVar4 = (iVar3 - 1U) - uVar7;
            iVar5 = 1;
            if (iVar4 < 1) {
              iVar5 = iVar4;
            }
            memmove((void *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar7 & 0x7fffffff) * 8),
                    (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar3 - iVar5) * 8),
                    (longlong)iVar5 << 3);
            iVar3 = *(int *)(param_1 + 0x10);
          }
          *(int *)(param_1 + 0x10) = iVar3 + -1;
          FUN_145cafcbc(param_1 + 8);
          goto LAB_141427dac;
        }
        break;
      }
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar6 = (longlong)iVar3 * 8;
    lVar8 = 0;
    do {
      cVar2 = FUN_140aee426(*(undefined8 *)(lVar1 + lVar8 * 8),param_2);
      if (cVar2 != '\0') {
        uVar7 = (uint)lVar8;
        if ((int)uVar7 < iVar3 && -1 < (int)uVar7) {
          local_80 = &local_68;
          local_88 = FUN_142b2ca7e;
          FUN_1462a52ae(param_1,param_2);
          iVar3 = *(int *)(param_1 + 0x20);
          if (iVar3 - 1U != uVar7) {
            iVar4 = (iVar3 - 1U) - uVar7;
            iVar5 = 1;
            if (iVar4 < 1) {
              iVar5 = iVar4;
            }
            memmove((void *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(uVar7 & 0x7fffffff) * 8),
                    (void *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar3 - iVar5) * 8),
                    (longlong)iVar5 << 3);
            iVar3 = *(int *)(param_1 + 0x20);
          }
          *(int *)(param_1 + 0x20) = iVar3 + -1;
          FUN_1458b7f26(param_1 + 0x18);
        }
        break;
      }
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
LAB_141427dac:
  DAT_14c9a2ffc = (undefined4)local_58;
  DAT_14c9a3000 = local_58._4_4_;
  DAT_14c9a3004 = (undefined4)uStack_50;
  DAT_14c9a3008 = uStack_50._4_4_;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141427ed0 FUN_141427ed0 body=167 status=ok
// SIG undefined FUN_141427ed0(void)

undefined8 FUN_141427ed0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) {
      return 0;
    }
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    if (DVar3 != DVar4) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar2 = *(uint *)(param_1 + 0x54);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
        (lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 != 0)) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x58) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar5 = FUN_14479d2ce((uint *)(param_1 + 0x54));
      uVar5 = FUN_1407f492e(uVar5);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 141427f78 FUN_141427f78 body=107 status=ok
// SIG undefined FUN_141427f78(void)

void FUN_141427f78(longlong *param_1,longlong *param_2)

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
    FUN_1459b3630(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 141427fe4 FUN_141427fe4 body=231 status=ok
// SIG undefined FUN_141427fe4(void)

void FUN_141427fe4(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xeb8) = 0;
  *(undefined1 *)(param_1 + 0x23b8) = 0;
  *(undefined1 *)(param_1 + 0x23bd) = 0;
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_1465e8a56(param_1,0);
  }
  FUN_140898514(param_1 + 0x2350,0);
  FUN_1400bc8c2(param_1 + 0xa48,&DAT_14cbd0840);
  FUN_1400bc8c2(param_1 + 0xa20,&DAT_14cbd0840);
  if (((*(char *)(param_1 + 0x2368) == '\0') && (*(int *)(param_1 + 0xd98) != 0)) &&
     (*(longlong *)(param_1 + 0xda0) != 0)) {
    FUN_1415d3e68(param_1 + 0xe88,&DAT_14cbcfbd0,param_1 + 0xd98);
  }
  if (*(longlong *)(param_1 + 0x23a0) != 0) {
    *(undefined8 *)(param_1 + 0x23b0) = 0;
  }
  *(undefined8 *)(param_1 + 0x23a0) = 0;
  if (*(char *)(param_1 + 0x23bc) != '\x01') {
    return;
  }
  FUN_145a12416(param_1);
  return;
}



// FUNCTION 1414280cb FUN_1414280cb body=73 status=ok
// SIG undefined FUN_1414280cb(void)

void FUN_1414280cb(longlong param_1,int param_2)

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



// FUNCTION 141428114 FUN_141428114 body=169 status=ok
// SIG undefined FUN_141428114(void)

void FUN_141428114(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  FUN_140b4032f(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = param_1 + 6;
  if ((int)param_1[7] != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_141428149;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_141428149:
  plVar3 = (longlong *)param_1[4];
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
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1414281be thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414281c4 FUN_1414281c4 body=258 status=ok
// SIG undefined FUN_1414281c4(void)

void FUN_1414281c4(void)

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
              0x110) < DAT_14cb3e630) {
    FUN_144b3d300(&DAT_14cb3e630);
    if (DAT_14cb3e630 == -1) {
      FUN_1459b5b10(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x12;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3e5b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a7fa45);
      _Init_thread_footer(&DAT_14cb3e630);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414282c8 FUN_1414282c8 body=117 status=ok
// SIG undefined FUN_1414282c8(void)

void FUN_1414282c8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3a4a90;
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
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140acec6f(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14142833e FUN_14142833e body=173 status=ok
// SIG undefined FUN_14142833e(void)

void FUN_14142833e(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x380);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x6e0));
  *(int *)(lVar3 + 0x6d8) = *(int *)(lVar3 + 0x6d8) + 1;
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
  if (*(char *)(lVar3 + 0x28) == '\0') {
    iVar4 = *(int *)(lVar3 + 0x2c) + 1;
  }
  else {
    if (*(int *)(lVar3 + 0x2c) != 0) goto LAB_1414283c4;
    iVar4 = 1;
  }
  *(undefined1 *)(lVar3 + 0x28) = 1;
  *(int *)(lVar3 + 0x2c) = iVar4;
LAB_1414283c4:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001414283df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x6e0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414283ec FUN_1414283ec body=625 status=ok
// SIG undefined FUN_1414283ec(void)

void FUN_1414283ec(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong *local_68 [2];
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 0x2560) = 0;
  FUN_140e8fbe2();
  if ((*param_2 != 0) && (*(longlong *)(param_1 + 0x2570) != 0)) {
    lVar6 = *(longlong *)(param_1 + 0x2250);
    if (lVar6 == 0) {
      local_48 = *(undefined8 *)(param_1 + 0x2240);
      lVar6 = FUN_14050aea0();
      *(longlong *)(param_1 + 0x2250) = lVar6;
      if (lVar6 == 0) goto LAB_1414284b7;
    }
    lVar7 = *(longlong *)(lVar6 + 0xb8);
    if (lVar7 == 0) {
      local_48 = *(undefined8 *)(lVar6 + 0xa8);
      lVar7 = FUN_14050aea0();
      *(longlong *)(lVar6 + 0xb8) = lVar7;
      if (lVar7 == 0) {
        *(undefined1 *)(param_1 + 0x2560) = 0;
        goto LAB_1414284b7;
      }
    }
    lVar5 = FUN_1407c8d60(lVar6);
    if (((lVar5 == 0) || (*(char *)(lVar5 + 0x29) == '\0')) &&
       ((lVar5 = FUN_1407c8d60(lVar6), lVar5 == 0 || (*(char *)(lVar5 + 0x2a) == '\0')))) {
      lVar6 = FUN_1407c8d60(lVar6);
      if (lVar6 == 0) {
        bVar3 = 1;
      }
      else {
        bVar3 = *(byte *)(lVar6 + 0x2b) ^ 1;
      }
    }
    else {
      bVar3 = 0;
    }
    *(byte *)(param_1 + 0x2560) = bVar3;
    cVar4 = FUN_144a7c5f6(lVar7 + 0x98);
    if (cVar4 == '\0') {
      FUN_14142865e(*(undefined8 *)(param_1 + 0x2570),lVar7 + 0x98);
    }
    else {
      puVar10 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
        puVar10 = *(undefined4 **)(lVar7 + 8);
      }
      FUN_1447a97f4(&local_48,puVar10);
      if ((((int)local_48 != 0) && (local_48._4_4_ != 0)) && ((int)local_48 != DAT_14c948000)) {
        local_58 = (undefined2 *)0x0;
        uStack_50 = 0;
        FUN_1400b2348(&local_48,&local_58,1);
        uVar2 = *(undefined8 *)(param_1 + 0x2570);
        uVar11 = (longlong)(int)uStack_50 * 2;
        do {
          if (uVar11 == 0) {
            uVar9 = 0;
            goto LAB_1414285d8;
          }
          uVar1 = uVar11 - 2;
          lVar6 = uVar11 - 2;
          uVar11 = uVar1;
        } while (*(short *)((longlong)local_58 + lVar6) != 0x2e);
        uVar9 = (int)(uVar1 >> 1) + 1;
LAB_1414285d8:
        uVar12 = (int)uStack_50 - 1;
        puVar8 = local_58;
        if ((int)uStack_50 == 0) {
          puVar8 = &DAT_149dfb77a;
          uVar12 = 0;
        }
        if ((int)uVar12 <= (int)uVar9) {
          uVar9 = uVar12;
        }
        uVar11 = (ulonglong)uVar9;
        if ((int)uVar9 < 1) {
          uVar11 = 0;
        }
        FUN_14006620a(local_78,puVar8 + uVar11,uVar12 - (int)uVar11);
        FUN_140233b1a(local_68,local_78);
        FUN_14142865e(uVar2,local_68);
        if (local_68[0] != (longlong *)0x0) {
          (**(code **)(*local_68[0] + 0x10))();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1414284b7:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142865e FUN_14142865e body=645 status=ok
// SIG undefined FUN_14142865e(void)

void FUN_14142865e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = (longlong *)*param_2;
  plVar3 = *(longlong **)(param_1 + 2000);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 2000) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 0x7d8) = (int)param_2[1];
  *(undefined1 *)(param_1 + 0x680) = 0;
  FUN_1412b60ee(param_1);
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if ((lVar5 != 0) || (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)) {
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x458);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    uVar4 = *puVar6;
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar6 = local_98;
    local_90 = 3;
    *local_98 = &PTR_LAB_14a1c8830;
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
    local_98[2] = lVar7;
    *local_98 = &PTR_FUN_14b9d8d20;
    local_98[3] = 0;
    iVar8 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_98 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar8 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar8 = *(int *)(lVar5 + 0x10);
        bVar10 = iVar8 == 0;
        if (bVar10) {
          *(int *)(lVar5 + 0x10) = iVar9;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar8 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar8;
    puVar6[4] = param_1;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_98);
    local_48 = 1;
    FUN_14016fdb0(uVar4,local_a0,&local_88);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    if (local_90 != 0) {
      if (local_98 == (undefined8 *)0x0) goto LAB_141428843;
      (**(code **)*local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      local_90 = 0;
    }
    if (local_98 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141428843:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414288e4 FUN_1414288e4 body=1826 status=ok
// SIG undefined FUN_1414288e4(void)

void FUN_1414288e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 ****ppppuVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  ulonglong local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong local_a8;
  undefined1 local_9a;
  char local_99;
  char *local_98;
  ulonglong uStack_90;
  longlong *local_88;
  longlong lStack_80;
  undefined8 uStack_78;
  ulonglong auStack_70 [2];
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 8);
  cVar5 = FUN_1459b61e8(plVar1);
  if (cVar5 == '\0') {
    uVar13 = *(ulonglong *)(param_1 + 0x28);
    local_98 = (char *)((ulonglong)local_98 & 0xffffffffffffff00);
    auStack_70[0] = auStack_70[0] & 0xffffffff00000000;
    FUN_14575a19a(&local_98,0);
    FUN_140168c66(plVar1,local_60);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar15 = local_60;
      if (0x18 < local_48) {
        ppppuVar15 = (undefined8 ****)local_60[0];
      }
      (*pcVar3)(ppppuVar15);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
    FUN_1448173f8(auStack_70);
    if (((char)local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    lVar7 = *(longlong *)(param_1 + 0x10);
    if (lVar7 == 0) {
      uVar9 = FUN_140261af2();
      lVar7 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x10) = lVar7;
    }
    lVar8 = *(longlong *)(param_1 + 0x18);
    if (lVar8 == 0) {
      uVar16 = 0;
      if ((lVar7 == 0) || (*plVar1 == 0)) goto LAB_141428ee9;
      plVar4 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        goto LAB_141428ee9;
      }
      uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar8 = FUN_144aff482(uVar9,plVar1);
      *(longlong *)(param_1 + 0x18) = lVar8;
      uVar12 = 0;
      if (lVar8 != 0) goto LAB_1414289bd;
    }
    else {
LAB_1414289bd:
      lVar7 = *(longlong *)(lVar8 + 0x48);
      if (lVar7 == 0) {
        uVar16 = 0;
        if (*(longlong *)(lVar8 + 0x20) == 0) goto LAB_141428ee9;
        lVar10 = FUN_14000e0c8(lVar8 + 0x18);
        lVar7 = *(longlong *)(lVar8 + 0x48);
        if (lVar10 == 0) {
          if (lVar7 == 0) goto LAB_141428ee9;
          if (DAT_14c872a72 == '\0') {
            FUN_140113f48();
          }
LAB_141428cbd:
          *(longlong *)(lVar8 + 0x48) = lVar10;
          lVar7 = lVar10;
        }
        else if (lVar7 != lVar10) {
          if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
            FUN_140113f48();
          }
          FUN_1401924dc(lVar10);
          goto LAB_141428cbd;
        }
        uVar12 = 0;
        if (lVar7 == 0) goto LAB_141428a33;
      }
      for (lVar7 = *(longlong *)(lVar7 + 0x70); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x48)) {
        if (*(ulonglong *)(lVar7 + 0x20) == uVar13) {
          FUN_140002850(lVar7,&local_98);
          pcVar11 = local_98;
          if ((int)uStack_90 == 0) {
            pcVar11 = "";
          }
          FUN_1446f470e(&local_c8,pcVar11);
          uVar16 = local_c8;
          uVar12 = (uint)(local_c8 >> 0x20);
          if (local_98 != (char *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_141428a33;
        }
      }
LAB_141428ee9:
      uVar16 = 0;
      uVar12 = 0;
    }
LAB_141428a33:
    uVar14 = uVar13 >> 0x20;
    bVar17 = (int)uVar16 != 0;
    if (bVar17 || uVar12 != 0) {
      uVar13 = uVar16;
    }
    uVar13 = uVar13 & 0xffffffff;
    if (bVar17 || uVar12 != 0) {
      uVar14 = (ulonglong)uVar12;
    }
  }
  else {
    uVar13 = 0;
    uVar14 = 0;
  }
  lVar7 = DAT_14c9a75f8;
  if (DAT_14c9a75f8 == 0) goto LAB_141428b6f;
  local_98 = (char *)0x0;
  uStack_90 = 0;
  local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
  lStack_80 = 0;
  uStack_78 = 0;
  FUN_1446ddda2(&local_98,"Table_MissionRewardTier");
  lVar7 = FUN_144837462(lVar7,&local_98);
  if (lStack_80 != 0) {
    FUN_1400020a8();
  }
  if (lVar7 == 0) goto LAB_141428b6f;
  FUN_14016a17c(lVar7);
  if (*(longlong *)(lVar7 + 0x48) == 0) {
    if (*(longlong *)(lVar7 + 0x20) != 0) {
      lVar10 = FUN_14000e0c8(lVar7 + 0x18);
      lVar8 = *(longlong *)(lVar7 + 0x48);
      if (lVar10 != 0) {
        if (lVar8 != lVar10) {
          if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
            FUN_140113f48();
          }
          FUN_1401924dc(lVar10);
          *(longlong *)(lVar7 + 0x48) = lVar10;
        }
        goto LAB_141428ab6;
      }
      if (lVar8 != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        *(undefined8 *)(lVar7 + 0x48) = 0;
      }
    }
LAB_141428f0b:
    if (*(longlong *)(lVar7 + 0x20) == 0) goto LAB_141428b6f;
    lVar10 = FUN_14000e0c8(lVar7 + 0x18);
    lVar8 = *(longlong *)(lVar7 + 0x48);
    if (lVar10 == 0) {
      if (lVar8 == 0) goto LAB_141428b6f;
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
LAB_141428f4c:
      *(longlong *)(lVar7 + 0x48) = lVar10;
      lVar8 = lVar10;
    }
    else if (lVar8 != lVar10) {
      if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar10);
      goto LAB_141428f4c;
    }
    if (lVar8 == 0) goto LAB_141428b6f;
  }
  else {
LAB_141428ab6:
    FUN_140ebc5ea();
    lVar8 = *(longlong *)(lVar7 + 0x48);
    if (lVar8 == 0) goto LAB_141428f0b;
  }
  local_98 = "RewardTier";
  uStack_90 = CONCAT35(uStack_90._5_3_,10);
  uVar6 = FUN_14001a6c0(&local_98,1);
  lVar7 = FUN_14001e6ce(lVar7,uVar6);
  if (lVar7 == 0) goto LAB_141428b6f;
  local_98 = (char *)(uVar13 | uVar14 << 0x20);
  uStack_90 = uStack_90 & 0xffffffffffff0000;
  local_88 = (longlong *)0x0;
  lStack_80 = 0;
  uStack_78 = 0;
  auStack_70[0] = 0;
  auStack_70[1] = 0;
  local_b8 = 0;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  local_d8 = 0;
  local_e8 = lVar8;
  local_e0 = lVar7;
  FUN_1448275b3(&local_9a,&local_98,1);
  plVar1 = plStack_c0;
  if (local_99 != '\0') goto LAB_141428b5e;
  if (local_c8 == 0) {
LAB_141428e70:
    FUN_140c5407a();
  }
  else {
    lVar7 = *(longlong *)(local_c8 + 8);
    lVar8 = FUN_1446e6c6a();
    if (*(ulonglong *)(lVar8 + 8) == 0) {
      bVar17 = lVar7 != 0;
      if (lVar7 != lVar8 && bVar17) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar17 = lVar7 != 0;
          if (lVar7 == lVar8) break;
        } while (lVar7 != 0);
      }
      if (bVar17) goto LAB_141428d8f;
      goto LAB_141428e70;
    }
    if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar8 + 8)) == 0) goto LAB_141428e70;
LAB_141428d8f:
    if (plVar1 == (longlong *)0x0) goto LAB_141428e70;
    lVar7 = plVar1[1];
    lVar8 = FUN_140c5407a();
    if (lVar7 == lVar8) {
      lVar7 = plVar1[2];
      if (lVar7 == 0) {
        if ((*plVar1 != 0) && (plVar1[1] != 0)) {
          plVar4 = *(longlong **)(plVar1[1] + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
            plVar1[2] = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar7 = FUN_144aff482(uVar9,plVar1);
            plVar1[2] = lVar7;
            if (lVar7 != 0) goto LAB_141428db7;
          }
        }
      }
      else {
LAB_141428db7:
        if (param_2[1] == 0) {
          uVar9 = FUN_140c5407a();
          lVar8 = FUN_14477b664(uVar9);
          param_2[1] = lVar8;
        }
        lVar8 = FUN_140c5407a();
        uVar9 = FUN_140c5407a();
        FUN_1402d1bfa(&local_a8,uVar9,lVar7);
        if (*param_2 != local_a8) {
          param_2[2] = 0;
        }
        *param_2 = local_a8;
        lVar10 = FUN_140c5407a();
        if (lVar8 == 0) {
LAB_141428e2f:
          lVar10 = lVar8;
        }
        else if (lVar10 == 0) {
          lVar10 = 0;
        }
        else if ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                 == lVar10 + 0x30)) goto LAB_141428e2f;
        if (param_2[1] != lVar10) {
          param_2[2] = 0;
        }
        uVar9 = FUN_14477b664(lVar10);
        lVar8 = FUN_14477b664(uVar9);
        param_2[1] = lVar8;
        if ((lVar8 != 0) && (*param_2 != 0)) {
          param_2[2] = lVar7;
        }
      }
    }
  }
LAB_141428b5e:
  if (auStack_70[0] != 0) {
    FUN_1400020a8();
  }
LAB_141428b6f:
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141429008 FUN_141429008 body=562 status=ok
// SIG undefined FUN_141429008(void)

int * FUN_141429008(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  
  iVar7 = (int)param_1[1];
  if (param_3 < iVar7) {
    lVar12 = *param_1;
  }
  else {
    iVar2 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar7) < (uint)(iVar2 - iVar7)) {
      FUN_1459b6280(param_1);
      iVar2 = (int)param_1[1];
    }
    lVar12 = *param_1;
    iVar7 = (int)param_1[5];
    if (iVar7 < iVar2) {
      plVar10 = param_1 + 2;
      do {
        *(undefined4 *)(lVar12 + (longlong)iVar7 * 8) = 0xffffffff;
        lVar3 = param_1[6];
        *(int *)(lVar12 + 4 + (longlong)iVar7 * 8) = (int)lVar3;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar12 + (longlong)(int)lVar3 * 8) = iVar7;
        }
        *(int *)(param_1 + 6) = iVar7;
        iVar7 = (int)param_1[5];
        if (iVar7 == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar2 = iVar7 + -1;
          }
          iVar2 = iVar2 >> 5;
        }
        iVar9 = iVar7 + 1;
        iVar11 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar11 = iVar7;
        }
        if (iVar11 >> 5 == iVar2) {
          *(int *)(param_1 + 5) = iVar9;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
            if (iVar7 + 0x20U < 0xa0) {
              iVar9 = 0x80;
              iVar2 = iVar7;
            }
            else {
              uVar13 = iVar7 + 0x20U >> 5;
              if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                uVar8 = 4;
                if (4 < uVar13) {
                  uVar8 = uVar13;
                }
              }
              else {
                uVar8 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
              }
              uVar5 = FUN_144a3809e(uVar8 << 2,0);
              iVar2 = (int)(uVar5 >> 2);
              iVar9 = -0x20;
              if ((int)uVar13 <= iVar2) {
                iVar9 = iVar2 << 5;
              }
              iVar2 = (int)param_1[5];
            }
            *(int *)((longlong)param_1 + 0x2c) = iVar9;
            FUN_1446efbd8(plVar10,iVar2);
            iVar9 = (int)param_1[5] + 1;
          }
          iVar2 = iVar9 + 0x1f;
          if (-1 < iVar9) {
            iVar2 = iVar9;
          }
          *(int *)(param_1 + 5) = iVar9;
          if (iVar9 % 0x20 != 0) {
            plVar4 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar4 = plVar10;
            }
            bVar6 = -(char)(iVar9 % 0x20);
            *(uint *)((longlong)plVar4 + (longlong)(iVar2 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar6 & 0x1f))
                 >> (bVar6 & 0x1f);
          }
        }
        plVar4 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar4 = plVar10;
        }
        bVar6 = (byte)iVar7 & 0x1f;
        puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar11 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar7 = (int)param_1[5];
      } while (iVar7 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar3 = (longlong)param_3;
  iVar7 = *(int *)(lVar12 + lVar3 * 8);
  iVar2 = *(int *)(lVar12 + 4 + lVar3 * 8);
  if ((longlong)iVar7 == -1) {
    *(int *)(param_1 + 6) = iVar2;
  }
  else {
    *(int *)(lVar12 + 4 + (longlong)iVar7 * 8) = iVar2;
  }
  if (iVar2 != -1) {
    *(int *)(lVar12 + (longlong)iVar2 * 8) = iVar7;
  }
  plVar10 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[4];
  }
  iVar7 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar7 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar3 * 8 + *param_1;
  return param_2;
}



// FUNCTION 14142923a FUN_14142923a body=70 status=ok
// SIG undefined FUN_14142923a(void)

bool FUN_14142923a(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 141429280 FUN_141429280 body=462 status=ok
// SIG undefined FUN_141429280(void)

void FUN_141429280(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1459b6bf6(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = param_1;
  if ((int)param_1[5] == 0) {
    uVar14 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar14 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  plVar12 = local_70;
  iVar15 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      puVar10 = (undefined8 *)((longlong)iVar6 * 0x28 + *plVar12);
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_1413eac7e(param_2,iVar6);
        plVar12 = local_70;
      }
      lVar11 = *param_2;
      *(undefined8 *)(lVar11 + (longlong)iVar6 * 0x10) = *puVar10;
      lVar8 = puVar10[1];
      *(longlong *)(lVar11 + 8 + (longlong)iVar6 * 0x10) = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      uVar13 = uVar13 & ~(uint)uVar14;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar15;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar15) {
          iVar3 = iVar15;
        }
        if (iVar6 <= iVar15) break;
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_1414293ea;
        }
        iVar15 = iVar15 + (int)lVar8 + 1;
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1414293ea:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141429450 FUN_141429450 body=1953 status=ok
// SIG undefined FUN_141429450(void)

void FUN_141429450(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  longlong local_160;
  longlong local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128 [2];
  longlong *local_118 [2];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *plStack_f0;
  longlong local_e8 [5];
  wchar_t *local_c0;
  longlong *local_b8;
  longlong local_b0;
  wchar_t *local_a8;
  char local_9d;
  uint local_9c;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  longlong *plStack_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_9c = param_2;
  FUN_140e4f1ca(param_1 + 0x78);
  if ((*(byte *)(*param_4 + 0x10) & 4) == 0) {
    if (*(int *)(param_1 + 0x688) != *(int *)(param_1 + 0x6b4)) {
      lVar8 = param_1 + 0x6b8;
      if (*(longlong *)(param_1 + 0x6c0) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x6c0);
      }
      iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x6c8) - 1U & param_2) * 4);
      if (iVar6 != -1) {
        lVar8 = *(longlong *)(param_1 + 0x680);
        do {
          lVar11 = lVar8 + (longlong)iVar6 * 0x60;
          if (*(uint *)(lVar8 + (longlong)iVar6 * 0x60) == param_2) {
            if ((lVar11 != 0) && (lVar11 != -8)) {
              local_158 = param_3[2];
              if (local_158 == 0) goto LAB_1414297b1;
              iVar6 = *(int *)(local_158 + 8);
              goto LAB_1414295d8;
            }
            break;
          }
          iVar6 = *(int *)(lVar11 + 0x58);
        } while (iVar6 != -1);
      }
    }
  }
  else {
    uVar7 = FUN_141429bf2((longlong *)(param_1 + 0x680),param_2,&local_9c);
    local_9d = '\0';
    plStack_60 = (longlong *)param_3[2];
    if (plStack_60 == (longlong *)0x0) {
LAB_14142978a:
      plStack_60 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plStack_60[1];
      do {
        if (iVar6 == 0) goto LAB_14142978a;
        LOCK();
        iVar3 = (int)plStack_60[1];
        bVar12 = iVar6 == iVar3;
        if (bVar12) {
          *(int *)(plStack_60 + 1) = iVar6 + 1;
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        UNLOCK();
      } while (!bVar12);
    }
    local_68 = (wchar_t *)0x0;
    if (plStack_60 != (longlong *)0x0) {
      local_68 = (wchar_t *)param_3[1];
    }
    FUN_140b6d1a4(uVar7,&local_78,&local_68,&local_9d);
    plVar10 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if ((((local_9d == '\0') && (cVar5 = FUN_1459b6c9c(param_1,local_9c), cVar5 != '\0')) &&
        (cVar5 = FUN_14586c980(param_1,local_9c,param_3), cVar5 != '\0')) &&
       ((*(char *)(param_1 + 0x6d8) == '\x01' &&
        (cVar5 = FUN_145cf80ce(param_1,local_9c,param_3), cVar5 == '\0')))) {
      lVar8 = FUN_1415ca610(param_1);
      (**(code **)(*param_3 + 0x10))(param_3,&local_68);
      FUN_1446f470e(&local_a8,L"SHIFT",1);
      if ((lVar8 != 0) &&
         ((local_68 == local_a8 && (lVar11 = *(longlong *)(lVar8 + 0x48), lVar11 != 0)))) {
        lVar9 = FUN_140b7066c();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
           ((*(longlong *)
              (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30 &&
            (cVar5 = FUN_140b6d060(lVar11), cVar5 != '\0')))) goto LAB_141429536;
      }
      (**(code **)(*param_3 + 0x10))(param_3);
      FUN_140b708a0(param_1);
      local_78 = local_b0;
      plVar10 = (longlong *)FUN_1401e3228();
      if (plVar10 == (longlong *)0x0) {
        local_68 = (wchar_t *)0x0;
        plStack_60 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar10 + 0x80))(plVar10);
        if ((local_68 != (wchar_t *)0x0) &&
           (iVar6 = (**(code **)(*(longlong *)local_68 + 0x130))(), plVar10 = plStack_60, iVar6 != 0
           )) {
LAB_141429757:
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
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          goto LAB_141429536;
        }
      }
      plVar10 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      lVar11 = FUN_140b708a0(param_1);
      if ((((lVar11 != 0) && (*(longlong *)(lVar11 + 0x1f0) != 0)) &&
          (lVar11 = FUN_14583d3ae(), lVar11 != 0 && lVar8 != 0)) &&
         ((longlong)*(int *)(lVar8 + 0x40) != 0)) {
        lVar9 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(lVar8 + 0x38) + lVar9);
          if ((lVar4 != 0) && (*(uint *)(lVar4 + 0xe0) == local_9c)) {
            FUN_140b6c84e(param_1,&local_c0,local_9c,param_3);
            plVar10 = local_b8;
            if (local_c0 != (wchar_t *)0x0) {
              local_e8[2] = 0;
              local_e8[3] = 0;
              local_e8[0] = 0;
              local_e8[1] = 0;
              local_f8 = 0;
              plStack_f0 = (longlong *)0x0;
              local_68 = local_c0;
              plStack_60 = local_b8;
              if (local_b8 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
                UNLOCK();
              }
              local_168 = &local_f8;
              cVar5 = FUN_140b6ca98(lVar4,&local_68,local_e8 + 2,local_e8);
              plVar10 = plStack_60;
              if (plStack_60 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_60 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_60)(plStack_60);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
              if (cVar5 != '\0') {
                FUN_145d1c6f4(local_e8,local_e8 + 2);
                local_68 = L"FavoriteFriendOnlineHeader";
                plStack_60._0_4_ = 0x1a;
                FUN_1446e940c(&local_78,&local_68);
                local_68 = L"OakFriends";
                plStack_60._0_4_ = 10;
                FUN_1446e940c(&local_88,&local_68);
                FUN_140208bae(local_108,&local_88,&local_78,L"Favorite Friend Online");
                FUN_140009b9a(local_128,local_e8 + 2);
                local_68 = L"FavoriteFriendOnlineMessage";
                plStack_60._0_4_ = 0x1b;
                FUN_1446e940c(local_14c,&local_68);
                local_68 = L"OakFriends";
                plStack_60 = (longlong *)CONCAT44(plStack_60._4_4_,10);
                FUN_1446e940c(local_150,&local_68);
                FUN_140208bae(local_148,local_150,local_14c,L"{0} is now available");
                FUN_14023409e(&local_138,local_148,1);
                local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
                FUN_14023423e(local_58,local_128);
                local_80 = &local_48;
                local_88 = &local_68;
                FUN_14010d304(&local_78,&local_88);
                local_98 = local_138;
                local_90 = local_130;
                if (local_130 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_130 + 1) = (int)local_130[1] + 1;
                  UNLOCK();
                }
                FUN_14010c016(local_118,&local_98,&local_78);
                FUN_14007f2db(local_78,local_70);
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
                if (local_58[0] != (longlong *)0x0) {
                  (**(code **)(*local_58[0] + 0x10))();
                }
                if (local_130 != (longlong *)0x0) {
                  LOCK();
                  plVar10 = local_130 + 1;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)*plVar10 == 0) {
                    (**(code **)*local_130)(local_130);
                    LOCK();
                    piVar2 = (int *)((longlong)local_130 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*local_130 + 0x10))(local_130);
                    }
                  }
                }
                if (local_128[0] != (longlong *)0x0) {
                  (**(code **)(*local_128[0] + 0x10))();
                }
                if (local_148[0] != (longlong *)0x0) {
                  (**(code **)(*local_148[0] + 0x10))();
                }
                FUN_1458d9546(lVar11,local_108,local_118);
                if (local_118[0] != (longlong *)0x0) {
                  (**(code **)(*local_118[0] + 0x10))();
                }
                if (local_108[0] != (longlong *)0x0) {
                  (**(code **)(*local_108[0] + 0x10))();
                }
              }
              plVar10 = plStack_f0;
              if (plStack_f0 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_f0 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_f0)(plStack_f0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
              if (local_e8[0] != 0) {
                FUN_1400020a8();
              }
              plVar10 = local_b8;
              if (local_e8[2] != 0) {
                FUN_1400020a8();
                plVar10 = local_b8;
              }
            }
            goto LAB_141429757;
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)*(int *)(lVar8 + 0x40) * 8 != lVar9);
      }
    }
  }
  goto LAB_141429536;
LAB_1414297b1:
  local_158 = 0;
  goto LAB_1414295eb;
  while( true ) {
    LOCK();
    iVar3 = *(int *)(local_158 + 8);
    bVar12 = iVar6 == iVar3;
    if (bVar12) {
      *(int *)(local_158 + 8) = iVar6 + 1;
      iVar3 = iVar6;
    }
    iVar6 = iVar3;
    UNLOCK();
    if (bVar12) break;
LAB_1414295d8:
    if (iVar6 == 0) goto LAB_1414297b1;
  }
LAB_1414295eb:
  local_160 = 0;
  if (local_158 != 0) {
    local_160 = param_3[1];
  }
  FUN_1459b6cd8();
LAB_141429536:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141429bf2 FUN_141429bf2 body=197 status=ok
// SIG undefined FUN_141429bf2(void)

longlong FUN_141429bf2(longlong *param_1,uint param_2,int *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_141429c57;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1459b6eba(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_141429c57:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 141429cb8 FUN_141429cb8 body=60 status=ok
// SIG undefined FUN_141429cb8(void)

void FUN_141429cb8(longlong *param_1)

{
  FUN_1405d62d2(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141429cf4 FUN_141429cf4 body=44 status=ok
// SIG undefined FUN_141429cf4(void)

void FUN_141429cf4(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141429d20 FUN_141429d20 body=513 status=ok
// SIG undefined FUN_141429d20(void)

void FUN_141429d20(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  int local_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = *(longlong *)(param_1 + 0x78);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x28) == '\x01')) {
    *(undefined1 *)(lVar6 + 0x28) = 0;
  }
  lVar6 = FUN_1408ed0b0();
  if (*(char *)(lVar6 + 0xd8) == '\x01') {
    *(undefined1 *)(lVar6 + 0xd8) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    local_68 = 0;
    lVar6 = *plVar1;
    local_60 = iVar2;
    FUN_146544b1c(&local_68,iVar2);
    FUN_146544b86(local_68,lVar6,iVar2);
    lVar6 = local_68;
    lVar7 = (longlong)local_60;
    if (lVar7 != 0) {
      lVar8 = 0;
      do {
        if ((((*(int *)(lVar6 + 0x10 + lVar8) == 0) ||
             (plVar3 = *(longlong **)(lVar6 + 8 + lVar8), plVar3 == (longlong *)0x0)) ||
            ((**(code **)(*plVar3 + 0x60))(plVar3,0), *(int *)(lVar6 + 0x10 + lVar8) == 0)) ||
           (plVar3 = *(longlong **)(lVar6 + 8 + lVar8), plVar3 == (longlong *)0x0)) {
          local_70 = 0;
        }
        else {
          (**(code **)(*plVar3 + 0x38))();
        }
        lVar10 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_14107bfdc(&local_58);
        }
        local_58[lVar10] = local_70;
        lVar8 = lVar8 + 0x18;
      } while (lVar7 * 0x18 != lVar8);
      if ((longlong)(int)uStack_50 != 0) {
        plVar3 = local_58 + (int)uStack_50;
        plVar11 = local_58;
        do {
          if (0 < *(int *)(param_1 + 0x68)) {
            lVar6 = 0x10;
            uVar9 = 0;
            do {
              if ((*(int *)(*plVar1 + lVar6) == 0) ||
                 (plVar4 = *(longlong **)(*plVar1 + -8 + lVar6), plVar4 == (longlong *)0x0)) {
                lVar7 = 0;
              }
              else {
                (**(code **)(*plVar4 + 0x38))(plVar4,&local_70);
                lVar7 = local_70;
              }
              if (lVar7 == *plVar11) {
                FUN_145ae58b2(plVar1,uVar9 & 0xffffffff);
                FUN_145ae5874(plVar1);
                break;
              }
              uVar9 = uVar9 + 1;
              lVar6 = lVar6 + 0x18;
            } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x68));
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar3);
      }
    }
    FUN_141429cf4(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141429f22 FUN_141429f22 body=93 status=ok
// SIG undefined FUN_141429f22(void)

void FUN_141429f22(longlong *param_1,char param_2)

{
  undefined1 auStack_48 [40];
  longlong *local_20;
  code *local_18;
  longlong **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[0x60] != param_2) {
    *(char *)(param_1 + 0x60) = param_2;
    local_10 = &local_20;
    local_18 = FUN_143d49e3a;
    local_20 = param_1;
    (**(code **)(*param_1 + 0x40))();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141429f80 FUN_141429f80 body=175 status=ok
// SIG undefined FUN_141429f80(void)

double * FUN_141429f80(double *param_1,longlong param_2,undefined8 param_3,float param_4)

{
  double dVar1;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    param_1[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = dVar1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  FUN_141036372(param_3,&local_48,param_2,0);
  dVar1 = (double)param_4;
  *param_1 = dVar1 * local_48;
  param_1[1] = local_40 * dVar1;
  param_1[2] = local_38 * dVar1;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14142a030 FUN_14142a030 body=345 status=ok
// SIG undefined FUN_14142a030(void)

void FUN_14142a030(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x2478) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x2478) + 0x458) == '\x01')) {
    plVar1 = (longlong *)(param_1 + -0x88);
    lVar3 = (**(code **)(*(longlong *)(param_1 + -0x88) + 0x40))(plVar1);
    if (((*(char *)(lVar3 + 0x70) == '\0') &&
        ((((plVar4 = (longlong *)FUN_140789426(*(longlong *)(param_1 + 0x2478) + 0x460),
           plVar4 == (longlong *)0x0 ||
           (cVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,param_3,0), cVar2 != '\0')) &&
          (lVar3 = (**(code **)(*param_3 + 0x110))(param_3), lVar3 != 0)) &&
         (((*(byte *)(lVar3 + 0x420) & 2) != 0 &&
          (cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1), cVar2 == '\0')))))) &&
       (cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1), cVar2 == '\0')) {
      lVar3 = (**(code **)(*param_3 + 0x108))(param_3);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(param_1 + 0x2238) = lVar3;
      local_24 = 0;
      local_38 = DAT_14c9a6400;
      local_30 = 0xffffffff;
      local_48 = DAT_14cbcd1e0;
      local_40 = 0xffffffff;
      FUN_140f8b8f2(param_1 + 0x90);
      FUN_14142a18a(&DAT_14cbcccf8,param_1 + -0x448,*(undefined8 *)(param_1 + 0x2238));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14142a18a FUN_14142a18a body=173 status=ok
// SIG undefined FUN_14142a18a(void)

void FUN_14142a18a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14142a221;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14142a221:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14142a238 FUN_14142a238 body=515 status=ok
// SIG undefined FUN_14142a238(void)

void FUN_14142a238(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._4_4_ = 0;
    plVar13 = local_60;
    uVar12 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    local_70 = local_60;
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
    plVar13 = local_70;
    uVar12 = (uint)local_58;
    iVar14 = (int)local_68;
  }
  plVar3 = local_60;
  iVar4 = (int)local_60[3];
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar4) {
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
        FUN_1400020a8();
        iVar4 = (int)plVar3[3];
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar7 = plVar3;
      }
      lVar11 = (longlong)iVar14;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar14) {
          iVar2 = iVar14;
        }
        if (iVar6 <= iVar14) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_14142a3a6;
        }
        iVar14 = iVar14 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_14142a3a6:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar13,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142a43e FUN_14142a43e body=476 status=ok
// SIG undefined FUN_14142a43e(void)

void FUN_14142a43e(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 14142a61b FUN_14142a61b body=56 status=ok
// SIG undefined FUN_14142a61b(void)

void FUN_14142a61b(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x10);
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
      plVar3 = plVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14142a670 FUN_14142a670 body=122 status=ok
// SIG undefined FUN_14142a670(void)

undefined8 * FUN_14142a670(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[1] = param_2[1];
  if (DAT_14ca9ee30 == (longlong *)0x0) {
    DAT_14ca9ee30 = (longlong *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca9ee30 = 0;
    DAT_14ca9ee30[1] = 0;
  }
  plVar2 = DAT_14ca9ee30;
  iVar1 = (int)DAT_14ca9ee30[1];
  *(uint *)(DAT_14ca9ee30 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1459b966e(plVar2,iVar1);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  return param_1;
}



// FUNCTION 14142a6ea FUN_14142a6ea body=70 status=ok
// SIG undefined FUN_14142a6ea(void)

void FUN_14142a6ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a611960;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  if (param_1[0xa5] != 0) {
    FUN_1400020a8();
  }
  FUN_145c52f08(param_1 + 0x9d);
  FUN_1457d2822(param_1);
  return;
}



// FUNCTION 14142a730 FUN_14142a730 body=228 status=ok
// SIG undefined FUN_14142a730(void)

longlong FUN_14142a730(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb91508 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1489f2079;
    local_40 = &LAB_145d0b880;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/GbxEnhancedInput",L"GbxEnhancedInputSettings",&DAT_14cb91508,
                  &DAT_1489f2078);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91508;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142a816 FUN_14142a816 body=66 status=ok
// SIG undefined FUN_14142a816(void)

void FUN_14142a816(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(uint *)(param_1 + 0xc) = uVar1 | 1;
  if ((lVar2 != 0 && uVar1 == 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    FUN_144821112(*(longlong *)(lVar2 + 8) + 0x70,lVar2,*(uint *)(param_1 + 8) >> 3);
    return;
  }
  return;
}



// FUNCTION 14142a858 FUN_14142a858 body=241 status=ok
// SIG undefined FUN_14142a858(void)

void FUN_14142a858(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
LAB_14142a879:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  cVar2 = FUN_14142a9f4(param_2,&local_28);
  if (cVar2 == '\0') goto LAB_14142a879;
  cVar2 = FUN_1411d9864(param_2,local_28);
  if (cVar2 != '\0') goto LAB_14142a879;
  lVar4 = *(longlong *)(param_1 + 0x2b0);
  if (lVar4 == 0) {
    uVar3 = FUN_145c20674();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x2b0) = lVar4;
  }
  if (((*(longlong *)(param_1 + 0x2b8) != 0) || (lVar4 == 0)) ||
     (*(longlong *)(param_1 + 0x2a8) == 0)) goto LAB_14142a8e9;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_14142a958:
    uVar3 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_14142a958;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x2a8));
  }
  *(undefined8 *)(param_1 + 0x2b8) = uVar3;
LAB_14142a8e9:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142a9f4 FUN_14142a9f4 body=793 status=ok
// SIG undefined FUN_14142a9f4(void)

undefined1 FUN_14142a9f4(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cba8288 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464cee30;
      local_78 = &LAB_148bfac22;
      local_80 = &LAB_140f21842;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(param_1[2] + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
        (plVar8 = param_1,
        *(longlong *)
         (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) !=
        DAT_14cba8288 + 0x30)) &&
       ((lVar6 = FUN_14410ad36(param_1), lVar6 == 0 ||
        (plVar8 = *(longlong **)(lVar6 + 0xf48), *(longlong **)(lVar6 + 0xf48) == (longlong *)0x0)))
       ) {
      lVar6 = FUN_141068032();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        lVar6 = param_1[0x4ca];
        if (lVar6 == 0) {
          local_50 = (code *)param_1[0x4c8];
          lVar6 = FUN_14050aea0();
          param_1[0x4ca] = lVar6;
          if (lVar6 == 0) goto LAB_14142aad1;
        }
        lVar6 = FUN_141450d48(lVar6);
        if (lVar6 != 0) {
          uVar7 = FUN_141563480(lVar6 + 0x30);
          *param_2 = uVar7;
          uVar5 = *(undefined1 *)(lVar6 + 0x2a);
          goto LAB_14142ab65;
        }
      }
LAB_14142aad1:
      lVar6 = FUN_140126fc0();
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) && ((longlong)(int)param_1[0x9f] != 0)) {
        plVar8 = (longlong *)param_1[0x9e];
        plVar9 = plVar8 + (longlong)(int)param_1[0x9f] * 2;
        do {
          plVar2 = (longlong *)*plVar8;
          plVar3 = (longlong *)plVar8[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          bVar4 = true;
          if (plVar2 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar2 + 8))(plVar2);
            lVar10 = FUN_1418c3a38();
            if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                == lVar10 + 0x30)) {
              uVar7 = FUN_141563480(plVar2 + 6);
              *param_2 = uVar7;
              bVar4 = false;
            }
          }
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
          if (!bVar4) goto LAB_14142ac4f;
          plVar8 = plVar8 + 2;
        } while (plVar8 != plVar9);
      }
      uVar7 = FUN_1401b0f18();
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar7);
      if (plVar8 != (longlong *)0x0) {
        uVar7 = FUN_1401b0f18();
        plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
        if (plVar9 != (longlong *)0x0 && plVar8 != plVar9) {
          lVar6 = (**(code **)(*plVar9 + 0x28))(plVar9);
          uVar5 = FUN_14410b2c4(*(undefined8 *)(lVar6 + 0xd8),param_2);
          goto LAB_14142ab65;
        }
      }
    }
    else if (*(char *)(plVar8[0x7ee] + 0x10aa) == '\x01') {
      uVar7 = FUN_141563480(plVar8[0x7ee] + 0x10b0);
      *param_2 = uVar7;
LAB_14142ac4f:
      uVar5 = 1;
      goto LAB_14142ab65;
    }
  }
  uVar5 = 0;
LAB_14142ab65:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14142ad0e FUN_14142ad0e body=127 status=ok
// SIG undefined FUN_14142ad0e(void)

void FUN_14142ad0e(longlong param_1,char param_2,longlong *param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = &DAT_14cbc67a0;
  if (*param_3 != 0) {
    plVar4 = param_3;
  }
  if (param_2 == '\0') {
    FUN_1400bc8c2();
  }
  else {
    FUN_1400bc96c(param_1 + 0x250,plVar4);
  }
  cVar2 = FUN_1403ae288(param_1 + 0x2a0);
  if (cVar2 != '\0') {
    bVar1 = *(byte *)(param_1 + 0x250);
    lVar3 = FUN_14008e0ae(param_1 + 0x2a0);
    *(uint *)(lVar3 + 0xb8) = (uint)bVar1;
    FUN_140841e14(lVar3 + 0xb0,1);
    FUN_14142ad8e(param_1);
    return;
  }
  return;
}



// FUNCTION 14142ad8e FUN_14142ad8e body=1451 status=ok
// SIG undefined FUN_14142ad8e(void)

void FUN_14142ad8e(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined *puVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  
  if (*(longlong *)(param_1 + 0x230) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x240) & 1) == 0) {
    return;
  }
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x238) + 0x28);
  if (uVar3 < 0xffffffff00000000) {
    plVar9 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar9 = (longlong *)0x0;
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,*(longlong *)(param_1 + 0x238),uVar3,0x40);
  }
  else {
    uVar11 = (uint)uVar3;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
      puVar8 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar8 = DAT_14c998080;
      }
      if ((*(uint *)(puVar8 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0) {
        lVar5 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
        lVar6 = *(longlong *)(lVar5 + 0x18);
        if (*(longlong *)(lVar5 + 0x18) == 0) {
          lVar6 = lVar5 + 8;
        }
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 1;
        *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
      }
    }
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x238) + 0x755a) = 0;
  *(undefined2 *)(*(longlong *)(param_1 + 0x238) + 0x755c) = 0;
  if ((*(char *)(*(longlong *)(param_1 + 0x230) + 0x3c) == '\x01') &&
     (*(char *)(param_1 + 0x245) == '\x01')) {
    lVar6 = param_1 + 0x308;
    cVar4 = FUN_1403ae288(lVar6);
    if (cVar4 == '\0') goto LAB_14142b103;
    lVar5 = FUN_14008e0ae(lVar6);
    fVar14 = *(float *)(lVar5 + 0x30) - *(float *)(lVar5 + 0x24);
    fVar13 = (*(float *)(lVar5 + 200) - *(float *)(lVar5 + 0x24)) / fVar14;
    auVar12 = ZEXT416((uint)fVar13);
    if ((fVar14 == 0.0) && (auVar12 = ZEXT416((uint)fVar13), !NAN(fVar14))) {
      auVar12 = ZEXT816(0);
    }
    fVar13 = ABS(fVar13);
    if ((fVar14 == 0.0) && (!NAN(fVar14))) {
      fVar13 = 0.0;
    }
    if ((uint)fVar13 < 0x47800000) {
      if ((uint)fVar13 < 0x38800000) {
        fVar14 = fVar13 + 0.5;
      }
      else {
        fVar13 = (float)((int)fVar13 + 0x8000fff + (uint)(((uint)fVar13 >> 0xd & 1) != 0) >> 0xd);
        fVar14 = fVar13;
      }
    }
    else {
      fVar14 = (float)((0x7f800000 < (uint)fVar13 | 0x3e) << 9);
    }
    iVar10 = movmskps(fVar13,auVar12);
    *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x755a) = (ushort)(iVar10 << 0xf) | SUB42(fVar14,0)
    ;
    lVar5 = FUN_14008e0ae(lVar6);
    if (*(int *)(lVar5 + 0xb4) == 0) {
      lVar5 = FUN_14008e0ae(lVar6);
      fVar13 = *(float *)(lVar5 + 0x60);
      fVar14 = *(float *)(lVar5 + 0x54);
      lVar6 = FUN_14008e0ae(lVar6);
      fVar14 = (fVar13 - fVar14) / *(float *)(lVar6 + 0x30);
      fVar13 = ABS(fVar14);
      if ((uint)fVar13 < 0x47800000) {
        if ((uint)fVar13 < 0x38800000) {
          fVar7 = fVar13 + 0.5;
        }
        else {
          fVar7 = (float)((int)fVar13 + 0x8000fff + (uint)(((uint)fVar13 >> 0xd & 1) != 0) >> 0xd);
          fVar13 = fVar7;
        }
      }
      else {
        fVar7 = (float)((0x7f800000 < (uint)fVar13 | 0x3e) << 9);
      }
      iVar10 = movmskps(fVar13,ZEXT416((uint)fVar14));
      *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x755c) =
           (ushort)(iVar10 << 0xf) | SUB42(fVar7,0);
    }
  }
  else {
    lVar6 = param_1 + 0x2a0;
    cVar4 = FUN_1403ae288(lVar6);
    if (cVar4 != '\0') {
      lVar5 = FUN_14008e0ae(lVar6);
      fVar14 = *(float *)(lVar5 + 0x30) - *(float *)(lVar5 + 0x24);
      fVar13 = (*(float *)(lVar5 + 200) - *(float *)(lVar5 + 0x24)) / fVar14;
      auVar12 = ZEXT416((uint)fVar13);
      if ((fVar14 == 0.0) && (auVar12 = ZEXT416((uint)fVar13), !NAN(fVar14))) {
        auVar12 = ZEXT816(0);
      }
      fVar13 = ABS(fVar13);
      if ((fVar14 == 0.0) && (!NAN(fVar14))) {
        fVar13 = 0.0;
      }
      if ((uint)fVar13 < 0x47800000) {
        if ((uint)fVar13 < 0x38800000) {
          fVar14 = fVar13 + 0.5;
        }
        else {
          fVar13 = (float)((int)fVar13 + 0x8000fff + (uint)(((uint)fVar13 >> 0xd & 1) != 0) >> 0xd);
          fVar14 = fVar13;
        }
      }
      else {
        fVar14 = (float)((0x7f800000 < (uint)fVar13 | 0x3e) << 9);
      }
      iVar10 = movmskps(fVar13,auVar12);
      *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x755a) =
           (ushort)(iVar10 << 0xf) | SUB42(fVar14,0);
      lVar5 = FUN_14008e0ae(lVar6);
      if (*(int *)(lVar5 + 0xb4) == 0) {
        lVar5 = FUN_14008e0ae(lVar6);
        fVar13 = *(float *)(lVar5 + 0x60);
        fVar14 = *(float *)(lVar5 + 0x54);
        lVar6 = FUN_14008e0ae(lVar6);
        fVar14 = (fVar13 - fVar14) / *(float *)(lVar6 + 0x30);
        fVar13 = ABS(fVar14);
        if ((uint)fVar13 < 0x47800000) {
          if ((uint)fVar13 < 0x38800000) {
            fVar7 = fVar13 + 0.5;
          }
          else {
            fVar7 = (float)((int)fVar13 + 0x8000fff + (uint)(((uint)fVar13 >> 0xd & 1) != 0) >> 0xd)
            ;
            fVar13 = fVar7;
          }
        }
        else {
          fVar7 = (float)((0x7f800000 < (uint)fVar13 | 0x3e) << 9);
        }
        iVar10 = movmskps(fVar13,ZEXT416((uint)fVar14));
        *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x755c) =
             (ushort)(iVar10 << 0xf) | SUB42(fVar7,0);
      }
    }
    if (*(int *)(param_1 + 0x2f0) < 1) goto LAB_14142b103;
  }
  lVar6 = *(longlong *)(param_1 + 0x238);
  uVar11 = (uint)*(ushort *)(lVar6 + 0x755c) << 0xd;
  if ((uVar11 & 0xf800000) == 0xf800000) {
    fVar13 = (float)(uVar11 | 0x70000000);
  }
  else if ((uVar11 & 0xf800000) == 0) {
    fVar13 = (float)(uVar11 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar13 = (float)((uVar11 & 0xfffe000) + 0x38000000);
  }
  uVar11 = (uint)*(ushort *)(lVar6 + 0x755a) << 0xd;
  if ((uVar11 & 0xf800000) == 0xf800000) {
    fVar14 = (float)(uVar11 | 0x70000000);
  }
  else if ((uVar11 & 0xf800000) == 0) {
    fVar14 = (float)(uVar11 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar14 = (float)((uVar11 & 0xfffe000) + 0x38000000);
  }
  FUN_1440fd24e(param_1 + 0x1c0,(int)(short)*(ushort *)(lVar6 + 0x755a) & 0x80000000U | (uint)fVar14
                ,(int)(short)*(ushort *)(lVar6 + 0x755c) & 0x80000000U | (uint)fVar13,
                *(byte *)(lVar6 + 0x7559) & 0xf);
LAB_14142b103:
  plVar9 = *(longlong **)(param_1 + 0x238);
  uVar1 = *(ushort *)((longlong)plVar9 + 0x755c);
  uVar11 = (uint)uVar1 << 0xd;
  if ((uVar11 & 0xf800000) == 0xf800000) {
    fVar13 = (float)(uVar11 | 0x70000000);
  }
  else if ((uVar11 & 0xf800000) == 0) {
    fVar13 = (float)(uVar11 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar13 = (float)((uVar11 & 0xfffe000) + 0x38000000);
  }
  uVar2 = *(ushort *)((longlong)plVar9 + 0x755a);
  uVar11 = (uint)uVar2 << 0xd;
  if ((uVar11 & 0xf800000) == 0xf800000) {
    fVar14 = (float)(uVar11 | 0x70000000);
  }
  else if ((uVar11 & 0xf800000) == 0) {
    fVar14 = (float)(uVar11 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar14 = (float)((uVar11 & 0xfffe000) + 0x38000000);
  }
  cVar4 = (**(code **)(*plVar9 + 0x700))();
  if (cVar4 == '\0') {
    return;
  }
  FUN_1440fd24e(param_1 + 0x1a8,(uint)fVar14 | (int)(short)uVar2 & 0x80000000U,
                (uint)fVar13 | (int)(short)uVar1 & 0x80000000U,*(undefined4 *)(param_1 + 0x2f0));
  return;
}



// FUNCTION 14142b33a FUN_14142b33a body=1137 status=ok
// SIG undefined FUN_14142b33a(void)

void FUN_14142b33a(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  byte bVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(&local_58);
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar22 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_1447711aa(param_1,iVar22);
    }
    iVar16 = (int)param_1[5];
    if (iVar16 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar8 = iVar16 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar13 = iVar16 + 1;
    iVar19 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar19 = iVar16;
    }
    if (iVar19 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar13;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar16) {
        if (iVar16 + 0x20U < 0xa0) {
          iVar13 = 0x80;
          iVar8 = iVar16;
        }
        else {
          uVar9 = iVar16 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar9) {
              uVar18 = uVar9;
            }
          }
          else {
            uVar18 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
          }
          uVar15 = FUN_144a3809e(uVar18 << 2,0);
          iVar8 = (int)(uVar15 >> 2);
          iVar13 = -0x20;
          if ((int)uVar9 <= iVar8) {
            iVar13 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar13;
        FUN_1446efbd8(plVar14,iVar8);
        iVar13 = (int)param_1[5] + 1;
      }
      iVar8 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar8 = iVar13;
      }
      *(int *)(param_1 + 5) = iVar13;
      if (iVar13 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar14;
        }
        bVar12 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar8 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar10 = (longlong)iVar22;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar16 & 0x1f;
    puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar19 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar10 = (longlong)iVar22;
    iVar16 = *(int *)(*param_1 + 4 + lVar10 * 0x20);
    *(int *)(param_1 + 6) = iVar16;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x20) = 0xffffffff;
    }
  }
  plVar14 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar14 = (longlong *)param_1[4];
  }
  iVar16 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar16 = iVar22;
  }
  puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar16 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar22 & 0x1f);
  lVar21 = *param_1;
  lVar10 = lVar10 * 0x20;
  puVar2 = (undefined8 *)(lVar21 + lVar10);
  *(longlong *)(lVar21 + lVar10) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar21 + 8 + lVar10) = (undefined4)local_50;
  *(undefined4 *)(lVar21 + 0xc + lVar10) = local_50._4_4_;
  local_50 = 0;
  *(undefined8 *)(lVar21 + 0x10 + lVar10) = param_3;
  *(undefined4 *)(lVar21 + 0x18 + lVar10) = 0xffffffff;
  iVar16 = *(int *)(lVar21 + 8 + lVar10);
  uVar18 = 0;
  uVar9 = iVar16 - 1;
  if (iVar16 == 0) {
    uVar9 = uVar18;
  }
  if (0 < (int)uVar9) {
    if (iVar16 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    else {
      puVar11 = (undefined2 *)*puVar2;
    }
    lVar10 = 0;
    uVar15 = 0;
    do {
      uVar18 = ((uint)(0x19 < (ushort)puVar11[lVar10] - 0x61) * 0x20 + (uint)(ushort)puVar11[lVar10]
               ) - 0x20;
      uVar20 = (uint)(uVar15 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar18) & 0xff) * 4);
      uVar18 = uVar20 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar20 & 0xff ^ uVar18 >> 8 & 0xff) * 4);
      uVar15 = (ulonglong)uVar18;
      lVar10 = lVar10 + 1;
    } while (uVar9 != (uint)lVar10);
  }
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar9 != 0) && (uVar9 != 1)) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & uVar18) * 4);
    if (iVar16 != -1) {
      lVar10 = *param_1;
      do {
        lVar21 = (longlong)iVar16 * 0x20;
        iVar16 = *(int *)(lVar10 + 8 + lVar21);
        if (iVar16 == *(int *)(puVar2 + 1)) {
          if (1 < iVar16) {
            iVar16 = FUN_144a80a00(*(undefined8 *)(lVar10 + lVar21),*puVar2);
            lVar10 = *param_1;
            if (iVar16 != 0) goto LAB_14142b52a;
          }
LAB_14142b679:
          puVar3 = (undefined4 *)(lVar10 + lVar21);
          if (*(longlong *)(lVar10 + lVar21) != 0) {
            FUN_1400020a8();
          }
          uVar4 = *(undefined4 *)puVar2;
          uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
          uVar6 = *(undefined4 *)(puVar2 + 1);
          uVar7 = *(undefined4 *)((longlong)puVar2 + 0xc);
          *(undefined8 *)(puVar3 + 4) = puVar2[2];
          *puVar3 = uVar4;
          puVar3[1] = uVar5;
          puVar3[2] = uVar6;
          puVar3[3] = uVar7;
          FUN_1467ff68c(param_1,iVar22);
          goto LAB_14142b5af;
        }
        if (*(int *)(puVar2 + 1) + iVar16 == 1) goto LAB_14142b679;
LAB_14142b52a:
        iVar16 = *(int *)(lVar10 + 0x18 + lVar21);
      } while (iVar16 != -1);
      uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    }
  }
  if (uVar9 < 4) {
    iVar16 = 1;
  }
  else {
    uVar15 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
    lVar10 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar16 = 1 << ((byte)lVar10 & 0x1f);
  }
  if (((int)uVar9 < 1) || (iVar16 <= (int)param_1[9])) {
    uVar18 = (int)param_1[9] - 1U & uVar18;
    *(uint *)((longlong)puVar2 + 0x1c) = uVar18;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 3) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4) =
         iVar22;
  }
  else {
    *(int *)(param_1 + 9) = iVar16;
    FUN_14142b7ac(param_1);
  }
LAB_14142b5af:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  iVar22 = (int)param_1[0xb];
  *(uint *)(param_1 + 0xb) = iVar22 + 1U;
  if (*(uint *)((longlong)param_1 + 0x5c) < iVar22 + 1U) {
    FUN_1459bb7ec(param_1 + 10,iVar22);
  }
  *(undefined8 *)(param_1[10] + (longlong)iVar22 * 8) = param_3;
  *param_4 = *param_4 + 1;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142b7ac FUN_14142b7ac body=714 status=ok
// SIG undefined FUN_14142b7ac(void)

void FUN_14142b7ac(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 & 0xffffffff;
      uVar16 = local_68 >> 0x20;
    }
    uVar14 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_7c = iVar11;
        local_70 = uVar10;
        puVar2 = (undefined8 *)(*param_1 + (longlong)iVar17 * 0x20);
        iVar11 = *(int *)(*param_1 + 8 + (longlong)iVar17 * 0x20);
        iVar4 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar4 = 0;
        }
        uVar5 = 0;
        if (0 < iVar4) {
          puVar15 = &DAT_149dfb77a;
          if (iVar11 != 0) {
            puVar15 = (undefined2 *)*puVar2;
          }
          lVar12 = 0;
          uVar5 = 0;
          do {
            uVar6 = ((uint)(ushort)puVar15[lVar12] +
                    (uint)(0x19 < (ushort)puVar15[lVar12] - 0x61) * 0x20) - 0x20;
            uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar5 ^ uVar6) & 0xff) * 4)
            ;
            uVar5 = uVar5 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
            lVar12 = lVar12 + 1;
          } while (iVar4 != (int)lVar12);
        }
        uVar10 = (longlong)(int)uVar5 & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar10;
        *(int *)((longlong)puVar2 + 0x1c) = iVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar2 + 3) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar14 = uVar14 & ~(uint)uVar16;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar4 = (int)local_60[3];
        iVar17 = (int)local_70;
        lVar12 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar14;
        uVar10 = local_70;
        iVar11 = local_7c;
        local_78 = local_60;
        if (uVar5 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar17) {
            iVar9 = iVar17;
          }
          if (iVar8 <= iVar17) break;
          lVar13 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar7 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar9 - lVar12 == lVar13) goto LAB_14142ba38;
          }
          uVar14 = 0xffffffff;
          uVar10 = (ulonglong)(iVar17 + (int)lVar13 + 1);
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar17 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar4);
    }
  }
LAB_14142ba38:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142ba78 FUN_14142ba78 body=286 status=ok
// SIG undefined FUN_14142ba78(void)

undefined8 FUN_14142ba78(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14142bb90;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14142bb90;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14142bb90:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14142bb3d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_14142bb3d;
    }
  }
  uVar6 = 0;
LAB_14142bb3d:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14142bb98 FUN_14142bb98 body=580 status=ok
// SIG undefined FUN_14142bb98(void)

void FUN_14142bb98(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  longlong local_80 [7];
  code *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = FUN_1400d7050(param_1 + 6);
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_a0 = &local_48;
      local_48 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1459f2e4c;
      local_a8 = &LAB_148c39de3;
      local_b0 = &LAB_1457a9eb2;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      cVar1 = FUN_140426394(lVar2 + 0xd98,&DAT_14cbd9500);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FUN_14140fc00(param_1);
        lVar2 = *plVar3;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x130));
        *(int *)(lVar2 + 0x128) = *(int *)(lVar2 + 0x128) + 1;
        FUN_1407b25f0(lVar2 + 0x50);
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          if ((longlong)*(int *)(lVar2 + 0x68) != 0) {
            lVar4 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0x60) + lVar4) == 0) goto LAB_14142bd0a;
              lVar4 = lVar4 + 8;
            } while ((longlong)*(int *)(lVar2 + 0x68) * 8 != lVar4);
          }
          lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
          if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
            lVar4 = FUN_1400d6ce6();
            if (lVar4 != 0) {
              local_48 = (code *)0x0;
              uStack_40 = 0;
              FUN_140baf362(lVar2 + 0x50,&local_48,0);
              FUN_1411bd35e(lVar4,local_80,&local_48,&DAT_14cbe4638);
              if (local_80[0] != 0) {
                FUN_1400020a8();
              }
              if (local_48 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
LAB_14142bd0a:
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x130));
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


