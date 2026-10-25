// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1497ae672 FUN_1497ae672 body=22 status=ok
// SIG undefined FUN_1497ae672(void)

undefined8 FUN_1497ae672(undefined8 param_1)

{
  FUN_1497ae688();
  return param_1;
}



// FUNCTION 1497ae688 FUN_1497ae688 body=153 status=ok
// SIG undefined FUN_1497ae688(void)

undefined8 * FUN_1497ae688(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497ae722(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ae722 FUN_1497ae722 body=302 status=ok
// SIG undefined FUN_1497ae722(void)

undefined8 * FUN_1497ae722(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be5c680;
  local_60 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1a4);
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ae852 FUN_1497ae852 body=25 status=ok
// SIG undefined FUN_1497ae852(void)

undefined8 FUN_1497ae852(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497ae88a FUN_1497ae88a body=177 status=ok
// SIG undefined FUN_1497ae88a(void)

void FUN_1497ae88a(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1497ae93c(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ae93c FUN_1497ae93c body=208 status=ok
// SIG undefined FUN_1497ae93c(void)

void FUN_1497ae93c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1497aea0e(puVar1,&local_58,param_3,param_4);
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



// FUNCTION 1497aea0e FUN_1497aea0e body=190 status=ok
// SIG undefined FUN_1497aea0e(void)

undefined8 *
FUN_1497aea0e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
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
  *param_1 = &PTR_FUN_14be6d2b0;
  param_1[7] = &PTR_FUN_14be6d2c0;
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



// FUNCTION 1497aeace FUN_1497aeace body=53 status=ok
// SIG undefined FUN_1497aeace(void)

longlong FUN_1497aeace(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497aeb04 FUN_1497aeb04 body=101 status=ok
// SIG undefined FUN_1497aeb04(void)

undefined8 * FUN_1497aeb04(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d2e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497aeb6a FUN_1497aeb6a body=49 status=ok
// SIG undefined FUN_1497aeb6a(void)

undefined8 * FUN_1497aeb6a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -7);
  }
  return param_1 + -7;
}



// FUNCTION 1497aebba FUN_1497aebba body=32 status=ok
// SIG undefined FUN_1497aebba(void)

undefined8 FUN_1497aebba(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TContextCacheElementUObject");
  return param_2;
}



// FUNCTION 1497aebda FUN_1497aebda body=29 status=ok
// SIG undefined FUN_1497aebda(void)

undefined8 FUN_1497aebda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497aebf8 FUN_1497aebf8 body=101 status=ok
// SIG undefined FUN_1497aebf8(void)

undefined8 * FUN_1497aebf8(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d2e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497aec5e FUN_1497aec5e body=22 status=ok
// SIG undefined FUN_1497aec5e(void)

undefined8 FUN_1497aec5e(undefined8 param_1)

{
  FUN_1497aec74();
  return param_1;
}



// FUNCTION 1497aec74 FUN_1497aec74 body=153 status=ok
// SIG undefined FUN_1497aec74(void)

undefined8 * FUN_1497aec74(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497aed0e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497aed0e FUN_1497aed0e body=207 status=ok
// SIG undefined FUN_1497aed0e(void)

undefined8 * FUN_1497aed0e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
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
  *param_1 = &PTR_FUN_14be5c920;
  param_1[0x33] = 0;
  FUN_1414db454(param_1 + 0x34);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x34;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497aedde FUN_1497aedde body=25 status=ok
// SIG undefined FUN_1497aedde(void)

undefined8 FUN_1497aedde(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497aee16 FUN_1497aee16 body=22 status=ok
// SIG undefined FUN_1497aee16(void)

undefined8 FUN_1497aee16(undefined8 param_1)

{
  FUN_1497aee2c();
  return param_1;
}



// FUNCTION 1497aee2c FUN_1497aee2c body=153 status=ok
// SIG undefined FUN_1497aee2c(void)

undefined8 * FUN_1497aee2c(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x318,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497aeec6(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497aeec6 FUN_1497aeec6 body=352 status=ok
// SIG undefined FUN_1497aeec6(void)

undefined8 * FUN_1497aeec6(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be5cbd0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  FUN_1414db454(param_1 + 0x49);
  local_88 = param_1 + 0x61;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
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
  local_60 = param_1 + 0x5f;
  FUN_146fb8a66(param_1,&local_60,&local_80);
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



// FUNCTION 1497af028 FUN_1497af028 body=25 status=ok
// SIG undefined FUN_1497af028(void)

undefined8 FUN_1497af028(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497af060 FUN_1497af060 body=22 status=ok
// SIG undefined FUN_1497af060(void)

undefined8 FUN_1497af060(undefined8 param_1)

{
  FUN_1497af076();
  return param_1;
}



// FUNCTION 1497af076 FUN_1497af076 body=153 status=ok
// SIG undefined FUN_1497af076(void)

undefined8 * FUN_1497af076(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497af110(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497af110 FUN_1497af110 body=169 status=ok
// SIG undefined FUN_1497af110(void)

undefined8 * FUN_1497af110(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be5ce80;
  *(undefined2 *)(param_1 + 0x33) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x40000000ffffffff;
  FUN_1400b22c2(param_1 + 0x35,&DAT_149e02088);
  local_50 = 0;
  local_28 = 0xffffffff;
  local_20 = 0;
  local_30 = param_1 + 0x35;
  FUN_146fb824a(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497af1ba FUN_1497af1ba body=25 status=ok
// SIG undefined FUN_1497af1ba(void)

undefined8 FUN_1497af1ba(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497af1f2 FUN_1497af1f2 body=22 status=ok
// SIG undefined FUN_1497af1f2(void)

undefined8 FUN_1497af1f2(undefined8 param_1)

{
  FUN_1497af208();
  return param_1;
}



// FUNCTION 1497af208 FUN_1497af208 body=153 status=ok
// SIG undefined FUN_1497af208(void)

undefined8 * FUN_1497af208(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497af2a2(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497af2a2 FUN_1497af2a2 body=150 status=ok
// SIG undefined FUN_1497af2a2(void)

undefined8 * FUN_1497af2a2(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be5d110;
  *(undefined1 *)(param_1 + 0x33) = 1;
  FUN_1400b22c2(param_1 + 0x34,&DAT_149e02088);
  local_50 = 0;
  local_28 = 0xffffffff;
  local_20 = 0;
  local_30 = param_1 + 0x34;
  FUN_146fb824a(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497af33a FUN_1497af33a body=25 status=ok
// SIG undefined FUN_1497af33a(void)

undefined8 FUN_1497af33a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497af372 FUN_1497af372 body=22 status=ok
// SIG undefined FUN_1497af372(void)

undefined8 FUN_1497af372(undefined8 param_1)

{
  FUN_1497af388();
  return param_1;
}



// FUNCTION 1497af388 FUN_1497af388 body=153 status=ok
// SIG undefined FUN_1497af388(void)

undefined8 * FUN_1497af388(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497af422(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497af422 FUN_1497af422 body=229 status=ok
// SIG undefined FUN_1497af422(void)

undefined8 * FUN_1497af422(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be5d3a0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x49;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497af508 FUN_1497af508 body=25 status=ok
// SIG undefined FUN_1497af508(void)

undefined8 FUN_1497af508(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497af540 FUN_1497af540 body=22 status=ok
// SIG undefined FUN_1497af540(void)

undefined8 FUN_1497af540(undefined8 param_1)

{
  FUN_1497af556();
  return param_1;
}



// FUNCTION 1497af556 FUN_1497af556 body=153 status=ok
// SIG undefined FUN_1497af556(void)

undefined8 * FUN_1497af556(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x238,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497af5f0(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497af5f0 FUN_1497af5f0 body=473 status=ok
// SIG undefined FUN_1497af5f0(void)

undefined8 * FUN_1497af5f0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
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
  *param_1 = &PTR_FUN_14be5da00;
  local_60 = param_1 + 0x33;
  local_90 = param_1 + 0x43;
  local_88 = param_1 + 0x46;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3a;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3d;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x40;
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
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497af7ca FUN_1497af7ca body=25 status=ok
// SIG undefined FUN_1497af7ca(void)

undefined8 FUN_1497af7ca(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497af802 FUN_1497af802 body=22 status=ok
// SIG undefined FUN_1497af802(void)

undefined8 FUN_1497af802(undefined8 param_1)

{
  FUN_1497af818();
  return param_1;
}



// FUNCTION 1497af818 FUN_1497af818 body=153 status=ok
// SIG undefined FUN_1497af818(void)

undefined8 * FUN_1497af818(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1c0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497af8b2(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497af8b2 FUN_1497af8b2 body=210 status=ok
// SIG undefined FUN_1497af8b2(void)

undefined8 * FUN_1497af8b2(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be5d760;
  local_50 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 5;
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x35;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497af986 FUN_1497af986 body=25 status=ok
// SIG undefined FUN_1497af986(void)

undefined8 FUN_1497af986(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497af9be FUN_1497af9be body=22 status=ok
// SIG undefined FUN_1497af9be(void)

undefined8 FUN_1497af9be(undefined8 param_1)

{
  FUN_1497af9d4();
  return param_1;
}



// FUNCTION 1497af9d4 FUN_1497af9d4 body=153 status=ok
// SIG undefined FUN_1497af9d4(void)

undefined8 * FUN_1497af9d4(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1c0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497afa6e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497afa6e FUN_1497afa6e body=309 status=ok
// SIG undefined FUN_1497afa6e(void)

undefined8 * FUN_1497afa6e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be5dcb0;
  local_60 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x36;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1b4);
  FUN_146fb8a66(param_1,&local_60,&local_80);
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



// FUNCTION 1497afba4 FUN_1497afba4 body=25 status=ok
// SIG undefined FUN_1497afba4(void)

undefined8 FUN_1497afba4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497afbdc FUN_1497afbdc body=22 status=ok
// SIG undefined FUN_1497afbdc(void)

undefined8 FUN_1497afbdc(undefined8 param_1)

{
  FUN_1497afbf2();
  return param_1;
}



// FUNCTION 1497afbf2 FUN_1497afbf2 body=153 status=ok
// SIG undefined FUN_1497afbf2(void)

undefined8 * FUN_1497afbf2(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497afc8c(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497afc8c FUN_1497afc8c body=286 status=ok
// SIG undefined FUN_1497afc8c(void)

undefined8 * FUN_1497afc8c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be5df60;
  FUN_1400b22c2(param_1 + 0x33,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x35,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x37,&DAT_149e02088);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
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



// FUNCTION 1497afdac FUN_1497afdac body=25 status=ok
// SIG undefined FUN_1497afdac(void)

undefined8 FUN_1497afdac(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497afde4 FUN_1497afde4 body=22 status=ok
// SIG undefined FUN_1497afde4(void)

undefined8 FUN_1497afde4(undefined8 param_1)

{
  FUN_1497afdfa();
  return param_1;
}



// FUNCTION 1497afdfa FUN_1497afdfa body=153 status=ok
// SIG undefined FUN_1497afdfa(void)

undefined8 * FUN_1497afdfa(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497afe94(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497afe94 FUN_1497afe94 body=215 status=ok
// SIG undefined FUN_1497afe94(void)

undefined8 * FUN_1497afe94(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be5e200;
  FUN_1400b22c2(param_1 + 0x33,&DAT_149e02088);
  *(undefined4 *)(param_1 + 0x35) = 0;
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x35;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497aff6c FUN_1497aff6c body=25 status=ok
// SIG undefined FUN_1497aff6c(void)

undefined8 FUN_1497aff6c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497affa4 FUN_1497affa4 body=22 status=ok
// SIG undefined FUN_1497affa4(void)

undefined8 FUN_1497affa4(undefined8 param_1)

{
  FUN_1497affba();
  return param_1;
}



// FUNCTION 1497affba FUN_1497affba body=153 status=ok
// SIG undefined FUN_1497affba(void)

undefined8 * FUN_1497affba(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b0054(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b0054 FUN_1497b0054 body=203 status=ok
// SIG undefined FUN_1497b0054(void)

undefined8 * FUN_1497b0054(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be5e4a0;
  local_50 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x36;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b0120 FUN_1497b0120 body=25 status=ok
// SIG undefined FUN_1497b0120(void)

undefined8 FUN_1497b0120(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b0158 FUN_1497b0158 body=22 status=ok
// SIG undefined FUN_1497b0158(void)

undefined8 FUN_1497b0158(undefined8 param_1)

{
  FUN_1497b016e();
  return param_1;
}



// FUNCTION 1497b016e FUN_1497b016e body=153 status=ok
// SIG undefined FUN_1497b016e(void)

undefined8 * FUN_1497b016e(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b0208(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b0208 FUN_1497b0208 body=282 status=ok
// SIG undefined FUN_1497b0208(void)

undefined8 * FUN_1497b0208(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be5e740;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4d;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b0324 FUN_1497b0324 body=25 status=ok
// SIG undefined FUN_1497b0324(void)

undefined8 FUN_1497b0324(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b035c FUN_1497b035c body=22 status=ok
// SIG undefined FUN_1497b035c(void)

undefined8 FUN_1497b035c(undefined8 param_1)

{
  FUN_1497b0372();
  return param_1;
}



// FUNCTION 1497b0372 FUN_1497b0372 body=153 status=ok
// SIG undefined FUN_1497b0372(void)

undefined8 * FUN_1497b0372(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b040c(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b040c FUN_1497b040c body=206 status=ok
// SIG undefined FUN_1497b040c(void)

undefined8 * FUN_1497b040c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
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
  *param_1 = &PTR_FUN_14be5ea00;
  FUN_1414db454(param_1 + 0x33);
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x49;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b04dc FUN_1497b04dc body=25 status=ok
// SIG undefined FUN_1497b04dc(void)

undefined8 FUN_1497b04dc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b0514 FUN_1497b0514 body=22 status=ok
// SIG undefined FUN_1497b0514(void)

undefined8 FUN_1497b0514(undefined8 param_1)

{
  FUN_1497b052a();
  return param_1;
}



// FUNCTION 1497b052a FUN_1497b052a body=153 status=ok
// SIG undefined FUN_1497b052a(void)

undefined8 * FUN_1497b052a(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b05c4(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b05c4 FUN_1497b05c4 body=282 status=ok
// SIG undefined FUN_1497b05c4(void)

undefined8 * FUN_1497b05c4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be5ecc0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x4d;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b06e0 FUN_1497b06e0 body=25 status=ok
// SIG undefined FUN_1497b06e0(void)

undefined8 FUN_1497b06e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b0718 FUN_1497b0718 body=22 status=ok
// SIG undefined FUN_1497b0718(void)

undefined8 FUN_1497b0718(undefined8 param_1)

{
  FUN_1497b072e();
  return param_1;
}



// FUNCTION 1497b072e FUN_1497b072e body=153 status=ok
// SIG undefined FUN_1497b072e(void)

undefined8 * FUN_1497b072e(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x2d8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497b07c8(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b07c8 FUN_1497b07c8 body=268 status=ok
// SIG undefined FUN_1497b07c8(void)

undefined8 * FUN_1497b07c8(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be5f0e0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x251) = 0;
  *(undefined8 *)((longlong)param_1 + 0x259) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0x3ff0000000000000;
  param_1[0x51] = 0x3ff0000000000000;
  param_1[0x52] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x53) = 0x3f800000;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
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



// FUNCTION 1497b08d6 FUN_1497b08d6 body=25 status=ok
// SIG undefined FUN_1497b08d6(void)

undefined8 FUN_1497b08d6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b090e FUN_1497b090e body=22 status=ok
// SIG undefined FUN_1497b090e(void)

undefined8 FUN_1497b090e(undefined8 param_1)

{
  FUN_1497b0924();
  return param_1;
}



// FUNCTION 1497b0924 FUN_1497b0924 body=153 status=ok
// SIG undefined FUN_1497b0924(void)

undefined8 * FUN_1497b0924(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b09be(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b09be FUN_1497b09be body=168 status=ok
// SIG undefined FUN_1497b09be(void)

undefined8 * FUN_1497b09be(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be5f3a0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
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



// FUNCTION 1497b0a68 FUN_1497b0a68 body=25 status=ok
// SIG undefined FUN_1497b0a68(void)

undefined8 FUN_1497b0a68(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b0aa0 FUN_1497b0aa0 body=22 status=ok
// SIG undefined FUN_1497b0aa0(void)

undefined8 FUN_1497b0aa0(undefined8 param_1)

{
  FUN_1497b0ab6();
  return param_1;
}



// FUNCTION 1497b0ab6 FUN_1497b0ab6 body=153 status=ok
// SIG undefined FUN_1497b0ab6(void)

undefined8 * FUN_1497b0ab6(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x230,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497b0b50(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b0b50 FUN_1497b0b50 body=267 status=ok
// SIG undefined FUN_1497b0b50(void)

undefined8 * FUN_1497b0b50(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be5f660;
  puVar1 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x3ff0000000000000;
  param_1[0x3c] = 0x3ff0000000000000;
  param_1[0x3d] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f800000;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  local_60 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = puVar1;
  FUN_146fb824a(param_1,&local_40);
  local_40 = (undefined8 *)0x0;
  FUN_14979a36e(param_1,puVar1,puVar1,&local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b0c5c FUN_1497b0c5c body=25 status=ok
// SIG undefined FUN_1497b0c5c(void)

undefined8 FUN_1497b0c5c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b0c94 FUN_1497b0c94 body=22 status=ok
// SIG undefined FUN_1497b0c94(void)

undefined8 FUN_1497b0c94(undefined8 param_1)

{
  FUN_1497b0caa();
  return param_1;
}



// FUNCTION 1497b0caa FUN_1497b0caa body=153 status=ok
// SIG undefined FUN_1497b0caa(void)

undefined8 * FUN_1497b0caa(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497b0d44(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b0d44 FUN_1497b0d44 body=255 status=ok
// SIG undefined FUN_1497b0d44(void)

undefined8 * FUN_1497b0d44(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
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
  *param_1 = &PTR_FUN_14be5fa40;
  *(undefined1 *)(param_1 + 0x33) = 0;
  local_58 = (undefined8 *)((longlong)param_1 + 0x19c);
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = (undefined8 *)((longlong)param_1 + 0x1a4);
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b0e44 FUN_1497b0e44 body=25 status=ok
// SIG undefined FUN_1497b0e44(void)

undefined8 FUN_1497b0e44(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b0e7c FUN_1497b0e7c body=22 status=ok
// SIG undefined FUN_1497b0e7c(void)

undefined8 FUN_1497b0e7c(undefined8 param_1)

{
  FUN_1497b0e92();
  return param_1;
}



// FUNCTION 1497b0e92 FUN_1497b0e92 body=153 status=ok
// SIG undefined FUN_1497b0e92(void)

undefined8 * FUN_1497b0e92(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497b0f2c(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b0f2c FUN_1497b0f2c body=255 status=ok
// SIG undefined FUN_1497b0f2c(void)

undefined8 * FUN_1497b0f2c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
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
  *param_1 = &PTR_FUN_14be5fce0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  local_58 = (undefined8 *)((longlong)param_1 + 0x19c);
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = (undefined8 *)((longlong)param_1 + 0x1a4);
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b102c FUN_1497b102c body=25 status=ok
// SIG undefined FUN_1497b102c(void)

undefined8 FUN_1497b102c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b1064 FUN_1497b1064 body=22 status=ok
// SIG undefined FUN_1497b1064(void)

undefined8 FUN_1497b1064(undefined8 param_1)

{
  FUN_1497b107a();
  return param_1;
}



// FUNCTION 1497b107a FUN_1497b107a body=153 status=ok
// SIG undefined FUN_1497b107a(void)

undefined8 * FUN_1497b107a(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b1114(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b1114 FUN_1497b1114 body=306 status=ok
// SIG undefined FUN_1497b1114(void)

undefined8 * FUN_1497b1114(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be5ff80;
  local_60 = param_1 + 0x33;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x36;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b1248 FUN_1497b1248 body=25 status=ok
// SIG undefined FUN_1497b1248(void)

undefined8 FUN_1497b1248(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b1280 FUN_1497b1280 body=22 status=ok
// SIG undefined FUN_1497b1280(void)

undefined8 FUN_1497b1280(undefined8 param_1)

{
  FUN_1497b1296();
  return param_1;
}



// FUNCTION 1497b1296 FUN_1497b1296 body=153 status=ok
// SIG undefined FUN_1497b1296(void)

undefined8 * FUN_1497b1296(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x3b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497b1330(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b1330 FUN_1497b1330 body=331 status=ok
// SIG undefined FUN_1497b1330(void)

undefined8 * FUN_1497b1330(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
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
  *param_1 = &PTR_FUN_14be60230;
  FUN_1414db454(param_1 + 0x33);
  FUN_1414db454(param_1 + 0x49);
  local_88 = param_1 + 0x5f;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  FUN_1414db454(param_1 + 0x60);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x60;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b147c FUN_1497b147c body=25 status=ok
// SIG undefined FUN_1497b147c(void)

undefined8 FUN_1497b147c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b14b4 FUN_1497b14b4 body=22 status=ok
// SIG undefined FUN_1497b14b4(void)

undefined8 FUN_1497b14b4(undefined8 param_1)

{
  FUN_1497b14ca();
  return param_1;
}



// FUNCTION 1497b14ca FUN_1497b14ca body=153 status=ok
// SIG undefined FUN_1497b14ca(void)

undefined8 * FUN_1497b14ca(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(600,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497b1564(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b1564 FUN_1497b1564 body=208 status=ok
// SIG undefined FUN_1497b1564(void)

undefined8 * FUN_1497b1564(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be604d0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x49;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b1636 FUN_1497b1636 body=25 status=ok
// SIG undefined FUN_1497b1636(void)

undefined8 FUN_1497b1636(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b166e FUN_1497b166e body=22 status=ok
// SIG undefined FUN_1497b166e(void)

undefined8 FUN_1497b166e(undefined8 param_1)

{
  FUN_1497b1684();
  return param_1;
}



// FUNCTION 1497b1684 FUN_1497b1684 body=153 status=ok
// SIG undefined FUN_1497b1684(void)

undefined8 * FUN_1497b1684(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b171e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b171e FUN_1497b171e body=487 status=ok
// SIG undefined FUN_1497b171e(void)

undefined8 * FUN_1497b171e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be60770;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  local_98 = (undefined8 *)((longlong)param_1 + 0x26c);
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0x3f800000;
  local_90 = (undefined8 *)((longlong)param_1 + 0x274);
  local_88 = (undefined8 *)((longlong)param_1 + 0x27c);
  *(undefined1 *)((longlong)param_1 + 0x27c) = 0;
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
  local_60 = param_1 + 0x4d;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b1906 FUN_1497b1906 body=25 status=ok
// SIG undefined FUN_1497b1906(void)

undefined8 FUN_1497b1906(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b193e FUN_1497b193e body=22 status=ok
// SIG undefined FUN_1497b193e(void)

undefined8 FUN_1497b193e(undefined8 param_1)

{
  FUN_1497b1954();
  return param_1;
}



// FUNCTION 1497b1954 FUN_1497b1954 body=153 status=ok
// SIG undefined FUN_1497b1954(void)

undefined8 * FUN_1497b1954(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b19ee(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b19ee FUN_1497b19ee body=258 status=ok
// SIG undefined FUN_1497b19ee(void)

undefined8 * FUN_1497b19ee(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be60aa0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  puVar1 = param_1 + 0x34;
  FUN_1414db454(puVar1);
  param_1[0x4c] = 0;
  param_1[0x4d] = 0x8000000000;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = puVar1;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x4a;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_58 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_58);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b1af2 FUN_1497b1af2 body=25 status=ok
// SIG undefined FUN_1497b1af2(void)

undefined8 FUN_1497b1af2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b1b2a FUN_1497b1b2a body=22 status=ok
// SIG undefined FUN_1497b1b2a(void)

undefined8 FUN_1497b1b2a(undefined8 param_1)

{
  FUN_1497b1b40();
  return param_1;
}



// FUNCTION 1497b1b40 FUN_1497b1b40 body=153 status=ok
// SIG undefined FUN_1497b1b40(void)

undefined8 * FUN_1497b1b40(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(600,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497b1bda(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b1bda FUN_1497b1bda body=308 status=ok
// SIG undefined FUN_1497b1bda(void)

undefined8 * FUN_1497b1bda(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be610c0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1a3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a7) = 1;
  puVar1 = param_1 + 0x35;
  FUN_1414db454(puVar1);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b1d10 FUN_1497b1d10 body=25 status=ok
// SIG undefined FUN_1497b1d10(void)

undefined8 FUN_1497b1d10(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b1d48 FUN_1497b1d48 body=22 status=ok
// SIG undefined FUN_1497b1d48(void)

undefined8 FUN_1497b1d48(undefined8 param_1)

{
  FUN_1497b1d5e();
  return param_1;
}



// FUNCTION 1497b1d5e FUN_1497b1d5e body=153 status=ok
// SIG undefined FUN_1497b1d5e(void)

undefined8 * FUN_1497b1d5e(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b1df8(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b1df8 FUN_1497b1df8 body=295 status=ok
// SIG undefined FUN_1497b1df8(void)

undefined8 * FUN_1497b1df8(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be61350;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x3ff00000;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x3ff00000;
  param_1[0x54] = 0x3ff0000000000000;
  param_1[0x55] = 0;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = puVar1;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x4a;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_58 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_58);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b1f20 FUN_1497b1f20 body=25 status=ok
// SIG undefined FUN_1497b1f20(void)

undefined8 FUN_1497b1f20(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b1f58 FUN_1497b1f58 body=22 status=ok
// SIG undefined FUN_1497b1f58(void)

undefined8 FUN_1497b1f58(undefined8 param_1)

{
  FUN_1497b1f6e();
  return param_1;
}



// FUNCTION 1497b1f6e FUN_1497b1f6e body=153 status=ok
// SIG undefined FUN_1497b1f6e(void)

undefined8 * FUN_1497b1f6e(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b2008(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b2008 FUN_1497b2008 body=286 status=ok
// SIG undefined FUN_1497b2008(void)

undefined8 * FUN_1497b2008(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be61e60;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  *(undefined1 *)(param_1 + 0x49) = 0;
  FUN_1400b22c2(param_1 + 0x4a,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x4c,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x4e) = 2;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = puVar1;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = (undefined8 *)((longlong)param_1 + 0x274);
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_58 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_58);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b2128 FUN_1497b2128 body=25 status=ok
// SIG undefined FUN_1497b2128(void)

undefined8 FUN_1497b2128(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b2160 FUN_1497b2160 body=22 status=ok
// SIG undefined FUN_1497b2160(void)

undefined8 FUN_1497b2160(undefined8 param_1)

{
  FUN_1497b2176();
  return param_1;
}



// FUNCTION 1497b2176 FUN_1497b2176 body=153 status=ok
// SIG undefined FUN_1497b2176(void)

undefined8 * FUN_1497b2176(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b2210(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b2210 FUN_1497b2210 body=234 status=ok
// SIG undefined FUN_1497b2210(void)

undefined8 * FUN_1497b2210(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be62120;
  FUN_1414db454(param_1 + 0x33);
  *(undefined1 *)(param_1 + 0x49) = 0;
  FUN_1400b22c2(param_1 + 0x4a,&DAT_149e02088);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x4c;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b22fc FUN_1497b22fc body=25 status=ok
// SIG undefined FUN_1497b22fc(void)

undefined8 FUN_1497b22fc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b2334 FUN_1497b2334 body=22 status=ok
// SIG undefined FUN_1497b2334(void)

undefined8 FUN_1497b2334(undefined8 param_1)

{
  FUN_1497b234a();
  return param_1;
}



// FUNCTION 1497b234a FUN_1497b234a body=153 status=ok
// SIG undefined FUN_1497b234a(void)

undefined8 * FUN_1497b234a(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x310,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497b23e4(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b23e4 FUN_1497b23e4 body=776 status=ok
// SIG undefined FUN_1497b23e4(void)

undefined8 * FUN_1497b23e4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be623e0;
  FUN_1414db454(param_1 + 0x33);
  FUN_1400b22c2(param_1 + 0x49,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x4b,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  FUN_1400b22c2(param_1 + 0x4e,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x50,&DAT_149e02088);
  local_b8 = param_1 + 0x54;
  local_b0 = param_1 + 0x56;
  local_a8 = param_1 + 0x58;
  local_a0 = param_1 + 0x5a;
  local_98 = param_1 + 0x5c;
  local_90 = param_1 + 0x5e;
  local_88 = param_1 + 0x60;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x52;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
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
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b26ee FUN_1497b26ee body=25 status=ok
// SIG undefined FUN_1497b26ee(void)

undefined8 FUN_1497b26ee(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b2726 FUN_1497b2726 body=22 status=ok
// SIG undefined FUN_1497b2726(void)

undefined8 FUN_1497b2726(undefined8 param_1)

{
  FUN_1497b273c();
  return param_1;
}



// FUNCTION 1497b273c FUN_1497b273c body=153 status=ok
// SIG undefined FUN_1497b273c(void)

undefined8 * FUN_1497b273c(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x310,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497b27d6(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b27d6 FUN_1497b27d6 body=801 status=ok
// SIG undefined FUN_1497b27d6(void)

undefined8 * FUN_1497b27d6(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be626a0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  FUN_1400b22c2(param_1 + 0x49,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x4b,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  FUN_1400b22c2(param_1 + 0x4e,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x50,&DAT_149e02088);
  local_b8 = param_1 + 0x54;
  local_b0 = param_1 + 0x56;
  local_a8 = param_1 + 0x58;
  local_a0 = param_1 + 0x5a;
  local_98 = param_1 + 0x5c;
  local_90 = param_1 + 0x5e;
  local_88 = param_1 + 0x60;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
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
  local_60 = param_1 + 0x52;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a8;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_90;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b2af8 FUN_1497b2af8 body=25 status=ok
// SIG undefined FUN_1497b2af8(void)

undefined8 FUN_1497b2af8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b2b30 FUN_1497b2b30 body=22 status=ok
// SIG undefined FUN_1497b2b30(void)

undefined8 FUN_1497b2b30(undefined8 param_1)

{
  FUN_1497b2b46();
  return param_1;
}



// FUNCTION 1497b2b46 FUN_1497b2b46 body=153 status=ok
// SIG undefined FUN_1497b2b46(void)

undefined8 * FUN_1497b2b46(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b2be0(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b2be0 FUN_1497b2be0 body=283 status=ok
// SIG undefined FUN_1497b2be0(void)

undefined8 * FUN_1497b2be0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  *param_1 = &PTR_FUN_14be62c20;
  local_58 = param_1 + 0x34;
  puVar2 = &DAT_14c846480;
  puVar3 = local_58;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x4c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x40;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x4c;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b2cfc FUN_1497b2cfc body=25 status=ok
// SIG undefined FUN_1497b2cfc(void)

undefined8 FUN_1497b2cfc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b2d34 FUN_1497b2d34 body=22 status=ok
// SIG undefined FUN_1497b2d34(void)

undefined8 FUN_1497b2d34(undefined8 param_1)

{
  FUN_1497b2d4a();
  return param_1;
}



// FUNCTION 1497b2d4a FUN_1497b2d4a body=153 status=ok
// SIG undefined FUN_1497b2d4a(void)

undefined8 * FUN_1497b2d4a(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b2de4(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b2de4 FUN_1497b2de4 body=221 status=ok
// SIG undefined FUN_1497b2de4(void)

undefined8 * FUN_1497b2de4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be62ed0;
  local_50 = param_1 + 0x34;
  puVar2 = &DAT_14c846480;
  puVar3 = local_50;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x40;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b2ec2 FUN_1497b2ec2 body=25 status=ok
// SIG undefined FUN_1497b2ec2(void)

undefined8 FUN_1497b2ec2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b2efa FUN_1497b2efa body=22 status=ok
// SIG undefined FUN_1497b2efa(void)

undefined8 FUN_1497b2efa(undefined8 param_1)

{
  FUN_1497b2f10();
  return param_1;
}



// FUNCTION 1497b2f10 FUN_1497b2f10 body=153 status=ok
// SIG undefined FUN_1497b2f10(void)

undefined8 * FUN_1497b2f10(undefined8 *param_1,undefined4 *param_2)

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
  FUN_1497b2faa(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b2faa FUN_1497b2faa body=220 status=ok
// SIG undefined FUN_1497b2faa(void)

undefined8 * FUN_1497b2faa(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be62960;
  local_50 = param_1 + 0x33;
  param_1[0x35] = 0;
  param_1[0x36] = 0x8000000000;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x37;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b3088 FUN_1497b3088 body=25 status=ok
// SIG undefined FUN_1497b3088(void)

undefined8 FUN_1497b3088(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b30c0 FUN_1497b30c0 body=22 status=ok
// SIG undefined FUN_1497b30c0(void)

undefined8 FUN_1497b30c0(undefined8 param_1)

{
  FUN_1497b30d6();
  return param_1;
}



// FUNCTION 1497b30d6 FUN_1497b30d6 body=153 status=ok
// SIG undefined FUN_1497b30d6(void)

undefined8 * FUN_1497b30d6(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497b3170(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b3170 FUN_1497b3170 body=306 status=ok
// SIG undefined FUN_1497b3170(void)

undefined8 * FUN_1497b3170(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be63160;
  local_60 = param_1 + 0x33;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1a4);
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b32a4 FUN_1497b32a4 body=25 status=ok
// SIG undefined FUN_1497b32a4(void)

undefined8 FUN_1497b32a4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b32dc FUN_1497b32dc body=22 status=ok
// SIG undefined FUN_1497b32dc(void)

undefined8 FUN_1497b32dc(undefined8 param_1)

{
  FUN_1497b32f2();
  return param_1;
}



// FUNCTION 1497b32f2 FUN_1497b32f2 body=153 status=ok
// SIG undefined FUN_1497b32f2(void)

undefined8 * FUN_1497b32f2(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497b338c(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b338c FUN_1497b338c body=306 status=ok
// SIG undefined FUN_1497b338c(void)

undefined8 * FUN_1497b338c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = &PTR_FUN_14be63400;
  local_60 = param_1 + 0x33;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x19c);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1a4);
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b34c0 FUN_1497b34c0 body=25 status=ok
// SIG undefined FUN_1497b34c0(void)

undefined8 FUN_1497b34c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497b34f8 FUN_1497b34f8 body=177 status=ok
// SIG undefined FUN_1497b34f8(void)

void FUN_1497b34f8(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1497b35aa(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b35aa FUN_1497b35aa body=223 status=ok
// SIG undefined FUN_1497b35aa(void)

void FUN_1497b35aa(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
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
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
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
  *local_48 = &PTR_FUN_14be6d750;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
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



// FUNCTION 1497b368a FUN_1497b368a body=69 status=ok
// SIG undefined FUN_1497b368a(void)

undefined8 * FUN_1497b368a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be6d750;
  FUN_1447a1747(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b36d0 FUN_1497b36d0 body=101 status=ok
// SIG undefined FUN_1497b36d0(void)

undefined8 * FUN_1497b36d0(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d760;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b3736 FUN_1497b3736 body=29 status=ok
// SIG undefined FUN_1497b3736(void)

undefined8 FUN_1497b3736(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b3754 FUN_1497b3754 body=101 status=ok
// SIG undefined FUN_1497b3754(void)

undefined8 * FUN_1497b3754(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d760;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b37ba FUN_1497b37ba body=177 status=ok
// SIG undefined FUN_1497b37ba(void)

void FUN_1497b37ba(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_14979f296(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b386c FUN_1497b386c body=311 status=ok
// SIG undefined FUN_1497b386c(void)

longlong FUN_1497b386c(longlong param_1,longlong *param_2,longlong param_3)

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
      FUN_1497b39a4(param_2,uVar5,uVar2,param_3);
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



// FUNCTION 1497b39a4 FUN_1497b39a4 body=208 status=ok
// SIG undefined FUN_1497b39a4(void)

void FUN_1497b39a4(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_1497b3a76(puVar1,&local_58,param_3,param_4);
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



// FUNCTION 1497b3a76 FUN_1497b3a76 body=186 status=ok
// SIG undefined FUN_1497b3a76(void)

undefined8 *
FUN_1497b3a76(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be6d770;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_147468894(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 0x38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b3b32 FUN_1497b3b32 body=57 status=ok
// SIG undefined FUN_1497b3b32(void)

undefined8 * FUN_1497b3b32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be6d770;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b3b6c FUN_1497b3b6c body=101 status=ok
// SIG undefined FUN_1497b3b6c(void)

undefined8 * FUN_1497b3b6c(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d780;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b3bd2 FUN_1497b3bd2 body=29 status=ok
// SIG undefined FUN_1497b3bd2(void)

undefined8 FUN_1497b3bd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b3bf0 FUN_1497b3bf0 body=101 status=ok
// SIG undefined FUN_1497b3bf0(void)

undefined8 * FUN_1497b3bf0(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d780;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b3c56 FUN_1497b3c56 body=177 status=ok
// SIG undefined FUN_1497b3c56(void)

void FUN_1497b3c56(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1497b3d08(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b3d08 FUN_1497b3d08 body=210 status=ok
// SIG undefined FUN_1497b3d08(void)

void FUN_1497b3d08(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
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
  *local_48 = &PTR_FUN_14be6d790;
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



// FUNCTION 1497b3ddc FUN_1497b3ddc body=29 status=ok
// SIG undefined FUN_1497b3ddc(void)

undefined8 FUN_1497b3ddc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b3dfa FUN_1497b3dfa body=101 status=ok
// SIG undefined FUN_1497b3dfa(void)

undefined8 * FUN_1497b3dfa(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d7a0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b3e60 FUN_1497b3e60 body=29 status=ok
// SIG undefined FUN_1497b3e60(void)

undefined8 FUN_1497b3e60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b3e7e FUN_1497b3e7e body=101 status=ok
// SIG undefined FUN_1497b3e7e(void)

undefined8 * FUN_1497b3e7e(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d7a0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b3ee4 FUN_1497b3ee4 body=177 status=ok
// SIG undefined FUN_1497b3ee4(void)

void FUN_1497b3ee4(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1497b3f96(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b3f96 FUN_1497b3f96 body=223 status=ok
// SIG undefined FUN_1497b3f96(void)

void FUN_1497b3f96(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
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
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
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
  *local_48 = &PTR_FUN_14be6d7b0;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
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



// FUNCTION 1497b4076 FUN_1497b4076 body=57 status=ok
// SIG undefined FUN_1497b4076(void)

undefined8 * FUN_1497b4076(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be6d7b0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b40b0 FUN_1497b40b0 body=101 status=ok
// SIG undefined FUN_1497b40b0(void)

undefined8 * FUN_1497b40b0(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d7c0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b4116 FUN_1497b4116 body=29 status=ok
// SIG undefined FUN_1497b4116(void)

undefined8 FUN_1497b4116(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b4134 FUN_1497b4134 body=101 status=ok
// SIG undefined FUN_1497b4134(void)

undefined8 * FUN_1497b4134(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d7c0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b419a FUN_1497b419a body=311 status=ok
// SIG undefined FUN_1497b419a(void)

longlong FUN_1497b419a(longlong param_1,longlong *param_2,longlong param_3)

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
      FUN_1497b42d2(param_2,uVar5,uVar2,param_3);
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



// FUNCTION 1497b42d2 FUN_1497b42d2 body=202 status=ok
// SIG undefined FUN_1497b42d2(void)

void FUN_1497b42d2(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
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
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
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
  *local_48 = &PTR_FUN_14be6d7d0;
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



// FUNCTION 1497b439e FUN_1497b439e body=29 status=ok
// SIG undefined FUN_1497b439e(void)

undefined8 FUN_1497b439e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b43bc FUN_1497b43bc body=101 status=ok
// SIG undefined FUN_1497b43bc(void)

undefined8 * FUN_1497b43bc(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d7e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b4422 FUN_1497b4422 body=29 status=ok
// SIG undefined FUN_1497b4422(void)

undefined8 FUN_1497b4422(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b4440 FUN_1497b4440 body=101 status=ok
// SIG undefined FUN_1497b4440(void)

undefined8 * FUN_1497b4440(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d7e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b44a6 FUN_1497b44a6 body=84 status=ok
// SIG undefined FUN_1497b44a6(void)

void FUN_1497b44a6(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar3 == '\0') {
    FUN_1497b44fa(param_1);
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar1 = *param_2;
      lVar4 = 0;
      do {
        *(undefined1 *)(*(longlong *)(lVar2 + 0x10) + lVar4) = uVar1;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar2 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b44fa FUN_1497b44fa body=299 status=ok
// SIG undefined FUN_1497b44fa(void)

void FUN_1497b44fa(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]);
  if (cVar2 == '\0') {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar4 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar4 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_1497b4560;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_1497b4560:
  local_20 = param_1[4];
  local_18 = 1;
  uVar3 = FUN_14062f558(lVar5,param_1[2],lVar8);
  param_1[5] = uVar3;
  param_1[6] = uVar3;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497b4626 FUN_1497b4626 body=87 status=ok
// SIG undefined FUN_1497b4626(void)

void FUN_1497b4626(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar3 == '\0') {
    FUN_1497b479a();
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar1 = *param_2;
      lVar4 = 0;
      do {
        *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + lVar4 * 8) = uVar1;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar2 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b467e FUN_1497b467e body=283 status=ok
// SIG undefined FUN_1497b467e(void)

longlong FUN_1497b467e(longlong param_1,longlong param_2,longlong param_3)

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
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == ' '))
      {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1497b479a FUN_1497b479a body=284 status=ok
// SIG undefined FUN_1497b479a(void)

void FUN_1497b479a(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]);
  if (cVar2 == '\0') {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_1497b4857;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_1497b4857:
  local_20 = param_1[4];
  local_18 = 1;
  uVar4 = FUN_1497b48b8(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497b48b8 FUN_1497b48b8 body=70 status=ok
// SIG undefined FUN_1497b48b8(void)

void FUN_1497b48b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_1497b48fe(param_1,param_2,param_3,param_4);
  }
  FUN_1497b4b0e(param_1,param_2,param_3);
  return;
}



// FUNCTION 1497b48fe FUN_1497b48fe body=526 status=ok
// SIG undefined FUN_1497b48fe(void)

void FUN_1497b48fe(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

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
        goto LAB_1497b4998;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_1497b4998:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc260c8) && (FUN_144b3d300(&DAT_14cc260c8), DAT_14cc260c8 == -1)) {
    DAT_14cc260c0 = 0;
    _Init_thread_footer(&DAT_14cc260c8);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14cc260c0;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f69a90;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_1497b4c0a(local_88,&local_60,uVar4,uVar1);
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



// FUNCTION 1497b4b0e FUN_1497b4b0e body=251 status=ok
// SIG undefined FUN_1497b4b0e(void)

void FUN_1497b4b0e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_1497b4b1e;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_1497b4b1e:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 1497b4c0a FUN_1497b4c0a body=138 status=ok
// SIG undefined FUN_1497b4c0a(void)

undefined1 *
FUN_1497b4c0a(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x20;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14be6d7f0;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 1497b4cae FUN_1497b4cae body=29 status=ok
// SIG undefined FUN_1497b4cae(void)

undefined8 FUN_1497b4cae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b4ccc FUN_1497b4ccc body=107 status=ok
// SIG undefined FUN_1497b4ccc(void)

void FUN_1497b4ccc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    FUN_146e9b062(param_1,1,0);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_144a787a6(*(longlong *)(lVar1 + 0x10) + lVar3,param_2);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < *(int *)(lVar1 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b4d38 FUN_1497b4d38 body=85 status=ok
// SIG undefined FUN_1497b4d38(void)

void FUN_1497b4d38(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    FUN_1497b4d8e();
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar3 * 8) = *param_2;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(lVar1 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b4d8e FUN_1497b4d8e body=299 status=ok
// SIG undefined FUN_1497b4d8e(void)

void FUN_1497b4d8e(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]);
  if (cVar2 == '\0') {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar4 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar4 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_1497b4df4;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_1497b4df4:
  local_20 = param_1[4];
  local_18 = 1;
  uVar3 = FUN_140b1eb1a(lVar5,param_1[2],lVar8);
  param_1[5] = uVar3;
  param_1[6] = uVar3;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497b4eba FUN_1497b4eba body=103 status=ok
// SIG undefined FUN_1497b4eba(void)

void FUN_1497b4eba(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar3 == '\0') {
    FUN_14067630e(param_1,1,0);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + 0x10);
        *(undefined4 *)(lVar2 + 8 + lVar4) = *(undefined4 *)(param_2 + 1);
        *(undefined8 *)(lVar2 + lVar4) = *param_2;
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0xc;
      } while (lVar5 < *(int *)(lVar1 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b4f22 FUN_1497b4f22 body=97 status=ok
// SIG undefined FUN_1497b4f22(void)

void FUN_1497b4f22(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar4 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar4 == '\0') {
    FUN_146e9bebc(param_1,1,0);
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar2 + 0x18)) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        uVar3 = param_2[1];
        puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + lVar5);
        *puVar1 = *param_2;
        puVar1[1] = uVar3;
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < *(int *)(lVar2 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b4f84 FUN_1497b4f84 body=101 status=ok
// SIG undefined FUN_1497b4f84(void)

void FUN_1497b4f84(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8));
  if (cVar2 == '\0') {
    FUN_1497b5106(param_1);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar4 = 0;
      lVar7 = 0;
      do {
        puVar5 = param_2;
        puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar4);
        for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        lVar7 = lVar7 + 1;
        lVar4 = lVar4 + 0x60;
      } while (lVar7 < *(int *)(lVar1 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b4fea FUN_1497b4fea body=283 status=ok
// SIG undefined FUN_1497b4fea(void)

longlong FUN_1497b4fea(longlong param_1,longlong param_2,longlong param_3)

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
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\a')
         ) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1497b5106 FUN_1497b5106 body=284 status=ok
// SIG undefined FUN_1497b5106(void)

void FUN_1497b5106(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]);
  if (cVar2 == '\0') {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_1497b51c3;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_1497b51c3:
  local_20 = param_1[4];
  local_18 = 1;
  uVar4 = FUN_146eecad4(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497b5224 FUN_1497b5224 body=92 status=ok
// SIG undefined FUN_1497b5224(void)

void FUN_1497b5224(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar4 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar4 == '\0') {
    FUN_1497b539c();
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar2 + 0x18)) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        uVar3 = param_2[1];
        puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + lVar5);
        *puVar1 = *param_2;
        puVar1[1] = uVar3;
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < *(int *)(lVar2 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b5280 FUN_1497b5280 body=283 status=ok
// SIG undefined FUN_1497b5280(void)

longlong FUN_1497b5280(longlong param_1,longlong param_2,longlong param_3)

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
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\n')
         ) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1497b539c FUN_1497b539c body=284 status=ok
// SIG undefined FUN_1497b539c(void)

void FUN_1497b539c(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]);
  if (cVar2 == '\0') {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_1497b5459;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_1497b5459:
  local_20 = param_1[4];
  local_18 = 1;
  uVar4 = FUN_1497b54ba(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497b54ba FUN_1497b54ba body=70 status=ok
// SIG undefined FUN_1497b54ba(void)

void FUN_1497b54ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_1497b5500(param_1,param_2,param_3,param_4);
  }
  FUN_1497b5710(param_1,param_2,param_3);
  return;
}



// FUNCTION 1497b5500 FUN_1497b5500 body=526 status=ok
// SIG undefined FUN_1497b5500(void)

void FUN_1497b5500(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

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
        goto LAB_1497b559a;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_1497b559a:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc260d8) && (FUN_144b3d300(&DAT_14cc260d8), DAT_14cc260d8 == -1)) {
    DAT_14cc260d0 = 0;
    _Init_thread_footer(&DAT_14cc260d8);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14cc260d0;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f68830;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_1497b580c(local_88,&local_60,uVar4,uVar1);
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



// FUNCTION 1497b5710 FUN_1497b5710 body=251 status=ok
// SIG undefined FUN_1497b5710(void)

void FUN_1497b5710(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_1497b5720;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_1497b5720:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 1497b580c FUN_1497b580c body=138 status=ok
// SIG undefined FUN_1497b580c(void)

undefined1 *
FUN_1497b580c(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 10;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14be6d810;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 1497b58b0 FUN_1497b58b0 body=29 status=ok
// SIG undefined FUN_1497b58b0(void)

undefined8 FUN_1497b58b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b58ce FUN_1497b58ce body=126 status=ok
// SIG undefined FUN_1497b58ce(void)

void FUN_1497b58ce(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  
  cVar9 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar9 == '\0') {
    FUN_146e99e5a(param_1,1,0);
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar2 + 0x18)) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + 0x10);
        *(undefined8 *)(lVar3 + 0x30 + lVar10) = param_2[6];
        uVar4 = *param_2;
        uVar5 = param_2[1];
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        uVar8 = param_2[5];
        puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar10);
        *puVar1 = param_2[4];
        puVar1[1] = uVar8;
        puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar10);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        *(undefined8 *)(lVar3 + lVar10) = uVar4;
        ((undefined8 *)(lVar3 + lVar10))[1] = uVar5;
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x38;
      } while (lVar11 < *(int *)(lVar2 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b594c FUN_1497b594c body=92 status=ok
// SIG undefined FUN_1497b594c(void)

void FUN_1497b594c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar4 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar4 == '\0') {
    FUN_1497b5ac4();
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar2 + 0x18)) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        uVar3 = param_2[1];
        puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + lVar5);
        *puVar1 = *param_2;
        puVar1[1] = uVar3;
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < *(int *)(lVar2 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b59a8 FUN_1497b59a8 body=283 status=ok
// SIG undefined FUN_1497b59a8(void)

longlong FUN_1497b59a8(longlong param_1,longlong param_2,longlong param_3)

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
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) &&
         (*(char *)(lVar1 + 0x10) == '\x0f')) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1497b5ac4 FUN_1497b5ac4 body=284 status=ok
// SIG undefined FUN_1497b5ac4(void)

void FUN_1497b5ac4(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]);
  if (cVar2 == '\0') {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_1497b5b81;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_1497b5b81:
  local_20 = param_1[4];
  local_18 = 1;
  uVar4 = FUN_146eccf00(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497b5be2 FUN_1497b5be2 body=107 status=ok
// SIG undefined FUN_1497b5be2(void)

void FUN_1497b5be2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    FUN_146eaead6(param_1,1,0);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_145c3f772(*(longlong *)(lVar1 + 0x10) + lVar3,param_2);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x50;
      } while (lVar4 < *(int *)(lVar1 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b5c4e FUN_1497b5c4e body=107 status=ok
// SIG undefined FUN_1497b5c4e(void)

void FUN_1497b5c4e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    FUN_146e9c800(param_1,1,0);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_14054c6c4(*(longlong *)(lVar1 + 0x10) + lVar3,param_2);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < *(int *)(lVar1 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b5cba FUN_1497b5cba body=105 status=ok
// SIG undefined FUN_1497b5cba(void)

void FUN_1497b5cba(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar3 == '\0') {
    FUN_146e9bff2(param_1,1,0);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + 0x10);
        *(undefined4 *)(lVar2 + 8 + lVar4) = *(undefined4 *)(param_2 + 1);
        *(undefined8 *)(lVar2 + lVar4) = *param_2;
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0xc;
      } while (lVar5 < *(int *)(lVar1 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b5d24 FUN_1497b5d24 body=90 status=ok
// SIG undefined FUN_1497b5d24(void)

void FUN_1497b5d24(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    FUN_146e9c936(param_1,1,0);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar3 * 8) = *param_2;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(lVar1 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b5d7e FUN_1497b5d7e body=97 status=ok
// SIG undefined FUN_1497b5d7e(void)

void FUN_1497b5d7e(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar4 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar4 == '\0') {
    FUN_146ea7e6a(param_1,1,0);
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar2 + 0x18)) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        uVar3 = param_2[1];
        puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + lVar5);
        *puVar1 = *param_2;
        puVar1[1] = uVar3;
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < *(int *)(lVar2 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b5de0 FUN_1497b5de0 body=102 status=ok
// SIG undefined FUN_1497b5de0(void)

void FUN_1497b5de0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    FUN_1497b5f62(param_1);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146edf34a(*(longlong *)(lVar1 + 0x10) + lVar3,param_2);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < *(int *)(lVar1 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b5e46 FUN_1497b5e46 body=283 status=ok
// SIG undefined FUN_1497b5e46(void)

longlong FUN_1497b5e46(longlong param_1,longlong param_2,longlong param_3)

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
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '$'))
      {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1497b5f62 FUN_1497b5f62 body=284 status=ok
// SIG undefined FUN_1497b5f62(void)

void FUN_1497b5f62(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]);
  if (cVar2 == '\0') {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_1497b601f;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_1497b601f:
  local_20 = param_1[4];
  local_18 = 1;
  uVar4 = FUN_1497b6080(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497b6080 FUN_1497b6080 body=70 status=ok
// SIG undefined FUN_1497b6080(void)

void FUN_1497b6080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_1497b60c6(param_1,param_2,param_3,param_4);
  }
  FUN_1497b62d6(param_1,param_2,param_3);
  return;
}



// FUNCTION 1497b60c6 FUN_1497b60c6 body=526 status=ok
// SIG undefined FUN_1497b60c6(void)

void FUN_1497b60c6(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

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
        goto LAB_1497b6160;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_1497b6160:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc260e8) && (FUN_144b3d300(&DAT_14cc260e8), DAT_14cc260e8 == -1)) {
    DAT_14cc260e0 = 0;
    _Init_thread_footer(&DAT_14cc260e8);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14cc260e0;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f69cd0;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_1497b63d2(local_88,&local_60,uVar4,uVar1);
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



// FUNCTION 1497b62d6 FUN_1497b62d6 body=251 status=ok
// SIG undefined FUN_1497b62d6(void)

void FUN_1497b62d6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_1497b62e6;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_1497b62e6:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 1497b63d2 FUN_1497b63d2 body=138 status=ok
// SIG undefined FUN_1497b63d2(void)

undefined1 *
FUN_1497b63d2(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x24;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14be6d830;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 1497b6476 FUN_1497b6476 body=29 status=ok
// SIG undefined FUN_1497b6476(void)

undefined8 FUN_1497b6476(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b6494 FUN_1497b6494 body=107 status=ok
// SIG undefined FUN_1497b6494(void)

void FUN_1497b6494(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    FUN_146e9ca6c(param_1,1,0);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_144a67f5c(*(longlong *)(lVar1 + 0x10) + lVar3,param_2);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < *(int *)(lVar1 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b6500 FUN_1497b6500 body=102 status=ok
// SIG undefined FUN_1497b6500(void)

void FUN_1497b6500(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    FUN_1497b6566(param_1);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_1401f7650(*(longlong *)(lVar1 + 0x10) + lVar3,param_2);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < *(int *)(lVar1 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b6566 FUN_1497b6566 body=284 status=ok
// SIG undefined FUN_1497b6566(void)

void FUN_1497b6566(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]);
  if (cVar2 == '\0') {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_1497b6623;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_1497b6623:
  local_20 = param_1[4];
  local_18 = 1;
  uVar4 = FUN_146eb1190(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497b6684 FUN_1497b6684 body=102 status=ok
// SIG undefined FUN_1497b6684(void)

void FUN_1497b6684(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    FUN_1497b6806(param_1);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_140de4b5e(*(longlong *)(lVar1 + 0x10) + lVar3,param_2);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < *(int *)(lVar1 + 0x18));
    }
  }
  return;
}



// FUNCTION 1497b66ea FUN_1497b66ea body=283 status=ok
// SIG undefined FUN_1497b66ea(void)

longlong FUN_1497b66ea(longlong param_1,longlong param_2,longlong param_3)

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
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '('))
      {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1497b6806 FUN_1497b6806 body=284 status=ok
// SIG undefined FUN_1497b6806(void)

void FUN_1497b6806(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]);
  if (cVar2 == '\0') {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_1497b68c3;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_1497b68c3:
  local_20 = param_1[4];
  local_18 = 1;
  uVar4 = FUN_1497b6924(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497b6924 FUN_1497b6924 body=70 status=ok
// SIG undefined FUN_1497b6924(void)

void FUN_1497b6924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_1497b696a(param_1,param_2,param_3,param_4);
  }
  FUN_1497b6b7a(param_1,param_2,param_3);
  return;
}



// FUNCTION 1497b696a FUN_1497b696a body=526 status=ok
// SIG undefined FUN_1497b696a(void)

void FUN_1497b696a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

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
        goto LAB_1497b6a04;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_1497b6a04:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc260f8) && (FUN_144b3d300(&DAT_14cc260f8), DAT_14cc260f8 == -1)) {
    DAT_14cc260f0 = 0;
    _Init_thread_footer(&DAT_14cc260f8);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14cc260f0;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f69df0;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_1497b6c76(local_88,&local_60,uVar4,uVar1);
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



// FUNCTION 1497b6b7a FUN_1497b6b7a body=251 status=ok
// SIG undefined FUN_1497b6b7a(void)

void FUN_1497b6b7a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_1497b6b8a;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_1497b6b8a:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 1497b6c76 FUN_1497b6c76 body=138 status=ok
// SIG undefined FUN_1497b6c76(void)

undefined1 *
FUN_1497b6c76(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x28;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14be6d850;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 1497b6d1a FUN_1497b6d1a body=29 status=ok
// SIG undefined FUN_1497b6d1a(void)

undefined8 FUN_1497b6d1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b6d38 FUN_1497b6d38 body=177 status=ok
// SIG undefined FUN_1497b6d38(void)

void FUN_1497b6d38(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1497b6dea(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b6dea FUN_1497b6dea body=223 status=ok
// SIG undefined FUN_1497b6dea(void)

void FUN_1497b6dea(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
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
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
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
  *local_48 = &PTR_FUN_14be6d868;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
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



// FUNCTION 1497b6eca FUN_1497b6eca body=57 status=ok
// SIG undefined FUN_1497b6eca(void)

undefined8 * FUN_1497b6eca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be6d868;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b6f04 FUN_1497b6f04 body=101 status=ok
// SIG undefined FUN_1497b6f04(void)

undefined8 * FUN_1497b6f04(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d878;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b6f6a FUN_1497b6f6a body=29 status=ok
// SIG undefined FUN_1497b6f6a(void)

undefined8 FUN_1497b6f6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b6f88 FUN_1497b6f88 body=101 status=ok
// SIG undefined FUN_1497b6f88(void)

undefined8 * FUN_1497b6f88(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d878;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b6fee FUN_1497b6fee body=177 status=ok
// SIG undefined FUN_1497b6fee(void)

void FUN_1497b6fee(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1497b70a0(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497b70a0 FUN_1497b70a0 body=223 status=ok
// SIG undefined FUN_1497b70a0(void)

void FUN_1497b70a0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
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
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
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
  *local_48 = &PTR_FUN_14be6d888;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
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



// FUNCTION 1497b7180 FUN_1497b7180 body=57 status=ok
// SIG undefined FUN_1497b7180(void)

undefined8 * FUN_1497b7180(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be6d888;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497b71ba FUN_1497b71ba body=101 status=ok
// SIG undefined FUN_1497b71ba(void)

undefined8 * FUN_1497b71ba(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be6d898;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497b7220 FUN_1497b7220 body=29 status=ok
// SIG undefined FUN_1497b7220(void)

undefined8 FUN_1497b7220(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


