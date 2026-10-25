// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146ee2774 FUN_146ee2774 body=121 status=ok
// SIG undefined FUN_146ee2774(void)

longlong FUN_146ee2774(longlong param_1,longlong param_2)

{
  FUN_144756208();
  FUN_14054c6c4(param_1 + 0x10,param_2 + 0x10);
  FUN_14054c6c4(param_1 + 0x20,param_2 + 0x20);
  FUN_1447cd5a6(param_1 + 0x30,param_2 + 0x30);
  FUN_146ee27ee(param_1 + 0x40,param_2 + 0x40);
  FUN_146ee2848(param_1 + 0x50,param_2 + 0x50);
  FUN_146ee289e(param_1 + 0x60,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  return param_1;
}



// FUNCTION 146ee27ee FUN_146ee27ee body=89 status=ok
// SIG undefined FUN_146ee27ee(void)

undefined8 * FUN_146ee27ee(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146ee2918(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc0);
      }
    }
  }
  return param_1;
}



// FUNCTION 146ee2848 FUN_146ee2848 body=85 status=ok
// SIG undefined FUN_146ee2848(void)

undefined8 * FUN_146ee2848(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146ee298c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x58);
      }
    }
  }
  return param_1;
}



// FUNCTION 146ee289e FUN_146ee289e body=122 status=ok
// SIG undefined FUN_146ee289e(void)

longlong FUN_146ee289e(longlong param_1,longlong param_2)

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
    FUN_146ee29fc(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146ee2918 FUN_146ee2918 body=115 status=ok
// SIG undefined FUN_146ee2918(void)

void FUN_146ee2918(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc0,8);
    iVar2 = (int)(uVar1 / 0xc0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146ee298c FUN_146ee298c body=111 status=ok
// SIG undefined FUN_146ee298c(void)

void FUN_146ee298c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146ee29fc FUN_146ee29fc body=121 status=ok
// SIG undefined FUN_146ee29fc(void)

undefined8 * FUN_146ee29fc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146ee26f2(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14488f93c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x60);
    }
  }
  return param_1;
}



// FUNCTION 146ee2a86 FUN_146ee2a86 body=44 status=ok
// SIG undefined FUN_146ee2a86(void)

void FUN_146ee2a86(undefined8 param_1,longlong *param_2)

{
  FUN_145af522b(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ee2ac8 FUN_146ee2ac8 body=54 status=ok
// SIG undefined FUN_146ee2ac8(void)

undefined1 FUN_146ee2ac8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146ee2bc2(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 146ee2b26 FUN_146ee2b26 body=59 status=ok
// SIG undefined FUN_146ee2b26(void)

undefined8 FUN_146ee2b26(longlong *param_1)

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



// FUNCTION 146ee2bc2 FUN_146ee2bc2 body=95 status=ok
// SIG undefined FUN_146ee2bc2(void)

undefined8 * FUN_146ee2bc2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145af522b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146ee2c22(param_1,iVar1);
      FUN_146ee2c97(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146ee2c22 FUN_146ee2c22 body=117 status=ok
// SIG undefined FUN_146ee2c22(void)

void FUN_146ee2c22(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    iVar2 = (int)(uVar1 / 0xb8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146ee2c97 FUN_146ee2c97 body=60 status=ok
// SIG undefined FUN_146ee2c97(void)

void FUN_146ee2c97(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146ee2cd4(param_1,param_2);
    param_1 = param_1 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return;
}



// FUNCTION 146ee2cd4 FUN_146ee2cd4 body=520 status=ok
// SIG undefined FUN_146ee2cd4(void)

undefined8 * FUN_146ee2cd4(undefined8 *param_1,undefined8 *param_2)

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
    FUN_144756262(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x60);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447cd5fa(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_146ee2918(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 0xc0);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_146ee298c(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 0x58);
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  FUN_146ee289e(param_1 + 0xc,param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  return param_1;
}



// FUNCTION 146ee2ede FUN_146ee2ede body=50 status=ok
// SIG undefined FUN_146ee2ede(void)

void FUN_146ee2ede(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_145af522b(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 146ee2f10 FUN_146ee2f10 body=38 status=ok
// SIG undefined FUN_146ee2f10(void)

undefined8 FUN_146ee2f10(undefined8 param_1,int param_2)

{
  FUN_1412243be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee2f36 FUN_146ee2f36 body=38 status=ok
// SIG undefined FUN_146ee2f36(void)

undefined8 FUN_146ee2f36(undefined8 param_1,int param_2)

{
  FUN_141224894();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee2f9e FUN_146ee2f9e body=99 status=ok
// SIG undefined FUN_146ee2f9e(void)

void FUN_146ee2f9e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
    FUN_140081195(_Dst,param_3);
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_2 + param_3);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146ee3008 FUN_146ee3008 body=104 status=ok
// SIG undefined FUN_146ee3008(void)

void FUN_146ee3008(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_140125ed4((longlong *)(param_3 + 8),iVar1);
  }
  lVar3 = (longlong)param_2;
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar1 * 8) =
       *(undefined8 *)(lVar2 + lVar3 * 8);
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  FUN_140081130(param_1 + 8,lVar3,1);
  return;
}



// FUNCTION 146ee3070 FUN_146ee3070 body=59 status=ok
// SIG undefined FUN_146ee3070(void)

longlong FUN_146ee3070(longlong param_1,int param_2)

{
  FUN_140081195(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee30ac FUN_146ee30ac body=80 status=ok
// SIG undefined FUN_146ee30ac(void)

longlong * FUN_146ee30ac(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14605dbdd(*param_1,(int)param_1[1]);
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



// FUNCTION 146ee30fc FUN_146ee30fc body=292 status=ok
// SIG undefined FUN_146ee30fc(void)

longlong * FUN_146ee30fc(longlong *param_1,longlong *param_2)

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



// FUNCTION 146ee3222 FUN_146ee3222 body=504 status=ok
// SIG undefined FUN_146ee3222(void)

void FUN_146ee3222(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  iVar3 = *(int *)(lVar1 + 0x10);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_2,param_3);
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  lVar1 = param_1[1];
  iVar3 = *(int *)(lVar1 + 0x10);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_2,param_3);
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  lVar1 = param_1[2];
  iVar3 = *(int *)(lVar1 + 0x10);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_2,param_3);
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  lVar1 = param_1[3];
  iVar3 = *(int *)(lVar1 + 0x10);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_2,param_3);
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  lVar1 = param_1[6];
  iVar3 = *(int *)(lVar1 + 0x10);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_2,param_3);
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  lVar1 = param_1[4];
  iVar3 = *(int *)(lVar1 + 0x10);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_2,param_3);
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  lVar1 = param_1[5];
  iVar3 = *(int *)(lVar1 + 0x10);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_2,param_3);
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  lVar1 = param_1[7];
  iVar3 = *(int *)(lVar1 + 0x10);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_2,param_3);
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  lVar1 = param_1[8];
  iVar3 = *(int *)(lVar1 + 0x10);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_2,param_3);
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}



// FUNCTION 146ee341a FUN_146ee341a body=38 status=ok
// SIG undefined FUN_146ee341a(void)

undefined8 FUN_146ee341a(undefined8 param_1,int param_2)

{
  FUN_142a0f4d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee344c FUN_146ee344c body=62 status=ok
// SIG undefined FUN_146ee344c(void)

undefined8 * FUN_146ee344c(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *puVar1 = &PTR_FUN_149f6b0a0;
  puVar1[2] = param_1;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146ee348a FUN_146ee348a body=69 status=ok
// SIG undefined FUN_146ee348a(void)

undefined8 * FUN_146ee348a(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *puVar1 = &PTR_FUN_149f6b120;
  puVar1[2] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146ee34d0 FUN_146ee34d0 body=29 status=ok
// SIG undefined FUN_146ee34d0(void)

undefined8 FUN_146ee34d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee3524 FUN_146ee3524 body=57 status=ok
// SIG undefined FUN_146ee3524(void)

undefined8 * FUN_146ee3524(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f6b120;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee356c FUN_146ee356c body=105 status=ok
// SIG undefined FUN_146ee356c(void)

void FUN_146ee356c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(undefined4 *)(**(longlong **)(lVar3 + lVar5) + 0x18);
      iVar2 = *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
        FUN_1446f48e2((longlong *)(param_1 + 0x18),iVar2);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 4) = uVar1;
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  return;
}



// FUNCTION 146ee35d8 FUN_146ee35d8 body=79 status=ok
// SIG undefined FUN_146ee35d8(void)

void FUN_146ee35d8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_10 = *(undefined4 *)(param_1 + 0x20);
  FUN_146dfb736(*(undefined8 *)(param_1 + 0x10),&local_18,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee362c FUN_146ee362c body=86 status=ok
// SIG undefined FUN_146ee362c(void)

void FUN_146ee362c(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_4 - param_3 != 0 && param_3 <= param_4) {
    local_18 = (longlong)param_3 * 4 + *(longlong *)(param_1 + 0x18);
    local_10 = param_4 - param_3;
    FUN_146dfb790(*(undefined8 *)(param_1 + 0x10),&local_18,param_2);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee3684 FUN_146ee3684 body=79 status=ok
// SIG undefined FUN_146ee3684(void)

void FUN_146ee3684(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_10 = *(undefined4 *)(param_1 + 0x20);
  FUN_146dfb790(*(undefined8 *)(param_1 + 0x10),&local_18,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee36d4 FUN_146ee36d4 body=87 status=ok
// SIG undefined FUN_146ee36d4(void)

void FUN_146ee36d4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_10 = *(undefined4 *)(param_1 + 0x20);
  local_28 = param_4;
  FUN_146dfb7be(*(undefined8 *)(param_1 + 0x10),&local_18,param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee3730 FUN_146ee3730 body=147 status=ok
// SIG undefined FUN_146ee3730(void)

void FUN_146ee3730(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ee37c4 FUN_146ee37c4 body=548 status=ok
// SIG undefined FUN_146ee37c4(void)

void FUN_146ee37c4(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_80 [24];
  longlong *local_68;
  longlong *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar4 = (uint)((ulonglong)param_3 >> 0x10);
    uVar8 = (uint)param_3 & 0xffff;
    lVar7 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x98);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar8) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar9 * 0x14) == param_3)
        goto LAB_146ee385c;
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar9 * 0x14 + 0xc);
      } while (iVar9 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_146ee385c:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c99748c) && (FUN_144b3d300(&DAT_14c99748c), DAT_14c99748c == -1)) {
    DAT_14c997484 = 0;
    _Init_thread_footer(&DAT_14c99748c);
  }
  uVar6 = FUN_1401f66f6(param_1,param_3);
  puVar10 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar5 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar10 = &DAT_14c997484;
    if (cVar5 == '\0') {
      puVar10 = param_4;
    }
  }
  uVar3 = *puVar10;
  local_58 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_58 + 1) = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  *local_58 = (longlong)&PTR_LAB_149f68a70;
  local_98 = *(undefined1 *)(param_4 + 1);
  FUN_146ee39ea(local_80,&local_58,uVar6,uVar3);
  local_50 = &local_90;
  local_90 = param_2;
  local_88 = param_3;
  local_48 = local_80;
  FUN_1406cd0ac(param_1 + 8,local_3c,&local_50,0);
  if (local_68 != (longlong *)0x0) {
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x48))(local_58,1);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ee39ea FUN_146ee39ea body=138 status=ok
// SIG undefined FUN_146ee39ea(void)

undefined1 *
FUN_146ee39ea(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0xf;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f6ac60;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 146ee3a8e FUN_146ee3a8e body=29 status=ok
// SIG undefined FUN_146ee3a8e(void)

undefined8 FUN_146ee3a8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee3aac FUN_146ee3aac body=364 status=ok
// SIG undefined FUN_146ee3aac(void)

undefined4 * FUN_146ee3aac(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402b4836(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  *local_38 = *(undefined8 *)*param_3;
  local_38[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_38 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_38 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar2 = *local_38;
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = 0;
  cVar3 = FUN_1402b4778(param_1,uVar8,local_38);
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1402b4c92(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee3c1a FUN_146ee3c1a body=138 status=ok
// SIG undefined FUN_146ee3c1a(void)

void FUN_146ee3c1a(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 146ee3ca4 FUN_146ee3ca4 body=132 status=ok
// SIG undefined FUN_146ee3ca4(void)

void FUN_146ee3ca4(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x14) == param_2) {
          FUN_146ee3d28(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146ee3d28 FUN_146ee3d28 body=87 status=ok
// SIG undefined FUN_146ee3d28(void)

void FUN_146ee3d28(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x14;
  lVar6 = (longlong)*(int *)(lVar1 + 0x10);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x14 + 0xc);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0xc);
  FUN_140b20aac();
  return;
}



// FUNCTION 146ee3d80 FUN_146ee3d80 body=421 status=ok
// SIG undefined FUN_146ee3d80(void)

undefined4 * FUN_146ee3d80(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146ee3f26(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  *(undefined4 *)local_40 = *puVar1;
  *(undefined4 *)((longlong)local_40 + 4) = uVar5;
  *(undefined4 *)(local_40 + 1) = uVar6;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar7;
  local_40[2] = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = *local_40;
  uVar4 = local_40[1];
  uVar9 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar14 = (uint)uVar3 & 0xffff;
  uVar14 = ((uint)uVar3 << 0x10 | uVar14) + (int)((ulonglong)uVar3 >> 0x20) +
           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar14 >> 4);
  uVar9 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar11 = (uint)uVar4 & 0xffff;
  uVar14 = (uVar14 >> 2) +
           ((uint)uVar4 << 0x10 | uVar11) + (int)((ulonglong)uVar4 >> 0x20) +
           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar11 >> 4) + uVar14 * 0x40 + 0x9e3779b9 ^ uVar14;
  cVar8 = FUN_146ee400c(param_1,uVar14,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar8 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar12 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= *(int *)(param_1 + 0x48))) {
      uVar14 = *(int *)(param_1 + 0x48) - 1U & uVar14;
      *(uint *)((longlong)local_40 + 0x1c) = uVar14;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar14) * 4);
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar14) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar12;
      FUN_146ee4110(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee3f26 FUN_146ee3f26 body=229 status=ok
// SIG undefined FUN_146ee3f26(void)

int * FUN_146ee3f26(longlong *param_1,int *param_2)

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



// FUNCTION 146ee400c FUN_146ee400c body=145 status=ok
// SIG undefined FUN_146ee400c(void)

undefined8 FUN_146ee400c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x20;
        puVar1 = (undefined4 *)(lVar2 + lVar7);
        if ((*(longlong *)(lVar2 + lVar7) == *param_3) &&
           (*(longlong *)(lVar2 + 8 + lVar7) == param_3[1])) {
          lVar2 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar4;
          FUN_146ee409e((int)lVar2,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = puVar1[6];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ee409e FUN_146ee409e body=114 status=ok
// SIG undefined FUN_146ee409e(void)

void FUN_146ee409e(longlong *param_1,int param_2)

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



// FUNCTION 146ee4110 FUN_146ee4110 body=581 status=ok
// SIG undefined FUN_146ee4110(void)

void FUN_146ee4110(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
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
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
      iVar6 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar8 = (longlong)iVar6 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar8);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar8);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        uVar9 = ((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar12 = (uint)uVar5 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar5 << 0x10 | uVar12) + (int)((ulonglong)uVar5 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4) + uVar9 * 0x40 +
                       (uVar9 >> 2) + 0x9e3779b9 ^ uVar9) & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar3 + 0x1c + lVar8) = iVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar8) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
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



// FUNCTION 146ee4356 FUN_146ee4356 body=131 status=ok
// SIG undefined FUN_146ee4356(void)

longlong FUN_146ee4356(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146ee43d9();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_146ee4110(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146ee43d9 FUN_146ee43d9 body=695 status=ok
// SIG undefined FUN_146ee43d9(void)

longlong * FUN_146ee43d9(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_68 = param_2 + 2;
    local_70 = (undefined8 *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_88 = local_60;
    uVar7 = local_88;
    local_80 = local_58;
    local_7c = local_54;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar9 = local_88._4_4_;
      local_88 = uVar7;
      do {
        lVar8 = *local_a0;
        (**(code **)(*param_1 + 0x160))(param_1,lVar8 + (longlong)iVar9 * 0x20);
        lVar8 = lVar8 + (longlong)iVar9 * 0x20;
        (**(code **)(*param_1 + 0x160))(param_1,lVar8 + 8);
        FUN_140d7029c(*(undefined8 *)(lVar8 + 0x10),param_1);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar9 = local_88._4_4_;
        uVar7 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_146ed450a(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar7 = local_88;
    if (0 < (int)local_70) {
      iVar9 = 0;
      do {
        FUN_146ee3f26(param_2,&local_a0);
        puVar5 = local_98;
        puVar3 = local_98 + 1;
        *local_98 = 0;
        local_98[1] = 0;
        local_98[2] = 0;
        *(undefined4 *)(local_98 + 3) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1,local_98);
        (**(code **)(*param_1 + 0x160))(param_1,puVar3);
        FUN_140d7029c(puVar5[2],param_1);
        iVar9 = iVar9 + 1;
        uVar7 = local_88;
      } while (iVar9 < (int)local_70);
    }
  }
  local_88 = uVar7;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ee4692 FUN_146ee4692 body=548 status=ok
// SIG undefined FUN_146ee4692(void)

void FUN_146ee4692(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_80 [24];
  longlong *local_68;
  longlong *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar4 = (uint)((ulonglong)param_3 >> 0x10);
    uVar8 = (uint)param_3 & 0xffff;
    lVar7 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x98);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar8) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar9 * 0x14) == param_3)
        goto LAB_146ee472a;
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar9 * 0x14 + 0xc);
      } while (iVar9 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_146ee472a:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c997498) && (FUN_144b3d300(&DAT_14c997498), DAT_14c997498 == -1)) {
    DAT_14c997490 = 0;
    _Init_thread_footer(&DAT_14c997498);
  }
  uVar6 = FUN_1401f66f6(param_1,param_3);
  puVar10 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar5 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar10 = &DAT_14c997490;
    if (cVar5 == '\0') {
      puVar10 = param_4;
    }
  }
  uVar3 = *puVar10;
  local_58 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_58 + 1) = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  *local_58 = (longlong)&PTR_LAB_149f62610;
  local_98 = *(undefined1 *)(param_4 + 1);
  FUN_146ee48b8(local_80,&local_58,uVar6,uVar3);
  local_50 = &local_90;
  local_90 = param_2;
  local_88 = param_3;
  local_48 = local_80;
  FUN_1406cd0ac(param_1 + 8,local_3c,&local_50,0);
  if (local_68 != (longlong *)0x0) {
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x48))(local_58,1);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ee48b8 FUN_146ee48b8 body=138 status=ok
// SIG undefined FUN_146ee48b8(void)

undefined1 *
FUN_146ee48b8(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x2c;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f6aca0;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 146ee495c FUN_146ee495c body=29 status=ok
// SIG undefined FUN_146ee495c(void)

undefined8 FUN_146ee495c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee497a FUN_146ee497a body=42 status=ok
// SIG undefined FUN_146ee497a(void)

longlong FUN_146ee497a(longlong param_1,int param_2)

{
  FUN_145847134(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee49de FUN_146ee49de body=59 status=ok
// SIG undefined FUN_146ee49de(void)

longlong FUN_146ee49de(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 200;
  do {
    FUN_145847134(param_1 + lVar1);
    lVar1 = lVar1 + -0x60;
  } while (lVar1 != -0x58);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee4aa4 FUN_146ee4aa4 body=251 status=ok
// SIG undefined FUN_146ee4aa4(void)

undefined8 * FUN_146ee4aa4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f6ad80;
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  param_1[1] = puVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  param_1[3] = puVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  param_1[5] = puVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = param_1 + 1;
  param_1[8] = param_1 + 3;
  param_1[9] = param_1 + 5;
  return param_1;
}



// FUNCTION 146ee4ba0 FUN_146ee4ba0 body=81 status=ok
// SIG undefined FUN_146ee4ba0(void)

longlong FUN_146ee4ba0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x30;
  do {
    lVar1 = *(longlong *)(param_1 + -8 + lVar2);
    if (lVar1 != 0) {
      FUN_145847134(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ee4c46 FUN_146ee4c46 body=115 status=ok
// SIG undefined FUN_146ee4c46(void)

void FUN_146ee4c46(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_1;
    lVar5 = (longlong)iVar1 * 8;
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) == *param_2) {
        if ((uint)lVar4 == 0xffffffff) {
          return;
        }
        memmove((void *)(lVar2 + (lVar3 >> 0x20) * 8),(void *)(lVar2 + (lVar3 >> 0x20) * 8 + 8),
                (longlong)(int)(~(uint)lVar4 + iVar1) << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 146ee4cba FUN_146ee4cba body=132 status=ok
// SIG undefined FUN_146ee4cba(void)

void FUN_146ee4cba(longlong param_1,int param_2)

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



// FUNCTION 146ee4d40 FUN_146ee4d40 body=95 status=ok
// SIG undefined FUN_146ee4d40(void)

void FUN_146ee4d40(longlong param_1,uint param_2)

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



// FUNCTION 146ee4da0 FUN_146ee4da0 body=86 status=ok
// SIG undefined FUN_146ee4da0(void)

void FUN_146ee4da0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146ee4df6 FUN_146ee4df6 body=132 status=ok
// SIG undefined FUN_146ee4df6(void)

void FUN_146ee4df6(longlong param_1,int param_2)

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



// FUNCTION 146ee4e7c FUN_146ee4e7c body=658 status=ok
// SIG undefined FUN_146ee4e7c(void)

longlong *
FUN_146ee4e7c(longlong param_1,longlong *param_2,uint param_3,undefined4 *param_4,longlong *param_5)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined1 local_51;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  lVar3 = *param_5;
  local_80 = (ulonglong)*(int *)(lVar3 + 0x18);
  iVar7 = *(int *)(lVar3 + 0x18) + param_3;
  *(int *)(lVar3 + 0x18) = iVar7;
  iVar6 = *(int *)(lVar3 + 0x10);
  if ((longlong)iVar6 != 0) {
    lVar3 = *(longlong *)(lVar3 + 8);
    lVar11 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar11);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,iVar7);
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar6 * 8 != lVar11);
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(uint *)(param_2 + 1) = param_3;
  FUN_146ee5110(param_2,0);
  local_78 = (longlong)*(int *)(param_1 + 0x6e8);
  iVar7 = *(int *)(param_1 + 0x6e8) + param_3;
  *(int *)(param_1 + 0x6e8) = iVar7;
  iVar6 = *(int *)(param_1 + 0x6e0);
  if ((longlong)iVar6 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x6d8);
    lVar11 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar11);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,iVar7);
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar6 * 8 != lVar11);
  }
  lVar3 = local_78;
  if (0 < (int)param_3) {
    local_60 = (ulonglong)param_3;
    local_68 = local_78 * 8;
    local_70 = local_80 & 0xffffffff;
    uVar10 = 0;
    puVar8 = param_4;
    do {
      local_51 = 0;
      local_88 = &local_51;
      FUN_146dd9bc2(&local_50,*param_5,(int)local_70 + (int)uVar10,(int)uVar10 + (int)lVar3);
      uVar2 = *(uint *)(param_1 + 0x710);
      iVar6 = uVar2 + 1;
      *(int *)(param_1 + 0x710) = iVar6;
      if (iVar6 != 0) {
        *(ulonglong *)(*(longlong *)(*local_50 + 0x260) + (longlong)(int)local_50[1] * 8) =
             (ulonglong)uVar2 << 0x20 | 0xffffffff;
      }
      puVar1 = (uint *)(*(longlong *)(*local_50 + 0x248) + (longlong)(int)local_50[1] * 4);
      *puVar1 = *puVar1 | *(uint *)(*param_5 + 0x74);
      *(longlong **)(*param_2 + uVar10 * 8) = local_50;
      plVar4 = *(longlong **)(*param_2 + uVar10 * 8);
      puVar9 = puVar8;
      if (param_4 == (undefined4 *)0x0) {
        puVar9 = &local_58;
        (**(code **)(**(longlong **)(param_1 + 0x708) + 8))(*(longlong **)(param_1 + 0x708),puVar9);
      }
      *(undefined4 *)(*(longlong *)(*plVar4 + 0x80) + (longlong)(int)plVar4[1] * 4) = *puVar9;
      lVar5 = *(longlong *)(param_1 + 0x6f8) + local_68;
      lVar11 = *(longlong *)(lVar5 + uVar10 * 8);
      *(longlong **)(lVar5 + uVar10 * 8) = local_50;
      local_50 = (longlong *)0x0;
      if (lVar11 != 0) {
        FUN_1400811d6(lVar11);
        FUN_1400020a8(lVar11);
      }
      plVar4 = local_50;
      *(undefined1 *)(uVar10 + *(longlong *)(*param_5 + 0xe0) + local_80) = 1;
      if (local_50 != (longlong *)0x0) {
        FUN_1400811d6(local_50);
        FUN_1400020a8(plVar4);
      }
      uVar10 = uVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (local_60 != uVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ee5110 FUN_146ee5110 body=132 status=ok
// SIG undefined FUN_146ee5110(void)

void FUN_146ee5110(longlong param_1,int param_2)

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



// FUNCTION 146ee5196 FUN_146ee5196 body=132 status=ok
// SIG undefined FUN_146ee5196(void)

void FUN_146ee5196(longlong param_1,int param_2)

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



// FUNCTION 146ee521c FUN_146ee521c body=107 status=ok
// SIG undefined FUN_146ee521c(void)

void FUN_146ee521c(longlong *param_1,longlong *param_2)

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
    FUN_140711e5c(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 146ee5288 FUN_146ee5288 body=107 status=ok
// SIG undefined FUN_146ee5288(void)

void FUN_146ee5288(longlong *param_1,longlong *param_2)

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
    FUN_14172f9f2(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 146ee52f4 FUN_146ee52f4 body=107 status=ok
// SIG undefined FUN_146ee52f4(void)

void FUN_146ee52f4(longlong *param_1,longlong *param_2)

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
    FUN_146ee4cba(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 146ee5360 FUN_146ee5360 body=147 status=ok
// SIG undefined FUN_146ee5360(void)

void FUN_146ee5360(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ee53f4 FUN_146ee53f4 body=132 status=ok
// SIG undefined FUN_146ee53f4(void)

void FUN_146ee53f4(longlong param_1,int param_2)

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



// FUNCTION 146ee5479 FUN_146ee5479 body=64 status=ok
// SIG undefined FUN_146ee5479(void)

void FUN_146ee5479(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 0x12) = 4;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return;
}



// FUNCTION 146ee54ba FUN_146ee54ba body=146 status=ok
// SIG undefined FUN_146ee54ba(void)

void FUN_146ee54ba(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ee554e FUN_146ee554e body=143 status=ok
// SIG undefined FUN_146ee554e(void)

void FUN_146ee554e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ee55de FUN_146ee55de body=60 status=ok
// SIG undefined FUN_146ee55de(void)

void FUN_146ee55de(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3ff0000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}



// FUNCTION 146ee561a FUN_146ee561a body=147 status=ok
// SIG undefined FUN_146ee561a(void)

void FUN_146ee561a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ee56ae FUN_146ee56ae body=277 status=ok
// SIG undefined FUN_146ee56ae(void)

void FUN_146ee56ae(longlong param_1,longlong param_2,longlong param_3,int param_4,uint *param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(int *)(param_2 + 0x998) != 0) {
    uVar1 = *param_5;
    lVar6 = (longlong)param_4;
    plVar4 = (longlong *)(*(longlong *)(param_3 + 0x100) + lVar6 * 8);
    if (((plVar4 == (longlong *)0x0 || (uVar1 >> 0x10 & 1) == 0) || (lVar5 = *plVar4, lVar5 == 0))
       || (*(int *)(lVar5 + 0x1c) != 0xb)) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x48);
    }
    plVar4 = (longlong *)(lVar6 * 8 + *(longlong *)(param_3 + 0x110));
    if (((plVar4 == (longlong *)0x0 || (uVar1 >> 0x11 & 1) == 0) || (lVar2 = *plVar4, lVar2 == 0))
       || (*(int *)(lVar2 + 0x1c) != 0xb)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x48);
    }
    if (lVar5 != 0) {
      lVar2 = lVar6 * 0x60 + *(longlong *)(param_3 + 0xe0);
      if ((uVar1 >> 0xe & 1) == 0) {
        lVar2 = 0;
      }
      lVar6 = lVar6 * 0x48 + *(longlong *)(param_3 + 0xf0);
      if (-1 < (short)uVar1) {
        lVar6 = 0;
      }
      if (lVar6 != 0 && lVar2 != 0) {
        uVar3 = FUN_146cb4a4a(*(longlong *)(param_2 + 0x9c8) + 0xb30,lVar2,lVar6,lVar5,uVar3);
        *(undefined8 *)(param_1 + 0x48) = uVar3;
      }
    }
  }
  return;
}



// FUNCTION 146ee57c4 FUN_146ee57c4 body=214 status=ok
// SIG undefined FUN_146ee57c4(void)

void FUN_146ee57c4(longlong param_1,undefined8 param_2,longlong param_3,int param_4,uint *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
    uVar1 = *param_5;
    lVar4 = (longlong)param_4;
    puVar6 = (undefined8 *)(lVar4 * 0x60 + *(longlong *)(param_3 + 0xe0));
    if (puVar6 != (undefined8 *)0x0 && (uVar1 >> 0xe & 1) != 0) {
      puVar7 = (undefined8 *)(lVar3 + 0x18);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar1 = *param_5;
    }
    puVar6 = (undefined8 *)(lVar4 * 0x48 + *(longlong *)(param_3 + 0xf0));
    if (puVar6 != (undefined8 *)0x0 && (short)uVar1 < 0) {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x78);
      for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar1 = *param_5;
    }
    plVar5 = (longlong *)(lVar4 * 8 + *(longlong *)(param_3 + 0x110));
    if ((((plVar5 != (longlong *)0x0 && (uVar1 >> 0x11 & 1) != 0) && (lVar3 = *plVar5, lVar3 != 0))
        && (*(int *)(lVar3 + 0x1c) == 0xb)) && (*(longlong *)(lVar3 + 0x48) != 0)) {
      *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x110) = *(longlong *)(lVar3 + 0x48);
      *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x11a) = 1;
    }
  }
  return;
}



// FUNCTION 146ee589a FUN_146ee589a body=219 status=ok
// SIG undefined FUN_146ee589a(void)

void FUN_146ee589a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_146ee5976(param_2,param_1);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) && (*(char *)(lVar1 + 0x118) == '\0')) {
    uVar2 = *(undefined8 *)(lVar1 + 0xc0);
    uVar3 = *(undefined8 *)(lVar1 + 200);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar1 + 0xd0);
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    *(undefined8 *)(param_2 + 0x20) = uVar3;
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(lVar1 + 0xd8);
    uVar3 = *(undefined8 *)(lVar1 + 0xe0);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(lVar1 + 0xe8);
    *(undefined8 *)(param_2 + 0x30) = uVar2;
    *(undefined8 *)(param_2 + 0x38) = uVar3;
    lVar1 = *(longlong *)(param_1 + 0x48);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar1 + 0x88);
    uVar2 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(param_2 + 0x50) = uVar2;
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0xb0);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x110);
    lVar1 = *(longlong *)(param_1 + 0x48);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(lVar1 + 0xa0);
    uVar2 = *(undefined8 *)(lVar1 + 0x98);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)(param_2 + 0x68) = uVar2;
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0xa8);
  }
  return;
}



// FUNCTION 146ee5976 FUN_146ee5976 body=147 status=ok
// SIG undefined FUN_146ee5976(void)

void FUN_146ee5976(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  plVar4 = *(longlong **)(param_2 + 0x28);
  if (plVar4 == (longlong *)0x0) {
    param_1[1] = lVar3;
    plVar5 = (longlong *)param_1[2];
    if (plVar5 == (longlong *)0x0) goto LAB_146ee59fc;
    param_1[2] = 0;
LAB_146ee59c4:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146ee59fc;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[1] = lVar3;
    plVar5 = (longlong *)param_1[2];
    if (plVar4 != plVar5) {
      param_1[2] = (longlong)plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_146ee59fc;
      goto LAB_146ee59c4;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146ee59fc;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_146ee59fc:
  *param_1 = param_2;
  return;
}



// FUNCTION 146ee5a0a FUN_146ee5a0a body=181 status=ok
// SIG undefined FUN_146ee5a0a(void)

undefined8 *
FUN_146ee5a0a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_146ee5ac0();
  *param_1 = &PTR_LAB_149f6b7f0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc | 2;
  puVar1 = param_1 + 9;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  puVar1 = param_1 + 0x14;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = *param_4;
    param_4 = param_4 + 1;
    puVar1 = puVar1 + 1;
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x26) = 1;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_149f6d940;
  puVar1[1] = 0xffffffff;
  param_1[0x2b] = puVar1;
  return param_1;
}



// FUNCTION 146ee5ac0 FUN_146ee5ac0 body=263 status=ok
// SIG undefined FUN_146ee5ac0(void)

