// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1457d8382 FUN_1457d8382 body=60 status=ok
// SIG undefined FUN_1457d8382(void)

undefined8 FUN_1457d8382(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_2 + 8);
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar2 + 0x1c0))) {
      uVar3 = FUN_140f9b9fa((ulonglong)uVar1 * 0x1e8 + *(longlong *)(lVar2 + 0x1b8),
                            *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                            *(undefined4 *)(param_2 + 0x14));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1457d83be FUN_1457d83be body=132 status=ok
// SIG undefined FUN_1457d83be(void)

void FUN_1457d83be(longlong param_1,int param_2)

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



// FUNCTION 1457d8442 FUN_1457d8442 body=116 status=ok
// SIG undefined FUN_1457d8442(void)

void FUN_1457d8442(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1e8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x1e8)) {
      uVar2 = uVar1 / 0x1e8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1e8,8);
  }
  return;
}



// FUNCTION 1457d84b6 FUN_1457d84b6 body=884 status=ok
// SIG undefined FUN_1457d84b6(void)

void FUN_1457d84b6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *_Src;
  undefined8 *_Src_00;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  void *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar3 != 0) {
    local_38 = (undefined8 *)0x0;
    _Src = (void *)*param_2;
    local_30 = uVar3;
    FUN_140c19d4e(&local_38,uVar3,0);
    memcpy(local_38,_Src,(longlong)(int)uVar3 << 3);
    uVar10 = (ulonglong)local_30;
    local_30 = local_30 + 1;
    if (local_2c < local_30) {
      FUN_1403de658(&local_38,uVar10);
    }
    puVar7 = local_38;
    memmove(local_38 + 1,local_38,uVar10 << 3);
    _Src_00 = local_38;
    *puVar7 = DAT_14cbcaf98;
    local_58 = (void *)0x0;
    lVar11 = (longlong)(int)local_30;
    local_50._0_4_ = local_30;
    local_50._0_4_ = local_30;
    if (lVar11 == 0) {
      local_50._4_4_ = 0;
    }
    else {
      FUN_140c19d4e(&local_58,local_30,0);
      memcpy(local_58,_Src_00,lVar11 << 3);
    }
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,4,0x10);
    local_40 = 4;
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_1457d8737:
      *local_48 = &PTR_LAB_14b40e8d0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_48[2] = lVar12;
      *local_48 = &PTR_FUN_14b9d36d0;
      local_48[3] = 0;
      local_48[4] = 0;
      bVar13 = true;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar9[1];
      do {
        if (iVar5 == 0) goto LAB_1457d8737;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar13 = iVar5 == iVar4;
        if (bVar13) {
          *(int *)(plVar9 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar13);
      uVar6 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      *local_48 = &PTR_LAB_14b40e8d0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_48[2] = lVar12;
      *local_48 = &PTR_FUN_14b9d36d0;
      local_48[3] = uVar6;
      local_48[4] = plVar9;
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      bVar13 = false;
    }
    local_48[5] = local_58;
    local_58 = (void *)0x0;
    *(uint *)(local_48 + 6) = (uint)local_50;
    *(undefined4 *)((longlong)local_48 + 0x34) = local_50._4_4_;
    local_50 = 0;
    if (!bVar13) {
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
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar6 = FUN_14001cc68(0x68,0x10);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar7 = &DAT_14c9a1308;
    }
    else {
      puVar7 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2618);
    }
    uVar8 = FUN_144a7cdd6(puVar7,0);
    FUN_1446ddc76(&local_58,uVar8,1);
    local_68 = &local_48;
    FUN_1457d882c(uVar6,param_1 + 0x30,param_1 + 0x18,&local_58);
    FUN_140391314(param_1,uVar6);
    FUN_1449db362(&local_48);
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d882c FUN_1457d882c body=204 status=ok
// SIG undefined FUN_1457d882c(void)

undefined8 *
FUN_1457d882c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9cd3a0;
  FUN_1446ddc76(&local_48,"UpdateStandIn",1);
  FUN_14039176c(param_1,*param_2,local_48,1);
  *param_1 = &PTR_FUN_14b9cd3a0;
  param_1[7] = DAT_14cbe0120;
  param_1[8] = *param_3;
  param_1[9] = *param_4;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_145989806(param_1 + 10,param_5);
  *(undefined1 *)(param_1 + 0xc) = 1;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d88fa FUN_1457d88fa body=66 status=ok
// SIG undefined FUN_1457d88fa(void)

longlong FUN_1457d88fa(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457d893c FUN_1457d893c body=539 status=ok
// SIG undefined FUN_1457d893c(void)

void FUN_1457d893c(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  undefined *local_68;
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
  if (DAT_14cac9f08 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cac9f08,0,0,4);
  }
  uVar6 = DAT_14cac9f10;
  uVar1 = local_50;
  if (DAT_14cac9f10 != 0) {
    uVar5 = 0;
    FUN_145cfbc50(&DAT_14cac9f00,0,DAT_14cac9f10,4);
    if (0 < (int)uVar6) {
      do {
        puVar3 = DAT_14cac9f08;
        if (DAT_14cac9f08 == (undefined *)0x0) {
          puVar3 = &DAT_14cac9f00;
        }
        *(undefined4 *)(puVar3 + (ulonglong)(DAT_14cac9f10 + 0x7fffffff & uVar5) * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cac9ee0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cac9ef0 != 0) {
      FUN_144a81a4c(&local_40);
    }
    local_68 = &DAT_14cac9d50;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar1 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x10)) {
      iVar2 = local_50._4_4_;
      local_50 = uVar1;
      do {
        puVar3 = *(undefined **)(local_68 + 0x180);
        if (*(undefined **)(local_68 + 0x180) == (undefined *)0x0) {
          puVar3 = local_68;
        }
        lVar4 = (longlong)iVar2 * 0x60;
        uVar6 = ((uint)(*(ulonglong *)(puVar3 + lVar4) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(puVar3 + lVar4) >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar6 >> 0x10 ^ uVar6) & (longlong)(int)DAT_14cac9f10 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(puVar3 + lVar4 + 0x5c) = iVar8;
        puVar7 = DAT_14cac9f08;
        if (DAT_14cac9f08 == (undefined *)0x0) {
          puVar7 = &DAT_14cac9f00;
        }
        *(undefined4 *)(puVar3 + lVar4 + 0x58) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14cac9f10 - 1U & uVar9) * 4);
        puVar3 = DAT_14cac9f08;
        if (DAT_14cac9f08 == (undefined *)0x0) {
          puVar3 = &DAT_14cac9f00;
        }
        *(int *)(puVar3 + ((longlong)iVar8 & (longlong)(int)DAT_14cac9f10 - 1U) * 4) = iVar2;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_144a81a4c(&local_60);
        iVar2 = local_50._4_4_;
        uVar1 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x10));
    }
  }
  local_50 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d8b58 FUN_1457d8b58 body=29 status=ok
// SIG undefined FUN_1457d8b58(void)

void FUN_1457d8b58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1844a8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 1457d8b76 FUN_1457d8b76 body=132 status=ok
// SIG undefined FUN_1457d8b76(void)

void FUN_1457d8b76(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457d8bfa FUN_1457d8bfa body=59 status=ok
// SIG undefined FUN_1457d8bfa(void)

longlong FUN_1457d8bfa(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457d8dcc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x34 + *param_1;
  FUN_1457d8c35(lVar2);
  return lVar2;
}



// FUNCTION 1457d8c35 FUN_1457d8c35 body=22 status=ok
// SIG undefined FUN_1457d8c35(void)

void FUN_1457d8c35(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 1457d8c4c FUN_1457d8c4c body=63 status=ok
// SIG undefined FUN_1457d8c4c(void)

longlong FUN_1457d8c4c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457d8e5c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_1457d8c8b(lVar2);
  return lVar2;
}



// FUNCTION 1457d8c8b FUN_1457d8c8b body=24 status=ok
// SIG undefined FUN_1457d8c8b(void)

void FUN_1457d8c8b(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 1457d8ca4 FUN_1457d8ca4 body=226 status=ok
// SIG undefined FUN_1457d8ca4(void)

void FUN_1457d8ca4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  void *_Dst;
  longlong *plVar5;
  
  FUN_1457d8d86();
  uVar4 = FUN_140f9f418();
  *(undefined8 *)(param_1 + 8) = uVar4;
  _Dst = (void *)FUN_14001cc68(0x90);
  memset(_Dst,0,0x90);
  *(undefined8 *)((longlong)_Dst + 0x4c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x7c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x84) = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b412500;
  plVar5[2] = (longlong)_Dst;
  *(void **)(param_1 + 0x10) = _Dst;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar5 == plVar3) {
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 0x18) = plVar5;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) {
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



// FUNCTION 1457d8d86 FUN_1457d8d86 body=70 status=ok
// SIG undefined FUN_1457d8d86(void)

void FUN_1457d8d86(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001457d8dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457d8dcc FUN_1457d8dcc body=143 status=ok
// SIG undefined FUN_1457d8dcc(void)

void FUN_1457d8dcc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x34,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x34)) {
      uVar5 = uVar4 / 0x34 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x34,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457d8e5c FUN_1457d8e5c body=147 status=ok
// SIG undefined FUN_1457d8e5c(void)

void FUN_1457d8e5c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1457d8ef0 FUN_1457d8ef0 body=109 status=ok
// SIG undefined FUN_1457d8ef0(void)

void FUN_1457d8ef0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 1457d8f5e FUN_1457d8f5e body=125 status=ok
// SIG undefined FUN_1457d8f5e(void)

void FUN_1457d8f5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d8fdc FUN_1457d8fdc body=188 status=ok
// SIG undefined FUN_1457d8fdc(void)

undefined8 * FUN_1457d8fdc(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb949c0) {
    FUN_144b3d300(&DAT_14cb949c0);
    if (DAT_14cb949c0 == -1) {
      builtin_wcsncpy(local_38,L"OnSwitchModeStarted",0x14);
      FUN_1446f470e(&DAT_14cb949b8,local_38,1);
      _Init_thread_footer(&DAT_14cb949c0);
    }
  }
  *param_1 = DAT_14cb949b8;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d909a FUN_1457d909a body=148 status=ok
// SIG undefined FUN_1457d909a(void)

bool FUN_1457d909a(longlong param_1)

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



// FUNCTION 1457d9130 FUN_1457d9130 body=249 status=ok
// SIG undefined FUN_1457d9130(void)

void FUN_1457d9130(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_1447210f0();
  FUN_1404d1e78(&local_30,uVar5);
  if (((local_30 != 0) && (local_28 != (longlong *)0x0)) && (0 < (int)local_28[1])) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar8 = local_28;
    } while (!bVar9);
    lVar7 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar7 = local_30;
    }
    lVar6 = FUN_14479d2ce(lVar7 + 0x228);
    if ((lVar6 == 0) && (lVar6 = FUN_14479d2ce(lVar7 + 0x238), lVar6 == param_1)) {
      FUN_1457d922a(lVar7,*(undefined4 *)(lVar7 + 500),0);
    }
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
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_28 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d922a FUN_1457d922a body=457 status=ok
// SIG undefined FUN_1457d922a(void)

void FUN_1457d922a(longlong param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x200) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
  }
  *(undefined4 *)(param_1 + 0x248) = 0xbf800000;
  FUN_140fa15fa(param_1 + 0x30,param_2,0);
  if (param_3 != '\0') {
    plVar3 = (longlong *)(param_1 + 0x120);
    lVar4 = param_1 + 0x130;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    uStack_58 = 0;
    uStack_68 = lVar4;
    if (*(int *)(param_1 + 0x148) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      iVar8 = *(int *)(param_1 + 0x148);
    }
    local_90 = (undefined4)local_70;
    uStack_8c = local_70._4_4_;
    uStack_88 = (undefined4)uStack_68;
    uStack_84 = uStack_68._4_4_;
    uStack_78 = CONCAT44(uStack_54,uStack_58);
    local_80 = local_60;
    uVar5 = local_80;
    local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    iVar7 = local_80._4_4_;
    local_98 = plVar3;
    if ((local_80._4_4_ != iVar8) || (local_80 = local_60, uStack_68 != lVar4)) {
      do {
        local_80 = uVar5;
        uVar5 = *(undefined8 *)(*local_98 + 8 + (longlong)iVar7 * 0x20);
        plVar6 = *(longlong **)(*local_98 + 0x10 + (longlong)iVar7 * 0x20);
        if (plVar6 == (longlong *)0x0) {
          FUN_140fa0ba0(uVar5,param_2);
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          FUN_140fa0ba0(uVar5,param_2);
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
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
        FUN_1449c0562(&local_90);
        iVar7 = local_80._4_4_;
        uVar5 = local_80;
      } while (local_98 != plVar3 ||
               (CONCAT44(uStack_84,uStack_88) != lVar4 || local_80._4_4_ != iVar8));
    }
  }
  FUN_1404d222a(param_1,param_2,0);
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457d93f4 FUN_1457d93f4 body=153 status=ok
// SIG undefined FUN_1457d93f4(void)

void FUN_1457d93f4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_28 = *param_2;
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1457d949e(param_1 + 0x90,&local_28);
  }
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



// FUNCTION 1457d949e FUN_1457d949e body=134 status=ok
// SIG undefined FUN_1457d949e(void)

void FUN_1457d949e(undefined8 param_1,undefined8 *param_2)

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
  FUN_1457d9536(param_1,&local_28);
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



// FUNCTION 1457d9536 FUN_1457d9536 body=289 status=ok
// SIG undefined FUN_1457d9536(void)

void FUN_1457d9536(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar3 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
  }
  else {
    bVar8 = false;
    do {
      lVar10 = uVar7 * 0x10 + -8;
      uVar9 = uVar7;
      while ((*(int *)(*param_1 + lVar10) != 0 &&
             (plVar4 = *(longlong **)(*param_1 + -8 + lVar10), plVar4 != (longlong *)0x0))) {
        local_50 = *param_2;
        local_48 = param_2[1];
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,&local_50,param_3);
        if (cVar6 == '\0') break;
        lVar10 = lVar10 + -0x10;
        bVar5 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar5) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (!bVar8) goto LAB_1457d95e4;
          goto LAB_1457d9633;
        }
      }
      uVar7 = uVar9 - 1;
      bVar8 = true;
    } while (1 < uVar9);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1457d9633:
    FUN_14474d06a(param_1,0);
  }
LAB_1457d95e4:
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d9658 FUN_1457d9658 body=136 status=ok
// SIG undefined FUN_1457d9658(void)

undefined8 FUN_1457d9658(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x18);
  pcVar5 = *(code **)(param_1 + 0x20);
  local_20 = *param_2;
  local_18 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(iVar3 + lVar4);
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d96e2 FUN_1457d96e2 body=276 status=ok
// SIG undefined FUN_1457d96e2(void)

ulonglong FUN_1457d96e2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined7 uVar11;
  
  lVar7 = DAT_14cb54378;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0xc60) == 0x40000002) {
    uVar9 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar9 = (ulonglong)(bVar4 ^ 1);
  }
  lVar3 = DAT_14cb54378;
  if (*(int *)(lVar7 + uVar9 * 4) == 1) {
    uVar9 = 1;
  }
  else {
    if (*(int *)(lVar2 + 0xc60) == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar9 = (ulonglong)(bVar4 ^ 1);
    }
    iVar1 = *(int *)(lVar3 + uVar9 * 4);
    lVar2 = param_1 + 0x238;
    lVar7 = FUN_14479d2ce(lVar2);
    if (lVar7 == 0) {
      bVar4 = 0;
      uVar11 = 0;
    }
    else {
      lVar7 = FUN_14479d2ce(lVar2);
      bVar4 = *(byte *)(lVar7 + 0x48c);
      uVar11 = (undefined7)((ulonglong)lVar2 >> 8);
    }
    bVar6 = 1;
    if ((*(int *)(param_1 + 0x360) != 0) && (*(longlong **)(param_1 + 0x358) != (longlong *)0x0)) {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x358) + 0x30))();
      if (cVar5 != '\0') {
        uVar8 = FUN_14479d2ce();
        if (*(int *)(param_1 + 0x360) == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = *(longlong **)(param_1 + 0x358);
        }
        bVar6 = (**(code **)(*plVar10 + 0x58))(plVar10,uVar8);
      }
    }
    uVar9 = 0;
    if ((iVar1 != 0) && (*(char *)(param_1 + 0x3c8) != '\0')) {
      uVar9 = CONCAT71(uVar11,bVar4 & bVar6) & 0xffffffff;
    }
  }
  return uVar9;
}



