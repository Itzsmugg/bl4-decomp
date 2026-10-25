// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1497bf06c FUN_1497bf06c body=325 status=ok
// SIG undefined FUN_1497bf06c(void)

undefined8 * FUN_1497bf06c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be682e0;
  local_60 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0x447a000000000000;
  *(undefined2 *)(param_1 + 0x36) = 0x100;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1ac);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x37;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bf1b2 FUN_1497bf1b2 body=25 status=ok
// SIG undefined FUN_1497bf1b2(void)

undefined8 FUN_1497bf1b2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497bf1ea FUN_1497bf1ea body=22 status=ok
// SIG undefined FUN_1497bf1ea(void)

undefined8 FUN_1497bf1ea(undefined8 param_1)

{
  FUN_1497bf200();
  return param_1;
}



// FUNCTION 1497bf200 FUN_1497bf200 body=153 status=ok
// SIG undefined FUN_1497bf200(void)

undefined8 * FUN_1497bf200(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x298,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497bf29a(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bf29a FUN_1497bf29a body=415 status=ok
// SIG undefined FUN_1497bf29a(void)

undefined8 * FUN_1497bf29a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be69490;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  FUN_1400b22c2(param_1 + 0x49,"Transform");
  FUN_1400b22c2(param_1 + 0x4b,&DAT_149e02088);
  param_1[0x4d] = 0x3e800000000;
  *(undefined2 *)(param_1 + 0x4e) = 0x100;
  local_88 = param_1 + 0x4f;
  param_1[0x51] = 0;
  param_1[0x52] = 0x8000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4d;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x26c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bf43a FUN_1497bf43a body=25 status=ok
// SIG undefined FUN_1497bf43a(void)

undefined8 FUN_1497bf43a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497bf472 FUN_1497bf472 body=22 status=ok
// SIG undefined FUN_1497bf472(void)

undefined8 FUN_1497bf472(undefined8 param_1)

{
  FUN_1497bf488();
  return param_1;
}



// FUNCTION 1497bf488 FUN_1497bf488 body=153 status=ok
// SIG undefined FUN_1497bf488(void)

undefined8 * FUN_1497bf488(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x278,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497bf522(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bf522 FUN_1497bf522 body=307 status=ok
// SIG undefined FUN_1497bf522(void)

undefined8 * FUN_1497bf522(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be69760;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4b;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bf656 FUN_1497bf656 body=25 status=ok
// SIG undefined FUN_1497bf656(void)

undefined8 FUN_1497bf656(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497bf68e FUN_1497bf68e body=22 status=ok
// SIG undefined FUN_1497bf68e(void)

undefined8 FUN_1497bf68e(undefined8 param_1)

{
  FUN_1497bf6a4();
  return param_1;
}



// FUNCTION 1497bf6a4 FUN_1497bf6a4 body=153 status=ok
// SIG undefined FUN_1497bf6a4(void)

undefined8 * FUN_1497bf6a4(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x278,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497bf73e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bf73e FUN_1497bf73e body=307 status=ok
// SIG undefined FUN_1497bf73e(void)

undefined8 * FUN_1497bf73e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be69a40;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4b;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bf872 FUN_1497bf872 body=120 status=ok
// SIG undefined FUN_1497bf872(void)

void FUN_1497bf872(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0xffffffff;
  local_18 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_2;
  local_28 = param_3;
  uVar1 = FUN_146fb8a66(param_1,&local_40,param_4);
  if (param_3 != 0) {
    FUN_146fb39ca(uVar1,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bf8ec FUN_1497bf8ec body=25 status=ok
// SIG undefined FUN_1497bf8ec(void)

undefined8 FUN_1497bf8ec(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497bf924 FUN_1497bf924 body=22 status=ok
// SIG undefined FUN_1497bf924(void)

undefined8 FUN_1497bf924(undefined8 param_1)

{
  FUN_1497bf93a();
  return param_1;
}



// FUNCTION 1497bf93a FUN_1497bf93a body=153 status=ok
// SIG undefined FUN_1497bf93a(void)

undefined8 * FUN_1497bf93a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x2b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497bf9d4(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bf9d4 FUN_1497bf9d4 body=483 status=ok
// SIG undefined FUN_1497bf9d4(void)

undefined8 * FUN_1497bf9d4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be69d20;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  puVar2 = param_1 + 0x49;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  local_90 = param_1 + 0x4d;
  param_1[0x4f] = 0;
  param_1[0x50] = 0x8000000000;
  param_1[0x53] = 0;
  param_1[0x54] = 0x8000000000;
  *(undefined1 *)(param_1 + 0x55) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_88 = param_1 + 0x51;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x51;
  FUN_146fb824a(param_1,&local_60,&local_80);
  puVar3 = local_90;
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar2;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  local_60 = (undefined8 *)0x0;
  FUN_1497a10d8(param_1,puVar2,puVar2,&local_60);
  local_60 = (undefined8 *)0x0;
  FUN_1497bf872(param_1,puVar3,puVar3,&local_60);
  local_60 = (undefined8 *)0x0;
  FUN_14979c37e(param_1,local_88,local_88,&local_60);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bfbb8 FUN_1497bfbb8 body=25 status=ok
// SIG undefined FUN_1497bfbb8(void)

undefined8 FUN_1497bfbb8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497bfbf0 FUN_1497bfbf0 body=22 status=ok
// SIG undefined FUN_1497bfbf0(void)

undefined8 FUN_1497bfbf0(undefined8 param_1)

{
  FUN_1497bfc06();
  return param_1;
}



// FUNCTION 1497bfc06 FUN_1497bfc06 body=153 status=ok
// SIG undefined FUN_1497bfc06(void)

undefined8 * FUN_1497bfc06(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497bfca0(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bfca0 FUN_1497bfca0 body=184 status=ok
// SIG undefined FUN_1497bfca0(void)

undefined8 * FUN_1497bfca0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be69fe0;
  puVar1 = param_1 + 0x33;
  param_1[0x35] = 0;
  param_1[0x36] = 0x8000000000;
  local_60 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = puVar1;
  FUN_146fb824a(param_1,&local_40);
  local_40 = (undefined8 *)0x0;
  FUN_1497bf872(param_1,puVar1,puVar1,&local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bfd5a FUN_1497bfd5a body=25 status=ok
// SIG undefined FUN_1497bfd5a(void)

undefined8 FUN_1497bfd5a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497bfd92 FUN_1497bfd92 body=22 status=ok
// SIG undefined FUN_1497bfd92(void)

undefined8 FUN_1497bfd92(undefined8 param_1)

{
  FUN_1497bfda8();
  return param_1;
}



// FUNCTION 1497bfda8 FUN_1497bfda8 body=153 status=ok
// SIG undefined FUN_1497bfda8(void)

undefined8 * FUN_1497bfda8(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1c8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497bfe42(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bfe42 FUN_1497bfe42 body=385 status=ok
// SIG undefined FUN_1497bfe42(void)

undefined8 * FUN_1497bfe42(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be6a2a0;
  puVar1 = param_1 + 0x33;
  param_1[0x35] = 0;
  param_1[0x36] = 0x8000000000;
  *(undefined4 *)(param_1 + 0x37) = 100;
  *(undefined1 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar2 = rand();
  iVar3 = (int)(((float)(uVar2 & 0x7fff) / 32767.0) * (float)0x48435040);
  iVar4 = 200000;
  if (iVar3 < 200000) {
    iVar4 = iVar3;
  }
  *(float *)(param_1 + 0x38) = (float)(iVar4 + -100000);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x37;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x38;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_14979c37e(param_1,puVar1,puVar1,&local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497bffc4 FUN_1497bffc4 body=25 status=ok
// SIG undefined FUN_1497bffc4(void)

undefined8 FUN_1497bffc4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497bfffc FUN_1497bfffc body=22 status=ok
// SIG undefined FUN_1497bfffc(void)

undefined8 FUN_1497bfffc(undefined8 param_1)

{
  FUN_1497c0012();
  return param_1;
}



// FUNCTION 1497c0012 FUN_1497c0012 body=153 status=ok
// SIG undefined FUN_1497c0012(void)

undefined8 * FUN_1497c0012(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x200,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497c00ac(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c00ac FUN_1497c00ac body=287 status=ok
// SIG undefined FUN_1497c00ac(void)

undefined8 * FUN_1497c00ac(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be6a570;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0x8000000000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x8000000000;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x8000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x38;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_14979c37e(param_1,param_1 + 0x3c,param_1 + 0x34,&local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c01cc FUN_1497c01cc body=25 status=ok
// SIG undefined FUN_1497c01cc(void)

undefined8 FUN_1497c01cc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c0204 FUN_1497c0204 body=22 status=ok
// SIG undefined FUN_1497c0204(void)

undefined8 FUN_1497c0204(undefined8 param_1)

{
  FUN_1497c021a();
  return param_1;
}



// FUNCTION 1497c021a FUN_1497c021a body=153 status=ok
// SIG undefined FUN_1497c021a(void)

undefined8 * FUN_1497c021a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x338,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497c02b4(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c02b4 FUN_1497c02b4 body=666 status=ok
// SIG undefined FUN_1497c02b4(void)

undefined8 * FUN_1497c02b4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be6aa20;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  FUN_1400b22c2(param_1 + 0x49,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x4b,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x4d) = 1;
  FUN_1400b22c2(param_1 + 0x4e,"Internal");
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_1400b22c2(param_1 + 0x51,&DAT_149dfbe6e);
  param_1[0x55] = 0;
  param_1[0x56] = 0x8000000000;
  local_a0 = param_1 + 0x57;
  param_1[0x59] = 0;
  param_1[0x5a] = 0x8000000000;
  local_98 = param_1 + 0x5b;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x8000000000;
  local_90 = param_1 + 0x5f;
  param_1[0x61] = 0;
  param_1[0x62] = 0x8000000000;
  local_88 = param_1 + 99;
  param_1[0x65] = 0;
  param_1[0x66] = 0x8000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x53;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c0550 FUN_1497c0550 body=25 status=ok
// SIG undefined FUN_1497c0550(void)

undefined8 FUN_1497c0550(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c0588 FUN_1497c0588 body=22 status=ok
// SIG undefined FUN_1497c0588(void)

undefined8 FUN_1497c0588(undefined8 param_1)

{
  FUN_1497c059e();
  return param_1;
}



// FUNCTION 1497c059e FUN_1497c059e body=145 status=ok
// SIG undefined FUN_1497c059e(void)

undefined8 * FUN_1497c059e(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  uVar1 = FUN_14001cc68(0x298,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497c0630(uVar1,&local_48);
  FUN_142ac2016(uVar1);
  FUN_146fb8b5a(uVar1);
  *param_1 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c0630 FUN_1497c0630 body=296 status=ok
// SIG undefined FUN_1497c0630(void)

undefined8 * FUN_1497c0630(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be6acf0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x8000000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0x8000000000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4b;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4f;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c075a FUN_1497c075a body=25 status=ok
// SIG undefined FUN_1497c075a(void)

undefined8 FUN_1497c075a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c09a8 FUN_1497c09a8 body=177 status=ok
// SIG undefined FUN_1497c09a8(void)

void FUN_1497c09a8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497c0a5a(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c0a5a FUN_1497c0a5a body=237 status=ok
// SIG undefined FUN_1497c0a5a(void)

void FUN_1497c0a5a(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
  *(undefined4 *)(local_48 + 3) = uVar5;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be6e570;
  lVar2 = *(longlong *)(param_4 + 4);
  if (lVar2 == 0) {
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    *(undefined4 *)(local_48 + 7) = *param_4;
    *(undefined4 *)((longlong)local_48 + 0x3c) = uVar3;
    *(undefined4 *)(local_48 + 8) = uVar4;
    *(undefined4 *)((longlong)local_48 + 0x44) = uVar5;
  }
  local_48[9] = lVar2;
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined4 *)(local_48 + 10) = param_4[6];
  *(undefined4 *)((longlong)local_48 + 0x54) = param_4[7];
  *(undefined8 *)(param_4 + 6) = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c0b48 FUN_1497c0b48 body=57 status=ok
// SIG undefined FUN_1497c0b48(void)

undefined8 * FUN_1497c0b48(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be6e570;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c0b82 FUN_1497c0b82 body=101 status=ok
// SIG undefined FUN_1497c0b82(void)

undefined8 * FUN_1497c0b82(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e580;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c0be8 FUN_1497c0be8 body=29 status=ok
// SIG undefined FUN_1497c0be8(void)

undefined8 FUN_1497c0be8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c0c06 FUN_1497c0c06 body=101 status=ok
// SIG undefined FUN_1497c0c06(void)

undefined8 * FUN_1497c0c06(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e580;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c0c6c FUN_1497c0c6c body=311 status=ok
// SIG undefined FUN_1497c0c6c(void)

longlong FUN_1497c0c6c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_1497c0da4(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c0da4 FUN_1497c0da4 body=226 status=ok
// SIG undefined FUN_1497c0da4(void)

void FUN_1497c0da4(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(puVar3 + 1) = 0;
  uVar2 = param_5[1];
  *(undefined8 *)((longlong)puVar3 + 0xc) = *param_5;
  *(undefined8 *)((longlong)puVar3 + 0x14) = uVar2;
  puVar3[4] = param_3;
  *(undefined4 *)(puVar3 + 5) = param_6;
  puVar3[6] = uVar1;
  *puVar3 = &PTR_FUN_14be6e590;
  puVar3[9] = 0;
  puVar3[10] = 0;
  FUN_144a69486(puVar3 + 7,param_4);
  local_50 = puVar3;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_50);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c0e88 FUN_1497c0e88 body=57 status=ok
// SIG undefined FUN_1497c0e88(void)

undefined8 * FUN_1497c0e88(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be6e590;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c0ec2 FUN_1497c0ec2 body=101 status=ok
// SIG undefined FUN_1497c0ec2(void)

undefined8 * FUN_1497c0ec2(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e5a0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c0f28 FUN_1497c0f28 body=29 status=ok
// SIG undefined FUN_1497c0f28(void)

undefined8 FUN_1497c0f28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c0f46 FUN_1497c0f46 body=101 status=ok
// SIG undefined FUN_1497c0f46(void)

undefined8 * FUN_1497c0f46(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e5a0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c0fac FUN_1497c0fac body=312 status=ok
// SIG undefined FUN_1497c0fac(void)

longlong FUN_1497c0fac(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_1496ffe0a(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 3) {
            param_3 = lVar1 + 0x48;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c10e6 FUN_1497c10e6 body=312 status=ok
// SIG undefined FUN_1497c10e6(void)

longlong FUN_1497c10e6(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_1497c1220(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 3) {
            param_3 = lVar1 + 0x48;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c1220 FUN_1497c1220 body=208 status=ok
// SIG undefined FUN_1497c1220(void)

void FUN_1497c1220(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_1497c12f2(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c12f2 FUN_1497c12f2 body=190 status=ok
// SIG undefined FUN_1497c12f2(void)

undefined8 *
FUN_1497c12f2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = &PTR_LAB_14be15148;
  *(undefined4 *)(param_1 + 1) = 3;
  local_28._0_4_ = (undefined4)uVar2;
  local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar3;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 2) = local_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 3) = uStack_20._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  param_1[7] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 8) = 0;
  local_28 = uVar2;
  uStack_20 = uVar3;
  FUN_1405bceb4(param_1 + 7);
  *param_1 = &PTR_FUN_14be6e5b0;
  param_1[7] = &PTR_FUN_14be6e5c0;
  lVar1 = *param_4;
  param_1[9] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c13b2 FUN_1497c13b2 body=53 status=ok
// SIG undefined FUN_1497c13b2(void)

longlong FUN_1497c13b2(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c13e8 FUN_1497c13e8 body=101 status=ok
// SIG undefined FUN_1497c13e8(void)

undefined8 * FUN_1497c13e8(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e5e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c144e FUN_1497c144e body=49 status=ok
// SIG undefined FUN_1497c144e(void)

undefined8 * FUN_1497c144e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -7);
  }
  return param_1 + -7;
}



// FUNCTION 1497c149e FUN_1497c149e body=32 status=ok
// SIG undefined FUN_1497c149e(void)

undefined8 FUN_1497c149e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TContextCacheElementUObject");
  return param_2;
}



// FUNCTION 1497c14be FUN_1497c14be body=29 status=ok
// SIG undefined FUN_1497c14be(void)

undefined8 FUN_1497c14be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c14dc FUN_1497c14dc body=101 status=ok
// SIG undefined FUN_1497c14dc(void)

undefined8 * FUN_1497c14dc(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e5e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c1542 FUN_1497c1542 body=22 status=ok
// SIG undefined FUN_1497c1542(void)

undefined8 FUN_1497c1542(undefined8 param_1)

{
  FUN_1497c1558();
  return param_1;
}



// FUNCTION 1497c1558 FUN_1497c1558 body=153 status=ok
// SIG undefined FUN_1497c1558(void)

undefined8 * FUN_1497c1558(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1c8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497549bc(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c15f2 FUN_1497c15f2 body=25 status=ok
// SIG undefined FUN_1497c15f2(void)

undefined8 FUN_1497c15f2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c162a FUN_1497c162a body=22 status=ok
// SIG undefined FUN_1497c162a(void)

undefined8 FUN_1497c162a(undefined8 param_1)

{
  FUN_1497c1640();
  return param_1;
}



// FUNCTION 1497c1640 FUN_1497c1640 body=153 status=ok
// SIG undefined FUN_1497c1640(void)

undefined8 * FUN_1497c1640(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x298,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149754d94(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c16da FUN_1497c16da body=25 status=ok
// SIG undefined FUN_1497c16da(void)

undefined8 FUN_1497c16da(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c1712 FUN_1497c1712 body=22 status=ok
// SIG undefined FUN_1497c1712(void)

undefined8 FUN_1497c1712(undefined8 param_1)

{
  FUN_1497c1728();
  return param_1;
}



// FUNCTION 1497c1728 FUN_1497c1728 body=153 status=ok
// SIG undefined FUN_1497c1728(void)

undefined8 * FUN_1497c1728(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x280,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149755290(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c17c2 FUN_1497c17c2 body=25 status=ok
// SIG undefined FUN_1497c17c2(void)

undefined8 FUN_1497c17c2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c17fa FUN_1497c17fa body=22 status=ok
// SIG undefined FUN_1497c17fa(void)

undefined8 FUN_1497c17fa(undefined8 param_1)

{
  FUN_1497c1810();
  return param_1;
}



// FUNCTION 1497c1810 FUN_1497c1810 body=153 status=ok
// SIG undefined FUN_1497c1810(void)

undefined8 * FUN_1497c1810(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x260,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149755772(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c18aa FUN_1497c18aa body=25 status=ok
// SIG undefined FUN_1497c18aa(void)

undefined8 FUN_1497c18aa(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c18e2 FUN_1497c18e2 body=22 status=ok
// SIG undefined FUN_1497c18e2(void)

undefined8 FUN_1497c18e2(undefined8 param_1)

{
  FUN_1497c18f8();
  return param_1;
}



// FUNCTION 1497c18f8 FUN_1497c18f8 body=153 status=ok
// SIG undefined FUN_1497c18f8(void)

undefined8 * FUN_1497c18f8(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x2c0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149755b78(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c1992 FUN_1497c1992 body=25 status=ok
// SIG undefined FUN_1497c1992(void)

undefined8 FUN_1497c1992(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c19ca FUN_1497c19ca body=22 status=ok
// SIG undefined FUN_1497c19ca(void)

undefined8 FUN_1497c19ca(undefined8 param_1)

{
  FUN_1497c19e0();
  return param_1;
}



// FUNCTION 1497c19e0 FUN_1497c19e0 body=153 status=ok
// SIG undefined FUN_1497c19e0(void)

undefined8 * FUN_1497c19e0(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x2c0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149755f00(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c1a7a FUN_1497c1a7a body=25 status=ok
// SIG undefined FUN_1497c1a7a(void)

undefined8 FUN_1497c1a7a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c1ab2 FUN_1497c1ab2 body=22 status=ok
// SIG undefined FUN_1497c1ab2(void)

undefined8 FUN_1497c1ab2(undefined8 param_1)

{
  FUN_1497c1ac8();
  return param_1;
}



// FUNCTION 1497c1ac8 FUN_1497c1ac8 body=153 status=ok
// SIG undefined FUN_1497c1ac8(void)

undefined8 * FUN_1497c1ac8(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x268,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497c1b62(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c1b62 FUN_1497c1b62 body=249 status=ok
// SIG undefined FUN_1497c1b62(void)

undefined8 * FUN_1497c1b62(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2bec0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = puVar1;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_58 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_58);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c1c5c FUN_1497c1c5c body=25 status=ok
// SIG undefined FUN_1497c1c5c(void)

undefined8 FUN_1497c1c5c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c1c94 FUN_1497c1c94 body=22 status=ok
// SIG undefined FUN_1497c1c94(void)

undefined8 FUN_1497c1c94(undefined8 param_1)

{
  FUN_1497c1caa();
  return param_1;
}



// FUNCTION 1497c1caa FUN_1497c1caa body=153 status=ok
// SIG undefined FUN_1497c1caa(void)

undefined8 * FUN_1497c1caa(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x2c0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149756216(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c1d44 FUN_1497c1d44 body=25 status=ok
// SIG undefined FUN_1497c1d44(void)

undefined8 FUN_1497c1d44(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c1d7c FUN_1497c1d7c body=22 status=ok
// SIG undefined FUN_1497c1d7c(void)

undefined8 FUN_1497c1d7c(undefined8 param_1)

{
  FUN_1497c1d92();
  return param_1;
}



// FUNCTION 1497c1d92 FUN_1497c1d92 body=153 status=ok
// SIG undefined FUN_1497c1d92(void)

undefined8 * FUN_1497c1d92(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x248,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149756e5c(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c1e2c FUN_1497c1e2c body=25 status=ok
// SIG undefined FUN_1497c1e2c(void)

undefined8 FUN_1497c1e2c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c1e64 FUN_1497c1e64 body=22 status=ok
// SIG undefined FUN_1497c1e64(void)

undefined8 FUN_1497c1e64(undefined8 param_1)

{
  FUN_1497c1e7a();
  return param_1;
}



// FUNCTION 1497c1e7a FUN_1497c1e7a body=153 status=ok
// SIG undefined FUN_1497c1e7a(void)

undefined8 * FUN_1497c1e7a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x270,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14975701a(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c1f14 FUN_1497c1f14 body=25 status=ok
// SIG undefined FUN_1497c1f14(void)

undefined8 FUN_1497c1f14(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c1f4c FUN_1497c1f4c body=22 status=ok
// SIG undefined FUN_1497c1f4c(void)

undefined8 FUN_1497c1f4c(undefined8 param_1)

{
  FUN_1497c1f62();
  return param_1;
}



// FUNCTION 1497c1f62 FUN_1497c1f62 body=153 status=ok
// SIG undefined FUN_1497c1f62(void)

undefined8 * FUN_1497c1f62(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x288,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497c1ffc(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c1ffc FUN_1497c1ffc body=392 status=ok
// SIG undefined FUN_1497c1ffc(void)

undefined8 * FUN_1497c1ffc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2c960;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x269) = 1;
  *(undefined1 *)((longlong)param_1 + 0x26a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26b) = 1;
  *(undefined1 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x26f) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0x3c23d70a3f800000;
  *(undefined1 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x42480000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x50;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c2186 FUN_1497c2186 body=25 status=ok
// SIG undefined FUN_1497c2186(void)

undefined8 FUN_1497c2186(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c21be FUN_1497c21be body=22 status=ok
// SIG undefined FUN_1497c21be(void)

undefined8 FUN_1497c21be(undefined8 param_1)

{
  FUN_1497c21d4();
  return param_1;
}



// FUNCTION 1497c21d4 FUN_1497c21d4 body=153 status=ok
// SIG undefined FUN_1497c21d4(void)

undefined8 * FUN_1497c21d4(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x278,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497c226e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c226e FUN_1497c226e body=275 status=ok
// SIG undefined FUN_1497c226e(void)

undefined8 * FUN_1497c226e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2cc20;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x42700000;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = puVar1;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_58 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_58);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c2382 FUN_1497c2382 body=25 status=ok
// SIG undefined FUN_1497c2382(void)

undefined8 FUN_1497c2382(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c23ba FUN_1497c23ba body=22 status=ok
// SIG undefined FUN_1497c23ba(void)

undefined8 FUN_1497c23ba(undefined8 param_1)

{
  FUN_1497c23d0();
  return param_1;
}



// FUNCTION 1497c23d0 FUN_1497c23d0 body=153 status=ok
// SIG undefined FUN_1497c23d0(void)

undefined8 * FUN_1497c23d0(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x270,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497c246a(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c246a FUN_1497c246a body=314 status=ok
// SIG undefined FUN_1497c246a(void)

undefined8 * FUN_1497c246a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2cef0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x42480000;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x26c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c25a6 FUN_1497c25a6 body=25 status=ok
// SIG undefined FUN_1497c25a6(void)

undefined8 FUN_1497c25a6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c25de FUN_1497c25de body=22 status=ok
// SIG undefined FUN_1497c25de(void)

undefined8 FUN_1497c25de(undefined8 param_1)

{
  FUN_1497c25f4();
  return param_1;
}



// FUNCTION 1497c25f4 FUN_1497c25f4 body=153 status=ok
// SIG undefined FUN_1497c25f4(void)

undefined8 * FUN_1497c25f4(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x250,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497c268e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c268e FUN_1497c268e body=184 status=ok
// SIG undefined FUN_1497c268e(void)

undefined8 * FUN_1497c268e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be2d1b0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  *(undefined2 *)(param_1 + 0x49) = 1;
  *(undefined1 *)((longlong)param_1 + 0x24a) = 0;
  local_60 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = puVar1;
  FUN_146fb824a(param_1,&local_40);
  local_40 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c2748 FUN_1497c2748 body=25 status=ok
// SIG undefined FUN_1497c2748(void)

undefined8 FUN_1497c2748(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c2780 FUN_1497c2780 body=177 status=ok
// SIG undefined FUN_1497c2780(void)

void FUN_1497c2780(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497c2832(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c2832 FUN_1497c2832 body=210 status=ok
// SIG undefined FUN_1497c2832(void)

void FUN_1497c2832(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar5 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar5;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be6e7b0;
  local_48[9] = *(undefined8 *)(param_4 + 4);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(local_48 + 7) = *param_4;
  *(undefined4 *)((longlong)local_48 + 0x3c) = uVar2;
  *(undefined4 *)(local_48 + 8) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x44) = uVar4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c2906 FUN_1497c2906 body=29 status=ok
// SIG undefined FUN_1497c2906(void)

undefined8 FUN_1497c2906(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c2924 FUN_1497c2924 body=101 status=ok
// SIG undefined FUN_1497c2924(void)

undefined8 * FUN_1497c2924(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e7c0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c298a FUN_1497c298a body=29 status=ok
// SIG undefined FUN_1497c298a(void)

undefined8 FUN_1497c298a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c29a8 FUN_1497c29a8 body=101 status=ok
// SIG undefined FUN_1497c29a8(void)

undefined8 * FUN_1497c29a8(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e7c0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c2a0e FUN_1497c2a0e body=311 status=ok
// SIG undefined FUN_1497c2a0e(void)

longlong FUN_1497c2a0e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_1497c2b46(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c2b46 FUN_1497c2b46 body=210 status=ok
// SIG undefined FUN_1497c2b46(void)

void FUN_1497c2b46(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar5 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar5;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be6e7d0;
  local_48[9] = *(undefined8 *)(param_4 + 4);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(local_48 + 7) = *param_4;
  *(undefined4 *)((longlong)local_48 + 0x3c) = uVar2;
  *(undefined4 *)(local_48 + 8) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x44) = uVar4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c2c1a FUN_1497c2c1a body=29 status=ok
// SIG undefined FUN_1497c2c1a(void)

undefined8 FUN_1497c2c1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c2c38 FUN_1497c2c38 body=101 status=ok
// SIG undefined FUN_1497c2c38(void)

undefined8 * FUN_1497c2c38(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e7e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c2c9e FUN_1497c2c9e body=29 status=ok
// SIG undefined FUN_1497c2c9e(void)

undefined8 FUN_1497c2c9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c2cbc FUN_1497c2cbc body=101 status=ok
// SIG undefined FUN_1497c2cbc(void)

undefined8 * FUN_1497c2cbc(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e7e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c2d22 FUN_1497c2d22 body=286 status=ok
// SIG undefined FUN_1497c2d22(void)

undefined8 FUN_1497c2d22(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_50);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_60);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_60;
      local_70 = uVar4;
      local_68 = local_50;
      FUN_1497c2e42(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      param_3 = FUN_146fcb2b8(param_2,uVar4,uVar2,param_3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c2e42 FUN_1497c2e42 body=204 status=ok
// SIG undefined FUN_1497c2e42(void)

void FUN_1497c2e42(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar2;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be6e7f0;
  local_48[7] = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c2f10 FUN_1497c2f10 body=29 status=ok
// SIG undefined FUN_1497c2f10(void)

undefined8 FUN_1497c2f10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c2f2e FUN_1497c2f2e body=101 status=ok
// SIG undefined FUN_1497c2f2e(void)

undefined8 * FUN_1497c2f2e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e800;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c2f94 FUN_1497c2f94 body=29 status=ok
// SIG undefined FUN_1497c2f94(void)

undefined8 FUN_1497c2f94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c2fb2 FUN_1497c2fb2 body=101 status=ok
// SIG undefined FUN_1497c2fb2(void)

undefined8 * FUN_1497c2fb2(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e800;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c3018 FUN_1497c3018 body=177 status=ok
// SIG undefined FUN_1497c3018(void)

void FUN_1497c3018(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497c30ca(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c30ca FUN_1497c30ca body=218 status=ok
// SIG undefined FUN_1497c30ca(void)

void FUN_1497c30ca(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar5 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(puVar5 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)puVar5 + 0xc) = *param_5;
  *(undefined4 *)(puVar5 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar3;
  *(undefined4 *)(puVar5 + 3) = uVar4;
  puVar5[4] = param_3;
  *(undefined4 *)(puVar5 + 5) = param_6;
  puVar5[6] = uVar1;
  *puVar5 = &PTR_FUN_14be6e810;
  FUN_146ecd042(puVar5 + 7,param_4);
  local_50 = puVar5;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_50);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c31a6 FUN_1497c31a6 body=52 status=ok
// SIG undefined FUN_1497c31a6(void)

undefined8 * FUN_1497c31a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be6e810;
  FUN_14054b30a(param_1 + 7);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c31da FUN_1497c31da body=101 status=ok
// SIG undefined FUN_1497c31da(void)

undefined8 * FUN_1497c31da(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e820;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c3240 FUN_1497c3240 body=29 status=ok
// SIG undefined FUN_1497c3240(void)

undefined8 FUN_1497c3240(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c325e FUN_1497c325e body=101 status=ok
// SIG undefined FUN_1497c325e(void)

undefined8 * FUN_1497c325e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e820;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c32c4 FUN_1497c32c4 body=177 status=ok
// SIG undefined FUN_1497c32c4(void)

void FUN_1497c32c4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497c3376(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c3376 FUN_1497c3376 body=251 status=ok
// SIG undefined FUN_1497c3376(void)

void FUN_1497c3376(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be6e830;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  local_48[9] = param_4[2];
  param_4[2] = 0;
  *(undefined4 *)(local_48 + 10) = *(undefined4 *)(param_4 + 3);
  *(undefined4 *)((longlong)local_48 + 0x54) = *(undefined4 *)((longlong)param_4 + 0x1c);
  param_4[3] = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c3472 FUN_1497c3472 body=71 status=ok
// SIG undefined FUN_1497c3472(void)

undefined8 * FUN_1497c3472(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be6e830;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c34ba FUN_1497c34ba body=101 status=ok
// SIG undefined FUN_1497c34ba(void)

undefined8 * FUN_1497c34ba(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e840;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c3520 FUN_1497c3520 body=29 status=ok
// SIG undefined FUN_1497c3520(void)

undefined8 FUN_1497c3520(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c353e FUN_1497c353e body=101 status=ok
// SIG undefined FUN_1497c353e(void)

undefined8 * FUN_1497c353e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be6e840;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497c35a4 FUN_1497c35a4 body=334 status=ok
// SIG undefined FUN_1497c35a4(void)

undefined8 * FUN_1497c35a4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be6ed70;
  FUN_1414db454(param_1 + 0x33);
  FUN_1400b22c2(local_88,"Vertices");
  FUN_1400b22c2(local_98,&DAT_149e02088);
  FUN_1496f836a(param_1 + 0x49,local_98,local_88);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  local_a0 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_a0);
  local_a0 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_a0);
  local_a0 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4e;
  FUN_146fb8a66(param_1,&local_60,&local_a0);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c36f4 FUN_1497c36f4 body=526 status=ok
// SIG undefined FUN_1497c36f4(void)

void FUN_1497c36f4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  int local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar5 == param_1 + 0x270) {
    local_98 = param_1 + 0x198;
    local_78 = 0;
    uStack_70 = 0;
    local_90 = 0xffffffff;
    local_88 = 0;
    uVar6 = FUN_146fb4872(param_1,&local_98);
    uVar6 = FUN_1496fcf74(uVar6,param_2,local_98);
    local_98 = param_1 + 0x248;
    local_90 = -1;
    local_88 = 0;
    uVar7 = FUN_146fb4872(param_1,&local_98);
    uVar7 = FUN_1496fdb42(uVar7,param_2,local_98);
    FUN_1496f87b2(&local_98,uVar7);
    iVar3 = local_80 + -1;
    if (local_80 == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(&local_60,iVar3,local_88,1);
    lVar5 = local_60;
    iVar3 = local_90 + -1;
    if (local_90 == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(&local_60,iVar3,local_98,1);
    plVar8 = (longlong *)FUN_146d84416(uVar6,local_60,lVar5);
    if (plVar8 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar8 + 0x60))(plVar8);
      if (0 < iVar3) {
        lVar5 = 0;
        do {
          uVar2 = uStack_70;
          fVar1 = *(float *)(plVar8[2] + lVar5 * 4);
          if (*(float *)(param_1 + 0x268) <= fVar1 && fVar1 != *(float *)(param_1 + 0x268)) {
            lVar9 = (longlong)(int)uStack_70;
            uVar4 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
            if (uStack_70._4_4_ < uVar4) {
              FUN_1446f48e2(&local_78,uVar2 & 0xffffffff);
            }
            *(int *)(local_78 + lVar9 * 4) = (int)lVar5;
          }
          lVar5 = lVar5 + 1;
          iVar3 = (**(code **)(*plVar8 + 0x60))(plVar8);
        } while (lVar5 < iVar3);
      }
    }
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x270;
    lVar5 = FUN_146fb78aa(param_1);
    if (lVar5 != 0) {
      FUN_1496f8d2a(lVar5,&local_78,param_2);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c3904 FUN_1497c3904 body=2468 status=ok
// SIG undefined FUN_1497c3904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497c3904(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  double dVar11;
  undefined8 uVar12;
  double *pdVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  double *pdVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined8 local_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  undefined4 local_320;
  undefined8 local_318;
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
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  dVar1 = (double)(param_1 + 0x198);
  dVar11 = (double)(**(code **)(*param_3 + 0x20))(param_3);
  if (dVar11 == dVar1) {
    local_328 = (double)(param_1 + 0x250);
    local_320 = 0xffffffff;
    local_318 = 0;
    uVar12 = FUN_146fb4872(param_1,&local_328);
    pdVar13 = (double *)FUN_14979f482(uVar12,param_2,local_328);
    local_320 = 0xffffffff;
    local_318 = 0;
    local_328 = dVar1;
    uVar12 = FUN_146fb4872(param_1,&local_328);
    uVar12 = FUN_1496fcf74(uVar12,param_2,local_328);
    pdVar17 = &local_328;
    FUN_146ecd042(pdVar17,uVar12);
    uVar12 = DAT_14c996ae0;
    FUN_1446ddc76(&local_350,"Vertex",1);
    lVar14 = FUN_14067610e(pdVar17,local_350,uVar12);
    auVar38 = _DAT_149934d80;
    if (lVar14 != 0) {
      auVar26 = *(undefined1 (*) [16])(pdVar13 + 8);
      dVar11 = auVar26._0_8_;
      dVar6 = auVar26._8_8_;
      dVar3 = SUB168(*(undefined1 (*) [16])(pdVar13 + 10),0);
      auVar27 = *(undefined1 (*) [16])(param_1 + 0x2f0);
      dVar4 = auVar27._0_8_;
      dVar7 = auVar27._8_8_;
      dVar5 = SUB168(*(undefined1 (*) [16])(param_1 + 0x300),0);
      auVar26 = minpd(auVar27,auVar26);
      auVar31 = minpd(*(undefined1 (*) [16])(param_1 + 0x300),*(undefined1 (*) [16])(pdVar13 + 10));
      auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
      auVar27._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
      iVar10 = movmskpd((int)lVar14,auVar27);
      auVar26._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
      auVar26._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
      uVar16 = movmskpd((int)pdVar17,auVar26);
      if ((uVar16 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar33 = *(double *)(param_1 + 0x2b0);
        dVar34 = *(double *)(param_1 + 0x2b8);
        dVar30 = *(double *)(param_1 + 0x2c0);
        dVar25 = *(double *)(param_1 + 0x2c8);
        dVar29 = *pdVar13;
        dVar8 = pdVar13[1];
        dVar9 = pdVar13[2];
        dVar24 = pdVar13[3];
        dVar23 = pdVar13[3];
        dVar37 = pdVar13[1];
        dVar35 = pdVar13[1];
        dVar36 = pdVar13[2];
        dVar20 = pdVar13[2];
        dVar28 = dVar34 * dVar36 * -1.0 +
                 dVar30 * dVar37 + dVar25 * *pdVar13 * 1.0 + dVar33 * dVar24;
        dVar32 = dVar33 * dVar20 * 1.0 +
                 dVar25 * dVar35 + dVar30 * *pdVar13 * -1.0 + dVar34 * dVar23;
        auVar38._0_8_ =
             dVar25 * dVar36 * 1.0 + ((*pdVar13 * dVar34 * 1.0 + dVar30 * dVar24) - dVar33 * dVar37)
        ;
        auVar38._8_8_ =
             dVar30 * dVar20 * -1.0 +
             ((*pdVar13 * dVar33 * -1.0 + dVar25 * dVar23) - dVar34 * dVar35);
        dVar37 = *(double *)(param_1 + 0x2d0) * dVar11;
        dVar35 = *(double *)(param_1 + 0x2d8) * dVar6;
        dVar36 = *(double *)(param_1 + 0x2e0) * dVar3;
        dVar33 = dVar35 * dVar29 - dVar8 * dVar37;
        dVar34 = dVar36 * dVar8 - dVar9 * dVar35;
        dVar20 = dVar37 * dVar9 - dVar29 * dVar36;
        dVar34 = dVar34 + dVar34;
        dVar20 = dVar20 + dVar20;
        dVar33 = dVar33 + dVar33;
        dVar37 = (dVar33 * dVar8 - dVar9 * dVar20) + dVar24 * dVar34 + dVar37 + pdVar13[4];
        dVar23 = (dVar34 * dVar9 - dVar33 * dVar29) + dVar23 * dVar20 + dVar35 + pdVar13[5];
        dVar24 = (dVar20 * dVar29 - dVar8 * dVar34) + dVar24 * dVar33 + dVar36 + pdVar13[6];
      }
      else {
        dVar35 = *pdVar13;
        dVar36 = pdVar13[1];
        dVar20 = pdVar13[2];
        dVar28 = dVar36 + dVar36;
        dVar32 = dVar20 + dVar20;
        dVar23 = dVar35 * (dVar35 + dVar35);
        local_1a8 = (1.0 - (dVar23 + dVar36 * dVar28)) * dVar3;
        dVar24 = pdVar13[3];
        dVar33 = dVar32 * dVar24;
        dVar34 = (dVar35 + dVar35) * pdVar13[3];
        dVar24 = dVar28 * dVar24;
        local_1b8 = (dVar24 + *pdVar13 * dVar32) * dVar3;
        dVar23 = (DAT_149934d80._8_8_ - (dVar20 * dVar32 + dVar23)) * dVar6;
        dVar37 = (dVar28 * dVar35 + dVar33) * dVar11;
        local_1c8 = (dVar32 * dVar36 + dVar34) * dVar6;
        dStack_1b0 = (dVar32 * dVar36 - dVar34) * dVar3;
        local_1e8 = (*pdVar13 * dVar32 - dVar24) * dVar11;
        local_1f8._8_4_ = SUB84(dVar37,0);
        local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar20 * dVar32 + dVar36 * dVar28)) * dVar11;
        local_1f8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar23,0);
        local_1d8._0_8_ = (dVar28 * dVar35 - dVar33) * dVar6;
        local_1d8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = pdVar13[4];
        dStack_190 = pdVar13[5];
        local_188 = pdVar13[6];
        uStack_180 = 0x3ff0000000000000;
        dVar35 = *(double *)(param_1 + 0x2b0);
        dVar36 = *(double *)(param_1 + 0x2b8);
        dVar20 = *(double *)(param_1 + 0x2c0);
        dVar28 = dVar36 + dVar36;
        dVar32 = dVar20 + dVar20;
        dVar23 = dVar35 * (dVar35 + dVar35);
        local_228 = (1.0 - (dVar23 + dVar36 * dVar28)) * dVar5;
        dVar37 = *(double *)(param_1 + 0x2b0) * dVar32;
        dVar24 = *(double *)(param_1 + 0x2c8);
        dVar33 = dVar32 * dVar24;
        dVar34 = (dVar35 + dVar35) * *(double *)(param_1 + 0x2c8);
        dVar24 = dVar28 * dVar24;
        local_238 = (dVar24 + dVar37) * dVar5;
        dStack_230 = (dVar32 * dVar36 - dVar34) * dVar5;
        local_278 = ((double)DAT_149934d80 - (dVar20 * dVar32 + dVar36 * dVar28)) * dVar4;
        dVar23 = (DAT_149934d80._8_8_ - (dVar20 * dVar32 + dVar23)) * dVar7;
        dStack_270 = (dVar28 * dVar35 + dVar33) * dVar4;
        local_248 = (dVar32 * dVar36 + dVar34) * dVar7;
        local_268 = (dVar37 - dVar24) * dVar4;
        uStack_260 = 0;
        local_258._8_4_ = SUB84(dVar23,0);
        local_258._0_8_ = (dVar28 * dVar35 - dVar33) * dVar7;
        local_258._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = *(undefined8 *)(param_1 + 0x2d0);
        uStack_210 = *(undefined8 *)(param_1 + 0x2d8);
        local_208 = *(undefined8 *)(param_1 + 0x2e0);
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_178);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar31._8_8_ = -(ulonglong)(0.0 <= dVar6 * dVar7);
        auVar31._0_8_ = -(ulonglong)(0.0 <= dVar11 * dVar4);
        auVar26 = blendvpd(_DAT_149936790,auVar38,auVar31);
        uVar19 = -(ulonglong)(0.0 <= dVar3 * dVar5);
        dVar24 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
        dVar23 = auVar26._0_8_;
        local_168 = local_168 * dVar23;
        local_170 = local_170 * dVar23;
        local_178 = local_178 * dVar23;
        dVar23 = auVar26._8_8_;
        local_148 = local_148 * dVar23;
        local_150 = local_150 * dVar23;
        local_158 = dVar23 * local_158;
        local_128 = local_128 * dVar24;
        local_130 = local_130 * dVar24;
        local_138 = dVar24 * local_138;
        FUN_14481fd10(&local_348,&local_178);
        dVar24 = local_338 * local_338 + local_348 * local_348;
        dVar23 = dStack_330 * dStack_330 + dStack_340 * dStack_340;
        auVar22._0_8_ = dVar24 + dVar23;
        auVar22._8_8_ = dVar24 + dVar23;
        auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
        auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
        auVar26 = sqrtpd(auVar22,auVar22);
        auVar38 = divpd(auVar38,auVar26);
        auVar39._0_8_ = auVar38._0_8_ * local_338;
        auVar39._8_8_ = auVar38._8_8_ * dStack_330;
        dVar28 = (double)((ulonglong)(local_348 * auVar38._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
        dVar32 = (double)((ulonglong)(dStack_340 * auVar38._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
        auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar21);
        dVar37 = local_118;
        dVar23 = dStack_110;
        dVar24 = local_108;
      }
      uVar12 = DAT_14c996ae0;
      FUN_1446ddc76(&local_358,"Vertex",1);
      plVar15 = (longlong *)FUN_14067648e(&local_328,local_358,uVar12);
      iVar10 = (**(code **)(*plVar15 + 0x60))(plVar15);
      if (0 < iVar10) {
        dVar36 = auVar38._8_8_;
        dVar35 = auVar38._0_8_;
        lVar14 = 8;
        lVar18 = 0;
        do {
          lVar2 = plVar15[2];
          dVar25 = (double)*(float *)(lVar2 + -8 + lVar14) * dVar11 * dVar4;
          dVar29 = (double)*(float *)(lVar2 + -4 + lVar14) * dVar6 * dVar7;
          dVar20 = (double)*(float *)(lVar2 + lVar14) * dVar3 * dVar5;
          dVar33 = dVar29 * dVar28 - dVar32 * dVar25;
          dVar34 = dVar20 * dVar32 - dVar35 * dVar29;
          dVar30 = dVar25 * dVar35 - dVar28 * dVar20;
          dVar34 = dVar34 + dVar34;
          dVar30 = dVar30 + dVar30;
          dVar33 = dVar33 + dVar33;
          *(float *)(lVar2 + -8 + lVar14) =
               (float)((dVar33 * dVar32 - dVar30 * dVar35) + dVar36 * dVar34 + dVar25 + dVar37);
          *(float *)(lVar2 + -4 + lVar14) =
               (float)((dVar35 * dVar34 - dVar28 * dVar33) + dVar36 * dVar30 + dVar29 + dVar23);
          *(float *)(lVar2 + lVar14) =
               (float)(dVar33 * dVar36 + dVar20 + (dVar30 * dVar28 - dVar34 * dVar32) + dVar24);
          lVar18 = lVar18 + 1;
          iVar10 = (**(code **)(*plVar15 + 0x60))(plVar15);
          lVar14 = lVar14 + 0xc;
        } while (lVar18 < iVar10);
      }
    }
    local_170 = (double)CONCAT44(local_170._4_4_,0xffffffff);
    local_168 = 0.0;
    local_178 = dVar1;
    lVar14 = FUN_146fb78aa(param_1);
    if (lVar14 != 0) {
      FUN_1496fd2a8(lVar14,&local_328,param_2);
    }
    FUN_14054b30a(&local_328);
  }
  if ((local_f0 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c42b2 FUN_1497c42b2 body=622 status=ok
// SIG undefined FUN_1497c42b2(void)

void FUN_1497c42b2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar9 = param_1 + 0x198;
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar6 == lVar9) {
    local_f8 = 0xffffffff;
    local_f0 = 0;
    local_100 = lVar9;
    uVar7 = FUN_146fb4872(param_1,&local_100);
    uVar7 = FUN_1496fcf74(uVar7,param_2,local_100);
    FUN_146ecd042(&local_100,uVar7);
    local_118 = param_1 + 0x248;
    local_110 = 0xffffffff;
    local_108 = 0;
    uVar7 = FUN_146fb4872(param_1,&local_118);
    plVar8 = (longlong *)FUN_14972668e(uVar7,param_2,local_118);
    uVar5 = FUN_1401f66f6(&local_100);
    uVar7 = DAT_14c996ae0;
    if (*(uint *)(plVar8 + 1) == uVar5) {
      if (*(char *)(param_1 + 600) == '\x01') {
        fVar14 = 0.0;
        if (0 < (int)uVar5) {
          uVar10 = 0;
          do {
            fVar2 = *(float *)(*plVar8 + uVar10 * 4);
            if (fVar14 <= fVar2) {
              fVar14 = fVar2;
            }
            uVar10 = uVar10 + 1;
          } while (uVar5 != uVar10);
        }
      }
      else {
        fVar14 = 1.0;
      }
      FUN_1446ddc76(&local_120,"Color",1);
      lVar6 = FUN_1497c4522(&local_100,local_120,uVar7);
      if (lVar6 != 0) {
        if (ABS(fVar14) <= 1e-08) {
          if (0 < *(int *)(lVar6 + 0x18)) {
            lVar11 = 0;
            lVar12 = 0;
            do {
              puVar1 = (undefined4 *)(*(longlong *)(lVar6 + 0x10) + lVar11);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0x3f800000;
              lVar12 = lVar12 + 1;
              lVar11 = lVar11 + 0x10;
            } while (lVar12 < *(int *)(lVar6 + 0x18));
          }
        }
        else if (0 < (int)uVar5) {
          lVar11 = 0;
          do {
            fVar13 = *(float *)(*plVar8 + lVar11) / fVar14;
            fVar2 = *(float *)(param_1 + 0x268);
            fVar3 = *(float *)(param_1 + 0x264);
            fVar4 = *(float *)(param_1 + 0x260);
            lVar12 = *(longlong *)(lVar6 + 0x10);
            *(float *)(lVar12 + lVar11 * 4) = fVar13 * *(float *)(param_1 + 0x25c);
            *(float *)(lVar12 + 4 + lVar11 * 4) = fVar4 * fVar13;
            *(float *)(lVar12 + 8 + lVar11 * 4) = fVar3 * fVar13;
            *(float *)(lVar12 + 0xc + lVar11 * 4) = fVar2 * fVar13;
            lVar11 = lVar11 + 4;
          } while ((ulonglong)uVar5 << 2 != lVar11);
        }
      }
    }
    local_110 = 0xffffffff;
    local_108 = 0;
    local_118 = lVar9;
    lVar9 = FUN_146fb78aa(param_1);
    if (lVar9 != 0) {
      FUN_1496fd2a8(lVar9,&local_100,param_2);
    }
    FUN_14054b30a(&local_100);
  }
  if ((local_50 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497c4522 FUN_1497c4522 body=274 status=ok
// SIG undefined FUN_1497c4522(void)

longlong FUN_1497c4522(longlong param_1,longlong param_2,longlong param_3)

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
      if (lVar1 != -0x10 && lVar1 != 0) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1497c4634 FUN_1497c4634 body=428 status=ok
// SIG undefined FUN_1497c4634(void)

void FUN_1497c4634(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar12 = param_1 + 0x198;
  lVar9 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar9 == lVar12) {
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = lVar12;
    uVar10 = FUN_146fb4872(param_1,&local_f8);
    uVar10 = FUN_1496fcf74(uVar10,param_2,local_f8);
    FUN_146ecd042(&local_f8,uVar10);
    iVar8 = FUN_1401f66f6(&local_f8,DAT_14c996ae0);
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = param_1 + 0x248;
    uVar10 = FUN_146fb4872(param_1);
    plVar11 = (longlong *)FUN_149729092(uVar10,param_2,param_1 + 0x248);
    uVar10 = DAT_14c996ae0;
    FUN_1446ddc76(&local_118,"Color",1);
    lVar9 = FUN_1497c4522(&local_f8,local_118,uVar10);
    if ((lVar9 != 0) && (lVar7 = plVar11[1], (longlong)(int)lVar7 != 0)) {
      lVar3 = *plVar11;
      lVar13 = 0;
      do {
        iVar2 = *(int *)(lVar3 + lVar13);
        if ((-1 < (longlong)iVar2) && (iVar2 < iVar8)) {
          uVar4 = *(undefined4 *)(param_1 + 0x25c);
          uVar5 = *(undefined4 *)(param_1 + 0x260);
          uVar6 = *(undefined4 *)(param_1 + 0x264);
          puVar1 = (undefined4 *)(*(longlong *)(lVar9 + 0x10) + (longlong)iVar2 * 0x10);
          *puVar1 = *(undefined4 *)(param_1 + 600);
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
        }
        lVar13 = lVar13 + 4;
      } while ((longlong)(int)lVar7 * 4 != lVar13);
    }
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar12;
    lVar12 = FUN_146fb78aa(param_1);
    if (lVar12 != 0) {
      FUN_1496fd2a8(lVar12,&local_f8,param_2);
    }
    FUN_14054b30a(&local_f8);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c47e2 FUN_1497c47e2 body=480 status=ok
// SIG undefined FUN_1497c47e2(void)

void FUN_1497c47e2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar9 = param_1 + 0x198;
  lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar7 == lVar9) {
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = lVar9;
    uVar8 = FUN_146fb4872(param_1,&local_f8);
    uVar8 = FUN_1496fcf74(uVar8,param_2,local_f8);
    FUN_146ecd042(&local_f8,uVar8);
    local_110 = param_1 + 0x248;
    local_108 = 0xffffffff;
    local_100 = 0;
    uVar8 = FUN_146fb4872(param_1,&local_110);
    lVar7 = FUN_14972a204(uVar8,param_2,local_110);
    iVar5 = FUN_1401f66f6(&local_f8,DAT_14c996ae0);
    if (iVar5 == *(int *)(lVar7 + 0x18)) {
      uVar6 = FUN_1401f66f6(&local_f8,DAT_14c996ae0);
      FUN_1446ddc76(&local_118,"Color",1);
      lVar10 = FUN_1497c4522(&local_f8,local_118);
      if (0 < (int)uVar6 && lVar10 != 0) {
        lVar11 = 0;
        uVar12 = 0;
        do {
          lVar13 = *(longlong *)(lVar7 + 0x10);
          if (*(longlong *)(lVar7 + 0x10) == 0) {
            lVar13 = lVar7;
          }
          if ((*(uint *)(lVar13 + (uVar12 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar12 & 0x1f) & 1) != 0)
          {
            uVar2 = *(undefined4 *)(param_1 + 0x26c);
            uVar3 = *(undefined4 *)(param_1 + 0x270);
            uVar4 = *(undefined4 *)(param_1 + 0x274);
            puVar1 = (undefined4 *)(*(longlong *)(lVar10 + 0x10) + lVar11);
            *puVar1 = *(undefined4 *)(param_1 + 0x268);
            puVar1[1] = uVar2;
            puVar1[2] = uVar3;
            puVar1[3] = uVar4;
          }
          uVar12 = uVar12 + 1;
          lVar11 = lVar11 + 0x10;
        } while (uVar6 != uVar12);
      }
    }
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar9;
    lVar9 = FUN_146fb78aa(param_1);
    if (lVar9 != 0) {
      FUN_1496fd2a8(lVar9,&local_f8,param_2);
    }
    FUN_14054b30a(&local_f8);
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497c49c4 FUN_1497c49c4 body=43 status=ok
// SIG undefined FUN_1497c49c4(void)

undefined8 FUN_1497c49c4(undefined8 param_1,int param_2)

{
  FUN_1497c4ef8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 1497c49f0 FUN_1497c49f0 body=38 status=ok
// SIG undefined FUN_1497c49f0(void)

undefined8 FUN_1497c49f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGeometryCollectionVertexScalarToVertexIndicesNode",1);
  return param_2;
}



// FUNCTION 1497c4a16 FUN_1497c4a16 body=38 status=ok
// SIG undefined FUN_1497c4a16(void)

undefined8 FUN_1497c4a16(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"VertexScalarToVertexIndices",1);
  return param_2;
}



// FUNCTION 1497c4a3c FUN_1497c4a3c body=38 status=ok
// SIG undefined FUN_1497c4a3c(void)

undefined8 FUN_1497c4a3c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection",1);
  return param_2;
}



// FUNCTION 1497c4a62 FUN_1497c4a62 body=32 status=ok
// SIG undefined FUN_1497c4a62(void)

undefined8 FUN_1497c4a62(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"Collection Vertex Weight Map to Indices");
  return param_2;
}



// FUNCTION 1497c4a82 FUN_1497c4a82 body=123 status=ok
// SIG undefined FUN_1497c4a82(void)

void FUN_1497c4a82(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc26108 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc26108 =
         FUN_140002ddd(FUN_14675b38b,uVar1,L"GeometryCollectionVertexScalarToVertexIndicesNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc26108,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497c4afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497c4afe FUN_1497c4afe body=93 status=ok
// SIG undefined FUN_1497c4afe(void)

void FUN_1497c4afe(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc26108 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc26108 =
         FUN_140002ddd(FUN_14675b38b,uVar2,L"GeometryCollectionVertexScalarToVertexIndicesNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc26108,param_1);
  return;
}



// FUNCTION 1497c4b5c FUN_1497c4b5c body=55 status=ok
// SIG undefined FUN_1497c4b5c(void)

void FUN_1497c4b5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26108 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc26108 =
         FUN_140002ddd(FUN_14675b38b,uVar1,L"GeometryCollectionVertexScalarToVertexIndicesNode");
  }
  return;
}



// FUNCTION 1497c4b94 FUN_1497c4b94 body=228 status=ok
// SIG undefined FUN_1497c4b94(void)

ulonglong FUN_1497c4b94(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FGeometryCollectionVertexScalarToVertexIndicesNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1497c4c29;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497c4c29;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1497c4c29;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1497c4c29:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497c4cae FUN_1497c4cae body=63 status=ok
// SIG undefined FUN_1497c4cae(void)

undefined1 FUN_1497c4cae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497c4e84(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 1497c4d16 FUN_1497c4d16 body=59 status=ok
// SIG undefined FUN_1497c4d16(void)

undefined8 FUN_1497c4d16(longlong *param_1)

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



// FUNCTION 1497c4d62 FUN_1497c4d62 body=40 status=ok
// SIG undefined FUN_1497c4d62(void)

void FUN_1497c4d62(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_1497c4ef8(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 1497c4dd8 FUN_1497c4dd8 body=170 status=ok
// SIG undefined FUN_1497c4dd8(void)

undefined8 * FUN_1497c4dd8(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be6ed70;
  FUN_1414db454(param_1 + 0x33);
  FUN_1400b22c2(local_38,"Vertices");
  FUN_1400b22c2(local_48,&DAT_149e02088);
  FUN_1496f836a(param_1 + 0x49,local_48,local_38);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c4e84 FUN_1497c4e84 body=114 status=ok
// SIG undefined FUN_1497c4e84(void)

longlong FUN_1497c4e84(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
  FUN_144a787a6(param_1 + 600,param_2 + 600);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  FUN_14054c6c4(param_1 + 0x270,param_2 + 0x270);
  return param_1;
}



// FUNCTION 1497c4ef8 FUN_1497c4ef8 body=94 status=ok
// SIG undefined FUN_1497c4ef8(void)

void FUN_1497c4ef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be6ed70;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497c4f8a FUN_1497c4f8a body=63 status=ok
// SIG undefined FUN_1497c4f8a(void)

undefined1 FUN_1497c4f8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497c557e(param_2,param_3);
    param_3 = param_3 + 0x330;
    param_2 = param_2 + 0x330;
  }
  return 1;
}



// FUNCTION 1497c4ff2 FUN_1497c4ff2 body=59 status=ok
// SIG undefined FUN_1497c4ff2(void)

undefined8 FUN_1497c4ff2(longlong *param_1)

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



// FUNCTION 1497c503e FUN_1497c503e body=40 status=ok
// SIG undefined FUN_1497c503e(void)

void FUN_1497c503e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x330) == '\x01') {
    FUN_1497c5530(param_2);
    *(undefined1 *)(param_2 + 0x330) = 0;
  }
  return;
}



// FUNCTION 1497c50b4 FUN_1497c50b4 body=129 status=ok
// SIG undefined FUN_1497c50b4(void)

undefined8 * FUN_1497c50b4(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be6f9c0;
  FUN_1414db454(param_1 + 0x33);
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x4a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x56;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1400b22c2(param_1 + 0x62,"Vertices");
  FUN_1400b22c2(param_1 + 100,"Vertex");
  return param_1;
}



// FUNCTION 1497c5136 FUN_1497c5136 body=43 status=ok
// SIG undefined FUN_1497c5136(void)

undefined8 FUN_1497c5136(undefined8 param_1,int param_2)

{
  FUN_1497c5530();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 1497c5162 FUN_1497c5162 body=38 status=ok
// SIG undefined FUN_1497c5162(void)

undefined8 FUN_1497c5162(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FTransformCollectionAttributeDataflowNode",1);
  return param_2;
}



// FUNCTION 1497c5188 FUN_1497c5188 body=38 status=ok
// SIG undefined FUN_1497c5188(void)

undefined8 FUN_1497c5188(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TransformCollectionAttribute",1);
  return param_2;
}



// FUNCTION 1497c51ae FUN_1497c51ae body=38 status=ok
// SIG undefined FUN_1497c51ae(void)

undefined8 FUN_1497c51ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection",1);
  return param_2;
}



// FUNCTION 1497c51d4 FUN_1497c51d4 body=32 status=ok
// SIG undefined FUN_1497c51d4(void)

undefined8 FUN_1497c51d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497c51f4 FUN_1497c51f4 body=123 status=ok
// SIG undefined FUN_1497c51f4(void)

void FUN_1497c51f4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc26120 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc26120 = FUN_140002ddd(FUN_14675b421,uVar1,L"TransformCollectionAttributeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc26120,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497c526c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497c5270 FUN_1497c5270 body=93 status=ok
// SIG undefined FUN_1497c5270(void)

void FUN_1497c5270(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc26120 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc26120 = FUN_140002ddd(FUN_14675b421,uVar2,L"TransformCollectionAttributeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc26120,param_1);
  return;
}



// FUNCTION 1497c52ce FUN_1497c52ce body=55 status=ok
// SIG undefined FUN_1497c52ce(void)

void FUN_1497c52ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26120 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc26120 = FUN_140002ddd(FUN_14675b421,uVar1,L"TransformCollectionAttributeDataflowNode");
  }
  return;
}



// FUNCTION 1497c5306 FUN_1497c5306 body=228 status=ok
// SIG undefined FUN_1497c5306(void)

ulonglong FUN_1497c5306(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FTransformCollectionAttributeDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1497c539b;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497c539b;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1497c539b;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1497c539b:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497c53ec FUN_1497c53ec body=323 status=ok
// SIG undefined FUN_1497c53ec(void)

undefined8 * FUN_1497c53ec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(local_80,"SurfaceRender");
  FUN_1446ddc76(&local_88,"FGeometryCollection",1);
  FUN_1446ddc76(&local_48,"Collection",1);
  local_98 = (undefined8 *)0x0;
  local_90 = 1;
  FUN_1401b309e(&local_98,1,0);
  *local_98 = local_48;
  FUN_1496fe870(&local_70,local_80,local_88,&local_98);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1496fcee0(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0;
  *puVar1 = local_70;
  local_70 = 0;
  *(undefined4 *)(puVar1 + 1) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar1 + 0xc) = local_68._4_4_;
  local_68 = 0;
  puVar1[2] = local_60;
  puVar1[3] = 0;
  puVar1[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_50._4_4_;
  local_50 = 0;
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c5530 FUN_1497c5530 body=77 status=ok
// SIG undefined FUN_1497c5530(void)

void FUN_1497c5530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be6f9c0;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497c557e FUN_1497c557e body=104 status=ok
// SIG undefined FUN_1497c557e(void)

longlong FUN_1497c557e(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  memcpy((void *)(param_1 + 0x250),(void *)(param_2 + 0x250),0xc0);
  FUN_144a787a6(param_1 + 0x310,param_2 + 0x310);
  FUN_144a787a6(param_1 + 800,param_2 + 800);
  return param_1;
}



// FUNCTION 1497c561c FUN_1497c561c body=134 status=ok
// SIG undefined FUN_1497c561c(void)

undefined8 FUN_1497c561c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    FUN_144a67f5c(param_2 + 0x248,param_3 + 0x248);
    uVar1 = *(undefined4 *)(param_3 + 0x25c);
    uVar2 = *(undefined4 *)(param_3 + 0x260);
    uVar3 = *(undefined4 *)(param_3 + 0x264);
    *(undefined4 *)(param_2 + 600) = *(undefined4 *)(param_3 + 600);
    *(undefined4 *)(param_2 + 0x25c) = uVar1;
    *(undefined4 *)(param_2 + 0x260) = uVar2;
    *(undefined4 *)(param_2 + 0x264) = uVar3;
    *(undefined4 *)(param_2 + 0x268) = *(undefined4 *)(param_3 + 0x268);
    param_2 = param_2 + 0x270;
    param_3 = param_3 + 0x270;
  }
  return 1;
}



// FUNCTION 1497c56ca FUN_1497c56ca body=59 status=ok
// SIG undefined FUN_1497c56ca(void)

undefined8 FUN_1497c56ca(longlong *param_1)

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



// FUNCTION 1497c5716 FUN_1497c5716 body=40 status=ok
// SIG undefined FUN_1497c5716(void)

void FUN_1497c5716(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_1497b8c2c(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 1497c578c FUN_1497c578c body=111 status=ok
// SIG undefined FUN_1497c578c(void)

undefined8 * FUN_1497c578c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be6da40;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  uVar1 = DAT_14c75905c;
  *(undefined4 *)((longlong)param_1 + 0x25c) = DAT_14c75905c;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x264) = DAT_14c75905c;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  return param_1;
}



// FUNCTION 1497c5830 FUN_1497c5830 body=122 status=ok
// SIG undefined FUN_1497c5830(void)

undefined1 FUN_1497c5830(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    FUN_14054c6c4(param_2 + 0x248,param_3 + 0x248);
    uVar1 = *(undefined4 *)(param_3 + 0x25c);
    uVar2 = *(undefined4 *)(param_3 + 0x260);
    uVar3 = *(undefined4 *)(param_3 + 0x264);
    *(undefined4 *)(param_2 + 600) = *(undefined4 *)(param_3 + 600);
    *(undefined4 *)(param_2 + 0x25c) = uVar1;
    *(undefined4 *)(param_2 + 0x260) = uVar2;
    *(undefined4 *)(param_2 + 0x264) = uVar3;
    param_2 = param_2 + 0x268;
    param_3 = param_3 + 0x268;
  }
  return 1;
}



// FUNCTION 1497c58d2 FUN_1497c58d2 body=59 status=ok
// SIG undefined FUN_1497c58d2(void)

undefined8 FUN_1497c58d2(longlong *param_1)

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



// FUNCTION 1497c591e FUN_1497c591e body=40 status=ok
// SIG undefined FUN_1497c591e(void)

void FUN_1497c591e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_1497b909c(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 1497c5994 FUN_1497c5994 body=104 status=ok
// SIG undefined FUN_1497c5994(void)

undefined8 * FUN_1497c5994(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be6dbc0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  uVar1 = DAT_14c75905c;
  *(undefined4 *)(param_1 + 0x4b) = DAT_14c75905c;
  *(undefined4 *)((longlong)param_1 + 0x25c) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = DAT_14c758c60;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x3f800000;
  return param_1;
}



// FUNCTION 1497c5a32 FUN_1497c5a32 body=63 status=ok
// SIG undefined FUN_1497c5a32(void)

undefined1 FUN_1497c5a32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497c5bd6(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 1497c5a9a FUN_1497c5a9a body=59 status=ok
// SIG undefined FUN_1497c5a9a(void)

undefined8 FUN_1497c5a9a(longlong *param_1)

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



// FUNCTION 1497c5ae6 FUN_1497c5ae6 body=40 status=ok
// SIG undefined FUN_1497c5ae6(void)

void FUN_1497c5ae6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_1497b951a(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 1497c5b5c FUN_1497c5b5c body=122 status=ok
// SIG undefined FUN_1497c5b5c(void)

undefined8 * FUN_1497c5b5c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be6dd50;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  uVar1 = DAT_14c75905c;
  *(undefined4 *)(param_1 + 0x4d) = DAT_14c75905c;
  *(undefined4 *)((longlong)param_1 + 0x26c) = uVar1;
  *(undefined4 *)(param_1 + 0x4e) = DAT_14c758c60;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3f800000;
  return param_1;
}



// FUNCTION 1497c5bd6 FUN_1497c5bd6 body=80 status=ok
// SIG undefined FUN_1497c5bd6(void)

longlong FUN_1497c5bd6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x270) = uVar1;
  return param_1;
}



// FUNCTION 1497c5c28 FUN_1497c5c28 body=22 status=ok
// SIG undefined FUN_1497c5c28(void)

undefined8 FUN_1497c5c28(undefined8 param_1)

{
  FUN_1497c5c3e();
  return param_1;
}



// FUNCTION 1497c5c3e FUN_1497c5c3e body=153 status=ok
// SIG undefined FUN_1497c5c3e(void)

undefined8 * FUN_1497c5c3e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x330,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497c5cd8(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c5cd8 FUN_1497c5cd8 body=312 status=ok
// SIG undefined FUN_1497c5cd8(void)

undefined8 * FUN_1497c5cd8(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be6f9c0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  local_58 = param_1 + 0x4a;
  puVar3 = &DAT_14c846480;
  puVar4 = local_58;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x56;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1400b22c2(param_1 + 0x62,"Vertices");
  FUN_1400b22c2(param_1 + 100,"Vertex");
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = puVar1;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = puVar1;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c5e12 FUN_1497c5e12 body=25 status=ok
// SIG undefined FUN_1497c5e12(void)

undefined8 FUN_1497c5e12(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c5e4c FUN_1497c5e4c body=1205 status=ok
// SIG undefined FUN_1497c5e4c(void)

void FUN_1497c5e4c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_5d8 [32];
  longlong *local_5b8;
  longlong *local_5b0;
  undefined1 local_5a0 [32];
  undefined1 local_580 [32];
  void *local_560;
  int local_558;
  undefined4 local_554;
  void *local_550;
  int local_548;
  undefined4 local_544;
  undefined1 local_540 [64];
  longlong local_500;
  longlong local_4c8;
  longlong local_490;
  longlong local_458;
  longlong local_420;
  longlong local_3e8;
  longlong local_3b0;
  longlong local_378;
  longlong local_340;
  longlong local_338;
  undefined4 local_330;
  undefined8 local_328;
  longlong local_2f8;
  longlong local_2c0;
  longlong local_288;
  longlong local_250;
  longlong local_218;
  longlong local_1e0;
  longlong local_1a8;
  longlong local_170;
  longlong local_138;
  void *local_130;
  int local_128;
  void *local_120;
  int local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  lVar6 = param_1 + 0x2f8;
  local_330 = 0xffffffff;
  local_328 = 0;
  local_338 = lVar6;
  uVar3 = FUN_146fb4872();
  uVar3 = FUN_1496fdb42(uVar3,param_2,lVar6);
  FUN_1496f87b2(&local_130,uVar3);
  lVar5 = param_1 + 0x198;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == lVar5) {
    local_330 = 0xffffffff;
    local_328 = 0;
    local_338 = lVar5;
    uVar3 = FUN_146fb4872(param_1,&local_338);
    uVar3 = FUN_1496fcf74(uVar3,param_2,local_338);
    FUN_146ecd042(local_f8,uVar3);
    local_338 = param_1 + 0x248;
    local_330 = 0xffffffff;
    local_328 = 0;
    uVar3 = FUN_146fb4872(param_1,&local_338);
    uVar3 = FUN_1496fcf74(uVar3,param_2,local_338);
    FUN_149752b20(&local_338,local_f8);
    FUN_149752ea0(local_540,uVar3);
    pvVar1 = local_120;
    if (((((((local_2f8 != 0) && (local_2c0 != 0)) && (local_288 != 0)) &&
          ((local_250 != 0 && (local_218 != 0)))) &&
         ((local_1e0 != 0 && ((local_1a8 != 0 && (local_170 != 0)))))) && (local_138 != 0)) &&
       (((((local_500 != 0 && (local_4c8 != 0)) && (local_490 != 0)) &&
         (((local_458 != 0 && (local_420 != 0)) &&
          ((local_3e8 != 0 && ((local_3b0 != 0 && (local_378 != 0)))))))) && (local_340 != 0)))) {
      local_550 = (void *)0x0;
      local_548 = local_118;
      if ((longlong)local_118 == 0) {
        local_544 = 0;
      }
      else {
        FUN_1446dd670(&local_550,local_118,0);
        memcpy(local_550,pvVar1,(longlong)local_118 * 2);
      }
      pvVar1 = local_130;
      local_560 = (void *)0x0;
      local_558 = local_128;
      if ((longlong)local_128 == 0) {
        local_554 = 0;
      }
      else {
        FUN_1446dd670(&local_560,local_128,0);
        memcpy(local_560,pvVar1,(longlong)local_128 * 2);
      }
      plVar7 = (longlong *)FUN_1497c6302(&local_338,&local_560,&local_550);
      if (plVar7 != (longlong *)0x0) {
        if (0 < (int)plVar7[3]) {
          lVar6 = 0;
          do {
            *(undefined4 *)(plVar7[2] + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < (int)plVar7[3]);
        }
        FUN_1497c648a(&local_110,uVar3,local_f8);
        iVar2 = FUN_1401f66f6(local_f8,DAT_14c996af0);
        if (local_108 == iVar2) {
          FUN_1496f87b2(local_580,&local_130);
          local_5b8 = &local_338;
          local_5b0 = plVar7;
          FUN_1497c6710(param_1,local_580,&local_110,local_540);
        }
        else {
          FUN_1496f87b2(local_5a0,&local_130);
          local_5b8 = plVar7;
          FUN_1497c6bda(param_1,local_5a0,local_540,&local_338);
        }
        if (local_110 != 0) {
          FUN_1400020a8();
        }
      }
    }
    local_108 = -1;
    local_100 = 0;
    local_110 = lVar5;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496fd2a8(lVar6,local_f8,param_2);
    }
    FUN_14054b30a(local_f8);
  }
  else {
    lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar5 == lVar6) {
      local_330 = 0xffffffff;
      local_328 = 0;
      local_338 = lVar6;
      lVar6 = FUN_146fb78aa(param_1);
      if (lVar6 != 0) {
        FUN_1496fd436(lVar6,&local_130,param_2);
      }
    }
  }
  if (local_120 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_130 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_5d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c6302 FUN_1497c6302 body=391 status=ok
// SIG undefined FUN_1497c6302(void)

undefined8 FUN_1497c6302(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(undefined8 *)(param_1 + 8);
  iVar5 = 0;
  iVar4 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar4 = iVar5;
  }
  FUN_1446f82e2(&local_50,iVar4,*param_3,1);
  uVar1 = local_50;
  iVar4 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar4 = iVar5;
  }
  FUN_1446f82e2(&local_50,iVar4,*param_2,1);
  cVar2 = FUN_140498cd4(uVar3,local_50,uVar1);
  if (cVar2 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 8);
    local_60 = 0;
    local_58 = 1;
    iVar4 = (int)param_3[1] + -1;
    if ((int)param_3[1] == 0) {
      iVar4 = iVar5;
    }
    FUN_1446f82e2(&local_50,iVar4,*param_3,1);
    uVar1 = local_50;
    iVar4 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar4 = iVar5;
    }
    FUN_1446f82e2(&local_50,iVar4,*param_2,1);
    FUN_140498c8e(uVar3,local_50,uVar1,&local_60);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  iVar4 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar4 = iVar5;
  }
  FUN_1446f82e2(&local_50,iVar4,*param_3,1);
  uVar1 = local_50;
  iVar4 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar4 = iVar5;
  }
  FUN_1446f82e2(&local_50,iVar4,*param_2,1);
  uVar3 = FUN_146eac244(uVar3,local_50,uVar1);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c648a FUN_1497c648a body=644 status=ok
// SIG undefined FUN_1497c648a(void)

longlong * FUN_1497c648a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = DAT_14c9974a8;
  local_90 = param_1;
  FUN_1446ddc76(&local_50,"BoneName",1);
  plVar6 = (longlong *)FUN_1497455e8(param_2,local_50,uVar3);
  uVar3 = DAT_14c9974a8;
  FUN_1446ddc76(&local_58,"TransformToGeometryIndex",1);
  lVar7 = FUN_146d84614(param_2,local_58,uVar3);
  uVar3 = DAT_14c9974a8;
  FUN_1446ddc76(&local_60,"BoneName",1);
  plVar8 = (longlong *)FUN_1497455e8(param_3,local_60,uVar3);
  uVar3 = DAT_14c9974a8;
  FUN_1446ddc76(&local_68,"TransformToGeometryIndex",1);
  local_88 = FUN_146d84614(param_3,local_68,uVar3);
  local_80 = lVar7;
  if (((local_88 != 0 && plVar8 != (longlong *)0x0) && (lVar7 != 0 && plVar6 != (longlong *)0x0)) &&
     (iVar5 = (**(code **)(*plVar6 + 0x60))(plVar6), 0 < iVar5)) {
    lVar7 = 0;
    do {
      iVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
      if (0 < iVar5) {
        lVar11 = 0;
        lVar9 = 0;
        do {
          puVar10 = &DAT_149dfb77a;
          if (*(int *)(plVar6[2] + 8 + lVar7 * 0x10) != 0) {
            puVar10 = *(undefined2 **)(plVar6[2] + lVar7 * 0x10);
          }
          FUN_140002266(&local_78,L"%s_Tet",puVar10);
          iVar5 = local_70 + -1;
          if (local_70 == 0) {
            iVar5 = 0;
          }
          puVar10 = &DAT_149dfb77a;
          if (local_70 != 0) {
            puVar10 = local_78;
          }
          cVar4 = FUN_144a791f8(plVar8[2] + lVar11,puVar10,iVar5,1);
          if (cVar4 != '\0') {
            uVar1 = *(undefined4 *)(*(longlong *)(local_88 + 0x10) + lVar9 * 4);
            uVar2 = *(undefined4 *)(*(longlong *)(local_80 + 0x10) + lVar7 * 4);
            iVar5 = (int)local_90[1];
            *(uint *)(local_90 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)local_90 + 0xc) < iVar5 + 1U) {
              FUN_1400232c6(local_90,iVar5);
            }
            *(ulonglong *)(*local_90 + (longlong)iVar5 * 8) = CONCAT44(uVar1,uVar2);
            if (local_78 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            break;
          }
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          lVar9 = lVar9 + 1;
          iVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
          lVar11 = lVar11 + 0x10;
        } while (lVar9 < iVar5);
      }
      lVar7 = lVar7 + 1;
      iVar5 = (**(code **)(*plVar6 + 0x60))(plVar6);
    } while (lVar7 < iVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_90;
}



// FUNCTION 1497c6710 FUN_1497c6710 body=1225 status=ok
// SIG undefined FUN_1497c6710(void)

void FUN_1497c6710(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  float fVar1;
  double dVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  longlong *local_118;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  double *local_f0;
  longlong local_e8;
  undefined1 *local_e0;
  longlong *local_d8;
  float local_c4 [3];
  double local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_a0 = (void *)0x0;
  local_98 = (int)param_2[3];
  lVar6 = (longlong)local_98;
  pvVar3 = (void *)param_2[2];
  if (lVar6 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,local_98,0);
    memcpy(local_a0,pvVar3,lVar6 * 2);
  }
  local_b0 = (void *)0x0;
  local_a8 = (int)param_2[1];
  lVar6 = (longlong)local_a8;
  pvVar3 = (void *)*param_2;
  if (lVar6 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_1446dd670(&local_b0,local_a8,0);
    memcpy(local_b0,pvVar3,lVar6 * 2);
  }
  local_90 = FUN_1497c72e0(param_4,&local_b0);
  if (local_90 == 0) goto LAB_1497c68bf;
  if ((byte)(*(char *)(param_1 + 0x319) - 1U) < 2) {
    local_108 = 0;
    lStack_100 = 0;
    if (*(longlong **)(param_5 + 0x78) == (longlong *)0x0) {
      local_120 = FUN_1401f66f6(*(undefined8 *)(param_5 + 0x48),*(undefined8 *)(param_5 + 0x60));
    }
    else {
      local_120 = (**(code **)(**(longlong **)(param_5 + 0x78) + 0x60))();
    }
    local_118 = &local_108;
    local_128 = 0;
    FUN_1497c739a(*(undefined8 *)(param_5 + 0xe8),*(undefined8 *)(param_5 + 0x120),
                  *(undefined8 *)(param_5 + 0x40),*(undefined8 *)(param_5 + 0x78));
    local_78 = 0;
    uStack_70 = 0;
    if (*(longlong **)(param_4 + 0x78) == (longlong *)0x0) {
      local_120 = FUN_1401f66f6(*(undefined8 *)(param_4 + 0x48),*(undefined8 *)(param_4 + 0x60));
    }
    else {
      local_120 = (**(code **)(**(longlong **)(param_4 + 0x78) + 0x60))();
    }
    local_118 = &local_78;
    local_128 = 0;
    FUN_1497c739a(*(undefined8 *)(param_4 + 0xe8),*(undefined8 *)(param_4 + 0x120),
                  *(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x78));
    if (*(char *)(param_1 + 0x319) == '\x02') {
      local_88 = (code *)&DAT_ff7fffffff7fffff;
      local_80 = (longlong *)CONCAT44(local_80._4_4_,0xff7fffff);
      local_c4[0] = 3.4028235e+38;
      local_c4[1] = 3.4028235e+38;
      local_c4[2] = 3.4028235e+38;
      if ((longlong)(int)uStack_70 < 1) {
        fVar8 = -INFINITY;
        fVar9 = fVar8;
        fVar7 = fVar8;
      }
      else {
        lVar4 = 0;
        lVar6 = local_78;
        do {
          lVar5 = 0;
          do {
            dVar2 = *(double *)(lVar6 + lVar5 * 8);
            if ((double)*(float *)((longlong)&local_88 + lVar5 * 4) < dVar2) {
              *(float *)((longlong)&local_88 + lVar5 * 4) = (float)dVar2;
            }
            if (dVar2 < (double)local_c4[lVar5]) {
              local_c4[lVar5] = (float)dVar2;
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 != 3);
          lVar4 = lVar4 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar4 != (int)uStack_70);
        fVar8 = (float)local_88 - local_c4[0];
        fVar9 = local_80._0_4_ - local_c4[2];
        fVar7 = local_88._4_4_ - local_c4[1];
      }
      fVar1 = *(float *)(param_1 + 0x324);
      fVar10 = fVar7 * fVar1;
      if (fVar9 * fVar1 <= fVar7 * fVar1) {
        fVar10 = fVar9 * fVar1;
      }
      fVar9 = fVar8 * fVar1;
      if (fVar10 <= fVar8 * fVar1) {
        fVar9 = fVar10;
      }
LAB_1497c6b1a:
      local_b8 = (double)fVar9;
    }
    else if (*(char *)(param_1 + 0x319) == '\x01') {
      fVar9 = *(float *)(param_1 + 800);
      if (*(longlong **)(param_4 + 0xb0) == (longlong *)0x0) {
        local_128 = FUN_1401f66f6(*(undefined8 *)(param_4 + 0x80),*(undefined8 *)(param_4 + 0x98));
      }
      else {
        local_128 = (**(code **)(**(longlong **)(param_4 + 0xb0) + 0x60))();
      }
      fVar7 = (float)FUN_1497c75f6(&local_78,*(undefined8 *)(param_4 + 0xb0),0,0);
      if (*(longlong **)(param_5 + 0xb0) == (longlong *)0x0) {
        local_128 = FUN_1401f66f6(*(undefined8 *)(param_5 + 0x80),*(undefined8 *)(param_5 + 0x98));
      }
      else {
        local_128 = (**(code **)(**(longlong **)(param_5 + 0xb0) + 0x60))();
      }
      fVar8 = (float)FUN_1497c75f6(&local_108,*(undefined8 *)(param_5 + 0xb0),0,0);
      if (fVar8 <= fVar7) {
        fVar8 = fVar7;
      }
      fVar9 = fVar9 * fVar8;
      goto LAB_1497c6b1a;
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  local_80 = &local_108;
  local_f8 = param_5;
  local_f0 = &local_b8;
  local_e0 = &stack0x00000030;
  local_d8 = &local_90;
  local_118 = &local_78;
  local_78 = 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  local_88 = FUN_144613a62;
  local_120 = 0;
  local_108 = param_3;
  lStack_100 = param_4;
  local_e8 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_3 + 8),1);
LAB_1497c68bf:
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497c6bda FUN_1497c6bda body=1797 status=ok
// SIG undefined FUN_1497c6bda(void)

void FUN_1497c6bda(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  float *local_190;
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134 [3];
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  int local_110;
  longlong local_108 [5];
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  undefined8 extraout_XMM0_Qb;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_d0 = (void *)0x0;
  local_c8 = (int)param_2[3];
  lVar10 = (longlong)local_c8;
  pvVar1 = (void *)param_2[2];
  if (lVar10 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,pvVar1,lVar10 * 2);
  }
  local_e0 = (void *)0x0;
  local_d8 = (int)param_2[1];
  lVar10 = (longlong)local_d8;
  pvVar1 = (void *)*param_2;
  if (lVar10 == 0) {
    local_d4 = 0;
  }
  else {
    FUN_1446dd670(&local_e0,local_d8,0);
    memcpy(local_e0,pvVar1,lVar10 * 2);
  }
  lVar10 = FUN_1497c72e0(param_3,&local_e0,&local_d0);
  if (lVar10 != 0) {
    local_108[2] = 0;
    local_108[3] = 0;
    if (*(longlong **)(param_4 + 0x78) == (longlong *)0x0) {
      uVar2 = FUN_1401f66f6(*(undefined8 *)(param_4 + 0x48),*(undefined8 *)(param_4 + 0x60));
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_4 + 0x78) + 0x60))();
    }
    local_188 = local_108 + 2;
    local_190 = (float *)CONCAT44(local_190._4_4_,uVar2);
    local_198 = (float *)((ulonglong)local_198._4_4_ << 0x20);
    FUN_1497c739a(*(undefined8 *)(param_4 + 0xe8),*(undefined8 *)(param_4 + 0x120),
                  *(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x78));
    local_108[0] = 0;
    local_108[1] = 0;
    if (*(longlong **)(param_3 + 0x78) == (longlong *)0x0) {
      uVar2 = FUN_1401f66f6(*(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x60));
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_3 + 0x78) + 0x60))();
    }
    local_188 = local_108;
    local_190 = (float *)CONCAT44(local_190._4_4_,uVar2);
    local_198 = (float *)((ulonglong)local_198 & 0xffffffff00000000);
    FUN_1497c739a(*(undefined8 *)(param_3 + 0xe8),*(undefined8 *)(param_3 + 0x120),
                  *(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x78));
    fVar14 = *(float *)(param_1 + 800);
    if (*(longlong **)(param_3 + 0xb0) == (longlong *)0x0) {
      uVar2 = FUN_1401f66f6(*(undefined8 *)(param_3 + 0x80),*(undefined8 *)(param_3 + 0x98));
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_3 + 0xb0) + 0x60))();
    }
    local_198 = (float *)CONCAT44(local_198._4_4_,uVar2);
    auVar13._0_4_ = (float)FUN_1497c75f6(local_108,*(undefined8 *)(param_3 + 0xb0),0,0);
    if (*(longlong **)(param_4 + 0xb0) == (longlong *)0x0) {
      uVar2 = FUN_1401f66f6(*(undefined8 *)(param_4 + 0x80),*(undefined8 *)(param_4 + 0x98));
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_4 + 0xb0) + 0x60))();
    }
    local_198 = (float *)CONCAT44(local_198._4_4_,uVar2);
    lVar9 = 0;
    auVar12._0_8_ = FUN_1497c75f6(local_108 + 2,*(undefined8 *)(param_4 + 0xb0),0,0);
    auVar12._8_8_ = extraout_XMM0_Qb;
    if ((float)auVar12._0_8_ <= auVar13._0_4_) {
      auVar13._4_12_ = auVar12._4_12_;
      auVar12._0_8_ = auVar13._0_8_;
    }
    lVar5 = FUN_1497c7832(local_108 + 2,fVar14 * (float)auVar12._0_8_);
    uVar8 = 0;
    local_180 = lVar5;
    local_178 = param_1;
    while( true ) {
      if (*(longlong **)(param_3 + 0xb0) == (longlong *)0x0) {
        iVar3 = FUN_1401f66f6(*(undefined8 *)(param_3 + 0x80),*(undefined8 *)(param_3 + 0x98));
      }
      else {
        iVar3 = (**(code **)(**(longlong **)(param_3 + 0xb0) + 0x60))();
      }
      if ((longlong)iVar3 <= (longlong)uVar8) break;
      lVar6 = *(longlong *)(*(longlong *)(param_3 + 0xb0) + 0x10);
      auVar12._0_8_ = *(undefined8 *)(lVar6 + uVar8 * 0xc);
      local_110 = *(int *)(lVar6 + 8 + uVar8 * 0xc);
      lVar6 = *(longlong *)(lVar10 + 0x10);
      local_118._4_4_ = (int)((ulonglong)auVar12._0_8_ >> 0x20);
      lVar7 = (longlong)local_118._4_4_;
      local_118 = auVar12._0_8_;
      if (1e-08 < ABS(*(float *)(lVar6 + (longlong)(int)auVar12._0_8_ * 4) +
                      *(float *)(lVar6 + lVar7 * 4) + *(float *)(lVar6 + (longlong)local_110 * 4)))
      {
        local_128 = 0;
        uStack_120 = 0;
        FUN_1497c79f4(lVar5,local_108,&local_118,&local_128);
        if (0 < (int)uStack_120) {
          lVar5 = 0;
          do {
            lVar6 = *(longlong *)(*(longlong *)(param_3 + 0xb0) + 0x10);
            lVar7 = (longlong)*(int *)(lVar6 + uVar8 * 0xc);
            local_138 = (float)*(double *)(local_108[0] + 0x10 + lVar7 * 0x18);
            local_13c = (float)*(double *)(local_108[0] + 8 + lVar7 * 0x18);
            local_140 = (float)*(double *)(local_108[0] + lVar7 * 0x18);
            lVar7 = (longlong)*(int *)(lVar6 + 4 + uVar8 * 0xc);
            local_144 = (float)*(double *)(local_108[0] + 0x10 + lVar7 * 0x18);
            local_148 = (float)*(double *)(local_108[0] + 8 + lVar7 * 0x18);
            local_14c = (float)*(double *)(local_108[0] + lVar7 * 0x18);
            lVar6 = (longlong)*(int *)(lVar6 + 8 + uVar8 * 0xc);
            local_150 = (float)*(double *)(local_108[0] + 0x10 + lVar6 * 0x18);
            local_154 = (float)*(double *)(local_108[0] + 8 + lVar6 * 0x18);
            local_158 = (float)*(double *)(local_108[0] + lVar6 * 0x18);
            lVar6 = (longlong)*(int *)(local_128 + lVar5 * 4);
            local_15c = (float)*(double *)(local_108[2] + 0x10 + lVar6 * 0x18);
            local_160 = (float)*(double *)(local_108[2] + 8 + lVar6 * 0x18);
            local_164 = (float)*(double *)(local_108[2] + lVar6 * 0x18);
            local_190 = local_134;
            local_198 = &local_164;
            FUN_146e2650c(&local_170,&local_140,&local_14c,&local_158);
            fVar15 = SQRT((local_15c - local_168) * (local_15c - local_168) +
                          (local_164 - local_170) * (local_164 - local_170) +
                          (local_160 - local_16c) * (local_160 - local_16c));
            fVar14 = *(float *)(param_1 + 0x31c);
            local_198 = (float *)CONCAT44(local_198._4_4_,1);
            fVar11 = (float)FUN_1497c75f6(local_108,*(undefined8 *)(param_3 + 0xb0),0,
                                          uVar8 & 0xffffffff);
            fVar11 = fVar11 * fVar14;
            fVar14 = 1.0;
            if (fVar11 < fVar15) {
              fVar14 = (float)(~-(uint)(ABS(fVar11) <= 1e-08) & (uint)(fVar15 / fVar11) |
                              -(uint)(ABS(fVar11) <= 1e-08) & 0x3f800000);
            }
            if (*(char *)(param_1 + 0x31a) == '\0') {
              fVar14 = fVar14 * fVar14;
LAB_1497c71d9:
              fVar11 = 1.0 / fVar14;
            }
            else {
              fVar11 = 1.0;
              if (*(char *)(param_1 + 0x31a) == '\x01') goto LAB_1497c71d9;
            }
            if (1e-08 < ABS(fVar11)) {
              iVar3 = *(int *)(local_128 + lVar5 * 4);
              lVar6 = (longlong)iVar3;
              if ((-1 < lVar6) && (iVar4 = (**(code **)(*param_5 + 0x60))(), iVar3 < iVar4)) {
                fVar14 = 0.0;
                lVar7 = 0;
                do {
                  fVar14 = fVar14 + local_134[lVar7] *
                                    *(float *)(*(longlong *)(lVar10 + 0x10) +
                                              (longlong)
                                              *(int *)(*(longlong *)
                                                        (*(longlong *)(param_3 + 0xb0) + 0x10) +
                                                       lVar9 + lVar7 * 4) * 4) * fVar11;
                  lVar7 = lVar7 + 1;
                } while (lVar7 != 3);
                fVar11 = *(float *)(param_5[2] + lVar6 * 4);
                if (fVar11 <= fVar14) {
                  fVar11 = fVar14;
                }
                *(float *)(param_5[2] + lVar6 * 4) = fVar11;
              }
            }
            lVar5 = lVar5 + 1;
            param_1 = local_178;
          } while (lVar5 < (int)uStack_120);
        }
        lVar5 = local_180;
        if (local_128 != 0) {
          FUN_1400020a8();
          lVar5 = local_180;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0xc;
    }
    if (lVar5 != 0) {
      FUN_146ca59aa(lVar5);
      FUN_1400020a8(lVar5);
    }
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
    if (local_108[2] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497c72e0 FUN_1497c72e0 body=184 status=ok
// SIG undefined FUN_1497c72e0(void)

undefined8 FUN_1497c72e0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_1;
  iVar3 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_40,iVar3,*param_3,1);
  uVar1 = local_40;
  iVar3 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_40,iVar3,*param_2,1);
  uVar2 = FUN_146d84416(uVar2,local_40,uVar1);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c739a FUN_1497c739a body=602 status=ok
// SIG undefined FUN_1497c739a(void)

void FUN_1497c739a(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  int param_5,uint param_6,longlong *param_7)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  FUN_146eb7819();
  FUN_140b463b8(param_7,param_6);
  if (0 < (int)param_6) {
    lVar7 = (longlong)param_5 * 0xc;
    lVar10 = 0;
    lVar11 = 0;
    do {
      iVar5 = *(int *)(*(longlong *)(param_3 + 0x10) + lVar10);
      if ((iVar5 < 1) || ((int)uStack_80 <= iVar5)) {
        lVar13 = *(longlong *)(param_4 + 0x10) + lVar7;
        dVar17 = (double)*(float *)(lVar11 + 8 + lVar13);
        fVar3 = *(float *)(lVar11 + 4 + lVar13);
        lVar12 = *param_7;
        *(double *)(lVar12 + lVar11 * 2) = (double)*(float *)(lVar11 + lVar13);
        *(double *)(lVar12 + 8 + lVar11 * 2) = (double)fVar3;
      }
      else {
        lVar12 = (longlong)*(int *)(lVar10 + *(longlong *)(param_3 + 0x10) + (longlong)param_5 * 4)
                 * 0x60;
        lVar13 = *(longlong *)(param_4 + 0x10) + lVar7;
        pdVar1 = (double *)(local_88 + 0x40 + lVar12);
        dVar15 = (double)*(float *)(lVar11 + lVar13) * *pdVar1;
        dVar16 = (double)*(float *)(lVar11 + 4 + lVar13) * pdVar1[1];
        dVar14 = (double)*(float *)(lVar11 + 8 + lVar13) * *(double *)(local_88 + 0x50 + lVar12);
        dVar17 = *(double *)(local_88 + lVar12);
        dVar8 = ((double *)(local_88 + lVar12))[1];
        dVar9 = *(double *)(local_88 + 0x10 + lVar12);
        pdVar1 = (double *)(local_88 + 0x18 + lVar12);
        dVar4 = *pdVar1;
        dVar18 = dVar16 * dVar17 - dVar15 * dVar8;
        dVar19 = dVar14 * dVar8 - dVar16 * dVar9;
        dVar20 = dVar15 * dVar9 - dVar17 * dVar14;
        dVar19 = dVar19 + dVar19;
        dVar20 = dVar20 + dVar20;
        dVar18 = dVar18 + dVar18;
        pdVar2 = (double *)(local_88 + 0x20 + lVar12);
        dVar16 = (dVar9 * dVar19 - dVar17 * dVar18) + *pdVar1 * dVar20 + dVar16 + pdVar2[1];
        dVar17 = dVar18 * dVar4 + dVar14 + (dVar20 * dVar17 - dVar19 * dVar8) +
                 *(double *)(local_88 + 0x30 + lVar12);
        lVar12 = *param_7;
        auVar6._8_4_ = SUB84(dVar16,0);
        auVar6._0_8_ = (dVar18 * dVar8 - dVar20 * dVar9) + dVar4 * dVar19 + dVar15 + *pdVar2;
        auVar6._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        *(undefined1 (*) [16])(lVar12 + lVar11 * 2) = auVar6;
      }
      *(double *)(lVar12 + 0x10 + lVar11 * 2) = dVar17;
      lVar11 = lVar11 + 0xc;
      lVar10 = lVar10 + 4;
    } while ((ulonglong)param_6 * 0xc != lVar11);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c75f6 FUN_1497c75f6 body=518 status=ok
// SIG undefined FUN_1497c75f6(void)

void FUN_1497c75f6(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

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
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_b8 [44];
  int local_8c [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  fVar18 = 0.0;
  if (0 < param_5) {
    lVar10 = *(longlong *)(param_2 + 0x10);
    lVar11 = *param_1;
    lVar16 = (longlong)param_4;
    lVar15 = (longlong)param_3;
    do {
      lVar13 = *(int *)(lVar10 + lVar16 * 0xc) - lVar15;
      lVar14 = *(int *)(lVar10 + 4 + lVar16 * 0xc) - lVar15;
      lVar17 = *(int *)(lVar10 + 8 + lVar16 * 0xc) - lVar15;
      local_8c[0] = (int)lVar13;
      local_8c[1] = (int)lVar14;
      local_8c[2] = (int)lVar17;
      lVar12 = 0;
      do {
        if ((-1 < local_8c[lVar12]) && (local_8c[lVar12] < (int)param_1[1])) {
          dVar1 = *(double *)(lVar11 + 0x10 + lVar13 * 0x18);
          dVar2 = *(double *)(lVar11 + 0x10 + lVar14 * 0x18);
          dVar3 = *(double *)(lVar11 + lVar13 * 0x18);
          dVar4 = *(double *)(lVar11 + 8 + lVar13 * 0x18);
          dVar5 = *(double *)(lVar11 + lVar14 * 0x18);
          dVar6 = *(double *)(lVar11 + 8 + lVar14 * 0x18);
          fVar19 = (float)(dVar1 - dVar2);
          fVar20 = (float)(dVar4 - dVar6);
          fVar21 = (float)(dVar3 - dVar5);
          fVar19 = fVar19 * fVar19 + fVar21 * fVar21 + fVar20 * fVar20;
          if (fVar18 <= fVar19) {
            fVar18 = fVar19;
          }
          dVar7 = *(double *)(lVar11 + 0x10 + lVar17 * 0x18);
          dVar8 = *(double *)(lVar11 + lVar17 * 0x18);
          dVar9 = *(double *)(lVar11 + 8 + lVar17 * 0x18);
          fVar19 = (float)(dVar1 - dVar7);
          fVar21 = (float)(dVar4 - dVar9);
          fVar20 = (float)(dVar3 - dVar8);
          fVar19 = fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21;
          if (fVar18 <= fVar19) {
            fVar18 = fVar19;
          }
          fVar19 = (float)(dVar2 - dVar7);
          fVar21 = (float)(dVar6 - dVar9);
          fVar20 = (float)(dVar5 - dVar8);
          fVar19 = fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21;
          if (fVar18 <= fVar19) {
            fVar18 = fVar19;
          }
          break;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      lVar16 = lVar16 + 1;
    } while (lVar16 < param_5 + param_4);
  }
  if (fVar18 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_b8);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(SQRT(fVar18));
  }
  return;
}



// FUNCTION 1497c7832 FUN_1497c7832 body=448 status=ok
// SIG undefined FUN_1497c7832(void)

undefined8 FUN_1497c7832(longlong *param_1,float param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88 [2];
  undefined2 local_78;
  undefined4 uStack_76;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined4 uStack_6e;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 local_60;
  undefined1 local_5e;
  undefined2 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88[0] = 0;
  local_88[1] = 0;
  local_98 = 0;
  uStack_90 = 0;
  dVar3 = (double)param_2;
  uStack_70 = 0;
  uStack_6e = 0;
  uStack_6a = 0;
  local_60 = 0x101;
  local_5e = 1;
  local_5c = 0;
  local_78 = 0x8e60;
  uStack_76 = 0x149f4;
  uStack_72 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_68 = SUB82(dVar3,0);
  uStack_66 = (undefined6)((ulonglong)dVar3 >> 0x10);
  FUN_14979678a(&local_98,&local_78,(int)param_1[1]);
  local_78 = 0x53e0;
  uStack_76 = 0x149f5;
  uStack_72 = 0;
  FUN_149796836();
  if (0 < (int)param_1[1]) {
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = 0;
    do {
      local_a0 = 0;
      local_a8 = 0;
      uVar6 = *(undefined8 *)(*param_1 + 0x10 + lVar7);
      uStack_66 = (undefined6)uVar6;
      local_60 = (undefined2)((ulonglong)uVar6 >> 0x30);
      puVar1 = (undefined8 *)(*param_1 + lVar7);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uStack_76 = (undefined4)uVar4;
      uStack_72 = (undefined2)((ulonglong)uVar4 >> 0x20);
      uStack_70 = (undefined2)((ulonglong)uVar4 >> 0x30);
      uStack_6e = (undefined4)uVar5;
      uStack_6a = (undefined2)((ulonglong)uVar5 >> 0x20);
      uStack_68 = (undefined2)((ulonglong)uVar5 >> 0x30);
      *(undefined1 *)(local_98 + 0x1c + lVar8) = 0;
      *(undefined2 *)(local_98 + 0x18 + lVar8) = 0x101;
      *(undefined1 *)(local_98 + 0x1a + lVar8) = 1;
      *(undefined8 *)(local_98 + 0x30 + lVar8) = uVar6;
      puVar2 = (undefined4 *)(local_98 + 0x20 + lVar8);
      *puVar2 = uStack_76;
      puVar2[1] = (int)((ulonglong)uVar4 >> 0x20);
      puVar2[2] = uStack_6e;
      puVar2[3] = (int)((ulonglong)uVar5 >> 0x20);
      *(double *)(local_98 + 0x10 + lVar8) = dVar3;
      *(longlong *)(local_88[0] + lVar9 * 8) = local_98 + lVar8;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x38;
      lVar7 = lVar7 + 0x18;
    } while (lVar9 < (int)param_1[1]);
  }
  uVar6 = FUN_14001cc68(0xd8,0x10);
  local_b8 = 0;
  FUN_146c9dee8(uVar6,local_88,0xc,0);
  FUN_1497968f9(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c79f4 FUN_1497c79f4 body=511 status=ok
// SIG undefined FUN_1497c79f4(void)

void FUN_1497c79f4(undefined8 param_1,longlong *param_2,int *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  longlong local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_14481578e(param_4,0);
  }
  puVar1 = (undefined4 *)(*param_2 + (longlong)*param_3 * 0x18);
  local_68 = *puVar1;
  uStack_64 = puVar1[1];
  uStack_60 = puVar1[2];
  uStack_5c = puVar1[3];
  local_58 = *(undefined8 *)(*param_2 + 0x10 + (longlong)*param_3 * 0x18);
  FUN_146c9e2ce(param_1,&local_50,&local_68);
  puVar1 = (undefined4 *)(*param_2 + (longlong)param_3[1] * 0x18);
  local_68 = *puVar1;
  uStack_64 = puVar1[1];
  uStack_60 = puVar1[2];
  uStack_5c = puVar1[3];
  local_58 = *(undefined8 *)(*param_2 + 0x10 + (longlong)param_3[1] * 0x18);
  FUN_146c9e2ce(param_1,&local_78,&local_68);
  puVar1 = (undefined4 *)(*param_2 + (longlong)param_3[2] * 0x18);
  local_68 = *puVar1;
  uStack_64 = puVar1[1];
  uStack_60 = puVar1[2];
  uStack_5c = puVar1[3];
  local_58 = *(undefined8 *)(*param_2 + 0x10 + (longlong)param_3[2] * 0x18);
  FUN_146c9e2ce(param_1,&local_88,&local_68);
  FUN_144958a06(local_50,local_48);
  FUN_144958a06(local_78,local_70);
  FUN_144958a06(local_88,local_80);
  if (local_48 < 1) {
LAB_1497c7ba0:
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar5 = 0;
  iVar4 = local_48;
LAB_1497c7b15:
  lVar3 = local_50;
  if ((longlong)local_70 != 0) {
    iVar2 = *(int *)(local_50 + lVar5 * 4);
    lVar6 = 0;
    do {
      if (*(int *)(local_78 + lVar6) == iVar2) {
        if ((longlong)local_80 != 0) {
          lVar6 = 0;
          goto LAB_1497c7b66;
        }
        break;
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)local_70 * 4 != lVar6);
  }
  goto LAB_1497c7b43;
  while (lVar6 = lVar6 + 4, (longlong)local_80 * 4 != lVar6) {
LAB_1497c7b66:
    if (*(int *)(local_88 + lVar6) == iVar2) {
      iVar4 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
        FUN_1446f48e2(param_4,iVar4);
      }
      *(undefined4 *)(*param_4 + (longlong)iVar4 * 4) = *(undefined4 *)(lVar3 + lVar5 * 4);
      iVar4 = local_48;
      break;
    }
  }
LAB_1497c7b43:
  lVar5 = lVar5 + 1;
  if (iVar4 <= lVar5) goto LAB_1497c7ba0;
  goto LAB_1497c7b15;
}



// FUNCTION 1497c7bf4 FUN_1497c7bf4 body=453 status=ok
// SIG undefined FUN_1497c7bf4(void)

void FUN_1497c7bf4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar6 = param_1 + 0x198;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == lVar6) {
    local_e8 = 0xffffffff;
    local_e0 = 0;
    local_f0 = lVar6;
    uVar4 = FUN_146fb4872(param_1,&local_f0);
    uVar4 = FUN_1496fcf74(uVar4,param_2,local_f0);
    FUN_146ecd042(&local_f0,uVar4);
    local_108 = param_1 + 0x248;
    local_100 = 0xffffffff;
    local_f8 = 0;
    uVar4 = FUN_146fb4872(param_1,&local_108);
    plVar5 = (longlong *)FUN_14972668e(uVar4,param_2,local_108);
    uVar2 = FUN_1401f66f6(&local_f0,DAT_14c996ae0);
    uVar4 = DAT_14c996ae0;
    if (*(uint *)(plVar5 + 1) == uVar2) {
      FUN_1446ddc76(&local_110,"Color",1);
      lVar3 = FUN_1497c4522(&local_f0,local_110,uVar4);
      if (0 < (int)uVar2 && lVar3 != 0) {
        lVar7 = 0;
        do {
          fVar8 = *(float *)(param_1 + 600) * *(float *)(*plVar5 + lVar7);
          lVar1 = *(longlong *)(lVar3 + 0x10);
          *(float *)(lVar1 + lVar7 * 4) = fVar8;
          *(float *)(lVar1 + 4 + lVar7 * 4) = fVar8;
          *(float *)(lVar1 + 8 + lVar7 * 4) = fVar8;
          *(undefined4 *)(lVar1 + 0xc + lVar7 * 4) = 0x3f800000;
          lVar7 = lVar7 + 4;
        } while ((ulonglong)uVar2 << 2 != lVar7);
      }
    }
    local_100 = 0xffffffff;
    local_f8 = 0;
    local_108 = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_1496fd2a8(lVar6,&local_f0,param_2);
    }
    FUN_14054b30a(&local_f0);
  }
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497c7dba FUN_1497c7dba body=487 status=ok
// SIG undefined FUN_1497c7dba(void)

void FUN_1497c7dba(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar10 = param_1 + 0x198;
  lVar8 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar8 == lVar10) {
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = lVar10;
    uVar9 = FUN_146fb4872(param_1,&local_f8);
    uVar9 = FUN_1496fcf74(uVar9,param_2,local_f8);
    FUN_146ecd042(&local_f8,uVar9);
    local_110 = param_1 + 0x248;
    local_108 = 0xffffffff;
    local_100 = 0;
    uVar9 = FUN_146fb4872(param_1,&local_110);
    lVar8 = FUN_14972a204(uVar9,param_2,local_110);
    iVar6 = FUN_1401f66f6(&local_f8,DAT_14c996ae0);
    if (iVar6 == *(int *)(lVar8 + 0x18)) {
      uVar7 = FUN_1401f66f6(&local_f8,DAT_14c996ae0);
      FUN_1446ddc76(&local_118,"Color",1);
      lVar11 = FUN_1497c4522(&local_f8,local_118);
      if (0 < (int)uVar7 && lVar11 != 0) {
        lVar12 = 0;
        uVar13 = 0;
        do {
          lVar14 = *(longlong *)(lVar8 + 0x10);
          if (*(longlong *)(lVar8 + 0x10) == 0) {
            lVar14 = lVar8;
          }
          puVar2 = (undefined4 *)
                   (param_1 + 0x268 +
                   (ulonglong)
                   ((*(uint *)(lVar14 + (uVar13 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar13 & 0x1f) & 1)
                   == 0) * 0x10);
          uVar3 = puVar2[1];
          uVar4 = puVar2[2];
          uVar5 = puVar2[3];
          puVar1 = (undefined4 *)(*(longlong *)(lVar11 + 0x10) + lVar12);
          *puVar1 = *puVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 0x10;
        } while (uVar7 != uVar13);
      }
    }
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar10;
    lVar10 = FUN_146fb78aa(param_1);
    if (lVar10 != 0) {
      FUN_1496fd2a8(lVar10,&local_f8,param_2);
    }
    FUN_14054b30a(&local_f8);
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497c7fd6 FUN_1497c7fd6 body=63 status=ok
// SIG undefined FUN_1497c7fd6(void)

undefined1 FUN_1497c7fd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497c8602(param_2,param_3);
    param_3 = param_3 + 0x328;
    param_2 = param_2 + 0x328;
  }
  return 1;
}



// FUNCTION 1497c803e FUN_1497c803e body=59 status=ok
// SIG undefined FUN_1497c803e(void)

undefined8 FUN_1497c803e(longlong *param_1)

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



// FUNCTION 1497c808a FUN_1497c808a body=40 status=ok
// SIG undefined FUN_1497c808a(void)

void FUN_1497c808a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x328) == '\x01') {
    FUN_1497c85a8(param_2);
    *(undefined1 *)(param_2 + 0x328) = 0;
  }
  return;
}



// FUNCTION 1497c8100 FUN_1497c8100 body=138 status=ok
// SIG undefined FUN_1497c8100(void)

undefined8 * FUN_1497c8100(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be70ff0;
  FUN_1414db454(param_1 + 0x33);
  FUN_1414db454(param_1 + 0x49);
  FUN_1400b22c2(param_1 + 0x5f,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x61,&DAT_149e02088);
  *(undefined2 *)(param_1 + 99) = 0x201;
  *(undefined1 *)((longlong)param_1 + 0x31a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0x3f0000003c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x3c23d70a;
  return param_1;
}



// FUNCTION 1497c818a FUN_1497c818a body=38 status=ok
// SIG undefined FUN_1497c818a(void)

undefined8 FUN_1497c818a(undefined8 param_1,int param_2)

{
  FUN_1497c85a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c81b0 FUN_1497c81b0 body=38 status=ok
// SIG undefined FUN_1497c81b0(void)

undefined8 FUN_1497c81b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGeometryCollectionTransferVertexScalarAttributeNode",1);
  return param_2;
}



// FUNCTION 1497c81d6 FUN_1497c81d6 body=38 status=ok
// SIG undefined FUN_1497c81d6(void)

undefined8 FUN_1497c81d6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TransferVertexScalarAttribute",1);
  return param_2;
}



// FUNCTION 1497c81fc FUN_1497c81fc body=38 status=ok
// SIG undefined FUN_1497c81fc(void)

undefined8 FUN_1497c81fc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection",1);
  return param_2;
}



// FUNCTION 1497c8222 FUN_1497c8222 body=32 status=ok
// SIG undefined FUN_1497c8222(void)

undefined8 FUN_1497c8222(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,
                "Transfer a named scalar attribute from the Source Collection to the Target Collection"
               );
  return param_2;
}



// FUNCTION 1497c8242 FUN_1497c8242 body=125 status=ok
// SIG undefined FUN_1497c8242(void)

void FUN_1497c8242(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc261e8 == 0) {
    uVar1 = FUN_14596eea1();
    DAT_14cc261e8 =
         FUN_140002ddd(FUN_14675b798,uVar1,L"GeometryCollectionTransferVertexScalarAttributeNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc261e8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497c8295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497c82c0 FUN_1497c82c0 body=95 status=ok
// SIG undefined FUN_1497c82c0(void)

void FUN_1497c82c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc261e8 == 0) {
    uVar2 = FUN_14596eea1();
    DAT_14cc261e8 =
         FUN_140002ddd(FUN_14675b798,uVar2,L"GeometryCollectionTransferVertexScalarAttributeNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc261e8,param_1);
  return;
}



// FUNCTION 1497c8320 FUN_1497c8320 body=57 status=ok
// SIG undefined FUN_1497c8320(void)

void FUN_1497c8320(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc261e8 == 0) {
    uVar1 = FUN_14596eea1();
    DAT_14cc261e8 =
         FUN_140002ddd(FUN_14675b798,uVar1,L"GeometryCollectionTransferVertexScalarAttributeNode");
  }
  return;
}



// FUNCTION 1497c835a FUN_1497c835a body=233 status=ok
// SIG undefined FUN_1497c835a(void)

ulonglong FUN_1497c835a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGeometryCollectionTransferVertexScalarAttributeNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497c83f4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497c83f4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497c83f4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497c83f4:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497c8444 FUN_1497c8444 body=355 status=ok
// SIG undefined FUN_1497c8444(void)

undefined8 * FUN_1497c8444(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(local_80,"SurfaceWeightsRender");
  FUN_1446ddc76(&local_88,"FGeometryCollection",1);
  FUN_1446ddc76(&local_48,"Collection",1);
  FUN_1446ddc76(&uStack_40,"AttributeKey",1);
  local_98 = (undefined4 *)0x0;
  local_90 = 2;
  FUN_1401b309e(&local_98,2,0);
  *local_98 = local_48;
  local_98[1] = uStack_44;
  local_98[2] = uStack_40;
  local_98[3] = uStack_3c;
  FUN_1496fe870(&local_70,local_80,local_88,&local_98);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1496fcee0(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0;
  *puVar1 = local_70;
  local_70 = 0;
  *(undefined4 *)(puVar1 + 1) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar1 + 0xc) = local_68._4_4_;
  local_68 = 0;
  puVar1[2] = local_60;
  puVar1[3] = 0;
  puVar1[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_50._4_4_;
  local_50 = 0;
  if (local_98 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c85a8 FUN_1497c85a8 body=89 status=ok
// SIG undefined FUN_1497c85a8(void)

void FUN_1497c85a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be70ff0;
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x49);
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497c8602 FUN_1497c8602 body=109 status=ok
// SIG undefined FUN_1497c8602(void)

longlong FUN_1497c8602(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_146ecd102(param_1 + 0x248,param_2 + 0x248);
  FUN_144a787a6(param_1 + 0x2f8,param_2 + 0x2f8);
  FUN_144a787a6(param_1 + 0x308,param_2 + 0x308);
  uVar1 = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_1 + 800) = uVar1;
  return param_1;
}



// FUNCTION 1497c8670 FUN_1497c8670 body=64 status=ok
// SIG undefined FUN_1497c8670(void)

void FUN_1497c8670(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be71310;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  *(undefined4 *)(param_2 + 0x4b) = 0x3f800000;
  return;
}



// FUNCTION 1497c86b0 FUN_1497c86b0 body=64 status=ok
// SIG undefined FUN_1497c86b0(void)

void FUN_1497c86b0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be71310;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  *(undefined4 *)(param_2 + 0x4b) = 0x3f800000;
  return;
}



// FUNCTION 1497c8714 FUN_1497c8714 body=124 status=ok
// SIG undefined FUN_1497c8714(void)

undefined1 FUN_1497c8714(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    FUN_144a67f5c(param_2 + 0x248,param_3 + 0x248);
    *(undefined4 *)(param_2 + 600) = *(undefined4 *)(param_3 + 600);
    param_2 = param_2 + 0x260;
    param_3 = param_3 + 0x260;
  }
  return 1;
}



// FUNCTION 1497c87b8 FUN_1497c87b8 body=59 status=ok
// SIG undefined FUN_1497c87b8(void)

undefined8 FUN_1497c87b8(longlong *param_1)

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



// FUNCTION 1497c8804 FUN_1497c8804 body=40 status=ok
// SIG undefined FUN_1497c8804(void)

void FUN_1497c8804(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x260) == '\x01') {
    FUN_1497c8b34(param_2);
    *(undefined1 *)(param_2 + 0x260) = 0;
  }
  return;
}



// FUNCTION 1497c887a FUN_1497c887a body=38 status=ok
// SIG undefined FUN_1497c887a(void)

undefined8 FUN_1497c887a(undefined8 param_1,int param_2)

{
  FUN_1497c8b34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c88a0 FUN_1497c88a0 body=38 status=ok
// SIG undefined FUN_1497c88a0(void)

undefined8 FUN_1497c88a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSetVertexColorInCollectionFromFloatArrayDataflowNode",1);
  return param_2;
}



// FUNCTION 1497c88c6 FUN_1497c88c6 body=38 status=ok
// SIG undefined FUN_1497c88c6(void)

undefined8 FUN_1497c88c6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetVertexColorInCollectionFromFloatArray",1);
  return param_2;
}



// FUNCTION 1497c88ec FUN_1497c88ec body=38 status=ok
// SIG undefined FUN_1497c88ec(void)

undefined8 FUN_1497c88ec(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Collection|Utilities",1);
  return param_2;
}



// FUNCTION 1497c8912 FUN_1497c8912 body=32 status=ok
// SIG undefined FUN_1497c8912(void)

undefined8 FUN_1497c8912(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497c8932 FUN_1497c8932 body=125 status=ok
// SIG undefined FUN_1497c8932(void)

void FUN_1497c8932(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc26200 == 0) {
    uVar1 = FUN_14596eea1();
    DAT_14cc26200 =
         FUN_140002ddd(FUN_14675b82f,uVar1,L"SetVertexColorInCollectionFromFloatArrayDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc26200,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497c8985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497c89b0 FUN_1497c89b0 body=95 status=ok
// SIG undefined FUN_1497c89b0(void)

void FUN_1497c89b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc26200 == 0) {
    uVar2 = FUN_14596eea1();
    DAT_14cc26200 =
         FUN_140002ddd(FUN_14675b82f,uVar2,L"SetVertexColorInCollectionFromFloatArrayDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc26200,param_1);
  return;
}



// FUNCTION 1497c8a10 FUN_1497c8a10 body=57 status=ok
// SIG undefined FUN_1497c8a10(void)

void FUN_1497c8a10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26200 == 0) {
    uVar1 = FUN_14596eea1();
    DAT_14cc26200 =
         FUN_140002ddd(FUN_14675b82f,uVar1,L"SetVertexColorInCollectionFromFloatArrayDataflowNode");
  }
  return;
}



// FUNCTION 1497c8a4a FUN_1497c8a4a body=233 status=ok
// SIG undefined FUN_1497c8a4a(void)

ulonglong FUN_1497c8a4a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FSetVertexColorInCollectionFromFloatArrayDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497c8ae4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497c8ae4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497c8ae4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497c8ae4:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497c8b34 FUN_1497c8b34 body=60 status=ok
// SIG undefined FUN_1497c8b34(void)

void FUN_1497c8b34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be71310;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497c8ba6 FUN_1497c8ba6 body=63 status=ok
// SIG undefined FUN_1497c8ba6(void)

undefined1 FUN_1497c8ba6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497c9068(param_2,param_3);
    param_3 = param_3 + 0x288;
    param_2 = param_2 + 0x288;
  }
  return 1;
}



// FUNCTION 1497c8c0e FUN_1497c8c0e body=59 status=ok
// SIG undefined FUN_1497c8c0e(void)

undefined8 FUN_1497c8c0e(longlong *param_1)

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



// FUNCTION 1497c8c5a FUN_1497c8c5a body=40 status=ok
// SIG undefined FUN_1497c8c5a(void)

void FUN_1497c8c5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x288) == '\x01') {
    FUN_1497c902c(param_2);
    *(undefined1 *)(param_2 + 0x288) = 0;
  }
  return;
}



// FUNCTION 1497c8cd0 FUN_1497c8cd0 body=161 status=ok
// SIG undefined FUN_1497c8cd0(void)

undefined8 * FUN_1497c8cd0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be715f0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  uVar1 = DAT_14c75905c;
  *(undefined4 *)(param_1 + 0x4d) = DAT_14c75905c;
  *(undefined4 *)((longlong)param_1 + 0x26c) = uVar1;
  uVar1 = DAT_14c758c60;
  *(undefined4 *)(param_1 + 0x4e) = DAT_14c758c60;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4f) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x27c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = DAT_14c75905c;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x3f800000;
  return param_1;
}



// FUNCTION 1497c8d72 FUN_1497c8d72 body=38 status=ok
// SIG undefined FUN_1497c8d72(void)

undefined8 FUN_1497c8d72(undefined8 param_1,int param_2)

{
  FUN_1497c902c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c8d98 FUN_1497c8d98 body=38 status=ok
// SIG undefined FUN_1497c8d98(void)

undefined8 FUN_1497c8d98(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSetVertexColorInCollectionFromVertexSelectionDataflowNode",1);
  return param_2;
}



// FUNCTION 1497c8dbe FUN_1497c8dbe body=38 status=ok
// SIG undefined FUN_1497c8dbe(void)

undefined8 FUN_1497c8dbe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetVertexColorInCollectionFromVertexSelection",1);
  return param_2;
}



// FUNCTION 1497c8de4 FUN_1497c8de4 body=38 status=ok
// SIG undefined FUN_1497c8de4(void)

undefined8 FUN_1497c8de4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Collection|Utilities",1);
  return param_2;
}



// FUNCTION 1497c8e0a FUN_1497c8e0a body=32 status=ok
// SIG undefined FUN_1497c8e0a(void)

undefined8 FUN_1497c8e0a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497c8e2a FUN_1497c8e2a body=125 status=ok
// SIG undefined FUN_1497c8e2a(void)

void FUN_1497c8e2a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc26218 == 0) {
    uVar1 = FUN_14596eea1();
    DAT_14cc26218 =
         FUN_140002ddd(FUN_14675b8c5,uVar1,
                       L"SetVertexColorInCollectionFromVertexSelectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc26218,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497c8e7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497c8ea8 FUN_1497c8ea8 body=95 status=ok
// SIG undefined FUN_1497c8ea8(void)

void FUN_1497c8ea8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc26218 == 0) {
    uVar2 = FUN_14596eea1();
    DAT_14cc26218 =
         FUN_140002ddd(FUN_14675b8c5,uVar2,
                       L"SetVertexColorInCollectionFromVertexSelectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc26218,param_1);
  return;
}



// FUNCTION 1497c8f08 FUN_1497c8f08 body=57 status=ok
// SIG undefined FUN_1497c8f08(void)

void FUN_1497c8f08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26218 == 0) {
    uVar1 = FUN_14596eea1();
    DAT_14cc26218 =
         FUN_140002ddd(FUN_14675b8c5,uVar1,
                       L"SetVertexColorInCollectionFromVertexSelectionDataflowNode");
  }
  return;
}



// FUNCTION 1497c8f42 FUN_1497c8f42 body=233 status=ok
// SIG undefined FUN_1497c8f42(void)

ulonglong FUN_1497c8f42(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FSetVertexColorInCollectionFromVertexSelectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497c8fdc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497c8fdc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497c8fdc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497c8fdc:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497c902c FUN_1497c902c body=60 status=ok
// SIG undefined FUN_1497c902c(void)

void FUN_1497c902c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be715f0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}