undefined8 * FUN_146ee5ac0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_14001cc68(0xb0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f6d2e0;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0xa0);
  *(undefined4 *)(plVar3 + 6) = 0xffffffff;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  *(undefined4 *)(plVar3 + 0xc) = 0xffffffff;
  *(undefined4 *)(plVar3 + 0x11) = 0xffffffff;
  *(undefined4 *)(plVar3 + 0x15) = 0xffffffff;
  local_38 = plVar1;
  local_30 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_140216c60(param_1,0xc,param_2,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_140216c60(param_1,0xc,param_2,&local_38);
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
  *param_1 = &PTR_LAB_149f6d2c0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee5bc8 FUN_146ee5bc8 body=365 status=ok
// SIG undefined FUN_146ee5bc8(void)

void FUN_146ee5bc8(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined4 **local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0x10000;
  uVar6 = FUN_14001cc68(0x1d0,0x10);
  FUN_14061844e(uVar6,&local_48);
  puVar1 = *(undefined8 **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = uVar6;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    uVar6 = *(undefined8 *)(param_1 + 0x128);
  }
  FUN_144820fca(uVar6,param_1);
  *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x70) = *(undefined8 *)(param_1 + 0xa0);
  lVar2 = *(longlong *)(param_1 + 0x128);
  uVar3 = *(undefined4 *)(param_1 + 0xd4);
  uVar4 = *(undefined4 *)(param_1 + 0xd8);
  uVar5 = *(undefined4 *)(param_1 + 0xdc);
  uVar6 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(lVar2 + 0x24) = uVar3;
  *(undefined4 *)(lVar2 + 0x28) = uVar4;
  *(undefined4 *)(lVar2 + 0x2c) = uVar5;
  *(undefined8 *)(lVar2 + 0x30) = uVar6;
  *(byte *)(lVar2 + 0x94) = *(byte *)(lVar2 + 0x94) | 1;
  if ((*(longlong *)(lVar2 + 0x10) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 8), lVar2 != 0)) {
    FUN_144a78688(lVar2 + 0x70);
  }
  lVar2 = *(longlong *)(param_1 + 0x128);
  local_48 = *(undefined4 *)(param_1 + 0xb0);
  uStack_44 = *(undefined4 *)(param_1 + 0xb4);
  uStack_40 = *(undefined4 *)(param_1 + 0xb8);
  uStack_3c = *(undefined4 *)(param_1 + 0xbc);
  local_38 = *(undefined4 *)(param_1 + 0xc0);
  uStack_34 = *(undefined4 *)(param_1 + 0xc4);
  uStack_30 = *(undefined4 *)(param_1 + 200);
  uStack_2c = *(undefined4 *)(param_1 + 0xcc);
  local_58 = &local_28;
  local_28 = &local_48;
  FUN_144a05d04(lVar2 + 0x20,1,lVar2 + 0x94,*(undefined8 *)(lVar2 + 0x10));
  *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x94) = 0;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  *plVar7 = param_1;
  *(undefined4 *)(plVar7 + 1) = 0xffffffff;
  *(undefined8 *)((longlong)plVar7 + 0xc) = 0;
  lVar2 = *(longlong *)(param_1 + 0x120);
  *(longlong **)(param_1 + 0x120) = plVar7;
  if (lVar2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee5d36 FUN_146ee5d36 body=334 status=ok
// SIG undefined FUN_146ee5d36(void)

void FUN_146ee5d36(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  void *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    local_48 = (void *)0x0;
    iVar5 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    local_50 = param_1;
    uStack_40._0_4_ = iVar5;
    if ((longlong)iVar5 == 0) {
      uVar6 = 0;
      iVar5 = 0;
    }
    else {
      FUN_1448634b6(&local_48,iVar5,0);
      memcpy(local_48,pvVar2,(longlong)iVar5 << 3);
      iVar5 = (int)uStack_40;
      uVar6 = uStack_40._4_4_;
    }
    pvVar2 = local_48;
    lVar3 = local_50;
    puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    local_48 = (void *)0x0;
    uStack_40 = 0;
    *(undefined2 *)(puVar4 + 1) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined2 *)(puVar4 + 8) = 1;
    *puVar4 = &PTR_FUN_149f45dc0;
    puVar4[10] = FUN_142a25344;
    puVar4[0xc] = 0;
    puVar4[0xe] = &PTR_LAB_149f6d300;
    puVar4[0xf] = lVar3;
    puVar4[0x10] = pvVar2;
    *(int *)(puVar4 + 0x11) = iVar5;
    *(undefined4 *)((longlong)puVar4 + 0x8c) = uVar6;
    puVar4[0x12] = 0;
    puVar4[0x14] = 0;
    *(undefined1 *)(puVar4 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar4);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee5e86 FUN_146ee5e86 body=351 status=ok
// SIG undefined FUN_146ee5e86(void)

void FUN_146ee5e86(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(int *)(param_2 + 8) != *(int *)(param_2 + 0x34))) {
    local_80 = 0;
    local_78 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_74 = 0xffffffff00000080;
    local_6c = 0;
    local_60 = 0;
    local_58 = 0;
    local_a8 = param_1;
    FUN_146eed1be(&local_a0);
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar3 = (undefined8 *)FUN_14001cc68(0x60,8);
    *puVar3 = &PTR_LAB_149f6d320;
    puVar3[1] = local_a8;
    pcVar4 = FUN_142a2544a;
    if (puVar3 + 1 == (longlong *)0x0) {
      pcVar4 = (code *)0x0;
    }
    FUN_146eed2ae(puVar3 + 2,&local_a0);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = pcVar4;
    puVar2[0xc] = puVar3;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    local_58 = 0;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    FUN_146eecb48(&local_a0);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee5fe6 FUN_146ee5fe6 body=177 status=ok
// SIG undefined FUN_146ee5fe6(void)

void FUN_146ee5fe6(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x128) != 0)) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = FUN_142a2559a;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d340;
    puVar2[0xf] = param_1;
    *(undefined1 *)(puVar2 + 0x10) = param_2;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee6098 FUN_146ee6098 body=177 status=ok
// SIG undefined FUN_146ee6098(void)

void FUN_146ee6098(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x128) != 0)) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a256ac;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d360;
    puVar2[0xf] = param_1;
    *(undefined1 *)(puVar2 + 0x10) = param_2;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee614a FUN_146ee614a body=162 status=ok
// SIG undefined FUN_146ee614a(void)

void FUN_146ee614a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x128) != 0)) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a2572c;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d380;
    puVar2[0xf] = param_1;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee61ec FUN_146ee61ec body=808 status=ok
// SIG undefined FUN_146ee61ec(void)

void FUN_146ee61ec(longlong param_1,double param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (lVar1 = *(longlong *)(param_1 + 0x128), lVar1 != 0)) {
    fVar5 = (float)param_2;
    fVar7 = 0.0;
    fVar11 = 0.0;
    fVar8 = 0.0;
    fVar12 = 0.0;
    fVar10 = 0.0;
    fVar9 = 0.0;
    fVar6 = 0.0;
    if (0.0 < fVar5) {
      fVar6 = 1.0 / fVar5;
      if (0.0 < (float)*(double *)(lVar1 + 0x148)) {
        fVar7 = fVar5 / (float)*(double *)(lVar1 + 0x148);
        fVar9 = *(float *)(lVar1 + 0x138) * fVar7;
        fVar10 = *(float *)(lVar1 + 0x134) * fVar7;
        fVar12 = *(float *)(lVar1 + 0x130) * fVar7;
        fVar8 = *(float *)(lVar1 + 0x144) / fVar7;
        fVar11 = *(float *)(lVar1 + 0x140) / fVar7;
        fVar7 = *(float *)(lVar1 + 0x13c) / fVar7;
      }
    }
    *(double *)(lVar1 + 0x148) = (double)fVar5;
    *(byte *)(lVar1 + 0x94) = *(byte *)(lVar1 + 0x94) | 0x20;
    if ((*(longlong *)(lVar1 + 0x10) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8), lVar1 != 0)) {
      FUN_144a78688(lVar1 + 0x70);
    }
    lVar1 = *(longlong *)(param_1 + 0x128);
    *(double *)(lVar1 + 0x150) = (double)fVar6;
    *(byte *)(lVar1 + 0x94) = *(byte *)(lVar1 + 0x94) | 0x20;
    if ((*(longlong *)(lVar1 + 0x10) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8), lVar1 != 0)) {
      FUN_144a78688(lVar1 + 0x70);
    }
    lVar1 = *(longlong *)(param_1 + 0x128);
    *(float *)(lVar1 + 0x130) = fVar12;
    *(float *)(lVar1 + 0x134) = fVar10;
    *(float *)(lVar1 + 0x138) = fVar9;
    *(byte *)(lVar1 + 0x94) = *(byte *)(lVar1 + 0x94) | 0x20;
    if ((*(longlong *)(lVar1 + 0x10) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8), lVar1 != 0)) {
      FUN_144a78688(lVar1 + 0x70);
    }
    lVar1 = *(longlong *)(param_1 + 0x128);
    *(float *)(lVar1 + 0x13c) = fVar7;
    *(float *)(lVar1 + 0x140) = fVar11;
    *(float *)(lVar1 + 0x144) = fVar8;
    *(byte *)(lVar1 + 0x94) = *(byte *)(lVar1 + 0x94) | 0x20;
    if ((*(longlong *)(lVar1 + 0x10) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8), lVar1 != 0)) {
      FUN_144a78688(lVar1 + 0x70);
    }
    lVar1 = *(longlong *)(param_1 + 8);
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
    *puVar3 = &PTR_LAB_149f6d3a0;
    puVar3[1] = param_1;
    *(float *)(puVar3 + 2) = fVar5;
    *(float *)((longlong)puVar3 + 0x14) = fVar6;
    *(float *)(puVar3 + 3) = fVar12;
    *(float *)((longlong)puVar3 + 0x1c) = fVar10;
    *(float *)(puVar3 + 4) = fVar9;
    *(float *)((longlong)puVar3 + 0x24) = fVar7;
    *(float *)(puVar3 + 5) = fVar11;
    puVar4 = &LAB_142a25796;
    if (puVar3 + 1 == (longlong *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    *(float *)((longlong)puVar3 + 0x2c) = fVar8;
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = puVar4;
    puVar2[0xc] = puVar3;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee6514 FUN_146ee6514 body=22 status=ok
// SIG undefined FUN_146ee6514(void)

void FUN_146ee6514(longlong param_1,undefined8 param_2)

{
  FUN_146ee652a(*(undefined8 *)(param_1 + 0x128),param_2,param_1 + 0x160);
  return;
}



// FUNCTION 146ee652a FUN_146ee652a body=434 status=ok
// SIG undefined FUN_146ee652a(void)

void FUN_146ee652a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) goto LAB_146ee6567;
  if (*(int *)(param_1 + 0x88) != 0) {
    if ((int)param_3[1] == 0) goto LAB_146ee6567;
    local_58 = 0;
    uStack_50 = 0;
    iVar2 = (int)param_2[1];
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    if (iVar2 != 0) {
      FUN_14481578e(&local_58);
      if ((longlong)(int)param_2[1] != 0) {
        plVar7 = (longlong *)*param_2;
        plVar1 = plVar7 + (int)param_2[1];
        do {
          uVar3 = uStack_50;
          if ((longlong)(int)param_3[1] != 0) {
            lVar5 = (longlong)(int)param_3[1] << 3;
            lVar6 = 0;
            do {
              if (*(longlong *)(*param_3 + lVar6 * 8) == *plVar7) {
                if ((int)lVar6 != -1) {
                  lVar5 = (longlong)(int)uStack_50;
                  uVar4 = (int)uStack_50 + 1;
                  uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
                  if (uStack_50._4_4_ < uVar4) {
                    FUN_1446f48e2(&local_58,uVar3 & 0xffffffff);
                  }
                  *(int *)(local_58 + lVar5 * 4) = (int)lVar6;
                }
                break;
              }
              lVar6 = lVar6 + 1;
              lVar5 = lVar5 + -8;
            } while (lVar5 != 0);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar1);
      }
    }
    FUN_144958a06(local_58,uStack_50 & 0xffffffff);
    local_68 = local_58;
    local_60 = (int)uStack_50;
    FUN_146dd98de(param_1,&local_68);
    local_68 = local_58;
    local_60 = (int)uStack_50;
    FUN_146eed4f4(param_3,&local_68);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0x88) != 0) goto LAB_146ee6567;
  }
  lVar5 = FUN_14001cc68(0xd0,0x10);
  FUN_146daede2(lVar5);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  local_70 = lVar5;
  FUN_1406188f0(param_1,&local_70);
LAB_146ee6567:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ee66de FUN_146ee66de body=444 status=ok
// SIG undefined FUN_146ee66de(void)

void FUN_146ee66de(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x128) != 0) && (iVar5 = (int)param_2[1], iVar5 == (int)param_3[1]))
  {
    local_58 = *param_2;
    *param_2 = 0;
    local_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    lVar4 = *(longlong *)(param_1 + 0x128);
    local_60 = param_1;
    local_50 = iVar5;
    if ((lVar4 != 0) && ((int)param_3[1] != 0)) {
      lVar9 = *(longlong *)(lVar4 + 0x50);
      if ((lVar9 == 0) ||
         ((*(char *)(lVar9 + 0x1c) != '\x0f' && (*(char *)(lVar9 + 0x1c) != '\x05')))) {
        lVar9 = 0;
      }
      else {
        lVar9 = (longlong)*(int *)(lVar9 + 0x28);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x110);
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      FUN_146dd973a(lVar4,&local_58);
      iVar5 = (int)param_3[1];
      if (0 < iVar5) {
        lVar9 = lVar9 << 3;
        lVar8 = 0;
        do {
          lVar6 = *(longlong *)(*param_3 + lVar8 * 8);
          if (lVar6 != 0) {
            plVar7 = (longlong *)(lVar6 + 0x78);
            if (*(longlong **)(lVar6 + 0x80) != (longlong *)0x0) {
              plVar7 = *(longlong **)(lVar6 + 0x80);
            }
            if (*plVar7 != 0) {
              lVar6 = *(longlong *)(lVar4 + 0x80);
              if (*(longlong *)(lVar4 + 0x80) == 0) {
                lVar6 = lVar4 + 0x78;
              }
              if (*(longlong *)(lVar6 + lVar9) != 0) {
                FUN_146eed62a(lVar6 + lVar9,plVar7,uVar1,uVar2);
                iVar5 = (int)param_3[1];
              }
            }
          }
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 8;
        } while (lVar8 < iVar5);
      }
    }
    FUN_144756766(local_58,local_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uVar3 = *(uint *)(param_3 + 1);
    if ((longlong)(int)uVar3 != 0) {
      iVar5 = *(int *)(param_1 + 0x168);
      *(uint *)(param_1 + 0x168) = iVar5 + uVar3;
      if ((uint)(*(int *)(param_1 + 0x16c) - iVar5) < uVar3) {
        FUN_146e2d61c((longlong *)(param_1 + 0x160),iVar5);
      }
      memcpy((void *)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0x160)),(void *)*param_3,
             (longlong)(int)uVar3 << 3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ee689c FUN_146ee689c body=315 status=ok
// SIG undefined FUN_146ee689c(void)

void FUN_146ee689c(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x128);
  if (lVar3 != 0) {
    if ((int)param_3[1] != 0) {
      lVar8 = *(longlong *)(lVar3 + 0x50);
      if ((lVar8 == 0) ||
         ((*(char *)(lVar8 + 0x1c) != '\x0f' && (*(char *)(lVar8 + 0x1c) != '\x05')))) {
        lVar8 = 0;
      }
      else {
        lVar8 = (longlong)*(int *)(lVar8 + 0x28);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x110);
      uVar2 = *(undefined4 *)(param_1 + 0x114);
      local_50 = *param_2;
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      FUN_1406188f0(lVar3,&local_50);
      iVar4 = (int)param_3[1];
      if (0 < iVar4) {
        lVar8 = lVar8 << 3;
        lVar7 = 0;
        do {
          lVar5 = *(longlong *)(*param_3 + lVar7 * 8);
          if (lVar5 != 0) {
            plVar6 = (longlong *)(lVar5 + 0x78);
            if (*(longlong **)(lVar5 + 0x80) != (longlong *)0x0) {
              plVar6 = *(longlong **)(lVar5 + 0x80);
            }
            if (*plVar6 != 0) {
              lVar5 = *(longlong *)(lVar3 + 0x80);
              if (*(longlong *)(lVar3 + 0x80) == 0) {
                lVar5 = lVar3 + 0x78;
              }
              if (*(longlong *)(lVar5 + lVar8) != 0) {
                FUN_146eed62a(lVar5 + lVar8,plVar6,uVar1,uVar2);
                iVar4 = (int)param_3[1];
              }
            }
          }
          lVar7 = lVar7 + 1;
          lVar8 = lVar8 + 8;
        } while (lVar7 < iVar4);
      }
    }
    FUN_146ee69d8(param_1 + 0x160,param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ee69d8 FUN_146ee69d8 body=88 status=ok
// SIG undefined FUN_146ee69d8(void)

undefined8 * FUN_146ee69d8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146eed0bc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 146ee6a30 FUN_146ee6a30 body=339 status=ok
// SIG undefined FUN_146ee6a30(void)

undefined8 * FUN_146ee6a30(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (*(longlong **)(param_1 + 0x158) == (longlong *)0x0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    puVar7[1] = 0xffffffff;
    *puVar7 = &PTR_FUN_149f6d9a0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[8] = 0;
    uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
    puVar7[10] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
    puVar7[0xb] = uVar2;
    uVar2 = DAT_14c8463e8;
    puVar7[0xc] = DAT_14c8463e0;
    puVar7[0xd] = uVar2;
    uVar2 = DAT_14c8463e8;
    puVar7[0x10] = DAT_14c8463e0;
    puVar7[0x11] = uVar2;
    uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
    puVar7[0xe] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
    puVar7[0xf] = uVar2;
    *(undefined4 *)(puVar7 + 0x12) = 0;
    *(undefined8 **)(param_1 + 0x158) = puVar7;
  }
  else {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x158) + 8))();
    puVar1 = *(undefined8 **)(param_1 + 0x158);
    puVar7 = puVar1;
    if (iVar6 != 1) {
      uVar2 = puVar1[1];
      puVar7 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
      puVar7[1] = uVar2;
      *puVar7 = &PTR_FUN_149f6d9a0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[8] = 0;
      uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
      puVar7[10] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      puVar7[0xb] = uVar2;
      uVar2 = DAT_14c8463e8;
      puVar7[0xc] = DAT_14c8463e0;
      puVar7[0xd] = uVar2;
      uVar2 = DAT_14c8463e8;
      puVar7[0x10] = DAT_14c8463e0;
      puVar7[0x11] = uVar2;
      uVar5 = DAT_14c8463d8._4_4_;
      uVar4 = (undefined4)DAT_14c8463d8;
      uVar3 = DAT_14c8463d0._4_4_;
      *(undefined4 *)(puVar7 + 0xe) = (undefined4)DAT_14c8463d0;
      *(undefined4 *)((longlong)puVar7 + 0x74) = uVar3;
      *(undefined4 *)(puVar7 + 0xf) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x7c) = uVar5;
      *(undefined4 *)(puVar7 + 0x12) = 0;
      *(undefined8 **)(param_1 + 0x158) = puVar7;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        puVar7 = *(undefined8 **)(param_1 + 0x158);
      }
    }
  }
  return puVar7;
}



// FUNCTION 146ee6b84 FUN_146ee6b84 body=348 status=ok
// SIG undefined FUN_146ee6b84(void)

void FUN_146ee6b84(longlong param_1,undefined8 *param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 8) != 0) && (lVar7 = *(longlong *)(param_1 + 0x128), lVar7 != 0)) {
    uVar9 = *param_2;
    uVar10 = param_2[1];
    *(undefined8 *)(lVar7 + 0x30) = param_2[2];
    *(undefined8 *)(lVar7 + 0x20) = uVar9;
    *(undefined8 *)(lVar7 + 0x28) = uVar10;
    dVar4 = param_3[3];
    dVar5 = param_3[2];
    dVar6 = param_3[1];
    lVar7 = *(longlong *)(param_1 + 0x128);
    *(float *)(lVar7 + 0x40) = (float)*param_3;
    *(float *)(lVar7 + 0x44) = (float)dVar6;
    *(float *)(lVar7 + 0x48) = (float)dVar5;
    *(float *)(lVar7 + 0x4c) = (float)dVar4;
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x128) + 0x94);
    *puVar3 = *puVar3 | 0x40000;
    lVar7 = *(longlong *)(param_1 + 0x20);
    plVar8 = *(longlong **)(param_1 + 0x28);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
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
    local_48 = param_2[2];
    local_58 = *(undefined4 *)param_2;
    uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_50 = *(undefined4 *)(param_2 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar11 = FUN_144b072b6(param_1);
    *(ulonglong *)(lVar7 + 8) = CONCAT44(uStack_54,local_58);
    *(ulonglong *)(lVar7 + 0x10) = CONCAT44(uStack_4c,uStack_50);
    *(undefined8 *)(lVar7 + 0x18) = local_48;
    *(undefined4 *)(lVar7 + 0x20) = uVar11;
    local_58 = *(undefined4 *)param_3;
    uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_50 = *(undefined4 *)(param_3 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_48._0_4_ = *(undefined4 *)(param_3 + 2);
    local_48._4_4_ = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_40 = *(undefined4 *)(param_3 + 3);
    uStack_3c = *(undefined4 *)((longlong)param_3 + 0x1c);
    uVar11 = FUN_144b072b6(param_1);
    *(undefined4 *)(lVar7 + 0x30) = local_58;
    *(undefined4 *)(lVar7 + 0x34) = uStack_54;
    *(undefined4 *)(lVar7 + 0x38) = uStack_50;
    *(undefined4 *)(lVar7 + 0x3c) = uStack_4c;
    *(undefined4 *)(lVar7 + 0x40) = (undefined4)local_48;
    *(undefined4 *)(lVar7 + 0x44) = local_48._4_4_;
    *(undefined4 *)(lVar7 + 0x48) = uStack_40;
    *(undefined4 *)(lVar7 + 0x4c) = uStack_3c;
    *(undefined4 *)(lVar7 + 0x50) = uVar11;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee6cf8 FUN_146ee6cf8 body=618 status=ok
// SIG undefined FUN_146ee6cf8(void)

void FUN_146ee6cf8(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  longlong local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 local_4c;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 8);
  if (((lVar2 == 0) || (*(longlong *)(param_1 + 0x128) == 0)) ||
     (iVar1 = *(int *)(param_2 + 1), iVar1 != *(int *)(param_3 + 1))) goto LAB_146ee6f24;
  local_68 = (void *)0x0;
  pvVar3 = (void *)*param_2;
  local_70 = param_1;
  local_60 = iVar1;
  if (iVar1 == 0) {
    local_5c = 0;
    iStack_50 = 0;
LAB_146ee6dcf:
    uStack_54 = 0;
    uStack_58 = 0;
    local_4c = 0;
  }
  else {
    FUN_1448634b6(&local_68,iVar1,0);
    memcpy(local_68,pvVar3,(longlong)iVar1 << 3);
    iStack_50 = *(int *)(param_3 + 1);
    lVar7 = (longlong)iStack_50;
    uStack_58 = 0;
    uStack_54 = 0;
    pvVar3 = (void *)*param_3;
    if (lVar7 == 0) goto LAB_146ee6dcf;
    FUN_144756262(&uStack_58,iStack_50,0);
    memcpy((void *)CONCAT44(uStack_54,uStack_58),pvVar3,lVar7 * 0x60);
  }
  local_48 = param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  puVar5 = (undefined8 *)FUN_14001cc68(0x38,8);
  pvVar3 = local_68;
  *puVar5 = &PTR_LAB_149f6d3c0;
  puVar5[1] = local_70;
  puVar5[2] = 0;
  lVar7 = (longlong)local_60;
  *(int *)(puVar5 + 3) = local_60;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
  }
  else {
    FUN_1448634b6(puVar5 + 2,local_60,0);
    memcpy((void *)puVar5[2],pvVar3,lVar7 << 3);
  }
  puVar5[4] = 0;
  lVar7 = (longlong)iStack_50;
  pvVar3 = (void *)CONCAT44(uStack_54,uStack_58);
  *(int *)(puVar5 + 5) = iStack_50;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
  }
  else {
    FUN_144756262(puVar5 + 4,iStack_50,0);
    memcpy((void *)puVar5[4],pvVar3,lVar7 * 0x60);
  }
  *(undefined1 *)(puVar5 + 6) = local_48;
  pcVar6 = FUN_142a25880;
  if (puVar5 == (undefined8 *)&DAT_fffffffffffffff8) {
    pcVar6 = (code *)0x0;
  }
  *(undefined2 *)(puVar4 + 1) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined2 *)(puVar4 + 8) = 1;
  *puVar4 = &PTR_FUN_149f45dc0;
  puVar4[10] = pcVar6;
  puVar4[0xc] = puVar5;
  puVar4[0x12] = 0;
  puVar4[0x14] = 0;
  *(undefined1 *)(puVar4 + 0x1a) = 0;
  FUN_1406e6496(lVar2 + 0x70,puVar4);
  if (CONCAT44(uStack_54,uStack_58) != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_146ee6f24:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee6f64 FUN_146ee6f64 body=177 status=ok
// SIG undefined FUN_146ee6f64(void)

void FUN_146ee6f64(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x128) != 0)) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a25998;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d3e0;
    puVar2[0xf] = param_1;
    *(undefined1 *)(puVar2 + 0x10) = param_2;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee7016 FUN_146ee7016 body=148 status=ok
// SIG undefined FUN_146ee7016(void)

void FUN_146ee7016(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a25ee2;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d480;
    puVar2[0xf] = param_1;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee70aa FUN_146ee70aa body=65 status=ok
// SIG undefined FUN_146ee70aa(void)

float FUN_146ee70aa(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x18e) == '\x01') {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x410) + (longlong)param_2 * 4);
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x348))) &&
       (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x340) + (longlong)iVar1 * 8),
       plVar2 != (longlong *)0x0)) {
      lVar3 = (longlong)(int)plVar2[1] * 0x10;
      iVar1 = *(int *)(*(longlong *)(*plVar2 + 0x668) + 8 + lVar3);
      if ((longlong)iVar1 == 0) {
        fVar5 = 0.0;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(*plVar2 + 0x668) + lVar3);
        fVar5 = 0.0;
        lVar4 = 0;
        do {
          switch(DAT_14c997598) {
          case 0:
          case 3:
            fVar5 = fVar5 + *(float *)(lVar3 + 8 + lVar4);
            break;
          case 1:
            fVar6 = *(float *)(lVar3 + 8 + lVar4);
            if (fVar5 <= fVar6) {
              fVar5 = fVar6;
            }
            break;
          case 2:
            fVar6 = *(float *)(lVar3 + 8 + lVar4);
            if (fVar6 <= fVar5) {
              fVar5 = fVar6;
            }
          }
          lVar4 = lVar4 + 0x10;
        } while ((longlong)iVar1 << 4 != lVar4);
      }
      fVar6 = fVar5;
      if (0 < iVar1) {
        fVar6 = fVar5 / (float)iVar1;
      }
      if (DAT_14c997598 != 3) {
        fVar6 = fVar5;
      }
      fVar5 = 3.4028235e+38;
      if ((0.0 < fVar6) && (lVar3 = FUN_14484244a(param_1 + 0x1b8), lVar3 != 0)) {
        fVar5 = fVar6 * *(float *)(lVar3 + 0x68);
      }
      return fVar5;
    }
  }
  return 3.4028235e+38;
}



// FUNCTION 146ee70ec FUN_146ee70ec body=249 status=ok
// SIG undefined FUN_146ee70ec(void)

