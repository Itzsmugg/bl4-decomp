// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148623ba0 FUN_148623ba0 body=104 status=ok
// SIG undefined FUN_148623ba0(void)

longlong FUN_148623ba0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_14862318e(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = *(longlong *)(param_2 + 0x28);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(longlong *)(param_1 + 0x28) = lVar4;
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



// FUNCTION 148623c80 FUN_148623c80 body=63 status=ok
// SIG undefined FUN_148623c80(void)

undefined1 FUN_148623c80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148623e48(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148623ce8 FUN_148623ce8 body=59 status=ok
// SIG undefined FUN_148623ce8(void)

undefined8 FUN_148623ce8(longlong *param_1)

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



// FUNCTION 148623d34 FUN_148623d34 body=38 status=ok
// SIG undefined FUN_148623d34(void)

void FUN_148623d34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_148623dd8(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148623da0 FUN_148623da0 body=55 status=ok
// SIG undefined FUN_148623da0(void)

void FUN_148623da0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55330 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55330 = FUN_140002ddd(FUN_1464b16d1,uVar1,L"DropMissionPickupFilter");
  }
  return;
}



// FUNCTION 148623dd8 FUN_148623dd8 body=111 status=ok
// SIG undefined FUN_148623dd8(void)

void FUN_148623dd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14affe560;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148623e48 FUN_148623e48 body=124 status=ok
// SIG undefined FUN_148623e48(void)

longlong FUN_148623e48(longlong param_1,longlong param_2)

{
  FUN_1403de7ba(param_1 + 8,param_2 + 8);
  FUN_148623ec4(param_1 + 0x28,param_2 + 0x28);
  FUN_140d02432(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  FUN_148623ec4(param_1 + 0x98,param_2 + 0x98);
  FUN_148623ec4(param_1 + 0xa8,param_2 + 0xa8);
  return param_1;
}



// FUNCTION 148623ec4 FUN_148623ec4 body=79 status=ok
// SIG undefined FUN_148623ec4(void)

undefined8 * FUN_148623ec4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148623f14(param_1,iVar1);
      FUN_148623f87(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148623f14 FUN_148623f14 body=115 status=ok
// SIG undefined FUN_148623f14(void)

void FUN_148623f14(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148623f87 FUN_148623f87 body=74 status=ok
// SIG undefined FUN_148623f87(void)

void FUN_148623f87(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_1 + lVar1) = *(undefined1 *)(param_2 + lVar1);
      *(undefined8 *)(param_1 + 8 + lVar1) = *(undefined8 *)(param_2 + 8 + lVar1);
      *(undefined4 *)(param_1 + 0x10 + lVar1) = *(undefined4 *)(param_2 + 0x10 + lVar1);
      *(undefined8 *)(param_1 + 0x18 + lVar1) = 0;
      *(undefined8 *)(param_1 + 0x20 + lVar1) = *(undefined8 *)(param_2 + 0x20 + lVar1);
      *(undefined4 *)(param_1 + 0x28 + lVar1) = *(undefined4 *)(param_2 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148623fd2 FUN_148623fd2 body=37 status=ok
// SIG undefined FUN_148623fd2(void)

void FUN_148623fd2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x160);
  FUN_141210884(param_2);
  return;
}



// FUNCTION 148624024 FUN_148624024 body=63 status=ok
// SIG undefined FUN_148624024(void)

undefined1 FUN_148624024(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486241aa(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 14862408c FUN_14862408c body=59 status=ok
// SIG undefined FUN_14862408c(void)

undefined8 FUN_14862408c(longlong *param_1)

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



// FUNCTION 1486240d8 FUN_1486240d8 body=38 status=ok
// SIG undefined FUN_1486240d8(void)

void FUN_1486240d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_141083bd6(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 14862414c FUN_14862414c body=38 status=ok
// SIG undefined FUN_14862414c(void)

undefined8 FUN_14862414c(undefined8 param_1,int param_2)

{
  FUN_141083bd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148624172 FUN_148624172 body=55 status=ok
// SIG undefined FUN_148624172(void)

void FUN_148624172(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55348 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55348 = FUN_140002ddd(FUN_1464b1767,uVar1,L"BinderBehaviorMod_DropMissionPickupBase");
  }
  return;
}



// FUNCTION 1486241aa FUN_1486241aa body=297 status=ok
// SIG undefined FUN_1486241aa(void)

longlong FUN_1486241aa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_14862318e(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_1486242d4(param_1 + 0x50,param_2 + 0x50);
  FUN_1486243f8(param_1 + 0x90,param_2 + 0x90);
  FUN_14862451c(param_1 + 0xd0,param_2 + 0xd0);
  uVar3 = *(undefined8 *)(param_2 + 0xe0);
  lVar4 = *(longlong *)(param_2 + 0xe8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  *(longlong *)(param_1 + 0xe8) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf5) = *(undefined8 *)(param_2 + 0xf5);
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  FUN_144983130(param_1 + 0x100,param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  FUN_145a39a7c(param_1 + 0x140,param_2 + 0x140);
  return param_1;
}



// FUNCTION 1486242d4 FUN_1486242d4 body=290 status=ok
// SIG undefined FUN_1486242d4(void)

longlong * FUN_1486242d4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486243f8 FUN_1486243f8 body=290 status=ok
// SIG undefined FUN_1486243f8(void)

longlong * FUN_1486243f8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862451c FUN_14862451c body=93 status=ok
// SIG undefined FUN_14862451c(void)

undefined8 * FUN_14862451c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1403d9da7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14082454c(param_1,iVar1);
      FUN_1408243d3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148624588 FUN_148624588 body=426 status=ok
// SIG undefined FUN_148624588(void)

void FUN_148624588(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  local_48 = local_3c != 0;
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,local_28,local_30,local_38);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148624734 FUN_148624734 body=152 status=ok
// SIG undefined FUN_148624734(void)

void FUN_148624734(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x38))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486248da FUN_1486248da body=92 status=ok
// SIG undefined FUN_1486248da(void)

void FUN_1486248da(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb557c8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148624938 FUN_148624938 body=92 status=ok
// SIG undefined FUN_148624938(void)

void FUN_148624938(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb557d8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148624996 FUN_148624996 body=97 status=ok
// SIG undefined FUN_148624996(void)

void FUN_148624996(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb557e8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148624a2c FUN_148624a2c body=45 status=ok
// SIG undefined FUN_148624a2c(void)

longlong FUN_148624a2c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148624a5a FUN_148624a5a body=48 status=ok
// SIG undefined FUN_148624a5a(void)

longlong FUN_148624a5a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148624a8a FUN_148624a8a body=48 status=ok
// SIG undefined FUN_148624a8a(void)

longlong FUN_148624a8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148624aba FUN_148624aba body=48 status=ok
// SIG undefined FUN_148624aba(void)

longlong FUN_148624aba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148624af6 FUN_148624af6 body=45 status=ok
// SIG undefined FUN_148624af6(void)

longlong FUN_148624af6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a0b4ca(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148624b24 FUN_148624b24 body=58 status=ok
// SIG undefined FUN_148624b24(void)

void FUN_148624b24(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x170);
  FUN_141210884(param_2);
  *param_2 = &PTR_FUN_14b00bec0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  return;
}



// FUNCTION 148624b5e FUN_148624b5e body=42 status=ok
// SIG undefined FUN_148624b5e(void)

void FUN_148624b5e(undefined8 param_1,undefined8 *param_2)

{
  FUN_141210884(param_2);
  *param_2 = &PTR_FUN_14b00bec0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  return;
}



// FUNCTION 148624bac FUN_148624bac body=85 status=ok
// SIG undefined FUN_148624bac(void)

undefined1 FUN_148624bac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486241aa(param_2,param_3);
    FUN_1400fce78(param_2 + 0x158,param_3 + 0x158);
    param_2 = param_2 + 0x170;
    param_3 = param_3 + 0x170;
  }
  return 1;
}



// FUNCTION 148624c2a FUN_148624c2a body=59 status=ok
// SIG undefined FUN_148624c2a(void)

undefined8 FUN_148624c2a(longlong *param_1)

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



// FUNCTION 148624c76 FUN_148624c76 body=40 status=ok
// SIG undefined FUN_148624c76(void)

void FUN_148624c76(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_1458beb7c(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 148624cec FUN_148624cec body=38 status=ok
// SIG undefined FUN_148624cec(void)

undefined8 FUN_148624cec(undefined8 param_1,int param_2)

{
  FUN_1458beb7c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148624d12 FUN_148624d12 body=55 status=ok
// SIG undefined FUN_148624d12(void)

void FUN_148624d12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55360 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55360 =
         FUN_140002ddd(FUN_1464b1cf3,uVar1,L"BinderBehaviorMod_DropMissionPickup_Condition");
  }
  return;
}



// FUNCTION 148624d4a FUN_148624d4a body=55 status=ok
// SIG undefined FUN_148624d4a(void)

void FUN_148624d4a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x160);
  FUN_141210884(param_2);
  *param_2 = &PTR_FUN_14b00bf00;
  *(undefined1 *)(param_2 + 0x2b) = 0;
  return;
}



// FUNCTION 148624d82 FUN_148624d82 body=39 status=ok
// SIG undefined FUN_148624d82(void)

void FUN_148624d82(undefined8 param_1,undefined8 *param_2)

{
  FUN_141210884(param_2);
  *param_2 = &PTR_FUN_14b00bf00;
  *(undefined1 *)(param_2 + 0x2b) = 0;
  return;
}



// FUNCTION 148624dce FUN_148624dce body=74 status=ok
// SIG undefined FUN_148624dce(void)

undefined1 FUN_148624dce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486241aa(param_2,param_3);
    *(undefined1 *)(param_2 + 0x158) = *(undefined1 *)(param_3 + 0x158);
    param_2 = param_2 + 0x160;
    param_3 = param_3 + 0x160;
  }
  return 1;
}



// FUNCTION 148624e40 FUN_148624e40 body=59 status=ok
// SIG undefined FUN_148624e40(void)

undefined8 FUN_148624e40(longlong *param_1)

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



// FUNCTION 148624e8c FUN_148624e8c body=38 status=ok
// SIG undefined FUN_148624e8c(void)

void FUN_148624e8c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_141083bd6(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 148624f00 FUN_148624f00 body=38 status=ok
// SIG undefined FUN_148624f00(void)

undefined8 FUN_148624f00(undefined8 param_1,int param_2)

{
  FUN_141083bd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148624f26 FUN_148624f26 body=55 status=ok
// SIG undefined FUN_148624f26(void)

void FUN_148624f26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55378 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55378 =
         FUN_140002ddd(FUN_1464b1d89,uVar1,L"BinderBehaviorMod_DropMissionPickup_OnDeath");
  }
  return;
}



// FUNCTION 148624f5e FUN_148624f5e body=68 status=ok
// SIG undefined FUN_148624f5e(void)

void FUN_148624f5e(undefined8 param_1,undefined8 *param_2)

{
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b00be30;
  FUN_144928b90(param_2 + 3,0);
  *(undefined2 *)(param_2 + 10) = 0;
  *(undefined1 *)((longlong)param_2 + 0x52) = 1;
  return;
}



// FUNCTION 148624fa2 FUN_148624fa2 body=52 status=ok
// SIG undefined FUN_148624fa2(void)

void FUN_148624fa2(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b00be30;
  FUN_144928b90(param_2 + 3,0);
  *(undefined2 *)(param_2 + 10) = 0;
  *(undefined1 *)((longlong)param_2 + 0x52) = 1;
  return;
}



// FUNCTION 148624ffa FUN_148624ffa body=103 status=ok
// SIG undefined FUN_148624ffa(void)

undefined8 FUN_148624ffa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_14862318e(param_2 + -0x20,param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1447715ec(param_2,param_3);
      *(undefined2 *)(param_2 + 0x28) = *(undefined2 *)(param_3 + 0x28);
      *(undefined1 *)(param_2 + 0x2a) = *(undefined1 *)(param_3 + 0x2a);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14862508a FUN_14862508a body=59 status=ok
// SIG undefined FUN_14862508a(void)

undefined8 FUN_14862508a(longlong *param_1)

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



// FUNCTION 1486250d0 FUN_1486250d0 body=58 status=ok
// SIG undefined FUN_1486250d0(void)

void FUN_1486250d0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14b00be30;
    if (param_2[8] != 0) {
      FUN_1400020a8();
    }
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 148625158 FUN_148625158 body=67 status=ok
// SIG undefined FUN_148625158(void)

undefined8 * FUN_148625158(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b00be30;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140f4e84a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862519c FUN_14862519c body=55 status=ok
// SIG undefined FUN_14862519c(void)

void FUN_14862519c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55390 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55390 = FUN_140002ddd(FUN_1464b1e1f,uVar1,L"BinderBehaviorMod_Encounter");
  }
  return;
}



// FUNCTION 1486251da FUN_1486251da body=125 status=ok
// SIG undefined FUN_1486251da(void)

void FUN_1486251da(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[0xf] = 0;
  *param_2 = &PTR_FUN_14b008d60;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  FUN_144928b90(param_2 + 4,0);
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b008cf0;
  FUN_140d7ec9e(param_2 + 0xc);
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *param_2 = &PTR_FUN_14b008cb0;
  return;
}



// FUNCTION 148625258 FUN_148625258 body=97 status=ok
// SIG undefined FUN_148625258(void)

void FUN_148625258(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b008d60;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  FUN_144928b90(param_2 + 4,0);
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b008cf0;
  FUN_140d7ec9e(param_2 + 0xc);
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *param_2 = &PTR_FUN_14b008cb0;
  return;
}



// FUNCTION 1486252de FUN_1486252de body=63 status=ok
// SIG undefined FUN_1486252de(void)

undefined1 FUN_1486252de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486254fc(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148625346 FUN_148625346 body=59 status=ok
// SIG undefined FUN_148625346(void)

undefined8 FUN_148625346(longlong *param_1)

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



// FUNCTION 148625392 FUN_148625392 body=40 status=ok
// SIG undefined FUN_148625392(void)

void FUN_148625392(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1461f94d2(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148625408 FUN_148625408 body=38 status=ok
// SIG undefined FUN_148625408(void)

undefined8 FUN_148625408(undefined8 param_1,int param_2)

{
  FUN_1461f94d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862542e FUN_14862542e body=55 status=ok
// SIG undefined FUN_14862542e(void)

void FUN_14862542e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb553e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb553e0 = FUN_140002ddd(FUN_1464b1eb5,uVar1,L"RegistryJunkModifier_MissionGiverPickup");
  }
  return;
}



// FUNCTION 148625466 FUN_148625466 body=38 status=ok
// SIG undefined FUN_148625466(void)

undefined8 FUN_148625466(undefined8 param_1,int param_2)

{
  FUN_1461f94d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862548c FUN_14862548c body=55 status=ok
// SIG undefined FUN_14862548c(void)

void FUN_14862548c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55410 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55410 = FUN_140002ddd(FUN_1464b1ee4,uVar1,L"RegistryJunkModifier_MissionPickup");
  }
  return;
}



// FUNCTION 1486254c8 FUN_1486254c8 body=38 status=ok
// SIG undefined FUN_1486254c8(void)

undefined8 FUN_1486254c8(undefined8 param_1,int param_2)

{
  FUN_1461f9512();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486254fc FUN_1486254fc body=86 status=ok
// SIG undefined FUN_1486254fc(void)

longlong FUN_1486254fc(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_148625552();
  FUN_1459855b4(param_1 + 0x60,param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  lVar3 = *(longlong *)(param_2 + 0x78);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(longlong *)(param_1 + 0x78) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 148625552 FUN_148625552 body=109 status=ok
// SIG undefined FUN_148625552(void)

longlong FUN_148625552(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_1447715ec(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  return param_1;
}



// FUNCTION 148625630 FUN_148625630 body=101 status=ok
// SIG undefined FUN_148625630(void)

undefined8 FUN_148625630(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_14862318e(param_2 + -0x20,param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1400fce78(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486256be FUN_1486256be body=59 status=ok
// SIG undefined FUN_1486256be(void)

undefined8 FUN_1486256be(longlong *param_1)

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



// FUNCTION 148625704 FUN_148625704 body=32 status=ok
// SIG undefined FUN_148625704(void)

void FUN_148625704(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_141462172(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148625772 FUN_148625772 body=38 status=ok
// SIG undefined FUN_148625772(void)

undefined8 FUN_148625772(undefined8 param_1,int param_2)

{
  FUN_141462172();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148625798 FUN_148625798 body=57 status=ok
// SIG undefined FUN_148625798(void)

void FUN_148625798(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb553f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb553f8 = FUN_140002ddd(FUN_1464b1f7b,uVar1,L"BinderBehaviorMod_MissionGiverPickup");
  }
  return;
}



// FUNCTION 1486257d2 FUN_1486257d2 body=38 status=ok
// SIG undefined FUN_1486257d2(void)

undefined8 FUN_1486257d2(undefined8 param_1,int param_2)

{
  FUN_141462172();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486257f8 FUN_1486257f8 body=55 status=ok
// SIG undefined FUN_1486257f8(void)

void FUN_1486257f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55428 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55428 = FUN_140002ddd(FUN_1464b1faa,uVar1,L"BinderBehaviorMod_MissionPickup");
  }
  return;
}



// FUNCTION 148625830 FUN_148625830 body=115 status=ok
// SIG undefined FUN_148625830(void)

void FUN_148625830(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[0xf] = 0;
  *param_2 = &PTR_FUN_14b008d60;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  FUN_144928b90(param_2 + 4,0);
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b008cf0;
  FUN_140d7ec9e(param_2 + 0xc);
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}



// FUNCTION 1486258a4 FUN_1486258a4 body=87 status=ok
// SIG undefined FUN_1486258a4(void)

void FUN_1486258a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b008d60;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  FUN_144928b90(param_2 + 4,0);
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b008cf0;
  FUN_140d7ec9e(param_2 + 0xc);
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}



// FUNCTION 148625920 FUN_148625920 body=63 status=ok
// SIG undefined FUN_148625920(void)

undefined1 FUN_148625920(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486254fc(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148625988 FUN_148625988 body=59 status=ok
// SIG undefined FUN_148625988(void)

undefined8 FUN_148625988(longlong *param_1)

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



// FUNCTION 1486259d4 FUN_1486259d4 body=40 status=ok
// SIG undefined FUN_1486259d4(void)

void FUN_1486259d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1461f94d2(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148625ac8 FUN_148625ac8 body=95 status=ok
// SIG undefined FUN_148625ac8(void)

undefined8 FUN_148625ac8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_14862318e(param_2 + -0x20,param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1400fce78(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148625b50 FUN_148625b50 body=59 status=ok
// SIG undefined FUN_148625b50(void)

undefined8 FUN_148625b50(longlong *param_1)

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



// FUNCTION 148625b96 FUN_148625b96 body=32 status=ok
// SIG undefined FUN_148625b96(void)

void FUN_148625b96(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_141462172(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148625c8a FUN_148625c8a body=54 status=ok
// SIG undefined FUN_148625c8a(void)

undefined1 FUN_148625c8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148625dfc(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148625ce8 FUN_148625ce8 body=59 status=ok
// SIG undefined FUN_148625ce8(void)

undefined8 FUN_148625ce8(longlong *param_1)

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



// FUNCTION 148625d2e FUN_148625d2e body=32 status=ok
// SIG undefined FUN_148625d2e(void)

void FUN_148625d2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148625d9c FUN_148625d9c body=38 status=ok
// SIG undefined FUN_148625d9c(void)

undefined8 FUN_148625d9c(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148625dc2 FUN_148625dc2 body=57 status=ok
// SIG undefined FUN_148625dc2(void)

void FUN_148625dc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55440 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55440 = FUN_140002ddd(FUN_1464b20a2,uVar1,L"BinderBehaviorMod_OverrideAINodeChainActor")
    ;
  }
  return;
}



// FUNCTION 148625dfc FUN_148625dfc body=105 status=ok
// SIG undefined FUN_148625dfc(void)

longlong FUN_148625dfc(longlong param_1,longlong param_2)

{
  FUN_14862318e(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  return param_1;
}



// FUNCTION 148625ed0 FUN_148625ed0 body=54 status=ok
// SIG undefined FUN_148625ed0(void)

undefined1 FUN_148625ed0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862601a(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148625f2e FUN_148625f2e body=59 status=ok
// SIG undefined FUN_148625f2e(void)

undefined8 FUN_148625f2e(longlong *param_1)

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



// FUNCTION 148625f74 FUN_148625f74 body=32 status=ok
// SIG undefined FUN_148625f74(void)

void FUN_148625f74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148625fe2 FUN_148625fe2 body=55 status=ok
// SIG undefined FUN_148625fe2(void)

void FUN_148625fe2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55458 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55458 = FUN_140002ddd(FUN_1464b2139,uVar1,L"BinderBehaviorMod_OverrideDialogNameTag");
  }
  return;
}



// FUNCTION 14862601a FUN_14862601a body=91 status=ok
// SIG undefined FUN_14862601a(void)

longlong FUN_14862601a(longlong param_1,longlong param_2)

{
  FUN_14862318e(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 1486260d0 FUN_1486260d0 body=91 status=ok
// SIG undefined FUN_1486260d0(void)

undefined8 FUN_1486260d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_14862318e(param_2 + -0x28,param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148626154 FUN_148626154 body=59 status=ok
// SIG undefined FUN_148626154(void)

undefined8 FUN_148626154(longlong *param_1)

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



// FUNCTION 14862619a FUN_14862619a body=56 status=ok
// SIG undefined FUN_14862619a(void)

void FUN_14862619a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b006b80;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148626220 FUN_148626220 body=55 status=ok
// SIG undefined FUN_148626220(void)

void FUN_148626220(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55470 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55470 = FUN_140002ddd(FUN_1464b21cf,uVar1,L"BinderBehaviorMod_PlayMoment");
  }
  return;
}



// FUNCTION 1486262b2 FUN_1486262b2 body=91 status=ok
// SIG undefined FUN_1486262b2(void)

undefined8 FUN_1486262b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_14862318e(param_2 + -0x28,param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148626336 FUN_148626336 body=59 status=ok
// SIG undefined FUN_148626336(void)

undefined8 FUN_148626336(longlong *param_1)

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



// FUNCTION 14862637c FUN_14862637c body=56 status=ok
// SIG undefined FUN_14862637c(void)

void FUN_14862637c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b006d20;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1486263fe FUN_1486263fe body=55 status=ok
// SIG undefined FUN_1486263fe(void)

void FUN_1486263fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55490 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55490 = FUN_140002ddd(FUN_1464b2265,uVar1,L"BinderBehaviorMod_PlayTrick");
  }
  return;
}



// FUNCTION 148626436 FUN_148626436 body=105 status=ok
// SIG undefined FUN_148626436(void)

void FUN_148626436(undefined8 param_1,undefined8 *param_2)

{
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b00bf40;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x21) = 0;
  FUN_144928b90(param_2 + 9,0);
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  return;
}



// FUNCTION 1486264a0 FUN_1486264a0 body=83 status=ok
// SIG undefined FUN_1486264a0(void)

void FUN_1486264a0(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b00bf40;
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x21) = 0;
  FUN_144928b90(param_2 + 9,0);
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  return;
}



// FUNCTION 148626518 FUN_148626518 body=178 status=ok
// SIG undefined FUN_148626518(void)

undefined8 FUN_148626518(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_14862318e(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x1c);
      uVar4 = *(undefined4 *)(lVar2 + 0x20);
      uVar5 = *(undefined4 *)(lVar2 + 0x24);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x1c) = uVar3;
      *(undefined4 *)(lVar1 + 0x20) = uVar4;
      *(undefined4 *)(lVar1 + 0x24) = uVar5;
      *(undefined1 *)(lVar1 + 0x28) = *(undefined1 *)(lVar2 + 0x28);
      lVar2 = param_2 + 0x30 + lVar6;
      lVar1 = param_3 + lVar6;
      FUN_1401f3db8(lVar2,lVar1 + 0x30);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x48);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x50);
      lVar1 = param_2 + 0x58 + lVar6;
      FUN_1447715ec(lVar1,param_3 + lVar6 + 0x58);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_3 + lVar6 + 0x80);
      lVar6 = lVar6 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486265f2 FUN_1486265f2 body=59 status=ok
// SIG undefined FUN_1486265f2(void)

undefined8 FUN_1486265f2(longlong *param_1)

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



// FUNCTION 14862663e FUN_14862663e body=57 status=ok
// SIG undefined FUN_14862663e(void)

void FUN_14862663e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14b00bf40;
    FUN_14184465a(param_2 + 3);
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 1486266c6 FUN_1486266c6 body=60 status=ok
// SIG undefined FUN_1486266c6(void)

undefined8 * FUN_1486266c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b00bf40;
  FUN_14184465a(param_1 + 3);
  FUN_140f4e84a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148626702 FUN_148626702 body=57 status=ok
// SIG undefined FUN_148626702(void)

void FUN_148626702(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb554a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb554a8 = FUN_140002ddd(FUN_1464b22c4,uVar1,L"BinderBehaviorMod_RegisterFactEvaluator");
  }
  return;
}



// FUNCTION 148626756 FUN_148626756 body=56 status=ok
// SIG undefined FUN_148626756(void)

void FUN_148626756(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000148626783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1486267a4 FUN_1486267a4 body=91 status=ok
// SIG undefined FUN_1486267a4(void)

undefined1 FUN_1486267a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14117b026(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_14689c22e();
        lVar1 = *(longlong *)(param_3 + 0x38);
      }
    }
    param_3 = param_3 + 0x40;
    *(longlong *)(param_2 + 0x38) = lVar1;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148626828 FUN_148626828 body=59 status=ok
// SIG undefined FUN_148626828(void)

undefined8 FUN_148626828(longlong *param_1)

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



// FUNCTION 14862686e FUN_14862686e body=64 status=ok
// SIG undefined FUN_14862686e(void)

void FUN_14862686e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x40) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148626942 FUN_148626942 body=54 status=ok
// SIG undefined FUN_148626942(void)

undefined1 FUN_148626942(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148626aaa(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 1486269a0 FUN_1486269a0 body=59 status=ok
// SIG undefined FUN_1486269a0(void)

undefined8 FUN_1486269a0(longlong *param_1)

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



// FUNCTION 1486269e6 FUN_1486269e6 body=32 status=ok
// SIG undefined FUN_1486269e6(void)

void FUN_1486269e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148626a54(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148626a54 FUN_148626a54 body=86 status=ok
// SIG undefined FUN_148626a54(void)

void FUN_148626a54(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140c788c6(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000148626aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148626aaa FUN_148626aaa body=84 status=ok
// SIG undefined FUN_148626aaa(void)

longlong FUN_148626aaa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_14117b026();
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_148626afe(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



// FUNCTION 148626afe FUN_148626afe body=93 status=ok
// SIG undefined FUN_148626afe(void)

undefined8 * FUN_148626afe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c788c6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148626b5c(param_1,iVar1);
      FUN_148626bbe(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148626b5c FUN_148626b5c body=98 status=ok
// SIG undefined FUN_148626b5c(void)

void FUN_148626b5c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148626bbe FUN_148626bbe body=52 status=ok
// SIG undefined FUN_148626bbe(void)

void FUN_148626bbe(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148626bf2(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 148626bf2 FUN_148626bf2 body=101 status=ok
// SIG undefined FUN_148626bf2(void)

undefined1 * FUN_148626bf2(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1401f3db8(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar1 = *(longlong *)(param_2 + 0x38);
  *(longlong *)(param_1 + 0x38) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  return param_1;
}



// FUNCTION 148626c64 FUN_148626c64 body=46 status=ok
// SIG undefined FUN_148626c64(void)

void FUN_148626c64(undefined8 param_1,longlong param_2)

{
  FUN_140c7885d(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148626ca8 FUN_148626ca8 body=68 status=ok
// SIG undefined FUN_148626ca8(void)

undefined1 FUN_148626ca8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148626db0(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148626d14 FUN_148626d14 body=59 status=ok
// SIG undefined FUN_148626d14(void)

undefined8 FUN_148626d14(longlong *param_1)

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



// FUNCTION 148626db0 FUN_148626db0 body=93 status=ok
// SIG undefined FUN_148626db0(void)

undefined8 * FUN_148626db0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c7885d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148626e0e(param_1,iVar1);
      FUN_148626e7d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148626e0e FUN_148626e0e body=111 status=ok
// SIG undefined FUN_148626e0e(void)

void FUN_148626e0e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148626e7d FUN_148626e7d body=52 status=ok
// SIG undefined FUN_148626e7d(void)

void FUN_148626e7d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148626eb2(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 148626eb2 FUN_148626eb2 body=173 status=ok
// SIG undefined FUN_148626eb2(void)

undefined1 * FUN_148626eb2(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1401f3db8(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar2 = *(longlong *)(param_2 + 0x38);
  *(longlong *)(param_1 + 0x38) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    FUN_148626b5c(param_1 + 0x48,iVar1,0);
    FUN_148626bbe(*(undefined8 *)(param_1 + 0x48),uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 148626f60 FUN_148626f60 body=50 status=ok
// SIG undefined FUN_148626f60(void)

void FUN_148626f60(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_140c7885d(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148627050 FUN_148627050 body=59 status=ok
// SIG undefined FUN_148627050(void)

undefined8 FUN_148627050(longlong *param_1)

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



// FUNCTION 1486270e4 FUN_1486270e4 body=55 status=ok
// SIG undefined FUN_1486270e4(void)

void FUN_1486270e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55578 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55578 = FUN_140002ddd(FUN_1464b2745,uVar1,L"BooleanDisplayValue");
  }
  return;
}



// FUNCTION 148627180 FUN_148627180 body=99 status=ok
// SIG undefined FUN_148627180(void)

undefined8 FUN_148627180(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_141289ada(param_2 + -0x28,param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1406fa324(param_2,param_3);
      *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14862720c FUN_14862720c body=59 status=ok
// SIG undefined FUN_14862720c(void)

undefined8 FUN_14862720c(longlong *param_1)

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



// FUNCTION 148627252 FUN_148627252 body=32 status=ok
// SIG undefined FUN_148627252(void)

void FUN_148627252(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1486272b8(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1486272b8 FUN_1486272b8 body=59 status=ok
// SIG undefined FUN_1486272b8(void)

void FUN_1486272b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b007690;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1486272f4 FUN_1486272f4 body=104 status=ok
// SIG undefined FUN_1486272f4(void)

undefined8 FUN_1486272f4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1487fe2f8(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862735e FUN_14862735e body=28 status=ok
// SIG undefined FUN_14862735e(void)

undefined8 FUN_14862735e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486273d8 FUN_1486273d8 body=80 status=ok
// SIG undefined FUN_1486273d8(void)

undefined8 FUN_1486273d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148627450 FUN_148627450 body=59 status=ok
// SIG undefined FUN_148627450(void)

undefined8 FUN_148627450(longlong *param_1)

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



// FUNCTION 148627496 FUN_148627496 body=38 status=ok
// SIG undefined FUN_148627496(void)

void FUN_148627496(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14862757e FUN_14862757e body=86 status=ok
// SIG undefined FUN_14862757e(void)

undefined8 FUN_14862757e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1486276b6(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486275fc FUN_1486275fc body=59 status=ok
// SIG undefined FUN_1486275fc(void)

undefined8 FUN_1486275fc(longlong *param_1)

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



// FUNCTION 148627642 FUN_148627642 body=38 status=ok
// SIG undefined FUN_148627642(void)

void FUN_148627642(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486276b6 FUN_1486276b6 body=79 status=ok
// SIG undefined FUN_1486276b6(void)

undefined8 * FUN_1486276b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148627706(param_1,iVar1);
      FUN_148627768(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148627706 FUN_148627706 body=98 status=ok
// SIG undefined FUN_148627706(void)

void FUN_148627706(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148627768 FUN_148627768 body=78 status=ok
// SIG undefined FUN_148627768(void)

void FUN_148627768(longlong param_1,longlong param_2,int param_3)

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
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1486277de FUN_1486277de body=46 status=ok
// SIG undefined FUN_1486277de(void)

void FUN_1486277de(undefined8 param_1,longlong param_2)

{
  FUN_148627934(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148627822 FUN_148627822 body=78 status=ok
// SIG undefined FUN_148627822(void)

undefined8 FUN_148627822(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_148627964(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148627898 FUN_148627898 body=59 status=ok
// SIG undefined FUN_148627898(void)

undefined8 FUN_148627898(longlong *param_1)

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



// FUNCTION 148627934 FUN_148627934 body=47 status=ok
// SIG undefined FUN_148627934(void)

void FUN_148627934(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148627964 FUN_148627964 body=95 status=ok
// SIG undefined FUN_148627964(void)

undefined8 * FUN_148627964(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148627934(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486279c4(param_1,iVar1);
      FUN_148627a37(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486279c4 FUN_1486279c4 body=115 status=ok
// SIG undefined FUN_1486279c4(void)

void FUN_1486279c4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148627a37 FUN_148627a37 body=52 status=ok
// SIG undefined FUN_148627a37(void)

void FUN_148627a37(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148627a6c(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148627a6c FUN_148627a6c body=116 status=ok
// SIG undefined FUN_148627a6c(void)

undefined8 * FUN_148627a6c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_148627706(param_1 + 1,iVar1,0);
    FUN_148627768(param_1[1],uVar2,iVar1);
  }
  param_1[5] = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  return param_1;
}



// FUNCTION 148627ae2 FUN_148627ae2 body=52 status=ok
// SIG undefined FUN_148627ae2(void)

void FUN_148627ae2(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_148627934(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148627b34 FUN_148627b34 body=116 status=ok
// SIG undefined FUN_148627b34(void)

undefined8 FUN_148627b34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      *(undefined4 *)(param_2 + 0x18 + lVar2) = *(undefined4 *)(param_3 + 0x18 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x20 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x20 + lVar2);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar2 = lVar2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148627bd0 FUN_148627bd0 body=59 status=ok
// SIG undefined FUN_148627bd0(void)

undefined8 FUN_148627bd0(longlong *param_1)

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



// FUNCTION 148627c1c FUN_148627c1c body=49 status=ok
// SIG undefined FUN_148627c1c(void)

void FUN_148627c1c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 148627c9c FUN_148627c9c body=57 status=ok
// SIG undefined FUN_148627c9c(void)

void FUN_148627c9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55658 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55658 = FUN_140002ddd(FUN_1464b2b65,uVar1,L"BreadcrumbGlobals");
  }
  return;
}



// FUNCTION 148627d16 FUN_148627d16 body=48 status=ok
// SIG undefined FUN_148627d16(void)

void FUN_148627d16(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148627d5c FUN_148627d5c body=143 status=ok
// SIG undefined FUN_148627d5c(void)

undefined8 FUN_148627d5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 3);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[5];
      *(undefined8 *)(lVar2 + 0x18) = puVar1[6];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x3c);
      uVar4 = *(undefined4 *)(puVar1 + 8);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x44);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(puVar1 + 7);
      *(undefined4 *)(lVar2 + 0x24) = uVar3;
      *(undefined4 *)(lVar2 + 0x28) = uVar4;
      *(undefined4 *)(lVar2 + 0x2c) = uVar5;
      FUN_144a787a6(param_2 + lVar6 + 0x48,param_3 + lVar6 + 0x48);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148627e14 FUN_148627e14 body=59 status=ok
// SIG undefined FUN_148627e14(void)

undefined8 FUN_148627e14(longlong *param_1)

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



// FUNCTION 148627eb2 FUN_148627eb2 body=52 status=ok
// SIG undefined FUN_148627eb2(void)

void FUN_148627eb2(longlong param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148627ee6 FUN_148627ee6 body=122 status=ok
// SIG undefined FUN_148627ee6(void)

void FUN_148627ee6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xb8);
  *param_2 = &PTR_FUN_14b007f60;
  *(undefined4 *)(param_2 + 7) = 0x1030;
  *(undefined4 *)(param_2 + 9) = 0x3f800000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x12) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x14) = 0x1010;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined4 *)(param_2 + 0x17) = 0x1010;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 148628008 FUN_148628008 body=63 status=ok
// SIG undefined FUN_148628008(void)

undefined1 FUN_148628008(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148628174(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148628070 FUN_148628070 body=59 status=ok
// SIG undefined FUN_148628070(void)

undefined8 FUN_148628070(longlong *param_1)

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



// FUNCTION 14862811c FUN_14862811c body=29 status=ok
// SIG undefined FUN_14862811c(void)

undefined8 FUN_14862811c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862813a FUN_14862813a body=55 status=ok
// SIG undefined FUN_14862813a(void)

void FUN_14862813a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55710 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55710 = FUN_140002ddd(FUN_1464b2d8d,uVar1,L"BreakDownPartAspect");
  }
  return;
}



// FUNCTION 148628174 FUN_148628174 body=212 status=ok
// SIG undefined FUN_148628174(void)

longlong FUN_148628174(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1418443e8(param_1 + 0x18,param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30)) ||
     (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38))) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  FUN_140d02432(param_1 + 0x48,param_2 + 0x48);
  if ((*(longlong *)(param_1 + 0x98) != *(longlong *)(param_2 + 0x98)) ||
     (*(int *)(param_1 + 0xa0) != *(int *)(param_2 + 0xa0))) {
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_2 + 0x98);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if ((*(longlong *)(param_1 + 0xb0) != *(longlong *)(param_2 + 0xb0)) ||
     (*(int *)(param_1 + 0xb8) != *(int *)(param_2 + 0xb8))) {
    *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return param_1;
}



// FUNCTION 1486282ea FUN_1486282ea body=59 status=ok
// SIG undefined FUN_1486282ea(void)

undefined8 FUN_1486282ea(longlong *param_1)

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



// FUNCTION 148628430 FUN_148628430 body=59 status=ok
// SIG undefined FUN_148628430(void)

undefined8 FUN_148628430(longlong *param_1)

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



// FUNCTION 1486284fa FUN_1486284fa body=29 status=ok
// SIG undefined FUN_1486284fa(void)

undefined8 FUN_1486284fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148628518 FUN_148628518 body=55 status=ok
// SIG undefined FUN_148628518(void)

void FUN_148628518(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55740 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55740 = FUN_140002ddd(FUN_1418445c3,uVar1,L"CameraModeBehavior");
  }
  return;
}



// FUNCTION 148628630 FUN_148628630 body=59 status=ok
// SIG undefined FUN_148628630(void)

undefined8 FUN_148628630(longlong *param_1)

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



// FUNCTION 1486286d8 FUN_1486286d8 body=55 status=ok
// SIG undefined FUN_1486286d8(void)

void FUN_1486286d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55758 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55758 = FUN_140002ddd(FUN_1464b2ee9,uVar1,L"CameraModeBehavior_AbsoluteOffset");
  }
  return;
}



// FUNCTION 1486287ec FUN_1486287ec body=59 status=ok
// SIG undefined FUN_1486287ec(void)

undefined8 FUN_1486287ec(longlong *param_1)

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



// FUNCTION 148628894 FUN_148628894 body=55 status=ok
// SIG undefined FUN_148628894(void)

void FUN_148628894(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55770 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55770 = FUN_140002ddd(FUN_1464b2f7f,uVar1,L"CameraModeBehavior_AnchorOffset");
  }
  return;
}



// FUNCTION 14862896e FUN_14862896e body=59 status=ok
// SIG undefined FUN_14862896e(void)

undefined8 FUN_14862896e(longlong *param_1)

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



// FUNCTION 148628a0a FUN_148628a0a body=57 status=ok
// SIG undefined FUN_148628a0a(void)

void FUN_148628a0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55788 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55788 = FUN_140002ddd(FUN_1464b3015,uVar1,L"CameraModeBehavior_AnchorToEye");
  }
  return;
}



// FUNCTION 148628ae6 FUN_148628ae6 body=59 status=ok
// SIG undefined FUN_148628ae6(void)

undefined8 FUN_148628ae6(longlong *param_1)

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



// FUNCTION 148628b94 FUN_148628b94 body=198 status=ok
// SIG undefined FUN_148628b94(void)

void FUN_148628b94(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xf0);
  *param_2 = &PTR_FUN_14b00bc40;
  param_2[3] = &PTR_FUN_14b00bdf8;
  *(undefined4 *)(param_2 + 10) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0xffffffff00000080;
  param_2[0xd] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x8c) = 0x404;
  param_2[4] = &DAT_14a176f00;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0x3f0000003f000000;
  *(undefined1 *)(param_2 + 0x1c) = 1;
  *(undefined8 *)((longlong)param_2 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0;
  return;
}



// FUNCTION 148628d1c FUN_148628d1c body=170 status=ok
// SIG undefined FUN_148628d1c(void)

undefined8 FUN_148628d1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
    do {
      *(undefined4 *)(param_2 + -0x81) = *(undefined4 *)(param_3 + -0x81);
      *(undefined8 *)(param_2 + -0x88) = *(undefined8 *)(param_3 + -0x88);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined2 *)(param_2 + -4) = *(undefined2 *)(param_3 + -4);
      FUN_14093c00e(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x1c);
      uVar2 = *(undefined4 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
      *(undefined4 *)(param_2 + 0x20) = uVar2;
      *(undefined4 *)(param_2 + 0x24) = uVar3;
      FUN_144a787a6(param_2 + 0x28,param_3 + 0x28);
      uVar1 = *(undefined4 *)(param_3 + 0x3c);
      uVar2 = *(undefined4 *)(param_3 + 0x40);
      uVar3 = *(undefined4 *)(param_3 + 0x44);
      uVar4 = *(undefined4 *)(param_3 + 0x48);
      uVar5 = *(undefined4 *)(param_3 + 0x4c);
      uVar6 = *(undefined4 *)(param_3 + 0x50);
      uVar7 = *(undefined4 *)(param_3 + 0x54);
      uVar8 = *(undefined4 *)(param_3 + 0x51);
      uVar9 = *(undefined4 *)(param_3 + 0x55);
      uVar10 = *(undefined4 *)(param_3 + 0x59);
      uVar11 = *(undefined4 *)(param_3 + 0x5d);
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
      *(undefined4 *)(param_2 + 0x3c) = uVar1;
      *(undefined4 *)(param_2 + 0x40) = uVar2;
      *(undefined4 *)(param_2 + 0x44) = uVar3;
      *(undefined4 *)(param_2 + 0x48) = uVar4;
      *(undefined4 *)(param_2 + 0x4c) = uVar5;
      *(undefined4 *)(param_2 + 0x50) = uVar6;
      *(undefined4 *)(param_2 + 0x54) = uVar7;
      *(undefined4 *)(param_2 + 0x51) = uVar8;
      *(undefined4 *)(param_2 + 0x55) = uVar9;
      *(undefined4 *)(param_2 + 0x59) = uVar10;
      *(undefined4 *)(param_2 + 0x5d) = uVar11;
      param_3 = param_3 + 0xf8;
      param_2 = param_2 + 0xf8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148628dee FUN_148628dee body=59 status=ok
// SIG undefined FUN_148628dee(void)

undefined8 FUN_148628dee(longlong *param_1)

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



// FUNCTION 148628e3a FUN_148628e3a body=49 status=ok
// SIG undefined FUN_148628e3a(void)

void FUN_148628e3a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    *param_2 = &PTR_FUN_14b00bc40;
    FUN_14051f4c4(param_2 + 3);
    *(undefined1 *)(param_2 + 0x1f) = 0;
  }
  return;
}



// FUNCTION 148628ec2 FUN_148628ec2 body=57 status=ok
// SIG undefined FUN_148628ec2(void)

void FUN_148628ec2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb557b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb557b8 = FUN_140002ddd(FUN_1464b3141,uVar1,L"CameraModeBehavior_BlendToFOV");
  }
  return;
}



// FUNCTION 148628f74 FUN_148628f74 body=54 status=ok
// SIG undefined FUN_148628f74(void)

undefined1 FUN_148628f74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148629132(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148628fd2 FUN_148628fd2 body=59 status=ok
// SIG undefined FUN_148628fd2(void)

undefined8 FUN_148628fd2(longlong *param_1)

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



// FUNCTION 148629018 FUN_148629018 body=48 status=ok
// SIG undefined FUN_148629018(void)

void FUN_148629018(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b00bcd0;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1486290c0 FUN_1486290c0 body=57 status=ok
// SIG undefined FUN_1486290c0(void)

undefined8 * FUN_1486290c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b00bcd0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486290fa FUN_1486290fa body=55 status=ok
// SIG undefined FUN_1486290fa(void)

void FUN_1486290fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55818 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55818 = FUN_140002ddd(FUN_1464b32bb,uVar1,L"CameraModeBehavior_Blueprint");
  }
  return;
}



// FUNCTION 148629132 FUN_148629132 body=92 status=ok
// SIG undefined FUN_148629132(void)

longlong FUN_148629132(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar4;
  return param_1;
}



// FUNCTION 1486291b6 FUN_1486291b6 body=106 status=ok
// SIG undefined FUN_1486291b6(void)

undefined8 FUN_1486291b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined4 *)(param_2 + -0x19) = *(undefined4 *)(param_3 + -0x19);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148629308(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148629248 FUN_148629248 body=59 status=ok
// SIG undefined FUN_148629248(void)

undefined8 FUN_148629248(longlong *param_1)

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



// FUNCTION 14862928e FUN_14862928e body=48 status=ok
// SIG undefined FUN_14862928e(void)

void FUN_14862928e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b00bd50;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 148629308 FUN_148629308 body=84 status=ok
// SIG undefined FUN_148629308(void)

undefined8 * FUN_148629308(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14862935c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14862935c FUN_14862935c body=90 status=ok
// SIG undefined FUN_14862935c(void)

void FUN_14862935c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486293fd FUN_1486293fd body=55 status=ok
// SIG undefined FUN_1486293fd(void)

void FUN_1486293fd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55948 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55948 = FUN_14171c317(FUN_1464b3ea6,uVar1,L"ECameraModeLookSpaces");
  }
  return;
}



// FUNCTION 148629434 FUN_148629434 body=55 status=ok
// SIG undefined FUN_148629434(void)

void FUN_148629434(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55960 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55960 = FUN_14171c317(FUN_1464b3ed5,uVar1,L"ECameraModeBehaviorLookAxis");
  }
  return;
}



// FUNCTION 1486294b2 FUN_1486294b2 body=422 status=ok
// SIG undefined FUN_1486294b2(void)

void FUN_1486294b2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_928 [36];
  undefined4 local_904;
  undefined8 local_900;
  undefined1 local_8f8 [2088];
  longlong local_d0;
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_928;
  local_900 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_900);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_900);
  }
  puVar1 = &local_900;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  FUN_144894d4c(local_8f8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_8f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_8f8);
  }
  puVar2 = local_8f8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_904 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_904);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_904);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1406a8366(param_1,puVar1,puVar2,local_904);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_928) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148629662 FUN_148629662 body=729 status=ok
// SIG undefined FUN_148629662(void)

void FUN_148629662(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 *local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_bc;
  undefined4 local_90;
  undefined1 local_5e;
  byte local_5d;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_5d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5d);
  }
  local_5e = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5e);
  }
  memset(local_160,0,0x100);
  local_90 = 0xffffffff;
  local_15c = 0x3f800000;
  local_bc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_160);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_160);
  }
  local_1a8 = local_160;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_1a8 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = local_58;
  uStack_170 = uStack_50;
  local_168 = local_48;
  local_198 = local_40;
  uStack_194 = uStack_3c;
  uStack_190 = uStack_38;
  uStack_18c = uStack_34;
  local_188 = local_30;
  local_1b0 = local_5e;
  local_1b8 = (uint)local_5d;
  uVar1 = FUN_148802412(param_1,&local_198,&local_178,local_5c);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486299a2 FUN_1486299a2 body=241 status=ok
// SIG undefined FUN_1486299a2(void)

void FUN_1486299a2(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x60) = local_1c;
  if (local_20 != 0) {
    *(undefined4 *)(param_1 + 0x68) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148629a94 FUN_148629a94 body=167 status=ok
// SIG undefined FUN_148629a94(void)

void FUN_148629a94(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30 [6];
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
  puVar4 = local_30;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(puVar4 + 4);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 0x30) = *puVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148629b3c FUN_148629b3c body=167 status=ok
// SIG undefined FUN_148629b3c(void)

void FUN_148629b3c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30 [6];
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
  puVar4 = local_30;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(puVar4 + 4);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 0x48) = *puVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148629bea FUN_148629bea body=255 status=ok
// SIG undefined FUN_148629bea(void)

void FUN_148629bea(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x120) = local_1c;
  if (local_20 != 0) {
    *(undefined4 *)(param_1 + 0x124) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148629d62 FUN_148629d62 body=45 status=ok
// SIG undefined FUN_148629d62(void)

longlong FUN_148629d62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x48;
  FUN_145900c90(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148629d9c FUN_148629d9c body=45 status=ok
// SIG undefined FUN_148629d9c(void)

longlong FUN_148629d9c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140d4ec44(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148629dd0 FUN_148629dd0 body=48 status=ok
// SIG undefined FUN_148629dd0(void)

longlong FUN_148629dd0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_140d4ec44(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148629efa FUN_148629efa body=59 status=ok
// SIG undefined FUN_148629efa(void)

undefined8 FUN_148629efa(longlong *param_1)

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



// FUNCTION 148629fa2 FUN_148629fa2 body=57 status=ok
// SIG undefined FUN_148629fa2(void)

void FUN_148629fa2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55848 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55848 =
         FUN_140002ddd(FUN_1464b3933,uVar1,L"CameraModeBehavior_ContinuousCollisionTrace");
  }
  return;
}



// FUNCTION 14862a078 FUN_14862a078 body=59 status=ok
// SIG undefined FUN_14862a078(void)

undefined8 FUN_14862a078(longlong *param_1)

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



// FUNCTION 14862a114 FUN_14862a114 body=57 status=ok
// SIG undefined FUN_14862a114(void)

void FUN_14862a114(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55860 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55860 = FUN_140002ddd(FUN_1464b39c9,uVar1,L"CameraModeBehavior_DefaultFOV");
  }
  return;
}



// FUNCTION 14862a176 FUN_14862a176 body=266 status=ok
// SIG undefined FUN_14862a176(void)

undefined8 FUN_14862a176(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
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
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      lVar1 = param_3 + lVar14;
      lVar2 = param_2 + 0x20 + lVar14;
      *(undefined4 *)(lVar2 + -0x11) = *(undefined4 *)(lVar1 + 0xf);
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar1 + 8);
      FUN_14477b16e(lVar2,lVar1 + 0x20);
      uVar3 = *(undefined4 *)(lVar1 + 0x8e4);
      uVar4 = *(undefined4 *)(lVar1 + 0x8e8);
      uVar5 = *(undefined4 *)(lVar1 + 0x8ec);
      uVar6 = *(undefined4 *)(lVar1 + 0x8f0);
      uVar7 = *(undefined4 *)(lVar1 + 0x8f4);
      uVar8 = *(undefined4 *)(lVar1 + 0x8f8);
      uVar9 = *(undefined4 *)(lVar1 + 0x8fc);
      uVar10 = *(undefined4 *)(lVar1 + 0x900);
      uVar11 = *(undefined4 *)(lVar1 + 0x904);
      uVar12 = *(undefined4 *)(lVar1 + 0x908);
      uVar13 = *(undefined4 *)(lVar1 + 0x90c);
      *(undefined4 *)(lVar2 + 0x8c0) = *(undefined4 *)(lVar1 + 0x8e0);
      *(undefined4 *)(lVar2 + 0x8c4) = uVar3;
      *(undefined4 *)(lVar2 + 0x8c8) = uVar4;
      *(undefined4 *)(lVar2 + 0x8cc) = uVar5;
      *(undefined4 *)(lVar2 + 0x8d0) = uVar6;
      *(undefined4 *)(lVar2 + 0x8d4) = uVar7;
      *(undefined4 *)(lVar2 + 0x8d8) = uVar8;
      *(undefined4 *)(lVar2 + 0x8dc) = uVar9;
      *(undefined4 *)(lVar2 + 0x8e0) = uVar10;
      *(undefined4 *)(lVar2 + 0x8e4) = uVar11;
      *(undefined4 *)(lVar2 + 0x8e8) = uVar12;
      *(undefined4 *)(lVar2 + 0x8ec) = uVar13;
      *(undefined4 *)(lVar2 + 0x8f0) = *(undefined4 *)(lVar1 + 0x910);
      FUN_14477b16e(param_2 + lVar14 + 0x920,param_3 + lVar14 + 0x920);
      *(undefined4 *)(lVar2 + 0x11c0) = *(undefined4 *)(lVar1 + 0x11e0);
      *(undefined1 *)(lVar2 + 0x11c4) = *(undefined1 *)(lVar1 + 0x11e4);
      FUN_14477b16e(param_2 + lVar14 + 0x11f0,param_3 + lVar14 + 0x11f0);
      *(undefined4 *)(lVar2 + 0x1a90) = *(undefined4 *)(lVar1 + 0x1ab0);
      lVar14 = lVar14 + 0x1ac0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14862a2a8 FUN_14862a2a8 body=59 status=ok
// SIG undefined FUN_14862a2a8(void)

undefined8 FUN_14862a2a8(longlong *param_1)

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



// FUNCTION 14862a2f4 FUN_14862a2f4 body=38 status=ok
// SIG undefined FUN_14862a2f4(void)

void FUN_14862a2f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1ac0) == '\x01') {
    FUN_14862a37a(param_2);
    *(undefined1 *)(param_2 + 0x1ac0) = 0;
  }
  return;
}



// FUNCTION 14862a37a FUN_14862a37a body=137 status=ok
// SIG undefined FUN_14862a37a(void)

void FUN_14862a37a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b015940;
  if (param_1[0x354] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x343] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x229] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14862a4ac FUN_14862a4ac body=59 status=ok
// SIG undefined FUN_14862a4ac(void)

undefined8 FUN_14862a4ac(longlong *param_1)

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



// FUNCTION 14862a554 FUN_14862a554 body=55 status=ok
// SIG undefined FUN_14862a554(void)

void FUN_14862a554(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb558a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb558a0 = FUN_140002ddd(FUN_1464b3af5,uVar1,L"CameraModeBehavior_FOV");
  }
  return;
}



// FUNCTION 14862a6a0 FUN_14862a6a0 body=63 status=ok
// SIG undefined FUN_14862a6a0(void)

undefined8 FUN_14862a6a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x18;
    do {
      *(undefined4 *)(param_2 + -9 + lVar1) = *(undefined4 *)(param_3 + -9 + lVar1);
      *(undefined8 *)(param_2 + -0x10 + lVar1) = *(undefined8 *)(param_3 + -0x10 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14862a708 FUN_14862a708 body=59 status=ok
// SIG undefined FUN_14862a708(void)

undefined8 FUN_14862a708(longlong *param_1)

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



// FUNCTION 14862a7bc FUN_14862a7bc body=57 status=ok
// SIG undefined FUN_14862a7bc(void)

void FUN_14862a7bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb558b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb558b8 = FUN_140002ddd(FUN_1464b3b8b,uVar1,L"CameraModeBehavior_Freeze");
  }
  return;
}



// FUNCTION 14862a8be FUN_14862a8be body=59 status=ok
// SIG undefined FUN_14862a8be(void)

undefined8 FUN_14862a8be(longlong *param_1)

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



// FUNCTION 14862aad6 FUN_14862aad6 body=59 status=ok
// SIG undefined FUN_14862aad6(void)

undefined8 FUN_14862aad6(longlong *param_1)

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



// FUNCTION 14862ab22 FUN_14862ab22 body=39 status=ok
// SIG undefined FUN_14862ab22(void)

void FUN_14862ab22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14051f4c4(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 14862abb4 FUN_14862abb4 body=63 status=ok
// SIG undefined FUN_14862abb4(void)

undefined1 FUN_14862abb4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862acc6(param_2,param_3);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return 1;
}



// FUNCTION 14862ac1c FUN_14862ac1c body=59 status=ok
// SIG undefined FUN_14862ac1c(void)

undefined8 FUN_14862ac1c(longlong *param_1)

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



// FUNCTION 14862acc6 FUN_14862acc6 body=323 status=ok
// SIG undefined FUN_14862acc6(void)

longlong FUN_14862acc6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined2 *)(param_1 + 0xac) = *(undefined2 *)(param_2 + 0xac);
  FUN_14093c00e(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar1 = *(undefined4 *)(param_2 + 0xcc);
  uVar2 = *(undefined4 *)(param_2 + 0xd0);
  uVar3 = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  *(undefined4 *)(param_1 + 0xd4) = uVar3;
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  uVar4 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x104);
  uVar2 = *(undefined4 *)(param_2 + 0x108);
  uVar3 = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined2 *)(param_1 + 0x18c) = *(undefined2 *)(param_2 + 0x18c);
  FUN_14093c00e(param_1 + 400,param_2 + 400);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  uVar1 = *(undefined4 *)(param_2 + 0x1ac);
  uVar2 = *(undefined4 *)(param_2 + 0x1b0);
  uVar3 = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  *(undefined4 *)(param_1 + 0x1b0) = uVar2;
  *(undefined4 *)(param_1 + 0x1b4) = uVar3;
  FUN_144a787a6(param_1 + 0x1b8,param_2 + 0x1b8);
  uVar4 = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d0) = uVar4;
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 14862ae14 FUN_14862ae14 body=61 status=ok
// SIG undefined FUN_14862ae14(void)

void FUN_14862ae14(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    *param_1 = &PTR_FUN_14b0159c0;
    FUN_14051f4c4(param_1 + 0x23);
    FUN_14051f4c4(param_1 + 7);
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  return;
}



// FUNCTION 14862ae52 FUN_14862ae52 body=57 status=ok
// SIG undefined FUN_14862ae52(void)

void FUN_14862ae52(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55900 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55900 = FUN_140002ddd(FUN_1464b3d4f,uVar1,L"CameraModeBehavior_InitialRotation");
  }
  return;
}



// FUNCTION 14862af1e FUN_14862af1e body=59 status=ok
// SIG undefined FUN_14862af1e(void)

undefined8 FUN_14862af1e(longlong *param_1)

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



// FUNCTION 14862afba FUN_14862afba body=57 status=ok
// SIG undefined FUN_14862afba(void)

void FUN_14862afba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55918 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55918 = FUN_140002ddd(FUN_1464b3de7,uVar1,L"CameraModeBehavior_InterpCrouch");
  }
  return;
}



// FUNCTION 14862b0ac FUN_14862b0ac body=59 status=ok
// SIG undefined FUN_14862b0ac(void)

undefined8 FUN_14862b0ac(longlong *param_1)

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



// FUNCTION 14862b1a6 FUN_14862b1a6 body=59 status=ok
// SIG undefined FUN_14862b1a6(void)

undefined8 FUN_14862b1a6(longlong *param_1)

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



// FUNCTION 14862b25a FUN_14862b25a body=72 status=ok
// SIG undefined FUN_14862b25a(void)

undefined8 FUN_14862b25a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x18;
    do {
      *(undefined4 *)(param_2 + -9 + lVar1) = *(undefined4 *)(param_3 + -9 + lVar1);
      *(undefined8 *)(param_2 + -0x10 + lVar1) = *(undefined8 *)(param_3 + -0x10 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined1 *)(param_2 + 0x70 + lVar1) = *(undefined1 *)(param_3 + 0x70 + lVar1);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14862b2ca FUN_14862b2ca body=59 status=ok
// SIG undefined FUN_14862b2ca(void)

undefined8 FUN_14862b2ca(longlong *param_1)

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



// FUNCTION 14862b3fc FUN_14862b3fc body=59 status=ok
// SIG undefined FUN_14862b3fc(void)

undefined8 FUN_14862b3fc(longlong *param_1)

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



// FUNCTION 14862b53a FUN_14862b53a body=59 status=ok
// SIG undefined FUN_14862b53a(void)

undefined8 FUN_14862b53a(longlong *param_1)

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



// FUNCTION 14862b6fa FUN_14862b6fa body=63 status=ok
// SIG undefined FUN_14862b6fa(void)

undefined1 FUN_14862b6fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862b80c(param_2,param_3);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 14862b762 FUN_14862b762 body=59 status=ok
// SIG undefined FUN_14862b762(void)

undefined8 FUN_14862b762(longlong *param_1)

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



// FUNCTION 14862b80c FUN_14862b80c body=214 status=ok
// SIG undefined FUN_14862b80c(void)

longlong FUN_14862b80c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined2 *)(param_1 + 0x8c) = *(undefined2 *)(param_2 + 0x8c);
  FUN_14093c00e(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  uVar1 = *(undefined4 *)(param_2 + 0xac);
  uVar2 = *(undefined4 *)(param_2 + 0xb0);
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined2 *)(param_1 + 0x13c) = *(undefined2 *)(param_2 + 0x13c);
  FUN_14093c00e(param_1 + 0x140,param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  uVar1 = *(undefined4 *)(param_2 + 0x15c);
  uVar2 = *(undefined4 *)(param_2 + 0x160);
  uVar3 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = uVar1;
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  *(undefined4 *)(param_1 + 0x164) = uVar3;
  FUN_144a787a6(param_1 + 0x168,param_2 + 0x168);
  return param_1;
}



// FUNCTION 14862b8ec FUN_14862b8ec body=61 status=ok
// SIG undefined FUN_14862b8ec(void)

void FUN_14862b8ec(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x2f) == '\x01') {
    *param_1 = &PTR_FUN_14b0163b0;
    FUN_14051f4c4(param_1 + 0x19);
    FUN_14051f4c4(param_1 + 3);
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  return;
}



// FUNCTION 14862b9f6 FUN_14862b9f6 body=59 status=ok
// SIG undefined FUN_14862b9f6(void)

undefined8 FUN_14862b9f6(longlong *param_1)

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



// FUNCTION 14862ba92 FUN_14862ba92 body=57 status=ok
// SIG undefined FUN_14862ba92(void)

void FUN_14862ba92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb559f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb559f0 = FUN_140002ddd(FUN_1464b41f3,uVar1,L"CameraModeBehavior_RelativeOffset");
  }
  return;
}



// FUNCTION 14862bb68 FUN_14862bb68 body=59 status=ok
// SIG undefined FUN_14862bb68(void)

undefined8 FUN_14862bb68(longlong *param_1)

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



// FUNCTION 14862bc10 FUN_14862bc10 body=57 status=ok
// SIG undefined FUN_14862bc10(void)

void FUN_14862bc10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55a08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55a08 =
         FUN_140002ddd(FUN_1464b4289,uVar1,L"CameraModeBehavior_RestoreControllerRotation");
  }
  return;
}



// FUNCTION 14862bd06 FUN_14862bd06 body=174 status=ok
// SIG undefined FUN_14862bd06(void)

undefined8 FUN_14862bd06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
    do {
      *(undefined4 *)(param_2 + -0x91) = *(undefined4 *)(param_3 + -0x91);
      *(undefined8 *)(param_2 + -0x98) = *(undefined8 *)(param_3 + -0x98);
      uVar1 = *(undefined4 *)(param_3 + -0x84);
      uVar2 = *(undefined4 *)(param_3 + -0x80);
      uVar3 = *(undefined4 *)(param_3 + -0x7c);
      *(undefined4 *)(param_2 + -0x88) = *(undefined4 *)(param_3 + -0x88);
      *(undefined4 *)(param_2 + -0x84) = uVar1;
      *(undefined4 *)(param_2 + -0x80) = uVar2;
      *(undefined4 *)(param_2 + -0x7c) = uVar3;
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined2 *)(param_2 + -4) = *(undefined2 *)(param_3 + -4);
      FUN_14093c00e(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x1c);
      uVar2 = *(undefined4 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
      *(undefined4 *)(param_2 + 0x20) = uVar2;
      *(undefined4 *)(param_2 + 0x24) = uVar3;
      FUN_144a787a6(param_2 + 0x28,param_3 + 0x28);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
      *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(param_3 + 0x40);
      param_3 = param_3 + 0xe8;
      param_2 = param_2 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14862bddc FUN_14862bddc body=59 status=ok
// SIG undefined FUN_14862bddc(void)

undefined8 FUN_14862bddc(longlong *param_1)

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



// FUNCTION 14862be28 FUN_14862be28 body=49 status=ok
// SIG undefined FUN_14862be28(void)

void FUN_14862be28(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    *param_2 = &PTR_FUN_14b016530;
    FUN_14051f4c4(param_2 + 5);
    *(undefined1 *)(param_2 + 0x1d) = 0;
  }
  return;
}



// FUNCTION 14862bf68 FUN_14862bf68 body=59 status=ok
// SIG undefined FUN_14862bf68(void)

undefined8 FUN_14862bf68(longlong *param_1)

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



// FUNCTION 14862c08e FUN_14862c08e body=61 status=ok
// SIG undefined FUN_14862c08e(void)

undefined8 FUN_14862c08e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x18;
    do {
      *(undefined4 *)(param_2 + -9 + lVar1) = *(undefined4 *)(param_3 + -9 + lVar1);
      *(undefined8 *)(param_2 + -0x10 + lVar1) = *(undefined8 *)(param_3 + -0x10 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14862c0f4 FUN_14862c0f4 body=59 status=ok
// SIG undefined FUN_14862c0f4(void)

undefined8 FUN_14862c0f4(longlong *param_1)

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



// FUNCTION 14862c234 FUN_14862c234 body=59 status=ok
// SIG undefined FUN_14862c234(void)

undefined8 FUN_14862c234(longlong *param_1)

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



// FUNCTION 14862c32e FUN_14862c32e body=59 status=ok
// SIG undefined FUN_14862c32e(void)

undefined8 FUN_14862c32e(longlong *param_1)

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



// FUNCTION 14862c3d0 FUN_14862c3d0 body=41 status=ok
// SIG undefined FUN_14862c3d0(void)

void FUN_14862c3d0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x8d0);
  FUN_144894d4c((longlong)param_2 + 0x10);
  return;
}



// FUNCTION 14862c404 FUN_14862c404 body=54 status=ok
// SIG undefined FUN_14862c404(void)

void FUN_14862c404(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x8c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x838) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


