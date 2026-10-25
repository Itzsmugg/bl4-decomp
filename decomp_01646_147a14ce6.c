// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147a14ce6 FUN_147a14ce6 body=89 status=ok
// SIG undefined FUN_147a14ce6(void)

void FUN_147a14ce6(longlong param_1)

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



// FUNCTION 147a14d40 FUN_147a14d40 body=96 status=ok
// SIG undefined FUN_147a14d40(void)

void FUN_147a14d40(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 147a14da0 FUN_147a14da0 body=48 status=ok
// SIG undefined FUN_147a14da0(void)

void FUN_147a14da0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 147a14dd0 FUN_147a14dd0 body=119 status=ok
// SIG undefined FUN_147a14dd0(void)

void FUN_147a14dd0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar1 = (uint)(uVar2 >> 3);
      uVar3 = 0x7fffffff;
      if ((int)param_2 <= (int)uVar1) {
        uVar3 = uVar1;
      }
    }
  }
  if (((int)param_3 < (int)uVar3) &&
     ((param_3 = uVar3, 8 < uVar3 || (*(longlong *)(param_1 + 0x40) != 0)))) {
    uVar1 = 0;
    if (8 < uVar3) {
      uVar1 = uVar3;
    }
    FUN_1446efa72(param_1 + 0x40,0,uVar1,8);
  }
  *(uint *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 147a14e47 FUN_147a14e47 body=82 status=ok
// SIG undefined FUN_147a14e47(void)

void FUN_147a14e47(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
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
  }
  return;
}



// FUNCTION 147a14e9a FUN_147a14e9a body=152 status=ok
// SIG undefined FUN_147a14e9a(void)

void FUN_147a14e9a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  FUN_140ee6e38(param_2,(ulonglong)uVar1);
  if (param_1[0x1d] != 0) {
    FUN_1406f47cc(param_2,param_1[0x1d] + 0x10);
    return;
  }
  FUN_1407a57f6(param_2);
  if (0 < (int)uVar1) {
    lVar2 = param_1[9];
    lVar4 = 0;
    uVar7 = 0;
    do {
      puVar5 = (undefined8 *)
               ((ulonglong)((uint)*(ushort *)(*param_1 + uVar7 * 2) * 0x60) +
               *(longlong *)(lVar2 + 0x30));
      puVar6 = (undefined8 *)(*param_2 + lVar4);
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      uVar7 = uVar7 + 1;
      lVar4 = lVar4 + 0x60;
    } while (uVar1 != uVar7);
  }
  return;
}



// FUNCTION 147a14f32 FUN_147a14f32 body=69 status=ok
// SIG undefined FUN_147a14f32(void)

void FUN_147a14f32(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14349703a(param_1 + 0x15);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a14f6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147a14f78 FUN_147a14f78 body=73 status=ok
// SIG undefined FUN_147a14f78(void)

void FUN_147a14f78(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    puVar2 = param_1;
  }
  FUN_1434971f2(param_1 + 0x15);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147a14fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147a14fc2 FUN_147a14fc2 body=98 status=ok
// SIG undefined FUN_147a14fc2(void)

void FUN_147a14fc2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a15024 FUN_147a15024 body=122 status=ok
// SIG undefined FUN_147a15024(void)

void FUN_147a15024(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 147a1509e FUN_147a1509e body=326 status=ok
// SIG undefined FUN_147a1509e(void)

void FUN_147a1509e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 147a151e6 FUN_147a151e6 body=423 status=ok
// SIG undefined FUN_147a151e6(void)

void FUN_147a151e6(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 147a1538e FUN_147a1538e body=322 status=ok
// SIG undefined FUN_147a1538e(void)

void FUN_147a1538e(longlong *param_1)

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



// FUNCTION 147a154d2 FUN_147a154d2 body=48 status=ok
// SIG undefined FUN_147a154d2(void)

void FUN_147a154d2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 147a15502 FUN_147a15502 body=89 status=ok
// SIG undefined FUN_147a15502(void)

void FUN_147a15502(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x58 + *param_1);
  FUN_1403c61a8(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x58 + (longlong)_Dst),(longlong)iVar2 * 0x58);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147a1555c FUN_147a1555c body=62 status=ok
// SIG undefined FUN_147a1555c(void)

void FUN_147a1555c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a1559a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 147a1559a FUN_147a1559a body=104 status=ok
// SIG undefined FUN_147a1559a(void)

ulonglong FUN_147a1559a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147a155d0;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_147a155d0:
  return param_2 & 0xffffffff;
}



// FUNCTION 147a15602 FUN_147a15602 body=282 status=ok
// SIG undefined FUN_147a15602(void)

undefined4 * FUN_147a15602(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147a1571e(param_1,local_48);
  FUN_147a158b8(param_3,local_40);
  local_40[10] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_147a1580c(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0xb] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[10] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147a151e6(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1571e FUN_147a1571e body=238 status=ok
// SIG undefined FUN_147a1571e(void)

int * FUN_147a1571e(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 147a1580c FUN_147a1580c body=172 status=ok
// SIG undefined FUN_147a1580c(void)

undefined8 FUN_147a1580c(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(int *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          if (*(longlong *)(piVar1 + 4) != 0) {
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
          *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(param_3 + 8);
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147a15024(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = piVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 147a158b8 FUN_147a158b8 body=141 status=ok
// SIG undefined FUN_147a158b8(void)

undefined4 * FUN_147a158b8(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  FUN_1446f470e(&local_40,L"Unknown ExternalMorphSetWeights",1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0x3a83126f00000000;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = local_40;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0x3a83126f00000000;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a15946 FUN_147a15946 body=96 status=ok
// SIG undefined FUN_147a15946(void)

void FUN_147a15946(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 147a159a6 FUN_147a159a6 body=147 status=ok
// SIG undefined FUN_147a159a6(void)

void FUN_147a159a6(longlong param_1,int param_2)

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



// FUNCTION 147a15a3a FUN_147a15a3a body=113 status=ok
// SIG undefined FUN_147a15a3a(void)

void FUN_147a15a3a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 147a15aac FUN_147a15aac body=147 status=ok
// SIG undefined FUN_147a15aac(void)

void FUN_147a15aac(longlong param_1,int param_2)

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



// FUNCTION 147a15b40 FUN_147a15b40 body=62 status=ok
// SIG undefined FUN_147a15b40(void)

void FUN_147a15b40(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a15b7e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147a15b7e FUN_147a15b7e body=93 status=ok
// SIG undefined FUN_147a15b7e(void)

ulonglong FUN_147a15b7e(uint param_1,uint param_2)

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



// FUNCTION 147a15bdc FUN_147a15bdc body=74 status=ok
// SIG undefined FUN_147a15bdc(void)

void FUN_147a15bdc(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 2) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) << 3);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 147a15c26 FUN_147a15c26 body=132 status=ok
// SIG undefined FUN_147a15c26(void)

void FUN_147a15c26(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 147a15caa FUN_147a15caa body=124 status=ok
// SIG undefined FUN_147a15caa(void)

void FUN_147a15caa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_147a15c26(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a15d28 FUN_147a15d28 body=92 status=ok
// SIG undefined FUN_147a15d28(void)

void FUN_147a15d28(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 8;
    if (8 < param_2) {
      iVar1 = FUN_144a3809e(param_2,0);
      iVar2 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar2 = iVar1;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = iVar2;
    FUN_146f2ef2e(param_1,*(undefined4 *)(param_1 + 0x10),iVar2,1);
    return;
  }
  return;
}



// FUNCTION 147a15d84 FUN_147a15d84 body=144 status=ok
// SIG undefined FUN_147a15d84(void)

void FUN_147a15d84(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 8;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,8,8);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147a15e14 FUN_147a15e14 body=132 status=ok
// SIG undefined FUN_147a15e14(void)

void FUN_147a15e14(longlong param_1,int param_2)

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



// FUNCTION 147a15e9a FUN_147a15e9a body=124 status=ok
// SIG undefined FUN_147a15e9a(void)

void FUN_147a15e9a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_147a15f16(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(~uVar5 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != uVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1458b315c(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  return;
}



// FUNCTION 147a15f16 FUN_147a15f16 body=53 status=ok
// SIG undefined FUN_147a15f16(void)

ulonglong FUN_147a15f16(int *param_1,int *param_2)

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



// FUNCTION 147a15f4c FUN_147a15f4c body=268 status=ok
// SIG undefined FUN_147a15f4c(void)

void FUN_147a15f4c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_147a15f16(lVar2,*param_2);
    iVar10 = 0;
    iVar7 = 0;
    do {
      lVar11 = (longlong)iVar7;
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar12 = lVar2 + 8 + lVar11 * 8;
      iVar8 = iVar7;
      lVar6 = lVar11;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar13 <= lVar6) break;
        bVar5 = FUN_147a15f16(lVar12,*param_2);
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 8;
        iVar9 = iVar8;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar10 != iVar7) {
          memmove((void *)(lVar2 + (longlong)iVar10 * 8),(void *)(lVar2 + lVar11 * 8),
                  (longlong)(iVar9 - iVar7) << 3);
        }
        iVar10 = iVar10 + (iVar9 - iVar7);
      }
      iVar7 = iVar9;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar13);
    *(int *)(param_1 + 1) = iVar10;
  }
  return;
}



// FUNCTION 147a16058 FUN_147a16058 body=329 status=ok
// SIG undefined FUN_147a16058(void)

void FUN_147a16058(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x84 + (longlong)iVar4 * 0x90) * 4) =
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



// FUNCTION 147a161a2 FUN_147a161a2 body=311 status=ok
// SIG undefined FUN_147a161a2(void)

undefined4 * FUN_147a161a2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147a162da(param_1,local_50);
  puVar8 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  puVar9 = local_48 + 4;
  for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 2;
  }
  local_48[0x20] = 0xffffffff;
  local_54 = local_50[0];
  cVar2 = FUN_147a163ca(param_1,uVar4,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar3) {
      uVar6 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[0x21] = uVar4;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_48[0x20] =
           *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147a164dc(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a162da FUN_147a162da body=240 status=ok
// SIG undefined FUN_147a162da(void)

int * FUN_147a162da(longlong *param_1,int *param_2)

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
      FUN_146ceb2ee(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 147a163ca FUN_147a163ca body=151 status=ok
// SIG undefined FUN_147a163ca(void)

undefined8 FUN_147a163ca(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x90);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x90) == *param_3) {
          memmove(_Dst,param_3,0x80);
          FUN_147a16462(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x80);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147a16462 FUN_147a16462 body=122 status=ok
// SIG undefined FUN_147a16462(void)

void FUN_147a16462(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 147a164dc FUN_147a164dc body=433 status=ok
// SIG undefined FUN_147a164dc(void)

void FUN_147a164dc(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x90;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x84 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x80 + lVar7) =
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



// FUNCTION 147a1668e FUN_147a1668e body=48 status=ok
// SIG undefined FUN_147a1668e(void)

void FUN_147a1668e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a166be FUN_147a166be body=29 status=ok
// SIG undefined FUN_147a166be(void)

undefined8 FUN_147a166be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a166dc FUN_147a166dc body=115 status=ok
// SIG undefined FUN_147a166dc(void)

void FUN_147a166dc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147a16750 FUN_147a16750 body=147 status=ok
// SIG undefined FUN_147a16750(void)

void FUN_147a16750(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a167e4 FUN_147a167e4 body=175 status=ok
// SIG undefined FUN_147a167e4(void)

void FUN_147a167e4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a16894(param_1,&local_38,local_28);
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a16894 FUN_147a16894 body=188 status=ok
// SIG undefined FUN_147a16894(void)

undefined4 * FUN_147a16894(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_128 [40];
  undefined4 local_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  ulonglong local_f0;
  undefined4 local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  ulonglong local_d8;
  undefined1 local_d0 [168];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_3 != 0) {
    FUN_140335938(local_d0,param_1);
    FUN_1479dca76(param_3,&local_100);
    local_d8 = local_f0 ^ 0x8000000000000000;
    uStack_e4 = uStack_fc ^ 0x80000000;
    uStack_dc = uStack_f4 ^ 0x80000000;
    local_e8 = local_100;
    uStack_e0 = uStack_f8;
    FUN_14493787c(local_d0,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_128);
  }
  *param_2 = 0x3f800000;
  param_2[1] = 0x3f800000;
  param_2[2] = 0x3f800000;
  param_2[3] = 0x3f800000;
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a16952 FUN_147a16952 body=249 status=ok
// SIG undefined FUN_147a16952(void)

void FUN_147a16952(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_48 = local_28;
  uVar1 = FUN_147a16a4c(param_1,&local_58,local_3c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a16a4c FUN_147a16a4c body=156 status=ok
// SIG undefined FUN_147a16a4c(void)

float FUN_147a16a4c(undefined8 param_1,undefined8 param_2,float param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [16];
  undefined1 local_d8 [168];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140335938(local_d8,param_1);
  FUN_14493787c(local_d8,local_e8,param_2);
  uVar1 = FUN_14029dc1a();
  fVar2 = (float)FUN_1467a8034(uVar1,local_e8);
  fVar3 = 1e-08;
  if (1e-08 <= fVar2) {
    fVar3 = fVar2;
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_3 / fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a16aea FUN_147a16aea body=232 status=ok
// SIG undefined FUN_147a16aea(void)

void FUN_147a16aea(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (ulonglong)local_24;
  if (uVar2 < 2) {
    local_38 = *(undefined8 *)(param_1 + 0x370 + uVar2 * 0x18);
    puVar1 = (undefined4 *)(param_1 + 0x360 + uVar2 * 0x18);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
  }
  else {
    local_38 = DAT_14c8464f0;
    local_48 = (undefined4)DAT_14c8464e0;
    uStack_44 = DAT_14c8464e0._4_4_;
    uStack_40 = (undefined4)DAT_14c8464e8;
    uStack_3c = DAT_14c8464e8._4_4_;
  }
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a16bda FUN_147a16bda body=170 status=ok
// SIG undefined FUN_147a16bda(void)

void FUN_147a16bda(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  uint local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((ulonglong)local_24 < 2) {
    uVar1 = *(undefined1 *)(param_1 + 0x358 + (ulonglong)local_24);
  }
  else {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a16c86 FUN_147a16c86 body=234 status=ok
// SIG undefined FUN_147a16c86(void)

void FUN_147a16c86(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [28];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a16d72(param_1,local_1c,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a16d72 FUN_147a16d72 body=219 status=ok
// SIG undefined FUN_147a16d72(void)

void FUN_147a16d72(longlong param_1,int param_2,double *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(longlong *)(param_1 + 0x350) != 0)) {
    lVar7 = (longlong)param_2;
    if (*(char *)(param_1 + 0x358 + lVar7) == '\x01') {
      dVar3 = *(double *)(param_1 + 0x360 + lVar7 * 0x18);
      if ((dVar3 == *param_3) && (!NAN(dVar3) && !NAN(*param_3))) {
        lVar1 = param_1 + lVar7 * 0x18;
        dVar3 = *(double *)(lVar1 + 0x368);
        if ((dVar3 == param_3[1]) && (!NAN(dVar3) && !NAN(param_3[1]))) {
          dVar3 = *(double *)(lVar1 + 0x370);
          if ((dVar3 == param_3[2]) && (!NAN(dVar3) && !NAN(param_3[2]))) {
            return;
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      FUN_1448abda6(param_1);
    }
    *(undefined1 *)(param_1 + 0x358 + lVar7) = 1;
    *(double *)(param_1 + 0x370 + lVar7 * 0x18) = param_3[2];
    uVar4 = *(undefined4 *)((longlong)param_3 + 4);
    uVar5 = *(undefined4 *)(param_3 + 1);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
    puVar2 = (undefined4 *)(param_1 + 0x360 + lVar7 * 0x18);
    *puVar2 = *(undefined4 *)param_3;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 147a16e4e FUN_147a16e4e body=197 status=ok
// SIG undefined FUN_147a16e4e(void)

void FUN_147a16e4e(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [44];
  uint local_1c;
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
  uVar5 = (ulonglong)local_1c;
  if (uVar5 < 2) {
    *(undefined1 *)(param_1 + 0x358 + uVar5) = 0;
    *(undefined8 *)(param_1 + 0x370 + uVar5 * 0x18) = DAT_14c8464f0;
    uVar4 = DAT_14c8464e8._4_4_;
    uVar3 = (undefined4)DAT_14c8464e8;
    uVar2 = DAT_14c8464e0._4_4_;
    puVar1 = (undefined4 *)(param_1 + 0x360 + uVar5 * 0x18);
    *puVar1 = (undefined4)DAT_14c8464e0;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a16f14 FUN_147a16f14 body=156 status=ok
// SIG undefined FUN_147a16f14(void)

void FUN_147a16f14(undefined8 param_1,longlong param_2)

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
  FUN_147a16fb2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a16fb2 FUN_147a16fb2 body=65 status=ok
// SIG undefined FUN_147a16fb2(void)

void FUN_147a16fb2(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x338) != param_2) ||
       (NAN(*(float *)(param_1 + 0x338)) || NAN(param_2))) {
      *(float *)(param_1 + 0x338) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a16ff4 FUN_147a16ff4 body=156 status=ok
// SIG undefined FUN_147a16ff4(void)

void FUN_147a16ff4(undefined8 param_1,longlong param_2)

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
  FUN_147a17092(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a17092 FUN_147a17092 body=65 status=ok
// SIG undefined FUN_147a17092(void)

void FUN_147a17092(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2b4) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2b4)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2b4) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a170d4 FUN_147a170d4 body=156 status=ok
// SIG undefined FUN_147a170d4(void)

void FUN_147a170d4(undefined8 param_1,longlong param_2)

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
  FUN_147a17172(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a17172 FUN_147a17172 body=65 status=ok
// SIG undefined FUN_147a17172(void)

void FUN_147a17172(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2ac) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2ac)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2ac) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a171b4 FUN_147a171b4 body=160 status=ok
// SIG undefined FUN_147a171b4(void)

void FUN_147a171b4(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1c);
  }
  puVar1 = local_1c;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a17256(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a17256 FUN_147a17256 body=58 status=ok
// SIG undefined FUN_147a17256(void)

void FUN_147a17256(longlong param_1,int *param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(int *)(param_1 + 0x2b0) != *param_2)) {
    *(int *)(param_1 + 0x2b0) = *param_2;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 147a17290 FUN_147a17290 body=156 status=ok
// SIG undefined FUN_147a17290(void)

void FUN_147a17290(undefined8 param_1,longlong param_2)

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
  FUN_147a1732e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1732e FUN_147a1732e body=65 status=ok
// SIG undefined FUN_147a1732e(void)

void FUN_147a1732e(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x33c) != param_2) ||
       (NAN(*(float *)(param_1 + 0x33c)) || NAN(param_2))) {
      *(float *)(param_1 + 0x33c) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a17374 FUN_147a17374 body=196 status=ok
// SIG undefined FUN_147a17374(void)

void FUN_147a17374(longlong param_1,longlong param_2)

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
  if ((local_1c != 0) != (bool)(*(byte *)(param_1 + 0x348) & 1)) {
    *(byte *)(param_1 + 0x348) = *(byte *)(param_1 + 0x348) & 0xfe | local_1c != 0;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1743a FUN_147a1743a body=155 status=ok
// SIG undefined FUN_147a1743a(void)

void FUN_147a1743a(undefined8 param_1,longlong param_2)

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
  FUN_147a174d6(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a174d6 FUN_147a174d6 body=215 status=ok
// SIG undefined FUN_147a174d6(void)

void FUN_147a174d6(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(longlong *)(param_1 + 0xa8) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) == 0)) &&
      ((*(byte *)(param_1 + 0x9c) & 1) != 0)) && (*(char *)(param_1 + 0x1fb) == '\0')) {
    return;
  }
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 0x2f0) != fVar1) || (NAN(*(float *)(param_1 + 0x2f0)) || NAN(fVar1))) {
    fVar2 = param_2[1];
  }
  else {
    fVar2 = param_2[1];
    if ((*(float *)(param_1 + 0x2f4) == fVar2) && (!NAN(*(float *)(param_1 + 0x2f4)) && !NAN(fVar2))
       ) {
      if ((*(float *)(param_1 + 0x2f8) == param_2[2]) &&
         (!NAN(*(float *)(param_1 + 0x2f8)) && !NAN(param_2[2]))) {
        if ((*(float *)(param_1 + 0x2fc) == param_2[3]) &&
           (!NAN(*(float *)(param_1 + 0x2fc)) && !NAN(param_2[3]))) {
          return;
        }
      }
    }
  }
  if (1e+38 <= fVar1) {
    fVar1 = 1e+38;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1e+38 <= fVar2) {
    fVar2 = 1e+38;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  if (1e+38 <= fVar3) {
    fVar3 = 1e+38;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1e+38 <= fVar4) {
    fVar4 = 1e+38;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x2f0) = fVar1;
  *(float *)(param_1 + 0x2f4) = fVar2;
  *(float *)(param_1 + 0x2f8) = fVar3;
  *(float *)(param_1 + 0x2fc) = fVar4;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a175ae FUN_147a175ae body=156 status=ok
// SIG undefined FUN_147a175ae(void)

void FUN_147a175ae(undefined8 param_1,longlong param_2)

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
  FUN_147a1764c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1764c FUN_147a1764c body=65 status=ok
// SIG undefined FUN_147a1764c(void)

void FUN_147a1764c(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2ec) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2ec)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2ec) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a1768e FUN_147a1768e body=156 status=ok
// SIG undefined FUN_147a1768e(void)

void FUN_147a1768e(undefined8 param_1,longlong param_2)

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
  FUN_147a1772c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1772c FUN_147a1772c body=65 status=ok
// SIG undefined FUN_147a1772c(void)

void FUN_147a1772c(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x300) != param_2) ||
       (NAN(*(float *)(param_1 + 0x300)) || NAN(param_2))) {
      *(float *)(param_1 + 0x300) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a1776e FUN_147a1776e body=156 status=ok
// SIG undefined FUN_147a1776e(void)

void FUN_147a1776e(undefined8 param_1,longlong param_2)

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
  FUN_147a1780c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1780c FUN_147a1780c body=65 status=ok
// SIG undefined FUN_147a1780c(void)

void FUN_147a1780c(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x304) != param_2) ||
       (NAN(*(float *)(param_1 + 0x304)) || NAN(param_2))) {
      *(float *)(param_1 + 0x304) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a1784e FUN_147a1784e body=155 status=ok
// SIG undefined FUN_147a1784e(void)

void FUN_147a1784e(undefined8 param_1,longlong param_2)

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
  FUN_147a178ea(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a178ea FUN_147a178ea body=215 status=ok
// SIG undefined FUN_147a178ea(void)

void FUN_147a178ea(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(longlong *)(param_1 + 0xa8) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) == 0)) &&
      ((*(byte *)(param_1 + 0x9c) & 1) != 0)) && (*(char *)(param_1 + 0x1fb) == '\0')) {
    return;
  }
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 0x2dc) != fVar1) || (NAN(*(float *)(param_1 + 0x2dc)) || NAN(fVar1))) {
    fVar2 = param_2[1];
  }
  else {
    fVar2 = param_2[1];
    if ((*(float *)(param_1 + 0x2e0) == fVar2) && (!NAN(*(float *)(param_1 + 0x2e0)) && !NAN(fVar2))
       ) {
      if ((*(float *)(param_1 + 0x2e4) == param_2[2]) &&
         (!NAN(*(float *)(param_1 + 0x2e4)) && !NAN(param_2[2]))) {
        if ((*(float *)(param_1 + 0x2e8) == param_2[3]) &&
           (!NAN(*(float *)(param_1 + 0x2e8)) && !NAN(param_2[3]))) {
          return;
        }
      }
    }
  }
  if (1e+38 <= fVar1) {
    fVar1 = 1e+38;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1e+38 <= fVar2) {
    fVar2 = 1e+38;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  if (1e+38 <= fVar3) {
    fVar3 = 1e+38;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1e+38 <= fVar4) {
    fVar4 = 1e+38;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x2dc) = fVar1;
  *(float *)(param_1 + 0x2e0) = fVar2;
  *(float *)(param_1 + 0x2e4) = fVar3;
  *(float *)(param_1 + 0x2e8) = fVar4;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a179c2 FUN_147a179c2 body=156 status=ok
// SIG undefined FUN_147a179c2(void)

void FUN_147a179c2(undefined8 param_1,longlong param_2)

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
  FUN_147a17a60(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a17a60 FUN_147a17a60 body=65 status=ok
// SIG undefined FUN_147a17a60(void)

void FUN_147a17a60(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2d8) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2d8)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2d8) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a17aa2 FUN_147a17aa2 body=156 status=ok
// SIG undefined FUN_147a17aa2(void)

void FUN_147a17aa2(undefined8 param_1,longlong param_2)

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
  FUN_147a17b40(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a17b40 FUN_147a17b40 body=65 status=ok
// SIG undefined FUN_147a17b40(void)

void FUN_147a17b40(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2b8) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2b8)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2b8) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a17b82 FUN_147a17b82 body=155 status=ok
// SIG undefined FUN_147a17b82(void)

void FUN_147a17b82(undefined8 param_1,longlong param_2)

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
  FUN_147a17c1e(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a17c1e FUN_147a17c1e body=215 status=ok
// SIG undefined FUN_147a17c1e(void)

void FUN_147a17c1e(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(longlong *)(param_1 + 0xa8) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) == 0)) &&
      ((*(byte *)(param_1 + 0x9c) & 1) != 0)) && (*(char *)(param_1 + 0x1fb) == '\0')) {
    return;
  }
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 0x30c) != fVar1) || (NAN(*(float *)(param_1 + 0x30c)) || NAN(fVar1))) {
    fVar2 = param_2[1];
  }
  else {
    fVar2 = param_2[1];
    if ((*(float *)(param_1 + 0x310) == fVar2) && (!NAN(*(float *)(param_1 + 0x310)) && !NAN(fVar2))
       ) {
      if ((*(float *)(param_1 + 0x314) == param_2[2]) &&
         (!NAN(*(float *)(param_1 + 0x314)) && !NAN(param_2[2]))) {
        if ((*(float *)(param_1 + 0x318) == param_2[3]) &&
           (!NAN(*(float *)(param_1 + 0x318)) && !NAN(param_2[3]))) {
          return;
        }
      }
    }
  }
  if (1e+38 <= fVar1) {
    fVar1 = 1e+38;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1e+38 <= fVar2) {
    fVar2 = 1e+38;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  if (1e+38 <= fVar3) {
    fVar3 = 1e+38;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1e+38 <= fVar4) {
    fVar4 = 1e+38;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x30c) = fVar1;
  *(float *)(param_1 + 0x310) = fVar2;
  *(float *)(param_1 + 0x314) = fVar3;
  *(float *)(param_1 + 0x318) = fVar4;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a17cf6 FUN_147a17cf6 body=156 status=ok
// SIG undefined FUN_147a17cf6(void)

void FUN_147a17cf6(undefined8 param_1,longlong param_2)

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
  FUN_147a17d94(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a17d94 FUN_147a17d94 body=65 status=ok
// SIG undefined FUN_147a17d94(void)

void FUN_147a17d94(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x308) != param_2) ||
       (NAN(*(float *)(param_1 + 0x308)) || NAN(param_2))) {
      *(float *)(param_1 + 0x308) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a17dd6 FUN_147a17dd6 body=156 status=ok
// SIG undefined FUN_147a17dd6(void)

void FUN_147a17dd6(undefined8 param_1,longlong param_2)

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
  FUN_147a17e74(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a17e74 FUN_147a17e74 body=65 status=ok
// SIG undefined FUN_147a17e74(void)

void FUN_147a17e74(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2d4) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2d4)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2d4) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a17eb6 FUN_147a17eb6 body=155 status=ok
// SIG undefined FUN_147a17eb6(void)