undefined8 FUN_146ee70ec(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146ee71e6 FUN_146ee71e6 body=4386 status=ok
// SIG undefined FUN_146ee71e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ee71e6(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  byte bVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  double *pdVar24;
  int iVar25;
  undefined8 *puVar26;
  longlong lVar27;
  undefined8 *puVar28;
  uint uVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar47;
  undefined1 auVar46 [16];
  double dVar48;
  double dVar50;
  undefined1 auVar49 [16];
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auStack_3d8 [32];
  undefined8 *local_3b8;
  undefined8 *local_3b0;
  double *local_3a8;
  undefined4 local_3a0;
  longlong local_390;
  undefined8 *local_388;
  undefined8 *local_380;
  undefined1 local_378 [16];
  undefined8 local_368;
  undefined8 uStack_360;
  double local_358;
  double dStack_350;
  longlong local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  longlong local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined2 local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  bVar19 = *(byte *)(param_1 + 0x319);
  if ((bVar19 & 2) == 0) {
    lVar22 = *(longlong *)(param_1 + 0x58);
    if ((lVar22 != 0) && ((*(byte *)(param_1 + 0x1c0) & 1) != 0)) {
      if (DAT_14c997680 == '\x01') {
        local_2a8 = 0;
        local_2a0 = 1;
        FUN_140dff43c(param_1 + 0x5d0,DAT_14c9968a0,DAT_14c9974a8);
        local_3b8 = DAT_14c9974a8;
        FUN_1408a6bca(param_1 + 0x5d0,lVar22,DAT_14c9968a0,DAT_14c9968a0);
      }
      lVar20 = FUN_1401466c8(lVar22,DAT_14c997500,DAT_14c9974a8);
      puVar26 = DAT_14c9974a8;
      lVar21 = FUN_142a1c318(param_1 + 0x5d0,DAT_14c9968a0,DAT_14c9974a8);
      if (*(char *)(param_1 + 0x1c2) < '\0') {
        lVar22 = FUN_146ee70ec(lVar22,DAT_14c9968b8,puVar26);
      }
      else {
        lVar22 = 0;
      }
      puVar26 = (undefined8 *)(param_1 + 0xa0);
      puVar28 = (undefined8 *)(param_1 + 0x100);
      for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
        *puVar28 = *puVar26;
        puVar26 = puVar26 + 1;
        puVar28 = puVar28 + 1;
      }
      local_2b8 = 0;
      uStack_2b0 = 0;
      FUN_1407a5729(param_1 + 0x5d0);
      iVar25 = *(int *)(param_1 + 0x304);
      if (0 < iVar25) {
        local_380 = (undefined8 *)(param_1 + 0x500);
        local_388 = (undefined8 *)(param_1 + 0x4f0);
        local_390 = param_1 + 0x68;
        lVar23 = 0;
        do {
          auVar53 = _DAT_149934d80;
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x400) + lVar23 * 4);
          lVar27 = (longlong)iVar4;
          if (((iVar4 != *(int *)(param_1 + 0x180)) &&
              (plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x340) + lVar23 * 8),
              plVar5 != (longlong *)0x0)) &&
             (*(longlong *)(*(longlong *)(*plVar5 + 0x60) + (longlong)(int)plVar5[1] * 8) == 0)) {
            lVar6 = *(longlong *)(lVar20 + 0x10);
            lVar14 = lVar27 * 0x60;
            pdVar1 = (double *)(lVar6 + lVar14);
            pdVar24 = (double *)(local_2b8 + lVar14);
            auVar34 = *(undefined1 (*) [16])(local_2b8 + 0x40 + lVar14);
            dVar7 = auVar34._0_8_;
            dVar52 = auVar34._8_8_;
            auVar46 = *(undefined1 (*) [16])(local_2b8 + 0x50 + lVar14);
            dVar8 = auVar46._0_8_;
            auVar63 = *(undefined1 (*) [16])(lVar6 + 0x40 + lVar14);
            auVar62 = *(undefined1 (*) [16])(lVar6 + 0x50 + lVar14);
            auVar34 = minpd(auVar63,auVar34);
            auVar45 = minpd(auVar62,auVar46);
            auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
            auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
            iVar25 = movmskpd((int)lVar6,auVar35);
            auVar34._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
            auVar34._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
            uVar29 = movmskpd((int)lVar14,auVar34);
            local_368 = 0;
            uStack_360 = 0x3ff0000000000000;
            if ((uVar29 & 0x3fffffff) == 0 && iVar25 == 0) {
              dVar43 = *pdVar1;
              dVar44 = pdVar1[1];
              dVar33 = pdVar1[2];
              dVar41 = pdVar1[3];
              dVar9 = *pdVar24;
              dVar10 = pdVar24[1];
              dVar11 = pdVar24[2];
              dVar59 = pdVar24[3];
              dVar50 = pdVar24[3];
              dVar32 = pdVar24[3];
              dVar48 = pdVar24[1];
              dVar42 = pdVar24[1];
              dVar2 = pdVar24[2];
              dVar40 = pdVar24[2];
              dVar47 = dVar44 * dVar2 * -1.0 +
                       dVar33 * dVar48 + dVar41 * *pdVar24 * 1.0 + dVar43 * dVar50;
              dVar12 = dVar43 * dVar40 * 1.0 +
                       dVar41 * dVar42 + dVar33 * *pdVar24 * -1.0 + dVar44 * dVar32;
              auVar53._0_8_ =
                   dVar41 * dVar2 * 1.0 +
                   ((*pdVar24 * dVar44 * 1.0 + dVar33 * dVar50) - dVar43 * dVar48);
              auVar53._8_8_ =
                   dVar33 * dVar40 * -1.0 +
                   ((*pdVar24 * dVar43 * -1.0 + dVar41 * dVar32) - dVar44 * dVar42);
              dVar43 = pdVar1[4] * dVar7;
              dVar44 = pdVar1[5] * dVar52;
              dVar2 = pdVar1[6] * dVar8;
              dVar40 = pdVar1[7] * auVar46._8_8_;
              dVar33 = dVar44 * dVar9 - dVar10 * dVar43;
              dVar41 = dVar2 * dVar10 - dVar11 * dVar44;
              dVar42 = dVar43 * dVar11 - dVar9 * dVar2;
              dVar48 = dVar40 * dVar59 - dVar59 * dVar40;
              dVar41 = dVar41 + dVar41;
              dVar42 = dVar42 + dVar42;
              dVar33 = dVar33 + dVar33;
              dVar48 = dVar48 + dVar48;
              dVar43 = (dVar33 * dVar10 - dVar11 * dVar42) + dVar50 * dVar41 + dVar43 + pdVar24[4];
              dVar44 = (dVar41 * dVar11 - dVar33 * dVar9) + dVar32 * dVar42 + dVar44 + pdVar24[5];
              dVar50 = (dVar42 * dVar9 - dVar10 * dVar41) + dVar50 * dVar33 + dVar2 + pdVar24[6];
              dVar32 = (dVar48 * dVar59 - dVar48 * dVar59) + dVar32 * dVar48 + dVar40 + pdVar24[7];
            }
            else {
              dVar42 = *pdVar24;
              dVar48 = pdVar24[1];
              dVar2 = pdVar24[2];
              dVar40 = dVar48 + dVar48;
              dVar43 = dVar2 + dVar2;
              dVar50 = dVar42 * (dVar42 + dVar42);
              local_1f8 = ((double)DAT_149934d80 - (dVar2 * dVar43 + dVar48 * dVar40)) * dVar7;
              local_1a8 = (1.0 - (dVar50 + dVar48 * dVar40)) * dVar8;
              dVar32 = pdVar24[3];
              dVar44 = dVar43 * dVar32;
              dVar47 = (dVar42 + dVar42) * pdVar24[3];
              dVar32 = dVar40 * dVar32;
              dStack_1f0 = (dVar40 * dVar42 + dVar44) * dVar7;
              local_1c8 = (dVar43 * dVar48 + dVar47) * dVar52;
              local_1b8 = (dVar32 + *pdVar24 * dVar43) * dVar8;
              dStack_1b0 = (dVar43 * dVar48 - dVar47) * dVar8;
              local_1e8 = (*pdVar24 * dVar43 - dVar32) * dVar7;
              uStack_1e0 = 0;
              local_1d8._8_8_ = (DAT_149934d80._8_8_ - (dVar2 * dVar43 + dVar50)) * dVar52;
              local_1d8._0_8_ = (dVar40 * dVar42 - dVar44) * dVar52;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = pdVar24[4];
              dStack_190 = pdVar24[5];
              local_188 = pdVar24[6];
              uStack_180 = 0x3ff0000000000000;
              dVar50 = *pdVar1;
              dVar42 = pdVar1[1];
              dVar48 = pdVar1[2];
              local_268 = pdVar1[8];
              local_258 = pdVar1[9];
              dVar2 = pdVar1[10];
              dVar44 = dVar42 + dVar42;
              dVar40 = dVar48 + dVar48;
              dVar32 = dVar50 * (dVar50 + dVar50);
              local_278 = ((double)DAT_149934d80 - (dVar48 * dVar40 + dVar42 * dVar44)) * local_268;
              dStack_250 = (DAT_149934d80._8_8_ - (dVar48 * dVar40 + dVar32)) * local_258;
              local_228 = (1.0 - (dVar32 + dVar42 * dVar44)) * dVar2;
              dVar32 = pdVar1[3];
              dVar48 = dVar40 * dVar32;
              dVar43 = (dVar50 + dVar50) * pdVar1[3];
              dVar32 = dVar44 * dVar32;
              dStack_270 = (dVar44 * dVar50 + dVar48) * local_268;
              local_248 = (dVar40 * dVar42 + dVar43) * local_258;
              local_268 = (*pdVar1 * dVar40 - dVar32) * local_268;
              local_258 = (dVar44 * dVar50 - dVar48) * local_258;
              uStack_260 = 0;
              uStack_240 = 0;
              local_238._8_8_ = (dVar40 * dVar42 - dVar43) * dVar2;
              local_238._0_8_ = (dVar32 + *pdVar1 * dVar40) * dVar2;
              uStack_220 = 0;
              local_218 = pdVar1[4];
              dStack_210 = pdVar1[5];
              local_208 = pdVar1[6];
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178,&local_278,&local_1f8);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar36._8_8_ = -(ulonglong)(0.0 <= auVar63._8_8_ * dVar52);
              auVar36._0_8_ = -(ulonglong)(0.0 <= auVar63._0_8_ * dVar7);
              auVar34 = blendvpd(_DAT_149936790,auVar53,auVar36);
              uVar31 = -(ulonglong)(0.0 <= auVar62._0_8_ * dVar8);
              dVar32 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
              dVar50 = auVar34._0_8_;
              local_168 = local_168 * dVar50;
              local_170 = local_170 * dVar50;
              local_178 = local_178 * dVar50;
              dVar50 = auVar34._8_8_;
              local_148 = local_148 * dVar50;
              local_150 = local_150 * dVar50;
              local_158 = dVar50 * local_158;
              local_128 = local_128 * dVar32;
              local_130 = local_130 * dVar32;
              local_138 = dVar32 * local_138;
              pdVar24 = &local_298;
              FUN_14481fd10(pdVar24,&local_178);
              dVar32 = local_288 * local_288 + local_298 * local_298;
              dVar50 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar49._0_8_ = dVar32 + dVar50;
              auVar49._8_8_ = dVar32 + dVar50;
              auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_);
              auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_);
              auVar34 = sqrtpd(auVar49,auVar49);
              auVar53 = divpd(auVar53,auVar34);
              auVar54._0_8_ = auVar53._0_8_ * local_288;
              auVar54._8_8_ = auVar53._8_8_ * dStack_280;
              dVar47 = (double)((ulonglong)(local_298 * auVar53._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_));
              dVar12 = (double)((ulonglong)(dStack_290 * auVar53._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_));
              auVar45._8_8_ = uStack_360;
              auVar45._0_8_ = local_368;
              auVar53 = blendvpd(auVar45,auVar54,auVar37);
              dVar32 = 0.0;
              dVar50 = local_108;
              dVar43 = local_118;
              dVar44 = dStack_110;
            }
            auVar35 = _DAT_149934d80;
            dVar8 = auVar62._0_8_ * dVar8;
            dVar33 = auVar62._8_8_ * auVar46._8_8_;
            dVar52 = auVar63._8_8_ * dVar52;
            dVar7 = auVar63._0_8_ * dVar7;
            local_2e8 = ZEXT816(0);
            local_2f8 = ZEXT816(0);
            auVar34 = *(undefined1 (*) [16])(param_1 + 0xe0);
            dVar42 = auVar34._0_8_;
            dVar2 = auVar34._8_8_;
            auVar46 = *(undefined1 (*) [16])(param_1 + 0xf0);
            dVar48 = auVar46._0_8_;
            dVar40 = auVar46._8_8_;
            local_378._8_4_ = SUB84(dVar52,0);
            local_378._0_8_ = dVar7;
            local_378._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
            auVar63._8_8_ = dVar52;
            auVar63._0_8_ = dVar7;
            auVar34 = minpd(auVar63,auVar34);
            auVar62._8_8_ = dVar33;
            auVar62._0_8_ = dVar8;
            auVar63 = minpd(auVar62,auVar46);
            auVar46._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
            auVar46._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
            iVar25 = movmskpd((int)local_2f8,auVar46);
            auVar64._8_8_ = -(ulonglong)(auVar63._8_8_ < 0.0);
            auVar64._0_8_ = -(ulonglong)(auVar63._0_8_ < 0.0);
            uVar29 = movmskpd((int)pdVar24,auVar64);
            dVar52 = auVar53._0_8_;
            dVar41 = auVar53._8_8_;
            uVar30 = local_378._8_8_;
            if ((uVar29 & 0x3fffffff) == 0 && iVar25 == 0) {
              dVar15 = *(double *)(param_1 + 0xa0);
              dVar61 = *(double *)(param_1 + 0xa8);
              dVar16 = *(double *)(param_1 + 0xb0);
              dVar17 = *(double *)(param_1 + 0xb8);
              dVar9 = *(double *)(param_1 + 0xb8);
              dVar10 = *(double *)(param_1 + 0xb8);
              dVar59 = *(double *)(param_1 + 0xa0);
              dVar11 = *(double *)(param_1 + 0xa0);
              dVar13 = *(double *)(param_1 + 0xa8);
              dVar60 = *(double *)(param_1 + 0xa8);
              dVar3 = *(double *)(param_1 + 0xb0);
              dVar58 = *(double *)(param_1 + 0xb0);
              local_318 = dVar12 * dVar3 * -1.0 +
                          dVar52 * dVar13 + dVar41 * dVar59 * 1.0 + dVar47 * dVar9;
              dStack_310 = dVar47 * dVar58 * 1.0 +
                           dVar41 * dVar60 + dVar52 * dVar11 * -1.0 + dVar12 * dVar10;
              dVar11 = dVar52 * dVar58 * -1.0 +
                       ((dVar11 * dVar47 * -1.0 + dVar41 * dVar10) - dVar12 * dVar60);
              dVar43 = dVar43 * dVar42;
              dVar44 = dVar44 * dVar2;
              dVar50 = dVar50 * dVar48;
              dVar32 = dVar32 * dVar40;
              dVar60 = dVar44 * dVar15 - dVar43 * dVar61;
              dVar51 = dVar50 * dVar61 - dVar44 * dVar16;
              dVar56 = dVar43 * dVar16 - dVar50 * dVar15;
              dVar58 = dVar32 * dVar17 - dVar32 * dVar17;
              dVar51 = dVar51 + dVar51;
              dVar56 = dVar56 + dVar56;
              dVar60 = dVar60 + dVar60;
              dVar58 = dVar58 + dVar58;
              local_2f8._0_8_ =
                   (dVar60 * dVar61 - dVar16 * dVar56) + dVar9 * dVar51 + dVar43 +
                   *(double *)(param_1 + 0xc0);
              local_2f8._8_8_ =
                   (dVar51 * dVar16 - dVar60 * dVar15) + dVar10 * dVar56 + dVar44 +
                   *(double *)(param_1 + 200);
              local_2e8._0_8_ =
                   (dVar56 * dVar15 - dVar61 * dVar51) + dVar9 * dVar60 + dVar50 +
                   *(double *)(param_1 + 0xd0);
              local_2e8._8_8_ =
                   (dVar58 * dVar17 - dVar58 * dVar17) + dVar10 * dVar58 + dVar32 +
                   *(double *)(param_1 + 0xd8);
              local_308._8_4_ = SUB84(dVar11,0);
              local_308._0_8_ =
                   dVar41 * dVar3 * 1.0 +
                   ((dVar59 * dVar12 * 1.0 + dVar52 * dVar9) - dVar47 * dVar13);
              local_308._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            }
            else {
              dStack_350 = dVar33 * dVar40;
              dVar58 = *(double *)(param_1 + 0xa0);
              dVar3 = *(double *)(param_1 + 0xa8);
              dVar15 = *(double *)(param_1 + 0xb0);
              dVar9 = dVar3 + dVar3;
              dVar59 = dVar15 + dVar15;
              dVar11 = dVar58 * (dVar58 + dVar58);
              local_1a8 = (1.0 - (dVar11 + dVar3 * dVar9)) * dVar48;
              dVar61 = *(double *)(param_1 + 0xa0) * dVar59;
              dVar32 = *(double *)(param_1 + 0xb8);
              dVar60 = dVar59 * dVar32;
              dVar13 = (dVar58 + dVar58) * *(double *)(param_1 + 0xb8);
              dVar32 = dVar9 * dVar32;
              local_1b8 = (dVar32 + dVar61) * dVar48;
              dStack_1b0 = (dVar59 * dVar3 - dVar13) * dVar48;
              dVar10 = (double)local_378._8_8_ * dVar2;
              local_1f8 = (1.0 - (dVar15 * dVar59 + dVar3 * dVar9)) * dVar42;
              dVar11 = (1.0 - (dVar15 * dVar59 + dVar11)) * dVar2;
              dStack_1f0 = (dVar9 * dVar58 + dVar60) * dVar42;
              local_1c8 = (dVar59 * dVar3 + dVar13) * dVar2;
              local_1e8 = (dVar61 - dVar32) * dVar42;
              uStack_1e0 = 0;
              local_1d8._8_4_ = SUB84(dVar11,0);
              local_1d8._0_8_ = (dVar9 * dVar58 - dVar60) * dVar2;
              local_1d8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = *(double *)(param_1 + 0xc0);
              dStack_190 = *(double *)(param_1 + 200);
              local_188 = *(double *)(param_1 + 0xd0);
              uStack_180 = 0x3ff0000000000000;
              dVar59 = dVar12 + dVar12;
              dVar9 = dVar52 + dVar52;
              dVar60 = dVar47 * (dVar47 + dVar47);
              local_228 = (1.0 - (dVar60 + dVar12 * dVar59)) * dVar8;
              dVar11 = (dVar47 + dVar47) * dVar41;
              local_258 = (dVar59 * dVar47 - dVar9 * dVar41) * (double)local_378._8_8_;
              dVar32 = (dVar9 * dVar12 - dVar11) * dVar8;
              local_278 = ((double)DAT_149934d80 - (dVar52 * dVar9 + dVar12 * dVar59)) * dVar7;
              dStack_250 = (DAT_149934d80._8_8_ - (dVar52 * dVar9 + dVar60)) *
                           (double)local_378._8_8_;
              dStack_270 = (dVar59 * dVar47 + dVar9 * dVar41) * dVar7;
              local_248 = (dVar9 * dVar12 + dVar11) * (double)local_378._8_8_;
              local_268 = (dVar47 * dVar9 - dVar59 * dVar41) * dVar7;
              uStack_260 = 0;
              uStack_240 = 0;
              local_238._8_4_ = SUB84(dVar32,0);
              local_238._0_8_ = (dVar47 * dVar9 + dVar59 * dVar41) * dVar8;
              local_238._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
              uStack_220 = 0;
              uStack_200 = 0x3ff0000000000000;
              local_358 = dVar8 * dVar48;
              local_218 = dVar43;
              dStack_210 = dVar44;
              local_208 = dVar50;
              FUN_1447fea8d(&local_178,&local_278,&local_1f8);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar38._8_8_ = -(ulonglong)(0.0 <= dVar10);
              auVar38._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar42);
              auVar53 = blendvpd(_DAT_149936790,auVar35,auVar38);
              uVar31 = -(ulonglong)(0.0 <= dVar8 * dVar48);
              dVar52 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
              dVar32 = auVar53._0_8_;
              local_168 = local_168 * dVar32;
              local_170 = local_170 * dVar32;
              local_178 = local_178 * dVar32;
              dVar32 = auVar53._8_8_;
              local_148 = local_148 * dVar32;
              local_150 = local_150 * dVar32;
              local_158 = dVar32 * local_158;
              local_128 = local_128 * dVar52;
              local_130 = local_130 * dVar52;
              local_138 = dVar52 * local_138;
              FUN_14481fd10(&local_298,&local_178);
              dVar52 = local_288 * local_288 + local_298 * local_298;
              dVar32 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar55._0_8_ = dVar52 + dVar32;
              auVar55._8_8_ = dVar52 + dVar32;
              auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar55._8_8_);
              auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar55._0_8_);
              auVar53 = sqrtpd(auVar55,auVar55);
              auVar53 = divpd(auVar35,auVar53);
              auVar57._0_8_ = auVar53._0_8_ * local_288;
              auVar57._8_8_ = auVar53._8_8_ * dStack_280;
              local_318 = (double)((ulonglong)(local_298 * auVar53._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar55._0_8_));
              dStack_310 = (double)((ulonglong)(dStack_290 * auVar53._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar55._8_8_));
              auVar18._8_8_ = uStack_360;
              auVar18._0_8_ = local_368;
              local_308 = blendvpd(auVar18,auVar57,auVar39);
              local_2f8._8_8_ = dStack_110;
              local_2f8._0_8_ = local_118;
              local_2e8._8_8_ = 0;
              local_2e8._0_8_ = local_108;
            }
            local_2d8._8_4_ = SUB84((double)uVar30 * dVar2,0);
            local_2d8._0_8_ = dVar7 * dVar42;
            local_2d8._12_4_ = (int)((ulonglong)((double)uVar30 * dVar2) >> 0x20);
            local_2c8._8_4_ = SUB84(dVar33 * dVar40,0);
            local_2c8._0_8_ = dVar8 * dVar48;
            local_2c8._12_4_ = (int)((ulonglong)(dVar33 * dVar40) >> 0x20);
            if (lVar22 == 0) {
              uVar30 = 0;
            }
            else {
              uVar30 = *(undefined8 *)(*(longlong *)(lVar22 + 0x10) + lVar27 * 8);
            }
            local_3a0 = *(undefined4 *)(param_1 + 0x30c);
            local_328 = *local_380;
            uStack_320 = local_380[1];
            local_338 = *local_388;
            uStack_330 = local_388[1];
            local_340 = *(longlong *)(*(longlong *)(lVar21 + 0x10) + lVar27 * 8);
            if (local_340 != 0) {
              LOCK();
              *(int *)(local_340 + 8) = *(int *)(local_340 + 8) + 1;
              UNLOCK();
            }
            local_3a8 = &local_318;
            local_3b0 = &local_328;
            local_3b8 = &local_338;
            FUN_14172fdd2(plVar5,local_390,uVar30,&local_340);
            iVar25 = *(int *)(param_1 + 0x304);
          }
          lVar23 = lVar23 + 1;
        } while (lVar23 < iVar25);
      }
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14173072a(param_1);
      }
      if (local_2b8 != 0) {
        FUN_1400020a8();
      }
      bVar19 = *(byte *)(param_1 + 0x319);
    }
    *(byte *)(param_1 + 0x319) = bVar19 | 2;
    FUN_140498ea8(param_1 + 0x5d0,DAT_14c9968a0,DAT_14c9974a8);
  }
  if ((local_f0 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ee830a FUN_146ee830a body=219 status=ok
// SIG undefined FUN_146ee830a(void)

float FUN_146ee830a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = (longlong)(int)param_2[1] * 0x10;
  iVar1 = *(int *)(*(longlong *)(*param_2 + 0x668) + 8 + lVar2);
  if ((longlong)iVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x668) + lVar2);
    fVar4 = 0.0;
    lVar3 = 0;
    do {
      switch(DAT_14c997598) {
      case 0:
      case 3:
        fVar4 = fVar4 + *(float *)(lVar2 + 8 + lVar3);
        break;
      case 1:
        fVar5 = *(float *)(lVar2 + 8 + lVar3);
        if (fVar4 <= fVar5) {
          fVar4 = fVar5;
        }
        break;
      case 2:
        fVar5 = *(float *)(lVar2 + 8 + lVar3);
        if (fVar5 <= fVar4) {
          fVar4 = fVar5;
        }
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 << 4 != lVar3);
  }
  fVar5 = fVar4;
  if (0 < iVar1) {
    fVar5 = fVar4 / (float)iVar1;
  }
  if (DAT_14c997598 != 3) {
    fVar5 = fVar4;
  }
  fVar4 = 3.4028235e+38;
  if ((0.0 < fVar5) && (lVar2 = FUN_14484244a(param_1 + 0x1b8), lVar2 != 0)) {
    fVar4 = fVar5 * *(float *)(lVar2 + 0x68);
  }
  return fVar4;
}



// FUNCTION 146ee83e6 FUN_146ee83e6 body=698 status=ok
// SIG undefined FUN_146ee83e6(void)

void FUN_146ee83e6(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  
  FUN_141730e74(param_2,0,0);
  iVar6 = *(int *)(param_1 + 0x348);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    FUN_140992e4e(param_2);
  }
  if (param_4 == 0) {
    if ((longlong)*(int *)(param_1 + 0x348) != 0) {
      lVar2 = *(longlong *)(param_3 + 0x9c8);
      puVar9 = *(ulonglong **)(param_1 + 0x340);
      puVar1 = puVar9 + *(int *)(param_1 + 0x348);
LAB_146ee8537:
      plVar3 = (longlong *)*puVar9;
      if ((plVar3 != (longlong *)0x0) &&
         (*(char *)(*(longlong *)(*plVar3 + 0x2c0) + 0xd + (longlong)(int)plVar3[1] * 0x10) == '\0')
         ) {
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_140125d6e(param_2,iVar6);
        }
        *(longlong **)(*param_2 + (longlong)iVar6 * 8) = plVar3;
        if ((*(int *)(*(longlong *)(*plVar3 + 0x5a8) + 8 + (longlong)(int)plVar3[1] * 0x10) != 0) &&
           (*(int *)(lVar2 + 0x518) != *(int *)(lVar2 + 0x544))) {
          uVar5 = ((uint)((ulonglong)plVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar3 >> 4)) *
                  -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          lVar10 = *(longlong *)(lVar2 + 0x550);
          if (*(longlong *)(lVar2 + 0x550) == 0) {
            lVar10 = lVar2 + 0x548;
          }
          iVar6 = *(int *)(lVar10 + (ulonglong)
                                    (*(int *)(lVar2 + 0x558) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
          if (iVar6 != -1) {
            lVar10 = *(longlong *)(lVar2 + 0x510);
            iVar7 = iVar6;
            do {
              if (*(longlong **)(lVar10 + (longlong)iVar7 * 0x20) == plVar3) goto LAB_146ee8632;
              iVar7 = *(int *)((longlong)iVar7 * 0x20 + lVar10 + 0x18);
            } while (iVar7 != -1);
          }
        }
      }
      goto LAB_146ee8559;
    }
  }
  else if (param_4 == 1) {
    iVar6 = *(int *)(param_1 + 0x348);
    if ((longlong)iVar6 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x340);
      lVar10 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar10);
        if ((plVar3 != (longlong *)0x0) &&
           (*(longlong *)(*(longlong *)(*plVar3 + 0x5a8) + (longlong)(int)plVar3[1] * 0x10) == 0)) {
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_140125d6e(param_2,iVar7);
          }
          *(longlong **)(*param_2 + (longlong)iVar7 * 8) = plVar3;
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar6 * 8 != lVar10);
    }
  }
  else if ((param_4 == 2) && (iVar6 = *(int *)(param_1 + 0x348), (longlong)iVar6 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x340);
    lVar10 = 0;
    do {
      lVar8 = *(longlong *)(lVar2 + lVar10);
      if (lVar8 != 0) {
        iVar7 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
          FUN_140125d6e(param_2,iVar7);
        }
        *(longlong *)(*param_2 + (longlong)iVar7 * 8) = lVar8;
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar6 * 8 != lVar10);
  }
  return;
  while (iVar6 = *(int *)(lVar8 + 0x18), iVar6 != -1) {
LAB_146ee8632:
    lVar8 = lVar10 + (longlong)iVar6 * 0x20;
    if (*(longlong **)(lVar10 + (longlong)iVar6 * 0x20) == plVar3) goto LAB_146ee864d;
  }
  lVar8 = 0;
LAB_146ee864d:
  iVar6 = *(int *)(lVar8 + 0x10);
  if ((longlong)iVar6 != 0) {
    lVar10 = *(longlong *)(lVar8 + 8);
    lVar8 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar10 + lVar8);
      iVar7 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
        FUN_140125d6e(param_2,iVar7);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar7 * 8) = uVar4;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar6 * 8 != lVar8);
  }
LAB_146ee8559:
  puVar9 = puVar9 + 1;
  if (puVar9 == puVar1) {
    return;
  }
  goto LAB_146ee8537;
}



// FUNCTION 146ee86a2 FUN_146ee86a2 body=286 status=ok
// SIG undefined FUN_146ee86a2(void)

void FUN_146ee86a2(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = param_2[2];
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    local_48 = *(undefined8 *)(param_3 + 4);
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar3 = (undefined8 *)FUN_14001cc68(0x48,8);
    *puVar3 = &PTR_LAB_149f6d4e0;
    puVar3[1] = param_1;
    puVar3[2] = local_38;
    puVar3[3] = uStack_30;
    puVar3[4] = local_28;
    puVar3[7] = local_48;
    puVar3[5] = CONCAT44(uStack_54,local_58);
    puVar3[6] = CONCAT44(uStack_4c,uStack_50);
    puVar3[8] = lVar1;
    pcVar4 = FUN_142a2653e;
    if (puVar3 + 1 == (longlong *)0x0) {
      pcVar4 = (code *)0x0;
    }
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = pcVar4;
    puVar2[0xc] = puVar3;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee87c2 FUN_146ee87c2 body=159 status=ok
// SIG undefined FUN_146ee87c2(void)

void FUN_146ee87c2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a26d22;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d520;
    puVar2[0xf] = param_1;
    puVar2[0x10] = lVar1;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee8862 FUN_146ee8862 body=185 status=ok
// SIG undefined FUN_146ee8862(void)

void FUN_146ee8862(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = FUN_142a26d6e;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d540;
    puVar2[0xf] = param_1;
    *(undefined4 *)(puVar2 + 0x10) = param_2;
    *(undefined1 *)((longlong)puVar2 + 0x84) = param_3;
    puVar2[0x11] = lVar1;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee891c FUN_146ee891c body=383 status=ok
// SIG undefined FUN_146ee891c(void)

void FUN_146ee891c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    local_c8 = *param_2;
    uStack_c0 = param_2[1];
    local_b8 = param_2[2];
    local_e8 = *(undefined4 *)(param_2 + 3);
    uStack_e4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_e0 = *(undefined4 *)(param_2 + 4);
    uStack_dc = *(undefined4 *)((longlong)param_2 + 0x24);
    local_d8 = param_2[5];
    puVar6 = local_a8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *param_3;
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar3 = (undefined8 *)FUN_14001cc68(0xc0);
    *puVar3 = &PTR_LAB_149f6d560;
    puVar3[2] = param_1;
    puVar3[3] = local_c8;
    puVar3[4] = uStack_c0;
    puVar3[5] = local_b8;
    puVar3[6] = CONCAT44(uStack_e4,local_e8);
    puVar3[7] = CONCAT44(uStack_dc,uStack_e0);
    puVar3[8] = local_d8;
    puVar6 = local_a8;
    puVar7 = puVar3 + 10;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(puVar3 + 0x16) = param_4;
    *(undefined4 *)((longlong)puVar3 + 0xb4) = param_5;
    puVar3[0x17] = lVar1;
    pcVar5 = FUN_142a26f12;
    if (puVar3 + 2 == (longlong *)0x0) {
      pcVar5 = (code *)0x0;
    }
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = pcVar5;
    puVar2[0xc] = puVar3;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee8a9c FUN_146ee8a9c body=159 status=ok
// SIG undefined FUN_146ee8a9c(void)

void FUN_146ee8a9c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = FUN_142a2752a;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d580;
    puVar2[0xf] = param_1;
    puVar2[0x10] = lVar1;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee8b3c FUN_146ee8b3c body=344 status=ok
// SIG undefined FUN_146ee8b3c(void)

void FUN_146ee8b3c(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    local_68 = *(undefined8 *)(param_3 + 4);
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    uVar1 = *param_2;
    puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar4 = (undefined8 *)FUN_14001cc68(0x48,8);
    *puVar4 = &PTR_LAB_149f6d5a0;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = param_4;
    *(undefined4 *)((longlong)puVar4 + 0x14) = param_7;
    *(undefined4 *)(puVar4 + 3) = param_5;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = param_6;
    puVar4[4] = lVar2;
    puVar4[5] = CONCAT44(uStack_74,local_78);
    puVar4[6] = CONCAT44(uStack_6c,uStack_70);
    puVar4[7] = local_68;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    pcVar5 = FUN_142a275b2;
    if (puVar4 + 1 == (longlong *)0x0) {
      pcVar5 = (code *)0x0;
    }
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined2 *)(puVar3 + 8) = 1;
    *puVar3 = &PTR_FUN_149f45dc0;
    puVar3[10] = pcVar5;
    puVar3[0xc] = puVar4;
    puVar3[0x12] = 0;
    puVar3[0x14] = 0;
    *(undefined1 *)(puVar3 + 0x1a) = 0;
    FUN_1406e6496(lVar2 + 0x70,puVar3);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee8c96 FUN_146ee8c96 body=344 status=ok
// SIG undefined FUN_146ee8c96(void)

void FUN_146ee8c96(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    local_68 = *(undefined8 *)(param_3 + 4);
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    uVar1 = *param_2;
    puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar4 = (undefined8 *)FUN_14001cc68(0x48,8);
    *puVar4 = &PTR_LAB_149f6d5c0;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = param_4;
    *(undefined4 *)((longlong)puVar4 + 0x14) = param_7;
    *(undefined4 *)(puVar4 + 3) = param_5;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = param_6;
    puVar4[4] = lVar2;
    puVar4[5] = CONCAT44(uStack_74,local_78);
    puVar4[6] = CONCAT44(uStack_6c,uStack_70);
    puVar4[7] = local_68;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    pcVar5 = FUN_142a27954;
    if (puVar4 + 1 == (longlong *)0x0) {
      pcVar5 = (code *)0x0;
    }
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined2 *)(puVar3 + 8) = 1;
    *puVar3 = &PTR_FUN_149f45dc0;
    puVar3[10] = pcVar5;
    puVar3[0xc] = puVar4;
    puVar3[0x12] = 0;
    puVar3[0x14] = 0;
    *(undefined1 *)(puVar3 + 0x1a) = 0;
    FUN_1406e6496(lVar2 + 0x70,puVar3);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee8df0 FUN_146ee8df0 body=258 status=ok
// SIG undefined FUN_146ee8df0(void)

void FUN_146ee8df0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = *param_2;
    local_30 = *(undefined8 *)(param_3 + 4);
    local_40 = *param_3;
    uStack_3c = param_3[1];
    uStack_38 = param_3[2];
    uStack_34 = param_3[3];
    puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar4 = (undefined8 *)FUN_14001cc68(0x38,8);
    *puVar4 = &PTR_LAB_149f6d5e0;
    puVar4[1] = param_1;
    puVar4[2] = lVar2;
    *(undefined4 *)(puVar4 + 3) = uVar1;
    puVar4[4] = CONCAT44(uStack_3c,local_40);
    puVar4[5] = CONCAT44(uStack_34,uStack_38);
    puVar4[6] = local_30;
    pcVar5 = FUN_142a27d12;
    if (puVar4 + 1 == (longlong *)0x0) {
      pcVar5 = (code *)0x0;
    }
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined2 *)(puVar3 + 8) = 1;
    *puVar3 = &PTR_FUN_149f45dc0;
    puVar3[10] = pcVar5;
    puVar3[0xc] = puVar4;
    puVar3[0x12] = 0;
    puVar3[0x14] = 0;
    *(undefined1 *)(puVar3 + 0x1a) = 0;
    FUN_1406e6496(lVar2 + 0x70,puVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee8ef4 FUN_146ee8ef4 body=258 status=ok
// SIG undefined FUN_146ee8ef4(void)

void FUN_146ee8ef4(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = *param_2;
    local_30 = *(undefined8 *)(param_3 + 4);
    local_40 = *param_3;
    uStack_3c = param_3[1];
    uStack_38 = param_3[2];
    uStack_34 = param_3[3];
    puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar4 = (undefined8 *)FUN_14001cc68(0x38,8);
    *puVar4 = &PTR_LAB_149f6d600;
    puVar4[1] = param_1;
    puVar4[2] = lVar2;
    *(undefined4 *)(puVar4 + 3) = uVar1;
    puVar4[4] = CONCAT44(uStack_3c,local_40);
    puVar4[5] = CONCAT44(uStack_34,uStack_38);
    puVar4[6] = local_30;
    pcVar5 = FUN_142a28012;
    if (puVar4 + 1 == (longlong *)0x0) {
      pcVar5 = (code *)0x0;
    }
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined2 *)(puVar3 + 8) = 1;
    *puVar3 = &PTR_FUN_149f45dc0;
    puVar3[10] = pcVar5;
    puVar3[0xc] = puVar4;
    puVar3[0x12] = 0;
    puVar3[0x14] = 0;
    *(undefined1 *)(puVar3 + 0x1a) = 0;
    FUN_1406e6496(lVar2 + 0x70,puVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee8ff8 FUN_146ee8ff8 body=254 status=ok
// SIG undefined FUN_146ee8ff8(void)

void FUN_146ee8ff8(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = *param_2;
    local_30 = *(undefined8 *)(param_3 + 4);
    local_40 = *param_3;
    uStack_3c = param_3[1];
    uStack_38 = param_3[2];
    uStack_34 = param_3[3];
    puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
    *puVar4 = &PTR_LAB_149f6d620;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = uVar1;
    puVar4[3] = CONCAT44(uStack_3c,local_40);
    puVar4[4] = CONCAT44(uStack_34,uStack_38);
    puVar4[5] = local_30;
    pcVar5 = FUN_142a28312;
    if (puVar4 + 1 == (longlong *)0x0) {
      pcVar5 = (code *)0x0;
    }
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined2 *)(puVar3 + 8) = 1;
    *puVar3 = &PTR_FUN_149f45dc0;
    puVar3[10] = pcVar5;
    puVar3[0xc] = puVar4;
    puVar3[0x12] = 0;
    puVar3[0x14] = 0;
    *(undefined1 *)(puVar3 + 0x1a) = 0;
    FUN_1406e6496(lVar2 + 0x70,puVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee90f8 FUN_146ee90f8 body=254 status=ok
// SIG undefined FUN_146ee90f8(void)

void FUN_146ee90f8(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = *param_2;
    local_30 = *(undefined8 *)(param_3 + 4);
    local_40 = *param_3;
    uStack_3c = param_3[1];
    uStack_38 = param_3[2];
    uStack_34 = param_3[3];
    puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
    *puVar4 = &PTR_LAB_149f6d640;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = uVar1;
    puVar4[3] = CONCAT44(uStack_3c,local_40);
    puVar4[4] = CONCAT44(uStack_34,uStack_38);
    puVar4[5] = local_30;
    pcVar5 = FUN_142a283f2;
    if (puVar4 + 1 == (longlong *)0x0) {
      pcVar5 = (code *)0x0;
    }
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined2 *)(puVar3 + 8) = 1;
    *puVar3 = &PTR_FUN_149f45dc0;
    puVar3[10] = pcVar5;
    puVar3[0xc] = puVar4;
    puVar3[0x12] = 0;
    puVar3[0x14] = 0;
    *(undefined1 *)(puVar3 + 0x1a) = 0;
    FUN_1406e6496(lVar2 + 0x70,puVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee91f8 FUN_146ee91f8 body=163 status=ok
// SIG undefined FUN_146ee91f8(void)

void FUN_146ee91f8(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a284d2;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d660;
    puVar2[0xf] = param_1;
    *(undefined1 *)(puVar2 + 0x10) = param_2;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee929c FUN_146ee929c body=163 status=ok
// SIG undefined FUN_146ee929c(void)

void FUN_146ee929c(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a28522;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d680;
    puVar2[0xf] = param_1;
    *(undefined1 *)(puVar2 + 0x10) = param_2;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee9340 FUN_146ee9340 body=1 status=ok
// SIG undefined FUN_146ee9340(void)

void FUN_146ee9340(void)

{
  return;
}



// FUNCTION 146ee9342 FUN_146ee9342 body=179 status=ok
// SIG undefined FUN_146ee9342(void)

void FUN_146ee9342(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a28572;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d6a0;
    puVar2[0xf] = param_1;
    *(undefined1 *)(puVar2 + 0x10) = param_2;
    *(undefined1 *)((longlong)puVar2 + 0x81) = param_3;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee93f6 FUN_146ee93f6 body=163 status=ok
// SIG undefined FUN_146ee93f6(void)

void FUN_146ee93f6(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a285da;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d6c0;
    puVar2[0xf] = param_1;
    *(undefined1 *)(puVar2 + 0x10) = param_2;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee949a FUN_146ee949a body=1 status=ok
// SIG undefined FUN_146ee949a(void)

void FUN_146ee949a(void)

{
  return;
}



// FUNCTION 146ee949c FUN_146ee949c body=179 status=ok
// SIG undefined FUN_146ee949c(void)

void FUN_146ee949c(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a2864c;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d6e0;
    puVar2[0xf] = param_1;
    *(undefined1 *)(puVar2 + 0x10) = param_2;
    *(undefined1 *)((longlong)puVar2 + 0x81) = param_3;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146ee9550 FUN_146ee9550 body=319 status=ok
// SIG undefined FUN_146ee9550(void)

undefined4 FUN_146ee9550(int param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined1 local_70 [32];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x800000000;
  lVar9 = (longlong)param_1;
  iVar5 = *(int *)(*(longlong *)(param_2 + 0x10) + lVar9 * 4);
  if (iVar5 != -1) {
    iVar1 = 1;
    do {
      iVar7 = iVar1;
      uVar3 = local_48;
      iVar1 = *(int *)(*(longlong *)(param_3 + 0x10) + (longlong)iVar5 * 4);
      if (0 < iVar1) {
        *(int *)(*(longlong *)(param_3 + 0x10) + lVar9 * 4) = iVar1 + iVar7;
        break;
      }
      lVar8 = (longlong)(int)local_48;
      uVar4 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,uVar4);
      if (local_48._4_4_ < uVar4) {
        FUN_1400cc390(local_70,uVar3 & 0xffffffff);
      }
      puVar6 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar6 = local_70;
      }
      *(int *)(puVar6 + lVar8 * 4) = iVar5;
      iVar5 = *(int *)(*(longlong *)(param_2 + 0x10) + (longlong)iVar5 * 4);
      iVar1 = iVar7 + 1;
    } while (iVar5 != -1);
    if (*(int *)(*(longlong *)(param_3 + 0x10) + lVar9 * 4) == 0) {
      *(int *)(*(longlong *)(param_3 + 0x10) + lVar9 * 4) = iVar7;
    }
    if (0 < (int)local_48) {
      iVar5 = -1;
      lVar8 = 0;
      do {
        puVar6 = local_50;
        if (local_50 == (undefined1 *)0x0) {
          puVar6 = local_70;
        }
        *(int *)(*(longlong *)(param_3 + 0x10) + (longlong)*(int *)(puVar6 + lVar8 * 4) * 4) =
             *(int *)(*(longlong *)(param_3 + 0x10) + lVar9 * 4) + iVar5;
        lVar8 = lVar8 + 1;
        iVar5 = iVar5 + -1;
      } while (lVar8 < (int)local_48);
    }
  }
  uVar2 = *(undefined4 *)(*(longlong *)(param_3 + 0x10) + lVar9 * 4);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146ee9690 FUN_146ee9690 body=692 status=ok
// SIG undefined FUN_146ee9690(void)

void FUN_146ee9690(longlong param_1,double *param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  double *pdVar18;
  double *pdVar19;
  undefined1 auStack_f8 [32];
  double local_d8 [13];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  auVar6._8_8_ = -(ulonglong)
                  (9.999999747378752e-05 < ABS(param_2[5] - *(double *)(param_1 + 0x268)));
  auVar6._0_8_ = -(ulonglong)
                  (9.999999747378752e-05 < ABS(param_2[4] - *(double *)(param_1 + 0x260)));
  iVar10 = movmskpd((int)local_70,auVar6);
  auVar4._8_8_ = -(ulonglong)
                  (9.999999747378752e-05 < ABS(param_2[7] - *(double *)(param_1 + 0x278)));
  auVar4._0_8_ = -(ulonglong)
                  (9.999999747378752e-05 < ABS(param_2[6] - *(double *)(param_1 + 0x270)));
  uVar13 = movmskpd((int)param_1,auVar4);
  if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
    lVar15 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[1] - *(double *)(param_1 + 0x248)));
    auVar9._8_4_ = (int)lVar15;
    auVar9._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS(*param_2 - *(double *)(param_1 + 0x240)));
    auVar9._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
    uVar13 = movmskpd(iVar10,auVar9);
    lVar15 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[3] - *(double *)(param_1 + 600)));
    auVar8._8_4_ = (int)lVar15;
    auVar8._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS(param_2[2] - *(double *)(param_1 + 0x250)));
    auVar8._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
    iVar10 = movmskpd(0,auVar8);
    uVar14 = iVar10 << 2 | uVar13;
    if (uVar14 != 0) {
      auVar7._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(param_2[1] + *(double *)(param_1 + 0x248)));
      auVar7._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(*param_2 + *(double *)(param_1 + 0x240)));
      uVar13 = movmskpd(uVar13,auVar7);
      auVar5._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(param_2[3] + *(double *)(param_1 + 600)));
      auVar5._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(param_2[2] + *(double *)(param_1 + 0x250)));
      uVar14 = movmskpd(uVar14,auVar5);
      if ((uVar14 & 0x3fffffff) != 0 || uVar13 != 0) goto LAB_146ee9727;
    }
    auVar3._8_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS(param_2[9] - *(double *)(param_1 + 0x288)));
    auVar3._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS(param_2[8] - *(double *)(param_1 + 0x280)));
    iVar10 = movmskpd(uVar13,auVar3);
    auVar2._8_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS(param_2[0xb] - *(double *)(param_1 + 0x298)));
    auVar2._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS(param_2[10] - *(double *)(param_1 + 0x290)));
    uVar13 = movmskpd(0,auVar2);
    if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) goto LAB_146ee9830;
  }