// FUNCTION 1457d97f6 FUN_1457d97f6 body=147 status=ok
// SIG undefined FUN_1457d97f6(void)

void FUN_1457d97f6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457d988a FUN_1457d988a body=67 status=ok
// SIG undefined FUN_1457d988a(void)

undefined8 * FUN_1457d988a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9076f0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fa3ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457d98ce FUN_1457d98ce body=93 status=ok
// SIG undefined FUN_1457d98ce(void)

void FUN_1457d98ce(void)

{
  FUN_1457d998c();
  DAT_14cab2a10 = 0;
  if (DAT_14cab2a08 != 0) {
    FUN_1400020a8();
  }
  FUN_145808238(&DAT_14cab29c8);
  FUN_140fa524f(DAT_14cab29b8,DAT_14cab29c0);
  if (DAT_14cab29b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457d992c FUN_1457d992c body=31 status=ok
// SIG undefined FUN_1457d992c(void)

undefined8 FUN_1457d992c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457d994c FUN_1457d994c body=31 status=ok
// SIG undefined FUN_1457d994c(void)

undefined8 FUN_1457d994c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457d996c FUN_1457d996c body=31 status=ok
// SIG undefined FUN_1457d996c(void)

undefined8 FUN_1457d996c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457d998c FUN_1457d998c body=90 status=ok
// SIG undefined FUN_1457d998c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457d998c(void)

{
  if (DAT_14cab2ab8 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cab2ab0 = 0;
  if (DAT_14cab2aa8 != 0) {
    FUN_1400020a8();
  }
  FUN_1457d99e6();
  _DAT_14cab2a60 = 0;
  if (DAT_14cab2a58 != 0) {
    FUN_1400020a8();
  }
  FUN_1457d9a1c();
  return;
}



// FUNCTION 1457d99e6 FUN_1457d99e6 body=54 status=ok
// SIG undefined FUN_1457d99e6(void)

void FUN_1457d99e6(void)

{
  FUN_1457d9a52();
  if (DAT_14cab2a88 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab2a68 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457d9a1c FUN_1457d9a1c body=54 status=ok
// SIG undefined FUN_1457d9a1c(void)

void FUN_1457d9a1c(void)

{
  FUN_140fa5328();
  if (DAT_14cab2a38 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab2a18 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457d9a52 FUN_1457d9a52 body=369 status=ok
// SIG undefined FUN_1457d9a52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457d9a52(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14cab2a78;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14cab2a90 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14cab2a68;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      lVar1 = *local_60;
      lVar2 = (longlong)iStack_44;
      FUN_140fa52b4(lVar1 + lVar2 * 0x88 + 0x58);
      FUN_140fa52b4(lVar1 + lVar2 * 0x88 + 0x30);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  _DAT_14cab2a70 = 0;
  if (DAT_14cab2a74 != 0) {
    FUN_144a544ac(&DAT_14cab2a68,0);
  }
  _DAT_14cab2a98 = 0xffffffff;
  DAT_14cab2a90 = 0;
  if (0x80 < DAT_14cab2a94) {
    DAT_14cab2a94 = 0x80;
    FUN_1446efbd8(&DAT_14cab2a78,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d9bc4 FUN_1457d9bc4 body=29 status=ok
// SIG undefined FUN_1457d9bc4(void)

undefined8 FUN_1457d9bc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457d9be2 FUN_1457d9be2 body=154 status=ok
// SIG undefined FUN_1457d9be2(void)

bool FUN_1457d9be2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d9c7e FUN_1457d9c7e body=125 status=ok
// SIG undefined FUN_1457d9c7e(void)

void FUN_1457d9c7e(char *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 == '\x05') {
    FUN_1405d58a8(param_1 + 8,local_28);
    if (local_28[0] != '\x01') {
      FUN_140321d1a(local_28);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_1457d9faa(param_1,param_2);
  return;
}



// FUNCTION 1457d9d06 FUN_1457d9d06 body=267 status=ok
// SIG undefined FUN_1457d9d06(void)

undefined4 * FUN_1457d9d06(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1457d9ec4(param_1,local_48);
  FUN_1447a97f4(local_40,*param_4);
  *(undefined8 *)(local_40 + 0x28) = 0;
  *(undefined8 *)(local_40 + 0x30) = 0;
  *(undefined4 *)(local_40 + 0x38) = 0xffffffff;
  cVar1 = FUN_1457d9e12(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x3c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x38) =
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
      FUN_1457da254(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457d9e12 FUN_1457d9e12 body=177 status=ok
// SIG undefined FUN_1457d9e12(void)

undefined8 FUN_1457d9e12(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          if (*(longlong *)(piVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148d37b0a(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 1457d9ec4 FUN_1457d9ec4 body=230 status=ok
// SIG undefined FUN_1457d9ec4(void)

int * FUN_1457d9ec4(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1457d9faa FUN_1457d9faa body=680 status=ok
// SIG undefined FUN_1457d9faa(void)

undefined4 FUN_1457d9faa(undefined1 *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined7 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  longlong local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88 = DAT_14cb88980;
  local_90 = DAT_14cb88978;
  uVar2 = 0;
  local_e8 = param_1;
  local_e0 = param_2;
  if (*(int *)(param_1 + 0x20) == 0x2001) {
    local_d0 = (uint)*(undefined8 *)(param_1 + 0x18);
    uStack_cc = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    FUN_1401533ba(&local_80,&local_d0,1);
    uVar7 = local_78;
    uVar5 = local_7c;
    uVar6 = local_80;
    local_9c = local_80;
    local_98 = local_7c;
    local_94 = local_78;
    FUN_1448075d0(&local_80);
    lVar3 = FUN_14060eaf6(&local_80);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (lVar3 == 0) {
      local_7c = 0;
      local_80 = 0;
    }
    else {
      FUN_140fa600a(lVar3,&local_80);
      uVar2 = local_78;
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) == 0x2000) {
      local_d0 = (uint)*(undefined8 *)(param_1 + 0x18);
      uStack_cc = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
      FUN_1401533ba(&local_80,&local_d0,1);
      uVar2 = local_78;
    }
    else {
      local_7c = 0;
      local_80 = 0;
    }
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  FUN_144928b90(&local_80,10);
  local_a8 = local_80;
  local_a4 = local_7c;
  local_a0 = uVar2;
  FUN_140fa5fd4(&local_80);
  local_b4 = uVar6;
  local_b0 = uVar5;
  local_ac = uVar7;
  FUN_140fa5ff8(&local_80);
  local_b8 = local_88;
  local_c0 = local_90;
  FUN_140fa5fe6(&local_80);
  FUN_140fa5fd2(&local_80);
  local_d0 = local_d0 & 0xffffff00;
  uStack_cc = 0;
  uStack_c8 = 0;
  local_c4 = 0;
  if (local_e0 != 0) {
    FUN_14039fc7b(&local_80,&local_d0,local_e0,0);
  }
  uVar4 = (undefined7)((ulonglong)&local_80 >> 8);
  if (*(int *)(local_e8 + 0x20) == 0x2001) {
    uVar1 = *local_e8;
    if ((char)local_d0 == '\x03') {
      local_d8 = CONCAT44(uStack_c8,uStack_cc);
    }
    else {
      FUN_14883d81c(&local_d0,&local_d8);
    }
    uVar2 = FUN_140f71df2(&local_d8,CONCAT71(uVar4,uVar1) & 0xffffffff);
  }
  else if (*(int *)(local_e8 + 0x20) == 0x2000) {
    uVar1 = *local_e8;
    if ((char)local_d0 == '\x03') {
      local_d8 = CONCAT44(uStack_c8,uStack_cc);
    }
    else {
      FUN_14883d81c(&local_d0,&local_d8);
    }
    uVar2 = FUN_140f71e44(&local_d8,CONCAT71(uVar4,uVar1) & 0xffffffff);
  }
  else {
    uVar2 = 0;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1457da254 FUN_1457da254 body=431 status=ok
// SIG undefined FUN_1457da254(void)

void FUN_1457da254(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 1457da412 FUN_1457da412 body=62 status=ok
// SIG undefined FUN_1457da412(void)

void FUN_1457da412(longlong param_1)

{
  FUN_140fa7976();
  if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
    FUN_140fa763e(param_1 + 0x390);
    FUN_140fa7784(param_1 + 0x390);
    return;
  }
  return;
}



// FUNCTION 1457da450 FUN_1457da450 body=60 status=ok
// SIG undefined FUN_1457da450(void)

void FUN_1457da450(longlong param_1)

{
  FUN_140fa8476();
  if (*(longlong *)(param_1 + 0x1830) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1800) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457da48c FUN_1457da48c body=148 status=ok
// SIG undefined FUN_1457da48c(void)

void FUN_1457da48c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 0x100, 0x100 < param_2)) {
    uVar1 = (longlong)(int)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0);
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x180c)) {
    return;
  }
  *(int *)(param_1 + 0x180c) = (int)uVar2;
  FUN_1457da520(param_1,*(undefined4 *)(param_1 + 0x1808),uVar2,0x18);
  return;
}



// FUNCTION 1457da520 FUN_1457da520 body=152 status=ok
// SIG undefined FUN_1457da520(void)

void FUN_1457da520(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1800);
  if ((uint)param_3 < 0x101) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1800,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x1800),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1800,param_2,param_3,param_4);
  return;
}



// FUNCTION 1457da5b8 FUN_1457da5b8 body=125 status=ok
// SIG undefined FUN_1457da5b8(void)

int FUN_1457da5b8(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140fa9382(param_1,iVar1);
  }
  lVar3 = (longlong)param_3 * 0x20;
  memmove((void *)(*param_1 + lVar3 + 0x20),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_3) << 5);
  lVar2 = *param_1;
  FUN_140fa931c(lVar2 + lVar3,param_2);
  *(undefined4 *)(lVar2 + 0x18 + lVar3) = *(undefined4 *)(param_2 + 0x18);
  return param_3;
}



// FUNCTION 1457da636 FUN_1457da636 body=45 status=ok
// SIG undefined FUN_1457da636(void)

void FUN_1457da636(longlong param_1)

{
  FUN_1405f1eac();
  thunk_FUN_1405f85e0(param_1 + 0x450);
  FUN_1401b3e2a(param_1 + 0x960);
  return;
}



// FUNCTION 1457da664 FUN_1457da664 body=146 status=ok
// SIG undefined FUN_1457da664(void)

void FUN_1457da664(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1457da736 FUN_1457da736 body=161 status=ok
// SIG undefined FUN_1457da736(void)

undefined8 FUN_1457da736(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0xc;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xc,4);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if (0 < (int)(uVar3 / 0xc)) {
    uVar4 = uVar3 / 0xc & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xc,4);
  }
  return uVar2;
}



// FUNCTION 1457da7d8 FUN_1457da7d8 body=111 status=ok
// SIG undefined FUN_1457da7d8(void)

void FUN_1457da7d8(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 unaff_RBX;
  
  cVar5 = FUN_144729dda(param_1 + 0x48);
  if (cVar5 != '\0') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    uVar4 = FUN_14479d2ce(param_1 + 0x48);
    FUN_1406f39a0(uVar4,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                                 9.99999905104687e-09 <=
                                 dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2) & 0xffffffff,1);
    return;
  }
  return;
}



// FUNCTION 1457da84e FUN_1457da84e body=132 status=ok
// SIG undefined FUN_1457da84e(void)

void FUN_1457da84e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457da8d4 FUN_1457da8d4 body=276 status=ok
// SIG undefined FUN_1457da8d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457da8d4(void)

{
  FUN_1457da9e8();
  _DAT_14caa0a60 = L"BaseIndex";
  DAT_14caa0a8a = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14caa0a68 = &DAT_14ca84cb0;
  _DAT_14caa0a78 = &LAB_14682652b;
  _DAT_14caa0a80 = 0x100000000;
  _DAT_14caa0a88 = 0;
  _DAT_14caa0a70 = DAT_14ca9eed8;
  DAT_14ca9eed8 = &DAT_14caa0a60;
  return;
}



// FUNCTION 1457da9e8 FUN_1457da9e8 body=275 status=ok
// SIG undefined FUN_1457da9e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457da9e8(void)

{
  FUN_1457daafc();
  _DAT_14caa0a90 = L"NumResources";
  DAT_14caa0aba = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caa0a98 = &DAT_14ca76fe8;
  _DAT_14caa0aa8 = &LAB_14682652b;
  _DAT_14caa0ab0 = &DAT_100000002;
  _DAT_14caa0ab8 = 0;
  _DAT_14caa0aa0 = DAT_14ca9eed8;
  DAT_14ca9eed8 = &DAT_14caa0a90;
  return;
}



// FUNCTION 1457daafc FUN_1457daafc body=270 status=ok
// SIG undefined FUN_1457daafc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457daafc(void)

{
  _DAT_14caa0ac0 = L"Type";
  DAT_14caa0aea = FUN_140850cc5();
  if ((DAT_14ca9a3c7 & 2) == 0) {
    DAT_14ca9a3c7 = DAT_14ca9a3c7 | 3;
    _DAT_14ca9a368 = L"EShaderParameterType";
    _DAT_14ca9a380 = &LAB_14743871c;
    _DAT_14ca9a388 = &LAB_147438728;
    _DAT_14ca9a390 = &LAB_147438734;
    _DAT_14ca9a398 = &LAB_14322d698;
    _DAT_14ca9a3a0 = &LAB_14743873a;
    _DAT_14ca9a378 = &LAB_147438740;
    _DAT_14ca9a3b8 = &DAT_100000001;
    _DAT_14ca9a3c0 = 1;
    DAT_14ca9a3c4 = 0;
  }
  _DAT_14caa0ac8 = &DAT_14ca9a360;
  _DAT_14caa0ad8 = &LAB_14682652b;
  _DAT_14caa0ae0 = &DAT_100000003;
  _DAT_14caa0ae8 = 0;
  _DAT_14caa0ad0 = DAT_14ca9eed8;
  DAT_14ca9eed8 = &DAT_14caa0ac0;
  return;
}



// FUNCTION 1457dac2c FUN_1457dac2c body=12 status=ok
// SIG undefined FUN_1457dac2c(void)

void FUN_1457dac2c(longlong param_1)

{
  FUN_1411ea90c(param_1,param_1 + 0xa0);
  return;
}



// FUNCTION 1457dac38 FUN_1457dac38 body=72 status=ok
// SIG undefined FUN_1457dac38(void)

void FUN_1457dac38(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xd08))) {
    uVar3 = 1 << ((byte)param_2 & 0x1f);
    lVar1 = param_1 + 0xcf0;
    if (*(longlong *)(param_1 + 0xd00) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xd00);
    }
    uVar2 = (ulonglong)(param_2 >> 5);
    if (param_3 == '\0') {
      uVar3 = uVar3 | *(uint *)(lVar1 + uVar2 * 4);
    }
    else {
      uVar3 = ~uVar3 & *(uint *)(lVar1 + uVar2 * 4);
    }
    *(uint *)(lVar1 + uVar2 * 4) = uVar3;
  }
  return;
}



// FUNCTION 1457dac80 FUN_1457dac80 body=73 status=ok
// SIG undefined FUN_1457dac80(void)

void FUN_1457dac80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 1457dacca FUN_1457dacca body=120 status=ok
// SIG undefined FUN_1457dacca(void)

void FUN_1457dacca(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  undefined1 local_68 [72];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70[0] = 1;
  FUN_140fbcb60(local_68);
  FUN_140c19bee(local_68,param_1 + 8);
  FUN_1412daff8(*param_2,local_70);
  FUN_1412dafa6(local_68);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dad44 FUN_1457dad44 body=137 status=ok
// SIG undefined FUN_1457dad44(void)

void FUN_1457dad44(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x1f8);
  if ((longlong)*(int *)(param_1 + 0x200) == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = (longlong)*(int *)(param_1 + 0x200) << 4;
    do {
      FUN_140fbcb7d(lVar4);
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
    uVar2 = *(undefined4 *)(param_1 + 0x200);
    lVar4 = *(longlong *)(param_1 + 0x1f8);
  }
  iVar1 = *(int *)(param_1 + 0x204);
  FUN_140368c45(lVar4,uVar2);
  *(undefined4 *)(param_1 + 0x200) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x204) != 0)) {
    FUN_14053e466(param_1 + 0x1f8,0);
    return;
  }
  return;
}



// FUNCTION 1457dadce FUN_1457dadce body=217 status=ok
// SIG undefined FUN_1457dadce(void)

void FUN_1457dadce(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x20b) == '\0') && (*(char *)(param_1 + 0x1d4) == '\x01')) {
    uVar5 = FUN_145806262(param_1);
    FUN_1405fd34a(&local_28,uVar5);
    if (local_20 != (longlong *)0x0) {
      iVar4 = (int)local_20[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_20[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_20 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_20;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if ((local_28 != 0) &&
           (FUN_140925794(local_28,*(undefined4 *)(param_1 + 0x1d0)),
           *(char *)(param_1 + 0x1d4) == '\x01')) {
          *(undefined1 *)(param_1 + 0x1d4) = 0;
        }
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
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457daea8 FUN_1457daea8 body=232 status=ok
// SIG undefined FUN_1457daea8(void)

void FUN_1457daea8(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined1 *local_30;
  longlong *local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x1d8);
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x1e0);
    if (plVar5 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_38 = plVar5;
    }
    local_40 = lVar4 + 8;
    local_30 = &local_19;
    local_19 = 0;
    local_28 = &local_40;
    FUN_14104af82(&local_30,param_1 + 0xf8);
    plVar2 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
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



// FUNCTION 1457daf92 FUN_1457daf92 body=279 status=ok
// SIG undefined FUN_1457daf92(void)

void FUN_1457daf92(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x1d8) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x1f0), plVar4 != (longlong *)0x0)) {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1457db030;
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar9 = iVar8 == iVar7;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar9);
    lVar5 = *(longlong *)(param_1 + 0x1e8);
    if (lVar5 != 0) {
      local_30 = *(undefined8 *)(param_1 + 0x1d8);
      plVar6 = *(longlong **)(param_1 + 0x1e0);
      if (plVar6 == (longlong *)0x0) {
        local_28 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        local_28 = plVar6;
      }
      FUN_140bbb982(lVar5,&local_30);
      plVar2 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1457db030:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457db0aa FUN_1457db0aa body=119 status=ok
// SIG undefined FUN_1457db0aa(void)

void FUN_1457db0aa(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x470) & 4) == 0) {
    local_20 = *(undefined8 *)(param_1 + 0x250);
    local_18 = 0;
    FUN_1447cd2ec(param_1 + 0x180);
  }
  FUN_14095dc64(param_1 + 400,0);
  *(undefined4 *)(param_1 + 0x50c) = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457db122 FUN_1457db122 body=130 status=ok
