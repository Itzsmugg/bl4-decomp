// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1470f73b6 FUN_1470f73b6 body=70 status=ok
// SIG undefined FUN_1470f73b6(void)

void FUN_1470f73b6(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_142b51129(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470f7614 FUN_1470f7614 body=59 status=ok
// SIG undefined FUN_1470f7614(void)

undefined8 FUN_1470f7614(longlong *param_1)

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



// FUNCTION 1470f7660 FUN_1470f7660 body=52 status=ok
// SIG undefined FUN_1470f7660(void)

void FUN_1470f7660(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    if (*(longlong *)(param_2 + 0x98) != 0) {
      FUN_1402c7646(param_2 + 0x90);
    }
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1470f76e4 FUN_1470f76e4 body=143 status=ok
// SIG undefined FUN_1470f76e4(void)

void FUN_1470f76e4(undefined8 param_1,void *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2,0,0x1d0);
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)((longlong)param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)((longlong)param_2 + 0x70) = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)((longlong)param_2 + 0x80);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_2 + 0xe8) = 6;
  *(undefined1 *)((longlong)param_2 + 0xec) = 1;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x100) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x150) = 0;
  return;
}



// FUNCTION 1470f7774 FUN_1470f7774 body=157 status=ok
// SIG undefined FUN_1470f7774(void)

void FUN_1470f7774(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0xe] = 0x3ff0000000000000;
  param_2[0xf] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x1c] = 0x3ff0000000000000;
  *(undefined4 *)(param_2 + 0x1d) = 6;
  *(undefined1 *)((longlong)param_2 + 0xec) = 1;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0xffffffff;
  param_2[0x22] = 0;
  param_2[0x24] = 0;
  param_2[0x2a] = 0;
  param_2[0x2c] = 0;
  param_2[0x32] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 1470f7830 FUN_1470f7830 body=147 status=ok
// SIG undefined FUN_1470f7830(void)

undefined8 FUN_1470f7830(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  void *_Src;
  void *_Dst;
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      _Src = (void *)(param_3 + lVar1);
      _Dst = (void *)(param_2 + lVar1);
      memcpy(_Dst,_Src,0x108);
      FUN_1470f79ae((longlong)_Dst + 0x110,(longlong)_Src + 0x110);
      FUN_1470f7ad2((longlong)_Dst + 0x150,(longlong)_Src + 0x150);
      FUN_1470f7bf6((longlong)_Dst + 400,(longlong)_Src + 400);
      lVar1 = lVar1 + 0x1d0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470f78ec FUN_1470f78ec body=59 status=ok
// SIG undefined FUN_1470f78ec(void)

undefined8 FUN_1470f78ec(longlong *param_1)

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



// FUNCTION 1470f7938 FUN_1470f7938 body=40 status=ok
// SIG undefined FUN_1470f7938(void)

void FUN_1470f7938(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_1470d8784(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 1470f79ae FUN_1470f79ae body=290 status=ok
// SIG undefined FUN_1470f79ae(void)

longlong * FUN_1470f79ae(longlong *param_1,longlong *param_2)

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



// FUNCTION 1470f7ad2 FUN_1470f7ad2 body=290 status=ok
// SIG undefined FUN_1470f7ad2(void)

longlong * FUN_1470f7ad2(longlong *param_1,longlong *param_2)

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



// FUNCTION 1470f7bf6 FUN_1470f7bf6 body=290 status=ok
// SIG undefined FUN_1470f7bf6(void)

longlong * FUN_1470f7bf6(longlong *param_1,longlong *param_2)

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



// FUNCTION 1470f7d5a FUN_1470f7d5a body=118 status=ok
// SIG undefined FUN_1470f7d5a(void)

undefined8 FUN_1470f7d5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(param_2 + lVar4) = *(undefined8 *)(param_3 + lVar4);
      FUN_145c075da();
      puVar2 = (undefined8 *)(param_3 + lVar4 + 0xb0);
      puVar3 = (undefined8 *)(param_2 + lVar4 + 0xb0);
      for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      lVar4 = lVar4 + 0xf8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470f7df8 FUN_1470f7df8 body=59 status=ok
// SIG undefined FUN_1470f7df8(void)

undefined8 FUN_1470f7df8(longlong *param_1)

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



// FUNCTION 1470f7e44 FUN_1470f7e44 body=52 status=ok
// SIG undefined FUN_1470f7e44(void)

void FUN_1470f7e44(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    if (*(longlong *)(param_2 + 0xa0) != 0) {
      FUN_1402c7646(param_2 + 0x98);
    }
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 1470f800c FUN_1470f800c body=59 status=ok
// SIG undefined FUN_1470f800c(void)

undefined8 FUN_1470f800c(longlong *param_1)

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



// FUNCTION 1470f8154 FUN_1470f8154 body=54 status=ok
// SIG undefined FUN_1470f8154(void)

undefined1 FUN_1470f8154(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470f8270(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1470f81b2 FUN_1470f81b2 body=59 status=ok
// SIG undefined FUN_1470f81b2(void)

undefined8 FUN_1470f81b2(longlong *param_1)

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



// FUNCTION 1470f81f8 FUN_1470f81f8 body=42 status=ok
// SIG undefined FUN_1470f81f8(void)

void FUN_1470f81f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1457087f8(param_2 + 0x38);
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1470f8270 FUN_1470f8270 body=293 status=ok
// SIG undefined FUN_1470f8270(void)

undefined8 * FUN_1470f8270(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  if ((param_2[7] != 0) && (param_1[7] != param_2[7])) {
    if ((PSRWLOCK)param_2[8] != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)param_2[8]);
    }
    if ((PSRWLOCK)param_1[8] != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)param_1[8]);
    }
    if (param_1[7] != 0) {
      *(int *)param_1[9] = *(int *)param_1[9] + -1;
      piVar2 = (int *)param_1[9];
      if (*piVar2 == 0) {
        if (param_1[7] != 0) {
          FUN_1400020a8(param_1[7]);
          piVar2 = (int *)param_1[9];
        }
        param_1[7] = 0;
        if (piVar2 != (int *)0x0) {
          FUN_1400020a8();
        }
        ReleaseSRWLockExclusive((PSRWLOCK)param_1[8]);
        if (param_1[8] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)param_1[8]);
      }
    }
    lVar1 = param_2[7];
    param_1[7] = lVar1;
    param_1[8] = param_2[8];
    piVar2 = (int *)param_2[9];
    param_1[9] = piVar2;
    if (lVar1 != 0) {
      *piVar2 = *piVar2 + 1;
      ReleaseSRWLockExclusive((PSRWLOCK)param_1[8]);
    }
  }
  return param_1;
}



// FUNCTION 1470f8470 FUN_1470f8470 body=59 status=ok
// SIG undefined FUN_1470f8470(void)

undefined8 FUN_1470f8470(longlong *param_1)

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



// FUNCTION 1470f8558 FUN_1470f8558 body=59 status=ok
// SIG undefined FUN_1470f8558(void)

undefined8 FUN_1470f8558(longlong *param_1)

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



// FUNCTION 1470f85a4 FUN_1470f85a4 body=38 status=ok
// SIG undefined FUN_1470f85a4(void)

void FUN_1470f85a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_1403c4c0a(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 1470f862c FUN_1470f862c body=63 status=ok
// SIG undefined FUN_1470f862c(void)

undefined1 FUN_1470f862c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470f8754(param_2,param_3);
    param_3 = param_3 + 0x440;
    param_2 = param_2 + 0x440;
  }
  return 1;
}



// FUNCTION 1470f8694 FUN_1470f8694 body=59 status=ok
// SIG undefined FUN_1470f8694(void)

undefined8 FUN_1470f8694(longlong *param_1)

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



// FUNCTION 1470f86e0 FUN_1470f86e0 body=38 status=ok
// SIG undefined FUN_1470f86e0(void)

void FUN_1470f86e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x440) == '\x01') {
    FUN_1403c51be(param_2);
    *(undefined1 *)(param_2 + 0x440) = 0;
  }
  return;
}



// FUNCTION 1470f8754 FUN_1470f8754 body=611 status=ok
// SIG undefined FUN_1470f8754(void)

longlong FUN_1470f8754(longlong param_1,longlong param_2)

{
  longlong lVar1;
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
  undefined1 uVar13;
  int *piVar14;
  
  FUN_1404215e2();
  FUN_1402c757e(param_1 + 0x1e0,param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  uVar2 = *(undefined4 *)(param_2 + 0x1f0);
  uVar3 = *(undefined4 *)(param_2 + 500);
  uVar4 = *(undefined4 *)(param_2 + 0x1f8);
  uVar5 = *(undefined4 *)(param_2 + 0x1fc);
  uVar6 = *(undefined4 *)(param_2 + 0x200);
  uVar7 = *(undefined4 *)(param_2 + 0x204);
  uVar8 = *(undefined4 *)(param_2 + 0x208);
  uVar9 = *(undefined4 *)(param_2 + 0x20c);
  uVar10 = *(undefined4 *)(param_2 + 0x214);
  uVar11 = *(undefined4 *)(param_2 + 0x218);
  uVar12 = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x214) = uVar10;
  *(undefined4 *)(param_1 + 0x218) = uVar11;
  *(undefined4 *)(param_1 + 0x21c) = uVar12;
  *(undefined4 *)(param_1 + 0x200) = uVar6;
  *(undefined4 *)(param_1 + 0x204) = uVar7;
  *(undefined4 *)(param_1 + 0x208) = uVar8;
  *(undefined4 *)(param_1 + 0x20c) = uVar9;
  *(undefined4 *)(param_1 + 0x1f0) = uVar2;
  *(undefined4 *)(param_1 + 500) = uVar3;
  *(undefined4 *)(param_1 + 0x1f8) = uVar4;
  *(undefined4 *)(param_1 + 0x1fc) = uVar5;
  if (*(longlong *)(param_1 + 0x228) != *(longlong *)(param_2 + 0x228)) {
    if (*(PSRWLOCK *)(param_2 + 0x230) != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive(*(PSRWLOCK *)(param_2 + 0x230));
    }
    if (*(PSRWLOCK *)(param_1 + 0x230) != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x230));
    }
    if (*(longlong *)(param_1 + 0x228) != 0) {
      **(int **)(param_1 + 0x238) = **(int **)(param_1 + 0x238) + -1;
      piVar14 = *(int **)(param_1 + 0x238);
      if (*piVar14 == 0) {
        if (*(longlong *)(param_1 + 0x228) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x228));
          piVar14 = *(int **)(param_1 + 0x238);
        }
        *(undefined8 *)(param_1 + 0x228) = 0;
        if (piVar14 != (int *)0x0) {
          FUN_1400020a8();
        }
        ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x230));
        if (*(longlong *)(param_1 + 0x230) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x230));
      }
    }
    lVar1 = *(longlong *)(param_2 + 0x228);
    *(longlong *)(param_1 + 0x228) = lVar1;
    *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
    piVar14 = *(int **)(param_2 + 0x238);
    *(int **)(param_1 + 0x238) = piVar14;
    if (lVar1 != 0) {
      *piVar14 = *piVar14 + 1;
      ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x230));
    }
  }
  FUN_1447ad8b2(param_1 + 0x240,param_2 + 0x240);
  FUN_1447ad8b2(param_1 + 0x250,param_2 + 0x250);
  *(undefined1 *)(param_1 + 0x260) = *(undefined1 *)(param_2 + 0x260);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x262) == '\x01') {
      *(undefined1 *)(param_1 + 0x261) = *(undefined1 *)(param_2 + 0x261);
      uVar13 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x262) != '\x01') goto LAB_1470f87f9;
      uVar13 = 0;
    }
    *(undefined1 *)(param_1 + 0x262) = uVar13;
  }
LAB_1470f87f9:
  FUN_14174344a(param_1 + 0x270,param_2 + 0x270);
  *(undefined1 *)(param_1 + 0x360) = *(undefined1 *)(param_2 + 0x360);
  *(undefined1 *)(param_1 + 0x361) = *(undefined1 *)(param_2 + 0x361);
  *(undefined1 *)(param_1 + 0x362) = *(undefined1 *)(param_2 + 0x362);
  *(undefined1 *)(param_1 + 0x368) = *(undefined1 *)(param_2 + 0x368);
  FUN_1457a6fa4(param_1 + 0x36c,param_2 + 0x36c);
  FUN_1470f89b8(param_1 + 0x3a0,param_2 + 0x3a0);
  FUN_1470f8a16(param_1 + 0x3b0,param_2 + 0x3b0);
  FUN_1404233de(param_1 + 0x3f0,param_2 + 0x3f0);
  return param_1;
}



// FUNCTION 1470f89b8 FUN_1470f89b8 body=93 status=ok
// SIG undefined FUN_1470f89b8(void)

undefined8 * FUN_1470f89b8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c7db7c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470f8a66(param_1,iVar1);
      FUN_1470f8ad5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470f8a16 FUN_1470f8a16 body=80 status=ok
// SIG undefined FUN_1470f8a16(void)

longlong FUN_1470f8a16(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x30) == '\x01') {
      if (*(char *)(param_1 + 0x30) != '\0') {
        FUN_140e26d80(param_1);
      }
      FUN_142b4d768(param_1,param_2);
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x30) == '\0') {
        return param_1;
      }
      FUN_140e26d80(param_1);
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x30) = uVar1;
  }
  return param_1;
}



// FUNCTION 1470f8a66 FUN_1470f8a66 body=111 status=ok
// SIG undefined FUN_1470f8a66(void)

void FUN_1470f8a66(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,4);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1470f8ad5 FUN_1470f8ad5 body=68 status=ok
// SIG undefined FUN_1470f8ad5(void)

void FUN_1470f8ad5(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_142b4d768(param_1,param_2);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1470f8b82 FUN_1470f8b82 body=59 status=ok
// SIG undefined FUN_1470f8b82(void)

undefined8 FUN_1470f8b82(longlong *param_1)

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



// FUNCTION 1470f8bc8 FUN_1470f8bc8 body=32 status=ok
// SIG undefined FUN_1470f8bc8(void)

void FUN_1470f8bc8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1417437c4(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1470f8c92 FUN_1470f8c92 body=46 status=ok
// SIG undefined FUN_1470f8c92(void)

void FUN_1470f8c92(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3e4e(param_2 + 0x10);
  return;
}



// FUNCTION 1470f8cfe FUN_1470f8cfe body=59 status=ok
// SIG undefined FUN_1470f8cfe(void)

undefined8 FUN_1470f8cfe(longlong *param_1)

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



// FUNCTION 1470f8d44 FUN_1470f8d44 body=54 status=ok
// SIG undefined FUN_1470f8d44(void)

void FUN_1470f8d44(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    *(undefined4 *)(param_2 + 0x58) = 0;
    if (*(longlong *)(param_2 + 0x50) != 0) {
      FUN_1400020a8();
    }
    FUN_1403c3e4e(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1470f8dd8 FUN_1470f8dd8 body=230 status=ok
// SIG undefined FUN_1470f8dd8(void)

void FUN_1470f8dd8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1470fc33a(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470f8ec0 FUN_1470f8ec0 body=230 status=ok
// SIG undefined FUN_1470f8ec0(void)

void FUN_1470f8ec0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1470fc338(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470f8fae FUN_1470f8fae body=292 status=ok
// SIG undefined FUN_1470f8fae(void)

void FUN_1470f8fae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = uStack_20;
  uVar2 = FUN_1470fc236(&local_40,uVar1);
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470f90d4 FUN_1470f90d4 body=148 status=ok
// SIG undefined FUN_1470f90d4(void)

void FUN_1470f90d4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1470fc33c(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470f9170 FUN_1470f9170 body=232 status=ok
// SIG undefined FUN_1470f9170(void)

void FUN_1470f9170(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_142b5b614(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470f925a FUN_1470f925a body=335 status=ok
// SIG undefined FUN_1470f925a(void)

void FUN_1470f925a(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  undefined4 local_18;
  undefined2 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_14 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar1 = &local_18;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1417444f2(local_20,local_21,puVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470f93aa FUN_1470f93aa body=377 status=ok
// SIG undefined FUN_1470f93aa(void)

void FUN_1470f93aa(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar2 = local_30;
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_40 = uStack_20;
  FUN_1470fc2ba(&local_48,uVar2,uVar1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470f952a FUN_1470f952a body=423 status=ok
// SIG undefined FUN_1470f952a(void)

void FUN_1470f952a(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_29;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
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
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_1c = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_20;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140bc9c7c(local_28,local_29,puVar2,local_30 != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470f96d8 FUN_1470f96d8 body=326 status=ok
// SIG undefined FUN_1470f96d8(void)

void FUN_1470f96d8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1470fc0d6(local_20,iVar1 != 0,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470f9826 FUN_1470f9826 body=377 status=ok
// SIG undefined FUN_1470f9826(void)

void FUN_1470f9826(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
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
  iVar2 = local_2c;
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_40 = uStack_20;
  FUN_1470fc1b0(&local_48,iVar2 != 0,uVar1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470f9a16 FUN_1470f9a16 body=310 status=ok
// SIG undefined FUN_1470f9a16(void)

void FUN_1470f9a16(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined2 *local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1470f9b4e(param_2,&local_40);
  FUN_1400021e4(param_1 + 0x200,&local_50);
  puVar2 = local_50;
  if (local_48 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1407c8b48(&local_40,L"(%s)",puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_60 = (void *)0x0;
  local_58 = local_38;
  if ((longlong)local_38 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_38,0);
    memcpy(local_60,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_60,0);
  local_78 = 0;
  uStack_70 = 0;
  uVar1 = FUN_147906f5e(param_2,(float)(int)*(char *)(param_1 + 0x224));
  FUN_147906d38(param_1 + 0x2a8,uVar1);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470f9b4e FUN_1470f9b4e body=208 status=ok
// SIG undefined FUN_1470f9b4e(void)

undefined8 FUN_1470f9b4e(float *param_1,undefined8 param_2)

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
  lVar2 = FUN_1404d6284();
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



// FUNCTION 1470f9c20 FUN_1470f9c20 body=1196 status=ok
// SIG undefined FUN_1470f9c20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1470f9c20(longlong *param_1,char param_2)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  undefined8 *apuStack_150 [5];
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  undefined8 *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)&local_a8;
  puVar13 = (undefined8 *)param_1[1];
  lVar12 = param_1[0x18];
  if (param_2 == '\0') {
    apuStack_150[0] = (undefined8 *)0x1470f9fff;
    FUN_140af34e6(param_1);
  }
  else {
    iVar20 = *(int *)(lVar12 + 0x10);
    uVar14 = iVar20 * 6;
    if (*(uint *)(param_1 + 0x1a) != uVar14) {
      local_100 = *param_1;
      local_128 = *puVar13;
      plVar1 = param_1 + 0x19;
      apuStack_150[0] = (undefined8 *)0x1470f9c9f;
      FUN_140af34e6(param_1);
      iVar8 = (int)param_1[0x1a];
      *(uint *)(param_1 + 0x1a) = iVar8 + uVar14;
      if ((uint)(*(int *)((longlong)param_1 + 0xd4) - iVar8) < uVar14) {
        apuStack_150[0] = (undefined8 *)0x1470f9cd0;
        FUN_141743918(plVar1);
      }
      apuStack_150[0] = (undefined8 *)0x1470f9cf0;
      memset((void *)((longlong)iVar8 * 8 + *plVar1),0,(longlong)iVar20 * 0x30);
      iVar20 = *(int *)(local_100 + 0x40);
      if (0 < iVar20) {
        lVar19 = 0;
        lVar18 = 0;
        lVar17 = local_100;
        local_110 = puVar13;
        local_108 = lVar12;
        do {
          iVar8 = *(int *)(*(longlong *)(*(longlong *)(lVar17 + 0x38) + 8 + lVar18 * 0x20) + 0x10 +
                          (longlong)
                          (*(int *)(*(longlong *)(lVar17 + 0x38) + 0x10 + lVar18 * 0x20) + -1) *
                          0x50);
          iVar16 = iVar8;
          if ((*(int *)(puVar13 + 10) == 0) ||
             (iVar16 = *(int *)(puVar13[9] + (longlong)iVar8 * 4), iVar16 != -1)) {
            lVar3 = *(longlong *)(puVar13[1] + (longlong)iVar16 * 8);
            if (lVar3 != 0) {
              if ((*(int *)(lVar12 + 0x50) == 0) ||
                 (iVar8 = *(int *)(*(longlong *)(lVar12 + 0x48) + (longlong)iVar8 * 4), iVar8 != -1)
                 ) {
                uVar15 = *(undefined8 *)(*(longlong *)(lVar12 + 8) + (longlong)iVar8 * 8);
              }
              else {
                uVar15 = 0;
              }
              lVar12 = 6;
              iVar20 = 0;
              local_120 = lVar19;
              local_118 = lVar18;
              do {
                apuStack_150[2] = (undefined8 *)0x0;
                apuStack_150[3] = (undefined8 *)0x0;
                apuStack_150[1] = &DAT_14c8464e0;
                uVar9 = FUN_140b8b9b0(6,lVar3,uVar15);
                *(undefined8 *)(*plVar1 + lVar19) = uVar9;
                lVar17 = *(longlong *)(*plVar1 + lVar19);
                local_f8 = *(longlong *)(lVar17 + 0x290);
                uStack_b0 = *(undefined8 *)(lVar17 + 0x298);
                local_e8 = *(longlong **)(lVar17 + 0x2a0);
                uStack_a0 = *(undefined8 *)(lVar17 + 0x2a8);
                local_98 = *(longlong *)(lVar17 + 0x2b0);
                uStack_90 = *(undefined8 *)(lVar17 + 0x2b8);
                local_88 = *(undefined8 *)(lVar17 + 0x2c0);
                uStack_80 = *(undefined8 *)(lVar17 + 0x2c8);
                uVar6 = local_88;
                uVar7 = uStack_80;
                uVar5 = uStack_90;
                local_a8 = local_e8;
                uVar4 = uStack_a0;
                local_b8 = local_f8;
                uVar9 = uStack_b0;
                *(ulonglong *)(lVar17 + 0x2c0) = CONCAT44(uStack_c4,local_c8);
                *(ulonglong *)(lVar17 + 0x2c8) = CONCAT44(uStack_bc,uStack_c0);
                *(undefined ***)(lVar17 + 0x2b0) = &PTR_LAB_14a1deb80;
                *(int *)(lVar17 + 0x2b8) = iVar20;
                *(undefined4 *)(lVar17 + 700) = uStack_cc;
                *(undefined8 *)(lVar17 + 0x2a0) = 0;
                *(ulonglong *)(lVar17 + 0x2a8) = CONCAT44(uStack_dc,uStack_e0);
                *(code **)(lVar17 + 0x290) = FUN_142b514b2;
                *(ulonglong *)(lVar17 + 0x298) = CONCAT44(uStack_ec,uStack_f0);
                uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
                uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
                uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
                local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                local_c8 = (undefined4)local_88;
                uStack_c4 = local_88._4_4_;
                uStack_c0 = (undefined4)uStack_80;
                uStack_bc = uStack_80._4_4_;
                local_d8 = local_98;
                uStack_d0 = (undefined4)uStack_90;
                uStack_cc = uStack_90._4_4_;
                uStack_e0 = (undefined4)uStack_a0;
                uStack_dc = uStack_a0._4_4_;
                uStack_f0 = (undefined4)uStack_b0;
                uStack_ec = uStack_b0._4_4_;
                if (local_f8 != 0) {
                  plVar10 = local_e8;
                  if (local_e8 == (longlong *)0x0) {
                    plVar10 = &local_d8;
                  }
                  apuStack_150[0] = (undefined8 *)0x1470f9eab;
                  uStack_b0 = uVar9;
                  uStack_a0 = uVar4;
                  uStack_90 = uVar5;
                  local_88 = uVar6;
                  uStack_80 = uVar7;
                  (**(code **)(*plVar10 + 0x10))();
                }
                fVar2 = *(float *)(param_1 + 2);
                lVar17 = *(longlong *)(param_1[0x19] + lVar19);
                local_f8 = *(longlong *)(lVar17 + 0x250);
                uStack_b0 = *(undefined8 *)(lVar17 + 600);
                local_e8 = *(longlong **)(lVar17 + 0x260);
                uStack_a0 = *(undefined8 *)(lVar17 + 0x268);
                local_98 = *(longlong *)(lVar17 + 0x270);
                uStack_90 = *(undefined8 *)(lVar17 + 0x278);
                local_88 = *(undefined8 *)(lVar17 + 0x280);
                uStack_80 = *(undefined8 *)(lVar17 + 0x288);
                uVar6 = local_88;
                uVar7 = uStack_80;
                uVar5 = uStack_90;
                local_a8 = local_e8;
                uVar4 = uStack_a0;
                local_b8 = local_f8;
                uVar9 = uStack_b0;
                *(ulonglong *)(lVar17 + 0x280) = CONCAT44(uStack_c4,local_c8);
                *(ulonglong *)(lVar17 + 0x288) = CONCAT44(uStack_bc,uStack_c0);
                *(undefined ***)(lVar17 + 0x270) = &PTR_LAB_14a1deba0;
                *(float *)(lVar17 + 0x278) = 1.0 / fVar2;
                *(int *)(lVar17 + 0x27c) = iVar20;
                *(undefined8 *)(lVar17 + 0x260) = 0;
                *(ulonglong *)(lVar17 + 0x268) = CONCAT44(uStack_dc,uStack_e0);
                *(code **)(lVar17 + 0x250) = FUN_142b51546;
                *(ulonglong *)(lVar17 + 600) = CONCAT44(uStack_ec,uStack_f0);
                uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
                uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
                uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
                local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                local_c8 = (undefined4)local_88;
                uStack_c4 = local_88._4_4_;
                uStack_c0 = (undefined4)uStack_80;
                uStack_bc = uStack_80._4_4_;
                local_d8 = local_98;
                uStack_d0 = (undefined4)uStack_90;
                uStack_cc = uStack_90._4_4_;
                uStack_e0 = (undefined4)uStack_a0;
                uStack_dc = uStack_a0._4_4_;
                uStack_f0 = (undefined4)uStack_b0;
                uStack_ec = uStack_b0._4_4_;
                uStack_b0 = uVar9;
                uStack_a0 = uVar4;
                uStack_90 = uVar5;
                local_88 = uVar6;
                uStack_80 = uVar7;
                if (local_f8 != 0) {
                  plVar10 = local_e8;
                  if (local_e8 == (longlong *)0x0) {
                    plVar10 = &local_d8;
                  }
                  apuStack_150[0] = (undefined8 *)0x1470f9f93;
                  (**(code **)(*plVar10 + 0x10))();
                }
                apuStack_150[0] = (undefined8 *)0x1470f9fab;
                FUN_140b8b62e(local_128,*(undefined8 *)(*plVar1 + lVar19));
                iVar20 = iVar20 + 1;
                lVar19 = lVar19 + 8;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
              iVar20 = *(int *)(local_100 + 0x40);
              puVar13 = local_110;
              lVar17 = local_100;
              lVar18 = local_118;
              lVar19 = local_120;
              lVar12 = local_108;
            }
          }
          lVar18 = lVar18 + 1;
          lVar19 = lVar19 + 0x30;
        } while (lVar18 < iVar20);
      }
    }
  }
  puVar11 = &local_128;
  apuStack_150[0] = (undefined8 *)0x1470fa011;
  iVar20 = FUN_140415702(puVar13,0);
  apuStack_150[0] = (undefined8 *)0x1470fa025;
  iVar8 = FUN_1404157f4(puVar13,0);
  if (iVar8 + iVar20 != 0) {
    apuStack_150[0] = (undefined8 *)0x1470fa03b;
    iVar20 = FUN_140415702(puVar13,0);
    apuStack_150[0] = (undefined8 *)0x1470fa04f;
    iVar8 = FUN_1404157f4(puVar13,0);
    apuStack_150[4] = (undefined8 *)0x1470fa068;
    lVar17 = -((longlong)(iVar8 + iVar20) * 8 + 0x1eU & 0xfffffffffffffff0);
    puVar11 = (undefined8 *)((longlong)&local_128 + lVar17);
    *(undefined8 *)((longlong)apuStack_150 + lVar17) = 0x1470fa083;
    FUN_147101a90(lVar12,(longlong)&local_128 + lVar17,0,3);
    *(undefined8 *)((longlong)apuStack_150 + lVar17) = 0x1470fa096;
    FUN_1407993e2(puVar13,(longlong)&local_128 + lVar17,0);
  }
  if ((local_70 ^ (ulonglong)&local_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar11 + -0x28) = &UNK_1470fa0cc;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470fa0e8 FUN_1470fa0e8 body=319 status=ok
// SIG undefined FUN_1470fa0e8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1470fa0e8(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffd8;
  lVar1 = *(longlong *)(param_2 + 8);
  puVar7 = auStack_38;
  if (param_3 != 0 && lVar1 != 0) {
    puVar8 = (undefined1 *)0x0;
    iVar3 = FUN_140415702(lVar1,0);
    puVar6 = auStack_38;
    if (iVar3 != 0) {
      iVar3 = FUN_140415702(lVar1,0);
      lVar2 = -((longlong)iVar3 * 8 + 0x1eU & 0xfffffffffffffff0);
      puVar6 = auStack_38 + lVar2;
      puVar8 = auStack_38 + lVar2;
    }
    *(undefined8 *)(puVar6 + -0x28) = 0x1470fa171;
    iVar3 = FUN_140415702(lVar1,0);
    puVar7 = puVar6;
    if (iVar3 != 0) {
      *(undefined8 *)(puVar6 + -0x28) = 0x1470fa18b;
      iVar3 = FUN_140415702(lVar1,0);
      *(undefined8 *)(puVar6 + -8) = 0x1470fa1a2;
      lVar2 = -((longlong)iVar3 * 8 + 0x1eU & 0xfffffffffffffff0);
      puVar7 = puVar6 + lVar2;
      if (puVar8 != (undefined1 *)0x0) {
        *(undefined8 *)(puVar6 + lVar2 + -0x28) = 0x1470fa1bf;
        FUN_140cb06c2(lVar1,puVar8,0);
        *(undefined8 *)(puVar6 + lVar2 + -0x28) = 0x1470fa1ca;
        FUN_147101c8a(lVar1,puVar8);
        *(undefined8 *)(puVar6 + lVar2 + -0x28) = 0x1470fa1d4;
        uVar4 = FUN_140415702(lVar1,0);
        puVar7 = puVar6 + lVar2;
        if (0 < (int)uVar4) {
          uVar5 = 0;
          do {
            *(double *)(param_3 + uVar5 * 8) =
                 ABS(*(double *)(puVar6 + uVar5 * 8 + lVar2) - *(double *)(puVar8 + uVar5 * 8));
            uVar5 = uVar5 + 1;
            puVar7 = puVar6 + lVar2;
          } while (uVar4 != uVar5);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)&stack0xffffffffffffffd8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -0x28) = &UNK_1470fa227;
  FUN_144d8e3a0();
}



// FUNCTION 1470fa22c FUN_1470fa22c body=124 status=ok
// SIG undefined FUN_1470fa22c(void)

undefined8 * FUN_1470fa22c(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar7 = (longlong)param_3;
  *param_2 = *(undefined8 *)(lVar3 + lVar7 * 0x28);
  puVar1 = (undefined4 *)(lVar3 + 8 + lVar7 * 0x28);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(undefined4 *)(param_2 + 1) = *puVar1;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  *(undefined4 *)(param_2 + 2) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
  param_2[3] = 0;
  iVar2 = *(int *)(lVar3 + 0x20 + lVar7 * 0x28);
  _Src = *(void **)(lVar3 + 0x18 + lVar7 * 0x28);
  *(int *)(param_2 + 4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar2,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar2 * 2);
  }
  return param_2;
}



// FUNCTION 1470fa2a8 FUN_1470fa2a8 body=259 status=ok
// SIG undefined FUN_1470fa2a8(void)

void FUN_1470fa2a8(undefined8 param_1,undefined4 *param_2,double param_3,double param_4,
                  double param_5)

{
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  double local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined1 local_98;
  double local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong lStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0[0] = 1;
  local_b0 = 0;
  local_a8 = 0xc08f400000000000;
  local_98 = 1;
  local_88 = 0;
  local_60 = DAT_14c8464e0;
  uStack_58 = DAT_14c8464e8;
  local_50 = DAT_14c8464f0;
  local_48 = 0x40c3880000000000;
  local_40 = 0;
  local_38 = 0x402e000000000000;
  local_30 = 0;
  lStack_28 = 0;
  local_20 = 0;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = *(undefined8 *)(param_2 + 4);
  local_80 = 0;
  local_90 = param_5;
  local_b8 = param_4 * param_3 * param_5;
  local_a0 = param_3;
  FUN_145c07432(param_5,local_c0);
  if (lStack_28 != 0) {
    FUN_1402c7646(&local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fa3ac FUN_1470fa3ac body=412 status=ok
// SIG undefined FUN_1470fa3ac(void)

void FUN_1470fa3ac(undefined8 param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong lStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8[0] = 1;
  local_b0 = 0x408f400000000000;
  local_a8 = 0;
  local_a0 = 0xc08f400000000000;
  local_98 = 0x406f400000000000;
  local_90 = 1;
  local_80 = 0;
  local_60 = DAT_14c8464f0;
  local_70 = DAT_14c8464e0;
  dStack_68 = DAT_14c8464e8;
  local_40 = 0x40c3880000000000;
  local_38 = 0;
  local_30 = 0x402e000000000000;
  local_28 = 0;
  lStack_20 = 0;
  local_18 = 0;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar4 != 1.0) || (local_50 = dVar2, local_48 = dVar3, local_58 = dVar1, NAN(dVar4))) &&
     (local_50 = DAT_14c8464e8, local_48 = DAT_14c8464f0, local_58 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar4)) {
    dVar4 = 1.0 / SQRT(dVar4);
    local_50 = dVar2 * dVar4;
    local_48 = dVar3 * dVar4;
    local_58 = dVar1 * dVar4;
  }
  local_78 = 1;
  local_88 = param_3;
  FUN_145c07432(SUB84(local_58,0),local_b8);
  if (lStack_20 != 0) {
    FUN_1402c7646(&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470fa54a FUN_1470fa54a body=9 status=ok
// SIG undefined FUN_1470fa54a(void)

void FUN_1470fa54a(undefined8 param_1,longlong param_2)

{
  FUN_145c07432(param_1,param_2 + 8);
  return;
}



// FUNCTION 1470fa554 FUN_1470fa554 body=251 status=ok
// SIG undefined FUN_1470fa554(void)

void FUN_1470fa554(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    lVar4 = *(longlong *)(param_1 + 0xb8 + lVar5);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x30) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 8);
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 8);
      if (lVar1 != 0) {
        FUN_14711a6fe(lVar1,lVar4);
        lVar4 = *(longlong *)(param_1 + 0xb8 + lVar5);
      }
      if ((lVar3 != 0) && (lVar3 != lVar1)) {
        FUN_14711a6fe(lVar3,lVar4);
        lVar4 = *(longlong *)(param_1 + 0xb8 + lVar5);
      }
      if (lVar4 != 0) {
        FUN_142b4e8f4(lVar4);
        FUN_1400020a8(lVar4);
      }
      *(undefined8 *)(param_1 + 0xb8 + lVar5) = 0;
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x30);
  plVar2 = *(longlong **)(param_1 + 0xe8);
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == 0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,1);
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0xf0);
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == 0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,1);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1470fa650 FUN_1470fa650 body=136 status=ok
// SIG undefined FUN_1470fa650(void)

void FUN_1470fa650(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x40) == 0) {
    lVar1 = param_1 + 4;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x38) + (longlong)(*(int *)(param_1 + 0x40) + -1) * 0x38 + 8;
  }
  FUN_142b4d768(local_58,lVar1);
  FUN_140cddc70(local_58,param_3);
  FUN_140d94080(param_1,param_2,local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fa6da FUN_1470fa6da body=36 status=ok
// SIG undefined FUN_1470fa6da(void)

longlong FUN_1470fa6da(longlong param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    return *(longlong *)(param_1 + 0x38) + (longlong)(*(int *)(param_1 + 0x40) + -1) * 0x38 + 8;
  }
  return param_1 + 4;
}



// FUNCTION 1470fa6fe FUN_1470fa6fe body=28 status=ok
// SIG undefined FUN_1470fa6fe(void)

undefined8 * FUN_1470fa6fe(longlong param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    return (undefined8 *)
           ((longlong)(*(int *)(param_1 + 0x40) + -1) * 0x38 + *(longlong *)(param_1 + 0x38));
  }
  return &DAT_14c9aba10;
}



// FUNCTION 1470fa71a FUN_1470fa71a body=198 status=ok
// SIG undefined FUN_1470fa71a(void)

void FUN_1470fa71a(longlong *param_1,undefined1 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((DAT_14c9abbf0 == param_3) && ((longlong *)*param_1 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
    if (lVar1 != 0) {
      lVar2 = FUN_144a3a302();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  local_38 = local_50;
  local_40 = FUN_142b5198c;
  local_50[0] = param_2;
  local_48 = param_4;
  FUN_1408d6bd2(param_1,param_3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fa7f8 FUN_1470fa7f8 body=109 status=ok
// SIG undefined FUN_1470fa7f8(void)

void FUN_1470fa7f8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  code *local_20;
  undefined8 **local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_10;
  local_18 = &local_40;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  local_20 = FUN_142b51b40;
  local_10 = param_2;
  FUN_1408d6bd2(local_38,DAT_14c9abbf8);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fa866 FUN_1470fa866 body=540 status=ok
// SIG undefined FUN_1470fa866(void)

undefined8 FUN_1470fa866(longlong param_1)

{
  undefined8 uVar1;
  PSRWLOCK SRWLock;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined8 local_c8;
  PSRWLOCK pRStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_ac;
  code *local_a8;
  undefined ***local_98;
  undefined **local_88;
  float *local_80;
  undefined4 *local_78;
  undefined8 *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = FUN_144a8dd5c();
  lVar5 = FUN_144800528();
  lVar8 = *(longlong *)(lVar5 + 0x110);
  if (lVar8 == 0) {
    FUN_140aa6c08(lVar5);
    lVar8 = *(longlong *)(lVar5 + 0x110);
  }
  local_ac = (float)*(double *)(lVar4 + 0x90);
  local_b0 = *(undefined4 *)(lVar4 + 0x98);
  local_c8 = 0;
  pRStack_c0 = (PSRWLOCK)0x0;
  local_b8 = 0;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                    (*(longlong **)(param_1 + 0x18),0xffffffff,0);
  if (cVar3 != '\0') {
    do {
      local_d8 = (double)*(float *)(lVar8 + 0x38);
      local_e8 = 0;
      uStack_e0 = 0;
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c9aba18);
      if (*(longlong *)(DAT_14c9aba20 + 0x20) != 0) {
        fVar9 = (float)FUN_144a7c670();
        local_d8 = (double)fVar9;
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9aba18);
      while( true ) {
        cVar3 = FUN_1470faa84(*(undefined8 *)(param_1 + 8),&local_c8);
        SRWLock = pRStack_c0;
        if (cVar3 == '\0') break;
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_14a1dec70;
        local_80 = &local_ac;
        local_78 = &local_b0;
        local_70 = &local_e8;
        local_a8 = FUN_142b51d78;
        AcquireSRWLockExclusive(pRStack_c0);
        pcVar2 = local_a8;
        uVar1 = local_c8;
        pppuVar7 = local_98;
        if (local_98 == (undefined ***)0x0) {
          pppuVar7 = &local_88;
        }
        uVar6 = (*(code *)(*pppuVar7)[1])();
        (*pcVar2)(uVar6,uVar1);
        ReleaseSRWLockExclusive(SRWLock);
        if (local_a8 != (code *)0x0) {
          pppuVar7 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar7 = &local_88;
          }
          (*(code *)(*pppuVar7)[2])();
        }
        FUN_1470fab38(&local_c8);
      }
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                        (*(longlong **)(param_1 + 0x18),0xffffffff,0);
    } while (cVar3 != '\0');
    if (pRStack_c0 != (PSRWLOCK)0x0) {
      FUN_1470fbba2(&local_c8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470faa84 FUN_1470faa84 body=180 status=ok
// SIG undefined FUN_1470faa84(void)

bool FUN_1470faa84(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 8);
    lVar3 = *(longlong *)(lVar2 + 8);
    if (*param_2 != lVar3) {
      if (*param_2 != 0) {
        FUN_1470fbba2(param_2);
        lVar3 = *plVar1;
      }
      *param_2 = lVar3;
      param_2[1] = *(longlong *)(lVar2 + 0x10);
      param_2[2] = *(longlong *)(lVar2 + 0x18);
      *plVar1 = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
    }
    lVar3 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_1470fbba2(plVar1);
      *plVar1 = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
    }
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        FUN_1470fbba2(lVar3 + 8);
      }
      FUN_1400020a8(lVar3);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 1470fab38 FUN_1470fab38 body=176 status=ok
// SIG undefined FUN_1470fab38(void)

void FUN_1470fab38(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  
  if ((PSRWLOCK)param_1[1] != (PSRWLOCK)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)param_1[1]);
  }
  if (*param_1 != 0) {
    *(int *)param_1[2] = *(int *)param_1[2] + -1;
    piVar3 = (int *)param_1[2];
    if (*piVar3 == 0) {
      plVar1 = (longlong *)*param_1;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = *plVar1;
        if (lVar2 != 0) {
          FUN_140896cec(lVar2);
          FUN_1400020a8(lVar2);
        }
        FUN_1400020a8(plVar1);
        piVar3 = (int *)param_1[2];
      }
      *param_1 = 0;
      if (piVar3 != (int *)0x0) {
        FUN_1400020a8();
      }
      param_1[2] = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
      if (param_1[1] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *param_1 = 0;
      param_1[2] = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
    }
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1470fabf0 FUN_1470fabf0 body=428 status=ok
// SIG undefined FUN_1470fabf0(void)

void FUN_1470fabf0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_b8 [43];
  char local_8d;
  undefined4 local_8c;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined4 *local_60;
  char *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_8c = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9aba18);
  FUN_144a8dd5c();
  if ((longlong)*(int *)(DAT_14c9aba20 + 1) != 0) {
    puVar9 = (undefined8 *)*DAT_14c9aba20;
    lVar10 = (longlong)*(int *)(DAT_14c9aba20 + 1) * 0x18;
    do {
      local_8d = '\0';
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14a1dec90;
      local_60 = &local_8c;
      local_58 = &local_8d;
      local_88 = FUN_142b51e9a;
      AcquireSRWLockExclusive((PSRWLOCK)puVar9[1]);
      pcVar5 = local_88;
      uVar1 = *puVar9;
      pppuVar8 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar8 = &local_68;
      }
      uVar6 = (*(code *)(*pppuVar8)[1])();
      (*pcVar5)(uVar6,uVar1);
      ReleaseSRWLockExclusive((PSRWLOCK)puVar9[1]);
      if (local_88 != (code *)0x0) {
        pppuVar8 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar8 = &local_68;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      puVar4 = DAT_14c9aba20;
      if (local_8d == '\x01') {
        puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *puVar7 = 0;
        FUN_1470fbc44(puVar7 + 1,puVar9);
        if (puVar7 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)puVar4[2];
          puVar4[2] = puVar7;
          *puVar2 = puVar7;
        }
      }
      puVar9 = puVar9 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  if (((*(longlong *)DAT_14c9aba20[3] != 0) && (DAT_14c9aba20[5] != 0)) &&
     (plVar3 = *(longlong **)(DAT_14c9aba20[5] + 0x18), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x10))();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9aba18);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470fad9e FUN_1470fad9e body=50 status=ok
// SIG undefined FUN_1470fad9e(void)

undefined8 FUN_1470fad9e(void)

{
  undefined8 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9aba18);
  uVar1 = *(undefined8 *)(DAT_14c9aba20 + 0x20);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9aba18);
  return uVar1;
}



// FUNCTION 1470fadd0 FUN_1470fadd0 body=130 status=ok
// SIG undefined FUN_1470fadd0(void)

void FUN_1470fadd0(char param_1)

{
  undefined8 *puVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9aba18);
  puVar1 = *(undefined8 **)(DAT_14c9aba20 + 0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar1 = 0;
    FUN_1409e1656(puVar1);
    *puVar1 = &PTR_LAB_14a1deaa0;
    *(undefined8 **)(DAT_14c9aba20 + 0x30) = puVar1;
  }
  if (param_1 == '\0') {
    FUN_1449db8d8(puVar1);
  }
  else {
    FUN_144958d50();
  }
                    /* WARNING: Could not recover jumptable at 0x0001470fae4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9aba18);
  return;
}



// FUNCTION 1470faeb2 FUN_1470faeb2 body=80 status=ok
// SIG undefined FUN_1470faeb2(void)

undefined8 FUN_1470faeb2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined2 *)(lVar1 + -8) = *(undefined2 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1408fdf38();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470faf2a FUN_1470faf2a body=59 status=ok
// SIG undefined FUN_1470faf2a(void)

undefined8 FUN_1470faf2a(longlong *param_1)

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



// FUNCTION 1470faf70 FUN_1470faf70 body=38 status=ok
// SIG undefined FUN_1470faf70(void)

void FUN_1470faf70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1470fb072 FUN_1470fb072 body=59 status=ok
// SIG undefined FUN_1470fb072(void)

undefined8 FUN_1470fb072(longlong *param_1)

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



// FUNCTION 1470fb148 FUN_1470fb148 body=54 status=ok
// SIG undefined FUN_1470fb148(void)

undefined1 FUN_1470fb148(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470fb260(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1470fb1a6 FUN_1470fb1a6 body=59 status=ok
// SIG undefined FUN_1470fb1a6(void)

undefined8 FUN_1470fb1a6(longlong *param_1)

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



// FUNCTION 1470fb1ec FUN_1470fb1ec body=37 status=ok
// SIG undefined FUN_1470fb1ec(void)

void FUN_1470fb1ec(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1470fb260 FUN_1470fb260 body=89 status=ok
// SIG undefined FUN_1470fb260(void)

undefined8 * FUN_1470fb260(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470fb2ba(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1470fb2ba FUN_1470fb2ba body=115 status=ok
// SIG undefined FUN_1470fb2ba(void)

void FUN_1470fb2ba(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1470fb35c FUN_1470fb35c body=102 status=ok
// SIG undefined FUN_1470fb35c(void)

undefined1 FUN_1470fb35c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined2 *)(param_2 + 8 + lVar3) = *(undefined2 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470fb3ea FUN_1470fb3ea body=59 status=ok
// SIG undefined FUN_1470fb3ea(void)

undefined8 FUN_1470fb3ea(longlong *param_1)

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



// FUNCTION 1470fb4f2 FUN_1470fb4f2 body=39 status=ok
// SIG undefined FUN_1470fb4f2(void)

undefined8 FUN_1470fb4f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 1470fb542 FUN_1470fb542 body=59 status=ok
// SIG undefined FUN_1470fb542(void)

undefined8 FUN_1470fb542(longlong *param_1)

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



// FUNCTION 1470fb5e4 FUN_1470fb5e4 body=98 status=ok
// SIG undefined FUN_1470fb5e4(void)

void FUN_1470fb5e4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470fb646 FUN_1470fb646 body=29 status=ok
// SIG undefined FUN_1470fb646(void)

undefined8 FUN_1470fb646(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470fb664 FUN_1470fb664 body=38 status=ok
// SIG undefined FUN_1470fb664(void)

undefined8 FUN_1470fb664(undefined8 param_1,int param_2)

{
  FUN_1410dc120();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470fb692 FUN_1470fb692 body=38 status=ok
// SIG undefined FUN_1470fb692(void)

undefined8 FUN_1470fb692(undefined8 param_1,int param_2)

{
  FUN_140af926c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470fb6c0 FUN_1470fb6c0 body=77 status=ok
// SIG undefined FUN_1470fb6c0(void)

undefined8 * FUN_1470fb6c0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a1deaf0;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  if (param_1[3] != 0) {
    FUN_14018802a();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470fb70e FUN_1470fb70e body=132 status=ok
// SIG undefined FUN_1470fb70e(void)

void FUN_1470fb70e(longlong *param_1)

{
  int *piVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)param_1[1]);
  *(int *)param_1[2] = *(int *)param_1[2] + -1;
  piVar1 = (int *)param_1[2];
  if (*piVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001470fb738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
    return;
  }
  if (*param_1 != 0) {
    FUN_1400020a8(*param_1);
    piVar1 = (int *)param_1[2];
  }
  *param_1 = 0;
  if (piVar1 != (int *)0x0) {
    FUN_1400020a8();
  }
  param_1[2] = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1470fb792 FUN_1470fb792 body=62 status=ok
// SIG undefined FUN_1470fb792(void)

void FUN_1470fb792(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1470fb7d0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1470fb7d0 FUN_1470fb7d0 body=93 status=ok
// SIG undefined FUN_1470fb7d0(void)

ulonglong FUN_1470fb7d0(uint param_1,uint param_2)

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



// FUNCTION 1470fb82e FUN_1470fb82e body=132 status=ok
// SIG undefined FUN_1470fb82e(void)

void FUN_1470fb82e(longlong *param_1)

{
  int *piVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)param_1[1]);
  *(int *)param_1[2] = *(int *)param_1[2] + -1;
  piVar1 = (int *)param_1[2];
  if (*piVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001470fb858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
    return;
  }
  if (*param_1 != 0) {
    FUN_1400020a8(*param_1);
    piVar1 = (int *)param_1[2];
  }
  *param_1 = 0;
  if (piVar1 != (int *)0x0) {
    FUN_1400020a8();
  }
  param_1[2] = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1470fb8b2 FUN_1470fb8b2 body=120 status=ok
// SIG undefined FUN_1470fb8b2(void)

undefined8 FUN_1470fb8b2(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  
  if (((((double)param_1[2] != (double)param_2[2]) ||
       (NAN((double)param_1[2]) || NAN((double)param_2[2]))) ||
      ((double)param_1[3] != (double)param_2[3])) ||
     (NAN((double)param_1[3]) || NAN((double)param_2[3]))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -((double)param_2[4] == (double)param_1[4]) & 1;
  }
  return CONCAT71((int7)((ulonglong)*param_2 >> 8),
                  *(float *)((longlong)param_1 + 0x2c) == *(float *)((longlong)param_2 + 0x2c) &
                  (char)param_1[5] == (char)param_2[5] & bVar1 &
                  (*(char *)((longlong)param_1 + 0xc) == *(char *)((longlong)param_2 + 0xc) &&
                  *param_1 == *param_2));
}



// FUNCTION 1470fb92a FUN_1470fb92a body=109 status=ok
// SIG undefined FUN_1470fb92a(void)

void FUN_1470fb92a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,4);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,4);
  }
  return;
}



// FUNCTION 1470fb998 FUN_1470fb998 body=189 status=ok
// SIG undefined FUN_1470fb998(void)

longlong FUN_1470fb998(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x460;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x460) == *param_3) {
          if (lVar3 != 0) goto LAB_1470fba38;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x450);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1470fba56(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x460 + *param_1;
LAB_1470fba38:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 1470fba56 FUN_1470fba56 body=330 status=ok
// SIG undefined FUN_1470fba56(void)

undefined4 * FUN_1470fba56(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  undefined4 local_498 [2];
  undefined8 *local_490;
  undefined1 local_488 [1096];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  FUN_1402c7cee(param_1,local_498);
  FUN_14101c2b2(local_488);
  *local_490 = *(undefined8 *)*param_4;
  FUN_1402c885a(local_490 + 2,local_488);
  FUN_1403c51be(local_488);
  *(undefined4 *)(local_490 + 0x8a) = 0xffffffff;
  local_4a8 = 0;
  cVar1 = FUN_1402c7c22(param_1,param_3,local_490,local_498);
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
      *(uint *)((longlong)local_490 + 0x454) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_490 + 0x8a) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_498[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1402c859e(param_1);
    }
  }
  *param_2 = local_498[0];
  if ((local_40 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fbba2 FUN_1470fbba2 body=162 status=ok
// SIG undefined FUN_1470fbba2(void)

void FUN_1470fbba2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  
  AcquireSRWLockExclusive((PSRWLOCK)param_1[1]);
  *(int *)param_1[2] = *(int *)param_1[2] + -1;
  piVar3 = (int *)param_1[2];
  if (*piVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001470fbbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
    return;
  }
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      FUN_140896cec(lVar2);
      FUN_1400020a8(lVar2);
    }
    FUN_1400020a8(plVar1);
    piVar3 = (int *)param_1[2];
  }
  *param_1 = 0;
  if (piVar3 != (int *)0x0) {
    FUN_1400020a8();
  }
  param_1[2] = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1470fbc44 FUN_1470fbc44 body=66 status=ok
// SIG undefined FUN_1470fbc44(void)

undefined8 * FUN_1470fbc44(undefined8 *param_1,undefined8 *param_2)

{
  PSRWLOCK SRWLock;
  
  *param_1 = *param_2;
  SRWLock = (PSRWLOCK)param_2[1];
  param_1[1] = SRWLock;
  param_1[2] = param_2[2];
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockExclusive(SRWLock);
    *(int *)param_1[2] = *(int *)param_1[2] + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
  }
  return param_1;
}



// FUNCTION 1470fbc86 FUN_1470fbc86 body=48 status=ok
// SIG undefined FUN_1470fbc86(void)

void FUN_1470fbc86(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1470fbcb6 FUN_1470fbcb6 body=132 status=ok
// SIG undefined FUN_1470fbcb6(void)

void FUN_1470fbcb6(longlong *param_1)

{
  int *piVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)param_1[1]);
  *(int *)param_1[2] = *(int *)param_1[2] + -1;
  piVar1 = (int *)param_1[2];
  if (*piVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001470fbce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
    return;
  }
  if (*param_1 != 0) {
    FUN_1400020a8(*param_1);
    piVar1 = (int *)param_1[2];
  }
  *param_1 = 0;
  if (piVar1 != (int *)0x0) {
    FUN_1400020a8();
  }
  param_1[2] = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1470fbd3a FUN_1470fbd3a body=923 status=ok
// SIG undefined FUN_1470fbd3a(void)

void FUN_1470fbd3a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 0x20) < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      lVar10 = (longlong)(int)uVar6;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8);
      lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x18) + lVar10 * 8);
      if ((*(longlong *)(*(longlong *)(lVar8 + 0x20) + 0x1f0) ==
           *(longlong *)(*(longlong *)(lVar9 + 0x20) + 0x1f0)) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x18) + 0x1f0) ==
          *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x1f0))) {
        *(undefined4 *)(lVar8 + 0xf48) = *(undefined4 *)(lVar9 + 0xf48);
        uVar6 = uVar6 + 1;
      }
      else {
        local_68 = lVar8 + 0x20;
        FUN_147104b7c(*(longlong *)(lVar8 + 0x18) + 0x2c8,&local_68);
        *(undefined4 *)(lVar8 + 0xf48) = 0xffffffff;
        iVar5 = *(int *)(param_1 + 0x20);
        if (~uVar6 + iVar5 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8),
                  (void *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8 + 8),
                  (longlong)(int)(~uVar6 + iVar5) << 3);
          iVar5 = *(int *)(param_1 + 0x20);
        }
        *(int *)(param_1 + 0x20) = iVar5 + -1;
        FUN_1409bd764((longlong *)(param_1 + 0x18));
      }
    } while ((int)uVar6 < *(int *)(param_2 + 0x20));
  }
  if ((int)uVar6 < *(int *)(param_1 + 0x20)) {
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar6 * 8);
      local_68 = lVar8 + 0x20;
      FUN_147104b7c(*(longlong *)(lVar8 + 0x18) + 0x2c8,&local_68);
      *(undefined4 *)(lVar8 + 0xf48) = 0xffffffff;
      iVar5 = *(int *)(param_1 + 0x20);
      iVar7 = iVar5 + ~uVar6;
      if (iVar7 != 0) {
        if (0 < iVar7) {
          iVar7 = 1;
        }
        memmove((void *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar6 * 8),
                (void *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar5 - iVar7) * 8),
                (longlong)iVar7 << 3);
        iVar5 = *(int *)(param_1 + 0x20);
      }
      *(int *)(param_1 + 0x20) = iVar5 + -1;
      FUN_1409bd764(param_1 + 0x18);
    } while ((int)uVar6 < *(int *)(param_1 + 0x20));
  }
  FUN_142b5c65a(param_1 + 0x28);
  FUN_142b5c65a(param_1 + 0x38);
  if (*(int *)(param_2 + 0x10) < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      lVar9 = (longlong)(int)uVar6;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar9 * 8);
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar9 * 8);
      if ((int)plVar2[0x3f] == *(int *)(lVar8 + 0x1f8)) {
        *(undefined4 *)((longlong)plVar2 + 0x1fc) = *(undefined4 *)(lVar8 + 0x1fc);
        uVar6 = uVar6 + 1;
      }
      else {
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,1);
        }
        iVar5 = *(int *)(param_1 + 0x10);
        if (~uVar6 + iVar5 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 8) + lVar9 * 8),
                  (void *)(*(longlong *)(param_1 + 8) + lVar9 * 8 + 8),
                  (longlong)(int)(~uVar6 + iVar5) << 3);
          iVar5 = *(int *)(param_1 + 0x10);
        }
        *(int *)(param_1 + 0x10) = iVar5 + -1;
        FUN_140b4d586((longlong *)(param_1 + 8));
      }
    } while ((int)uVar6 < *(int *)(param_2 + 0x10));
  }
  plVar2 = (longlong *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x10);
  if ((int)uVar6 < iVar5) {
    do {
      plVar3 = *(longlong **)(*plVar2 + (longlong)(int)uVar6 * 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,1);
        iVar5 = *(int *)(param_1 + 0x10);
      }
      iVar7 = iVar5 + ~uVar6;
      if (iVar7 != 0) {
        if (0 < iVar7) {
          iVar7 = 1;
        }
        memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar6 * 8),
                (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar5 - iVar7) * 8),
                (longlong)iVar7 << 3);
        iVar5 = *(int *)(param_1 + 0x10);
      }
      *(int *)(param_1 + 0x10) = iVar5 + -1;
      FUN_140b4d586(plVar2);
      iVar5 = *(int *)(param_1 + 0x10);
    } while ((int)uVar6 < iVar5);
  }
  plVar3 = (longlong *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) < 0) {
    FUN_147104c46(plVar3);
  }
  if (0 < *(int *)(param_2 + 0x70)) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x70);
      lVar10 = (longlong)iVar5;
      *(uint *)(param_1 + 0x70) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x74) < iVar5 + 1U) {
        FUN_140cbd274(plVar3,iVar5);
      }
      lVar4 = *plVar3;
      puVar1 = (undefined8 *)(lVar4 + lVar10 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar4 + 0x10 + lVar10 * 0x18) = 0;
      *(undefined8 *)(lVar4 + lVar10 * 0x18) =
           *(undefined8 *)
            (*plVar2 +
            (longlong)*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x68) + lVar8) + 0x1fc) * 8);
      *(undefined8 *)(lVar4 + 8 + lVar10 * 0x18) =
           *(undefined8 *)
            (*plVar2 +
            (longlong)*(int *)(*(longlong *)(*(longlong *)(param_2 + 0x68) + 8 + lVar8) + 0x1fc) * 8
            );
      *(undefined8 *)(lVar4 + 0x10 + lVar10 * 0x18) =
           *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x10 + lVar8);
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar9 < *(int *)(param_2 + 0x70));
  }
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470fc0d6 FUN_1470fc0d6 body=216 status=ok
// SIG undefined FUN_1470fc0d6(void)

void FUN_1470fc0d6(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_3;
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 == 0) goto LAB_1470fc181;
  }
  else {
    FUN_1456cec3c(param_1);
  }
  uVar1 = FUN_140746dd0();
  plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
  if (plVar2 != (longlong *)0x0 && param_1 != 0) {
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (lVar3 != 0) {
      FUN_1446f470e(local_38,L"Unspecified",1);
      FUN_1447683ea(&local_40,&local_30,0);
      FUN_1470fa71a(lVar3,param_2,local_40,local_38);
    }
  }
LAB_1470fc181:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fc1b0 FUN_1470fc1b0 body=132 status=ok
// SIG undefined FUN_1470fc1b0(void)

void FUN_1470fc1b0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_1 != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
    lVar1 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
    if (lVar1 != 0) {
      FUN_1446f470e(local_30,L"Unspecified",1);
      FUN_1470fa71a(lVar1,param_2,param_3,local_30);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fc236 FUN_1470fc236 body=131 status=ok
// SIG undefined FUN_1470fc236(void)

undefined1 FUN_1470fc236(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  code *local_30;
  undefined1 **local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_1 != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
    lVar2 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
    if (lVar2 != 0) {
      local_38 = &local_19;
      local_19 = 0;
      local_28 = &local_38;
      local_30 = FUN_142b5e7e6;
      FUN_1408d6bd2(lVar2,param_2);
      uVar1 = local_19;
      goto LAB_1470fc29c;
    }
  }
  uVar1 = 0;
LAB_1470fc29c:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fc2ba FUN_1470fc2ba body=125 status=ok
// SIG undefined FUN_1470fc2ba(void)

void FUN_1470fc2ba(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  code *local_28;
  undefined8 **local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = param_2;
  if ((*param_1 != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
    lVar1 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
    if (lVar1 != 0) {
      local_30 = &local_18;
      local_20 = &local_30;
      local_28 = FUN_142b5e82a;
      FUN_1408d6bd2(lVar1,param_3);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fc338 FUN_1470fc338 body=1 status=ok
// SIG undefined FUN_1470fc338(void)

void FUN_1470fc338(void)

{
  return;
}



// FUNCTION 1470fc33a FUN_1470fc33a body=1 status=ok
// SIG undefined FUN_1470fc33a(void)

void FUN_1470fc33a(void)

{
  return;
}



// FUNCTION 1470fc33c FUN_1470fc33c body=25 status=ok
// SIG undefined FUN_1470fc33c(void)

void FUN_1470fc33c(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    FUN_142b5b614(*(longlong *)(param_1 + 0x1c8),1);
    return;
  }
  return;
}



// FUNCTION 1470fc36a FUN_1470fc36a body=190 status=ok
// SIG undefined FUN_1470fc36a(void)

void FUN_1470fc36a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(int *)((longlong)param_1 + 0x54) = *(int *)((longlong)param_1 + 0x54) + 1;
  iVar4 = (int)param_2[1];
  if (iVar4 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  uVar8 = 0;
  uVar6 = (ulonglong)(iVar4 - 1);
  if (iVar4 == 0) {
    uVar6 = uVar8;
  }
  uVar3 = FUN_144a49b4a(uVar6,puVar7);
  iVar4 = FUN_147103f4e(param_1,uVar3,param_2);
  if (iVar4 != -1) {
    uVar8 = (longlong)iVar4 * 0x20 + *param_1;
  }
  plVar5 = (longlong *)(uVar8 + 0x10);
  if (uVar8 == 0) {
    plVar5 = (longlong *)0x0;
  }
  lVar2 = *plVar5;
  piVar1 = (int *)(lVar2 + 0x3c);
  *piVar1 = *piVar1 + 1;
  QueryPerformanceCounter(&local_28);
  *(double *)(lVar2 + 0x20) = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fc42a FUN_1470fc42a body=291 status=ok
// SIG undefined FUN_1470fc42a(void)

void FUN_1470fc42a(longlong *param_1,longlong *param_2,double *param_3,double *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  double dVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  
  iVar5 = (int)param_2[1];
  if (iVar5 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar3,puVar8);
  iVar5 = FUN_147103f4e(param_1,uVar4,param_2);
  if ((iVar5 == -1) ||
     (lVar6 = (longlong)iVar5 * 0x20 + *param_1, puVar7 = (undefined8 *)(lVar6 + 0x10),
     puVar7 == (undefined8 *)0x0 || lVar6 == 0)) {
    *param_3 = -1.0;
    *param_4 = -1.0;
    *param_5 = 0xbff0000000000000;
    *param_6 = 0xbff0000000000000;
  }
  else {
    *param_3 = 0.0;
    *param_4 = 0.0;
    *param_5 = 0x47efffffe0000000;
    *param_6 = 0;
    pcVar2 = (char *)*puVar7;
    if ((*pcVar2 == '\x01') && (0 < *(int *)(pcVar2 + 0x3c))) {
      dVar1 = *(double *)(*(longlong *)(pcVar2 + 8) + 8);
      *param_4 = dVar1;
      *param_3 = dVar1;
      *param_5 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x10) + 8);
      *param_6 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + 8);
      *param_3 = *param_3 / (double)*(int *)(pcVar2 + 0x3c);
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470fc54e FUN_1470fc54e body=771 status=ok
// SIG undefined FUN_1470fc54e(void)

void FUN_1470fc54e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar6 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 0) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_140e83416(&local_98,uVar8);
    iVar6 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_14482b9e8();
    }
  }
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    FUN_1408be2c4(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar2 = *local_e0;
      lVar4 = (longlong)iStack_c4 * 0x20;
      iVar6 = *(int *)(lVar2 + 8 + lVar4);
      puVar7 = &DAT_149dfb77a;
      if (iVar6 != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar4);
      }
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar5,puVar7);
      iVar6 = FUN_1456cf568(&local_98,uVar3,lVar2 + lVar4);
      if (iVar6 == -1) {
        puVar9 = (undefined8 *)((longlong)iStack_c4 * 0x20 + *local_e0);
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_1447a1bd6(param_2,iVar6);
        }
        lVar2 = *param_2;
        lVar4 = (longlong)iVar6 * 0x10;
        puVar1 = (undefined8 *)(lVar2 + lVar4);
        *(undefined8 *)(lVar2 + lVar4) = 0;
        iVar6 = *(int *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        *(int *)(lVar2 + 8 + lVar4) = iVar6;
        if ((longlong)iVar6 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar6,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar6 * 2);
        }
        FUN_14482b35e(&local_98,&local_b8,(longlong)iStack_c4 * 0x20 + *local_e0,0);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470fc854 FUN_1470fc854 body=143 status=ok
// SIG undefined FUN_1470fc854(void)

void FUN_1470fc854(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  
  iVar10 = *(int *)(param_2 + 1);
  if (iVar10 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  else {
    puVar13 = (undefined2 *)*param_2;
  }
  iVar2 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar2 = 0;
  }
  uVar9 = FUN_144a49b4a(iVar2,puVar13);
  iVar10 = FUN_147103f4e(param_1,uVar9,param_2);
  if ((iVar10 != -1) &&
     (lVar11 = (longlong)iVar10 * 0x20 + *param_1, plVar12 = (longlong *)(lVar11 + 0x10),
     plVar12 != (longlong *)0x0 && lVar11 != 0)) {
    puVar1 = (undefined4 *)*plVar12;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(puVar1 + 8);
    uVar9 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    uVar6 = puVar1[5];
    uVar7 = puVar1[6];
    uVar8 = puVar1[7];
    param_3[4] = puVar1[4];
    param_3[5] = uVar6;
    param_3[6] = uVar7;
    param_3[7] = uVar8;
    *param_3 = uVar9;
    param_3[1] = uVar3;
    param_3[2] = uVar4;
    param_3[3] = uVar5;
    FUN_144a787a6(param_3 + 10,puVar1 + 10);
    *(undefined8 *)(param_3 + 0xe) = *(undefined8 *)(puVar1 + 0xe);
  }
  return;
}



// FUNCTION 1470fc8e4 FUN_1470fc8e4 body=1112 status=ok
// SIG undefined FUN_1470fc8e4(void)

void FUN_1470fc8e4(longlong *param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  int local_14c;
  double local_148;
  longlong local_140;
  longlong local_138;
  undefined8 uStack_130;
  double local_120;
  double local_118;
  double local_110;
  double local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar8 = FUN_1447210f0();
  local_158 = 0;
  (**(code **)(*param_1 + 800))(param_1,0,&local_120,local_108);
  local_138 = 0;
  uStack_130 = 0;
  local_140 = FUN_144a6c4d8();
  if ((local_140 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_140);
  }
  local_148 = local_110 - local_108[2];
  dVar22 = local_118 - local_108[1];
  dVar6 = local_120 - local_108[0];
  FUN_1434f53e8(uVar8,&local_140,&local_138);
  lVar9 = local_138;
  lVar15 = (longlong)(int)uStack_130;
  if (lVar15 != 0) {
    lVar12 = 0;
    do {
      local_158 = 0;
      (**(code **)(**(longlong **)(lVar9 + lVar12) + 800))
                (*(longlong **)(lVar9 + lVar12),1,local_108,&local_120);
      lVar12 = lVar12 + 8;
    } while (lVar15 * 8 != lVar12);
  }
  local_108[2] = ((local_110 + local_108[2]) - local_148) * 0.5;
  local_108[1] = ((local_118 + local_108[1]) - dVar22) * 0.5;
  local_108[0] = ((local_120 + local_108[0]) - dVar6) * 0.5;
  lVar9 = 0;
  do {
    dVar17 = (double)param_1[lVar9 + 0x80];
    if (local_108[lVar9] <= (double)param_1[lVar9 + 0x80]) {
      dVar17 = local_108[lVar9];
    }
    param_1[lVar9 + 0x80] = (longlong)dVar17;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 3);
  dVar17 = local_108[0] / (double)param_1[0x80];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar17;
  if (0.0 <= dVar17) {
    auVar18 = roundpd(auVar18,auVar18,2);
    dVar17 = auVar18._0_8_;
  }
  else {
    auVar18 = roundpd(auVar18,auVar18,1);
    dVar17 = auVar18._0_8_;
  }
  dVar20 = local_108[1] / (double)param_1[0x81];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = dVar20;
  if (0.0 <= dVar20) {
    auVar18 = roundpd(auVar21,auVar21,2);
    dVar20 = auVar18._0_8_;
  }
  else {
    auVar18 = roundpd(auVar21,auVar21,1);
    dVar20 = auVar18._0_8_;
  }
  local_14c = (int)dVar17;
  iVar14 = (int)dVar20;
  dVar17 = local_108[2] / (double)param_1[0x82];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar17;
  if (0.0 <= dVar17) {
    auVar18 = roundpd(auVar19,auVar19,2);
    dVar17 = auVar18._0_8_;
  }
  else {
    auVar18 = roundpd(auVar19,auVar19,1);
    dVar17 = auVar18._0_8_;
  }
  iVar11 = (int)dVar17;
  iVar10 = iVar14 * local_14c * iVar11;
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  plVar1 = param_1 + 0x8f;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)((longlong)param_1 + 0x484) != iVar10) {
    FUN_1447a8aa0(plVar1);
  }
  if (0 < local_14c) {
    iVar10 = 0;
    dVar17 = 0.0;
    do {
      if (0 < iVar14) {
        iVar13 = 0;
        dVar20 = 0.0;
        do {
          if (0 < iVar11) {
            dVar7 = 0.0;
            iVar16 = iVar11;
            do {
              dVar2 = (double)param_1[0x82];
              dVar3 = (double)param_1[0x80];
              dVar4 = (double)param_1[0x81];
              iVar5 = (int)param_1[0x90];
              lVar9 = (longlong)iVar5;
              *(uint *)(param_1 + 0x90) = iVar5 + 1U;
              if (*(uint *)((longlong)param_1 + 0x484) < iVar5 + 1U) {
                FUN_1403e3958(plVar1,iVar5);
              }
              lVar15 = *plVar1;
              *(double *)(lVar15 + lVar9 * 0x18) = dVar3 * 0.5 + dVar17 * dVar3 + dVar6;
              *(double *)(lVar15 + 8 + lVar9 * 0x18) = dVar4 * 0.5 + dVar20 * dVar4 + dVar22;
              *(double *)(lVar15 + 0x10 + lVar9 * 0x18) = dVar2 * 0.5 + dVar7 * dVar2 + local_148;
              dVar7 = dVar7 + 1.0;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          dVar20 = dVar20 + 1.0;
          iVar13 = iVar13 + 1;
        } while (iVar13 != iVar14);
      }
      dVar17 = dVar17 + 1.0;
      iVar10 = iVar10 + 1;
    } while (iVar10 != local_14c);
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fcd3e FUN_1470fcd3e body=176 status=ok
// SIG undefined FUN_1470fcd3e(void)

void FUN_1470fcd3e(longlong param_1)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14710401a(param_1 + 0x390);
  srand(*(uint *)(param_1 + 0x3f8));
  FUN_1470fc8e4(param_1);
  if (*(int *)(param_1 + 0x3f4) == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  if (*(int *)(param_1 + 0x3f4) == 0) {
    local_50 = &PTR_LAB_14a1e1310;
    local_48 = 0;
    uStack_40 = 0;
    FUN_140056680(local_60,L"Raycasts");
    FUN_1470fd39e(param_1 + 0x390,local_60,&local_50);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fcf48 FUN_1470fcf48 body=1109 status=ok
// SIG undefined FUN_1470fcf48(void)

undefined8 FUN_1470fcf48(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  void *_Src;
  longlong *plVar2;
  size_t sVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  wchar_t *_Str;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e0;
  wchar_t *local_d8;
  int local_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  ulonglong uStack_90;
  longlong local_88;
  longlong local_80 [4];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(param_2,L"Physics Test Perf Stats:\n");
  FUN_140002266(&local_88,L"  Seed: %d\n",*(undefined4 *)(param_1 + 0x3f8));
  iVar6 = (int)local_80[0] + -1;
  if ((int)local_80[0] == 0) {
    iVar6 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_88,iVar6);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  local_f8 = *(undefined8 **)(param_1 + 0x410);
  FUN_140002266(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x400),
                *(undefined8 *)(param_1 + 0x408));
  puVar5 = local_98;
  if ((int)uStack_90 == 0) {
    puVar5 = (undefined8 *)&DAT_149dfb77a;
  }
  FUN_140002266(&local_88,L"  Sub-division Size: %s\n",puVar5);
  iVar6 = (int)local_80[0] + -1;
  if ((int)local_80[0] == 0) {
    iVar6 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_88,iVar6);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar1 = param_1 + 0x390;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_1470fc54e(lVar1,&local_98);
  if ((longlong)(int)uStack_90 == 0) {
    uVar4 = 0;
  }
  else {
    local_e0 = local_98 + (longlong)(int)uStack_90 * 2;
    puVar5 = local_98;
    do {
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(puVar5 + 1) != 0) {
        puVar7 = (undefined2 *)*puVar5;
      }
      FUN_140002266(&local_88,L"  Category: %s\n",puVar7);
      iVar6 = (int)local_80[0] + -1;
      if ((int)local_80[0] == 0) {
        iVar6 = 0;
      }
      thunk_FUN_1400020e8(param_2,local_88,iVar6);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_1470fe3a8(&local_88);
      FUN_1470fc854(lVar1,puVar5,&local_88);
      local_c8 = (void *)0x0;
      local_c0 = *(int *)(puVar5 + 1);
      lVar8 = (longlong)local_c0;
      _Src = (void *)*puVar5;
      if (lVar8 == 0) {
        local_bc = 0;
      }
      else {
        FUN_1446dd670(&local_c8,local_c0,0);
        memcpy(local_c8,_Src,lVar8 * 2);
      }
      local_f0 = &local_b8;
      local_f8 = &local_b0;
      FUN_1470fc42a(lVar1,&local_c8,&local_a0,&local_a8);
      FUN_1470fdd3c(param_1,&local_d8,puVar5);
      _Str = L"";
      if (local_d0 != 0) {
        _Str = local_d8;
      }
      sVar3 = wcslen(_Str);
      thunk_FUN_1400020e8(param_2,_Str,sVar3 & 0xffffffff);
      if (local_d8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_d8,L"    Average Time: %.15f\n",local_a0);
      iVar6 = local_d0 + -1;
      if (local_d0 == 0) {
        iVar6 = 0;
      }
      thunk_FUN_1400020e8(param_2,local_d8,iVar6);
      if (local_d8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_d8,L"    Total Time: %.15f\n",local_a8);
      iVar6 = local_d0 + -1;
      if (local_d0 == 0) {
        iVar6 = 0;
      }
      thunk_FUN_1400020e8(param_2,local_d8,iVar6);
      if (local_d8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_d8,L"    Min Time: %.15f\n",local_b0);
      iVar6 = local_d0 + -1;
      if (local_d0 == 0) {
        iVar6 = 0;
      }
      thunk_FUN_1400020e8(param_2,local_d8,iVar6);
      if (local_d8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_d8,L"    Max Time: %.15f\n",local_b8);
      iVar6 = local_d0 + -1;
      if (local_d0 == 0) {
        iVar6 = 0;
      }
      thunk_FUN_1400020e8(param_2,local_d8,iVar6);
      if (local_d8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = 1;
      do {
        plVar2 = (longlong *)local_80[lVar8 + -1];
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != local_e0);
    uVar4 = uStack_90 & 0xffffffff;
  }
  FUN_1447a1747(local_98,uVar4);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470fd39e FUN_1470fd39e body=277 status=ok
// SIG undefined FUN_1470fd39e(void)

void FUN_1470fd39e(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  FUN_147104380(param_1,&local_54);
  lVar4 = *param_1;
  puVar2 = (undefined1 *)FUN_14001cc68(0x40,0x10);
  FUN_1470fe3a8(puVar2);
  *(undefined1 **)(lVar4 + 0x10 + (longlong)local_54 * 0x20) = puVar2;
  *puVar2 = 0;
  *(int *)(puVar2 + 0x38) = (int)param_1[10];
  iVar1 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(puVar2 + 0x28,*param_2,iVar1);
  lVar4 = 1;
  do {
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar3 = &PTR_LAB_14a1e1310;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined8 **)(*(longlong *)(puVar2 + lVar4 * 8) + 0x10) = puVar3;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  *param_3 = &PTR_LAB_14a1e1310;
  if (param_3[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fd4ce FUN_1470fd4ce body=1458 status=ok
// SIG undefined FUN_1470fd4ce(void)

void FUN_1470fd4ce(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 unaff_RBX;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  double dVar20;
  undefined1 auStack_288 [32];
  double *local_268;
  double *local_260;
  longlong local_250;
  undefined8 local_248;
  undefined1 local_23c [4];
  undefined1 local_238 [16];
  double local_228;
  undefined1 local_220 [16];
  double local_210;
  double local_208;
  double local_200;
  undefined1 local_1f8 [16];
  undefined **local_1e8;
  longlong local_1e0 [2];
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  double local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined1 local_170 [80];
  longlong local_120;
  longlong local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_248 = FUN_1447210f0();
  puVar13 = (undefined4 *)FUN_140bfa850();
  local_178 = *puVar13;
  local_174 = 0;
  uVar3 = *(undefined1 *)(param_1 + 0x418);
  FUN_1446f470e(&local_180,L"QueryTest",1);
  local_268 = (double *)0x0;
  FUN_144a886e6(local_170,local_180,&local_1e8,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3) & 0xffffffff);
  local_198 = 0;
  uStack_190 = 0;
  iVar17 = *(int *)(param_1 + 0x480);
  if (0 < iVar17) {
    local_250 = param_1 + 0x390;
    iVar14 = *(int *)(param_1 + 0x420);
    lVar16 = 0;
    do {
      local_1a8 = *(double *)(*(longlong *)(param_1 + 0x478) + 0x10 + lVar16 * 0x18);
      puVar13 = (undefined4 *)(*(longlong *)(param_1 + 0x478) + lVar16 * 0x18);
      local_1b8 = *puVar13;
      uStack_1b4 = puVar13[1];
      uStack_1b0 = puVar13[2];
      uStack_1ac = puVar13[3];
      if (0 < iVar14) {
        iVar17 = 0;
        do {
          fVar1 = *(float *)(param_1 + 0x424);
          fVar2 = *(float *)(param_1 + 0x428);
          uVar11 = rand();
          uVar12 = rand();
          fVar19 = (float)(uVar12 & 0x7fff) / 32767.0;
          dVar5 = (double)(fVar19 + fVar19 + -1.0);
          uVar12 = rand();
          fVar19 = (float)(uVar12 & 0x7fff) / 32767.0;
          dVar6 = (double)(fVar19 + fVar19 + -1.0);
          uVar12 = rand();
          fVar19 = (float)(uVar12 & 0x7fff) / 32767.0;
          dVar7 = (double)(fVar19 + fVar19 + -1.0);
          dVar20 = dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6;
          if (9.99999993922529e-09 < dVar20) {
            dVar20 = 1.0 / SQRT(dVar20);
            dVar7 = dVar7 * dVar20;
            dVar6 = dVar6 * dVar20;
            dVar5 = dVar5 * dVar20;
          }
          local_1e8 = &PTR_LAB_14a1e1310;
          local_1e0[0] = 0;
          local_1e0[1] = 0;
          local_1c0 = local_1a8;
          local_1d0 = local_1b8;
          uStack_1cc = uStack_1b4;
          uStack_1c8 = uStack_1b0;
          uStack_1c4 = uStack_1ac;
          FUN_140056680(local_1f8,L"Raycasts");
          lVar15 = local_250;
          FUN_1470fc36a(local_250,local_1f8);
          dVar20 = (double)(((float)(uVar11 & 0x7fff) / 32767.0) * (fVar2 - fVar1) + fVar1);
          local_200 = local_1a8 + dVar5 * dVar20;
          local_208 = (double)CONCAT44(uStack_1ac,uStack_1b0) + dVar6 * dVar20;
          local_210 = (double)CONCAT44(uStack_1b4,local_1b8) + dVar7 * dVar20;
          local_260 = (double *)&DAT_14cad0f68;
          local_268 = (double *)&local_178;
          FUN_1417bb826(local_248,local_1e0,&local_1b8,&local_210);
          FUN_140056680(local_220,L"Raycasts");
          uVar4 = FUN_1470fda82(lVar15,local_220,&local_1e8);
          uVar10 = uStack_190;
          dVar5 = dVar5 * dVar20 + local_1a8;
          dVar9 = (double)CONCAT44(uStack_1ac,uStack_1b0);
          dVar8 = (double)CONCAT44(uStack_1b4,local_1b8);
          lVar15 = (longlong)(int)uStack_190;
          uVar11 = (int)uStack_190 + 1;
          uStack_190 = CONCAT44(uStack_190._4_4_,uVar11);
          if (uStack_190._4_4_ < uVar11) {
            FUN_14710489a(&local_198,uVar10 & 0xffffffff);
          }
          lVar15 = lVar15 * 0x38;
          *(double *)(local_198 + 0x10 + lVar15) = local_1a8;
          puVar13 = (undefined4 *)(local_198 + lVar15);
          *puVar13 = local_1b8;
          puVar13[1] = uStack_1b4;
          puVar13[2] = uStack_1b0;
          puVar13[3] = uStack_1ac;
          *(double *)(local_198 + 0x18 + lVar15) = dVar7 * dVar20 + dVar8;
          *(double *)(local_198 + 0x20 + lVar15) = dVar6 * dVar20 + dVar9;
          *(double *)(local_198 + 0x28 + lVar15) = dVar5;
          *(undefined8 *)(local_198 + 0x30 + lVar15) = uVar4;
          local_1e8 = &PTR_LAB_14a1e1310;
          if (local_1e0[0] != 0) {
            FUN_1400020a8();
          }
          iVar17 = iVar17 + 1;
          iVar14 = *(int *)(param_1 + 0x420);
        } while (iVar17 < iVar14);
        iVar17 = *(int *)(param_1 + 0x480);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar17);
  }
  FUN_140056680(local_238,L"Raycasts");
  local_260 = &local_228;
  local_268 = &local_210;
  FUN_1470fc42a(param_1 + 0x390,local_238,&local_1e8,&local_1b8);
  lVar16 = local_198;
  lVar15 = (longlong)(int)uStack_190;
  if (lVar15 != 0) {
    lVar18 = 0;
    do {
      FUN_145c9fdbc(local_23c,
                    (float)(*(double *)(lVar16 + 0x30 + lVar18) * (-1.0 / local_228) + 1.0));
      lVar18 = lVar18 + 0x38;
    } while (lVar15 * 0x38 - lVar18 != 0);
  }
  *(undefined4 *)(param_1 + 0x3f4) = 5;
  if (local_198 != 0) {
    FUN_1400020a8(local_198);
  }
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470fda82 FUN_1470fda82 body=318 status=ok
// SIG undefined FUN_1470fda82(void)

double FUN_1470fda82(longlong param_1,longlong *param_2,undefined8 param_3)

{
  void *_Src;
  undefined8 *puVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  longlong local_90;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  QueryPerformanceCounter(&local_58);
  dVar2 = (double)local_58.QuadPart * DAT_14c83f420;
  local_68 = (void *)0x0;
  local_60 = (int)param_2[1];
  lVar4 = (longlong)local_60;
  _Src = (void *)*param_2;
  if (lVar4 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar4 * 2);
  }
  lVar4 = FUN_1471046e8(param_1,&local_68,param_3);
  dVar2 = (dVar2 + 16777216.0) - *(double *)(lVar4 + 0x20);
  lVar3 = 1;
  do {
    FUN_147104822(&local_98,param_3);
    puVar1 = *(undefined8 **)(lVar4 + lVar3 * 8);
    (**(code **)*puVar1)(puVar1,dVar2);
    local_98 = &PTR_LAB_14a1e1310;
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fdbc2 FUN_1470fdbc2 body=341 status=ok
// SIG undefined FUN_1470fdbc2(void)

void FUN_1470fdbc2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  FUN_147104380(param_1,&local_54);
  lVar4 = *param_1;
  puVar1 = (undefined1 *)FUN_14001cc68(0x40,0x10);
  FUN_1470fe3a8(puVar1);
  *(undefined1 **)(lVar4 + 0x10 + (longlong)local_54 * 0x20) = puVar1;
  *puVar1 = 0;
  *(int *)(puVar1 + 0x38) = (int)param_1[10];
  iVar3 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(puVar1 + 0x28,*param_2,iVar3);
  lVar4 = 1;
  do {
    puVar2 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
    *puVar2 = &PTR_LAB_14a1e1330;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    puVar2[0xf] = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x84) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar2 + 0x8c) = 0;
    puVar2[0x13] = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    *(undefined8 **)(*(longlong *)(puVar1 + lVar4 * 8) + 0x10) = puVar2;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_147102602(param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470fdd18 FUN_1470fdd18 body=36 status=ok
// SIG undefined FUN_1470fdd18(void)

void FUN_1470fdd18(longlong *param_1)

{
  FUN_1470fcd3e();
                    /* WARNING: Could not recover jumptable at 0x0001470fdd39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x400))(param_1,1);
  return;
}



// FUNCTION 1470fdd3c FUN_1470fdd3c body=1643 status=ok
// SIG undefined FUN_1470fdd3c(void)

undefined8 * FUN_1470fdd3c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  int iVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140002266(&local_58,L"    Settings:\n");
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_3;
  }
  lVar2 = 0;
  while( true ) {
    uVar5 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar6 = (ulonglong)uVar5;
    uVar7 = *(ushort *)((longlong)L"Raycasts" + lVar2);
    if (uVar5 != uVar7) break;
    if (uVar5 == 0) goto LAB_1470fe0f7;
LAB_1470fdddf:
    lVar2 = lVar2 + 2;
  }
  if ((uVar7 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar8 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1470fdddf;
  }
  if (uVar5 != uVar7) {
    lVar2 = 0;
    goto LAB_1470fde18;
  }
LAB_1470fe0f7:
  FUN_140002266(&local_58,L"      Num Raycasts Per Section:%d\n",*(undefined4 *)(param_1 + 0x420));
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"      Raycast Min Length:%f\n",(double)*(float *)(param_1 + 0x424));
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"      Raycast Max Length:%f\n",(double)*(float *)(param_1 + 0x428));
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  goto LAB_1470fe1c7;
LAB_1470fde6a:
  uVar5 = *(ushort *)((longlong)puVar1 + lVar2);
  uVar6 = (ulonglong)uVar5;
  uVar7 = *(ushort *)((longlong)L"Sweeps" + lVar2);
  if (uVar5 == uVar7) {
    if (uVar5 == 0) goto LAB_1470fdeaf;
LAB_1470fde7f:
    lVar2 = lVar2 + 2;
    goto LAB_1470fde6a;
  }
  if ((uVar7 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar8 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1470fde7f;
  }
  if (uVar5 != uVar7) goto LAB_1470fe1c7;
LAB_1470fdeaf:
  FUN_140002266(&local_58,L"      Num Sweeps Per Section:%d\n",*(undefined4 *)(param_1 + 0x42c));
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"      Sweep Min Length:%f\n",(double)*(float *)(param_1 + 0x44c));
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"      Sweep Max Length:%f\n",(double)*(float *)(param_1 + 0x450));
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"      Sweep Min Size:%f\n",(double)*(float *)(param_1 + 0x454));
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"      Sweep Max Size:%f\n",(double)*(float *)(param_1 + 0x458));
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"      Sweep Shapes:\n");
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_1 + 0x440)) {
    lVar2 = 0;
    do {
      switch(*(undefined4 *)(*(longlong *)(param_1 + 0x460) + lVar2 * 4)) {
      case 0:
        pwVar3 = L"        Sphere\n";
        break;
      case 1:
        pwVar3 = L"        Box\n";
        break;
      case 2:
        pwVar3 = L"        Capsule\n";
        break;
      case 3:
        pwVar3 = L"        Convex\n";
        break;
      default:
        goto switchD_1470fe08d_default;
      }
      FUN_140002266(&local_58,pwVar3);
      iVar4 = local_50 + -1;
      if (local_50 == 0) {
        iVar4 = 0;
      }
      thunk_FUN_1400020e8(param_2,local_58,iVar4);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
switchD_1470fe08d_default:
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x440));
  }
  goto LAB_1470fe1c7;
LAB_1470fde18:
  uVar5 = *(ushort *)((longlong)puVar1 + lVar2);
  uVar6 = (ulonglong)uVar5;
  uVar7 = *(ushort *)((longlong)L"Overlaps" + lVar2);
  if (uVar5 == uVar7) {
    if (uVar5 == 0) goto LAB_1470fe1f2;
LAB_1470fde31:
    lVar2 = lVar2 + 2;
    goto LAB_1470fde18;
  }
  if ((uVar7 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar8 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1470fde31;
  }
  if (uVar5 != uVar7) {
    lVar2 = 0;
    goto LAB_1470fde6a;
  }
LAB_1470fe1f2:
  FUN_140002266(&local_58,L"      Num Overlaps Per Section:%d\n",*(undefined4 *)(param_1 + 0x42c));
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"      Overlap Min Size:%f\n",(double)*(float *)(param_1 + 0x430));
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"      Overlap Max Size:%f\n",(double)*(float *)(param_1 + 0x434));
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"      Overlap Shapes:\n");
  iVar4 = local_50 + -1;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_58,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_1 + 0x440)) {
    lVar2 = 0;
    do {
      switch(*(undefined4 *)(*(longlong *)(param_1 + 0x438) + lVar2 * 4)) {
      case 0:
        pwVar3 = L"        Sphere\n";
        break;
      case 1:
        pwVar3 = L"        Box\n";
        break;
      case 2:
        pwVar3 = L"        Capsule\n";
        break;
      case 3:
        pwVar3 = L"        Convex\n";
        break;
      default:
        goto switchD_1470fe33e_default;
      }
      FUN_140002266(&local_58,pwVar3);
      iVar4 = local_50 + -1;
      if (local_50 == 0) {
        iVar4 = 0;
      }
      thunk_FUN_1400020e8(param_2,local_58,iVar4);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
switchD_1470fe33e_default:
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x440));
  }
LAB_1470fe1c7:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470fe3a8 FUN_1470fe3a8 body=136 status=ok
// SIG undefined FUN_1470fe3a8(void)

undefined1 * FUN_1470fe3a8(undefined1 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_LAB_14a1e1348;
  *(undefined8 **)(param_1 + 8) = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_LAB_14a1e1368;
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_LAB_14a1e1378;
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  return param_1;
}



// FUNCTION 1470fe430 FUN_1470fe430 body=2049 status=ok
// SIG undefined FUN_1470fe430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470fe430(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  longlong *plVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  double *pdVar23;
  longlong lVar24;
  float fVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auStack_1d8 [32];
  ulonglong local_1b8;
  undefined1 local_1b0;
  float local_19c;
  double local_198;
  double local_190;
  double local_188;
  longlong *local_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  longlong *local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar22 = param_1[0x94];
  if ((longlong)(int)lVar22 != 0) {
    lVar1 = param_1[0x93];
    lVar24 = 0;
    bVar14 = DAT_14c950c29;
    do {
      plVar21 = *(longlong **)(lVar1 + lVar24);
      if ((plVar21 != (longlong *)0x0 & bVar14) == 1) {
        FUN_1456cec3c(plVar21);
LAB_1470fe4ec:
        (**(code **)(*plVar21 + 0x420))(plVar21,0);
        bVar14 = DAT_14c950c29;
      }
      else if (plVar21 != (longlong *)0x0) goto LAB_1470fe4ec;
      lVar24 = lVar24 + 8;
    } while ((longlong)(int)lVar22 * 8 != lVar24);
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (*(int *)((longlong)param_1 + 0x4a4) != 0) {
    FUN_140ec0d20(param_1 + 0x93,0);
  }
  if ((((char)param_1[0x92] != '\0') || (*(char *)((longlong)param_1 + 0x491) == '\x01')) &&
     (lVar22 = param_1[0x96], local_130 = param_1, (longlong)(int)lVar22 != 0)) {
    lVar1 = param_1[0x95];
    fVar37 = 0.0;
    lVar24 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar24);
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      fVar25 = (float)FUN_142b5bf0e(&local_130,lVar2);
      fVar37 = fVar37 + fVar25;
      lVar24 = lVar24 + 8;
    } while ((longlong)(int)lVar22 * 8 != lVar24);
    if (1e-08 <= fVar37) {
      srand(*(uint *)(param_1 + 0x7f));
      local_1b8 = local_1b8 & 0xffffffffffffff00;
      (**(code **)(*param_1 + 800))(param_1,0,&local_108,&local_128);
      dVar4 = local_f8 + local_118;
      dVar5 = dStack_100 + dStack_120;
      dVar35 = local_108 + local_128;
      dVar6 = local_f8 - local_118;
      dVar11 = dStack_100 - dStack_120;
      dVar10 = local_108 - local_128;
      dVar7 = dVar35 - dVar10;
      dVar8 = dVar5 - dVar11;
      dVar9 = dVar4 - dVar6;
      dVar26 = pow(dVar8 * dVar7 * dVar9,0.3333333333333333);
      auVar12 = _DAT_1499387d0;
      local_19c = (float)dVar26;
      local_188 = (dVar6 + dVar4) * 0.5;
      local_198 = (dVar11 + dVar5) * 0.5;
      local_190 = (dVar10 + dVar35) * 0.5;
      dVar9 = dVar9 * 0.5;
      local_168 = -dVar9;
      uStack_160 = 0x8000000000000000;
      dVar8 = dVar8 * 0.5;
      local_178 = -dVar8;
      uStack_170 = 0x8000000000000000;
      dVar7 = dVar7 * 0.5;
      local_158 = -dVar7;
      uStack_150 = 0x8000000000000000;
      fVar37 = 0.0;
      dVar4 = (double)DAT_1499387d0;
      dVar5 = DAT_1499387d0._8_8_;
      local_180 = param_1 + 0x93;
      do {
        plVar21 = (longlong *)FUN_140995b6b(param_1);
        FUN_14057a3b2(plVar21,0,0,1);
        iVar19 = (int)param_1[0x96];
        if (iVar19 < 1) {
          lVar22 = 0;
        }
        else {
          uVar15 = rand();
          iVar16 = (int)((float)iVar19 * ((float)(uVar15 & 0x7fff) / 32767.0));
          iVar20 = iVar19 + -1;
          if (iVar16 < iVar19 + -1) {
            iVar20 = iVar16;
          }
          lVar22 = (longlong)iVar20;
        }
        uVar3 = *(undefined8 *)(param_1[0x95] + lVar22 * 8);
        (**(code **)(*plVar21 + 0xa78))(plVar21,uVar3);
        FUN_1401a080a(plVar21);
        (**(code **)(*plVar21 + 0x908))(plVar21,(char)param_1[0x8e],0);
        fVar25 = (float)FUN_142b5bf0e(&local_130,uVar3);
        uVar15 = rand();
        uVar17 = rand();
        uVar18 = rand();
        auVar27 = *(undefined1 (*) [16])(plVar21 + 0x36);
        dVar6 = auVar27._0_8_;
        dVar10 = auVar27._8_8_;
        dVar35 = (double)plVar21[0x38];
        pdVar23 = (double *)plVar21[0x46];
        if (pdVar23 == (double *)0x0) {
          pdVar23 = (double *)FUN_14001cc68(0x40,0x10);
          dVar11 = DAT_14c8463d8;
          *pdVar23 = DAT_14c8463d0;
          pdVar23[1] = dVar11;
          dVar11 = DAT_14c8463e8;
          pdVar23[2] = DAT_14c8463e0;
          pdVar23[3] = dVar11;
          dVar11 = DAT_14c846500;
          pdVar23[4] = DAT_14c8464f8;
          pdVar23[5] = dVar11;
          pdVar23[6] = DAT_14c846508;
          plVar21[0x46] = (longlong)pdVar23;
        }
        if (((pdVar23[4] != dVar6) || (NAN(pdVar23[4]) || NAN(dVar6))) ||
           ((pdVar23[5] != dVar10 || (NAN(pdVar23[5]) || NAN(dVar10))))) {
LAB_1470fe8d3:
          auVar33._8_8_ = 0;
          auVar33._0_8_ = dVar35;
          auVar27 = divpd(auVar27,auVar12);
          auVar30 = divpd(auVar33,auVar12);
          auVar27 = roundpd(auVar27,auVar27,3);
          auVar30 = roundpd(auVar30,auVar30,3);
          dVar6 = dVar6 - auVar27._0_8_ * dVar4;
          dVar10 = dVar10 - auVar27._8_8_ * dVar5;
          auVar34._0_8_ = dVar35 - auVar30._0_8_ * dVar4;
          auVar34._8_8_ = 0.0 - auVar30._8_8_ * dVar5;
          auVar32._0_8_ = dVar6 + dVar4;
          auVar32._8_8_ = dVar10 + dVar5;
          auVar36._0_8_ = auVar34._0_8_ + dVar4;
          auVar36._8_8_ = auVar34._8_8_ + dVar5;
          auVar30._8_8_ = -(ulonglong)(0.0 <= dVar10);
          auVar30._0_8_ = -(ulonglong)(0.0 <= dVar6);
          auVar27._8_4_ = SUB84(dVar10,0);
          auVar27._0_8_ = dVar6;
          auVar27._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          auVar27 = blendvpd(auVar32,auVar27,auVar30);
          auVar28._8_8_ = -(ulonglong)(0.0 <= auVar34._8_8_);
          auVar28._0_8_ = -(ulonglong)(0.0 <= auVar34._0_8_);
          auVar30 = blendvpd(auVar36,auVar34,auVar28);
          auVar31._0_8_ = auVar27._0_8_ + -360.0;
          auVar31._8_8_ = auVar27._8_8_ + -360.0;
          auVar29._8_8_ = -(ulonglong)(180.0 < auVar27._8_8_);
          auVar29._0_8_ = -(ulonglong)(180.0 < auVar27._0_8_);
          auVar27 = blendvpd(auVar27,auVar31,auVar29);
          dVar35 = auVar30._0_8_;
          *(undefined1 (*) [16])(pdVar23 + 4) = auVar27;
          pdVar23[6] = (double)(~-(ulonglong)(180.0 < dVar35) & (ulonglong)dVar35 |
                               (ulonglong)(dVar35 + -360.0) & -(ulonglong)(180.0 < dVar35));
          FUN_144a7484c(pdVar23 + 4,&local_128);
          pdVar23[2] = local_118;
          pdVar23[3] = dStack_110;
          *pdVar23 = local_128;
          pdVar23[1] = dStack_120;
        }
        else if ((pdVar23[6] != dVar35) || (NAN(pdVar23[6]) || NAN(dVar35))) goto LAB_1470fe8d3;
        local_f8 = (double)((float)(uVar15 & 0x7fff) / 32767.0) * (dVar9 + dVar9) + local_168 +
                   local_188;
        dStack_100 = (double)((float)(uVar17 & 0x7fff) / 32767.0) * (dVar8 + dVar8) + local_178 +
                     local_198;
        local_108 = (double)((float)(uVar18 & 0x7fff) / 32767.0) * (dVar7 + dVar7) + local_158 +
                    local_190;
        local_128 = *pdVar23;
        dStack_120 = pdVar23[1];
        local_118 = pdVar23[2];
        dStack_110 = pdVar23[3];
        local_1b0 = 0;
        local_1b8 = 0;
        FUN_144927ad4(plVar21,&local_108,&local_128,0);
        uVar15 = rand();
        iVar19 = (int)(((float)(uVar15 & 0x7fff) / 32767.0) * 361.0);
        if (0x167 < iVar19) {
          iVar19 = 0x168;
        }
        uVar15 = rand();
        iVar20 = (int)(((float)(uVar15 & 0x7fff) / 32767.0) * 361.0);
        if (0x167 < iVar20) {
          iVar20 = 0x168;
        }
        uVar15 = rand();
        iVar16 = (int)(((float)(uVar15 & 0x7fff) / 32767.0) * 361.0);
        if (0x167 < iVar16) {
          iVar16 = 0x168;
        }
        local_148 = (double)iVar16;
        local_140 = (double)iVar20;
        local_138 = (double)iVar19;
        FUN_144afe3ce(&local_128,&local_148);
        local_f8 = (double)plVar21[0x35];
        local_108 = (double)plVar21[0x33];
        dStack_100 = (double)plVar21[0x34];
        local_1b0 = 0;
        local_1b8 = 0;
        FUN_144927ad4(plVar21,&local_108,&local_128,0);
        if ((plVar21 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(plVar21);
        }
        plVar13 = local_180;
        lVar22 = param_1[0x94];
        uVar15 = (int)lVar22 + 1;
        *(uint *)(param_1 + 0x94) = uVar15;
        if (*(uint *)((longlong)param_1 + 0x4a4) < uVar15) {
          FUN_140e402be(local_180);
        }
        *(longlong **)(*plVar13 + (longlong)(int)lVar22 * 8) = plVar21;
        if ((plVar21 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(plVar21);
        }
        fVar37 = fVar37 + fVar25;
      } while (fVar37 / local_19c < *(float *)((longlong)param_1 + 0x48c));
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470fec32 FUN_1470fec32 body=526 status=ok
// SIG undefined FUN_1470fec32(void)

double * FUN_1470fec32(double *param_1,double *param_2,double *param_3)

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
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar1 = param_1[8];
  dVar2 = param_1[5];
  dVar3 = param_1[2];
  dVar4 = param_1[7];
  dVar5 = param_1[4];
  dVar6 = *param_1;
  dVar7 = param_1[1];
  dVar8 = param_1[6];
  dVar9 = param_1[3];
  dVar10 = *param_3;
  dVar11 = param_3[1];
  dVar12 = param_3[2];
  *param_2 = dVar3 * dVar12 + dVar6 * dVar10 + dVar7 * dVar11;
  param_2[1] = dVar2 * dVar12 + dVar9 * dVar10 + dVar5 * dVar11;
  param_2[2] = dVar1 * dVar12 + dVar8 * dVar10 + dVar4 * dVar11;
  dVar13 = (param_1[0x12] * dVar11 - dVar10 * param_1[0x13]) + param_3[5];
  dVar14 = (dVar10 * param_1[0x14] - dVar12 * param_1[0x12]) + param_3[4];
  dVar10 = (param_1[0x13] * dVar12 - dVar11 * param_1[0x14]) + param_3[3];
  param_2[3] = dVar13 * dVar3 + dVar10 * dVar6 + dVar14 * dVar7;
  param_2[4] = dVar2 * dVar13 + dVar9 * dVar10 + dVar5 * dVar14;
  param_2[5] = dVar1 * dVar13 + dVar8 * dVar10 + dVar4 * dVar14;
  return param_2;
}



// FUNCTION 1470fee40 FUN_1470fee40 body=1975 status=ok
// SIG undefined FUN_1470fee40(void)

void FUN_1470fee40(longlong param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5,
                  longlong param_6,longlong param_7)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  double *pdVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_1b8 [32];
  int local_198;
  double *local_190;
  longlong local_180;
  longlong local_178;
  ulonglong local_170;
  longlong local_168;
  longlong local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128 [4];
  double local_108;
  double local_100;
  double local_f8 [7];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = param_4;
  local_178 = param_1;
  if (-1 < (int)param_2) {
    uVar8 = (ulonglong)param_2;
    do {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar8 * 8);
      lVar5 = *(longlong *)(lVar7 + 0x2b8);
      cVar3 = FUN_144a7ee82(lVar7);
      if (cVar3 == '\0') {
        local_170 = uVar8;
        local_168 = lVar5;
        if (0 < *(int *)(lVar7 + 0x2d0)) {
          pdVar6 = (double *)(uVar8 * 0x30 + local_180);
          lVar5 = 0;
          do {
            lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x2c8) + lVar5 * 8);
            cVar3 = FUN_144a7ee82(lVar4);
            if ((cVar3 == '\0') && (lVar9 = *(longlong *)(lVar4 + 0x2b8), lVar9 != 0)) {
              local_160 = (longlong)*(int *)(lVar4 + 0x1fc);
              local_f8[4] = 0.0;
              local_f8[5] = 0.0;
              local_f8[2] = 0.0;
              local_f8[3] = 0.0;
              local_f8[0] = 0.0;
              local_f8[1] = 0.0;
              cVar3 = FUN_144a7ee82(lVar7);
              dVar12 = 0.0;
              if (cVar3 == '\0') {
                iVar1 = *(int *)(lVar9 + 0x8b8);
                dVar13 = 0.0;
                dVar14 = 0.0;
                dVar15 = 0.0;
                dVar16 = 0.0;
                dVar17 = 0.0;
                if (0 < (longlong)iVar1) {
                  local_190 = local_128;
                  local_198 = iVar1;
                  FUN_144b0d3c2(param_3 + (longlong)
                                          **(int **)(param_6 + (longlong)*(int *)(lVar4 + 0x1fc) * 8
                                                    ) * 8,iVar1,1,lVar9 + 0xab0);
                  lVar4 = 0;
                  do {
                    dVar12 = local_f8[lVar4];
                    lVar10 = 0;
                    do {
                      dVar12 = dVar12 + local_128[lVar10] *
                                        *(double *)
                                         (lVar9 + 0xbd0 + lVar4 * 8 +
                                         (longlong)*(int *)(lVar9 + 0x5d0 + lVar10 * 4) * 0x30);
                      lVar10 = lVar10 + 1;
                    } while (iVar1 != lVar10);
                    local_f8[lVar4] = dVar12;
                    lVar4 = lVar4 + 1;
                    dVar12 = local_f8[0];
                    dVar13 = local_f8[2];
                    dVar14 = local_f8[3];
                    dVar15 = local_f8[4];
                    dVar16 = local_f8[5];
                    dVar17 = local_f8[1];
                  } while (lVar4 != 6);
                }
              }
              else {
                dVar13 = 0.0;
                dVar14 = 0.0;
                dVar15 = 0.0;
                dVar16 = 0.0;
                dVar17 = 0.0;
              }
              lVar4 = local_160 * 0x30;
              local_130 = dVar16 + *(double *)(local_180 + 0x28 + lVar4);
              local_138 = dVar15 + *(double *)(local_180 + 0x20 + lVar4);
              local_140 = dVar14 + *(double *)(local_180 + 0x18 + lVar4);
              local_148 = dVar13 + *(double *)(local_180 + 0x10 + lVar4);
              local_150 = dVar17 + *(double *)(local_180 + 8 + lVar4);
              local_158 = dVar12 + *(double *)(local_180 + lVar4);
              FUN_1470fec32(lVar9 + 0x8c0,local_128,&local_158);
              *pdVar6 = local_128[0] + *pdVar6;
              pdVar6[1] = local_128[1] + pdVar6[1];
              pdVar6[2] = local_128[2] + pdVar6[2];
              pdVar6[3] = local_128[3] + pdVar6[3];
              pdVar6[4] = local_108 + pdVar6[4];
              pdVar6[5] = local_100 + pdVar6[5];
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 < *(int *)(lVar7 + 0x2d0));
        }
        lVar5 = local_168;
        uVar8 = local_170;
        param_1 = local_178;
        if (((local_168 != 0) && (cVar3 = FUN_144a7ee82(lVar7), cVar3 == '\0')) &&
           (0 < *(int *)(lVar5 + 0x8b8))) {
          pdVar6 = (double *)(uVar8 * 0x30 + local_180);
          lVar7 = 0;
          do {
            lVar4 = (longlong)*(int *)(lVar5 + 0x5d0 + lVar7 * 4) * 0x30;
            lVar9 = (longlong)*(int *)(*(longlong *)(param_6 + uVar8 * 8) + lVar7 * 4);
            *(double *)(param_3 + lVar9 * 8) =
                 *(double *)(param_3 + lVar9 * 8) -
                 (*(double *)(lVar5 + 0x4c0 + lVar4) * pdVar6[5] +
                  *(double *)(lVar5 + 0x4b0 + lVar4) * pdVar6[3] +
                  *(double *)(lVar5 + 0x4b8 + lVar4) * pdVar6[4] +
                 *(double *)(lVar5 + 0x4d8 + lVar4) * pdVar6[2] +
                 *(double *)(lVar5 + 0x4c8 + lVar4) * *pdVar6 +
                 *(double *)(lVar5 + 0x4d0 + lVar4) * pdVar6[1]);
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(lVar5 + 0x8b8));
        }
      }
      bVar2 = 0 < (longlong)uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar2);
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar7 * 8);
      cVar3 = FUN_144a7ee82(lVar5);
      if (cVar3 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x2b8);
        if (lVar4 == 0) {
          lVar4 = lVar7 * 0x30;
          FUN_147121f1e(lVar5 + 0x4e0,local_f8,local_180 + lVar4);
          *(double *)(param_7 + lVar4) = -local_f8[0];
          ((double *)(param_7 + lVar4))[1] = -local_f8[1];
          pdVar6 = (double *)(param_7 + 0x10 + lVar4);
          *pdVar6 = -local_f8[2];
          pdVar6[1] = -local_f8[3];
          pdVar6 = (double *)(param_7 + 0x20 + lVar4);
          *pdVar6 = -local_f8[4];
          pdVar6[1] = -local_f8[5];
          param_1 = local_178;
        }
        else {
          FUN_144b08e10(lVar4 + 0x8c0,local_f8);
          lVar5 = lVar7 * 0x30;
          pdVar6 = (double *)(param_7 + 0x20 + lVar5);
          *pdVar6 = local_f8[4];
          pdVar6[1] = local_f8[5];
          pdVar6 = (double *)(param_7 + 0x10 + lVar5);
          *pdVar6 = local_f8[2];
          pdVar6[1] = local_f8[3];
          *(double *)(param_7 + lVar5) = local_f8[0];
          ((double *)(param_7 + lVar5))[1] = local_f8[1];
          uVar8 = (ulonglong)*(uint *)(lVar4 + 0x8b8);
          param_1 = local_178;
          if (0 < (int)*(uint *)(lVar4 + 0x8b8)) {
            pdVar6 = (double *)(lVar5 + param_7);
            lVar5 = 0;
            do {
              lVar9 = (longlong)*(int *)(*(longlong *)(param_6 + lVar7 * 8) + lVar5 * 4);
              dVar12 = *(double *)(param_5 + lVar9 * 8);
              if (0 < (int)uVar8) {
                lVar10 = 0;
                do {
                  lVar11 = (longlong)*(int *)(lVar4 + 0x5d0 + lVar10 * 4) * 0x30;
                  dVar12 = dVar12 + (*(double *)
                                      (param_3 +
                                      (longlong)
                                      *(int *)(*(longlong *)(param_6 + lVar7 * 8) + lVar10 * 4) * 8)
                                    - (*(double *)(lVar4 + 0xbe0 + lVar11) * local_f8[5] +
                                       *(double *)(lVar4 + 0xbd0 + lVar11) * local_f8[3] +
                                       *(double *)(lVar4 + 0xbd8 + lVar11) * local_f8[4] +
                                      *(double *)(lVar4 + 0xbf8 + lVar11) * local_f8[2] +
                                      *(double *)(lVar4 + 0xbe8 + lVar11) * local_f8[0] +
                                      *(double *)(lVar4 + 0xbf0 + lVar11) * local_f8[1])) *
                                    *(double *)
                                     (lVar4 + 0xab0 +
                                     (longlong)((int)uVar8 * (int)lVar5 + (int)lVar10) * 8);
                  *(double *)(param_5 + lVar9 * 8) = dVar12;
                  lVar10 = lVar10 + 1;
                  uVar8 = (ulonglong)*(int *)(lVar4 + 0x8b8);
                } while (lVar10 < (longlong)uVar8);
              }
              lVar9 = (longlong)*(int *)(lVar4 + 0x5d0 + lVar5 * 4) * 0x30;
              dVar13 = *(double *)(lVar4 + 0x4d8 + lVar9);
              dVar14 = *(double *)(lVar4 + 0x4d0 + lVar9);
              dVar15 = *(double *)(lVar4 + 0x4c8 + lVar9);
              dVar16 = *(double *)(lVar4 + 0x4c0 + lVar9);
              dVar17 = *(double *)(lVar4 + 0x4b8 + lVar9);
              *pdVar6 = dVar12 * *(double *)(lVar4 + 0x4b0 + lVar9) + *pdVar6;
              pdVar6[1] = dVar17 * dVar12 + pdVar6[1];
              pdVar6[2] = dVar16 * dVar12 + pdVar6[2];
              pdVar6[3] = dVar15 * dVar12 + pdVar6[3];
              pdVar6[4] = dVar14 * dVar12 + pdVar6[4];
              pdVar6[5] = dVar13 * dVar12 + pdVar6[5];
              lVar5 = lVar5 + 1;
              uVar8 = (ulonglong)*(int *)(lVar4 + 0x8b8);
            } while (lVar5 < (longlong)uVar8);
          }
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x10));
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470ff5f8 FUN_1470ff5f8 body=1989 status=ok
// SIG undefined FUN_1470ff5f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470ff5f8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar3;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
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
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  double *pdVar29;
  double *pdVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auStack_308 [32];
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168 [4];
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_e0;
  double dVar2;
  double dVar4;
  
  auVar44 = _DAT_149934d80;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  local_2c8 = ZEXT816(0);
  auVar34 = *(undefined1 (*) [16])(param_1 + 0x170);
  dVar7 = auVar34._0_8_;
  dVar11 = auVar34._8_8_;
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x180);
  dVar8 = auVar5._0_8_;
  auVar35 = *(undefined1 (*) [16])(param_1 + 0x1d0);
  dVar9 = auVar35._0_8_;
  dVar12 = auVar35._8_8_;
  auVar6 = *(undefined1 (*) [16])(param_1 + 0x1e0);
  dVar10 = auVar6._0_8_;
  auVar34 = minpd(auVar35,auVar34);
  auVar39 = minpd(auVar6,auVar5);
  auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  iVar26 = movmskpd((int)local_e0,auVar35);
  auVar34._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
  auVar34._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
  uVar28 = movmskpd((int)param_2,auVar34);
  if ((uVar28 & 0x3fffffff) == 0 && iVar26 == 0) {
    dVar18 = *(double *)(param_1 + 0x130);
    dVar19 = *(double *)(param_1 + 0x138);
    dVar20 = *(double *)(param_1 + 0x140);
    dVar21 = *(double *)(param_1 + 0x148);
    dVar22 = *(double *)(param_1 + 400);
    dVar23 = *(double *)(param_1 + 0x198);
    dVar24 = *(double *)(param_1 + 0x1a0);
    dVar25 = *(double *)(param_1 + 0x1a8);
    dVar38 = *(double *)(param_1 + 0x148);
    dVar33 = *(double *)(param_1 + 0x148);
    dVar1 = *(double *)(param_1 + 0x130);
    dVar2 = *(double *)(param_1 + 0x130);
    dVar3 = *(double *)(param_1 + 0x138);
    dVar4 = *(double *)(param_1 + 0x138);
    dVar40 = *(double *)(param_1 + 0x140);
    dVar37 = *(double *)(param_1 + 0x140);
    local_2e8 = dVar23 * dVar40 * -1.0 + dVar24 * dVar3 + dVar25 * dVar1 * 1.0 + dVar22 * dVar38;
    dStack_2e0 = dVar22 * dVar37 * 1.0 + dVar25 * dVar4 + dVar24 * dVar2 * -1.0 + dVar23 * dVar33;
    dVar13 = *(double *)(param_1 + 0x1b0) * dVar7;
    dVar14 = *(double *)(param_1 + 0x1b8) * dVar11;
    dVar15 = *(double *)(param_1 + 0x1c0) * dVar8;
    dVar16 = *(double *)(param_1 + 0x1c8) * auVar5._8_8_;
    dVar41 = dVar14 * dVar18 - dVar19 * dVar13;
    dVar42 = dVar15 * dVar19 - dVar20 * dVar14;
    dVar43 = dVar13 * dVar20 - dVar18 * dVar15;
    dVar17 = dVar16 * dVar21 - dVar21 * dVar16;
    dVar42 = dVar42 + dVar42;
    dVar43 = dVar43 + dVar43;
    dVar41 = dVar41 + dVar41;
    dVar17 = dVar17 + dVar17;
    dVar14 = (dVar42 * dVar20 - dVar41 * dVar18) + dVar33 * dVar43 + dVar14 +
             *(double *)(param_1 + 0x158);
    local_2b8 = (dVar43 * dVar18 - dVar19 * dVar42) + dVar38 * dVar41 + dVar15 +
                *(double *)(param_1 + 0x160);
    dStack_2b0 = (dVar17 * dVar21 - dVar17 * dVar21) + dVar33 * dVar17 + dVar16 +
                 *(double *)(param_1 + 0x168);
    local_2d8._8_8_ =
         dVar24 * dVar37 * -1.0 + ((dVar2 * dVar22 * -1.0 + dVar25 * dVar33) - dVar23 * dVar4);
    local_2d8._0_8_ =
         dVar25 * dVar40 * 1.0 + ((dVar1 * dVar23 * 1.0 + dVar24 * dVar38) - dVar22 * dVar3);
    local_2c8._8_4_ = SUB84(dVar14,0);
    local_2c8._0_8_ =
         (dVar41 * dVar19 - dVar20 * dVar43) + dVar38 * dVar42 + dVar13 +
         *(double *)(param_1 + 0x150);
    local_2c8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  }
  else {
    dVar3 = *(double *)(param_1 + 0x130);
    dVar4 = *(double *)(param_1 + 0x138);
    dVar40 = *(double *)(param_1 + 0x140);
    dVar37 = dVar4 + dVar4;
    dVar41 = dVar40 + dVar40;
    dVar38 = dVar3 * (dVar3 + dVar3);
    local_198 = (1.0 - (dVar38 + dVar4 * dVar37)) * dVar8;
    dVar2 = *(double *)(param_1 + 0x130) * dVar41;
    dVar33 = *(double *)(param_1 + 0x148);
    dVar42 = dVar41 * dVar33;
    dVar43 = (dVar3 + dVar3) * *(double *)(param_1 + 0x148);
    dVar33 = dVar37 * dVar33;
    local_1a8 = (dVar33 + dVar2) * dVar8;
    dVar38 = (DAT_149934d80._8_8_ - (dVar40 * dVar41 + dVar38)) * dVar11;
    dVar1 = (dVar37 * dVar3 + dVar42) * dVar7;
    local_1b8 = (dVar41 * dVar4 + dVar43) * dVar11;
    dStack_1a0 = (dVar41 * dVar4 - dVar43) * dVar8;
    local_1d8 = (dVar2 - dVar33) * dVar7;
    local_1e8._8_4_ = SUB84(dVar1,0);
    local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar40 * dVar41 + dVar4 * dVar37)) * dVar7;
    local_1e8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    uStack_1d0 = 0;
    local_1c8._8_4_ = SUB84(dVar38,0);
    local_1c8._0_8_ = (dVar37 * dVar3 - dVar42) * dVar11;
    local_1c8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = *(undefined8 *)(param_1 + 0x150);
    uStack_180 = *(undefined8 *)(param_1 + 0x158);
    local_178 = *(undefined8 *)(param_1 + 0x160);
    uStack_170 = 0x3ff0000000000000;
    dVar2 = *(double *)(param_1 + 400);
    dVar3 = *(double *)(param_1 + 0x198);
    dVar4 = *(double *)(param_1 + 0x1a0);
    dVar40 = dVar3 + dVar3;
    dVar37 = dVar4 + dVar4;
    dVar38 = dVar2 * (dVar2 + dVar2);
    local_218 = (1.0 - (dVar38 + dVar3 * dVar40)) * dVar10;
    dVar1 = *(double *)(param_1 + 400) * dVar37;
    dVar33 = *(double *)(param_1 + 0x1a8);
    dVar41 = dVar37 * dVar33;
    dVar42 = (dVar2 + dVar2) * *(double *)(param_1 + 0x1a8);
    dVar33 = dVar40 * dVar33;
    local_228 = (dVar33 + dVar1) * dVar10;
    dStack_220 = (dVar37 * dVar3 - dVar42) * dVar10;
    local_268 = ((double)DAT_149934d80 - (dVar4 * dVar37 + dVar3 * dVar40)) * dVar9;
    dVar38 = (DAT_149934d80._8_8_ - (dVar4 * dVar37 + dVar38)) * dVar12;
    dStack_260 = (dVar40 * dVar2 + dVar41) * dVar9;
    local_238 = (dVar37 * dVar3 + dVar42) * dVar12;
    local_258 = (dVar1 - dVar33) * dVar9;
    uStack_250 = 0;
    local_248._8_4_ = SUB84(dVar38,0);
    local_248._0_8_ = (dVar40 * dVar2 - dVar41) * dVar12;
    local_248._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_230 = 0;
    uStack_210 = 0;
    local_208 = *(undefined8 *)(param_1 + 0x1b0);
    uStack_200 = *(undefined8 *)(param_1 + 0x1b8);
    local_1f8 = *(undefined8 *)(param_1 + 0x1c0);
    uStack_1f0 = 0x3ff0000000000000;
    FUN_1447fea8d(local_168);
    FUN_144a1c686(local_168,0x3e45798ee0000000);
    auVar39._8_8_ = -(ulonglong)(0.0 <= dVar11 * dVar12);
    auVar39._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar9);
    auVar34 = blendvpd(_DAT_149936790,auVar44,auVar39);
    uVar31 = -(ulonglong)(0.0 <= dVar8 * dVar10);
    dVar33 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
    dVar38 = auVar34._0_8_;
    local_168[2] = local_168[2] * dVar38;
    local_168[1] = local_168[1] * dVar38;
    local_168[0] = local_168[0] * dVar38;
    dVar38 = auVar34._8_8_;
    local_138 = local_138 * dVar38;
    local_140 = local_140 * dVar38;
    local_148 = dVar38 * local_148;
    local_118 = local_118 * dVar33;
    local_120 = local_120 * dVar33;
    local_128 = dVar33 * local_128;
    FUN_14481fd10(&local_288,local_168);
    dVar33 = local_278 * local_278 + local_288 * local_288;
    dVar38 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
    auVar36._0_8_ = dVar33 + dVar38;
    auVar36._8_8_ = dVar33 + dVar38;
    auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
    auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
    auVar34 = sqrtpd(auVar36,auVar36);
    auVar34 = divpd(auVar44,auVar34);
    auVar44._0_8_ = auVar34._0_8_ * local_278;
    auVar44._8_8_ = auVar34._8_8_ * dStack_270;
    local_2e8 = (double)((ulonglong)(local_288 * auVar34._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
    dStack_2e0 = (double)((ulonglong)(dStack_280 * auVar34._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
    local_2d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar44,auVar32);
    local_2c8._8_8_ = uStack_100;
    local_2c8._0_8_ = local_108;
    local_2b8 = local_f8;
    dStack_2b0 = 0.0;
  }
  dVar33 = auVar6._8_8_ * auVar5._8_8_;
  local_2a8._8_4_ = SUB84(dVar12 * dVar11,0);
  local_2a8._0_8_ = dVar9 * dVar7;
  local_2a8._12_4_ = (int)((ulonglong)(dVar12 * dVar11) >> 0x20);
  local_298._8_4_ = SUB84(dVar33,0);
  local_298._0_8_ = dVar10 * dVar8;
  local_298._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  FUN_147102246(&local_2e8,param_2,param_3);
  FUN_144a2c3ca(param_1 + 400,local_168,&local_2e8);
  pdVar29 = local_168;
  pdVar30 = (double *)(param_1 + 0x130);
  for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
    *pdVar30 = *pdVar29;
    pdVar29 = pdVar29 + 1;
    pdVar30 = pdVar30 + 1;
  }
  if ((local_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ffdbe FUN_1470ffdbe body=1020 status=ok
// SIG undefined FUN_1470ffdbe(void)

undefined8
FUN_1470ffdbe(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4,char param_5)

{
  double dVar1;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined8 *local_320;
  undefined4 local_318;
  undefined4 local_304;
  undefined8 local_300;
  undefined8 local_2f8 [12];
  undefined8 local_298 [12];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_348;
  dVar1 = *(double *)(*param_1 + 0x50);
  lVar8 = (longlong)param_4;
  iVar3 = *(int *)(param_3 + 0xf30 + lVar8 * 4);
  uVar5 = (undefined4)CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
  if (ABS(*(double *)(param_3 + 0x770)) + ABS(*(double *)(param_3 + 0x768)) <= 9.99999993922529e-09)
  {
    if (iVar3 != 2) {
LAB_1471001ad:
      uVar6 = 0;
      goto LAB_14710007e;
    }
  }
  else if (iVar3 != 2) {
    if (param_4 == -1) {
      bVar4 = true;
    }
    else {
      if (*(double *)(param_3 + 0x780 + lVar8 * 8) <= 9.99999993922529e-09) goto LAB_1471001ad;
      bVar4 = 9.99999993922529e-09 < *(double *)(param_3 + 0x7b0 + lVar8 * 8);
    }
    uVar6 = 0;
    uVar5 = 0;
    if ((!bVar4) || (param_5 == '\0')) goto LAB_14710007e;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  local_300 = *(undefined8 *)(param_3 + 0x20);
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0x3ff00000;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_194 = 0x3ff00000;
  uStack_190 = 0;
  uStack_18c = 0x3ff00000;
  local_188 = 0x3ff0000000000000;
  uStack_180 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21c = 0x3ff00000;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f4 = 0x3ff00000;
  uStack_1f0 = 0;
  uStack_1ec = 0x3ff00000;
  local_1e8 = 0x3ff0000000000000;
  uStack_1e0 = 0;
  local_304 = uVar5;
  FUN_14481bfee(param_3,&local_1d8,&local_238,param_4 != 0);
  FUN_14481f014(&local_148,uVar6,(int)*(undefined8 *)(param_3 + 0x7e0),0);
  memcpy(param_2,&local_148,0xd0);
  FUN_14481f014(&local_148,local_300,(int)*(undefined8 *)(param_3 + 0x7e8),0);
  memcpy(param_2 + 0x1a,&local_148,0xd0);
  local_320 = param_2 + 0x34;
  local_138 = CONCAT44(uStack_1c4,local_1c8);
  uStack_130 = CONCAT44(uStack_1bc,uStack_1c0);
  local_148 = local_1d8;
  uStack_140 = uStack_1d0;
  local_128 = local_238;
  uStack_120 = uStack_230;
  local_118 = local_228;
  uStack_114 = uStack_224;
  uStack_110 = uStack_220;
  uStack_10c = uStack_21c;
  local_178 = (undefined4)local_1b8;
  uStack_174 = local_1b8._4_4_;
  uStack_170 = (undefined4)uStack_1b0;
  uStack_16c = uStack_1b0._4_4_;
  local_168 = local_1a8;
  local_160 = (undefined4)local_218;
  uStack_15c = local_218._4_4_;
  uStack_158 = (undefined4)uStack_210;
  uStack_154 = uStack_210._4_4_;
  local_150 = local_208;
  puVar9 = param_2 + 0x1a;
  puVar10 = local_298;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = param_2;
  puVar10 = local_2f8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_318 = 0;
  local_328 = &local_148;
  FUN_14481ffa2(param_4);
  FUN_14491be5a(param_2);
  if ((ABS(*(double *)(param_3 + 0x770)) + ABS(*(double *)(param_3 + 0x768)) <= 9.99999993922529e-09
      ) || ((param_4 != -1 &&
            (((*(int *)(param_3 + 0xf30 + lVar8 * 4) == 2 ||
              (*(double *)(param_3 + 0x780 + lVar8 * 8) <= 9.99999993922529e-09)) ||
             (*(double *)(param_3 + 0x7b0 + lVar8 * 8) <= 9.99999993922529e-09)))))) {
    if ((char)local_304 != '\0') {
      param_2[0x53] = 0;
      param_2[0x4f] = 0x47efffffe0000000;
      param_2[0x50] = 0xc7efffffe0000000;
      dVar1 = 0.0;
      goto LAB_147100066;
    }
  }
  else {
    param_2[0x53] = 0;
    uVar2 = *(ulonglong *)(param_3 + 0x888 + lVar8 * 8);
    param_2[0x4f] = uVar2;
    param_2[0x50] = uVar2 ^ 0x8000000000000000;
    dVar1 = (1.0 / dVar1) *
            (*(double *)(param_3 + 0x738 + lVar8 * 8) - *(double *)(param_3 + 0x6d8 + lVar8 * 8)) *
            *(double *)(param_3 + 0x768) +
            *(double *)(param_3 + 0x708 + lVar8 * 8) * *(double *)(param_3 + 0x770);
LAB_147100066:
    param_2[0x4c] = dVar1;
  }
  param_2[0x4e] = 0;
  uVar6 = 1;
LAB_14710007e:
  if ((local_70 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1471001bc FUN_1471001bc body=263 status=ok
// SIG undefined FUN_1471001bc(void)

void FUN_1471001bc(longlong param_1,int param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                  double *param_6,double *param_7,double *param_8,double *param_9)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = ABS(*(double *)(param_1 + 0x770)) + ABS(*(double *)(param_1 + 0x768));
  *param_3 = 9.99999993922529e-09 < dVar4;
  lVar2 = (longlong)param_2;
  dVar1 = *(double *)(param_1 + 0xed0 + lVar2 * 8);
  dVar3 = dVar1;
  if ((9.99999993922529e-09 < dVar4) &&
     (dVar3 = *(double *)(param_1 + 0x738 + lVar2 * 8), dVar1 <= dVar3)) {
    dVar3 = dVar1;
  }
  *param_7 = dVar3;
  dVar1 = *(double *)(param_1 + 0xf00 + lVar2 * 8);
  dVar3 = dVar1;
  if ((*param_3 == '\x01') && (dVar3 = *(double *)(param_1 + 0x738 + lVar2 * 8), dVar3 <= dVar1)) {
    dVar3 = dVar1;
  }
  *param_8 = dVar3;
  dVar1 = *(double *)(param_1 + 0x6d8 + lVar2 * 8);
  *param_6 = dVar1;
  dVar1 = (double)(-(ulonglong)(dVar1 < *param_7) & 0xbff0000000000000 |
                  ~-(ulonglong)(dVar1 < *param_7) &
                  -(ulonglong)(*param_8 < dVar1) & 0x3ff0000000000000);
  *param_9 = dVar1;
  *(bool *)param_4 = dVar1 != 0.0 && *(int *)(param_1 + 0xf30 + lVar2 * 4) == 1;
  *(bool *)param_5 = *(int *)(param_1 + 0xf30 + lVar2 * 4) == 2;
  return;
}



// FUNCTION 1471002c4 FUN_1471002c4 body=1000 status=ok
// SIG undefined FUN_1471002c4(void)

undefined8 FUN_1471002c4(undefined8 *param_1,longlong param_2,int param_3)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  undefined8 *local_300;
  int local_2f8;
  undefined8 local_2e8 [12];
  undefined8 local_288 [12];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar9 = (longlong)param_3;
  dVar18 = *(double *)(param_2 + 0xed0 + lVar9 * 8);
  uVar17 = (undefined4)((ulonglong)dVar18 >> 0x20);
  if (ABS(*(double *)(param_2 + 0x770)) + ABS(*(double *)(param_2 + 0x768)) <= 9.99999993922529e-09)
  {
    uVar8 = *(undefined8 *)(param_2 + 0xf00 + lVar9 * 8);
    uVar15 = (undefined4)uVar8;
    uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar13 = SUB84(dVar18,0);
    uVar14 = uVar17;
  }
  else {
    dVar1 = *(double *)(param_2 + 0x738 + lVar9 * 8);
    uVar15 = SUB84(dVar1,0);
    uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
    uVar13 = uVar15;
    uVar14 = uVar16;
    if (dVar18 <= dVar1) {
      uVar13 = SUB84(dVar18,0);
      uVar14 = uVar17;
    }
    dVar18 = *(double *)(param_2 + 0xf00 + lVar9 * 8);
    if (dVar1 <= dVar18) {
      uVar15 = SUB84(dVar18,0);
      uVar16 = (undefined4)((ulonglong)dVar18 >> 0x20);
    }
  }
  iVar2 = *(int *)(param_2 + 0xf30 + lVar9 * 4);
  if (iVar2 == 1) {
    dVar18 = *(double *)(param_2 + 0x6d8 + lVar9 * 8);
    uVar12 = -(ulonglong)(dVar18 < (double)CONCAT44(uVar14,uVar13));
    dVar18 = (double)((uVar12 >> 0x20 & 0xbff00000 |
                      (ulonglong)
                      (~(uint)(uVar12 >> 0x20) &
                      (uint)(-(ulonglong)((double)CONCAT44(uVar16,uVar15) < dVar18) >> 0x20) &
                      0x3ff00000)) << 0x20);
    if ((dVar18 != 0.0) || (NAN(dVar18))) {
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0x3ff00000;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_184 = 0x3ff00000;
      uStack_180 = 0;
      uStack_17c = 0x3ff00000;
      local_178 = 0x3ff0000000000000;
      uStack_170 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_214 = 0;
      uStack_210 = 0;
      uStack_20c = 0x3ff00000;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e4 = 0x3ff00000;
      uStack_1e0 = 0;
      uStack_1dc = 0x3ff00000;
      local_1d8 = 0x3ff0000000000000;
      uStack_1d0 = 0;
      FUN_14481bfee(param_2,&local_1c8,&local_228,param_3 != 0);
      FUN_14481f014(&local_138,uVar8,(int)*(undefined8 *)(param_2 + 0x7e0),0);
      memcpy(param_1,&local_138,0xd0);
      FUN_14481f014(&local_138,uVar3,(int)*(undefined8 *)(param_2 + 0x7e8),0);
      memcpy(param_1 + 0x1a,&local_138,0xd0);
      local_2f8 = (int)dVar18;
      local_300 = param_1 + 0x34;
      local_128 = CONCAT44(uStack_1b4,local_1b8);
      uStack_120 = CONCAT44(uStack_1ac,uStack_1b0);
      local_138 = local_1c8;
      uStack_130 = uStack_1c0;
      local_118 = local_228;
      uStack_110 = uStack_220;
      local_108 = local_218;
      uStack_104 = uStack_214;
      uStack_100 = uStack_210;
      uStack_fc = uStack_20c;
      local_168 = (undefined4)local_1a8;
      uStack_164 = local_1a8._4_4_;
      uStack_160 = (undefined4)uStack_1a0;
      uStack_15c = uStack_1a0._4_4_;
      local_158 = local_198;
      local_150 = (undefined4)local_208;
      uStack_14c = local_208._4_4_;
      uStack_148 = (undefined4)uStack_200;
      uStack_144 = uStack_200._4_4_;
      local_140 = local_1f8;
      puVar10 = param_1 + 0x1a;
      puVar11 = local_288;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar10 = param_1;
      puVar11 = local_2e8;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      local_308 = &local_138;
      FUN_14481ffa2(param_3);
      FUN_14491be5a();
      param_1[0x53] = 0;
      param_1[0x4f] = 0x47efffffe0000000;
      param_1[0x50] = 0;
      param_1[0x4e] = 0;
      pdVar4 = (double *)param_1[0xc];
      pdVar5 = (double *)param_1[0xd];
      pdVar6 = (double *)param_1[0x26];
      pdVar7 = (double *)param_1[0x27];
      param_1[0x4c] =
           ((double)param_1[0x3f] * pdVar7[2] +
            (double)param_1[0x3d] * *pdVar7 + (double)param_1[0x3e] * pdVar7[1] +
           (double)param_1[0x3c] * pdVar6[2] +
           (double)param_1[0x3a] * *pdVar6 + (double)param_1[0x3b] * pdVar6[1] +
           (double)param_1[0x39] * pdVar5[2] +
           (double)param_1[0x37] * *pdVar5 + (double)param_1[0x38] * pdVar5[1] +
           (double)param_1[0x36] * pdVar4[2] +
           (double)param_1[0x34] * *pdVar4 + (double)param_1[0x35] * pdVar4[1]) *
           *(double *)(param_2 + 0xf50);
      uVar8 = 1;
      goto LAB_1471003a9;
    }
  }
  uVar8 = 0;
  if (iVar2 == 1) {
    *(undefined8 *)(param_2 + 0x830 + lVar9 * 0x10) = 0;
  }
LAB_1471003a9:
  if ((local_60 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1471006ae FUN_1471006ae body=491 status=ok
// SIG undefined FUN_1471006ae(void)

int FUN_1471006ae(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  byte local_a9;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [13];
  char local_73;
  byte local_72;
  undefined1 local_71;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar5 = 0;
  local_a9 = param_2;
  if (*(char *)(param_1 + 0x151) == '\0') {
    iVar5 = 0;
    if (*(int *)(param_1 + 0x10) < 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = **(longlong **)(param_1 + 8);
    }
    if ((*(char *)(lVar4 + 0x270) == '\0') && (0 < *(int *)(param_1 + 0x20))) {
      lVar4 = 0;
      local_a9 = param_2 ^ 1;
      iVar5 = 0;
      local_a8 = param_1;
      do {
        lVar1 = *(longlong *)(*(longlong *)(local_a8 + 0x18) + lVar4 * 8);
        uVar2 = *(undefined8 *)(lVar1 + 0x20);
        local_a0 = lVar4;
        cVar3 = FUN_144a7ee82(*(undefined8 *)(lVar1 + 0x18));
        if ((cVar3 == '\0') || (cVar3 = FUN_144a7ee82(uVar2), cVar3 == '\0')) {
          uVar6 = 0;
          do {
            local_b8 = local_98;
            local_c0 = local_90;
            local_d8 = &local_73;
            local_d0 = local_80;
            local_c8 = local_88;
            FUN_1471001bc(lVar1,uVar6 & 0xffffffff,&local_71,&local_72);
            if ((local_73 != '\0') ||
               ((((9.99999993922529e-09 <
                   ABS(*(double *)(lVar1 + 0x770)) + ABS(*(double *)(lVar1 + 0x768)) &&
                  (*(int *)(lVar1 + 0xf30 + uVar6 * 4) != 2)) &&
                 (9.99999993922529e-09 < *(double *)(lVar1 + 0x780 + uVar6 * 8))) &&
                (9.99999993922529e-09 < *(double *)(lVar1 + 0x7b0 + uVar6 * 8) && local_a9 == 0))))
            {
              iVar5 = iVar5 + 1;
            }
            iVar5 = iVar5 + (uint)local_72;
            uVar6 = uVar6 + 1;
          } while (uVar6 != 6);
        }
        lVar4 = local_a0 + 1;
      } while (lVar4 < *(int *)(local_a8 + 0x20));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 14710089a FUN_14710089a body=194 status=ok
// SIG undefined FUN_14710089a(void)

undefined4 FUN_14710089a(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  longlong lVar3;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined4 *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = 0;
  if (*(char *)(param_1 + 0x151) == '\0') {
    if (*(int *)(param_1 + 0x10) < 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = **(longlong **)(param_1 + 8);
    }
    uVar1 = 0;
    if (*(char *)(lVar3 + 0x270) == '\0') {
      local_30 = &local_5c;
      local_5c = 0;
      local_48 = (undefined ***)0x0;
      local_38 = &PTR_LAB_14a1e16b0;
      local_58[0] = FUN_142b5edb6;
      FUN_144aa8fe6(param_2,local_58);
      uVar1 = local_5c;
      if (local_58[0] != (code *)0x0) {
        pppuVar2 = local_48;
        if (local_48 == (undefined ***)0x0) {
          pppuVar2 = &local_38;
        }
        (*(code *)(*pppuVar2)[2])();
        uVar1 = local_5c;
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14710095e FUN_14710095e body=1159 status=ok
// SIG undefined FUN_14710095e(void)

void FUN_14710095e(longlong param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar3;
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
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar2;
  double dVar4;
  
  dVar6 = *(double *)(param_1 + 400);
  dVar7 = *(double *)(param_1 + 0x198);
  dVar8 = *(double *)(param_1 + 0x1a0);
  dVar9 = *(double *)(param_1 + 0x1a8);
  dVar1 = *(double *)(param_1 + 0x148);
  dVar2 = *(double *)(param_1 + 0x148);
  dVar3 = *(double *)(param_1 + 0x138);
  dVar4 = *(double *)(param_1 + 0x138);
  dVar10 = *(double *)(param_1 + 0x130);
  dVar5 = *(double *)(param_1 + 0x130);
  dVar12 = *(double *)(param_1 + 0x140);
  dVar13 = *(double *)(param_1 + 0x140);
  dVar11 = dVar7 * dVar12 * -1.0 + dVar8 * dVar3 + dVar10 * dVar9 * 1.0 + dVar1 * dVar6;
  dVar14 = dVar6 * dVar13 * 1.0 + dVar9 * dVar4 + dVar5 * dVar8 * -1.0 + dVar2 * dVar7;
  dVar16 = dVar9 * dVar12 * 1.0 + ((dVar10 * dVar7 * 1.0 + dVar1 * dVar8) - dVar3 * dVar6);
  dVar17 = dVar8 * dVar13 * -1.0 + ((dVar5 * dVar6 * -1.0 + dVar2 * dVar9) - dVar4 * dVar7);
  dVar2 = *param_3;
  dVar1 = param_3[1];
  dVar4 = param_3[2];
  dVar3 = dVar14 * dVar4 - dVar1 * dVar16;
  dVar3 = dVar3 + dVar3;
  dVar6 = dVar11 * dVar1 - dVar2 * dVar14;
  dVar6 = dVar6 + dVar6;
  dVar10 = dVar16 * dVar2 - dVar4 * dVar11;
  dVar10 = dVar10 + dVar10;
  dVar12 = (*(double *)(param_1 + 0x378) * *(double *)(param_1 + 0x398) -
           *(double *)(param_1 + 0x390) * *(double *)(param_1 + 0x380)) + param_3[5];
  dVar5 = (*(double *)(param_1 + 0x390) * *(double *)(param_1 + 0x388) -
          *(double *)(param_1 + 0x378) * *(double *)(param_1 + 0x3a0)) + param_3[4];
  dVar13 = (*(double *)(param_1 + 0x380) * *(double *)(param_1 + 0x3a0) -
           *(double *)(param_1 + 0x398) * *(double *)(param_1 + 0x388)) + param_3[3];
  dVar8 = dVar14 * dVar12 - dVar5 * dVar16;
  dVar8 = dVar8 + dVar8;
  dVar9 = dVar11 * dVar5 - dVar13 * dVar14;
  dVar9 = dVar9 + dVar9;
  dVar7 = dVar16 * dVar13 - dVar12 * dVar11;
  dVar7 = dVar7 + dVar7;
  dVar18 = ((dVar11 * dVar10 - dVar3 * dVar14) + dVar17 * dVar6 + dVar4) * param_4 +
           *(double *)(param_1 + 0xe8);
  dVar15 = ((dVar16 * dVar3 - dVar6 * dVar11) + dVar17 * dVar10 + dVar1) * param_4 +
           *(double *)(param_1 + 0xe0);
  dVar2 = ((dVar14 * dVar6 - dVar10 * dVar16) + dVar17 * dVar3 + dVar2) * param_4 +
          *(double *)(param_1 + 0xd8);
  dVar12 = ((dVar11 * dVar7 - dVar8 * dVar14) + dVar17 * dVar9 + dVar12) * param_4 +
           *(double *)(param_1 + 0x100);
  dVar1 = ((dVar16 * dVar8 - dVar9 * dVar11) + dVar17 * dVar7 + dVar5) * param_4 +
          *(double *)(param_1 + 0xf8);
  dVar10 = ((dVar14 * dVar9 - dVar7 * dVar16) + dVar17 * dVar8 + dVar13) * param_4 +
           *(double *)(param_1 + 0xf0);
  dVar3 = SQRT(dVar12 * dVar12 + dVar10 * dVar10 + dVar1 * dVar1) /
          *(double *)(*(longlong *)(param_1 + 8) + 0x98);
  dVar4 = 1.0 / dVar3;
  if (1.0 < dVar3) {
    dVar10 = dVar10 * dVar4;
    dVar1 = dVar1 * dVar4;
  }
  dVar13 = SQRT(dVar18 * dVar18 + dVar2 * dVar2 + dVar15 * dVar15) /
           *(double *)(*(longlong *)(param_1 + 8) + 0xa0);
  dVar5 = 1.0 / dVar13;
  if (1.0 < dVar13) {
    dVar2 = dVar2 * dVar5;
    dVar15 = dVar15 * dVar5;
  }
  *param_2 = dVar2;
  param_2[1] = dVar15;
  param_2[2] = (double)(~-(ulonglong)(1.0 < dVar13) & (ulonglong)dVar18 |
                       (ulonglong)(dVar18 * dVar5) & -(ulonglong)(1.0 < dVar13));
  param_2[3] = dVar10;
  param_2[4] = dVar1;
  param_2[5] = (double)(~-(ulonglong)(1.0 < dVar3) & (ulonglong)dVar12 |
                       (ulonglong)(dVar12 * dVar4) & -(ulonglong)(1.0 < dVar3));
  return;
}



// FUNCTION 147100de6 FUN_147100de6 body=66 status=ok
// SIG undefined FUN_147100de6(void)

void FUN_147100de6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + lVar2 * 8) + 0x2b8) != 0) {
        FUN_1471017d6();
        iVar1 = *(int *)(param_1 + 0x10);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}



// FUNCTION 147100e28 FUN_147100e28 body=1300 status=ok
// SIG undefined FUN_147100e28(void)

void FUN_147100e28(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_208 [40];
  longlong local_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1e0 = param_4;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar15 = 0;
    iVar12 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar15 * 8);
      cVar10 = FUN_144a7ee82(lVar4);
      if (cVar10 == '\0') {
        lVar5 = *(longlong *)(lVar4 + 0x2b8);
        if (lVar5 == 0) {
          FUN_14710133e(lVar4,&local_188,lVar15 * 0x30 + local_1e0,0x3ff0000000000000);
          *(undefined8 *)(lVar4 + 0xe8) = local_178;
          *(undefined8 *)(lVar4 + 0xd8) = local_188;
          *(undefined8 *)(lVar4 + 0xe0) = uStack_180;
          *(undefined8 *)(lVar4 + 0xf0) = local_170;
          *(undefined8 *)(lVar4 + 0xf8) = uStack_168;
          *(undefined8 *)(lVar4 + 0x100) = local_160;
          dVar6 = *(double *)(lVar4 + 400);
          dVar7 = *(double *)(lVar4 + 0x198);
          dVar8 = *(double *)(lVar4 + 0x1a0);
          dVar9 = *(double *)(lVar4 + 0x1a8);
          dVar16 = *(double *)(lVar4 + 0x148);
          dVar1 = *(double *)(lVar4 + 0x148);
          dVar17 = *(double *)(lVar4 + 0x138);
          dVar18 = *(double *)(lVar4 + 0x138);
          dVar20 = *(double *)(lVar4 + 0x130);
          dVar19 = *(double *)(lVar4 + 0x130);
          dVar3 = *(double *)(lVar4 + 0x140);
          dVar2 = *(double *)(lVar4 + 0x140);
          local_1d8 = -(dVar7 * dVar3 * -1.0 +
                       dVar8 * dVar17 + dVar20 * dVar9 * 1.0 + dVar16 * dVar6);
          dStack_1d0 = -(dVar6 * dVar2 * 1.0 +
                        dVar9 * dVar18 + dVar19 * dVar8 * -1.0 + dVar1 * dVar7);
          dVar1 = (dVar8 * dVar2 * -1.0 + ((dVar19 * dVar6 * -1.0 + dVar1 * dVar9) - dVar18 * dVar7)
                  ) * 1.0;
          local_1c8._8_4_ = SUB84(dVar1,0);
          local_1c8._0_8_ =
               (dVar9 * dVar3 * 1.0 + ((dVar20 * dVar7 * 1.0 + dVar16 * dVar8) - dVar17 * dVar6)) *
               -1.0;
          local_1c8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
          FUN_144b09016(&local_188,&local_1b8,&local_1d8);
          *(undefined8 *)(lVar4 + 0x398) = local_198;
          *(undefined8 *)(lVar4 + 0x3a0) = uStack_190;
          *(undefined8 *)(lVar4 + 0x388) = local_1a8;
          *(undefined8 *)(lVar4 + 0x390) = uStack_1a0;
          *(undefined4 *)(lVar4 + 0x378) = local_1b8;
          *(undefined4 *)(lVar4 + 0x37c) = uStack_1b4;
          *(undefined4 *)(lVar4 + 0x380) = uStack_1b0;
          *(undefined4 *)(lVar4 + 900) = uStack_1ac;
        }
        else {
          lVar11 = *(longlong *)(lVar5 + 0x18);
          memcpy(&local_188,(void *)(lVar5 + 0x8c0),0xd0);
          FUN_144b08e10(&local_188,&local_1b8,lVar11 + 0x378);
          *(undefined8 *)(lVar4 + 0x398) = local_198;
          *(undefined8 *)(lVar4 + 0x3a0) = uStack_190;
          *(undefined8 *)(lVar4 + 0x388) = local_1a8;
          *(undefined8 *)(lVar4 + 0x390) = uStack_1a0;
          *(undefined4 *)(lVar4 + 0x378) = local_1b8;
          *(undefined4 *)(lVar4 + 0x37c) = uStack_1b4;
          *(undefined4 *)(lVar4 + 0x380) = uStack_1b0;
          *(undefined4 *)(lVar4 + 900) = uStack_1ac;
          if (0 < *(int *)(lVar5 + 0x8b8)) {
            lVar11 = 0;
            do {
              lVar13 = (longlong)*(int *)(lVar5 + 0x5d0 + lVar11 * 4);
              *(double *)(lVar5 + 0x6a8 + lVar13 * 8) =
                   *(double *)(param_2 + (longlong)iVar12 * 8 + lVar11 * 8) +
                   *(double *)(lVar5 + 0x6a8 + lVar13 * 8);
              lVar13 = (longlong)*(int *)(lVar5 + 0x5d0 + lVar11 * 4);
              lVar14 = lVar13 * 0x30;
              dVar1 = *(double *)(lVar5 + 0x6a8 + lVar13 * 8);
              dVar16 = *(double *)(lVar5 + 0x4d8 + lVar14);
              dVar17 = *(double *)(lVar5 + 0x4d0 + lVar14);
              dVar18 = *(double *)(lVar5 + 0x4c8 + lVar14);
              dVar19 = *(double *)(lVar5 + 0x4c0 + lVar14);
              dVar20 = *(double *)(lVar5 + 0x4b8 + lVar14);
              *(double *)(lVar4 + 0x378) =
                   dVar1 * *(double *)(lVar5 + 0x4b0 + lVar14) + *(double *)(lVar4 + 0x378);
              *(double *)(lVar4 + 0x380) = dVar20 * dVar1 + *(double *)(lVar4 + 0x380);
              *(double *)(lVar4 + 0x388) = dVar19 * dVar1 + *(double *)(lVar4 + 0x388);
              *(double *)(lVar4 + 0x390) = dVar18 * dVar1 + *(double *)(lVar4 + 0x390);
              *(double *)(lVar4 + 0x398) = dVar17 * dVar1 + *(double *)(lVar4 + 0x398);
              *(double *)(lVar4 + 0x3a0) = dVar16 * dVar1 + *(double *)(lVar4 + 0x3a0);
              lVar11 = lVar11 + 1;
            } while (lVar11 < *(int *)(lVar5 + 0x8b8));
            iVar12 = iVar12 + (int)lVar11;
          }
          if (0 < *(int *)(lVar5 + 0xff0)) {
            dVar1 = *(double *)(lVar4 + 0x378);
            dVar16 = *(double *)(lVar4 + 0x380);
            dVar17 = *(double *)(lVar4 + 0x388);
            dVar18 = *(double *)(lVar4 + 0x390);
            dVar19 = *(double *)(lVar4 + 0x398);
            dVar20 = *(double *)(lVar4 + 0x3a0);
            lVar11 = 0;
            do {
              lVar13 = (longlong)*(int *)(lVar5 + 0xfd8 + lVar11 * 4);
              lVar14 = lVar13 * 0x30;
              dVar2 = *(double *)(lVar5 + 0x6a8 + lVar13 * 8);
              dVar20 = dVar20 + *(double *)(lVar5 + 0x4d8 + lVar14) * dVar2;
              dVar19 = dVar19 + *(double *)(lVar5 + 0x4d0 + lVar14) * dVar2;
              dVar18 = dVar18 + *(double *)(lVar5 + 0x4c8 + lVar14) * dVar2;
              dVar17 = dVar17 + *(double *)(lVar5 + 0x4c0 + lVar14) * dVar2;
              dVar16 = dVar16 + *(double *)(lVar5 + 0x4b8 + lVar14) * dVar2;
              dVar1 = dVar1 + dVar2 * *(double *)(lVar5 + 0x4b0 + lVar14);
              *(double *)(lVar4 + 0x378) = dVar1;
              *(double *)(lVar4 + 0x380) = dVar16;
              *(double *)(lVar4 + 0x388) = dVar17;
              *(double *)(lVar4 + 0x390) = dVar18;
              *(double *)(lVar4 + 0x398) = dVar19;
              *(double *)(lVar4 + 0x3a0) = dVar20;
              lVar11 = lVar11 + 1;
            } while (lVar11 < *(int *)(lVar5 + 0xff0));
          }
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0x10));
  }
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14710133e FUN_14710133e body=1054 status=ok
// SIG undefined FUN_14710133e(void)

void FUN_14710133e(longlong param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar3;
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
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar2;
  double dVar4;
  
  dVar6 = *(double *)(param_1 + 400);
  dVar7 = *(double *)(param_1 + 0x198);
  dVar8 = *(double *)(param_1 + 0x1a0);
  dVar9 = *(double *)(param_1 + 0x1a8);
  dVar1 = *(double *)(param_1 + 0x148);
  dVar2 = *(double *)(param_1 + 0x148);
  dVar3 = *(double *)(param_1 + 0x138);
  dVar4 = *(double *)(param_1 + 0x138);
  dVar10 = *(double *)(param_1 + 0x130);
  dVar12 = *(double *)(param_1 + 0x130);
  dVar5 = *(double *)(param_1 + 0x140);
  dVar13 = *(double *)(param_1 + 0x140);
  dVar11 = dVar7 * dVar5 * -1.0 + dVar8 * dVar3 + dVar10 * dVar9 * 1.0 + dVar1 * dVar6;
  dVar14 = dVar6 * dVar13 * 1.0 + dVar9 * dVar4 + dVar12 * dVar8 * -1.0 + dVar2 * dVar7;
  dVar16 = dVar9 * dVar5 * 1.0 + ((dVar10 * dVar7 * 1.0 + dVar1 * dVar8) - dVar3 * dVar6);
  dVar17 = dVar8 * dVar13 * -1.0 + ((dVar12 * dVar6 * -1.0 + dVar2 * dVar9) - dVar4 * dVar7);
  dVar2 = *param_3;
  dVar1 = param_3[1];
  dVar4 = param_3[2];
  dVar5 = dVar14 * dVar4 - dVar1 * dVar16;
  dVar5 = dVar5 + dVar5;
  dVar8 = dVar11 * dVar1 - dVar2 * dVar14;
  dVar8 = dVar8 + dVar8;
  dVar13 = dVar16 * dVar2 - dVar4 * dVar11;
  dVar13 = dVar13 + dVar13;
  dVar3 = param_3[3];
  dVar10 = param_3[4];
  dVar12 = param_3[5];
  dVar7 = dVar14 * dVar12 - dVar10 * dVar16;
  dVar7 = dVar7 + dVar7;
  dVar9 = dVar11 * dVar10 - dVar3 * dVar14;
  dVar9 = dVar9 + dVar9;
  dVar6 = dVar16 * dVar3 - dVar12 * dVar11;
  dVar6 = dVar6 + dVar6;
  dVar18 = ((dVar11 * dVar13 - dVar5 * dVar14) + dVar17 * dVar8 + dVar4) * param_4 +
           *(double *)(param_1 + 0xe8);
  dVar15 = ((dVar16 * dVar5 - dVar8 * dVar11) + dVar17 * dVar13 + dVar1) * param_4 +
           *(double *)(param_1 + 0xe0);
  dVar2 = ((dVar14 * dVar8 - dVar13 * dVar16) + dVar17 * dVar5 + dVar2) * param_4 +
          *(double *)(param_1 + 0xd8);
  dVar12 = ((dVar11 * dVar6 - dVar7 * dVar14) + dVar17 * dVar9 + dVar12) * param_4 +
           *(double *)(param_1 + 0x100);
  dVar1 = ((dVar16 * dVar7 - dVar9 * dVar11) + dVar17 * dVar6 + dVar10) * param_4 +
          *(double *)(param_1 + 0xf8);
  dVar10 = ((dVar14 * dVar9 - dVar6 * dVar16) + dVar17 * dVar7 + dVar3) * param_4 +
           *(double *)(param_1 + 0xf0);
  dVar3 = SQRT(dVar12 * dVar12 + dVar10 * dVar10 + dVar1 * dVar1) /
          *(double *)(*(longlong *)(param_1 + 8) + 0x98);
  dVar4 = 1.0 / dVar3;
  if (1.0 < dVar3) {
    dVar10 = dVar10 * dVar4;
    dVar1 = dVar1 * dVar4;
  }
  dVar13 = SQRT(dVar18 * dVar18 + dVar2 * dVar2 + dVar15 * dVar15) /
           *(double *)(*(longlong *)(param_1 + 8) + 0xa0);
  dVar5 = 1.0 / dVar13;
  if (1.0 < dVar13) {
    dVar2 = dVar2 * dVar5;
    dVar15 = dVar15 * dVar5;
  }
  *param_2 = dVar2;
  param_2[1] = dVar15;
  param_2[2] = (double)(~-(ulonglong)(1.0 < dVar13) & (ulonglong)dVar18 |
                       (ulonglong)(dVar18 * dVar5) & -(ulonglong)(1.0 < dVar13));
  param_2[3] = dVar10;
  param_2[4] = dVar1;
  param_2[5] = (double)(~-(ulonglong)(1.0 < dVar3) & (ulonglong)dVar12 |
                       (ulonglong)(dVar12 * dVar4) & -(ulonglong)(1.0 < dVar3));
  return;
}



// FUNCTION 14710175c FUN_14710175c body=120 status=ok
// SIG undefined FUN_14710175c(void)

void FUN_14710175c(longlong param_1,undefined1 *param_2,undefined1 param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_14;
  char local_13;
  undefined1 local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    local_13 = param_2[1];
    if (local_13 == '\x01') {
      local_14 = *param_2;
      local_12 = local_14;
    }
    local_28 = param_3;
    local_11 = local_13;
    FUN_1448f23ac(*(longlong *)(param_1 + 0x2b8),&local_14,&local_12);
  }
  if (param_2[1] == '\x01') {
    param_2[1] = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471017d6 FUN_1471017d6 body=697 status=ok
// SIG undefined FUN_1471017d6(void)

void FUN_1471017d6(longlong param_1)

{
  double dVar1;
  double dVar3;
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
  double dVar2;
  double dVar4;
  
  dVar6 = *(double *)(param_1 + 400);
  dVar7 = *(double *)(param_1 + 0x198);
  dVar8 = *(double *)(param_1 + 0x1a0);
  dVar9 = *(double *)(param_1 + 0x1a8);
  dVar1 = *(double *)(param_1 + 0x148);
  dVar2 = *(double *)(param_1 + 0x148);
  dVar3 = *(double *)(param_1 + 0x138);
  dVar4 = *(double *)(param_1 + 0x138);
  dVar5 = *(double *)(param_1 + 0x130);
  dVar11 = *(double *)(param_1 + 0x130);
  dVar10 = *(double *)(param_1 + 0x140);
  dVar14 = *(double *)(param_1 + 0x140);
  dVar12 = dVar7 * dVar10 * -1.0 + dVar8 * dVar3 + dVar5 * dVar9 * 1.0 + dVar1 * dVar6;
  dVar13 = dVar6 * dVar14 * 1.0 + dVar9 * dVar4 + dVar11 * dVar8 * -1.0 + dVar2 * dVar7;
  dVar10 = dVar9 * dVar10 * 1.0 + ((dVar5 * dVar7 * 1.0 + dVar1 * dVar8) - dVar3 * dVar6);
  dVar11 = dVar8 * dVar14 * -1.0 + ((dVar11 * dVar6 * -1.0 + dVar2 * dVar9) - dVar4 * dVar7);
  dVar2 = *(double *)(param_1 + 0x378);
  dVar1 = *(double *)(param_1 + 0x380);
  dVar3 = *(double *)(param_1 + 0x388);
  dVar4 = dVar13 * dVar3 - dVar1 * dVar10;
  dVar4 = dVar4 + dVar4;
  dVar5 = dVar12 * dVar1 - dVar2 * dVar13;
  dVar5 = dVar5 + dVar5;
  dVar14 = dVar10 * dVar2 - dVar3 * dVar12;
  dVar14 = dVar14 + dVar14;
  *(double *)(param_1 + 0xd8) = (dVar13 * dVar5 - dVar14 * dVar10) + dVar11 * dVar4 + dVar2;
  *(double *)(param_1 + 0xe0) = (dVar10 * dVar4 - dVar5 * dVar12) + dVar11 * dVar14 + dVar1;
  *(double *)(param_1 + 0xe8) = (dVar12 * dVar14 - dVar4 * dVar13) + dVar11 * dVar5 + dVar3;
  dVar2 = *(double *)(param_1 + 0x390);
  dVar1 = *(double *)(param_1 + 0x398);
  dVar3 = *(double *)(param_1 + 0x3a0);
  dVar4 = dVar13 * dVar3 - dVar1 * dVar10;
  dVar4 = dVar4 + dVar4;
  dVar5 = dVar12 * dVar1 - dVar2 * dVar13;
  dVar5 = dVar5 + dVar5;
  dVar14 = dVar10 * dVar2 - dVar3 * dVar12;
  dVar14 = dVar14 + dVar14;
  *(double *)(param_1 + 0xf0) = (dVar13 * dVar5 - dVar14 * dVar10) + dVar11 * dVar4 + dVar2;
  *(double *)(param_1 + 0xf8) = (dVar10 * dVar4 - dVar5 * dVar12) + dVar11 * dVar14 + dVar1;
  *(double *)(param_1 + 0x100) = (dVar12 * dVar14 - dVar4 * dVar13) + dVar11 * dVar5 + dVar3;
  return;
}



// FUNCTION 147101a90 FUN_147101a90 body=505 status=ok
// SIG undefined FUN_147101a90(void)

uint FUN_147101a90(longlong param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if ((0 < *(int *)(param_1 + 0x10)) &&
       (lVar2 = **(longlong **)(param_1 + 8), uVar6 = 0, lVar2 != 0)) {
      bVar3 = FUN_144a7ee82(lVar2);
      if (((param_3 & 4) == 0 & bVar3) == 0) {
        uVar6 = 0;
        if ((param_4 & 1) != 0) {
          FUN_144941734(lVar2,&local_a8);
          uVar7 = 0;
          if ((param_3 & 1) != 0) {
            *param_2 = local_a8;
            param_2[1] = uStack_a0;
            *(undefined4 *)(param_2 + 2) = local_98;
            *(undefined4 *)((longlong)param_2 + 0x14) = uStack_94;
            *(undefined4 *)(param_2 + 3) = uStack_90;
            *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_8c;
            uVar7 = 4;
          }
          uVar6 = uVar7;
          if ((param_3 & 2) != 0) {
            param_2[uVar7] = local_88;
            param_2[(ulonglong)uVar7 + 1] = local_80;
            uVar6 = uVar7 | 3;
            param_2[(ulonglong)uVar7 + 2] = local_78;
          }
        }
        if ((param_4 & 2) != 0) {
          uVar7 = uVar6;
          if ((param_3 & 1) != 0) {
            param_2[uVar6] = *(undefined8 *)(lVar2 + 0x378);
            param_2[(ulonglong)uVar6 + 1] = *(undefined8 *)(lVar2 + 0x380);
            uVar7 = uVar6 + 3;
            param_2[(ulonglong)uVar6 + 2] = *(undefined8 *)(lVar2 + 0x388);
          }
          uVar6 = uVar7;
          if ((param_3 & 2) != 0) {
            param_2[uVar7] = *(undefined8 *)(lVar2 + 0x390);
            param_2[(ulonglong)uVar7 + 1] = *(undefined8 *)(lVar2 + 0x398);
            uVar6 = uVar7 + 3;
            param_2[(ulonglong)uVar7 + 2] = *(undefined8 *)(lVar2 + 0x3a0);
          }
        }
      }
    }
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x28);
      plVar1 = plVar9 + *(int *)(param_1 + 0x30);
      do {
        lVar2 = *plVar9;
        lVar8 = 0;
        do {
          if (*(int *)(lVar2 + 0xf30 + lVar8 * 4) == 2) {
            cVar4 = FUN_144a7ee82(*(undefined8 *)(lVar2 + 0x20));
            if (cVar4 != '\0') goto LAB_147101b25;
          }
          else {
LAB_147101b25:
            if ((param_4 & 1) != 0) {
              lVar5 = (longlong)(int)uVar6;
              uVar6 = uVar6 + 1;
              param_2[lVar5] = *(undefined8 *)(lVar2 + 0x6d8 + lVar8 * 8);
            }
            if ((param_4 & 2) != 0) {
              lVar5 = (longlong)(int)uVar6;
              uVar6 = uVar6 + 1;
              param_2[lVar5] = *(undefined8 *)(lVar2 + 0x6a8 + lVar8 * 8);
            }
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 != 6);
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147101c8a FUN_147101c8a body=123 status=ok
// SIG undefined FUN_147101c8a(void)

int FUN_147101c8a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x30) == 0) {
    iVar6 = 0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x28);
    plVar1 = plVar5 + *(int *)(param_1 + 0x30);
    iVar6 = 0;
    do {
      lVar2 = *plVar5;
      lVar7 = 0;
      do {
        if (*(int *)(lVar2 + 0xf30 + lVar7 * 4) == 2) {
          cVar3 = FUN_144a7ee82(*(undefined8 *)(lVar2 + 0x20));
          if (cVar3 != '\0') goto LAB_147101ccb;
        }
        else {
LAB_147101ccb:
          lVar4 = (longlong)iVar6;
          iVar6 = iVar6 + 1;
          *(undefined8 *)(param_2 + lVar4 * 8) = *(undefined8 *)(lVar2 + 0x738 + lVar7 * 8);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 6);
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return iVar6;
}



// FUNCTION 147101d06 FUN_147101d06 body=446 status=ok
// SIG undefined FUN_147101d06(void)

int FUN_147101d06(longlong param_1,byte param_2)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = *(longlong *)(param_1 + 8);
  if (lVar7 == 0) {
    iVar9 = 0;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x2a8) == 0) {
      iVar9 = 0;
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0x2a0);
      lVar12 = (longlong)*(int *)(param_1 + 0x2a8) * 0x520 + lVar11;
      iVar9 = 0;
      do {
        local_58 = *(ulonglong *)(lVar11 + 0x508);
        uVar4 = *(ulonglong *)(lVar11 + 0x518);
        local_60 = uVar4;
        if (local_58 < uVar4) {
          local_60 = local_58;
          local_58 = uVar4;
        }
        lVar2 = FUN_14711a784(lVar7);
        if ((byte)(*(byte *)(lVar2 + 8) ^ 1 | param_2) == 1) {
          uVar4 = (ulonglong)*(int *)(lVar2 + 0x4f8);
          if ((longlong)uVar4 < 1) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
            if (*(double *)(lVar2 + 0xa8) <= 0.0) {
              pdVar3 = (double *)(lVar2 + 0x1e0);
              uVar8 = 0;
              do {
                uVar6 = uVar4;
                if (uVar4 - 1 == uVar8) break;
                dVar1 = *pdVar3;
                pdVar3 = pdVar3 + 0x27;
                uVar8 = uVar8 + 1;
                uVar6 = uVar8;
              } while (dVar1 <= 0.0);
              uVar5 = (uint)(uVar6 < uVar4);
            }
          }
          iVar9 = iVar9 + uVar5;
        }
        lVar11 = lVar11 + 0x520;
      } while (lVar11 != lVar12);
    }
    if ((longlong)*(int *)(param_1 + 0x298) != 0) {
      lVar7 = 0;
      do {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x290) + lVar7);
        if ((byte)(*(byte *)(lVar11 + 8) ^ 1 | param_2) == 1) {
          if (*(double *)(lVar11 + 0x1f0) <= 9.99999993922529e-09) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
            if (*(char *)(lVar11 + 0x200) == '\x01') {
              bVar10 = 9.99999993922529e-09 < *(double *)(lVar11 + 0x1f8);
            }
          }
          iVar9 = iVar9 + (uint)bVar10;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)*(int *)(param_1 + 0x298) * 8 != lVar7);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147101ec6 FUN_147101ec6 body=895 status=ok
// SIG undefined FUN_147101ec6(void)

void FUN_147101ec6(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar6;
  byte bVar8;
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
  double dVar2;
  double dVar4;
  double dVar7;
  
  bVar8 = *(byte *)(param_1 + 0x21);
  dVar17 = 1.0;
  if ((bVar8 & 4) != 0) {
    dVar17 = 0.0;
  }
  dVar16 = 1.0;
  if ((bVar8 & 2) != 0) {
    dVar16 = 0.0;
  }
  dVar14 = 1.0;
  if ((bVar8 & 1) != 0) {
    dVar14 = 0.0;
  }
  dVar17 = dVar17 * *(double *)(param_1 + 0x88);
  dVar16 = dVar16 * *(double *)(param_1 + 0x80);
  dVar14 = dVar14 * *(double *)(param_1 + 0x78);
  dVar11 = *(double *)(param_1 + 400);
  dVar12 = *(double *)(param_1 + 0x198);
  dVar13 = *(double *)(param_1 + 0x1a0);
  dVar18 = *(double *)(param_1 + 0x1a8);
  dVar1 = *(double *)(param_1 + 0x148);
  dVar2 = *(double *)(param_1 + 0x148);
  dVar3 = *(double *)(param_1 + 0x138);
  dVar4 = *(double *)(param_1 + 0x138);
  dVar15 = *(double *)(param_1 + 0x130);
  dVar5 = *(double *)(param_1 + 0x130);
  dVar6 = *(double *)(param_1 + 0x140);
  dVar7 = *(double *)(param_1 + 0x140);
  dVar9 = dVar12 * dVar6 * -1.0 + dVar13 * dVar3 + dVar15 * dVar18 * 1.0 + dVar1 * dVar11;
  dVar10 = dVar11 * dVar7 * 1.0 + dVar18 * dVar4 + dVar5 * dVar13 * -1.0 + dVar2 * dVar12;
  dVar1 = dVar18 * dVar6 * 1.0 + ((dVar15 * dVar12 * 1.0 + dVar1 * dVar13) - dVar3 * dVar11);
  dVar3 = dVar13 * dVar7 * -1.0 + ((dVar5 * dVar11 * -1.0 + dVar2 * dVar18) - dVar4 * dVar12);
  dVar18 = dVar10 + dVar10;
  dVar4 = dVar1 + dVar1;
  dVar7 = dVar9 * (dVar9 + dVar9);
  dVar15 = (dVar9 + dVar9) * dVar3;
  dVar12 = 1.0 - (dVar1 * dVar4 + dVar10 * dVar18);
  dVar11 = dVar3 * dVar4 + dVar9 * dVar18;
  dVar13 = dVar9 * dVar4 - dVar18 * dVar3;
  dVar2 = dVar9 * dVar18 - dVar3 * dVar4;
  dVar6 = 1.0 - (dVar1 * dVar4 + dVar7);
  dVar5 = dVar10 * dVar4 + dVar15;
  dVar19 = dVar18 * dVar3 + dVar9 * dVar4;
  dVar15 = dVar10 * dVar4 - dVar15;
  dVar1 = 1.0 - (dVar10 * dVar18 + dVar7);
  dVar4 = dVar14 * dVar12;
  dVar7 = dVar16 * dVar11;
  dVar9 = dVar17 * dVar13;
  *param_2 = dVar13 * dVar9 + dVar12 * dVar4 + dVar11 * dVar7;
  param_2[4] = dVar17 * dVar5 * dVar5 + dVar14 * dVar2 * dVar2 + dVar6 * dVar16 * dVar6;
  param_2[8] = dVar17 * dVar1 * dVar1 + dVar14 * dVar19 * dVar19 + dVar16 * dVar15 * dVar15;
  dVar3 = dVar5 * dVar9 + dVar2 * dVar4 + dVar6 * dVar7;
  param_2[1] = dVar3;
  param_2[3] = dVar3;
  dVar3 = dVar9 * dVar1 + dVar4 * dVar19 + dVar7 * dVar15;
  param_2[2] = dVar3;
  param_2[6] = dVar3;
  dVar17 = dVar17 * dVar5 * dVar1 + dVar14 * dVar2 * dVar19 + dVar16 * dVar6 * dVar15;
  param_2[5] = dVar17;
  param_2[7] = dVar17;
  return;
}



// FUNCTION 147102246 FUN_147102246 body=428 status=ok
// SIG undefined FUN_147102246(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147102246(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  
  dVar8 = *param_3;
  dVar10 = param_3[1];
  dVar13 = param_3[2];
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  param_1[4] = param_1[4] + *param_2;
  param_1[5] = param_1[5] + dVar2;
  param_1[6] = param_1[6] + dVar1;
  param_1[7] = 0.0;
  if (9.99999993922529e-09 < ABS(dVar13 * dVar13 + dVar8 * dVar8 + dVar10 * dVar10)) {
    dVar2 = *param_1;
    dVar3 = param_1[1];
    dVar4 = param_1[2];
    dVar9 = param_1[3];
    dVar8 = param_3[1];
    dVar10 = param_3[1];
    dVar13 = param_3[2];
    dVar1 = param_3[2];
    dVar6 = (dVar3 * dVar13 * -1.0 + dVar8 * dVar4 + *param_3 * dVar9 * 1.0 + dVar2 * 0.0) * 0.5 +
            dVar2;
    dVar7 = (dVar2 * dVar1 * 1.0 + dVar10 * dVar9 + *param_3 * dVar4 * -1.0 + dVar3 * 0.0) * 0.5 +
            dVar3;
    dVar8 = (dVar9 * dVar13 * 1.0 + ((*param_3 * dVar3 * 1.0 + dVar4 * 0.0) - dVar8 * dVar2)) * 0.5
            + dVar4;
    dVar9 = (dVar4 * dVar1 * -1.0 + ((*param_3 * dVar2 * -1.0 + dVar9 * 0.0) - dVar10 * dVar3)) *
            0.5 + dVar9;
    dVar10 = dVar8 * dVar8 + dVar6 * dVar6;
    dVar13 = dVar9 * dVar9 + dVar7 * dVar7;
    auVar11._0_8_ = dVar10 + dVar13;
    auVar11._8_8_ = dVar10 + dVar13;
    auVar5._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
    auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_);
    auVar12 = sqrtpd(auVar11,auVar11);
    auVar12 = divpd(_DAT_149934d80,auVar12);
    auVar14._0_8_ = auVar12._0_8_ * dVar8;
    auVar14._8_8_ = auVar12._8_8_ * dVar9;
    auVar5 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar14,auVar5);
    *param_1 = (double)((ulonglong)(dVar6 * auVar12._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_));
    param_1[1] = (double)((ulonglong)(dVar7 * auVar12._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_));
    *(undefined1 (*) [16])(param_1 + 2) = auVar5;
  }
  return;
}



// FUNCTION 1471023f2 FUN_1471023f2 body=196 status=ok
// SIG undefined FUN_1471023f2(void)

ulonglong FUN_1471023f2(longlong param_1,byte param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar2 = FUN_147101d06();
    if (*(longlong *)(param_1 + 0x2b8) != 0) {
      uVar2 = (ulonglong)
              ((int)uVar2 +
              (uint)(byte)(*(byte *)(*(longlong *)(param_1 + 0x2b8) + 8) ^ 1 | param_2));
    }
    if ((longlong)*(int *)(param_1 + 0x2d0) != 0) {
      lVar3 = 0;
      do {
        uVar2 = (ulonglong)
                ((int)uVar2 +
                (uint)(byte)(*(byte *)(*(longlong *)
                                        (*(longlong *)(*(longlong *)(param_1 + 0x2c8) + lVar3) +
                                        0x2b8) + 8) ^ 1 | param_2));
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(param_1 + 0x2d0) * 8 != lVar3);
    }
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2b0) + 0x40);
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x38) + lVar4);
        if ((*(longlong *)(lVar1 + 0x18) == param_1) || (*(longlong *)(lVar1 + 0x20) == param_1)) {
          uVar2 = (ulonglong)((int)uVar2 + (uint)(byte)(*(byte *)(lVar1 + 8) ^ 1 | param_2));
        }
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
  }
  return uVar2;
}



// FUNCTION 1471024be FUN_1471024be body=48 status=ok
// SIG undefined FUN_1471024be(void)

void FUN_1471024be(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1f0,0x10);
  }
  return;
}



// FUNCTION 147102506 FUN_147102506 body=41 status=ok
// SIG undefined FUN_147102506(void)

void FUN_147102506(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_14a1e1310;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 147102530 FUN_147102530 body=57 status=ok
// SIG undefined FUN_147102530(void)

undefined8 * FUN_147102530(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a1e1310;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14710256a FUN_14710256a body=114 status=ok
// SIG undefined FUN_14710256a(void)

void FUN_14710256a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  *puVar1 = &PTR_LAB_14a1e1330;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  return;
}



// FUNCTION 1471025dc FUN_1471025dc body=38 status=ok
// SIG undefined FUN_1471025dc(void)

undefined8 FUN_1471025dc(undefined8 param_1,int param_2)

{
  FUN_147102602();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147102602 FUN_147102602 body=97 status=ok
// SIG undefined FUN_147102602(void)

void FUN_147102602(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a1e1330;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 1);
  return;
}



// FUNCTION 14710267e FUN_14710267e body=63 status=ok
// SIG undefined FUN_14710267e(void)

undefined8 * FUN_14710267e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR__purecall_14a1e1358;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471026de FUN_1471026de body=63 status=ok
// SIG undefined FUN_1471026de(void)

undefined8 * FUN_1471026de(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR__purecall_14a1e1358;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147102738 FUN_147102738 body=63 status=ok
// SIG undefined FUN_147102738(void)

undefined8 * FUN_147102738(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR__purecall_14a1e1358;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147102778 FUN_147102778 body=83 status=ok
// SIG undefined FUN_147102778(void)

undefined8 * FUN_147102778(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471027cc FUN_1471027cc body=132 status=ok
// SIG undefined FUN_1471027cc(void)

void FUN_1471027cc(longlong param_1,int param_2)

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



// FUNCTION 147102852 FUN_147102852 body=132 status=ok
// SIG undefined FUN_147102852(void)

void FUN_147102852(longlong param_1,int param_2)

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



// FUNCTION 1471028de FUN_1471028de body=132 status=ok
// SIG undefined FUN_1471028de(void)

void FUN_1471028de(longlong param_1,int param_2)

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



// FUNCTION 147102964 FUN_147102964 body=132 status=ok
// SIG undefined FUN_147102964(void)

void FUN_147102964(longlong param_1,int param_2)

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



// FUNCTION 1471029fa FUN_1471029fa body=143 status=ok
// SIG undefined FUN_1471029fa(void)

void FUN_1471029fa(longlong param_1,int param_2)

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



// FUNCTION 147102a90 FUN_147102a90 body=147 status=ok
// SIG undefined FUN_147102a90(void)

void FUN_147102a90(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147102b2a FUN_147102b2a body=109 status=ok
// SIG undefined FUN_147102b2a(void)

void FUN_147102b2a(longlong param_1,int param_2)

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



// FUNCTION 147102b9e FUN_147102b9e body=143 status=ok
// SIG undefined FUN_147102b9e(void)

void FUN_147102b9e(longlong param_1,int param_2)

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



// FUNCTION 147102c2e FUN_147102c2e body=147 status=ok
// SIG undefined FUN_147102c2e(void)

void FUN_147102c2e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147102cc2 FUN_147102cc2 body=111 status=ok
// SIG undefined FUN_147102cc2(void)

void FUN_147102cc2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147102d31 FUN_147102d31 body=83 status=ok
// SIG undefined FUN_147102d31(void)

void FUN_147102d31(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      puVar3 = (undefined8 *)(param_1 + lVar4);
      *puVar3 = &PTR_LAB_14a1e1958;
      puVar3[1] = *(undefined8 *)(param_2 + 8 + lVar4);
      *puVar3 = &PTR_LAB_14a1e1968;
      puVar2 = (undefined8 *)(param_2 + 0x10 + lVar4);
      puVar3 = puVar3 + 2;
      for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      lVar4 = lVar4 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147102d84 FUN_147102d84 body=62 status=ok
// SIG undefined FUN_147102d84(void)

void FUN_147102d84(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147102dc2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 147102dc2 FUN_147102dc2 body=112 status=ok
// SIG undefined FUN_147102dc2(void)

ulonglong FUN_147102dc2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147102dfc;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_147102dfc:
  return param_2 & 0xffffffff;
}



// FUNCTION 147102e32 FUN_147102e32 body=96 status=ok
// SIG undefined FUN_147102e32(void)

void FUN_147102e32(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 147102ec6 FUN_147102ec6 body=29 status=ok
// SIG undefined FUN_147102ec6(void)

undefined8 FUN_147102ec6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147102f18 FUN_147102f18 body=29 status=ok
// SIG undefined FUN_147102f18(void)

undefined8 FUN_147102f18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147102f36 FUN_147102f36 body=26 status=ok
// SIG undefined FUN_147102f36(void)

void FUN_147102f36(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_147102f50(param_1,*(undefined4 *)(param_1 + 8),param_2,4);
  return;
}



// FUNCTION 147102f50 FUN_147102f50 body=308 status=ok
// SIG undefined FUN_147102f50(void)

void FUN_147102f50(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  void *_Dst;
  uint uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  undefined1 local_59;
  code *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,param_4);
    }
    _Src = (void *)*param_1;
    local_50 = &local_59;
    local_58 = FUN_140036a08;
    lVar2 = FUN_144a773aa(&local_58,&DAT_14c7585d0);
    puVar6 = (ulonglong *)(lVar2 + 0x10);
    uVar3 = (int)param_4 * param_3;
    uVar5 = (ulonglong)(uVar3 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar4 = (uint)(uVar3 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar4 + 7;
    _Dst = (void *)(*(longlong *)(lVar2 + 0x10) + lVar1 & uVar5);
    uVar7 = (longlong)_Dst + (longlong)(int)uVar3;
    if (*(ulonglong *)(lVar2 + 0x18) < uVar7) {
      local_68 = puVar6;
      FUN_140023dd8(puVar6,uVar4 + 8 + uVar3);
      _Dst = (void *)(lVar1 + *local_68 & uVar5);
      uVar7 = (longlong)(int)uVar3 + (longlong)_Dst;
      puVar6 = local_68;
    }
    *puVar6 = uVar7;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,param_2 * param_4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147103086 FUN_147103086 body=63 status=ok
// SIG undefined FUN_147103086(void)

void FUN_147103086(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1471030c6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,0x10);
  }
  return;
}



// FUNCTION 1471030c6 FUN_1471030c6 body=109 status=ok
// SIG undefined FUN_1471030c6(void)

ulonglong FUN_1471030c6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x70) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x70,0x10);
      uVar1 = uVar1 / 0x70;
    }
  }
  return uVar1;
}



// FUNCTION 147103134 FUN_147103134 body=48 status=ok
// SIG undefined FUN_147103134(void)

void FUN_147103134(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xd0,0x10);
  }
  return;
}



// FUNCTION 147103164 FUN_147103164 body=170 status=ok
// SIG undefined FUN_147103164(void)

void FUN_147103164(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0xb0);
  if (*(char *)(lVar1 + 0xa4 + (longlong)(int)param_2 * 0xb0) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0xa4) = 0;
  }
  if (*(char *)((longlong)_Dst + 0x98) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x98) = 0;
  }
  if (*(char *)((longlong)_Dst + 0x78) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x78) = 0;
  }
  if (*(char *)((longlong)_Dst + 0x58) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x58) = 0;
  }
  if (*(char *)((longlong)_Dst + 0x30) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x30) = 0;
  }
  iVar3 = (int)param_1[1];
  iVar2 = ~param_2 + iVar3;
  if (iVar2 != 0) {
    iVar4 = 1;
    if (iVar2 < 1) {
      iVar4 = iVar2;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar3 - iVar4) * 0xb0),(longlong)iVar4 * 0xb0);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 14710320e FUN_14710320e body=48 status=ok
// SIG undefined FUN_14710320e(void)

void FUN_14710320e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb0,0x10);
  }
  return;
}



// FUNCTION 14710323e FUN_14710323e body=139 status=ok
// SIG undefined FUN_14710323e(void)

void FUN_14710323e(longlong *param_1,void *param_2)

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
      if (*(int *)(lVar2 + 0xc0 + uVar3) == *(int *)((longlong)param_2 + 0xc0)) {
        if ((int)(uVar3 >> 4) * -0x3b13b13b != -1) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 0xd0;
    } while (lVar4 * 0xd0 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141744764(param_1,iVar1);
    lVar2 = *param_1;
  }
  memcpy((void *)(lVar4 * 0xd0 + lVar2),param_2,0xd0);
  return;
}



// FUNCTION 1471032ca FUN_1471032ca body=124 status=ok
// SIG undefined FUN_1471032ca(void)

void FUN_1471032ca(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0xf8);
  if (*(longlong *)(lVar1 + 0xa0 + (longlong)(int)param_2 * 0xf8) != 0) {
    FUN_1402c7646((longlong)_Dst + 0x98);
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0xf8),(longlong)iVar3 * 0xf8);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147103346 FUN_147103346 body=62 status=ok
// SIG undefined FUN_147103346(void)

void FUN_147103346(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147103384(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xf8,8);
  }
  return;
}



// FUNCTION 147103384 FUN_147103384 body=114 status=ok
// SIG undefined FUN_147103384(void)

ulonglong FUN_147103384(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xf8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1471033bd;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xf8,8);
      param_2 = param_2 / 0xf8;
    }
  }
LAB_1471033bd:
  return param_2 & 0xffffffff;
}



// FUNCTION 1471033f6 FUN_1471033f6 body=87 status=ok
// SIG undefined FUN_1471033f6(void)

void FUN_1471033f6(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x1f0) == param_2) {
          FUN_14710344e(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x1f0 + *param_1 + 0x1e0);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14710344e FUN_14710344e body=138 status=ok
// SIG undefined FUN_14710344e(void)

void FUN_14710344e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x1f0;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1e4 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x1e0 + lVar6 * 0x1f0);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x1f0 + 0x1e0);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x1e0);
  FUN_1470d8784(*param_1 + lVar2 + 0x10);
  FUN_1471034d8(param_1,param_2);
  return;
}



// FUNCTION 1471034d8 FUN_1471034d8 body=122 status=ok
// SIG undefined FUN_1471034d8(void)

void FUN_1471034d8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1f0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1f0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1f0 + 4) = uVar5;
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



// FUNCTION 147103552 FUN_147103552 body=189 status=ok
// SIG undefined FUN_147103552(void)

longlong FUN_147103552(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x1f0;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x1f0) == *param_3) {
          if (lVar3 != 0) goto LAB_1471035f2;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x1e0);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147103610(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x1f0 + *param_1;
LAB_1471035f2:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 147103610 FUN_147103610 body=281 status=ok
// SIG undefined FUN_147103610(void)

undefined4 * FUN_147103610(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_14710372a(param_1,local_48);
  FUN_14710394e(param_4,local_40);
  *(undefined4 *)(local_40 + 0x1e0) = 0xffffffff;
  cVar1 = FUN_147103818(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x1e4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x1e0) =
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
      FUN_147103acc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14710372a FUN_14710372a body=237 status=ok
// SIG undefined FUN_14710372a(void)

int * FUN_14710372a(longlong *param_1,int *param_2)

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
      FUN_1471038ba(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x1f0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x1f0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1f0 + *param_1;
  return param_2;
}



// FUNCTION 147103818 FUN_147103818 body=162 status=ok
// SIG undefined FUN_147103818(void)

undefined8 FUN_147103818(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x1f0);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x1f0) == *param_3) {
          FUN_1470d8784((longlong)_Dst + 0x10);
          memmove(_Dst,param_3,0x1e0);
          FUN_1471034d8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x1e0);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1471038ba FUN_1471038ba body=146 status=ok
// SIG undefined FUN_1471038ba(void)

void FUN_1471038ba(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x1f0,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x842108421084211),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x1f0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14710394e FUN_14710394e body=381 status=ok
// SIG undefined FUN_14710394e(void)

undefined4 * FUN_14710394e(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  undefined1 local_218 [16];
  undefined8 local_208 [12];
  undefined8 local_1a8;
  undefined8 local_198 [12];
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  memset(local_218,0,0x1d0);
  puVar2 = &DAT_14c846480;
  puVar3 = local_208;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_1a8 = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = local_198;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_138 = 0x3ff0000000000000;
  local_130 = 6;
  local_12c = 1;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0xffffffff;
  local_c8 = 0;
  *param_2 = *(undefined4 *)*param_1;
  memcpy(param_2 + 4,local_218,0x108);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x4c) = 0;
  *(undefined8 *)(param_2 + 0x50) = local_e8;
  *(undefined8 *)(param_2 + 0x52) = uStack_e0;
  *(undefined8 *)(param_2 + 0x54) = local_d8;
  *(undefined8 *)(param_2 + 0x56) = uStack_d0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x5c) = 0;
  *(undefined8 *)(param_2 + 0x60) = local_a8;
  *(undefined8 *)(param_2 + 0x62) = uStack_a0;
  *(undefined8 *)(param_2 + 100) = local_98;
  *(undefined8 *)(param_2 + 0x66) = uStack_90;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x6c) = 0;
  param_2[0x70] = local_68;
  param_2[0x71] = uStack_64;
  param_2[0x72] = uStack_60;
  param_2[0x73] = uStack_5c;
  param_2[0x74] = local_58;
  param_2[0x75] = uStack_54;
  param_2[0x76] = uStack_50;
  param_2[0x77] = uStack_4c;
  FUN_1470d8784(local_218);
  if ((local_40 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147103acc FUN_147103acc body=432 status=ok
// SIG undefined FUN_147103acc(void)

void FUN_147103acc(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x1f0;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1e4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x1e0 + lVar7) =
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



// FUNCTION 147103c7e FUN_147103c7e body=48 status=ok
// SIG undefined FUN_147103c7e(void)

void FUN_147103c7e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1d0,0x10);
  }
  return;
}



// FUNCTION 147103cae FUN_147103cae body=31 status=ok
// SIG undefined FUN_147103cae(void)

undefined8 FUN_147103cae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147103cea FUN_147103cea body=93 status=ok
// SIG undefined FUN_147103cea(void)

void FUN_147103cea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1e1540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147103d48 FUN_147103d48 body=123 status=ok
// SIG undefined FUN_147103d48(void)

void FUN_147103d48(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14a1e1540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147103dc4 FUN_147103dc4 body=21 status=ok
// SIG undefined FUN_147103dc4(void)

undefined8 FUN_147103dc4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147103dda FUN_147103dda body=31 status=ok
// SIG undefined FUN_147103dda(void)

undefined8 FUN_147103dda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147103e0c FUN_147103e0c body=93 status=ok
// SIG undefined FUN_147103e0c(void)

void FUN_147103e0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1e18b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147103e6a FUN_147103e6a body=93 status=ok
// SIG undefined FUN_147103e6a(void)

void FUN_147103e6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1e18b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147103ec8 FUN_147103ec8 body=123 status=ok
// SIG undefined FUN_147103ec8(void)

void FUN_147103ec8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca410;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1e18b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147103f4e FUN_147103f4e body=203 status=ok
// SIG undefined FUN_147103f4e(void)

int FUN_147103f4e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_147103f98:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14710400e;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14710400e;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_147103fff;
    }
  }
  return -1;
LAB_14710400e:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_147103fff:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_147103f98;
}



// FUNCTION 14710401a FUN_14710401a body=67 status=ok
// SIG undefined FUN_14710401a(void)

void FUN_14710401a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145ef97dc(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1471041a2(param_1);
    return;
  }
  FUN_14710405e(param_1);
  FUN_145ef97dc(param_1,0);
  return;
}



// FUNCTION 14710405e FUN_14710405e body=322 status=ok
// SIG undefined FUN_14710405e(void)

void FUN_14710405e(longlong *param_1)

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



// FUNCTION 1471041a2 FUN_1471041a2 body=476 status=ok
// SIG undefined FUN_1471041a2(void)

void FUN_1471041a2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
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
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147104380 FUN_147104380 body=412 status=ok
// SIG undefined FUN_147104380(void)

undefined4 * FUN_147104380(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  void *_Src;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14710451e(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  *local_40 = 0;
  iVar8 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_40 + 1) = iVar8;
  if ((longlong)iVar8 == 0) {
    *(undefined4 *)((longlong)local_40 + 0xc) = 0;
    local_40[2] = 0;
    *(undefined4 *)(local_40 + 3) = 0xffffffff;
    puVar9 = &DAT_149dfb77a;
    iVar8 = 0;
  }
  else {
    FUN_1446dd670(local_40,iVar8,0);
    memcpy((void *)*local_40,_Src,(longlong)iVar8 * 2);
    iVar8 = *(int *)(local_40 + 1);
    local_40[2] = 0;
    *(undefined4 *)(local_40 + 3) = 0xffffffff;
    if (iVar8 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)*local_40;
    }
  }
  local_4c = local_48[0];
  iVar2 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar2 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar2,puVar9);
  cVar4 = FUN_147104604(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x1c) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1471041a2(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14710451e FUN_14710451e body=229 status=ok
// SIG undefined FUN_14710451e(void)

int * FUN_14710451e(longlong *param_1,int *param_2)

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



// FUNCTION 147104604 FUN_147104604 body=114 status=ok
// SIG undefined FUN_147104604(void)

undefined8 FUN_147104604(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_147103f4e(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_147104676(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 147104676 FUN_147104676 body=114 status=ok
// SIG undefined FUN_147104676(void)

void FUN_147104676(longlong *param_1,int param_2)

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



// FUNCTION 1471046e8 FUN_1471046e8 body=313 status=ok
// SIG undefined FUN_1471046e8(void)

undefined1 * FUN_1471046e8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  void *_Src;
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined1 local_60 [48];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = (int)param_2[1];
  if (iVar4 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar7);
  iVar4 = FUN_147103f4e(param_1,uVar3,param_2);
  if (iVar4 == -1) {
    FUN_147104822(local_60,param_3);
    local_70 = (void *)0x0;
    local_68 = (int)param_2[1];
    lVar8 = (longlong)local_68;
    _Src = (void *)*param_2;
    if (lVar8 == 0) {
      local_64 = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_68,0);
      memcpy(local_70,_Src,lVar8 * 2);
    }
    FUN_1470fd39e(param_1,&local_70,local_60);
  }
  iVar4 = (int)param_2[1];
  if (iVar4 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  uVar9 = 0;
  uVar6 = (ulonglong)(iVar4 - 1);
  if (iVar4 == 0) {
    uVar6 = uVar9;
  }
  uVar3 = FUN_144a49b4a(uVar6,puVar7);
  iVar4 = FUN_147103f4e(param_1,uVar3,param_2);
  if (iVar4 != -1) {
    uVar9 = (longlong)iVar4 * 0x20 + *param_1;
  }
  puVar5 = (undefined8 *)(uVar9 + 0x10);
  if (uVar9 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  puVar1 = (undefined1 *)*puVar5;
  *puVar1 = 1;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147104822 FUN_147104822 body=120 status=ok
// SIG undefined FUN_147104822(void)

undefined8 * FUN_147104822(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a1e1310;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_144723f1e(param_1 + 1,iVar1,0);
    FUN_144723ff3(param_1[1],uVar2,iVar1);
  }
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar2;
  return param_1;
}



// FUNCTION 14710489a FUN_14710489a body=143 status=ok
// SIG undefined FUN_14710489a(void)

void FUN_14710489a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147104940 FUN_147104940 body=93 status=ok
// SIG undefined FUN_147104940(void)

void FUN_147104940(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1e19d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14710499e FUN_14710499e body=123 status=ok
// SIG undefined FUN_14710499e(void)

void FUN_14710499e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1e19d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147104a24 FUN_147104a24 body=20 status=ok
// SIG undefined FUN_147104a24(void)

undefined8 FUN_147104a24(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147104a3a FUN_147104a3a body=322 status=ok
// SIG undefined FUN_147104a3a(void)

void FUN_147104a3a(undefined8 *param_1,uint param_2)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x000147104a5b:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           ((double)param_1[iVar6] < (double)param_1[iVar7] ||
            (double)param_1[iVar6] == (double)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        dVar1 = (double)param_1[iVar3];
        if (dVar1 < (double)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = dVar1;
          iVar3 = iVar6;
          goto joined_r0x000147104a5b;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((double)param_1[iVar6] < (double)param_1[iVar3] ||
                (double)param_1[iVar6] == (double)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            dVar1 = (double)param_1[iVar8];
            if ((double)param_1[iVar7] <= dVar1) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = dVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147104b7c FUN_147104b7c body=201 status=ok
// SIG undefined FUN_147104b7c(void)

void FUN_147104b7c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 147104c46 FUN_147104c46 body=48 status=ok
// SIG undefined FUN_147104c46(void)

void FUN_147104c46(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147104c76 FUN_147104c76 body=1276 status=ok
// SIG undefined FUN_147104c76(void)

int FUN_147104c76(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  double *pdVar9;
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
  undefined1 auStack_178 [32];
  undefined1 local_158 [104];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  iVar5 = *(int *)(param_1 + 0x4f8);
  if (iVar5 < 1) {
    iVar7 = 0;
  }
  else {
    pdVar9 = (double *)(param_1 + 0x18);
    lVar8 = 0;
    iVar7 = 0;
    do {
      if (0.0 < pdVar9[0x12]) {
        dVar12 = pdVar9[0x13];
        if (dVar12 == 0.0) {
          dVar13 = *pdVar9;
          dVar3 = pdVar9[1];
          dVar1 = pdVar9[2];
        }
        else {
          dVar13 = *pdVar9 * *(double *)((longlong)dVar12 + 0x170);
          dVar15 = pdVar9[1] * *(double *)((longlong)dVar12 + 0x178);
          dVar10 = pdVar9[2] * *(double *)((longlong)dVar12 + 0x180);
          dVar14 = *(double *)((longlong)dVar12 + 0x130);
          dVar4 = *(double *)((longlong)dVar12 + 0x138);
          dVar3 = *(double *)((longlong)dVar12 + 0x140);
          dVar1 = *(double *)((longlong)dVar12 + 0x148);
          dVar18 = dVar15 * dVar14 - dVar13 * dVar4;
          dVar19 = dVar10 * dVar4 - dVar15 * dVar3;
          dVar20 = dVar13 * dVar3 - dVar14 * dVar10;
          dVar19 = dVar19 + dVar19;
          dVar20 = dVar20 + dVar20;
          dVar18 = dVar18 + dVar18;
          dVar13 = (dVar18 * dVar4 - dVar20 * dVar3) + dVar1 * dVar19 + dVar13 +
                   *(double *)((longlong)dVar12 + 0x150);
          dVar3 = (dVar3 * dVar19 - dVar14 * dVar18) +
                  *(double *)((longlong)dVar12 + 0x148) * dVar20 + dVar15 +
                  *(double *)((longlong)dVar12 + 0x158);
          dVar1 = dVar18 * dVar1 + dVar10 + (dVar20 * dVar14 - dVar19 * dVar4) +
                  *(double *)((longlong)dVar12 + 0x160);
        }
        dVar18 = pdVar9[0x14];
        if (dVar18 == 0.0) {
          dVar14 = pdVar9[3];
          dVar4 = pdVar9[4];
          dVar20 = pdVar9[5];
        }
        else {
          dVar14 = pdVar9[3] * *(double *)((longlong)dVar18 + 0x170);
          dVar16 = pdVar9[4] * *(double *)((longlong)dVar18 + 0x178);
          dVar11 = pdVar9[5] * *(double *)((longlong)dVar18 + 0x180);
          dVar19 = *(double *)((longlong)dVar18 + 0x130);
          dVar2 = *(double *)((longlong)dVar18 + 0x138);
          dVar4 = *(double *)((longlong)dVar18 + 0x140);
          dVar20 = *(double *)((longlong)dVar18 + 0x148);
          dVar10 = dVar16 * dVar19 - dVar14 * dVar2;
          dVar21 = dVar11 * dVar2 - dVar16 * dVar4;
          dVar15 = dVar14 * dVar4 - dVar19 * dVar11;
          dVar21 = dVar21 + dVar21;
          dVar15 = dVar15 + dVar15;
          dVar10 = dVar10 + dVar10;
          dVar14 = (dVar10 * dVar2 - dVar15 * dVar4) + dVar20 * dVar21 + dVar14 +
                   *(double *)((longlong)dVar18 + 0x150);
          dVar4 = (dVar4 * dVar21 - dVar19 * dVar10) +
                  *(double *)((longlong)dVar18 + 0x148) * dVar15 + dVar16 +
                  *(double *)((longlong)dVar18 + 0x158);
          dVar20 = dVar10 * dVar20 + dVar11 + (dVar15 * dVar19 - dVar21 * dVar2) +
                   *(double *)((longlong)dVar18 + 0x160);
        }
        if (dVar12 != 0.0) {
          FUN_144941734(dVar12,local_158);
        }
        if (dVar18 != 0.0) {
          FUN_144941734(dVar18,local_158);
        }
        if (dVar12 == 0.0) {
          dVar12 = pdVar9[0xc];
          dVar18 = pdVar9[0xd];
          dVar10 = pdVar9[0xe];
        }
        else {
          dVar15 = pdVar9[0xc];
          dVar18 = pdVar9[0xd];
          dVar10 = pdVar9[0xe];
          dVar19 = *(double *)((longlong)dVar12 + 0x140);
          dVar2 = *(double *)((longlong)dVar12 + 0x130);
          dVar11 = *(double *)((longlong)dVar12 + 0x138);
          dVar16 = dVar11 * dVar10 - dVar18 * dVar19;
          dVar16 = dVar16 + dVar16;
          dVar12 = *(double *)((longlong)dVar12 + 0x148);
          dVar21 = dVar2 * dVar18 - dVar15 * dVar11;
          dVar21 = dVar21 + dVar21;
          dVar17 = dVar19 * dVar15 - dVar10 * dVar2;
          dVar17 = dVar17 + dVar17;
          dVar10 = (dVar2 * dVar17 - dVar16 * dVar11) + dVar12 * dVar21 + dVar10;
          dVar18 = (dVar19 * dVar16 - dVar21 * dVar2) + dVar12 * dVar17 + dVar18;
          dVar12 = (dVar11 * dVar21 - dVar17 * dVar19) + dVar12 * dVar16 + dVar15;
        }
        lVar6 = (longlong)iVar7;
        iVar7 = iVar7 + 1;
        *(double *)(param_2 + lVar6 * 8) =
             (dVar13 - dVar14) * dVar12 + (dVar3 - dVar4) * dVar18 + (dVar1 - dVar20) * dVar10;
        iVar5 = *(int *)(param_1 + 0x4f8);
      }
      lVar8 = lVar8 + 1;
      pdVar9 = pdVar9 + 0x27;
    } while (lVar8 < iVar5);
  }
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 14710519c FUN_14710519c body=174 status=ok
// SIG undefined FUN_14710519c(void)

double * FUN_14710519c(double *param_1,longlong param_2,longlong param_3,double *param_4,
                      double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  
  dVar1 = param_4[1];
  dVar2 = param_4[2];
  uVar8 = (ulonglong)(param_5[2] * dVar2 + *param_5 * *param_4 + param_5[1] * dVar1 <= 0.0);
  dVar3 = *(double *)(param_2 + 0x30);
  dVar4 = param_5[uVar8 * 3 + 2];
  dVar5 = *(double *)(param_2 + 0x28);
  dVar6 = param_5[uVar8 * 3 + 1];
  dVar7 = *(double *)(param_3 + 0x40);
  *param_1 = *param_4 * dVar7 + *(double *)(param_2 + 0x20) + param_5[uVar8 * 3];
  param_1[1] = dVar1 * dVar7 + dVar5 + dVar6;
  param_1[2] = dVar2 * dVar7 + dVar3 + dVar4;
  return param_1;
}



// FUNCTION 14710524a FUN_14710524a body=175 status=ok
// SIG undefined FUN_14710524a(void)

double * FUN_14710524a(double *param_1,longlong param_2,longlong param_3,double *param_4,
                      double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  
  dVar1 = param_4[1];
  dVar2 = param_4[2];
  uVar8 = (ulonglong)(param_5[2] * dVar2 + *param_5 * *param_4 + param_5[1] * dVar1 <= 0.0);
  dVar3 = *(double *)(param_2 + 0x30);
  dVar4 = param_5[uVar8 * 3 + 2];
  dVar5 = *(double *)(param_2 + 0x28);
  dVar6 = param_5[uVar8 * 3 + 1];
  dVar7 = *(double *)(param_3 + 0x40 + uVar8 * 8);
  *param_1 = *param_4 * dVar7 + *(double *)(param_2 + 0x20) + param_5[uVar8 * 3];
  param_1[1] = dVar1 * dVar7 + dVar5 + dVar6;
  param_1[2] = dVar2 * dVar7 + dVar3 + dVar4;
  return param_1;
}



// FUNCTION 1471053b7 FUN_1471053b7 body=315 status=ok
// SIG undefined FUN_1471053b7(void)

void FUN_1471053b7(double *param_1,undefined8 param_2,longlong param_3,double *param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = *param_4;
  dVar7 = param_4[1];
  dVar1 = *(double *)(param_3 + 0x68);
  dVar2 = param_4[2];
  dVar3 = *(double *)(param_3 + 0x70);
  dVar6 = 0.0;
  if (dVar2 * dVar3 + dVar8 * *(double *)(param_3 + 0x60) + dVar7 * dVar1 <= 0.0) {
    dVar6 = -*(double *)(param_3 + 0x90);
  }
  dVar4 = param_5[2] * dVar2 + *param_5 * dVar8 + param_5[1] * dVar7;
  dVar7 = dVar2 * param_5[5] + dVar8 * param_5[3] + dVar7 * param_5[4];
  dVar8 = dVar7;
  if (dVar7 <= dVar4) {
    dVar8 = dVar4;
  }
  lVar5 = 0;
  if (0.0 <= dVar8) {
    lVar5 = (ulonglong)(dVar7 <= dVar4) + 1;
  }
  dVar8 = *(double *)(param_3 + 0x28 + lVar5 * 0x18);
  dVar7 = *(double *)(param_3 + 0x20 + lVar5 * 0x18);
  *param_1 = *(double *)(param_3 + 0x60) * dVar6 + *(double *)(param_3 + 0x18 + lVar5 * 0x18);
  param_1[1] = dVar1 * dVar6 + dVar7;
  param_1[2] = dVar3 * dVar6 + dVar8;
  return;
}



// FUNCTION 1471054f2 FUN_1471054f2 body=1107 status=ok
// SIG undefined FUN_1471054f2(void)

void FUN_1471054f2(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 local_1d8 [32];
  undefined8 local_1b8;
  uint local_1a4;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  undefined1 local_188 [16];
  ulonglong local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158 [2];
  ulonglong local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  double local_110;
  double dStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)local_1d8;
  dVar15 = *(double *)(param_1 + 0x278);
  dVar17 = *(double *)(param_1 + 0x280);
  uVar13 = SUB84(dVar17,0);
  uVar14 = (undefined4)((ulonglong)dVar17 >> 0x20);
  dVar10 = *(double *)(param_1 + 0x288);
  if (dVar10 * dVar10 + dVar15 * dVar15 + dVar17 * dVar17 < 9.99999993922529e-09) {
    *(undefined8 *)(param_1 + 0x278) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    dVar15 = 1.0;
    dVar10 = 0.0;
    uVar13 = 0;
    uVar14 = 0;
  }
  dVar17 = (double)CONCAT44(uVar14,uVar13);
  uVar7 = (uint)*(ushort *)(param_1 + 0x270);
  if (*(ushort *)(param_1 + 0x270) < 4) {
    local_190 = param_1 + 0x60;
    local_198 = param_1 + 0x1b0;
    local_1a0 = param_1 + 0xf0;
    do {
      local_148 = 0;
      local_138 = -dVar15;
      local_130 = 0;
      local_128 = -dVar17;
      local_118 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_d0 = -dVar10;
      local_e0 = 0;
      lVar9 = 0;
      local_1a4 = uVar7;
      local_158[0] = dVar17;
      local_158[1] = dVar15;
      local_140 = dVar17;
      local_120 = dVar15;
      local_110 = local_128;
      dStack_108 = local_138;
      local_f0 = dVar17;
      local_e8 = dVar10;
      local_d8 = dVar17;
      do {
        uVar1 = *(undefined8 *)(param_1 + 0xd8);
        uVar2 = *(undefined8 *)(param_1 + 200);
        pcVar3 = *(code **)(param_1 + 0xe8);
        local_1b8 = *(undefined8 *)(param_1 + 0xd0);
        (**(code **)(param_1 + 0xe0))
                  (&local_170,param_1,*(undefined8 *)(param_1 + 0xc0),
                   (ulonglong *)((longlong)local_158 + lVar9));
        dVar10 = local_160;
        dVar17 = local_168;
        dVar15 = local_170;
        local_178 = *(ulonglong *)((longlong)&local_148 + lVar9) ^ 0x8000000000000000;
        uVar5 = *(undefined8 *)((longlong)local_158 + lVar9 + 8);
        local_188._8_4_ = (int)uVar5;
        local_188._0_8_ = *(ulonglong *)((longlong)local_158 + lVar9) ^ 0x8000000000000000;
        local_188._12_4_ = (uint)((ulonglong)uVar5 >> 0x20) ^ 0x80000000;
        local_1b8 = uVar1;
        (*pcVar3)(&local_170,local_190,uVar2,local_188);
        uVar6 = *(ushort *)(param_1 + 0x270);
        if (uVar6 == 4) {
          *(undefined2 *)(param_1 + 0x270) = 0;
          uVar6 = 0;
        }
        dVar11 = dVar10 - local_160;
        dVar16 = dVar17 - local_168;
        dVar12 = dVar15 - local_170;
        uVar8 = (ulonglong)uVar6;
        *(double *)(local_198 + uVar8 * 0x18) = dVar12;
        *(double *)(local_198 + 8 + uVar8 * 0x18) = dVar16;
        *(double *)(local_198 + 0x10 + uVar8 * 0x18) = dVar11;
        uVar8 = (ulonglong)*(ushort *)(param_1 + 0x270);
        *(double *)(local_1a0 + uVar8 * 0x18) = dVar15;
        *(double *)(local_1a0 + 8 + uVar8 * 0x18) = dVar17;
        *(double *)(local_1a0 + 0x10 + uVar8 * 0x18) = dVar10;
        uVar8 = (ulonglong)*(ushort *)(param_1 + 0x270);
        *(ushort *)(param_1 + 0x270) = *(ushort *)(param_1 + 0x270) + 1;
        *(double *)(param_1 + 0x150 + uVar8 * 0x18) = local_170;
        *(double *)(param_1 + 0x158 + uVar8 * 0x18) = local_168;
        *(double *)(param_1 + 0x160 + uVar8 * 0x18) = local_160;
        *(short *)(param_1 + 0x274) = *(short *)(param_1 + 0x274) + 1;
        dVar10 = -dVar11;
        dVar17 = -dVar16;
        dVar15 = -dVar12;
        auVar4._8_4_ = SUB84(dVar16,0);
        auVar4._0_8_ = dVar15;
        auVar4._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x278) = auVar4;
        *(double *)(param_1 + 0x288) = dVar10;
        dVar12 = dVar11 * dVar11 + dVar12 * dVar12 + dVar16 * dVar16;
        if (9.99999993922529e-09 < dVar12) {
          dVar12 = 1.0 / SQRT(dVar12);
          dVar15 = dVar12 * dVar15;
          *(double *)(param_1 + 0x278) = dVar15;
          dVar17 = dVar12 * dVar17;
          *(double *)(param_1 + 0x280) = dVar17;
          dVar10 = dVar12 * dVar10;
          *(double *)(param_1 + 0x288) = dVar10;
          break;
        }
        *(short *)(param_1 + 0x270) = *(short *)(param_1 + 0x270) + -1;
        lVar9 = lVar9 + 0x18;
      } while (lVar9 != 0x90);
      uVar7 = local_1a4 + 1;
    } while ((short)uVar7 != 4);
  }
  if ((local_c0 ^ (ulonglong)local_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147105946 FUN_147105946 body=1434 status=ok
// SIG undefined FUN_147105946(void)

double FUN_147105946(longlong param_1,double *param_2,double *param_3)

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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar3 = -1.0;
  if (*(char *)(param_1 + 0x272) == '\0') {
    dVar1 = *(double *)(param_1 + 0x1b0);
    dVar13 = *(double *)(param_1 + 0x1b8);
    dVar2 = *(double *)(param_1 + 0x1c0);
    dVar11 = *(double *)(param_1 + 0x288) * dVar2 +
             *(double *)(param_1 + 0x278) * dVar1 + *(double *)(param_1 + 0x280) * dVar13;
    dVar3 = dVar11;
    if (*(ushort *)(param_1 + 0x270) - 1 < 4) {
      dVar12 = *(double *)(param_1 + 0x288) * dVar11;
      dVar17 = *(double *)(param_1 + 0x280) * dVar11;
      dVar15 = *(double *)(param_1 + 0x278) * dVar11;
      dVar3 = -1.0;
      switch((uint)*(ushort *)(param_1 + 0x270)) {
      case 2:
        dVar16 = *(double *)(param_1 + 0x1d8) - dVar2;
        dVar5 = *(double *)(param_1 + 0x1d0) - dVar13;
        dVar4 = *(double *)(param_1 + 0x1c8) - dVar1;
        dVar3 = dVar16 * dVar16 + dVar4 * dVar4 + dVar5 * dVar5;
        if (9.99999993922529e-09 <= ABS(dVar3 * dVar3)) {
          dVar12 = (dVar3 * ((dVar12 - dVar2) * dVar16 +
                            (dVar15 - dVar1) * dVar4 + (dVar17 - dVar13) * dVar5)) / (dVar3 * dVar3)
          ;
          dVar15 = 1.0 - dVar12;
          dVar3 = *(double *)(param_1 + 0x100);
          dVar1 = *(double *)(param_1 + 0xf8);
          dVar13 = *(double *)(param_1 + 0x118);
          dVar2 = *(double *)(param_1 + 0x110);
          *param_2 = *(double *)(param_1 + 0x108) * dVar12 + *(double *)(param_1 + 0xf0) * dVar15;
          param_2[1] = dVar2 * dVar12 + dVar1 * dVar15;
          param_2[2] = dVar13 * dVar12 + dVar3 * dVar15;
          dVar3 = *(double *)(param_1 + 0x160);
          dVar1 = *(double *)(param_1 + 0x158);
          dVar13 = *(double *)(param_1 + 0x178);
          dVar2 = *(double *)(param_1 + 0x170);
          *param_3 = dVar12 * *(double *)(param_1 + 0x168) + dVar15 * *(double *)(param_1 + 0x150);
          param_3[1] = dVar2 * dVar12 + dVar1 * dVar15;
          param_3[2] = dVar13 * dVar12 + dVar3 * dVar15;
          return dVar11;
        }
        break;
      case 3:
        dVar5 = *(double *)(param_1 + 0x1d8) - dVar2;
        dVar8 = *(double *)(param_1 + 0x1d0) - dVar13;
        dVar7 = *(double *)(param_1 + 0x1c8) - dVar1;
        dVar16 = *(double *)(param_1 + 0x1f0) - dVar2;
        dVar10 = *(double *)(param_1 + 0x1e8) - dVar13;
        dVar9 = *(double *)(param_1 + 0x1e0) - dVar1;
        dVar4 = dVar5 * dVar5 + dVar7 * dVar7 + dVar8 * dVar8;
        dVar6 = dVar5 * dVar16 + dVar7 * dVar9 + dVar8 * dVar10;
        dVar3 = dVar16 * dVar16 + dVar9 * dVar9 + dVar10 * dVar10;
        dVar14 = dVar4 * dVar3 - dVar6 * dVar6;
        if (9.99999993922529e-09 <= ABS(dVar14)) {
          dVar12 = dVar12 - dVar2;
          dVar15 = dVar15 - dVar1;
          dVar17 = dVar17 - dVar13;
          dVar1 = dVar16 * dVar12 + dVar9 * dVar15 + dVar10 * dVar17;
          dVar13 = dVar12 * dVar5 + dVar15 * dVar7 + dVar17 * dVar8;
          dVar17 = (dVar3 * dVar13 + dVar1 * -dVar6) / dVar14;
          dVar14 = (dVar13 * -dVar6 + dVar4 * dVar1) / dVar14;
          dVar16 = (1.0 - dVar17) - dVar14;
          dVar3 = *(double *)(param_1 + 0x100);
          dVar1 = *(double *)(param_1 + 0xf8);
          dVar13 = *(double *)(param_1 + 0x118);
          dVar2 = *(double *)(param_1 + 0x110);
          dVar12 = *(double *)(param_1 + 0x130);
          dVar15 = *(double *)(param_1 + 0x128);
          *param_2 = *(double *)(param_1 + 0x120) * dVar14 +
                     *(double *)(param_1 + 0x108) * dVar17 + *(double *)(param_1 + 0xf0) * dVar16;
          param_2[1] = dVar15 * dVar14 + dVar2 * dVar17 + dVar1 * dVar16;
          param_2[2] = dVar12 * dVar14 + dVar13 * dVar17 + dVar3 * dVar16;
          dVar3 = *(double *)(param_1 + 0x160);
          dVar1 = *(double *)(param_1 + 0x158);
          dVar13 = *(double *)(param_1 + 0x178);
          dVar2 = *(double *)(param_1 + 0x170);
          dVar12 = *(double *)(param_1 + 400);
          dVar15 = *(double *)(param_1 + 0x188);
          *param_3 = dVar14 * *(double *)(param_1 + 0x180) +
                     dVar17 * *(double *)(param_1 + 0x168) + dVar16 * *(double *)(param_1 + 0x150);
          param_3[1] = dVar15 * dVar14 + dVar2 * dVar17 + dVar1 * dVar16;
          param_3[2] = dVar12 * dVar14 + dVar13 * dVar17 + dVar3 * dVar16;
          return dVar11;
        }
        break;
      case 4:
        goto switchD_147105a78_caseD_4;
      }
      param_2[2] = *(double *)(param_1 + 0x100);
      dVar3 = *(double *)(param_1 + 0xf8);
      *param_2 = *(double *)(param_1 + 0xf0);
      param_2[1] = dVar3;
      param_3[2] = *(double *)(param_1 + 0x160);
      dVar3 = *(double *)(param_1 + 0x158);
      *param_3 = *(double *)(param_1 + 0x150);
      param_3[1] = dVar3;
      dVar3 = dVar11;
    }
  }
switchD_147105a78_caseD_4:
  return dVar3;
}



// FUNCTION 147105ee0 FUN_147105ee0 body=59 status=ok
// SIG undefined FUN_147105ee0(void)

undefined8 * FUN_147105ee0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *param_2 = *(undefined8 *)(param_1 + 0x40);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = uVar2;
  param_2[6] = uVar1;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  return param_2;
}



// FUNCTION 147105f1b FUN_147105f1b body=1993 status=ok
// SIG undefined FUN_147105f1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147105f1b(undefined8 param_1,undefined8 param_2,double *param_3,longlong param_4,
                  double *param_5,longlong param_6,undefined8 param_7)

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
  undefined1 auVar11 [16];
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
  double dVar22;
  undefined1 auStack_2c8 [40];
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_280;
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
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_1f8 = param_3[4];
  dStack_1f0 = param_3[5];
  dVar5 = param_3[6];
  dVar19 = *(double *)(param_4 + 0x10) + local_1f8;
  dVar18 = *(double *)(param_4 + 0x18) + dStack_1f0;
  dVar6 = param_5[4];
  dVar7 = param_5[5];
  dVar8 = param_5[6];
  dVar3 = *(double *)(param_6 + 0x10) + dVar6;
  dVar4 = *(double *)(param_6 + 0x18) + dVar7;
  dVar13 = *(double *)(param_6 + 0x20) + dVar8;
  dVar16 = *(double *)(param_4 + 0x20) + dVar5;
  dVar10 = dVar13 - dVar16;
  dVar17 = dVar4 - dVar18;
  dVar12 = dVar3 - dVar19;
  dVar9 = dVar10 * dVar10 + dVar12 * dVar12 + dVar17 * dVar17;
  dVar15 = *(double *)(param_4 + 0x28);
  dVar1 = *(double *)(param_6 + 0x28);
  if (dVar9 < (dVar15 + dVar1) * (dVar15 + dVar1)) {
    local_2a0 = 1.0 / SQRT(dVar9);
    local_278 = dVar12 * local_2a0;
    dVar17 = dVar17 * local_2a0;
    local_2a0 = dVar10 * local_2a0;
    local_e0 = 0xffffffffffffffff;
    local_d8 = 0xffffffff;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_258 = *param_3;
    dStack_250 = param_3[1];
    dVar20 = -local_258;
    dVar21 = -dStack_250;
    dVar22 = dVar20 * dVar17 - local_278 * dVar21;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar4,0);
    local_238._0_8_ = dVar3;
    local_238._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    dVar9 = param_3[2] * -1.0;
    dVar10 = param_3[3] * 1.0;
    dVar12 = dVar9 * local_278 - local_2a0 * dVar20;
    dVar14 = dVar21 * local_2a0 - dVar17 * dVar9;
    dVar12 = dVar12 + dVar12;
    dVar14 = dVar14 + dVar14;
    dVar22 = dVar22 + dVar22;
    local_178 = (dVar20 * dVar12 - dVar14 * dVar21) + dVar10 * dVar22 + local_2a0;
    local_180 = (dVar9 * dVar14 - dVar22 * dVar20) + dVar10 * dVar12 + dVar17;
    local_188 = (dVar21 * dVar22 - dVar12 * dVar9) + dVar10 * dVar14 + local_278;
    local_208 = dVar16 + dVar15 * local_2a0;
    local_280 = dVar15 * dVar17 + dVar18;
    local_1b8 = dVar19 + dVar15 * local_278;
    uStack_200 = 0;
    dVar12 = local_1b8 - local_1f8;
    dVar14 = local_280 - dStack_1f0;
    dVar18 = local_208 - dVar5;
    dVar19 = dVar12 * dVar9 - dVar20 * dVar18;
    dVar15 = dVar14 * dVar20 - dVar21 * dVar12;
    dVar16 = dVar18 * dVar21 - dVar9 * dVar14;
    dVar16 = dVar16 + dVar16;
    dVar19 = dVar19 + dVar19;
    dVar15 = dVar15 + dVar15;
    auVar2 = *(undefined1 (*) [16])(param_3 + 8);
    auVar11 = divpd(_DAT_149934d80,auVar2);
    local_1e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar11._0_8_) *
                ((dVar15 * dVar21 - dVar19 * dVar9) + dVar10 * dVar16 + dVar12);
    dStack_1e0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar11._8_8_) *
                 (local_258 * dVar15 + dVar9 * dVar16 + dVar10 * dVar19 + dVar14);
    local_1d8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_3[10])) &
                        (ulonglong)(1.0 / param_3[10])) *
                (dVar15 * dVar10 + dVar18 + (dVar19 * dVar20 - dVar16 * dVar21));
    dVar20 = -*param_5;
    dVar21 = -param_5[1];
    dVar19 = local_278 * dVar21 - dVar20 * dVar17;
    dVar10 = param_5[2] * -1.0;
    dVar12 = param_5[3] * 1.0;
    dVar15 = local_2a0 * dVar20 - dVar10 * local_278;
    dVar16 = dVar17 * dVar10 - dVar21 * local_2a0;
    dVar15 = dVar15 + dVar15;
    dVar16 = dVar16 + dVar16;
    dVar19 = dVar19 + dVar19;
    local_160 = (dVar20 * dVar15 - dVar16 * dVar21) + (dVar12 * dVar19 - local_2a0);
    local_168 = (dVar10 * dVar16 - dVar19 * dVar20) + (dVar12 * dVar15 - dVar17);
    local_170 = (dVar21 * dVar19 - dVar15 * dVar10) + (dVar12 * dVar16 - local_278);
    local_190 = dVar13 - dVar1 * local_2a0;
    local_298 = dVar4 - dVar1 * dVar17;
    local_1a0 = dVar3 - dVar1 * local_278;
    dVar16 = local_1a0 - dVar6;
    dVar3 = local_298 - dVar7;
    dVar15 = local_190 - dVar8;
    dVar19 = dVar16 * dVar10 - dVar20 * dVar15;
    dVar18 = dVar3 * dVar20 - dVar21 * dVar16;
    dVar9 = dVar15 * dVar21 - dVar10 * dVar3;
    dVar9 = dVar9 + dVar9;
    dVar19 = dVar19 + dVar19;
    dVar18 = dVar18 + dVar18;
    auVar2 = *(undefined1 (*) [16])(param_5 + 8);
    auVar11 = divpd(_DAT_149934d80,auVar2);
    local_1d0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar11._0_8_) *
                ((dVar18 * dVar21 - dVar19 * dVar10) + dVar12 * dVar9 + dVar16);
    dStack_1c8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar11._8_8_) *
                 (*param_5 * dVar18 + dVar10 * dVar9 + dVar12 * dVar19 + dVar3);
    local_1c0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_5[10])) &
                        (ulonglong)(1.0 / param_5[10])) *
                (dVar18 * dVar12 + dVar15 + (dVar19 * dVar20 - dVar9 * dVar21));
    local_158 = (local_190 - local_208) * local_2a0 +
                (local_1a0 - local_1b8) * local_278 + (local_298 - local_280) * dVar17;
    dStack_290 = dVar4;
    local_288 = dVar1;
    dStack_270 = dVar4;
    local_268 = dVar5;
    dStack_260 = param_3[7];
    local_248 = dVar13;
    local_228 = dVar6;
    dStack_220 = dVar7;
    local_218 = dVar8;
    dStack_210 = param_5[7];
    dStack_1b0 = local_280;
    local_1a8 = local_208;
    dStack_198 = local_298;
    local_150 = param_1;
    local_148 = param_2;
    FUN_1404486c6(param_7,&local_1e8);
  }
  if ((local_b0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471066e5 FUN_1471066e5 body=4041 status=ok
// SIG undefined FUN_1471066e5(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1471066e5(undefined8 param_1,undefined8 param_2,double *param_3,longlong param_4,
                  double *param_5,longlong param_6,undefined8 param_7)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar31;
  undefined1 auVar29 [16];
  double dVar32;
  undefined1 auVar30 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar46 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auStack_368 [8];
  undefined8 local_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
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
  double *pdVar13;
  
  auVar43 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)local_2e8;
  dVar35 = *(double *)(param_4 + 0x40);
  dVar38 = *(double *)(param_4 + 0x48);
  dVar36 = *(double *)(param_4 + 0x50);
  dVar42 = *(double *)(param_4 + 0x58);
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  auVar23 = *(undefined1 (*) [16])(param_3 + 8);
  dVar27 = auVar23._0_8_;
  dVar31 = auVar23._8_8_;
  auVar2 = *(undefined1 (*) [16])(param_3 + 10);
  dVar4 = auVar2._0_8_;
  dVar32 = (double)DAT_149934d80;
  dVar26 = DAT_149934d80._8_8_;
  auVar39 = minpd(_DAT_149934d80,auVar23);
  auVar45 = minpd(ZEXT816(0x3ff0000000000000),auVar2);
  auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
  auVar40._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
  iVar9 = movmskpd((int)local_f0,auVar40);
  auVar39._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
  auVar39._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
  uVar11 = movmskpd((int)param_1,auVar39);
  local_360 = param_2;
  if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar6 = *param_3;
    dVar7 = param_3[1];
    dVar44 = param_3[3];
    dVar5 = param_3[3];
    dVar48 = param_3[1];
    dVar1 = param_3[1];
    dVar22 = param_3[2];
    dVar25 = param_3[3];
    dVar28 = param_3[2];
    dVar47 = param_3[2];
    local_2f8 = dVar38 * dVar28 * -1.0 + dVar36 * dVar48 + dVar42 * *param_3 * 1.0 + dVar35 * dVar44
    ;
    dStack_2f0 = dVar35 * dVar47 * 1.0 + dVar42 * dVar1 + dVar36 * *param_3 * -1.0 + dVar38 * dVar5;
    dVar27 = *(double *)(param_4 + 0x20) * dVar27;
    dVar31 = *(double *)(param_4 + 0x28) * dVar31;
    dVar34 = *(double *)(param_4 + 0x30) * dVar4;
    dVar24 = auVar2._8_8_ * 0.0;
    dVar51 = dVar31 * dVar6 - dVar27 * dVar7;
    dVar33 = dVar34 * dVar7 - dVar31 * dVar22;
    dVar49 = dVar27 * dVar22 - dVar34 * dVar6;
    dVar50 = dVar24 * dVar25 - dVar24 * dVar25;
    dVar33 = dVar33 + dVar33;
    dVar49 = dVar49 + dVar49;
    dVar51 = dVar51 + dVar51;
    dVar50 = dVar50 + dVar50;
    local_2d8 = (dVar51 * dVar7 - dVar22 * dVar49) + dVar44 * dVar33 + dVar27 + param_3[4];
    dStack_2d0 = (dVar33 * dVar22 - dVar51 * dVar6) + dVar5 * dVar49 + dVar31 + param_3[5];
    local_2c8 = (dVar49 * dVar6 - dVar7 * dVar33) + dVar44 * dVar51 + dVar34 + param_3[6];
    dStack_2c0 = (dVar50 * dVar25 - dVar50 * dVar25) + dVar5 * dVar50 + dVar24 + param_3[7];
    local_2e8._8_8_ =
         dVar36 * dVar47 * -1.0 + ((*param_3 * dVar35 * -1.0 + dVar42 * dVar5) - dVar38 * dVar1);
    local_2e8._0_8_ =
         dVar42 * dVar28 * 1.0 + ((*param_3 * dVar38 * 1.0 + dVar36 * dVar44) - dVar35 * dVar48);
    uVar12 = 0;
  }
  else {
    dVar1 = *param_3;
    dVar28 = param_3[1];
    dVar44 = param_3[2];
    dVar47 = dVar28 + dVar28;
    dVar49 = dVar44 + dVar44;
    dVar48 = dVar1 * (dVar1 + dVar1);
    local_1f8 = (dVar32 - (dVar44 * dVar49 + dVar28 * dVar47)) * dVar27;
    dVar5 = (dVar26 - (dVar44 * dVar49 + dVar48)) * dVar31;
    dVar44 = param_3[3];
    dVar50 = dVar49 * dVar44;
    dVar51 = (dVar1 + dVar1) * param_3[3];
    dVar44 = dVar47 * dVar44;
    dStack_1b0 = (dVar49 * dVar28 - dVar51) * dVar4;
    local_1b8 = (dVar44 + *param_3 * dVar49) * dVar4;
    dStack_1f0 = (dVar47 * dVar1 + dVar50) * dVar27;
    local_1c8 = (dVar49 * dVar28 + dVar51) * dVar31;
    local_1a8 = (1.0 - (dVar48 + dVar28 * dVar47)) * dVar4;
    local_1e8 = (*param_3 * dVar49 - dVar44) * dVar27;
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar5,0);
    local_1d8._0_8_ = (dVar47 * dVar1 - dVar50) * dVar31;
    local_1d8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_3[4];
    dStack_190 = param_3[5];
    local_188 = param_3[6];
    uStack_180 = 0x3ff0000000000000;
    dVar48 = dVar38 + dVar38;
    dVar5 = dVar36 + dVar36;
    dVar44 = dVar35 * (dVar35 + dVar35);
    local_278 = dVar32 - (dVar36 * dVar5 + dVar38 * dVar48);
    dStack_250 = dVar26 - (dVar36 * dVar5 + dVar44);
    local_228 = 1.0 - (dVar44 + dVar38 * dVar48);
    dVar36 = (dVar35 + dVar35) * dVar42;
    dStack_270 = dVar48 * dVar35 + dVar5 * dVar42;
    local_248 = dVar5 * dVar38 + dVar36;
    local_258 = dVar48 * dVar35 - dVar5 * dVar42;
    dVar36 = dVar5 * dVar38 - dVar36;
    local_268 = dVar35 * dVar5 - dVar48 * dVar42;
    uStack_260 = 0;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar36,0);
    local_238._0_8_ = dVar48 * dVar42 + dVar35 * dVar5;
    local_238._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_218 = *(double *)(param_4 + 0x20);
    dStack_210 = *(double *)(param_4 + 0x28);
    local_208 = *(double *)(param_4 + 0x30);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar45._8_8_ = -(ulonglong)(0.0 <= dVar31);
    auVar45._0_8_ = -(ulonglong)(0.0 <= dVar27);
    auVar39 = blendvpd(_DAT_149936790,auVar43,auVar45);
    uVar19 = -(ulonglong)(0.0 <= dVar4 * 1.0);
    dVar27 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
    dVar31 = auVar39._0_8_;
    local_168 = local_168 * dVar31;
    local_170 = local_170 * dVar31;
    local_178 = local_178 * dVar31;
    dVar31 = auVar39._8_8_;
    local_148 = local_148 * dVar31;
    local_150 = local_150 * dVar31;
    local_158 = dVar31 * local_158;
    local_128 = local_128 * dVar27;
    local_130 = local_130 * dVar27;
    local_138 = dVar27 * local_138;
    pdVar13 = &local_358;
    iVar9 = FUN_14481fd10(pdVar13,&local_178);
    uVar12 = SUB84(pdVar13,0);
    dVar27 = (double)local_348._0_8_ * (double)local_348._0_8_ + local_358 * local_358;
    dVar31 = (double)local_348._8_8_ * (double)local_348._8_8_ + dStack_350 * dStack_350;
    auVar29._0_8_ = dVar27 + dVar31;
    auVar29._8_8_ = dVar27 + dVar31;
    auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar39 = sqrtpd(auVar29,auVar29);
    auVar39 = divpd(auVar43,auVar39);
    auVar37._0_8_ = auVar39._0_8_ * (double)local_348._0_8_;
    auVar37._8_8_ = auVar39._8_8_ * (double)local_348._8_8_;
    local_2f8 = (double)((ulonglong)(local_358 * auVar39._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
    dStack_2f0 = (double)((ulonglong)(dStack_350 * auVar39._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
    local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar20);
    local_2d8 = local_118;
    dStack_2d0 = dStack_110;
    local_2c8 = local_108;
    dStack_2c0 = 0.0;
  }
  dStack_2a0 = auVar2._8_8_ * 0.0;
  local_2a8 = dVar4 * 1.0;
  dVar35 = *(double *)(param_6 + 0x40);
  dVar38 = *(double *)(param_6 + 0x48);
  dVar36 = *(double *)(param_6 + 0x50);
  dVar42 = *(double *)(param_6 + 0x58);
  local_338 = 0.0;
  dStack_330 = 0.0;
  local_328 = 0.0;
  dStack_320 = 0.0;
  auVar2 = *(undefined1 (*) [16])(param_5 + 8);
  dVar27 = auVar2._0_8_;
  dVar31 = auVar2._8_8_;
  auVar39 = *(undefined1 (*) [16])(param_5 + 10);
  dVar4 = auVar39._0_8_;
  auVar40 = minpd(auVar43,auVar2);
  auVar45 = minpd(ZEXT816(0x3ff0000000000000),auVar39);
  auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
  auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
  iVar9 = movmskpd(iVar9,auVar41);
  auVar46._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
  auVar46._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
  uVar11 = movmskpd(uVar12,auVar46);
  local_2b8 = auVar23;
  if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar50 = *param_5;
    dVar51 = param_5[1];
    dVar26 = param_5[3];
    dVar32 = param_5[3];
    dVar5 = param_5[1];
    dVar44 = param_5[1];
    dVar6 = param_5[2];
    dVar7 = param_5[3];
    dVar48 = param_5[2];
    dVar1 = param_5[2];
    local_358 = dVar38 * dVar48 * -1.0 + dVar36 * dVar5 + dVar42 * *param_5 * 1.0 + dVar35 * dVar26;
    dStack_350 = dVar35 * dVar1 * 1.0 + dVar42 * dVar44 + dVar36 * *param_5 * -1.0 + dVar38 * dVar32
    ;
    dVar27 = *(double *)(param_6 + 0x20) * dVar27;
    dVar31 = *(double *)(param_6 + 0x28) * dVar31;
    dVar22 = *(double *)(param_6 + 0x30) * dVar4;
    dVar25 = auVar39._8_8_ * 0.0;
    dVar28 = dVar31 * dVar50 - dVar27 * dVar51;
    dVar34 = dVar22 * dVar51 - dVar31 * dVar6;
    dVar49 = dVar27 * dVar6 - dVar22 * dVar50;
    dVar47 = dVar25 * dVar7 - dVar25 * dVar7;
    dVar34 = dVar34 + dVar34;
    dVar49 = dVar49 + dVar49;
    dVar28 = dVar28 + dVar28;
    dVar47 = dVar47 + dVar47;
    local_338 = (dVar28 * dVar51 - dVar6 * dVar49) + dVar26 * dVar34 + dVar27 + param_5[4];
    dStack_330 = (dVar34 * dVar6 - dVar28 * dVar50) + dVar32 * dVar49 + dVar31 + param_5[5];
    local_328 = (dVar49 * dVar50 - dVar51 * dVar34) + dVar26 * dVar28 + dVar22 + param_5[6];
    dStack_320 = (dVar47 * dVar7 - dVar47 * dVar7) + dVar32 * dVar47 + dVar25 + param_5[7];
    local_348._8_8_ =
         dVar36 * dVar1 * -1.0 + ((*param_5 * dVar35 * -1.0 + dVar42 * dVar32) - dVar38 * dVar44);
    local_348._0_8_ =
         dVar42 * dVar48 * 1.0 + ((*param_5 * dVar38 * 1.0 + dVar36 * dVar26) - dVar35 * dVar5);
  }
  else {
    dVar1 = *param_5;
    dVar28 = param_5[1];
    dVar44 = param_5[2];
    dVar47 = dVar28 + dVar28;
    dVar49 = dVar44 + dVar44;
    dVar48 = dVar1 * (dVar1 + dVar1);
    local_1f8 = (dVar32 - (dVar44 * dVar49 + dVar28 * dVar47)) * dVar27;
    dVar5 = (dVar26 - (dVar44 * dVar49 + dVar48)) * dVar31;
    dVar44 = param_5[3];
    dVar50 = dVar49 * dVar44;
    dVar51 = (dVar1 + dVar1) * param_5[3];
    dVar44 = dVar47 * dVar44;
    dStack_1b0 = (dVar49 * dVar28 - dVar51) * dVar4;
    local_1b8 = (dVar44 + *param_5 * dVar49) * dVar4;
    dStack_1f0 = (dVar47 * dVar1 + dVar50) * dVar27;
    local_1c8 = (dVar49 * dVar28 + dVar51) * dVar31;
    local_1a8 = (1.0 - (dVar48 + dVar28 * dVar47)) * dVar4;
    local_1e8 = (*param_5 * dVar49 - dVar44) * dVar27;
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar5,0);
    local_1d8._0_8_ = (dVar47 * dVar1 - dVar50) * dVar31;
    local_1d8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_5[4];
    dStack_190 = param_5[5];
    local_188 = param_5[6];
    uStack_180 = 0x3ff0000000000000;
    dVar48 = dVar38 + dVar38;
    dVar5 = dVar36 + dVar36;
    dVar44 = dVar35 * (dVar35 + dVar35);
    local_278 = dVar32 - (dVar36 * dVar5 + dVar38 * dVar48);
    dStack_250 = dVar26 - (dVar36 * dVar5 + dVar44);
    local_228 = 1.0 - (dVar44 + dVar38 * dVar48);
    dVar32 = (dVar35 + dVar35) * dVar42;
    dStack_270 = dVar48 * dVar35 + dVar5 * dVar42;
    local_248 = dVar5 * dVar38 + dVar32;
    local_258 = dVar48 * dVar35 - dVar5 * dVar42;
    dVar32 = dVar5 * dVar38 - dVar32;
    local_268 = dVar35 * dVar5 - dVar48 * dVar42;
    uStack_260 = 0;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar32,0);
    local_238._0_8_ = dVar48 * dVar42 + dVar35 * dVar5;
    local_238._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_218 = *(double *)(param_6 + 0x20);
    dStack_210 = *(double *)(param_6 + 0x28);
    local_208 = *(double *)(param_6 + 0x30);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar23._8_8_ = -(ulonglong)(0.0 <= dVar31);
    auVar23._0_8_ = -(ulonglong)(0.0 <= dVar27);
    auVar23 = blendvpd(_DAT_149936790,auVar43,auVar23);
    uVar19 = -(ulonglong)(0.0 <= dVar4 * 1.0);
    dVar27 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
    dVar32 = auVar23._0_8_;
    local_168 = local_168 * dVar32;
    local_170 = local_170 * dVar32;
    local_178 = local_178 * dVar32;
    dVar32 = auVar23._8_8_;
    local_148 = local_148 * dVar32;
    local_150 = local_150 * dVar32;
    local_158 = dVar32 * local_158;
    local_128 = local_128 * dVar27;
    local_130 = local_130 * dVar27;
    local_138 = dVar27 * local_138;
    FUN_14481fd10(&local_298,&local_178);
    dVar27 = local_288 * local_288 + local_298 * local_298;
    dVar32 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar30._0_8_ = dVar27 + dVar32;
    auVar30._8_8_ = dVar27 + dVar32;
    auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
    auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
    auVar23 = sqrtpd(auVar30,auVar30);
    auVar23 = divpd(auVar43,auVar23);
    auVar43._0_8_ = auVar23._0_8_ * local_288;
    auVar43._8_8_ = auVar23._8_8_ * dStack_280;
    local_358 = (double)((ulonglong)(local_298 * auVar23._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
    dStack_350 = (double)((ulonglong)(dStack_290 * auVar23._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
    local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar21);
    local_338 = local_118;
    dStack_330 = dStack_110;
    local_328 = local_108;
    dStack_320 = 0.0;
  }
  dStack_300 = auVar39._8_8_ * 0.0;
  local_308 = dVar4 * 1.0;
  puVar15 = auStack_368;
  iVar9 = *(int *)(param_4 + 0x18);
  lVar16 = (longlong)iVar9;
  if (lVar16 == 0) {
    puVar14 = (undefined1 *)0x0;
  }
  else {
    lVar18 = -(lVar16 * 0x18 + 0x1eU & 0xfffffffffffffff0);
    puVar15 = auStack_368 + lVar18;
    puVar14 = auStack_368 + lVar18;
  }
  uVar11 = *(uint *)(param_6 + 0x18);
  local_318 = auVar2;
  if ((longlong)(int)uVar11 == 0) {
    puVar10 = (undefined1 *)0x0;
  }
  else {
    *(undefined8 *)(puVar15 + -8) = 0x147107063;
    lVar18 = -((longlong)(int)uVar11 * 0x18 + 0x1eU & 0xfffffffffffffff0);
    puVar10 = puVar15 + lVar18;
    puVar15 = puVar15 + lVar18;
  }
  if (0 < iVar9) {
    lVar18 = *(longlong *)(param_4 + 0x10);
    lVar17 = 0;
    do {
      pdVar13 = (double *)(lVar18 + lVar17);
      dVar26 = *pdVar13 * (double)local_2b8._0_8_;
      dVar32 = pdVar13[1] * (double)local_2b8._8_8_;
      dVar31 = *(double *)(lVar18 + 0x10 + lVar17) * local_2a8;
      dVar35 = dVar32 * local_2f8 - dVar26 * dStack_2f0;
      dVar38 = dVar31 * dStack_2f0 - dVar32 * (double)local_2e8._0_8_;
      dVar27 = dVar26 * (double)local_2e8._0_8_ - local_2f8 * dVar31;
      dVar38 = dVar38 + dVar38;
      dVar27 = dVar27 + dVar27;
      dVar35 = dVar35 + dVar35;
      dVar4 = dVar27 * local_2f8;
      dVar42 = dVar35 * (double)local_2e8._8_8_;
      dVar36 = dVar38 * dStack_2f0;
      dVar32 = ((double)local_2e8._0_8_ * dVar38 - local_2f8 * dVar35) +
               (double)local_2e8._8_8_ * dVar27 + dVar32;
      auVar2._8_4_ = SUB84(dVar32,0);
      auVar2._0_8_ = (dVar35 * dStack_2f0 - dVar27 * (double)local_2e8._0_8_) +
                     (double)local_2e8._8_8_ * dVar38 + dVar26;
      auVar2._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      *(undefined1 (*) [16])(puVar14 + lVar17) = auVar2;
      *(double *)(puVar14 + lVar17 + 0x10) = dVar42 + dVar31 + (dVar4 - dVar36);
      lVar17 = lVar17 + 0x18;
    } while (lVar16 * 0x18 != lVar17);
    uVar11 = *(uint *)(param_6 + 0x18);
  }
  if (0 < (int)uVar11) {
    lVar16 = *(longlong *)(param_6 + 0x10);
    lVar18 = 0;
    do {
      pdVar13 = (double *)(lVar16 + lVar18);
      dVar26 = *pdVar13 * (double)local_318._0_8_;
      dVar32 = pdVar13[1] * (double)local_318._8_8_;
      dVar31 = *(double *)(lVar16 + 0x10 + lVar18) * local_308;
      dVar35 = dVar32 * local_358 - dVar26 * dStack_350;
      dVar38 = dVar31 * dStack_350 - dVar32 * (double)local_348._0_8_;
      dVar27 = dVar26 * (double)local_348._0_8_ - local_358 * dVar31;
      dVar38 = dVar38 + dVar38;
      dVar27 = dVar27 + dVar27;
      dVar35 = dVar35 + dVar35;
      dVar4 = dVar27 * local_358;
      dVar42 = dVar35 * (double)local_348._8_8_;
      dVar36 = dVar38 * dStack_350;
      dVar32 = ((double)local_348._0_8_ * dVar38 - local_358 * dVar35) +
               (double)local_348._8_8_ * dVar27 + dVar32;
      auVar3._8_4_ = SUB84(dVar32,0);
      auVar3._0_8_ = (dVar35 * dStack_350 - dVar27 * (double)local_348._0_8_) +
                     (double)local_348._8_8_ * dVar38 + dVar26;
      auVar3._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      *(undefined1 (*) [16])(puVar10 + lVar18) = auVar3;
      *(double *)(puVar10 + lVar18 + 0x10) = dVar42 + dVar31 + (dVar4 - dVar36);
      lVar18 = lVar18 + 0x18;
    } while ((ulonglong)uVar11 * 0x18 != lVar18);
  }
  *(undefined8 *)(puVar15 + -0x10) = param_7;
  *(undefined1 **)(puVar15 + -0x18) = puVar10;
  *(undefined1 **)(puVar15 + -0x20) = &LAB_1471052f9;
  *(longlong *)(puVar15 + -0x28) = param_6;
  *(double **)(puVar15 + -0x30) = &local_358;
  *(undefined1 **)(puVar15 + -0x38) = puVar14;
  *(undefined1 **)(puVar15 + -0x40) = &LAB_1471052f9;
  *(longlong *)(puVar15 + -0x48) = param_4;
  *(double **)(puVar15 + -0x50) = &local_2f8;
  *(undefined8 *)(puVar15 + -8) = 0;
  uVar8 = local_360;
  *(undefined8 *)(puVar15 + -0x78) = 0x1471072c4;
  FUN_14044bf58(param_1,uVar8,param_3,param_5);
  if ((local_f0 ^ (ulonglong)local_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -0x28) = &UNK_147107346;
  FUN_144d8e3a0();
}



// FUNCTION 1471076b3 FUN_1471076b3 body=2452 status=ok
// SIG undefined FUN_1471076b3(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1471076b3(longlong param_1,longlong param_2,double *param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double local_358 [2];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  undefined8 local_2f8 [4];
  undefined1 local_2d8 [64];
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
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  auVar29 = _DAT_149934d80;
  uVar9 = DAT_14c707940 ^ (ulonglong)local_2d8;
  puVar14 = &DAT_14c846480;
  puVar15 = local_2f8;
  local_f0 = uVar9;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  dVar23 = *(double *)(param_4 + 0x40);
  dVar25 = *(double *)(param_4 + 0x48);
  dVar28 = *(double *)(param_4 + 0x50);
  dVar22 = *(double *)(param_4 + 0x58);
  local_338 = 0.0;
  dStack_330 = 0.0;
  local_328 = 0.0;
  dStack_320 = 0.0;
  auVar1 = *(undefined1 (*) [16])(param_3 + 8);
  dVar4 = auVar1._0_8_;
  dVar5 = auVar1._8_8_;
  auVar2 = *(undefined1 (*) [16])(param_3 + 10);
  dVar33 = auVar2._0_8_;
  auVar19 = minpd(_DAT_149934d80,auVar1);
  auVar34 = minpd(ZEXT816(0x3ff0000000000000),auVar2);
  auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  iVar8 = movmskpd((int)uVar9,auVar20);
  auVar19._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar19._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar11 = movmskpd(0,auVar19);
  if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
    dVar37 = *param_3;
    dVar38 = param_3[1];
    dVar32 = param_3[3];
    dVar27 = param_3[3];
    dVar36 = param_3[1];
    dVar31 = param_3[1];
    dVar39 = param_3[2];
    dVar7 = param_3[3];
    dVar26 = param_3[2];
    dVar35 = param_3[2];
    dVar18 = dVar25 * dVar26 * -1.0 + dVar28 * dVar36 + dVar22 * *param_3 * 1.0 + dVar23 * dVar32;
    dVar21 = dVar23 * dVar35 * 1.0 + dVar22 * dVar31 + dVar28 * *param_3 * -1.0 + dVar25 * dVar27;
    local_348._0_8_ =
         dVar22 * dVar26 * 1.0 + ((*param_3 * dVar25 * 1.0 + dVar28 * dVar32) - dVar23 * dVar36);
    local_348._8_8_ =
         dVar28 * dVar35 * -1.0 + ((*param_3 * dVar23 * -1.0 + dVar22 * dVar27) - dVar25 * dVar31);
    dVar31 = *(double *)(param_4 + 0x20) * dVar4;
    dVar26 = *(double *)(param_4 + 0x28) * dVar5;
    dVar22 = *(double *)(param_4 + 0x30) * dVar33;
    dVar36 = auVar2._8_8_ * 0.0;
    dVar23 = dVar26 * dVar37 - dVar31 * dVar38;
    dVar35 = dVar22 * dVar38 - dVar26 * dVar39;
    dVar28 = dVar31 * dVar39 - dVar22 * dVar37;
    dVar25 = dVar36 * dVar7 - dVar36 * dVar7;
    dVar35 = dVar35 + dVar35;
    dVar28 = dVar28 + dVar28;
    dVar23 = dVar23 + dVar23;
    dVar25 = dVar25 + dVar25;
    local_338 = (dVar23 * dVar38 - dVar39 * dVar28) + dVar32 * dVar35 + dVar31 + param_3[4];
    dStack_330 = (dVar35 * dVar39 - dVar23 * dVar37) + dVar27 * dVar28 + dVar26 + param_3[5];
    local_328 = (dVar28 * dVar37 - dVar38 * dVar35) + dVar32 * dVar23 + dVar22 + param_3[6];
    dStack_320 = (dVar25 * dVar7 - dVar25 * dVar7) + dVar27 * dVar25 + dVar36 + param_3[7];
  }
  else {
    dVar31 = *param_3;
    dVar26 = param_3[1];
    dVar32 = param_3[2];
    dVar35 = dVar26 + dVar26;
    dVar37 = dVar32 + dVar32;
    dVar36 = dVar31 * (dVar31 + dVar31);
    local_1f8 = ((double)DAT_149934d80 - (dVar32 * dVar37 + dVar26 * dVar35)) * dVar4;
    dVar27 = (DAT_149934d80._8_8_ - (dVar32 * dVar37 + dVar36)) * dVar5;
    dVar32 = param_3[3];
    dVar38 = dVar37 * dVar32;
    dVar39 = (dVar31 + dVar31) * param_3[3];
    dVar32 = dVar35 * dVar32;
    dStack_1b0 = (dVar37 * dVar26 - dVar39) * dVar33;
    local_1b8 = (dVar32 + *param_3 * dVar37) * dVar33;
    dStack_1f0 = (dVar35 * dVar31 + dVar38) * dVar4;
    local_1c8 = (dVar37 * dVar26 + dVar39) * dVar5;
    local_1a8 = (1.0 - (dVar36 + dVar26 * dVar35)) * dVar33;
    local_1e8 = (*param_3 * dVar37 - dVar32) * dVar4;
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar27,0);
    local_1d8._0_8_ = (dVar35 * dVar31 - dVar38) * dVar5;
    local_1d8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_3[4];
    dStack_190 = param_3[5];
    local_188 = param_3[6];
    uStack_180 = 0x3ff0000000000000;
    dVar36 = dVar25 + dVar25;
    dVar27 = dVar28 + dVar28;
    dVar32 = dVar23 * (dVar23 + dVar23);
    local_278 = (double)DAT_149934d80 - (dVar28 * dVar27 + dVar25 * dVar36);
    dStack_250 = DAT_149934d80._8_8_ - (dVar28 * dVar27 + dVar32);
    local_228 = 1.0 - (dVar32 + dVar25 * dVar36);
    dVar28 = (dVar23 + dVar23) * dVar22;
    dStack_270 = dVar36 * dVar23 + dVar27 * dVar22;
    local_248 = dVar27 * dVar25 + dVar28;
    local_258 = dVar36 * dVar23 - dVar27 * dVar22;
    dVar28 = dVar27 * dVar25 - dVar28;
    local_268 = dVar23 * dVar27 - dVar36 * dVar22;
    uStack_260 = 0;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar28,0);
    local_238._0_8_ = dVar36 * dVar22 + dVar23 * dVar27;
    local_238._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_218 = *(double *)(param_4 + 0x20);
    dStack_210 = *(double *)(param_4 + 0x28);
    local_208 = *(double *)(param_4 + 0x30);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar34._8_8_ = -(ulonglong)(0.0 <= dVar5);
    auVar34._0_8_ = -(ulonglong)(0.0 <= dVar4);
    auVar19 = blendvpd(_DAT_149936790,auVar29,auVar34);
    uVar9 = -(ulonglong)(0.0 <= dVar33 * 1.0);
    dVar23 = (double)(~uVar9 & 0xbff0000000000000 | uVar9 & 0x3ff0000000000000);
    dVar25 = auVar19._0_8_;
    local_168 = local_168 * dVar25;
    local_170 = local_170 * dVar25;
    local_178 = local_178 * dVar25;
    dVar25 = auVar19._8_8_;
    local_148 = local_148 * dVar25;
    local_150 = local_150 * dVar25;
    local_158 = dVar25 * local_158;
    local_128 = local_128 * dVar23;
    local_130 = local_130 * dVar23;
    dStack_138 = dVar23 * dStack_138;
    FUN_14481fd10(&local_298,&local_178);
    dVar23 = local_288 * local_288 + local_298 * local_298;
    dVar25 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar24._0_8_ = dVar23 + dVar25;
    auVar24._8_8_ = dVar23 + dVar25;
    auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_);
    auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_);
    auVar19 = sqrtpd(auVar24,auVar24);
    auVar29 = divpd(auVar29,auVar19);
    auVar30._0_8_ = auVar29._0_8_ * local_288;
    auVar30._8_8_ = auVar29._8_8_ * dStack_280;
    dVar18 = (double)((ulonglong)(local_298 * auVar29._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_));
    dVar21 = (double)((ulonglong)(dStack_290 * auVar29._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_));
    local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar30,auVar17);
    local_338 = local_118;
    dStack_330 = dStack_110;
    local_328 = local_108;
    dStack_320 = 0.0;
  }
  dStack_300 = auVar2._8_8_ * 0.0;
  dVar33 = dVar33 * 1.0;
  local_168 = *(double *)(param_2 + 0x58) - *(double *)(param_2 + 0x28);
  local_170 = *(double *)(param_2 + 0x50) - *(double *)(param_2 + 0x20);
  local_178 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x18);
  local_150 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
  local_158 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
  local_160 = *(double *)(param_2 + 0x30) - *(double *)(param_2 + 0x18);
  local_148 = *(double *)(param_2 + 0x70) * *(double *)(param_1 + 0x100) +
              *(double *)(param_2 + 0x60) * *(double *)(param_1 + 0xf0) +
              *(double *)(param_2 + 0x68) * *(double *)(param_1 + 0xf8);
  if (-*(double *)(param_2 + 0x90) <= local_148) {
    local_148 = -*(double *)(param_2 + 0x90);
  }
  local_148 = ABS(local_148);
  local_140 = 0;
  dStack_138 = 0.0;
  lVar12 = (longlong)*(int *)(param_4 + 0x18);
  local_358[0] = dVar18;
  local_358[1] = dVar21;
  local_318 = auVar1;
  local_308 = dVar33;
  if (lVar12 == 0) {
    puVar10 = (undefined1 *)0x0;
    pdVar13 = local_358;
  }
  else {
    lVar6 = -(lVar12 * 0x18 + 0x1eU & 0xfffffffffffffff0);
    puVar10 = (undefined1 *)((longlong)local_358 + lVar6);
    pdVar13 = (double *)((longlong)local_358 + lVar6);
    if (0 < *(int *)(param_4 + 0x18)) {
      lVar3 = *(longlong *)(param_4 + 0x10);
      dVar23 = local_348._0_8_;
      dVar25 = local_348._8_8_;
      lVar16 = 0;
      do {
        pdVar13 = (double *)(lVar3 + lVar16);
        dVar36 = *pdVar13 * dVar4;
        dVar31 = pdVar13[1] * dVar5;
        dVar27 = *(double *)(lVar3 + 0x10 + lVar16) * dVar33;
        dVar28 = dVar31 * dVar18 - dVar21 * dVar36;
        dVar22 = dVar27 * dVar21 - dVar23 * dVar31;
        dVar32 = dVar36 * dVar23 - dVar18 * dVar27;
        dVar22 = dVar22 + dVar22;
        dVar32 = dVar32 + dVar32;
        dVar28 = dVar28 + dVar28;
        pdVar13 = (double *)((longlong)local_358 + lVar16 + lVar6);
        *pdVar13 = (dVar28 * dVar21 - dVar32 * dVar23) + dVar25 * dVar22 + dVar36;
        pdVar13[1] = (dVar23 * dVar22 - dVar18 * dVar28) + dVar25 * dVar32 + dVar31;
        *(double *)(local_348 + lVar16 + lVar6) =
             dVar28 * dVar25 + dVar27 + (dVar32 * dVar18 - dVar22 * dVar21);
        lVar16 = lVar16 + 0x18;
        puVar10 = (undefined1 *)((longlong)local_358 + lVar6);
        pdVar13 = (double *)((longlong)local_358 + lVar6);
      } while (lVar12 * 0x18 != lVar16);
    }
  }
  local_1e8 = *(double *)(param_2 + 0x70);
  local_1f8 = *(double *)(param_2 + 0x60);
  dStack_1f0 = *(double *)(param_2 + 0x68);
  *(double **)((longlong)pdVar13 + -8) = &local_1f8;
  *(undefined8 *)((longlong)pdVar13 + -0x10) = param_5;
  *(undefined1 **)((longlong)pdVar13 + -0x18) = puVar10;
  *(undefined1 **)((longlong)pdVar13 + -0x20) = &LAB_1471052f9;
  *(longlong *)((longlong)pdVar13 + -0x28) = param_4;
  *(double **)((longlong)pdVar13 + -0x30) = local_358;
  *(double **)((longlong)pdVar13 + -0x38) = &local_178;
  *(code **)((longlong)pdVar13 + -0x40) = FUN_1471053b7;
  *(longlong *)((longlong)pdVar13 + -0x48) = param_2;
  *(undefined8 **)((longlong)pdVar13 + -0x50) = local_2f8;
  *(undefined8 *)((longlong)pdVar13 + -0x78) = 0x147107fc5;
  FUN_14044bf58(0,param_1,&DAT_14c846480,param_3);
  if ((local_f0 ^ (ulonglong)local_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)pdVar13 + -0x28) = &UNK_147108047;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14710804c FUN_14710804c body=3771 status=ok
// SIG undefined FUN_14710804c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14710804c(undefined8 param_1,undefined8 param_2,double *param_3,longlong param_4,
                  double *param_5,longlong param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  undefined1 (*pauVar14) [16];
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_458 [32];
  double *local_438;
  longlong local_430;
  code *local_428;
  double *local_420;
  double *local_418;
  longlong local_410;
  undefined1 *local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8 [16];
  undefined8 local_3d8;
  undefined8 local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
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
  double dStack_170;
  double local_168;
  double dStack_160;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_458;
  lVar12 = param_4 + 0x28;
  local_3d8 = param_1;
  local_3d0 = param_2;
  uVar8 = FUN_144a7484c(lVar12,(undefined1 (*) [16])&local_178);
  auVar41 = _DAT_149934d80;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  local_2b8 = *(undefined1 (*) [16])(param_3 + 8);
  dVar25 = local_2b8._0_8_;
  dVar29 = local_2b8._8_8_;
  auVar1 = *(undefined1 (*) [16])(param_3 + 10);
  dVar2 = auVar1._0_8_;
  dVar22 = (double)DAT_149934d80;
  dVar3 = DAT_149934d80._8_8_;
  auVar21 = minpd(_DAT_149934d80,local_2b8);
  auVar33 = minpd(ZEXT816(0x3ff0000000000000),auVar1);
  auVar23._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar23._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  iVar9 = movmskpd(uVar8,auVar23);
  auVar21._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
  auVar21._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
  uVar11 = movmskpd((int)lVar12,auVar21);
  if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar36 = *param_3;
    dVar37 = param_3[1];
    dVar32 = param_3[3];
    dVar38 = param_3[3];
    dVar40 = param_3[1];
    dVar35 = param_3[1];
    dVar39 = param_3[2];
    dVar4 = param_3[3];
    dVar26 = param_3[2];
    dVar34 = param_3[2];
    local_2f8 = dStack_170 * dVar26 * -1.0 +
                local_168 * dVar40 + dStack_160 * *param_3 * 1.0 + local_178 * dVar32;
    dStack_2f0 = local_178 * dVar34 * 1.0 +
                 dStack_160 * dVar35 + local_168 * *param_3 * -1.0 + dStack_170 * dVar38;
    local_2e8._0_8_ =
         dStack_160 * dVar26 * 1.0 +
         ((*param_3 * dStack_170 * 1.0 + local_168 * dVar32) - local_178 * dVar40);
    local_2e8._8_8_ =
         local_168 * dVar34 * -1.0 +
         ((*param_3 * local_178 * -1.0 + dStack_160 * dVar38) - dStack_170 * dVar35);
    dVar25 = *(double *)(param_4 + 0x10) * dVar25;
    dVar29 = *(double *)(param_4 + 0x18) * dVar29;
    dVar34 = *(double *)(param_4 + 0x20) * dVar2;
    dVar20 = auVar1._8_8_ * 0.0;
    dVar40 = dVar29 * dVar36 - dVar25 * dVar37;
    dVar30 = dVar34 * dVar37 - dVar29 * dVar39;
    dVar26 = dVar25 * dVar39 - dVar34 * dVar36;
    dVar35 = dVar20 * dVar4 - dVar20 * dVar4;
    dVar30 = dVar30 + dVar30;
    dVar26 = dVar26 + dVar26;
    dVar40 = dVar40 + dVar40;
    dVar35 = dVar35 + dVar35;
    local_2d8 = (dVar40 * dVar37 - dVar39 * dVar26) + dVar32 * dVar30 + dVar25 + param_3[4];
    dStack_2d0 = (dVar30 * dVar39 - dVar40 * dVar36) + dVar38 * dVar26 + dVar29 + param_3[5];
    local_2c8 = (dVar26 * dVar36 - dVar37 * dVar30) + dVar32 * dVar40 + dVar34 + param_3[6];
    dStack_2c0 = (dVar35 * dVar4 - dVar35 * dVar4) + dVar38 * dVar35 + dVar20 + param_3[7];
    uVar8 = 0;
  }
  else {
    dVar35 = *param_3;
    dVar26 = param_3[1];
    dVar32 = param_3[2];
    dVar34 = dVar26 + dVar26;
    dVar36 = dVar32 + dVar32;
    dVar40 = dVar35 * (dVar35 + dVar35);
    local_1f8 = (dVar22 - (dVar32 * dVar36 + dVar26 * dVar34)) * dVar25;
    dVar38 = (dVar3 - (dVar32 * dVar36 + dVar40)) * dVar29;
    dVar32 = param_3[3];
    dVar37 = dVar36 * dVar32;
    dVar39 = (dVar35 + dVar35) * param_3[3];
    dVar32 = dVar34 * dVar32;
    dStack_1b0 = (dVar36 * dVar26 - dVar39) * dVar2;
    local_1b8 = (dVar32 + *param_3 * dVar36) * dVar2;
    dStack_1f0 = (dVar34 * dVar35 + dVar37) * dVar25;
    local_1c8 = (dVar36 * dVar26 + dVar39) * dVar29;
    local_1a8 = (1.0 - (dVar40 + dVar26 * dVar34)) * dVar2;
    local_1e8 = (*param_3 * dVar36 - dVar32) * dVar25;
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar38,0);
    local_1d8._0_8_ = (dVar34 * dVar35 - dVar37) * dVar29;
    local_1d8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_3[4];
    dStack_190 = param_3[5];
    local_188 = param_3[6];
    uStack_180 = 0x3ff0000000000000;
    dVar35 = dStack_170 + dStack_170;
    dVar40 = local_168 + local_168;
    dVar32 = local_178 * (local_178 + local_178);
    local_278 = dVar22 - (local_168 * dVar40 + dStack_170 * dVar35);
    local_228 = 1.0 - (dVar32 + dStack_170 * dVar35);
    dVar38 = (local_178 + local_178) * dStack_160;
    dStack_270 = dVar35 * local_178 + dVar40 * dStack_160;
    local_248 = dVar40 * dStack_170 + dVar38;
    dVar38 = dVar40 * dStack_170 - dVar38;
    local_268 = local_178 * dVar40 - dVar35 * dStack_160;
    uStack_260 = 0;
    local_258._8_8_ = dVar3 - (local_168 * dVar40 + dVar32);
    local_258._0_8_ = dVar35 * local_178 - dVar40 * dStack_160;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar38,0);
    local_238._0_8_ = dVar35 * dStack_160 + local_178 * dVar40;
    local_238._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_218 = *(double *)(param_4 + 0x10);
    dStack_210 = *(double *)(param_4 + 0x18);
    local_208 = *(double *)(param_4 + 0x20);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar33._8_8_ = -(ulonglong)(0.0 <= dVar29);
    auVar33._0_8_ = -(ulonglong)(0.0 <= dVar25);
    auVar21 = blendvpd(_DAT_149936790,auVar41,auVar33);
    uVar15 = -(ulonglong)(0.0 <= dVar2 * 1.0);
    dVar25 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
    dVar29 = auVar21._0_8_;
    local_168 = local_168 * dVar29;
    dStack_170 = dStack_170 * dVar29;
    local_178 = local_178 * dVar29;
    dVar29 = auVar21._8_8_;
    local_148 = local_148 * dVar29;
    local_150 = local_150 * dVar29;
    local_158 = dVar29 * local_158;
    local_128 = local_128 * dVar25;
    local_130 = local_130 * dVar25;
    local_138 = dVar25 * local_138;
    pdVar13 = &local_358;
    iVar9 = FUN_14481fd10(pdVar13,&local_178);
    uVar8 = SUB84(pdVar13,0);
    dVar25 = (double)local_348._0_8_ * (double)local_348._0_8_ + local_358 * local_358;
    dVar29 = (double)local_348._8_8_ * (double)local_348._8_8_ + dStack_350 * dStack_350;
    auVar27._0_8_ = dVar25 + dVar29;
    auVar27._8_8_ = dVar25 + dVar29;
    auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
    auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
    auVar21 = sqrtpd(auVar27,auVar27);
    auVar21 = divpd(auVar41,auVar21);
    auVar31._0_8_ = auVar21._0_8_ * (double)local_348._0_8_;
    auVar31._8_8_ = auVar21._8_8_ * (double)local_348._8_8_;
    local_2f8 = (double)((ulonglong)(local_358 * auVar21._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_));
    dStack_2f0 = (double)((ulonglong)(dStack_350 * auVar21._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_));
    local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar16);
    local_2d8 = local_118;
    dStack_2d0 = dStack_110;
    local_2c8 = local_108;
    dStack_2c0 = 0.0;
  }
  dVar2 = dVar2 * 1.0;
  dVar25 = auVar1._8_8_ * 0.0;
  local_2a8._8_4_ = SUB84(dVar25,0);
  local_2a8._0_8_ = dVar2;
  local_2a8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  local_338 = 0.0;
  dStack_330 = 0.0;
  local_328 = ZEXT816(0);
  local_3e8 = *(undefined1 (*) [16])(param_5 + 8);
  auVar1 = *(undefined1 (*) [16])(param_5 + 10);
  dVar25 = auVar1._0_8_;
  auVar21 = minpd(auVar41,local_3e8);
  auVar23 = minpd(ZEXT816(0x3ff0000000000000),auVar1);
  auVar17._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar17._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  iVar9 = movmskpd(iVar9,auVar17);
  auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
  auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
  uVar11 = movmskpd(uVar8,auVar24);
  uVar5 = local_3e8._0_8_;
  uVar6 = local_3e8._8_8_;
  if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
    local_3a8 = *param_5;
    dStack_3a0 = param_5[1];
    local_398 = *(undefined1 (*) [16])(param_5 + 2);
    dVar3 = local_398._0_8_;
    dVar32 = local_398._8_8_;
    local_3c8 = param_5[3];
    dStack_3c0 = param_5[3];
    local_3b8 = *(double *)(param_6 + 0x10) * (double)local_3e8._0_8_;
    dStack_3b0 = *(double *)(param_6 + 0x18) * (double)local_3e8._8_8_;
    local_378 = *(double *)(param_6 + 0x20) * dVar25;
    dStack_370 = auVar1._8_8_ * 0.0;
    local_368._8_4_ = local_398._8_4_;
    local_368._0_8_ = local_3a8;
    local_368._12_4_ = local_398._12_4_;
    dVar38 = dStack_3b0 * local_3a8 - local_3b8 * dStack_3a0;
    dVar26 = local_378 * dStack_3a0 - dStack_3b0 * dVar3;
    dVar35 = local_3b8 * dVar3 - local_378 * local_3a8;
    dVar40 = dStack_370 * dVar32 - dStack_370 * dVar32;
    dVar26 = dVar26 + dVar26;
    dVar35 = dVar35 + dVar35;
    dVar38 = dVar38 + dVar38;
    dVar40 = dVar40 + dVar40;
    dVar22 = param_5[1];
    dVar29 = param_5[1];
    local_358 = dVar3 * 0.0 * -1.0 + dVar22 * 0.0 + *param_5 * 1.0 * 1.0 + local_3c8 * 0.0;
    dStack_350 = dVar3 * 0.0 * 1.0 + dVar29 * 1.0 + *param_5 * 0.0 * -1.0 + dStack_3c0 * 0.0;
    local_338 = (dVar38 * dStack_3a0 - dVar3 * dVar35) + local_3c8 * dVar26 + local_3b8 + param_5[4]
    ;
    dStack_330 = (dVar26 * dVar3 - dVar38 * local_3a8) + dStack_3c0 * dVar35 + dStack_3b0 +
                 param_5[5];
    dVar3 = (dVar40 * dVar32 - dVar40 * (double)local_368._8_8_) + dStack_3c0 * dVar40 + dStack_370
            + param_5[7];
    local_348._8_8_ =
         param_5[2] * 0.0 * -1.0 + ((local_3a8 * 0.0 * -1.0 + dStack_3c0 * 1.0) - dVar29 * 0.0);
    local_348._0_8_ =
         param_5[2] * 1.0 * 1.0 + ((local_3a8 * 0.0 * 1.0 + local_3c8 * 0.0) - dVar22 * 0.0);
    local_328._8_4_ = SUB84(dVar3,0);
    local_328._0_8_ =
         (dVar35 * local_3a8 - dStack_3a0 * dVar26) + local_3c8 * dVar38 + local_378 + param_5[6];
    local_328._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    local_388 = auVar1;
  }
  else {
    dVar32 = *param_5;
    dVar38 = param_5[1];
    dVar40 = param_5[2];
    dVar35 = dVar38 + dVar38;
    dVar26 = dVar40 + dVar40;
    dVar29 = dVar32 * (dVar32 + dVar32);
    local_1f8 = (dVar22 - (dVar40 * dVar26 + dVar38 * dVar35)) * (double)local_3e8._0_8_;
    dVar22 = param_5[3];
    dVar34 = dVar26 * dVar22;
    dVar36 = (dVar32 + dVar32) * param_5[3];
    dVar22 = dVar35 * dVar22;
    dStack_1b0 = (dVar26 * dVar38 - dVar36) * dVar25;
    local_1b8 = (dVar22 + *param_5 * dVar26) * dVar25;
    dStack_1f0 = (dVar35 * dVar32 + dVar34) * (double)local_3e8._0_8_;
    local_1c8 = (dVar26 * dVar38 + dVar36) * (double)local_3e8._8_8_;
    local_1e8 = (*param_5 * dVar26 - dVar22) * (double)local_3e8._0_8_;
    uStack_1e0 = 0;
    local_1d8._8_8_ = (dVar3 - (dVar40 * dVar26 + dVar29)) * (double)local_3e8._8_8_;
    local_1d8._0_8_ = (dVar35 * dVar32 - dVar34) * (double)local_3e8._8_8_;
    uStack_1c0 = 0;
    local_1a8 = (1.0 - (dVar29 + dVar38 * dVar35)) * dVar25;
    uStack_1a0 = 0;
    local_198 = param_5[4];
    dStack_190 = param_5[5];
    local_188 = param_5[6];
    uStack_180 = 0x3ff0000000000000;
    local_278 = 1.0;
    dStack_270 = 0.0;
    local_268 = 0.0;
    uStack_260 = 0;
    local_248 = 0.0;
    uStack_240 = 0;
    local_238 = ZEXT816(0);
    local_228 = 1.0;
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_218 = *(double *)(param_6 + 0x10);
    dStack_210 = *(double *)(param_6 + 0x18);
    local_208 = *(double *)(param_6 + 0x20);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar18._8_8_ = -(ulonglong)(0.0 <= (double)uVar6);
    auVar18._0_8_ = -(ulonglong)(0.0 <= (double)uVar5);
    auVar21 = blendvpd(_DAT_149936790,auVar41,auVar18);
    uVar15 = -(ulonglong)(0.0 <= dVar25 * 1.0);
    dVar22 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
    dVar29 = auVar21._0_8_;
    local_168 = local_168 * dVar29;
    dStack_170 = dStack_170 * dVar29;
    local_178 = local_178 * dVar29;
    dVar29 = auVar21._8_8_;
    local_148 = local_148 * dVar29;
    local_150 = local_150 * dVar29;
    local_158 = dVar29 * local_158;
    local_128 = local_128 * dVar22;
    local_130 = local_130 * dVar22;
    local_138 = dVar22 * local_138;
    FUN_14481fd10(&local_298,&local_178);
    dVar22 = local_288 * local_288 + local_298 * local_298;
    dVar29 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar28._0_8_ = dVar22 + dVar29;
    auVar28._8_8_ = dVar22 + dVar29;
    auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
    auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    auVar21 = sqrtpd(auVar28,auVar28);
    auVar41 = divpd(auVar41,auVar21);
    auVar42._0_8_ = auVar41._0_8_ * local_288;
    auVar42._8_8_ = auVar41._8_8_ * dStack_280;
    local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar19);
    local_358 = (double)((ulonglong)(local_298 * auVar41._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
    dStack_350 = (double)((ulonglong)(dStack_290 * auVar41._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
    local_338 = local_118;
    dStack_330 = dStack_110;
    local_328._8_8_ = 0;
    local_328._0_8_ = local_108;
  }
  dVar22 = auVar1._8_8_ * 0.0;
  local_318 = local_3e8._0_8_;
  uStack_310 = local_3e8._8_8_;
  local_308._8_4_ = SUB84(dVar22,0);
  local_308._0_8_ = dVar25 * 1.0;
  local_308._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  local_178 = 0.0;
  dStack_170 = 0.0;
  local_168 = *(double *)(param_4 + 0x50) * 0.5 * dVar2;
  dStack_160 = 0.0;
  local_158 = 0.0;
  local_150 = *(double *)(param_4 + 0x50) * -0.5 * dVar2;
  dVar25 = local_2e8._0_8_;
  dVar22 = local_2e8._8_8_;
  pauVar14 = (undefined1 (*) [16])&local_178;
  bVar7 = true;
  do {
    bVar10 = bVar7;
    dVar29 = *(double *)*pauVar14 * local_2b8._0_8_;
    dVar3 = *(double *)(*pauVar14 + 8) * local_2b8._8_8_;
    dVar32 = *(double *)pauVar14[1] * dVar2;
    dVar38 = dVar3 * local_2f8 - dStack_2f0 * dVar29;
    dVar40 = dVar32 * dStack_2f0 - dVar25 * dVar3;
    dVar35 = dVar29 * dVar25 - local_2f8 * dVar32;
    dVar40 = dVar40 + dVar40;
    dVar35 = dVar35 + dVar35;
    dVar38 = dVar38 + dVar38;
    dVar3 = (dVar25 * dVar40 - local_2f8 * dVar38) + dVar22 * dVar35 + dVar3;
    auVar1._8_4_ = SUB84(dVar3,0);
    auVar1._0_8_ = (dVar38 * dStack_2f0 - dVar35 * dVar25) + dVar22 * dVar40 + dVar29;
    auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *pauVar14 = auVar1;
    *(double *)pauVar14[1] = dVar38 * dVar22 + dVar32 + (dVar35 * local_2f8 - dVar40 * dStack_2f0);
    pauVar14 = (undefined1 (*) [16])&dStack_160;
    bVar7 = false;
  } while (bVar10);
  local_3f0 = 0;
  local_3f8 = param_7;
  local_400 = 0;
  local_408 = &LAB_14083879e;
  local_410 = param_6;
  local_418 = &local_358;
  local_420 = &local_178;
  local_428 = FUN_14710524a;
  local_438 = &local_2f8;
  local_430 = param_4;
  FUN_14044bf58(local_3d8,local_3d0,param_3,param_5);
  if ((local_f0 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147108f08 FUN_147108f08 body=4484 status=ok
// SIG undefined FUN_147108f08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147108f08(undefined8 param_1,undefined8 param_2,double *param_3,longlong param_4,
                  double *param_5,longlong param_6,undefined8 param_7)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  bool bVar16;
  ulonglong uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStack_458 [32];
  undefined1 *local_438;
  longlong local_430;
  code *local_428;
  double *local_420;
  double *local_418;
  longlong local_410;
  undefined1 *local_408;
  undefined1 *local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8 [24];
  undefined8 local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8 [2];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_458;
  lVar15 = param_4 + 0x28;
  local_3d0 = param_1;
  uVar10 = FUN_144a7484c(lVar15,local_2b8);
  auVar22 = _DAT_149934d80;
  local_318 = 0.0;
  dStack_310 = 0.0;
  local_308 = 0.0;
  dStack_300 = 0.0;
  local_2f8 = *(undefined1 (*) [16])(param_3 + 8);
  dVar26 = local_2f8._0_8_;
  uVar49 = local_2f8._0_4_;
  uVar50 = local_2f8._4_4_;
  dVar28 = local_2f8._8_8_;
  uVar51 = local_2f8._8_4_;
  uVar52 = local_2f8._12_4_;
  auVar21 = *(undefined1 (*) [16])(param_3 + 10);
  dVar1 = auVar21._0_8_;
  auVar34 = minpd(_DAT_149934d80,local_2f8);
  auVar39 = minpd(ZEXT816(0x3ff0000000000000),auVar21);
  auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  iVar11 = movmskpd(uVar10,auVar35);
  auVar34._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
  auVar34._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
  uVar13 = movmskpd((int)lVar15,auVar34);
  if ((uVar13 & 0x3fffffff) == 0 && iVar11 == 0) {
    dVar40 = *param_3;
    dVar47 = param_3[1];
    dVar43 = param_3[3];
    dVar37 = param_3[3];
    dVar44 = param_3[1];
    dVar41 = param_3[1];
    dVar5 = param_3[2];
    dVar31 = param_3[3];
    dVar48 = param_3[2];
    dVar32 = param_3[2];
    dVar18 = (double)local_2b8._8_8_ * dVar48 * -1.0 +
             local_2a8 * dVar44 + dStack_2a0 * *param_3 * 1.0 + (double)local_2b8._0_8_ * dVar43;
    dVar42 = (double)local_2b8._0_8_ * dVar32 * 1.0 +
             dStack_2a0 * dVar41 + local_2a8 * *param_3 * -1.0 + (double)local_2b8._8_8_ * dVar37;
    auVar39._0_8_ =
         dStack_2a0 * dVar48 * 1.0 +
         ((*param_3 * (double)local_2b8._8_8_ * 1.0 + local_2a8 * dVar43) -
         (double)local_2b8._0_8_ * dVar44);
    auVar39._8_8_ =
         local_2a8 * dVar32 * -1.0 +
         ((*param_3 * (double)local_2b8._0_8_ * -1.0 + dStack_2a0 * dVar37) -
         (double)local_2b8._8_8_ * dVar41);
    dVar26 = *(double *)(param_4 + 0x10) * dVar26;
    dVar28 = *(double *)(param_4 + 0x18) * dVar28;
    dVar41 = *(double *)(param_4 + 0x20) * dVar1;
    dVar44 = auVar21._8_8_ * 0.0;
    dVar48 = dVar28 * dVar40 - dVar26 * dVar47;
    dVar32 = dVar41 * dVar47 - dVar28 * dVar5;
    dVar38 = dVar26 * dVar5 - dVar41 * dVar40;
    dVar33 = dVar44 * dVar31 - dVar44 * dVar31;
    dVar32 = dVar32 + dVar32;
    dVar38 = dVar38 + dVar38;
    dVar48 = dVar48 + dVar48;
    dVar33 = dVar33 + dVar33;
    local_318 = (dVar48 * dVar47 - dVar5 * dVar38) + dVar43 * dVar32 + dVar26 + param_3[4];
    dStack_310 = (dVar32 * dVar5 - dVar48 * dVar40) + dVar37 * dVar38 + dVar28 + param_3[5];
    local_308 = (dVar38 * dVar40 - dVar47 * dVar32) + dVar43 * dVar48 + dVar41 + param_3[6];
    dStack_300 = (dVar33 * dVar31 - dVar33 * dVar31) + dVar37 * dVar33 + dVar44 + param_3[7];
    local_338._8_4_ = SUB84(dVar42,0);
    local_338._0_8_ = dVar18;
    local_338._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    uVar10 = 0;
    uVar53 = 0x3ff00000;
    uVar54 = 0;
    uVar55 = 0x3ff00000;
  }
  else {
    dVar32 = *param_3;
    dVar18 = param_3[1];
    dVar42 = param_3[2];
    dVar40 = dVar18 + dVar18;
    dVar41 = dVar42 + dVar42;
    dVar43 = dVar32 * (dVar32 + dVar32);
    local_178 = ((double)DAT_149934d80 - (dVar42 * dVar41 + dVar18 * dVar40)) * dVar26;
    dVar37 = param_3[3];
    dVar44 = dVar41 * dVar37;
    dVar48 = (dVar32 + dVar32) * param_3[3];
    dVar37 = dVar40 * dVar37;
    dStack_130 = (dVar41 * dVar18 - dVar48) * dVar1;
    local_138 = (dVar37 + *param_3 * dVar41) * dVar1;
    dStack_170 = (dVar40 * dVar32 + dVar44) * dVar26;
    local_148 = (dVar41 * dVar18 + dVar48) * dVar28;
    local_128 = (1.0 - (dVar43 + dVar18 * dVar40)) * dVar1;
    local_168 = (*param_3 * dVar41 - dVar37) * dVar26;
    uStack_160 = 0;
    local_158._8_8_ = (DAT_149934d80._8_8_ - (dVar42 * dVar41 + dVar43)) * dVar28;
    local_158._0_8_ = (dVar40 * dVar32 - dVar44) * dVar28;
    uStack_140 = 0;
    uStack_120 = 0;
    local_118 = param_3[4];
    dStack_110 = param_3[5];
    local_108 = param_3[6];
    uStack_100 = 0x3ff0000000000000;
    dVar41 = (double)local_2b8._8_8_ + (double)local_2b8._8_8_;
    dVar44 = local_2a8 + local_2a8;
    dVar37 = (double)local_2b8._0_8_ * ((double)local_2b8._0_8_ + (double)local_2b8._0_8_);
    local_1f8 = (double)DAT_149934d80 - (local_2a8 * dVar44 + (double)local_2b8._8_8_ * dVar41);
    dVar43 = DAT_149934d80._8_8_ - (local_2a8 * dVar44 + dVar37);
    local_1a8 = 1.0 - (dVar37 + (double)local_2b8._8_8_ * dVar41);
    dVar37 = ((double)local_2b8._0_8_ + (double)local_2b8._0_8_) * dStack_2a0;
    dStack_1f0 = dVar41 * (double)local_2b8._0_8_ + dVar44 * dStack_2a0;
    local_1c8 = dVar44 * (double)local_2b8._8_8_ + dVar37;
    local_1e8 = (double)local_2b8._0_8_ * dVar44 - dVar41 * dStack_2a0;
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar43,0);
    local_1d8._0_8_ = dVar41 * (double)local_2b8._0_8_ - dVar44 * dStack_2a0;
    local_1d8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_8_ = dVar44 * (double)local_2b8._8_8_ - dVar37;
    local_1b8._0_8_ = dVar41 * dStack_2a0 + (double)local_2b8._0_8_ * dVar44;
    uStack_1a0 = 0;
    uStack_180 = 0x3ff0000000000000;
    local_198 = *(double *)(param_4 + 0x10);
    dStack_190 = *(double *)(param_4 + 0x18);
    local_188 = *(double *)(param_4 + 0x20);
    FUN_1447fea8d(local_2b8);
    FUN_144a1c686(local_2b8,0x3e45798ee0000000);
    auVar19._8_8_ = -(ulonglong)(0.0 <= dVar28);
    auVar19._0_8_ = -(ulonglong)(0.0 <= dVar26);
    auVar34 = blendvpd(_DAT_149936790,auVar22,auVar19);
    uVar17 = -(ulonglong)(0.0 <= dVar1 * 1.0);
    dVar26 = (double)(~uVar17 & 0xbff0000000000000 | uVar17 & 0x3ff0000000000000);
    dVar28 = auVar34._0_8_;
    local_2a8 = local_2a8 * dVar28;
    local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar28;
    local_2b8._0_8_ = (double)local_2b8._0_8_ * dVar28;
    dVar28 = auVar34._8_8_;
    local_288 = local_288 * dVar28;
    local_298._8_8_ = (double)local_298._8_8_ * dVar28;
    local_298._0_8_ = dVar28 * (double)local_298._0_8_;
    local_268 = local_268 * dVar26;
    local_270 = local_270 * dVar26;
    local_278 = dVar26 * local_278;
    FUN_14481fd10(&local_398,local_2b8);
    dVar26 = (double)local_388._0_8_ * (double)local_388._0_8_ + local_398 * local_398;
    dVar28 = (double)local_388._8_8_ * (double)local_388._8_8_ + dStack_390 * dStack_390;
    auVar27._0_8_ = dVar26 + dVar28;
    auVar27._8_8_ = dVar26 + dVar28;
    auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
    auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
    auVar34 = sqrtpd(auVar27,auVar27);
    auVar34 = divpd(auVar22,auVar34);
    auVar29._0_8_ = auVar34._0_8_ * (double)local_388._0_8_;
    auVar29._8_8_ = auVar34._8_8_ * (double)local_388._8_8_;
    dVar18 = (double)((ulonglong)(local_398 * auVar34._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_));
    dVar42 = (double)((ulonglong)(dStack_390 * auVar34._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_));
    auVar39 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar29,auVar20);
    local_338._8_4_ = SUB84(dVar42,0);
    local_338._0_8_ = dVar18;
    local_338._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    local_318 = local_258;
    dStack_310 = dStack_250;
    local_308 = local_248;
    dStack_300 = 0.0;
    uVar10 = auVar22._0_4_;
    uVar53 = auVar22._4_4_;
    uVar54 = auVar22._8_4_;
    uVar55 = auVar22._12_4_;
  }
  dVar26 = auVar21._8_8_ * 0.0;
  uVar56 = (undefined4)((ulonglong)dVar26 >> 0x20);
  uVar12 = SUB84(dVar26,0);
  local_3a8._8_4_ = uVar12;
  local_3a8._0_8_ = dVar1 * 1.0;
  local_3a8._12_4_ = uVar56;
  local_2e8._8_4_ = uVar12;
  local_2e8._0_8_ = dVar1 * 1.0;
  local_2e8._12_4_ = uVar56;
  lVar15 = param_6 + 0x28;
  local_328 = auVar39;
  uVar12 = FUN_144a7484c(lVar15,local_2b8);
  local_3c8 = *(double *)(param_6 + 0x10);
  dStack_3c0 = *(double *)(param_6 + 0x18);
  local_3b8 = *(double *)(param_6 + 0x20);
  uStack_3b0 = 0;
  local_378 = 0.0;
  dStack_370 = 0.0;
  local_368 = 0.0;
  dStack_360 = 0.0;
  local_358 = *(undefined1 (*) [16])(param_5 + 8);
  dVar26 = local_358._0_8_;
  dVar1 = local_358._8_8_;
  local_3e8._0_16_ = *(undefined1 (*) [16])(param_5 + 10);
  auVar21._4_4_ = uVar53;
  auVar21._0_4_ = uVar10;
  auVar21._12_4_ = uVar55;
  auVar21._8_4_ = uVar54;
  auVar21 = minpd(auVar21,local_358);
  auVar34 = minpd(ZEXT816(0x3ff0000000000000),local_3e8._0_16_);
  auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  iVar11 = movmskpd(uVar12,auVar22);
  auVar25._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar25._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar13 = movmskpd((int)lVar15,auVar25);
  uVar8 = local_3e8._8_8_;
  uVar7 = local_3e8._0_8_;
  if ((uVar13 & 0x3fffffff) == 0 && iVar11 == 0) {
    dVar32 = *param_5;
    dVar40 = param_5[1];
    dVar28 = param_5[3];
    dVar37 = param_5[3];
    dVar43 = param_5[1];
    dVar41 = param_5[1];
    dVar47 = param_5[2];
    dVar5 = param_5[3];
    dVar44 = param_5[2];
    dVar48 = param_5[2];
    local_398 = (double)local_2b8._8_8_ * dVar44 * -1.0 +
                local_2a8 * dVar43 + dStack_2a0 * *param_5 * 1.0 + (double)local_2b8._0_8_ * dVar28;
    dStack_390 = (double)local_2b8._0_8_ * dVar48 * 1.0 +
                 dStack_2a0 * dVar41 +
                 local_2a8 * *param_5 * -1.0 + (double)local_2b8._8_8_ * dVar37;
    local_388._0_8_ =
         dStack_2a0 * dVar44 * 1.0 +
         ((*param_5 * (double)local_2b8._8_8_ * 1.0 + local_2a8 * dVar28) -
         (double)local_2b8._0_8_ * dVar43);
    local_388._8_8_ =
         local_2a8 * dVar48 * -1.0 +
         ((*param_5 * (double)local_2b8._0_8_ * -1.0 + dStack_2a0 * dVar37) -
         (double)local_2b8._8_8_ * dVar41);
    dVar44 = local_3c8 * dVar26;
    dVar48 = dStack_3c0 * dVar1;
    dVar33 = local_3b8 * (double)local_3e8._0_8_;
    dVar36 = (double)local_3e8._8_8_ * 0.0;
    dVar43 = dVar48 * dVar32 - dVar44 * dVar40;
    dVar31 = dVar33 * dVar40 - dVar48 * dVar47;
    dVar38 = dVar44 * dVar47 - dVar33 * dVar32;
    dVar41 = dVar36 * dVar5 - dVar36 * dVar5;
    dVar31 = dVar31 + dVar31;
    dVar38 = dVar38 + dVar38;
    dVar43 = dVar43 + dVar43;
    dVar41 = dVar41 + dVar41;
    local_378 = (dVar43 * dVar40 - dVar47 * dVar38) + dVar28 * dVar31 + dVar44 + param_5[4];
    dStack_370 = (dVar31 * dVar47 - dVar43 * dVar32) + dVar37 * dVar38 + dVar48 + param_5[5];
    local_368 = (dVar38 * dVar32 - dVar40 * dVar31) + dVar28 * dVar43 + dVar33 + param_5[6];
    dStack_360 = (dVar41 * dVar5 - dVar41 * dVar5) + dVar37 * dVar41 + dVar36 + param_5[7];
  }
  else {
    dVar48 = *param_5;
    dVar32 = param_5[1];
    dVar28 = param_5[2];
    dVar42 = dVar32 + dVar32;
    dVar37 = dVar28 + dVar28;
    dVar18 = dVar48 * (dVar48 + dVar48);
    local_178 = ((double)CONCAT44(uVar53,uVar10) - (dVar28 * dVar37 + dVar32 * dVar42)) * dVar26;
    dVar44 = ((double)CONCAT44(uVar55,uVar54) - (dVar28 * dVar37 + dVar18)) * dVar1;
    dVar28 = param_5[3];
    dVar43 = dVar37 * dVar28;
    dVar41 = (dVar48 + dVar48) * param_5[3];
    dVar28 = dVar42 * dVar28;
    auVar45._12_4_ = uVar55;
    auVar45._8_4_ = uVar54;
    dStack_130 = (dVar37 * dVar32 - dVar41) * (double)local_3e8._0_8_;
    local_138 = (dVar28 + *param_5 * dVar37) * (double)local_3e8._0_8_;
    dStack_170 = (dVar42 * dVar48 + dVar43) * dVar26;
    local_148 = (dVar37 * dVar32 + dVar41) * dVar1;
    local_128 = (1.0 - (dVar18 + dVar32 * dVar42)) * (double)local_3e8._0_8_;
    local_168 = (*param_5 * dVar37 - dVar28) * dVar26;
    uStack_160 = 0;
    local_158._8_4_ = SUB84(dVar44,0);
    local_158._0_8_ = (dVar42 * dVar48 - dVar43) * dVar1;
    local_158._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    uStack_140 = 0;
    uStack_120 = 0;
    local_118 = param_5[4];
    dStack_110 = param_5[5];
    local_108 = param_5[6];
    uStack_100 = 0x3ff0000000000000;
    dVar43 = (double)local_2b8._8_8_ + (double)local_2b8._8_8_;
    dVar41 = local_2a8 + local_2a8;
    dVar37 = (double)local_2b8._0_8_ * ((double)local_2b8._0_8_ + (double)local_2b8._0_8_);
    local_1f8 = (double)CONCAT44(uVar53,uVar10) -
                (local_2a8 * dVar41 + (double)local_2b8._8_8_ * dVar43);
    dVar28 = (double)CONCAT44(uVar55,uVar54) - (local_2a8 * dVar41 + dVar37);
    local_1a8 = 1.0 - (dVar37 + (double)local_2b8._8_8_ * dVar43);
    dVar37 = ((double)local_2b8._0_8_ + (double)local_2b8._0_8_) * dStack_2a0;
    dStack_1f0 = dVar43 * (double)local_2b8._0_8_ + dVar41 * dStack_2a0;
    local_1c8 = dVar41 * (double)local_2b8._8_8_ + dVar37;
    dVar37 = dVar41 * (double)local_2b8._8_8_ - dVar37;
    local_1e8 = (double)local_2b8._0_8_ * dVar41 - dVar43 * dStack_2a0;
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar28,0);
    local_1d8._0_8_ = dVar43 * (double)local_2b8._0_8_ - dVar41 * dStack_2a0;
    local_1d8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar37,0);
    local_1b8._0_8_ = dVar43 * dStack_2a0 + (double)local_2b8._0_8_ * dVar41;
    local_1b8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0x3ff0000000000000;
    auVar45._0_8_ = CONCAT44(uVar53,uVar10);
    dVar28 = (double)local_3e8._0_8_ * 1.0;
    local_198 = local_3c8;
    dStack_190 = dStack_3c0;
    local_188 = local_3b8;
    FUN_1447fea8d(local_2b8);
    FUN_144a1c686(local_2b8,0x3e45798ee0000000);
    auVar23._8_8_ = -(ulonglong)(0.0 <= dVar1);
    auVar23._0_8_ = -(ulonglong)(0.0 <= dVar26);
    auVar3._8_4_ = uVar54;
    auVar3._0_8_ = CONCAT44(uVar53,uVar10);
    auVar3._12_4_ = uVar55;
    auVar21 = blendvpd(_DAT_149936790,auVar3,auVar23);
    uVar17 = -(ulonglong)(0.0 <= dVar28);
    dVar28 = (double)(~uVar17 & 0xbff0000000000000 | uVar17 & 0x3ff0000000000000);
    dVar37 = auVar21._0_8_;
    local_2a8 = local_2a8 * dVar37;
    local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar37;
    local_2b8._0_8_ = (double)local_2b8._0_8_ * dVar37;
    dVar37 = auVar21._8_8_;
    local_288 = local_288 * dVar37;
    local_298._8_8_ = (double)local_298._8_8_ * dVar37;
    local_298._0_8_ = dVar37 * (double)local_298._0_8_;
    local_268 = local_268 * dVar28;
    local_270 = local_270 * dVar28;
    local_278 = dVar28 * local_278;
    FUN_14481fd10(&local_2d8,local_2b8);
    dVar28 = local_2c8[0] * local_2c8[0] + local_2d8 * local_2d8;
    dVar37 = local_2c8[1] * local_2c8[1] + dStack_2d0 * dStack_2d0;
    auVar30._0_8_ = dVar28 + dVar37;
    auVar30._8_8_ = dVar28 + dVar37;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
    auVar21 = sqrtpd(auVar30,auVar30);
    auVar21 = divpd(auVar45,auVar21);
    auVar46._0_8_ = auVar21._0_8_ * local_2c8[0];
    auVar46._8_8_ = auVar21._8_8_ * local_2c8[1];
    local_388 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar24);
    local_398 = (double)((ulonglong)(local_2d8 * auVar21._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
    dStack_390 = (double)((ulonglong)(dStack_2d0 * auVar21._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
    local_378 = local_258;
    dStack_370 = dStack_250;
    local_368 = local_248;
    dStack_360 = 0.0;
    uVar49 = local_2f8._0_4_;
    uVar50 = local_2f8._4_4_;
    uVar51 = local_2f8._8_4_;
    uVar52 = local_2f8._12_4_;
    auVar39 = local_328;
    dVar18 = (double)local_338._0_8_;
    dVar42 = (double)local_338._8_8_;
  }
  local_348._8_4_ = SUB84((double)uVar8 * 0.0,0);
  local_348._0_8_ = (double)uVar7 * 1.0;
  local_348._12_4_ = (int)((ulonglong)((double)uVar8 * 0.0) >> 0x20);
  dVar28 = local_3a8._0_8_;
  local_178 = 0.0;
  dStack_170 = 0.0;
  local_168 = *(double *)(param_4 + 0x50) * 0.5 * dVar28;
  uStack_160 = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(double *)(param_4 + 0x50) * -0.5 * dVar28;
  local_158 = auVar6 << 0x40;
  local_248 = *(double *)(param_6 + 0x50) * 0.5;
  local_280 = *(double *)(param_6 + 0x48) * 0.5;
  dStack_2a0 = *(double *)(param_6 + 0x40) * 0.5;
  local_2a8 = -local_248;
  dStack_250 = -local_280;
  local_288 = -dStack_2a0;
  local_2b8._8_4_ = SUB84(local_280,0);
  local_2b8._0_8_ = local_288;
  local_2b8._12_4_ = (int)((ulonglong)dStack_250 >> 0x20);
  local_298._8_4_ = SUB84(local_248,0);
  local_298._0_8_ = dStack_250;
  local_298._12_4_ = (int)((ulonglong)local_2a8 >> 0x20);
  local_278 = local_2a8;
  local_270 = dStack_2a0;
  local_268 = local_280;
  dStack_260 = local_2a8;
  local_258 = local_288;
  local_240 = dStack_2a0;
  local_238 = dStack_250;
  local_230 = local_248;
  local_228 = local_288;
  local_220 = local_280;
  local_218 = local_248;
  local_210 = dStack_2a0;
  local_208 = local_280;
  local_200 = local_248;
  dVar37 = auVar39._0_8_;
  dVar43 = auVar39._8_8_;
  pauVar14 = (undefined1 (*) [16])&local_178;
  bVar9 = true;
  do {
    bVar16 = bVar9;
    dVar41 = *(double *)*pauVar14 * (double)CONCAT44(uVar50,uVar49);
    dVar44 = *(double *)(*pauVar14 + 8) * (double)CONCAT44(uVar52,uVar51);
    dVar32 = *(double *)pauVar14[1] * dVar28;
    dVar40 = dVar44 * dVar18 - dVar42 * dVar41;
    dVar47 = dVar32 * dVar42 - dVar37 * dVar44;
    dVar48 = dVar41 * dVar37 - dVar18 * dVar32;
    dVar47 = dVar47 + dVar47;
    dVar48 = dVar48 + dVar48;
    dVar40 = dVar40 + dVar40;
    dVar44 = (dVar37 * dVar47 - dVar18 * dVar40) + dVar43 * dVar48 + dVar44;
    auVar4._8_4_ = SUB84(dVar44,0);
    auVar4._0_8_ = (dVar40 * dVar42 - dVar48 * dVar37) + dVar43 * dVar47 + dVar41;
    auVar4._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *pauVar14 = auVar4;
    *(double *)pauVar14[1] = dVar40 * dVar43 + dVar32 + (dVar48 * dVar18 - dVar47 * dVar42);
    pauVar14 = (undefined1 (*) [16])&uStack_160;
    bVar9 = false;
  } while (bVar16);
  dVar28 = local_388._0_8_;
  dVar37 = local_388._8_8_;
  lVar15 = 0x10;
  do {
    dVar43 = *(double *)((longlong)local_2c8 + lVar15) * dVar26;
    dVar41 = *(double *)(local_2b8 + lVar15 + -8) * dVar1;
    dVar48 = *(double *)(local_2b8 + lVar15) * (double)uVar7 * 1.0;
    dVar32 = dVar41 * local_398 - dStack_390 * dVar43;
    dVar18 = dVar48 * dStack_390 - dVar28 * dVar41;
    dVar44 = dVar43 * dVar28 - local_398 * dVar48;
    dVar18 = dVar18 + dVar18;
    dVar44 = dVar44 + dVar44;
    dVar32 = dVar32 + dVar32;
    dVar41 = (dVar28 * dVar18 - local_398 * dVar32) + dVar37 * dVar44 + dVar41;
    auVar2._8_4_ = SUB84(dVar41,0);
    auVar2._0_8_ = (dVar32 * dStack_390 - dVar44 * dVar28) + dVar37 * dVar18 + dVar43;
    auVar2._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)local_2c8 + lVar15) = auVar2;
    *(double *)(local_2b8 + lVar15) =
         dVar32 * dVar37 + dVar48 + (dVar44 * local_398 - dVar18 * dStack_390);
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0xd0);
  local_3f8 = param_7;
  local_400 = local_2b8;
  local_408 = &LAB_142b5f570;
  local_410 = param_6;
  local_418 = &local_398;
  local_420 = &local_178;
  local_428 = FUN_14710524a;
  local_438 = local_338;
  local_3f0 = 0;
  local_430 = param_4;
  FUN_14044bf58(local_3d0,param_2,param_3,param_5);
  if ((local_f0 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14710a08d FUN_14710a08d body=4325 status=ok
// SIG undefined FUN_14710a08d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14710a08d(undefined8 param_1,undefined8 param_2,double *param_3,longlong param_4,
                  double *param_5,longlong param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  double *pdVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  ulonglong uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_408 [32];
  undefined1 *local_3e8;
  longlong local_3e0;
  code *local_3d8;
  double *local_3d0;
  double *local_3c8;
  longlong local_3c0;
  code *local_3b8;
  double *local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined8 local_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
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
  double dStack_170;
  double local_168;
  double dStack_160;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  lVar13 = param_4 + 0x28;
  local_370 = param_1;
  uVar9 = FUN_144a7484c(lVar13,&local_178);
  auVar34 = _DAT_149934d80;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  auVar22 = *(undefined1 (*) [16])(param_3 + 8);
  dVar23 = auVar22._0_8_;
  dVar26 = auVar22._8_8_;
  auVar19 = *(undefined1 (*) [16])(param_3 + 10);
  dVar36 = auVar19._0_8_;
  dVar30 = (double)DAT_149934d80;
  dVar46 = DAT_149934d80._8_8_;
  auVar32 = minpd(_DAT_149934d80,auVar22);
  auVar38 = minpd(ZEXT816(0x3ff0000000000000),auVar19);
  auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  iVar10 = movmskpd(uVar9,auVar33);
  auVar32._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
  auVar32._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
  uVar12 = movmskpd((int)lVar13,auVar32);
  if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
    dVar39 = *param_3;
    dVar45 = param_3[1];
    dVar35 = param_3[3];
    dVar3 = param_3[3];
    dVar40 = param_3[1];
    dVar42 = param_3[1];
    dVar4 = param_3[2];
    dVar5 = param_3[3];
    dVar43 = param_3[2];
    dVar16 = param_3[2];
    dVar41 = dStack_170 * dVar43 * -1.0 +
             local_168 * dVar40 + dStack_160 * *param_3 * 1.0 + local_178 * dVar35;
    dVar44 = local_178 * dVar16 * 1.0 +
             dStack_160 * dVar42 + local_168 * *param_3 * -1.0 + dStack_170 * dVar3;
    auVar38._0_8_ =
         dStack_160 * dVar43 * 1.0 +
         ((*param_3 * dStack_170 * 1.0 + local_168 * dVar35) - local_178 * dVar40);
    auVar38._8_8_ =
         local_168 * dVar16 * -1.0 +
         ((*param_3 * local_178 * -1.0 + dStack_160 * dVar3) - dStack_170 * dVar42);
    dVar23 = *(double *)(param_4 + 0x10) * dVar23;
    dVar26 = *(double *)(param_4 + 0x18) * dVar26;
    dVar40 = *(double *)(param_4 + 0x20) * dVar36;
    dVar42 = auVar19._8_8_ * 0.0;
    dVar43 = dVar26 * dVar39 - dVar23 * dVar45;
    dVar16 = dVar40 * dVar45 - dVar26 * dVar4;
    dVar24 = dVar23 * dVar4 - dVar40 * dVar39;
    dVar27 = dVar42 * dVar5 - dVar42 * dVar5;
    dVar16 = dVar16 + dVar16;
    dVar24 = dVar24 + dVar24;
    dVar43 = dVar43 + dVar43;
    dVar27 = dVar27 + dVar27;
    local_2d8 = (dVar43 * dVar45 - dVar4 * dVar24) + dVar35 * dVar16 + dVar23 + param_3[4];
    dStack_2d0 = (dVar16 * dVar4 - dVar43 * dVar39) + dVar3 * dVar24 + dVar26 + param_3[5];
    local_2c8 = (dVar24 * dVar39 - dVar45 * dVar16) + dVar35 * dVar43 + dVar40 + param_3[6];
    dStack_2c0 = (dVar27 * dVar5 - dVar27 * dVar5) + dVar3 * dVar27 + dVar42 + param_3[7];
    local_2f8._8_4_ = SUB84(dVar44,0);
    local_2f8._0_8_ = dVar41;
    local_2f8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  }
  else {
    dVar16 = *param_3;
    dVar41 = param_3[1];
    dVar44 = param_3[2];
    dVar39 = dVar41 + dVar41;
    dVar40 = dVar44 + dVar44;
    dVar3 = dVar16 * (dVar16 + dVar16);
    local_1f8 = (dVar30 - (dVar44 * dVar40 + dVar41 * dVar39)) * dVar23;
    dVar35 = param_3[3];
    dVar42 = dVar40 * dVar35;
    dVar43 = (dVar16 + dVar16) * param_3[3];
    dVar35 = dVar39 * dVar35;
    dStack_1b0 = (dVar40 * dVar41 - dVar43) * dVar36;
    local_1b8 = (dVar35 + *param_3 * dVar40) * dVar36;
    dStack_1f0 = (dVar39 * dVar16 + dVar42) * dVar23;
    local_1c8 = (dVar40 * dVar41 + dVar43) * dVar26;
    local_1a8 = (1.0 - (dVar3 + dVar41 * dVar39)) * dVar36;
    local_1e8 = (*param_3 * dVar40 - dVar35) * dVar23;
    uStack_1e0 = 0;
    local_1d8._8_8_ = (dVar46 - (dVar44 * dVar40 + dVar3)) * dVar26;
    local_1d8._0_8_ = (dVar39 * dVar16 - dVar42) * dVar26;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_3[4];
    dStack_190 = param_3[5];
    local_188 = param_3[6];
    uStack_180 = 0x3ff0000000000000;
    dVar40 = dStack_170 + dStack_170;
    dVar42 = local_168 + local_168;
    dVar35 = local_178 * (local_178 + local_178);
    local_278 = dVar30 - (local_168 * dVar42 + dStack_170 * dVar40);
    dVar3 = dVar46 - (local_168 * dVar42 + dVar35);
    local_228 = 1.0 - (dVar35 + dStack_170 * dVar40);
    dVar35 = (local_178 + local_178) * dStack_160;
    dStack_270 = dVar40 * local_178 + dVar42 * dStack_160;
    local_248 = dVar42 * dStack_170 + dVar35;
    local_268 = local_178 * dVar42 - dVar40 * dStack_160;
    uStack_260 = 0;
    local_258._8_4_ = SUB84(dVar3,0);
    local_258._0_8_ = dVar40 * local_178 - dVar42 * dStack_160;
    local_258._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uStack_240 = 0;
    local_238._8_8_ = dVar42 * dStack_170 - dVar35;
    local_238._0_8_ = dVar40 * dStack_160 + local_178 * dVar42;
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_218 = *(double *)(param_4 + 0x10);
    dStack_210 = *(double *)(param_4 + 0x18);
    local_208 = *(double *)(param_4 + 0x20);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar17._8_8_ = -(ulonglong)(0.0 <= dVar26);
    auVar17._0_8_ = -(ulonglong)(0.0 <= dVar23);
    auVar32 = blendvpd(_DAT_149936790,auVar34,auVar17);
    uVar15 = -(ulonglong)(0.0 <= dVar36 * 1.0);
    dVar23 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
    dVar26 = auVar32._0_8_;
    local_168 = local_168 * dVar26;
    dStack_170 = dStack_170 * dVar26;
    local_178 = local_178 * dVar26;
    dVar26 = auVar32._8_8_;
    local_148 = local_148 * dVar26;
    local_150 = local_150 * dVar26;
    local_158 = dVar26 * local_158;
    local_128 = local_128 * dVar23;
    local_130 = local_130 * dVar23;
    local_138 = dVar23 * local_138;
    FUN_14481fd10(&local_358,&local_178);
    dVar23 = (double)local_348._0_8_ * (double)local_348._0_8_ + local_358 * local_358;
    dVar26 = (double)local_348._8_8_ * (double)local_348._8_8_ + dStack_350 * dStack_350;
    auVar25._0_8_ = dVar23 + dVar26;
    auVar25._8_8_ = dVar23 + dVar26;
    auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
    auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
    auVar32 = sqrtpd(auVar25,auVar25);
    auVar32 = divpd(auVar34,auVar32);
    auVar28._0_8_ = auVar32._0_8_ * (double)local_348._0_8_;
    auVar28._8_8_ = auVar32._8_8_ * (double)local_348._8_8_;
    dVar41 = (double)((ulonglong)(local_358 * auVar32._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
    dVar44 = (double)((ulonglong)(dStack_350 * auVar32._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
    auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar28,auVar18);
    local_2f8._8_4_ = SUB84(dVar44,0);
    local_2f8._0_8_ = dVar41;
    local_2f8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    local_2d8 = local_118;
    dStack_2d0 = dStack_110;
    local_2c8 = local_108;
    dStack_2c0 = 0.0;
  }
  dVar36 = dVar36 * 1.0;
  dVar23 = auVar19._8_8_ * 0.0;
  uVar48 = (undefined4)((ulonglong)dVar23 >> 0x20);
  uVar47 = SUB84(dVar23,0);
  local_2a8._8_4_ = uVar47;
  local_2a8._0_8_ = dVar36;
  local_2a8._12_4_ = uVar48;
  lVar13 = param_6 + 0x28;
  local_2e8 = auVar38;
  local_2b8 = auVar22;
  uVar9 = FUN_144a7484c(lVar13,(undefined1 (*) [16])&local_178);
  local_338 = 0.0;
  dStack_330 = 0.0;
  local_328 = 0.0;
  dStack_320 = 0.0;
  local_318 = *(undefined1 (*) [16])(param_5 + 8);
  dVar23 = local_318._0_8_;
  dVar35 = local_318._8_8_;
  local_388 = *(undefined1 (*) [16])(param_5 + 10);
  dVar26 = local_388._0_8_;
  dVar3 = local_388._8_8_;
  auVar19 = minpd(auVar34,local_318);
  auVar32 = minpd(ZEXT816(0x3ff0000000000000),local_388);
  auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  iVar10 = movmskpd(uVar9,auVar20);
  auVar19._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar19._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar12 = movmskpd((int)lVar13,auVar19);
  if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
    dVar39 = *param_5;
    dVar45 = param_5[1];
    dVar30 = param_5[3];
    dVar46 = param_5[3];
    dVar42 = param_5[1];
    dVar40 = param_5[1];
    dVar4 = param_5[2];
    dVar5 = param_5[3];
    dVar16 = param_5[2];
    dVar43 = param_5[2];
    local_358 = dStack_170 * dVar16 * -1.0 +
                local_168 * dVar42 + dStack_160 * *param_5 * 1.0 + local_178 * dVar30;
    dStack_350 = local_178 * dVar43 * 1.0 +
                 dStack_160 * dVar40 + local_168 * *param_5 * -1.0 + dStack_170 * dVar46;
    local_348._0_8_ =
         dStack_160 * dVar16 * 1.0 +
         ((*param_5 * dStack_170 * 1.0 + local_168 * dVar30) - local_178 * dVar42);
    local_348._8_8_ =
         local_168 * dVar43 * -1.0 +
         ((*param_5 * local_178 * -1.0 + dStack_160 * dVar46) - dStack_170 * dVar40);
    dVar24 = *(double *)(param_6 + 0x10) * dVar23;
    dVar27 = *(double *)(param_6 + 0x18) * dVar35;
    dVar40 = *(double *)(param_6 + 0x20) * dVar26;
    dVar42 = dVar3 * 0.0;
    dVar43 = dVar27 * dVar39 - dVar24 * dVar45;
    dVar31 = dVar40 * dVar45 - dVar27 * dVar4;
    dVar37 = dVar24 * dVar4 - dVar40 * dVar39;
    dVar16 = dVar42 * dVar5 - dVar42 * dVar5;
    dVar31 = dVar31 + dVar31;
    dVar37 = dVar37 + dVar37;
    dVar43 = dVar43 + dVar43;
    dVar16 = dVar16 + dVar16;
    local_338 = (dVar43 * dVar45 - dVar4 * dVar37) + dVar30 * dVar31 + dVar24 + param_5[4];
    dStack_330 = (dVar31 * dVar4 - dVar43 * dVar39) + dVar46 * dVar37 + dVar27 + param_5[5];
    local_328 = (dVar37 * dVar39 - dVar45 * dVar31) + dVar30 * dVar43 + dVar40 + param_5[6];
    dStack_320 = (dVar16 * dVar5 - dVar16 * dVar5) + dVar46 * dVar16 + dVar42 + param_5[7];
    local_398._0_8_ = param_3;
    local_368 = auVar22;
  }
  else {
    dVar42 = *param_5;
    dVar43 = param_5[1];
    dVar40 = param_5[2];
    dVar41 = dVar43 + dVar43;
    dVar44 = dVar40 + dVar40;
    dVar16 = dVar42 * (dVar42 + dVar42);
    local_1f8 = (dVar30 - (dVar40 * dVar44 + dVar43 * dVar41)) * dVar23;
    dVar40 = (dVar46 - (dVar40 * dVar44 + dVar16)) * dVar35;
    local_388._8_4_ = uVar47;
    local_388._0_8_ = dVar36;
    local_388._12_4_ = uVar48;
    dVar36 = param_5[3];
    dVar39 = dVar44 * dVar36;
    dVar45 = (dVar42 + dVar42) * param_5[3];
    dVar36 = dVar41 * dVar36;
    dStack_1b0 = (dVar44 * dVar43 - dVar45) * dVar26;
    local_1b8 = (dVar36 + *param_5 * dVar44) * dVar26;
    dStack_1f0 = (dVar41 * dVar42 + dVar39) * dVar23;
    local_1c8 = (dVar44 * dVar43 + dVar45) * dVar35;
    local_1a8 = (1.0 - (dVar16 + dVar43 * dVar41)) * dVar26;
    local_1e8 = (*param_5 * dVar44 - dVar36) * dVar23;
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar40,0);
    local_1d8._0_8_ = (dVar41 * dVar42 - dVar39) * dVar35;
    local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_5[4];
    dStack_190 = param_5[5];
    local_188 = param_5[6];
    uStack_180 = 0x3ff0000000000000;
    dVar42 = dStack_170 + dStack_170;
    dVar43 = local_168 + local_168;
    dVar40 = local_178 * (local_178 + local_178);
    local_278 = dVar30 - (local_168 * dVar43 + dStack_170 * dVar42);
    local_228 = 1.0 - (dVar40 + dStack_170 * dVar42);
    dVar36 = (local_178 + local_178) * dStack_160;
    dStack_270 = dVar42 * local_178 + dVar43 * dStack_160;
    local_248 = dVar43 * dStack_170 + dVar36;
    dVar36 = dVar43 * dStack_170 - dVar36;
    local_268 = local_178 * dVar43 - dVar42 * dStack_160;
    uStack_260 = 0;
    local_258._8_8_ = dVar46 - (local_168 * dVar43 + dVar40);
    local_258._0_8_ = dVar42 * local_178 - dVar43 * dStack_160;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar36,0);
    local_238._0_8_ = dVar42 * dStack_160 + local_178 * dVar43;
    local_238._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_398._8_8_ = 0;
    local_398._0_8_ = param_3;
    local_218 = *(double *)(param_6 + 0x10);
    dStack_210 = *(double *)(param_6 + 0x18);
    local_208 = *(double *)(param_6 + 0x20);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar22._8_8_ = -(ulonglong)(0.0 <= dVar35);
    auVar22._0_8_ = -(ulonglong)(0.0 <= dVar23);
    auVar22 = blendvpd(_DAT_149936790,auVar34,auVar22);
    uVar15 = -(ulonglong)(0.0 <= dVar26 * 1.0);
    dVar36 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
    dVar30 = auVar22._0_8_;
    local_168 = local_168 * dVar30;
    dStack_170 = dStack_170 * dVar30;
    local_178 = local_178 * dVar30;
    dVar30 = auVar22._8_8_;
    local_148 = local_148 * dVar30;
    local_150 = local_150 * dVar30;
    local_158 = dVar30 * local_158;
    local_128 = local_128 * dVar36;
    local_130 = local_130 * dVar36;
    local_138 = dVar36 * local_138;
    FUN_14481fd10(&local_298,&local_178);
    dVar36 = local_288 * local_288 + local_298 * local_298;
    dVar30 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar29._0_8_ = dVar36 + dVar30;
    auVar29._8_8_ = dVar36 + dVar30;
    auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar22 = sqrtpd(auVar29,auVar29);
    auVar22 = divpd(auVar34,auVar22);
    auVar34._0_8_ = auVar22._0_8_ * local_288;
    auVar34._8_8_ = auVar22._8_8_ * dStack_280;
    local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar21);
    local_358 = (double)((ulonglong)(local_298 * auVar22._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
    dStack_350 = (double)((ulonglong)(dStack_290 * auVar22._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
    local_338 = local_118;
    dStack_330 = dStack_110;
    local_328 = local_108;
    dStack_320 = 0.0;
    local_368 = local_2b8;
    auVar38 = local_2e8;
    dVar36 = (double)local_388._0_8_;
    dVar41 = (double)local_2f8._0_8_;
    dVar44 = (double)local_2f8._8_8_;
  }
  dVar26 = dVar26 * 1.0;
  dVar3 = dVar3 * 0.0;
  local_308._8_4_ = SUB84(dVar3,0);
  local_308._0_8_ = dVar26;
  local_308._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_178 = 0.0;
  dStack_170 = 0.0;
  local_168 = *(double *)(param_4 + 0x50) * 0.5 * dVar36;
  dStack_160 = 0.0;
  local_158 = 0.0;
  local_150 = *(double *)(param_4 + 0x50) * -0.5 * dVar36;
  local_1f8 = 0.0;
  dStack_1f0 = 0.0;
  local_1e8 = *(double *)(param_6 + 0x48) * 0.5 * dVar26;
  uStack_1e0 = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(double *)(param_6 + 0x48) * -0.5 * dVar26;
  local_1d8 = auVar6 << 0x40;
  dVar30 = auVar38._0_8_;
  dVar46 = auVar38._8_8_;
  pauVar14 = (undefined1 (*) [16])&local_178;
  bVar7 = true;
  do {
    bVar11 = bVar7;
    dVar3 = *(double *)*pauVar14 * (double)local_368._0_8_;
    dVar40 = *(double *)(*pauVar14 + 8) * (double)local_368._8_8_;
    dVar43 = *(double *)pauVar14[1] * dVar36;
    dVar16 = dVar40 * dVar41 - dVar44 * dVar3;
    dVar39 = dVar43 * dVar44 - dVar30 * dVar40;
    dVar42 = dVar3 * dVar30 - dVar41 * dVar43;
    dVar39 = dVar39 + dVar39;
    dVar42 = dVar42 + dVar42;
    dVar16 = dVar16 + dVar16;
    dVar40 = (dVar30 * dVar39 - dVar41 * dVar16) + dVar46 * dVar42 + dVar40;
    auVar1._8_4_ = SUB84(dVar40,0);
    auVar1._0_8_ = (dVar16 * dVar44 - dVar42 * dVar30) + dVar46 * dVar39 + dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    *pauVar14 = auVar1;
    *(double *)pauVar14[1] = dVar16 * dVar46 + dVar43 + (dVar42 * dVar41 - dVar39 * dVar44);
    pauVar14 = (undefined1 (*) [16])&dStack_160;
    bVar7 = false;
  } while (bVar11);
  dVar36 = local_348._0_8_;
  dVar30 = local_348._8_8_;
  pauVar14 = (undefined1 (*) [16])&local_1f8;
  bVar7 = true;
  do {
    bVar11 = bVar7;
    dVar46 = *(double *)*pauVar14 * dVar23;
    dVar3 = *(double *)(*pauVar14 + 8) * dVar35;
    dVar40 = *(double *)pauVar14[1] * dVar26;
    dVar42 = dVar3 * local_358 - dStack_350 * dVar46;
    dVar43 = dVar40 * dStack_350 - dVar36 * dVar3;
    dVar16 = dVar46 * dVar36 - local_358 * dVar40;
    dVar43 = dVar43 + dVar43;
    dVar16 = dVar16 + dVar16;
    dVar42 = dVar42 + dVar42;
    dVar3 = (dVar36 * dVar43 - local_358 * dVar42) + dVar30 * dVar16 + dVar3;
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = (dVar42 * dStack_350 - dVar16 * dVar36) + dVar30 * dVar43 + dVar46;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *pauVar14 = auVar2;
    *(double *)pauVar14[1] = dVar42 * dVar30 + dVar40 + (dVar16 * local_358 - dVar43 * dStack_350);
    pauVar14 = (undefined1 (*) [16])&uStack_1e0;
    bVar7 = false;
  } while (bVar11);
  local_3a8 = param_7;
  local_3b0 = &local_1f8;
  local_3b8 = FUN_14710519c;
  local_3c0 = param_6;
  local_3c8 = &local_358;
  local_3d0 = &local_178;
  local_3d8 = FUN_14710524a;
  local_3e8 = local_2f8;
  local_3a0 = 0;
  local_3e0 = param_4;
  pdVar8 = (double *)local_398._0_8_;
  local_398 = local_318;
  FUN_14044bf58(local_370,param_2,pdVar8,param_5);
  if ((local_f0 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14710b173 FUN_14710b173 body=4128 status=ok
// SIG undefined FUN_14710b173(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14710b173(undefined8 param_1,undefined8 param_2,double *param_3,longlong param_4,
                  double *param_5,longlong param_6,undefined8 param_7)

{
  double dVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  undefined1 *puVar15;
  bool bVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auStack_378 [8];
  undefined8 local_370;
  undefined8 local_368;
  longlong local_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
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
  double dStack_170;
  double local_168;
  double dStack_160;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)&local_2f8;
  lVar12 = param_4 + 0x28;
  local_370 = param_2;
  local_368 = param_1;
  uVar8 = FUN_144a7484c(lVar12,&local_178);
  auVar40 = _DAT_149934d80;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  local_2b8 = *(undefined1 (*) [16])(param_3 + 8);
  dVar25 = local_2b8._0_8_;
  dVar29 = local_2b8._8_8_;
  auVar2 = *(undefined1 (*) [16])(param_3 + 10);
  dVar4 = auVar2._0_8_;
  dVar44 = (double)DAT_149934d80;
  dVar47 = DAT_149934d80._8_8_;
  auVar31 = minpd(_DAT_149934d80,local_2b8);
  auVar34 = minpd(ZEXT816(0x3ff0000000000000),auVar2);
  auVar35._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
  iVar9 = movmskpd(uVar8,auVar35);
  auVar31._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar11 = movmskpd((int)lVar12,auVar31);
  local_360 = param_4;
  if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar48 = *param_3;
    dVar26 = param_3[1];
    dVar50 = param_3[3];
    dVar33 = param_3[3];
    dVar39 = param_3[1];
    dVar38 = param_3[1];
    dVar49 = param_3[2];
    dVar51 = param_3[3];
    dVar37 = param_3[2];
    dVar1 = param_3[2];
    local_2f8 = dStack_170 * dVar37 * -1.0 +
                local_168 * dVar39 + dStack_160 * *param_3 * 1.0 + local_178 * dVar50;
    dStack_2f0 = local_178 * dVar1 * 1.0 +
                 dStack_160 * dVar38 + local_168 * *param_3 * -1.0 + dStack_170 * dVar33;
    dVar25 = *(double *)(param_4 + 0x10) * dVar25;
    dVar29 = *(double *)(param_4 + 0x18) * dVar29;
    dVar52 = *(double *)(param_4 + 0x20) * dVar4;
    dVar53 = auVar2._8_8_ * 0.0;
    dVar45 = dVar29 * dVar48 - dVar25 * dVar26;
    dVar24 = dVar52 * dVar26 - dVar29 * dVar49;
    dVar42 = dVar25 * dVar49 - dVar52 * dVar48;
    dVar46 = dVar53 * dVar51 - dVar53 * dVar51;
    dVar24 = dVar24 + dVar24;
    dVar42 = dVar42 + dVar42;
    dVar45 = dVar45 + dVar45;
    dVar46 = dVar46 + dVar46;
    local_2d8 = (dVar45 * dVar26 - dVar49 * dVar42) + dVar50 * dVar24 + dVar25 + param_3[4];
    dStack_2d0 = (dVar24 * dVar49 - dVar45 * dVar48) + dVar33 * dVar42 + dVar29 + param_3[5];
    local_2c8 = (dVar42 * dVar48 - dVar26 * dVar24) + dVar50 * dVar45 + dVar52 + param_3[6];
    dStack_2c0 = (dVar46 * dVar51 - dVar46 * dVar51) + dVar33 * dVar46 + dVar53 + param_3[7];
    local_2e8._8_8_ =
         local_168 * dVar1 * -1.0 +
         ((*param_3 * local_178 * -1.0 + dStack_160 * dVar33) - dStack_170 * dVar38);
    local_2e8._0_8_ =
         dStack_160 * dVar37 * 1.0 +
         ((*param_3 * dStack_170 * 1.0 + local_168 * dVar50) - local_178 * dVar39);
    uVar8 = 0;
  }
  else {
    dVar38 = *param_3;
    dVar39 = param_3[1];
    dVar1 = param_3[2];
    dVar37 = dVar39 + dVar39;
    dVar45 = dVar1 + dVar1;
    dVar50 = dVar38 * (dVar38 + dVar38);
    local_1f8 = (dVar44 - (dVar1 * dVar45 + dVar39 * dVar37)) * dVar25;
    dVar33 = param_3[3];
    dVar46 = dVar45 * dVar33;
    dVar48 = (dVar38 + dVar38) * param_3[3];
    dVar33 = dVar37 * dVar33;
    dStack_1b0 = (dVar45 * dVar39 - dVar48) * dVar4;
    local_1b8 = (dVar33 + *param_3 * dVar45) * dVar4;
    dStack_1f0 = (dVar37 * dVar38 + dVar46) * dVar25;
    local_1c8 = (dVar45 * dVar39 + dVar48) * dVar29;
    local_1a8 = (1.0 - (dVar50 + dVar39 * dVar37)) * dVar4;
    local_1e8 = (*param_3 * dVar45 - dVar33) * dVar25;
    uStack_1e0 = 0;
    local_1d8._8_8_ = (dVar47 - (dVar1 * dVar45 + dVar50)) * dVar29;
    local_1d8._0_8_ = (dVar37 * dVar38 - dVar46) * dVar29;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_3[4];
    dStack_190 = param_3[5];
    local_188 = param_3[6];
    uStack_180 = 0x3ff0000000000000;
    dVar38 = dStack_170 + dStack_170;
    dVar33 = local_168 + local_168;
    dVar50 = local_178 * (local_178 + local_178);
    local_278 = dVar44 - (local_168 * dVar33 + dStack_170 * dVar38);
    dStack_250 = dVar47 - (local_168 * dVar33 + dVar50);
    local_228 = 1.0 - (dVar50 + dStack_170 * dVar38);
    dVar50 = (local_178 + local_178) * dStack_160;
    dStack_270 = dVar38 * local_178 + dVar33 * dStack_160;
    local_248 = dVar33 * dStack_170 + dVar50;
    local_258 = dVar38 * local_178 - dVar33 * dStack_160;
    local_268 = local_178 * dVar33 - dVar38 * dStack_160;
    uStack_260 = 0;
    uStack_240 = 0;
    local_238._8_8_ = dVar33 * dStack_170 - dVar50;
    local_238._0_8_ = dVar38 * dStack_160 + local_178 * dVar33;
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_218 = *(double *)(param_4 + 0x10);
    dStack_210 = *(double *)(param_4 + 0x18);
    local_208 = *(double *)(param_4 + 0x20);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar34._8_8_ = -(ulonglong)(0.0 <= dVar29);
    auVar34._0_8_ = -(ulonglong)(0.0 <= dVar25);
    auVar31 = blendvpd(_DAT_149936790,auVar40,auVar34);
    uVar18 = -(ulonglong)(0.0 <= dVar4 * 1.0);
    dVar25 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
    dVar29 = auVar31._0_8_;
    local_168 = local_168 * dVar29;
    dStack_170 = dStack_170 * dVar29;
    local_178 = local_178 * dVar29;
    dVar29 = auVar31._8_8_;
    local_148 = local_148 * dVar29;
    local_150 = local_150 * dVar29;
    local_158 = dVar29 * local_158;
    local_128 = local_128 * dVar25;
    local_130 = local_130 * dVar25;
    local_138 = dVar25 * local_138;
    pdVar13 = &local_358;
    iVar9 = FUN_14481fd10(pdVar13,&local_178);
    uVar8 = SUB84(pdVar13,0);
    dVar25 = (double)local_348._0_8_ * (double)local_348._0_8_ + local_358 * local_358;
    dVar29 = (double)local_348._8_8_ * (double)local_348._8_8_ + dStack_350 * dStack_350;
    auVar27._0_8_ = dVar25 + dVar29;
    auVar27._8_8_ = dVar25 + dVar29;
    auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
    auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
    auVar31 = sqrtpd(auVar27,auVar27);
    auVar31 = divpd(auVar40,auVar31);
    auVar32._0_8_ = auVar31._0_8_ * (double)local_348._0_8_;
    auVar32._8_8_ = auVar31._8_8_ * (double)local_348._8_8_;
    local_2f8 = (double)((ulonglong)(local_358 * auVar31._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_));
    dStack_2f0 = (double)((ulonglong)(dStack_350 * auVar31._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_));
    local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar19);
    local_2d8 = local_118;
    dStack_2d0 = dStack_110;
    local_2c8 = local_108;
    dStack_2c0 = 0.0;
  }
  dVar4 = dVar4 * 1.0;
  dVar25 = auVar2._8_8_ * 0.0;
  local_2a8._8_4_ = SUB84(dVar25,0);
  local_2a8._0_8_ = dVar4;
  local_2a8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  dVar50 = *(double *)(param_6 + 0x40);
  dVar38 = *(double *)(param_6 + 0x48);
  dVar39 = *(double *)(param_6 + 0x50);
  dVar1 = *(double *)(param_6 + 0x58);
  local_338 = 0.0;
  dStack_330 = 0.0;
  local_328 = 0.0;
  dStack_320 = 0.0;
  auVar2 = *(undefined1 (*) [16])(param_5 + 8);
  dVar25 = auVar2._0_8_;
  dVar33 = auVar2._8_8_;
  auVar31 = *(undefined1 (*) [16])(param_5 + 10);
  dVar29 = auVar31._0_8_;
  auVar35 = minpd(auVar40,auVar2);
  auVar34 = minpd(ZEXT816(0x3ff0000000000000),auVar31);
  auVar36._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
  auVar36._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
  iVar9 = movmskpd(iVar9,auVar36);
  auVar43._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar43._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar11 = movmskpd(uVar8,auVar43);
  if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar52 = *param_5;
    dVar53 = param_5[1];
    dVar47 = param_5[3];
    dVar44 = param_5[3];
    dVar45 = param_5[1];
    dVar37 = param_5[1];
    dVar24 = param_5[2];
    dVar42 = param_5[3];
    dVar48 = param_5[2];
    dVar46 = param_5[2];
    local_358 = dVar38 * dVar48 * -1.0 + dVar39 * dVar45 + dVar1 * *param_5 * 1.0 + dVar50 * dVar47;
    dStack_350 = dVar50 * dVar46 * 1.0 + dVar1 * dVar37 + dVar39 * *param_5 * -1.0 + dVar38 * dVar44
    ;
    dVar25 = *(double *)(param_6 + 0x20) * dVar25;
    dVar33 = *(double *)(param_6 + 0x28) * dVar33;
    dVar22 = *(double *)(param_6 + 0x30) * dVar29;
    dVar23 = auVar31._8_8_ * 0.0;
    dVar26 = dVar33 * dVar52 - dVar25 * dVar53;
    dVar30 = dVar22 * dVar53 - dVar33 * dVar24;
    dVar51 = dVar25 * dVar24 - dVar22 * dVar52;
    dVar49 = dVar23 * dVar42 - dVar23 * dVar42;
    dVar30 = dVar30 + dVar30;
    dVar51 = dVar51 + dVar51;
    dVar26 = dVar26 + dVar26;
    dVar49 = dVar49 + dVar49;
    local_338 = (dVar26 * dVar53 - dVar24 * dVar51) + dVar47 * dVar30 + dVar25 + param_5[4];
    dStack_330 = (dVar30 * dVar24 - dVar26 * dVar52) + dVar44 * dVar51 + dVar33 + param_5[5];
    local_328 = (dVar51 * dVar52 - dVar53 * dVar30) + dVar47 * dVar26 + dVar22 + param_5[6];
    dStack_320 = (dVar49 * dVar42 - dVar49 * dVar42) + dVar44 * dVar49 + dVar23 + param_5[7];
    local_348._8_8_ =
         dVar39 * dVar46 * -1.0 + ((*param_5 * dVar50 * -1.0 + dVar1 * dVar44) - dVar38 * dVar37);
    local_348._0_8_ =
         dVar1 * dVar48 * 1.0 + ((*param_5 * dVar38 * 1.0 + dVar39 * dVar47) - dVar50 * dVar45);
  }
  else {
    dVar48 = *param_5;
    dVar26 = param_5[1];
    dVar37 = param_5[2];
    dVar49 = dVar26 + dVar26;
    dVar51 = dVar37 + dVar37;
    dVar46 = dVar48 * (dVar48 + dVar48);
    local_1f8 = (dVar44 - (dVar37 * dVar51 + dVar26 * dVar49)) * dVar25;
    dVar45 = (dVar47 - (dVar37 * dVar51 + dVar46)) * dVar33;
    dVar37 = param_5[3];
    dVar52 = dVar51 * dVar37;
    dVar53 = (dVar48 + dVar48) * param_5[3];
    dVar37 = dVar49 * dVar37;
    dStack_1b0 = (dVar51 * dVar26 - dVar53) * dVar29;
    local_1b8 = (dVar37 + *param_5 * dVar51) * dVar29;
    dStack_1f0 = (dVar49 * dVar48 + dVar52) * dVar25;
    local_1c8 = (dVar51 * dVar26 + dVar53) * dVar33;
    local_1a8 = (1.0 - (dVar46 + dVar26 * dVar49)) * dVar29;
    local_1e8 = (*param_5 * dVar51 - dVar37) * dVar25;
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar45,0);
    local_1d8._0_8_ = (dVar49 * dVar48 - dVar52) * dVar33;
    local_1d8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_5[4];
    dStack_190 = param_5[5];
    local_188 = param_5[6];
    uStack_180 = 0x3ff0000000000000;
    dVar46 = dVar38 + dVar38;
    dVar45 = dVar39 + dVar39;
    dVar37 = dVar50 * (dVar50 + dVar50);
    local_278 = dVar44 - (dVar39 * dVar45 + dVar38 * dVar46);
    dStack_250 = dVar47 - (dVar39 * dVar45 + dVar37);
    local_228 = 1.0 - (dVar37 + dVar38 * dVar46);
    dVar44 = (dVar50 + dVar50) * dVar1;
    dStack_270 = dVar46 * dVar50 + dVar45 * dVar1;
    local_248 = dVar45 * dVar38 + dVar44;
    local_258 = dVar46 * dVar50 - dVar45 * dVar1;
    dVar44 = dVar45 * dVar38 - dVar44;
    local_268 = dVar50 * dVar45 - dVar46 * dVar1;
    uStack_260 = 0;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar44,0);
    local_238._0_8_ = dVar46 * dVar1 + dVar50 * dVar45;
    local_238._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_218 = *(double *)(param_6 + 0x20);
    dStack_210 = *(double *)(param_6 + 0x28);
    local_208 = *(double *)(param_6 + 0x30);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar20._8_8_ = -(ulonglong)(0.0 <= dVar33);
    auVar20._0_8_ = -(ulonglong)(0.0 <= dVar25);
    auVar35 = blendvpd(_DAT_149936790,auVar40,auVar20);
    uVar18 = -(ulonglong)(0.0 <= dVar29 * 1.0);
    dVar25 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
    dVar44 = auVar35._0_8_;
    local_168 = local_168 * dVar44;
    dStack_170 = dStack_170 * dVar44;
    local_178 = local_178 * dVar44;
    dVar44 = auVar35._8_8_;
    local_148 = local_148 * dVar44;
    local_150 = local_150 * dVar44;
    local_158 = dVar44 * local_158;
    local_128 = local_128 * dVar25;
    local_130 = local_130 * dVar25;
    local_138 = dVar25 * local_138;
    FUN_14481fd10(&local_298,&local_178);
    dVar25 = local_288 * local_288 + local_298 * local_298;
    dVar44 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar28._0_8_ = dVar25 + dVar44;
    auVar28._8_8_ = dVar25 + dVar44;
    auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
    auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    auVar35 = sqrtpd(auVar28,auVar28);
    auVar40 = divpd(auVar40,auVar35);
    auVar41._0_8_ = auVar40._0_8_ * local_288;
    auVar41._8_8_ = auVar40._8_8_ * dStack_280;
    local_358 = (double)((ulonglong)(local_298 * auVar40._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
    dStack_350 = (double)((ulonglong)(dStack_290 * auVar40._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
    local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar21);
    local_338 = local_118;
    dStack_330 = dStack_110;
    local_328 = local_108;
    dStack_320 = 0.0;
  }
  lVar12 = local_360;
  dStack_300 = auVar31._8_8_ * 0.0;
  local_308 = dVar29 * 1.0;
  puVar15 = auStack_378;
  local_178 = 0.0;
  dStack_170 = 0.0;
  local_168 = *(double *)(local_360 + 0x50) * 0.5 * dVar4;
  dStack_160 = 0.0;
  local_158 = 0.0;
  local_150 = *(double *)(local_360 + 0x50) * -0.5 * dVar4;
  iVar9 = *(int *)(param_6 + 0x18);
  lVar14 = (longlong)iVar9;
  if (lVar14 == 0) {
    puVar10 = (undefined1 *)0x0;
  }
  else {
    lVar3 = -(lVar14 * 0x18 + 0x1eU & 0xfffffffffffffff0);
    puVar15 = auStack_378 + lVar3;
    puVar10 = auStack_378 + lVar3;
  }
  pdVar13 = &local_178;
  bVar7 = true;
  do {
    bVar16 = bVar7;
    dVar33 = *pdVar13 * (double)local_2b8._0_8_;
    dVar50 = pdVar13[1] * (double)local_2b8._8_8_;
    dVar25 = pdVar13[2] * dVar4;
    dVar44 = dVar50 * local_2f8 - dStack_2f0 * dVar33;
    dVar29 = dVar25 * dStack_2f0 - (double)local_2e8._0_8_ * dVar50;
    dVar47 = dVar33 * (double)local_2e8._0_8_ - local_2f8 * dVar25;
    dVar29 = dVar29 + dVar29;
    dVar47 = dVar47 + dVar47;
    dVar44 = dVar44 + dVar44;
    *pdVar13 = (dVar44 * dStack_2f0 - dVar47 * (double)local_2e8._0_8_) +
               (double)local_2e8._8_8_ * dVar29 + dVar33;
    pdVar13[1] = ((double)local_2e8._0_8_ * dVar29 - local_2f8 * dVar44) +
                 (double)local_2e8._8_8_ * dVar47 + dVar50;
    pdVar13[2] = dVar44 * (double)local_2e8._8_8_ + dVar25 +
                 (dVar47 * local_2f8 - dVar29 * dStack_2f0);
    pdVar13 = &dStack_160;
    bVar7 = false;
  } while (bVar16);
  local_318 = auVar2;
  if (0 < iVar9) {
    lVar3 = *(longlong *)(param_6 + 0x10);
    lVar17 = 0;
    do {
      pdVar13 = (double *)(lVar3 + lVar17);
      dVar47 = *pdVar13 * (double)local_318._0_8_;
      dVar44 = pdVar13[1] * (double)local_318._8_8_;
      dVar29 = *(double *)(lVar3 + 0x10 + lVar17) * local_308;
      dVar33 = dVar44 * local_358 - dVar47 * dStack_350;
      dVar50 = dVar29 * dStack_350 - dVar44 * (double)local_348._0_8_;
      dVar25 = dVar47 * (double)local_348._0_8_ - local_358 * dVar29;
      dVar50 = dVar50 + dVar50;
      dVar25 = dVar25 + dVar25;
      dVar33 = dVar33 + dVar33;
      dVar4 = dVar25 * local_358;
      dVar39 = dVar33 * (double)local_348._8_8_;
      dVar38 = dVar50 * dStack_350;
      dVar44 = ((double)local_348._0_8_ * dVar50 - local_358 * dVar33) +
               (double)local_348._8_8_ * dVar25 + dVar44;
      auVar2._8_4_ = SUB84(dVar44,0);
      auVar2._0_8_ = (dVar33 * dStack_350 - dVar25 * (double)local_348._0_8_) +
                     (double)local_348._8_8_ * dVar50 + dVar47;
      auVar2._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      *(undefined1 (*) [16])(puVar10 + lVar17) = auVar2;
      *(double *)(puVar10 + lVar17 + 0x10) = dVar39 + dVar29 + (dVar4 - dVar38);
      lVar17 = lVar17 + 0x18;
    } while (lVar14 * 0x18 != lVar17);
  }
  *(undefined8 *)(puVar15 + -0x10) = param_7;
  *(undefined1 **)(puVar15 + -0x18) = puVar10;
  *(undefined1 **)(puVar15 + -0x20) = &LAB_1471052f9;
  *(longlong *)(puVar15 + -0x28) = param_6;
  *(double **)(puVar15 + -0x30) = &local_358;
  *(double **)(puVar15 + -0x38) = &local_178;
  *(code **)(puVar15 + -0x40) = FUN_14710524a;
  *(longlong *)(puVar15 + -0x48) = lVar12;
  *(double **)(puVar15 + -0x50) = &local_2f8;
  *(undefined8 *)(puVar15 + -8) = 0;
  uVar6 = local_368;
  uVar5 = local_370;
  *(undefined8 *)(puVar15 + -0x78) = 0x14710bda7;
  FUN_14044bf58(uVar6,uVar5,param_3,param_5);
  if ((local_f0 ^ (ulonglong)&local_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -0x28) = &UNK_14710be29;
  FUN_144d8e3a0();
}



// FUNCTION 14710c198 FUN_14710c198 body=2521 status=ok
// SIG undefined FUN_14710c198(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14710c198(longlong param_1,double *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  double *pdVar11;
  double *pdVar12;
  bool bVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar21;
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_358 [32];
  double *local_338;
  longlong local_330;
  code *local_328;
  double *local_320;
  double *local_318;
  longlong local_310;
  code *local_308;
  double *local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168 [4];
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar10 = param_3 + 0x28;
  uVar7 = FUN_144a7484c(lVar10,local_168);
  auVar24 = _DAT_149934d80;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  local_2a8 = *(undefined1 (*) [16])(param_2 + 8);
  dVar2 = local_2a8._0_8_;
  dVar3 = local_2a8._8_8_;
  auVar1 = *(undefined1 (*) [16])(param_2 + 10);
  local_298 = auVar1._0_8_;
  auVar16 = minpd(_DAT_149934d80,local_2a8);
  auVar27 = minpd(ZEXT816(0x3ff0000000000000),auVar1);
  auVar17._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
  auVar17._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
  iVar8 = movmskpd(uVar7,auVar17);
  auVar16._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar16._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  uVar9 = movmskpd((int)lVar10,auVar16);
  if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
    dVar30 = *param_2;
    dVar31 = param_2[1];
    dVar26 = param_2[3];
    dVar21 = param_2[3];
    dVar29 = param_2[1];
    dVar4 = param_2[1];
    dVar33 = param_2[2];
    dVar5 = param_2[3];
    dVar32 = param_2[2];
    dVar28 = param_2[2];
    local_2e8 = local_168[1] * dVar32 * -1.0 +
                local_168[2] * dVar29 + local_168[3] * *param_2 * 1.0 + local_168[0] * dVar26;
    dStack_2e0 = local_168[0] * dVar28 * 1.0 +
                 local_168[3] * dVar4 + local_168[2] * *param_2 * -1.0 + local_168[1] * dVar21;
    local_2d8._0_8_ =
         local_168[3] * dVar32 * 1.0 +
         ((*param_2 * local_168[1] * 1.0 + local_168[2] * dVar26) - local_168[0] * dVar29);
    local_2d8._8_8_ =
         local_168[2] * dVar28 * -1.0 +
         ((*param_2 * local_168[0] * -1.0 + local_168[3] * dVar21) - local_168[1] * dVar4);
    dVar19 = *(double *)(param_3 + 0x10) * dVar2;
    dVar22 = *(double *)(param_3 + 0x18) * dVar3;
    dVar28 = *(double *)(param_3 + 0x20) * local_298;
    dVar18 = auVar1._8_8_ * 0.0;
    dVar29 = dVar22 * dVar30 - dVar19 * dVar31;
    dVar23 = dVar28 * dVar31 - dVar22 * dVar33;
    dVar32 = dVar19 * dVar33 - dVar28 * dVar30;
    dVar4 = dVar18 * dVar5 - dVar18 * dVar5;
    dVar23 = dVar23 + dVar23;
    dVar32 = dVar32 + dVar32;
    dVar29 = dVar29 + dVar29;
    dVar4 = dVar4 + dVar4;
    local_2c8 = (dVar29 * dVar31 - dVar33 * dVar32) + dVar26 * dVar23 + dVar19 + param_2[4];
    dStack_2c0 = (dVar23 * dVar33 - dVar29 * dVar30) + dVar21 * dVar32 + dVar22 + param_2[5];
    local_2b8 = (dVar32 * dVar30 - dVar31 * dVar23) + dVar26 * dVar29 + dVar28 + param_2[6];
    dStack_2b0 = (dVar4 * dVar5 - dVar4 * dVar5) + dVar21 * dVar4 + dVar18 + param_2[7];
  }
  else {
    dVar4 = *param_2;
    dVar32 = param_2[1];
    dVar26 = param_2[2];
    dVar28 = dVar32 + dVar32;
    dVar30 = dVar26 + dVar26;
    dVar29 = dVar4 * (dVar4 + dVar4);
    local_1e8 = ((double)DAT_149934d80 - (dVar26 * dVar30 + dVar32 * dVar28)) * dVar2;
    dVar21 = (DAT_149934d80._8_8_ - (dVar26 * dVar30 + dVar29)) * dVar3;
    dVar26 = param_2[3];
    dVar31 = dVar30 * dVar26;
    dVar33 = (dVar4 + dVar4) * param_2[3];
    dVar26 = dVar28 * dVar26;
    dStack_1a0 = (dVar30 * dVar32 - dVar33) * local_298;
    local_1a8 = (dVar26 + *param_2 * dVar30) * local_298;
    dStack_1e0 = (dVar28 * dVar4 + dVar31) * dVar2;
    local_1b8 = (dVar30 * dVar32 + dVar33) * dVar3;
    local_198 = (1.0 - (dVar29 + dVar32 * dVar28)) * local_298;
    local_1d8 = (*param_2 * dVar30 - dVar26) * dVar2;
    dStack_1d0 = 0.0;
    local_1c8._8_4_ = SUB84(dVar21,0);
    local_1c8._0_8_ = (dVar28 * dVar4 - dVar31) * dVar3;
    local_1c8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = param_2[4];
    dStack_180 = param_2[5];
    local_178 = param_2[6];
    uStack_170 = 0x3ff0000000000000;
    dVar29 = local_168[1] + local_168[1];
    dVar21 = local_168[2] + local_168[2];
    dVar26 = local_168[0] * (local_168[0] + local_168[0]);
    local_268 = (double)DAT_149934d80 - (local_168[2] * dVar21 + local_168[1] * dVar29);
    dStack_240 = DAT_149934d80._8_8_ - (local_168[2] * dVar21 + dVar26);
    local_218 = 1.0 - (dVar26 + local_168[1] * dVar29);
    dVar26 = (local_168[0] + local_168[0]) * local_168[3];
    dStack_260 = dVar29 * local_168[0] + dVar21 * local_168[3];
    local_238 = dVar21 * local_168[1] + dVar26;
    local_248 = dVar29 * local_168[0] - dVar21 * local_168[3];
    dVar26 = dVar21 * local_168[1] - dVar26;
    local_258 = local_168[0] * dVar21 - dVar29 * local_168[3];
    dStack_250 = 0.0;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar26,0);
    local_228._0_8_ = dVar29 * local_168[3] + local_168[0] * dVar21;
    local_228._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0x3ff0000000000000;
    local_208 = *(double *)(param_3 + 0x10);
    dStack_200 = *(double *)(param_3 + 0x18);
    local_1f8 = *(double *)(param_3 + 0x20);
    FUN_1447fea8d(local_168);
    FUN_144a1c686(local_168,0x3e45798ee0000000);
    auVar27._8_8_ = -(ulonglong)(0.0 <= dVar3);
    auVar27._0_8_ = -(ulonglong)(0.0 <= dVar2);
    auVar16 = blendvpd(_DAT_149936790,auVar24,auVar27);
    uVar14 = -(ulonglong)(0.0 <= local_298 * 1.0);
    dVar26 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
    dVar21 = auVar16._0_8_;
    local_168[2] = local_168[2] * dVar21;
    local_168[1] = local_168[1] * dVar21;
    local_168[0] = local_168[0] * dVar21;
    dVar21 = auVar16._8_8_;
    local_138 = local_138 * dVar21;
    local_140 = local_140 * dVar21;
    local_148 = dVar21 * local_148;
    local_118 = local_118 * dVar26;
    local_120 = local_120 * dVar26;
    local_128 = dVar26 * local_128;
    FUN_14481fd10(&local_288,local_168);
    dVar26 = local_278 * local_278 + local_288 * local_288;
    dVar21 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
    auVar20._0_8_ = dVar26 + dVar21;
    auVar20._8_8_ = dVar26 + dVar21;
    auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
    auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
    auVar16 = sqrtpd(auVar20,auVar20);
    auVar24 = divpd(auVar24,auVar16);
    auVar25._0_8_ = auVar24._0_8_ * local_278;
    auVar25._8_8_ = auVar24._8_8_ * dStack_270;
    local_2e8 = (double)((ulonglong)(local_288 * auVar24._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
    dStack_2e0 = (double)((ulonglong)(dStack_280 * auVar24._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
    local_2d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar15);
    local_2c8 = local_108;
    dStack_2c0 = dStack_100;
    local_2b8 = local_f8;
    dStack_2b0 = 0.0;
  }
  dStack_290 = auVar1._8_8_ * 0.0;
  local_298 = local_298 * 1.0;
  local_318 = local_168;
  pdVar11 = (double *)&DAT_14c846480;
  pdVar12 = local_318;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pdVar12 = *pdVar11;
    pdVar11 = pdVar11 + 1;
    pdVar12 = pdVar12 + 1;
  }
  local_268 = 0.0;
  dStack_260 = 0.0;
  local_258 = *(double *)(param_3 + 0x50) * 0.5 * local_298;
  dStack_250 = 0.0;
  local_248 = 0.0;
  dStack_240 = *(double *)(param_3 + 0x50) * -0.5 * local_298;
  local_1d8 = *(double *)(param_4 + 0x58) - *(double *)(param_4 + 0x28);
  dStack_1e0 = *(double *)(param_4 + 0x50) - *(double *)(param_4 + 0x20);
  local_1e8 = *(double *)(param_4 + 0x48) - *(double *)(param_4 + 0x18);
  dStack_1d0 = *(double *)(param_4 + 0x30) - *(double *)(param_4 + 0x18);
  local_1c8._8_8_ = *(double *)(param_4 + 0x40) - *(double *)(param_4 + 0x28);
  local_1c8._0_8_ = *(double *)(param_4 + 0x38) - *(double *)(param_4 + 0x20);
  local_1b8 = *(double *)(param_4 + 0x70) * *(double *)(param_1 + 0x100) +
              *(double *)(param_4 + 0x60) * *(double *)(param_1 + 0xf0) +
              *(double *)(param_4 + 0x68) * *(double *)(param_1 + 0xf8);
  if (-*(double *)(param_4 + 0x90) <= local_1b8) {
    local_1b8 = -*(double *)(param_4 + 0x90);
  }
  local_1b8 = ABS(local_1b8);
  dVar26 = local_2d8._0_8_;
  dVar21 = local_2d8._8_8_;
  uStack_1b0 = 0;
  local_1a8 = 0.0;
  pdVar11 = &local_268;
  bVar6 = true;
  do {
    bVar13 = bVar6;
    dVar30 = *pdVar11 * dVar2;
    dVar31 = pdVar11[1] * dVar3;
    dVar28 = pdVar11[2] * local_298;
    dVar29 = dVar31 * local_2e8 - dStack_2e0 * dVar30;
    dVar4 = dVar28 * dStack_2e0 - dVar26 * dVar31;
    dVar32 = dVar30 * dVar26 - local_2e8 * dVar28;
    dVar4 = dVar4 + dVar4;
    dVar32 = dVar32 + dVar32;
    dVar29 = dVar29 + dVar29;
    *pdVar11 = (dVar29 * dStack_2e0 - dVar32 * dVar26) + dVar21 * dVar4 + dVar30;
    pdVar11[1] = (dVar26 * dVar4 - local_2e8 * dVar29) + dVar21 * dVar32 + dVar31;
    pdVar11[2] = dVar29 * dVar21 + dVar28 + (dVar32 * local_2e8 - dVar4 * dStack_2e0);
    pdVar11 = &dStack_250;
    bVar6 = false;
  } while (bVar13);
  local_2f8 = param_5;
  local_300 = &local_1e8;
  local_308 = FUN_1471053b7;
  local_320 = &local_268;
  local_328 = FUN_14710524a;
  local_338 = &local_2e8;
  local_2f0 = 0;
  local_330 = param_3;
  local_310 = param_4;
  FUN_14044bf58(param_1,0,param_2,&DAT_14c846480);
  if ((local_e0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14710cb72 FUN_14710cb72 body=4318 status=ok
// SIG undefined FUN_14710cb72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14710cb72(undefined8 param_1,undefined8 param_2,double *param_3,longlong param_4,
                  double *param_5,longlong param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  double *pdVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  ulonglong uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_408 [32];
  undefined1 *local_3e8;
  longlong local_3e0;
  code *local_3d8;
  double *local_3d0;
  double *local_3c8;
  longlong local_3c0;
  code *local_3b8;
  double *local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined8 local_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
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
  double dStack_170;
  double local_168;
  double dStack_160;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  lVar13 = param_4 + 0x28;
  local_370 = param_1;
  uVar9 = FUN_144a7484c(lVar13,&local_178);
  auVar34 = _DAT_149934d80;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  auVar22 = *(undefined1 (*) [16])(param_3 + 8);
  dVar23 = auVar22._0_8_;
  dVar26 = auVar22._8_8_;
  auVar19 = *(undefined1 (*) [16])(param_3 + 10);
  dVar36 = auVar19._0_8_;
  dVar30 = (double)DAT_149934d80;
  dVar46 = DAT_149934d80._8_8_;
  auVar32 = minpd(_DAT_149934d80,auVar22);
  auVar38 = minpd(ZEXT816(0x3ff0000000000000),auVar19);
  auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  iVar10 = movmskpd(uVar9,auVar33);
  auVar32._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
  auVar32._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
  uVar12 = movmskpd((int)lVar13,auVar32);
  if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
    dVar39 = *param_3;
    dVar45 = param_3[1];
    dVar35 = param_3[3];
    dVar3 = param_3[3];
    dVar40 = param_3[1];
    dVar42 = param_3[1];
    dVar4 = param_3[2];
    dVar5 = param_3[3];
    dVar43 = param_3[2];
    dVar16 = param_3[2];
    dVar41 = dStack_170 * dVar43 * -1.0 +
             local_168 * dVar40 + dStack_160 * *param_3 * 1.0 + local_178 * dVar35;
    dVar44 = local_178 * dVar16 * 1.0 +
             dStack_160 * dVar42 + local_168 * *param_3 * -1.0 + dStack_170 * dVar3;
    auVar38._0_8_ =
         dStack_160 * dVar43 * 1.0 +
         ((*param_3 * dStack_170 * 1.0 + local_168 * dVar35) - local_178 * dVar40);
    auVar38._8_8_ =
         local_168 * dVar16 * -1.0 +
         ((*param_3 * local_178 * -1.0 + dStack_160 * dVar3) - dStack_170 * dVar42);
    dVar23 = *(double *)(param_4 + 0x10) * dVar23;
    dVar26 = *(double *)(param_4 + 0x18) * dVar26;
    dVar40 = *(double *)(param_4 + 0x20) * dVar36;
    dVar42 = auVar19._8_8_ * 0.0;
    dVar43 = dVar26 * dVar39 - dVar23 * dVar45;
    dVar16 = dVar40 * dVar45 - dVar26 * dVar4;
    dVar24 = dVar23 * dVar4 - dVar40 * dVar39;
    dVar27 = dVar42 * dVar5 - dVar42 * dVar5;
    dVar16 = dVar16 + dVar16;
    dVar24 = dVar24 + dVar24;
    dVar43 = dVar43 + dVar43;
    dVar27 = dVar27 + dVar27;
    local_2d8 = (dVar43 * dVar45 - dVar4 * dVar24) + dVar35 * dVar16 + dVar23 + param_3[4];
    dStack_2d0 = (dVar16 * dVar4 - dVar43 * dVar39) + dVar3 * dVar24 + dVar26 + param_3[5];
    local_2c8 = (dVar24 * dVar39 - dVar45 * dVar16) + dVar35 * dVar43 + dVar40 + param_3[6];
    dStack_2c0 = (dVar27 * dVar5 - dVar27 * dVar5) + dVar3 * dVar27 + dVar42 + param_3[7];
    local_2f8._8_4_ = SUB84(dVar44,0);
    local_2f8._0_8_ = dVar41;
    local_2f8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  }
  else {
    dVar16 = *param_3;
    dVar41 = param_3[1];
    dVar44 = param_3[2];
    dVar39 = dVar41 + dVar41;
    dVar40 = dVar44 + dVar44;
    dVar3 = dVar16 * (dVar16 + dVar16);
    local_1f8 = (dVar30 - (dVar44 * dVar40 + dVar41 * dVar39)) * dVar23;
    dVar35 = param_3[3];
    dVar42 = dVar40 * dVar35;
    dVar43 = (dVar16 + dVar16) * param_3[3];
    dVar35 = dVar39 * dVar35;
    dStack_1b0 = (dVar40 * dVar41 - dVar43) * dVar36;
    local_1b8 = (dVar35 + *param_3 * dVar40) * dVar36;
    dStack_1f0 = (dVar39 * dVar16 + dVar42) * dVar23;
    local_1c8 = (dVar40 * dVar41 + dVar43) * dVar26;
    local_1a8 = (1.0 - (dVar3 + dVar41 * dVar39)) * dVar36;
    local_1e8 = (*param_3 * dVar40 - dVar35) * dVar23;
    uStack_1e0 = 0;
    local_1d8._8_8_ = (dVar46 - (dVar44 * dVar40 + dVar3)) * dVar26;
    local_1d8._0_8_ = (dVar39 * dVar16 - dVar42) * dVar26;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_3[4];
    dStack_190 = param_3[5];
    local_188 = param_3[6];
    uStack_180 = 0x3ff0000000000000;
    dVar40 = dStack_170 + dStack_170;
    dVar42 = local_168 + local_168;
    dVar35 = local_178 * (local_178 + local_178);
    local_278 = dVar30 - (local_168 * dVar42 + dStack_170 * dVar40);
    dVar3 = dVar46 - (local_168 * dVar42 + dVar35);
    local_228 = 1.0 - (dVar35 + dStack_170 * dVar40);
    dVar35 = (local_178 + local_178) * dStack_160;
    dStack_270 = dVar40 * local_178 + dVar42 * dStack_160;
    local_248 = dVar42 * dStack_170 + dVar35;
    local_268 = local_178 * dVar42 - dVar40 * dStack_160;
    uStack_260 = 0;
    local_258._8_4_ = SUB84(dVar3,0);
    local_258._0_8_ = dVar40 * local_178 - dVar42 * dStack_160;
    local_258._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uStack_240 = 0;
    local_238._8_8_ = dVar42 * dStack_170 - dVar35;
    local_238._0_8_ = dVar40 * dStack_160 + local_178 * dVar42;
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_218 = *(double *)(param_4 + 0x10);
    dStack_210 = *(double *)(param_4 + 0x18);
    local_208 = *(double *)(param_4 + 0x20);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar17._8_8_ = -(ulonglong)(0.0 <= dVar26);
    auVar17._0_8_ = -(ulonglong)(0.0 <= dVar23);
    auVar32 = blendvpd(_DAT_149936790,auVar34,auVar17);
    uVar15 = -(ulonglong)(0.0 <= dVar36 * 1.0);
    dVar23 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
    dVar26 = auVar32._0_8_;
    local_168 = local_168 * dVar26;
    dStack_170 = dStack_170 * dVar26;
    local_178 = local_178 * dVar26;
    dVar26 = auVar32._8_8_;
    local_148 = local_148 * dVar26;
    local_150 = local_150 * dVar26;
    local_158 = dVar26 * local_158;
    local_128 = local_128 * dVar23;
    local_130 = local_130 * dVar23;
    local_138 = dVar23 * local_138;
    FUN_14481fd10(&local_358,&local_178);
    dVar23 = (double)local_348._0_8_ * (double)local_348._0_8_ + local_358 * local_358;
    dVar26 = (double)local_348._8_8_ * (double)local_348._8_8_ + dStack_350 * dStack_350;
    auVar25._0_8_ = dVar23 + dVar26;
    auVar25._8_8_ = dVar23 + dVar26;
    auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
    auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
    auVar32 = sqrtpd(auVar25,auVar25);
    auVar32 = divpd(auVar34,auVar32);
    auVar28._0_8_ = auVar32._0_8_ * (double)local_348._0_8_;
    auVar28._8_8_ = auVar32._8_8_ * (double)local_348._8_8_;
    dVar41 = (double)((ulonglong)(local_358 * auVar32._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
    dVar44 = (double)((ulonglong)(dStack_350 * auVar32._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
    auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar28,auVar18);
    local_2f8._8_4_ = SUB84(dVar44,0);
    local_2f8._0_8_ = dVar41;
    local_2f8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    local_2d8 = local_118;
    dStack_2d0 = dStack_110;
    local_2c8 = local_108;
    dStack_2c0 = 0.0;
  }
  dVar36 = dVar36 * 1.0;
  dVar23 = auVar19._8_8_ * 0.0;
  uVar48 = (undefined4)((ulonglong)dVar23 >> 0x20);
  uVar47 = SUB84(dVar23,0);
  local_2a8._8_4_ = uVar47;
  local_2a8._0_8_ = dVar36;
  local_2a8._12_4_ = uVar48;
  lVar13 = param_6 + 0x28;
  local_2e8 = auVar38;
  local_2b8 = auVar22;
  uVar9 = FUN_144a7484c(lVar13,(undefined1 (*) [16])&local_178);
  local_338 = 0.0;
  dStack_330 = 0.0;
  local_328 = 0.0;
  dStack_320 = 0.0;
  local_318 = *(undefined1 (*) [16])(param_5 + 8);
  dVar23 = local_318._0_8_;
  dVar35 = local_318._8_8_;
  local_388 = *(undefined1 (*) [16])(param_5 + 10);
  dVar26 = local_388._0_8_;
  dVar3 = local_388._8_8_;
  auVar19 = minpd(auVar34,local_318);
  auVar32 = minpd(ZEXT816(0x3ff0000000000000),local_388);
  auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  iVar10 = movmskpd(uVar9,auVar20);
  auVar19._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar19._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar12 = movmskpd((int)lVar13,auVar19);
  if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
    dVar39 = *param_5;
    dVar45 = param_5[1];
    dVar30 = param_5[3];
    dVar46 = param_5[3];
    dVar42 = param_5[1];
    dVar40 = param_5[1];
    dVar4 = param_5[2];
    dVar5 = param_5[3];
    dVar16 = param_5[2];
    dVar43 = param_5[2];
    local_358 = dStack_170 * dVar16 * -1.0 +
                local_168 * dVar42 + dStack_160 * *param_5 * 1.0 + local_178 * dVar30;
    dStack_350 = local_178 * dVar43 * 1.0 +
                 dStack_160 * dVar40 + local_168 * *param_5 * -1.0 + dStack_170 * dVar46;
    local_348._0_8_ =
         dStack_160 * dVar16 * 1.0 +
         ((*param_5 * dStack_170 * 1.0 + local_168 * dVar30) - local_178 * dVar42);
    local_348._8_8_ =
         local_168 * dVar43 * -1.0 +
         ((*param_5 * local_178 * -1.0 + dStack_160 * dVar46) - dStack_170 * dVar40);
    dVar24 = *(double *)(param_6 + 0x10) * dVar23;
    dVar27 = *(double *)(param_6 + 0x18) * dVar35;
    dVar40 = *(double *)(param_6 + 0x20) * dVar26;
    dVar42 = dVar3 * 0.0;
    dVar43 = dVar27 * dVar39 - dVar24 * dVar45;
    dVar31 = dVar40 * dVar45 - dVar27 * dVar4;
    dVar37 = dVar24 * dVar4 - dVar40 * dVar39;
    dVar16 = dVar42 * dVar5 - dVar42 * dVar5;
    dVar31 = dVar31 + dVar31;
    dVar37 = dVar37 + dVar37;
    dVar43 = dVar43 + dVar43;
    dVar16 = dVar16 + dVar16;
    local_338 = (dVar43 * dVar45 - dVar4 * dVar37) + dVar30 * dVar31 + dVar24 + param_5[4];
    dStack_330 = (dVar31 * dVar4 - dVar43 * dVar39) + dVar46 * dVar37 + dVar27 + param_5[5];
    local_328 = (dVar37 * dVar39 - dVar45 * dVar31) + dVar30 * dVar43 + dVar40 + param_5[6];
    dStack_320 = (dVar16 * dVar5 - dVar16 * dVar5) + dVar46 * dVar16 + dVar42 + param_5[7];
    local_398._0_8_ = param_3;
    local_368 = auVar22;
  }
  else {
    dVar42 = *param_5;
    dVar43 = param_5[1];
    dVar40 = param_5[2];
    dVar41 = dVar43 + dVar43;
    dVar44 = dVar40 + dVar40;
    dVar16 = dVar42 * (dVar42 + dVar42);
    local_1f8 = (dVar30 - (dVar40 * dVar44 + dVar43 * dVar41)) * dVar23;
    dVar40 = (dVar46 - (dVar40 * dVar44 + dVar16)) * dVar35;
    local_388._8_4_ = uVar47;
    local_388._0_8_ = dVar36;
    local_388._12_4_ = uVar48;
    dVar36 = param_5[3];
    dVar39 = dVar44 * dVar36;
    dVar45 = (dVar42 + dVar42) * param_5[3];
    dVar36 = dVar41 * dVar36;
    dStack_1b0 = (dVar44 * dVar43 - dVar45) * dVar26;
    local_1b8 = (dVar36 + *param_5 * dVar44) * dVar26;
    dStack_1f0 = (dVar41 * dVar42 + dVar39) * dVar23;
    local_1c8 = (dVar44 * dVar43 + dVar45) * dVar35;
    local_1a8 = (1.0 - (dVar16 + dVar43 * dVar41)) * dVar26;
    local_1e8 = (*param_5 * dVar44 - dVar36) * dVar23;
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar40,0);
    local_1d8._0_8_ = (dVar41 * dVar42 - dVar39) * dVar35;
    local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_5[4];
    dStack_190 = param_5[5];
    local_188 = param_5[6];
    uStack_180 = 0x3ff0000000000000;
    dVar42 = dStack_170 + dStack_170;
    dVar43 = local_168 + local_168;
    dVar40 = local_178 * (local_178 + local_178);
    local_278 = dVar30 - (local_168 * dVar43 + dStack_170 * dVar42);
    local_228 = 1.0 - (dVar40 + dStack_170 * dVar42);
    dVar36 = (local_178 + local_178) * dStack_160;
    dStack_270 = dVar42 * local_178 + dVar43 * dStack_160;
    local_248 = dVar43 * dStack_170 + dVar36;
    dVar36 = dVar43 * dStack_170 - dVar36;
    local_268 = local_178 * dVar43 - dVar42 * dStack_160;
    uStack_260 = 0;
    local_258._8_8_ = dVar46 - (local_168 * dVar43 + dVar40);
    local_258._0_8_ = dVar42 * local_178 - dVar43 * dStack_160;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar36,0);
    local_238._0_8_ = dVar42 * dStack_160 + local_178 * dVar43;
    local_238._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_398._8_8_ = 0;
    local_398._0_8_ = param_3;
    local_218 = *(double *)(param_6 + 0x10);
    dStack_210 = *(double *)(param_6 + 0x18);
    local_208 = *(double *)(param_6 + 0x20);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar22._8_8_ = -(ulonglong)(0.0 <= dVar35);
    auVar22._0_8_ = -(ulonglong)(0.0 <= dVar23);
    auVar22 = blendvpd(_DAT_149936790,auVar34,auVar22);
    uVar15 = -(ulonglong)(0.0 <= dVar26 * 1.0);
    dVar36 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
    dVar30 = auVar22._0_8_;
    local_168 = local_168 * dVar30;
    dStack_170 = dStack_170 * dVar30;
    local_178 = local_178 * dVar30;
    dVar30 = auVar22._8_8_;
    local_148 = local_148 * dVar30;
    local_150 = local_150 * dVar30;
    local_158 = dVar30 * local_158;
    local_128 = local_128 * dVar36;
    local_130 = local_130 * dVar36;
    local_138 = dVar36 * local_138;
    FUN_14481fd10(&local_298,&local_178);
    dVar36 = local_288 * local_288 + local_298 * local_298;
    dVar30 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar29._0_8_ = dVar36 + dVar30;
    auVar29._8_8_ = dVar36 + dVar30;
    auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar22 = sqrtpd(auVar29,auVar29);
    auVar22 = divpd(auVar34,auVar22);
    auVar34._0_8_ = auVar22._0_8_ * local_288;
    auVar34._8_8_ = auVar22._8_8_ * dStack_280;
    local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar21);
    local_358 = (double)((ulonglong)(local_298 * auVar22._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
    dStack_350 = (double)((ulonglong)(dStack_290 * auVar22._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
    local_338 = local_118;
    dStack_330 = dStack_110;
    local_328 = local_108;
    dStack_320 = 0.0;
    local_368 = local_2b8;
    auVar38 = local_2e8;
    dVar36 = (double)local_388._0_8_;
    dVar41 = (double)local_2f8._0_8_;
    dVar44 = (double)local_2f8._8_8_;
  }
  dVar26 = dVar26 * 1.0;
  dVar3 = dVar3 * 0.0;
  local_308._8_4_ = SUB84(dVar3,0);
  local_308._0_8_ = dVar26;
  local_308._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_178 = 0.0;
  dStack_170 = 0.0;
  local_168 = *(double *)(param_4 + 0x50) * 0.5 * dVar36;
  dStack_160 = 0.0;
  local_158 = 0.0;
  local_150 = *(double *)(param_4 + 0x50) * -0.5 * dVar36;
  local_1f8 = 0.0;
  dStack_1f0 = 0.0;
  local_1e8 = *(double *)(param_6 + 0x50) * 0.5 * dVar26;
  uStack_1e0 = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(double *)(param_6 + 0x50) * -0.5 * dVar26;
  local_1d8 = auVar6 << 0x40;
  dVar30 = auVar38._0_8_;
  dVar46 = auVar38._8_8_;
  pauVar14 = (undefined1 (*) [16])&local_178;
  bVar7 = true;
  do {
    bVar11 = bVar7;
    dVar3 = *(double *)*pauVar14 * (double)local_368._0_8_;
    dVar40 = *(double *)(*pauVar14 + 8) * (double)local_368._8_8_;
    dVar43 = *(double *)pauVar14[1] * dVar36;
    dVar16 = dVar40 * dVar41 - dVar44 * dVar3;
    dVar39 = dVar43 * dVar44 - dVar30 * dVar40;
    dVar42 = dVar3 * dVar30 - dVar41 * dVar43;
    dVar39 = dVar39 + dVar39;
    dVar42 = dVar42 + dVar42;
    dVar16 = dVar16 + dVar16;
    dVar40 = (dVar30 * dVar39 - dVar41 * dVar16) + dVar46 * dVar42 + dVar40;
    auVar1._8_4_ = SUB84(dVar40,0);
    auVar1._0_8_ = (dVar16 * dVar44 - dVar42 * dVar30) + dVar46 * dVar39 + dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    *pauVar14 = auVar1;
    *(double *)pauVar14[1] = dVar16 * dVar46 + dVar43 + (dVar42 * dVar41 - dVar39 * dVar44);
    pauVar14 = (undefined1 (*) [16])&dStack_160;
    bVar7 = false;
  } while (bVar11);
  dVar36 = local_348._0_8_;
  dVar30 = local_348._8_8_;
  pauVar14 = (undefined1 (*) [16])&local_1f8;
  bVar7 = true;
  do {
    bVar11 = bVar7;
    dVar46 = *(double *)*pauVar14 * dVar23;
    dVar3 = *(double *)(*pauVar14 + 8) * dVar35;
    dVar40 = *(double *)pauVar14[1] * dVar26;
    dVar42 = dVar3 * local_358 - dStack_350 * dVar46;
    dVar43 = dVar40 * dStack_350 - dVar36 * dVar3;
    dVar16 = dVar46 * dVar36 - local_358 * dVar40;
    dVar43 = dVar43 + dVar43;
    dVar16 = dVar16 + dVar16;
    dVar42 = dVar42 + dVar42;
    dVar3 = (dVar36 * dVar43 - local_358 * dVar42) + dVar30 * dVar16 + dVar3;
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = (dVar42 * dStack_350 - dVar16 * dVar36) + dVar30 * dVar43 + dVar46;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *pauVar14 = auVar2;
    *(double *)pauVar14[1] = dVar42 * dVar30 + dVar40 + (dVar16 * local_358 - dVar43 * dStack_350);
    pauVar14 = (undefined1 (*) [16])&uStack_1e0;
    bVar7 = false;
  } while (bVar11);
  local_3a8 = param_7;
  local_3b0 = &local_1f8;
  local_3b8 = FUN_14710524a;
  local_3c0 = param_6;
  local_3c8 = &local_358;
  local_3d0 = &local_178;
  local_3d8 = FUN_14710524a;
  local_3e8 = local_2f8;
  local_3a0 = 0;
  local_3e0 = param_4;
  pdVar8 = (double *)local_398._0_8_;
  local_398 = local_318;
  FUN_14044bf58(local_370,param_2,pdVar8,param_5);
  if ((local_f0 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14710dc51 FUN_14710dc51 body=1231 status=ok
// SIG undefined FUN_14710dc51(void)

void FUN_14710dc51(double *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  double dVar1;
  int iVar3;
  longlong lVar4;
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
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_198 [32];
  undefined **local_178;
  undefined8 local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [16];
  double local_150;
  undefined1 local_148 [16];
  double local_138;
  undefined1 local_130 [16];
  double local_120;
  undefined8 local_e8;
  ulonglong local_e0;
  double dVar2;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar15 = param_2[1];
  if (0 < (longlong)(int)lVar15) {
    lVar19 = 0;
    do {
      local_170 = 0;
      local_178 = &PTR_LAB_14a1e38d0;
      lVar16 = *param_2;
      lVar18 = (longlong)*(int *)(lVar16 + lVar19);
      lVar4 = *(longlong *)(param_3 + 0x28);
      dVar6 = param_1[8];
      dVar8 = param_1[9];
      dVar20 = (double)*(float *)(lVar4 + lVar18 * 0xc) * dVar6;
      dVar7 = (double)*(float *)(lVar4 + 4 + lVar18 * 0xc) * dVar8;
      dVar23 = param_1[10];
      dVar21 = (double)*(float *)(lVar4 + 8 + lVar18 * 0xc) * dVar23;
      dVar1 = param_1[3];
      dVar2 = param_1[3];
      dVar11 = *param_1;
      dVar12 = param_1[1];
      dVar13 = param_1[2];
      dVar14 = param_1[4];
      dVar5 = param_1[5];
      dVar22 = dVar7 * dVar11 - dVar20 * dVar12;
      dVar9 = dVar21 * dVar12 - dVar7 * dVar13;
      dVar10 = dVar20 * dVar13 - dVar21 * dVar11;
      dVar9 = dVar9 + dVar9;
      dVar10 = dVar10 + dVar10;
      dVar22 = dVar22 + dVar22;
      dVar7 = (dVar13 * dVar9 - dVar11 * dVar22) + dVar2 * dVar10 + dVar7 + dVar5;
      local_138 = param_1[6];
      local_150 = dVar22 * dVar1 + dVar21 + (dVar10 * dVar11 - dVar9 * dVar12) + local_138;
      local_160._8_4_ = SUB84(dVar7,0);
      local_160._0_8_ = (dVar22 * dVar12 - dVar10 * dVar13) + dVar1 * dVar9 + dVar20 + dVar14;
      local_160._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      lVar18 = (longlong)*(int *)(lVar16 + 4 + lVar19);
      dVar7 = (double)*(float *)(lVar4 + lVar18 * 0xc) * dVar6;
      dVar22 = (double)*(float *)(lVar4 + 4 + lVar18 * 0xc) * dVar8;
      dVar21 = (double)*(float *)(lVar4 + 8 + lVar18 * 0xc) * dVar23;
      dVar20 = dVar22 * dVar11 - dVar12 * dVar7;
      dVar9 = dVar21 * dVar12 - dVar13 * dVar22;
      dVar10 = dVar7 * dVar13 - dVar11 * dVar21;
      dVar9 = dVar9 + dVar9;
      dVar10 = dVar10 + dVar10;
      dVar20 = dVar20 + dVar20;
      dVar22 = (dVar13 * dVar9 - dVar11 * dVar20) + dVar2 * dVar10 + dVar22 + dVar5;
      local_120 = dVar20 * dVar1 + dVar21 + (dVar10 * dVar11 - dVar9 * dVar12) + local_138;
      local_130._8_4_ = SUB84(dVar22,0);
      local_130._0_8_ = (dVar20 * dVar12 - dVar10 * dVar13) + dVar1 * dVar9 + dVar7 + dVar14;
      local_130._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      lVar16 = (longlong)*(int *)(lVar16 + 8 + lVar19);
      dVar6 = (double)*(float *)(lVar4 + lVar16 * 0xc) * dVar6;
      dVar8 = (double)*(float *)(lVar4 + 4 + lVar16 * 0xc) * dVar8;
      dVar23 = (double)*(float *)(lVar4 + 8 + lVar16 * 0xc) * dVar23;
      dVar20 = dVar8 * dVar11 - dVar12 * dVar6;
      dVar7 = dVar23 * dVar12 - dVar13 * dVar8;
      dVar22 = dVar6 * dVar13 - dVar11 * dVar23;
      dVar7 = dVar7 + dVar7;
      dVar22 = dVar22 + dVar22;
      dVar20 = dVar20 + dVar20;
      dVar5 = (dVar13 * dVar7 - dVar11 * dVar20) + dVar2 * dVar22 + dVar8 + dVar5;
      local_138 = dVar20 * dVar1 + dVar23 + (dVar22 * dVar11 - dVar7 * dVar12) + local_138;
      local_148._8_4_ = SUB84(dVar5,0);
      local_148._0_8_ = (dVar20 * dVar12 - dVar22 * dVar13) + dVar1 * dVar7 + dVar6 + dVar14;
      local_148._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      FUN_144b0c570(&local_178);
      local_e8 = 0x4024000000000000;
      iVar3 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
        FUN_14576c464(param_4,iVar3);
      }
      puVar17 = (undefined8 *)((longlong)iVar3 * 0x98 + *param_4);
      puVar17[1] = local_170;
      *puVar17 = &PTR_LAB_14a1e38d0;
      memcpy(puVar17 + 2,local_168,0x88);
      lVar19 = lVar19 + 0xc;
    } while ((longlong)(int)lVar15 * 0xc != lVar19);
  }
  if ((local_e0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14710e122 FUN_14710e122 body=136 status=ok
// SIG undefined FUN_14710e122(void)

void FUN_14710e122(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 **local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_18;
  local_20 = &local_40;
  local_28 = FUN_142b6cbd0;
  local_38 = param_3;
  local_30 = param_2;
  local_18 = param_1;
  FUN_1400d1732(*(undefined8 *)(param_1 + 0x260));
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14710e1ac FUN_14710e1ac body=28194 status=ok
// SIG undefined FUN_14710e1ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14710e1ac(longlong param_1,undefined8 *param_2,uint param_3,char param_4,
                  undefined8 *param_5,byte *param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  double *pdVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  int iVar25;
  double *pdVar26;
  ulonglong uVar27;
  double dVar44;
  undefined1 auVar28 [16];
  double dVar45;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  double dVar60;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar61;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar73;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar89;
  double dVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  undefined1 auVar95 [16];
  double dVar96;
  double dVar97;
  double dVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined4 uVar101;
  double dVar102;
  double dVar103;
  double dVar104;
  double dVar105;
  double dVar106;
  double dVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auStack_758 [40];
  longlong *local_730;
  undefined1 local_728 [16];
  longlong *local_718;
  longlong local_710;
  longlong local_708;
  longlong local_700;
  undefined1 local_6f8 [16];
  undefined1 local_6e8 [16];
  double local_6d8;
  double dStack_6d0;
  undefined1 local_6c8 [16];
  undefined1 local_6b8 [16];
  undefined1 local_6a8 [16];
  undefined1 local_698 [16];
  double local_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  double local_628;
  double dStack_620;
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  undefined1 local_5f8 [16];
  int *local_5e0;
  double local_5d8;
  double dStack_5d0;
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  double local_598;
  undefined8 uStack_590;
  double local_588;
  undefined8 uStack_580;
  undefined1 local_578 [16];
  double *local_568;
  longlong *local_560;
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  double local_4f8;
  double dStack_4f0;
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  double local_478;
  double dStack_470;
  undefined1 local_468 [16];
  double local_458;
  undefined8 uStack_450;
  double local_448;
  undefined8 uStack_440;
  double local_438;
  undefined8 uStack_430;
  double local_428;
  double dStack_420;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  double local_3d8;
  double dStack_3d0;
  undefined1 local_3c8 [16];
  double local_3b8;
  double dStack_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  uint local_38c;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined8 local_368 [13];
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
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
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_758;
  plVar1 = (longlong *)(param_1 + 0x390);
  local_38c = param_3;
  if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
    lVar22 = param_1 + 0x3c8;
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      lVar22 = *(longlong *)(param_1 + 0x3d0);
    }
    iVar8 = *(int *)(lVar22 + (ulonglong)(*(int *)(param_1 + 0x3d8) - 1U & param_3) * 4);
    if (iVar8 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar8 * 0x110) == param_3) goto LAB_147113c0a;
        iVar8 = *(int *)((longlong)iVar8 * 0x110 + *plVar1 + 0x100);
      } while (iVar8 != -1);
    }
  }
  local_368[0] = 0;
  local_368[1] = 0;
  local_368[2] = 0;
  local_368[3] = 0x3ff0000000000000;
  local_368[4] = 0;
  local_368[5] = 0;
  local_368[6] = 0;
  local_368[7] = 0;
  local_368[8] = 0x3ff0000000000000;
  local_368[9] = 0x3ff0000000000000;
  local_368[10] = 0x3ff0000000000000;
  local_368[0xb] = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_368[0xc] = *param_2;
  uStack_300 = param_2[1];
  local_700 = param_1;
  FUN_141745680(&local_2f8,param_2 + 2);
  FUN_140acabd6(&local_2a8,param_2 + 0xc);
  lVar22 = local_700;
  FUN_140acab86(&local_298,param_2 + 0xe);
  uStack_170 = local_368;
  puVar18 = uStack_170;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar18 = *param_5;
    param_5 = param_5 + 1;
    puVar18 = puVar18 + 1;
  }
  local_178 = &local_38c;
  FUN_14711fd78(plVar1,&local_1f8);
  local_708 = *plVar1;
  local_710 = (longlong)local_1f8._0_4_ * 0x110;
  local_3a8 = 0;
  uStack_3a0 = 0;
  if ((param_4 != '\0') && (iVar8 = *(int *)(param_2 + 9), (longlong)iVar8 != 0)) {
    lVar11 = param_2[8];
    lVar24 = 0;
    do {
      local_178 = (uint *)0x0;
      uStack_170 = (undefined8 *)0x0;
      FUN_1404190d2(*(undefined8 *)(lVar11 + 0x10 + lVar24),*(undefined4 *)(lVar11 + 0x18 + lVar24),
                    &local_178);
      if (local_178 != (uint *)0x0) {
        FUN_1400020a8();
      }
      lVar24 = lVar24 + 0x60;
    } while ((longlong)iVar8 * 0x60 != lVar24);
  }
  iVar8 = *(int *)(lVar22 + 0x330);
  *(int *)(local_708 + 0xf0 + local_710) = iVar8;
  *(uint *)(lVar22 + 0x330) = iVar8 + 1U;
  if (*(uint *)(lVar22 + 0x334) < iVar8 + 1U) {
    FUN_1417457e6((longlong *)(lVar22 + 0x328),iVar8);
  }
  pdVar26 = (double *)(local_708 + local_710 + 0x10);
  lVar11 = *(longlong *)(lVar22 + 0x328);
  plVar1 = (longlong *)(lVar11 + (longlong)iVar8 * 0x28);
  local_730 = (longlong *)(lVar11 + 0x10 + (longlong)iVar8 * 0x28);
  *local_730 = 0;
  local_730[1] = 0;
  local_730[-2] = 0;
  local_730[-1] = 0;
  local_730[2] = 0;
  *(undefined4 *)(local_730 + 2) = *(undefined4 *)param_6;
  if (0 < *(int *)(local_708 + local_710 + 0x98)) {
    local_5e0 = (int *)(local_708 + local_710 + 0x98);
    local_560 = (longlong *)(lVar22 + 0x298);
    local_718 = (longlong *)(lVar22 + 0x2a8);
    lVar22 = 0x28;
    dVar14 = 0.0;
    local_568 = pdVar26;
    do {
      piVar6 = local_5e0;
      auVar65 = _DAT_149934d80;
      local_588 = 0.0;
      if (dVar14 != 0.0) {
        local_588 = 1.0;
      }
      lVar24 = *(longlong *)(local_5e0 + -2);
      lVar11 = lVar24 + lVar22;
      local_458 = *(double *)(lVar24 + 0x28 + lVar22) * 0.5 + local_588;
      uStack_450 = 0;
      local_438 = *(double *)(lVar24 + 0x20 + lVar22) * 0.5 + local_588;
      local_588 = *(double *)(lVar24 + 0x18 + lVar22) * 0.5 + local_588;
      uStack_580 = 0;
      uStack_430 = 0;
      local_448 = -local_438;
      uStack_440 = 0x8000000000000000;
      lVar17 = lVar11;
      uVar7 = FUN_144a7484c(lVar11,&local_178);
      auVar108 = _DAT_149934d80;
      pdVar9 = (double *)(lVar24 + -0x18 + lVar22);
      dVar73 = *pdVar9;
      dVar46 = pdVar9[1];
      dVar47 = *(double *)(lVar24 + -8 + lVar22);
      local_638 = *(undefined1 (*) [16])(piVar6 + -0x12);
      auVar49 = minpd(local_638,auVar65);
      auVar65 = *(undefined1 (*) [16])(piVar6 + -0xe);
      auVar74 = minpd(auVar65,ZEXT816(0x3ff0000000000000));
      auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar50._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      iVar8 = movmskpd(uVar7,auVar50);
      auVar49._8_8_ = -(ulonglong)(auVar74._8_8_ < 0.0);
      auVar49._0_8_ = -(ulonglong)(auVar74._0_8_ < 0.0);
      uVar10 = movmskpd((int)lVar17,auVar49);
      auVar49 = ZEXT816(0x3ff0000000000000) << 0x40;
      local_6f8 = auVar49;
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar89 = *pdVar26;
        dVar91 = pdVar26[1];
        dVar96 = *(double *)(piVar6 + -0x1e);
        dVar92 = *(double *)(piVar6 + -0x1c);
        dVar44 = *(double *)(piVar6 + -0x1a);
        dVar60 = *(double *)(piVar6 + -0x18);
        local_6d8 = dVar91 * local_168 * -1.0 +
                    dVar96 * (double)uStack_170 +
                    (double)local_178 * dVar92 * 1.0 + dStack_160 * dVar89;
        dStack_6d0 = dVar89 * local_168 * 1.0 +
                     dVar92 * (double)uStack_170 +
                     (double)local_178 * dVar96 * -1.0 + dStack_160 * dVar91;
        local_668._0_8_ =
             dVar92 * local_168 * 1.0 +
             (((double)local_178 * dVar91 * 1.0 + dStack_160 * dVar96) - (double)uStack_170 * dVar89
             );
        local_668._8_8_ =
             dVar96 * local_168 * -1.0 +
             (((double)local_178 * dVar89 * -1.0 + dStack_160 * dVar92) -
             (double)uStack_170 * dVar91);
        dVar89 = *(double *)(piVar6 + -0x16) * 1.0;
        dVar91 = *(double *)(piVar6 + -0x14) * 0.0;
        dVar96 = dVar60 * (double)local_178 - (double)uStack_170 * dVar44;
        dVar92 = dVar89 * (double)uStack_170 - local_168 * dVar60;
        dVar107 = dVar44 * local_168 - (double)local_178 * dVar89;
        dVar97 = dVar91 * dStack_160 - dStack_160 * dVar91;
        dVar92 = dVar92 + dVar92;
        dVar107 = dVar107 + dVar107;
        dVar96 = dVar96 + dVar96;
        dVar97 = dVar97 + dVar97;
        dVar73 = dVar73 + (dVar96 * (double)uStack_170 - local_168 * dVar107) +
                          dStack_160 * dVar92 + dVar44;
        dVar46 = dVar46 + (dVar92 * local_168 - dVar96 * (double)local_178) +
                          dStack_160 * dVar107 + dVar60;
        local_5c8._8_8_ =
             (dVar97 * dStack_160 - dVar97 * dStack_160) + dStack_160 * dVar97 + dVar91 + 0.0;
        local_5c8._0_8_ =
             dVar47 + (dVar107 * (double)local_178 - (double)uStack_170 * dVar92) +
                      dStack_160 * dVar96 + dVar89;
      }
      else {
        dVar107 = auVar65._0_8_ * 1.0;
        dStack_670 = auVar65._8_8_ * 0.0;
        local_678 = dVar107;
        dVar89 = (double)uStack_170 + (double)uStack_170;
        dVar91 = local_168 + local_168;
        dVar96 = (double)local_178 * ((double)local_178 + (double)local_178);
        local_1f8 = (double)DAT_149934d80 - (local_168 * dVar91 + (double)uStack_170 * dVar89);
        dStack_1d0 = DAT_149934d80._8_8_ - (local_168 * dVar91 + dVar96);
        local_1a8 = 1.0 - (dVar96 + (double)uStack_170 * dVar89);
        dVar96 = ((double)local_178 + (double)local_178) * dStack_160;
        dStack_1f0 = dVar89 * (double)local_178 + dVar91 * dStack_160;
        local_1c8 = dVar91 * (double)uStack_170 + dVar96;
        local_1d8 = dVar89 * (double)local_178 - dVar91 * dStack_160;
        local_1e8 = (double)local_178 * dVar91 - dVar89 * dStack_160;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        local_1b8._8_8_ = dVar91 * (double)uStack_170 - dVar96;
        local_1b8._0_8_ = dVar89 * dStack_160 + (double)local_178 * dVar91;
        uStack_1a0 = 0;
        local_188._8_4_ = 0;
        local_188._0_8_ = dVar47;
        local_188._12_4_ = 0x3ff00000;
        dVar89 = *pdVar26;
        dVar91 = pdVar26[1];
        dVar47 = *(double *)(piVar6 + -0x1e);
        dVar60 = dVar91 + dVar91;
        dVar96 = dVar47 + dVar47;
        dVar92 = dVar89 * (dVar89 + dVar89);
        local_268 = *(double *)(piVar6 + -0x12);
        local_258 = *(double *)(piVar6 + -0x10);
        local_278 = ((double)DAT_149934d80 - (dVar47 * dVar96 + dVar91 * dVar60)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar47 * dVar96 + dVar92)) * local_258;
        dStack_230 = *(double *)(piVar6 + -0xe);
        local_228 = (1.0 - (dVar92 + dVar91 * dVar60)) * dStack_230;
        dVar47 = *(double *)(piVar6 + -0x1c);
        dVar92 = dVar96 * dVar47;
        dVar44 = (dVar89 + dVar89) * *(double *)(piVar6 + -0x1c);
        dVar47 = dVar60 * dVar47;
        dStack_270 = (dVar60 * dVar89 + dVar92) * local_268;
        local_248 = (dVar96 * dVar91 + dVar44) * local_258;
        local_238 = (dVar47 + *pdVar26 * dVar96) * dStack_230;
        local_268 = (*pdVar26 * dVar96 - dVar47) * local_268;
        local_258 = (dVar60 * dVar89 - dVar92) * local_258;
        dStack_230 = (dVar96 * dVar91 - dVar44) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = *(undefined8 *)(piVar6 + -0x1a);
        uStack_210 = *(undefined8 *)(piVar6 + -0x18);
        local_208 = *(undefined8 *)(piVar6 + -0x16);
        uStack_200 = 0x3ff0000000000000;
        local_198 = dVar73;
        dStack_190 = dVar46;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        uVar2 = local_638._0_8_;
        uVar5 = local_638._8_8_;
        auVar74._8_8_ = -(ulonglong)(0.0 <= (double)local_638._8_8_);
        auVar74._0_8_ = -(ulonglong)(0.0 <= (double)local_638._0_8_);
        auVar50 = blendvpd(_DAT_149936790,auVar108,auVar74);
        uVar27 = -(ulonglong)(0.0 <= dVar107);
        dVar47 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
        dVar73 = auVar50._0_8_;
        local_168 = local_168 * dVar73;
        uStack_170 = (undefined8 *)((double)uStack_170 * dVar73);
        local_178 = (uint *)((double)local_178 * dVar73);
        dVar73 = auVar50._8_8_;
        local_148 = local_148 * dVar73;
        local_150 = local_150 * dVar73;
        local_158 = dVar73 * local_158;
        local_128 = local_128 * dVar47;
        local_130 = local_130 * dVar47;
        local_138 = dVar47 * local_138;
        FUN_14481fd10(&local_388,&local_178);
        dVar47 = local_378 * local_378 + local_388 * local_388;
        dVar73 = dStack_370 * dStack_370 + dStack_380 * dStack_380;
        auVar62._0_8_ = dVar47 + dVar73;
        auVar62._8_8_ = dVar47 + dVar73;
        auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_);
        auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_);
        auVar50 = sqrtpd(auVar62,auVar62);
        auVar108 = divpd(auVar108,auVar50);
        auVar109._0_8_ = auVar108._0_8_ * local_378;
        auVar109._8_8_ = auVar108._8_8_ * dStack_370;
        local_6d8 = (double)((ulonglong)(local_388 * auVar108._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_));
        dStack_6d0 = (double)((ulonglong)(dStack_380 * auVar108._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_));
        local_668 = blendvpd(auVar49,auVar109,auVar28);
        local_5c8._8_8_ = 0;
        local_5c8._0_8_ = local_108;
        local_638._0_8_ = uVar2;
        local_638._8_8_ = uVar5;
        dVar73 = local_118;
        dVar46 = dStack_110;
      }
      local_578._8_4_ = SUB84(dVar46,0);
      local_578._0_8_ = dVar73;
      local_578._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
      local_3b8 = local_588;
      dStack_3b0 = local_448;
      dVar92 = (double)local_638._0_8_ * local_588;
      local_638._8_8_ = (double)local_638._8_8_ * local_448;
      local_598 = local_458;
      uStack_590 = 0;
      local_678 = auVar65._0_8_ * 1.0 * local_458;
      dVar44 = auVar65._8_8_ * 0.0 * 0.0;
      dVar60 = local_668._0_8_;
      dVar107 = local_668._8_8_;
      local_638._0_8_ = dVar92;
      local_6c8._8_8_ = dVar60;
      local_6c8._0_8_ = dStack_6d0;
      local_728._8_8_ = local_678 * dStack_6d0 - (double)local_638._8_8_ * dVar60;
      local_728._0_8_ = (double)local_638._8_8_ * local_6d8 - dVar92 * dStack_6d0;
      dStack_670 = dVar44;
      dVar96 = local_6d8 * local_678;
      lVar17 = lVar11;
      uVar7 = FUN_144a7484c(lVar11,&local_178);
      auVar108 = _DAT_149934d80;
      pdVar9 = (double *)(lVar24 + -0x18 + lVar22);
      dVar89 = *pdVar9;
      dVar91 = pdVar9[1];
      dVar47 = *(double *)(lVar24 + -8 + lVar22);
      local_3c8 = *(undefined1 (*) [16])(piVar6 + -0x12);
      dVar73 = local_3c8._0_8_;
      dVar46 = local_3c8._8_8_;
      auVar49 = minpd(local_3c8,_DAT_149934d80);
      auVar65 = *(undefined1 (*) [16])(piVar6 + -0xe);
      auVar50 = minpd(auVar65,ZEXT816(0x3ff0000000000000));
      auVar51._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar51._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      iVar8 = movmskpd(uVar7,auVar51);
      auVar75._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
      auVar75._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
      uVar10 = movmskpd((int)lVar17,auVar75);
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar46 = *pdVar26;
        dVar97 = pdVar26[1];
        dVar90 = *(double *)(piVar6 + -0x1e);
        dVar93 = *(double *)(piVar6 + -0x1c);
        dVar94 = *(double *)(piVar6 + -0x1a);
        dVar45 = *(double *)(piVar6 + -0x18);
        dVar73 = dVar46 * local_168 * 1.0 +
                 dVar93 * (double)uStack_170 +
                 (double)local_178 * dVar90 * -1.0 + dStack_160 * dVar97;
        local_498._8_4_ = SUB84(dVar73,0);
        local_498._0_8_ =
             dVar97 * local_168 * -1.0 +
             dVar90 * (double)uStack_170 + (double)local_178 * dVar93 * 1.0 + dStack_160 * dVar46;
        local_498._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
        dVar73 = dVar90 * local_168 * -1.0 +
                 (((double)local_178 * dVar46 * -1.0 + dStack_160 * dVar93) -
                 (double)uStack_170 * dVar97);
        local_488._8_4_ = SUB84(dVar73,0);
        local_488._0_8_ =
             dVar93 * local_168 * 1.0 +
             (((double)local_178 * dVar97 * 1.0 + dStack_160 * dVar90) - (double)uStack_170 * dVar46
             );
        local_488._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
        dVar93 = *(double *)(piVar6 + -0x16) * 1.0;
        dVar61 = *(double *)(piVar6 + -0x14) * 0.0;
        dVar73 = dVar45 * (double)local_178 - (double)uStack_170 * dVar94;
        dVar46 = dVar93 * (double)uStack_170 - local_168 * dVar45;
        dVar97 = dVar94 * local_168 - (double)local_178 * dVar93;
        dVar90 = dVar61 * dStack_160 - dStack_160 * dVar61;
        dVar46 = dVar46 + dVar46;
        dVar97 = dVar97 + dVar97;
        dVar73 = dVar73 + dVar73;
        dVar90 = dVar90 + dVar90;
        local_608 = dVar89 + (dVar73 * (double)uStack_170 - local_168 * dVar97) +
                             dStack_160 * dVar46 + dVar94;
        dStack_600 = dVar91 + (dVar46 * local_168 - dVar73 * (double)local_178) +
                              dStack_160 * dVar97 + dVar45;
        local_628 = dVar47 + (dVar97 * (double)local_178 - (double)uStack_170 * dVar46) +
                             dStack_160 * dVar73 + dVar93;
        dStack_620 = (dVar90 * dStack_160 - dVar90 * dStack_160) + dStack_160 * dVar90 + dVar61 +
                     0.0;
        local_478 = auVar65._0_8_ * 1.0;
        dStack_470 = auVar65._8_8_ * 0.0;
      }
      else {
        dVar105 = auVar65._0_8_ * 1.0;
        dVar90 = (double)uStack_170 + (double)uStack_170;
        dVar93 = local_168 + local_168;
        dVar97 = (double)local_178 * ((double)local_178 + (double)local_178);
        local_1f8 = (double)DAT_149934d80 - (local_168 * dVar93 + (double)uStack_170 * dVar90);
        dStack_1d0 = DAT_149934d80._8_8_ - (local_168 * dVar93 + dVar97);
        local_1a8 = 1.0 - (dVar97 + (double)uStack_170 * dVar90);
        dVar97 = ((double)local_178 + (double)local_178) * dStack_160;
        dStack_1f0 = dVar90 * (double)local_178 + dVar93 * dStack_160;
        local_1c8 = dVar93 * (double)uStack_170 + dVar97;
        local_1d8 = dVar90 * (double)local_178 - dVar93 * dStack_160;
        dVar97 = dVar93 * (double)uStack_170 - dVar97;
        local_1e8 = (double)local_178 * dVar93 - dVar90 * dStack_160;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar97,0);
        local_1b8._0_8_ = dVar90 * dStack_160 + (double)local_178 * dVar93;
        local_1b8._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
        uStack_1a0 = 0;
        local_188._8_4_ = 0;
        local_188._0_8_ = dVar47;
        local_188._12_4_ = 0x3ff00000;
        dVar97 = *pdVar26;
        dVar90 = pdVar26[1];
        dVar47 = *(double *)(piVar6 + -0x1e);
        dVar61 = dVar90 + dVar90;
        dVar93 = dVar47 + dVar47;
        dVar94 = dVar97 * (dVar97 + dVar97);
        local_268 = *(double *)(piVar6 + -0x12);
        local_258 = *(double *)(piVar6 + -0x10);
        local_278 = ((double)DAT_149934d80 - (dVar47 * dVar93 + dVar90 * dVar61)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar47 * dVar93 + dVar94)) * local_258;
        dStack_230 = *(double *)(piVar6 + -0xe);
        local_228 = (1.0 - (dVar94 + dVar90 * dVar61)) * dStack_230;
        dVar47 = *(double *)(piVar6 + -0x1c);
        dVar94 = dVar93 * dVar47;
        dVar45 = (dVar97 + dVar97) * *(double *)(piVar6 + -0x1c);
        dVar47 = dVar61 * dVar47;
        dStack_270 = (dVar61 * dVar97 + dVar94) * local_268;
        local_248 = (dVar93 * dVar90 + dVar45) * local_258;
        local_238 = (dVar47 + *pdVar26 * dVar93) * dStack_230;
        local_268 = (*pdVar26 * dVar93 - dVar47) * local_268;
        local_258 = (dVar61 * dVar97 - dVar94) * local_258;
        dStack_230 = (dVar93 * dVar90 - dVar45) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = *(undefined8 *)(piVar6 + -0x1a);
        uStack_210 = *(undefined8 *)(piVar6 + -0x18);
        local_208 = *(undefined8 *)(piVar6 + -0x16);
        uStack_200 = 0x3ff0000000000000;
        local_198 = dVar89;
        dStack_190 = dVar91;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar29._8_8_ = -(ulonglong)(0.0 <= dVar46);
        auVar29._0_8_ = -(ulonglong)(0.0 <= dVar73);
        auVar49 = blendvpd(_DAT_149936790,auVar108,auVar29);
        uVar27 = -(ulonglong)(0.0 <= dVar105);
        dVar47 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
        dVar73 = auVar49._0_8_;
        local_168 = local_168 * dVar73;
        uStack_170 = (undefined8 *)((double)uStack_170 * dVar73);
        local_178 = (uint *)((double)local_178 * dVar73);
        dVar73 = auVar49._8_8_;
        local_148 = local_148 * dVar73;
        local_150 = local_150 * dVar73;
        local_158 = dVar73 * local_158;
        local_128 = local_128 * dVar47;
        local_130 = local_130 * dVar47;
        local_138 = dVar47 * local_138;
        local_478 = dVar105;
        dStack_470 = auVar65._8_8_ * 0.0;
        FUN_14481fd10(&local_388,&local_178);
        dVar47 = local_378 * local_378 + local_388 * local_388;
        dVar73 = dStack_370 * dStack_370 + dStack_380 * dStack_380;
        auVar63._0_8_ = dVar47 + dVar73;
        auVar63._8_8_ = dVar47 + dVar73;
        auVar65._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar63._8_8_);
        auVar65._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar63._0_8_);
        auVar49 = sqrtpd(auVar63,auVar63);
        auVar108 = divpd(auVar108,auVar49);
        auVar76._0_8_ = auVar108._0_8_ * local_378;
        auVar76._8_8_ = auVar108._8_8_ * dStack_370;
        local_498._8_8_ =
             (ulonglong)(dStack_380 * auVar108._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar63._8_8_);
        local_498._0_8_ =
             (ulonglong)(local_388 * auVar108._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar63._0_8_);
        local_488 = blendvpd(local_6f8,auVar76,auVar65);
        local_628 = local_108;
        dStack_620 = 0.0;
        local_608 = local_118;
        dStack_600 = dStack_110;
      }
      uVar2 = local_728._8_8_;
      local_6e8._8_8_ = dVar44 * dVar107 - dVar107 * dVar44;
      local_6e8._0_8_ = local_728._0_8_;
      local_728._8_8_ = dVar92 * dVar60 - dVar96;
      local_728._0_8_ = uVar2;
      lVar17 = lVar11;
      uVar7 = FUN_144a7484c(lVar11,&local_178);
      auVar108 = _DAT_149934d80;
      pdVar9 = (double *)(lVar24 + -0x18 + lVar22);
      dVar73 = *pdVar9;
      dVar46 = pdVar9[1];
      dVar47 = *(double *)(lVar24 + -8 + lVar22);
      local_468 = *(undefined1 (*) [16])(piVar6 + -0x12);
      auVar49 = minpd(local_468,_DAT_149934d80);
      auVar65 = *(undefined1 (*) [16])(piVar6 + -0xe);
      auVar50 = minpd(auVar65,ZEXT416(0x3ff00000) << 0x20);
      auVar52._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar52._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      iVar8 = movmskpd(uVar7,auVar52);
      auVar77._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
      auVar77._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
      uVar10 = movmskpd((int)lVar17,auVar77);
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar89 = *pdVar26;
        dVar91 = pdVar26[1];
        dVar96 = *(double *)(piVar6 + -0x1e);
        dVar92 = *(double *)(piVar6 + -0x1c);
        dVar44 = *(double *)(piVar6 + -0x1a);
        dVar60 = *(double *)(piVar6 + -0x18);
        local_4b8 = dVar91 * local_168 * -1.0 +
                    dVar96 * (double)uStack_170 +
                    (double)local_178 * dVar92 * 1.0 + dStack_160 * dVar89;
        dStack_4b0 = dVar89 * local_168 * 1.0 +
                     dVar92 * (double)uStack_170 +
                     (double)local_178 * dVar96 * -1.0 + dStack_160 * dVar91;
        local_4a8._8_8_ =
             dVar96 * local_168 * -1.0 +
             (((double)local_178 * dVar89 * -1.0 + dStack_160 * dVar92) -
             (double)uStack_170 * dVar91);
        local_4a8._0_8_ =
             dVar92 * local_168 * 1.0 +
             (((double)local_178 * dVar91 * 1.0 + dStack_160 * dVar96) - (double)uStack_170 * dVar89
             );
        dVar89 = *(double *)(piVar6 + -0x16) * 1.0;
        dVar91 = *(double *)(piVar6 + -0x14) * 0.0;
        dVar96 = dVar60 * (double)local_178 - (double)uStack_170 * dVar44;
        dVar92 = dVar89 * (double)uStack_170 - local_168 * dVar60;
        dVar107 = dVar44 * local_168 - (double)local_178 * dVar89;
        dVar97 = dVar91 * dStack_160 - dStack_160 * dVar91;
        dVar92 = dVar92 + dVar92;
        dVar107 = dVar107 + dVar107;
        dVar96 = dVar96 + dVar96;
        dVar97 = dVar97 + dVar97;
        dVar73 = dVar73 + (dVar96 * (double)uStack_170 - local_168 * dVar107) +
                          dStack_160 * dVar92 + dVar44;
        dVar46 = dVar46 + (dVar92 * local_168 - dVar96 * (double)local_178) +
                          dStack_160 * dVar107 + dVar60;
        dVar91 = (dVar97 * dStack_160 - dVar97 * dStack_160) + dStack_160 * dVar97 + dVar91 + 0.0;
        local_6b8._8_4_ = SUB84(dVar91,0);
        local_6b8._0_8_ =
             dVar47 + (dVar107 * (double)local_178 - (double)uStack_170 * dVar92) +
                      dStack_160 * dVar96 + dVar89;
        local_6b8._12_4_ = (int)((ulonglong)dVar91 >> 0x20);
        dStack_5d0 = auVar65._8_8_ * 0.0;
        local_5d8 = auVar65._0_8_ * 1.0;
      }
      else {
        dVar107 = auVar65._0_8_ * 1.0;
        dVar89 = (double)uStack_170 + (double)uStack_170;
        dVar91 = local_168 + local_168;
        dVar96 = (double)local_178 * ((double)local_178 + (double)local_178);
        local_1f8 = (double)DAT_149934d80 - (local_168 * dVar91 + (double)uStack_170 * dVar89);
        dStack_1d0 = DAT_149934d80._8_8_ - (local_168 * dVar91 + dVar96);
        local_1a8 = 1.0 - (dVar96 + (double)uStack_170 * dVar89);
        dVar96 = ((double)local_178 + (double)local_178) * dStack_160;
        dStack_1f0 = dVar89 * (double)local_178 + dVar91 * dStack_160;
        local_1c8 = dVar91 * (double)uStack_170 + dVar96;
        local_1d8 = dVar89 * (double)local_178 - dVar91 * dStack_160;
        local_1e8 = (double)local_178 * dVar91 - dVar89 * dStack_160;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        local_1b8._8_8_ = dVar91 * (double)uStack_170 - dVar96;
        local_1b8._0_8_ = dVar89 * dStack_160 + (double)local_178 * dVar91;
        uStack_1a0 = 0;
        local_188._8_4_ = 0;
        local_188._0_8_ = dVar47;
        local_188._12_4_ = 0x3ff00000;
        dVar89 = *pdVar26;
        dVar91 = pdVar26[1];
        dVar47 = *(double *)(piVar6 + -0x1e);
        dVar60 = dVar91 + dVar91;
        dVar96 = dVar47 + dVar47;
        dVar92 = dVar89 * (dVar89 + dVar89);
        local_268 = *(double *)(piVar6 + -0x12);
        local_258 = *(double *)(piVar6 + -0x10);
        local_278 = ((double)DAT_149934d80 - (dVar47 * dVar96 + dVar91 * dVar60)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar47 * dVar96 + dVar92)) * local_258;
        dStack_230 = *(double *)(piVar6 + -0xe);
        local_228 = (1.0 - (dVar92 + dVar91 * dVar60)) * dStack_230;
        dVar47 = *(double *)(piVar6 + -0x1c);
        dVar92 = dVar96 * dVar47;
        dVar44 = (dVar89 + dVar89) * *(double *)(piVar6 + -0x1c);
        dVar47 = dVar60 * dVar47;
        dStack_270 = (dVar60 * dVar89 + dVar92) * local_268;
        local_248 = (dVar96 * dVar91 + dVar44) * local_258;
        local_238 = (dVar47 + *pdVar26 * dVar96) * dStack_230;
        local_268 = (*pdVar26 * dVar96 - dVar47) * local_268;
        local_258 = (dVar60 * dVar89 - dVar92) * local_258;
        dStack_230 = (dVar96 * dVar91 - dVar44) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = *(undefined8 *)(piVar6 + -0x1a);
        uStack_210 = *(undefined8 *)(piVar6 + -0x18);
        local_208 = *(undefined8 *)(piVar6 + -0x16);
        uStack_200 = 0x3ff0000000000000;
        local_198 = dVar73;
        dStack_190 = dVar46;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar30._8_8_ = -(ulonglong)(0.0 <= (double)local_468._8_8_);
        auVar30._0_8_ = -(ulonglong)(0.0 <= (double)local_468._0_8_);
        auVar49 = blendvpd(_DAT_149936790,auVar108,auVar30);
        dStack_5d0 = auVar65._8_8_ * 0.0;
        local_5d8 = dVar107;
        uVar27 = -(ulonglong)(0.0 <= dVar107);
        dVar47 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
        dVar73 = auVar49._0_8_;
        local_168 = local_168 * dVar73;
        uStack_170 = (undefined8 *)((double)uStack_170 * dVar73);
        local_178 = (uint *)((double)local_178 * dVar73);
        dVar73 = auVar49._8_8_;
        local_148 = local_148 * dVar73;
        local_150 = local_150 * dVar73;
        local_158 = dVar73 * local_158;
        local_128 = local_128 * dVar47;
        local_130 = local_130 * dVar47;
        local_138 = dVar47 * local_138;
        FUN_14481fd10(&local_388,&local_178);
        dVar47 = local_378 * local_378 + local_388 * local_388;
        dVar73 = dStack_370 * dStack_370 + dStack_380 * dStack_380;
        auVar64._0_8_ = dVar47 + dVar73;
        auVar64._8_8_ = dVar47 + dVar73;
        auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_);
        auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_);
        auVar65 = sqrtpd(auVar64,auVar64);
        auVar65 = divpd(auVar108,auVar65);
        auVar108._0_8_ = auVar65._0_8_ * local_378;
        auVar108._8_8_ = auVar65._8_8_ * dStack_370;
        local_4b8 = (double)((ulonglong)(local_388 * auVar65._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_));
        dStack_4b0 = (double)((ulonglong)(dStack_380 * auVar65._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_));
        local_4a8 = blendvpd(local_6f8,auVar108,auVar31);
        local_6b8._8_8_ = 0;
        local_6b8._0_8_ = local_108;
        dVar73 = local_118;
        dVar46 = dStack_110;
      }
      local_648._8_4_ = SUB84(dVar46,0);
      local_648._0_8_ = dVar73;
      local_648._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
      dVar89 = (double)local_728._0_8_ + (double)local_728._0_8_;
      dVar91 = (double)local_728._8_8_ + (double)local_728._8_8_;
      local_6e8._8_8_ = (double)local_6e8._8_8_ + (double)local_6e8._8_8_;
      local_6e8._0_8_ = (double)local_6e8._0_8_ + (double)local_6e8._0_8_;
      lVar17 = lVar11;
      uVar7 = FUN_144a7484c(lVar11,&local_178);
      auVar108 = _DAT_149934d80;
      pdVar9 = (double *)(lVar24 + -0x18 + lVar22);
      dVar96 = *pdVar9;
      dVar92 = pdVar9[1];
      dVar47 = *(double *)(lVar24 + -8 + lVar22);
      local_3e8 = *(undefined1 (*) [16])(piVar6 + -0x12);
      dVar73 = local_3e8._0_8_;
      dVar46 = local_3e8._8_8_;
      auVar49 = minpd(local_3e8,_DAT_149934d80);
      auVar65 = *(undefined1 (*) [16])(piVar6 + -0xe);
      auVar50 = minpd(auVar65,ZEXT416(0x3ff00000) << 0x20);
      auVar53._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar53._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      iVar8 = movmskpd(uVar7,auVar53);
      auVar78._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
      auVar78._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
      uVar10 = movmskpd((int)lVar17,auVar78);
      local_728._8_4_ = SUB84(dVar91,0);
      local_728._0_8_ = dVar89;
      local_728._12_4_ = (int)((ulonglong)dVar91 >> 0x20);
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar46 = *pdVar26;
        dVar89 = pdVar26[1];
        dVar91 = *(double *)(piVar6 + -0x1e);
        dVar44 = *(double *)(piVar6 + -0x1c);
        dVar60 = *(double *)(piVar6 + -0x1a);
        dVar107 = *(double *)(piVar6 + -0x18);
        dVar73 = dVar46 * local_168 * 1.0 +
                 dVar44 * (double)uStack_170 +
                 (double)local_178 * dVar91 * -1.0 + dStack_160 * dVar89;
        local_4e8._8_4_ = SUB84(dVar73,0);
        local_4e8._0_8_ =
             dVar89 * local_168 * -1.0 +
             dVar91 * (double)uStack_170 + (double)local_178 * dVar44 * 1.0 + dStack_160 * dVar46;
        local_4e8._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
        local_4d8._8_8_ =
             dVar91 * local_168 * -1.0 +
             (((double)local_178 * dVar46 * -1.0 + dStack_160 * dVar44) -
             (double)uStack_170 * dVar89);
        local_4d8._0_8_ =
             dVar44 * local_168 * 1.0 +
             (((double)local_178 * dVar89 * 1.0 + dStack_160 * dVar91) - (double)uStack_170 * dVar46
             );
        dVar73 = *(double *)(piVar6 + -0x16) * 1.0;
        dVar46 = *(double *)(piVar6 + -0x14) * 0.0;
        dVar89 = dVar107 * (double)local_178 - (double)uStack_170 * dVar60;
        dVar91 = dVar73 * (double)uStack_170 - local_168 * dVar107;
        dVar44 = dVar60 * local_168 - (double)local_178 * dVar73;
        dVar97 = dVar46 * dStack_160 - dStack_160 * dVar46;
        dVar91 = dVar91 + dVar91;
        dVar44 = dVar44 + dVar44;
        dVar89 = dVar89 + dVar89;
        dVar97 = dVar97 + dVar97;
        local_618 = dVar96 + (dVar89 * (double)uStack_170 - local_168 * dVar44) +
                             dStack_160 * dVar91 + dVar60;
        dStack_610 = dVar92 + (dVar91 * local_168 - dVar89 * (double)local_178) +
                              dStack_160 * dVar44 + dVar107;
        dVar47 = dVar47 + (dVar44 * (double)local_178 - (double)uStack_170 * dVar91) +
                          dStack_160 * dVar89 + dVar73;
        dVar73 = (dVar97 * dStack_160 - dVar97 * dStack_160) + dStack_160 * dVar97 + dVar46 + 0.0;
        local_4c8 = auVar65._0_8_ * 1.0;
        dStack_4c0 = auVar65._8_8_ * 0.0;
        local_688 = (double)local_728._8_8_;
      }
      else {
        dVar93 = auVar65._0_8_ * 1.0;
        dVar89 = (double)uStack_170 + (double)uStack_170;
        dVar44 = local_168 + local_168;
        dVar60 = (double)local_178 * ((double)local_178 + (double)local_178);
        local_1f8 = (double)DAT_149934d80 - (local_168 * dVar44 + (double)uStack_170 * dVar89);
        dStack_1d0 = DAT_149934d80._8_8_ - (local_168 * dVar44 + dVar60);
        local_1a8 = 1.0 - (dVar60 + (double)uStack_170 * dVar89);
        dVar60 = ((double)local_178 + (double)local_178) * dStack_160;
        dStack_1f0 = dVar89 * (double)local_178 + dVar44 * dStack_160;
        local_1c8 = dVar44 * (double)uStack_170 + dVar60;
        local_1d8 = dVar89 * (double)local_178 - dVar44 * dStack_160;
        local_1e8 = (double)local_178 * dVar44 - dVar89 * dStack_160;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        local_1b8._8_8_ = dVar44 * (double)uStack_170 - dVar60;
        local_1b8._0_8_ = dVar89 * dStack_160 + (double)local_178 * dVar44;
        uStack_1a0 = 0;
        local_188._8_4_ = 0;
        local_188._0_8_ = dVar47;
        local_188._12_4_ = 0x3ff00000;
        dVar89 = *pdVar26;
        dVar44 = pdVar26[1];
        dVar47 = *(double *)(piVar6 + -0x1e);
        dVar90 = dVar44 + dVar44;
        dVar60 = dVar47 + dVar47;
        dVar107 = dVar89 * (dVar89 + dVar89);
        local_268 = *(double *)(piVar6 + -0x12);
        local_258 = *(double *)(piVar6 + -0x10);
        local_278 = ((double)DAT_149934d80 - (dVar47 * dVar60 + dVar44 * dVar90)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar47 * dVar60 + dVar107)) * local_258;
        dStack_230 = *(double *)(piVar6 + -0xe);
        local_228 = (1.0 - (dVar107 + dVar44 * dVar90)) * dStack_230;
        dVar47 = *(double *)(piVar6 + -0x1c);
        dVar107 = dVar60 * dVar47;
        dVar97 = (dVar89 + dVar89) * *(double *)(piVar6 + -0x1c);
        dVar47 = dVar90 * dVar47;
        dStack_270 = (dVar90 * dVar89 + dVar107) * local_268;
        local_248 = (dVar60 * dVar44 + dVar97) * local_258;
        local_238 = (dVar47 + *pdVar26 * dVar60) * dStack_230;
        local_268 = (*pdVar26 * dVar60 - dVar47) * local_268;
        local_258 = (dVar90 * dVar89 - dVar107) * local_258;
        dStack_230 = (dVar60 * dVar44 - dVar97) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = *(undefined8 *)(piVar6 + -0x1a);
        uStack_210 = *(undefined8 *)(piVar6 + -0x18);
        local_208 = *(undefined8 *)(piVar6 + -0x16);
        uStack_200 = 0x3ff0000000000000;
        local_198 = dVar96;
        dStack_190 = dVar92;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar32._8_8_ = -(ulonglong)(0.0 <= dVar46);
        auVar32._0_8_ = -(ulonglong)(0.0 <= dVar73);
        auVar49 = blendvpd(_DAT_149936790,auVar108,auVar32);
        uVar27 = -(ulonglong)(0.0 <= dVar93);
        dVar47 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
        dVar73 = auVar49._0_8_;
        local_168 = local_168 * dVar73;
        uStack_170 = (undefined8 *)((double)uStack_170 * dVar73);
        local_178 = (uint *)((double)local_178 * dVar73);
        dVar73 = auVar49._8_8_;
        local_148 = local_148 * dVar73;
        local_150 = local_150 * dVar73;
        local_158 = dVar73 * local_158;
        local_128 = local_128 * dVar47;
        local_130 = local_130 * dVar47;
        local_138 = dVar47 * local_138;
        local_4c8 = dVar93;
        dStack_4c0 = auVar65._8_8_ * 0.0;
        FUN_14481fd10(&local_388,&local_178);
        dVar47 = local_378 * local_378 + local_388 * local_388;
        dVar73 = dStack_370 * dStack_370 + dStack_380 * dStack_380;
        auVar66._0_8_ = dVar47 + dVar73;
        auVar66._8_8_ = dVar47 + dVar73;
        auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar66._8_8_);
        auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar66._0_8_);
        auVar65 = sqrtpd(auVar66,auVar66);
        auVar65 = divpd(auVar108,auVar65);
        auVar79._0_8_ = auVar65._0_8_ * local_378;
        auVar79._8_8_ = auVar65._8_8_ * dStack_370;
        local_4e8._8_8_ =
             (ulonglong)(dStack_380 * auVar65._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar66._8_8_);
        local_4e8._0_8_ =
             (ulonglong)(local_388 * auVar65._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar66._0_8_);
        local_4d8 = blendvpd(local_6f8,auVar79,auVar33);
        local_618 = local_118;
        dStack_610 = dStack_110;
        dVar73 = 0.0;
        local_688 = dVar91;
        dVar47 = local_108;
      }
      local_5f8._8_4_ = SUB84(dVar73,0);
      local_5f8._0_8_ = dVar47;
      local_5f8._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
      dStack_680 = (double)local_6e8._0_8_;
      lVar17 = lVar11;
      uVar7 = FUN_144a7484c(lVar11,&local_178);
      auVar108 = _DAT_149934d80;
      pdVar9 = (double *)(lVar24 + -0x18 + lVar22);
      dVar89 = *pdVar9;
      dVar91 = pdVar9[1];
      dVar47 = *(double *)(lVar24 + -8 + lVar22);
      local_3f8 = *(undefined1 (*) [16])(piVar6 + -0x12);
      dVar73 = local_3f8._0_8_;
      dVar46 = local_3f8._8_8_;
      auVar49 = minpd(local_3f8,_DAT_149934d80);
      auVar65 = *(undefined1 (*) [16])(piVar6 + -0xe);
      auVar50 = minpd(auVar65,ZEXT416(0x3ff00000) << 0x20);
      auVar54._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar54._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      iVar8 = movmskpd(uVar7,auVar54);
      auVar80._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
      auVar80._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
      uVar10 = movmskpd((int)lVar17,auVar80);
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar46 = *pdVar26;
        dVar96 = pdVar26[1];
        dVar92 = *(double *)(piVar6 + -0x1e);
        dVar44 = *(double *)(piVar6 + -0x1c);
        dVar60 = *(double *)(piVar6 + -0x1a);
        dVar107 = *(double *)(piVar6 + -0x18);
        dVar73 = dVar46 * local_168 * 1.0 +
                 dVar44 * (double)uStack_170 +
                 (double)local_178 * dVar92 * -1.0 + dStack_160 * dVar96;
        local_518._8_4_ = SUB84(dVar73,0);
        local_518._0_8_ =
             dVar96 * local_168 * -1.0 +
             dVar92 * (double)uStack_170 + (double)local_178 * dVar44 * 1.0 + dStack_160 * dVar46;
        local_518._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
        dVar73 = dVar92 * local_168 * -1.0 +
                 (((double)local_178 * dVar46 * -1.0 + dStack_160 * dVar44) -
                 (double)uStack_170 * dVar96);
        local_508._8_4_ = SUB84(dVar73,0);
        local_508._0_8_ =
             dVar44 * local_168 * 1.0 +
             (((double)local_178 * dVar96 * 1.0 + dStack_160 * dVar92) - (double)uStack_170 * dVar46
             );
        local_508._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
        dVar73 = *(double *)(piVar6 + -0x16) * 1.0;
        dVar46 = *(double *)(piVar6 + -0x14) * 0.0;
        dVar96 = dVar107 * (double)local_178 - (double)uStack_170 * dVar60;
        dVar92 = dVar73 * (double)uStack_170 - local_168 * dVar107;
        dVar44 = dVar60 * local_168 - (double)local_178 * dVar73;
        dVar97 = dVar46 * dStack_160 - dStack_160 * dVar46;
        dVar92 = dVar92 + dVar92;
        dVar44 = dVar44 + dVar44;
        dVar96 = dVar96 + dVar96;
        dVar97 = dVar97 + dVar97;
        local_698._0_8_ =
             dVar89 + (dVar96 * (double)uStack_170 - local_168 * dVar44) +
                      dStack_160 * dVar92 + dVar60;
        local_698._8_8_ =
             dVar91 + (dVar92 * local_168 - dVar96 * (double)local_178) +
                      dStack_160 * dVar44 + dVar107;
        local_6a8._8_8_ =
             (dVar97 * dStack_160 - dVar97 * dStack_160) + dStack_160 * dVar97 + dVar46 + 0.0;
        local_6a8._0_8_ =
             dVar47 + (dVar44 * (double)local_178 - (double)uStack_170 * dVar92) +
                      dStack_160 * dVar96 + dVar73;
        local_4f8 = auVar65._0_8_ * 1.0;
        dStack_4f0 = auVar65._8_8_ * 0.0;
      }
      else {
        dVar90 = auVar65._0_8_ * 1.0;
        dVar96 = (double)uStack_170 + (double)uStack_170;
        dVar92 = local_168 + local_168;
        dVar44 = (double)local_178 * ((double)local_178 + (double)local_178);
        local_1f8 = (double)DAT_149934d80 - (local_168 * dVar92 + (double)uStack_170 * dVar96);
        dStack_1d0 = DAT_149934d80._8_8_ - (local_168 * dVar92 + dVar44);
        local_1a8 = 1.0 - (dVar44 + (double)uStack_170 * dVar96);
        dVar44 = ((double)local_178 + (double)local_178) * dStack_160;
        dStack_1f0 = dVar96 * (double)local_178 + dVar92 * dStack_160;
        local_1c8 = dVar92 * (double)uStack_170 + dVar44;
        local_1d8 = dVar96 * (double)local_178 - dVar92 * dStack_160;
        local_1e8 = (double)local_178 * dVar92 - dVar96 * dStack_160;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        local_1b8._8_8_ = dVar92 * (double)uStack_170 - dVar44;
        local_1b8._0_8_ = dVar96 * dStack_160 + (double)local_178 * dVar92;
        uStack_1a0 = 0;
        local_188._8_8_ = 0x3ff0000000000000;
        local_188._0_8_ = dVar47;
        dVar96 = *pdVar26;
        dVar92 = pdVar26[1];
        dVar47 = *(double *)(piVar6 + -0x1e);
        dVar97 = dVar92 + dVar92;
        dVar44 = dVar47 + dVar47;
        dVar60 = dVar96 * (dVar96 + dVar96);
        local_268 = *(double *)(piVar6 + -0x12);
        local_258 = *(double *)(piVar6 + -0x10);
        local_278 = ((double)DAT_149934d80 - (dVar47 * dVar44 + dVar92 * dVar97)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar47 * dVar44 + dVar60)) * local_258;
        dStack_230 = *(double *)(piVar6 + -0xe);
        local_228 = (1.0 - (dVar60 + dVar92 * dVar97)) * dStack_230;
        dVar47 = *(double *)(piVar6 + -0x1c);
        dVar60 = dVar44 * dVar47;
        dVar107 = (dVar96 + dVar96) * *(double *)(piVar6 + -0x1c);
        dVar47 = dVar97 * dVar47;
        dStack_270 = (dVar97 * dVar96 + dVar60) * local_268;
        local_248 = (dVar44 * dVar92 + dVar107) * local_258;
        local_238 = (dVar47 + *pdVar26 * dVar44) * dStack_230;
        local_268 = (*pdVar26 * dVar44 - dVar47) * local_268;
        local_258 = (dVar97 * dVar96 - dVar60) * local_258;
        dStack_230 = (dVar44 * dVar92 - dVar107) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = *(undefined8 *)(piVar6 + -0x1a);
        uStack_210 = *(undefined8 *)(piVar6 + -0x18);
        local_208 = *(undefined8 *)(piVar6 + -0x16);
        uStack_200 = 0x3ff0000000000000;
        local_198 = dVar89;
        dStack_190 = dVar91;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar34._8_8_ = -(ulonglong)(0.0 <= dVar46);
        auVar34._0_8_ = -(ulonglong)(0.0 <= dVar73);
        auVar49 = blendvpd(_DAT_149936790,auVar108,auVar34);
        uVar27 = -(ulonglong)(0.0 <= dVar90);
        dVar47 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
        dVar73 = auVar49._0_8_;
        local_168 = local_168 * dVar73;
        uStack_170 = (undefined8 *)((double)uStack_170 * dVar73);
        local_178 = (uint *)((double)local_178 * dVar73);
        dVar73 = auVar49._8_8_;
        local_148 = local_148 * dVar73;
        local_150 = local_150 * dVar73;
        local_158 = dVar73 * local_158;
        local_128 = local_128 * dVar47;
        local_130 = local_130 * dVar47;
        local_138 = dVar47 * local_138;
        local_4f8 = dVar90;
        dStack_4f0 = auVar65._8_8_ * 0.0;
        FUN_14481fd10(&local_388,&local_178);
        dVar47 = local_378 * local_378 + local_388 * local_388;
        dVar73 = dStack_370 * dStack_370 + dStack_380 * dStack_380;
        auVar67._0_8_ = dVar47 + dVar73;
        auVar67._8_8_ = dVar47 + dVar73;
        auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar67._8_8_);
        auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar67._0_8_);
        auVar65 = sqrtpd(auVar67,auVar67);
        auVar65 = divpd(auVar108,auVar65);
        auVar81._0_8_ = auVar65._0_8_ * local_378;
        auVar81._8_8_ = auVar65._8_8_ * dStack_370;
        local_518._8_8_ =
             (ulonglong)(dStack_380 * auVar65._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar67._8_8_);
        local_518._0_8_ =
             (ulonglong)(local_388 * auVar65._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar67._0_8_);
        local_508 = blendvpd(local_6f8,auVar81,auVar35);
        local_6a8._8_8_ = 0;
        local_6a8._0_8_ = local_108;
        local_698._0_8_ = local_118;
        local_698._8_8_ = dStack_110;
      }
      local_5b8._8_8_ = local_668._8_8_;
      local_5b8._0_8_ = local_668._8_8_;
      local_688 = local_688 * local_6d8;
      dStack_680 = dStack_680 * dStack_6d0;
      local_668._8_8_ = (double)local_668._8_8_ * (double)local_728._8_8_;
      local_668._0_8_ = (double)local_668._0_8_ * (double)local_728._0_8_;
      local_6c8._8_8_ = (double)local_6c8._8_8_ * (double)local_728._8_8_;
      local_6c8._0_8_ = (double)local_6c8._0_8_ * (double)local_728._0_8_;
      local_6d8 = local_6d8 * (double)local_6e8._0_8_;
      dStack_6d0 = dStack_6d0 * (double)local_6e8._8_8_;
      lVar17 = lVar11;
      uVar7 = FUN_144a7484c(lVar11,&local_178);
      auVar108 = _DAT_149934d80;
      pdVar9 = (double *)(lVar24 + -0x18 + lVar22);
      dVar89 = *pdVar9;
      dVar91 = pdVar9[1];
      dVar47 = *(double *)(lVar24 + -8 + lVar22);
      local_408 = *(undefined1 (*) [16])(piVar6 + -0x12);
      dVar73 = local_408._0_8_;
      dVar46 = local_408._8_8_;
      auVar49 = minpd(local_408,_DAT_149934d80);
      auVar65 = *(undefined1 (*) [16])(piVar6 + -0xe);
      auVar50 = minpd(auVar65,ZEXT416(0x3ff00000) << 0x20);
      auVar55._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar55._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      iVar8 = movmskpd(uVar7,auVar55);
      auVar82._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
      auVar82._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
      uVar10 = movmskpd((int)lVar17,auVar82);
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar46 = *pdVar26;
        dVar96 = pdVar26[1];
        dVar92 = *(double *)(piVar6 + -0x1e);
        dVar44 = *(double *)(piVar6 + -0x1c);
        dVar60 = *(double *)(piVar6 + -0x1a);
        dVar107 = *(double *)(piVar6 + -0x18);
        dVar73 = dVar46 * local_168 * 1.0 +
                 dVar44 * (double)uStack_170 +
                 (double)local_178 * dVar92 * -1.0 + dStack_160 * dVar96;
        local_538._8_4_ = SUB84(dVar73,0);
        local_538._0_8_ =
             dVar96 * local_168 * -1.0 +
             dVar92 * (double)uStack_170 + (double)local_178 * dVar44 * 1.0 + dStack_160 * dVar46;
        local_538._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
        local_528._8_8_ =
             dVar92 * local_168 * -1.0 +
             (((double)local_178 * dVar46 * -1.0 + dStack_160 * dVar44) -
             (double)uStack_170 * dVar96);
        local_528._0_8_ =
             dVar44 * local_168 * 1.0 +
             (((double)local_178 * dVar96 * 1.0 + dStack_160 * dVar92) - (double)uStack_170 * dVar46
             );
        dVar73 = *(double *)(piVar6 + -0x16) * 1.0;
        dVar46 = *(double *)(piVar6 + -0x14) * 0.0;
        dVar96 = dVar107 * (double)local_178 - (double)uStack_170 * dVar60;
        dVar92 = dVar73 * (double)uStack_170 - local_168 * dVar107;
        dVar44 = dVar60 * local_168 - (double)local_178 * dVar73;
        dVar97 = dVar46 * dStack_160 - dStack_160 * dVar46;
        dVar92 = dVar92 + dVar92;
        dVar44 = dVar44 + dVar44;
        dVar96 = dVar96 + dVar96;
        dVar97 = dVar97 + dVar97;
        local_3d8 = dVar89 + (dVar96 * (double)uStack_170 - local_168 * dVar44) +
                             dStack_160 * dVar92 + dVar60;
        dStack_3d0 = dVar91 + (dVar92 * local_168 - dVar96 * (double)local_178) +
                              dStack_160 * dVar44 + dVar107;
        local_658._0_8_ =
             dVar47 + (dVar44 * (double)local_178 - (double)uStack_170 * dVar92) +
                      dStack_160 * dVar96 + dVar73;
        local_658._8_8_ =
             (dVar97 * dStack_160 - dVar97 * dStack_160) + dStack_160 * dVar97 + dVar46 + 0.0;
      }
      else {
        dVar96 = (double)uStack_170 + (double)uStack_170;
        dVar92 = local_168 + local_168;
        dVar44 = (double)local_178 * ((double)local_178 + (double)local_178);
        local_1f8 = (double)DAT_149934d80 - (local_168 * dVar92 + (double)uStack_170 * dVar96);
        dStack_1d0 = DAT_149934d80._8_8_ - (local_168 * dVar92 + dVar44);
        local_1a8 = 1.0 - (dVar44 + (double)uStack_170 * dVar96);
        dVar44 = ((double)local_178 + (double)local_178) * dStack_160;
        dStack_1f0 = dVar96 * (double)local_178 + dVar92 * dStack_160;
        local_1c8 = dVar92 * (double)uStack_170 + dVar44;
        local_1d8 = dVar96 * (double)local_178 - dVar92 * dStack_160;
        local_1e8 = (double)local_178 * dVar92 - dVar96 * dStack_160;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        local_1b8._8_8_ = dVar92 * (double)uStack_170 - dVar44;
        local_1b8._0_8_ = dVar96 * dStack_160 + (double)local_178 * dVar92;
        uStack_1a0 = 0;
        local_188._8_8_ = 0x3ff0000000000000;
        local_188._0_8_ = dVar47;
        dVar96 = *pdVar26;
        dVar92 = pdVar26[1];
        dVar47 = *(double *)(piVar6 + -0x1e);
        dVar97 = dVar92 + dVar92;
        dVar44 = dVar47 + dVar47;
        dVar60 = dVar96 * (dVar96 + dVar96);
        local_268 = *(double *)(piVar6 + -0x12);
        local_258 = *(double *)(piVar6 + -0x10);
        local_278 = ((double)DAT_149934d80 - (dVar47 * dVar44 + dVar92 * dVar97)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar47 * dVar44 + dVar60)) * local_258;
        dStack_230 = *(double *)(piVar6 + -0xe);
        local_228 = (1.0 - (dVar60 + dVar92 * dVar97)) * dStack_230;
        dVar47 = *(double *)(piVar6 + -0x1c);
        dVar60 = dVar44 * dVar47;
        dVar107 = (dVar96 + dVar96) * *(double *)(piVar6 + -0x1c);
        dVar47 = dVar97 * dVar47;
        dStack_270 = (dVar97 * dVar96 + dVar60) * local_268;
        local_248 = (dVar44 * dVar92 + dVar107) * local_258;
        local_238 = (dVar47 + *pdVar26 * dVar44) * dStack_230;
        local_268 = (*pdVar26 * dVar44 - dVar47) * local_268;
        local_258 = (dVar97 * dVar96 - dVar60) * local_258;
        dStack_230 = (dVar44 * dVar92 - dVar107) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = *(undefined8 *)(piVar6 + -0x1a);
        uStack_210 = *(undefined8 *)(piVar6 + -0x18);
        local_208 = *(undefined8 *)(piVar6 + -0x16);
        uStack_200 = 0x3ff0000000000000;
        local_198 = dVar89;
        dStack_190 = dVar91;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar36._8_8_ = -(ulonglong)(0.0 <= dVar46);
        auVar36._0_8_ = -(ulonglong)(0.0 <= dVar73);
        auVar49 = blendvpd(_DAT_149936790,auVar108,auVar36);
        uVar27 = -(ulonglong)(0.0 <= auVar65._0_8_ * 1.0);
        dVar47 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
        dVar73 = auVar49._0_8_;
        local_168 = local_168 * dVar73;
        uStack_170 = (undefined8 *)((double)uStack_170 * dVar73);
        local_178 = (uint *)((double)local_178 * dVar73);
        dVar73 = auVar49._8_8_;
        local_148 = local_148 * dVar73;
        local_150 = local_150 * dVar73;
        local_158 = dVar73 * local_158;
        local_128 = local_128 * dVar47;
        local_130 = local_130 * dVar47;
        local_138 = dVar47 * local_138;
        FUN_14481fd10(&local_388,&local_178);
        dVar47 = local_378 * local_378 + local_388 * local_388;
        dVar73 = dStack_370 * dStack_370 + dStack_380 * dStack_380;
        auVar68._0_8_ = dVar47 + dVar73;
        auVar68._8_8_ = dVar47 + dVar73;
        auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar68._8_8_);
        auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar68._0_8_);
        auVar49 = sqrtpd(auVar68,auVar68);
        auVar49 = divpd(auVar108,auVar49);
        auVar83._0_8_ = auVar49._0_8_ * local_378;
        auVar83._8_8_ = auVar49._8_8_ * dStack_370;
        local_538._8_8_ =
             (ulonglong)(dStack_380 * auVar49._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar68._8_8_);
        local_538._0_8_ =
             (ulonglong)(local_388 * auVar49._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar68._0_8_);
        local_528 = blendvpd(local_6f8,auVar83,auVar37);
        local_658._8_8_ = 0.0;
        local_658._0_8_ = local_108;
        local_3d8 = local_118;
        dStack_3d0 = dStack_110;
      }
      dVar47 = auVar65._8_8_ * 0.0;
      local_5a8._8_4_ = SUB84(dVar47,0);
      local_5a8._0_8_ = auVar65._0_8_ * 1.0;
      local_5a8._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
      local_728._8_8_ = (double)local_728._8_8_ * (double)local_5b8._8_8_;
      local_728._0_8_ = (double)local_728._0_8_ * (double)local_5b8._0_8_;
      local_688 = local_688 - (double)local_6c8._0_8_;
      dStack_680 = dStack_680 - (double)local_6c8._8_8_;
      local_668._8_8_ = (double)local_668._8_8_ - dStack_6d0;
      local_668._0_8_ = (double)local_668._0_8_ - local_6d8;
      local_6e8._0_8_ = (double)local_6e8._0_8_ * (double)local_5b8._0_8_;
      lVar17 = lVar11;
      uVar7 = FUN_144a7484c(lVar11,&local_178);
      auVar49 = _DAT_149934d80;
      pdVar9 = (double *)(lVar24 + -0x18 + lVar22);
      dVar91 = *pdVar9;
      dVar89 = pdVar9[1];
      dVar47 = *(double *)(lVar24 + -8 + lVar22);
      local_5b8 = *(undefined1 (*) [16])(piVar6 + -0x12);
      dVar73 = local_5b8._0_8_;
      dVar46 = local_5b8._8_8_;
      auVar108 = minpd(local_5b8,auVar108);
      auVar65 = *(undefined1 (*) [16])(piVar6 + -0xe);
      auVar50 = minpd(auVar65,ZEXT416(0x3ff00000) << 0x20);
      auVar56._8_8_ = -(ulonglong)(auVar108._8_8_ < 0.0);
      auVar56._0_8_ = -(ulonglong)(auVar108._0_8_ < 0.0);
      iVar8 = movmskpd(uVar7,auVar56);
      auVar84._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
      auVar84._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
      uVar10 = movmskpd((int)lVar17,auVar84);
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar92 = *pdVar26;
        dVar44 = pdVar26[1];
        dVar60 = *(double *)(piVar6 + -0x1e);
        dVar107 = *(double *)(piVar6 + -0x1c);
        dVar97 = *(double *)(piVar6 + -0x1a);
        dVar90 = *(double *)(piVar6 + -0x18);
        dVar46 = dVar44 * local_168 * -1.0 +
                 dVar60 * (double)uStack_170 +
                 (double)local_178 * dVar107 * 1.0 + dStack_160 * dVar92;
        dVar96 = dVar92 * local_168 * 1.0 +
                 dVar107 * (double)uStack_170 +
                 (double)local_178 * dVar60 * -1.0 + dStack_160 * dVar44;
        dVar73 = dVar60 * local_168 * -1.0 +
                 (((double)local_178 * dVar92 * -1.0 + dStack_160 * dVar107) -
                 (double)uStack_170 * dVar44);
        local_558._8_4_ = SUB84(dVar73,0);
        local_558._0_8_ =
             dVar107 * local_168 * 1.0 +
             (((double)local_178 * dVar44 * 1.0 + dStack_160 * dVar60) - (double)uStack_170 * dVar92
             );
        local_558._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
        dVar60 = *(double *)(piVar6 + -0x16) * 1.0;
        dVar107 = *(double *)(piVar6 + -0x14) * 0.0;
        dVar73 = dVar90 * (double)local_178 - (double)uStack_170 * dVar97;
        dVar92 = dVar60 * (double)uStack_170 - local_168 * dVar90;
        dVar44 = dVar97 * local_168 - (double)local_178 * dVar60;
        dVar93 = dVar107 * dStack_160 - dStack_160 * dVar107;
        dVar92 = dVar92 + dVar92;
        dVar44 = dVar44 + dVar44;
        dVar73 = dVar73 + dVar73;
        dVar93 = dVar93 + dVar93;
        dVar89 = dVar89 + (dVar92 * local_168 - dVar73 * (double)local_178) +
                          dStack_160 * dVar44 + dVar90;
        local_6c8._8_4_ = SUB84(dVar89,0);
        local_6c8._0_8_ =
             dVar91 + (dVar73 * (double)uStack_170 - local_168 * dVar44) +
                      dStack_160 * dVar92 + dVar97;
        local_6c8._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
        local_6d8 = dVar47 + (dVar44 * (double)local_178 - (double)uStack_170 * dVar92) +
                             dStack_160 * dVar73 + dVar60;
        dStack_6d0 = (dVar93 * dStack_160 - dVar93 * dStack_160) + dStack_160 * dVar93 + dVar107 +
                     0.0;
        local_548._8_8_ = auVar65._8_8_ * 0.0;
        local_548._0_8_ = auVar65._0_8_ * 1.0;
      }
      else {
        dVar90 = auVar65._0_8_ * 1.0;
        dVar93 = auVar65._8_8_ * 0.0;
        dVar96 = (double)uStack_170 + (double)uStack_170;
        dVar92 = local_168 + local_168;
        dVar44 = (double)local_178 * ((double)local_178 + (double)local_178);
        local_1f8 = (double)DAT_149934d80 - (local_168 * dVar92 + (double)uStack_170 * dVar96);
        dStack_1d0 = DAT_149934d80._8_8_ - (local_168 * dVar92 + dVar44);
        local_1a8 = 1.0 - (dVar44 + (double)uStack_170 * dVar96);
        dVar44 = ((double)local_178 + (double)local_178) * dStack_160;
        dStack_1f0 = dVar96 * (double)local_178 + dVar92 * dStack_160;
        local_1c8 = dVar92 * (double)uStack_170 + dVar44;
        local_1d8 = dVar96 * (double)local_178 - dVar92 * dStack_160;
        local_1e8 = (double)local_178 * dVar92 - dVar96 * dStack_160;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        local_1b8._8_8_ = dVar92 * (double)uStack_170 - dVar44;
        local_1b8._0_8_ = dVar96 * dStack_160 + (double)local_178 * dVar92;
        uStack_1a0 = 0;
        local_188._8_4_ = 0;
        local_188._0_8_ = dVar47;
        local_188._12_4_ = 0x3ff00000;
        dVar96 = *pdVar26;
        dVar92 = pdVar26[1];
        dVar47 = *(double *)(piVar6 + -0x1e);
        dVar97 = dVar92 + dVar92;
        dVar44 = dVar47 + dVar47;
        dVar60 = dVar96 * (dVar96 + dVar96);
        local_268 = *(double *)(piVar6 + -0x12);
        local_258 = *(double *)(piVar6 + -0x10);
        local_278 = ((double)DAT_149934d80 - (dVar47 * dVar44 + dVar92 * dVar97)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar47 * dVar44 + dVar60)) * local_258;
        dStack_230 = *(double *)(piVar6 + -0xe);
        local_228 = (1.0 - (dVar60 + dVar92 * dVar97)) * dStack_230;
        dVar47 = *(double *)(piVar6 + -0x1c);
        dVar60 = dVar44 * dVar47;
        dVar107 = (dVar96 + dVar96) * *(double *)(piVar6 + -0x1c);
        dVar47 = dVar97 * dVar47;
        dStack_270 = (dVar97 * dVar96 + dVar60) * local_268;
        local_248 = (dVar44 * dVar92 + dVar107) * local_258;
        local_238 = (dVar47 + *pdVar26 * dVar44) * dStack_230;
        local_268 = (*pdVar26 * dVar44 - dVar47) * local_268;
        local_258 = (dVar97 * dVar96 - dVar60) * local_258;
        dStack_230 = (dVar44 * dVar92 - dVar107) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = *(undefined8 *)(piVar6 + -0x1a);
        uStack_210 = *(undefined8 *)(piVar6 + -0x18);
        local_208 = *(undefined8 *)(piVar6 + -0x16);
        uStack_200 = 0x3ff0000000000000;
        local_198 = dVar91;
        dStack_190 = dVar89;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar38._8_8_ = -(ulonglong)(0.0 <= dVar46);
        auVar38._0_8_ = -(ulonglong)(0.0 <= dVar73);
        auVar65 = blendvpd(_DAT_149936790,auVar49,auVar38);
        local_548._8_4_ = SUB84(dVar93,0);
        local_548._0_8_ = dVar90;
        local_548._12_4_ = (int)((ulonglong)dVar93 >> 0x20);
        uVar27 = -(ulonglong)(0.0 <= dVar90);
        dVar47 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
        dVar73 = auVar65._0_8_;
        local_168 = local_168 * dVar73;
        uStack_170 = (undefined8 *)((double)uStack_170 * dVar73);
        local_178 = (uint *)((double)local_178 * dVar73);
        dVar73 = auVar65._8_8_;
        local_148 = local_148 * dVar73;
        local_150 = local_150 * dVar73;
        local_158 = dVar73 * local_158;
        local_128 = local_128 * dVar47;
        local_130 = local_130 * dVar47;
        local_138 = dVar47 * local_138;
        FUN_14481fd10(&local_388,&local_178);
        dVar47 = local_378 * local_378 + local_388 * local_388;
        dVar73 = dStack_370 * dStack_370 + dStack_380 * dStack_380;
        auVar69._0_8_ = dVar47 + dVar73;
        auVar69._8_8_ = dVar47 + dVar73;
        auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar69._8_8_);
        auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar69._0_8_);
        auVar65 = sqrtpd(auVar69,auVar69);
        auVar65 = divpd(auVar49,auVar65);
        auVar85._0_8_ = auVar65._0_8_ * local_378;
        auVar85._8_8_ = auVar65._8_8_ * dStack_370;
        dVar46 = (double)((ulonglong)(local_388 * auVar65._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar69._0_8_));
        dVar96 = (double)((ulonglong)(dStack_380 * auVar65._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar69._8_8_));
        local_558 = blendvpd(local_6f8,auVar85,auVar39);
        local_6c8._8_8_ = dStack_110;
        local_6c8._0_8_ = local_118;
        local_6d8 = local_108;
        dStack_6d0 = 0.0;
      }
      local_638._8_8_ = (double)local_638._8_8_ + (double)local_728._8_8_;
      local_638._0_8_ = (double)local_638._0_8_ + (double)local_728._0_8_;
      local_428 = dStack_680;
      dStack_420 = (double)local_668._0_8_;
      local_678 = local_678 + (double)local_6e8._0_8_;
      uVar7 = FUN_144a7484c(lVar11,&local_178);
      auVar108 = _DAT_149934d80;
      pdVar9 = (double *)(lVar24 + -0x18 + lVar22);
      dVar91 = *pdVar9;
      dVar92 = pdVar9[1];
      dVar47 = *(double *)(lVar24 + -8 + lVar22);
      local_418 = *(undefined1 (*) [16])(piVar6 + -0x12);
      dVar73 = local_418._0_8_;
      dVar89 = local_418._8_8_;
      auVar49 = minpd(local_418,_DAT_149934d80);
      auVar65 = *(undefined1 (*) [16])(piVar6 + -0xe);
      auVar50 = minpd(auVar65,ZEXT416(0x3ff00000) << 0x20);
      auVar57._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar57._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      iVar8 = movmskpd(uVar7,auVar57);
      auVar86._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
      auVar86._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
      uVar10 = movmskpd((int)lVar11,auVar86);
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar89 = *pdVar26;
        dVar44 = pdVar26[1];
        dVar60 = *(double *)(piVar6 + -0x1e);
        dVar107 = *(double *)(piVar6 + -0x1c);
        dVar97 = *(double *)(piVar6 + -0x1a);
        dVar90 = *(double *)(piVar6 + -0x18);
        dVar94 = dVar44 * local_168 * -1.0 +
                 dVar60 * (double)uStack_170 +
                 (double)local_178 * dVar107 * 1.0 + dStack_160 * dVar89;
        dVar45 = dVar89 * local_168 * 1.0 +
                 dVar107 * (double)uStack_170 +
                 (double)local_178 * dVar60 * -1.0 + dStack_160 * dVar44;
        dVar73 = dVar60 * local_168 * -1.0 +
                 (((double)local_178 * dVar89 * -1.0 + dStack_160 * dVar107) -
                 (double)uStack_170 * dVar44);
        local_6f8._8_4_ = SUB84(dVar73,0);
        local_6f8._0_8_ =
             dVar107 * local_168 * 1.0 +
             (((double)local_178 * dVar44 * 1.0 + dStack_160 * dVar60) - (double)uStack_170 * dVar89
             );
        local_6f8._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
        dVar107 = *(double *)(piVar6 + -0x16) * 1.0;
        dVar93 = *(double *)(piVar6 + -0x14) * 0.0;
        dVar73 = dVar90 * (double)local_178 - (double)uStack_170 * dVar97;
        dVar44 = dVar107 * (double)uStack_170 - local_168 * dVar90;
        dVar60 = dVar97 * local_168 - (double)local_178 * dVar107;
        dVar89 = dVar93 * dStack_160 - dStack_160 * dVar93;
        dVar44 = dVar44 + dVar44;
        dVar60 = dVar60 + dVar60;
        dVar73 = dVar73 + dVar73;
        dVar89 = dVar89 + dVar89;
        dVar91 = dVar91 + (dVar73 * (double)uStack_170 - local_168 * dVar60) +
                          dStack_160 * dVar44 + dVar97;
        dVar92 = dVar92 + (dVar44 * local_168 - dVar73 * (double)local_178) +
                          dStack_160 * dVar60 + dVar90;
        local_668._8_8_ =
             (dVar89 * dStack_160 - dVar89 * dStack_160) + dStack_160 * dVar89 + dVar93 + 0.0;
        local_668._0_8_ =
             dVar47 + (dVar60 * (double)local_178 - (double)uStack_170 * dVar44) +
                      dStack_160 * dVar73 + dVar107;
        local_728._8_8_ = auVar65._8_8_ * 0.0;
        local_728._0_8_ = auVar65._0_8_ * 1.0;
      }
      else {
        local_728._8_8_ = auVar65._8_8_ * 0.0;
        local_728._0_8_ = auVar65._0_8_ * 1.0;
        dVar44 = (double)uStack_170 + (double)uStack_170;
        dVar60 = local_168 + local_168;
        dVar107 = (double)local_178 * ((double)local_178 + (double)local_178);
        local_1f8 = (double)DAT_149934d80 - (local_168 * dVar60 + (double)uStack_170 * dVar44);
        dStack_1d0 = DAT_149934d80._8_8_ - (local_168 * dVar60 + dVar107);
        local_1a8 = 1.0 - (dVar107 + (double)uStack_170 * dVar44);
        dVar107 = ((double)local_178 + (double)local_178) * dStack_160;
        dStack_1f0 = dVar44 * (double)local_178 + dVar60 * dStack_160;
        local_1c8 = dVar60 * (double)uStack_170 + dVar107;
        local_1d8 = dVar44 * (double)local_178 - dVar60 * dStack_160;
        local_1e8 = (double)local_178 * dVar60 - dVar44 * dStack_160;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        local_1b8._8_8_ = dVar60 * (double)uStack_170 - dVar107;
        local_1b8._0_8_ = dVar44 * dStack_160 + (double)local_178 * dVar60;
        uStack_1a0 = 0;
        local_188._8_8_ = 0x3ff0000000000000;
        local_188._0_8_ = dVar47;
        dVar44 = *pdVar26;
        dVar60 = pdVar26[1];
        dVar47 = *(double *)(piVar6 + -0x1e);
        dVar93 = dVar60 + dVar60;
        dVar107 = dVar47 + dVar47;
        dVar97 = dVar44 * (dVar44 + dVar44);
        local_268 = *(double *)(piVar6 + -0x12);
        local_258 = *(double *)(piVar6 + -0x10);
        local_278 = ((double)DAT_149934d80 - (dVar47 * dVar107 + dVar60 * dVar93)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar47 * dVar107 + dVar97)) * local_258;
        dStack_230 = *(double *)(piVar6 + -0xe);
        local_228 = (1.0 - (dVar97 + dVar60 * dVar93)) * dStack_230;
        dVar47 = *(double *)(piVar6 + -0x1c);
        dVar97 = dVar107 * dVar47;
        dVar90 = (dVar44 + dVar44) * *(double *)(piVar6 + -0x1c);
        dVar47 = dVar93 * dVar47;
        dStack_270 = (dVar93 * dVar44 + dVar97) * local_268;
        local_248 = (dVar107 * dVar60 + dVar90) * local_258;
        local_238 = (dVar47 + *pdVar26 * dVar107) * dStack_230;
        local_268 = (*pdVar26 * dVar107 - dVar47) * local_268;
        local_258 = (dVar93 * dVar44 - dVar97) * local_258;
        dStack_230 = (dVar107 * dVar60 - dVar90) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = *(undefined8 *)(piVar6 + -0x1a);
        uStack_210 = *(undefined8 *)(piVar6 + -0x18);
        local_208 = *(undefined8 *)(piVar6 + -0x16);
        uStack_200 = 0x3ff0000000000000;
        local_198 = dVar91;
        dStack_190 = dVar92;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar40._8_8_ = -(ulonglong)(0.0 <= dVar89);
        auVar40._0_8_ = -(ulonglong)(0.0 <= dVar73);
        auVar65 = blendvpd(_DAT_149936790,auVar108,auVar40);
        dVar47 = (double)(~-(ulonglong)(0.0 <= (double)local_728._0_8_) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= (double)local_728._0_8_) & 0x3ff0000000000000);
        dVar73 = auVar65._0_8_;
        local_168 = local_168 * dVar73;
        uStack_170 = (undefined8 *)((double)uStack_170 * dVar73);
        local_178 = (uint *)((double)local_178 * dVar73);
        dVar73 = auVar65._8_8_;
        local_148 = local_148 * dVar73;
        local_150 = local_150 * dVar73;
        local_158 = dVar73 * local_158;
        local_128 = local_128 * dVar47;
        local_130 = local_130 * dVar47;
        local_138 = dVar47 * local_138;
        FUN_14481fd10(&local_388,&local_178);
        dVar47 = local_378 * local_378 + local_388 * local_388;
        dVar73 = dStack_370 * dStack_370 + dStack_380 * dStack_380;
        auVar70._0_8_ = dVar47 + dVar73;
        auVar70._8_8_ = dVar47 + dVar73;
        auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar70._8_8_);
        auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar70._0_8_);
        auVar65 = sqrtpd(auVar70,auVar70);
        auVar65 = divpd(auVar108,auVar65);
        auVar87._0_8_ = auVar65._0_8_ * local_378;
        auVar87._8_8_ = auVar65._8_8_ * dStack_370;
        dVar94 = (double)((ulonglong)(local_388 * auVar65._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar70._0_8_));
        dVar45 = (double)((ulonglong)(dStack_380 * auVar65._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar70._8_8_));
        local_6f8 = blendvpd(local_6f8,auVar87,auVar41);
        local_668._8_8_ = 0;
        local_668._0_8_ = local_108;
        dVar91 = local_118;
        dVar92 = dStack_110;
      }
      auVar65 = local_728;
      local_6e8._8_4_ = SUB84(dVar92,0);
      local_6e8._0_8_ = dVar91;
      local_6e8._12_4_ = (int)((ulonglong)dVar92 >> 0x20);
      local_578._0_8_ = (double)local_578._0_8_ + (double)local_638._0_8_ + local_428;
      local_578._8_8_ = (double)local_578._8_8_ + (double)local_638._8_8_ + dStack_420;
      local_5c8._0_8_ = (double)local_5c8._0_8_ + local_678 + local_688;
      uVar10 = *(uint *)(plVar1 + 1);
      local_728._4_4_ = 0;
      local_728._0_4_ = uVar10;
      uVar27 = local_728._0_8_;
      local_178 = (uint *)CONCAT44((float)(double)local_578._8_8_,(float)(double)local_578._0_8_);
      iVar8 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar8 + 1U;
      uVar2 = local_698._0_8_;
      uVar5 = local_698._8_8_;
      uVar4 = local_3c8._0_8_;
      uVar48 = local_3c8._8_8_;
      local_728 = auVar65;
      uStack_170._0_4_ = (float)(double)local_5c8._0_8_;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
        FUN_140d35044(plVar1,iVar8);
      }
      dVar47 = dStack_620;
      dVar73 = -local_458;
      dVar44 = local_3b8 * (double)uVar4;
      dVar60 = dStack_3b0 * (double)uVar48;
      dVar107 = local_478 * dVar73;
      dVar89 = dVar60 * (double)local_498._0_8_ - dVar44 * (double)local_498._8_8_;
      dVar91 = dVar107 * (double)local_498._8_8_ - dVar60 * (double)local_488._0_8_;
      dVar92 = dVar44 * (double)local_488._0_8_ - (double)local_498._0_8_ * dVar107;
      dVar91 = dVar91 + dVar91;
      dVar92 = dVar92 + dVar92;
      dVar89 = dVar89 + dVar89;
      dVar44 = local_608 +
               (dVar89 * (double)local_498._8_8_ - (double)local_488._0_8_ * dVar92) +
               dVar91 * (double)local_488._8_8_ + dVar44;
      dVar60 = dStack_600 +
               ((double)local_488._0_8_ * dVar91 - (double)local_498._0_8_ * dVar89) +
               dVar92 * (double)local_488._8_8_ + dVar60;
      dVar89 = local_628 +
               (double)local_488._8_8_ * dVar89 + dVar107 +
               (dVar92 * (double)local_498._0_8_ - (double)local_498._8_8_ * dVar91);
      FUN_1415874d8((longlong)iVar8 * 0x58 + *plVar1,&local_178);
      uStack_170._0_4_ = (float)dVar89;
      local_178 = (uint *)CONCAT44((float)dVar60,(float)dVar44);
      iVar8 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar8 + 1U;
      local_628 = dVar89;
      dStack_620 = dVar47;
      local_608 = dVar44;
      dStack_600 = dVar60;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
        FUN_140d35044(plVar1,iVar8);
      }
      dVar92 = local_438;
      dVar91 = local_588;
      dVar47 = (double)local_468._0_8_ * local_588;
      dVar89 = (double)local_468._8_8_ * local_438;
      dVar97 = local_5d8 * dVar73;
      dVar44 = dVar89 * local_4b8 - dVar47 * dStack_4b0;
      dVar60 = dVar97 * dStack_4b0 - dVar89 * (double)local_4a8._0_8_;
      dVar107 = dVar47 * (double)local_4a8._0_8_ - local_4b8 * dVar97;
      dVar60 = dVar60 + dVar60;
      dVar107 = dVar107 + dVar107;
      dVar44 = dVar44 + dVar44;
      dVar47 = (double)local_648._0_8_ +
               (dVar44 * dStack_4b0 - (double)local_4a8._0_8_ * dVar107) +
               dVar60 * (double)local_4a8._8_8_ + dVar47;
      dVar89 = (double)local_648._8_8_ +
               ((double)local_4a8._0_8_ * dVar60 - local_4b8 * dVar44) +
               dVar107 * (double)local_4a8._8_8_ + dVar89;
      uVar4 = local_6b8._8_8_;
      dVar44 = (double)local_6b8._0_8_ +
               (double)local_4a8._8_8_ * dVar44 + dVar97 +
               (dVar107 * local_4b8 - dStack_4b0 * dVar60);
      FUN_1415874d8((longlong)iVar8 * 0x58 + *plVar1,&local_178);
      local_6b8._0_8_ = dVar44;
      local_6b8 = CONCAT88(uVar4,local_6b8._0_8_);
      uStack_170._0_4_ = (float)dVar44;
      local_648._8_4_ = SUB84(dVar89,0);
      local_648._0_8_ = dVar47;
      local_648._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
      local_178 = (uint *)CONCAT44((float)dVar89,(float)dVar47);
      iVar8 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
        FUN_140d35044(plVar1,iVar8);
      }
      dVar91 = dVar91 * (double)local_3e8._0_8_;
      dVar92 = dVar92 * (double)local_3e8._8_8_;
      dVar60 = local_4c8 * local_598;
      dVar47 = dVar92 * (double)local_4e8._0_8_ - dVar91 * (double)local_4e8._8_8_;
      dVar89 = dVar60 * (double)local_4e8._8_8_ - dVar92 * (double)local_4d8._0_8_;
      dVar44 = dVar91 * (double)local_4d8._0_8_ - (double)local_4e8._0_8_ * dVar60;
      dVar89 = dVar89 + dVar89;
      dVar44 = dVar44 + dVar44;
      dVar47 = dVar47 + dVar47;
      dVar91 = local_618 +
               (dVar47 * (double)local_4e8._8_8_ - (double)local_4d8._0_8_ * dVar44) +
               dVar89 * (double)local_4d8._8_8_ + dVar91;
      dVar92 = dStack_610 +
               ((double)local_4d8._0_8_ * dVar89 - (double)local_4e8._0_8_ * dVar47) +
               dVar44 * (double)local_4d8._8_8_ + dVar92;
      uVar7 = local_5f8._8_4_;
      uVar101 = local_5f8._12_4_;
      dVar47 = local_5f8._0_8_ +
               (double)local_4d8._8_8_ * dVar47 + dVar60 +
               (dVar44 * (double)local_4e8._0_8_ - (double)local_4e8._8_8_ * dVar89);
      FUN_1415874d8((longlong)iVar8 * 0x58 + *plVar1,&local_178);
      local_5f8._8_4_ = uVar7;
      local_5f8._0_8_ = dVar47;
      local_5f8._12_4_ = uVar101;
      uStack_170._0_4_ = (float)dVar47;
      local_178 = (uint *)CONCAT44((float)dVar92,(float)dVar91);
      iVar8 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar8 + 1U;
      uVar4 = local_408._0_8_;
      uVar48 = local_408._8_8_;
      local_618 = dVar91;
      dStack_610 = dVar92;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
        FUN_140d35044(plVar1,iVar8);
      }
      dVar92 = local_448;
      dVar90 = -local_588;
      dVar47 = (double)local_3f8._0_8_ * dVar90;
      dVar91 = (double)local_3f8._8_8_ * local_448;
      dVar97 = local_4f8 * local_598;
      dVar44 = dVar91 * (double)local_518._0_8_ - dVar47 * (double)local_518._8_8_;
      dVar60 = dVar97 * (double)local_518._8_8_ - dVar91 * (double)local_508._0_8_;
      dVar107 = dVar47 * (double)local_508._0_8_ - (double)local_518._0_8_ * dVar97;
      dVar60 = dVar60 + dVar60;
      dVar107 = dVar107 + dVar107;
      dVar44 = dVar44 + dVar44;
      dVar89 = (double)uVar2 +
               (dVar44 * (double)local_518._8_8_ - (double)local_508._0_8_ * dVar107) +
               dVar60 * (double)local_508._8_8_ + dVar47;
      dVar91 = (double)uVar5 +
               ((double)local_508._0_8_ * dVar60 - (double)local_518._0_8_ * dVar44) +
               dVar107 * (double)local_508._8_8_ + dVar91;
      uVar7 = local_6a8._8_4_;
      uVar101 = local_6a8._12_4_;
      dVar47 = local_6a8._0_8_ +
               (double)local_508._8_8_ * dVar44 + dVar97 +
               (dVar107 * (double)local_518._0_8_ - (double)local_518._8_8_ * dVar60);
      FUN_1415874d8((longlong)iVar8 * 0x58 + *plVar1,&local_178);
      local_6a8._8_4_ = uVar7;
      local_6a8._0_8_ = dVar47;
      local_6a8._12_4_ = uVar101;
      uStack_170._0_4_ = (float)dVar47;
      local_698._8_4_ = SUB84(dVar91,0);
      local_698._0_8_ = dVar89;
      local_698._12_4_ = (int)((ulonglong)dVar91 >> 0x20);
      local_178 = (uint *)CONCAT44((float)dVar91,(float)dVar89);
      iVar8 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
        FUN_140d35044(plVar1,iVar8);
      }
      dVar60 = dVar90 * (double)uVar4;
      dVar92 = dVar92 * (double)uVar48;
      dVar44 = (double)local_5a8._0_8_ * dVar73;
      dVar47 = dVar92 * (double)local_538._0_8_ - dVar60 * (double)local_538._8_8_;
      dVar89 = dVar44 * (double)local_538._8_8_ - dVar92 * (double)local_528._0_8_;
      dVar91 = dVar60 * (double)local_528._0_8_ - (double)local_538._0_8_ * dVar44;
      dVar89 = dVar89 + dVar89;
      dVar91 = dVar91 + dVar91;
      dVar47 = dVar47 + dVar47;
      dVar60 = local_3d8 +
               (dVar47 * (double)local_538._8_8_ - (double)local_528._0_8_ * dVar91) +
               dVar89 * (double)local_528._8_8_ + dVar60;
      dVar92 = dStack_3d0 +
               ((double)local_528._0_8_ * dVar89 - (double)local_538._0_8_ * dVar47) +
               dVar91 * (double)local_528._8_8_ + dVar92;
      uVar7 = local_658._8_4_;
      uVar101 = local_658._12_4_;
      dVar47 = local_658._0_8_ +
               (double)local_528._8_8_ * dVar47 + dVar44 +
               (dVar91 * (double)local_538._0_8_ - (double)local_538._8_8_ * dVar89);
      FUN_1415874d8((longlong)iVar8 * 0x58 + *plVar1,&local_178);
      local_658._8_4_ = uVar7;
      local_658._0_8_ = dVar47;
      local_658._12_4_ = uVar101;
      uStack_170._0_4_ = (float)dVar47;
      local_178 = (uint *)CONCAT44((float)dVar92,(float)dVar60);
      iVar8 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
        FUN_140d35044(plVar1,iVar8);
      }
      dVar89 = local_438;
      dVar47 = dStack_6d0;
      dVar97 = (double)local_5b8._0_8_ * dVar90;
      dVar93 = (double)local_5b8._8_8_ * local_438;
      dVar73 = dVar73 * (double)local_548._0_8_;
      dVar91 = dVar93 * dVar46 - dVar97 * dVar96;
      dVar44 = dVar73 * dVar96 - dVar93 * (double)local_558._0_8_;
      dVar107 = dVar97 * (double)local_558._0_8_ - dVar46 * dVar73;
      dVar44 = dVar44 + dVar44;
      dVar107 = dVar107 + dVar107;
      dVar91 = dVar91 + dVar91;
      dVar97 = (double)local_6c8._0_8_ +
               (dVar91 * dVar96 - dVar107 * (double)local_558._0_8_) +
               (double)local_558._8_8_ * dVar44 + dVar97;
      dVar93 = (double)local_6c8._8_8_ +
               ((double)local_558._0_8_ * dVar44 - dVar46 * dVar91) +
               (double)local_558._8_8_ * dVar107 + dVar93;
      dVar73 = local_6d8 +
               (double)local_558._8_8_ * dVar91 + dVar73 + (dVar107 * dVar46 - dVar44 * dVar96);
      FUN_1415874d8((longlong)iVar8 * 0x58 + *plVar1,&local_178);
      uStack_170._0_4_ = (float)dVar73;
      local_6c8._8_8_ = dVar93;
      local_6c8._0_8_ = dVar97;
      local_178 = (uint *)CONCAT44((float)dVar93,(float)dVar97);
      iVar8 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar8 + 1U;
      uVar2 = local_5c8._0_8_;
      uVar5 = local_418._0_8_;
      uVar4 = local_418._8_8_;
      local_6d8 = dVar73;
      dStack_6d0 = dVar47;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
        FUN_140d35044(plVar1,iVar8);
      }
      dVar90 = dVar90 * (double)uVar5;
      dVar89 = dVar89 * (double)uVar4;
      dVar47 = local_598 * (double)local_728._0_8_;
      dVar73 = dVar89 * dVar94 - dVar90 * dVar45;
      dVar46 = dVar47 * dVar45 - dVar89 * (double)local_6f8._0_8_;
      dVar91 = dVar90 * (double)local_6f8._0_8_ - dVar94 * dVar47;
      dVar46 = dVar46 + dVar46;
      dVar91 = dVar91 + dVar91;
      dVar73 = dVar73 + dVar73;
      auVar99._0_8_ =
           (double)local_6e8._0_8_ +
           (dVar73 * dVar45 - dVar91 * (double)local_6f8._0_8_) +
           (double)local_6f8._8_8_ * dVar46 + dVar90;
      auVar99._8_8_ =
           (double)local_6e8._8_8_ +
           ((double)local_6f8._0_8_ * dVar46 - dVar94 * dVar73) +
           (double)local_6f8._8_8_ * dVar91 + dVar89;
      dVar47 = (double)local_668._0_8_ +
               (double)local_6f8._8_8_ * dVar73 + dVar47 + (dVar91 * dVar94 - dVar46 * dVar45);
      FUN_1415874d8((longlong)iVar8 * 0x58 + *plVar1,&local_178);
      local_178 = (uint *)CONCAT44((float)auVar99._8_8_,(float)auVar99._0_8_);
      uStack_170 = (undefined8 *)CONCAT44(uStack_170._4_4_,(float)dVar47);
      iVar8 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar8 + 1U;
      uVar5 = local_578._0_8_;
      uVar4 = local_578._8_8_;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
        FUN_140d35044(plVar1,iVar8);
      }
      FUN_1415874d8((longlong)iVar8 * 0x58 + *plVar1,&local_178);
      dVar91 = dStack_600;
      dVar89 = local_608;
      dVar46 = dStack_610;
      dVar73 = local_618;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      dVar96 = local_628;
      local_6e8._0_4_ = uVar10 + 4;
      *(uint *)(plVar1[2] + (longlong)iVar8 * 4) = uVar10 + 4;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      uVar48 = local_5f8._0_8_;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(uint *)(plVar1[2] + (longlong)iVar8 * 4) = uVar10;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      iVar16 = uVar10 + 3;
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar16;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(undefined4 *)(plVar1[2] + (longlong)iVar8 * 4) = local_6e8._0_4_;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar16;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      iVar25 = uVar10 + 7;
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar25;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(uint *)(plVar1[2] + (longlong)iVar8 * 4) = uVar10;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      local_6f8._0_4_ = uVar10 + 1;
      *(uint *)(plVar1[2] + (longlong)iVar8 * 4) = uVar10 + 1;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      iVar15 = uVar10 + 2;
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar15;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(uint *)(plVar1[2] + (longlong)iVar8 * 4) = uVar10;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar15;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar16;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(undefined4 *)(plVar1[2] + (longlong)iVar8 * 4) = local_6f8._0_4_;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      local_688 = dVar14;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      local_678 = (double)lVar22;
      local_728 = CONCAT88(local_728._8_8_,uVar27);
      iVar19 = uVar10 + 5;
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar19;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      iVar21 = local_728._0_4_ + 6;
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar21;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(undefined4 *)(plVar1[2] + (longlong)iVar8 * 4) = local_6f8._0_4_;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar21;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar15;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar19;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(undefined4 *)(plVar1[2] + (longlong)iVar8 * 4) = local_6e8._0_4_;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar25;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar19;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar25;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar21;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar25;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar16;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar15;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar25;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      pdVar26 = local_568;
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar15;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      plVar23 = local_560;
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar21;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      lVar22 = local_700;
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = local_728._0_4_;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      dVar44 = local_678;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      dVar14 = local_688;
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = iVar19;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(undefined4 *)(plVar1[2] + (longlong)iVar8 * 4) = local_6f8._0_4_;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = local_728._0_4_;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(undefined4 *)(plVar1[2] + (longlong)iVar8 * 4) = local_6e8._0_4_;
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(*local_730 + (longlong)iVar8 * 4) = iVar19;
      if ((longlong)dVar14 < (longlong)*(int *)(lVar22 + 0x38c)) {
        iVar8 = *(int *)(lVar22 + 0x2b0);
        *(uint *)(lVar22 + 0x2b0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2b4) < iVar8 + 1U) {
          FUN_14712028e(local_718,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x2a8);
        lVar24 = (longlong)iVar8 * 0x38;
        *(double *)(lVar11 + lVar24) = dVar60;
        ((double *)(lVar11 + lVar24))[1] = dVar92;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = local_658._0_8_;
        pdVar9 = (double *)(lVar11 + 0x18 + lVar24);
        *pdVar9 = dVar89;
        pdVar9[1] = dVar91;
        *(double *)(lVar11 + 0x28 + lVar24) = dVar96;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x42c80000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2b0);
        *(uint *)(lVar22 + 0x2b0) = iVar8 + 1U;
        uVar48 = local_6b8._0_8_;
        if (*(uint *)(lVar22 + 0x2b4) < iVar8 + 1U) {
          FUN_14712028e(local_718,iVar8);
          uVar48 = local_6b8._0_8_;
        }
        auVar100._8_4_ = SUB84(auVar99._8_8_,0);
        auVar100._12_4_ = (undefined4)((ulonglong)auVar99._8_8_ >> 0x20);
        lVar11 = *(longlong *)(lVar22 + 0x2a8);
        lVar24 = (longlong)iVar8 * 0x38;
        *(double *)(lVar11 + lVar24) = dVar89;
        ((double *)(lVar11 + lVar24))[1] = dVar91;
        *(double *)(lVar11 + 0x10 + lVar24) = dVar96;
        puVar18 = (undefined8 *)(lVar11 + 0x18 + lVar24);
        *puVar18 = local_648._0_8_;
        puVar18[1] = local_648._8_8_;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = uVar48;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x42c80000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2b0);
        *(uint *)(lVar22 + 0x2b0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2b4) < iVar8 + 1U) {
          FUN_14712028e(local_718,iVar8);
          uVar48 = local_6b8._0_8_;
        }
        dVar96 = local_6d8;
        lVar11 = *(longlong *)(lVar22 + 0x2a8);
        lVar24 = (longlong)iVar8 * 0x38;
        *(undefined8 *)(lVar11 + lVar24) = local_648._0_8_;
        ((undefined8 *)(lVar11 + lVar24))[1] = local_648._8_8_;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = uVar48;
        puVar18 = (undefined8 *)(lVar11 + 0x18 + lVar24);
        *puVar18 = local_6c8._0_8_;
        puVar18[1] = local_6c8._8_8_;
        *(double *)(lVar11 + 0x28 + lVar24) = local_6d8;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x42c80000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2b0);
        *(uint *)(lVar22 + 0x2b0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2b4) < iVar8 + 1U) {
          FUN_14712028e(local_718,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x2a8);
        lVar24 = (longlong)iVar8 * 0x38;
        *(undefined8 *)(lVar11 + lVar24) = local_6c8._0_8_;
        ((undefined8 *)(lVar11 + lVar24))[1] = local_6c8._8_8_;
        *(double *)(lVar11 + 0x10 + lVar24) = dVar96;
        pdVar9 = (double *)(lVar11 + 0x18 + lVar24);
        *pdVar9 = dVar60;
        pdVar9[1] = dVar92;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = local_658._0_8_;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x42c80000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2b0);
        *(uint *)(lVar22 + 0x2b0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2b4) < iVar8 + 1U) {
          FUN_14712028e(local_718,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x2a8);
        lVar24 = (longlong)iVar8 * 0x38;
        *(undefined1 (*) [16])(lVar11 + lVar24) = local_698;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = local_6a8._0_8_;
        pdVar9 = (double *)(lVar11 + 0x18 + lVar24);
        *pdVar9 = (double)uVar5;
        pdVar9[1] = (double)uVar4;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = uVar2;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x42c80000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2b0);
        *(uint *)(lVar22 + 0x2b0) = iVar8 + 1U;
        auVar100._0_8_ = auVar99._0_8_;
        if (*(uint *)(lVar22 + 0x2b4) < iVar8 + 1U) {
          FUN_14712028e(local_718,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x2a8);
        lVar24 = (longlong)iVar8 * 0x38;
        *(double *)(lVar11 + lVar24) = (double)uVar5;
        ((double *)(lVar11 + lVar24))[1] = (double)uVar4;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = uVar2;
        pdVar9 = (double *)(lVar11 + 0x18 + lVar24);
        *pdVar9 = dVar73;
        pdVar9[1] = dVar46;
        uVar48 = local_5f8._0_8_;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = local_5f8._0_8_;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x42c80000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2b0);
        *(uint *)(lVar22 + 0x2b0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2b4) < iVar8 + 1U) {
          FUN_14712028e(local_718,iVar8);
        }
        dVar96 = local_628;
        lVar11 = *(longlong *)(lVar22 + 0x2a8);
        lVar24 = (longlong)iVar8 * 0x38;
        *(double *)(lVar11 + lVar24) = dVar73;
        ((double *)(lVar11 + lVar24))[1] = dVar46;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = uVar48;
        *(undefined1 (*) [16])(lVar11 + 0x18 + lVar24) = auVar100;
        *(double *)(lVar11 + 0x28 + lVar24) = dVar47;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x42c80000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2b0);
        *(uint *)(lVar22 + 0x2b0) = iVar8 + 1U;
        uVar48 = local_6a8._0_8_;
        if (*(uint *)(lVar22 + 0x2b4) < iVar8 + 1U) {
          FUN_14712028e(local_718,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x2a8);
        lVar24 = (longlong)iVar8 * 0x38;
        *(undefined1 (*) [16])(lVar11 + lVar24) = auVar100;
        *(double *)(lVar11 + 0x10 + lVar24) = dVar47;
        *(undefined1 (*) [16])(lVar11 + 0x18 + lVar24) = local_698;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = uVar48;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x42c80000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2b0);
        *(uint *)(lVar22 + 0x2b0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2b4) < iVar8 + 1U) {
          FUN_14712028e(local_718,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x2a8);
        lVar24 = (longlong)iVar8 * 0x38;
        *(double *)(lVar11 + lVar24) = dVar60;
        ((double *)(lVar11 + lVar24))[1] = dVar92;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = local_658._0_8_;
        *(undefined1 (*) [16])(lVar11 + 0x18 + lVar24) = local_698;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = uVar48;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x42c80000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2b0);
        *(uint *)(lVar22 + 0x2b0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2b4) < iVar8 + 1U) {
          FUN_14712028e(local_718,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x2a8);
        lVar24 = (longlong)iVar8 * 0x38;
        *(undefined8 *)(lVar11 + lVar24) = local_6c8._0_8_;
        ((undefined8 *)(lVar11 + lVar24))[1] = local_6c8._8_8_;
        *(double *)(lVar11 + 0x10 + lVar24) = local_6d8;
        *(undefined1 (*) [16])(lVar11 + 0x18 + lVar24) = auVar100;
        *(double *)(lVar11 + 0x28 + lVar24) = dVar47;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x42c80000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2b0);
        *(uint *)(lVar22 + 0x2b0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2b4) < iVar8 + 1U) {
          FUN_14712028e(local_718,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x2a8);
        lVar24 = (longlong)iVar8 * 0x38;
        *(undefined8 *)(lVar11 + lVar24) = local_648._0_8_;
        ((undefined8 *)(lVar11 + lVar24))[1] = local_648._8_8_;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = local_6b8._0_8_;
        pdVar9 = (double *)(lVar11 + 0x18 + lVar24);
        *pdVar9 = dVar73;
        pdVar9[1] = dVar46;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = local_5f8._0_8_;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x42c80000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2b0);
        *(uint *)(lVar22 + 0x2b0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2b4) < iVar8 + 1U) {
          FUN_14712028e(local_718,iVar8);
        }
        pdVar9 = (double *)((longlong)iVar8 * 0x38 + *local_718);
        uVar7 = 0x42c80000;
      }
      else {
        iVar8 = *(int *)(lVar22 + 0x2a0);
        *(uint *)(lVar22 + 0x2a0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2a4) < iVar8 + 1U) {
          FUN_141745958(plVar23,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x298);
        lVar24 = (longlong)iVar8 * 0x38;
        *(double *)(lVar11 + lVar24) = dVar60;
        ((double *)(lVar11 + lVar24))[1] = dVar92;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = local_658._0_8_;
        pdVar9 = (double *)(lVar11 + 0x18 + lVar24);
        *pdVar9 = dVar89;
        pdVar9[1] = dVar91;
        *(double *)(lVar11 + 0x28 + lVar24) = dVar96;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x3f800000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2a0);
        *(uint *)(lVar22 + 0x2a0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2a4) < iVar8 + 1U) {
          FUN_141745958(plVar23,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x298);
        lVar24 = (longlong)iVar8 * 0x38;
        *(double *)(lVar11 + lVar24) = dVar89;
        ((double *)(lVar11 + lVar24))[1] = dVar91;
        *(double *)(lVar11 + 0x10 + lVar24) = dVar96;
        puVar18 = (undefined8 *)(lVar11 + 0x18 + lVar24);
        *puVar18 = local_648._0_8_;
        puVar18[1] = local_648._8_8_;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = local_6b8._0_8_;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x3f800000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2a0);
        *(uint *)(lVar22 + 0x2a0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2a4) < iVar8 + 1U) {
          FUN_141745958(plVar23,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x298);
        lVar24 = (longlong)iVar8 * 0x38;
        *(undefined8 *)(lVar11 + lVar24) = local_648._0_8_;
        ((undefined8 *)(lVar11 + lVar24))[1] = local_648._8_8_;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = local_6b8._0_8_;
        puVar18 = (undefined8 *)(lVar11 + 0x18 + lVar24);
        *puVar18 = local_6c8._0_8_;
        puVar18[1] = local_6c8._8_8_;
        *(double *)(lVar11 + 0x28 + lVar24) = local_6d8;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x3f800000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2a0);
        *(uint *)(lVar22 + 0x2a0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2a4) < iVar8 + 1U) {
          FUN_141745958(plVar23,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x298);
        lVar24 = (longlong)iVar8 * 0x38;
        *(undefined8 *)(lVar11 + lVar24) = local_6c8._0_8_;
        ((undefined8 *)(lVar11 + lVar24))[1] = local_6c8._8_8_;
        *(double *)(lVar11 + 0x10 + lVar24) = local_6d8;
        pdVar9 = (double *)(lVar11 + 0x18 + lVar24);
        *pdVar9 = dVar60;
        pdVar9[1] = dVar92;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = local_658._0_8_;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x3f800000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2a0);
        *(uint *)(lVar22 + 0x2a0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2a4) < iVar8 + 1U) {
          FUN_141745958(plVar23,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x298);
        lVar24 = (longlong)iVar8 * 0x38;
        *(undefined1 (*) [16])(lVar11 + lVar24) = local_698;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = local_6a8._0_8_;
        pdVar9 = (double *)(lVar11 + 0x18 + lVar24);
        *pdVar9 = (double)uVar5;
        pdVar9[1] = (double)uVar4;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = uVar2;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x3f800000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2a0);
        *(uint *)(lVar22 + 0x2a0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2a4) < iVar8 + 1U) {
          FUN_141745958(plVar23,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x298);
        lVar24 = (longlong)iVar8 * 0x38;
        *(double *)(lVar11 + lVar24) = (double)uVar5;
        ((double *)(lVar11 + lVar24))[1] = (double)uVar4;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = uVar2;
        pdVar9 = (double *)(lVar11 + 0x18 + lVar24);
        *pdVar9 = dVar73;
        pdVar9[1] = dVar46;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = uVar48;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x3f800000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2a0);
        *(uint *)(lVar22 + 0x2a0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2a4) < iVar8 + 1U) {
          FUN_141745958(plVar23,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x298);
        lVar24 = (longlong)iVar8 * 0x38;
        *(double *)(lVar11 + lVar24) = dVar73;
        ((double *)(lVar11 + lVar24))[1] = dVar46;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = uVar48;
        *(undefined1 (*) [16])(lVar11 + 0x18 + lVar24) = auVar99;
        *(double *)(lVar11 + 0x28 + lVar24) = dVar47;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x3f800000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2a0);
        *(uint *)(lVar22 + 0x2a0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2a4) < iVar8 + 1U) {
          FUN_141745958(plVar23,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x298);
        lVar24 = (longlong)iVar8 * 0x38;
        *(undefined1 (*) [16])(lVar11 + lVar24) = auVar99;
        *(double *)(lVar11 + 0x10 + lVar24) = dVar47;
        *(undefined1 (*) [16])(lVar11 + 0x18 + lVar24) = local_698;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = local_6a8._0_8_;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x3f800000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2a0);
        *(uint *)(lVar22 + 0x2a0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2a4) < iVar8 + 1U) {
          FUN_141745958(plVar23,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x298);
        lVar24 = (longlong)iVar8 * 0x38;
        *(double *)(lVar11 + lVar24) = dVar60;
        ((double *)(lVar11 + lVar24))[1] = dVar92;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = local_658._0_8_;
        *(undefined1 (*) [16])(lVar11 + 0x18 + lVar24) = local_698;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = local_6a8._0_8_;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x3f800000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2a0);
        *(uint *)(lVar22 + 0x2a0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2a4) < iVar8 + 1U) {
          FUN_141745958(plVar23,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x298);
        lVar24 = (longlong)iVar8 * 0x38;
        *(undefined8 *)(lVar11 + lVar24) = local_6c8._0_8_;
        ((undefined8 *)(lVar11 + lVar24))[1] = local_6c8._8_8_;
        *(double *)(lVar11 + 0x10 + lVar24) = local_6d8;
        *(undefined1 (*) [16])(lVar11 + 0x18 + lVar24) = auVar99;
        *(double *)(lVar11 + 0x28 + lVar24) = dVar47;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x3f800000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2a0);
        *(uint *)(lVar22 + 0x2a0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2a4) < iVar8 + 1U) {
          FUN_141745958(plVar23,iVar8);
        }
        lVar11 = *(longlong *)(lVar22 + 0x298);
        lVar24 = (longlong)iVar8 * 0x38;
        *(undefined8 *)(lVar11 + lVar24) = local_648._0_8_;
        ((undefined8 *)(lVar11 + lVar24))[1] = local_648._8_8_;
        *(undefined8 *)(lVar11 + 0x10 + lVar24) = local_6b8._0_8_;
        pdVar9 = (double *)(lVar11 + 0x18 + lVar24);
        *pdVar9 = dVar73;
        pdVar9[1] = dVar46;
        *(undefined8 *)(lVar11 + 0x28 + lVar24) = uVar48;
        *(undefined8 *)(lVar11 + 0x30 + lVar24) = 0x3f800000ff000000;
        iVar8 = *(int *)(lVar22 + 0x2a0);
        *(uint *)(lVar22 + 0x2a0) = iVar8 + 1U;
        if (*(uint *)(lVar22 + 0x2a4) < iVar8 + 1U) {
          FUN_141745958(plVar23,iVar8);
        }
        pdVar9 = (double *)((longlong)iVar8 * 0x38 + *plVar23);
        uVar7 = 0x3f800000;
      }
      *pdVar9 = dVar89;
      pdVar9[1] = dVar91;
      pdVar9[2] = dVar96;
      pdVar9[3] = (double)uVar5;
      pdVar9[4] = (double)uVar4;
      pdVar9[5] = (double)uVar2;
      *(undefined4 *)(pdVar9 + 6) = 0xff000000;
      *(undefined4 *)((longlong)pdVar9 + 0x34) = uVar7;
      dVar14 = (double)((longlong)dVar14 + 1);
      lVar22 = (longlong)dVar44 + 0x58;
    } while ((longlong)dVar14 < (longlong)*local_5e0);
  }
  lVar22 = (longlong)*(int *)(local_708 + 0xa8 + local_710);
  if (lVar22 != 0) {
    lVar11 = local_708 + local_710;
    plVar23 = (longlong *)(local_700 + 0x338);
    lVar22 = lVar22 * 0x50;
    lVar24 = *(longlong *)(lVar11 + 0xa0) + 0x28;
    do {
      lVar17 = lVar24;
      uVar7 = FUN_144a7484c(lVar24,&local_178);
      auVar108 = _DAT_149934d80;
      auVar65 = *(undefined1 (*) [16])(lVar11 + 0x50);
      auVar49 = minpd(auVar65,_DAT_149934d80);
      dVar14 = SUB168(*(undefined1 (*) [16])(lVar11 + 0x60),0);
      auVar50 = minpd(*(undefined1 (*) [16])(lVar11 + 0x60),ZEXT816(0x3ff0000000000000));
      auVar58._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar58._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      iVar8 = movmskpd(uVar7,auVar58);
      auVar71._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
      auVar71._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
      uVar10 = movmskpd((int)lVar17,auVar71);
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar46 = *pdVar26;
        dVar89 = pdVar26[1];
        dVar91 = *(double *)(lVar11 + 0x20);
        dVar96 = *(double *)(lVar11 + 0x28);
        dVar92 = *(double *)(lVar11 + 0x30);
        dVar44 = *(double *)(lVar11 + 0x38);
        dVar47 = dVar89 * local_168 * -1.0 +
                 dVar91 * (double)uStack_170 +
                 (double)local_178 * dVar96 * 1.0 + dStack_160 * dVar46;
        dVar73 = dVar46 * local_168 * 1.0 +
                 dVar96 * (double)uStack_170 +
                 (double)local_178 * dVar91 * -1.0 + dStack_160 * dVar89;
        auVar95._0_8_ =
             dVar96 * local_168 * 1.0 +
             (((double)local_178 * dVar89 * 1.0 + dStack_160 * dVar91) - (double)uStack_170 * dVar46
             );
        auVar95._8_8_ =
             dVar91 * local_168 * -1.0 +
             (((double)local_178 * dVar46 * -1.0 + dStack_160 * dVar96) -
             (double)uStack_170 * dVar89);
        dVar96 = *(double *)(lVar11 + 0x40) * 1.0;
        dVar60 = *(double *)(lVar11 + 0x48) * 0.0;
        dVar46 = dVar44 * (double)local_178 - (double)uStack_170 * dVar92;
        dVar89 = dVar96 * (double)uStack_170 - local_168 * dVar44;
        dVar91 = dVar92 * local_168 - (double)local_178 * dVar96;
        dVar107 = dVar60 * dStack_160 - dStack_160 * dVar60;
        dVar89 = dVar89 + dVar89;
        dVar91 = dVar91 + dVar91;
        dVar46 = dVar46 + dVar46;
        dVar107 = dVar107 + dVar107;
        local_6d8 = *(double *)(lVar24 + -0x18) +
                    (dVar46 * (double)uStack_170 - local_168 * dVar91) +
                    dStack_160 * dVar89 + dVar92;
        dStack_6d0 = *(double *)(lVar24 + -0x10) +
                     (dVar89 * local_168 - dVar46 * (double)local_178) +
                     dStack_160 * dVar91 + dVar44;
        local_728._8_8_ =
             (dVar107 * dStack_160 - dVar107 * dStack_160) + dStack_160 * dVar107 + dVar60 + 0.0;
        local_728._0_8_ =
             *(double *)(lVar24 + -8) +
             (dVar91 * (double)local_178 - (double)uStack_170 * dVar89) +
             dStack_160 * dVar46 + dVar96;
      }
      else {
        dVar47 = (double)uStack_170 + (double)uStack_170;
        dVar73 = local_168 + local_168;
        dVar46 = (double)local_178 * ((double)local_178 + (double)local_178);
        local_1f8 = (double)DAT_149934d80 - (local_168 * dVar73 + (double)uStack_170 * dVar47);
        dStack_1d0 = DAT_149934d80._8_8_ - (local_168 * dVar73 + dVar46);
        local_1a8 = 1.0 - (dVar46 + (double)uStack_170 * dVar47);
        dVar46 = ((double)local_178 + (double)local_178) * dStack_160;
        dStack_1f0 = dVar47 * (double)local_178 + dVar73 * dStack_160;
        local_1c8 = dVar73 * (double)uStack_170 + dVar46;
        local_1d8 = dVar47 * (double)local_178 - dVar73 * dStack_160;
        local_1e8 = (double)local_178 * dVar73 - dVar47 * dStack_160;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        local_1b8._8_8_ = dVar73 * (double)uStack_170 - dVar46;
        local_1b8._0_8_ = dVar47 * dStack_160 + (double)local_178 * dVar73;
        uStack_1a0 = 0;
        local_188._8_8_ = 0x3ff0000000000000;
        local_188._0_8_ = *(double *)(lVar24 + -8);
        dVar73 = *pdVar26;
        dVar46 = pdVar26[1];
        dVar47 = *(double *)(lVar11 + 0x20);
        dVar92 = dVar46 + dVar46;
        dVar89 = dVar47 + dVar47;
        dVar91 = dVar73 * (dVar73 + dVar73);
        local_268 = *(double *)*(undefined1 (*) [16])(lVar11 + 0x50);
        local_258 = *(double *)(lVar11 + 0x58);
        local_278 = ((double)DAT_149934d80 - (dVar47 * dVar89 + dVar46 * dVar92)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar47 * dVar89 + dVar91)) * local_258;
        dStack_230 = *(double *)(lVar11 + 0x60);
        local_228 = (1.0 - (dVar91 + dVar46 * dVar92)) * dStack_230;
        dVar47 = *(double *)(lVar11 + 0x28);
        dVar91 = dVar89 * dVar47;
        dVar96 = (dVar73 + dVar73) * *(double *)(lVar11 + 0x28);
        dVar47 = dVar92 * dVar47;
        dStack_270 = (dVar92 * dVar73 + dVar91) * local_268;
        local_248 = (dVar89 * dVar46 + dVar96) * local_258;
        local_238 = (dVar47 + *pdVar26 * dVar89) * dStack_230;
        local_268 = (*pdVar26 * dVar89 - dVar47) * local_268;
        local_258 = (dVar92 * dVar73 - dVar91) * local_258;
        dStack_230 = (dVar89 * dVar46 - dVar96) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = *(undefined8 *)(lVar11 + 0x30);
        uStack_210 = *(undefined8 *)(lVar11 + 0x38);
        local_208 = *(undefined8 *)(lVar11 + 0x40);
        uStack_200 = 0x3ff0000000000000;
        local_198 = *(double *)(lVar24 + -0x18);
        dStack_190 = *(double *)(lVar24 + -0x10);
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar42._8_8_ = -(ulonglong)(0.0 <= auVar65._8_8_);
        auVar42._0_8_ = -(ulonglong)(0.0 <= auVar65._0_8_);
        auVar49 = blendvpd(_DAT_149936790,auVar108,auVar42);
        uVar27 = -(ulonglong)(0.0 <= dVar14 * 1.0);
        dVar47 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
        dVar73 = auVar49._0_8_;
        local_168 = local_168 * dVar73;
        uStack_170 = (undefined8 *)((double)uStack_170 * dVar73);
        local_178 = (uint *)((double)local_178 * dVar73);
        dVar73 = auVar49._8_8_;
        local_148 = local_148 * dVar73;
        local_150 = local_150 * dVar73;
        local_158 = dVar73 * local_158;
        local_128 = local_128 * dVar47;
        local_130 = local_130 * dVar47;
        local_138 = dVar47 * local_138;
        FUN_14481fd10(&local_388,&local_178);
        dVar47 = local_378 * local_378 + local_388 * local_388;
        dVar73 = dStack_370 * dStack_370 + dStack_380 * dStack_380;
        auVar72._0_8_ = dVar47 + dVar73;
        auVar72._8_8_ = dVar47 + dVar73;
        auVar43._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar72._8_8_);
        auVar43._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar72._0_8_);
        auVar49 = sqrtpd(auVar72,auVar72);
        auVar108 = divpd(auVar108,auVar49);
        auVar88._0_8_ = auVar108._0_8_ * local_378;
        auVar88._8_8_ = auVar108._8_8_ * dStack_370;
        dVar47 = (double)((ulonglong)(local_388 * auVar108._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar72._0_8_));
        dVar73 = (double)((ulonglong)(dStack_380 * auVar108._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar72._8_8_));
        auVar95 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar88,auVar43);
        local_728._8_8_ = 0;
        local_728._0_8_ = local_108;
        local_6d8 = local_118;
        dStack_6d0 = dStack_110;
      }
      dVar46 = *(double *)(lVar24 + 0x20);
      local_6e8._8_8_ = 0;
      local_6e8._0_8_ = dVar46;
      dVar103 = (double)((ulonglong)dVar46 ^ DAT_149931e80) * dVar14 * 1.0;
      dVar89 = auVar65._0_8_ * 0.0;
      dVar91 = auVar65._8_8_ * 0.0;
      dVar45 = auVar95._0_8_;
      local_688 = auVar95._8_8_;
      dVar14 = dVar91 * dVar47 - dVar89 * dVar73;
      dVar92 = dVar103 * dVar73 - dVar91 * dVar45;
      dVar97 = dVar89 * dVar45 - dVar47 * dVar103;
      dVar92 = dVar92 + dVar92;
      dVar97 = dVar97 + dVar97;
      dVar14 = dVar14 + dVar14;
      local_6a8._8_8_ = local_688;
      local_6a8._0_8_ = local_688;
      dStack_670 = local_688;
      local_678 = local_688;
      local_668._8_8_ = local_688;
      local_668._0_8_ = local_688;
      local_638._8_8_ = local_688;
      local_638._0_8_ = local_688;
      local_6b8._8_8_ = local_688;
      local_6b8._0_8_ = local_688;
      local_6d8 = (dVar14 * dVar73 - dVar97 * dVar45) + local_688 * dVar92 + dVar89 + local_6d8;
      dStack_6d0 = (dVar45 * dVar92 - dVar47 * dVar14) + local_688 * dVar97 + dVar91 + dStack_6d0;
      dVar61 = dVar45 * 0.0 - dVar47;
      dVar91 = dVar73 + dVar45 * -0.0;
      dVar61 = dVar61 + dVar61;
      dVar91 = dVar91 + dVar91;
      dVar44 = local_688 * dVar91;
      dVar89 = dVar47 * 0.0 + dVar73 * -0.0;
      dVar89 = dVar89 + dVar89;
      local_658._8_4_ = SUB84(dVar73,0);
      local_658._0_8_ = (dVar47 * dVar61 - dVar91 * dVar73) + local_688 * dVar89 + 1.0;
      local_658._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
      local_6f8._8_8_ = local_688;
      local_6f8._0_8_ = (dVar45 * dVar91 - dVar89 * dVar47) + local_688 * dVar61 + 0.0;
      dVar104 = dVar45 * 0.0 + dVar47 * -0.0;
      dVar91 = dVar73 * 0.0 - dVar45;
      dVar104 = dVar104 + dVar104;
      dVar91 = dVar91 + dVar91;
      dVar60 = local_688 * dVar91;
      dVar105 = dVar73 * -0.0 + dVar47;
      dVar105 = dVar105 + dVar105;
      dVar96 = local_688 * dVar105;
      dVar98 = local_688 * dVar104;
      dVar102 = dVar73 * 0.0 + dVar45 * -0.0;
      dVar94 = dVar47 * 0.0 - dVar73;
      dVar106 = dVar47 * -0.0 + dVar45;
      dVar94 = dVar94 + dVar94;
      dVar106 = dVar106 + dVar106;
      dVar102 = dVar102 + dVar102;
      dVar90 = local_688 * dVar94;
      dVar107 = local_688 * dVar102;
      dVar93 = local_688 * dVar106;
      dVar92 = local_688 * dVar14 + dVar103 + (dVar97 * dVar47 - dVar92 * dVar73) +
               (double)local_728._0_8_;
      dVar14 = *(double *)(lVar24 + 0x18);
      iVar8 = *(int *)(local_700 + 0x340);
      *(uint *)(local_700 + 0x340) = iVar8 + 1U;
      dStack_680 = local_688;
      if (*(uint *)(local_700 + 0x344) < iVar8 + 1U) {
        FUN_14712031e(plVar23,iVar8);
      }
      local_178 = (uint *)CONCAT44((&DAT_14c758c60)[param_6[1]],(&DAT_14c758c60)[param_6[2]]);
      uStack_170 = (undefined8 *)
                   CONCAT44((float)param_6[3] * 0.003921569,(&DAT_14c758c60)[*param_6]);
      lVar17 = *plVar23 + 0x20 + (longlong)iVar8 * 0x78;
      *(float *)(lVar17 + -0x20) = (float)(dVar14 + 0.10000000149011612);
      *(double *)(lVar17 + -0x18) = local_6d8;
      *(double *)(lVar17 + -0x10) = dStack_6d0;
      *(double *)(lVar17 + -8) = dVar92;
      FUN_1411ab38a(&local_178,lVar17);
      *(float *)(lVar17 + 4) = (float)(dVar46 + 0.10000000149011612);
      *(double *)(lVar17 + 8) = (dVar73 * dVar94 - dVar106 * dVar45) + dVar107 + 1.0;
      *(double *)(lVar17 + 0x10) = (dVar45 * dVar102 - dVar94 * dVar47) + dVar93 + 0.0;
      *(double *)(lVar17 + 0x18) = (dVar47 * dVar106 - dVar102 * dVar73) + dVar90 + 0.0;
      *(double *)(lVar17 + 0x20) = (dVar73 * dVar105 - dVar104 * dVar45) + dVar60 + 0.0;
      *(double *)(lVar17 + 0x28) = (dVar45 * dVar91 - dVar105 * dVar47) + dVar98 + 1.0;
      *(double *)(lVar17 + 0x30) = (dVar47 * dVar104 - dVar91 * dVar73) + dVar96 + 0.0;
      *(double *)(lVar17 + 0x38) = (dVar73 * dVar89 - dVar61 * dVar45) + dVar44 + 0.0;
      *(undefined8 *)(lVar17 + 0x40) = local_6f8._0_8_;
      *(undefined8 *)(lVar17 + 0x48) = local_658._0_8_;
      *(undefined4 *)(lVar17 + 0x50) = 3;
      lVar24 = lVar24 + 0x50;
      lVar22 = lVar22 + -0x50;
    } while (lVar22 != 0);
  }
  lVar22 = (longlong)*(int *)(local_708 + 0x88 + local_710);
  if (lVar22 != 0) {
    lVar11 = *(longlong *)(local_708 + local_710 + 0x80);
    plVar23 = (longlong *)(local_700 + 0x2f8);
    lVar24 = 0;
    do {
      dVar14 = *(double *)(lVar11 + 0x28 + lVar24);
      iVar8 = *(int *)(local_700 + 0x300);
      *(uint *)(local_700 + 0x300) = iVar8 + 1U;
      if (*(uint *)(local_700 + 0x304) < iVar8 + 1U) {
        FUN_141745aca(plVar23,iVar8);
      }
      local_178 = (uint *)CONCAT44((&DAT_14c758c60)[param_6[1]],(&DAT_14c758c60)[param_6[2]]);
      puVar18 = (undefined8 *)(lVar11 + 0x10 + lVar24);
      uStack_170 = (undefined8 *)
                   CONCAT44((float)param_6[3] * 0.003921569,(&DAT_14c758c60)[*param_6]);
      lVar17 = *plVar23 + 0x20 + (longlong)iVar8 * 0x28;
      *(float *)(lVar17 + -0x20) = (float)(dVar14 + 1.0);
      uVar2 = puVar18[1];
      *(undefined8 *)(lVar17 + -0x18) = *puVar18;
      *(undefined8 *)(lVar17 + -0x10) = uVar2;
      *(undefined8 *)(lVar17 + -8) = puVar18[2];
      FUN_1411ab38a(&local_178,lVar17);
      *(undefined4 *)(lVar17 + 4) = 3;
      lVar24 = lVar24 + 0x30;
    } while (lVar22 * 0x30 != lVar24);
  }
  lVar22 = (longlong)*(int *)(local_708 + 0xb8 + local_710);
  if (lVar22 != 0) {
    dVar14 = *(double *)(local_708 + 0xb0 + local_710);
    local_628 = (double)(lVar22 * 0x60 + (longlong)dVar14);
    local_698._0_8_ = local_700 + 0x298;
    plVar23 = local_730;
    do {
      local_1f8 = 0.0;
      dStack_1f0 = 0.0;
      FUN_1404190d2(*(undefined8 *)((longlong)dVar14 + 0x10),
                    *(undefined4 *)((longlong)dVar14 + 0x18));
      dVar73 = *(double *)*(undefined1 (*) [16])((longlong)dVar14 + 0x40);
      dVar46 = *(double *)*(undefined1 (*) [16])((longlong)dVar14 + 0x48);
      auVar65 = *(undefined1 (*) [16])((longlong)dVar14 + 0x40);
      dVar89 = *(double *)*(undefined1 (*) [16])((longlong)dVar14 + 0x50);
      local_658 = *(undefined1 (*) [16])((longlong)dVar14 + 0x48);
      local_6e8._8_8_ = *(undefined8 *)((longlong)dVar14 + 0x58);
      auVar108 = *(undefined1 (*) [16])((longlong)dVar14 + 0x50);
      dVar47 = *(double *)((longlong)dVar14 + 0x30);
      dVar91 = *(double *)*(undefined1 (*) [16])((longlong)dVar14 + 0x20);
      dVar96 = *(double *)((longlong)dVar14 + 0x28);
      auVar49 = *(undefined1 (*) [16])((longlong)dVar14 + 0x20);
      iVar8 = *(int *)((longlong)dVar14 + 0x18);
      local_6e8._0_8_ = local_6e8._8_8_;
      local_6f8._8_8_ = local_6e8._8_8_;
      local_6f8._0_8_ = dVar73;
      if ((longlong)iVar8 < 1) {
        dVar73 = 1.0 / (double)iVar8;
        dVar44 = DAT_14c8464e0 * dVar73;
        dVar92 = DAT_14c8464e8 * dVar73;
        iVar8 = (int)plVar1[1];
        local_728._0_8_ = DAT_14c8464f0 * dVar73;
      }
      else {
        lVar22 = *(longlong *)((longlong)dVar14 + 0x10);
        lVar11 = 0;
        dVar44 = DAT_14c8464e0;
        dVar92 = DAT_14c8464e8;
        dVar60 = DAT_14c8464f0;
        do {
          dVar44 = dVar44 + *(double *)(lVar22 + lVar11);
          dVar92 = dVar92 + *(double *)(lVar22 + 8 + lVar11);
          dVar60 = dVar60 + *(double *)(lVar22 + 0x10 + lVar11);
          lVar11 = lVar11 + 0x18;
        } while ((longlong)iVar8 * 0x18 != lVar11);
        dVar107 = 1.0 / (double)iVar8;
        dVar44 = dVar44 * dVar107;
        dVar92 = dVar92 * dVar107;
        local_728._0_8_ = dVar107 * dVar60;
        iVar8 = (int)plVar1[1];
        lVar11 = 0x10;
        lVar22 = 0;
        do {
          lVar24 = *(longlong *)((longlong)dVar14 + 0x10);
          dVar97 = *(double *)(lVar24 + lVar11) - (double)local_728._0_8_;
          dVar60 = *(double *)(lVar24 + -0x10 + lVar11);
          dVar107 = *(double *)(lVar24 + -8 + lVar11);
          dVar93 = dVar107 - dVar92;
          dVar90 = dVar60 - dVar44;
          dVar94 = dVar97 * dVar97 + dVar90 * dVar90 + dVar93 * dVar93;
          if (((dVar94 != 1.0) || (dVar45 = dVar97, dVar61 = dVar90, dVar105 = dVar93, NAN(dVar94)))
             && (dVar45 = DAT_14c8464f0, dVar61 = DAT_14c8464e0, dVar105 = DAT_14c8464e8,
                9.99999993922529e-09 <= dVar94)) {
            dVar94 = 1.0 / SQRT(dVar94);
            dVar45 = dVar97 * dVar94;
            dVar61 = dVar90 * dVar94;
            dVar105 = dVar93 * dVar94;
          }
          dVar45 = *(double *)(lVar24 + lVar11) + dVar45;
          dVar107 = dVar107 + dVar105;
          dVar60 = dVar60 + dVar61;
          dVar97 = dVar107 * dVar73 - dVar46 * dVar60;
          dVar90 = dVar45 * dVar46 - dVar89 * dVar107;
          dVar93 = dVar60 * dVar89 - dVar45 * local_6f8._0_8_;
          dVar90 = dVar90 + dVar90;
          dVar93 = dVar93 + dVar93;
          dVar97 = dVar97 + dVar97;
          local_278 = (double)CONCAT44((float)((dVar89 * dVar90 - local_6f8._0_8_ * dVar97) +
                                               local_6e8._8_8_ * dVar93 + dVar107 + dVar96),
                                       (float)((dVar97 * dVar46 - dVar93 * dVar89) +
                                               local_6e8._0_8_ * dVar90 + dVar60 + dVar91));
          dStack_270 = (double)CONCAT44(dStack_270._4_4_,
                                        (float)(dVar97 * local_6e8._0_8_ + dVar45 +
                                                (dVar93 * dVar73 - dVar90 * dVar46) + dVar47));
          FUN_1415874d8(&local_178,&local_278);
          iVar16 = (int)plVar1[1];
          *(uint *)(plVar1 + 1) = iVar16 + 1U;
          if (*(uint *)((longlong)plVar1 + 0xc) < iVar16 + 1U) {
            FUN_140d35044(plVar1,iVar16);
          }
          puVar18 = &local_178;
          puVar20 = (undefined4 *)((longlong)iVar16 * 0x58 + *plVar1);
          for (lVar24 = 0x16; lVar24 != 0; lVar24 = lVar24 + -1) {
            *puVar20 = *(undefined4 *)puVar18;
            puVar18 = (undefined8 *)((longlong)puVar18 + 4);
            puVar20 = puVar20 + 1;
          }
          lVar22 = lVar22 + 1;
          lVar11 = lVar11 + 0x18;
          plVar23 = local_730;
        } while (lVar22 < *(int *)((longlong)dVar14 + 0x18));
      }
      if (0 < dStack_1f0._0_4_) {
        lVar22 = 0;
        do {
          iVar16 = *(int *)((longlong)local_1f8 + lVar22 * 4);
          iVar25 = (int)plVar1[3];
          *(uint *)(plVar1 + 3) = iVar25 + 1U;
          if (*(uint *)((longlong)plVar1 + 0x1c) < iVar25 + 1U) {
            FUN_1447808da(plVar23,iVar25);
          }
          lVar11 = local_700;
          *(int *)(*plVar23 + (longlong)iVar25 * 4) = iVar16 + iVar8;
          lVar22 = lVar22 + 1;
        } while (lVar22 < dStack_1f0._0_4_);
        uVar2 = local_698._0_8_;
        if (0 < dStack_1f0._0_4_) {
          iVar8 = dStack_1f0._0_4_ + -1;
          lVar22 = 0;
          local_648._0_8_ = dVar47;
          local_6a8._0_8_ = dVar92;
          local_6c8 = auVar49;
          local_6b8 = auVar108;
          local_688 = dVar44;
          local_668 = auVar65;
          do {
            lVar24 = *(longlong *)((longlong)dVar14 + 0x10);
            lVar17 = (longlong)*(int *)((longlong)local_1f8 + lVar22 * 4);
            local_6d8 = *(double *)(lVar24 + 0x10 + lVar17 * 0x18);
            dStack_6d0 = 0.0;
            dVar91 = local_6d8 - (double)local_728._0_8_;
            dVar47 = *(double *)(lVar24 + lVar17 * 0x18);
            dVar73 = *(double *)(lVar24 + 8 + lVar17 * 0x18);
            dVar92 = dVar73 - dVar92;
            dVar89 = dVar47 - local_688;
            dVar46 = dVar91 * dVar91 + dVar89 * dVar89 + dVar92 * dVar92;
            if (((dVar46 != 1.0) || (dVar96 = dVar92, dVar44 = dVar91, dVar60 = dVar89, NAN(dVar46))
                ) && (dVar96 = DAT_14c8464e8, dVar44 = DAT_14c8464f0, dVar60 = DAT_14c8464e0,
                     9.99999993922529e-09 <= dVar46)) {
              dVar46 = 1.0 / SQRT(dVar46);
              dVar96 = dVar92 * dVar46;
              dVar44 = dVar91 * dVar46;
              dVar60 = dVar89 * dVar46;
            }
            lVar17 = (longlong)*(int *)((longlong)local_1f8 + (longlong)iVar8 * 4);
            dVar46 = *(double *)(lVar24 + 0x10 + lVar17 * 0x18);
            dVar90 = dVar46 - (double)local_728._0_8_;
            dVar89 = *(double *)(lVar24 + lVar17 * 0x18);
            dVar91 = *(double *)(lVar24 + 8 + lVar17 * 0x18);
            dVar97 = dVar91 - (double)local_6a8._0_8_;
            dVar92 = dVar89 - local_688;
            dVar107 = dVar90 * dVar90 + dVar92 * dVar92 + dVar97 * dVar97;
            if (((dVar107 != 1.0) ||
                (dVar94 = dVar97, dVar45 = dVar90, dVar93 = dVar92, NAN(dVar107))) &&
               (dVar94 = DAT_14c8464e8, dVar45 = DAT_14c8464f0, dVar93 = DAT_14c8464e0,
               9.99999993922529e-09 <= dVar107)) {
              dVar107 = 1.0 / SQRT(dVar107);
              dVar94 = dVar97 * dVar107;
              dVar45 = dVar90 * dVar107;
              dVar93 = dVar92 * dVar107;
            }
            local_638._0_8_ = dVar44;
            local_678 = dVar60;
            iVar8 = *(int *)(lVar11 + 0x2a0);
            *(uint *)(lVar11 + 0x2a0) = iVar8 + 1U;
            if (*(uint *)(lVar11 + 0x2a4) < iVar8 + 1U) {
              FUN_141745958(uVar2,iVar8);
            }
            dVar46 = dVar46 + dVar45;
            dVar91 = dVar91 + dVar94;
            dVar89 = dVar89 + dVar93;
            dVar92 = dVar91 * (double)local_668._0_8_ - (double)local_658._0_8_ * dVar89;
            dVar107 = dVar46 * (double)local_668._8_8_ - (double)local_658._8_8_ * dVar91;
            dVar44 = dVar89 * (double)local_6b8._0_8_ - dVar46 * (double)local_6f8._0_8_;
            dVar107 = dVar107 + dVar107;
            dVar44 = dVar44 + dVar44;
            dVar92 = dVar92 + dVar92;
            dVar97 = local_6d8 + (double)local_638._0_8_;
            dVar73 = dVar73 + dVar96;
            dVar47 = dVar47 + local_678;
            dVar96 = dVar73 * (double)local_668._0_8_ - (double)local_658._0_8_ * dVar47;
            dVar90 = dVar97 * (double)local_668._8_8_ - (double)local_658._8_8_ * dVar73;
            dVar60 = dVar47 * (double)local_6b8._0_8_ - dVar97 * (double)local_6f8._0_8_;
            dVar90 = dVar90 + dVar90;
            dVar60 = dVar60 + dVar60;
            dVar96 = dVar96 + dVar96;
            lVar24 = *(longlong *)uVar2;
            lVar17 = (longlong)iVar8 * 0x38;
            *(double *)(lVar24 + lVar17) =
                 (dVar96 * (double)local_668._8_8_ - dVar60 * (double)local_658._8_8_) +
                 (double)local_6e8._0_8_ * dVar90 + dVar47 + (double)local_6c8._0_8_;
            ((double *)(lVar24 + lVar17))[1] =
                 ((double)local_6b8._0_8_ * dVar90 - (double)local_6f8._0_8_ * dVar96) +
                 (double)local_6e8._8_8_ * dVar60 + dVar73 + (double)local_6c8._8_8_;
            *(double *)(lVar24 + 0x10 + lVar17) =
                 dVar96 * (double)local_6e8._0_8_ + dVar97 +
                 (dVar60 * (double)local_668._0_8_ - dVar90 * (double)local_658._0_8_) +
                 (double)local_648._0_8_;
            auVar59._0_8_ =
                 (dVar92 * (double)local_668._8_8_ - dVar44 * (double)local_658._8_8_) +
                 (double)local_6e8._0_8_ * dVar107 + dVar89 + (double)local_6c8._0_8_;
            auVar59._8_8_ =
                 ((double)local_6b8._0_8_ * dVar107 - (double)local_6f8._0_8_ * dVar92) +
                 (double)local_6e8._8_8_ * dVar44 + dVar91 + (double)local_6c8._8_8_;
            *(undefined1 (*) [16])(lVar24 + 0x18 + lVar17) = auVar59;
            *(double *)(lVar24 + 0x28 + lVar17) =
                 dVar92 * (double)local_6e8._0_8_ + dVar46 +
                 (dVar44 * (double)local_668._0_8_ - dVar107 * (double)local_658._0_8_) +
                 (double)local_648._0_8_;
            *(undefined8 *)(lVar24 + 0x30 + lVar17) = 0xff000000;
            iVar8 = (int)lVar22;
            lVar22 = lVar22 + 1;
            dVar92 = (double)local_6a8._0_8_;
          } while (lVar22 < dStack_1f0._0_4_);
        }
      }
      if (local_1f8 != 0.0) {
        FUN_1400020a8();
      }
      dVar14 = (double)((longlong)dVar14 + 0x60);
    } while (dVar14 != local_628);
  }
  lVar22 = (longlong)*(int *)(local_708 + 0xd8 + local_710);
  if (lVar22 != 0) {
    lVar11 = *(longlong *)(local_708 + 0xd0 + local_710);
    lVar22 = lVar22 * 0xb8;
    do {
      FUN_140acbad4(lVar11,&local_178);
      FUN_14711cc30(lVar11,&local_178,&local_3a8);
      lVar11 = lVar11 + 0xb8;
      lVar22 = lVar22 + -0xb8;
    } while (lVar22 != 0);
  }
  FUN_14711fbe6(&local_3a8,local_708 + local_710 + 0xe0);
  lVar22 = local_3a8;
  lVar11 = (longlong)(int)uStack_3a0;
  if (lVar11 != 0) {
    plVar23 = (longlong *)(local_700 + 0x298);
    lVar17 = local_3a8 + 0x18;
    lVar24 = 0;
    do {
      lVar3 = plVar1[1];
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = (int)lVar3;
      local_178 = (uint *)CONCAT44((float)(*(double *)(lVar22 + 0x20 + lVar24) +
                                          *(double *)(lVar22 + 0x68 + lVar24)),
                                   (float)(*(double *)(lVar17 + lVar24) +
                                          *(double *)(lVar22 + 0x60 + lVar24)));
      uStack_170 = (undefined8 *)
                   CONCAT44(uStack_170._4_4_,
                            (float)(*(double *)(lVar22 + 0x28 + lVar24) +
                                   *(double *)(lVar22 + 0x70 + lVar24)));
      iVar8 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
        FUN_140d35044(plVar1,iVar8);
      }
      FUN_1415874d8((longlong)iVar8 * 0x58 + *plVar1,&local_178);
      lVar3 = plVar1[1];
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = (int)lVar3;
      local_178 = (uint *)CONCAT44((float)(*(double *)(lVar22 + 0x38 + lVar24) +
                                          *(double *)(lVar22 + 0x68 + lVar24)),
                                   (float)(*(double *)(lVar22 + 0x30 + lVar24) +
                                          *(double *)(lVar22 + 0x60 + lVar24)));
      uStack_170 = (undefined8 *)
                   CONCAT44(uStack_170._4_4_,
                            (float)(*(double *)(lVar22 + 0x40 + lVar24) +
                                   *(double *)(lVar22 + 0x70 + lVar24)));
      iVar8 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
        FUN_140d35044(plVar1,iVar8);
      }
      FUN_1415874d8((longlong)iVar8 * 0x58 + *plVar1,&local_178);
      lVar3 = plVar1[1];
      iVar8 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar8 + 1U) {
        FUN_1447808da(local_730,iVar8);
      }
      *(int *)(plVar1[2] + (longlong)iVar8 * 4) = (int)lVar3;
      local_178 = (uint *)CONCAT44((float)(*(double *)(lVar22 + 0x50 + lVar24) +
                                          *(double *)(lVar22 + 0x68 + lVar24)),
                                   (float)(*(double *)(lVar22 + 0x48 + lVar24) +
                                          *(double *)(lVar22 + 0x60 + lVar24)));
      uStack_170 = (undefined8 *)
                   CONCAT44(uStack_170._4_4_,
                            (float)(*(double *)(lVar22 + 0x58 + lVar24) +
                                   *(double *)(lVar22 + 0x70 + lVar24)));
      iVar8 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
        FUN_140d35044(plVar1,iVar8);
      }
      FUN_1415874d8((longlong)iVar8 * 0x58 + *plVar1,&local_178);
      dVar14 = *(double *)(lVar22 + 0x70 + lVar24);
      dVar47 = *(double *)(lVar22 + 0x40 + lVar24);
      dVar73 = *(double *)(lVar22 + 0x60 + lVar24);
      dVar46 = *(double *)(lVar22 + 0x68 + lVar24);
      dVar89 = *(double *)(lVar22 + 0x38 + lVar24);
      dVar91 = *(double *)(lVar22 + 0x30 + lVar24);
      dVar96 = *(double *)(lVar22 + 0x28 + lVar24);
      dVar92 = *(double *)(lVar22 + 0x20 + lVar24);
      dVar44 = *(double *)(lVar17 + lVar24);
      iVar8 = *(int *)(local_700 + 0x2a0);
      *(uint *)(local_700 + 0x2a0) = iVar8 + 1U;
      if (*(uint *)(local_700 + 0x2a4) < iVar8 + 1U) {
        FUN_141745958(plVar23,iVar8);
      }
      lVar3 = *(longlong *)(local_700 + 0x298);
      lVar12 = (longlong)iVar8 * 0x38;
      *(double *)(lVar3 + lVar12) = dVar73 + dVar44;
      *(double *)(lVar3 + 8 + lVar12) = dVar46 + dVar92;
      *(double *)(lVar3 + 0x10 + lVar12) = dVar14 + dVar96;
      *(double *)(lVar3 + 0x18 + lVar12) = dVar91 + dVar73;
      *(double *)(lVar3 + 0x20 + lVar12) = dVar89 + dVar46;
      *(double *)(lVar3 + 0x28 + lVar12) = dVar47 + dVar14;
      *(undefined8 *)(lVar3 + 0x30 + lVar12) = 0x3f800000ff000000;
      dVar14 = *(double *)(lVar22 + 0x70 + lVar24);
      dVar47 = *(double *)(lVar22 + 0x58 + lVar24);
      dVar73 = *(double *)(lVar22 + 0x60 + lVar24);
      dVar46 = *(double *)(lVar22 + 0x68 + lVar24);
      dVar89 = *(double *)(lVar22 + 0x50 + lVar24);
      dVar91 = *(double *)(lVar22 + 0x48 + lVar24);
      dVar96 = *(double *)(lVar22 + 0x40 + lVar24);
      dVar92 = *(double *)(lVar22 + 0x38 + lVar24);
      dVar44 = *(double *)(lVar22 + 0x30 + lVar24);
      iVar8 = *(int *)(local_700 + 0x2a0);
      *(uint *)(local_700 + 0x2a0) = iVar8 + 1U;
      if (*(uint *)(local_700 + 0x2a4) < iVar8 + 1U) {
        FUN_141745958(plVar23,iVar8);
      }
      lVar3 = *(longlong *)(local_700 + 0x298);
      lVar12 = (longlong)iVar8 * 0x38;
      *(double *)(lVar3 + lVar12) = dVar73 + dVar44;
      *(double *)(lVar3 + 8 + lVar12) = dVar46 + dVar92;
      *(double *)(lVar3 + 0x10 + lVar12) = dVar14 + dVar96;
      *(double *)(lVar3 + 0x18 + lVar12) = dVar91 + dVar73;
      *(double *)(lVar3 + 0x20 + lVar12) = dVar89 + dVar46;
      *(double *)(lVar3 + 0x28 + lVar12) = dVar47 + dVar14;
      *(undefined8 *)(lVar3 + 0x30 + lVar12) = 0x3f800000ff000000;
      dVar14 = *(double *)(lVar22 + 0x70 + lVar24);
      dVar47 = *(double *)(lVar22 + 0x28 + lVar24);
      dVar73 = *(double *)(lVar22 + 0x60 + lVar24);
      dVar46 = *(double *)(lVar22 + 0x68 + lVar24);
      dVar89 = *(double *)(lVar22 + 0x20 + lVar24);
      dVar91 = *(double *)(lVar17 + lVar24);
      dVar96 = *(double *)(lVar22 + 0x58 + lVar24);
      dVar92 = *(double *)(lVar22 + 0x50 + lVar24);
      dVar44 = *(double *)(lVar22 + 0x48 + lVar24);
      iVar8 = *(int *)(local_700 + 0x2a0);
      *(uint *)(local_700 + 0x2a0) = iVar8 + 1U;
      if (*(uint *)(local_700 + 0x2a4) < iVar8 + 1U) {
        FUN_141745958(plVar23,iVar8);
      }
      lVar3 = *(longlong *)(local_700 + 0x298);
      lVar12 = (longlong)iVar8 * 0x38;
      *(double *)(lVar3 + lVar12) = dVar73 + dVar44;
      *(double *)(lVar3 + 8 + lVar12) = dVar46 + dVar92;
      *(double *)(lVar3 + 0x10 + lVar12) = dVar14 + dVar96;
      *(double *)(lVar3 + 0x18 + lVar12) = dVar91 + dVar73;
      *(double *)(lVar3 + 0x20 + lVar12) = dVar89 + dVar46;
      *(double *)(lVar3 + 0x28 + lVar12) = dVar47 + dVar14;
      *(undefined8 *)(lVar3 + 0x30 + lVar12) = 0x3f800000ff000000;
      dVar14 = *(double *)(lVar22 + 0x90 + lVar24);
      dVar47 = *(double *)(lVar22 + 0x70 + lVar24);
      dVar73 = *(double *)(lVar22 + 0x68 + lVar24);
      dVar46 = *(double *)(lVar22 + 0x60 + lVar24);
      dVar89 = *(double *)(lVar22 + 0x88 + lVar24);
      dVar91 = *(double *)(lVar22 + 0x80 + lVar24);
      dVar96 = *(double *)(lVar22 + 0x78 + lVar24);
      iVar8 = *(int *)(local_700 + 0x2a0);
      *(uint *)(local_700 + 0x2a0) = iVar8 + 1U;
      if (*(uint *)(local_700 + 0x2a4) < iVar8 + 1U) {
        FUN_141745958(plVar23,iVar8);
      }
      lVar3 = lVar17 + lVar24;
      lVar12 = *plVar23;
      lVar13 = (longlong)iVar8 * 0x38;
      *(undefined8 *)(lVar12 + 0x10 + lVar13) = *(undefined8 *)(lVar3 + 0x70);
      uVar2 = *(undefined8 *)(lVar3 + 0x68);
      *(undefined8 *)(lVar12 + lVar13) = *(undefined8 *)(lVar3 + 0x60);
      ((undefined8 *)(lVar12 + lVar13))[1] = uVar2;
      *(double *)(lVar12 + 0x18 + lVar13) = dVar14 * dVar46 + dVar96;
      *(double *)(lVar12 + 0x20 + lVar13) = dVar73 * dVar14 + dVar91;
      *(double *)(lVar12 + 0x28 + lVar13) = dVar47 * dVar14 + dVar89;
      *(undefined1 **)(lVar12 + 0x30 + lVar13) = &DAT_3f800000ffffffff;
      lVar24 = lVar24 + 0x98;
    } while (lVar11 * 0x98 - lVar24 != 0);
  }
  if (local_3a8 != 0) {
    FUN_1400020a8(local_3a8);
  }
  FUN_14003d612(local_368 + 0xc);
LAB_147113c0a:
  if ((local_f0 ^ (ulonglong)auStack_758) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147114fd0 FUN_147114fd0 body=219 status=ok
// SIG undefined FUN_147114fd0(void)

undefined8 * FUN_147114fd0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1406ff464();
  *param_1 = &PTR_FUN_14a1e1b50;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 1;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x6f] = 0x4000000002;
  if (param_2 != 0) {
    lVar1 = FUN_145b2f0dc();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_14710e1ac(param_1,param_2 + 0x628,0,1,&DAT_14c846480,&DAT_149e1e2cc);
    }
  }
  return param_1;
}



// FUNCTION 1471150f6 FUN_1471150f6 body=41 status=ok
// SIG undefined FUN_1471150f6(void)

void FUN_1471150f6(void)

{
  FUN_1448e423c();
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9abe38);
                    /* WARNING: Could not recover jumptable at 0x000147115118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9abe38);
  return;
}



// FUNCTION 147115120 FUN_147115120 body=78 status=ok
// SIG undefined FUN_147115120(void)

void FUN_147115120(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1471204e8(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_14480809c(param_1 + 0x18,0);
    return;
  }
  return;
}



// FUNCTION 14711516e FUN_14711516e body=282 status=ok
// SIG undefined FUN_14711516e(void)

undefined8 FUN_14711516e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14010318a(param_2,&local_38,0);
  FUN_140bee914(&local_48,&local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_38 = CONCAT44(uStack_44,local_48);
  local_58 = *(longlong *)(param_2 + 0x18);
  FUN_1400021e4(&local_58,&local_48);
  FUN_1449b8608(local_68,&local_38,&DAT_149e065c6);
  FUN_144a7dea0(&local_58,local_68,&local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_38 = local_58;
  uStack_30 = uStack_50;
  local_58 = 0;
  uStack_50 = 0;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449b8608(param_1,&local_38,L"_dchunks");
  if (CONCAT44(uStack_44,local_48) != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711528a FUN_14711528a body=261 status=ok
// SIG undefined FUN_14711528a(void)

longlong * FUN_14711528a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  FUN_14711516e(local_48,param_2);
  FUN_141509698(param_1,local_48,&local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_48,L".dchunks");
  FUN_1468181c8(&local_38,param_1,local_48);
  if (&local_38 == param_1) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147115390 FUN_147115390 body=154 status=ok
// SIG undefined FUN_147115390(void)

void FUN_147115390(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  FUN_14710e122(param_1,param_2,local_68);
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711542c FUN_14711542c body=168 status=ok
// SIG undefined FUN_14711542c(void)

void FUN_14711542c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_5c;
  undefined **local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined ***local_38;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = &local_78;
  ppuVar1 = &PTR_LAB_14a1e39a0;
  local_58 = &PTR_LAB_14a1e39a0;
  local_78 = param_1;
  local_70 = param_3;
  local_68 = param_2;
  local_50 = param_2;
  local_48 = param_1;
  local_38 = &local_58;
  local_20 = &local_58;
  if (*(int *)(param_1 + 0x10) != -1) {
    local_5c = *(int *)(param_1 + 0x10);
    FUN_142b702c8(&local_58);
    if (local_20 == (undefined ***)0x0) goto LAB_1471154b1;
    ppuVar1 = *local_20;
  }
  (*(code *)ppuVar1[4])(local_20,local_20 != &local_58);
LAB_1471154b1:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471154d5 FUN_1471154d5 body=183 status=ok
// SIG undefined FUN_1471154d5(void)

undefined8 FUN_1471154d5(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b0b6a4();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0x83;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711558e FUN_14711558e body=2066 status=ok
// SIG undefined FUN_14711558e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14711558e(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4,
                  longlong *param_5)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  code *pcVar4;
  longlong *plVar5;
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
  ulonglong uVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  int iVar22;
  uint uVar23;
  longlong *plVar24;
  int iVar25;
  void *pvVar26;
  int iVar27;
  int iVar28;
  size_t sVar29;
  longlong lVar30;
  ulonglong uVar31;
  size_t sVar32;
  size_t sVar33;
  longlong lVar34;
  longlong lVar35;
  void *_Dst;
  longlong lVar36;
  void *_Dst_00;
  int iVar37;
  size_t _Size;
  undefined1 auStack_188 [32];
  void *local_168;
  ulonglong local_160;
  longlong local_158;
  size_t local_150;
  size_t local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  size_t local_130;
  size_t local_128;
  size_t local_120;
  ulonglong local_118;
  longlong *local_110;
  longlong *local_108;
  undefined4 local_100 [2];
  undefined8 local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  void *pvStack_e0;
  undefined8 local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  ulonglong local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  void *pvStack_a0;
  ulonglong local_98;
  void *pvStack_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_100[0] = 0;
  local_f8 = 0;
  pvStack_f0 = (void *)0x0;
  local_e8 = 0;
  pvStack_e0 = (void *)0x0;
  local_d8 = 0;
  pvStack_d0 = (void *)0x0;
  local_c8 = 0;
  pvStack_c0 = (void *)0x0;
  local_b8 = 0;
  pvStack_b0 = (void *)0x0;
  local_a8 = 0;
  pvStack_a0 = (void *)0x0;
  local_98 = 0;
  pvStack_90 = (void *)0x0;
  local_88 = 0;
  FUN_14711542c(param_2,param_3,local_100);
  iVar27 = (int)local_e8 + (int)local_d8 + (int)local_c8 + (int)local_b8 + (int)local_98;
  iVar28 = iVar27 + (int)local_88;
  if (iVar28 == 0 || SCARRY4(iVar27,(int)local_88) != iVar28 < 0) goto LAB_14711561b;
  pcVar4 = (code *)*param_5;
  plVar24 = param_5 + 4;
  if ((longlong *)param_5[2] != (longlong *)0x0) {
    plVar24 = (longlong *)param_5[2];
  }
  local_13c = iVar28;
  uVar21 = (**(code **)(*plVar24 + 8))();
  local_138 = (*pcVar4)(uVar21);
  if ((longlong *)*param_1 == (longlong *)0x0) {
    lVar30 = param_4[1];
  }
  else {
    lVar30 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  }
  *(longlong *)(local_138 + 0x28) = lVar30;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = param_3[4];
  uVar10 = param_3[5];
  uVar11 = param_3[6];
  uVar12 = param_3[7];
  uVar13 = param_3[8];
  uVar14 = param_3[9];
  uVar15 = param_3[10];
  uVar16 = param_3[0xb];
  *(undefined4 *)(local_138 + 0x38) = *param_3;
  *(undefined4 *)(local_138 + 0x3c) = uVar6;
  *(undefined4 *)(local_138 + 0x40) = uVar7;
  *(undefined4 *)(local_138 + 0x44) = uVar8;
  *(undefined4 *)(local_138 + 0x48) = uVar9;
  *(undefined4 *)(local_138 + 0x4c) = uVar10;
  *(undefined4 *)(local_138 + 0x50) = uVar11;
  *(undefined4 *)(local_138 + 0x54) = uVar12;
  *(undefined4 *)(local_138 + 0x58) = uVar13;
  *(undefined4 *)(local_138 + 0x5c) = uVar14;
  *(undefined4 *)(local_138 + 0x60) = uVar15;
  *(undefined4 *)(local_138 + 100) = uVar16;
  *(undefined8 *)(local_138 + 0x68) = *(undefined8 *)(param_3 + 0xc);
  local_108 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9abe58) && (FUN_144b3d300(&DAT_14c9abe58), DAT_14c9abe58 == -1)) {
    DAT_14c9abe48 = (void *)0x0;
    _DAT_14c9abe50 = 0;
    atexit((_func_5014 *)&LAB_142b70503);
    _Init_thread_footer(&DAT_14c9abe58);
  }
  iVar28 = (int)local_e8;
  iVar27 = (int)local_c8;
  iVar20 = (int)local_b8;
  local_160 = local_b8 & 0xffffffff;
  local_118 = local_98 & 0xffffffff;
  iVar37 = (int)local_88;
  lVar36 = (longlong)(int)local_e8;
  sVar29 = lVar36 * 0x30;
  _Size = (longlong)(int)local_d8 * 0x58;
  lVar35 = (longlong)(int)local_c8;
  local_150 = lVar35 * 0x50;
  lVar30 = (longlong)(int)local_b8;
  local_120 = lVar30 * 0x60;
  sVar32 = (longlong)(int)local_a8 * 0x58;
  sVar33 = (longlong)(int)local_98 * 0xb8;
  iVar19 = (int)sVar33 + (int)sVar32 + (int)local_120 + (int)local_150 + (int)sVar29 + (int)_Size;
  local_148 = (longlong)(int)local_88 * 0x98;
  local_158 = (longlong)DAT_14c9abe50;
  iVar22 = iVar19 + (int)local_148 + DAT_14c9abe50 + 0x1c;
  uVar23 = DAT_14c9abe54 - DAT_14c9abe50;
  iVar25 = (int)local_d8;
  local_168._0_4_ = (int)local_a8;
  local_110 = param_4;
  DAT_14c9abe50 = iVar22;
  if (uVar23 < iVar19 + (int)local_148 + 0x1cU) {
    local_168 = (void *)CONCAT44(local_168._4_4_,(int)local_a8);
    local_140 = (int)local_d8;
    FUN_1447403be(&DAT_14c9abe48);
    iVar25 = local_140;
  }
  uVar17 = local_118;
  piVar1 = (int *)((longlong)DAT_14c9abe48 + local_158);
  lVar34 = (longlong)DAT_14c9abe48 + local_158;
  *piVar1 = iVar28;
  piVar1[1] = iVar25;
  piVar1[2] = iVar27;
  piVar1[3] = iVar20;
  piVar1[4] = (int)local_168;
  iVar27 = (int)local_118;
  piVar1[5] = iVar27;
  piVar1[6] = iVar37;
  pvVar26 = (void *)(lVar36 * 0x30 + lVar34 + 0x1c);
  pvVar2 = (void *)(_Size + (longlong)pvVar26);
  _Dst_00 = (void *)(lVar35 * 0x50 + (longlong)pvVar2);
  _Dst = (void *)(lVar30 * 0x60 + (longlong)_Dst_00);
  pvVar3 = (void *)(sVar32 + (longlong)_Dst);
  local_168 = (void *)((longlong)pvVar3 + sVar33);
  local_130 = sVar32;
  local_128 = sVar33;
  memcpy(piVar1 + 7,pvStack_f0,sVar29);
  memcpy(pvVar26,pvStack_e0,_Size);
  memcpy(pvVar2,pvStack_d0,local_150);
  memcpy(_Dst_00,pvStack_c0,local_120);
  memcpy(_Dst,pvStack_b0,local_130);
  memcpy(pvVar3,pvStack_a0,local_128);
  memcpy(local_168,pvStack_90,local_148);
  local_78 = 0;
  local_80 = &PTR_LAB_14a1e39f0;
  local_70 = 0xffffffff;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_147120908(&local_80,lVar34);
  FUN_1471209c0(&local_80,lVar34);
  FUN_147120a8a(&local_80,lVar34);
  FUN_147120b5e(&local_80,lVar34);
  FUN_147120cbe(&local_80,lVar34);
  FUN_147120db4(&local_80,lVar34);
  FUN_147120e90(&local_80,lVar34);
  FUN_147120f80(&local_80);
  uVar31 = local_160;
  iVar28 = DAT_14c9abe50;
  if (iVar27 < 1) {
    uVar23 = 0;
  }
  else {
    lVar30 = 0;
    uVar23 = 0;
    do {
      uVar23 = uVar23 + *(int *)((longlong)pvStack_a0 + lVar30 + 0x80) *
                        *(int *)((longlong)pvStack_a0 + lVar30 + 0x84) * 9;
      lVar30 = lVar30 + 0xb8;
    } while (uVar17 * 0xb8 - lVar30 != 0);
  }
  if (0 < (int)local_160) {
    lVar30 = 0;
    do {
      uVar23 = uVar23 + *(int *)((longlong)pvStack_c0 + lVar30 + 0x18) * 0x18;
      lVar30 = lVar30 + 0x60;
    } while (local_160 * 0x60 != lVar30);
  }
  _DAT_14c9abe50 = CONCAT44(DAT_14c9abe54,DAT_14c9abe50 + uVar23);
  if ((uint)(DAT_14c9abe54 - iVar28) < uVar23) {
    FUN_1447403be(&DAT_14c9abe48,iVar28);
  }
  lVar36 = (longlong)*(int *)((longlong)DAT_14c9abe48 + local_158);
  iVar20 = *(int *)((longlong)DAT_14c9abe48 + local_158 + 4);
  lVar30 = (longlong)iVar20;
  iVar37 = *(int *)((longlong)DAT_14c9abe48 + local_158 + 8);
  lVar35 = (longlong)iVar37;
  if (0 < iVar27) {
    iVar27 = *(int *)((longlong)DAT_14c9abe48 + local_158 + 0xc);
    iVar25 = *(int *)((longlong)DAT_14c9abe48 + local_158 + 0x10);
    local_148 = uVar17 * 0xb8;
    local_150 = (longlong)DAT_14c9abe48 +
                lVar36 * 0x30 + local_158 +
                lVar35 * 0x50 + (longlong)iVar25 * 0x58 + lVar30 * 0x58 + (longlong)iVar27 * 0x60 +
                0x94;
    iVar27 = -0x1c - (iVar27 * 0x60 +
                     iVar25 * 0x58 + iVar20 * 0x58 +
                     iVar37 * 0x50 +
                     *(int *)((longlong)DAT_14c9abe48 + local_158) * 0x30 +
                     (int)DAT_14c9abe48 + (int)local_158);
    sVar29 = 0;
    do {
      pvVar26 = pvStack_a0;
      pvVar3 = DAT_14c9abe48;
      iVar20 = *(int *)((longlong)pvStack_a0 + sVar29 + 0x84) *
               *(int *)((longlong)pvStack_a0 + sVar29 + 0x80);
      pvVar2 = (void *)((longlong)DAT_14c9abe48 + (longlong)iVar28);
      sVar32 = (size_t)iVar20;
      memcpy(pvVar2,*(void **)((longlong)pvStack_a0 + sVar29 + 0x70),sVar32 * 8);
      memcpy((void *)((longlong)pvVar2 + sVar32 * 8),*(void **)((longlong)pvVar26 + sVar29 + 0x78),
             sVar32);
      iVar37 = (int)pvVar3 + iVar28;
      *(int *)((local_150 - 8) + sVar29) = iVar27 + iVar37;
      *(int *)(local_150 + sVar29) = iVar37 + iVar20 * 8 + iVar27;
      iVar28 = iVar20 * 9 + iVar28;
      sVar29 = sVar29 + 0xb8;
      iVar27 = iVar27 + -0xb8;
    } while (local_148 != sVar29);
    lVar36 = (longlong)*(int *)((longlong)DAT_14c9abe48 + local_158);
    lVar30 = (longlong)*(int *)((longlong)DAT_14c9abe48 + local_158 + 4);
    lVar35 = (longlong)*(int *)((longlong)DAT_14c9abe48 + local_158 + 8);
    uVar31 = local_160;
  }
  pvVar2 = DAT_14c9abe48;
  if (0 < (int)uVar31) {
    lVar34 = lVar36 * 0x30 + lVar35 * 0x50 + lVar30 * 0x58 + local_158;
    iVar27 = -0x1c - ((int)lVar30 * 0x58 +
                     (int)lVar35 * 0x50 + (int)lVar36 * 0x30 + (int)DAT_14c9abe48 + (int)local_158);
    lVar30 = 0;
    do {
      pvVar26 = pvStack_c0;
      pvVar3 = DAT_14c9abe48;
      memcpy((void *)((longlong)iVar28 + (longlong)DAT_14c9abe48),
             *(void **)((longlong)pvStack_c0 + lVar30 + 0x10),
             (longlong)*(int *)((longlong)pvStack_c0 + lVar30 + 0x18) * 0x18);
      *(int *)((longlong)pvVar2 + lVar30 + lVar34 + 0x2c) = (int)pvVar3 + iVar27 + iVar28;
      iVar28 = iVar28 + *(int *)((longlong)pvVar26 + lVar30 + 0x18) * 0x18;
      lVar30 = lVar30 + 0x60;
      iVar27 = iVar27 + -0x60;
    } while (uVar31 * 0x60 != lVar30);
  }
  local_80 = &PTR_LAB_14a1e39f0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar24 = local_108;
  plVar18 = local_110;
  iVar28 = local_13c;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)*plVar24;
  uVar31 = (ulonglong)DAT_14c9abe50;
  if (plVar5 == (longlong *)0x0) {
    if (DAT_14c9abe50 != 0) {
      lVar30 = plVar18[1];
      plVar18[1] = lVar30 + uVar31;
      if ((ulonglong)(plVar18[2] - lVar30) < uVar31) {
        FUN_14112c458(plVar18,lVar30);
      }
      memcpy((void *)(lVar30 + *plVar18),DAT_14c9abe48,uVar31);
      goto LAB_147115cb1;
    }
    *(undefined8 *)(local_138 + 0x30) = 0;
    iVar27 = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x30))(plVar5,DAT_14c9abe48,uVar31);
LAB_147115cb1:
    uVar31 = _DAT_14c9abe50;
    iVar27 = DAT_14c9abe50;
    lVar30 = (longlong)DAT_14c9abe50;
    *(longlong *)(local_138 + 0x30) = lVar30;
    if (lVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar31 & 0xffffffff);
    }
  }
  uVar31 = _DAT_14c9abe50 >> 0x20;
  _DAT_14c9abe50 = _DAT_14c9abe50 & 0xffffffff00000000;
  if ((int)uVar31 != iVar27) {
    FUN_144893a1c(&DAT_14c9abe48);
  }
  plVar24 = (longlong *)*plVar24;
  if (plVar24 != (longlong *)0x0) {
    (**(code **)(*plVar24 + 0x38))(plVar24,1);
  }
LAB_14711561b:
  FUN_14003d612(local_100);
  if (*param_5 != 0) {
    plVar24 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar24 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < iVar28;
}



// FUNCTION 147115da2 FUN_147115da2 body=1084 status=ok
// SIG undefined FUN_147115da2(void)

void FUN_147115da2(longlong param_1,double *param_2,undefined4 *param_3)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  
  iVar8 = *(int *)(param_1 + 0x10);
  lVar15 = (longlong)iVar8;
  if (lVar15 == -1) {
    iVar8 = FUN_14712187c(param_1);
    *(int *)(param_1 + 0x10) = iVar8;
    lVar15 = *(longlong *)(param_1 + 0x28);
    lVar11 = (longlong)iVar8 * 0x50;
    *(double *)(lVar15 + 0x48 + lVar11) = param_2[6];
    dVar22 = *param_2;
    dVar23 = param_2[1];
    dVar24 = param_2[2];
    dVar6 = param_2[3];
    dVar3 = param_2[5];
    pdVar1 = (double *)(lVar15 + 0x38 + lVar11);
    *pdVar1 = param_2[4];
    pdVar1[1] = dVar3;
    pdVar1 = (double *)(lVar15 + 0x28 + lVar11);
    *pdVar1 = dVar24;
    pdVar1[1] = dVar6;
    pdVar1 = (double *)(lVar15 + 0x18 + lVar11);
    *pdVar1 = dVar22;
    pdVar1[1] = dVar23;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x10) * 0x50) =
         *param_3;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x28);
    if (*(int *)(lVar11 + 8 + lVar15 * 0x50) != -1) {
      dVar22 = param_2[5];
      dVar23 = param_2[4];
      dVar24 = param_2[3];
      dVar6 = param_2[2];
      dVar3 = *param_2;
      dVar4 = param_2[1];
      do {
        iVar8 = *(int *)(lVar11 + 4 + lVar15 * 0x50);
        lVar13 = (longlong)iVar8 * 0x50;
        uVar18 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x40 + lVar13);
        uVar16 = SUB84(dVar22,0);
        uVar17 = uVar18;
        if (dVar22 <= dVar5) {
          uVar16 = SUB84(dVar5,0);
          uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        iVar10 = *(int *)(lVar11 + 8 + lVar15 * 0x50);
        uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x38 + lVar13);
        uVar19 = SUB84(dVar23,0);
        uVar20 = uVar21;
        if (dVar23 <= dVar5) {
          uVar19 = SUB84(dVar5,0);
          uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        uVar26 = (undefined4)((ulonglong)dVar24 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x30 + lVar13);
        uVar25 = SUB84(dVar24,0);
        uVar27 = uVar26;
        if (dVar24 <= dVar5) {
          uVar25 = SUB84(dVar5,0);
          uVar27 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        uVar30 = SUB84(dVar6,0);
        uVar37 = (undefined4)((ulonglong)dVar6 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x28 + lVar13);
        uVar31 = uVar30;
        uVar38 = uVar37;
        if (dVar5 <= dVar6) {
          uVar31 = SUB84(dVar5,0);
          uVar38 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        uVar32 = SUB84(dVar4,0);
        uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x20 + lVar13);
        uVar33 = uVar32;
        uVar40 = uVar39;
        if (dVar5 <= dVar4) {
          uVar33 = SUB84(dVar5,0);
          uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        uVar34 = SUB84(dVar3,0);
        uVar41 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x18 + lVar13);
        uVar35 = uVar34;
        uVar42 = uVar41;
        if (dVar5 <= dVar3) {
          uVar35 = SUB84(dVar5,0);
          uVar42 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        lVar15 = (longlong)iVar10 * 0x50;
        dVar5 = *(double *)(lVar11 + 0x40 + lVar15);
        uVar36 = SUB84(dVar22,0);
        if (dVar22 <= dVar5) {
          uVar36 = SUB84(dVar5,0);
          uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x38 + lVar15);
        uVar29 = SUB84(dVar23,0);
        if (dVar23 <= dVar5) {
          uVar29 = SUB84(dVar5,0);
          uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x30 + lVar15);
        uVar28 = SUB84(dVar24,0);
        if (dVar24 <= dVar5) {
          uVar28 = SUB84(dVar5,0);
          uVar26 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x28 + lVar15);
        if (dVar5 <= dVar6) {
          uVar30 = SUB84(dVar5,0);
          uVar37 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x20 + lVar15);
        if (dVar5 <= dVar4) {
          uVar32 = SUB84(dVar5,0);
          uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x18 + lVar15);
        if (dVar5 <= dVar3) {
          uVar34 = SUB84(dVar5,0);
          uVar41 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        if (((double)CONCAT44(uVar26,uVar28) - (double)CONCAT44(uVar41,uVar34)) *
            ((double)CONCAT44(uVar21,uVar29) - (double)CONCAT44(uVar39,uVar32)) *
            ((double)CONCAT44(uVar18,uVar36) - (double)CONCAT44(uVar37,uVar30)) <=
            ((double)CONCAT44(uVar27,uVar25) - (double)CONCAT44(uVar42,uVar35)) *
            ((double)CONCAT44(uVar20,uVar19) - (double)CONCAT44(uVar40,uVar33)) *
            ((double)CONCAT44(uVar17,uVar16) - (double)CONCAT44(uVar38,uVar31))) {
          iVar8 = iVar10;
        }
        lVar15 = (longlong)iVar8;
      } while (*(int *)(lVar11 + 8 + lVar15 * 0x50) != -1);
    }
    iVar9 = FUN_14712187c(param_1);
    lVar11 = *(longlong *)(param_1 + 0x28);
    lVar13 = (longlong)iVar9 * 0x50;
    uVar16 = *(undefined4 *)((longlong)param_2 + 4);
    uVar17 = *(undefined4 *)(param_2 + 1);
    uVar18 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar19 = *(undefined4 *)(param_2 + 2);
    uVar20 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar21 = *(undefined4 *)(param_2 + 3);
    uVar25 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar27 = *(undefined4 *)(param_2 + 4);
    uVar26 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar31 = *(undefined4 *)(param_2 + 5);
    uVar38 = *(undefined4 *)((longlong)param_2 + 0x2c);
    puVar2 = (undefined4 *)(lVar11 + 0x18 + lVar13);
    *puVar2 = *(undefined4 *)param_2;
    puVar2[1] = uVar16;
    puVar2[2] = uVar17;
    puVar2[3] = uVar18;
    puVar2 = (undefined4 *)(lVar11 + 0x28 + lVar13);
    *puVar2 = uVar19;
    puVar2[1] = uVar20;
    puVar2[2] = uVar21;
    puVar2[3] = uVar25;
    puVar2 = (undefined4 *)(lVar11 + 0x38 + lVar13);
    *puVar2 = uVar27;
    puVar2[1] = uVar26;
    puVar2[2] = uVar31;
    puVar2[3] = uVar38;
    *(double *)(lVar11 + 0x48 + lVar13) = param_2[6];
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + lVar13) = *param_3;
    iVar10 = FUN_14712187c(param_1);
    lVar14 = (longlong)iVar10 * 0x50;
    *(int *)(*(longlong *)(param_1 + 0x28) + 4 + lVar14) = iVar8;
    *(int *)(*(longlong *)(param_1 + 0x28) + 8 + lVar14) = iVar9;
    lVar11 = *(longlong *)(param_1 + 0x28);
    lVar15 = lVar15 * 0x50;
    dVar22 = *(double *)(lVar11 + 0x40 + lVar15);
    uVar16 = SUB84(dVar22,0);
    uVar17 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar23 = *(double *)(lVar11 + 0x40 + lVar13);
    if (dVar22 <= dVar23) {
      uVar16 = SUB84(dVar23,0);
      uVar17 = (undefined4)((ulonglong)dVar23 >> 0x20);
    }
    dVar22 = *(double *)(lVar11 + 0x38 + lVar15);
    uVar18 = SUB84(dVar22,0);
    uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar23 = *(double *)(lVar11 + 0x38 + lVar13);
    if (dVar22 <= dVar23) {
      uVar18 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
    }
    dVar22 = *(double *)(lVar11 + 0x30 + lVar15);
    uVar20 = SUB84(dVar22,0);
    uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar23 = *(double *)(lVar11 + 0x30 + lVar13);
    if (dVar22 <= dVar23) {
      uVar20 = SUB84(dVar23,0);
      uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
    }
    dVar22 = *(double *)(lVar11 + 0x28 + lVar15);
    dVar23 = *(double *)(lVar11 + 0x28 + lVar13);
    if (dVar23 <= dVar22) {
      dVar22 = dVar23;
    }
    dVar23 = *(double *)(lVar11 + 0x18 + lVar15);
    dVar24 = *(double *)(lVar11 + 0x20 + lVar15);
    dVar6 = *(double *)(lVar11 + 0x20 + lVar13);
    if (dVar6 <= dVar24) {
      dVar24 = dVar6;
    }
    dVar6 = *(double *)(lVar11 + 0x18 + lVar13);
    if (dVar6 <= dVar23) {
      dVar23 = dVar6;
    }
    *(double *)(lVar11 + 0x18 + lVar14) = dVar23;
    *(double *)(lVar11 + 0x20 + lVar14) = dVar24;
    *(double *)(lVar11 + 0x28 + lVar14) = dVar22;
    *(ulonglong *)(lVar11 + 0x30 + lVar14) = CONCAT44(uVar21,uVar20);
    *(ulonglong *)(lVar11 + 0x38 + lVar14) = CONCAT44(uVar19,uVar18);
    *(ulonglong *)(lVar11 + 0x40 + lVar14) = CONCAT44(uVar17,uVar16);
    *(undefined1 *)(lVar11 + 0x48 + lVar14) = 1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar14) = 1;
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + lVar15);
    *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + lVar15) = iVar10;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + lVar13) = iVar10;
    if ((longlong)iVar9 == -1) {
      *(int *)(param_1 + 0x10) = iVar10;
    }
    else {
      *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + (longlong)iVar10 * 0x50) = iVar9;
      lVar11 = (longlong)iVar9 * 0x50;
      lVar15 = *(longlong *)(param_1 + 0x28) + lVar11;
      if (*(int *)(*(longlong *)(param_1 + 0x28) + 4 + lVar11) == iVar8) {
        *(int *)(lVar15 + 4) = iVar10;
      }
      else {
        *(int *)(lVar15 + 8) = iVar10;
      }
    }
    if (iVar10 != -1) {
      lVar15 = *(longlong *)(param_1 + 0x28);
      do {
        lVar11 = (longlong)iVar10 * 0x50;
        lVar13 = (longlong)*(int *)(lVar15 + 4 + lVar11) * 0x50;
        lVar14 = (longlong)*(int *)(lVar15 + 8 + lVar11) * 0x50;
        dVar22 = *(double *)(lVar15 + 0x40 + lVar13);
        uVar16 = SUB84(dVar22,0);
        uVar17 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar23 = *(double *)(lVar15 + 0x40 + lVar14);
        if (dVar22 <= dVar23) {
          uVar16 = SUB84(dVar23,0);
          uVar17 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar22 = *(double *)(lVar15 + 0x38 + lVar13);
        uVar18 = SUB84(dVar22,0);
        uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar23 = *(double *)(lVar15 + 0x38 + lVar14);
        if (dVar22 <= dVar23) {
          uVar18 = SUB84(dVar23,0);
          uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar22 = *(double *)(lVar15 + 0x30 + lVar13);
        uVar20 = SUB84(dVar22,0);
        uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar23 = *(double *)(lVar15 + 0x30 + lVar14);
        if (dVar22 <= dVar23) {
          uVar20 = SUB84(dVar23,0);
          uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar22 = *(double *)(lVar15 + 0x28 + lVar13);
        dVar23 = *(double *)(lVar15 + 0x28 + lVar14);
        if (dVar23 <= dVar22) {
          dVar22 = dVar23;
        }
        dVar23 = *(double *)(lVar15 + 0x20 + lVar13);
        dVar24 = *(double *)(lVar15 + 0x20 + lVar14);
        if (dVar24 <= dVar23) {
          dVar23 = dVar24;
        }
        dVar24 = *(double *)(lVar15 + 0x18 + lVar13);
        dVar6 = *(double *)(lVar15 + 0x18 + lVar14);
        if (dVar6 <= dVar24) {
          dVar24 = dVar6;
        }
        *(double *)(lVar15 + 0x18 + lVar11) = dVar24;
        *(double *)(lVar15 + 0x20 + lVar11) = dVar23;
        *(double *)(lVar15 + 0x28 + lVar11) = dVar22;
        *(ulonglong *)(lVar15 + 0x30 + lVar11) = CONCAT44(uVar21,uVar20);
        *(ulonglong *)(lVar15 + 0x38 + lVar11) = CONCAT44(uVar19,uVar18);
        *(ulonglong *)(lVar15 + 0x40 + lVar11) = CONCAT44(uVar17,uVar16);
        *(undefined1 *)(lVar15 + 0x48 + lVar11) = 1;
        uVar7 = *(uint *)(lVar15 + 0x10 + lVar13);
        uVar12 = *(uint *)(lVar15 + 0x10 + lVar14);
        if (uVar12 < uVar7) {
          uVar12 = uVar7;
        }
        *(uint *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar11) = uVar12 + 1;
        lVar15 = *(longlong *)(param_1 + 0x28);
        iVar10 = *(int *)(lVar15 + 0xc + lVar11);
      } while (iVar10 != -1);
    }
  }
  return;
}



// FUNCTION 1471161de FUN_1471161de body=257 status=ok
// SIG undefined FUN_1471161de(void)

void FUN_1471161de(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_2 + 0x30);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    local_48 = (void *)0x0;
    _Src = *(void **)(param_2 + 0x28);
    local_40 = iVar2;
    FUN_1471219a6(&local_48,iVar2);
    memcpy(local_48,_Src,(longlong)iVar2 * 0x50);
    if (*(int *)(param_2 + 0x20) != 0) {
      local_40 = local_40 - *(int *)(param_2 + 0x20);
    }
    iVar4 = local_40;
    lVar5 = (longlong)local_40;
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = local_40 * 0x50 + iVar2 + 8;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < local_40 * 0x50 + 8U) {
      FUN_1447403be(param_1,iVar2);
    }
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2);
    *puVar1 = uVar3;
    puVar1[1] = iVar4;
    memcpy(puVar1 + 2,local_48,(lVar5 << 0x24) + (lVar5 << 0x26) >> 0x20);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471162e6 FUN_1471162e6 body=1434 status=ok
// SIG undefined FUN_1471162e6(void)

void FUN_1471162e6(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char cVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar8 = *(int *)(param_1 + 8);
  if (0 < (longlong)iVar8) {
    lVar9 = *(longlong *)(param_1 + 0x10);
    lVar18 = 0;
    uVar22 = 0x3ff00000;
    do {
      lVar10 = *(longlong *)(lVar9 + 0x20 + lVar18);
      lVar11 = *(longlong *)(lVar9 + 0x30 + lVar18);
      dVar2 = DAT_14c8464f0;
      dVar12 = DAT_14c8464e8;
      dVar13 = DAT_14c8464e0;
      dVar15 = DAT_14c8464f0;
      dVar16 = DAT_14c8464e8;
      dVar3 = DAT_14c8464e0;
      if (lVar10 != 0) {
        cVar17 = FUN_144a7ee82(lVar10);
        dVar2 = DAT_14c8464f0;
        dVar12 = DAT_14c8464e8;
        dVar13 = DAT_14c8464e0;
        if (cVar17 == '\0') {
          bVar7 = *(byte *)(lVar10 + 0x21);
          uVar23 = uVar22;
          if ((bVar7 & 0x20) != 0) {
            uVar23 = 0;
          }
          uVar24 = uVar22;
          if ((bVar7 & 0x10) != 0) {
            uVar24 = 0;
          }
          uVar25 = uVar22;
          if ((bVar7 & 8) != 0) {
            uVar25 = 0;
          }
          dVar2 = (double)((ulonglong)uVar23 << 0x20) * *(double *)(lVar10 + 0xa0) *
                  *(double *)(lVar9 + 0x50 + lVar18);
          dVar12 = (double)((ulonglong)uVar24 << 0x20) * *(double *)(lVar10 + 0x98) *
                   *(double *)(lVar9 + 0x48 + lVar18);
          dVar13 = (double)((ulonglong)uVar25 << 0x20) * *(double *)(lVar10 + 0x90) *
                   *(double *)(lVar9 + 0x40 + lVar18);
        }
        cVar17 = FUN_144a7ee82(lVar10);
        dVar15 = DAT_14c8464f0;
        dVar16 = DAT_14c8464e8;
        dVar3 = DAT_14c8464e0;
        if (cVar17 == '\0') {
          FUN_147101ec6(lVar10,&local_128);
          dVar3 = *(double *)(lVar9 + 0x58 + lVar18);
          dVar4 = *(double *)(lVar9 + 0x60 + lVar18);
          dVar5 = *(double *)(lVar9 + 0x68 + lVar18);
          dVar15 = local_e8 * dVar5 + local_118 * dVar3 + local_100 * dVar4;
          dVar16 = local_f0 * dVar5 + local_120 * dVar3 + local_108 * dVar4;
          dVar3 = dVar5 * local_f8 + dVar3 * local_128 + dVar4 * local_110;
        }
      }
      dVar19 = DAT_14c8464f0;
      dVar20 = DAT_14c8464e0;
      dVar21 = DAT_14c8464e8;
      dVar4 = DAT_14c8464f0;
      dVar5 = DAT_14c8464e8;
      dVar14 = DAT_14c8464e0;
      if (lVar11 != 0) {
        cVar17 = FUN_144a7ee82(lVar11);
        dVar4 = DAT_14c8464f0;
        dVar5 = DAT_14c8464e8;
        dVar14 = DAT_14c8464e0;
        if (cVar17 == '\0') {
          bVar7 = *(byte *)(lVar11 + 0x21);
          uVar23 = uVar22;
          if ((bVar7 & 0x20) != 0) {
            uVar23 = 0;
          }
          uVar24 = uVar22;
          if ((bVar7 & 0x10) != 0) {
            uVar24 = 0;
          }
          uVar25 = uVar22;
          if ((bVar7 & 8) != 0) {
            uVar25 = 0;
          }
          dVar4 = (double)((ulonglong)uVar23 << 0x20) * *(double *)(lVar11 + 0xa0) *
                  *(double *)(lVar9 + 0x80 + lVar18);
          dVar5 = (double)((ulonglong)uVar24 << 0x20) * *(double *)(lVar11 + 0x98) *
                  *(double *)(lVar9 + 0x78 + lVar18);
          dVar14 = (double)((ulonglong)uVar25 << 0x20) * *(double *)(lVar11 + 0x90) *
                   *(double *)(lVar9 + 0x70 + lVar18);
        }
        cVar17 = FUN_144a7ee82(lVar11);
        dVar19 = DAT_14c8464f0;
        dVar20 = DAT_14c8464e0;
        dVar21 = DAT_14c8464e8;
        if (cVar17 == '\0') {
          FUN_147101ec6(lVar11,&local_128);
          dVar21 = *(double *)(lVar9 + 0x88 + lVar18);
          dVar1 = *(double *)(lVar9 + 0x90 + lVar18);
          dVar6 = *(double *)(lVar9 + 0x98 + lVar18);
          dVar19 = local_e8 * dVar6 + local_118 * dVar21 + local_100 * dVar1;
          dVar20 = dVar6 * local_f8 + dVar21 * local_128 + dVar1 * local_110;
          dVar21 = local_f0 * dVar6 + local_120 * dVar21 + local_108 * dVar1;
        }
      }
      dVar1 = *(double *)(lVar9 + 0x218 + lVar18);
      *(double *)(lVar10 + 0xf0) = *(double *)(lVar10 + 0xf0) - dVar13 * dVar1;
      *(double *)(lVar10 + 0xf8) = *(double *)(lVar10 + 0xf8) - dVar12 * dVar1;
      *(double *)(lVar10 + 0x100) = *(double *)(lVar10 + 0x100) - dVar2 * dVar1;
      dVar2 = *(double *)(lVar9 + 0x218 + lVar18);
      *(double *)(lVar10 + 0xd8) = *(double *)(lVar10 + 0xd8) - dVar3 * dVar2;
      *(double *)(lVar10 + 0xe0) = *(double *)(lVar10 + 0xe0) - dVar16 * dVar2;
      *(double *)(lVar10 + 0xe8) = *(double *)(lVar10 + 0xe8) - dVar15 * dVar2;
      if (lVar11 != 0) {
        dVar2 = *(double *)(lVar9 + 0x218 + lVar18);
        *(double *)(lVar11 + 0xf0) = *(double *)(lVar11 + 0xf0) - dVar14 * dVar2;
        *(double *)(lVar11 + 0xf8) = *(double *)(lVar11 + 0xf8) - dVar5 * dVar2;
        *(double *)(lVar11 + 0x100) = *(double *)(lVar11 + 0x100) - dVar4 * dVar2;
        dVar2 = *(double *)(lVar9 + 0x218 + lVar18);
        *(double *)(lVar11 + 0xd8) = *(double *)(lVar11 + 0xd8) - dVar20 * dVar2;
        *(double *)(lVar11 + 0xe0) = *(double *)(lVar11 + 0xe0) - dVar21 * dVar2;
        *(double *)(lVar11 + 0xe8) = *(double *)(lVar11 + 0xe8) - dVar19 * dVar2;
      }
      lVar18 = lVar18 + 0x2d0;
    } while ((longlong)iVar8 * 0x2d0 - lVar18 != 0);
  }
  if ((local_e0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147116888 FUN_147116888 body=1614 status=ok
// SIG undefined FUN_147116888(void)

undefined8 FUN_147116888(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStack_158 [40];
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar16 = (longlong)*(int *)(param_1 + 8);
  if (lVar16 < 1) {
    uVar23 = 0;
    uVar24 = 0;
  }
  else {
    lVar15 = *(longlong *)(param_1 + 0x10);
    uVar23 = 0;
    uVar24 = 0;
    uVar26 = 0;
    uVar27 = 0;
    do {
      lVar8 = *(longlong *)(lVar15 + 0x20);
      lVar9 = *(longlong *)(lVar15 + 0x30);
      dVar17 = (double)FUN_140b8cb78(lVar15);
      dVar1 = *(double *)(lVar15 + 0x218);
      dVar11 = ((*(double *)(lVar15 + 0x220) + *(double *)(lVar15 + 0x1d0)) - dVar17) *
               *(double *)(lVar15 + 0x1e0) + dVar1;
      *(double *)(lVar15 + 0x218) = dVar11;
      if (*(char *)(lVar15 + 0x210) == '\0') {
        dVar19 = *(double *)(lVar15 + 0x1f0);
        if (dVar19 <= dVar11) {
          dVar11 = dVar19;
        }
        dVar21 = dVar11;
        if (dVar11 <= -dVar19) {
          dVar21 = -dVar19;
        }
LAB_1471169b0:
        *(double *)(lVar15 + 0x218) = dVar21;
        dVar11 = dVar21;
      }
      else {
        dVar21 = 0.0;
        if (0.0 < *(double *)(lVar15 + 0x208) * dVar11) goto LAB_1471169b0;
      }
      dVar17 = (double)CONCAT44(uVar24,uVar23) + ABS(*(double *)(lVar15 + 0x1d0) - dVar17);
      local_128._8_4_ = uVar26;
      local_128._0_8_ = dVar17;
      local_128._12_4_ = uVar27;
      if (lVar8 == 0) {
        local_130 = DAT_14c8464f0;
        dVar19 = DAT_14c8464e8;
        dVar21 = DAT_14c8464e0;
        dVar12 = DAT_14c8464f0;
        dVar13 = DAT_14c8464e8;
        dVar2 = DAT_14c8464e0;
      }
      else {
        cVar14 = FUN_144a7ee82(lVar8);
        local_130 = DAT_14c8464f0;
        dVar19 = DAT_14c8464e8;
        dVar21 = DAT_14c8464e0;
        if (cVar14 == '\0') {
          bVar7 = *(byte *)(lVar8 + 0x21);
          uVar28 = 0x3ff00000;
          dVar19 = 1.0;
          if ((bVar7 & 0x20) != 0) {
            dVar19 = 0.0;
          }
          uVar25 = uVar28;
          if ((bVar7 & 0x10) != 0) {
            uVar25 = 0;
          }
          if ((bVar7 & 8) != 0) {
            uVar28 = 0;
          }
          local_130 = dVar19 * *(double *)(lVar8 + 0xa0) * *(double *)(lVar15 + 0x50);
          dVar19 = (double)((ulonglong)uVar25 << 0x20) * *(double *)(lVar8 + 0x98) *
                   *(double *)(lVar15 + 0x48);
          dVar21 = (double)((ulonglong)uVar28 << 0x20) * *(double *)(lVar8 + 0x90) *
                   *(double *)(lVar15 + 0x40);
        }
        cVar14 = FUN_144a7ee82(lVar8);
        dVar12 = DAT_14c8464f0;
        dVar13 = DAT_14c8464e8;
        dVar2 = DAT_14c8464e0;
        if (cVar14 == '\0') {
          FUN_147101ec6(lVar8,&local_118);
          dVar2 = *(double *)(lVar15 + 0x58);
          dVar3 = *(double *)(lVar15 + 0x60);
          dVar4 = *(double *)(lVar15 + 0x68);
          dVar12 = local_d8 * dVar4 + local_108 * dVar2 + local_f0 * dVar3;
          dVar13 = local_e0 * dVar4 + local_110 * dVar2 + local_f8 * dVar3;
          dVar2 = dVar4 * local_e8 + dVar2 * local_118 + dVar3 * local_100;
        }
      }
      dVar11 = dVar11 - dVar1;
      dVar18 = DAT_14c8464f0;
      dVar20 = DAT_14c8464e0;
      dVar22 = DAT_14c8464e8;
      dVar1 = DAT_14c8464f0;
      dVar4 = DAT_14c8464e0;
      dVar3 = DAT_14c8464e8;
      if (lVar9 != 0) {
        cVar14 = FUN_144a7ee82(lVar9);
        dVar1 = DAT_14c8464f0;
        dVar3 = DAT_14c8464e8;
        dVar4 = DAT_14c8464e0;
        if (cVar14 == '\0') {
          bVar7 = *(byte *)(lVar9 + 0x21);
          uVar25 = 0x3ff00000;
          uVar28 = uVar25;
          if ((bVar7 & 0x20) != 0) {
            uVar28 = 0;
          }
          uVar29 = uVar25;
          if ((bVar7 & 0x10) != 0) {
            uVar29 = 0;
          }
          if ((bVar7 & 8) != 0) {
            uVar25 = 0;
          }
          dVar1 = (double)((ulonglong)uVar28 << 0x20) * *(double *)(lVar9 + 0xa0) *
                  *(double *)(lVar15 + 0x80);
          dVar3 = (double)((ulonglong)uVar29 << 0x20) * *(double *)(lVar9 + 0x98) *
                  *(double *)(lVar15 + 0x78);
          dVar4 = (double)((ulonglong)uVar25 << 0x20) * *(double *)(lVar9 + 0x90) *
                  *(double *)(lVar15 + 0x70);
        }
        cVar14 = FUN_144a7ee82(lVar9);
        dVar18 = DAT_14c8464f0;
        dVar20 = DAT_14c8464e0;
        dVar22 = DAT_14c8464e8;
        if (cVar14 == '\0') {
          FUN_147101ec6(lVar9,&local_118);
          dVar22 = *(double *)(lVar15 + 0x88);
          dVar5 = *(double *)(lVar15 + 0x90);
          dVar6 = *(double *)(lVar15 + 0x98);
          dVar18 = local_d8 * dVar6 + local_108 * dVar22 + local_f0 * dVar5;
          dVar20 = dVar6 * local_e8 + dVar22 * local_118 + dVar5 * local_100;
          dVar22 = local_e0 * dVar6 + local_110 * dVar22 + local_f8 * dVar5;
        }
      }
      *(double *)(lVar8 + 0xf0) = *(double *)(lVar8 + 0xf0) - dVar21 * dVar11;
      *(double *)(lVar8 + 0xf8) = *(double *)(lVar8 + 0xf8) - dVar19 * dVar11;
      *(double *)(lVar8 + 0x100) = *(double *)(lVar8 + 0x100) - local_130 * dVar11;
      *(double *)(lVar8 + 0xd8) = *(double *)(lVar8 + 0xd8) - dVar2 * dVar11;
      *(double *)(lVar8 + 0xe0) = *(double *)(lVar8 + 0xe0) - dVar13 * dVar11;
      *(double *)(lVar8 + 0xe8) = *(double *)(lVar8 + 0xe8) - dVar12 * dVar11;
      if (lVar9 != 0) {
        *(double *)(lVar9 + 0xf0) = *(double *)(lVar9 + 0xf0) - dVar4 * dVar11;
        *(double *)(lVar9 + 0xf8) = *(double *)(lVar9 + 0xf8) - dVar3 * dVar11;
        *(double *)(lVar9 + 0x100) = *(double *)(lVar9 + 0x100) - dVar1 * dVar11;
        *(double *)(lVar9 + 0xd8) = *(double *)(lVar9 + 0xd8) - dVar20 * dVar11;
        *(double *)(lVar9 + 0xe0) = *(double *)(lVar9 + 0xe0) - dVar22 * dVar11;
        *(double *)(lVar9 + 0xe8) = *(double *)(lVar9 + 0xe8) - dVar18 * dVar11;
      }
      uVar10 = ~-(ulonglong)(dVar17 < 9.99999993922529e-09) & local_128._0_8_;
      uVar23 = (undefined4)uVar10;
      uVar24 = (undefined4)(uVar10 >> 0x20);
      uVar10 = ~CONCAT44(uVar27,uVar26) & local_128._8_8_;
      lVar15 = lVar15 + 0x2d0;
      uVar26 = (undefined4)uVar10;
      uVar27 = (undefined4)(uVar10 >> 0x20);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  if ((local_d0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar24,uVar23);
}



// FUNCTION 147116ede FUN_147116ede body=1922 status=ok
// SIG undefined FUN_147116ede(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147116ede(longlong param_1)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined1 auStack_248 [40];
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined1 local_1b8 [96];
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
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar8 = (longlong)*(int *)(param_1 + 8);
  if (lVar8 < 1) {
    dVar9 = 0.0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x10);
    dVar10 = (double)_DAT_14c760090;
    dVar9 = 0.0;
    local_1e8 = dVar10;
    do {
      uVar16 = 0x3ff00000;
      if (dVar10 < *(double *)(lVar7 + 0x1d8) || dVar10 == *(double *)(lVar7 + 0x1d8)) {
        lVar4 = *(longlong *)(lVar7 + 0x20);
        lVar5 = *(longlong *)(lVar7 + 0x30);
        local_1d0 = dVar9;
        FUN_140b8ca25(*(undefined4 *)(lVar7 + 0x38),lVar7);
        if (lVar4 != 0) {
          FUN_144941734(lVar4,&local_158);
        }
        if (lVar5 != 0) {
          FUN_144941734(lVar5,local_1b8);
        }
        local_1c8 = (double)FUN_14711e084(lVar7);
        if (lVar4 == 0) {
          local_200 = DAT_14c8464f0;
          local_1f0 = DAT_14c8464f0;
          local_1f8 = DAT_14c8464e0;
          dVar9 = DAT_14c8464e8;
          dVar10 = DAT_14c8464e0;
          dVar2 = DAT_14c8464e8;
        }
        else {
          cVar6 = FUN_144a7ee82(lVar4);
          local_1f0 = DAT_14c8464f0;
          dVar9 = DAT_14c8464e8;
          dVar10 = DAT_14c8464e0;
          if (cVar6 == '\0') {
            bVar3 = *(byte *)(lVar4 + 0x21);
            dVar9 = 1.0;
            if ((bVar3 & 0x20) != 0) {
              dVar9 = 0.0;
            }
            uVar17 = uVar16;
            if ((bVar3 & 0x10) != 0) {
              uVar17 = 0;
            }
            uVar20 = uVar16;
            if ((bVar3 & 8) != 0) {
              uVar20 = 0;
            }
            local_1f0 = dVar9 * *(double *)(lVar4 + 0xa0) * *(double *)(lVar7 + 0x50);
            dVar9 = (double)((ulonglong)uVar17 << 0x20) * *(double *)(lVar4 + 0x98) *
                    *(double *)(lVar7 + 0x48);
            dVar10 = (double)((ulonglong)uVar20 << 0x20) * *(double *)(lVar4 + 0x90) *
                     *(double *)(lVar7 + 0x40);
          }
          cVar6 = FUN_144a7ee82(lVar4);
          if (cVar6 == '\0') {
            FUN_147101ec6(lVar4,&local_158);
            dVar2 = *(double *)(lVar7 + 0x58);
            dVar13 = *(double *)(lVar7 + 0x60);
            dVar11 = *(double *)(lVar7 + 0x68);
            local_200 = local_118 * dVar11 + local_148 * dVar2 + local_130 * dVar13;
            local_1f8 = dVar11 * local_128 + dVar2 * local_158 + dVar13 * local_140;
            dVar2 = local_120 * dVar11 + local_150 * dVar2 + local_138 * dVar13;
          }
          else {
            local_1f8 = DAT_14c8464e0;
            local_200 = DAT_14c8464f0;
            dVar2 = DAT_14c8464e8;
          }
        }
        if (lVar5 == 0) {
          uVar14 = SUB84(DAT_14c8464e0,0);
          uVar15 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
          uVar18 = SUB84(DAT_14c8464e8,0);
          uVar19 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
          local_218 = DAT_14c8464e0;
          local_210 = DAT_14c8464e8;
          local_208 = DAT_14c8464f0;
LAB_1471170f8:
          local_110 = (double)CONCAT44(uVar15,uVar14);
          local_108 = (double)CONCAT44(uVar19,uVar18);
          dVar13 = *(double *)(lVar7 + 0x88);
          dVar11 = *(double *)(lVar7 + 0x90);
          dVar12 = *(double *)(lVar7 + 0x98);
          local_220 = DAT_14c8464f0;
        }
        else {
          cVar6 = FUN_144a7ee82(lVar5);
          if (cVar6 == '\0') {
            bVar3 = *(byte *)(lVar5 + 0x21);
            dVar13 = 1.0;
            if ((bVar3 & 0x20) != 0) {
              dVar13 = 0.0;
            }
            dVar11 = 1.0;
            if ((bVar3 & 0x10) != 0) {
              dVar11 = 0.0;
            }
            if ((bVar3 & 8) != 0) {
              uVar16 = 0;
            }
            local_208 = dVar13 * *(double *)(lVar5 + 0xa0) * *(double *)(lVar7 + 0x80);
            local_210 = dVar11 * *(double *)(lVar5 + 0x98) * *(double *)(lVar7 + 0x78);
            local_218 = (double)((ulonglong)uVar16 << 0x20) * *(double *)(lVar5 + 0x90) *
                        *(double *)(lVar7 + 0x70);
          }
          else {
            local_218 = DAT_14c8464e0;
            local_210 = DAT_14c8464e8;
            local_208 = DAT_14c8464f0;
          }
          cVar6 = FUN_144a7ee82(lVar5);
          if (cVar6 != '\0') {
            uVar14 = SUB84(DAT_14c8464e0,0);
            uVar15 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
            uVar18 = SUB84(DAT_14c8464e8,0);
            uVar19 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
            goto LAB_1471170f8;
          }
          FUN_147101ec6(lVar5,&local_158);
          dVar13 = *(double *)(lVar7 + 0x88);
          dVar11 = *(double *)(lVar7 + 0x90);
          dVar12 = *(double *)(lVar7 + 0x98);
          local_220 = local_118 * dVar12 + local_148 * dVar13 + local_130 * dVar11;
          local_108 = local_120 * dVar12 + local_150 * dVar13 + local_138 * dVar11;
          local_110 = local_128 * dVar12 + local_158 * dVar13 + local_140 * dVar11;
        }
        dVar1 = *(double *)(lVar7 + 0x218);
        dVar13 = local_1c8 *
                 (1.0 / (dVar12 * local_220 + dVar13 * local_110 + dVar11 * local_108 +
                        *(double *)(lVar7 + 0x80) * local_208 +
                        *(double *)(lVar7 + 0x70) * local_218 +
                        *(double *)(lVar7 + 0x78) * local_210 +
                        *(double *)(lVar7 + 0x68) * local_200 +
                        *(double *)(lVar7 + 0x58) * local_1f8 + *(double *)(lVar7 + 0x60) * dVar2 +
                        *(double *)(lVar7 + 0x50) * local_1f0 +
                        *(double *)(lVar7 + 0x40) * dVar10 + *(double *)(lVar7 + 0x48) * dVar9)) +
                 dVar1;
        dVar13 = (double)(~-(ulonglong)(ABS(dVar13) < 0.0001) & (ulonglong)dVar13);
        *(double *)(lVar7 + 0x218) = dVar13;
        dVar13 = dVar13 - dVar1;
        local_158 = dVar10 * dVar13;
        local_150 = dVar9 * dVar13;
        local_148 = local_1f0 * dVar13;
        local_140 = local_1f8 * dVar13;
        local_138 = dVar2 * dVar13;
        local_130 = local_200 * dVar13;
        local_128 = local_218 * dVar13;
        local_120 = local_210 * dVar13;
        local_118 = local_208 * dVar13;
        local_110 = local_110 * dVar13;
        local_108 = local_108 * dVar13;
        local_100 = local_220 * dVar13;
        local_1e0 = dVar2;
        local_1d8 = dVar9;
        if (lVar4 != 0) {
          FUN_1470ff5f8(lVar4,&local_158,&local_140);
        }
        if (lVar5 != 0) {
          FUN_1470ff5f8(lVar5,&local_128,&local_110);
        }
        dVar9 = local_1d0 + ABS(dVar13);
        dVar10 = local_1e8;
      }
      lVar7 = lVar7 + 0x2d0;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(dVar9);
  }
  return;
}



// FUNCTION 147117662 FUN_147117662 body=120 status=ok
// SIG undefined FUN_147117662(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147117662(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) && (0 < *(int *)(param_1 + 8))) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218 + lVar3) = 0;
      dVar1 = (double)_DAT_14c760090;
      dVar4 = (double)FUN_1471176da(*(longlong *)(param_1 + 0x10) + lVar3);
      if (dVar1 <= dVar4) {
        dVar4 = dVar1;
      }
      *(double *)(*(longlong *)(param_1 + 0x10) + 0x1d8 + lVar3) = dVar4;
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x2d0;
    } while (lVar2 < *(int *)(param_1 + 8));
  }
  return;
}



// FUNCTION 1471176da FUN_1471176da body=152 status=ok
// SIG undefined FUN_1471176da(void)

void FUN_1471176da(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x38) < 6) {
    if (*(longlong *)(param_1 + 0x290) == 0) {
      FUN_14711869a(param_1,local_58);
      uVar2 = local_58[*(int *)(param_1 + 0x38)];
LAB_14711774e:
      if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(uVar2);
    }
  }
  else if (*(longlong *)(param_1 + 0x290) == 0) {
    uVar2 = 0;
    goto LAB_14711774e;
  }
  plVar1 = (longlong *)(param_1 + 0x2b0);
  if (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x2a0);
  }
  (**(code **)(*plVar1 + 8))();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 14711778c FUN_14711778c body=2624 status=ok
// SIG undefined FUN_14711778c(void)

double FUN_14711778c(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  void *_Dst;
  void *_Dst_00;
  void *_Dst_01;
  void *_Dst_02;
  undefined8 uVar8;
  double dVar9;
  size_t _Size;
  bool bVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  int iVar17;
  size_t _Size_00;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  lVar7 = *(longlong *)(param_1 + 0x20);
  lVar18 = *(longlong *)(param_1 + 0x10);
  iVar17 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x58);
  lVar12 = (longlong)iVar4;
  iVar5 = *(int *)(param_1 + 0x5c);
  _Dst = *(void **)(param_1 + 0x38);
  _Dst_00 = *(void **)(param_1 + 0x40);
  _Dst_01 = *(void **)(param_1 + 0x48);
  _Dst_02 = *(void **)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  iVar6 = *(int *)(param_1 + 0x50);
  lVar15 = *(longlong *)(lVar7 + 8);
  _Size = (longlong)*(int *)(lVar7 + 0x10) * 0x30;
  memset(_Dst,0,_Size);
  memset(_Dst_00,0,_Size);
  _Size_00 = (longlong)iVar6 << 3;
  memset(_Dst_01,0,_Size_00);
  memset(_Dst_02,0,_Size_00);
  if (lVar12 < 1) {
    dVar9 = 0.0;
  }
  else {
    lVar19 = 0;
    dVar9 = 0.0;
    do {
      lVar13 = *(longlong *)
                (*(longlong *)(lVar15 + (longlong)*(int *)(lVar18 + 0x28 + lVar19) * 8) + 0x2b8);
      dVar20 = (*(double *)(lVar18 + 0x1d0 + lVar19) -
               *(double *)
                (lVar13 + 0x6a8 +
                (longlong)*(int *)(lVar13 + 0x5d0 + (longlong)*(int *)(lVar18 + 0x38 + lVar19) * 4)
                * 8)) * *(double *)(lVar18 + 0x1e0 + lVar19);
      if (*(char *)(lVar18 + 0x210 + lVar19) == '\x01') {
        dVar1 = *(double *)(lVar18 + 0x218 + lVar19);
        dVar20 = dVar20 + dVar1;
        *(double *)(lVar18 + 0x218 + lVar19) = dVar20;
        if (0.0 < *(double *)(lVar18 + 0x208 + lVar19) * dVar20) {
          *(undefined8 *)(lVar18 + 0x218 + lVar19) = 0;
          dVar20 = 0.0;
        }
        dVar20 = dVar20 - dVar1;
      }
      dVar1 = *(double *)(lVar18 + 0x1f0 + lVar19);
      if (0.0 <= dVar1) {
        dVar21 = *(double *)(lVar18 + 0x218 + lVar19);
        dVar20 = dVar20 + dVar21;
        if (dVar1 <= dVar20) {
          dVar20 = dVar1;
        }
        if (dVar20 <= -dVar1) {
          dVar20 = -dVar1;
        }
        dVar20 = dVar20 - dVar21;
        *(double *)(lVar18 + 0x218 + lVar19) = dVar20;
      }
      dVar9 = dVar9 + ABS(dVar20);
      *(double *)((longlong)_Dst_01 + (longlong)*(int *)(lVar18 + 0x18 + lVar19) * 8) = dVar20;
      FUN_1470fee40(lVar7,*(undefined4 *)(lVar18 + 0x28 + lVar19),_Dst_01,_Dst_00,_Dst_02,uVar8,_Dst
                   );
      FUN_147100e28(lVar7,_Dst_02,uVar8,_Dst);
      memset(_Dst,0,_Size);
      memset(_Dst_00,0,_Size);
      memset(_Dst_01,0,_Size_00);
      memset(_Dst_02,0,_Size_00);
      lVar19 = lVar19 + 0x2d0;
    } while (lVar12 * 0x2d0 != lVar19);
  }
  FUN_147100de6(lVar7);
  if (iVar4 < iVar5) {
    do {
      lVar19 = lVar12 * 0x2d0;
      lVar15 = lVar18 + lVar19;
      iVar4 = *(int *)(lVar18 + 0x28 + lVar19);
      iVar6 = *(int *)(lVar18 + 0x18 + lVar19);
      if (iVar4 <= iVar6) {
        iVar4 = iVar6;
      }
      dVar21 = (double)FUN_140b8cb78(lVar15);
      dVar20 = *(double *)(lVar18 + 0x1f0 + lVar19);
      dVar1 = *(double *)(lVar18 + 0x218 + lVar19);
      dVar22 = (*(double *)(lVar18 + 0x1d0 + lVar19) - dVar21) *
               *(double *)(lVar18 + 0x1e0 + lVar19) + dVar1;
      dVar21 = 0.0;
      if (dVar22 <= 0.0) {
        dVar21 = dVar22;
      }
      *(double *)(lVar18 + 0x218 + lVar19) = dVar21;
      dVar21 = dVar21 - dVar1;
      if (dVar20 <= dVar21) {
        dVar21 = dVar20;
      }
      if (dVar21 <= -dVar20) {
        dVar21 = -dVar20;
      }
      dVar20 = *(double *)(lVar18 + 200 + lVar19);
      dVar1 = *(double *)(lVar18 + 0xc0 + lVar19);
      dVar22 = *(double *)(lVar18 + 0xb8 + lVar19);
      dVar2 = *(double *)(lVar18 + 0xb0 + lVar19);
      dVar3 = *(double *)(lVar18 + 0xa8 + lVar19);
      lVar13 = (longlong)iVar6 * 0x30;
      *(double *)((longlong)_Dst_00 + lVar13) = *(double *)(lVar18 + 0xa0 + lVar19) * dVar21;
      *(double *)((longlong)_Dst_00 + lVar13 + 8) = dVar3 * dVar21;
      *(double *)((longlong)_Dst_00 + lVar13 + 0x10) = dVar2 * dVar21;
      *(double *)((longlong)_Dst_00 + lVar13 + 0x18) = dVar22 * dVar21;
      *(double *)((longlong)_Dst_00 + lVar13 + 0x20) = dVar1 * dVar21;
      *(double *)((longlong)_Dst_00 + lVar13 + 0x28) = dVar20 * dVar21;
      lVar19 = (longlong)*(int *)(lVar18 + 0x28 + lVar19);
      if (lVar19 != -1) {
        dVar20 = *(double *)(lVar15 + 0xf8);
        dVar1 = *(double *)(lVar15 + 0xf0);
        dVar22 = *(double *)(lVar15 + 0xe8);
        dVar2 = *(double *)(lVar15 + 0xe0);
        dVar3 = *(double *)(lVar15 + 0xd8);
        lVar19 = lVar19 * 0x30;
        *(double *)((longlong)_Dst_00 + lVar19) = *(double *)(lVar15 + 0xd0) * dVar21;
        *(double *)((longlong)_Dst_00 + lVar19 + 8) = dVar3 * dVar21;
        *(double *)((longlong)_Dst_00 + lVar19 + 0x10) = dVar2 * dVar21;
        *(double *)((longlong)_Dst_00 + lVar19 + 0x18) = dVar22 * dVar21;
        *(double *)((longlong)_Dst_00 + lVar19 + 0x20) = dVar1 * dVar21;
        *(double *)((longlong)_Dst_00 + lVar19 + 0x28) = dVar20 * dVar21;
      }
      dVar9 = dVar9 + ABS(dVar21);
      lVar19 = 1;
      bVar16 = false;
      do {
        lVar19 = lVar19 * 0x2d0;
        lVar13 = lVar19 + lVar15;
        dVar21 = (double)FUN_140b8cb78(lVar13);
        dVar20 = *(double *)(lVar15 + 0x1f0 + lVar19);
        dVar1 = *(double *)(lVar15 + 0x218 + lVar19);
        dVar21 = (*(double *)(lVar15 + 0x1d0 + lVar19) - dVar21) *
                 *(double *)(lVar15 + 0x1e0 + lVar19) + dVar1;
        if (dVar20 <= dVar21) {
          dVar21 = dVar20;
        }
        if (dVar21 <= -dVar20) {
          dVar21 = -dVar20;
        }
        dVar21 = dVar21 - dVar1;
        *(double *)(lVar15 + 0x218 + lVar19) = dVar21;
        dVar20 = *(double *)(lVar15 + 200 + lVar19);
        dVar1 = *(double *)(lVar15 + 0xc0 + lVar19);
        dVar22 = *(double *)(lVar15 + 0xb8 + lVar19);
        dVar2 = *(double *)(lVar15 + 0xb0 + lVar19);
        dVar3 = *(double *)(lVar15 + 0xa8 + lVar19);
        lVar14 = (longlong)*(int *)(lVar15 + 0x18 + lVar19) * 0x30;
        *(double *)((longlong)_Dst_00 + lVar14) =
             *(double *)(lVar15 + 0xa0 + lVar19) * dVar21 + *(double *)((longlong)_Dst_00 + lVar14);
        *(double *)((longlong)_Dst_00 + lVar14 + 8) =
             dVar3 * dVar21 + *(double *)((longlong)_Dst_00 + lVar14 + 8);
        *(double *)((longlong)_Dst_00 + lVar14 + 0x10) =
             dVar2 * dVar21 + *(double *)((longlong)_Dst_00 + lVar14 + 0x10);
        *(double *)((longlong)_Dst_00 + lVar14 + 0x18) =
             dVar22 * dVar21 + *(double *)((longlong)_Dst_00 + lVar14 + 0x18);
        *(double *)((longlong)_Dst_00 + lVar14 + 0x20) =
             dVar1 * dVar21 + *(double *)((longlong)_Dst_00 + lVar14 + 0x20);
        *(double *)((longlong)_Dst_00 + lVar14 + 0x28) =
             dVar20 * dVar21 + *(double *)((longlong)_Dst_00 + lVar14 + 0x28);
        lVar19 = (longlong)*(int *)(lVar15 + 0x28 + lVar19);
        if (lVar19 != -1) {
          dVar20 = *(double *)(lVar13 + 0xf8);
          dVar1 = *(double *)(lVar13 + 0xf0);
          dVar22 = *(double *)(lVar13 + 0xe8);
          dVar2 = *(double *)(lVar13 + 0xe0);
          dVar3 = *(double *)(lVar13 + 0xd8);
          lVar19 = lVar19 * 0x30;
          *(double *)((longlong)_Dst_00 + lVar19) =
               *(double *)(lVar13 + 0xd0) * dVar21 + *(double *)((longlong)_Dst_00 + lVar19);
          *(double *)((longlong)_Dst_00 + lVar19 + 8) =
               dVar3 * dVar21 + *(double *)((longlong)_Dst_00 + lVar19 + 8);
          *(double *)((longlong)_Dst_00 + lVar19 + 0x10) =
               dVar2 * dVar21 + *(double *)((longlong)_Dst_00 + lVar19 + 0x10);
          *(double *)((longlong)_Dst_00 + lVar19 + 0x18) =
               dVar22 * dVar21 + *(double *)((longlong)_Dst_00 + lVar19 + 0x18);
          *(double *)((longlong)_Dst_00 + lVar19 + 0x20) =
               dVar1 * dVar21 + *(double *)((longlong)_Dst_00 + lVar19 + 0x20);
          *(double *)((longlong)_Dst_00 + lVar19 + 0x28) =
               dVar20 * dVar21 + *(double *)((longlong)_Dst_00 + lVar19 + 0x28);
        }
        dVar9 = dVar9 + ABS(dVar21);
        lVar19 = 2;
        bVar10 = !bVar16;
        bVar16 = true;
      } while (bVar10);
      FUN_1470fee40(lVar7,iVar4,_Dst_01,_Dst_00,_Dst_02,uVar8,_Dst);
      FUN_147100e28(lVar7,_Dst_02,uVar8,_Dst);
      FUN_147100de6(lVar7);
      memset(_Dst,0,_Size);
      memset(_Dst_00,0,_Size);
      memset(_Dst_01,0,_Size_00);
      memset(_Dst_02,0,_Size_00);
      lVar12 = lVar12 + 3;
    } while (lVar12 < iVar5);
  }
  if (iVar5 < iVar17) {
    iVar17 = iVar17 - iVar5;
    lVar18 = lVar18 + (longlong)iVar5 * 0x2d0;
    do {
      dVar21 = (double)FUN_140b8cb78(lVar18);
      dVar20 = *(double *)(lVar18 + 0x1f0);
      dVar1 = *(double *)(lVar18 + 0x218);
      dVar21 = (*(double *)(lVar18 + 0x1d0) - dVar21) * *(double *)(lVar18 + 0x1e0) + dVar1;
      if (dVar20 <= dVar21) {
        dVar21 = dVar20;
      }
      if (dVar21 <= -dVar20) {
        dVar21 = -dVar20;
      }
      *(double *)(lVar18 + 0x218) = dVar21;
      dVar21 = dVar21 - dVar1;
      dVar20 = *(double *)(lVar18 + 200);
      dVar1 = *(double *)(lVar18 + 0xc0);
      dVar22 = *(double *)(lVar18 + 0xb8);
      dVar2 = *(double *)(lVar18 + 0xb0);
      dVar3 = *(double *)(lVar18 + 0xa8);
      lVar15 = (longlong)*(int *)(lVar18 + 0x18) * 0x30;
      *(double *)((longlong)_Dst_00 + lVar15) = *(double *)(lVar18 + 0xa0) * dVar21;
      *(double *)((longlong)_Dst_00 + lVar15 + 8) = dVar3 * dVar21;
      *(double *)((longlong)_Dst_00 + lVar15 + 0x10) = dVar2 * dVar21;
      *(double *)((longlong)_Dst_00 + lVar15 + 0x18) = dVar22 * dVar21;
      *(double *)((longlong)_Dst_00 + lVar15 + 0x20) = dVar1 * dVar21;
      *(double *)((longlong)_Dst_00 + lVar15 + 0x28) = dVar20 * dVar21;
      if ((longlong)*(int *)(lVar18 + 0x28) == -1) {
        if ((*(longlong *)(lVar18 + 0x30) != 0) && (cVar11 = FUN_144a7ee82(), cVar11 == '\0')) {
          dVar20 = *(double *)(lVar18 + 0x80);
          dVar1 = *(double *)(lVar18 + 0x78);
          lVar15 = *(longlong *)(lVar18 + 0x30);
          *(double *)(lVar15 + 0xf0) =
               *(double *)(lVar15 + 0xf0) - *(double *)(lVar18 + 0x70) * dVar21;
          *(double *)(lVar15 + 0xf8) = *(double *)(lVar15 + 0xf8) - dVar1 * dVar21;
          *(double *)(lVar15 + 0x100) = *(double *)(lVar15 + 0x100) - dVar20 * dVar21;
          dVar20 = *(double *)(lVar18 + 0x98);
          dVar1 = *(double *)(lVar18 + 0x90);
          lVar15 = *(longlong *)(lVar18 + 0x30);
          *(double *)(lVar15 + 0xd8) =
               *(double *)(lVar15 + 0xd8) - *(double *)(lVar18 + 0x88) * dVar21;
          *(double *)(lVar15 + 0xe0) = *(double *)(lVar15 + 0xe0) - dVar1 * dVar21;
          *(double *)(lVar15 + 0xe8) = *(double *)(lVar15 + 0xe8) - dVar20 * dVar21;
        }
      }
      else {
        dVar20 = *(double *)(lVar18 + 0xf8);
        dVar1 = *(double *)(lVar18 + 0xf0);
        dVar22 = *(double *)(lVar18 + 0xe8);
        dVar2 = *(double *)(lVar18 + 0xe0);
        dVar3 = *(double *)(lVar18 + 0xd8);
        lVar15 = (longlong)*(int *)(lVar18 + 0x28) * 0x30;
        *(double *)((longlong)_Dst_00 + lVar15) = *(double *)(lVar18 + 0xd0) * dVar21;
        *(double *)((longlong)_Dst_00 + lVar15 + 8) = dVar3 * dVar21;
        *(double *)((longlong)_Dst_00 + lVar15 + 0x10) = dVar2 * dVar21;
        *(double *)((longlong)_Dst_00 + lVar15 + 0x18) = dVar22 * dVar21;
        *(double *)((longlong)_Dst_00 + lVar15 + 0x20) = dVar1 * dVar21;
        *(double *)((longlong)_Dst_00 + lVar15 + 0x28) = dVar20 * dVar21;
      }
      dVar9 = dVar9 + ABS(dVar21);
      iVar4 = *(int *)(lVar18 + 0x18);
      if (*(int *)(lVar18 + 0x18) < *(int *)(lVar18 + 0x28)) {
        iVar4 = *(int *)(lVar18 + 0x28);
      }
      FUN_1470fee40(lVar7,iVar4,_Dst_01,_Dst_00,_Dst_02,uVar8,_Dst);
      FUN_147100e28(lVar7,_Dst_02,uVar8,_Dst);
      FUN_147100de6(lVar7);
      memset(_Dst,0,_Size);
      memset(_Dst_00,0,_Size);
      memset(_Dst_01,0,_Size_00);
      memset(_Dst_02,0,_Size_00);
      lVar18 = lVar18 + 0x2d0;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  return dVar9;
}



// FUNCTION 1471181d2 FUN_1471181d2 body=1051 status=ok
// SIG undefined FUN_1471181d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1471181d2(longlong param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  byte bVar14;
  bool bVar15;
  double dVar16;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  double local_238;
  double local_230;
  double local_228;
  double local_218;
  double dStack_210;
  double local_208;
  undefined1 local_1d8 [32];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_170;
  double local_168;
  undefined2 local_15a;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  double local_130 [4];
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (*(int *)(lVar3 + 0x10) < 1) {
    uVar12 = 0;
  }
  else {
    uVar12 = **(undefined8 **)(lVar3 + 8);
  }
  lVar11 = *(longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 8);
  iVar8 = *(int *)(param_1 + 0x58);
  lVar13 = (longlong)iVar8;
  cVar7 = FUN_144a7ee82(uVar12);
  dVar4 = 0.0;
  dVar1 = 0.0;
  if ((cVar7 == '\0') && (dVar1 = 0.0, iVar8 < iVar2)) {
    dVar5 = (double)_DAT_14c760090;
    lVar11 = lVar11 + lVar13 * 0x2d0;
    do {
      if ((dVar5 < *(double *)(lVar11 + 0x1d8) || dVar5 == *(double *)(lVar11 + 0x1d8)) &&
         (cVar7 = FUN_14711ebed(lVar11,&local_168,&local_f8,&local_170), cVar7 != '\0')) {
        dVar1 = *(double *)(lVar11 + 0x218);
        dVar16 = (*(double *)(lVar11 + 0x1d8) - local_170) * (double)DAT_14c9abca0 * local_168 +
                 dVar1;
        dVar6 = 0.0;
        if (0.0 <= dVar16) {
          dVar6 = dVar16;
        }
        *(double *)(lVar11 + 0x218) = dVar6;
        dVar6 = dVar6 - dVar1;
        local_148 = local_e8 * dVar6;
        local_150 = local_f0 * dVar6;
        local_158 = local_f8 * dVar6;
        local_130[0] = local_d0 * dVar6;
        local_138 = local_d8 * dVar6;
        local_140 = local_e0 * dVar6;
        local_130[3] = local_b8 * dVar6;
        local_130[2] = local_c0 * dVar6;
        local_130[1] = local_c8 * dVar6;
        local_100 = local_a0 * dVar6;
        local_108 = local_a8 * dVar6;
        local_110 = local_b0 * dVar6;
        if (*(undefined8 **)(lVar11 + 0x20) == (undefined8 *)0x0) {
          bVar15 = false;
        }
        else {
          iVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x20))();
          bVar15 = iVar8 == 1;
        }
        dVar4 = dVar4 + ABS(dVar6);
        FUN_144941734(uVar12,local_1d8);
        FUN_1409acb1a(lVar3,&local_238);
        bVar14 = bVar15 ^ 1;
        uVar10 = (ulonglong)((uint)bVar14 + (uint)bVar14);
        uVar9 = (ulonglong)((uint)bVar14 * 2 + 1);
        local_238 = (double)(&local_158)[uVar10 * 3] -
                    ((dStack_1b0 - dStack_210) * (&local_148)[uVar9 * 3] -
                    (local_1a8 - local_208) * (double)(&local_150)[uVar9 * 3]);
        local_228 = (&local_148)[uVar10 * 3] -
                    ((local_1b8 - local_218) * (double)(&local_150)[uVar9 * 3] -
                    (double)(&local_158)[uVar9 * 3] * (dStack_1b0 - dStack_210));
        local_230 = (double)(&local_150)[uVar10 * 3] -
                    ((local_1a8 - local_208) * (double)(&local_158)[uVar9 * 3] -
                    (local_1b8 - local_218) * (&local_148)[uVar9 * 3]);
        local_248 = (&local_148)[uVar9 * 3];
        local_258 = *(undefined4 *)(&local_158 + uVar9 * 3);
        uStack_254 = *(undefined4 *)((longlong)&local_158 + uVar9 * 0x18 + 4);
        uStack_250 = *(undefined4 *)(&local_150 + uVar9 * 3);
        uStack_24c = *(undefined4 *)((longlong)&local_150 + uVar9 * 0x18 + 4);
        FUN_1470ff5f8(uVar12,&local_238,&local_258);
        local_15a = 0x100;
        FUN_1448f22e4(lVar3,&local_15a);
      }
      lVar13 = lVar13 + 3;
      lVar11 = lVar11 + 0x870;
      dVar1 = dVar4;
    } while (lVar13 < iVar2);
  }
  if ((local_90 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar1;
}



// FUNCTION 1471185ee FUN_1471185ee body=127 status=ok
// SIG undefined FUN_1471185ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1471185ee(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (lVar3 = (longlong)*(int *)(param_1 + 0x58), *(int *)(param_1 + 0x58) < *(int *)(param_1 + 8)))
  {
    lVar2 = lVar3 * 0x2d0;
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218 + lVar2) = 0;
      dVar1 = (double)_DAT_14c760090;
      dVar4 = (double)FUN_1471176da(*(longlong *)(param_1 + 0x10) + lVar2);
      if (dVar1 <= dVar4) {
        dVar4 = dVar1;
      }
      *(double *)(*(longlong *)(param_1 + 0x10) + 0x1d8 + lVar2) = dVar4;
      lVar3 = lVar3 + 3;
      lVar2 = lVar2 + 0x870;
    } while (lVar3 < *(int *)(param_1 + 8));
  }
  return;
}



// FUNCTION 14711866e FUN_14711866e body=28 status=ok
// SIG undefined FUN_14711866e(void)

undefined8 FUN_14711866e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1471176da();
  *param_2 = uVar1;
  return 1;
}