LAB_146ee9727:
  bVar1 = *(byte *)(param_1 + 0x319);
  *(byte *)(param_1 + 0x319) = bVar1 | 1;
  pdVar18 = (double *)(param_1 + 0x240);
  pdVar19 = (double *)(param_1 + 0x2a0);
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *pdVar19 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    pdVar19 = pdVar19 + 1;
  }
  pdVar18 = param_2;
  pdVar19 = (double *)(param_1 + 0x240);
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *pdVar19 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    pdVar19 = pdVar19 + 1;
  }
  pdVar18 = local_d8;
  for (lVar15 = 0xc; pdVar18 = pdVar18 + 1, lVar15 != 0; lVar15 = lVar15 + -1) {
    *pdVar18 = *param_2;
    param_2 = param_2 + 1;
  }
  lVar15 = *(longlong *)(param_1 + 8);
  if (lVar15 != 0) {
    puVar11 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar12 = (undefined8 *)FUN_14001cc68(0x90);
    *puVar12 = &PTR_LAB_149f6d700;
    puVar12[2] = param_1;
    pdVar18 = local_d8;
    pdVar19 = (double *)(puVar12 + 3);
    for (lVar16 = 0xd; lVar16 != 0; lVar16 = lVar16 + -1) {
      *pdVar19 = *pdVar18;
      pdVar18 = pdVar18 + 1;
      pdVar19 = pdVar19 + 1;
    }
    *(byte *)(puVar12 + 0x10) = bVar1 >> 7;
    puVar17 = &LAB_142a286b4;
    if (puVar12 + 2 == (longlong *)0x0) {
      puVar17 = (undefined1 *)0x0;
    }
    *(undefined2 *)(puVar11 + 1) = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    *(undefined2 *)(puVar11 + 8) = 1;
    *puVar11 = &PTR_FUN_149f45dc0;
    puVar11[10] = puVar17;
    puVar11[0xc] = puVar12;
    puVar11[0x12] = 0;
    puVar11[0x14] = 0;
    *(undefined1 *)(puVar11 + 0x1a) = 0;
    FUN_1406e6496(lVar15 + 0x70,puVar11);
  }
LAB_146ee9830:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ee9946 FUN_146ee9946 body=266 status=ok
// SIG undefined FUN_146ee9946(void)

void FUN_146ee9946(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = *(int *)(param_1 + 0x304);
  if (0 < iVar5) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x340) + lVar6 * 8);
      if (plVar3 != (longlong *)0x0) {
        if (lVar2 != 0) {
          plVar4 = *(longlong **)(lVar2 + 0x9c8);
          FUN_1400d25b0(plVar4 + 0x20,plVar3);
          (**(code **)(*plVar4 + 0x18))(plVar4,plVar3);
        }
        local_48 = *(undefined8 **)(*(longlong *)(*plVar3 + 0x60) + (longlong)(int)plVar3[1] * 8);
        if (local_48 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_48 + 1) = *(int *)(local_48 + 1) + 1;
          UNLOCK();
        }
        FUN_1429c9720(plVar3,&local_48,param_2);
        if (local_48 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_48 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)((longlong)local_48 + 0xc) == 0)) {
            (**(code **)*local_48)(local_48,1);
          }
        }
        FUN_140b31ff4(plVar3,0);
        iVar5 = *(int *)(param_1 + 0x304);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ee9a52 FUN_146ee9a52 body=7175 status=ok
// SIG undefined FUN_146ee9a52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ee9a52(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  double *pdVar15;
  int iVar16;
  longlong lVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 auVar43 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar55;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar56;
  double dVar57;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar74;
  undefined1 auVar73 [16];
  double dVar75;
  double dVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined1 auStack_4b8 [32];
  undefined1 local_498;
  char local_489;
  undefined1 local_488 [16];
  double local_478;
  double dStack_470;
  undefined1 local_468 [24];
  longlong *local_450;
  longlong local_448;
  longlong local_440;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  longlong *local_310;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  int local_294;
  undefined1 local_290 [8];
  undefined1 *local_288;
  int local_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  puVar23 = (undefined8 *)(param_1 + 0xa0);
  for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar23 = *param_2;
    param_2 = param_2 + 1;
    puVar23 = puVar23 + 1;
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_29c = 0xffffffff00000080;
  local_294 = 0;
  local_288 = (undefined1 *)0x0;
  local_280 = 0;
  lVar17 = *(longlong *)(param_1 + 8);
  if (lVar17 != 0) {
    lVar27 = *(longlong *)(lVar17 + 0x9c8) + 0x560;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_308 = 0;
    uStack_300 = 0;
    lVar13 = FUN_1401466c8(*(undefined8 *)(param_1 + 0x58),DAT_14c997500,DAT_14c9974a8);
    if (0 < *(int *)(param_1 + 0x304)) {
      iVar10 = -1;
      local_450 = (longlong *)(param_1 + 0x6d8);
      uVar77 = 0;
      uVar78 = 0x3ff00000;
      uVar79 = 0;
      uVar80 = 0x3ff00000;
      lVar21 = 0;
      local_489 = param_3;
      local_448 = lVar13;
      local_440 = lVar17;
      do {
        plVar25 = *(longlong **)(*(longlong *)(param_1 + 0x340) + lVar21 * 8);
        iVar16 = iVar10;
        if (plVar25 != (longlong *)0x0) {
          lVar17 = (longlong)(int)plVar25[1];
          lVar13 = lVar17 * 0x10;
          local_310 = *(longlong **)(*(longlong *)(*plVar25 + 0x5a8) + lVar13);
          if (local_310 == (longlong *)0x0) {
            local_310 = (longlong *)0x0;
          }
          else if (*(byte *)((longlong)local_310 + 0xc) < 3) {
            local_310 = (longlong *)0x0;
          }
          lVar26 = *plVar25;
          if ((*(char *)(*(longlong *)(lVar26 + 0x2c0) + 0xd + lVar13) == '\0') &&
             (*(char *)(*(longlong *)(lVar26 + 0x2c0) + 0xb + lVar13) == '\x02')) {
LAB_146ee9f8b:
            lVar13 = *(longlong *)(lVar26 + 0x48);
            lVar22 = lVar17 * 0x10;
            dStack_360 = (double)*(float *)(lVar13 + 0xc + lVar22);
            local_368 = (double)*(float *)(lVar13 + 8 + lVar22);
            dStack_370 = (double)*(float *)(lVar13 + 4 + lVar22);
            local_378 = (double)*(float *)(lVar13 + lVar22);
            puVar23 = (undefined8 *)(*(longlong *)(lVar26 + 0x28) + lVar17 * 0x18);
            local_358 = *puVar23;
            uStack_350 = puVar23[1];
            local_348 = *(undefined8 *)(*(longlong *)(lVar26 + 0x28) + 0x10 + lVar17 * 0x18);
            uStack_340 = 0;
            local_328 = 0x3ff0000000000000;
            uStack_320 = 0;
            pdVar15 = &local_378;
            local_338 = uVar77;
            uStack_334 = uVar78;
            uStack_330 = uVar79;
            uStack_32c = uVar80;
            uVar11 = FUN_1449437a2(pdVar15,local_3d8,param_1 + 0x100);
            local_408 = ZEXT816(0);
            local_418 = ZEXT816(0);
            auVar52 = *(undefined1 (*) [16])(param_1 + 0xe0);
            dVar40 = auVar52._0_8_;
            dVar6 = auVar52._8_8_;
            auVar31 = *(undefined1 (*) [16])(param_1 + 0xf0);
            dVar57 = auVar31._0_8_;
            dVar4 = local_398._0_8_;
            dVar46 = local_398._8_8_;
            dVar30 = local_388._0_8_;
            dVar66 = local_388._8_8_;
            auVar52 = minpd(local_398,auVar52);
            auVar41 = minpd(local_388,auVar31);
            auVar49._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
            auVar49._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
            iVar10 = movmskpd(uVar11,auVar49);
            auVar59._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
            auVar59._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
            uVar20 = movmskpd((int)pdVar15,auVar59);
            if ((uVar20 & 0x3fffffff) == 0 && iVar10 == 0) {
              dVar39 = *(double *)(param_1 + 0xa0);
              dVar48 = *(double *)(param_1 + 0xa8);
              dVar69 = *(double *)(param_1 + 0xb0);
              dVar74 = *(double *)(param_1 + 0xb8);
              dVar58 = *(double *)(param_1 + 0xb8);
              dVar44 = *(double *)(param_1 + 0xb8);
              dVar55 = *(double *)(param_1 + 0xa0);
              dVar45 = *(double *)(param_1 + 0xa0);
              dVar47 = *(double *)(param_1 + 0xa8);
              dVar56 = *(double *)(param_1 + 0xa8);
              dVar65 = *(double *)(param_1 + 0xb0);
              dVar29 = *(double *)(param_1 + 0xb0);
              local_438._0_8_ =
                   (double)local_3d8._8_8_ * dVar65 * -1.0 +
                   (double)local_3c8._0_8_ * dVar47 +
                   (double)local_3c8._8_8_ * dVar55 * 1.0 + (double)local_3d8._0_8_ * dVar58;
              local_438._8_8_ =
                   (double)local_3d8._0_8_ * dVar29 * 1.0 +
                   (double)local_3c8._8_8_ * dVar56 +
                   (double)local_3c8._0_8_ * dVar45 * -1.0 + (double)local_3d8._8_8_ * dVar44;
              local_428._0_8_ =
                   (double)local_3c8._8_8_ * dVar65 * 1.0 +
                   ((dVar55 * (double)local_3d8._8_8_ * 1.0 + (double)local_3c8._0_8_ * dVar58) -
                   (double)local_3d8._0_8_ * dVar47);
              local_428._8_8_ =
                   (double)local_3c8._0_8_ * dVar29 * -1.0 +
                   ((dVar45 * (double)local_3d8._0_8_ * -1.0 + (double)local_3c8._8_8_ * dVar44) -
                   (double)local_3d8._8_8_ * dVar56);
              dVar65 = (double)local_3b8._0_8_ * dVar40;
              dVar56 = (double)local_3b8._8_8_ * dVar6;
              dVar70 = (double)local_3a8._0_8_ * dVar57;
              dVar75 = (double)local_3a8._8_8_ * auVar31._8_8_;
              dVar55 = dVar56 * dVar39 - dVar48 * dVar65;
              dVar45 = dVar70 * dVar48 - dVar69 * dVar56;
              dVar47 = dVar65 * dVar69 - dVar39 * dVar70;
              dVar29 = dVar75 * dVar74 - dVar74 * dVar75;
              dVar45 = dVar45 + dVar45;
              dVar47 = dVar47 + dVar47;
              dVar55 = dVar55 + dVar55;
              dVar29 = dVar29 + dVar29;
              uVar77 = 0;
              uVar78 = 0x3ff00000;
              uVar79 = 0;
              uVar80 = 0x3ff00000;
              dVar56 = (dVar45 * dVar69 - dVar55 * dVar39) + dVar44 * dVar47 + dVar56 +
                       *(double *)(param_1 + 200);
              dVar44 = (dVar29 * dVar74 - dVar29 * dVar74) + dVar44 * dVar29 + dVar75 +
                       *(double *)(param_1 + 0xd8);
              local_418._8_4_ = SUB84(dVar56,0);
              local_418._0_8_ =
                   (dVar55 * dVar48 - dVar69 * dVar47) + dVar58 * dVar45 + dVar65 +
                   *(double *)(param_1 + 0xc0);
              local_418._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
              local_408._8_4_ = SUB84(dVar44,0);
              local_408._0_8_ =
                   (dVar47 * dVar39 - dVar48 * dVar45) + dVar58 * dVar55 + dVar70 +
                   *(double *)(param_1 + 0xd0);
              local_408._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
            }
            else {
              dVar55 = *(double *)(param_1 + 0xa0);
              dVar45 = *(double *)(param_1 + 0xa8);
              dVar58 = *(double *)(param_1 + 0xb0);
              dVar47 = dVar45 + dVar45;
              dVar56 = dVar58 + dVar58;
              dVar39 = dVar55 * (dVar55 + dVar55);
              local_1a8 = (1.0 - (dVar39 + dVar45 * dVar47)) * dVar57;
              dVar48 = *(double *)(param_1 + 0xa0) * dVar56;
              dVar44 = *(double *)(param_1 + 0xb8);
              dVar65 = dVar56 * dVar44;
              dVar29 = (dVar55 + dVar55) * *(double *)(param_1 + 0xb8);
              dVar44 = dVar47 * dVar44;
              local_1b8 = (dVar44 + dVar48) * dVar57;
              local_1f8 = ((double)CONCAT44(uVar78,uVar77) - (dVar58 * dVar56 + dVar45 * dVar47)) *
                          dVar40;
              dVar58 = ((double)CONCAT44(uVar80,uVar79) - (dVar58 * dVar56 + dVar39)) * dVar6;
              dStack_1f0 = (dVar47 * dVar55 + dVar65) * dVar40;
              local_1c8 = (dVar56 * dVar45 + dVar29) * dVar6;
              dStack_1b0 = (dVar56 * dVar45 - dVar29) * dVar57;
              local_1e8 = (dVar48 - dVar44) * dVar40;
              uStack_1e0 = 0;
              local_1d8._8_4_ = SUB84(dVar58,0);
              local_1d8._0_8_ = (dVar47 * dVar55 - dVar65) * dVar6;
              local_1d8._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = *(double *)(param_1 + 0xc0);
              dStack_190 = *(double *)(param_1 + 200);
              local_188 = *(double *)(param_1 + 0xd0);
              uStack_180 = 0x3ff0000000000000;
              dVar44 = (double)local_3d8._8_8_ + (double)local_3d8._8_8_;
              dVar58 = (double)local_3c8._0_8_ + (double)local_3c8._0_8_;
              dVar45 = (double)local_3d8._0_8_ * ((double)local_3d8._0_8_ + (double)local_3d8._0_8_)
              ;
              local_228 = (1.0 - (dVar45 + (double)local_3d8._8_8_ * dVar44)) * dVar30;
              dVar55 = ((double)local_3d8._0_8_ + (double)local_3d8._0_8_) * (double)local_3c8._8_8_
              ;
              local_238 = (dVar44 * (double)local_3c8._8_8_ + (double)local_3d8._0_8_ * dVar58) *
                          dVar30;
              dStack_230 = (dVar58 * (double)local_3d8._8_8_ - dVar55) * dVar30;
              local_278 = ((double)CONCAT44(uVar78,uVar77) -
                          ((double)local_3c8._0_8_ * dVar58 + (double)local_3d8._8_8_ * dVar44)) *
                          dVar4;
              dStack_270 = (dVar44 * (double)local_3d8._0_8_ + dVar58 * (double)local_3c8._8_8_) *
                           dVar4;
              local_248 = (dVar58 * (double)local_3d8._8_8_ + dVar55) * dVar46;
              local_268 = ((double)local_3d8._0_8_ * dVar58 - dVar44 * (double)local_3c8._8_8_) *
                          dVar4;
              uStack_260 = 0;
              local_258._8_8_ =
                   ((double)CONCAT44(uVar80,uVar79) - ((double)local_3c8._0_8_ * dVar58 + dVar45)) *
                   dVar46;
              local_258._0_8_ =
                   (dVar44 * (double)local_3d8._0_8_ - dVar58 * (double)local_3c8._8_8_) * dVar46;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = (double)local_3b8._0_8_;
              dStack_210 = (double)local_3b8._8_8_;
              local_208._8_8_ = 0x3ff0000000000000;
              local_208._0_8_ = local_3a8._0_8_;
              FUN_1447fea8d(local_178,&local_278,&local_1f8);
              FUN_144a1c686(local_178,0x3e45798ee0000000);
              auVar33._8_8_ = -(ulonglong)(0.0 <= dVar6 * dVar46);
              auVar33._0_8_ = -(ulonglong)(0.0 <= dVar40 * dVar4);
              auVar5._4_4_ = uVar78;
              auVar5._0_4_ = uVar77;
              auVar5._8_4_ = uVar79;
              auVar5._12_4_ = uVar80;
              auVar52 = blendvpd(_DAT_149936790,auVar5,auVar33);
              uVar28 = -(ulonglong)(0.0 <= dVar57 * dVar30);
              dVar44 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
              dVar58 = auVar52._0_8_;
              local_168 = local_168 * dVar58;
              local_178._8_8_ = (double)local_178._8_8_ * dVar58;
              local_178._0_8_ = (double)local_178._0_8_ * dVar58;
              dVar58 = auVar52._8_8_;
              local_148 = local_148 * dVar58;
              local_150 = local_150 * dVar58;
              local_158 = dVar58 * local_158;
              local_128 = local_128 * dVar44;
              local_130 = local_130 * dVar44;
              local_138 = dVar44 * local_138;
              FUN_14481fd10(&local_2e8,local_178);
              dVar44 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
              dVar58 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
              auVar50._0_8_ = dVar44 + dVar58;
              auVar50._8_8_ = dVar44 + dVar58;
              auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
              auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
              auVar52 = sqrtpd(auVar50,auVar50);
              auVar60._4_4_ = uVar78;
              auVar60._0_4_ = uVar77;
              auVar60._12_4_ = uVar80;
              auVar60._8_4_ = uVar79;
              auVar52 = divpd(auVar60,auVar52);
              auVar61._0_8_ = auVar52._0_8_ * local_2d8;
              auVar61._8_8_ = auVar52._8_8_ * dStack_2d0;
              local_428 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar61,auVar34);
              local_438._8_8_ =
                   (ulonglong)(dStack_2e0 * auVar52._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
              local_438._0_8_ =
                   (ulonglong)(local_2e8 * auVar52._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
              local_408._8_8_ = 0;
              local_408._0_8_ = local_108;
              local_418._8_8_ = dStack_110;
              local_418._0_8_ = local_118;
            }
            dVar66 = dVar66 * auVar31._8_8_;
            local_3f8._8_4_ = SUB84(dVar46 * dVar6,0);
            local_3f8._0_8_ = dVar4 * dVar40;
            local_3f8._12_4_ = (int)((ulonglong)(dVar46 * dVar6) >> 0x20);
            local_3e8._8_4_ = SUB84(dVar66,0);
            local_3e8._0_8_ = dVar30 * dVar57;
            local_3e8._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
            FUN_146eeb65a(param_1,plVar25,local_438);
          }
          else if (local_310 != (longlong *)0x0) {
            lVar17 = *local_310;
            lVar26 = (longlong)(int)local_310[1];
            lVar13 = *(longlong *)(lVar17 + 0x2c0);
            if (((((*(byte *)(*(longlong *)(lVar17 + 0x680) + lVar26) & 1) == 0) ||
                 (*(char *)(lVar13 + 0xd + lVar26 * 0x10) != '\0')) ||
                (*(char *)(lVar13 + 0xb + lVar26 * 0x10) != '\x02')) ||
               (*(longlong *)(*(longlong *)(lVar17 + 200) + lVar26 * 8) != param_1)) {
LAB_146ee9c72:
              lVar22 = lVar26 * 0x10;
              cVar3 = *(char *)(lVar13 + 0xb + lVar22);
              if ((cVar3 != '\x01') && (cVar3 != '\x04')) {
                if (iVar10 == -1) {
                  iVar10 = FUN_140196188(lVar27,plVar25);
                  iVar16 = -1;
                  if (iVar10 == -1) goto LAB_146ee9c88;
                }
                lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x400) + lVar21 * 4);
                lVar13 = *(longlong *)(lVar17 + 0x48);
                dStack_360 = (double)*(float *)(lVar13 + 0xc + lVar22);
                local_368 = (double)*(float *)(lVar13 + 8 + lVar22);
                dStack_370 = (double)*(float *)(lVar13 + 4 + lVar22);
                local_378 = (double)*(float *)(lVar13 + lVar22);
                puVar23 = (undefined8 *)(*(longlong *)(lVar17 + 0x28) + lVar26 * 0x18);
                local_358 = *puVar23;
                uStack_350 = puVar23[1];
                local_348 = *(undefined8 *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar26 * 0x18);
                uStack_340 = 0;
                local_328 = 0x3ff0000000000000;
                uStack_320 = 0;
                plVar19 = local_450;
                if (*(char *)(param_1 + 0x6e8) == '\0') {
                  plVar19 = (longlong *)(*(longlong *)(param_1 + 0x688) + 0xc0);
                }
                pdVar15 = (double *)(lVar14 * 0x60 + *(longlong *)(local_448 + 0x10));
                lVar17 = *plVar19;
                lVar14 = lVar14 * 0x30;
                uVar1 = *(undefined8 *)(lVar17 + 0x20 + lVar14);
                dVar6 = (double)(float)uVar1;
                dVar46 = (double)(float)((ulonglong)uVar1 >> 0x20);
                uVar1 = *(undefined8 *)(lVar17 + 0x28 + lVar14);
                dVar66 = (double)(float)uVar1;
                dVar44 = (double)(float)((ulonglong)uVar1 >> 0x20);
                uVar1 = *(undefined8 *)(lVar17 + 0x10 + lVar14);
                local_478 = (double)(float)uVar1;
                dStack_470 = (double)(float)((ulonglong)uVar1 >> 0x20);
                uVar1 = *(undefined8 *)(lVar17 + 0x18 + lVar14);
                dVar58 = (double)(float)uVar1;
                dVar4 = (double)(float)*(undefined8 *)(lVar17 + lVar14);
                dVar30 = (double)(float)((ulonglong)*(undefined8 *)(lVar17 + lVar14) >> 0x20);
                uVar2 = *(undefined8 *)(lVar17 + 8 + lVar14);
                dVar40 = (double)(float)uVar2;
                dVar57 = (double)(float)((ulonglong)uVar2 >> 0x20);
                local_488 = *(undefined1 (*) [16])(pdVar15 + 8);
                auVar52 = *(undefined1 (*) [16])(pdVar15 + 10);
                auVar31._8_4_ = SUB84(dVar46,0);
                auVar31._0_8_ = dVar6;
                auVar31._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
                auVar31 = minpd(local_488,auVar31);
                auVar41._8_4_ = SUB84(dVar44,0);
                auVar41._0_8_ = dVar66;
                auVar41._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
                auVar41 = minpd(auVar52,auVar41);
                auVar32._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
                auVar32._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
                iVar16 = movmskpd((int)lVar17,auVar32);
                auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
                auVar42._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
                uVar20 = movmskpd((int)lVar14,auVar42);
                if ((uVar20 & 0x3fffffff) == 0 && iVar16 == 0) {
                  dVar55 = *pdVar15;
                  dVar56 = pdVar15[1];
                  dVar65 = pdVar15[2];
                  dVar29 = pdVar15[3];
                  dVar45 = dVar56 * dVar40 * -1.0 +
                           dVar65 * dVar30 + dVar4 * dVar29 * 1.0 + dVar57 * dVar55;
                  dVar47 = dVar55 * dVar40 * 1.0 +
                           dVar29 * dVar30 + dVar4 * dVar65 * -1.0 + dVar57 * dVar56;
                  auVar43._0_8_ =
                       dVar29 * dVar40 * 1.0 +
                       ((dVar4 * dVar56 * 1.0 + dVar57 * dVar65) - dVar30 * dVar55);
                  auVar43._8_8_ =
                       dVar65 * dVar40 * -1.0 +
                       ((dVar4 * dVar55 * -1.0 + dVar57 * dVar29) - dVar30 * dVar56);
                  dVar56 = pdVar15[4] * dVar6;
                  dVar65 = pdVar15[5] * dVar46;
                  dVar69 = pdVar15[6] * dVar66;
                  dVar74 = pdVar15[7] * dVar44;
                  dVar29 = dVar65 * dVar4 - dVar30 * dVar56;
                  dVar39 = dVar69 * dVar30 - dVar40 * dVar65;
                  dVar48 = dVar56 * dVar40 - dVar4 * dVar69;
                  dVar55 = dVar74 * dVar57 - dVar57 * dVar74;
                  dVar39 = dVar39 + dVar39;
                  dVar48 = dVar48 + dVar48;
                  dVar29 = dVar29 + dVar29;
                  dVar55 = dVar55 + dVar55;
                  dVar55 = (dVar55 * dVar57 - dVar55 * dVar57) + dVar57 * dVar55 + dVar74 +
                           (double)(float)((ulonglong)uVar1 >> 0x20);
                  auVar73._0_8_ = (double)local_488._0_8_ * dVar6;
                  auVar73._8_8_ = (double)local_488._8_8_ * dVar46;
                  auVar68._0_8_ = auVar52._0_8_ * dVar66;
                  auVar68._8_8_ = auVar52._8_8_ * dVar44;
                  dVar6 = (dVar48 * dVar4 - dVar30 * dVar39) + dVar57 * dVar29 + dVar69 + dVar58;
                  dVar30 = (dVar29 * dVar30 - dVar40 * dVar48) + dVar57 * dVar39 + dVar56 +
                           local_478;
                  dVar40 = (dVar39 * dVar40 - dVar29 * dVar4) + dVar57 * dVar48 + dVar65 +
                           dStack_470;
                  local_338 = uVar77;
                  uStack_334 = uVar78;
                  uStack_330 = uVar79;
                  uStack_32c = uVar80;
                }
                else {
                  dVar45 = auVar52._0_8_ * dVar66;
                  local_468._8_8_ = auVar52._8_8_ * dVar44;
                  local_468._0_8_ = dVar45;
                  auVar68 = local_468._0_16_;
                  dVar44 = dVar30 + dVar30;
                  dVar47 = dVar40 + dVar40;
                  dVar55 = (dVar4 + dVar4) * dVar4;
                  local_1a8 = (1.0 - (dVar55 + dVar44 * dVar30)) * dVar66;
                  dVar56 = (dVar4 + dVar4) * dVar57;
                  local_1b8 = (dVar4 * dVar47 + dVar44 * dVar57) * dVar66;
                  dStack_1b0 = (dVar47 * dVar30 - dVar56) * dVar66;
                  auVar73._0_8_ = (double)local_488._0_8_ * dVar6;
                  auVar73._8_8_ = (double)local_488._8_8_ * dVar46;
                  local_1f8 = ((double)CONCAT44(uVar78,uVar77) - (dVar47 * dVar40 + dVar44 * dVar30)
                              ) * dVar6;
                  dStack_1f0 = (dVar44 * dVar4 + dVar47 * dVar57) * dVar6;
                  local_1c8 = (dVar47 * dVar30 + dVar56) * dVar46;
                  local_1e8 = (dVar4 * dVar47 - dVar44 * dVar57) * dVar6;
                  uStack_1e0 = 0;
                  local_1d8._8_8_ =
                       ((double)CONCAT44(uVar80,uVar79) - (dVar47 * dVar40 + dVar55)) * dVar46;
                  local_1d8._0_8_ = (dVar44 * dVar4 - dVar47 * dVar57) * dVar46;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  uStack_180 = 0x3ff0000000000000;
                  dVar4 = *pdVar15;
                  dVar30 = pdVar15[1];
                  dVar40 = pdVar15[2];
                  local_268 = pdVar15[8];
                  dVar6 = pdVar15[9];
                  dStack_230 = pdVar15[10];
                  dVar55 = dVar30 + dVar30;
                  dVar46 = dVar40 + dVar40;
                  dVar66 = dVar4 * (dVar4 + dVar4);
                  local_278 = ((double)CONCAT44(uVar78,uVar77) - (dVar40 * dVar46 + dVar30 * dVar55)
                              ) * local_268;
                  dVar57 = ((double)CONCAT44(uVar80,uVar79) - (dVar40 * dVar46 + dVar66)) * dVar6;
                  local_228 = (1.0 - (dVar66 + dVar30 * dVar55)) * dStack_230;
                  dVar40 = pdVar15[3];
                  dVar66 = dVar46 * dVar40;
                  dVar44 = (dVar4 + dVar4) * pdVar15[3];
                  dVar40 = dVar55 * dVar40;
                  dStack_270 = (dVar55 * dVar4 + dVar66) * local_268;
                  local_248 = (dVar46 * dVar30 + dVar44) * dVar6;
                  local_238 = (dVar40 + *pdVar15 * dVar46) * dStack_230;
                  local_268 = (*pdVar15 * dVar46 - dVar40) * local_268;
                  dStack_230 = (dVar46 * dVar30 - dVar44) * dStack_230;
                  uStack_260 = 0;
                  local_258._8_4_ = SUB84(dVar57,0);
                  local_258._0_8_ = (dVar55 * dVar4 - dVar66) * dVar6;
                  local_258._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
                  uStack_240 = 0;
                  uStack_220 = 0;
                  local_218 = pdVar15[4];
                  dStack_210 = pdVar15[5];
                  local_208._8_8_ = 0x3ff0000000000000;
                  local_208._0_8_ = pdVar15[6];
                  local_338 = uVar77;
                  uStack_334 = uVar78;
                  uStack_330 = uVar79;
                  uStack_32c = uVar80;
                  local_198 = local_478;
                  dStack_190 = dStack_470;
                  local_188 = dVar58;
                  FUN_1447fea8d(local_178,&local_278,&local_1f8);
                  FUN_144a1c686(local_178,0x3e45798ee0000000);
                  auVar35._8_8_ = -(ulonglong)(0.0 <= auVar73._8_8_);
                  auVar35._0_8_ = -(ulonglong)(0.0 <= auVar73._0_8_);
                  auVar52._4_4_ = uVar78;
                  auVar52._0_4_ = uVar77;
                  auVar52._8_4_ = uVar79;
                  auVar52._12_4_ = uVar80;
                  auVar52 = blendvpd(_DAT_149936790,auVar52,auVar35);
                  uVar28 = -(ulonglong)(0.0 <= dVar45);
                  dVar40 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                  dVar57 = auVar52._0_8_;
                  local_168 = local_168 * dVar57;
                  local_178._8_8_ = (double)local_178._8_8_ * dVar57;
                  local_178._0_8_ = (double)local_178._0_8_ * dVar57;
                  dVar57 = auVar52._8_8_;
                  local_148 = local_148 * dVar57;
                  local_150 = local_150 * dVar57;
                  local_158 = dVar57 * local_158;
                  local_128 = local_128 * dVar40;
                  local_130 = local_130 * dVar40;
                  local_138 = dVar40 * local_138;
                  puVar18 = local_438;
                  FUN_14481fd10(puVar18,local_178);
                  iVar16 = (int)puVar18;
                  dVar40 = (double)local_428._0_8_ * (double)local_428._0_8_ +
                           (double)local_438._0_8_ * (double)local_438._0_8_;
                  dVar57 = (double)local_428._8_8_ * (double)local_428._8_8_ +
                           (double)local_438._8_8_ * (double)local_438._8_8_;
                  auVar51._0_8_ = dVar40 + dVar57;
                  auVar51._8_8_ = dVar40 + dVar57;
                  auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar51._8_8_);
                  auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar51._0_8_);
                  auVar52 = sqrtpd(auVar51,auVar51);
                  auVar62._4_4_ = uVar78;
                  auVar62._0_4_ = uVar77;
                  auVar62._12_4_ = uVar80;
                  auVar62._8_4_ = uVar79;
                  auVar52 = divpd(auVar62,auVar52);
                  auVar63._0_8_ = auVar52._0_8_ * (double)local_428._0_8_;
                  auVar63._8_8_ = auVar52._8_8_ * (double)local_428._8_8_;
                  dVar45 = (double)((ulonglong)((double)local_438._0_8_ * auVar52._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar51._0_8_));
                  dVar47 = (double)((ulonglong)((double)local_438._8_8_ * auVar52._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar51._8_8_));
                  auVar43 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar63,auVar36);
                  dVar55 = 0.0;
                  dVar6 = local_108;
                  dVar30 = local_118;
                  dVar40 = dStack_110;
                }
                auVar41 = _DAT_149934d80;
                local_3a8 = ZEXT816(0);
                local_3b8 = ZEXT816(0);
                auVar52 = *(undefined1 (*) [16])(param_1 + 0xe0);
                dVar57 = auVar52._0_8_;
                dVar46 = auVar52._8_8_;
                auVar31 = *(undefined1 (*) [16])(param_1 + 0xf0);
                dVar4 = auVar31._0_8_;
                dVar66 = auVar31._8_8_;
                auVar52 = minpd(auVar73,auVar52);
                dVar56 = auVar68._0_8_;
                auVar31 = minpd(auVar68,auVar31);
                auVar53._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
                auVar53._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
                iVar12 = movmskpd((int)local_3b8,auVar53);
                auVar67._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
                auVar67._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
                uVar20 = movmskpd(iVar16,auVar67);
                dVar44 = auVar43._0_8_;
                dVar58 = auVar43._8_8_;
                local_488._0_8_ = auVar73._0_8_;
                uVar1 = local_488._0_8_;
                local_488._8_8_ = auVar73._8_8_;
                uVar2 = local_488._8_8_;
                local_488 = auVar73;
                local_468._0_16_ = auVar68;
                if ((uVar20 & 0x3fffffff) == 0 && iVar12 == 0) {
                  dVar71 = *(double *)(param_1 + 0xa0);
                  dVar72 = *(double *)(param_1 + 0xa8);
                  dVar8 = *(double *)(param_1 + 0xb0);
                  dVar9 = *(double *)(param_1 + 0xb8);
                  dVar29 = *(double *)(param_1 + 0xb8);
                  dVar65 = *(double *)(param_1 + 0xb8);
                  dVar39 = *(double *)(param_1 + 0xa0);
                  dVar48 = *(double *)(param_1 + 0xa0);
                  dVar69 = *(double *)(param_1 + 0xa8);
                  dVar74 = *(double *)(param_1 + 0xa8);
                  dVar75 = *(double *)(param_1 + 0xb0);
                  dVar70 = *(double *)(param_1 + 0xb0);
                  dVar7 = dVar45 * dVar70 * 1.0 +
                          dVar58 * dVar74 + dVar44 * dVar48 * -1.0 + dVar47 * dVar65;
                  local_3c8._0_8_ =
                       dVar58 * dVar75 * 1.0 +
                       ((dVar39 * dVar47 * 1.0 + dVar44 * dVar29) - dVar45 * dVar69);
                  local_3c8._8_8_ =
                       dVar44 * dVar70 * -1.0 +
                       ((dVar48 * dVar45 * -1.0 + dVar58 * dVar65) - dVar47 * dVar74);
                  dVar30 = dVar30 * dVar57;
                  dVar40 = dVar40 * dVar46;
                  dVar6 = dVar6 * dVar4;
                  dVar55 = dVar55 * dVar66;
                  dVar48 = dVar40 * dVar71 - dVar30 * dVar72;
                  dVar74 = dVar6 * dVar72 - dVar40 * dVar8;
                  dVar70 = dVar30 * dVar8 - dVar6 * dVar71;
                  dVar76 = dVar55 * dVar9 - dVar55 * dVar9;
                  dVar74 = dVar74 + dVar74;
                  dVar70 = dVar70 + dVar70;
                  dVar48 = dVar48 + dVar48;
                  dVar76 = dVar76 + dVar76;
                  local_3b8._0_8_ =
                       (dVar48 * dVar72 - dVar8 * dVar70) + dVar29 * dVar74 + dVar30 +
                       *(double *)(param_1 + 0xc0);
                  local_3b8._8_8_ =
                       (dVar74 * dVar8 - dVar48 * dVar71) + dVar65 * dVar70 + dVar40 +
                       *(double *)(param_1 + 200);
                  local_3a8._0_8_ =
                       (dVar70 * dVar71 - dVar72 * dVar74) + dVar29 * dVar48 + dVar6 +
                       *(double *)(param_1 + 0xd0);
                  local_3a8._8_8_ =
                       (dVar76 * dVar9 - dVar76 * dVar9) + dVar65 * dVar76 + dVar55 +
                       *(double *)(param_1 + 0xd8);
                  local_3d8._8_4_ = SUB84(dVar7,0);
                  local_3d8._0_8_ =
                       dVar47 * dVar75 * -1.0 +
                       dVar44 * dVar69 + dVar58 * dVar39 * 1.0 + dVar45 * dVar29;
                  local_3d8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
                  uVar77 = 0;
                  uVar78 = 0x3ff00000;
                  uVar79 = 0;
                  uVar80 = 0x3ff00000;
                }
                else {
                  dStack_470 = auVar68._8_8_ * dVar66;
                  dVar70 = *(double *)(param_1 + 0xa0);
                  dVar75 = *(double *)(param_1 + 0xa8);
                  dVar7 = *(double *)(param_1 + 0xb0);
                  dVar65 = dVar75 + dVar75;
                  dVar48 = dVar7 + dVar7;
                  dVar71 = dVar70 * (dVar70 + dVar70);
                  local_1a8 = (1.0 - (dVar71 + dVar75 * dVar65)) * dVar4;
                  dVar72 = *(double *)(param_1 + 0xa0) * dVar48;
                  dVar55 = *(double *)(param_1 + 0xb8);
                  dVar69 = dVar48 * dVar55;
                  dVar74 = (dVar70 + dVar70) * *(double *)(param_1 + 0xb8);
                  dVar55 = dVar65 * dVar55;
                  local_1b8 = (dVar55 + dVar72) * dVar4;
                  dStack_1b0 = (dVar48 * dVar75 - dVar74) * dVar4;
                  dVar29 = (double)local_488._0_8_ * dVar57;
                  dVar39 = (double)local_488._8_8_ * dVar46;
                  local_1f8 = (1.0 - (dVar7 * dVar48 + dVar75 * dVar65)) * dVar57;
                  dStack_1f0 = (dVar65 * dVar70 + dVar69) * dVar57;
                  local_1c8 = (dVar48 * dVar75 + dVar74) * dVar46;
                  local_1e8 = (dVar72 - dVar55) * dVar57;
                  uStack_1e0 = 0;
                  local_1d8._8_8_ = (1.0 - (dVar7 * dVar48 + dVar71)) * dVar46;
                  local_1d8._0_8_ = (dVar65 * dVar70 - dVar69) * dVar46;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  local_198 = *(double *)(param_1 + 0xc0);
                  dStack_190 = *(double *)(param_1 + 200);
                  local_188 = *(double *)(param_1 + 0xd0);
                  uStack_180 = 0x3ff0000000000000;
                  dVar48 = dVar47 + dVar47;
                  dVar55 = dVar44 + dVar44;
                  dVar69 = dVar45 * (dVar45 + dVar45);
                  local_228 = (1.0 - (dVar69 + dVar47 * dVar48)) * dVar56;
                  dVar65 = (dVar45 + dVar45) * dVar58;
                  local_238 = (dVar48 * dVar58 + dVar45 * dVar55) * dVar56;
                  dStack_230 = (dVar55 * dVar47 - dVar65) * dVar56;
                  local_278 = ((double)DAT_149934d80 - (dVar44 * dVar55 + dVar47 * dVar48)) *
                              (double)local_488._0_8_;
                  dStack_270 = (dVar48 * dVar45 + dVar55 * dVar58) * (double)local_488._0_8_;
                  local_248 = (dVar55 * dVar47 + dVar65) * (double)local_488._8_8_;
                  local_268 = (dVar45 * dVar55 - dVar48 * dVar58) * (double)local_488._0_8_;
                  uVar77 = (undefined4)DAT_149934d80;
                  uVar78 = DAT_149934d80._4_4_;
                  uVar79 = DAT_149934d80._8_4_;
                  uVar80 = DAT_149934d80._12_4_;
                  uStack_260 = 0;
                  local_258._8_8_ =
                       (DAT_149934d80._8_8_ - (dVar44 * dVar55 + dVar69)) * (double)local_488._8_8_;
                  local_258._0_8_ = (dVar48 * dVar45 - dVar55 * dVar58) * (double)local_488._8_8_;
                  uStack_240 = 0;
                  uStack_220 = 0;
                  local_208._8_4_ = 0;
                  local_208._0_8_ = dVar6;
                  local_208._12_4_ = 0x3ff00000;
                  local_478 = dVar56 * dVar4;
                  local_218 = dVar30;
                  dStack_210 = dVar40;
                  FUN_1447fea8d(local_178,&local_278,&local_1f8);
                  FUN_144a1c686(local_178,0x3e45798ee0000000);
                  auVar37._8_8_ = -(ulonglong)(0.0 <= dVar39);
                  auVar37._0_8_ = -(ulonglong)(0.0 <= dVar29);
                  auVar52 = blendvpd(_DAT_149936790,auVar41,auVar37);
                  uVar28 = -(ulonglong)(0.0 <= dVar56 * dVar4);
                  dVar40 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                  dVar30 = auVar52._0_8_;
                  local_168 = local_168 * dVar30;
                  local_178._8_8_ = (double)local_178._8_8_ * dVar30;
                  local_178._0_8_ = (double)local_178._0_8_ * dVar30;
                  dVar30 = auVar52._8_8_;
                  local_148 = local_148 * dVar30;
                  local_150 = local_150 * dVar30;
                  local_158 = dVar30 * local_158;
                  local_128 = local_128 * dVar40;
                  local_130 = local_130 * dVar40;
                  local_138 = dVar40 * local_138;
                  FUN_14481fd10(local_438,local_178);
                  dVar40 = (double)local_428._0_8_ * (double)local_428._0_8_ +
                           (double)local_438._0_8_ * (double)local_438._0_8_;
                  dVar30 = (double)local_428._8_8_ * (double)local_428._8_8_ +
                           (double)local_438._8_8_ * (double)local_438._8_8_;
                  auVar54._0_8_ = dVar40 + dVar30;
                  auVar54._8_8_ = dVar40 + dVar30;
                  auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
                  auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
                  auVar52 = sqrtpd(auVar54,auVar54);
                  auVar52 = divpd(auVar41,auVar52);
                  auVar64._0_8_ = auVar52._0_8_ * (double)local_428._0_8_;
                  auVar64._8_8_ = auVar52._8_8_ * (double)local_428._8_8_;
                  local_3c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar64,auVar38);
                  local_3d8._8_8_ =
                       (ulonglong)((double)local_438._8_8_ * auVar52._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
                  local_3d8._0_8_ =
                       (ulonglong)((double)local_438._0_8_ * auVar52._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
                  local_3a8._8_8_ = 0;
                  local_3a8._0_8_ = local_108;
                  local_3b8._8_8_ = dStack_110;
                  local_3b8._0_8_ = local_118;
                }
                dVar66 = auVar68._8_8_ * dVar66;
                local_398._8_4_ = SUB84((double)uVar2 * dVar46,0);
                local_398._0_8_ = (double)uVar1 * dVar57;
                local_398._12_4_ = (int)((ulonglong)((double)uVar2 * dVar46) >> 0x20);
                local_388._8_4_ = SUB84(dVar66,0);
                local_388._0_8_ = dVar56 * dVar4;
                local_388._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
                FUN_1449437a2(local_3d8,local_178,&local_378);
                uVar28 = uStack_2f0;
                lVar17 = (longlong)(int)uStack_2f0;
                uVar20 = (int)uStack_2f0 + 1;
                uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar20);
                if (uStack_2f0._4_4_ < uVar20) {
                  FUN_1406b7a4a(&local_2f8,uVar28 & 0xffffffff);
                }
                uVar28 = uStack_300;
                *(longlong **)(local_2f8 + lVar17 * 8) = plVar25;
                lVar17 = (longlong)(int)uStack_300;
                uVar20 = (int)uStack_300 + 1;
                uStack_300 = CONCAT44(uStack_300._4_4_,uVar20);
                if (uStack_300._4_4_ < uVar20) {
                  FUN_144a2c682(&local_308,uVar28 & 0xffffffff);
                }
                puVar23 = (undefined8 *)local_178;
                puVar24 = (undefined8 *)(lVar17 * 0x60 + local_308);
                for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                  *puVar24 = *puVar23;
                  puVar23 = puVar23 + 1;
                  puVar24 = puVar24 + 1;
                }
                FUN_1456cc230(*(undefined8 *)(*(longlong *)(local_440 + 0x9c8) + 0x2c8),plVar25,1);
                iVar16 = iVar10;
              }
            }
            else {
              if ((int)uStack_2c0 != local_294) {
                uVar20 = ((uint)((ulonglong)local_310 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)local_310 >> 4)) * -0x7a143595;
                uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
                puVar18 = local_288;
                if (local_288 == (undefined1 *)0x0) {
                  puVar18 = local_290;
                }
                for (iVar12 = *(int *)(puVar18 +
                                      (ulonglong)(local_280 - 1U & (uVar20 >> 0x10 ^ uVar20)) * 4);
                    iVar12 != -1; iVar12 = *(int *)((longlong)iVar12 * 0x10 + local_2c8 + 8)) {
                  if (*(longlong **)(local_2c8 + (longlong)iVar12 * 0x10) == local_310)
                  goto LAB_146ee9c72;
                }
              }
              FUN_140a3609c(&local_2c8,local_178,&local_310,0);
              if (local_310 != (longlong *)0x0) {
                lVar26 = *local_310;
                lVar17 = (longlong)(int)local_310[1];
                plVar25 = local_310;
                goto LAB_146ee9f8b;
              }
            }
          }
        }