void FUN_147a17eb6(undefined8 param_1,longlong param_2)

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
  FUN_147a17f52(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a17f52 FUN_147a17f52 body=215 status=ok
// SIG undefined FUN_147a17f52(void)

void FUN_147a17f52(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(longlong *)(param_1 + 0xa8) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) == 0)) &&
      ((*(byte *)(param_1 + 0x9c) & 1) != 0)) && (*(char *)(param_1 + 0x1fb) == '\0')) {
    return;
  }
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 0x2c4) != fVar1) || (NAN(*(float *)(param_1 + 0x2c4)) || NAN(fVar1))) {
    fVar2 = param_2[1];
  }
  else {
    fVar2 = param_2[1];
    if ((*(float *)(param_1 + 0x2c8) == fVar2) && (!NAN(*(float *)(param_1 + 0x2c8)) && !NAN(fVar2))
       ) {
      if ((*(float *)(param_1 + 0x2cc) == param_2[2]) &&
         (!NAN(*(float *)(param_1 + 0x2cc)) && !NAN(param_2[2]))) {
        if ((*(float *)(param_1 + 0x2d0) == param_2[3]) &&
           (!NAN(*(float *)(param_1 + 0x2d0)) && !NAN(param_2[3]))) {
          return;
        }
      }
    }
  }
  if (1e+38 <= fVar1) {
    fVar1 = 1e+38;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1e+38 <= fVar2) {
    fVar2 = 1e+38;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  if (1e+38 <= fVar3) {
    fVar3 = 1e+38;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1e+38 <= fVar4) {
    fVar4 = 1e+38;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x2c4) = fVar1;
  *(float *)(param_1 + 0x2c8) = fVar2;
  *(float *)(param_1 + 0x2cc) = fVar3;
  *(float *)(param_1 + 0x2d0) = fVar4;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a1802a FUN_147a1802a body=156 status=ok
// SIG undefined FUN_147a1802a(void)

void FUN_147a1802a(undefined8 param_1,longlong param_2)

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
  FUN_147a180c8(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a180c8 FUN_147a180c8 body=65 status=ok
// SIG undefined FUN_147a180c8(void)

void FUN_147a180c8(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2c0) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2c0)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2c0) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 147a1810e FUN_147a1810e body=198 status=ok
// SIG undefined FUN_147a1810e(void)

void FUN_147a1810e(longlong param_1,longlong param_2)

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
  if (((*(byte *)(param_1 + 0x348) & 2) == 0) == (local_1c != 0)) {
    *(byte *)(param_1 + 0x348) = *(byte *)(param_1 + 0x348) & 0xfd | (local_1c != 0) * '\x02';
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a181d6 FUN_147a181d6 body=155 status=ok
// SIG undefined FUN_147a181d6(void)

void FUN_147a181d6(undefined8 param_1,longlong param_2)

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
  FUN_147a18272(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a18272 FUN_147a18272 body=215 status=ok
// SIG undefined FUN_147a18272(void)

void FUN_147a18272(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(longlong *)(param_1 + 0xa8) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) == 0)) &&
      ((*(byte *)(param_1 + 0x9c) & 1) != 0)) && (*(char *)(param_1 + 0x1fb) == '\0')) {
    return;
  }
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 0x328) != fVar1) || (NAN(*(float *)(param_1 + 0x328)) || NAN(fVar1))) {
    fVar2 = param_2[1];
  }
  else {
    fVar2 = param_2[1];
    if ((*(float *)(param_1 + 0x32c) == fVar2) && (!NAN(*(float *)(param_1 + 0x32c)) && !NAN(fVar2))
       ) {
      if ((*(float *)(param_1 + 0x330) == param_2[2]) &&
         (!NAN(*(float *)(param_1 + 0x330)) && !NAN(param_2[2]))) {
        if ((*(float *)(param_1 + 0x334) == param_2[3]) &&
           (!NAN(*(float *)(param_1 + 0x334)) && !NAN(param_2[3]))) {
          return;
        }
      }
    }
  }
  if (1e+38 <= fVar1) {
    fVar1 = 1e+38;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1e+38 <= fVar2) {
    fVar2 = 1e+38;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  if (1e+38 <= fVar3) {
    fVar3 = 1e+38;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1e+38 <= fVar4) {
    fVar4 = 1e+38;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x328) = fVar1;
  *(float *)(param_1 + 0x32c) = fVar2;
  *(float *)(param_1 + 0x330) = fVar3;
  *(float *)(param_1 + 0x334) = fVar4;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a1835c FUN_147a1835c body=75 status=ok
// SIG undefined FUN_147a1835c(void)

void FUN_147a1835c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1463bd6f0(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a183b8 FUN_147a183b8 body=16 status=ok
// SIG undefined FUN_147a183b8(void)

void FUN_147a183b8(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x390) = 1;
  *(undefined8 *)(param_1 + 0x398) = 0;
  return;
}



// FUNCTION 147a183c8 FUN_147a183c8 body=211 status=ok
// SIG undefined FUN_147a183c8(void)

void FUN_147a183c8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a1849c(&local_30);
  uVar3 = (ulonglong)local_20;
  if ((-1 < (int)local_20) && ((int)local_20 < local_28)) {
    do {
      lVar1 = *(longlong *)(local_30 + (uVar3 & 0xffffffff) * 8);
      if ((*(longlong *)(lVar1 + 0xa8) != 0) &&
         (((lVar2 = FUN_1447210f0(), lVar1 != 0 && (lVar2 == param_1)) &&
          ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)))) {
        FUN_147a18508(lVar1);
      }
      uVar3 = (longlong)(int)local_20;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
        local_20 = (uint)uVar3;
        if ((longlong)local_28 <= (longlong)uVar3) break;
      } while (*(longlong *)(local_30 + uVar3 * 8) == 0);
    } while ((-2 < (longlong)uVar4) && ((int)local_20 < local_28));
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_143499830(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a1849c FUN_147a1849c body=107 status=ok
// SIG undefined FUN_147a1849c(void)

longlong * FUN_147a1849c(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_141221a30();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 147a18508 FUN_147a18508 body=139 status=ok
// SIG undefined FUN_147a18508(void)

void FUN_147a18508(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x1f8) & 0x20) != 0) && ((*(byte *)(param_1 + 0x2d4) & 1) != 0)) {
    cVar1 = FUN_1415d1d7c(param_1);
    if (cVar1 == '\0') {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
      local_20 = param_1;
      FUN_145a2627c(&DAT_14cad2db0);
      *(undefined1 *)(param_1 + 0x349) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a185a4 FUN_147a185a4 body=229 status=ok
// SIG undefined FUN_147a185a4(void)

void FUN_147a185a4(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((DAT_14ca84d88 == '\x01') && (1 < DAT_14c760db4)) {
    FUN_147a1849c(&local_28);
    uVar5 = (ulonglong)local_18;
    lVar2 = local_28;
    iVar3 = local_20;
    if ((int)local_18 < local_20 && -1 < (int)local_18) {
      do {
        lVar1 = *(longlong *)(lVar2 + (uVar5 & 0xffffffff) * 8);
        uVar4 = (uint)uVar5;
        if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
          FUN_147a18508(lVar1);
          lVar2 = local_28;
          iVar3 = local_20;
          uVar4 = local_18;
        }
        uVar5 = (longlong)(int)uVar4;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
          local_18 = (uint)uVar5;
          if ((longlong)iVar3 <= (longlong)uVar5) break;
        } while (*(longlong *)(lVar2 + uVar5 * 8) == 0);
      } while ((-2 < (longlong)uVar6) && ((int)local_18 < iVar3));
    }
    if (lVar2 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a1868a FUN_147a1868a body=43 status=ok
// SIG undefined FUN_147a1868a(void)

void FUN_147a1868a(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x68);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_140414380(param_1,0);
  FUN_14493c441(param_1 + 0x48);
  return;
}



// FUNCTION 147a186b6 FUN_147a186b6 body=1214 status=ok
// SIG undefined FUN_147a186b6(void)

void FUN_147a186b6(longlong param_1,float param_2,void *param_3,void *param_4,float *param_5,
                  float *param_6,undefined8 *param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar8 = param_7[1];
  *(undefined8 *)(param_1 + 0x130) = *param_7;
  *(undefined8 *)(param_1 + 0x138) = uVar8;
  fVar10 = param_2;
  if (1.0 <= param_2) {
    fVar10 = 1.0;
  }
  fVar11 = fVar10;
  if (fVar10 <= 0.0) {
    fVar11 = 0.0;
  }
  *(float *)(param_1 + 0x10) = fVar11;
  if ((fVar10 <= 0.0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    memcpy((void *)(param_1 + 0x30),param_3,0x90);
    *(float *)(param_1 + 0x24) = *param_5;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else if (1.0 <= param_2) {
    memcpy((void *)(param_1 + 0x30),param_4,0x90);
    *(float *)(param_1 + 0x24) = *param_6;
  }
  else {
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    lVar9 = 0;
    do {
      pfVar1 = (float *)((longlong)param_4 + lVar9);
      fVar10 = pfVar1[1];
      fVar2 = pfVar1[2];
      fVar3 = pfVar1[3];
      *(float *)((longlong)&local_108 + lVar9) = *pfVar1 * param_2;
      *(float *)((longlong)&local_108 + lVar9 + 4) = fVar10 * param_2;
      *(float *)((longlong)&uStack_100 + lVar9) = fVar2 * param_2;
      *(float *)((longlong)&uStack_100 + lVar9 + 4) = fVar3 * param_2;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x30);
    local_178 = local_e8;
    uStack_170 = uStack_e0;
    local_188 = local_f8;
    uStack_180 = uStack_f0;
    local_198 = local_108;
    uStack_190 = uStack_100;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    lVar9 = 0;
    do {
      pfVar1 = (float *)((longlong)param_4 + lVar9 + 0x30);
      fVar10 = pfVar1[1];
      fVar2 = pfVar1[2];
      fVar3 = pfVar1[3];
      *(float *)((longlong)&local_108 + lVar9) = *pfVar1 * param_2;
      *(float *)((longlong)&local_108 + lVar9 + 4) = fVar10 * param_2;
      *(float *)((longlong)&uStack_100 + lVar9) = fVar2 * param_2;
      *(float *)((longlong)&uStack_100 + lVar9 + 4) = fVar3 * param_2;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x30);
    local_148 = local_e8;
    uStack_140 = uStack_e0;
    local_158 = local_f8;
    uStack_150 = uStack_f0;
    local_168 = local_108;
    uStack_160 = uStack_100;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    lVar9 = 0;
    do {
      pfVar1 = (float *)((longlong)param_4 + lVar9 + 0x60);
      fVar10 = pfVar1[1];
      fVar2 = pfVar1[2];
      fVar3 = pfVar1[3];
      *(float *)((longlong)&local_108 + lVar9) = *pfVar1 * param_2;
      *(float *)((longlong)&local_108 + lVar9 + 4) = fVar10 * param_2;
      *(float *)((longlong)&uStack_100 + lVar9) = fVar2 * param_2;
      *(float *)((longlong)&uStack_100 + lVar9 + 4) = fVar3 * param_2;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x30);
    local_118 = local_e8;
    uStack_110 = uStack_e0;
    local_128 = local_f8;
    uStack_120 = uStack_f0;
    local_138 = local_108;
    uStack_130 = uStack_100;
    fVar10 = 1.0 - fVar11;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    lVar9 = 0;
    do {
      pfVar1 = (float *)((longlong)param_3 + lVar9);
      fVar2 = pfVar1[1];
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[3];
      *(float *)((longlong)&local_108 + lVar9) = *pfVar1 * fVar10;
      *(float *)((longlong)&local_108 + lVar9 + 4) = fVar2 * fVar10;
      *(float *)((longlong)&uStack_100 + lVar9) = fVar3 * fVar10;
      *(float *)((longlong)&uStack_100 + lVar9 + 4) = fVar4 * fVar10;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x30);
    local_208 = local_e8;
    uStack_200 = uStack_e0;
    local_218 = local_f8;
    uStack_210 = uStack_f0;
    local_228 = local_108;
    uStack_220 = uStack_100;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    lVar9 = 0;
    do {
      pfVar1 = (float *)((longlong)param_3 + lVar9 + 0x30);
      fVar2 = pfVar1[1];
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[3];
      *(float *)((longlong)&local_108 + lVar9) = *pfVar1 * fVar10;
      *(float *)((longlong)&local_108 + lVar9 + 4) = fVar2 * fVar10;
      *(float *)((longlong)&uStack_100 + lVar9) = fVar3 * fVar10;
      *(float *)((longlong)&uStack_100 + lVar9 + 4) = fVar4 * fVar10;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x30);
    local_1d8 = local_e8;
    uStack_1d0 = uStack_e0;
    local_1e8 = local_f8;
    uStack_1e0 = uStack_f0;
    local_1f8 = local_108;
    uStack_1f0 = uStack_100;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    lVar9 = 0;
    do {
      pfVar1 = (float *)((longlong)param_3 + lVar9 + 0x60);
      fVar2 = pfVar1[1];
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[3];
      *(float *)((longlong)&local_108 + lVar9) = *pfVar1 * fVar10;
      *(float *)((longlong)&local_108 + lVar9 + 4) = fVar2 * fVar10;
      *(float *)((longlong)&uStack_100 + lVar9) = fVar3 * fVar10;
      *(float *)((longlong)&uStack_100 + lVar9 + 4) = fVar4 * fVar10;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x30);
    local_1a8 = local_e8;
    uStack_1a0 = uStack_e0;
    local_1b8 = local_f8;
    uStack_1b0 = uStack_f0;
    local_1c8 = local_108;
    uStack_1c0 = uStack_100;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    lVar9 = 0;
    do {
      fVar2 = *(float *)((longlong)&local_198 + lVar9 + 4);
      fVar3 = *(float *)((longlong)&uStack_190 + lVar9);
      fVar4 = *(float *)((longlong)&uStack_190 + lVar9 + 4);
      fVar5 = *(float *)((longlong)&local_228 + lVar9 + 4);
      fVar6 = *(float *)((longlong)&uStack_220 + lVar9);
      fVar7 = *(float *)((longlong)&uStack_220 + lVar9 + 4);
      *(float *)((longlong)&local_78 + lVar9) =
           *(float *)((longlong)&local_198 + lVar9) + *(float *)((longlong)&local_228 + lVar9);
      *(float *)((longlong)&local_78 + lVar9 + 4) = fVar2 + fVar5;
      *(float *)((longlong)&uStack_70 + lVar9) = fVar3 + fVar6;
      *(float *)((longlong)&uStack_70 + lVar9 + 4) = fVar4 + fVar7;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x30);
    local_e8 = local_58;
    uStack_e0 = uStack_50;
    local_f8 = local_68;
    uStack_f0 = uStack_60;
    local_108 = local_78;
    uStack_100 = uStack_70;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    lVar9 = 0x30;
    do {
      fVar2 = *(float *)((longlong)&local_198 + lVar9 + 4);
      fVar3 = *(float *)((longlong)&uStack_190 + lVar9);
      fVar4 = *(float *)((longlong)&uStack_190 + lVar9 + 4);
      fVar5 = *(float *)((longlong)&local_228 + lVar9 + 4);
      fVar6 = *(float *)((longlong)&uStack_220 + lVar9);
      fVar7 = *(float *)((longlong)&uStack_220 + lVar9 + 4);
      *(float *)((longlong)&local_a8 + lVar9) =
           *(float *)((longlong)&local_198 + lVar9) + *(float *)((longlong)&local_228 + lVar9);
      *(float *)((longlong)&local_a8 + lVar9 + 4) = fVar2 + fVar5;
      *(float *)((longlong)&uStack_a0 + lVar9) = fVar3 + fVar6;
      *(float *)((longlong)&uStack_a0 + lVar9 + 4) = fVar4 + fVar7;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x60);
    local_b8 = local_58;
    uStack_b0 = uStack_50;
    local_c8 = local_68;
    uStack_c0 = uStack_60;
    local_d8 = local_78;
    uStack_d0 = uStack_70;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    lVar9 = 0x60;
    do {
      fVar2 = *(float *)((longlong)&local_198 + lVar9 + 4);
      fVar3 = *(float *)((longlong)&uStack_190 + lVar9);
      fVar4 = *(float *)((longlong)&uStack_190 + lVar9 + 4);
      fVar5 = *(float *)((longlong)&local_228 + lVar9 + 4);
      fVar6 = *(float *)((longlong)&uStack_220 + lVar9);
      fVar7 = *(float *)((longlong)&uStack_220 + lVar9 + 4);
      *(float *)((longlong)&local_d8 + lVar9) =
           *(float *)((longlong)&local_198 + lVar9) + *(float *)((longlong)&local_228 + lVar9);
      *(float *)((longlong)&local_d8 + lVar9 + 4) = fVar2 + fVar5;
      *(float *)((longlong)&uStack_d0 + lVar9) = fVar3 + fVar6;
      *(float *)((longlong)&uStack_d0 + lVar9 + 4) = fVar4 + fVar7;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x90);
    local_88 = local_58;
    uStack_80 = uStack_50;
    local_98 = local_68;
    uStack_90 = uStack_60;
    local_a8 = local_78;
    uStack_a0 = uStack_70;
    memcpy((void *)(param_1 + 0x30),&local_108,0x90);
    *(float *)(param_1 + 0x24) = fVar10 * *param_5 + fVar11 * *param_6;
  }
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a18b76 FUN_147a18b76 body=137 status=ok
// SIG undefined FUN_147a18b76(void)

void FUN_147a18b76(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((*(byte *)(param_1 + 0x1f8) & 0x20) != 0) && ((*(byte *)(param_1 + 0x2d4) & 1) != 0)) &&
     (*(longlong *)(param_1 + 0x3f8) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
    local_20 = param_1;
    FUN_145a2627c(&DAT_14cad2dc0);
    *(undefined1 *)(param_1 + 0x349) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a18c10 FUN_147a18c10 body=211 status=ok
// SIG undefined FUN_147a18c10(void)

undefined8 * FUN_147a18c10(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  FUN_147a3a710(param_2,&local_28);
  lVar5 = FUN_147a18ce4(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x2b0);
  *(undefined8 *)(lVar5 + 0x160) = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined8 *)(lVar5 + 0x168) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 700);
  uVar2 = *(undefined4 *)(param_1 + 0x2c0);
  uVar3 = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined4 *)(lVar5 + 0x170) = *(undefined4 *)(param_1 + 0x2b8);
  *(undefined4 *)(lVar5 + 0x174) = uVar1;
  *(undefined4 *)(lVar5 + 0x178) = uVar2;
  *(undefined4 *)(lVar5 + 0x17c) = uVar3;
  FUN_1458867da(lVar5 + 0x188,*(undefined8 *)(param_1 + 0x350));
  FUN_1408e177a(param_1 + 0x4b8,0);
  memcpy((void *)(lVar5 + 400),(void *)(param_1 + 0x360),0x90);
  *(undefined4 *)(lVar5 + 0x180) = *(undefined4 *)(param_1 + 0x3f0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a18ce4 FUN_147a18ce4 body=69 status=ok
// SIG undefined FUN_147a18ce4(void)

undefined8 FUN_147a18ce4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14479d2ce(param_1 + 8);
  lVar2 = FUN_14639592e();
  if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar3;
}



// FUNCTION 147a18d2a FUN_147a18d2a body=361 status=ok
// SIG undefined FUN_147a18d2a(void)

void FUN_147a18d2a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14347bf60();
  uVar5 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar6 = 0;
  if (cVar1 != '\0') {
    uVar6 = *(undefined4 *)(param_2 + 0x160);
    uVar4 = *(undefined4 *)(param_2 + 0x164);
    uVar3 = *(undefined4 *)(param_2 + 0x168);
    uVar2 = *(undefined4 *)(param_2 + 0x16c);
  }
  *(undefined4 *)(param_1 + 0x2a8) = uVar6;
  *(undefined4 *)(param_1 + 0x2ac) = uVar4;
  *(undefined4 *)(param_1 + 0x2b0) = uVar3;
  *(undefined4 *)(param_1 + 0x2b4) = uVar2;
  cVar1 = FUN_14347bf60(param_1);
  uVar3 = 0;
  uVar4 = 0;
  uVar6 = 0;
  if (cVar1 != '\0') {
    uVar6 = *(undefined4 *)(param_2 + 0x170);
    uVar4 = *(undefined4 *)(param_2 + 0x174);
    uVar3 = *(undefined4 *)(param_2 + 0x178);
    uVar5 = *(undefined4 *)(param_2 + 0x17c);
  }
  *(undefined4 *)(param_1 + 0x2b8) = uVar6;
  *(undefined4 *)(param_1 + 700) = uVar4;
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  *(undefined4 *)(param_1 + 0x2c4) = uVar5;
  FUN_1458867da(param_1 + 0x350,*(undefined8 *)(param_2 + 0x188));
  memcpy((void *)(param_1 + 0x360),(void *)(param_2 + 400),0x90);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x180);
  if ((*(longlong *)(param_1 + 0x350) != 0) && (*(char *)(param_1 + 0x349) == '\x01')) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
    local_28 = &local_30;
    local_30 = param_1;
    FUN_14129af20(&DAT_14cad2db0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
  }
  FUN_1448215fa(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a18e94 FUN_147a18e94 body=65 status=ok
// SIG undefined FUN_147a18e94(void)

void FUN_147a18e94(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2cc) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2cc)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2cc) = param_2;
      FUN_14349a0f6();
      return;
    }
  }
  return;
}