// SIG undefined FUN_1457db122(void)

void FUN_1457db122(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,3);
    FUN_140fbcf90(plVar1,param_3);
    (**(code **)(*plVar1 + 0x128))(plVar1,*param_4);
    FUN_140fbd1b1(plVar1,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001457db193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1457db1a4 FUN_1457db1a4 body=171 status=ok
// SIG undefined FUN_1457db1a4(void)

undefined8 * FUN_1457db1a4(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb949b0) {
    FUN_144b3d300(&DAT_14cb949b0);
    if (DAT_14cb949b0 == -1) {
      builtin_wcsncpy(local_28,L"OnZoomed",9);
      FUN_1446f470e(&DAT_14cb949a8,local_28,1);
      _Init_thread_footer(&DAT_14cb949b0);
    }
  }
  *param_1 = DAT_14cb949a8;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457db250 FUN_1457db250 body=123 status=ok
// SIG undefined FUN_1457db250(void)

void FUN_1457db250(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001457db2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1457db2cc FUN_1457db2cc body=116 status=ok
// SIG undefined FUN_1457db2cc(void)

void FUN_1457db2cc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 1457db340 FUN_1457db340 body=94 status=ok
// SIG undefined FUN_1457db340(void)

void FUN_1457db340(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(short *)(param_2 + 0x14) != -1) {
    lVar1 = FUN_14009d2a0();
    FUN_1405e0ab4(*param_1 + 0x28,*(undefined2 *)(param_2 + 0x14),*(undefined2 *)(lVar1 + 0x11c));
    *(undefined2 *)(param_2 + 0x14) = 0xffff;
    if (*(longlong *)(param_1[1] + 0x350) != 0) {
      FUN_14754610e(*(longlong *)(param_1[1] + 0x350),*(undefined4 *)(param_2 + 0x16));
    }
    *(undefined4 *)(param_2 + 0x16) = 0xffff00ff;
  }
  return;
}



// FUNCTION 1457db39e FUN_1457db39e body=184 status=ok
// SIG undefined FUN_1457db39e(void)

void FUN_1457db39e(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_140fc544a(param_2);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar7 = (longlong)iVar2 & (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar5 + uVar7 * 4);
    if (lVar3 != -1) {
      lVar3 = lVar3 * 0x30 + *param_1;
      cVar1 = FUN_140fc53a8(lVar3,param_2);
      if (cVar1 == '\0') {
        do {
          lVar4 = lVar3;
          lVar3 = (longlong)*(int *)(lVar4 + 0x28);
          if (lVar3 == -1) {
            return;
          }
          lVar3 = lVar3 * 0x30 + *param_1;
          cVar1 = FUN_140fc53a8(lVar3,param_2);
        } while (cVar1 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 0x28);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar5 + uVar7 * 4);
      }
      FUN_1457db456(param_1,*puVar6);
      return;
    }
  }
  return;
}



// FUNCTION 1457db456 FUN_1457db456 body=94 status=ok
// SIG undefined FUN_1457db456(void)

void FUN_1457db456(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x30 + 0x28);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_1457db4b4();
  return;
}



// FUNCTION 1457db4b4 FUN_1457db4b4 body=124 status=ok
// SIG undefined FUN_1457db4b4(void)

void FUN_1457db4b4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 1457db530 FUN_1457db530 body=373 status=ok
// SIG undefined FUN_1457db530(void)

void FUN_1457db530(longlong *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  char local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  FUN_140cd6274(&local_68);
  if (((**(int **)(lVar1 + 0xb0) != 0) || (local_64 != '\0')) &&
     (local_90 = FUN_140732858(), 0 < (int)local_68)) {
    local_98 = param_6;
    uVar5 = 0;
    do {
      FUN_147691ba8(lVar1,&local_84,param_5,local_98);
      local_54 = *(undefined4 *)(param_4 + uVar5 * 4);
      local_4a = *(undefined2 *)(param_3 + uVar5 * 2);
      local_58 = local_7c;
      local_60 = local_84;
      local_50 = local_64;
      FUN_1449da5a2(local_90,&local_4a,&local_60);
      lVar3 = FUN_1400e4054(*(undefined8 *)(lVar1 + 0xb0),&local_84);
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (undefined4)
                CONCAT71((int7)((ulonglong)&local_84 >> 8),'\x02' - (*(short *)(lVar3 + 0xe) == 0));
      }
      cVar2 = FUN_14768e41e(lVar1,local_7c,uVar4);
      if (cVar2 == '\0') {
        FUN_14769a370(&local_60,param_5,local_98);
        FUN_14768e4b6(lVar1,local_7c,uVar4,&local_60);
      }
      uVar5 = uVar5 + 1;
      param_5 = param_5 + 0x10;
      local_98 = local_98 + 0x10;
    } while (local_68 != uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457db6a6 FUN_1457db6a6 body=94 status=ok
// SIG undefined FUN_1457db6a6(void)

void FUN_1457db6a6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(short *)(param_2 + 0x14) != -1) {
    lVar1 = FUN_14009d2a0();
    FUN_1405e0ab4(*param_1 + 0x28,*(undefined2 *)(param_2 + 0x14),*(undefined2 *)(lVar1 + 0x11c));
    *(undefined2 *)(param_2 + 0x14) = 0xffff;
    if (*(longlong *)(param_1[1] + 0x350) != 0) {
      FUN_14754610e(*(longlong *)(param_1[1] + 0x350),*(undefined4 *)(param_2 + 0x16));
    }
    *(undefined4 *)(param_2 + 0x16) = 0xffff00ff;
  }
  return;
}



// FUNCTION 1457db704 FUN_1457db704 body=782 status=ok
// SIG undefined FUN_1457db704(void)

void FUN_1457db704(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  longlong local_90;
  undefined2 local_7a;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = FUN_14009d2a0();
  FUN_14038fb82();
  iVar3 = (int)param_4[1];
  if (iVar3 == 0) goto LAB_1457db7dc;
  if (*param_2 == 0) {
    FUN_1457db6a6(param_1,param_5);
    lVar7 = param_4[1];
    if ((longlong)(int)lVar7 != 0) {
      lVar8 = *param_4;
      lVar9 = 0;
      do {
        FUN_14055cd1c(*param_1 + 0x28,*(undefined2 *)(lVar8 + lVar9),*(undefined2 *)(lVar6 + 0x5a));
        lVar9 = lVar9 + 2;
      } while ((longlong)(int)lVar7 * 2 != lVar9);
    }
    goto LAB_1457db7dc;
  }
  if (iVar3 < 2) {
    lVar7 = *param_1 + 0x28;
    uVar1 = *(undefined2 *)*param_4;
    cVar4 = FUN_140bbead8(lVar7,uVar1,*(undefined2 *)(lVar6 + 0x110));
    if ((cVar4 == '\0') ||
       (cVar4 = FUN_140bbead8(lVar7,uVar1,*(undefined2 *)(lVar6 + 0xf4)), cVar4 != '\0'))
    goto LAB_1457db804;
    if ((iVar3 == 1) && (*(short *)(param_5 + 0x14) == -1)) {
      FUN_14055cd1c(lVar7,uVar1,*(undefined2 *)(lVar6 + 0x5a));
      FUN_1457dba14(*param_1,param_2,param_3,*(undefined2 *)*param_4);
    }
  }
  else {
LAB_1457db804:
    iVar5 = iVar3;
    if (*(short *)(param_5 + 0x14) == -1) {
      lVar7 = *param_1;
      if (*(longlong *)(param_1[1] + 0x350) == 0) {
        lVar8 = FUN_147685e68(lVar7);
        lVar7 = param_1[1];
        if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar8);
        }
        *(longlong *)(lVar7 + 0x350) = lVar8;
        FUN_14129a52a(*param_1 + 0x2a0,param_1[1],*(undefined8 *)(param_1[1] + 0x350));
        lVar7 = *param_1;
      }
      FUN_14485c47a(param_5,lVar7);
      lVar7 = *(longlong *)(param_1[1] + 0x350);
      if ((lVar7 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar7);
      }
      local_50 = 0;
      FUN_14485c47a(&local_50,lVar7);
      *(undefined8 *)(param_5 + 8) = local_50;
      FUN_1457ab9aa(*(undefined8 *)(param_1[1] + 0x350),&local_50);
      *(undefined4 *)(param_5 + 0x16) = (undefined4)local_50;
      local_68 = (undefined4)*param_4;
      uStack_64 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_60 = (undefined4)param_4[1];
      uStack_5c = *(undefined4 *)((longlong)param_4 + 0xc);
      local_98 = &local_68;
      local_90 = param_5;
      FUN_14768fdd6(*param_1,param_2,param_3,
                    *(undefined2 *)(*(longlong *)(param_1[1] + 0x350) + 0x66));
      iVar5 = (int)param_4[1];
    }
    if (iVar5 != 0) {
      local_7a = *(undefined2 *)(*(longlong *)(param_1[1] + 0x350) + 0x66);
      local_70 = *param_4;
      local_78 = param_5 + 0x16;
      lVar7 = 0;
      do {
        uVar1 = *(undefined2 *)(local_70 + lVar7);
        lVar8 = *param_1 + 0x28;
        uVar2 = *(undefined2 *)(lVar6 + 0x5a);
        cVar4 = FUN_140bbead8(lVar8,uVar1,uVar2);
        if (cVar4 == '\0') {
          FUN_147686232(lVar8,uVar1,uVar2,local_78);
        }
        else {
          FUN_1476862f4(lVar8,uVar1,uVar2,local_78);
        }
        FUN_1405e0ab4(*param_1 + 0x28,uVar1,local_7a);
        lVar7 = lVar7 + 2;
      } while ((longlong)iVar5 * 2 != lVar7);
    }
  }
  *(int *)(param_5 + 0x10) = iVar3;
LAB_1457db7dc:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457dba14 FUN_1457dba14 body=584 status=ok
// SIG undefined FUN_1457dba14(void)