LAB_146ee9c88:
        iVar10 = iVar16;
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)(param_1 + 0x304));
      if (((*(char *)(param_1 + 0x318) == '\x01') && (iVar10 != -1)) &&
         (((int)uStack_2f0 != 0 && ((int)uStack_300 != 0 && local_489 == '\0')))) {
        local_498 = 0;
        FUN_142991092(lVar27,iVar10,&local_2f8,&local_308);
      }
    }
    if (local_308 != 0) {
      FUN_1400020a8();
    }
    if (local_2f8 != 0) {
      FUN_1400020a8();
    }
  }
  if (DAT_14c75f3ce == '\x01') {
    local_168 = *(double *)(param_1 + 0xf0) / *(double *)(param_1 + 0x150);
    local_178 = divpd(*(undefined1 (*) [16])(param_1 + 0xe0),*(undefined1 (*) [16])(param_1 + 0x140)
                     );
    if (((9.999999747378752e-05 < ABS(local_178._0_8_ - DAT_14c846510)) ||
        (9.999999747378752e-05 < ABS(local_178._8_8_ - DAT_14c846518))) ||
       (9.999999747378752e-05 < ABS(local_168 - DAT_14c846520))) {
      FUN_146ee9946(param_1,local_178);
    }
  }
  local_280 = 0;
  if (local_288 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140d9ce6e(&local_2c8);
  if ((local_f0 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eeb65a FUN_146eeb65a body=609 status=ok
// SIG undefined FUN_146eeb65a(void)

void FUN_146eeb65a(longlong param_1,longlong *param_2,double *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10) == '\x02')
  {
    local_4c = (float)param_3[3];
    local_78 = *(undefined4 *)(param_3 + 4);
    uStack_74 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_70 = *(undefined4 *)(param_3 + 5);
    uStack_6c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_50 = (float)param_3[2];
    local_68 = param_3[6];
    local_54 = (float)param_3[1];
    local_58 = (float)*param_3;
    local_48 = 2;
    lVar7 = *(longlong *)(param_1 + 8);
    if (lVar7 != 0) {
      FUN_1447ec412(*(undefined8 *)(lVar7 + 0x9c8),param_2,&local_78);
      lVar7 = *(longlong *)(lVar7 + 0x9c8);
      lVar2 = *param_2;
      lVar6 = (longlong)(int)param_2[1];
      if ((1 < *(byte *)((longlong)param_2 + 0xc)) &&
         (*(char *)(*(longlong *)(lVar2 + 0x2c0) + 0xd + lVar6 * 0x10) == '\x01')) {
        if ((*(byte *)((longlong)param_2 + 0xc) == 2) ||
           ((plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x5a8) + lVar6 * 0x10),
            plVar3 == (longlong *)0x0 || (*(byte *)((longlong)plVar3 + 0xc) < 3))))
        goto LAB_146eeb893;
        if (((*(byte *)(*(longlong *)(*plVar3 + 0x680) + (longlong)(int)plVar3[1]) & 1) == 0) ||
           (*(longlong *)(*(longlong *)(*plVar3 + 200) + (longlong)(int)plVar3[1] * 8) !=
            *(longlong *)(*(longlong *)(lVar2 + 200) + lVar6 * 8))) goto LAB_146eeb893;
      }
      if ((*(char *)(*(longlong *)(lVar2 + 0xe0) + lVar6) != '\0') || (DAT_14c9978a0 != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x80) + lVar6 * 4);
        puVar4 = (undefined8 *)FUN_1447eab44(lVar7 + 0x360,uVar1,1);
        *(undefined1 *)(puVar4 + 8) = 2;
        local_b0 = *(undefined8 *)(*(longlong *)(*param_2 + 0xb0) + (longlong)(int)param_2[1] * 8);
        local_a0 = *(undefined4 *)(*(longlong *)(*param_2 + 0x80) + (longlong)(int)param_2[1] * 4);
        uStack_9c = 0;
        uStack_94 = 0;
        uStack_8c = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        local_7c = local_7c & 0xffffff00;
        uStack_a8 = param_2;
        FUN_144b06ac6(param_2);
        FUN_144b06a28(param_2,&uStack_8c);
        local_7c = CONCAT31(local_7c._1_3_,1);
        *(undefined4 *)(puVar4 + 4) = uStack_94._4_4_;
        *(undefined4 *)((longlong)puVar4 + 0x24) = (undefined4)uStack_8c;
        *(undefined4 *)(puVar4 + 5) = uStack_8c._4_4_;
        *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_84;
        *(undefined4 *)(puVar4 + 2) = local_a0;
        *(undefined4 *)((longlong)puVar4 + 0x14) = (undefined4)uStack_9c;
        *(undefined4 *)(puVar4 + 3) = uStack_9c._4_4_;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = (undefined4)uStack_94;
        *(undefined4 *)puVar4 = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar4 + 4) = local_b0._4_4_;
        *(undefined4 *)(puVar4 + 1) = (undefined4)uStack_a8;
        *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_a8._4_4_;
        puVar4[6] = CONCAT44(local_7c,uStack_80);
        *(undefined2 *)(puVar4 + 7) =
             *(undefined2 *)(*(longlong *)(*param_2 + 0x170) + (longlong)(int)param_2[1] * 2);
        puVar5 = (undefined8 *)FUN_1447eab44(lVar7 + 0x380,uVar1,1);
        for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
    }
  }
LAB_146eeb893:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eeb8bc FUN_146eeb8bc body=439 status=ok
// SIG undefined FUN_146eeb8bc(void)

void FUN_146eeb8bc(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  longlong local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_80;
  pvVar1 = (void *)*param_2;
  local_90 = param_1;
  if (lVar3 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1447c510a(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar3 << 2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    pvVar1 = local_88;
    local_78 = 0;
    local_68 = 0;
    local_58 = &PTR_LAB_149f6d720;
    uStack_50 = local_90;
    local_48 = (void *)0x0;
    lVar4 = (longlong)local_80;
    iStack_40 = local_80;
    if (lVar4 == 0) {
      uStack_3c = 0;
    }
    else {
      FUN_1447c510a(&local_48,local_80,0);
      memcpy(local_48,pvVar1,lVar4 << 2);
    }
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = FUN_142a2870e;
    puVar2[0xc] = local_68;
    *(undefined4 *)(puVar2 + 0xe) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar2 + 0x74) = local_58._4_4_;
    *(undefined4 *)(puVar2 + 0xf) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_50._4_4_;
    *(undefined4 *)(puVar2 + 0x10) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar2 + 0x84) = local_48._4_4_;
    *(int *)(puVar2 + 0x11) = iStack_40;
    *(undefined4 *)((longlong)puVar2 + 0x8c) = uStack_3c;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar3 + 0x70,puVar2);
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eeba74 FUN_146eeba74 body=214 status=ok
// SIG undefined FUN_146eeba74(void)

void FUN_146eeba74(longlong param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a287d4;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d740;
    puVar2[0xf] = param_1;
    *(undefined1 *)(puVar2 + 0x10) = param_2;
    *(undefined4 *)((longlong)puVar2 + 0x84) = param_3;
    *(undefined4 *)(puVar2 + 0x11) = param_4;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146eebb4a FUN_146eebb4a body=163 status=ok
// SIG undefined FUN_146eebb4a(void)

void FUN_146eebb4a(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a2882e;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d760;
    puVar2[0xf] = param_1;
    *(undefined1 *)(puVar2 + 0x10) = param_2;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146eebbee FUN_146eebbee body=163 status=ok
// SIG undefined FUN_146eebbee(void)

void FUN_146eebbee(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a28880;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d780;
    puVar2[0xf] = param_1;
    *(undefined1 *)(puVar2 + 0x10) = param_2;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146eebc92 FUN_146eebc92 body=177 status=ok
// SIG undefined FUN_146eebc92(void)

void FUN_146eebc92(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_142a288d6;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d7a0;
    puVar2[0xf] = param_1;
    *(undefined4 *)(puVar2 + 0x10) = param_2;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146eebd44 FUN_146eebd44 body=571 status=ok
// SIG undefined FUN_146eebd44(void)

void FUN_146eebd44(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar12 = 1.0;
  if ((*(byte *)(param_1 + 0x319) & 8) != 0) {
    uVar11 = -(uint)(1e-08 < *(float *)(param_1 + 0x1bc));
    fVar12 = (float)(~uVar11 & 0x3f800000 | (uint)(param_2 / *(float *)(param_1 + 0x1bc)) & uVar11);
  }
  *(float *)(param_1 + 0x1bc) = param_2;
  iVar8 = *(int *)(param_1 + 0x348);
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x340) + lVar7 * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar9 = (longlong)(int)plVar1[1];
        lVar2 = *(longlong *)(*plVar1 + 0x368);
        lVar10 = *(longlong *)(*plVar1 + 0x3b0);
        dVar3 = *(double *)(lVar10 + lVar9 * 8) * (double)fVar12;
        fVar15 = *(float *)(lVar2 + 8 + lVar9 * 0xc) * fVar12;
        fVar14 = *(float *)(lVar2 + 4 + lVar9 * 0xc) * fVar12;
        fVar13 = *(float *)(lVar2 + lVar9 * 0xc) * fVar12;
        *(double *)(lVar10 + lVar9 * 8) = dVar3;
        lVar10 = (longlong)(int)plVar1[1];
        lVar2 = *(longlong *)(*plVar1 + 0x368);
        *(float *)(lVar2 + lVar10 * 0xc) = fVar13;
        *(float *)(lVar2 + 4 + lVar10 * 0xc) = fVar14;
        *(float *)(lVar2 + 8 + lVar10 * 0xc) = fVar15;
        dVar4 = DAT_14c8464e0;
        dVar5 = DAT_14c8464e8;
        dVar6 = DAT_14c8464f0;
        if (0.0 < dVar3) {
          dVar4 = 1.0 / (double)fVar13;
          if ((fVar13 == 0.0) && (!NAN(fVar13))) {
            dVar4 = 3.3999999521443642e+38;
          }
          dVar5 = 1.0 / (double)fVar14;
          if ((fVar14 == 0.0) && (!NAN(fVar14))) {
            dVar5 = 3.3999999521443642e+38;
          }
          dVar6 = 1.0 / (double)fVar15;
          if ((fVar15 == 0.0) && (!NAN(fVar15))) {
            dVar6 = 3.3999999521443642e+38;
          }
        }
        *(ulonglong *)(*(longlong *)(*plVar1 + 0x3c8) + (longlong)(int)plVar1[1] * 8) =
             -(ulonglong)(0.0 < dVar3) & (ulonglong)(1.0 / dVar3);
        lVar10 = (longlong)(int)plVar1[1];
        lVar2 = *(longlong *)(*plVar1 + 0x380);
        *(float *)(lVar2 + lVar10 * 0xc) = (float)dVar4;
        *(float *)(lVar2 + 4 + lVar10 * 0xc) = (float)dVar5;
        *(float *)(lVar2 + 8 + lVar10 * 0xc) = (float)dVar6;
        iVar8 = *(int *)(param_1 + 0x348);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar8);
  }
  return;
}



// FUNCTION 146eebf80 FUN_146eebf80 body=281 status=ok
// SIG undefined FUN_146eebf80(void)

void FUN_146eebf80(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x448);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x440);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        *(ushort *)(lVar3 + 0x1b4) = *(ushort *)(lVar3 + 0x1b4) & 0xfffe | (ushort)param_2;
        *(byte *)(lVar3 + 0x94) = *(byte *)(lVar3 + 0x94) | 8;
        if ((*(longlong *)(lVar3 + 0x10) != 0) &&
           (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8), lVar3 != 0)) {
          FUN_144a78688(lVar3 + 0x70);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar4 + 1) = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined2 *)(puVar4 + 8) = 1;
    *puVar4 = &PTR_FUN_149f45dc0;
    puVar4[10] = &LAB_142a2891a;
    puVar4[0xc] = 0;
    puVar4[0xe] = &PTR_LAB_149f6d7c0;
    puVar4[0xf] = param_1;
    *(byte *)(puVar4 + 0x10) = param_2;
    puVar4[0x12] = 0;
    puVar4[0x14] = 0;
    *(undefined1 *)(puVar4 + 0x1a) = 0;
    FUN_1406e6496(lVar2 + 0x70,puVar4);
    return;
  }
  return;
}



// FUNCTION 146eec09a FUN_146eec09a body=172 status=ok
// SIG undefined FUN_146eec09a(void)

void FUN_146eec09a(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(uint *)(param_1 + 0x1e0) = (uint)param_2;
  if (((*(longlong *)(param_1 + 8) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x9c8), lVar2 != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x348), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x340);
    lVar6 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar6);
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (longlong)(int)plVar4[1] * 0x10;
        *(ushort *)(*(longlong *)(*plVar4 + 0x2c0) + 8 + lVar5) =
             *(ushort *)(*(longlong *)(*plVar4 + 0x2c0) + 8 + lVar5) & 0xfffe | (ushort)param_2;
        if (*(char *)(*(longlong *)(*plVar4 + 0x2c0) + 0xd + (longlong)(int)plVar4[1] * 0x10) ==
            '\0') {
          FUN_1400d3626(lVar2);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 146eec146 FUN_146eec146 body=163 status=ok
// SIG undefined FUN_146eec146(void)

void FUN_146eec146(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = FUN_142a2895c;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_149f6d7e0;
    puVar2[0xf] = param_1;
    *(undefined4 *)(puVar2 + 0x10) = param_2;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    return;
  }
  return;
}



// FUNCTION 146eec1ea FUN_146eec1ea body=338 status=ok
// SIG undefined FUN_146eec1ea(void)

void FUN_146eec1ea(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  longlong lVar5;
  
  lVar2 = FUN_140619ac2(*(undefined8 *)(param_1 + 0x58),DAT_14c997518,DAT_14c9974a8);
  if (0 < *(int *)(param_1 + 0x448)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x440) + lVar5 * 8);
      if (lVar1 != 0) {
        if (param_2 < 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (ushort)(param_2 <=
                          *(int *)(*(longlong *)(lVar2 + 0x10) +
                                  (longlong)*(int *)(*(longlong *)(param_1 + 0x400) + lVar5 * 4) * 4
                                  )) << 2;
        }
        *(ushort *)(lVar1 + 0x1b4) = uVar4 | *(ushort *)(lVar1 + 0x1b4) & 0xfffb;
        *(byte *)(lVar1 + 0x94) = *(byte *)(lVar1 + 0x94) | 8;
        if ((*(longlong *)(lVar1 + 0x10) != 0) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 8) != 0)) {
          FUN_144a78688();
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x448));
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *(undefined2 *)(puVar3 + 1) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined2 *)(puVar3 + 8) = 1;
  *puVar3 = &PTR_FUN_149f45dc0;
  puVar3[10] = &LAB_142a28a02;
  puVar3[0xc] = 0;
  puVar3[0xe] = &PTR_LAB_149f6d800;
  puVar3[0xf] = param_1;
  *(int *)(puVar3 + 0x10) = param_2;
  puVar3[0x12] = 0;
  puVar3[0x14] = 0;
  *(undefined1 *)(puVar3 + 0x1a) = 0;
  FUN_1406e6496(lVar2 + 0x70,puVar3);
  return;
}



// FUNCTION 146eec33c FUN_146eec33c body=241 status=ok
// SIG undefined FUN_146eec33c(void)

void FUN_146eec33c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x1e4) = param_2;
  FUN_1401c0b60(param_1 + 0x5d0,local_48);
  iVar4 = *(int *)(param_1 + 0x348);
  if (0 < iVar4) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x340) + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        if (*(int *)(param_1 + 0x1e4) < 0) {
          lVar5 = (longlong)(int)plVar1[1] * 0x10 + *(longlong *)(*plVar1 + 0x2c0);
          uVar3 = 0;
        }
        else {
          lVar5 = (longlong)(int)plVar1[1] * 0x10 + *(longlong *)(*plVar1 + 0x2c0);
          uVar3 = (ushort)(*(int *)(param_1 + 0x1e4) <=
                          *(int *)(*(longlong *)(local_18 + 0x10) +
                                  (longlong)*(int *)(*(longlong *)(param_1 + 0x400) + lVar2 * 4) * 4
                                  )) << 2;
        }
        *(ushort *)(lVar5 + 8) = uVar3 | *(ushort *)(lVar5 + 8) & 0xfffb;
        iVar4 = *(int *)(param_1 + 0x348);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar4);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eec42e FUN_146eec42e body=340 status=ok
// SIG undefined FUN_146eec42e(void)