// FUNCTION 147a18ed6 FUN_147a18ed6 body=65 status=ok
// SIG undefined FUN_147a18ed6(void)

void FUN_147a18ed6(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2e4) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2e4)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2e4) = param_2;
      FUN_14349a0f6();
      return;
    }
  }
  return;
}



// FUNCTION 147a18f18 FUN_147a18f18 body=65 status=ok
// SIG undefined FUN_147a18f18(void)

void FUN_147a18f18(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2e8) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2e8)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2e8) = param_2;
      FUN_14349a0f6();
      return;
    }
  }
  return;
}



// FUNCTION 147a18f5a FUN_147a18f5a body=129 status=ok
// SIG undefined FUN_147a18f5a(void)

void FUN_147a18f5a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1411ab38a(param_2,&local_14);
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(int *)(param_1 + 0x2d0) != local_14)) {
    *(int *)(param_1 + 0x2d0) = local_14;
    FUN_14349a0f6(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a18fdc FUN_147a18fdc body=115 status=ok
// SIG undefined FUN_147a18fdc(void)

void FUN_147a18fdc(longlong param_1,longlong param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(longlong *)(param_1 + 0x2f8) != param_2)) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x2f8) = param_2;
    FUN_1448215fa(param_1);
    FUN_147a18508(param_1);
    return;
  }
  return;
}



// FUNCTION 147a19050 FUN_147a19050 body=94 status=ok
// SIG undefined FUN_147a19050(void)

void FUN_147a19050(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x300) != param_2) ||
       (NAN(*(float *)(param_1 + 0x300)) || NAN(param_2))) {
      *(float *)(param_1 + 0x300) = param_2;
      FUN_1448215fa(param_1);
      FUN_147a18508(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147a190ae FUN_147a190ae body=118 status=ok
// SIG undefined FUN_147a190ae(void)

void FUN_147a190ae(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((((*(float *)(param_1 + 0x310) != *param_2) ||
          (NAN(*(float *)(param_1 + 0x310)) || NAN(*param_2))) ||
         ((*(float *)(param_1 + 0x314) != param_2[1] ||
          ((NAN(*(float *)(param_1 + 0x314)) || NAN(param_2[1]) ||
           (*(float *)(param_1 + 0x318) != param_2[2])))))) ||
        (NAN(*(float *)(param_1 + 0x318)) || NAN(param_2[2]))) ||
       ((*(float *)(param_1 + 0x31c) != param_2[3] ||
        (NAN(*(float *)(param_1 + 0x31c)) || NAN(param_2[3]))))) {
      fVar1 = param_2[1];
      fVar2 = param_2[2];
      fVar3 = param_2[3];
      *(float *)(param_1 + 0x310) = *param_2;
      *(float *)(param_1 + 0x314) = fVar1;
      *(float *)(param_1 + 0x318) = fVar2;
      *(float *)(param_1 + 0x31c) = fVar3;
      FUN_14349a0f6();
      return;
    }
  }
  return;
}



// FUNCTION 147a19124 FUN_147a19124 body=58 status=ok
// SIG undefined FUN_147a19124(void)

void FUN_147a19124(longlong param_1,int *param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(int *)(param_1 + 0x330) != *param_2)) {
    *(int *)(param_1 + 0x330) = *param_2;
    FUN_14349a742();
    return;
  }
  return;
}



// FUNCTION 147a1915e FUN_147a1915e body=65 status=ok
// SIG undefined FUN_147a1915e(void)

void FUN_147a1915e(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x324) != param_2) ||
       (NAN(*(float *)(param_1 + 0x324)) || NAN(param_2))) {
      *(float *)(param_1 + 0x324) = param_2;
      FUN_14349a742();
      return;
    }
  }
  return;
}



// FUNCTION 147a191a0 FUN_147a191a0 body=65 status=ok
// SIG undefined FUN_147a191a0(void)

void FUN_147a191a0(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x328) != param_2) ||
       (NAN(*(float *)(param_1 + 0x328)) || NAN(param_2))) {
      *(float *)(param_1 + 0x328) = param_2;
      FUN_14349a742();
      return;
    }
  }
  return;
}



// FUNCTION 147a191e2 FUN_147a191e2 body=65 status=ok
// SIG undefined FUN_147a191e2(void)

void FUN_147a191e2(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x32c) != param_2) ||
       (NAN(*(float *)(param_1 + 0x32c)) || NAN(param_2))) {
      *(float *)(param_1 + 0x32c) = param_2;
      FUN_14349a742();
      return;
    }
  }
  return;
}



// FUNCTION 147a19224 FUN_147a19224 body=85 status=ok
// SIG undefined FUN_147a19224(void)

void FUN_147a19224(longlong param_1,char param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(char *)(param_1 + 0x2f0) != param_2)) {
    *(char *)(param_1 + 0x2f0) = param_2;
    FUN_1448215fa(param_1);
    FUN_147a18508(param_1);
    return;
  }
  return;
}



// FUNCTION 147a1927a FUN_147a1927a body=58 status=ok
// SIG undefined FUN_147a1927a(void)

void FUN_147a1927a(longlong param_1)

{
  FUN_140456554();
  if (((*(byte *)(param_1 + 0x1f8) & 0x20) != 0) && (*(char *)(param_1 + 0x34a) == '\0')) {
    FUN_147a18508(param_1);
    FUN_147a18b76(param_1);
    return;
  }
  return;
}



// FUNCTION 147a192ba FUN_147a192ba body=140 status=ok
// SIG undefined FUN_147a192ba(void)

void FUN_147a192ba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_38,L"bEnabled",1);
  uVar1 = FUN_145a6f174();
  FUN_145a6f174();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a19428 FUN_147a19428 body=241 status=ok
// SIG undefined FUN_147a19428(void)

void FUN_147a19428(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
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
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140e259ca(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1951e FUN_147a1951e body=136 status=ok
// SIG undefined FUN_147a1951e(void)

undefined8 * FUN_147a1951e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2b0,0x10);
  FUN_1406ff4f8(puVar1,param_1,0);
  *puVar1 = &PTR_FUN_14a897fe0;
  *(uint *)(puVar1 + 0x53) = *(uint *)(puVar1 + 0x53) & 0xfffffffe | *(byte *)(param_1 + 0x62c) & 1;
  *(undefined4 *)((longlong)puVar1 + 0x29c) = *(undefined4 *)(param_1 + 0x628);
  *(undefined4 *)(puVar1 + 0x54) = *(undefined4 *)(param_1 + 0x640);
  *(undefined4 *)((longlong)puVar1 + 0x2a4) = *(undefined4 *)(param_1 + 0x638);
  *(byte *)((longlong)puVar1 + 0x6f) = *(byte *)((longlong)puVar1 + 0x6f) & 0x7f;
  return puVar1;
}



// FUNCTION 147a195b2 FUN_147a195b2 body=336 status=ok
// SIG undefined FUN_147a195b2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147a195b2(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_d8 [44];
  int local_ac [3];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_ac[1] = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0x3ff0000000000000;
  local_38 = 0x3ff0000000000000;
  local_30 = 0x3ff0000000000000;
  local_28 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_ac + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_ac + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_ac[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_ac);
  }
  piVar2 = local_ac + 1;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a19704(param_1,piVar2,local_ac[0] != 0);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a19704 FUN_147a19704 body=1051 status=ok
// SIG undefined FUN_147a19704(void)

void FUN_147a19704(longlong *param_1,float *param_2,char param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 uVar13;
  longlong lVar14;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [24];
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  fVar4 = *param_2;
  uVar5 = *(uint *)(param_1 + 0xc5);
  if ((int)uVar5 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar7 = uVar5;
    do {
      uVar11 = uVar7 >> 1;
      if (fVar4 < *(float *)(param_1[0xc4] + (ulonglong)(uVar11 + uVar9) * 0x58)) {
        iVar10 = 0;
      }
      else {
        iVar10 = uVar11 + 1;
        uVar11 = uVar7 - iVar10;
      }
      uVar9 = iVar10 + uVar9;
      uVar7 = uVar11;
    } while (0 < (int)uVar11);
  }
  uVar13 = 6;
  if (SUB41(param_2[0x20],0) < 5) {
    uVar13 = (undefined1)(0x305020100 >> ((byte)((int)param_2[0x20] << 3) & 0x3f));
  }
  local_78 = (undefined4)*(undefined8 *)(param_2 + 6);
  uStack_74 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20);
  local_88 = (undefined4)*(undefined8 *)(param_2 + 2);
  uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
  uStack_80 = (undefined4)*(undefined8 *)(param_2 + 4);
  uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
  local_a8 = *(undefined8 *)(param_2 + 0xc);
  local_b8 = *(undefined8 *)(param_2 + 8);
  uStack_b0 = *(undefined8 *)(param_2 + 10);
  local_c8 = *(undefined8 *)(param_2 + 0x12);
  local_d8 = param_2[0xe];
  fStack_d4 = param_2[0xf];
  fStack_d0 = param_2[0x10];
  fStack_cc = param_2[0x11];
  *(uint *)(param_1 + 0xc5) = uVar5 + 1;
  if (*(uint *)((longlong)param_1 + 0x62c) < uVar5 + 1) {
    FUN_140924c58(param_1 + 0xc4,uVar5);
  }
  lVar14 = (ulonglong)uVar9 * 0x58;
  memmove((void *)(param_1[0xc4] + lVar14 + 0x58),(void *)(param_1[0xc4] + lVar14),
          (ulonglong)(uVar5 - uVar9) * 0x58);
  lVar6 = param_1[0xc4];
  *(float *)(lVar6 + lVar14) = fVar4;
  puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar14);
  *puVar1 = uStack_80;
  puVar1[1] = uStack_7c;
  puVar1[2] = local_78;
  puVar1[3] = uStack_74;
  puVar2 = (undefined8 *)(lVar6 + 4 + lVar14);
  *puVar2 = CONCAT44(local_88,uStack_8c);
  puVar2[1] = CONCAT44(uStack_80,uStack_84);
  *(undefined8 *)(lVar6 + 0x30 + lVar14) = local_a8;
  puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar14);
  *puVar2 = local_b8;
  puVar2[1] = uStack_b0;
  pfVar3 = (float *)(lVar6 + 0x38 + lVar14);
  *pfVar3 = local_d8;
  pfVar3[1] = fStack_d4;
  pfVar3[2] = fStack_d0;
  pfVar3[3] = fStack_cc;
  *(undefined8 *)(lVar6 + 0x48 + lVar14) = local_c8;
  *(undefined1 *)(lVar6 + 0x50 + lVar14) = uVar13;
  FUN_144a7484c(param_2 + 0x14,local_f8);
  fVar4 = *param_2;
  local_70 = (undefined4)local_f8._16_8_;
  uStack_6c = SUB84(local_f8._16_8_,4);
  uStack_68 = uStack_e0;
  uStack_80 = (undefined4)local_f8._0_8_;
  uStack_7c = SUB84(local_f8._0_8_,4);
  local_78 = (undefined4)local_f8._8_8_;
  uStack_74 = SUB84(local_f8._8_8_,4);
  local_b8 = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  uStack_b0 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  local_a8 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  uStack_a0 = (undefined4)DAT_14c8463e8;
  uStack_9c = DAT_14c8463e8._4_4_;
  local_d8 = (float)(undefined4)DAT_14c8463d0;
  fStack_d4 = (float)DAT_14c8463d0._4_4_;
  fStack_d0 = (float)(undefined4)DAT_14c8463d8;
  fStack_cc = (float)DAT_14c8463d8._4_4_;
  local_c8._0_4_ = (undefined4)DAT_14c8463e0;
  local_c8._0_4_ = (undefined4)DAT_14c8463e0;
  local_c8._4_4_ = DAT_14c8463e0._4_4_;
  uStack_c0 = (undefined4)DAT_14c8463e8;
  uStack_bc = DAT_14c8463e8._4_4_;
  iVar10 = (int)param_1[200];
  *(uint *)(param_1 + 200) = iVar10 + 1U;
  if (*(uint *)((longlong)param_1 + 0x644) < iVar10 + 1U) {
    FUN_147501e1a(param_1 + 199,iVar10);
  }
  lVar12 = (ulonglong)uVar9 * 0x80;
  memmove((void *)(param_1[199] + lVar12 + 0x80),(void *)(param_1[199] + lVar12),
          (ulonglong)(iVar10 - uVar9) << 7);
  lVar6 = param_1[199];
  *(float *)(lVar6 + lVar12) = fVar4;
  puVar1 = (undefined4 *)(lVar6 + 0x20 + lVar12);
  *puVar1 = local_70;
  puVar1[1] = uStack_6c;
  puVar1[2] = (undefined4)uStack_68;
  puVar1[3] = uStack_68._4_4_;
  puVar2 = (undefined8 *)(lVar6 + 0x14 + lVar12);
  *puVar2 = CONCAT44(local_78,uStack_7c);
  puVar2[1] = CONCAT44(local_70,uStack_74);
  puVar2 = (undefined8 *)(lVar6 + 4 + lVar12);
  *puVar2 = CONCAT44(local_88,uStack_8c);
  puVar2[1] = CONCAT44(uStack_80,uStack_84);
  puVar2 = (undefined8 *)(lVar6 + 0x40 + lVar12);
  *puVar2 = local_a8;
  puVar2[1] = CONCAT44(uStack_9c,uStack_a0);
  puVar2 = (undefined8 *)(lVar6 + 0x30 + lVar12);
  *puVar2 = local_b8;
  puVar2[1] = uStack_b0;
  puVar2 = (undefined8 *)(lVar6 + 0x50 + lVar12);
  *puVar2 = CONCAT44(fStack_d4,local_d8);
  puVar2[1] = CONCAT44(fStack_cc,fStack_d0);
  puVar1 = (undefined4 *)(lVar6 + 0x60 + lVar12);
  *puVar1 = (undefined4)local_c8;
  puVar1[1] = local_c8._4_4_;
  puVar1[2] = uStack_c0;
  puVar1[3] = uStack_bc;
  *(undefined1 *)(lVar6 + 0x70 + lVar12) = 1;
  fVar4 = *param_2;
  local_78 = (undefined4)*(undefined8 *)(param_2 + 0x1e);
  uStack_74 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
  local_88 = (undefined4)*(undefined8 *)(param_2 + 0x1a);
  uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20);
  uStack_80 = (undefined4)*(undefined8 *)(param_2 + 0x1c);
  uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  local_b8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_b0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_a8 = DAT_14c8464f0;
  local_d8 = (float)(undefined4)DAT_14c8464e0;
  fStack_d4 = (float)DAT_14c8464e0._4_4_;
  fStack_d0 = (float)(undefined4)DAT_14c8464e8;
  fStack_cc = (float)DAT_14c8464e8._4_4_;
  local_c8 = DAT_14c8464f0;
  iVar10 = (int)param_1[0xcb];
  *(uint *)(param_1 + 0xcb) = iVar10 + 1U;
  if (*(uint *)((longlong)param_1 + 0x65c) < iVar10 + 1U) {
    FUN_140924c58(param_1 + 0xca,iVar10);
  }
  memmove((void *)(param_1[0xca] + lVar14 + 0x58),(void *)(param_1[0xca] + lVar14),
          (ulonglong)(iVar10 - uVar9) * 0x58);
  lVar6 = param_1[0xca];
  *(float *)(lVar6 + lVar14) = fVar4;
  puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar14);
  *puVar1 = uStack_80;
  puVar1[1] = uStack_7c;
  puVar1[2] = local_78;
  puVar1[3] = uStack_74;
  puVar2 = (undefined8 *)(lVar6 + 4 + lVar14);
  *puVar2 = CONCAT44(local_88,uStack_8c);
  puVar2[1] = CONCAT44(uStack_80,uStack_84);
  *(undefined8 *)(lVar6 + 0x30 + lVar14) = local_a8;
  puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar14);
  *puVar2 = local_b8;
  puVar2[1] = uStack_b0;
  puVar1 = (undefined4 *)(lVar6 + 0x38 + lVar14);
  *puVar1 = local_d8;
  puVar1[1] = fStack_d4;
  puVar1[2] = fStack_d0;
  puVar1[3] = fStack_cc;
  *(undefined8 *)(lVar6 + 0x48 + lVar14) = local_c8;
  *(undefined1 *)(lVar6 + 0x50 + lVar14) = 1;
  plVar8 = (longlong *)(**(code **)(*param_1 + 0xa00))(param_1);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x2b0))(plVar8,*param_2);
  }
  if ((*(char *)((longlong)param_1 + 0x696) == '\x01') &&
     (*(float *)(param_1 + 0xd3) <=
      *(float *)(param_1[0xc4] + (longlong)((int)param_1[0xc5] + -1) * 0x58))) {
    *(undefined1 *)((longlong)param_1 + 0x696) = 0;
  }
  if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a19b4e FUN_147a19b4e body=264 status=ok
// SIG undefined FUN_147a19b4e(void)

void FUN_147a19b4e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a19c58(param_1,plVar1,local_3c != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a19c58 FUN_147a19c58 body=199 status=ok
// SIG undefined FUN_147a19c58(void)

void FUN_147a19c58(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1] + (int)param_1[0xc5];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)((longlong)param_1 + 0x62c) < iVar1) {
    FUN_14093938a(param_1 + 0xc4,iVar1);
  }
  if (*(int *)((longlong)param_1 + 0x644) < iVar1) {
    FUN_1409394d2(param_1 + 199,iVar1);
  }
  if (*(int *)((longlong)param_1 + 0x65c) < iVar1) {
    FUN_14093938a(param_1 + 0xca,iVar1);
  }
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar3 = (longlong)(int)param_2[1] * 0x88;
    do {
      FUN_147a19704(param_1,lVar2,0);
      lVar2 = lVar2 + 0x88;
      lVar3 = lVar3 + -0x88;
    } while (lVar3 != 0);
  }
  if (param_3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147a19d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa38))(param_1);
    return;
  }
  return;
}



// FUNCTION 147a19d20 FUN_147a19d20 body=166 status=ok
// SIG undefined FUN_147a19d20(void)