void FUN_1457dba14(longlong param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_6c;
  undefined2 local_6a;
  double local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14009d2a0();
  lVar4 = FUN_14038fb82();
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xc0) + (param_4 & 0xffff) * 8);
  if (uVar1 == 0xffff) {
    puVar6 = &DAT_14cab2728;
  }
  else {
    puVar6 = (undefined *)((ulonglong)((uint)uVar1 * 0x28) + *(longlong *)(param_1 + 0x30));
  }
  local_6c = *(undefined2 *)(lVar3 + 0x10a);
  uStack_80 = &local_68;
  local_6a = *(undefined2 *)(lVar3 + 0x132);
  local_48 = 0x10000000000;
  local_88 = &local_6c;
  FUN_1447c44f6(&local_68);
  cVar2 = FUN_140fc5994(puVar6,&local_68);
  uVar1 = *(ushort *)(lVar4 + 0xc2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(puVar6 + 0x20) == (uint)uVar1 || (int)*(uint *)(puVar6 + 0x20) < (int)(uint)uVar1))
  {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)(puVar6 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  if ((bVar7) || (cVar2 != '\x01')) goto LAB_1457dbbde;
  local_88 = (undefined2 *)&DAT_3f8000003f800000;
  uStack_80 = (double *)&DAT_3f8000003f800000;
  lVar3 = FUN_1406f4b62(param_2);
  if (lVar3 == 0) {
LAB_1457dbc05:
    lVar3 = FUN_1406f4b62(param_2);
    if (lVar3 == 0) goto LAB_1457dbbde;
    lVar5 = FUN_140a2e7a0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_1457dbbde;
    cVar2 = FUN_147bc80bc(lVar3,*param_3,&local_88);
  }
  else {
    lVar5 = FUN_144a772c4();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_1457dbc05;
    local_68 = (double)(*param_3 & 0xffffffff);
    local_60 = (double)CONCAT44(*(undefined4 *)((longlong)param_3 + 0xc),(int)(*param_3 >> 0x20));
    local_58 = (double)CONCAT71(local_58._1_7_,(char)param_3[1]);
    cVar2 = FUN_140fc5922(lVar3,&local_68,&local_88,0);
  }
  if (cVar2 != '\0') {
    local_68 = (double)(float)local_88;
    local_60 = (double)local_88._4_4_;
    local_58 = (double)(float)uStack_80;
    local_50 = (double)uStack_80._4_4_;
    FUN_140fc5a58(param_1 + 0x28,param_4 & 0xffffffff,*(undefined2 *)(lVar4 + 0xc2));
  }
LAB_1457dbbde:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dbc5e FUN_1457dbc5e body=138 status=ok
// SIG undefined FUN_1457dbc5e(void)

longlong FUN_1457dbc5e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457dbcea(local_40,param_3,param_4);
  FUN_1457dbd64(param_1 + 200,param_2,param_3);
  FUN_1457dbfdc(param_1,&local_44,local_40);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = local_44;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dbcea FUN_1457dbcea body=121 status=ok
// SIG undefined FUN_1457dbcea(void)

undefined8 * FUN_1457dbcea(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = FUN_1406f4b62(param_2);
  *param_1 = 0;
  if (lVar4 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28,lVar4);
    *(undefined4 *)param_1 = (undefined4)local_28;
    *(undefined4 *)((longlong)param_1 + 4) = local_28._4_4_;
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dbd64 FUN_1457dbd64 body=130 status=ok
// SIG undefined FUN_1457dbd64(void)

undefined8 FUN_1457dbd64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_1;
  lVar2 = FUN_1406f4b62(param_3);
  local_30 = 0;
  if (lVar2 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28,lVar2);
    local_30 = local_28;
  }
  FUN_14027499e(uVar1,param_2,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dbde8 FUN_1457dbde8 body=138 status=ok
// SIG undefined FUN_1457dbde8(void)

void FUN_1457dbde8(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 == '\x01') {
    *(undefined4 *)(lVar1 + 0x18) = *param_4;
    *(byte *)(lVar1 + 0x1c) = *(byte *)(lVar1 + 0x1c) | 3;
  }
  else if (param_3 == '\x02') {
    if ((*(byte *)(lVar1 + 0x1c) & 1) == 0) {
      *(undefined4 *)(lVar1 + 0x18) = *param_4;
      *(byte *)(lVar1 + 0x1c) = *(byte *)(lVar1 + 0x1c) | 1;
    }
    else {
      FUN_1476876d4(param_1 + 0xa0,&local_c,param_4);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dbe74 FUN_1457dbe74 body=143 status=ok
// SIG undefined FUN_1457dbe74(void)

ulonglong FUN_1457dbe74(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined8 in_RAX;
  undefined7 uVar6;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar7 = (longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x68);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  if (param_3 == '\x01') {
    uVar5 = CONCAT71(uVar6,*(undefined1 *)(lVar7 + 0x1c));
  }
  else {
    uVar5 = CONCAT71(uVar6,1);
    if ((param_3 == '\x02') && (bVar2 = *(byte *)(lVar7 + 0x1c), ((bVar2 & 2) == 0 & bVar2) == 0)) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 8) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 8) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 8;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1457dbf04 FUN_1457dbf04 body=214 status=ok
// SIG undefined FUN_1457dbf04(void)

void FUN_1457dbf04(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1406f4b62();
  local_1c = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_140a2e7a0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) {
      lVar2 = FUN_1402d2740();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        local_30 = (undefined4)*param_2;
        local_2c = 0;
        local_28 = (undefined4)((ulonglong)*param_2 >> 0x20);
        local_24 = *(undefined4 *)((longlong)param_2 + 0xc);
        local_20 = *(undefined1 *)(param_2 + 1);
        FUN_140fc5b24(lVar1,&local_30,&local_1c,0);
      }
    }
    else {
      FUN_1409b8518(lVar1,*param_2,&local_1c);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_1c);
}



// FUNCTION 1457dbfdc FUN_1457dbfdc body=239 status=ok
// SIG undefined FUN_1457dbfdc(void)

int * FUN_1457dbfdc(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar2 = FUN_145bce7e6(param_3);
  iVar3 = FUN_1457dc0cc(plVar1,uVar2,param_3);
  if (((iVar3 == -1) || (lVar4 = (longlong)iVar3 * 0x24 + *plVar1, lVar4 == 0)) ||
     (iVar3 = *(int *)(lVar4 + 0x18), *param_2 = iVar3, iVar3 == -1)) {
    local_58 = (undefined4)*(undefined8 *)(param_3 + 4);
    uStack_54 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
    local_68._0_4_ = *param_3;
    local_68._4_4_ = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    FUN_1457dc13a(param_1 + 0x68,local_48);
    *(ulonglong *)(local_40 + 3) = CONCAT44(local_58,uStack_5c);
    *(ulonglong *)(local_40 + 5) = CONCAT44(uStack_50,uStack_54);
    *local_40 = (undefined4)local_68;
    local_40[1] = local_68._4_4_;
    local_40[2] = uStack_60;
    local_40[3] = uStack_5c;
    *(undefined1 *)(local_40 + 7) = 0;
    *param_2 = local_48[0];
    uStack_60 = SUB84(param_2,0);
    uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
    local_68 = param_3;
    FUN_1457dc220(plVar1,local_48,&local_68);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1457dc0cc FUN_1457dc0cc body=109 status=ok
// SIG undefined FUN_1457dc0cc(void)

int FUN_1457dc0cc(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_145bce84d(lVar3 + (longlong)iVar4 * 0x24,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x1c + (longlong)iVar4 * 0x24);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1457dc13a FUN_1457dc13a body=230 status=ok
// SIG undefined FUN_1457dc13a(void)

int * FUN_1457dc13a(longlong *param_1,int *param_2)

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



// FUNCTION 1457dc220 FUN_1457dc220 body=302 status=ok
// SIG undefined FUN_1457dc220(void)

undefined4 * FUN_1457dc220(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457dc3b6(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[6] = *puVar2;
  local_40[7] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_145bce7e6(local_40);
  cVar6 = FUN_1457dc350(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[8] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[7] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1457dc49e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dc350 FUN_1457dc350 body=102 status=ok
// SIG undefined FUN_1457dc350(void)

undefined8 FUN_1457dc350(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar8 = FUN_1457dc0cc(), iVar8 != -1)) {
    lVar2 = *param_1;
    lVar9 = (longlong)iVar8;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar3 = *(undefined8 *)(param_3 + 4);
    *(undefined4 *)(lVar2 + 0x18 + lVar9 * 0x24) = param_3[6];
    *(undefined8 *)(lVar2 + 0x10 + lVar9 * 0x24) = uVar3;
    puVar1 = (undefined4 *)(lVar2 + lVar9 * 0x24);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    FUN_145bce8e4(param_1,*param_4);
    *param_4 = iVar8;
    return 1;
  }
  return 0;
}



// FUNCTION 1457dc3b6 FUN_1457dc3b6 body=231 status=ok
// SIG undefined FUN_1457dc3b6(void)

int * FUN_1457dc3b6(longlong *param_1,int *param_2)

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
      FUN_14042c636(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x24);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x24) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 1457dc49e FUN_1457dc49e body=447 status=ok
// SIG undefined FUN_1457dc49e(void)

void FUN_1457dc49e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x24;
        iVar6 = FUN_145bce7e6(lVar2);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x20) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x1c) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457dc65e FUN_1457dc65e body=519 status=ok
// SIG undefined FUN_1457dc65e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457dc65e(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58 [2];
  undefined *local_48;
  int local_40;
  undefined *local_38;
  int local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_144a8054c();
  local_78 = L"DeformerGraph";
  local_70 = 0xd;
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_68);
  (**(code **)(*local_68 + 0x20))(local_68,&local_48);
  local_38 = local_48;
  local_30 = local_40 + -1;
  if (local_40 == 0) {
    local_30 = 0;
  }
  local_28 = L"Shaders";
  local_20 = 7;
  FUN_140bee87a(local_58,&local_38,2);
  if (local_48 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  FUN_140056680(&local_38,L"/Plugin/Optimus");
  FUN_141414c4a(&local_38,local_58);
  if (local_38 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  FUN_140fc6fc6();
  FUN_1457dc868();
  FUN_140fc6c18();
  puVar4 = (undefined *)FUN_14001a7b2();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1c720) {
    FUN_144b3d300(&DAT_14cc1c720);
    if (DAT_14cc1c720 == -1) {
      _DAT_14cc1c710 = FUN_1458f36a4();
      _DAT_14cc1c718 = 0;
      _Init_thread_footer(&DAT_14cc1c720);
    }
  }
  local_30 = CONCAT22(local_30._2_2_,0x101);
  local_38 = puVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(puVar4 + 0x3a0));
  LOCK();
  piVar1 = (int *)(puVar4 + 0x3ac);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    LOCK();
    local_38[0x3a8] = (undefined1)local_30;
    UNLOCK();
  }
  local_48 = &DAT_14cc1c710;
  local_40 = 1;
  FUN_1457dcce6(puVar4);
  FUN_1409be446(&local_38);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dc868 FUN_1457dc868 body=311 status=ok
// SIG undefined FUN_1457dc868(void)

void FUN_1457dc868(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&local_60,L"AssetRegistry",1);
  plVar1 = (longlong *)FUN_1447c1074(local_60);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1);
    uVar3 = (**(code **)(*plVar2 + 0x390))(plVar2);
    FUN_140f4f540();
    FUN_1457dc9a0(local_58);
    FUN_145c73a1e(uVar3,local_68,local_58);
    FUN_1401cb1ee(local_58);
    plVar2 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1);
    uVar3 = (**(code **)(*plVar2 + 0x338))(plVar2);
    FUN_140f4f540();
    FUN_1457dca6c(local_58);
    FUN_1458cea3e(uVar3,local_68,local_58);
    FUN_1401cb1ee(local_58);
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1);
    uVar3 = (**(code **)(*plVar1 + 0x348))(plVar1);
    FUN_140f4f540();
    FUN_1457dcb38(local_58);
    FUN_1458ceb8a(uVar3,local_68,local_58);
    FUN_1401cb1ee(local_58);
  }
  FUN_140f4f540();
  FUN_1457dcc04(local_58);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dc9a0 FUN_1457dc9a0 body=204 status=ok
// SIG undefined FUN_1457dc9a0(void)

LPCRITICAL_SECTION FUN_1457dc9a0(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e065d0;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14bd1da30;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)&DAT_14cc1c7d8;
  *(code **)&p_Var1->EntryCount = FUN_1494ab786;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1457dca6c FUN_1457dca6c body=204 status=ok
// SIG undefined FUN_1457dca6c(void)

LPCRITICAL_SECTION FUN_1457dca6c(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a975630;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14bd1daa0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)&DAT_14cc1c7d8;
  *(code **)&p_Var1->EntryCount = FUN_1494ab934;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1457dcb38 FUN_1457dcb38 body=204 status=ok
// SIG undefined FUN_1457dcb38(void)

LPCRITICAL_SECTION FUN_1457dcb38(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a975710;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14bd1db10;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)&DAT_14cc1c7d8;
  *(code **)&p_Var1->EntryCount = FUN_1494ab9d2;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1457dcc04 FUN_1457dcc04 body=225 status=ok
// SIG undefined FUN_1457dcc04(void)

undefined8 FUN_1457dcc04(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = &PTR_LAB_14bb2bb20;
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
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_14bd1db80;
  local_28[3] = &DAT_14cc1c7d8;
  local_28[4] = FUN_1494abb18;
  FUN_1456ad216(&DAT_14caccb58,param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dcce6 FUN_1457dcce6 body=431 status=ok
// SIG undefined FUN_1457dcce6(void)

void FUN_1457dcce6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  longlong local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_2[1] != 0) {
    puVar4 = (undefined8 *)*param_2;
    puVar3 = puVar4 + (longlong)(int)param_2[1] * 2;
    param_1 = param_1 + 0x2f8;
    do {
      plVar5 = (longlong *)*puVar4;
      if ((*(byte *)((longlong)plVar5 + 0xd4) & 0x80) != 0) {
        iVar1 = *(int *)(puVar4 + 1);
        if (iVar1 == 0) {
          local_58 = plVar5;
          if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(plVar5);
          }
          FUN_1459af580(param_1,&local_60,&local_58,0);
        }
        else if (iVar1 == 2) {
          local_58 = (longlong *)0x0;
          local_50 = 1;
          FUN_148a175e2(&local_58,1,0);
          *local_58 = (longlong)plVar5;
          FUN_140aa7b7e(plVar5,&local_58);
          plVar5 = local_58;
          lVar2 = (longlong)local_50;
          if (lVar2 != 0) {
            lVar6 = 0;
            do {
              local_60 = *(longlong *)((longlong)plVar5 + lVar6);
              if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c();
              }
              FUN_1459af580(param_1,local_64,&local_60,0);
              lVar6 = lVar6 + 8;
            } while (lVar2 * 8 != lVar6);
          }
          if (local_58 != (longlong *)0x0) {
            FUN_1400020a8(local_58);
          }
        }
        else if (iVar1 == 1) {
          do {
            local_58 = plVar5;
            if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(plVar5);
            }
            FUN_1459af580(param_1,&local_60,&local_58,0);
            plVar5 = (longlong *)plVar5[8];
          } while (plVar5 != (longlong *)0x0);
        }
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457dce9e FUN_1457dce9e body=132 status=ok
// SIG undefined FUN_1457dce9e(void)

void FUN_1457dce9e(longlong param_1,int param_2)

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



// FUNCTION 1457dcf30 FUN_1457dcf30 body=31 status=ok
// SIG undefined FUN_1457dcf30(void)

undefined8 FUN_1457dcf30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457dcf50 FUN_1457dcf50 body=101 status=ok
// SIG undefined FUN_1457dcf50(void)

undefined4 FUN_1457dcf50(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140f4f540();
  FUN_140fc8a88(&DAT_14cc1c7d8,&local_28,*param_1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dcfb6 FUN_1457dcfb6 body=109 status=ok
// SIG undefined FUN_1457dcfb6(void)

undefined8 * FUN_1457dcfb6(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  _Src = (void *)*param_2;
  uVar1 = param_2[1] - (longlong)_Src;
  uVar3 = uVar1 >> 3;
  iVar2 = (int)uVar3;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140fc867e(param_1,uVar3 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)(uVar1 * 0x20000000) >> 0x1d & 0xfffffffffffffff8);
    }
  }
  return param_1;
}



// FUNCTION 1457dd03c FUN_1457dd03c body=183 status=ok
// SIG undefined FUN_1457dd03c(void)

undefined8 FUN_1457dd03c(longlong *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined5 local_40;
  undefined3 local_3b;
  undefined4 uStack_38;
  undefined1 uStack_34;
  void *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)*param_1;
  uStack_38 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar1 + 5) >> 0x18);
  uStack_34 = (undefined1)((ulonglong)*(undefined8 *)((longlong)puVar1 + 5) >> 0x38);
  local_40 = (undefined5)*puVar1;
  local_3b = (undefined3)((ulonglong)*puVar1 >> 0x28);
  local_30 = (void *)0x0;
  local_28 = *(int *)(puVar1 + 3);
  lVar3 = (longlong)local_28;
  _Src = (void *)puVar1[2];
  if (lVar3 == 0) {
    local_24 = 0;
  }
  else {
    FUN_14945aff2(&local_30,local_28,0);
    memcpy(local_30,_Src,lVar3 << 4);
  }
  uStack_34 = 1;
  uVar2 = FUN_1410a7212(&local_40);
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dd0f4 FUN_1457dd0f4 body=119 status=ok
// SIG undefined FUN_1457dd0f4(void)