void FUN_146eec42e(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  if ((longlong)*(int *)(param_1 + 0x448) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x440);
    plVar1 = plVar7 + *(int *)(param_1 + 0x448);
    do {
      lVar5 = *plVar7;
      if (lVar5 != 0) {
        lVar6 = lVar5 + 0x78;
        if (*(longlong *)(lVar5 + 0x80) != 0) {
          lVar6 = *(longlong *)(lVar5 + 0x80);
        }
        iVar2 = *(int *)(lVar5 + 0x88);
        if ((longlong)iVar2 != 0) {
          lVar5 = 0;
          do {
            local_4c = *param_2;
            local_58 = &local_4c;
            FUN_1401c2f3e(*(undefined8 *)(lVar6 + lVar5),&local_58);
            lVar5 = lVar5 + 8;
          } while ((longlong)iVar2 * 8 != lVar5);
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  lVar6 = local_60;
  lVar5 = *(longlong *)(local_60 + 8);
  if (lVar5 != 0) {
    uVar3 = *param_2;
    puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar4 + 1) = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined2 *)(puVar4 + 8) = 1;
    *puVar4 = &PTR_FUN_149f45dc0;
    puVar4[10] = &LAB_142a28a44;
    puVar4[0xc] = 0;
    puVar4[0xe] = &PTR_LAB_149f6d820;
    puVar4[0xf] = lVar6;
    *(undefined4 *)(puVar4 + 0x10) = uVar3;
    puVar4[0x12] = 0;
    puVar4[0x14] = 0;
    *(undefined1 *)(puVar4 + 0x1a) = 0;
    FUN_1406e6496(lVar5 + 0x70,puVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eec584 FUN_146eec584 body=341 status=ok
// SIG undefined FUN_146eec584(void)

void FUN_146eec584(longlong param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x1b8) != *param_2) {
    *(int *)(param_1 + 0x1b8) = *param_2;
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar3 = FUN_144b06f84(*(longlong *)(param_1 + 8) + 0xb28);
      if ((lVar3 != 0) && ((longlong)*(int *)(param_1 + 0x348) != 0)) {
        plVar5 = *(longlong **)(param_1 + 0x340);
        local_60 = plVar5 + *(int *)(param_1 + 0x348);
        do {
          plVar2 = (longlong *)*plVar5;
          if (plVar2 != (longlong *)0x0) {
            *(undefined8 *)(*(longlong *)(*plVar2 + 0x410) + (longlong)(int)plVar2[1] * 8) =
                 *(undefined8 *)(lVar3 + 0x20);
            *(undefined8 *)(*(longlong *)(*plVar2 + 0x428) + (longlong)(int)plVar2[1] * 8) =
                 *(undefined8 *)(lVar3 + 0x28);
            lVar6 = *(longlong *)(*plVar2 + 0xf8) + (longlong)(int)plVar2[1] * 0x18;
            lVar4 = *(longlong *)(lVar6 + 8);
            if (*(longlong *)(lVar6 + 8) == 0) {
              lVar4 = lVar6;
            }
            iVar1 = *(int *)(lVar6 + 0x10);
            if ((longlong)iVar1 != 0) {
              lVar6 = 0;
              do {
                local_4c = *(undefined4 *)(param_1 + 0x1b8);
                local_58 = &local_4c;
                FUN_1401c2f3e(*(undefined8 *)(lVar4 + lVar6),&local_58);
                lVar6 = lVar6 + 8;
              } while ((longlong)iVar1 * 8 != lVar6);
            }
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != local_60);
      }
    }
    FUN_141730a34(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eec6f4 FUN_146eec6f4 body=328 status=ok
// SIG undefined FUN_146eec6f4(void)

void FUN_146eec6f4(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = (longlong)*(int *)(param_1 + 0x20);
  if (lVar10 == -1) {
    lVar10 = (longlong)*(int *)(param_1 + 0x10);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
  }
  else {
    lVar9 = (longlong)*(int *)(param_1 + 0x10);
    if (lVar9 != -1) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x58);
      fVar1 = *(float *)(lVar8 + 8 + lVar10 * 0x18);
      fVar2 = *(float *)(lVar7 + 8 + lVar9 * 0x18);
      fVar3 = *(float *)(lVar8 + 4 + lVar10 * 0x18);
      fVar4 = *(float *)(lVar7 + lVar9 * 0x18);
      fVar5 = *(float *)(lVar7 + 4 + lVar9 * 0x18);
      fVar6 = *(float *)(param_1 + 0x30);
      *param_2 = (*(float *)(lVar8 + lVar10 * 0x18) - fVar4) * fVar6 + fVar4;
      param_2[1] = (fVar3 - fVar5) * fVar6 + fVar5;
      param_2[2] = (fVar1 - fVar2) * fVar6 + fVar2;
      fVar1 = *(float *)(lVar8 + 0x14 + lVar10 * 0x18);
      fVar2 = *(float *)(lVar7 + 0x14 + lVar9 * 0x18);
      fVar3 = *(float *)(lVar8 + 0x10 + lVar10 * 0x18);
      fVar4 = *(float *)(lVar7 + 0xc + lVar9 * 0x18);
      fVar5 = *(float *)(lVar7 + 0x10 + lVar9 * 0x18);
      fVar6 = *(float *)(param_1 + 0x30);
      *param_3 = (*(float *)(lVar8 + 0xc + lVar10 * 0x18) - fVar4) * fVar6 + fVar4;
      param_3[1] = (fVar3 - fVar5) * fVar6 + fVar5;
      param_3[2] = (fVar1 - fVar2) * fVar6 + fVar2;
      return;
    }
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x58);
  }
  param_2[2] = *(float *)(lVar9 + 8 + lVar10 * 0x18);
  *(undefined8 *)param_2 = *(undefined8 *)(lVar9 + lVar10 * 0x18);
  param_3[2] = *(float *)(lVar9 + 0x14 + lVar10 * 0x18);
  *(undefined8 *)param_3 = *(undefined8 *)(lVar9 + 0xc + lVar10 * 0x18);
  return;
}



// FUNCTION 146eec83c FUN_146eec83c body=662 status=ok
// SIG undefined FUN_146eec83c(void)

void FUN_146eec83c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = param_2[1];
  *(undefined8 *)(param_1 + 0x1e8) = *param_2;
  *(undefined8 *)(param_1 + 0x1f0) = uVar5;
  uVar5 = param_3[1];
  *(undefined8 *)(param_1 + 0x1f8) = *param_3;
  *(undefined8 *)(param_1 + 0x200) = uVar5;
  local_58 = 0;
  uStack_50 = 0;
  if ((*(longlong *)(param_1 + 8) != 0) && (0 < *(int *)(param_1 + 0x304))) {
    local_68 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x9c8);
    lVar11 = 0;
    local_60 = local_68 + 0x548;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x340) + lVar11 * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar10 = *plVar1;
        lVar7 = (longlong)(int)plVar1[1];
        lVar13 = *(longlong *)(lVar10 + 0xf8) + lVar7 * 0x18;
        lVar12 = *(longlong *)(lVar13 + 8);
        if (*(longlong *)(lVar13 + 8) == 0) {
          lVar12 = lVar13;
        }
        iVar9 = *(int *)(lVar13 + 0x10);
        if ((longlong)iVar9 != 0) {
          lVar13 = 0;
          do {
            lVar10 = *(longlong *)(lVar12 + lVar13);
            if ((*(byte *)(lVar10 + 8) & 3) == 0) {
              FUN_144b03742(lVar10,(undefined4 *)(param_1 + 0x1f8));
            }
            else {
              uVar2 = *(undefined4 *)(param_1 + 0x1fc);
              uVar3 = *(undefined4 *)(param_1 + 0x200);
              uVar4 = *(undefined4 *)(param_1 + 0x204);
              *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)(param_1 + 0x1f8);
              *(undefined4 *)(lVar10 + 0x4c) = uVar2;
              *(undefined4 *)(lVar10 + 0x50) = uVar3;
              *(undefined4 *)(lVar10 + 0x54) = uVar4;
            }
            lVar10 = *(longlong *)(lVar12 + lVar13);
            if ((*(byte *)(lVar10 + 8) & 3) == 0) {
              FUN_144aa44d4(lVar10,(undefined4 *)(param_1 + 0x1e8));
            }
            else {
              uVar2 = *(undefined4 *)(param_1 + 0x1ec);
              uVar3 = *(undefined4 *)(param_1 + 0x1f0);
              uVar4 = *(undefined4 *)(param_1 + 500);
              *(undefined4 *)(lVar10 + 0x58) = *(undefined4 *)(param_1 + 0x1e8);
              *(undefined4 *)(lVar10 + 0x5c) = uVar2;
              *(undefined4 *)(lVar10 + 0x60) = uVar3;
              *(undefined4 *)(lVar10 + 100) = uVar4;
            }
            lVar13 = lVar13 + 8;
          } while ((longlong)iVar9 * 8 != lVar13);
          lVar10 = *plVar1;
          lVar7 = (longlong)(int)plVar1[1];
        }
        uVar6 = uStack_50;
        plVar1 = *(longlong **)(*(longlong *)(lVar10 + 0x5a8) + lVar7 * 0x10);
        if ((plVar1 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar1 + 0xc))) {
          if (((*(byte *)(*(longlong *)(*plVar1 + 0x680) + (longlong)(int)plVar1[1]) & 1) != 0) &&
             (*(longlong *)(*(longlong *)(*plVar1 + 200) + (longlong)(int)plVar1[1] * 8) == param_1)
             ) {
            lVar13 = (longlong)(int)uStack_50;
            if (lVar13 != 0) {
              lVar10 = 0;
              do {
                if (*(longlong **)(local_58 + lVar10) == plVar1) goto LAB_146eec985;
                lVar10 = lVar10 + 8;
              } while (lVar13 * 8 - lVar10 != 0);
            }
            uVar8 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
            if (uStack_50._4_4_ < uVar8) {
              FUN_14043c6b4(&local_58,uVar6 & 0xffffffff);
            }
            *(longlong **)(local_58 + lVar13 * 8) = plVar1;
            if (*(int *)(local_68 + 0x518) != *(int *)(local_68 + 0x544)) {
              uVar8 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4))
                      * -0x7a143595;
              uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
              lVar13 = *(longlong *)(local_68 + 0x550);
              if (*(longlong *)(local_68 + 0x550) == 0) {
                lVar13 = local_60;
              }
              iVar9 = *(int *)(lVar13 + (ulonglong)
                                        (*(int *)(local_68 + 0x558) - 1U & (uVar8 >> 0x10 ^ uVar8))
                                        * 4);
              if (iVar9 != -1) {
                do {
                  lVar13 = *(longlong *)(local_68 + 0x510) + (longlong)iVar9 * 0x20;
                  if (*(longlong **)(*(longlong *)(local_68 + 0x510) + (longlong)iVar9 * 0x20) ==
                      plVar1) {
                    if (lVar13 != -8 && lVar13 != 0) {
                      FUN_1429c98c0(plVar1);
                    }
                    break;
                  }
                  iVar9 = *(int *)(lVar13 + 0x18);
                } while (iVar9 != -1);
              }
            }
          }
        }
      }
LAB_146eec985:
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x304));
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eecad4 FUN_146eecad4 body=70 status=ok
// SIG undefined FUN_146eecad4(void)

void FUN_146eecad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_146eee65e(param_1,param_2,param_3,param_4);
  }
  FUN_146ebc134(param_1,param_2,param_3);
  return;
}



// FUNCTION 146eecb22 FUN_146eecb22 body=38 status=ok
// SIG undefined FUN_146eecb22(void)

undefined8 FUN_146eecb22(undefined8 param_1,int param_2)

{
  FUN_146eeea2e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eecb48 FUN_146eecb48 body=54 status=ok
// SIG undefined FUN_146eecb48(void)

void FUN_146eecb48(longlong *param_1)

{
  FUN_146eecb7e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146eecb7e FUN_146eecb7e body=128 status=ok
// SIG undefined FUN_146eecb7e(void)

void FUN_146eecb7e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146eecc00 FUN_146eecc00 body=118 status=ok
// SIG undefined FUN_146eecc00(void)

void FUN_146eecc00(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 200,8);
    iVar2 = (int)(uVar1 / 200);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,200,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146eecc76 FUN_146eecc76 body=60 status=ok
// SIG undefined FUN_146eecc76(void)

void FUN_146eecc76(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1403c2a98(param_1,param_2);
    param_1 = param_1 + 200;
    param_2 = param_2 + 200;
  }
  return;
}



// FUNCTION 146eeccb2 FUN_146eeccb2 body=29 status=ok
// SIG undefined FUN_146eeccb2(void)

undefined8 FUN_146eeccb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eeccd6 FUN_146eeccd6 body=45 status=ok
// SIG undefined FUN_146eeccd6(void)

void FUN_146eeccd6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_149f6da10;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  return;
}



// FUNCTION 146eecd04 FUN_146eecd04 body=249 status=ok
// SIG undefined FUN_146eecd04(void)

undefined8 FUN_146eecd04(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 146eecdfe FUN_146eecdfe body=138 status=ok
// SIG undefined FUN_146eecdfe(void)

void FUN_146eecdfe(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146eece88 FUN_146eece88 body=249 status=ok
// SIG undefined FUN_146eece88(void)

undefined8 FUN_146eece88(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  iVar3 = *(int *)(param_1 + 0x28);
  lVar10 = (longlong)iVar3;
  *(uint *)(param_1 + 0x28) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
    FUN_14026a4e8(param_1 + 0x20,iVar3);
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(lVar5 + 0x10 + lVar10 * 0x18) = *(undefined8 *)(param_3 + 4);
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar2 = (undefined4 *)(lVar5 + lVar10 * 0x18);
  *puVar2 = *param_3;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  iVar4 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar4 + 1U) {
    FUN_1406b7a4a(param_1 + 0x30,iVar4);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 8) = param_2;
  iVar4 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar4 + 1U) {
    FUN_1458d6ffc(param_1 + 0x48,iVar4);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 8) = 0;
  plVar1 = (longlong *)(param_1 + 0x58);
  puVar9 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar9[1] = param_1;
  puVar9[2] = 0;
  *(int *)(puVar9 + 3) = iVar3;
  *puVar9 = &PTR_FUN_149f6d8c0;
  iVar3 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar3 + 1U;
  if (*(uint *)(param_1 + 100) < iVar3 + 1U) {
    FUN_146eecf82(plVar1,iVar3);
  }
  *(undefined8 **)(*plVar1 + (longlong)iVar3 * 8) = puVar9;
  return *(undefined8 *)(*plVar1 + lVar10 * 8);
}



// FUNCTION 146eecf82 FUN_146eecf82 body=132 status=ok
// SIG undefined FUN_146eecf82(void)

void FUN_146eecf82(longlong param_1,int param_2)

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



// FUNCTION 146eed008 FUN_146eed008 body=39 status=ok
// SIG undefined FUN_146eed008(void)