void FUN_147a19d20(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a19f0a(param_1,puVar1,0,1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a19dce FUN_147a19dce body=314 status=ok
// SIG undefined FUN_147a19dce(void)

void FUN_147a19dce(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [40];
  int local_40;
  undefined1 local_39;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a19f0a(param_1,puVar2,local_39,local_40 != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a19f0a FUN_147a19f0a body=988 status=ok
// SIG undefined FUN_147a19f0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a19f0a(longlong *param_1,double *param_2,int param_3,char param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  
  if (param_3 == 1) {
    dVar15 = *param_2 - (double)param_1[0x4c];
    dVar16 = param_2[1] - (double)param_1[0x4d];
    dVar11 = param_2[2] - (double)param_1[0x4e];
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x50);
    dVar5 = -(double)param_1[0x48];
    dVar6 = -(double)param_1[0x49];
    dVar13 = (double)param_1[0x4a] * -1.0;
    dVar14 = (double)param_1[0x4b] * 1.0;
    dVar19 = dVar15 * dVar13 - dVar5 * dVar11;
    dVar17 = dVar16 * dVar5 - dVar15 * dVar6;
    dVar7 = dVar11 * dVar6 - dVar16 * dVar13;
    dVar7 = dVar7 + dVar7;
    dVar19 = dVar19 + dVar19;
    dVar17 = dVar17 + dVar17;
    auVar12 = divpd(_DAT_149934d80,auVar2);
    dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar12._0_8_) *
             ((dVar17 * dVar6 - dVar19 * dVar13) + dVar14 * dVar7 + dVar15);
    dVar13 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar12._8_8_) *
             ((double)param_1[0x48] * dVar17 + dVar13 * dVar7 + dVar14 * dVar19 + dVar16);
    dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x52])) &
                    (ulonglong)(1.0 / (double)param_1[0x52])) *
            (dVar14 * dVar17 + dVar11 + (dVar19 * dVar5 - dVar7 * dVar6));
  }
  else {
    dVar15 = *param_2;
    dVar13 = param_2[1];
    dVar5 = param_2[2];
  }
  iVar3 = (int)param_1[0xc5];
  if ((longlong)iVar3 == 0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = *(float *)(param_1[0xc4] + (longlong)(iVar3 + -1) * 0x58) + 1.0;
  }
  *(uint *)(param_1 + 0xc5) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x62c) < iVar3 + 1U) {
    FUN_140924c58(param_1 + 0xc4,iVar3);
  }
  lVar4 = param_1[0xc4];
  lVar10 = (longlong)iVar3 * 0x58;
  *(float *)(lVar4 + lVar10) = fVar18;
  auVar2._8_4_ = SUB84(dVar13,0);
  auVar2._0_8_ = dVar15;
  auVar2._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(lVar4 + 8 + lVar10) = auVar2;
  *(double *)(lVar4 + 0x18 + lVar10) = dVar5;
  uVar8 = DAT_14c8464e8;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar10);
  *puVar1 = DAT_14c8464e0;
  puVar1[1] = uVar8;
  *(undefined8 *)(lVar4 + 0x30 + lVar10) = DAT_14c8464f0;
  uVar8 = DAT_14c8464e8;
  puVar1 = (undefined8 *)(lVar4 + 0x38 + lVar10);
  *puVar1 = DAT_14c8464e0;
  puVar1[1] = uVar8;
  *(undefined8 *)(lVar4 + 0x48 + lVar10) = DAT_14c8464f0;
  *(undefined1 *)(lVar4 + 0x50 + lVar10) = 1;
  iVar3 = (int)param_1[200];
  *(uint *)(param_1 + 200) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x644) < iVar3 + 1U) {
    FUN_147501e1a(param_1 + 199,iVar3);
  }
  lVar4 = param_1[199];
  lVar10 = (longlong)iVar3 * 0x80;
  *(float *)(lVar4 + lVar10) = fVar18;
  uVar8 = DAT_14c8463e8;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar10);
  *puVar1 = DAT_14c8463e0;
  puVar1[1] = uVar8;
  uVar8 = DAT_14c8463d8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar10);
  *puVar1 = DAT_14c8463d0;
  puVar1[1] = uVar8;
  uVar8 = DAT_14c8463d8;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar10);
  *puVar1 = DAT_14c8463d0;
  puVar1[1] = uVar8;
  uVar8 = DAT_14c8463e8;
  puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar10);
  *puVar1 = DAT_14c8463e0;
  puVar1[1] = uVar8;
  uVar8 = DAT_14c8463d8;
  puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar10);
  *puVar1 = DAT_14c8463d0;
  puVar1[1] = uVar8;
  uVar8 = DAT_14c8463e8;
  puVar1 = (undefined8 *)(lVar4 + 0x60 + lVar10);
  *puVar1 = DAT_14c8463e0;
  puVar1[1] = uVar8;
  *(undefined1 *)(lVar4 + 0x70 + lVar10) = 1;
  iVar3 = (int)param_1[0xcb];
  *(uint *)(param_1 + 0xcb) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x65c) < iVar3 + 1U) {
    FUN_140924c58(param_1 + 0xca,iVar3);
  }
  lVar4 = param_1[0xca];
  lVar10 = (longlong)iVar3 * 0x58;
  *(float *)(lVar4 + lVar10) = fVar18;
  *(undefined8 *)(lVar4 + 8 + lVar10) = 0x3ff0000000000000;
  *(undefined8 *)(lVar4 + 0x10 + lVar10) = 0x3ff0000000000000;
  *(undefined8 *)(lVar4 + 0x18 + lVar10) = 0x3ff0000000000000;
  uVar8 = DAT_14c8464e8;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar10);
  *puVar1 = DAT_14c8464e0;
  puVar1[1] = uVar8;
  *(undefined8 *)(lVar4 + 0x30 + lVar10) = DAT_14c8464f0;
  uVar8 = DAT_14c8464e8;
  puVar1 = (undefined8 *)(lVar4 + 0x38 + lVar10);
  *puVar1 = DAT_14c8464e0;
  puVar1[1] = uVar8;
  *(undefined8 *)(lVar4 + 0x48 + lVar10) = DAT_14c8464f0;
  *(undefined1 *)(lVar4 + 0x50 + lVar10) = 1;
  plVar9 = (longlong *)(**(code **)(*param_1 + 0xa00))(param_1);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x2b0))(plVar9,fVar18);
  }
  if (*(char *)((longlong)param_1 + 0x696) == '\x01') {
    *(float *)(param_1 + 0xd3) = *(float *)(param_1 + 0xd3) + 1.0;
  }
  if (param_4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147a1a29f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa38))(param_1);
    return;
  }
  return;
}



// FUNCTION 147a1a2ec FUN_147a1a2ec body=391 status=ok
// SIG undefined FUN_147a1a2ec(void)

void FUN_147a1a2ec(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_44;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_44 != 0;
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_147a1a474(param_1,puVar2,local_3c,local_3d);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1a474 FUN_147a1a474 body=1444 status=ok
// SIG undefined FUN_147a1a474(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a1a474(longlong *param_1,double *param_2,uint param_3,int param_4,char param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  undefined1 auStack_148 [39];
  char local_121;
  longlong *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_4 == 1) {
    dVar18 = *param_2 - (double)param_1[0x4c];
    dVar19 = param_2[1] - (double)param_1[0x4d];
    dVar14 = param_2[2] - (double)param_1[0x4e];
    auVar3 = *(undefined1 (*) [16])(param_1 + 0x50);
    dVar7 = -(double)param_1[0x48];
    dVar8 = -(double)param_1[0x49];
    dVar16 = (double)param_1[0x4a] * -1.0;
    dVar17 = (double)param_1[0x4b] * 1.0;
    dVar22 = dVar18 * dVar16 - dVar7 * dVar14;
    dVar20 = dVar19 * dVar7 - dVar18 * dVar8;
    dVar9 = dVar14 * dVar8 - dVar19 * dVar16;
    dVar9 = dVar9 + dVar9;
    dVar22 = dVar22 + dVar22;
    dVar20 = dVar20 + dVar20;
    auVar15 = divpd(_DAT_149934d80,auVar3);
    dVar18 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar15._0_8_) *
             ((dVar20 * dVar8 - dVar22 * dVar16) + dVar17 * dVar9 + dVar18);
    dVar16 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar15._8_8_) *
             ((double)param_1[0x48] * dVar20 + dVar16 * dVar9 + dVar17 * dVar22 + dVar19);
    dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x52])) &
                    (ulonglong)(1.0 / (double)param_1[0x52])) *
            (dVar17 * dVar20 + dVar14 + (dVar22 * dVar7 - dVar9 * dVar8));
  }
  else {
    dVar18 = *param_2;
    dVar16 = param_2[1];
    dVar7 = param_2[2];
  }
  iVar4 = (int)param_1[0xc5];
  if ((int)param_3 <= iVar4 && -1 < (int)param_3) {
    plVar10 = param_1 + 0xc4;
    uVar11 = (ulonglong)param_3;
    local_121 = param_5;
    if (param_3 == 0) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = *(float *)(*plVar10 + -0x58 + uVar11 * 0x58) + 1.0;
    }
    local_c8 = (undefined4)DAT_14c8464f0;
    uStack_c4 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    local_d8 = DAT_14c8464e0;
    uStack_d0 = (undefined4)DAT_14c8464e8;
    uStack_cc = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
    local_e8 = DAT_14c8464f0;
    local_f8 = DAT_14c8464e0;
    uStack_f0 = DAT_14c8464e8;
    *(uint *)(param_1 + 0xc5) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0x62c) < iVar4 + 1U) {
      FUN_140924c58(plVar10,iVar4);
    }
    lVar13 = uVar11 * 0x58;
    local_120 = plVar10;
    memmove((void *)(param_1[0xc4] + lVar13 + 0x58),(void *)(param_1[0xc4] + lVar13),
            (ulonglong)(iVar4 - param_3) * 0x58);
    lVar6 = param_1[0xc4];
    *(float *)(lVar6 + lVar13) = fVar21;
    auVar3._8_4_ = SUB84(dVar16,0);
    auVar3._0_8_ = dVar18;
    auVar3._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])(lVar6 + 8 + lVar13) = auVar3;
    *(double *)(lVar6 + 0x18 + lVar13) = dVar7;
    *(ulonglong *)(lVar6 + 0x30 + lVar13) = CONCAT44(uStack_c4,local_c8);
    puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar13);
    *puVar1 = local_d8;
    puVar1[1] = CONCAT44(uStack_cc,uStack_d0);
    puVar1 = (undefined8 *)(lVar6 + 0x38 + lVar13);
    *puVar1 = local_f8;
    puVar1[1] = uStack_f0;
    *(undefined8 *)(lVar6 + 0x48 + lVar13) = local_e8;
    *(undefined1 *)(lVar6 + 0x50 + lVar13) = 1;
    uStack_cc = (undefined4)DAT_14c8463d0;
    local_c8 = (undefined4)((ulonglong)DAT_14c8463d0 >> 0x20);
    uStack_c4 = (undefined4)DAT_14c8463d8;
    uStack_c0 = (undefined4)((ulonglong)DAT_14c8463d8 >> 0x20);
    uStack_bc = (undefined4)DAT_14c8463e0;
    uStack_b8 = DAT_14c8463e0._4_4_;
    uStack_b4 = (undefined4)DAT_14c8463e8;
    uStack_b0 = DAT_14c8463e8._4_4_;
    local_f8 = DAT_14c8463d0;
    uStack_f0 = DAT_14c8463d8;
    local_e8 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
    uStack_e0 = (undefined4)DAT_14c8463e8;
    uStack_dc = DAT_14c8463e8._4_4_;
    local_118 = DAT_14c8463d0;
    uStack_110 = DAT_14c8463d8;
    local_108 = (undefined4)DAT_14c8463e0;
    uStack_104 = DAT_14c8463e0._4_4_;
    uStack_100 = (undefined4)DAT_14c8463e8;
    uStack_fc = DAT_14c8463e8._4_4_;
    iVar5 = (int)param_1[200];
    *(uint *)(param_1 + 200) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0x644) < iVar5 + 1U) {
      FUN_147501e1a(param_1 + 199,iVar5);
    }
    lVar12 = uVar11 * 0x80;
    memmove((void *)(param_1[199] + lVar12 + 0x80),(void *)(param_1[199] + lVar12),
            (ulonglong)(iVar5 - param_3) << 7);
    lVar6 = param_1[199];
    *(float *)(lVar6 + lVar12) = fVar21;
    puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar12);
    *puVar1 = CONCAT44(uStack_b8,uStack_bc);
    puVar1[1] = CONCAT44(uStack_b0,uStack_b4);
    puVar1 = (undefined8 *)(lVar6 + 0x14 + lVar12);
    *puVar1 = CONCAT44(uStack_c4,local_c8);
    puVar1[1] = CONCAT44(uStack_bc,uStack_c0);
    puVar1 = (undefined8 *)(lVar6 + 4 + lVar12);
    *puVar1 = local_d8;
    puVar1[1] = CONCAT44(uStack_cc,uStack_d0);
    puVar1 = (undefined8 *)(lVar6 + 0x40 + lVar12);
    *puVar1 = local_e8;
    puVar1[1] = CONCAT44(uStack_dc,uStack_e0);
    puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar12);
    *puVar1 = local_f8;
    puVar1[1] = uStack_f0;
    puVar1 = (undefined8 *)(lVar6 + 0x50 + lVar12);
    *puVar1 = local_118;
    puVar1[1] = uStack_110;
    puVar2 = (undefined4 *)(lVar6 + 0x60 + lVar12);
    *puVar2 = local_108;
    puVar2[1] = uStack_104;
    puVar2[2] = uStack_100;
    puVar2[3] = uStack_fc;
    *(undefined1 *)(lVar6 + 0x70 + lVar12) = 1;
    local_d8 = DAT_14c8464e0;
    uStack_d0 = (undefined4)DAT_14c8464e8;
    uStack_cc = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
    local_c8 = (undefined4)DAT_14c8464f0;
    uStack_c4 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    local_f8 = DAT_14c8464e0;
    uStack_f0 = DAT_14c8464e8;
    local_e8 = DAT_14c8464f0;
    iVar5 = (int)param_1[0xcb];
    *(uint *)(param_1 + 0xcb) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0x65c) < iVar5 + 1U) {
      FUN_140924c58(param_1 + 0xca,iVar5);
    }
    memmove((void *)(param_1[0xca] + lVar13 + 0x58),(void *)(param_1[0xca] + lVar13),
            (ulonglong)(iVar5 - param_3) * 0x58);
    lVar6 = param_1[0xca];
    *(float *)(lVar6 + lVar13) = fVar21;
    *(undefined8 *)(lVar6 + 8 + lVar13) = 0x3ff0000000000000;
    *(undefined8 *)(lVar6 + 0x10 + lVar13) = 0x3ff0000000000000;
    *(undefined8 *)(lVar6 + 0x18 + lVar13) = 0x3ff0000000000000;
    *(ulonglong *)(lVar6 + 0x30 + lVar13) = CONCAT44(uStack_c4,local_c8);
    puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar13);
    *puVar1 = local_d8;
    puVar1[1] = CONCAT44(uStack_cc,uStack_d0);
    puVar1 = (undefined8 *)(lVar6 + 0x38 + lVar13);
    *puVar1 = local_f8;
    puVar1[1] = uStack_f0;
    *(undefined8 *)(lVar6 + 0x48 + lVar13) = local_e8;
    *(undefined1 *)(lVar6 + 0x50 + lVar13) = 1;
    plVar10 = (longlong *)(**(code **)(*param_1 + 0xa00))(param_1);
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x2a0))
                (plVar10,(int)fVar21,(float)(int)param_3,*(undefined1 *)((longlong)param_1 + 0x695))
      ;
    }
    for (; (int)param_3 < iVar4; param_3 = param_3 + 1) {
      lVar12 = lVar12 + 0x80;
      lVar13 = lVar13 + 0x58;
      *(float *)(*local_120 + lVar13) = *(float *)(*local_120 + lVar13) + 1.0;
      lVar6 = param_1[199];
      *(float *)(lVar6 + lVar12) = *(float *)(lVar6 + lVar12) + 1.0;
      lVar6 = param_1[0xca];
      *(float *)(lVar6 + lVar13) = *(float *)(lVar6 + lVar13) + 1.0;
    }
    param_5 = local_121;
    if (*(char *)((longlong)param_1 + 0x696) != '\0') {
      *(float *)(param_1 + 0xd3) = *(float *)(param_1 + 0xd3) + 1.0;
    }
  }
  if (param_5 == '\0') {
    if ((local_a0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_148);
}



// FUNCTION 147a1aa64 FUN_147a1aa64 body=169 status=ok
// SIG undefined FUN_147a1aa64(void)

void FUN_147a1aa64(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a19f0a(param_1,puVar1,1,1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1ab12 FUN_147a1ab12 body=158 status=ok
// SIG undefined FUN_147a1ab12(void)

void FUN_147a1ab12(undefined8 param_1,longlong param_2)

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
  FUN_147a1abb2(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1abb2 FUN_147a1abb2 body=222 status=ok
// SIG undefined FUN_147a1abb2(void)

void FUN_147a1abb2(longlong *param_1,char param_2)

{
  longlong *plVar1;
  
  if (*(int *)((longlong)param_1 + 0x62c) < 0) {
    *(undefined4 *)(param_1 + 0xc5) = 0;
    FUN_14093938a(param_1 + 0xc4,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xc5) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x644) < 0) {
    *(undefined4 *)(param_1 + 200) = 0;
    FUN_1409394d2(param_1 + 199,0);
  }
  else {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x65c) < 0) {
    *(undefined4 *)(param_1 + 0xcb) = 0;
    FUN_14093938a(param_1 + 0xca,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xcb) = 0;
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xa00))(param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,0);
  }
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147a1ac2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa38))(param_1);
    return;
  }
  return;
}



// FUNCTION 147a1ac96 FUN_147a1ac96 body=445 status=ok
// SIG undefined FUN_147a1ac96(void)