undefined8 FUN_1457dd0f4(char param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  char local_38 [4];
  undefined8 local_34;
  undefined1 local_2c;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == '\x04') {
    uVar1 = 0;
  }
  else {
    local_2c = 0;
    local_34 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_38[1] = 0;
    local_38[0] = param_1;
    uVar1 = FUN_1410a7212(local_38);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dd16c FUN_1457dd16c body=206 status=ok
// SIG undefined FUN_1457dd16c(void)

undefined8 FUN_1457dd16c(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_2;
  FUN_1400021e4(&local_28,local_58);
  FUN_140ba7826(local_48,L"TArray<",local_58);
  FUN_144a882a8(&local_38,local_48,&DAT_149e06342);
  puVar1 = local_38;
  if (local_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1457dd23c FUN_1457dd23c body=55 status=ok
// SIG undefined FUN_1457dd23c(void)

void FUN_1457dd23c(longlong *param_1)

{
  FUN_140fc99bc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457dd274 FUN_1457dd274 body=141 status=ok
// SIG undefined FUN_1457dd274(void)

undefined8 FUN_1457dd274(char param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  char local_38 [3];
  undefined1 local_35;
  undefined8 local_34;
  undefined1 local_2c;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0;
  if (((param_1 != '\x04') && (0xfffffffb < param_2 - 5U)) && (0xfffffffb < param_3 - 5U)) {
    local_2c = 0;
    local_34 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_38[1] = 2;
    local_38[0] = param_1;
    local_38[2] = (char)param_2;
    local_35 = (char)param_3;
    uVar1 = FUN_1410a7212(local_38);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dd302 FUN_1457dd302 body=168 status=ok
// SIG undefined FUN_1457dd302(void)

void FUN_1457dd302(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  longlong *local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *(undefined8 *)(param_1 + 0x18);
  FUN_145715fae(local_58);
  local_38 = *(char *)(param_3 + 4);
  if (local_38 == '\x01') {
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
  }
  local_68 = param_4;
  FUN_140fc9c28(param_1,local_58,param_2,&local_48);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if (*(char *)(param_3 + 4) == '\x01') {
    *(undefined1 *)(param_3 + 4) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dd3c4 FUN_1457dd3c4 body=147 status=ok
// SIG undefined FUN_1457dd3c4(void)

void FUN_1457dd3c4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457dd458 FUN_1457dd458 body=451 status=ok
// SIG undefined FUN_1457dd458(void)

void FUN_1457dd458(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  code *local_f8 [2];
  undefined8 *local_e8;
  longlong local_b8 [2];
  undefined8 local_a8 [6];
  longlong local_78 [2];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = 0;
  uStack_110 = 0;
  local_78[0] = *param_5;
  local_68[0] = 0;
  local_100 = param_3;
  if (local_78[0] != 0) {
    plVar2 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_5[2];
    }
    (**(code **)*plVar2)(0,local_68);
  }
  lVar1 = param_7;
  local_b8[0] = *param_4;
  local_a8[0] = 0;
  if (local_b8[0] != 0) {
    plVar2 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_4[2];
    }
    (**(code **)*plVar2)(plVar2,local_a8);
  }
  local_f8[0] = (code *)0x0;
  local_e8 = (undefined8 *)FUN_14001cc68(0x38,8);
  *local_e8 = &PTR_FUN_14bd1d930;
  local_e8[1] = param_1;
  local_e8[2] = param_2;
  local_e8[3] = &local_100;
  local_e8[4] = &param_6;
  local_e8[5] = lVar1;
  local_e8[6] = &stack0x00000040;
  if (local_e8 + 1 != (undefined8 *)0x0) {
    local_f8[0] = FUN_144531432;
  }
  local_120 = &local_118;
  local_128 = local_78;
  FUN_140fc92aa(&DAT_14cc1c7d8,*param_1,local_f8,local_b8);
  if (*param_4 != 0) {
    plVar2 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (*param_5 != 0) {
    plVar2 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (*(char *)(lVar1 + 0x10) == '\x01') {
    *(undefined1 *)(lVar1 + 0x10) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dd628 FUN_1457dd628 body=31 status=ok
// SIG undefined FUN_1457dd628(void)

undefined8 FUN_1457dd628(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457dd654 FUN_1457dd654 body=31 status=ok
// SIG undefined FUN_1457dd654(void)

undefined8 FUN_1457dd654(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457dd68c FUN_1457dd68c body=126 status=ok
// SIG undefined FUN_1457dd68c(void)

undefined8 * FUN_1457dd68c(undefined8 *param_1)

{
  int iVar1;
  undefined4 *_Src;
  undefined8 *_Dst;
  longlong lVar2;
  
  iVar1 = DAT_14cc1c830;
  if (param_1 != &DAT_14cc1c7e8) {
    lVar2 = (longlong)DAT_14cc1c830;
    FUN_144a1cbf0(param_1 + 7,0,DAT_14cc1c830,4);
    if (lVar2 != 0) {
      _Dst = param_1 + 7;
      if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[8];
      }
      _Src = &DAT_14cc1c820;
      if (DAT_14cc1c828 != (undefined4 *)0x0) {
        _Src = DAT_14cc1c828;
      }
      memcpy(_Dst,_Src,lVar2 << 2);
    }
    *(int *)(param_1 + 9) = iVar1;
    FUN_140fca5e2(param_1);
  }
  return param_1;
}



// FUNCTION 1457dd70a FUN_1457dd70a body=162 status=ok
// SIG undefined FUN_1457dd70a(void)

undefined8 FUN_1457dd70a(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949138) {
    FUN_144b3d300(&DAT_14c949138);
    if (DAT_14c949138 == -1) {
      FUN_1446f470e(&local_18,L"IntPoint",1);
      DAT_14c949130 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c949138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c949130;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dd7ae FUN_1457dd7ae body=162 status=ok
// SIG undefined FUN_1457dd7ae(void)

undefined8 FUN_1457dd7ae(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949148) {
    FUN_144b3d300(&DAT_14c949148);
    if (DAT_14c949148 == -1) {
      FUN_1446f470e(&local_18,L"IntVector",1);
      DAT_14c949140 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c949148);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c949140;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dd852 FUN_1457dd852 body=162 status=ok
// SIG undefined FUN_1457dd852(void)

undefined8 FUN_1457dd852(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949158) {
    FUN_144b3d300(&DAT_14c949158);
    if (DAT_14c949158 == -1) {
      FUN_1446f470e(&local_18,L"IntVector4",1);
      DAT_14c949150 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c949158);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c949150;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dd8f6 FUN_1457dd8f6 body=111 status=ok
// SIG undefined FUN_1457dd8f6(void)

void FUN_1457dd8f6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc0)) {
      uVar2 = uVar1 / 0xc0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc0,0x10);
  }
  return;
}



// FUNCTION 1457dd966 FUN_1457dd966 body=280 status=ok
// SIG undefined FUN_1457dd966(void)

void FUN_1457dd966(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined8 local_a0;
  longlong *local_98 [2];
  longlong local_88 [2];
  undefined8 local_78 [6];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = *(undefined8 *)(param_1 + 0x18);
  FUN_145715fae(local_98);
  local_38 = *(char *)(param_4 + 4);
  if (local_38 == '\x01') {
    local_48 = *param_4;
    uStack_44 = param_4[1];
    uStack_40 = param_4[2];
    uStack_3c = param_4[3];
  }
  local_88[0] = *param_3;
  local_78[0] = 0;
  if (local_88[0] != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)*plVar1)(plVar1,local_78);
  }
  local_a8 = &local_48;
  FUN_140fca7ea(param_1,local_98,param_2,local_88);
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (*(char *)(param_4 + 4) == '\x01') {
    *(undefined1 *)(param_4 + 4) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457dda80 FUN_1457dda80 body=424 status=ok
// SIG undefined FUN_1457dda80(void)

void FUN_1457dda80(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined2 *local_120;
  int local_118;
  undefined2 *local_110;
  int local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_e9;
  code *local_e8 [2];
  undefined8 *local_d8;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_e9 = 0x10;
  local_f8 = param_1;
  if (param_1 != 0) {
    local_110 = *(undefined2 **)(param_1 + 0x18);
    FUN_1400021e4(&local_110,&local_120);
    puVar1 = &DAT_149dfb77a;
    if (local_118 != 0) {
      puVar1 = local_120;
    }
    FUN_140002266(&local_110,&DAT_14bd1047e,puVar1);
    puVar1 = &DAT_149dfb77a;
    if (local_108 != 0) {
      puVar1 = local_110;
    }
    FUN_1446f470e(&local_100,puVar1,1);
    if (local_110 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_120 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_138 = 0;
    uStack_130 = 0;
    local_68[0] = 0;
    local_58 = 0;
    local_a8[0] = 0;
    local_98 = 0;
    local_e8[0] = (code *)0x0;
    local_d8 = (undefined8 *)FUN_14001cc68(0x30,8);
    *local_d8 = &PTR_FUN_14bd1d9f0;
    local_d8[1] = &local_100;
    local_d8[2] = param_2;
    local_d8[3] = &local_f8;
    local_d8[4] = param_3;
    local_d8[5] = &local_e9;
    if (local_d8 + 1 != (longlong *)0x0) {
      local_e8[0] = FUN_144532216;
    }
    local_140 = &local_138;
    local_148 = local_68;
    FUN_140fc92aa(&DAT_14cc1c7d8,local_100,local_e8,local_a8);
  }
  if (*(char *)(param_3 + 0x10) == '\x01') {
    *(undefined1 *)(param_3 + 0x10) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ddc2a FUN_1457ddc2a body=162 status=ok
// SIG undefined FUN_1457ddc2a(void)

undefined8 * FUN_1457ddc2a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_140fd7a52(param_1 + 2,param_2 + 2);
  FUN_140fd7a52(param_1 + 0x26,param_2 + 0x26);
  FUN_140fd7a52(param_1 + 0x4a,param_2 + 0x4a);
  *(undefined2 *)(param_1 + 0x6e) = *(undefined2 *)(param_2 + 0x6e);
  *(undefined1 *)((longlong)param_1 + 0x372) = *(undefined1 *)((longlong)param_2 + 0x372);
  return param_1;
}



// FUNCTION 1457ddccc FUN_1457ddccc body=118 status=ok
// SIG undefined FUN_1457ddccc(void)

void FUN_1457ddccc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457ddd42 FUN_1457ddd42 body=75 status=ok
// SIG undefined FUN_1457ddd42(void)

void FUN_1457ddd42(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14664a238(param_1,iVar1);
  }
  FUN_1457ddd8e((longlong)iVar1 * 0x60 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 1457ddd8e FUN_1457ddd8e body=177 status=ok
// SIG undefined FUN_1457ddd8e(void)

undefined8 * FUN_1457ddd8e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_144a787a6(param_1 + 5,param_2 + 5);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  return param_1;
}



// FUNCTION 1457dde40 FUN_1457dde40 body=162 status=ok
// SIG undefined FUN_1457dde40(void)

undefined8 FUN_1457dde40(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x180;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e18];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x180,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if (3 < (int)(uVar3 / 0x60)) {
    uVar4 = uVar3 / 0x60 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x60,8);
  }
  return uVar2;
}



// FUNCTION 1457ddee2 FUN_1457ddee2 body=132 status=ok
// SIG undefined FUN_1457ddee2(void)

void FUN_1457ddee2(longlong param_1,int param_2)

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



// FUNCTION 1457ddf76 FUN_1457ddf76 body=114 status=ok
// SIG undefined FUN_1457ddf76(void)

void FUN_1457ddf76(void)

{
  longlong *plVar1;
  
  FUN_145928fa8();
  FUN_1457ddfe8(DAT_14c9a1d44);
  if (DAT_14c9a1cd8 == &DAT_14c9a1d40) {
    DAT_14c9a1cd8 = (undefined4 *)0x0;
  }
  if (DAT_14c9a1d80 != 0) {
    plVar1 = &DAT_14c9a1da0;
    if (DAT_14c9a1d90 != (longlong *)0x0) {
      plVar1 = DAT_14c9a1d90;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14c9a1d68 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457ddfe8 FUN_1457ddfe8 body=242 status=ok
// SIG undefined FUN_1457ddfe8(void)

void FUN_1457ddfe8(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  
  if (DAT_14c9a1ce8 != DAT_14c9a1d14) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c9a1d18;
    if (DAT_14c9a1d20 != (undefined *)0x0) {
      puVar6 = DAT_14c9a1d20;
    }
    for (iVar2 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c9a1d28 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14c9a1ce0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14c9a1ce0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar6 = &DAT_14c9a1d18;
        if (DAT_14c9a1d20 != (undefined *)0x0) {
          puVar6 = DAT_14c9a1d20;
        }
        lVar1 = DAT_14c9a1ce0 + (longlong)iVar2 * 0x18;
        lVar8 = (longlong)*(int *)(lVar1 + 0x14);
        iVar5 = *(int *)(puVar6 + lVar8 * 4);
        if (iVar5 == iVar2) {
          piVar7 = (int *)(puVar6 + lVar8 * 4);
        }
        else {
          do {
            piVar7 = (int *)(DAT_14c9a1ce0 + (longlong)iVar5 * 0x18 + 0x10);
            iVar5 = *piVar7;
          } while (iVar5 != iVar2);
        }
        *piVar7 = *(int *)(lVar1 + 0x10);
        FUN_1457de0da();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457de0da FUN_1457de0da body=135 status=ok
// SIG undefined FUN_1457de0da(void)

void FUN_1457de0da(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c9a1ce0;
  if (DAT_14c9a1d14 != 0) {
    *(int *)(DAT_14c9a1ce0 + (longlong)DAT_14c9a1d10 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a1d14) {
    iVar4 = DAT_14c9a1d10;
  }
  puVar1[1] = iVar4;
  DAT_14c9a1d14 = DAT_14c9a1d14 + 1;
  puVar5 = &DAT_14c9a1cf0;
  if (DAT_14c9a1d00 != (undefined *)0x0) {
    puVar5 = DAT_14c9a1d00;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c9a1d10 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 1457de16e FUN_1457de16e body=31 status=ok
// SIG undefined FUN_1457de16e(void)

undefined8 FUN_1457de16e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457de18e FUN_1457de18e body=78 status=ok
// SIG undefined FUN_1457de18e(void)

void FUN_1457de18e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1457de1dc();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30) {
        lVar2 = param_2;
      }
      goto LAB_1457de1c4;
    }
  }
  lVar2 = 0;
LAB_1457de1c4:
  FUN_140005f6c(param_1,lVar2,0,0);
  return;
}



// FUNCTION 1457de1dc FUN_1457de1dc body=57 status=ok
// SIG undefined FUN_1457de1dc(void)

void FUN_1457de1dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c308 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c308 = FUN_140002ddd(FUN_146530d11,uVar1,L"MissionGiverTypeBase");
  }
  return;
}



// FUNCTION 1457de216 FUN_1457de216 body=83 status=ok
// SIG undefined FUN_1457de216(void)

longlong * FUN_1457de216(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140f7f268();
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



// FUNCTION 1457de26a FUN_1457de26a body=25 status=ok
// SIG undefined FUN_1457de26a(void)

undefined8 FUN_1457de26a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1457de286 FUN_1457de286 body=146 status=ok
// SIG undefined FUN_1457de286(void)

void FUN_1457de286(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1d8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1d8)) {
      uVar5 = uVar4 / 0x1d8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1d8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457de31a FUN_1457de31a body=138 status=ok
// SIG undefined FUN_1457de31a(void)

void FUN_1457de31a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      iVar5 = 8;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x14c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar5;
    FUN_1457de3a4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1457de3a4 FUN_1457de3a4 body=148 status=ok
// SIG undefined FUN_1457de3a4(void)

void FUN_1457de3a4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0x28);
  return;
}



// FUNCTION 1457de438 FUN_1457de438 body=10 status=ok
// SIG undefined FUN_1457de438(void)

void FUN_1457de438(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001457de43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xef8))();
  return;
}



// FUNCTION 1457de442 FUN_1457de442 body=94 status=ok
// SIG undefined FUN_1457de442(void)

void FUN_1457de442(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_140e8fbe2();
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))();
    lVar2 = FUN_140fdd5f0();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      plVar3 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        plVar3 = param_2;
      }
      goto LAB_1457de491;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1457de491:
  *(longlong **)(param_1 + 0x2540) = plVar3;
  return;
}



// FUNCTION 1457de4a0 FUN_1457de4a0 body=48 status=ok
// SIG undefined FUN_1457de4a0(void)

void FUN_1457de4a0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1457de4d0 FUN_1457de4d0 body=127 status=ok
// SIG undefined FUN_1457de4d0(void)

void FUN_1457de4d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    *(byte *)((longlong)param_1 + 0x69) =
         *(byte *)((longlong)param_1 + 0x69) | *(byte *)((longlong)param_2 + 0x69);
    *(undefined1 *)((longlong)param_2 + 0x69) = 0;
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) | *(byte *)(param_2 + 0x1a);
    *(undefined1 *)(param_2 + 0x1a) = 0;
    if (*(char *)(param_2 + 4) == '\x01') {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    FUN_1457de614(param_1 + 6,param_2 + 6);
    FUN_1457de5b4(param_1 + 10,param_2 + 10);
    FUN_1457de550(param_1 + 0x12,param_2 + 0x12);
    FUN_1457de550(param_1 + 0x16,param_2 + 0x16);
    return;
  }
  return;
}



// FUNCTION 1457de550 FUN_1457de550 body=100 status=ok
// SIG undefined FUN_1457de550(void)

void FUN_1457de550(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447a1bd6(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 0x10 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 4);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 1457de5b4 FUN_1457de5b4 body=95 status=ok
// SIG undefined FUN_1457de5b4(void)

void FUN_1457de5b4(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_147006258(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 0x78 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x78
           );
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 1457de614 FUN_1457de614 body=99 status=ok
// SIG undefined FUN_1457de614(void)

void FUN_1457de614(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140fde09a(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 0x18 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x18
           );
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 1457de678 FUN_1457de678 body=188 status=ok
// SIG undefined FUN_1457de678(void)

void FUN_1457de678(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  FUN_140cb51fa(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1457de4a0(param_1 + 0x18);
  }
  FUN_140cb51d2(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_14700a4cc(param_1 + 0x28);
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_1408be2c4(param_1 + 0x48,0);
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) == 0) {
    return;
  }
  FUN_1408be2c4(param_1 + 0x58,0);
  return;
}



// FUNCTION 1457de734 FUN_1457de734 body=334 status=ok
// SIG undefined FUN_1457de734(void)

void FUN_1457de734(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + 0x1440) == 0) || (*(longlong *)(param_1 + 0x1448) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x1448) + 8) < 1)) {
    uVar4 = FUN_1401cb356();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,2,0x10);
    puVar3 = local_58;
    local_50 = 2;
    *local_58 = &PTR_LAB_149e02020;
    uVar5 = FUN_144a3f946();
    puVar3[2] = uVar5;
    *puVar3 = &PTR_FUN_149fca1b0;
    puVar3[3] = param_1;
    local_68 = 0;
    FUN_1405f67fc(uVar4,&local_48,&local_58,L"UAssetRegistryImpl::RequestTick");
    if ((undefined8 *)(param_1 + 0x1440) != &local_48) {
      *(undefined8 *)(param_1 + 0x1440) = local_48;
      local_48 = 0;
      plVar2 = *(longlong **)(param_1 + 0x1448);
      *(longlong **)(param_1 + 0x1448) = local_40;
      local_40 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    FUN_1449db362(&local_58);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457de884 FUN_1457de884 body=326 status=ok
// SIG undefined FUN_1457de884(void)

undefined8
FUN_1457de884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b5bc0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_1457de957;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1457de957:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457de9cc FUN_1457de9cc body=128 status=ok
// SIG undefined FUN_1457de9cc(void)

longlong FUN_1457de9cc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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
  return param_1;
}



// FUNCTION 1457dea4c FUN_1457dea4c body=132 status=ok
// SIG undefined FUN_1457dea4c(void)

void FUN_1457dea4c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar6);
      if ((plVar2 != (longlong *)0x0) && (plVar2[0xa1] != 0)) {
        lVar5 = FUN_1449f3324();
        if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
           ((*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
             != lVar5 + 0x30 || (cVar4 = (**(code **)(*plVar2 + 0x1080))(plVar2), cVar4 == '\0'))))
        {
          *(undefined1 *)(plVar2[0xa1] + 0x498) = 1;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return;
}



// FUNCTION 1457deade FUN_1457deade body=40 status=ok
// SIG undefined FUN_1457deade(void)

undefined8 FUN_1457deade(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457deb06 FUN_1457deb06 body=57 status=ok
// SIG undefined FUN_1457deb06(void)

void FUN_1457deb06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fa60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fa60 = FUN_140002ddd(FUN_1465a6726,uVar1,L"CarryableObjectCategoryDef");
  }
  return;
}



// FUNCTION 1457deb40 FUN_1457deb40 body=43 status=ok
// SIG undefined FUN_1457deb40(void)

undefined8 FUN_1457deb40(undefined8 param_1,int param_2)

{
  FUN_1457deb6c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 1457deb6c FUN_1457deb6c body=95 status=ok
// SIG undefined FUN_1457deb6c(void)

void FUN_1457deb6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8c1230;
  FUN_140fe7ede(param_1 + 0x39);
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_14071621b(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_1457debcc(param_1);
  return;
}



// FUNCTION 1457debcc FUN_1457debcc body=152 status=ok
// SIG undefined FUN_1457debcc(void)

void FUN_1457debcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b473570;
  FUN_1447a1747(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f98(param_1 + 0x1e);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_14071621b(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 1457dec64 FUN_1457dec64 body=40 status=ok
// SIG undefined FUN_1457dec64(void)

void FUN_1457dec64(longlong param_1)

{
  FUN_141131d4c();
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  return;
}



// FUNCTION 1457decbc FUN_1457decbc body=40 status=ok
// SIG undefined FUN_1457decbc(void)

void FUN_1457decbc(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144729dda(param_1 + 0x48);
  if (cVar1 == '\0') {
    return;
  }
  FUN_148b79628(param_1);
  return;
}



// FUNCTION 1457dece4 FUN_1457dece4 body=80 status=ok
// SIG undefined FUN_1457dece4(void)

void FUN_1457dece4(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_1457ded34(param_1,1);
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar1 = uVar2 & 8;
  if (DAT_14cb0d2b0 != 0) {
    *(uint *)(DAT_14cb0d2b0 + 0xe10) = *(uint *)(DAT_14cb0d2b0 + 0xe10) & 0xfffffffe | uVar1 >> 3;
    uVar2 = *(uint *)(param_1 + 0x30);
  }
  *(uint *)(param_1 + 0x30) = uVar2 & 0xffffffeb | uVar1 >> 1;
  return;
}



// FUNCTION 1457ded34 FUN_1457ded34 body=105 status=ok
// SIG undefined FUN_1457ded34(void)

void FUN_1457ded34(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x390) != 0)) {
    plVar2 = (longlong *)FUN_144a774fe();
    if (plVar2 != (longlong *)0x0) {
      *(byte *)(plVar2 + 0x73) = *(byte *)(plVar2 + 0x73) & 0xfd | (param_2 ^ 1) * '\x02';
      (**(code **)(*plVar2 + 0x638))(plVar2);
    }
  }
  *(uint *)(param_1 + 0x30) = (*(uint *)(param_1 + 0x30) & 0xffffffed) + (uint)param_2 * 2;
  return;
}



// FUNCTION 1457ded9e FUN_1457ded9e body=95 status=ok
// SIG undefined FUN_1457ded9e(void)

void FUN_1457ded9e(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x398) != '\0') {
    return;
  }
  lVar4 = FUN_1447210f0();
  if (((lVar4 != 0) && (iVar3 = FUN_14490d72a(lVar4), iVar3 == 3)) &&
     (cVar2 = FUN_14020697c(lVar4), cVar2 == '\0')) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x390) = 0;
  FUN_1457dedfe(param_1,uVar1);
  return;
}