undefined8 * FUN_146eed008(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f4b8e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eed06a FUN_146eed06a body=82 status=ok
// SIG undefined FUN_146eed06a(void)

void FUN_146eed06a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)((longlong)*(int *)(param_2 + 0x10) * 8 + *(longlong *)(param_1 + 0x2a0));
  if (plVar2 != param_3) {
    lVar1 = *plVar2;
    *plVar2 = *param_3;
    *param_3 = 0;
    if (lVar1 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_144aa51e8(param_1 + 0x100,param_2);
  return;
}



// FUNCTION 146eed0bc FUN_146eed0bc body=98 status=ok
// SIG undefined FUN_146eed0bc(void)

void FUN_146eed0bc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146eed11e FUN_146eed11e body=38 status=ok
// SIG undefined FUN_146eed11e(void)

undefined8 FUN_146eed11e(undefined8 param_1,int param_2)

{
  FUN_1401aa844();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eed144 FUN_146eed144 body=1 status=ok
// SIG undefined FUN_146eed144(void)

void FUN_146eed144(void)

{
  return;
}



// FUNCTION 146eed146 FUN_146eed146 body=29 status=ok
// SIG undefined FUN_146eed146(void)

undefined8 FUN_146eed146(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eed1be FUN_146eed1be body=122 status=ok
// SIG undefined FUN_146eed1be(void)

longlong FUN_146eed1be(longlong param_1,longlong param_2)

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
    FUN_146eed238(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146eed238 FUN_146eed238 body=117 status=ok
// SIG undefined FUN_146eed238(void)

undefined8 * FUN_146eed238(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146eecb7e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 146eed2ae FUN_146eed2ae body=123 status=ok
// SIG undefined FUN_146eed2ae(void)

undefined8 * FUN_146eed2ae(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146eed32a();
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



// FUNCTION 146eed32a FUN_146eed32a body=146 status=ok
// SIG undefined FUN_146eed32a(void)

longlong * FUN_146eed32a(longlong *param_1,longlong *param_2)

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



// FUNCTION 146eed3bc FUN_146eed3bc body=310 status=ok
// SIG undefined FUN_146eed3bc(void)

longlong * FUN_146eed3bc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_14071ff8a(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_14075a758(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x10 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eed4f4 FUN_146eed4f4 body=206 status=ok
// SIG undefined FUN_146eed4f4(void)

void FUN_146eed4f4(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar3 = (int)param_2[1];
  if (iVar3 != 0) {
    uVar5 = *(uint *)*param_2;
    uVar2 = 1;
    if (1 < iVar3) {
      lVar4 = 1;
      do {
        uVar1 = *(uint *)(*param_2 + lVar4 * 4);
        if (uVar1 != uVar5) {
          if ((0 < (int)uVar2) && ((int)(uVar5 + 1) < (int)uVar1)) {
            lVar6 = (longlong)(int)(uVar5 + 1);
            iVar3 = ~uVar5 + uVar1;
            do {
              *(undefined8 *)((ulonglong)uVar2 * -8 + *param_1 + lVar6 * 8) =
                   *(undefined8 *)(*param_1 + lVar6 * 8);
              lVar6 = lVar6 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            iVar3 = (int)param_2[1];
          }
          uVar2 = uVar2 + 1;
          uVar5 = uVar1;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    iVar3 = (int)param_1[1];
    if ((0 < (int)uVar2) && ((int)(uVar5 + 1) < iVar3)) {
      lVar4 = (longlong)(int)(uVar5 + 1);
      iVar3 = ~uVar5 + iVar3;
      do {
        *(undefined8 *)((ulonglong)uVar2 * -8 + *param_1 + lVar4 * 8) =
             *(undefined8 *)(*param_1 + lVar4 * 8);
        lVar4 = lVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar3 = (int)param_1[1];
    }
    FUN_146eed5c2(param_1,iVar3 - uVar2);
    return;
  }
  return;
}



// FUNCTION 146eed5c2 FUN_146eed5c2 body=103 status=ok
// SIG undefined FUN_146eed5c2(void)

void FUN_146eed5c2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e2d61c(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146eed62a FUN_146eed62a body=540 status=ok
// SIG undefined FUN_146eed62a(void)

void FUN_146eed62a(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = *param_1;
  lVar7 = *param_2;
  if (lVar7 != 0 && lVar8 != 0) {
    uVar11 = (ulonglong)((*(byte *)(lVar7 + 8) & 3) == 0);
    puVar6 = (undefined8 *)(lVar7 + 0x48 + uVar11 * 8);
    local_68._0_4_ = *(undefined4 *)puVar6;
    local_68._4_4_ = *(undefined4 *)((longlong)puVar6 + 4);
    uVar1 = *puVar6;
    uStack_60 = *(undefined4 *)(puVar6 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uVar2 = puVar6[1];
    puVar6 = (undefined8 *)(lVar7 + 0x58 + uVar11 * 8);
    local_58 = *(undefined4 *)puVar6;
    uStack_54 = *(undefined4 *)((longlong)puVar6 + 4);
    uVar3 = *puVar6;
    uStack_50 = *(undefined4 *)(puVar6 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uVar4 = puVar6[1];
    lVar7 = lVar7 + 0x68 + uVar11 * 8;
    puVar6 = (undefined8 *)(lVar7 + 8);
    uStack_40 = *(undefined4 *)puVar6;
    uStack_3c = *(undefined4 *)(lVar7 + 0xc);
    uVar5 = *puVar6;
    local_48 = 0;
    if ((*(byte *)(lVar8 + 8) & 3) == 0) {
      FUN_146285926(lVar8,&local_68);
    }
    else {
      *(undefined8 *)(lVar8 + 0x68) = 0;
      *(undefined8 *)(lVar8 + 0x70) = uVar5;
      *(undefined8 *)(lVar8 + 0x58) = uVar3;
      *(undefined8 *)(lVar8 + 0x60) = uVar4;
      *(undefined8 *)(lVar8 + 0x48) = uVar1;
      *(undefined8 *)(lVar8 + 0x50) = uVar2;
    }
    lVar8 = *param_2 + 0x48 + (ulonglong)((*(byte *)(*param_2 + 8) & 3) == 0) * 8;
    local_68._4_4_ = *(undefined4 *)(lVar8 + 4);
    uStack_60 = *(undefined4 *)(lVar8 + 8);
    uVar1 = *(undefined8 *)(lVar8 + 4);
    uStack_5c = *(undefined4 *)(lVar8 + 0xc);
    lVar8 = *param_1;
    if ((*(byte *)(lVar8 + 8) & 3) == 0) {
      local_68._0_4_ = param_3;
      FUN_144b03742(lVar8,&local_68);
    }
    else {
      *(undefined4 *)(lVar8 + 0x48) = param_3;
      *(undefined8 *)(lVar8 + 0x4c) = uVar1;
      *(undefined4 *)(lVar8 + 0x54) = uStack_5c;
    }
    lVar8 = *param_2 + 0x58 + (ulonglong)((*(byte *)(*param_2 + 8) & 3) == 0) * 8;
    local_68._4_4_ = *(undefined4 *)(lVar8 + 4);
    uStack_5c = *(undefined4 *)(lVar8 + 0xc);
    local_68._0_4_ = 0;
    lVar8 = *param_1;
    uStack_60 = param_4;
    if ((*(byte *)(lVar8 + 8) & 3) == 0) {
      FUN_144aa44d4(lVar8,&local_68);
    }
    else {
      *(undefined4 *)(lVar8 + 0x58) = 0;
      *(undefined4 *)(lVar8 + 0x5c) = local_68._4_4_;
      *(undefined4 *)(lVar8 + 0x60) = param_4;
      *(undefined4 *)(lVar8 + 100) = uStack_5c;
    }
    lVar8 = *param_2;
    if ((*(uint *)(lVar8 + 8) & 3) == 0) {
      uVar9 = *(uint *)(lVar8 + 0x88);
    }
    else if ((*(uint *)(lVar8 + 8) & 4) == 0) {
      if (*(longlong *)(lVar8 + 0x78) == 0) goto LAB_146eed80c;
      uVar9 = *(uint *)(*(longlong *)(lVar8 + 0x78) + 8);
    }
    else {
      lVar8 = FUN_14484244a();
      uVar9 = (uint)(lVar8 != 0);
    }
    if (uVar9 == 1) {
      lVar8 = *param_1;
      lVar7 = *param_2;
      if ((*(uint *)(lVar7 + 8) & 3) == 0) {
        puVar10 = *(undefined4 **)(lVar7 + 0x80);
      }
      else if ((*(uint *)(lVar7 + 8) & 4) == 0) {
        puVar6 = (undefined8 *)FUN_140135db2();
        puVar10 = (undefined4 *)*puVar6;
      }
      else {
        puVar10 = (undefined4 *)(lVar7 + 0x78);
      }
      local_2c = *puVar10;
      local_68 = &local_2c;
      FUN_1401c2f3e(lVar8);
    }
    else if (1 < (int)uVar9) {
      lVar8 = *param_1;
      lVar7 = *param_2;
      if ((*(byte *)(lVar7 + 8) & 3) == 0) {
        lVar7 = lVar7 + 0x80;
      }
      else {
        lVar7 = FUN_140135db2(lVar7);
      }
      local_68._0_4_ = (undefined4)lVar7;
      local_68._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
      FUN_140a4b800(lVar8);
    }
  }
LAB_146eed80c:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eed84e FUN_146eed84e body=328 status=ok
// SIG undefined FUN_146eed84e(void)

undefined8 FUN_146eed84e(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  cVar4 = (**(code **)(*param_1 + 0x10))();
  if ((cVar4 != '\0') && (0 < *(int *)((longlong)param_1 + 0x14))) {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
    if (((dVar8 != 1.0) || (dVar5 = dVar2, dVar6 = dVar1, dVar7 = dVar3, NAN(dVar8))) &&
       (dVar5 = DAT_14c8464e8, dVar6 = DAT_14c8464e0, dVar7 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar8)) {
      dVar8 = 1.0 / SQRT(dVar8);
      dVar5 = dVar2 * dVar8;
      dVar6 = dVar1 * dVar8;
      dVar7 = dVar3 * dVar8;
    }
    dVar1 = dVar7 * (double)param_1[5] + dVar6 * (double)param_1[3] + dVar5 * (double)param_1[4];
    if (0.0 < dVar1) {
      dVar2 = (double)DAT_14c9968b4;
      param_1[3] = (longlong)((double)param_1[3] - dVar6 * dVar1 * dVar2);
      param_1[4] = (longlong)((double)param_1[4] - dVar5 * dVar1 * dVar2);
      param_1[5] = (longlong)((double)param_1[5] - dVar7 * dVar1 * dVar2);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 146eed996 FUN_146eed996 body=112 status=ok
// SIG undefined FUN_146eed996(void)

void FUN_146eed996(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x90,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,0x10);
  }
  return;
}



// FUNCTION 146eeda06 FUN_146eeda06 body=147 status=ok
// SIG undefined FUN_146eeda06(void)

void FUN_146eeda06(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146eeda9a FUN_146eeda9a body=147 status=ok
// SIG undefined FUN_146eeda9a(void)

void FUN_146eeda9a(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  plVar4 = *(longlong **)(param_2 + 0x28);
  if (plVar4 == (longlong *)0x0) {
    param_1[1] = lVar3;
    plVar5 = (longlong *)param_1[2];
    if (plVar5 == (longlong *)0x0) goto LAB_146eedb20;
    param_1[2] = 0;
LAB_146eedae8:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146eedb20;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[1] = lVar3;
    plVar5 = (longlong *)param_1[2];
    if (plVar4 != plVar5) {
      param_1[2] = (longlong)plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_146eedb20;
      goto LAB_146eedae8;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146eedb20;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_146eedb20:
  *param_1 = param_2;
  return;
}



// FUNCTION 146eedb2e FUN_146eedb2e body=112 status=ok
// SIG undefined FUN_146eedb2e(void)

void FUN_146eedb2e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 146eedb9e FUN_146eedb9e body=95 status=ok
// SIG undefined FUN_146eedb9e(void)

void FUN_146eedb9e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 146eedbfe FUN_146eedbfe body=132 status=ok
// SIG undefined FUN_146eedbfe(void)

void FUN_146eedbfe(longlong param_1,int param_2)

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



// FUNCTION 146eedc84 FUN_146eedc84 body=112 status=ok
// SIG undefined FUN_146eedc84(void)

void FUN_146eedc84(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x90,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,0x10);
  }
  return;
}



// FUNCTION 146eedcf4 FUN_146eedcf4 body=147 status=ok
// SIG undefined FUN_146eedcf4(void)

void FUN_146eedcf4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146eedd88 FUN_146eedd88 body=66 status=ok
// SIG undefined FUN_146eedd88(void)

longlong FUN_146eedd88(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x30;
  do {
    puVar1 = *(undefined8 **)(param_1 + -8 + lVar2);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eede04 FUN_146eede04 body=132 status=ok
// SIG undefined FUN_146eede04(void)

void FUN_146eede04(longlong param_1,int param_2)

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



// FUNCTION 146eede8a FUN_146eede8a body=411 status=ok
// SIG undefined FUN_146eede8a(void)

void FUN_146eede8a(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
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
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 146eee026 FUN_146eee026 body=114 status=ok
// SIG undefined FUN_146eee026(void)

void FUN_146eee026(longlong *param_1,int param_2)

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



// FUNCTION 146eee098 FUN_146eee098 body=74 status=ok
// SIG undefined FUN_146eee098(void)

void FUN_146eee098(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)(~*(uint *)(param_1 + 9) & 1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == 1) {
          FUN_146eee0e2();
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146eee0e2 FUN_146eee0e2 body=87 status=ok
// SIG undefined FUN_146eee0e2(void)

void FUN_146eee0e2(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_146eee13a();
  return;
}



// FUNCTION 146eee13a FUN_146eee13a body=63 status=ok
// SIG undefined FUN_146eee13a(void)

void FUN_146eee13a(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 8 + (longlong)param_2 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_146eecdfe(param_1,param_2,1);
  return;
}



// FUNCTION 146eee17a FUN_146eee17a body=298 status=ok
// SIG undefined FUN_146eee17a(void)

undefined4 * FUN_146eee17a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1403c3250(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  local_58 = 0;
  cVar2 = FUN_1403c2f12(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1403c2fd2(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eee2a6 FUN_146eee2a6 body=116 status=ok
// SIG undefined FUN_146eee2a6(void)

void FUN_146eee2a6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 200,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 200)) {
      uVar2 = uVar1 / 200 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,200,8);
  }
  return;
}



// FUNCTION 146eee31a FUN_146eee31a body=332 status=ok
// SIG undefined FUN_146eee31a(void)

undefined4 * FUN_146eee31a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  FUN_14043cde0(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_40 = uVar4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = 0;
  cVar2 = FUN_14043cd48(param_1,uVar3,local_40);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_140b47f3e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eee468 FUN_146eee468 body=114 status=ok
// SIG undefined FUN_146eee468(void)

void FUN_146eee468(longlong *param_1,int param_2)

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



// FUNCTION 146eee4da FUN_146eee4da body=271 status=ok
// SIG undefined FUN_146eee4da(void)

undefined4 * FUN_146eee4da(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140618b84(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0xffffffffffffffff;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_1406183cc(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_140619d68(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eee5ea FUN_146eee5ea body=115 status=ok
// SIG undefined FUN_146eee5ea(void)

void FUN_146eee5ea(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,4);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146eee65e FUN_146eee65e body=526 status=ok
// SIG undefined FUN_146eee65e(void)

void FUN_146eee65e(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_146eee6f8;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_146eee6f8:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c997774) && (FUN_144b3d300(&DAT_14c997774), DAT_14c997774 == -1)) {
    DAT_14c99776c = 0;
    _Init_thread_footer(&DAT_14c997774);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c99776c;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f6b2c0;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_146eee86e(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eee86e FUN_146eee86e body=138 status=ok
// SIG undefined FUN_146eee86e(void)

undefined1 *
FUN_146eee86e(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 7;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f6d880;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 146eee912 FUN_146eee912 body=29 status=ok
// SIG undefined FUN_146eee912(void)

undefined8 FUN_146eee912(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146eee930 FUN_146eee930 body=92 status=ok
// SIG undefined FUN_146eee930(void)

undefined8 FUN_146eee930(longlong param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar3 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb8);
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & param_2) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar1 * 0x18);
        if (*puVar2 == param_2) goto LAB_146eee940;
        uVar1 = puVar2[4];
      } while (uVar1 != 0xffffffff);
    }
  }
  puVar2 = (uint *)0x0;
LAB_146eee940:
  return *(undefined8 *)(puVar2 + 2);
}



// FUNCTION 146eee98c FUN_146eee98c body=63 status=ok
// SIG undefined FUN_146eee98c(void)

void FUN_146eee98c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146eee9cc(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146eee9cc FUN_146eee9cc body=97 status=ok
// SIG undefined FUN_146eee9cc(void)

ulonglong FUN_146eee9cc(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146eeea2e FUN_146eeea2e body=126 status=ok
// SIG undefined FUN_146eeea2e(void)

void FUN_146eeea2e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_149f6b7f0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x2b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x25];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1401aa844(param_1);
  return;
}



// FUNCTION 146eeeaac FUN_146eeeaac body=282 status=ok
// SIG undefined FUN_146eeeaac(void)

void FUN_146eeeaac(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c997788) {
    FUN_144b3d300(&DAT_14c997788);
    if (DAT_14c997788 == -1) {
      DAT_14c997778 = (undefined4 *)0x0;
      DAT_14c997780 = 4;
      FUN_146ef0eb6(&DAT_14c997778,4,0);
      *DAT_14c997778 = 0x2030001;
      atexit((_func_5014 *)&LAB_142a2a46a);
      _Init_thread_footer(&DAT_14c997788);
    }
  }
  puVar1 = DAT_14c997778;
  lVar2 = (longlong)DAT_14c997780;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      if (*(byte *)((longlong)puVar1 + lVar3) < 4) {
        FUN_14051b394((ulonglong)*(byte *)((longlong)puVar1 + lVar3) * 0x10 + param_1 + 0x40,0,0);
      }
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
  }
  FUN_142a29a6d(param_1,param_2,param_1 + 0x100,1);
  FUN_142a29a6d(param_1,param_2,param_1 + 0x110,0);
  return;
}



// FUNCTION 146eeebc6 FUN_146eeebc6 body=281 status=ok
// SIG undefined FUN_146eeebc6(void)

void FUN_146eeebc6(longlong param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9977a0) {
    FUN_144b3d300(&DAT_14c9977a0);
    if (DAT_14c9977a0 == -1) {
      DAT_14c997790 = (undefined2 *)0x0;
      DAT_14c997798 = 2;
      FUN_146ef0eb6(&DAT_14c997790,2,0);
      *DAT_14c997790 = 1;
      atexit((_func_5014 *)&LAB_142a2aaae);
      _Init_thread_footer(&DAT_14c9977a0);
    }
  }
  puVar1 = DAT_14c997790;
  lVar2 = (longlong)DAT_14c997798;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      if (*(byte *)((longlong)puVar1 + lVar3) < 4) {
        FUN_14051b394((ulonglong)*(byte *)((longlong)puVar1 + lVar3) * 0x10 + param_1 + 0x40,0,0);
      }
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
  }
  FUN_142a2a47b(param_1,param_2,param_1 + 0x100,1);
  FUN_142a2a47b(param_1,param_2,param_1 + 0x110,0);
  return;
}



// FUNCTION 146eeece0 FUN_146eeece0 body=76 status=ok
// SIG undefined FUN_146eeece0(void)

void FUN_146eeece0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14173150e((longlong *)(param_1 + 0x100),iVar1);
  }
  FUN_1403c2a98((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x100),param_2);
  return;
}



// FUNCTION 146eeed2c FUN_146eeed2c body=76 status=ok
// SIG undefined FUN_146eeed2c(void)

void FUN_146eeed2c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x11c) < iVar1 + 1U) {
    FUN_14173150e((longlong *)(param_1 + 0x110),iVar1);
  }
  FUN_1403c2a98((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x110),param_2);
  return;
}



// FUNCTION 146eeed78 FUN_146eeed78 body=334 status=ok
// SIG undefined FUN_146eeed78(void)

void FUN_146eeed78(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_3 == (longlong *)0x0) {
    return;
  }
  if (*(int *)(*(longlong *)(*param_3 + 0x5a8) + 8 + (longlong)(int)param_3[1] * 0x10) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0x9c8);
  if (*(int *)(lVar1 + 0x518) == *(int *)(lVar1 + 0x544)) {
    return;
  }
  uVar2 = *(ulonglong *)(*(longlong *)(*param_3 + 0x98) + (longlong)(int)param_3[1] * 8);
  uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  lVar7 = lVar1 + 0x548;
  if (*(longlong *)(lVar1 + 0x550) != 0) {
    lVar7 = *(longlong *)(lVar1 + 0x550);
  }
  iVar5 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar1 + 0x558) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
  if (iVar5 == -1) {
    return;
  }
  lVar1 = *(longlong *)(lVar1 + 0x510);
  iVar6 = iVar5;
  while (*(ulonglong *)(lVar1 + (longlong)iVar6 * 0x20) != uVar2) {
    iVar6 = *(int *)((longlong)iVar6 * 0x20 + lVar1 + 0x18);
    if (iVar6 == -1) {
      return;
    }
  }
  do {
    lVar7 = lVar1 + (longlong)iVar5 * 0x20;
    if (*(ulonglong *)(lVar1 + (longlong)iVar5 * 0x20) == uVar2) goto LAB_146eeee7c;
    iVar5 = *(int *)(lVar7 + 0x18);
  } while (iVar5 != -1);
  lVar7 = 0;
LAB_146eeee7c:
  iVar5 = *(int *)(lVar7 + 0x10);
  if ((longlong)iVar5 != 0) {
    lVar1 = *(longlong *)(lVar7 + 8);
    lVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar1 + lVar7);
      iVar6 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
        FUN_140125d6e(param_1,iVar6);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar6 * 8) = uVar3;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar5 * 8 != lVar7);
  }
  return;
}



// FUNCTION 146eeeec6 FUN_146eeeec6 body=710 status=ok
// SIG undefined FUN_146eeeec6(void)

void FUN_146eeeec6(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_141730e74(param_1,0,0);
  if (param_3 == 2) {
    iVar6 = *(int *)(param_2 + 0x900);
    if (iVar6 < 0) {
LAB_146eef17e:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
      FUN_140992e4e(param_1);
    }
    FUN_140f62150(&local_90,param_2 + 0x8f0);
    lVar5 = CONCAT44(uStack_7c,uStack_80);
    if (lVar5 != 0) {
      do {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar5 + 0x98) + (longlong)(int)(uint)local_78 * 8);
        iVar6 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
          FUN_140125d6e(param_1,iVar6);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar6 * 8) = uVar3;
        FUN_140a1e69e(&local_90);
        lVar5 = CONCAT44(uStack_7c,uStack_80);
      } while (lVar5 != 0);
    }
  }
  else if (param_3 == 1) {
    lVar5 = *(longlong *)(param_2 + 0x9c8);
    iVar6 = *(int *)(lVar5 + 0x478) - *(int *)(lVar5 + 0x4a4);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
      FUN_140992e4e(param_1);
    }
    plVar1 = (longlong *)(lVar5 + 0x470);
    lVar2 = lVar5 + 0x480;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar2;
    if (*(int *)(lVar5 + 0x498) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar6 = *(int *)(lVar5 + 0x498);
    }
    uStack_70 = CONCAT44(uStack_44,uStack_48);
    local_78 = local_50;
    uVar3 = local_78;
    local_88 = (undefined4)local_60;
    uStack_84 = local_60._4_4_;
    uStack_80 = (undefined4)uStack_58;
    uStack_7c = uStack_58._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar4 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar6) || (local_78 = uVar3, uStack_58 != lVar2)) {
      do {
        local_78 = uVar3;
        uVar3 = *(undefined8 *)(*local_90 + (longlong)iVar4 * 0x10);
        iVar4 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
          FUN_140125d6e(param_1,iVar4);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar4 * 8) = uVar3;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar4 = local_78._4_4_;
        uVar3 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar6));
    }
  }
  else if (param_3 == 0) {
    iVar6 = *(int *)(param_2 + 0x888);
    if (iVar6 < 0) goto LAB_146eef17e;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
      FUN_140992e4e(param_1);
    }
    FUN_140f62150(&local_90,param_2 + 0x878);
    lVar5 = CONCAT44(uStack_7c,uStack_80);
    if (lVar5 != 0) {
      do {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar5 + 0x98) + (longlong)(int)(uint)local_78 * 8);
        iVar6 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
          FUN_140125d6e(param_1,iVar6);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar6 * 8) = uVar3;
        puVar7 = &uStack_80;
        if (local_78._4_1_ < 3) {
          puVar7 = (undefined4 *)0x0;
        }
        FUN_146eeed78(param_1,param_2,puVar7);
        FUN_140a1e69e(&local_90);
        lVar5 = CONCAT44(uStack_7c,uStack_80);
      } while (lVar5 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eef18e FUN_146eef18e body=1515 status=ok
// SIG undefined FUN_146eef18e(void)

void FUN_146eef18e(longlong *param_1,longlong param_2,undefined4 param_3,uint param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  int local_60;
  byte local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_141730e74(param_1,0,0);
  switch(param_3) {
  case 0:
    iVar2 = *(int *)(param_2 + 0x8a0);
    if (iVar2 < 0) {
LAB_146eef772:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      FUN_140992e4e(param_1);
    }
    FUN_14488ddfe(local_78,param_2 + 0x890);
    if (local_68 != 0) {
      do {
        if (*(char *)(*(longlong *)(local_68 + 0x2c0) + 0xb + (longlong)local_60 * 0x10) == '\x01')
        goto LAB_146eef247;
        if ((param_4 & 0xfffffffe) == 4) {
LAB_146eef28c:
          uVar1 = *(undefined8 *)(*(longlong *)(local_68 + 0x98) + (longlong)local_60 * 8);
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_140125d6e(param_1,iVar2);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar1;
          plVar3 = (longlong *)0x0;
          if (2 < local_5c) {
            plVar3 = &local_68;
          }
          FUN_146eeed78(param_1,param_2,plVar3);
        }
        else if (param_4 == 0) {
          if ((local_5c != 3) && (local_5c != 6)) goto LAB_146eef28c;
        }
        else if ((local_5c == 6 || local_5c == 3) && param_4 == 2) goto LAB_146eef28c;
LAB_146eef247:
        FUN_144b02030(local_78);
      } while (local_68 != 0);
    }
    break;
  case 1:
    iVar2 = *(int *)(param_2 + 0x918);
    if (iVar2 < 0) goto LAB_146eef772;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      FUN_140992e4e(param_1);
    }
    FUN_146d980ac(local_78,param_2 + 0x908);
    if (local_68 != 0) {
      do {
        if ((param_4 & 0xfffffffe) == 4) {
LAB_146eef6e2:
          uVar1 = *(undefined8 *)(*(longlong *)(local_68 + 0x98) + (longlong)local_60 * 8);
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_140125d6e(param_1,iVar2);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar1;
        }
        else if (param_4 == 0) {
          if ((local_5c != 3) && (local_5c != 6)) goto LAB_146eef6e2;
        }
        else if ((local_5c == 6 || local_5c == 3) && param_4 == 2) goto LAB_146eef6e2;
        FUN_146d8d3b0(local_78);
      } while (local_68 != 0);
    }
    break;
  case 2:
    iVar2 = *(int *)(param_2 + 0x960);
    if (iVar2 < 0) goto LAB_146eef772;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      FUN_140992e4e(param_1);
    }
    FUN_140f62150(local_78,param_2 + 0x950);
    if (local_68 != 0) {
      do {
        if ((param_4 & 0xfffffffe) == 4) {
LAB_146eef44b:
          uVar1 = *(undefined8 *)(*(longlong *)(local_68 + 0x98) + (longlong)local_60 * 8);
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_140125d6e(param_1,iVar2);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar1;
        }
        else if (param_4 == 0) {
          if ((local_5c != 3) && (local_5c != 6)) goto LAB_146eef44b;
        }
        else if ((local_5c == 6 || local_5c == 3) && param_4 == 2) goto LAB_146eef44b;
        FUN_140a1e69e(local_78);
      } while (local_68 != 0);
    }
    break;
  case 3:
    iVar2 = *(int *)(param_2 + 0x888);
    if (iVar2 < 0) goto LAB_146eef772;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      FUN_140992e4e(param_1);
    }
    FUN_140f62150(local_78,param_2 + 0x878);
    if (local_68 != 0) {
      do {
        if ((param_4 & 0xfffffffe) == 4) {
LAB_146eef634:
          uVar1 = *(undefined8 *)(*(longlong *)(local_68 + 0x98) + (longlong)local_60 * 8);
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_140125d6e(param_1,iVar2);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar1;
          plVar3 = (longlong *)0x0;
          if (2 < local_5c) {
            plVar3 = &local_68;
          }
          FUN_146eeed78(param_1,param_2,plVar3);
        }
        else if (param_4 == 0) {
          if ((local_5c != 3) && (local_5c != 6)) goto LAB_146eef634;
        }
        else if ((local_5c == 6 || local_5c == 3) && param_4 == 2) goto LAB_146eef634;
        FUN_140a1e69e(local_78);
      } while (local_68 != 0);
    }
    break;
  case 4:
    iVar2 = *(int *)(param_2 + 0x8a0);
    if (iVar2 < 0) goto LAB_146eef772;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      FUN_140992e4e(param_1);
    }
    FUN_14488ddfe(local_78,param_2 + 0x890);
    if (local_68 != 0) {
      do {
        if (*(char *)(*(longlong *)(local_68 + 0x2c0) + 0xb + (longlong)local_60 * 0x10) != '\x01')
        goto LAB_146eef55f;
        if ((param_4 & 0xfffffffe) == 4) {
LAB_146eef532:
          uVar1 = *(undefined8 *)(*(longlong *)(local_68 + 0x98) + (longlong)local_60 * 8);
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_140125d6e(param_1,iVar2);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar1;
        }
        else if (param_4 == 0) {
          if ((local_5c != 3) && (local_5c != 6)) goto LAB_146eef532;
        }
        else if ((local_5c == 6 || local_5c == 3) && param_4 == 2) goto LAB_146eef532;
LAB_146eef55f:
        FUN_144b02030(local_78);
      } while (local_68 != 0);
    }
    break;
  case 5:
    iVar2 = *(int *)(param_2 + 0x900);
    if (iVar2 < 0) goto LAB_146eef772;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      FUN_140992e4e(param_1);
    }
    FUN_140f62150(local_78,param_2 + 0x8f0);
    if (local_68 != 0) {
      do {
        if ((local_5c < 2 || &stack0x00000000 == &DAT_00000068) ||
           (*(char *)(*(longlong *)(local_68 + 0x2c0) + 0xd + (longlong)local_60 * 0x10) != '\x01'))
        goto LAB_146eef3ac;
        if ((param_4 & 0xfffffffe) == 4) {
LAB_146eef37f:
          uVar1 = *(undefined8 *)(*(longlong *)(local_68 + 0x98) + (longlong)local_60 * 8);
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_140125d6e(param_1,iVar2);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar1;
        }
        else if (param_4 == 0) {
          if ((local_5c != 3) && (local_5c != 6)) goto LAB_146eef37f;
        }
        else if ((local_5c == 6 || local_5c == 3) && param_4 == 2) goto LAB_146eef37f;
LAB_146eef3ac:
        FUN_140a1e69e(local_78);
      } while (local_68 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eef77b FUN_146eef77b body=2496 status=ok
// SIG undefined FUN_146eef77b(void)

void FUN_146eef77b(longlong *param_1,longlong *param_2,undefined1 *param_3,longlong param_4,
                  longlong param_5,longlong param_6,char param_7)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  longlong lVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined1 *puVar25;
  longlong lVar26;
  undefined1 *puVar27;
  longlong *plVar28;
  longlong *plVar29;
  bool bVar30;
  bool bVar31;
  undefined1 *puVar32;
  float *pfVar33;
  longlong lVar34;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  undefined1 *local_f8;
  longlong *local_f0;
  undefined1 local_e8 [12];
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar29 = *(longlong **)(param_6 + 0x9c8);
  puVar27 = param_3;
  local_110 = param_2;
  local_108 = param_1;
  if (param_7 != '\0') {
    FUN_140a36458(plVar29,param_2);
  }
  lVar22 = (longlong)(int)param_3;
  puVar25 = (undefined1 *)(lVar22 * 0x30 + *local_108);
  if ((*(uint *)(param_4 + 8) & 1) == 0) {
    puVar25 = (undefined1 *)0x0;
  }
  puVar32 = (undefined1 *)(lVar22 * 0x20 + local_108[8]);
  if ((*(uint *)(param_4 + 8) & 0x10) == 0) {
    puVar32 = (undefined1 *)0x0;
  }
  if (puVar25 != (undefined1 *)0x0) {
    uStack_d0 = (double)*(float *)(puVar25 + 0x2c);
    local_d8 = (double)*(float *)(puVar25 + 0x28);
    stack0xffffffffffffff20 = (double)*(float *)(puVar25 + 0x24);
    local_e8._0_8_ = (double)*(float *)(puVar25 + 0x20);
    local_118 = 1;
    puVar27 = puVar25;
    FUN_1447eb820(plVar29,local_110,puVar25);
  }
  if (puVar32 != (undefined1 *)0x0) {
    FUN_1400d25b0(plVar29 + 0x20,local_110);
    (**(code **)(*plVar29 + 0x18))(plVar29,local_110);
    FUN_1400d260a(local_110,puVar32);
  }
  uVar16 = *(uint *)(param_4 + 8);
  pfVar33 = (float *)0x0;
  if ((uVar16 & 2) != 0) {
    pfVar33 = (float *)(lVar22 * 0x18 + local_108[2]);
  }
  if (pfVar33 != (float *)0x0) {
    local_88 = *(undefined8 *)(pfVar33 + 3);
    uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,pfVar33[5]);
    local_d8 = (double)pfVar33[2];
    puVar27 = local_e8;
    stack0xffffffffffffff20 = (double)pfVar33[1];
    local_e8._0_8_ = (double)*pfVar33;
    FUN_1400d2704(plVar29,local_110);
    uVar16 = *(uint *)(param_4 + 8);
  }
  puVar23 = (undefined8 *)(lVar22 * 0x40 + local_108[0xc]);
  if (puVar23 == (undefined8 *)0x0 || (uVar16 & 0x40) == 0) {
    if (((puVar25 != (undefined1 *)0x0) || (puVar32 != (undefined1 *)0x0)) ||
       (plVar28 = local_110, pfVar33 != (float *)0x0)) {
LAB_146eef9df:
      lVar22 = *local_110;
      uVar20 = (ulonglong)(int)local_110[1];
      lVar18 = *(longlong *)(lVar22 + 0x48);
      lVar26 = uVar20 * 0x10;
      fVar3 = *(float *)(lVar18 + 0xc + lVar26);
      fVar4 = *(float *)(lVar18 + 8 + lVar26);
      dVar10 = (double)*(float *)(lVar18 + 4 + lVar26);
      local_e8._8_4_ = SUB84(dVar10,0);
      local_e8._0_8_ = (double)*(float *)(lVar18 + lVar26);
      uStack_dc = (int)((ulonglong)dVar10 >> 0x20);
      puVar23 = (undefined8 *)(*(longlong *)(lVar22 + 0x28) + uVar20 * 0x18);
      uVar14 = *puVar23;
      uVar15 = puVar23[1];
      uVar5 = *(undefined8 *)(*(longlong *)(lVar22 + 0x28) + 0x10 + uVar20 * 0x18);
      local_c8 = (undefined4)uVar14;
      uStack_c4 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uStack_c0 = (undefined4)uVar15;
      uStack_bc = (undefined4)((ulonglong)uVar15 >> 0x20);
      local_b8 = (undefined4)uVar5;
      uStack_b4 = (uint)((ulonglong)uVar5 >> 0x20);
      goto LAB_146eefa68;
    }
  }
  else {
    FUN_1447ec412(plVar29,local_110,puVar23);
    if (*(int *)(puVar23 + 6) != 2) goto LAB_146eef9df;
    fVar3 = *(float *)((longlong)puVar23 + 0x2c);
    fVar4 = *(float *)(puVar23 + 5);
    local_e8._8_4_ = SUB84((double)*(float *)((longlong)puVar23 + 0x24),0);
    local_e8._0_8_ = (double)*(float *)(puVar23 + 4);
    uStack_dc = (int)((ulonglong)(double)*(float *)((longlong)puVar23 + 0x24) >> 0x20);
    local_c8 = (undefined4)*puVar23;
    uStack_c4 = (undefined4)((ulonglong)*puVar23 >> 0x20);
    uStack_c0 = (undefined4)puVar23[1];
    uStack_bc = (undefined4)((ulonglong)puVar23[1] >> 0x20);
    local_b8 = (undefined4)puVar23[2];
    uStack_b4 = (uint)((ulonglong)puVar23[2] >> 0x20);
    lVar22 = *local_110;
    uVar20 = (ulonglong)*(uint *)(local_110 + 1);
LAB_146eefa68:
    plVar28 = local_110;
    uStack_d0 = (double)fVar3;
    local_d8 = (double)fVar4;
    uStack_90 = 0;
    local_98 = 0x3ff0000000000000;
    uStack_a0 = 0x3ff0000000000000;
    local_a8 = 0x3ff0000000000000;
    uStack_b0 = 0;
    local_88 = 0;
    uStack_80 = (longlong *)0x0;
    local_78 = 0;
    uStack_74 = 0;
    puVar27 = local_e8;
    FUN_144aa485a(lVar22,uVar20,puVar27);
    bVar6 = *(byte *)((longlong)plVar28 + 0xc);
    puVar27 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar27 >> 8),1 < bVar6);
    lVar22 = *plVar28;
    lVar18 = (longlong)(int)plVar28[1];
    if ((plVar28 == (longlong *)0x0 || 1 >= bVar6) ||
       (puVar27 = (undefined1 *)(lVar18 * 0x10),
       puVar27[*(longlong *)(lVar22 + 0x2c0) + 0xd] != '\x01')) {
LAB_146eefb1e:
      if ((*(char *)(*(longlong *)(lVar22 + 0xe0) + lVar18) != '\0') || (DAT_14c9978a0 != 0)) {
        uVar7 = *(undefined4 *)(*(longlong *)(lVar22 + 0x80) + lVar18 * 4);
        puVar23 = (undefined8 *)
                  FUN_1447eab44(plVar29 + 0x6c,uVar7,CONCAT71((int7)((ulonglong)puVar27 >> 8),1));
        *(undefined1 *)(puVar23 + 8) = 2;
        local_88 = *(undefined8 *)
                    (*(longlong *)(*local_110 + 0xb0) + (longlong)(int)local_110[1] * 8);
        uStack_80 = local_110;
        local_78 = *(undefined4 *)
                    (*(longlong *)(*local_110 + 0x80) + (longlong)(int)local_110[1] * 4);
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_64 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        local_54 = local_54 & 0xffffff00;
        plVar28 = local_110;
        FUN_144b06ac6(local_110);
        FUN_144b06a28(local_110,&uStack_64);
        local_54 = CONCAT31(local_54._1_3_,1);
        *(undefined4 *)(puVar23 + 4) = uStack_6c._4_4_;
        *(undefined4 *)((longlong)puVar23 + 0x24) = (undefined4)uStack_64;
        *(undefined4 *)(puVar23 + 5) = uStack_64._4_4_;
        *(undefined4 *)((longlong)puVar23 + 0x2c) = uStack_5c;
        *(undefined4 *)(puVar23 + 2) = local_78;
        *(undefined4 *)((longlong)puVar23 + 0x14) = uStack_74;
        *(undefined4 *)(puVar23 + 3) = uStack_70;
        *(undefined4 *)((longlong)puVar23 + 0x1c) = (undefined4)uStack_6c;
        *(undefined4 *)puVar23 = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar23 + 4) = local_88._4_4_;
        *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_80._4_4_;
        puVar23[6] = CONCAT44(local_54,uStack_58);
        *(undefined2 *)(puVar23 + 7) =
             *(undefined2 *)(*(longlong *)(*local_110 + 0x170) + (longlong)(int)local_110[1] * 2);
        puVar27 = (undefined1 *)CONCAT71((int7)((ulonglong)plVar28 >> 8),1);
        puVar17 = (undefined8 *)FUN_1447eab44(plVar29 + 0x70,uVar7,puVar27);
        for (lVar22 = 9; plVar28 = local_110, lVar22 != 0; lVar22 = lVar22 + -1) {
          *puVar17 = *puVar23;
          puVar23 = puVar23 + 1;
          puVar17 = puVar17 + 1;
        }
      }
    }
    else if ((2 < bVar6) &&
            ((plVar9 = *(longlong **)(puVar27 + *(longlong *)(lVar22 + 0x5a8)),
             plVar9 != (longlong *)0x0 && (2 < *(byte *)((longlong)plVar9 + 0xc))))) {
      puVar27 = (undefined1 *)*plVar9;
      if (((*(byte *)(*(longlong *)(puVar27 + 0x680) + (longlong)(int)plVar9[1]) & 1) != 0) &&
         (plVar1 = (longlong *)(puVar27 + 200), puVar27 = *(undefined1 **)(lVar22 + 200),
         *(longlong *)(*plVar1 + (longlong)(int)plVar9[1] * 8) ==
         *(longlong *)(puVar27 + lVar18 * 8))) goto LAB_146eefb1e;
    }
  }
  iVar8 = *(int *)(param_4 + 0x18);
  local_100 = param_4;
  local_f8 = puVar32;
  local_f0 = plVar29;
  if ((longlong)iVar8 == 0) {
    bVar30 = false;
    bVar24 = false;
    bVar31 = false;
  }
  else {
    lVar22 = *(longlong *)(param_4 + 0x10);
    lVar18 = 0;
    bVar31 = false;
    bVar24 = false;
    bVar30 = false;
    plVar29 = local_108;
    do {
      lVar26 = (longlong)*(int *)(lVar22 + lVar18);
      lVar34 = (longlong)*(int *)(param_5 + lVar26 * 8);
      uVar16 = *(uint *)(param_5 + 4 + lVar26 * 8);
      puVar21 = (undefined4 *)(lVar26 * 0x30 + plVar29[0x28]);
      puVar27 = (undefined1 *)((ulonglong)puVar27 & 0xffffffffffffff00);
      if (puVar21 != (undefined4 *)0x0 && (uVar16 & 1) != 0) {
        lVar2 = *(longlong *)(*plVar28 + 0xf8) + (longlong)(int)plVar28[1] * 0x18;
        lVar19 = *(longlong *)(lVar2 + 8);
        if (lVar19 == 0) {
          lVar19 = lVar2;
        }
        lVar2 = *(longlong *)(lVar19 + lVar34 * 8);
        if ((*(byte *)(lVar2 + 8) & 3) == 0) {
          FUN_146285926();
          plVar29 = local_108;
          plVar28 = local_110;
        }
        else {
          uVar7 = *puVar21;
          uVar11 = puVar21[1];
          uVar12 = puVar21[2];
          uVar13 = puVar21[3];
          uVar5 = *(undefined8 *)(puVar21 + 4);
          uVar14 = *(undefined8 *)(puVar21 + 6);
          uVar15 = *(undefined8 *)(puVar21 + 10);
          *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(puVar21 + 8);
          *(undefined8 *)(lVar2 + 0x70) = uVar15;
          *(undefined8 *)(lVar2 + 0x58) = uVar5;
          *(undefined8 *)(lVar2 + 0x60) = uVar14;
          *(undefined4 *)(lVar2 + 0x48) = uVar7;
          *(undefined4 *)(lVar2 + 0x4c) = uVar11;
          *(undefined4 *)(lVar2 + 0x50) = uVar12;
          *(undefined4 *)(lVar2 + 0x54) = uVar13;
        }
        lVar2 = *(longlong *)(*plVar28 + 0xf8) + (longlong)(int)plVar28[1] * 0x18;
        lVar19 = *(longlong *)(lVar2 + 8);
        if (lVar19 == 0) {
          lVar19 = lVar2;
        }
        lVar2 = *(longlong *)(lVar19 + lVar34 * 8);
        bVar24 = (bool)(bVar24 | (*(byte *)(lVar2 + 0x71 +
                                           (ulonglong)((*(byte *)(lVar2 + 8) & 3) == 0) * 8) & 3) !=
                                 0);
        uVar16 = *(uint *)(param_5 + 4 + lVar26 * 8);
        bVar31 = true;
      }
      if (((uVar16 & 2) != 0) && (lVar26 = lVar26 * 0x40 + plVar29[0x2a], lVar26 != 0)) {
        lVar2 = *(longlong *)(*plVar28 + 0xf8) + (longlong)(int)plVar28[1] * 0x18;
        lVar19 = *(longlong *)(lVar2 + 8);
        if (lVar19 == 0) {
          lVar19 = lVar2;
        }
        local_e8._0_8_ = lVar26;
        FUN_146ef104c(*(undefined8 *)(lVar19 + lVar34 * 8),local_e8);
        bVar30 = true;
        plVar29 = local_108;
        plVar28 = local_110;
      }
      lVar18 = lVar18 + 4;
    } while ((longlong)iVar8 * 4 != lVar18);
  }
  plVar29 = local_f0;
  if (((bVar30) || (local_f8 != (undefined1 *)0x0)) || (bVar31)) {
    FUN_1447eb5f2(local_f0,plVar28);
    plVar28 = local_110;
  }
  plVar9 = local_110;
  if ((bool)(bVar31 & DAT_14c9978a0 == 0)) {
    lVar22 = *plVar28;
    if (bVar24) {
      lVar18 = (longlong)(int)plVar28[1];
LAB_146eefdf6:
      *(undefined1 *)(*(longlong *)(lVar22 + 0xe0) + lVar18) = 1;
      FUN_1447eb0a2(plVar29,plVar28);
      plVar28 = local_110;
      bVar6 = *(byte *)((longlong)local_110 + 0xc);
      lVar18 = CONCAT71((int7)((ulonglong)puVar27 >> 8),1 < bVar6);
      lVar22 = *local_110;
      lVar26 = (longlong)(int)local_110[1];
      if ((local_110 != (longlong *)0x0 && 1 < bVar6) &&
         (lVar18 = lVar26 * 0x10, *(char *)(*(longlong *)(lVar22 + 0x2c0) + 0xd + lVar18) == '\x01')
         ) {
        if ((bVar6 < 3) ||
           ((plVar9 = *(longlong **)(*(longlong *)(lVar22 + 0x5a8) + lVar18),
            plVar9 == (longlong *)0x0 || (*(byte *)((longlong)plVar9 + 0xc) < 3))))
        goto LAB_146ef00b0;
        if (((*(byte *)(*(longlong *)(*plVar9 + 0x680) + (longlong)(int)plVar9[1]) & 1) == 0) ||
           (lVar18 = *(longlong *)(lVar22 + 200),
           *(longlong *)(*(longlong *)(*plVar9 + 200) + (longlong)(int)plVar9[1] * 8) !=
           *(longlong *)(lVar18 + lVar26 * 8))) goto LAB_146ef00b0;
      }
      if ((*(char *)(*(longlong *)(lVar22 + 0xe0) + lVar26) != '\0') || (DAT_14c9978a0 != 0)) {
        uVar7 = *(undefined4 *)(*(longlong *)(lVar22 + 0x80) + lVar26 * 4);
        puVar23 = (undefined8 *)
                  FUN_1447eab44(plVar29 + 0x6c,uVar7,CONCAT71((int7)((ulonglong)lVar18 >> 8),1));
        *(undefined1 *)(puVar23 + 8) = 2;
        stack0xffffffffffffff20 = plVar28;
        local_e8._0_8_ =
             *(undefined8 *)(*(longlong *)(*plVar28 + 0xb0) + (longlong)(int)plVar28[1] * 8);
        local_d8._0_4_ =
             *(undefined4 *)(*(longlong *)(*plVar28 + 0x80) + (longlong)(int)plVar28[1] * 4);
        local_d8._4_4_ = 0;
        uStack_d0._0_4_ = 0;
        uStack_d0._4_4_ = 0;
        local_c8 = 0;
        uStack_c4 = 0;
        uStack_c0 = 0;
        uStack_bc = 0;
        local_b8 = 0;
        uStack_b4 = uStack_b4 & 0xffffff00;
        FUN_144b06ac6(plVar28);
        FUN_144b06a28(plVar28,&uStack_c4);
        uStack_b4 = CONCAT31(uStack_b4._1_3_,1);
        *(undefined4 *)(puVar23 + 4) = local_c8;
        *(undefined4 *)((longlong)puVar23 + 0x24) = uStack_c4;
        *(undefined4 *)(puVar23 + 5) = uStack_c0;
        *(undefined4 *)((longlong)puVar23 + 0x2c) = uStack_bc;
        *(undefined4 *)(puVar23 + 2) = (undefined4)local_d8;
        *(undefined4 *)((longlong)puVar23 + 0x14) = local_d8._4_4_;
        *(undefined4 *)(puVar23 + 3) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)puVar23 + 0x1c) = uStack_d0._4_4_;
        *(undefined4 *)puVar23 = local_e8._0_4_;
        *(undefined4 *)((longlong)puVar23 + 4) = local_e8._4_4_;
        *(undefined4 *)(puVar23 + 1) = local_e8._8_4_;
        *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_dc;
        puVar23[6] = CONCAT44(uStack_b4,local_b8);
        *(undefined2 *)(puVar23 + 7) =
             *(undefined2 *)(*(longlong *)(*plVar28 + 0x170) + (longlong)(int)plVar28[1] * 2);
        puVar17 = (undefined8 *)FUN_1447eab44(plVar29 + 0x70,uVar7,1);
        for (lVar22 = 9; lVar22 != 0; lVar22 = lVar22 + -1) {
          *puVar17 = *puVar23;
          puVar23 = puVar23 + 1;
          puVar17 = puVar17 + 1;
        }
      }
    }
    else {
      lVar18 = (longlong)(int)plVar28[1];
      iVar8 = *(int *)(*(longlong *)(lVar22 + 0xf8) + 0x10 + lVar18 * 0x18);
      if (*(int *)(local_100 + 0x18) != iVar8) {
        puVar25 = (undefined1 *)(*(longlong *)(lVar22 + 0xf8) + lVar18 * 0x18);
        puVar27 = *(undefined1 **)(puVar25 + 8);
        if (puVar27 == (undefined1 *)0x0) {
          puVar27 = puVar25;
        }
        if (iVar8 != 0) {
          lVar26 = 0;
          do {
            plVar28 = local_110;
            if ((*(byte *)(*(longlong *)(puVar27 + lVar26) + 0x71 +
                          (ulonglong)((*(byte *)(*(longlong *)(puVar27 + lVar26) + 8) & 3) == 0) * 8
                          ) & 3) != 0) goto LAB_146eefdf6;
            lVar26 = lVar26 + 8;
          } while ((longlong)iVar8 * 8 != lVar26);
        }
      }
      *(undefined1 *)(*(longlong *)(lVar22 + 0xe0) + lVar18) = 0;
      uVar7 = *(undefined4 *)(*(longlong *)(*local_110 + 0x80) + (longlong)(int)local_110[1] * 4);
      puVar21 = (undefined4 *)FUN_1447eab44(plVar29 + 0x70,uVar7,0);
      *(undefined1 *)(puVar21 + 0x10) = 0;
      *(undefined2 *)(puVar21 + 0xe) =
           *(undefined2 *)(*(longlong *)(*plVar9 + 0x170) + (longlong)(int)plVar9[1] * 2);
      stack0xffffffffffffff20 = plVar9;
      local_e8._0_8_ = *(undefined8 *)(*(longlong *)(*plVar9 + 0xb0) + (longlong)(int)plVar9[1] * 8)
      ;
      local_d8._0_4_ = *(undefined4 *)(*(longlong *)(*plVar9 + 0x80) + (longlong)(int)plVar9[1] * 4)
      ;
      local_d8._4_4_ = 0;
      uStack_d0._0_4_ = 0;
      uStack_d0._4_4_ = 0;
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_b8 = 0;
      uStack_b4 = uStack_b4 & 0xffffff00;
      FUN_144b06ac6(plVar9);
      FUN_144b06a28(plVar9,&uStack_c4);
      uStack_b4 = CONCAT31(uStack_b4._1_3_,1);
      puVar21[8] = local_c8;
      puVar21[9] = uStack_c4;
      puVar21[10] = uStack_c0;
      puVar21[0xb] = uStack_bc;
      puVar21[4] = (undefined4)local_d8;
      puVar21[5] = local_d8._4_4_;
      puVar21[6] = (undefined4)uStack_d0;
      puVar21[7] = uStack_d0._4_4_;
      *puVar21 = local_e8._0_4_;
      puVar21[1] = local_e8._4_4_;
      puVar21[2] = local_e8._8_4_;
      puVar21[3] = uStack_dc;
      *(ulonglong *)(puVar21 + 0xc) = CONCAT44(uStack_b4,local_b8);
      FUN_1448b7b4c(plVar29 + 0x6c,uVar7);
      (**(code **)(*(longlong *)plVar29[0x5b] + 0x80))
                ((longlong *)plVar29[0x5b],puVar21,*(undefined2 *)(puVar21 + 0xe));
    }
  }
LAB_146ef00b0:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef013c FUN_146ef013c body=391 status=ok
// SIG undefined FUN_146ef013c(void)

undefined8 * FUN_146ef013c(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
    *(undefined4 *)(puVar7 + 1) = 0xffffffff;
    puVar7[7] = 0;
    puVar7[8] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
    uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
    puVar7[10] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
    puVar7[0xb] = uVar2;
    uVar2 = DAT_14c8463e8;
    puVar7[0xc] = DAT_14c8463e0;
    puVar7[0xd] = uVar2;
    uVar2 = DAT_14c8463e8;
    puVar7[0x10] = DAT_14c8463e0;
    puVar7[0x11] = uVar2;
    uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
    puVar7[0xe] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
    puVar7[0xf] = uVar2;
    *(undefined4 *)(puVar7 + 0x12) = 0;
    *puVar7 = &PTR_FUN_149f6f630;
    puVar7[0x13] = 0;
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    puVar7[0x16] = 0;
    puVar7[0x17] = 0;
    puVar7[0x18] = 0;
    puVar7[0x19] = 0;
    puVar7[0x1a] = 0;
    *(undefined8 *)((longlong)puVar7 + 0xd4) = 0;
    *(undefined8 *)((longlong)puVar7 + 0xdc) = 0;
    *(undefined8 **)(param_1 + 0x60) = puVar7;
  }
  else {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    puVar7 = puVar1;
    if (iVar6 != 2) {
      uVar2 = puVar1[1];
      puVar7 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
      puVar7[1] = uVar2;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[8] = 0;
      uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
      puVar7[10] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      puVar7[0xb] = uVar2;
      uVar2 = DAT_14c8463e8;
      puVar7[0xc] = DAT_14c8463e0;
      puVar7[0xd] = uVar2;
      uVar2 = DAT_14c8463e8;
      puVar7[0x10] = DAT_14c8463e0;
      puVar7[0x11] = uVar2;
      uVar5 = DAT_14c8463d8._4_4_;
      uVar4 = (undefined4)DAT_14c8463d8;
      uVar3 = DAT_14c8463d0._4_4_;
      *(undefined4 *)(puVar7 + 0xe) = (undefined4)DAT_14c8463d0;
      *(undefined4 *)((longlong)puVar7 + 0x74) = uVar3;
      *(undefined4 *)(puVar7 + 0xf) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x7c) = uVar5;
      *(undefined4 *)(puVar7 + 0x12) = 0;
      *puVar7 = &PTR_FUN_149f6f630;
      puVar7[0x13] = 0;
      puVar7[0x14] = 0;
      puVar7[0x15] = 0;
      puVar7[0x16] = 0;
      puVar7[0x17] = 0;
      puVar7[0x18] = 0;
      puVar7[0x19] = 0;
      puVar7[0x1a] = 0;
      *(undefined8 *)((longlong)puVar7 + 0xd4) = 0;
      *(undefined8 *)((longlong)puVar7 + 0xdc) = 0;
      *(undefined8 **)(param_1 + 0x60) = puVar7;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        puVar7 = *(undefined8 **)(param_1 + 0x60);
      }
    }
  }
  return puVar7;
}



// FUNCTION 146ef02d4 FUN_146ef02d4 body=213 status=ok
// SIG undefined FUN_146ef02d4(void)