void FUN_147a1ac96(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48 [2];
  undefined4 local_34;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_58 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_58 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14126713e(param_1,local_2c,local_2d,local_34);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1ae5a FUN_147a1ae5a body=358 status=ok
// SIG undefined FUN_147a1ae5a(void)

void FUN_147a1ae5a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined4 local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_141266fc2(param_1,local_29,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1afce FUN_147a1afce body=732 status=ok
// SIG undefined FUN_147a1afce(void)

void FUN_147a1afce(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined1 local_80;
  int local_6c;
  longlong local_68 [5];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
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
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar2 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_6c != 0;
  local_98 = local_40;
  local_90 = plVar2;
  local_88 = plVar3;
  uVar1 = FUN_147a1b2ac(param_1,local_31,local_38,local_3c);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1b2ac FUN_147a1b2ac body=2503 status=ok
// SIG undefined FUN_147a1b2ac(void)

ulonglong FUN_147a1b2ac(longlong param_1,undefined4 param_2,float param_3,float param_4,
                       float param_5,longlong *param_6,longlong *param_7,byte param_8)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  void **ppvVar14;
  void *_Dst;
  bool bVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_178 [32];
  float local_158;
  void **local_150;
  void **local_148;
  undefined1 local_140;
  uint local_134;
  longlong *local_130;
  uint local_124;
  longlong local_120;
  void *local_118;
  ulonglong uStack_110;
  void *local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar3 = *(uint *)(param_1 + 0x628);
  if (uVar3 != 0) {
    uVar20 = 1;
    if (1 < (int)uVar3) {
      uVar20 = uVar3;
    }
    uVar20 = uVar20 - 1;
    if (*(byte *)(param_1 + 0x695) != 0) {
      uVar20 = uVar3;
    }
    if (((longlong)*(int *)(param_1 + 0x670) < 1) ||
       (fVar24 = *(float *)(*(longlong *)(param_1 + 0x668) + -0x14 +
                           (longlong)*(int *)(param_1 + 0x670) * 0x14), fVar24 <= 0.0)) {
      local_f8 = (void *)((ulonglong)local_f8 & 0xffffffff00000000);
      FUN_140753fde(param_1 + 0x668,0);
      FUN_140703b8c(param_1,&local_f8);
      iVar16 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar16 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar16 + 1U) {
        FUN_1403e3958(param_6,iVar16);
      }
      lVar17 = *param_6;
      *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar16 * 0x18) = local_e8;
      puVar2 = (undefined4 *)(lVar17 + (longlong)iVar16 * 0x18);
      *puVar2 = (undefined4)local_f8;
      puVar2[1] = local_f8._4_4_;
      puVar2[2] = (uint)uStack_f0;
      puVar2[3] = uStack_f0._4_4_;
      iVar16 = (int)param_7[1];
      *(uint *)(param_7 + 1) = iVar16 + 1U;
      if (*(uint *)((longlong)param_7 + 0xc) < iVar16 + 1U) {
        FUN_144941252(param_7,iVar16);
      }
      *(undefined8 *)(*param_7 + (longlong)iVar16 * 8) = 0;
    }
    else {
      if ((param_8 & *(byte *)(param_1 + 0x695)) == 0) {
        if (fVar24 <= param_4) {
          param_4 = fVar24;
        }
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        if (fVar24 <= param_5) {
          param_5 = fVar24;
        }
        if (param_5 <= 0.0) {
          param_5 = 0.0;
        }
        bVar21 = false;
      }
      else {
        bVar21 = param_4 < 0.0 || fVar24 < param_5;
      }
      if (param_4 <= param_5) {
        uVar3 = (int)((param_5 - param_4) / fVar24) * uVar20 * 2;
        _Dst = (void *)(ulonglong)uVar3;
        *(undefined4 *)(param_6 + 1) = 0;
        if (*(int *)((longlong)param_6 + 0xc) != 0) {
          FUN_1447a8aa0(param_6,0);
        }
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar3);
        }
        if (*(int *)((longlong)param_6 + 0xc) < (int)uVar3) {
          FUN_1447a8aa0(param_6,uVar3);
        }
        *(undefined4 *)(param_7 + 1) = 0;
        if (*(int *)((longlong)param_7 + 0xc) == 0) {
          iVar16 = 0;
        }
        else {
          FUN_140cb0586(param_7,0);
          iVar16 = *(int *)((longlong)param_7 + 0xc);
        }
        if (iVar16 < (int)uVar3) {
          FUN_140cb0586(param_7,uVar3);
        }
        plVar1 = (longlong *)(param_1 + 0x668);
        if ((param_4 == param_5) && (!NAN(param_4) && !NAN(param_5))) {
          local_f8 = (void *)((ulonglong)local_f8 & 0xffffffff00000000);
          FUN_140753fde(plVar1,param_4);
          FUN_140703b8c(param_1,&local_f8);
          iVar16 = (int)param_6[1];
          *(uint *)(param_6 + 1) = iVar16 + 1U;
          if (*(uint *)((longlong)param_6 + 0xc) < iVar16 + 1U) {
            FUN_1403e3958(param_6,iVar16);
          }
          lVar17 = *param_6;
          *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar16 * 0x18) = local_e8;
          puVar2 = (undefined4 *)(lVar17 + (longlong)iVar16 * 0x18);
          *puVar2 = (undefined4)local_f8;
          puVar2[1] = local_f8._4_4_;
          puVar2[2] = (uint)uStack_f0;
          puVar2[3] = uStack_f0._4_4_;
          iVar16 = (int)param_7[1];
          *(uint *)(param_7 + 1) = iVar16 + 1U;
          if (*(uint *)((longlong)param_7 + 0xc) < iVar16 + 1U) {
            FUN_144941252(param_7,iVar16);
          }
          *(double *)(*param_7 + (longlong)iVar16 * 8) = (double)param_4;
          ppvVar14 = (void **)CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
          goto LAB_147a1b45f;
        }
        fVar22 = 1e-08;
        if (1e-08 <= param_3) {
          fVar22 = param_3;
        }
        if (!bVar21) {
          pfVar4 = (float *)*plVar1;
          uVar11 = 0xffffffff;
          uVar8 = 0xffffffff;
          if (*pfVar4 <= param_4) {
            iVar16 = *(int *)(param_1 + 0x670);
            uVar8 = (longlong)iVar16 - 1;
            if ((param_4 < pfVar4[uVar8 * 5]) && (uVar8 = 0, 1 < iVar16)) {
              uVar8 = 0;
              uVar12 = (longlong)iVar16;
              do {
                uVar9 = (ulonglong)((uint)((int)uVar8 + (int)uVar12) >> 1);
                if (pfVar4[uVar9 * 5] <= param_4) {
                  uVar8 = uVar9;
                  uVar9 = uVar12;
                }
                uVar12 = uVar9;
              } while (1 < (int)uVar9 - (int)uVar8);
            }
          }
          uVar8 = (longlong)((ulonglong)(uint)((int)uVar8 >> 0x1f) << 0x20 | uVar8 & 0xffffffff) /
                  (longlong)*(int *)(param_1 + 0x688);
          uVar12 = uVar8 & 0xffffffff;
          if (*pfVar4 <= param_5) {
            iVar16 = *(int *)(param_1 + 0x670);
            uVar11 = (longlong)iVar16 - 1;
            if ((param_5 < pfVar4[uVar11 * 5]) && (uVar11 = 0, 1 < iVar16)) {
              uVar11 = 0;
              uVar9 = (longlong)iVar16;
              do {
                uVar13 = (ulonglong)((uint)((int)uVar11 + (int)uVar9) >> 1);
                uVar10 = uVar13;
                if (pfVar4[uVar13 * 5] <= param_5) {
                  uVar10 = uVar9;
                  uVar11 = uVar13;
                }
                uVar9 = uVar10;
              } while (1 < (int)uVar10 - (int)uVar11);
            }
          }
          local_134 = (int)((longlong)
                            ((ulonglong)(uint)((int)uVar11 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) /
                           (longlong)*(int *)(param_1 + 0x688)) + 1;
          if ((int)uVar20 < (int)local_134) {
            local_134 = uVar20;
          }
          local_108 = (void *)0x0;
          uStack_100 = 0;
          local_118 = (void *)0x0;
          uStack_110 = 0;
          local_130 = plVar1;
          if ((int)uVar8 < (int)local_134) {
            fVar24 = param_4;
            if (param_4 <= 0.0) {
              fVar24 = 0.0;
            }
            local_120 = param_1;
            do {
              iVar16 = (int)uVar12;
              if (iVar16 < 0) {
                fVar23 = 0.0;
                local_124 = iVar16 + 1;
                dVar6 = (double)fVar24;
                if (local_124 == 0) {
                  iVar18 = *(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1);
                  local_124 = 0;
                  goto LAB_147a1b98b;
                }
              }
              else {
                iVar18 = *(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1);
                fVar23 = 0.0;
                if ((iVar16 <= iVar18) &&
                   (lVar17 = (longlong)iVar16 * (longlong)*(int *)(param_1 + 0x688),
                   (int)lVar17 < *(int *)(param_1 + 0x670))) {
                  fVar23 = *(float *)(*local_130 + lVar17 * 0x14);
                }
                fVar25 = param_4;
                if (param_4 <= fVar23) {
                  fVar25 = fVar23;
                }
                local_124 = iVar16 + 1;
                dVar6 = (double)fVar25;
LAB_147a1b98b:
                fVar23 = 0.0;
                if ((iVar16 < iVar18) &&
                   (lVar17 = (longlong)(int)local_124 * (longlong)*(int *)(param_1 + 0x688),
                   (int)lVar17 < *(int *)(param_1 + 0x670))) {
                  fVar23 = *(float *)(*local_130 + lVar17 * 0x14);
                }
              }
              fVar25 = param_5;
              if (fVar23 <= param_5) {
                fVar25 = fVar23;
              }
              dVar5 = ((double)fVar25 - dVar6) * 0.5;
              if ((dVar5 != 0.0) || (NAN(dVar5))) {
                bVar21 = true;
                do {
                  bVar15 = bVar21;
                  bVar21 = (longlong)uStack_100 < 0;
                  uStack_100 = uStack_100 & 0xffffffff00000000;
                  if (bVar21) {
                    FUN_1447a8aa0(&local_108,0);
                  }
                  bVar21 = (longlong)uStack_110 < 0;
                  uStack_110 = uStack_110 & 0xffffffff00000000;
                  if (bVar21) {
                    FUN_140cb0586(&local_118);
                  }
                  local_158 = fVar22;
                  local_150 = &local_108;
                  local_148 = &local_118;
                  cVar7 = FUN_1407036d0(param_1,(float)dVar6,(float)(dVar5 + dVar6),param_2);
                  if (cVar7 != '\0') {
                    if (0 < (int)param_6[1]) {
                      *(int *)(param_6 + 1) = (int)param_6[1] + -1;
                      FUN_140704026(param_6);
                      *(int *)(param_7 + 1) = (int)param_7[1] + -1;
                      FUN_140704066();
                    }
                    lVar17 = (longlong)(int)(uint)uStack_100;
                    _Dst = (void *)0x0;
                    if (lVar17 != 0) {
                      iVar16 = (int)param_6[1];
                      *(uint *)(param_6 + 1) = iVar16 + (uint)uStack_100;
                      if ((uint)(*(int *)((longlong)param_6 + 0xc) - iVar16) < (uint)uStack_100) {
                        FUN_1403e3958(param_6,iVar16);
                      }
                      _Dst = (void *)(lVar17 * 8);
                      memcpy((void *)((longlong)iVar16 * 0x18 + *param_6),local_108,lVar17 * 0x18);
                    }
                    lVar17 = (longlong)(int)(uint)uStack_110;
                    if (lVar17 != 0) {
                      iVar16 = (int)param_7[1];
                      *(uint *)(param_7 + 1) = (uint)uStack_110 + iVar16;
                      if ((uint)(*(int *)((longlong)param_7 + 0xc) - iVar16) < (uint)uStack_110) {
                        FUN_144941252(param_7,iVar16);
                      }
                      _Dst = (void *)((longlong)iVar16 * 8 + *param_7);
                      memcpy(_Dst,local_118,lVar17 << 3);
                      param_1 = local_120;
                    }
                  }
                  bVar21 = false;
                  dVar6 = dVar5 + dVar6;
                } while (bVar15);
              }
              else if (local_124 == local_134) {
                local_f8 = (void *)((ulonglong)local_f8 & 0xffffffff00000000);
                FUN_140753fde(local_130,local_124,&local_f8);
                FUN_140703b8c(param_1,&local_f8);
                iVar16 = (int)param_6[1];
                *(uint *)(param_6 + 1) = iVar16 + 1U;
                if (*(uint *)((longlong)param_6 + 0xc) < iVar16 + 1U) {
                  FUN_1403e3958(param_6,iVar16);
                }
                lVar17 = *param_6;
                *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar16 * 0x18) = local_e8;
                puVar2 = (undefined4 *)(lVar17 + (longlong)iVar16 * 0x18);
                *puVar2 = (undefined4)local_f8;
                puVar2[1] = local_f8._4_4_;
                puVar2[2] = (uint)uStack_f0;
                puVar2[3] = uStack_f0._4_4_;
                iVar16 = (int)param_7[1];
                *(uint *)(param_7 + 1) = iVar16 + 1U;
                if (*(uint *)((longlong)param_7 + 0xc) < iVar16 + 1U) {
                  FUN_144941252(param_7,iVar16);
                }
                *(double *)(*param_7 + (longlong)iVar16 * 8) = (double)fVar25;
              }
              uVar12 = (ulonglong)local_124;
            } while ((int)local_124 < (int)local_134);
            iVar16 = (int)param_6[1];
            if (local_118 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            iVar16 = (int)param_6[1];
          }
          ppvVar14 = (void **)CONCAT71((int7)((ulonglong)_Dst >> 8),iVar16 != 0);
          if (local_108 != (void *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_147a1b45f;
        }
        iVar18 = (int)ROUND(param_4 / fVar24 + param_4 / fVar24 + -0.5) >> 1;
        FUN_1447c7e44(param_4,fVar24);
        iVar16 = (int)ROUND(param_5 / fVar24 + param_5 / fVar24 + -0.5) >> 1;
        fVar22 = (float)FUN_1447c7e44(param_5,fVar24);
        iVar19 = iVar18 - iVar16;
        if (iVar19 == 0 || iVar18 < iVar16) {
          ppvVar14 = (void **)0x0;
          do {
            if ((((ulonglong)ppvVar14 & 1) != 0) && ((int)param_6[1] != 0)) {
              *(int *)(param_6 + 1) = (int)param_6[1] + -1;
              *(int *)(param_7 + 1) = (int)param_7[1] + -1;
            }
            local_158 = (float)(~-(uint)(fVar22 < 0.0) & (uint)fVar22 |
                               (uint)(fVar24 + fVar22) & -(uint)(fVar22 < 0.0));
            if (iVar19 != 0) {
              local_158 = fVar24;
            }
            local_f8 = (void *)0x0;
            uStack_f0 = 0;
            local_108 = (void *)0x0;
            uStack_100 = 0;
            local_150 = (void **)&local_f8;
            local_140 = 0;
            local_148 = &local_108;
            FUN_147a1b2ac(param_1,param_2);
            lVar17 = (longlong)(int)(uint)uStack_f0;
            if (lVar17 != 0) {
              iVar16 = (int)param_6[1];
              *(uint *)(param_6 + 1) = iVar16 + (uint)uStack_f0;
              if ((uint)(*(int *)((longlong)param_6 + 0xc) - iVar16) < (uint)uStack_f0) {
                FUN_1403e3958(param_6,iVar16);
              }
              memcpy((void *)((longlong)iVar16 * 0x18 + *param_6),local_f8,lVar17 * 0x18);
            }
            lVar17 = (longlong)(int)(uint)uStack_100;
            if (lVar17 != 0) {
              iVar16 = (int)param_7[1];
              *(uint *)(param_7 + 1) = iVar16 + (uint)uStack_100;
              if ((uint)(*(int *)((longlong)param_7 + 0xc) - iVar16) < (uint)uStack_100) {
                FUN_144941252(param_7,iVar16);
              }
              memcpy((void *)((longlong)iVar16 * 8 + *param_7),local_108,lVar17 << 3);
              ppvVar14 = &local_108;
            }
            if (local_108 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_f8 != (void *)0x0) {
              FUN_1400020a8();
            }
            iVar19 = iVar19 + 1;
            ppvVar14 = (void **)CONCAT71((int7)((ulonglong)ppvVar14 >> 8),1);
          } while (iVar19 != 1);
          goto LAB_147a1b45f;
        }
      }
    }
  }
  ppvVar14 = (void **)0x0;
LAB_147a1b45f:
  if ((local_e0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppvVar14 & 0xffffffff;
}



// FUNCTION 147a1bc88 FUN_147a1bc88 body=839 status=ok
// SIG undefined FUN_147a1bc88(void)

void FUN_147a1bc88(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined1 local_88;
  int local_7c;
  longlong local_78 [5];
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a64e42();
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
  iVar1 = local_4c;
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  plVar3 = local_78 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar4 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_7c != 0;
  local_a0 = iVar1 != 0;
  local_a8 = local_48;
  local_98 = plVar3;
  local_90 = plVar4;
  uVar2 = FUN_147a1bfd0(param_1,local_39,local_40,local_44);
  *param_3 = uVar2;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1bfd0 FUN_147a1bfd0 body=259 status=ok
// SIG undefined FUN_147a1bfd0(void)

undefined8
FUN_147a1bfd0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong local_80;
  undefined1 local_78;
  undefined1 local_77;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x628) != 0) {
    local_78 = param_6;
    local_77 = param_9;
    local_80 = param_1;
    uVar1 = FUN_14349c838(&local_80,param_5);
    uVar2 = FUN_14349c838(&local_80,param_4);
    local_90 = param_9;
    local_98 = param_8;
    local_a0 = param_7;
    local_a8 = uVar1;
    FUN_147a1b2ac(param_1,param_2,param_3,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_c8);
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1c0e2 FUN_147a1c0e2 body=504 status=ok
// SIG undefined FUN_147a1c0e2(void)

void FUN_147a1c0e2(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined1 local_60;
  longlong local_58 [4];
  undefined4 local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar2 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_68 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_68 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = 0;
  if (0 < (longlong)*(int *)(param_1 + 0x670)) {
    local_78 = *(undefined4 *)
                (*(longlong *)(param_1 + 0x668) + -0x14 + (longlong)*(int *)(param_1 + 0x670) * 0x14
                );
  }
  local_60 = 0;
  local_70 = plVar2;
  uVar1 = FUN_147a1b2ac(param_1,local_31,local_38,0);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1c2dc FUN_147a1c2dc body=77 status=ok
// SIG undefined FUN_147a1c2dc(void)

void FUN_147a1c2dc(void)

{
  FUN_147a1b2ac();
  return;
}



// FUNCTION 147a1c330 FUN_147a1c330 body=501 status=ok
// SIG undefined FUN_147a1c330(void)

void FUN_147a1c330(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong *local_50;
  longlong local_48 [2];
  undefined4 local_38;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
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
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_50 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_50 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uVar1 = FUN_147a1c526(param_1,local_2c,local_30,local_31);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1c526 FUN_147a1c526 body=130 status=ok
// SIG undefined FUN_147a1c526(void)

undefined4
FUN_147a1c526(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined1 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = local_28;
  local_28[0] = 0;
  local_28[1] = 0;
  local_40 = param_6;
  local_30 = 0;
  local_48 = param_3;
  uVar1 = FUN_147a1b2ac(param_5,param_4,param_5,param_2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1c5b0 FUN_147a1c5b0 body=624 status=ok
// SIG undefined FUN_147a1c5b0(void)

void FUN_147a1c5b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_70;
  longlong local_68 [5];
  undefined4 local_40;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_34 = 0;
  FUN_144a64e42();
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
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar2 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_78 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_78 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_38;
  local_70 = 0;
  local_80 = plVar2;
  uVar1 = FUN_147a1b2ac(param_1,local_39,local_40,local_34);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1c822 FUN_147a1c822 body=292 status=ok
// SIG undefined FUN_147a1c822(void)

void FUN_147a1c822(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_41;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  uVar2 = local_41;
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1408b9a3e(param_1,puVar3);
  FUN_1407541d8(param_1,&local_60,uVar4,uVar2);
  *(undefined8 *)(param_3 + 4) = local_50;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1c948 FUN_147a1c948 body=169 status=ok
// SIG undefined FUN_147a1c948(void)

void FUN_147a1c948(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1408b9a3e(param_1,puVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1c9f2 FUN_147a1c9f2 body=292 status=ok
// SIG undefined FUN_147a1c9f2(void)

void FUN_147a1c9f2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_41;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  uVar2 = local_41;
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1408b9a3e(param_1,puVar3);
  FUN_140703b8c(param_1,&local_60,uVar4,uVar2);
  *(undefined8 *)(param_3 + 4) = local_50;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1cb18 FUN_147a1cb18 body=52 status=ok
// SIG undefined FUN_147a1cb18(void)

undefined8
FUN_147a1cb18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1408b9a3e(param_1,param_3);
  FUN_140703b8c(param_1,param_2,uVar1,param_4);
  return param_2;
}



// FUNCTION 147a1cb4c FUN_147a1cb4c body=278 status=ok
// SIG undefined FUN_147a1cb4c(void)

void FUN_147a1cb4c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_41;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  uVar2 = local_41;
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1408b9a3e(param_1,puVar3);
  FUN_147a1fa74(param_1,&local_60,uVar4,uVar2);
  *(undefined8 *)(param_3 + 4) = local_50;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1cc64 FUN_147a1cc64 body=317 status=ok
// SIG undefined FUN_147a1cc64(void)

void FUN_147a1cc64(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  undefined1 local_78 [24];
  undefined1 local_60 [16];
  double local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_79 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  uVar2 = local_79;
  puVar3 = local_78;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1408b9a3e(param_1,puVar3);
  FUN_14099e1de(param_1,local_48,uVar4,uVar2);
  FUN_1448052ee(local_48,local_60);
  *param_3 = (float)local_50;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1cda2 FUN_147a1cda2 body=319 status=ok
// SIG undefined FUN_147a1cda2(void)

void FUN_147a1cda2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_61;
  undefined1 local_60 [24];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_61 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_61);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_61);
  }
  uVar2 = local_61;
  puVar3 = local_60;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1408b9a3e(param_1,puVar3);
  FUN_14099e1de(param_1,local_48,uVar4,uVar2);
  FUN_1448052ee(local_48,&local_80);
  *(undefined8 *)(param_3 + 4) = local_70;
  *param_3 = local_80;
  param_3[1] = uStack_7c;
  param_3[2] = uStack_78;
  param_3[3] = uStack_74;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1cee2 FUN_147a1cee2 body=109 status=ok
// SIG undefined FUN_147a1cee2(void)

undefined8
FUN_147a1cee2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1408b9a3e(param_1,param_3);
  FUN_14099e1de(param_1,local_48,uVar1,param_4);
  FUN_1448052ee(local_48,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1cf50 FUN_147a1cf50 body=238 status=ok
// SIG undefined FUN_147a1cf50(void)

void FUN_147a1cf50(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar1 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1408b9a3e(param_1,puVar1);
  local_38 = 0x3ff0000000000000;
  local_30 = 0x3ff0000000000000;
  local_28 = 0x3ff0000000000000;
  FUN_140703ce0(param_1 + 0x650,&local_68,uVar2);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1d040 FUN_147a1d040 body=278 status=ok
// SIG undefined FUN_147a1d040(void)

void FUN_147a1d040(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_41;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  uVar2 = local_41;
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1408b9a3e(param_1,puVar3);
  FUN_147a21988(param_1,&local_60,uVar4,uVar2);
  *(undefined8 *)(param_3 + 4) = local_50;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1d15e FUN_147a1d15e body=402 status=ok
// SIG undefined FUN_147a1d15e(void)

void FUN_147a1d15e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_b8 [13];
  int local_50;
  undefined1 local_49;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_49 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_49;
  iVar2 = local_50;
  puVar5 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar5 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_1408b9a3e(param_1,puVar5);
  local_c8 = iVar2 != 0;
  FUN_147a224dc(param_1,local_b8,uVar7,uVar3);
  puVar6 = local_b8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *param_3 = *puVar6;
    puVar6 = puVar6 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1d2f2 FUN_147a1d2f2 body=292 status=ok
// SIG undefined FUN_147a1d2f2(void)

void FUN_147a1d2f2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_41;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  uVar2 = local_41;
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1408b9a3e(param_1,puVar3);
  FUN_1417c1cca(param_1,&local_60,uVar4,uVar2);
  *(undefined8 *)(param_3 + 4) = local_50;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1d418 FUN_147a1d418 body=255 status=ok
// SIG undefined FUN_147a1d418(void)

void FUN_147a1d418(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a1d518(param_1,&local_40,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1d518 FUN_147a1d518 body=383 status=ok
// SIG undefined FUN_147a1d518(void)

void FUN_147a1d518(longlong param_1,undefined1 (*param_2) [16],uint param_3,int param_4)

{
  double dVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar2 = *(int *)(param_1 + 0x628);
  if (iVar2 < 1) {
    puVar9 = &DAT_14cad3298;
  }
  else {
    uVar8 = 0;
    if (((int)param_3 < iVar2) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar10 = iVar2 - 1U;
      if ((int)param_3 < (int)(iVar2 - 1U)) {
        uVar10 = param_3;
      }
      if (0 < (int)uVar10) {
        uVar8 = (ulonglong)uVar10;
      }
    }
    puVar9 = (undefined4 *)(uVar8 * 0x58 + *(longlong *)(param_1 + 0x620));
  }
  if (param_4 == 1) {
    dVar12 = *(double *)(puVar9 + 8) * *(double *)(param_1 + 0x280);
    dVar13 = *(double *)(puVar9 + 10) * *(double *)(param_1 + 0x288);
    dVar11 = *(double *)(puVar9 + 0xc) * *(double *)(param_1 + 0x290);
    dVar4 = *(double *)(param_1 + 0x240);
    dVar5 = *(double *)(param_1 + 0x248);
    dVar6 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar14 = dVar13 * dVar4 - dVar12 * dVar5;
    dVar15 = dVar11 * dVar5 - dVar13 * dVar6;
    dVar16 = dVar12 * dVar6 - dVar4 * dVar11;
    dVar15 = dVar15 + dVar15;
    dVar16 = dVar16 + dVar16;
    dVar14 = dVar14 + dVar14;
    dVar13 = (dVar6 * dVar15 - dVar4 * dVar14) + *(double *)(param_1 + 600) * dVar16 + dVar13;
    auVar3._8_4_ = SUB84(dVar13,0);
    auVar3._0_8_ = (dVar14 * dVar5 - dVar16 * dVar6) + dVar1 * dVar15 + dVar12;
    auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *param_2 = auVar3;
    *(double *)param_2[1] = dVar14 * dVar1 + dVar11 + (dVar16 * dVar4 - dVar15 * dVar5);
  }
  else {
    *(undefined8 *)param_2[1] = *(undefined8 *)(puVar9 + 0xc);
    uVar7 = *(undefined8 *)(puVar9 + 10);
    *(undefined8 *)*param_2 = *(undefined8 *)(puVar9 + 8);
    *(undefined8 *)(*param_2 + 8) = uVar7;
  }
  return;
}



// FUNCTION 147a1d698 FUN_147a1d698 body=457 status=ok
// SIG undefined FUN_147a1d698(void)

void FUN_147a1d698(longlong param_1,longlong param_2,double *param_3)

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
  double dVar10;
  undefined1 auStack_88 [39];
  char local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_61 = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_61);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_61);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_61 == '\x01') {
    dVar6 = *(double *)(param_1 + 0x6a0) * *(double *)(param_1 + 0x280);
    dVar7 = *(double *)(param_1 + 0x6a8) * *(double *)(param_1 + 0x288);
    dVar4 = *(double *)(param_1 + 0x6b0) * *(double *)(param_1 + 0x290);
    dVar1 = *(double *)(param_1 + 0x240);
    dVar2 = *(double *)(param_1 + 0x248);
    dVar3 = *(double *)(param_1 + 0x250);
    dVar5 = *(double *)(param_1 + 600);
    dVar8 = dVar7 * dVar1 - dVar6 * dVar2;
    dVar9 = dVar4 * dVar2 - dVar7 * dVar3;
    dVar10 = dVar6 * dVar3 - dVar1 * dVar4;
    dVar9 = dVar9 + dVar9;
    dVar10 = dVar10 + dVar10;
    dVar8 = dVar8 + dVar8;
    dVar4 = dVar8 * dVar5 + dVar4 + (dVar10 * dVar1 - dVar9 * dVar2);
    dVar5 = (dVar8 * dVar2 - dVar10 * dVar3) + dVar5 * dVar9 + dVar6;
    dVar10 = (dVar3 * dVar9 - dVar1 * dVar8) + *(double *)(param_1 + 600) * dVar10 + dVar7;
  }
  else {
    dVar5 = *(double *)(param_1 + 0x6a0);
    dVar10 = *(double *)(param_1 + 0x6a8);
    dVar4 = *(double *)(param_1 + 0x6b0);
  }
  *param_3 = dVar5;
  param_3[1] = dVar10;
  param_3[2] = dVar4;
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1d862 FUN_147a1d862 body=320 status=ok
// SIG undefined FUN_147a1d862(void)

void FUN_147a1d862(longlong param_1,undefined1 (*param_2) [16],int param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (param_3 == 1) {
    dVar8 = *(double *)(param_1 + 0x6a0) * *(double *)(param_1 + 0x280);
    dVar9 = *(double *)(param_1 + 0x6a8) * *(double *)(param_1 + 0x288);
    dVar7 = *(double *)(param_1 + 0x6b0) * *(double *)(param_1 + 0x290);
    dVar3 = *(double *)(param_1 + 0x240);
    dVar4 = *(double *)(param_1 + 0x248);
    dVar5 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar10 = dVar9 * dVar3 - dVar8 * dVar4;
    dVar11 = dVar7 * dVar4 - dVar9 * dVar5;
    dVar12 = dVar8 * dVar5 - dVar3 * dVar7;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    dVar9 = (dVar5 * dVar11 - dVar3 * dVar10) + *(double *)(param_1 + 600) * dVar12 + dVar9;
    auVar2._8_4_ = SUB84(dVar9,0);
    auVar2._0_8_ = (dVar10 * dVar4 - dVar12 * dVar5) + dVar1 * dVar11 + dVar8;
    auVar2._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *param_2 = auVar2;
    *(double *)param_2[1] = dVar10 * dVar1 + dVar7 + (dVar12 * dVar3 - dVar11 * dVar4);
  }
  else {
    *(undefined8 *)param_2[1] = *(undefined8 *)(param_1 + 0x6b0);
    uVar6 = *(undefined8 *)(param_1 + 0x6a8);
    *(undefined8 *)*param_2 = *(undefined8 *)(param_1 + 0x6a0);
    *(undefined8 *)(*param_2 + 8) = uVar6;
  }
  return;
}



// FUNCTION 147a1d9a2 FUN_147a1d9a2 body=304 status=ok
// SIG undefined FUN_147a1d9a2(void)

void FUN_147a1d9a2(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  uVar1 = local_2d;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  uVar2 = FUN_140753fde(param_1 + 0x668,local_2c);
  FUN_1407541d8(param_1,&local_48,uVar2,uVar1);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1dad4 FUN_147a1dad4 body=108 status=ok
// SIG undefined FUN_147a1dad4(void)

undefined8 FUN_147a1dad4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  uVar1 = FUN_140753fde(param_1 + 0x668,param_3);
  FUN_1407541d8(param_1,param_2,uVar1,param_4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1db42 FUN_147a1db42 body=270 status=ok
// SIG undefined FUN_147a1db42(void)

void FUN_147a1db42(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1407541d8(param_1,&local_40,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1dc52 FUN_147a1dc52 body=255 status=ok
// SIG undefined FUN_147a1dc52(void)

void FUN_147a1dc52(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a1dd52(param_1,&local_40,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1dd52 FUN_147a1dd52 body=510 status=ok
// SIG undefined FUN_147a1dd52(void)

void FUN_147a1dd52(longlong param_1,undefined1 (*param_2) [16],uint param_3,int param_4)

{
  double dVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar2 = *(int *)(param_1 + 0x628);
  if (iVar2 < 1) {
    puVar8 = &DAT_14cad3298;
  }
  else {
    uVar7 = 0;
    if (((int)param_3 < iVar2) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar9 = iVar2 - 1U;
      if ((int)param_3 < (int)(iVar2 - 1U)) {
        uVar9 = param_3;
      }
      if (0 < (int)uVar9) {
        uVar7 = (ulonglong)uVar9;
      }
    }
    puVar8 = (undefined4 *)(uVar7 * 0x58 + *(longlong *)(param_1 + 0x620));
  }
  dVar1 = *(double *)(puVar8 + 0xe);
  dVar14 = *(double *)(puVar8 + 0x10);
  dVar16 = *(double *)(puVar8 + 0x12);
  dVar13 = dVar16 * dVar16 + dVar1 * dVar1 + dVar14 * dVar14;
  if ((dVar13 != 1.0) || (NAN(dVar13))) {
    dVar10 = DAT_14c8464e0;
    dVar11 = DAT_14c8464e8;
    dVar12 = DAT_14c8464f0;
    if (9.99999993922529e-09 <= dVar13) {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar10 = dVar1 * dVar13;
      dVar11 = dVar14 * dVar13;
      dVar12 = dVar16 * dVar13;
    }
  }
  else {
    dVar10 = *(double *)(puVar8 + 0xe);
    dVar11 = *(double *)(puVar8 + 0x10);
    dVar12 = dVar16;
  }
  if (param_4 == 1) {
    dVar10 = dVar10 * *(double *)(param_1 + 0x280);
    dVar11 = dVar11 * *(double *)(param_1 + 0x288);
    dVar12 = dVar12 * *(double *)(param_1 + 0x290);
    dVar4 = *(double *)(param_1 + 0x240);
    dVar5 = *(double *)(param_1 + 0x248);
    dVar6 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar14 = dVar11 * dVar4 - dVar10 * dVar5;
    dVar15 = dVar12 * dVar5 - dVar11 * dVar6;
    dVar16 = dVar10 * dVar6 - dVar4 * dVar12;
    dVar15 = dVar15 + dVar15;
    dVar16 = dVar16 + dVar16;
    dVar14 = dVar14 + dVar14;
    dVar13 = (dVar6 * dVar15 - dVar4 * dVar14) + *(double *)(param_1 + 600) * dVar16 + dVar11;
    auVar3._8_4_ = SUB84(dVar13,0);
    auVar3._0_8_ = (dVar14 * dVar5 - dVar16 * dVar6) + dVar1 * dVar15 + dVar10;
    auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *param_2 = auVar3;
    *(double *)param_2[1] = dVar14 * dVar1 + dVar12 + (dVar16 * dVar4 - dVar15 * dVar5);
  }
  else {
    *(double *)*param_2 = dVar10;
    *(double *)(*param_2 + 8) = dVar11;
    *(double *)param_2[1] = dVar12;
  }
  return;
}



// FUNCTION 147a1df56 FUN_147a1df56 body=337 status=ok
// SIG undefined FUN_147a1df56(void)

void FUN_147a1df56(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_2c;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
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
  local_58 = local_2c != 0;
  FUN_147a1e0a8(param_1,&local_48,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1e0a8 FUN_147a1e0a8 body=260 status=ok
// SIG undefined FUN_147a1e0a8(void)

undefined4 *
FUN_147a1e0a8(longlong param_1,undefined4 *param_2,float param_3,undefined4 param_4,char param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar1 = *(float *)(param_1 + 0x68c);
  fVar4 = 0.0;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if (param_5 == '\0') {
      FUN_1407541d8(param_1,param_2,
                    ((float)(int)(*(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1)) /
                    fVar1) * param_3,param_4);
      if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    if (0 < (longlong)*(int *)(param_1 + 0x670)) {
      fVar4 = *(float *)(*(longlong *)(param_1 + 0x668) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x670) * 0x14);
    }
    local_24 = 0;
    uVar5 = FUN_140753fde(param_1 + 0x668,(param_3 / fVar1) * fVar4);
    FUN_1407541d8(param_1,param_2,uVar5,param_4);
  }
  else {
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar5 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar5;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 147a1e1ae FUN_147a1e1ae body=246 status=ok
// SIG undefined FUN_147a1e1ae(void)

void FUN_147a1e1ae(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_147a1e2a6(param_1,puVar2,local_41);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1e2a6 FUN_147a1e2a6 body=545 status=ok
// SIG undefined FUN_147a1e2a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a1e2a6(longlong param_1,double *param_2,int param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  double local_88;
  double dStack_80;
  double local_78;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 == 1) {
    dVar11 = *param_2 - *(double *)(param_1 + 0x260);
    dVar12 = param_2[1] - *(double *)(param_1 + 0x268);
    dVar7 = param_2[2] - *(double *)(param_1 + 0x270);
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x280);
    dVar2 = -*(double *)(param_1 + 0x240);
    dVar3 = -*(double *)(param_1 + 0x248);
    dVar9 = *(double *)(param_1 + 0x250) * -1.0;
    dVar10 = *(double *)(param_1 + 600) * 1.0;
    dVar13 = dVar11 * dVar9 - dVar2 * dVar7;
    dVar4 = dVar12 * dVar2 - dVar11 * dVar3;
    dVar5 = dVar7 * dVar3 - dVar12 * dVar9;
    dVar5 = dVar5 + dVar5;
    dVar13 = dVar13 + dVar13;
    dVar4 = dVar4 + dVar4;
    auVar8 = divpd(_DAT_149934d80,auVar1);
    local_88 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar8._0_8_) *
               ((dVar4 * dVar3 - dVar13 * dVar9) + dVar10 * dVar5 + dVar11);
    dStack_80 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar8._8_8_) *
                (*(double *)(param_1 + 0x240) * dVar4 + dVar9 * dVar5 + dVar10 * dVar13 + dVar12);
    local_78 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x290))) &
                       (ulonglong)(1.0 / *(double *)(param_1 + 0x290))) *
               (dVar10 * dVar4 + dVar7 + (dVar13 * dVar2 - dVar5 * dVar3));
  }
  else {
    local_78 = param_2[2];
    local_88 = *param_2;
    dStack_80 = param_2[1];
  }
  uVar6 = FUN_14040e062(param_1 + 0x620,&local_88,local_8c,local_64);
  FUN_147a1e56e(param_1,uVar6);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1e4c8 FUN_147a1e4c8 body=165 status=ok
// SIG undefined FUN_147a1e4c8(void)

void FUN_147a1e4c8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a1e56e(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1e56e FUN_147a1e56e body=250 status=ok
// SIG undefined FUN_147a1e56e(void)

void FUN_147a1e56e(longlong param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar2 = 0.0;
  fVar3 = (float)(int)(*(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1));
  if ((param_2 < 0.0) || (fVar3 <= param_2)) {
    if ((fVar3 <= param_2) && (0 < (longlong)*(int *)(param_1 + 0x670))) {
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x668) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x670) * 0x14);
    }
  }
  else {
    iVar1 = (int)ROUND(param_2 + param_2 + -0.5) >> 1;
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x668) +
                      (longlong)*(int *)(param_1 + 0x688) * (longlong)iVar1 * 0x14);
    local_38 = *(undefined8 *)(param_1 + 0x280);
    uStack_30 = *(undefined8 *)(param_1 + 0x288);
    local_28 = *(undefined8 *)(param_1 + 0x290);
    fVar2 = (float)FUN_14093a2e0(param_1 + 0x620,(longlong)iVar1,param_2 - (float)iVar1);
    fVar2 = fVar2 + fVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 147a1e66a FUN_147a1e66a body=228 status=ok
// SIG undefined FUN_147a1e66a(void)

void FUN_147a1e66a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [36];
  int local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = 0;
  if (((-1 < (longlong)local_24) &&
      (local_24 <= (int)(*(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1)))) &&
     (lVar1 = (longlong)*(int *)(param_1 + 0x688) * (longlong)local_24,
     (int)lVar1 < *(int *)(param_1 + 0x670))) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x668) + lVar1 * 0x14);
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1e750 FUN_147a1e750 body=283 status=ok
// SIG undefined FUN_147a1e750(void)

void FUN_147a1e750(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar3 = local_34;
  uVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x9f8))(param_1);
  uVar3 = FUN_140633f37(uVar2,uVar3,uVar1);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1e86c FUN_147a1e86c body=258 status=ok
// SIG undefined FUN_147a1e86c(void)

void FUN_147a1e86c(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
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
  uVar3 = local_2c;
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x9f8))(param_1);
  uVar3 = FUN_147a2787f(uVar2,uVar3,uVar1);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1e970 FUN_147a1e970 body=255 status=ok
// SIG undefined FUN_147a1e970(void)

void FUN_147a1e970(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar2 = 0.0;
  if (1 < *(int *)(param_1 + 0x628)) {
    fVar3 = (float)*(int *)(param_1 + 0x628);
    fVar1 = *(float *)(param_1 + 0x68c);
    if (*(char *)(param_1 + 0x695) == '\0') {
      fVar3 = fVar3 + -1.0;
    }
    local_34 = 0;
    fVar2 = (float)FUN_140753fde(param_1 + 0x668,local_38);
    fVar2 = fVar2 * (fVar1 / fVar3);
  }
  *param_3 = fVar2;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1ea70 FUN_147a1ea70 body=199 status=ok
// SIG undefined FUN_147a1ea70(void)

void FUN_147a1ea70(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = 0;
  if (1 < *(int *)(param_1 + 0x628)) {
    local_24 = 0;
    uVar1 = FUN_140753fde(param_1 + 0x668,local_28);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1eb38 FUN_147a1eb38 body=219 status=ok
// SIG undefined FUN_147a1eb38(void)

void FUN_147a1eb38(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_48 [36];
  uint local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x628);
  if (iVar1 < 1) {
    puVar3 = &DAT_14cad3298;
  }
  else {
    uVar2 = 0;
    if (((int)local_24 < iVar1) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar4 = iVar1 - 1U;
      if ((int)local_24 < (int)(iVar1 - 1U)) {
        uVar4 = local_24;
      }
      if (0 < (int)uVar4) {
        uVar2 = (ulonglong)uVar4;
      }
    }
    puVar3 = (undefined4 *)(uVar2 * 0x58 + *(longlong *)(param_1 + 0x620));
  }
  *param_3 = *puVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1ec14 FUN_147a1ec14 body=255 status=ok
// SIG undefined FUN_147a1ec14(void)

void FUN_147a1ec14(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a1ed14(param_1,&local_40,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1ed14 FUN_147a1ed14 body=383 status=ok
// SIG undefined FUN_147a1ed14(void)

void FUN_147a1ed14(longlong param_1,undefined1 (*param_2) [16],uint param_3,int param_4)

{
  double dVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar2 = *(int *)(param_1 + 0x628);
  if (iVar2 < 1) {
    puVar9 = &DAT_14cad3298;
  }
  else {
    uVar8 = 0;
    if (((int)param_3 < iVar2) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar10 = iVar2 - 1U;
      if ((int)param_3 < (int)(iVar2 - 1U)) {
        uVar10 = param_3;
      }
      if (0 < (int)uVar10) {
        uVar8 = (ulonglong)uVar10;
      }
    }
    puVar9 = (undefined4 *)(uVar8 * 0x58 + *(longlong *)(param_1 + 0x620));
  }
  if (param_4 == 1) {
    dVar12 = *(double *)(puVar9 + 0xe) * *(double *)(param_1 + 0x280);
    dVar13 = *(double *)(puVar9 + 0x10) * *(double *)(param_1 + 0x288);
    dVar11 = *(double *)(puVar9 + 0x12) * *(double *)(param_1 + 0x290);
    dVar4 = *(double *)(param_1 + 0x240);
    dVar5 = *(double *)(param_1 + 0x248);
    dVar6 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar14 = dVar13 * dVar4 - dVar12 * dVar5;
    dVar15 = dVar11 * dVar5 - dVar13 * dVar6;
    dVar16 = dVar12 * dVar6 - dVar4 * dVar11;
    dVar15 = dVar15 + dVar15;
    dVar16 = dVar16 + dVar16;
    dVar14 = dVar14 + dVar14;
    dVar13 = (dVar6 * dVar15 - dVar4 * dVar14) + *(double *)(param_1 + 600) * dVar16 + dVar13;
    auVar3._8_4_ = SUB84(dVar13,0);
    auVar3._0_8_ = (dVar14 * dVar5 - dVar16 * dVar6) + dVar1 * dVar15 + dVar12;
    auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *param_2 = auVar3;
    *(double *)param_2[1] = dVar14 * dVar1 + dVar11 + (dVar16 * dVar4 - dVar15 * dVar5);
  }
  else {
    *(undefined8 *)param_2[1] = *(undefined8 *)(puVar9 + 0x12);
    uVar7 = *(undefined8 *)(puVar9 + 0x10);
    *(undefined8 *)*param_2 = *(undefined8 *)(puVar9 + 0xe);
    *(undefined8 *)(*param_2 + 8) = uVar7;
  }
  return;
}



// FUNCTION 147a1ee94 FUN_147a1ee94 body=332 status=ok
// SIG undefined FUN_147a1ee94(void)

void FUN_147a1ee94(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [28];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar1 = local_48;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = 0;
  FUN_147a1f174(param_1,local_2c,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1efe2 FUN_147a1efe2 body=400 status=ok
// SIG undefined FUN_147a1efe2(void)

void FUN_147a1efe2(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [32];
  uint local_78;
  byte local_61;
  undefined1 local_60 [24];
  undefined1 local_48 [28];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_61 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_61);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_61);
  }
  puVar3 = local_60;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (uint)local_61;
  FUN_147a1f174(param_1,local_2c,puVar2,puVar3);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1f174 FUN_147a1f174 body=222 status=ok
// SIG undefined FUN_147a1f174(void)

void FUN_147a1f174(longlong param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x640);
  if (iVar2 < 1) {
    puVar4 = &DAT_14cad32f0;
  }
  else {
    uVar3 = 0;
    if (((int)param_2 < iVar2) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar5 = iVar2 - 1U;
      if ((int)param_2 < (int)(iVar2 - 1U)) {
        uVar5 = param_2;
      }
      if (0 < (int)uVar5) {
        uVar3 = (ulonglong)uVar5;
      }
    }
    puVar4 = (undefined4 *)(uVar3 * 0x80 + *(longlong *)(param_1 + 0x638));
  }
  uVar1 = *puVar4;
  FUN_140703b8c(param_1,&local_58,uVar1,param_5);
  *(undefined8 *)(param_3 + 4) = local_48;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  FUN_147a21988(param_1,&local_58,uVar1,param_5);
  *(undefined8 *)(param_4 + 4) = local_48;
  *param_4 = local_58;
  param_4[1] = uStack_54;
  param_4[2] = uStack_50;
  param_4[3] = uStack_4c;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1f254 FUN_147a1f254 body=304 status=ok
// SIG undefined FUN_147a1f254(void)

void FUN_147a1f254(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  uVar1 = local_2d;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  uVar2 = FUN_140753fde(param_1 + 0x668,local_2c);
  FUN_140703b8c(param_1,&local_48,uVar2,uVar1);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1f386 FUN_147a1f386 body=270 status=ok
// SIG undefined FUN_147a1f386(void)

void FUN_147a1f386(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140703b8c(param_1,&local_40,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1f496 FUN_147a1f496 body=269 status=ok
// SIG undefined FUN_147a1f496(void)

void FUN_147a1f496(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141119a54(param_1,&local_40,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1f5aa FUN_147a1f5aa body=337 status=ok
// SIG undefined FUN_147a1f5aa(void)

void FUN_147a1f5aa(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_2c;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
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
  local_58 = local_2c != 0;
  FUN_147a1f6fc(param_1,&local_48,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1f6fc FUN_147a1f6fc body=260 status=ok
// SIG undefined FUN_147a1f6fc(void)

undefined4 *
FUN_147a1f6fc(longlong param_1,undefined4 *param_2,float param_3,undefined4 param_4,char param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar1 = *(float *)(param_1 + 0x68c);
  fVar4 = 0.0;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if (param_5 == '\0') {
      FUN_140703b8c(param_1,param_2,
                    ((float)(int)(*(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1)) /
                    fVar1) * param_3,param_4);
      if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    if (0 < (longlong)*(int *)(param_1 + 0x670)) {
      fVar4 = *(float *)(*(longlong *)(param_1 + 0x668) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x670) * 0x14);
    }
    local_24 = 0;
    uVar5 = FUN_140753fde(param_1 + 0x668,(param_3 / fVar1) * fVar4);
    FUN_140703b8c(param_1,param_2,uVar5,param_4);
  }
  else {
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar5 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar5;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 147a1f84e FUN_147a1f84e body=290 status=ok
// SIG undefined FUN_147a1f84e(void)

void FUN_147a1f84e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  uVar1 = local_2d;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  uVar2 = FUN_140753fde(param_1 + 0x668,local_2c);
  FUN_147a1fa74(param_1,&local_48,uVar2,uVar1);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1f972 FUN_147a1f972 body=256 status=ok
// SIG undefined FUN_147a1f972(void)

void FUN_147a1f972(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a1fa74(param_1,&local_40,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1fa74 FUN_147a1fa74 body=590 status=ok
// SIG undefined FUN_147a1fa74(void)

double * FUN_147a1fa74(longlong param_1,double *param_2,undefined8 param_3,int param_4)

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
  double dVar10;
  double dVar11;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14099e1de(param_1,&local_a8,param_3,0);
  dVar10 = local_a0 * DAT_14c8462a0 - DAT_14c846298 * local_98;
  dVar10 = dVar10 + dVar10;
  dVar2 = local_a8 * DAT_14c846298 - DAT_14c846290 * local_a0;
  dVar2 = dVar2 + dVar2;
  dVar7 = local_98 * DAT_14c846290 - DAT_14c8462a0 * local_a8;
  dVar7 = dVar7 + dVar7;
  dVar1 = local_90 * dVar7 + DAT_14c846298;
  dVar6 = (local_a8 * dVar7 - dVar10 * local_a0) + local_90 * dVar2 + DAT_14c8462a0;
  *param_2 = (local_a0 * dVar2 - dVar7 * local_98) + dVar10 * local_90 + DAT_14c846290;
  param_2[1] = (local_98 * dVar10 - dVar2 * local_a8) + dVar1;
  param_2[2] = dVar6;
  if (param_4 == 1) {
    dVar7 = *param_2;
    dVar10 = param_2[1];
    dVar3 = *(double *)(param_1 + 0x240);
    dVar4 = *(double *)(param_1 + 0x248);
    dVar5 = *(double *)(param_1 + 0x250);
    dVar2 = *(double *)(param_1 + 600);
    dVar1 = *(double *)(param_1 + 600);
    dVar11 = dVar7 * dVar5 - dVar3 * dVar6;
    dVar8 = dVar10 * dVar3 - dVar7 * dVar4;
    dVar9 = dVar6 * dVar4 - dVar10 * dVar5;
    dVar9 = dVar9 + dVar9;
    dVar11 = dVar11 + dVar11;
    dVar8 = dVar8 + dVar8;
    *param_2 = (dVar8 * dVar4 - dVar11 * dVar5) + dVar2 * dVar9 + dVar7;
    param_2[1] = (dVar5 * dVar9 - dVar3 * dVar8) + dVar1 * dVar11 + dVar10;
    param_2[2] = dVar8 * dVar2 + dVar6 + (dVar11 * dVar3 - dVar9 * dVar4);
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1fcc4 FUN_147a1fcc4 body=315 status=ok
// SIG undefined FUN_147a1fcc4(void)

void FUN_147a1fcc4(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x640);
  if (iVar1 < 1) {
    puVar3 = &DAT_14cad32f0;
  }
  else {
    uVar2 = 0;
    if (((int)local_24 < iVar1) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar4 = iVar1 - 1U;
      if ((int)local_24 < (int)(iVar1 - 1U)) {
        uVar4 = local_24;
      }
      if (0 < (int)uVar4) {
        uVar2 = (ulonglong)uVar4;
      }
    }
    puVar3 = (undefined4 *)(uVar2 * 0x80 + *(longlong *)(param_1 + 0x638));
  }
  FUN_147a1fa74(param_1,&local_40,*puVar3,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1fe06 FUN_147a1fe06 body=337 status=ok
// SIG undefined FUN_147a1fe06(void)

void FUN_147a1fe06(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_2c;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
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
  local_58 = local_2c != 0;
  FUN_147a1ff58(param_1,&local_48,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a1ff58 FUN_147a1ff58 body=260 status=ok
// SIG undefined FUN_147a1ff58(void)

undefined4 *
FUN_147a1ff58(longlong param_1,undefined4 *param_2,float param_3,undefined4 param_4,char param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar1 = *(float *)(param_1 + 0x68c);
  fVar4 = 0.0;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if (param_5 == '\0') {
      FUN_147a1fa74(param_1,param_2,
                    ((float)(int)(*(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1)) /
                    fVar1) * param_3,param_4);
      if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    if (0 < (longlong)*(int *)(param_1 + 0x670)) {
      fVar4 = *(float *)(*(longlong *)(param_1 + 0x668) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x670) * 0x14);
    }
    local_24 = 0;
    uVar5 = FUN_140753fde(param_1 + 0x668,(param_3 / fVar1) * fVar4);
    FUN_147a1fa74(param_1,param_2,uVar5,param_4);
  }
  else {
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar5 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar5;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 147a2005e FUN_147a2005e body=238 status=ok
// SIG undefined FUN_147a2005e(void)

void FUN_147a2005e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [35];
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a2014e(param_1,local_24,local_25);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2014e FUN_147a2014e body=128 status=ok
// SIG undefined FUN_147a2014e(void)

void FUN_147a2014e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  double local_50;
  undefined4 local_48 [10];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = 0;
  uVar1 = FUN_140753fde(param_1 + 0x668);
  FUN_14099e1de(param_1,local_48,uVar1,param_3);
  FUN_1448052ee(local_48,local_60);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)local_50);
}



// FUNCTION 147a201d0 FUN_147a201d0 body=281 status=ok
// SIG undefined FUN_147a201d0(void)

void FUN_147a201d0(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_88 [35];
  undefined1 local_65;
  undefined4 local_64;
  undefined1 local_60 [16];
  double local_50;
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_65 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_65);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_65);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14099e1de(param_1,local_48,local_64,local_65);
  FUN_1448052ee(local_48,local_60);
  *param_3 = (float)local_50;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a202ea FUN_147a202ea body=236 status=ok
// SIG undefined FUN_147a202ea(void)

void FUN_147a202ea(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [35];
  undefined1 local_25;
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
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a203d8(param_1,local_24,local_25);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a203d8 FUN_147a203d8 body=156 status=ok
// SIG undefined FUN_147a203d8(void)

void FUN_147a203d8(longlong param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  double local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x640);
  if (iVar1 < 1) {
    puVar3 = &DAT_14cad32f0;
  }
  else {
    uVar2 = 0;
    if (((int)param_2 < iVar1) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar4 = iVar1 - 1U;
      if ((int)param_2 < (int)(iVar1 - 1U)) {
        uVar4 = param_2;
      }
      if (0 < (int)uVar4) {
        uVar2 = (ulonglong)uVar4;
      }
    }
    puVar3 = (undefined4 *)(uVar2 * 0x80 + *(longlong *)(param_1 + 0x638));
  }
  FUN_14099e1de(param_1,local_38,*puVar3,param_3);
  FUN_1448052ee(local_38,local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)local_40);
}



// FUNCTION 147a2047c FUN_147a2047c body=317 status=ok
// SIG undefined FUN_147a2047c(void)

void FUN_147a2047c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
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
  uVar1 = FUN_147a205ba(param_1,local_24,local_25,local_2c != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a205ba FUN_147a205ba body=225 status=ok
// SIG undefined FUN_147a205ba(void)

void FUN_147a205ba(longlong param_1,float param_2,undefined4 param_3,char param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  double local_60;
  undefined1 local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar1 = *(float *)(param_1 + 0x68c);
  fVar2 = 0.0;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if (param_4 != '\0') {
      if (0 < (longlong)*(int *)(param_1 + 0x670)) {
        fVar2 = *(float *)(*(longlong *)(param_1 + 0x668) + -0x14 +
                          (longlong)*(int *)(param_1 + 0x670) * 0x14);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(fVar2);
    }
    FUN_14099e1de(param_1,local_58,
                  ((float)(int)(*(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1)) /
                  fVar1) * param_2,param_3);
    FUN_1448052ee(local_58,local_70);
    fVar2 = (float)local_60;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 147a206ba FUN_147a206ba body=319 status=ok
// SIG undefined FUN_147a206ba(void)

void FUN_147a206ba(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_4d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  uVar1 = local_4d;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48[0] = 0;
  uVar2 = FUN_140753fde(param_1 + 0x668,local_4c);
  FUN_14099e1de(param_1,local_48,uVar2,uVar1);
  FUN_1448052ee(local_48,&local_68);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a207fa FUN_147a207fa body=128 status=ok
// SIG undefined FUN_147a207fa(void)

undefined8 FUN_147a207fa(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  uVar1 = FUN_140753fde(param_1 + 0x668,param_3);
  FUN_14099e1de(param_1,local_48,uVar1,param_4);
  FUN_1448052ee(local_48,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2087c FUN_147a2087c body=286 status=ok
// SIG undefined FUN_147a2087c(void)

void FUN_147a2087c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_4d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14099e1de(param_1,local_48,local_4c,local_4d);
  FUN_1448052ee(local_48,&local_68);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2099c FUN_147a2099c body=255 status=ok
// SIG undefined FUN_147a2099c(void)

void FUN_147a2099c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a20a9c(param_1,&local_40,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a20a9c FUN_147a20a9c body=144 status=ok
// SIG undefined FUN_147a20a9c(void)

undefined8 FUN_147a20a9c(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x640);
  if (iVar1 < 1) {
    puVar3 = &DAT_14cad32f0;
  }
  else {
    uVar2 = 0;
    if (((int)param_3 < iVar1) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar4 = iVar1 - 1U;
      if ((int)param_3 < (int)(iVar1 - 1U)) {
        uVar4 = param_3;
      }
      if (0 < (int)uVar4) {
        uVar2 = (ulonglong)uVar4;
      }
    }
    puVar3 = (undefined4 *)(uVar2 * 0x80 + *(longlong *)(param_1 + 0x638));
  }
  FUN_14099e1de(param_1,local_38,*puVar3);
  FUN_1448052ee(local_38,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a20b34 FUN_147a20b34 body=337 status=ok
// SIG undefined FUN_147a20b34(void)

void FUN_147a20b34(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_2c;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
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
  local_58 = local_2c != 0;
  FUN_147a20c86(param_1,&local_48,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a20c86 FUN_147a20c86 body=266 status=ok
// SIG undefined FUN_147a20c86(void)

undefined4 *
FUN_147a20c86(longlong param_1,undefined4 *param_2,float param_3,undefined4 param_4,char param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = *(float *)(param_1 + 0x68c);
  fVar5 = 0.0;
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    *(undefined8 *)(param_2 + 4) = DAT_14c846508;
    uVar4 = DAT_14c846500._4_4_;
    uVar3 = (undefined4)DAT_14c846500;
    uVar2 = DAT_14c8464f8._4_4_;
    *param_2 = (undefined4)DAT_14c8464f8;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if (param_5 == '\0') {
    param_3 = ((float)(int)(*(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1)) / fVar1) *
              param_3;
  }
  else {
    if (0 < (longlong)*(int *)(param_1 + 0x670)) {
      fVar5 = *(float *)(*(longlong *)(param_1 + 0x668) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x670) * 0x14);
    }
    local_48[0] = 0;
    param_3 = (float)FUN_140753fde(param_1 + 0x668,(param_3 / fVar1) * fVar5);
  }
  FUN_14099e1de(param_1,local_48,param_3,param_4);
  FUN_1448052ee(local_48,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a20d92 FUN_147a20d92 body=252 status=ok
// SIG undefined FUN_147a20d92(void)

void FUN_147a20d92(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (ulonglong)local_38._4_4_ << 0x20;
  uVar1 = FUN_140753fde(param_1 + 0x668,local_3c,&local_38);
  local_38 = 0x3ff0000000000000;
  local_30 = 0x3ff0000000000000;
  local_28 = 0x3ff0000000000000;
  FUN_140703ce0(param_1 + 0x650,&local_58,uVar1,&local_38);
  *(undefined8 *)(param_3 + 4) = local_48;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a20e90 FUN_147a20e90 body=223 status=ok
// SIG undefined FUN_147a20e90(void)

void FUN_147a20e90(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = 0x3ff0000000000000;
  local_30 = 0x3ff0000000000000;
  local_28 = 0x3ff0000000000000;
  FUN_140703ce0(param_1 + 0x650,&local_58,local_3c);
  *(undefined8 *)(param_3 + 4) = local_48;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a20f70 FUN_147a20f70 body=230 status=ok
// SIG undefined FUN_147a20f70(void)

void FUN_147a20f70(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined1 auStack_48 [36];
  uint local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x658);
  if (iVar1 < 1) {
    puVar7 = &DAT_14cad3370;
  }
  else {
    uVar6 = 0;
    if (((int)local_24 < iVar1) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar8 = iVar1 - 1U;
      if ((int)local_24 < (int)(iVar1 - 1U)) {
        uVar8 = local_24;
      }
      if (0 < (int)uVar8) {
        uVar6 = (ulonglong)uVar8;
      }
    }
    puVar7 = (undefined *)(uVar6 * 0x58 + *(longlong *)(param_1 + 0x650));
  }
  uVar2 = *(undefined4 *)(puVar7 + 8);
  uVar3 = *(undefined4 *)(puVar7 + 0xc);
  uVar4 = *(undefined4 *)(puVar7 + 0x10);
  uVar5 = *(undefined4 *)(puVar7 + 0x14);
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)(puVar7 + 0x18);
  *param_3 = uVar2;
  param_3[1] = uVar3;
  param_3[2] = uVar4;
  param_3[3] = uVar5;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a21058 FUN_147a21058 body=84 status=ok
// SIG undefined FUN_147a21058(void)

void FUN_147a21058(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x658);
  if (iVar1 < 1) {
    puVar4 = &DAT_14cad3370;
  }
  else {
    uVar3 = 0;
    if (((int)param_3 < iVar1) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar5 = iVar1 - 1U;
      if ((int)param_3 < (int)(iVar1 - 1U)) {
        uVar5 = param_3;
      }
      if (0 < (int)uVar5) {
        uVar3 = (ulonglong)uVar5;
      }
    }
    puVar4 = (undefined *)(uVar3 * 0x58 + *(longlong *)(param_1 + 0x650));
  }
  param_2[2] = *(undefined8 *)(puVar4 + 0x18);
  uVar2 = *(undefined8 *)(puVar4 + 0x10);
  *param_2 = *(undefined8 *)(puVar4 + 8);
  param_2[1] = uVar2;
  return;
}



// FUNCTION 147a210b2 FUN_147a210b2 body=262 status=ok
// SIG undefined FUN_147a210b2(void)

void FUN_147a210b2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
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
  FUN_147a211ba(param_1,&local_40,local_24,local_28 != 0);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a211ba FUN_147a211ba body=291 status=ok
// SIG undefined FUN_147a211ba(void)

undefined8 * FUN_147a211ba(longlong param_1,undefined8 *param_2,float param_3,char param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  ulonglong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar1 = *(float *)(param_1 + 0x68c);
  fVar2 = 0.0;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if (param_4 == '\0') {
      param_3 = ((float)(int)(*(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1)) / fVar1)
                * param_3;
    }
    else {
      if (0 < (longlong)*(int *)(param_1 + 0x670)) {
        fVar2 = *(float *)(*(longlong *)(param_1 + 0x668) + -0x14 +
                          (longlong)*(int *)(param_1 + 0x670) * 0x14);
      }
      local_38[0] = local_38[0] & 0xffffffff00000000;
      param_3 = (float)FUN_140753fde(param_1 + 0x668,(param_3 / fVar1) * fVar2,local_38);
    }
    local_38[2] = 0x3ff0000000000000;
    local_38[1] = 0x3ff0000000000000;
    local_38[0] = 0x3ff0000000000000;
    FUN_140703ce0(param_1 + 0x650,param_2,param_3,local_38);
  }
  else {
    *param_2 = 0x3ff0000000000000;
    param_2[1] = 0x3ff0000000000000;
    param_2[2] = 0x3ff0000000000000;
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a21316 FUN_147a21316 body=34 status=ok
// SIG undefined FUN_147a21316(void)

undefined4 FUN_147a21316(longlong param_1)

{
  if (0 < (longlong)*(int *)(param_1 + 0x670)) {
    return *(undefined4 *)
            (*(longlong *)(param_1 + 0x668) + -0x14 + (longlong)*(int *)(param_1 + 0x670) * 0x14);
  }
  return 0;
}



// FUNCTION 147a21338 FUN_147a21338 body=294 status=ok
// SIG undefined FUN_147a21338(void)

void FUN_147a21338(undefined8 param_1,longlong param_2,void *param_3)

{
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [139];
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a21460(param_1,local_b0,local_24,local_25);
  memcpy(param_3,local_b0,0x88);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a21460 FUN_147a21460 body=449 status=ok
// SIG undefined FUN_147a21460(void)

undefined4 * FUN_147a21460(longlong param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined1 local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x628);
  if (iVar2 < 1) {
    puVar9 = &DAT_14cad3298;
  }
  else {
    uVar5 = 0;
    if (((int)param_3 < iVar2) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar7 = iVar2 - 1U;
      if ((int)param_3 < (int)(iVar2 - 1U)) {
        uVar7 = param_3;
      }
      if (0 < (int)uVar7) {
        uVar5 = (ulonglong)uVar7;
      }
    }
    puVar9 = (undefined4 *)(uVar5 * 0x58 + *(longlong *)(param_1 + 0x620));
  }
  iVar2 = *(int *)(param_1 + 0x640);
  if (iVar2 < 1) {
    puVar6 = &DAT_14cad32f0;
  }
  else {
    uVar5 = 0;
    if (((int)param_3 < iVar2) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar7 = iVar2 - 1U;
      if ((int)param_3 < (int)(iVar2 - 1U)) {
        uVar7 = param_3;
      }
      if (0 < (int)uVar7) {
        uVar5 = (ulonglong)uVar7;
      }
    }
    puVar6 = (undefined4 *)(uVar5 * 0x80 + *(longlong *)(param_1 + 0x638));
  }
  FUN_14099e1de(param_1,local_58,*puVar6);
  FUN_1448052ee(local_58,&local_70);
  uVar4 = 2;
  if (((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x628))) &&
     (bVar1 = *(byte *)(*(longlong *)(param_1 + 0x620) + 0x50 + (ulonglong)param_3 * 0x58),
     bVar1 < 6)) {
    uVar4 = (undefined1)(0x30204020100 >> ((bVar1 & 7) << 3));
  }
  iVar2 = *(int *)(param_1 + 0x658);
  if (iVar2 < 1) {
    puVar8 = &DAT_14cad3370;
  }
  else {
    uVar5 = 0;
    if (((int)param_3 < iVar2) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar7 = iVar2 - 1U;
      if ((int)param_3 < (int)(iVar2 - 1U)) {
        uVar7 = param_3;
      }
      if (0 < (int)uVar7) {
        uVar5 = (ulonglong)uVar7;
      }
    }
    puVar8 = (undefined *)(uVar5 * 0x58 + *(longlong *)(param_1 + 0x650));
  }
  *(undefined8 *)(param_2 + 0x1e) = *(undefined8 *)(puVar8 + 0x18);
  uVar3 = *(undefined8 *)(puVar8 + 0x10);
  *(undefined8 *)(param_2 + 0x1a) = *(undefined8 *)(puVar8 + 8);
  *(undefined8 *)(param_2 + 0x1c) = uVar3;
  *param_2 = *puVar9;
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(puVar9 + 6);
  uVar3 = *(undefined8 *)(puVar9 + 4);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar9 + 2);
  *(undefined8 *)(param_2 + 4) = uVar3;
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(puVar9 + 0xc);
  uVar3 = *(undefined8 *)(puVar9 + 10);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar9 + 8);
  *(undefined8 *)(param_2 + 10) = uVar3;
  uVar3 = *(undefined8 *)(puVar9 + 0x10);
  *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(puVar9 + 0xe);
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(puVar9 + 0x12);
  param_2[0x14] = local_70;
  param_2[0x15] = uStack_6c;
  param_2[0x16] = uStack_68;
  param_2[0x17] = uStack_64;
  *(undefined8 *)(param_2 + 0x18) = local_60;
  *(undefined1 *)(param_2 + 0x20) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a21622 FUN_147a21622 body=208 status=ok
// SIG undefined FUN_147a21622(void)

void FUN_147a21622(longlong param_1,longlong param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [36];
  int local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = 2;
  if (((-1 < (longlong)local_24) && (local_24 < *(int *)(param_1 + 0x628))) &&
     (bVar1 = *(byte *)(*(longlong *)(param_1 + 0x620) + 0x50 + (longlong)local_24 * 0x58),
     bVar1 < 6)) {
    uVar2 = (undefined1)(0x30204020100 >> ((bVar1 & 7) << 3));
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a216f4 FUN_147a216f4 body=290 status=ok
// SIG undefined FUN_147a216f4(void)

void FUN_147a216f4(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  uVar1 = local_2d;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  uVar2 = FUN_140753fde(param_1 + 0x668,local_2c);
  FUN_147a21988(param_1,&local_48,uVar2,uVar1);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a21818 FUN_147a21818 body=108 status=ok
// SIG undefined FUN_147a21818(void)

undefined8 FUN_147a21818(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  uVar1 = FUN_140753fde(param_1 + 0x668,param_3);
  FUN_147a21988(param_1,param_2,uVar1,param_4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a21886 FUN_147a21886 body=256 status=ok
// SIG undefined FUN_147a21886(void)

void FUN_147a21886(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a21988(param_1,&local_40,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a21988 FUN_147a21988 body=323 status=ok
// SIG undefined FUN_147a21988(void)

undefined1 (*) [16]
FUN_147a21988(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3,int param_4)

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
  double dVar10;
  double dVar11;
  
  FUN_140754464(param_1 + 0x620,param_2,param_3,&DAT_14c8464e0);
  if (param_4 == 1) {
    dVar7 = *(double *)*param_2 * *(double *)(param_1 + 0x280);
    dVar8 = *(double *)(*param_2 + 8) * *(double *)(param_1 + 0x288);
    dVar6 = *(double *)param_2[1] * *(double *)(param_1 + 0x290);
    dVar3 = *(double *)(param_1 + 0x240);
    dVar4 = *(double *)(param_1 + 0x248);
    dVar5 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar9 = dVar8 * dVar3 - dVar7 * dVar4;
    dVar10 = dVar6 * dVar4 - dVar8 * dVar5;
    dVar11 = dVar7 * dVar5 - dVar3 * dVar6;
    dVar10 = dVar10 + dVar10;
    dVar11 = dVar11 + dVar11;
    dVar9 = dVar9 + dVar9;
    dVar8 = (dVar5 * dVar10 - dVar3 * dVar9) + *(double *)(param_1 + 600) * dVar11 + dVar8;
    auVar2._8_4_ = SUB84(dVar8,0);
    auVar2._0_8_ = (dVar9 * dVar4 - dVar11 * dVar5) + dVar1 * dVar10 + dVar7;
    auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *param_2 = auVar2;
    *(double *)param_2[1] = dVar9 * dVar1 + dVar6 + (dVar11 * dVar3 - dVar10 * dVar4);
  }
  return param_2;
}



// FUNCTION 147a21acc FUN_147a21acc body=255 status=ok
// SIG undefined FUN_147a21acc(void)

void FUN_147a21acc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a21bcc(param_1,&local_40,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a21bcc FUN_147a21bcc body=383 status=ok
// SIG undefined FUN_147a21bcc(void)

void FUN_147a21bcc(longlong param_1,undefined1 (*param_2) [16],uint param_3,int param_4)

{
  double dVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar2 = *(int *)(param_1 + 0x628);
  if (iVar2 < 1) {
    puVar9 = &DAT_14cad3298;
  }
  else {
    uVar8 = 0;
    if (((int)param_3 < iVar2) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar10 = iVar2 - 1U;
      if ((int)param_3 < (int)(iVar2 - 1U)) {
        uVar10 = param_3;
      }
      if (0 < (int)uVar10) {
        uVar8 = (ulonglong)uVar10;
      }
    }
    puVar9 = (undefined4 *)(uVar8 * 0x58 + *(longlong *)(param_1 + 0x620));
  }
  if (param_4 == 1) {
    dVar12 = *(double *)(puVar9 + 0xe) * *(double *)(param_1 + 0x280);
    dVar13 = *(double *)(puVar9 + 0x10) * *(double *)(param_1 + 0x288);
    dVar11 = *(double *)(puVar9 + 0x12) * *(double *)(param_1 + 0x290);
    dVar4 = *(double *)(param_1 + 0x240);
    dVar5 = *(double *)(param_1 + 0x248);
    dVar6 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar14 = dVar13 * dVar4 - dVar12 * dVar5;
    dVar15 = dVar11 * dVar5 - dVar13 * dVar6;
    dVar16 = dVar12 * dVar6 - dVar4 * dVar11;
    dVar15 = dVar15 + dVar15;
    dVar16 = dVar16 + dVar16;
    dVar14 = dVar14 + dVar14;
    dVar13 = (dVar6 * dVar15 - dVar4 * dVar14) + *(double *)(param_1 + 600) * dVar16 + dVar13;
    auVar3._8_4_ = SUB84(dVar13,0);
    auVar3._0_8_ = (dVar14 * dVar5 - dVar16 * dVar6) + dVar1 * dVar15 + dVar12;
    auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *param_2 = auVar3;
    *(double *)param_2[1] = dVar14 * dVar1 + dVar11 + (dVar16 * dVar4 - dVar15 * dVar5);
  }
  else {
    *(undefined8 *)param_2[1] = *(undefined8 *)(puVar9 + 0x12);
    uVar7 = *(undefined8 *)(puVar9 + 0x10);
    *(undefined8 *)*param_2 = *(undefined8 *)(puVar9 + 0xe);
    *(undefined8 *)(*param_2 + 8) = uVar7;
  }
  return;
}



// FUNCTION 147a21d52 FUN_147a21d52 body=337 status=ok
// SIG undefined FUN_147a21d52(void)

void FUN_147a21d52(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_2c;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
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
  local_58 = local_2c != 0;
  FUN_147a21ea4(param_1,&local_48,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a21ea4 FUN_147a21ea4 body=260 status=ok
// SIG undefined FUN_147a21ea4(void)

undefined4 *
FUN_147a21ea4(longlong param_1,undefined4 *param_2,float param_3,undefined4 param_4,char param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar1 = *(float *)(param_1 + 0x68c);
  fVar4 = 0.0;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if (param_5 == '\0') {
      FUN_147a21988(param_1,param_2,
                    ((float)(int)(*(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1)) /
                    fVar1) * param_3,param_4);
      if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    if (0 < (longlong)*(int *)(param_1 + 0x670)) {
      fVar4 = *(float *)(*(longlong *)(param_1 + 0x668) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x670) * 0x14);
    }
    local_24 = 0;
    uVar5 = FUN_140753fde(param_1 + 0x668,(param_3 / fVar1) * fVar4);
    FUN_147a21988(param_1,param_2,uVar5,param_4);
  }
  else {
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar5 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar5;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 147a21faa FUN_147a21faa body=255 status=ok
// SIG undefined FUN_147a21faa(void)

void FUN_147a21faa(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar2 = 0.0;
  if (1 < *(int *)(param_1 + 0x628)) {
    fVar3 = (float)*(int *)(param_1 + 0x628);
    fVar1 = *(float *)(param_1 + 0x68c);
    if (*(char *)(param_1 + 0x695) == '\0') {
      fVar3 = fVar3 + -1.0;
    }
    local_34 = 0;
    fVar2 = (float)FUN_140753fde(param_1 + 0x668,local_38);
    fVar2 = fVar2 * (fVar1 / fVar3);
  }
  *param_3 = fVar2;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a220aa FUN_147a220aa body=134 status=ok
// SIG undefined FUN_147a220aa(void)

void FUN_147a220aa(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar2 = 0.0;
  if (1 < *(int *)(param_1 + 0x628)) {
    fVar3 = (float)*(int *)(param_1 + 0x628);
    fVar1 = *(float *)(param_1 + 0x68c);
    if (*(char *)(param_1 + 0x695) == '\0') {
      fVar3 = fVar3 + -1.0;
    }
    local_24 = 0;
    fVar2 = (float)FUN_140753fde(param_1 + 0x668);
    fVar2 = fVar2 * (fVar1 / fVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 147a22138 FUN_147a22138 body=417 status=ok
// SIG undefined FUN_147a22138(void)

void FUN_147a22138(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_a8 [13];
  int local_3c;
  undefined1 local_35;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_35 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_35);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_35);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  uVar2 = local_35;
  iVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8[0]._0_4_ = 0;
  uVar5 = FUN_140753fde(param_1 + 0x668,local_34);
  local_b8 = iVar1 != 0;
  FUN_147a224dc(param_1,local_a8,uVar5,uVar2);
  puVar4 = local_a8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *param_3 = *puVar4;
    puVar4 = puVar4 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a222da FUN_147a222da body=123 status=ok
// SIG undefined FUN_147a222da(void)

undefined8
FUN_147a222da(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  uVar1 = FUN_140753fde(param_1 + 0x668,param_3);
  local_38 = param_5;
  FUN_147a224dc(param_1,param_2,uVar1,param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2235c FUN_147a2235c body=382 status=ok
// SIG undefined FUN_147a2235c(void)

void FUN_147a2235c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98 [13];
  int local_2c;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
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
  local_a8 = local_2c != 0;
  FUN_147a224dc(param_1,local_98,local_24,local_25);
  puVar2 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a224dc FUN_147a224dc body=2127 status=ok
// SIG undefined FUN_147a224dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_147a224dc(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3,int param_4,
             char param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar19;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auStack_328 [32];
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_140703ce0(param_1 + 0x620,&local_298,param_3,&DAT_14c8464e0);
  lVar13 = param_1;
  FUN_14099e1de(param_1,&local_2b8);
  uVar11 = (undefined4)lVar13;
  if (param_5 == '\0') {
    uVar9 = 0;
    local_2d8 = 1.0;
    dStack_2d0 = 1.0;
    local_2c8 = 1.0;
  }
  else {
    lVar13 = param_1 + 0x650;
    local_158 = 1.0;
    local_150 = 1.0;
    local_148 = 1.0;
    uVar9 = FUN_140703ce0(lVar13,&local_2d8);
    uVar11 = (undefined4)lVar13;
  }
  dVar8 = local_2c8;
  dVar7 = dStack_2d0;
  dVar6 = local_2d8;
  *(double *)*param_2 = local_2b8;
  *(double *)(*param_2 + 8) = dStack_2b0;
  *(double *)param_2[1] = local_2a8;
  *(double *)(param_2[1] + 8) = dStack_2a0;
  *(double *)param_2[2] = local_298;
  *(double *)(param_2[2] + 8) = dStack_290;
  *(double *)param_2[3] = local_288;
  *(undefined8 *)(param_2[3] + 8) = 0;
  auVar29._8_8_ = dStack_2d0;
  auVar29._0_8_ = local_2d8;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = local_2c8;
  param_2[4] = auVar29;
  param_2[5] = auVar20;
  if (param_4 == 1) {
    auVar15 = *(undefined1 (*) [16])(param_1 + 0x280);
    dVar1 = auVar15._0_8_;
    dVar3 = auVar15._8_8_;
    auVar30 = *(undefined1 (*) [16])(param_1 + 0x290);
    dVar2 = auVar30._0_8_;
    dVar4 = auVar30._8_8_;
    auVar29 = minpd(auVar29,auVar15);
    auVar20 = minpd(auVar20,auVar30);
    auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    iVar10 = movmskpd(uVar9,auVar30);
    auVar32._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
    auVar32._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
    uVar12 = movmskpd(uVar11,auVar32);
    if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
      local_308 = *(double *)(param_1 + 0x240);
      dStack_300 = *(double *)(param_1 + 0x248);
      dVar17 = *(double *)(param_1 + 600);
      dVar19 = *(double *)(param_1 + 600);
      dVar28 = *(double *)(param_1 + 0x240);
      dVar22 = *(double *)(param_1 + 0x240);
      dVar25 = *(double *)(param_1 + 0x248);
      dVar23 = *(double *)(param_1 + 0x248);
      dVar34 = *(double *)(param_1 + 0x250);
      dVar35 = *(double *)(param_1 + 600);
      dVar24 = *(double *)(param_1 + 0x250);
      dVar27 = *(double *)(param_1 + 0x250);
      dVar31 = dStack_2b0 * dVar24 * -1.0 +
               local_2a8 * dVar25 + dStack_2a0 * dVar28 * 1.0 + local_2b8 * dVar17;
      dVar33 = local_2b8 * dVar27 * 1.0 +
               dStack_2a0 * dVar23 + local_2a8 * dVar22 * -1.0 + dStack_2b0 * dVar19;
      auVar26._0_8_ =
           dStack_2a0 * dVar24 * 1.0 +
           ((dVar28 * dStack_2b0 * 1.0 + local_2a8 * dVar17) - local_2b8 * dVar25);
      auVar26._8_8_ =
           local_2a8 * dVar27 * -1.0 +
           ((dVar22 * local_2b8 * -1.0 + dStack_2a0 * dVar19) - dStack_2b0 * dVar23);
      local_298 = local_298 * dVar1;
      dStack_290 = dStack_290 * dVar3;
      local_288 = local_288 * dVar2;
      dVar28 = dVar4 * 0.0;
      dVar22 = dStack_290 * local_308 - local_298 * dStack_300;
      dVar23 = local_288 * dStack_300 - dStack_290 * dVar34;
      dVar25 = local_298 * dVar34 - local_288 * local_308;
      dVar24 = dVar28 * dVar35 - dVar28 * dVar35;
      dVar23 = dVar23 + dVar23;
      dVar25 = dVar25 + dVar25;
      dVar22 = dVar22 + dVar22;
      dVar24 = dVar24 + dVar24;
      local_f8 = (dVar22 * dStack_300 - dVar34 * dVar25) + dVar17 * dVar23 + local_298 +
                 *(double *)(param_1 + 0x260);
      dStack_f0 = (dVar23 * dVar34 - dVar22 * local_308) + dVar19 * dVar25 + dStack_290 +
                  *(double *)(param_1 + 0x268);
      local_e8 = (dVar25 * local_308 - dStack_300 * dVar23) + dVar17 * dVar22 + local_288 +
                 *(double *)(param_1 + 0x270);
      dVar17 = (dVar24 * dVar35 - dVar24 * dVar35) + dVar19 * dVar24 + dVar28 +
               *(double *)(param_1 + 0x278);
      local_2f8 = auVar15;
    }
    else {
      dVar23 = *(double *)(param_1 + 0x240);
      dVar25 = *(double *)(param_1 + 0x248);
      dVar22 = *(double *)(param_1 + 0x250);
      dVar19 = dVar25 + dVar25;
      dVar33 = dVar22 + dVar22;
      dVar31 = dVar23 * (dVar23 + dVar23);
      dVar27 = *(double *)(param_1 + 0x240) * dVar33;
      dVar17 = *(double *)(param_1 + 600);
      dVar34 = dVar33 * dVar17;
      dVar36 = (dVar23 + dVar23) * *(double *)(param_1 + 600);
      dVar17 = dVar19 * dVar17;
      dVar24 = local_2c8 * dVar2;
      dStack_2e0 = dVar4 * 0.0;
      local_188 = (1.0 - (dVar31 + dVar25 * dVar19)) * dVar2;
      local_308 = local_288;
      dStack_300 = 0.0;
      dVar28 = (dVar33 * dVar25 - dVar36) * dVar2;
      dVar35 = local_2d8 * dVar1;
      dVar37 = dStack_2d0 * dVar3;
      local_1d8 = (1.0 - (dVar22 * dVar33 + dVar25 * dVar19)) * dVar1;
      dVar22 = (1.0 - (dVar22 * dVar33 + dVar31)) * dVar3;
      dStack_1d0 = (dVar19 * dVar23 + dVar34) * dVar1;
      local_1a8 = (dVar33 * dVar25 + dVar36) * dVar3;
      local_1c8 = (dVar27 - dVar17) * dVar1;
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar22,0);
      local_1b8._0_8_ = (dVar19 * dVar23 - dVar34) * dVar3;
      local_1b8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      uStack_1a0 = 0;
      local_198._8_4_ = SUB84(dVar28,0);
      local_198._0_8_ = (dVar17 + dVar27) * dVar2;
      local_198._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      uStack_180 = 0;
      local_178 = *(undefined8 *)(param_1 + 0x260);
      uStack_170 = *(undefined8 *)(param_1 + 0x268);
      local_168 = *(undefined8 *)(param_1 + 0x270);
      uStack_160 = 0x3ff0000000000000;
      dVar22 = dStack_2b0 + dStack_2b0;
      dVar17 = local_2a8 + local_2a8;
      dVar28 = local_2b8 * (local_2b8 + local_2b8);
      local_208 = (1.0 - (dVar28 + dStack_2b0 * dVar22)) * local_2c8;
      dVar19 = (local_2b8 + local_2b8) * dStack_2a0;
      local_218 = (dVar22 * dStack_2a0 + local_2b8 * dVar17) * local_2c8;
      dStack_210 = (dVar17 * dStack_2b0 - dVar19) * local_2c8;
      local_258 = (1.0 - (local_2a8 * dVar17 + dStack_2b0 * dVar22)) * local_2d8;
      dVar28 = (1.0 - (local_2a8 * dVar17 + dVar28)) * dStack_2d0;
      dStack_250 = (dVar22 * local_2b8 + dVar17 * dStack_2a0) * local_2d8;
      local_228 = (dVar17 * dStack_2b0 + dVar19) * dStack_2d0;
      local_248 = (local_2b8 * dVar17 - dVar22 * dStack_2a0) * local_2d8;
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar28,0);
      local_238._0_8_ = (dVar22 * local_2b8 - dVar17 * dStack_2a0) * dStack_2d0;
      local_238._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = local_298;
      dStack_1f0 = dStack_290;
      local_1e8 = local_288;
      uStack_1e0 = 0x3ff0000000000000;
      local_2e8 = dVar24;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar29 = _DAT_149934d80;
      auVar15._8_8_ = -(ulonglong)(0.0 <= dVar37);
      auVar15._0_8_ = -(ulonglong)(0.0 <= dVar35);
      auVar20 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar15);
      uVar14 = -(ulonglong)(0.0 <= dVar24);
      dVar17 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
      dVar19 = auVar20._0_8_;
      local_148 = local_148 * dVar19;
      local_150 = local_150 * dVar19;
      local_158 = local_158 * dVar19;
      dVar19 = auVar20._8_8_;
      local_128 = local_128 * dVar19;
      local_130 = local_130 * dVar19;
      local_138 = dVar19 * local_138;
      local_108 = local_108 * dVar17;
      local_110 = local_110 * dVar17;
      local_118 = dVar17 * local_118;
      FUN_14481fd10(&local_278,&local_158);
      dVar17 = local_268 * local_268 + local_278 * local_278;
      dVar19 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar18._0_8_ = dVar17 + dVar19;
      auVar18._8_8_ = dVar17 + dVar19;
      auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
      auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
      auVar20 = sqrtpd(auVar18,auVar18);
      auVar29 = divpd(auVar29,auVar20);
      auVar21._0_8_ = auVar29._0_8_ * local_268;
      auVar21._8_8_ = auVar29._8_8_ * dStack_260;
      dVar31 = (double)((ulonglong)(local_278 * auVar29._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_));
      dVar33 = (double)((ulonglong)(dStack_270 * auVar29._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_));
      auVar26 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar21,auVar16);
      dVar17 = 0.0;
    }
    auVar5._8_4_ = SUB84(dVar33,0);
    auVar5._0_8_ = dVar31;
    auVar5._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    *param_2 = auVar5;
    param_2[1] = auVar26;
    *(double *)param_2[2] = local_f8;
    *(double *)(param_2[2] + 8) = dStack_f0;
    *(double *)param_2[3] = local_e8;
    *(double *)(param_2[3] + 8) = dVar17;
    *(double *)param_2[4] = dVar6 * dVar1;
    *(double *)(param_2[4] + 8) = dVar7 * dVar3;
    *(double *)param_2[5] = dVar8 * dVar2;
    *(double *)(param_2[5] + 8) = dVar4 * 0.0;
  }
  if ((local_d0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a22d32 FUN_147a22d32 body=445 status=ok
// SIG undefined FUN_147a22d32(void)

void FUN_147a22d32(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98 [13];
  int local_2c;
  undefined1 local_25;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
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
  iVar1 = *(int *)(param_1 + 0x640);
  if (iVar1 < 1) {
    puVar3 = &DAT_14cad32f0;
  }
  else {
    uVar2 = 0;
    if (((int)local_24 < iVar1) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar5 = iVar1 - 1U;
      if ((int)local_24 < (int)(iVar1 - 1U)) {
        uVar5 = local_24;
      }
      if (0 < (int)uVar5) {
        uVar2 = (ulonglong)uVar5;
      }
    }
    puVar3 = (undefined4 *)(uVar2 * 0x80 + *(longlong *)(param_1 + 0x638));
  }
  local_a8 = local_2c != 0;
  FUN_147a224dc(param_1,local_98,*puVar3,local_25);
  puVar6 = local_98;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *param_3 = *puVar6;
    puVar6 = puVar6 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a22efc FUN_147a22efc body=477 status=ok
// SIG undefined FUN_147a22efc(void)

void FUN_147a22efc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 local_98 [12];
  int local_38;
  int local_34;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = local_38 != 0;
  local_a8 = iVar1 != 0;
  FUN_147a230da(param_1,local_98,local_2c,local_2d);
  puVar3 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a230da FUN_147a230da body=283 status=ok
// SIG undefined FUN_147a230da(void)

undefined8 *
FUN_147a230da(longlong param_1,undefined8 *param_2,float param_3,undefined4 param_4,char param_5,
             undefined1 param_6)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar1 = *(float *)(param_1 + 0x68c);
  fVar4 = 0.0;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if (param_5 == '\0') {
      local_38 = param_6;
      FUN_147a224dc(param_1,param_2,
                    ((float)(int)(*(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1)) /
                    fVar1) * param_3,param_4);
      if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    if (0 < (longlong)*(int *)(param_1 + 0x670)) {
      fVar4 = *(float *)(*(longlong *)(param_1 + 0x668) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x670) * 0x14);
    }
    local_2c = 0;
    uVar5 = FUN_140753fde(param_1 + 0x668,(param_3 / fVar1) * fVar4);
    local_38 = param_6;
    FUN_147a224dc(param_1,param_2,uVar5,param_4);
  }
  else {
    puVar3 = &DAT_14c846480;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 147a231f6 FUN_147a231f6 body=304 status=ok
// SIG undefined FUN_147a231f6(void)

void FUN_147a231f6(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  uVar1 = local_2d;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  uVar2 = FUN_140753fde(param_1 + 0x668,local_2c);
  FUN_1417c1cca(param_1,&local_48,uVar2,uVar1);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a23328 FUN_147a23328 body=108 status=ok
// SIG undefined FUN_147a23328(void)

undefined8 FUN_147a23328(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  uVar1 = FUN_140753fde(param_1 + 0x668,param_3);
  FUN_1417c1cca(param_1,param_2,uVar1,param_4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a23396 FUN_147a23396 body=270 status=ok
// SIG undefined FUN_147a23396(void)

void FUN_147a23396(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1417c1cca(param_1,&local_40,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a234a6 FUN_147a234a6 body=336 status=ok
// SIG undefined FUN_147a234a6(void)

void FUN_147a234a6(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_25;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x640);
  if (iVar1 < 1) {
    puVar3 = &DAT_14cad32f0;
  }
  else {
    uVar2 = 0;
    if (((int)local_24 < iVar1) || (*(char *)(param_1 + 0x695) == '\0')) {
      uVar4 = iVar1 - 1U;
      if ((int)local_24 < (int)(iVar1 - 1U)) {
        uVar4 = local_24;
      }
      if (0 < (int)uVar4) {
        uVar2 = (ulonglong)uVar4;
      }
    }
    puVar3 = (undefined4 *)(uVar2 * 0x80 + *(longlong *)(param_1 + 0x638));
  }
  FUN_1417c1cca(param_1,&local_40,*puVar3,local_25);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a235fe FUN_147a235fe body=337 status=ok
// SIG undefined FUN_147a235fe(void)

void FUN_147a235fe(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_2c;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
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
  local_58 = local_2c != 0;
  FUN_147a23750(param_1,&local_48,local_24,local_25);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a23750 FUN_147a23750 body=260 status=ok
// SIG undefined FUN_147a23750(void)

undefined4 *
FUN_147a23750(longlong param_1,undefined4 *param_2,float param_3,undefined4 param_4,char param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar1 = *(float *)(param_1 + 0x68c);
  fVar4 = 0.0;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    if (param_5 == '\0') {
      FUN_1417c1cca(param_1,param_2,
                    ((float)(int)(*(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1)) /
                    fVar1) * param_3,param_4);
      if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    if (0 < (longlong)*(int *)(param_1 + 0x670)) {
      fVar4 = *(float *)(*(longlong *)(param_1 + 0x668) + -0x14 +
                        (longlong)*(int *)(param_1 + 0x670) * 0x14);
    }
    local_24 = 0;
    uVar5 = FUN_140753fde(param_1 + 0x668,(param_3 / fVar1) * fVar4);
    FUN_1417c1cca(param_1,param_2,uVar5,param_4);
  }
  else {
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar5 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar5;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 147a23856 FUN_147a23856 body=287 status=ok
// SIG undefined FUN_147a23856(void)

void FUN_147a23856(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar2 = local_34;
  uVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = (**(code **)(*param_1 + 0x9f8))(param_1);
  FUN_147a2777c(&local_58,uVar3,uVar2,uVar1);
  *(undefined8 *)(param_3 + 4) = local_48;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a23976 FUN_147a23976 body=277 status=ok
// SIG undefined FUN_147a23976(void)

void FUN_147a23976(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
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
  uVar2 = local_2c;
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = (**(code **)(*param_1 + 0x9f8))(param_1);
  FUN_147a278d0(&local_50,uVar3,uVar2,uVar1);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a23a8c FUN_147a23a8c body=223 status=ok
// SIG undefined FUN_147a23a8c(void)

void FUN_147a23a8c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = 0;
  uVar1 = FUN_140753fde(param_1 + 0x668,local_24);
  FUN_1407541d8(param_1,&local_40,uVar1,1);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a23b72 FUN_147a23b72 body=270 status=ok
// SIG undefined FUN_147a23b72(void)

void FUN_147a23b72(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
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
  local_48 = local_28 != 0;
  FUN_147a1e0a8(param_1,&local_40,local_24,1);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a23c82 FUN_147a23c82 body=183 status=ok
// SIG undefined FUN_147a23c82(void)

void FUN_147a23c82(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a23d3a(param_1,&local_40,local_24);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a23d3a FUN_147a23d3a body=392 status=ok
// SIG undefined FUN_147a23d3a(void)

undefined1 (*) [16] FUN_147a23d3a(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_64 = 0;
  uVar7 = FUN_140753fde(param_1 + 0x668,param_3);
  FUN_140703ce0(param_1 + 0x620,param_2,uVar7,&DAT_14c8464e0);
  dVar9 = *(double *)*param_2 * *(double *)(param_1 + 0x280);
  dVar10 = *(double *)(*param_2 + 8) * *(double *)(param_1 + 0x288);
  dVar8 = *(double *)param_2[1] * *(double *)(param_1 + 0x290);
  dVar4 = *(double *)(param_1 + 0x240);
  dVar5 = *(double *)(param_1 + 0x248);
  dVar6 = *(double *)(param_1 + 0x250);
  dVar1 = *(double *)(param_1 + 600);
  dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
  dVar12 = dVar8 * dVar5 - dVar10 * dVar6;
  dVar13 = dVar9 * dVar6 - dVar4 * dVar8;
  dVar12 = dVar12 + dVar12;
  dVar13 = dVar13 + dVar13;
  dVar11 = dVar11 + dVar11;
  dVar3 = (dVar6 * dVar12 - dVar4 * dVar11) + *(double *)(param_1 + 600) * dVar13 + dVar10 +
          *(double *)(param_1 + 0x268);
  dVar10 = *(double *)(param_1 + 0x270);
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar1 * dVar12 + dVar9 +
                 *(double *)(param_1 + 0x260);
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar11 * dVar1 + dVar8 + (dVar13 * dVar4 - dVar12 * dVar5) + dVar10;
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a23ec4 FUN_147a23ec4 body=188 status=ok
// SIG undefined FUN_147a23ec4(void)

void FUN_147a23ec4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141119a54(param_1,&local_40,local_24,1);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a23f88 FUN_147a23f88 body=270 status=ok
// SIG undefined FUN_147a23f88(void)

void FUN_147a23f88(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
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
  local_48 = local_28 != 0;
  FUN_147a1f6fc(param_1,&local_40,local_24,1);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a24098 FUN_147a24098 body=239 status=ok
// SIG undefined FUN_147a24098(void)

void FUN_147a24098(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [10];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48[0] = 0;
  uVar1 = FUN_140753fde(param_1 + 0x668,local_4c);
  FUN_14099e1de(param_1,local_48,uVar1,1);
  FUN_1448052ee(local_48,&local_68);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a2418e FUN_147a2418e body=270 status=ok
// SIG undefined FUN_147a2418e(void)

void FUN_147a2418e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
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
  local_48 = local_28 != 0;
  FUN_147a20c86(param_1,&local_40,local_24,1);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