// FUNCTION 1457dedfe FUN_1457dedfe body=191 status=ok
// SIG undefined FUN_1457dedfe(void)

void FUN_1457dedfe(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb9ec60;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb9ec6c = DAT_14cb9ec6c + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb9ec58 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb9ec58 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb9ec6c = DAT_14cb9ec6c + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_1457deea4;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cb9ec6c = DAT_14cb9ec6c + -1;
LAB_1457deea4:
  FUN_14474d06a(&DAT_14cb9ec58,0);
  return;
}



// FUNCTION 1457deecc FUN_1457deecc body=40 status=ok
// SIG undefined FUN_1457deecc(void)

undefined8 FUN_1457deecc(undefined8 param_1,int param_2)

{
  FUN_1457deef4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457deef4 FUN_1457deef4 body=92 status=ok
// SIG undefined FUN_1457deef4(void)

void FUN_1457deef4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b18b210;
  FUN_140fea6e0(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = &PTR_FUN_14b18a090;
  FUN_144a65a1e(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457def50 FUN_1457def50 body=12 status=ok
// SIG undefined FUN_1457def50(void)

void FUN_1457def50(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001457def59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1457def5c FUN_1457def5c body=31 status=ok
// SIG undefined FUN_1457def5c(void)

undefined8 FUN_1457def5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457def8a FUN_1457def8a body=40 status=ok
// SIG undefined FUN_1457def8a(void)

undefined8 FUN_1457def8a(undefined8 param_1,int param_2)

{
  FUN_140f4522c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457defb2 FUN_1457defb2 body=167 status=ok
// SIG undefined FUN_1457defb2(void)

void FUN_1457defb2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_140e96b86(param_3);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(char *)(lVar2 + 0x57) == '\0') {
      FUN_1446ddc76(local_38,&DAT_14b976c08,1);
      FUN_14100ab56(param_2,local_38);
    }
    else {
      lVar2 = FUN_14100ab60(*(undefined8 *)(param_2 + 8));
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457df074 FUN_1457df074 body=40 status=ok
// SIG undefined FUN_1457df074(void)

undefined8 FUN_1457df074(undefined8 param_1,int param_2)

{
  thunk_FUN_14071fe68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457df0aa FUN_1457df0aa body=8 status=ok
// SIG undefined FUN_1457df0aa(void)

longlong FUN_1457df0aa(longlong param_1)

{
  return param_1 + 0x98;
}



// FUNCTION 1457df0b2 FUN_1457df0b2 body=126 status=ok
// SIG undefined FUN_1457df0b2(void)

undefined8 FUN_1457df0b2(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1405fa766();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_144881120(param_1,&local_18);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1405fa766();
    uVar2 = FUN_144718840(lVar1,uVar2);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457df132 FUN_1457df132 body=132 status=ok
// SIG undefined FUN_1457df132(void)

void FUN_1457df132(longlong param_1,int param_2)

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



// FUNCTION 1457df1b8 FUN_1457df1b8 body=40 status=ok
// SIG undefined FUN_1457df1b8(void)

undefined8 FUN_1457df1b8(undefined8 param_1,int param_2)

{
  FUN_1457df1e0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457df1e0 FUN_1457df1e0 body=65 status=ok
// SIG undefined FUN_1457df1e0(void)

void FUN_1457df1e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc72e80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_1457df222(param_1);
  return;
}



// FUNCTION 1457df222 FUN_1457df222 body=65 status=ok
// SIG undefined FUN_1457df222(void)

void FUN_1457df222(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc72650;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_1457df264(param_1);
  return;
}



// FUNCTION 1457df264 FUN_1457df264 body=133 status=ok
// SIG undefined FUN_1457df264(void)

void FUN_1457df264(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc71640;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_1457df2ea(param_1);
  return;
}



// FUNCTION 1457df2ea FUN_1457df2ea body=99 status=ok
// SIG undefined FUN_1457df2ea(void)

void FUN_1457df2ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc701b0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_1457df34e(param_1);
  return;
}



// FUNCTION 1457df34e FUN_1457df34e body=123 status=ok
// SIG undefined FUN_1457df34e(void)

void FUN_1457df34e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc78960;
  FUN_140fed6e2(param_1 + 0x36);
  FUN_140fed6e2(param_1 + 0x32);
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 1457df3ca FUN_1457df3ca body=47 status=ok
// SIG undefined FUN_1457df3ca(void)

void FUN_1457df3ca(longlong param_1)

{
  FUN_1457df3fa();
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001457df3eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x2b0))();
    return;
  }
  return;
}



// FUNCTION 1457df3fa FUN_1457df3fa body=76 status=ok
// SIG undefined FUN_1457df3fa(void)

void FUN_1457df3fa(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1457df448(&local_20,param_1);
  *(undefined8 *)(param_1 + 0x50) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457df448 FUN_1457df448 body=239 status=ok
// SIG undefined FUN_1457df448(void)

undefined8 FUN_1457df448(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a79d330;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14a79bb80;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_145c8297c;
  FUN_140fee05c(&DAT_14cadbe60,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457df538 FUN_1457df538 body=24 status=ok
// SIG undefined FUN_1457df538(void)

bool FUN_1457df538(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1457df55e FUN_1457df55e body=40 status=ok
// SIG undefined FUN_1457df55e(void)

undefined8 FUN_1457df55e(undefined8 param_1,int param_2)

{
  FUN_1457df586();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457df586 FUN_1457df586 body=121 status=ok
// SIG undefined FUN_1457df586(void)

void FUN_1457df586(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8fa450;
  FUN_140feebe9(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140feebe9(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140feebe9(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457df600 FUN_1457df600 body=39 status=ok
// SIG undefined FUN_1457df600(void)

undefined8
FUN_1457df600(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  FUN_140fef818(param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 1457df652 FUN_1457df652 body=574 status=ok
// SIG undefined FUN_1457df652(void)

void FUN_1457df652(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *(longlong *)(param_1 + -0x10);
  if (local_70 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(local_70 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_70 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(local_70 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_70 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
        local_68 = (longlong *)(param_1 + 0x18);
        FUN_1457df892();
        lVar3 = 8;
        cVar6 = '\0';
        do {
          lVar1 = *local_68;
          lVar4 = FUN_1412868d8(local_70,cVar6);
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          local_50 = 3;
          *local_58 = &PTR_LAB_149e35290;
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 1;
          lVar2 = DAT_14c758608 + 1;
          if (lVar5 == 0) {
            LOCK();
            UNLOCK();
            lVar5 = DAT_14c758608 + 2;
            lVar2 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar2;
          local_58[2] = lVar5;
          *local_58 = &PTR_FUN_14b9a6b30;
          local_58[3] = param_1 + -0x30;
          *(char *)(local_58 + 4) = cVar6;
          FUN_140feff30(lVar4,&local_60,&local_58);
          FUN_1449db362(&local_58);
          *(undefined8 *)(lVar1 + -8 + lVar3) = local_60;
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          local_50 = 3;
          *local_58 = &PTR_LAB_149e35290;
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 1;
          lVar2 = DAT_14c758608 + 1;
          if (lVar5 == 0) {
            LOCK();
            UNLOCK();
            lVar5 = DAT_14c758608 + 2;
            lVar2 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar2;
          local_58[2] = lVar5;
          *local_58 = &PTR_FUN_14b9a6ba0;
          local_58[3] = param_1 + -0x30;
          *(char *)(local_58 + 4) = cVar6;
          FUN_140feff30(lVar4 + 0x18,&local_60,&local_58);
          FUN_1449db362(&local_58);
          *(undefined8 *)(lVar1 + lVar3) = local_60;
          lVar3 = lVar3 + 0x10;
          cVar6 = cVar6 + '\x01';
        } while (lVar3 != 0x68);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457df892 FUN_1457df892 body=122 status=ok
// SIG undefined FUN_1457df892(void)

void FUN_1457df892(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 6) {
    *(undefined4 *)(param_1 + 1) = 6;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 6U - iVar1) {
      FUN_1457df90c(param_1,iVar1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)(6U - iVar1) << 4);
    return;
  }
  if (iVar1 == 6) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 6;
  FUN_148e24290(param_1);
  return;
}



// FUNCTION 1457df90c FUN_1457df90c body=132 status=ok
// SIG undefined FUN_1457df90c(void)

void FUN_1457df90c(longlong param_1,int param_2)

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



// FUNCTION 1457df9b4 FUN_1457df9b4 body=44 status=ok
// SIG undefined FUN_1457df9b4(void)

undefined8 FUN_1457df9b4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar1,0);
  return 1;
}



// FUNCTION 1457df9e0 FUN_1457df9e0 body=37 status=ok
// SIG undefined FUN_1457df9e0(void)

void FUN_1457df9e0(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001457dfa01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 1457dfa18 FUN_1457dfa18 body=91 status=ok
// SIG undefined FUN_1457dfa18(void)

void FUN_1457dfa18(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1457dfa74(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1457dfaac(param_1 + 8);
  return;
}



// FUNCTION 1457dfa74 FUN_1457dfa74 body=55 status=ok
// SIG undefined FUN_1457dfa74(void)

void FUN_1457dfa74(longlong *param_1)

{
  FUN_140ff3cca(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457dfaac FUN_1457dfaac body=55 status=ok
// SIG undefined FUN_1457dfaac(void)

void FUN_1457dfaac(longlong *param_1)

{
  FUN_140ff3f10(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457dfaee FUN_1457dfaee body=47 status=ok
// SIG undefined FUN_1457dfaee(void)

undefined8 * FUN_1457dfaee(undefined8 *param_1)

{
  FUN_1457dfb1e();
  *param_1 = &PTR_FUN_14b211ae0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 1;
  FUN_140ff5708(param_1 + 0xd,1);
  return param_1;
}



// FUNCTION 1457dfb1e FUN_1457dfb1e body=32 status=ok
// SIG undefined FUN_1457dfb1e(void)

undefined8 * FUN_1457dfb1e(undefined8 *param_1)

{
  FUN_140e15f6a();
  *param_1 = &PTR_FUN_14a4a12c0;
  return param_1;
}



// FUNCTION 1457dfb3e FUN_1457dfb3e body=101 status=ok
// SIG undefined FUN_1457dfb3e(void)

void FUN_1457dfb3e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001457dfb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457dfba4 FUN_1457dfba4 body=74 status=ok
// SIG undefined FUN_1457dfba4(void)

ulonglong FUN_1457dfba4(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 unaff_RBX;
  bool bVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x188))();
  if (cVar1 == '\x01') {
    bVar3 = true;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x188))(param_1);
    bVar3 = cVar1 == '\x02';
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    bVar2 = (**(code **)(*(longlong *)param_1[3] + 0x3c8))();
    bVar3 = (bool)(bVar3 & (bVar2 ^ 1));
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3) & 0xffffffff;
}



// FUNCTION 1457dfbee FUN_1457dfbee body=9 status=ok
// SIG undefined FUN_1457dfbee(void)

void FUN_1457dfbee(longlong param_1)

{
  FUN_140ffd4ee(param_1 + 0x10);
  return;
}



// FUNCTION 1457dfbf8 FUN_1457dfbf8 body=135 status=ok
// SIG undefined FUN_1457dfbf8(void)

undefined8 FUN_1457dfbf8(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  if ((int)param_1[0x73] != *(int *)((longlong)param_1 + 0x3c4)) {
    plVar10 = param_1 + 0x79;
    if ((longlong *)param_1[0x7a] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x7a];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x7b] - 1U & *param_2) * 4);
    if (iVar11 != -1) {
      do {
        lVar7 = param_1[0x72] + (longlong)iVar11 * 0x38;
        if (*(uint *)(param_1[0x72] + (longlong)iVar11 * 0x38) == *param_2) {
          if ((undefined8 *)(lVar7 + 0x28) != (undefined8 *)0x0 && lVar7 != 0) {
            return *(undefined8 *)(lVar7 + 0x28);
          }
          break;
        }
        iVar11 = *(int *)(lVar7 + 0x30);
      } while (iVar11 != -1);
    }
  }
  if (*(code **)(*param_1 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)param_1 + 0x154) & 1) == 0) ||
       ((int)param_1[0x3a] <= *(int *)((longlong)param_1 + 0x1fc))) {
LAB_144837614:
      lVar7 = FUN_144837648(param_1,param_2,1);
      if (lVar7 == 0) {
        return 0;
      }
      FUN_14012a344(param_1,lVar7,0);
      puVar8 = (undefined8 *)(lVar7 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar4 == '\0') goto LAB_144837614;
  }
  puVar6 = (uint *)&DAT_14c948618;
  if (((*param_2 != 0) && (0 < (int)param_2[1])) && (*param_2 != DAT_14c948000)) {
    puVar6 = param_2 + 2;
    if (0 < (int)param_2[9]) {
      puVar6 = *(uint **)(param_2 + 6);
    }
    if (1 < param_2[1]) {
      puVar6 = *(uint **)(param_2 + 6);
    }
  }
  uVar2 = *puVar6;
  uVar3 = puVar6[2];
  uVar5 = uVar2;
  if (uVar3 != 0) {
    uVar5 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar3) - uVar5;
    uVar12 = uVar9 >> 0xd ^ (uVar3 - uVar5) - uVar9;
    uVar5 = uVar12 >> 0xc ^ (uVar5 - uVar9) - uVar12;
    uVar14 = uVar5 << 0x10 ^ (uVar9 - uVar12) - uVar5;
    uVar9 = uVar14 >> 5 ^ (uVar12 - uVar5) - uVar14;
    uVar12 = uVar9 >> 3 ^ (uVar5 - uVar14) - uVar9;
    uVar5 = uVar12 << 10 ^ (uVar14 - uVar9) - uVar12;
    uVar5 = uVar5 >> 0xf ^ uVar9 - (uVar12 + uVar5);
  }
  if ((int)param_1[0x3a] != *(int *)((longlong)param_1 + 0x1fc)) {
    plVar10 = param_1 + 0x40;
    if ((longlong *)param_1[0x41] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x41];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x42] - 1U & uVar5) * 4);
    if (iVar11 != -1) {
      lVar7 = param_1[0x39];
      while ((lVar13 = (longlong)iVar11 * 0x20, *(uint *)(lVar7 + lVar13) != uVar2 ||
             (lVar1 = lVar7 + lVar13, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar11 = *(int *)(lVar7 + 0x18 + lVar13);
        if (iVar11 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar8 = (undefined8 *)(lVar1 + 0x10);
      if (puVar8 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar8;
    }
  }
  return 0;
}



// FUNCTION 1457dfc85 FUN_1457dfc85 body=68 status=ok
// SIG undefined FUN_1457dfc85(void)

void FUN_1457dfc85(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14100142e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5d4530;
  puVar1[5] = &PTR_FUN_14b5d47e0;
  puVar1[10] = &PTR_FUN_14b5d4810;
  puVar1[0xb] = &PTR_FUN_14b5d4840;
  return;
}



// FUNCTION 1457dfcca FUN_1457dfcca body=40 status=ok
// SIG undefined FUN_1457dfcca(void)

undefined8 FUN_1457dfcca(undefined8 param_1,int param_2)

{
  FUN_141001552();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457dfd00 FUN_1457dfd00 body=40 status=ok
// SIG undefined FUN_1457dfd00(void)

undefined8 FUN_1457dfd00(undefined8 param_1,int param_2)

{
  FUN_1457dfd28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457dfd28 FUN_1457dfd28 body=82 status=ok
// SIG undefined FUN_1457dfd28(void)

void FUN_1457dfd28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b78ae70;
  FUN_141003128(param_1 + 6);
  FUN_1457dfd7a(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1457dfd7a FUN_1457dfd7a body=47 status=ok
// SIG undefined FUN_1457dfd7a(void)

void FUN_1457dfd7a(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x48;
    do {
      FUN_141003128(param_1);
      param_1 = param_1 + 0x170;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1457dfdc0 FUN_1457dfdc0 body=41 status=ok
// SIG undefined FUN_1457dfdc0(void)

void FUN_1457dfdc0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 1457dfdf2 FUN_1457dfdf2 body=99 status=ok
// SIG undefined FUN_1457dfdf2(void)

undefined8 * FUN_1457dfdf2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1410050b8();
  param_1[0xb] = uVar1;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 1457dfe56 FUN_1457dfe56 body=144 status=ok
// SIG undefined FUN_1457dfe56(void)

void FUN_1457dfe56(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc08);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x41) {
      uVar4 = 0x40;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0xc0c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x30,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x30)) {
        uVar4 = uVar3 / 0x30 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xc0c) = (int)uVar4;
    FUN_1457dfee6(param_1,param_2,uVar4,0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1457dfee6 FUN_1457dfee6 body=149 status=ok
// SIG undefined FUN_1457dfee6(void)

void FUN_1457dfee6(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc00);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x30);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc00,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc00),param_1,(longlong)param_2 * 0x30);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc00,param_2,param_3,param_4);
  return;
}



// FUNCTION 1457dff88 FUN_1457dff88 body=31 status=ok
// SIG undefined FUN_1457dff88(void)

undefined8 FUN_1457dff88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457dffb4 FUN_1457dffb4 body=31 status=ok
// SIG undefined FUN_1457dffb4(void)

undefined8 FUN_1457dffb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457dffe0 FUN_1457dffe0 body=31 status=ok
// SIG undefined FUN_1457dffe0(void)

undefined8 FUN_1457dffe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e000c FUN_1457e000c body=31 status=ok
// SIG undefined FUN_1457e000c(void)

undefined8 FUN_1457e000c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e002c FUN_1457e002c body=141 status=ok
// SIG undefined FUN_1457e002c(void)

void FUN_1457e002c(undefined8 param_1,longlong param_2)

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
    FUN_148d17d56(param_2);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_144117612;
  local_20 = &local_30;
  local_28 = FUN_14100743a;
  local_48 = param_2;
  FUN_1410070c8(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e00d0 FUN_1457e00d0 body=32 status=ok
// SIG undefined FUN_1457e00d0(void)

void FUN_1457e00d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1407afa82();
  if (lVar1 != 0) {
    FUN_140fb4310(lVar1);
    return;
  }
  return;
}



// FUNCTION 1457e00f0 FUN_1457e00f0 body=156 status=ok
// SIG undefined FUN_1457e00f0(void)

bool FUN_1457e00f0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e018e FUN_1457e018e body=252 status=ok
// SIG undefined FUN_1457e018e(void)

void FUN_1457e018e(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (DAT_14cbd5900 != 0) {
    FUN_145b16772(param_1 + 0x30);
    return;
  }
  iVar2 = FUN_140d8dbd3();
  if (param_2 < 0) {
    return;
  }
  if (iVar2 <= param_2) {
    return;
  }
  FUN_141008cba(param_1,param_2);
  FUN_141007e0c(param_1);
  lVar3 = FUN_140d8e3ae(param_1);
  if (lVar3 == 0) {
    return;
  }
  if (*(char *)(lVar3 + 0x147) != '\x01') {
    return;
  }
  plVar4 = (longlong *)FUN_141181ea8(param_1);
  lVar1 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1c0));
  *(int *)(lVar1 + 0x1b8) = *(int *)(lVar1 + 0x1b8) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1c0));
  iVar2 = FUN_141007d7a(lVar3,1,*(byte *)(lVar3 + 0x147) ^ 1);
  if (iVar2 == *(int *)(lVar1 + 0x50)) {
    if (*(int *)(lVar1 + 0x54) != 0) goto LAB_1457e0232;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x54) + 1;
  }
  *(int *)(lVar1 + 0x50) = iVar2;
  *(int *)(lVar1 + 0x54) = iVar5;
LAB_1457e0232:
  iVar2 = iVar2 - *(int *)(lVar3 + 0x94);
  iVar5 = 0;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  if (iVar5 == *(int *)(lVar1 + 0x60)) {
    if (*(int *)(lVar1 + 100) != 0) {
      return;
    }
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(lVar1 + 100) + 1;
  }
  *(int *)(lVar1 + 0x60) = iVar5;
  *(int *)(lVar1 + 100) = iVar2;
  return;
}



// FUNCTION 1457e028a FUN_1457e028a body=61 status=ok
// SIG undefined FUN_1457e028a(void)

void FUN_1457e028a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_1457e02c8(param_1);
    return;
  }
  FUN_141354349(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1457e02c8 FUN_1457e02c8 body=58 status=ok
// SIG undefined FUN_1457e02c8(void)

void FUN_1457e02c8(undefined8 *param_1,int param_2)

{
  FUN_141354349(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1457e0302(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1457e0302 FUN_1457e0302 body=95 status=ok
// SIG undefined FUN_1457e0302(void)

void FUN_1457e0302(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1457e0362 FUN_1457e0362 body=112 status=ok
// SIG undefined FUN_1457e0362(void)

void FUN_1457e0362(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (local_20 == 0) {
      local_20 = 0;
    }
    else {
      FUN_1456cec3c();
      local_20 = *(longlong *)(param_2 + 8);
    }
  }
  FUN_1447cd2ec(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e03d4 FUN_1457e03d4 body=543 status=ok
// SIG undefined FUN_1457e03d4(void)

void FUN_1457e03d4(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *(undefined1 *)(param_1 + 0x87a) = 0;
  if (param_1[0x841] != 0) {
    FUN_1407afb5c(param_1[0x841],1,1);
    FUN_141009ea0(param_1[0x841]);
  }
  if (*(char *)((longlong)param_1 + 0x422c) == '\x01') {
    (**(code **)(*param_1 + 0xf18))(param_1,0);
  }
  cVar1 = (**(code **)(*param_1 + 0xeb8))(param_1);
  if (cVar1 != '\0') {
    FUN_14880ef48(param_1,0);
    if (((longlong *)param_1[0x841] != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x841] + 0x700))(), cVar1 != '\0')) {
      *(byte *)(param_1 + 0x774) = *(byte *)(param_1 + 0x774) & 0xfe;
    }
  }
  cVar1 = (**(code **)(*param_1 + 0xf38))(param_1);
  if (cVar1 != '\0') {
    FUN_140153cb0(param_1,0);
    if (((longlong *)param_1[0x841] != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x841] + 0x700))(), cVar1 != '\0')) {
      *(byte *)(param_1 + 0x88b) = *(byte *)(param_1 + 0x88b) & 0xfe;
    }
  }
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] != '\x01') {
      return;
    }
    plVar5 = param_1 + 0x642;
  }
  else {
    plVar5 = (longlong *)(param_1[0x62e] + 0xd8);
  }
  lVar2 = FUN_140153468(plVar5);
  if ((((lVar2 != 0) && ((*(byte *)(plVar5 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) &&
     ((param_1[0x15] != 0 && (1 < *(byte *)(param_1[0x15] + 0x178))))) {
    if (param_1[0x62e] == 0) {
      if ((char)param_1[0x696] != '\x01') {
        return;
      }
      plVar5 = param_1 + 0x642;
    }
    else {
      plVar5 = (longlong *)(param_1[0x62e] + 0xd8);
    }
    if ((plVar5 != (longlong *)0x0) && (cVar1 = FUN_143cf5d7e(plVar5), cVar1 != '\0')) {
      if (param_1[0x62e] == 0) {
        if ((char)param_1[0x696] != '\x01') {
          return;
        }
        plVar4 = param_1 + 0x642;
      }
      else {
        plVar4 = (longlong *)(param_1[0x62e] + 0xd8);
      }
      lVar2 = FUN_140153468(plVar4);
      if (lVar2 != 0) {
        lVar3 = FUN_140fd5728();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           ((*(byte *)(lVar2 + 0xc90) & 1) == 0)) {
          *(byte *)((longlong)plVar5 + 0x299) = *(byte *)((longlong)plVar5 + 0x299) | 2;
          thunk_FUN_141105774(param_1,lVar2,2);
          *(byte *)((longlong)plVar5 + 0x299) = *(byte *)((longlong)plVar5 + 0x299) & 0xfd;
        }
      }
    }
  }
  return;
}



// FUNCTION 1457e05f4 FUN_1457e05f4 body=70 status=ok
// SIG undefined FUN_1457e05f4(void)

void FUN_1457e05f4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  if (((iVar1 != 0x1010) && (iVar1 != 0x1040)) && (iVar1 != 0x1030)) {
    return;
  }
  if ((*param_1 != *param_2) || ((int)param_1[1] != iVar1)) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_140a3e398(param_1 + 4);
  return;
}



// FUNCTION 1457e063a FUN_1457e063a body=331 status=ok
// SIG undefined FUN_1457e063a(void)

void FUN_1457e063a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_2 != (longlong *)0x0) &&
       (lVar3 = (**(code **)(*param_2 + 0x4b0))(param_2), *(int *)(lVar3 + 8) != 0)) &&
      (param_1[0x1ca] != 0)) && (param_1[0x1cc] != 0)) {
    if ((longlong)(int)param_1[0x336] != 0) {
      lVar3 = param_1[0x335];
      lVar4 = (longlong)(int)param_1[0x336] << 3;
      do {
        cVar2 = FUN_14100b438(lVar3,param_2);
        if (cVar2 != '\0') goto LAB_1457e0776;
        lVar3 = lVar3 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    local_30 = 0;
    FUN_14485c47a(&local_30,param_2);
    iVar1 = (int)param_1[0x336];
    *(uint *)(param_1 + 0x336) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x19b4) < iVar1 + 1U) {
      FUN_1457e0798(param_1 + 0x335,iVar1);
    }
    *(undefined8 *)(param_1[0x335] + (longlong)iVar1 * 8) = local_30;
    if ((int)param_1[0x336] == (int)param_1[0x2f5] - *(int *)((longlong)param_1 + 0x17d4)) {
      (**(code **)(*param_1 + 0xc60))(param_1);
      (**(code **)(*(longlong *)param_1[0x1ca] + 0x48))();
      FUN_14100af5c(param_1[0x1cc]);
    }
    FUN_1448c6f34(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
LAB_1457e0776:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457e0798 FUN_1457e0798 body=132 status=ok
// SIG undefined FUN_1457e0798(void)

void FUN_1457e0798(longlong param_1,int param_2)

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



// FUNCTION 1457e082a FUN_1457e082a body=45 status=ok
// SIG undefined FUN_1457e082a(void)

undefined8 FUN_1457e082a(undefined8 param_1,int param_2)

{
  FUN_1457e0858();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1457e0858 FUN_1457e0858 body=57 status=ok
// SIG undefined FUN_1457e0858(void)

void FUN_1457e0858(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3588b0;
  FUN_1447cd778(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_14100c744(param_1);
  return;
}



// FUNCTION 1457e0892 FUN_1457e0892 body=827 status=ok
// SIG undefined FUN_1457e0892(void)

void FUN_1457e0892(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  code *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + -6;
  lVar3 = param_1[-2];
  if (lVar3 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_14492b4b4(lVar3);
      if (lVar2 != 0) {
        local_58 = FUN_14607a07e;
        local_50 = local_50 & 0xffffffff00000000;
        FUN_1457e0e08(lVar2,&local_60,plVar1);
        param_1[4] = local_60;
      }
      local_58 = FUN_141177f70;
      local_50 = local_50 & 0xffffffff00000000;
      FUN_1457e0f08(lVar3 + 0x6170,&local_60,plVar1);
      param_1[3] = local_60;
      lVar2 = FUN_140519fd4(lVar3);
      if (lVar2 != 0) {
        local_58 = FUN_140c1c5e4;
        local_50 = local_50 & 0xffffffff00000000;
        FUN_1457e1008(lVar2,&local_60,plVar1);
        param_1[5] = local_60;
      }
      lVar2 = *(longlong *)(&DAT_00006850 + lVar3);
      if (lVar2 != 0) {
        FUN_140f2435e(&local_68);
        local_58 = (code *)0x0;
        FUN_14485c47a(&local_58,plVar1);
        local_50 = local_68;
        FUN_14113f0c0(&local_58);
        FUN_14053c012(lVar2 + 0x3688,&local_58);
        FUN_140f242ac(&local_70);
        local_58 = (code *)0x0;
        FUN_14485c47a(&local_58,plVar1);
        local_50 = local_70;
        FUN_14113f0c0(&local_58);
        FUN_14053c012(lVar2 + 0x3698,&local_58);
      }
      FUN_145881e1a(&local_78);
      FUN_1457e0bce(lVar3 + 0x3d4,plVar1,local_78);
      FUN_1457e0c58(&local_80);
      local_58 = (code *)0x0;
      FUN_14485c47a(&local_58,plVar1);
      local_50 = local_80;
      FUN_14113f0c0(&local_58);
      FUN_14053c012(lVar3 + 0x7f28,&local_58);
      local_58 = FUN_1461b23c6;
      local_50 = local_50 & 0xffffffff00000000;
      FUN_1457e0d08(lVar3 + 0x3f80,&local_60,plVar1,&local_58);
      param_1[8] = local_60;
    }
  }
  lVar3 = FUN_14011be0c(param_1);
  if (lVar3 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_58 = FUN_140cf457c;
      local_50 = local_50 & 0xffffffff00000000;
      FUN_1457e1108(lVar3 + 0x32d0,&local_60,plVar1);
      param_1[6] = local_60;
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x78))(param_1);
  if (lVar3 != 0) {
    lVar2 = FUN_14030d4a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_58 = FUN_148e26c58;
      local_50 = local_50 & 0xffffffff00000000;
      FUN_1457e0d08(lVar3 + 0x400,&local_60,plVar1);
      param_1[7] = local_60;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e0bce FUN_1457e0bce body=137 status=ok
// SIG undefined FUN_1457e0bce(void)

void FUN_1457e0bce(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_1410d8386(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x3d4,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e0c58 FUN_1457e0c58 body=174 status=ok
// SIG undefined FUN_1457e0c58(void)

undefined8 * FUN_1457e0c58(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6270) {
    FUN_144b3d300(&DAT_14cbd6270);
    if (DAT_14cbd6270 == -1) {
      builtin_wcsncpy(local_38 + 8,L"Changed",8);
      builtin_wcsncpy(local_38,L"OnUXName",8);
      FUN_1446f470e(&DAT_14cbd6268,local_38,1);
      _Init_thread_footer(&DAT_14cbd6270);
    }
  }
  *param_1 = DAT_14cbd6268;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e0d08 FUN_1457e0d08 body=254 status=ok
// SIG undefined FUN_1457e0d08(void)

undefined8
FUN_1457e0d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a9b70;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e0e08 FUN_1457e0e08 body=254 status=ok
// SIG undefined FUN_1457e0e08(void)

undefined8
FUN_1457e0e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ac8da20;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a99d0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140367cc6(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e0f08 FUN_1457e0f08 body=254 status=ok
// SIG undefined FUN_1457e0f08(void)

undefined8
FUN_1457e0f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4aa9f0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a9a40;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14100c9d8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e1008 FUN_1457e1008 body=254 status=ok
// SIG undefined FUN_1457e1008(void)

undefined8
FUN_1457e1008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ac89870;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a9ab0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140d0168e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e1108 FUN_1457e1108 body=254 status=ok
// SIG undefined FUN_1457e1108(void)

undefined8
FUN_1457e1108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e06450;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a9be0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e1208 FUN_1457e1208 body=12 status=ok
// SIG undefined FUN_1457e1208(void)

void FUN_1457e1208(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001457e1211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1457e1214 FUN_1457e1214 body=31 status=ok
// SIG undefined FUN_1457e1214(void)

undefined8 FUN_1457e1214(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457e1233 FUN_1457e1233 body=49 status=ok
// SIG undefined FUN_1457e1233(void)

void FUN_1457e1233(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14101057a(puVar1);
  *puVar1 = &PTR_FUN_14b547450;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  return;
}



// FUNCTION 1457e1264 FUN_1457e1264 body=94 status=ok
// SIG undefined FUN_1457e1264(void)

void FUN_1457e1264(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_2 + 0x4a8); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    FUN_1457e1318(puVar1[2],param_1);
  }
  FUN_1457e12c2(param_1 + 0x4a8,param_2 + 0x4a8);
  FUN_141015a7a(param_1 + 0x28,param_2 + 0x28);
  return;
}



// FUNCTION 1457e12c2 FUN_1457e12c2 body=85 status=ok
// SIG undefined FUN_1457e12c2(void)

void FUN_1457e12c2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (((0 < (int)param_2[2]) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) &&
     (param_2[1] != 0)) {
    do {
      plVar1[3] = (longlong)param_1;
      plVar1 = (longlong *)*plVar1;
    } while (plVar1 != (longlong *)0x0);
    plVar1 = (longlong *)param_1[1];
    *(longlong **)(*param_2 + 8) = plVar1;
    if (plVar1 == (longlong *)0x0) {
      plVar1 = param_1;
    }
    *plVar1 = *param_2;
    param_1[1] = param_2[1];
    *(int *)(param_1 + 2) = (int)param_1[2] + (int)param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1457e1318 FUN_1457e1318 body=115 status=ok
// SIG undefined FUN_1457e1318(void)

void FUN_1457e1318(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar2 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x120);
  *(longlong *)(param_1 + 0x120) = lVar4;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x10c);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x844) = *(undefined4 *)(param_2 + 4);
    uVar2 = param_2[3];
    *(undefined8 *)(lVar4 + 0x834) = param_2[2];
    *(undefined8 *)(lVar4 + 0x83c) = uVar2;
  }
  return;
}



// FUNCTION 1457e138c FUN_1457e138c body=261 status=ok
// SIG undefined FUN_1457e138c(void)

undefined4 * FUN_1457e138c(longlong param_1,undefined4 *param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141016232(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_14101618c(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    cVar1 = FUN_141015e74(param_1,*(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x42c));
    if (cVar1 == '\0') {
      uVar3 = (longlong)param_3 & (longlong)*(int *)(param_1 + 0x478) - 1U;
      iVar2 = (int)uVar3;
      *(int *)((longlong)local_40 + 0x1c) = iVar2;
      lVar4 = *(longlong *)(param_1 + 0x470);
      if (*(longlong *)(param_1 + 0x470) == 0) {
        lVar4 = param_1 + 0x430;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x478) - 1U & uVar3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x470);
      if (*(longlong *)(param_1 + 0x470) == 0) {
        lVar4 = param_1 + 0x430;
      }
      *(undefined4 *)(lVar4 + ((longlong)iVar2 & (longlong)*(int *)(param_1 + 0x478) - 1U) * 4) =
           local_48[0];
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e153e FUN_1457e153e body=170 status=ok
// SIG undefined FUN_1457e153e(void)

longlong FUN_1457e153e(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1457e15e8(param_1);
    if (*(longlong *)(param_2 + 0x418) == 0) {
      *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
    }
    if (*(longlong *)(param_1 + 0x418) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_2 + 0x418);
    *(undefined8 *)(param_2 + 0x418) = 0;
    *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
    *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(param_2 + 0x424);
    *(undefined8 *)(param_2 + 0x420) = 0;
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
    *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x42c);
    *(undefined8 *)(param_2 + 0x428) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1457e15e8 FUN_1457e15e8 body=139 status=ok
// SIG undefined FUN_1457e15e8(void)

void * FUN_1457e15e8(void *param_1,void *param_2)

{
  if (param_1 != param_2) {
    if (*(longlong *)((longlong)param_2 + 0x400) == 0) {
      memmove(param_1,param_2,0x400);
    }
    if (*(longlong *)((longlong)param_1 + 0x400) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)param_1 + 0x400) = *(undefined8 *)((longlong)param_2 + 0x400);
    *(undefined8 *)((longlong)param_2 + 0x400) = 0;
    *(undefined4 *)((longlong)param_1 + 0x408) = *(undefined4 *)((longlong)param_2 + 0x408);
    *(undefined4 *)((longlong)param_1 + 0x40c) = *(undefined4 *)((longlong)param_2 + 0x40c);
    *(undefined8 *)((longlong)param_2 + 0x408) = 0x2000000000;
  }
  return param_1;
}



// FUNCTION 1457e1674 FUN_1457e1674 body=400 status=ok
// SIG undefined FUN_1457e1674(void)

void FUN_1457e1674(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14101741c();
  lVar4 = *param_2;
  if (0 < *(int *)(param_1 + 0xd00)) {
    lVar6 = FUN_14101b328(param_1 + 0xcf8,0);
    if ((*(int *)(lVar6 + 0x78) != 0) && (0 < *(int *)(param_1 + 0xd60))) {
      lVar6 = FUN_14101b328(param_1 + 0xd58,0);
      if (*(int *)(lVar6 + 0x78) != 0) {
        bVar5 = *(byte *)(param_1 + 0xcf0);
        if ((bVar5 & 1) != 0) {
          FUN_14101835a(param_1 + 0xcf8,param_1);
          local_68 = DAT_14c8464f0;
          local_78 = (undefined4)DAT_14c8464e0;
          uStack_74 = DAT_14c8464e0._4_4_;
          uStack_70 = (undefined4)DAT_14c8464e8;
          uStack_6c = DAT_14c8464e8._4_4_;
          uVar2 = *(undefined4 *)(param_1 + 0x18c4);
          local_58 = (undefined4)DAT_14c8464e0;
          uStack_54 = DAT_14c8464e0._4_4_;
          uStack_50 = (undefined4)DAT_14c8464e8;
          uStack_4c = DAT_14c8464e8._4_4_;
          local_48 = DAT_14c8464f0;
          iVar3 = *(int *)(lVar4 + 0xf0);
          *(uint *)(lVar4 + 0xf0) = iVar3 + 1U;
          if (*(uint *)(lVar4 + 0xf4) < iVar3 + 1U) {
            FUN_1457e1806((longlong *)(lVar4 + 0xe8),iVar3);
          }
          lVar6 = *(longlong *)(lVar4 + 0xe8);
          lVar7 = (longlong)iVar3 * 0x60;
          *(longlong *)(lVar6 + lVar7) = param_1 + 0x16f0;
          puVar1 = (undefined8 *)(lVar6 + 8 + lVar7);
          *puVar1 = CONCAT44(uStack_74,local_78);
          puVar1[1] = CONCAT44(uStack_6c,uStack_70);
          *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_68;
          *(undefined4 *)(lVar6 + 0x20 + lVar7) = uVar2;
          *(undefined4 *)(lVar6 + 0x24 + lVar7) = 0;
          *(undefined4 *)(lVar6 + 0x28 + lVar7) = uVar2;
          *(undefined8 *)(lVar6 + 0x2c + lVar7) = 0x1000000000000;
          puVar1 = (undefined8 *)(lVar6 + 0x34 + lVar7);
          *puVar1 = CONCAT44(local_58,uStack_5c);
          puVar1[1] = CONCAT44(uStack_50,uStack_54);
          puVar1 = (undefined8 *)(lVar6 + 0x40 + lVar7);
          *puVar1 = CONCAT44(uStack_4c,uStack_50);
          puVar1[1] = local_48;
          puVar1 = (undefined8 *)(lVar6 + 0x50 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          bVar5 = *(byte *)(param_1 + 0xcf0);
        }
        goto LAB_1457e17cb;
      }
    }
  }
  *(undefined1 *)(param_1 + 0xcf0) = 0;
  bVar5 = 0;
LAB_1457e17cb:
  *(byte *)(lVar4 + 0xf8) = bVar5;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457e1806 FUN_1457e1806 body=147 status=ok
// SIG undefined FUN_1457e1806(void)

void FUN_1457e1806(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457e189a FUN_1457e189a body=21 status=ok
// SIG undefined FUN_1457e189a(void)

undefined8 FUN_1457e189a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1457e18b6 FUN_1457e18b6 body=26 status=ok
// SIG undefined FUN_1457e18b6(void)

void FUN_1457e18b6(undefined8 param_1)

{
  FUN_1457e18d0();
  FUN_140350f1c(param_1);
  return;
}



// FUNCTION 1457e18d0 FUN_1457e18d0 body=1 status=ok
// SIG undefined FUN_1457e18d0(void)

void FUN_1457e18d0(void)

{
  return;
}



// FUNCTION 1457e18d1 FUN_1457e18d1 body=76 status=ok
// SIG undefined FUN_1457e18d1(void)

longlong * FUN_1457e18d1(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14027c0e6();
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    FUN_140d76916(param_1,1);
    FUN_1457e191e(param_1,&DAT_14cbc6978,param_3);
  }
  return param_1;
}



// FUNCTION 1457e191e FUN_1457e191e body=132 status=ok
// SIG undefined FUN_1457e191e(void)

longlong * FUN_1457e191e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar4 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar4,iVar1);
    }
    lVar2 = *plVar4;
    lVar5 = (longlong)iVar1 * 0x30;
    uVar3 = *param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar5) = 0;
    FUN_14101bd16(lVar2 + lVar5,uVar3);
    *(undefined8 *)(lVar2 + 0x28 + lVar5) = *param_2;
  }
  return param_1;
}



// FUNCTION 1457e19a2 FUN_1457e19a2 body=199 status=ok
// SIG undefined FUN_1457e19a2(void)

undefined4 FUN_1457e19a2(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_1457e1a6a();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_14101c9ce(lVar3,&local_28);
    uVar4 = (ulonglong)(int)local_20;
    iVar1 = 0;
    if ((longlong)uVar4 < 2) {
      uVar2 = 0;
    }
    else {
      lVar3 = 0;
      iVar5 = 0;
      do {
        iVar1 = iVar1 + (*(byte *)(local_28 + 0x10 + lVar3) ^ 1);
        iVar5 = iVar5 + (uint)*(byte *)(local_28 + 0x34 + lVar3);
        lVar3 = lVar3 + 0x38;
      } while (uVar4 * 0x38 - lVar3 != 0);
      uVar2 = 0;
      if ((iVar5 != 0) && (iVar1 != 0)) {
        uVar2 = FUN_1457e1ab0(param_1);
        uVar4 = (ulonglong)local_20;
      }
    }
    FUN_14101c9fb(local_28,uVar4);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