undefined8 FUN_146ef02d4(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 0xc);
  if ((((0.0 < *(float *)(param_1 + 4)) &&
       (dVar4 = (double)*(float *)(param_1 + 4),
       *(double *)(param_2 + 0xd8) <= dVar4 && dVar4 != *(double *)(param_2 + 0xd8))) &&
      (*(double *)(param_2 + 0xe0) <= dVar4 && dVar4 != *(double *)(param_2 + 0xe0))) ||
     ((((0.0 < fVar1 &&
        (*(double *)(param_2 + 0x58) * *(double *)(param_2 + 0x58) +
         *(double *)(param_2 + 0x48) * *(double *)(param_2 + 0x48) +
         *(double *)(param_2 + 0x50) * *(double *)(param_2 + 0x50) < (double)(fVar1 * fVar1))) &&
       (*(double *)(param_2 + 0x70) * *(double *)(param_2 + 0x70) +
        *(double *)(param_2 + 0x60) * *(double *)(param_2 + 0x60) +
        *(double *)(param_2 + 0x68) * *(double *)(param_2 + 0x68) < (double)(fVar1 * fVar1))) ||
      ((0.0 < fVar2 &&
       (*(double *)(param_2 + 0x28) * *(double *)(param_2 + 0x28) +
        *(double *)(param_2 + 0x18) * *(double *)(param_2 + 0x18) +
        *(double *)(param_2 + 0x20) * *(double *)(param_2 + 0x20) < (double)(fVar2 * fVar2))))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 146ef03aa FUN_146ef03aa body=154 status=ok
// SIG undefined FUN_146ef03aa(void)

undefined8 FUN_146ef03aa(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  
  fVar1 = *(float *)(param_1 + 8);
  if ((((0.0 < *(float *)(param_1 + 4)) &&
       (dVar3 = (double)*(float *)(param_1 + 4),
       *(double *)(param_2 + 0x48) <= dVar3 && dVar3 != *(double *)(param_2 + 0x48))) ||
      ((0.0 < fVar1 &&
       (*(double *)(param_2 + 0x28) * *(double *)(param_2 + 0x28) +
        *(double *)(param_2 + 0x18) * *(double *)(param_2 + 0x18) +
        *(double *)(param_2 + 0x20) * *(double *)(param_2 + 0x20) < (double)(fVar1 * fVar1))))) ||
     ((0.0 < *(float *)(param_1 + 0xc) &&
      ((*(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58)) *
       (*(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60)) *
       (*(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68)) <
       (double)*(float *)(param_1 + 0xc))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 146ef0444 FUN_146ef0444 body=157 status=ok
// SIG undefined FUN_146ef0444(void)

undefined8 FUN_146ef0444(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  
  fVar1 = *(float *)(param_1 + 8);
  if ((((0.0 < *(float *)(param_1 + 4)) &&
       (dVar3 = (double)*(float *)(param_1 + 4),
       *(double *)(param_2 + 0x58) <= dVar3 && dVar3 != *(double *)(param_2 + 0x58))) ||
      ((0.0 < fVar1 &&
       (*(double *)(param_2 + 0x38) * *(double *)(param_2 + 0x38) +
        *(double *)(param_2 + 0x28) * *(double *)(param_2 + 0x28) +
        *(double *)(param_2 + 0x30) * *(double *)(param_2 + 0x30) < (double)(fVar1 * fVar1))))) ||
     ((0.0 < *(float *)(param_1 + 0xc) &&
      ((*(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60)) *
       (*(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68)) *
       (*(double *)(param_2 + 0x88) - *(double *)(param_2 + 0x70)) <
       (double)*(float *)(param_1 + 0xc))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 146ef04e2 FUN_146ef04e2 body=291 status=ok
// SIG undefined FUN_146ef04e2(void)

void FUN_146ef04e2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((undefined8 *)(param_1 + 0x28) != param_2) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x28) = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  iVar7 = 0;
  local_48 = (undefined8 *)0x0;
  local_40._0_4_ = 1;
  FUN_1447de2c0(&local_48,1,0);
  uVar4 = local_40._4_4_;
  iVar3 = (int)local_40;
  puVar2 = local_48;
  *local_48 = 0;
  local_48[1] = (undefined8 *)(param_1 + 0x28);
  local_48 = (undefined8 *)0x0;
  lVar8 = (longlong)(int)local_40;
  local_40 = 0;
  if (lVar8 != 0) {
    lVar5 = 0;
    iVar7 = 0;
    do {
      lVar1 = *(longlong *)((longlong)puVar2 + lVar5 + 8);
      if (lVar1 == 0) {
        piVar6 = (int *)(*(longlong *)((longlong)puVar2 + lVar5) + 0x18);
      }
      else {
        piVar6 = (int *)(lVar1 + 8);
      }
      iVar7 = iVar7 + *piVar6;
      lVar5 = lVar5 + 0x10;
    } while (lVar8 << 4 != lVar5);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    *(int *)(param_1 + 0x18) = iVar3;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = iVar7;
  }
  else {
    FUN_1400020a8();
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    *(int *)(param_1 + 0x18) = iVar3;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(int *)(param_1 + 0x20) = iVar7;
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef0606 FUN_146ef0606 body=413 status=ok
// SIG undefined FUN_146ef0606(void)

void FUN_146ef0606(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong *puVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      do {
        puVar7 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*puVar7 == param_2) {
          puVar9 = puVar7 + 1;
          if (puVar9 == (ulonglong *)0x0 || puVar7 == (ulonglong *)0x0) {
            return;
          }
          iVar4 = (int)param_1[0xb];
          iVar5 = ~(uint)*puVar9 + iVar4;
          if (iVar5 != 0) {
            iVar8 = 1;
            if (iVar5 < 1) {
              iVar8 = iVar5;
            }
            memmove((void *)((longlong)(int)(uint)*puVar9 * 0x40 + param_1[10]),
                    (void *)((longlong)(iVar4 - iVar8) * 0x40 + param_1[10]),(longlong)iVar8 << 6);
            iVar4 = (int)param_1[0xb];
          }
          *(int *)(param_1 + 0xb) = iVar4 + -1;
          FUN_146ef130e(param_1 + 10);
          uVar2 = (uint)*puVar9;
          if ((int)param_1[0xb] <= (int)uVar2) goto LAB_146ef070b;
          if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_146ef0706;
          uVar1 = *(ulonglong *)(param_1[10] + (longlong)(int)uVar2 * 0x40);
          uVar6 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          plVar3 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar3 = (longlong *)param_1[8];
          }
          iVar4 = *(int *)((longlong)plVar3 +
                          (ulonglong)((int)param_1[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
          if (iVar4 == -1) goto LAB_146ef0706;
          goto LAB_146ef0782;
        }
        iVar4 = (int)puVar7[2];
      } while (iVar4 != -1);
    }
  }
  return;
  while (iVar4 = (int)puVar7[2], iVar4 != -1) {
LAB_146ef0782:
    puVar7 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18);
    if (*puVar7 == uVar1) goto LAB_146ef0708;
  }
LAB_146ef0706:
  puVar7 = (ulonglong *)0x0;
LAB_146ef0708:
  *(uint *)(puVar7 + 1) = uVar2;
LAB_146ef070b:
  FUN_1400c8e46(param_1,param_2);
  return;
}



// FUNCTION 146ef0834 FUN_146ef0834 body=59 status=ok
// SIG undefined FUN_146ef0834(void)

undefined8 FUN_146ef0834(longlong *param_1)

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



// FUNCTION 146ef095a FUN_146ef095a body=59 status=ok
// SIG undefined FUN_146ef095a(void)

undefined8 FUN_146ef095a(longlong *param_1)

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



// FUNCTION 146ef0a80 FUN_146ef0a80 body=59 status=ok
// SIG undefined FUN_146ef0a80(void)

undefined8 FUN_146ef0a80(longlong *param_1)

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



// FUNCTION 146ef0b9e FUN_146ef0b9e body=59 status=ok
// SIG undefined FUN_146ef0b9e(void)

undefined8 FUN_146ef0b9e(longlong *param_1)

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



// FUNCTION 146ef0c40 FUN_146ef0c40 body=220 status=ok
// SIG undefined FUN_146ef0c40(void)

byte FUN_146ef0c40(double *param_1,double *param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  int iVar4;
  
  if ((*param_1 == *param_2) && (!NAN(*param_1) && !NAN(*param_2))) {
    if ((param_1[1] == param_2[1]) && (!NAN(param_1[1]) && !NAN(param_2[1]))) {
      if ((param_1[2] == param_2[2]) && (!NAN(param_1[2]) && !NAN(param_2[2]))) {
        auVar1._8_4_ = (int)-(ulonglong)(param_2[5] == param_1[5]);
        auVar1._0_8_ = -(ulonglong)(param_2[4] == param_1[4]);
        auVar1._12_4_ = (int)(-(ulonglong)(param_2[5] == param_1[5]) >> 0x20);
        iVar3 = movmskpd(in_EAX,auVar1);
        auVar2._8_8_ = -(ulonglong)(param_2[7] == param_1[7]);
        auVar2._0_8_ = -(ulonglong)(param_2[6] == param_1[6]);
        iVar4 = movmskpd(param_3,auVar2);
        if (iVar3 + iVar4 * 4 == 0xf) {
          if ((*(float *)(param_1 + 8) == *(float *)(param_2 + 8)) &&
             (!NAN(*(float *)(param_1 + 8)) && !NAN(*(float *)(param_2 + 8)))) {
            if ((*(float *)((longlong)param_1 + 0x44) == *(float *)((longlong)param_2 + 0x44)) &&
               (!NAN(*(float *)((longlong)param_1 + 0x44)) &&
                !NAN(*(float *)((longlong)param_2 + 0x44)))) {
              if ((*(float *)(param_1 + 9) == *(float *)(param_2 + 9)) &&
                 (!NAN(*(float *)(param_1 + 9)) && !NAN(*(float *)(param_2 + 9)))) {
                if ((*(float *)((longlong)param_1 + 0x4c) == *(float *)((longlong)param_2 + 0x4c))
                   && (!NAN(*(float *)((longlong)param_1 + 0x4c)) &&
                       !NAN(*(float *)((longlong)param_2 + 0x4c)))) {
                  if ((*(float *)(param_1 + 10) == *(float *)(param_2 + 10)) &&
                     (!NAN(*(float *)(param_1 + 10)) && !NAN(*(float *)(param_2 + 10)))) {
                    if ((*(float *)((longlong)param_1 + 0x54) ==
                         *(float *)((longlong)param_2 + 0x54)) &&
                       (!NAN(*(float *)((longlong)param_1 + 0x54)) &&
                        !NAN(*(float *)((longlong)param_2 + 0x54)))) {
                      if ((param_1[0xb] == param_2[0xb]) &&
                         (!NAN(param_1[0xb]) && !NAN(param_2[0xb]))) {
                        return -(param_2[0xc] == param_1[0xc]) & 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 146ef0d1c FUN_146ef0d1c body=145 status=ok
// SIG undefined FUN_146ef0d1c(void)

double * FUN_146ef0d1c(longlong *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float *pfVar6;
  longlong *plVar7;
  
  lVar3 = param_1[2];
  plVar7 = (longlong *)0x0;
  if (*(char *)(*param_1 + 0xc) != '\0') {
    plVar7 = (longlong *)*param_1;
  }
  if (lVar3 != 0) {
    lVar4 = param_1[1];
    iVar5 = FUN_142a2d052(lVar3 + 0x40,(int)param_1[3]);
    if ((iVar5 != -1) &&
       (pfVar6 = (float *)((longlong)*(int *)(*(longlong *)(lVar3 + 0x50) + (longlong)iVar5 * 8) *
                           0x18 + *(longlong *)(lVar4 + 0x20)), pfVar6 != (float *)0x0))
    goto LAB_146ef0d84;
  }
  pfVar6 = (float *)((longlong)(int)plVar7[1] * 0xc + *(longlong *)(*plVar7 + 0x278));
LAB_146ef0d84:
  fVar1 = pfVar6[2];
  fVar2 = pfVar6[1];
  *param_2 = (double)*pfVar6;
  param_2[1] = (double)fVar2;
  param_2[2] = (double)fVar1;
  return param_2;
}



// FUNCTION 146ef0dae FUN_146ef0dae body=173 status=ok
// SIG undefined FUN_146ef0dae(void)

double * FUN_146ef0dae(longlong *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong *plVar9;
  
  lVar4 = param_1[2];
  plVar9 = (longlong *)0x0;
  if (*(char *)(*param_1 + 0xc) != '\0') {
    plVar9 = (longlong *)*param_1;
  }
  if (lVar4 != 0) {
    lVar6 = param_1[1];
    iVar3 = FUN_142a2d052(lVar4 + 0x40,(int)param_1[3]);
    if ((iVar3 != -1) &&
       (lVar4 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x50) + (longlong)iVar3 * 8) * 0x18 +
                *(longlong *)(lVar6 + 0x20), lVar4 != 0)) {
      pfVar7 = (float *)(lVar4 + 0xc);
      pfVar8 = (float *)(lVar4 + 0x14);
      pfVar5 = (float *)(lVar4 + 0x10);
      goto LAB_146ef0e34;
    }
  }
  lVar6 = (longlong)(int)plVar9[1];
  lVar4 = *(longlong *)(*plVar9 + 0x290);
  pfVar7 = (float *)(lVar4 + lVar6 * 0xc);
  pfVar8 = (float *)(lVar4 + lVar6 * 0xc + 8);
  pfVar5 = (float *)(lVar4 + lVar6 * 0xc + 4);
LAB_146ef0e34:
  fVar1 = *pfVar8;
  fVar2 = *pfVar5;
  *param_2 = (double)*pfVar7;
  param_2[1] = (double)fVar2;
  param_2[2] = (double)fVar1;
  return param_2;
}



// FUNCTION 146ef0e5c FUN_146ef0e5c body=89 status=ok
// SIG undefined FUN_146ef0e5c(void)

void FUN_146ef0e5c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 146ef0eb6 FUN_146ef0eb6 body=90 status=ok
// SIG undefined FUN_146ef0eb6(void)

void FUN_146ef0eb6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146ef0f10 FUN_146ef0f10 body=316 status=ok
// SIG undefined FUN_146ef0f10(void)

int FUN_146ef0f10(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int local_60;
  
  iVar5 = (int)param_1[1];
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar2 = FUN_146e90c1a(lVar1,*param_2);
    local_60 = 0;
    iVar7 = 0;
    do {
      lVar4 = (longlong)iVar7;
      iVar10 = iVar7 + 1;
      if (iVar7 + 1 < iVar5) {
        iVar10 = iVar5;
      }
      lVar12 = lVar4 * 200;
      lVar11 = lVar1 + 200 + lVar12;
      iVar8 = iVar7;
      do {
        lVar4 = lVar4 + 1;
        iVar9 = iVar10;
        if (lVar6 <= lVar4) break;
        bVar3 = FUN_146e90c1a(lVar11,*param_2);
        iVar8 = iVar8 + 1;
        lVar11 = lVar11 + 200;
        iVar9 = iVar8;
      } while ((bVar2 & 1) == bVar3);
      iVar10 = iVar9 - iVar7;
      if ((bVar2 & 1) == 0) {
        if (local_60 != iVar7) {
          memmove((void *)((longlong)local_60 * 200 + lVar1),(void *)(lVar12 + lVar1),
                  (longlong)iVar10 * 200);
        }
        local_60 = local_60 + iVar10;
      }
      else {
        FUN_1408bc7be(lVar12 + lVar1,iVar10);
      }
      iVar7 = iVar9;
      bVar2 = bVar2 ^ 1;
    } while (lVar4 < lVar6);
    *(int *)(param_1 + 1) = local_60;
    iVar5 = iVar5 - local_60;
  }
  return iVar5;
}



// FUNCTION 146ef104c FUN_146ef104c body=62 status=ok
// SIG undefined FUN_146ef104c(void)

void FUN_146ef104c(longlong param_1,undefined8 *param_2)

{
  if ((*(uint *)(param_1 + 8) & 3) != 0) {
    FUN_1400d252c(param_1);
    return;
  }
  FUN_146ef108a(param_1 + 0x80,*param_2,param_1 + 0xc,*(undefined8 *)(param_1 + 0x48),
                *(uint *)(param_1 + 8) >> 3);
  return;
}



// FUNCTION 146ef108a FUN_146ef108a body=84 status=ok
// SIG undefined FUN_146ef108a(void)

void FUN_146ef108a(undefined8 param_1,undefined8 param_2,uint *param_3,longlong param_4,
                  undefined4 param_5)

{
  uint uVar1;
  
  FUN_1400bff1c();
  uVar1 = *param_3;
  *param_3 = uVar1 | 2;
  if ((param_4 != 0 && uVar1 == 0) && (*(longlong *)(param_4 + 8) != 0)) {
    FUN_144821112(*(longlong *)(param_4 + 8) + 0x70,param_4,param_5);
    return;
  }
  return;
}



// FUNCTION 146ef10de FUN_146ef10de body=29 status=ok
// SIG undefined FUN_146ef10de(void)

undefined8 FUN_146ef10de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef1102 FUN_146ef1102 body=68 status=ok
// SIG undefined FUN_146ef1102(void)

undefined8 FUN_146ef1102(longlong *param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = param_1[2];
  iVar3 = param_2 - (int)param_1[2];
  *(int *)((longlong)param_1 + 0x14) = iVar3;
  *(int *)(param_1 + 2) = param_2;
  if ((iVar3 != 0 && (int)lVar1 <= param_2) &&
     (cVar2 = (**(code **)(*param_1 + 0x60))(), cVar2 != '\0')) {
    (**(code **)(*param_1 + 0x70))(param_1,param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 146ef1164 FUN_146ef1164 body=122 status=ok
// SIG undefined FUN_146ef1164(void)

double * FUN_146ef1164(longlong param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *(double *)(param_1 + 0xc0);
  dVar2 = *(double *)(param_1 + 0xd8);
  dVar3 = *(double *)(param_1 + 0xb8);
  dVar4 = *(double *)(param_1 + 0xd0);
  dVar5 = (double)param_3;
  *param_2 = (*(double *)(param_1 + 0xb0) - *(double *)(param_1 + 200)) * dVar5 +
             *(double *)(param_1 + 200);
  param_2[1] = (dVar3 - dVar4) * dVar5 + dVar4;
  param_2[2] = (dVar1 - dVar2) * dVar5 + dVar2;
  return param_2;
}



// FUNCTION 146ef1228 FUN_146ef1228 body=182 status=ok
// SIG undefined FUN_146ef1228(void)

void FUN_146ef1228(longlong *param_1,double param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (cVar1 != '\0') {
    param_2 = (double)*(int *)((longlong)param_1 + 0x14) * param_2;
    param_1[0x19] = param_1[0x16];
    param_1[0x1a] = param_1[0x17];
    param_1[0x1b] = param_1[0x18];
    param_1[0x16] = (longlong)(param_2 * (double)param_1[0x13] + (double)param_1[0x16]);
    param_1[0x17] = (longlong)((double)param_1[0x14] * param_2 + (double)param_1[0x17]);
    param_1[0x18] = (longlong)((double)param_1[0x15] * param_2 + (double)param_1[0x18]);
    iVar3 = (int)param_1[0x1c] - *(int *)((longlong)param_1 + 0x14);
    iVar2 = 0;
    if (0 < iVar3) {
      iVar2 = iVar3;
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  return;
}



// FUNCTION 146ef12de FUN_146ef12de body=48 status=ok
// SIG undefined FUN_146ef12de(void)

void FUN_146ef12de(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,0x10);
  }
  return;
}



// FUNCTION 146ef130e FUN_146ef130e body=62 status=ok
// SIG undefined FUN_146ef130e(void)

void FUN_146ef130e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ef134c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 146ef134c FUN_146ef134c body=93 status=ok
// SIG undefined FUN_146ef134c(void)

ulonglong FUN_146ef134c(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 146ef13e2 FUN_146ef13e2 body=30 status=ok
// SIG undefined FUN_146ef13e2(void)

wchar_t * FUN_146ef13e2(uint param_1)

{
  if (param_1 < 4) {
    return (wchar_t *)(&DAT_149f76104 + *(int *)(&DAT_149f76104 + (ulonglong)param_1 * 4));
  }
  return L"<Unknown ECollisionTraceFlag>";
}



// FUNCTION 146ef1400 FUN_146ef1400 body=9 status=ok
// SIG undefined FUN_146ef1400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_146ef1400(void)

{
  return (double)_DAT_14c75f3f4;
}



// FUNCTION 146ef140a FUN_146ef140a body=7 status=ok
// SIG undefined FUN_146ef140a(void)

undefined4 FUN_146ef140a(void)

{
  return DAT_14c997a28;
}



// FUNCTION 146ef1412 FUN_146ef1412 body=7 status=ok
// SIG undefined FUN_146ef1412(void)

undefined4 FUN_146ef1412(void)

{
  return DAT_14c997a2c;
}



// FUNCTION 146ef141a FUN_146ef141a body=9 status=ok
// SIG undefined FUN_146ef141a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_146ef141a(void)

{
  return (double)_DAT_14c75f418;
}



// FUNCTION 146ef1424 FUN_146ef1424 body=9 status=ok
// SIG undefined FUN_146ef1424(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_146ef1424(void)

{
  return (double)_DAT_14c75f41c;
}



// FUNCTION 146ef142e FUN_146ef142e body=44 status=ok
// SIG undefined FUN_146ef142e(void)

longlong FUN_146ef142e(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  while( true ) {
    lVar1 = *param_1;
    if (*(byte *)(lVar1 + 0x1c) != 4) break;
    param_1 = (longlong *)(lVar1 + 0x20);
  }
  uVar2 = *(byte *)(lVar1 + 0x1c) - 0x40;
  if ((uVar2 < 9) && ((0x10bU >> (uVar2 & 0x1f) & 1) != 0)) {
    lVar1 = *(longlong *)(lVar1 + 0x28);
  }
  return lVar1;
}



// FUNCTION 146ef145a FUN_146ef145a body=44 status=ok
// SIG undefined FUN_146ef145a(void)

longlong FUN_146ef145a(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  while( true ) {
    lVar1 = *param_1;
    if (*(byte *)(lVar1 + 0x1c) != 4) break;
    param_1 = (longlong *)(lVar1 + 0x20);
  }
  uVar2 = *(byte *)(lVar1 + 0x1c) - 0x40;
  if ((uVar2 < 9) && ((0x10bU >> (uVar2 & 0x1f) & 1) != 0)) {
    lVar1 = *(longlong *)(lVar1 + 0x28);
  }
  return lVar1;
}



// FUNCTION 146ef1486 FUN_146ef1486 body=14 status=ok
// SIG undefined FUN_146ef1486(void)

void FUN_146ef1486(undefined8 *param_1,undefined8 param_2)

{
  FUN_14162b148(param_2,*param_1);
  return;
}



// FUNCTION 146ef1494 FUN_146ef1494 body=28 status=ok
// SIG undefined FUN_146ef1494(void)

void FUN_146ef1494(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140175a60();
  FUN_146e1fa94(uVar1,*param_1);
  return;
}



// FUNCTION 146ef14ee FUN_146ef14ee body=184 status=ok
// SIG undefined FUN_146ef14ee(void)

void FUN_146ef14ee(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0x3ff0000000000000;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    lVar1 = *(longlong *)(*param_2 + 0x40);
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0x3ff00000;
    uVar2 = 0;
    uVar3 = 0;
    if (lVar1 == 0) {
      uVar10 = 0;
      uVar11 = 0;
    }
    else {
      uVar10 = 0;
      uVar11 = 0;
      if (1 < *(byte *)(lVar1 + 0x90)) {
        uVar2 = (undefined4)*(undefined8 *)(lVar1 + 0xf0);
        uVar3 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0xf0) >> 0x20);
        uVar10 = *(undefined8 *)(lVar1 + 0xf8);
        uVar11 = *(undefined8 *)(lVar1 + 0x100);
        uVar4 = *(undefined8 *)(lVar1 + 0x110);
        uVar5 = *(undefined8 *)(lVar1 + 0x118);
        uVar6 = *(undefined4 *)(lVar1 + 0x120);
        uVar7 = *(undefined4 *)(lVar1 + 0x124);
        uVar8 = *(undefined4 *)(lVar1 + 0x128);
        uVar9 = *(undefined4 *)(lVar1 + 300);
      }
    }
    *param_1 = uVar4;
    param_1[1] = uVar5;
    *(undefined4 *)(param_1 + 2) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
    *(undefined4 *)(param_1 + 3) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
    *(undefined4 *)(param_1 + 4) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
    *(int *)(param_1 + 5) = (int)uVar10;
    *(int *)((longlong)param_1 + 0x2c) = (int)((ulonglong)uVar10 >> 0x20);
    param_1[6] = uVar11;
    param_1[7] = 0;
  }
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  return;
}



// FUNCTION 146ef15a6 FUN_146ef15a6 body=190 status=ok
// SIG undefined FUN_146ef15a6(void)

void FUN_146ef15a6(longlong param_1,double *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x48);
  local_10 = 0.0;
  if (plVar1 == (longlong *)0x0) {
    local_18 = 0.0;
    local_20 = 0.0;
  }
  else {
    local_18 = 0.0;
    local_20 = 0.0;
    if (1 < *(byte *)((longlong)plVar1 + 0xc)) {
      lVar3 = (longlong)(int)plVar1[1];
      lVar2 = *(longlong *)(*plVar1 + 0x338);
      local_20 = *(double *)(*(longlong *)(*plVar1 + 0x3b0) + lVar3 * 8);
      local_10 = *(double *)(lVar2 + 0x10 + lVar3 * 0x18) * local_20;
      local_18 = *(double *)(lVar2 + 8 + lVar3 * 0x18) * local_20;
      local_20 = local_20 * *(double *)(lVar2 + lVar3 * 0x18);
    }
  }
  local_10 = local_10 + param_2[2];
  local_18 = local_18 + param_2[1];
  local_20 = local_20 + *param_2;
  FUN_146ef9054(local_10,&local_20,0,1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef1666 FUN_146ef1666 body=35 status=ok
// SIG undefined FUN_146ef1666(void)

void FUN_146ef1666(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (param_3 == '\0') {
    FUN_141347b9c();
    return;
  }
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    lVar1 = 0;
  }
  FUN_146ef168a(lVar1);
  return;
}



// FUNCTION 146ef168a FUN_146ef168a body=151 status=ok
// SIG undefined FUN_146ef168a(void)

void FUN_146ef168a(longlong param_1,double *param_2)

{
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146ef94e6(&local_40,&local_58,*(undefined8 *)(param_1 + 0x48));
  local_30 = param_2[2] + local_48;
  local_38 = param_2[1] + local_50;
  local_40 = *param_2 + local_58;
  FUN_146ef91a2(param_1,&local_40,0,1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef1722 FUN_146ef1722 body=131 status=ok
// SIG undefined FUN_146ef1722(void)

void FUN_146ef1722(longlong param_1,double *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x48);
  local_20 = 0.0;
  if ((plVar1 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar1 + 0xc))) {
    local_20 = *(double *)(*(longlong *)(*plVar1 + 0x3b0) + (longlong)(int)plVar1[1] * 8);
  }
  local_10 = param_2[2] * local_20;
  local_18 = param_2[1] * local_20;
  local_20 = local_20 * *param_2;
  FUN_146ef15a6();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef17a6 FUN_146ef17a6 body=219 status=ok
// SIG undefined FUN_146ef17a6(void)

void FUN_146ef17a6(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_88;
  double local_80;
  double local_78;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140de6c5e(&local_a8,param_1);
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  local_b0 = local_58 * dVar3 + local_68 * dVar1 + local_60 * dVar2;
  local_b8 = local_78 * dVar3 + local_88 * dVar1 + local_80 * dVar2;
  local_c0 = dVar3 * local_98 + dVar1 * local_a8 + dVar2 * local_a0;
  FUN_146ef168a(param_1);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef1882 FUN_146ef1882 body=217 status=ok
// SIG undefined FUN_146ef1882(void)

void FUN_146ef1882(undefined8 param_1,double *param_2,double *param_3)

{
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_142a5e622(&local_58,param_1);
  local_60 = (*param_3 - local_58) * param_2[1] - *param_2 * (param_3[1] - local_50);
  local_68 = (param_3[2] - local_48) * *param_2 - param_2[2] * (*param_3 - local_58);
  local_70 = (param_3[1] - local_50) * param_2[2] - (param_3[2] - local_48) * param_2[1];
  FUN_146ef15a6(param_1,param_2);
  FUN_146ef168a(param_1,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef195c FUN_146ef195c body=131 status=ok
// SIG undefined FUN_146ef195c(void)

void FUN_146ef195c(longlong param_1,double *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x48);
  local_20 = 0.0;
  if ((plVar1 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar1 + 0xc))) {
    local_20 = *(double *)(*(longlong *)(*plVar1 + 0x3b0) + (longlong)(int)plVar1[1] * 8);
  }
  local_10 = param_2[2] * local_20;
  local_18 = param_2[1] * local_20;
  local_20 = local_20 * *param_2;
  FUN_146ef1882();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef19e0 FUN_146ef19e0 body=37 status=ok
// SIG undefined FUN_146ef19e0(void)

void FUN_146ef19e0(longlong *param_1)

{
  longlong lVar1;
  char in_stack_00000028;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (in_stack_00000028 != '\0') {
    if (*(longlong *)(lVar1 + 0x48) == 0) {
      lVar1 = 0;
    }
    FUN_146ef1a06(lVar1);
    return;
  }
  FUN_146ef1ad0();
  return;
}



// FUNCTION 146ef1a06 FUN_146ef1a06 body=201 status=ok
// SIG undefined FUN_146ef1a06(void)

void FUN_146ef1a06(longlong param_1,double *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (double)CONCAT53(local_38._3_5_,0x10004);
  dStack_30 = (double)param_1;
  FUN_146ef9756();
  if (param_4 == '\0') {
    local_28 = param_2[2];
    local_38 = *param_2;
    dStack_30 = param_2[1];
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x48);
    dVar2 = 0.0;
    if ((plVar1 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar1 + 0xc))) {
      dVar2 = *(double *)(*(longlong *)(*plVar1 + 0x3b0) + (longlong)(int)plVar1[1] * 8);
    }
    local_28 = param_2[2] * dVar2;
    dStack_30 = param_2[1] * dVar2;
    local_38 = dVar2 * *param_2;
  }
  FUN_140933574(param_1,&local_38,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef1ad0 FUN_146ef1ad0 body=213 status=ok
// SIG undefined FUN_146ef1ad0(void)

void FUN_146ef1ad0(longlong param_1,double *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  double local_58;
  double dStack_50;
  double local_48;
  double *local_38;
  undefined1 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140cd4f30(param_1,4,0,1);
  if (param_4 == '\0') {
    local_48 = param_2[2];
    local_58 = *param_2;
    dStack_50 = param_2[1];
    lVar1 = *(longlong *)(param_1 + 0x40);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x40);
    local_58 = 0.0;
    if ((lVar1 != 0) && (1 < *(byte *)(lVar1 + 0x90))) {
      local_58 = *(double *)(lVar1 + 0x148);
    }
    local_48 = param_2[2] * local_58;
    dStack_50 = param_2[1] * local_58;
    local_58 = local_58 * *param_2;
  }
  local_38 = &local_58;
  local_30 = 1;
  local_28 = param_1;
  FUN_145900236(&local_38,lVar1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef1ba6 FUN_146ef1ba6 body=1082 status=ok
// SIG undefined FUN_146ef1ba6(void)

void FUN_146ef1ba6(longlong param_1,double *param_2,double *param_3,undefined8 param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_148 [32];
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_108 [16];
  double local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_142a5e622(&local_e8,param_1);
  local_108._0_3_ = 0x10004;
  local_108._8_8_ = param_1;
  FUN_146ef9756(param_1);
  if (param_5 == '\0') {
    local_f8 = (*param_3 - local_e8) * param_2[1] - *param_2 * (param_3[1] - local_e0);
    pdVar17 = (double *)local_108;
    local_108._8_8_ = (param_3[2] - local_d8) * *param_2 - param_2[2] * (*param_3 - local_e8);
    local_108._0_8_ = (param_3[1] - local_e0) * param_2[2] - (param_3[2] - local_d8) * param_2[1];
    local_118 = param_2[2];
    local_128 = *param_2;
    dStack_120 = param_2[1];
    FUN_140933574(param_1,&local_128,1);
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x48);
    lVar15 = (longlong)(int)(*(longlong **)(param_1 + 0x48))[1];
    lVar2 = *(longlong *)(lVar1 + 0x28);
    lVar1 = *(longlong *)(lVar1 + 0x48);
    lVar16 = lVar15 * 0x10;
    dVar18 = (double)*(float *)(lVar1 + 0xc + lVar16);
    dVar3 = (double)*(float *)(lVar1 + 8 + lVar16);
    dVar21 = (double)*(float *)(lVar1 + 4 + lVar16);
    dVar20 = (double)*(float *)(lVar1 + lVar16);
    pdVar17 = (double *)(lVar2 + lVar15 * 0x18);
    dVar11 = *param_3;
    dVar12 = param_3[1];
    dVar4 = param_3[2] * 1.0;
    dVar19 = dVar12 * dVar20 - dVar21 * dVar11;
    dVar8 = dVar4 * dVar21 - dVar3 * dVar12;
    dVar9 = dVar11 * dVar3 - dVar20 * dVar4;
    dVar8 = dVar8 + dVar8;
    dVar9 = dVar9 + dVar9;
    dVar19 = dVar19 + dVar19;
    dVar13 = *param_2;
    dVar14 = param_2[1];
    dVar7 = param_2[2] * 1.0;
    dVar5 = dVar14 * dVar20 - dVar21 * dVar13;
    dVar6 = dVar7 * dVar21 - dVar3 * dVar14;
    dVar10 = dVar13 * dVar3 - dVar20 * dVar7;
    dVar6 = dVar6 + dVar6;
    dVar10 = dVar10 + dVar10;
    dVar5 = dVar5 + dVar5;
    local_f8 = dVar5 * dVar18 + dVar7 + (dVar10 * dVar20 - dVar6 * dVar21);
    dVar7 = (dVar5 * dVar21 - dVar10 * dVar3) + dVar18 * dVar6 + dVar13;
    dVar5 = (dVar3 * dVar6 - dVar20 * dVar5) + dVar18 * dVar10 + dVar14;
    local_108._8_4_ = SUB84(dVar5,0);
    local_108._0_8_ = dVar7;
    local_108._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_d8 = (dVar19 * dVar18 + dVar4 + (dVar9 * dVar20 - dVar8 * dVar21) +
               *(double *)(lVar2 + 0x10 + lVar15 * 0x18)) - local_d8;
    local_e0 = ((dVar3 * dVar8 - dVar20 * dVar19) + dVar18 * dVar9 + dVar12 + pdVar17[1]) - local_e0
    ;
    local_e8 = ((dVar19 * dVar21 - dVar9 * dVar3) + dVar18 * dVar8 + dVar11 + *pdVar17) - local_e8;
    local_118 = local_e8 * dVar5 - dVar7 * local_e0;
    dStack_120 = local_d8 * dVar7 - local_f8 * local_e8;
    local_128 = local_e0 * local_f8 - dVar5 * local_d8;
    pdVar17 = &local_128;
    FUN_140933574(param_1,local_108,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
  }
  FUN_1409334da(param_1,pdVar17,1);
  if ((local_d0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef1fe2 FUN_146ef1fe2 body=69 status=ok
// SIG undefined FUN_146ef1fe2(void)

void FUN_146ef1fe2(longlong *param_1)

{
  longlong lVar1;
  char in_stack_00000040;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (in_stack_00000040 == '\0') {
      FUN_146ef22e8();
      return;
    }
    if (*(longlong *)(lVar1 + 0x48) == 0) {
      lVar1 = 0;
    }
    FUN_146ef2028(lVar1);
  }
  return;
}


