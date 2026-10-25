// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14761161c FUN_14761161c body=86 status=ok
// SIG undefined FUN_14761161c(void)

void FUN_14761161c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147611874(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147611674 FUN_147611674 body=311 status=ok
// SIG undefined FUN_147611674(void)

undefined2 * FUN_147611674(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476117ac(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xd8) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147611874(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476117ac FUN_1476117ac body=199 status=ok
// SIG undefined FUN_1476117ac(void)

void FUN_1476117ac(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x15) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x14]);
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x2c]);
  }
  if (*(char *)(param_2 + 0x39) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x38]);
  }
  if (*(char *)(param_2 + 0x45) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x44]);
  }
  if (*(char *)(param_2 + 0x51) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x50]);
  }
  if (*(char *)(param_2 + 0x5d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x5c]);
    return;
  }
  return;
}



// FUNCTION 147611874 FUN_147611874 body=173 status=ok
// SIG undefined FUN_147611874(void)

void FUN_147611874(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x58,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x70,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x88,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xa0,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xb8,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147611922 FUN_147611922 body=104 status=ok
// SIG undefined FUN_147611922(void)

void FUN_147611922(longlong param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    *(undefined8 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 14761198a FUN_14761198a body=52 status=ok
// SIG undefined FUN_14761198a(void)

undefined8 * FUN_14761198a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4f70;
  FUN_147611922(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476119be FUN_1476119be body=78 status=ok
// SIG undefined FUN_1476119be(void)

undefined8 FUN_1476119be(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147611abc();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147611a0e FUN_147611a0e body=85 status=ok
// SIG undefined FUN_147611a0e(void)

void FUN_147611a0e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147611bf4(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147611a64 FUN_147611a64 body=86 status=ok
// SIG undefined FUN_147611a64(void)

void FUN_147611a64(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147611ca4(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147611abc FUN_147611abc body=311 status=ok
// SIG undefined FUN_147611abc(void)

undefined2 * FUN_147611abc(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147611bf4(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xc0) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147611ca4(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147611bf4 FUN_147611bf4 body=175 status=ok
// SIG undefined FUN_147611bf4(void)

void FUN_147611bf4(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x15) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x14]);
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x2c]);
  }
  if (*(char *)(param_2 + 0x39) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x38]);
  }
  if (*(char *)(param_2 + 0x45) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x44]);
  }
  if (*(char *)(param_2 + 0x51) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x50]);
    return;
  }
  return;
}



// FUNCTION 147611ca4 FUN_147611ca4 body=154 status=ok
// SIG undefined FUN_147611ca4(void)

void FUN_147611ca4(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x58,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x70,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x88,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xa0,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147611d3e FUN_147611d3e body=88 status=ok
// SIG undefined FUN_147611d3e(void)

void FUN_147611d3e(longlong param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    *(undefined8 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 147611d96 FUN_147611d96 body=52 status=ok
// SIG undefined FUN_147611d96(void)

undefined8 * FUN_147611d96(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4f90;
  FUN_147611d3e(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147611dca FUN_147611dca body=78 status=ok
// SIG undefined FUN_147611dca(void)

undefined8 FUN_147611dca(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147611ec8();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147611e1a FUN_147611e1a body=85 status=ok
// SIG undefined FUN_147611e1a(void)

void FUN_147611e1a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147612000(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147611e70 FUN_147611e70 body=86 status=ok
// SIG undefined FUN_147611e70(void)

void FUN_147611e70(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147612098(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147611ec8 FUN_147611ec8 body=311 status=ok
// SIG undefined FUN_147611ec8(void)

undefined2 * FUN_147611ec8(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147612000(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xa8) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147612098(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147612000 FUN_147612000 body=151 status=ok
// SIG undefined FUN_147612000(void)

void FUN_147612000(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x15) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x14]);
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x2c]);
  }
  if (*(char *)(param_2 + 0x39) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x38]);
  }
  if (*(char *)(param_2 + 0x45) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x44]);
    return;
  }
  return;
}



// FUNCTION 147612098 FUN_147612098 body=135 status=ok
// SIG undefined FUN_147612098(void)

void FUN_147612098(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x58,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x70,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x88,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147612154 FUN_147612154 body=63 status=ok
// SIG undefined FUN_147612154(void)

undefined1 FUN_147612154(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753b3d4(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 1476121c0 FUN_1476121c0 body=59 status=ok
// SIG undefined FUN_1476121c0(void)

undefined8 FUN_1476121c0(longlong *param_1)

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



// FUNCTION 14761220c FUN_14761220c body=38 status=ok
// SIG undefined FUN_14761220c(void)

void FUN_14761220c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_140e127fe(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 147612282 FUN_147612282 body=69 status=ok
// SIG undefined FUN_147612282(void)

undefined8 * FUN_147612282(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c5180;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476122c8 FUN_1476122c8 body=78 status=ok
// SIG undefined FUN_1476122c8(void)

undefined8 FUN_1476122c8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147612318();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147612318 FUN_147612318 body=266 status=ok
// SIG undefined FUN_147612318(void)

undefined2 * FUN_147612318(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_14101bdda(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x58) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_140e90bb0(param_1);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147612424 FUN_147612424 body=69 status=ok
// SIG undefined FUN_147612424(void)

undefined8 * FUN_147612424(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c51a0;
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761246a FUN_14761246a body=78 status=ok
// SIG undefined FUN_14761246a(void)

undefined8 FUN_14761246a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147612564();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476124ba FUN_1476124ba body=82 status=ok
// SIG undefined FUN_1476124ba(void)

void FUN_1476124ba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147612670(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761250e FUN_14761250e body=86 status=ok
// SIG undefined FUN_14761250e(void)

void FUN_14761250e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    uVar1 = (undefined4)param_3[1];
    FUN_140659a1a(param_1 + 0x10,lVar2,uVar1);
    FUN_140659a1a(param_1 + 0x28,lVar2,uVar1);
    FUN_140659a1a(param_1 + 0x40,lVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 147612564 FUN_147612564 body=266 status=ok
// SIG undefined FUN_147612564(void)

undefined2 * FUN_147612564(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_147612670(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x58) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_14761250e(param_1);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147612670 FUN_147612670 body=91 status=ok
// SIG undefined FUN_147612670(void)

void FUN_147612670(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
    return;
  }
  return;
}



// FUNCTION 1476126fc FUN_1476126fc body=63 status=ok
// SIG undefined FUN_1476126fc(void)

undefined1 FUN_1476126fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147612826(param_2,param_3);
    param_3 = param_3 + 0x170;
    param_2 = param_2 + 0x170;
  }
  return 1;
}



// FUNCTION 147612764 FUN_147612764 body=59 status=ok
// SIG undefined FUN_147612764(void)

undefined8 FUN_147612764(longlong *param_1)

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



// FUNCTION 1476127b0 FUN_1476127b0 body=39 status=ok
// SIG undefined FUN_1476127b0(void)

void FUN_1476127b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_1404dbc70(param_2 + 0x38);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 147612826 FUN_147612826 body=236 status=ok
// SIG undefined FUN_147612826(void)

longlong * FUN_147612826(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  param_1[3] = param_2[3];
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[4] = param_2[4];
  lVar2 = param_2[6];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[6];
    }
  }
  param_1[6] = lVar2;
  FUN_14753be88(param_1 + 7,param_2 + 7);
  param_1[0x29] = param_2[0x29];
  *(int *)(param_1 + 0x2a) = (int)param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  lVar2 = param_2[0x2c];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0x2c];
    }
  }
  param_1[0x2c] = lVar2;
  *(char *)(param_1 + 0x2d) = (char)param_2[0x2d];
  return param_1;
}



// FUNCTION 147612914 FUN_147612914 body=79 status=ok
// SIG undefined FUN_147612914(void)

undefined8 * FUN_147612914(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c5330;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147612964 FUN_147612964 body=78 status=ok
// SIG undefined FUN_147612964(void)

undefined8 FUN_147612964(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476129b4();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476129b4 FUN_1476129b4 body=309 status=ok
// SIG undefined FUN_1476129b4(void)

undefined2 * FUN_1476129b4(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_140f502fe(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x68) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_140c3712e(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147612aea FUN_147612aea body=593 status=ok
// SIG undefined FUN_147612aea(void)

undefined8 * FUN_147612aea(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  param_1[3] = 0;
  lVar8 = param_2[3];
  if (lVar8 == 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    param_1[2] = param_2[2];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    lVar8 = param_2[3];
  }
  param_1[3] = lVar8;
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0x200000000;
  param_1[8] = 0;
  lVar8 = param_2[8];
  if (lVar8 == 0) {
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    param_1[7] = param_2[7];
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    lVar8 = param_2[8];
  }
  param_1[8] = lVar8;
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0x200000000;
  param_1[0x10] = 0;
  lVar8 = param_2[0x10];
  if (lVar8 == 0) {
    uVar1 = param_2[10];
    uVar2 = param_2[0xb];
    uVar3 = param_2[0xc];
    uVar4 = param_2[0xd];
    uVar5 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar5;
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar4;
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
    lVar8 = param_2[0x10];
  }
  param_1[0x10] = lVar8;
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_2[0x11] = 0x200000000;
  param_1[0x1a] = 0;
  lVar8 = param_2[0x1a];
  if (lVar8 == 0) {
    uVar1 = param_2[0x12];
    uVar2 = param_2[0x13];
    uVar3 = param_2[0x14];
    uVar4 = param_2[0x15];
    uVar5 = param_2[0x16];
    uVar6 = param_2[0x17];
    uVar7 = param_2[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar7;
    param_1[0x16] = uVar5;
    param_1[0x17] = uVar6;
    param_1[0x14] = uVar3;
    param_1[0x15] = uVar4;
    param_1[0x12] = uVar1;
    param_1[0x13] = uVar2;
    lVar8 = param_2[0x1a];
  }
  param_1[0x1a] = lVar8;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
  param_2[0x1b] = 0x200000000;
  param_1[0x22] = 0;
  lVar8 = param_2[0x22];
  if (lVar8 == 0) {
    uVar1 = param_2[0x1c];
    uVar2 = param_2[0x1d];
    uVar3 = param_2[0x1e];
    uVar4 = param_2[0x1f];
    uVar5 = param_2[0x21];
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = uVar5;
    param_1[0x1e] = uVar3;
    param_1[0x1f] = uVar4;
    param_1[0x1c] = uVar1;
    param_1[0x1d] = uVar2;
    lVar8 = param_2[0x22];
  }
  param_1[0x22] = lVar8;
  param_2[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
  param_2[0x23] = 0x200000000;
  param_1[0x38] = 0;
  lVar8 = param_2[0x38];
  if (lVar8 == 0) {
    memmove(param_1 + 0x24,param_2 + 0x24,0xa0);
    lVar8 = param_2[0x38];
  }
  param_1[0x38] = lVar8;
  param_2[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x39);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)((longlong)param_2 + 0x1cc);
  param_2[0x39] = 0x200000000;
  return param_1;
}



// FUNCTION 147612d3c FUN_147612d3c body=29 status=ok
// SIG undefined FUN_147612d3c(void)

undefined8 FUN_147612d3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147612d5a FUN_147612d5a body=49 status=ok
// SIG undefined FUN_147612d5a(void)

undefined8 * FUN_147612d5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0ad0;
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147612d8c FUN_147612d8c body=84 status=ok
// SIG undefined FUN_147612d8c(void)

undefined8 * FUN_147612d8c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0a30;
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2f) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147612de0 FUN_147612de0 body=94 status=ok
// SIG undefined FUN_147612de0(void)

undefined8 * FUN_147612de0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0a10;
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2f) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147612e3e FUN_147612e3e body=98 status=ok
// SIG undefined FUN_147612e3e(void)

void FUN_147612e3e(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c0a10;
  FUN_147612ea0(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *param_1 = &PTR_FUN_14a4c53d0;
  return;
}



// FUNCTION 147612ea0 FUN_147612ea0 body=133 status=ok
// SIG undefined FUN_147612ea0(void)

void FUN_147612ea0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  if (param_2[7] == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 7);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  cVar1 = *(char *)((longlong)param_2 + 0x27);
  *(char *)((longlong)param_1 + 0x27) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  }
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0xb] = param_2[0xb];
  }
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  cVar1 = *(char *)(param_2 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}



// FUNCTION 147612f26 FUN_147612f26 body=94 status=ok
// SIG undefined FUN_147612f26(void)

undefined8 * FUN_147612f26(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0ab0;
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2f) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147612f84 FUN_147612f84 body=147 status=ok
// SIG undefined FUN_147612f84(void)

void FUN_147612f84(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined2 *param_4,
                  undefined2 *param_5,undefined4 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  if (*(int *)(param_3 + 2) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 2);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  *(undefined2 *)(param_1 + 9) = *param_4;
  cVar1 = *(char *)((longlong)param_4 + 3);
  *(char *)((longlong)param_1 + 0x27) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)(param_4 + 1);
  }
  *(undefined2 *)(param_1 + 10) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0xb] = *(undefined4 *)(param_5 + 2);
  }
  param_1[0xe] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_6 + 2);
  }
  return;
}



// FUNCTION 147613018 FUN_147613018 body=104 status=ok
// SIG undefined FUN_147613018(void)

undefined8 * FUN_147613018(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0a90;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2f) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147613080 FUN_147613080 body=188 status=ok
// SIG undefined FUN_147613080(void)

void FUN_147613080(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined2 *param_4,
                  undefined2 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  if (*(int *)(param_3 + 2) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 2);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  *(undefined2 *)(param_1 + 9) = *param_4;
  cVar1 = *(char *)((longlong)param_4 + 3);
  *(char *)((longlong)param_1 + 0x27) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)(param_4 + 1);
  }
  *(undefined2 *)(param_1 + 10) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0xb] = *(undefined4 *)(param_5 + 2);
  }
  param_1[0xe] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x14] = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_7 + 2);
  }
  return;
}



// FUNCTION 14761313c FUN_14761313c body=52 status=ok
// SIG undefined FUN_14761313c(void)

undefined8 * FUN_14761313c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0a70;
  FUN_1475d4bf0(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147613170 FUN_147613170 body=222 status=ok
// SIG undefined FUN_147613170(void)

void FUN_147613170(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined2 *param_4,
                  undefined2 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  if (*(int *)(param_3 + 2) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 2);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  *(undefined2 *)(param_1 + 9) = *param_4;
  cVar1 = *(char *)((longlong)param_4 + 3);
  *(char *)((longlong)param_1 + 0x27) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)(param_4 + 1);
  }
  *(undefined2 *)(param_1 + 10) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0xb] = *(undefined4 *)(param_5 + 2);
  }
  param_1[0xe] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x14] = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_7 + 2);
  }
  param_1[0x1a] = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x1e) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_8 + 2);
  }
  return;
}



// FUNCTION 14761324e FUN_14761324e body=52 status=ok
// SIG undefined FUN_14761324e(void)

undefined8 * FUN_14761324e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0a50;
  FUN_1475d47f8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147613282 FUN_147613282 body=265 status=ok
// SIG undefined FUN_147613282(void)

void FUN_147613282(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined2 *param_4,
                  undefined2 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  if (*(int *)(param_3 + 2) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 2);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  *(undefined2 *)(param_1 + 9) = *param_4;
  cVar1 = *(char *)((longlong)param_4 + 3);
  *(char *)((longlong)param_1 + 0x27) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)(param_4 + 1);
  }
  *(undefined2 *)(param_1 + 10) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0xb] = *(undefined4 *)(param_5 + 2);
  }
  param_1[0xe] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x14] = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_7 + 2);
  }
  param_1[0x1a] = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x1e) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_8 + 2);
  }
  param_1[0x20] = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_9 + 2);
  }
  return;
}



// FUNCTION 14761338c FUN_14761338c body=104 status=ok
// SIG undefined FUN_14761338c(void)

void FUN_14761338c(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0xa8,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c0a50;
  FUN_1476133f4(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0xa0);
  *param_1 = &PTR_FUN_14a4c5450;
  return;
}



// FUNCTION 1476133f4 FUN_1476133f4 body=231 status=ok
// SIG undefined FUN_1476133f4(void)

void FUN_1476133f4(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  if (param_2[7] == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 7);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  cVar1 = *(char *)((longlong)param_2 + 0x27);
  *(char *)((longlong)param_1 + 0x27) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  }
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0xb] = param_2[0xb];
  }
  param_1[0xe] = param_2[0xe];
  cVar1 = *(char *)(param_2 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  param_1[0x14] = param_2[0x14];
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  }
  param_1[0x1a] = param_2[0x1a];
  cVar1 = *(char *)(param_2 + 0x1e);
  *(char *)(param_1 + 0x1e) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  }
  param_1[0x20] = param_2[0x20];
  cVar1 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  }
  return;
}



// FUNCTION 1476134dc FUN_1476134dc body=146 status=ok
// SIG undefined FUN_1476134dc(void)

void FUN_1476134dc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x128,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x128)) {
      uVar5 = uVar4 / 0x128 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x128,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147613570 FUN_147613570 body=48 status=ok
// SIG undefined FUN_147613570(void)

void FUN_147613570(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x118,8);
  }
  return;
}



// FUNCTION 1476135a0 FUN_1476135a0 body=146 status=ok
// SIG undefined FUN_1476135a0(void)

void FUN_1476135a0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x458,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x458)) {
      uVar5 = uVar4 / 0x458 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x458,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147613634 FUN_147613634 body=48 status=ok
// SIG undefined FUN_147613634(void)

void FUN_147613634(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x448,8);
  }
  return;
}



// FUNCTION 147613664 FUN_147613664 body=229 status=ok
// SIG undefined FUN_147613664(void)

undefined8 * FUN_147613664(undefined8 *param_1,longlong param_2)

{
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a46ea60;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined8 *)(param_2 + 0x60) = 0;
  param_1[0xd] = 0;
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = *(undefined8 *)(param_2 + 0x108);
  return param_1;
}



// FUNCTION 14761374a FUN_14761374a body=95 status=ok
// SIG undefined FUN_14761374a(void)

undefined8 * FUN_14761374a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_147613664(param_1 + 1,param_2 + 1);
  FUN_147613664(param_1 + 0x23,param_2 + 0x23);
  FUN_147613664(param_1 + 0x45,param_2 + 0x45);
  FUN_147613664(param_1 + 0x67,param_2 + 0x67);
  return param_1;
}



// FUNCTION 1476137aa FUN_1476137aa body=62 status=ok
// SIG undefined FUN_1476137aa(void)

void FUN_1476137aa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476137e8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x128,8);
  }
  return;
}



// FUNCTION 1476137e8 FUN_1476137e8 body=110 status=ok
// SIG undefined FUN_1476137e8(void)

ulonglong FUN_1476137e8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x128) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147613821;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x128,8);
      param_2 = param_2 / 0x128;
    }
  }
LAB_147613821:
  return param_2 & 0xffffffff;
}



// FUNCTION 147613856 FUN_147613856 body=141 status=ok
// SIG undefined FUN_147613856(void)

void FUN_147613856(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x458;
  FUN_1404dbc70(lVar1 + lVar3 + 0x338);
  FUN_1404dbc70(lVar1 + lVar3 + 0x228);
  FUN_1404dbc70(lVar1 + lVar3 + 0x118);
  FUN_1404dbc70(lVar1 + lVar3 + 8);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(lVar1 + lVar3),(void *)(lVar1 + lVar3 + 0x458),
            (longlong)(int)(~param_2 + iVar2) * 0x458);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1476138e4 FUN_1476138e4 body=62 status=ok
// SIG undefined FUN_1476138e4(void)

void FUN_1476138e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147613922(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x458,8);
  }
  return;
}



// FUNCTION 147613922 FUN_147613922 body=110 status=ok
// SIG undefined FUN_147613922(void)

ulonglong FUN_147613922(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x458) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14761395b;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x458,8);
      param_2 = param_2 / 0x458;
    }
  }
LAB_14761395b:
  return param_2 & 0xffffffff;
}



// FUNCTION 147613990 FUN_147613990 body=29 status=ok
// SIG undefined FUN_147613990(void)

undefined8 FUN_147613990(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147613a1a FUN_147613a1a body=29 status=ok
// SIG undefined FUN_147613a1a(void)

undefined8 FUN_147613a1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147613a38 FUN_147613a38 body=309 status=ok
// SIG undefined FUN_147613a38(void)

void FUN_147613a38(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_3 + 0x28);
    lVar10 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147613a77;
      plVar14 = plVar14 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_147613a77:
  iVar3 = *(int *)(param_3 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  lVar10 = *param_2;
  if (*(ushort *)(lVar10 + 0xc) != 0) {
    plVar15 = *(longlong **)(lVar10 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar15 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147613aba;
      plVar15 = plVar15 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar15 = (longlong *)0x0;
LAB_147613aba:
  lVar12 = *plVar14;
  iVar4 = *(int *)(lVar10 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
  }
  LOCK();
  *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar11 = (undefined4 *)((longlong)(int)param_2[1] * 0x20 + *plVar15);
    lVar10 = 0;
    do {
      lVar13 = (longlong)*(int *)(*param_4 + lVar10 * 4) * 0x20;
      puVar1 = (undefined4 *)(lVar12 + lVar13);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar13);
      uVar9 = puVar2[1];
      *(undefined8 *)(puVar11 + 4) = *puVar2;
      *(undefined8 *)(puVar11 + 6) = uVar9;
      *puVar11 = uVar5;
      puVar11[1] = uVar6;
      puVar11[2] = uVar7;
      puVar11[3] = uVar8;
      lVar10 = lVar10 + 1;
      puVar11 = puVar11 + 8;
    } while (lVar10 < (int)param_4[1]);
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
    UNLOCK();
    if (iVar4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 3) = (int)plVar14[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147613b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar14 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147613b6e FUN_147613b6e body=29 status=ok
// SIG undefined FUN_147613b6e(void)

undefined8 FUN_147613b6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147613c18 FUN_147613c18 body=29 status=ok
// SIG undefined FUN_147613c18(void)

undefined8 FUN_147613c18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147613c36 FUN_147613c36 body=309 status=ok
// SIG undefined FUN_147613c36(void)

void FUN_147613c36(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_3 + 0x28);
    lVar10 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147613c75;
      plVar14 = plVar14 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_147613c75:
  iVar3 = *(int *)(param_3 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  lVar10 = *param_2;
  if (*(ushort *)(lVar10 + 0xc) != 0) {
    plVar15 = *(longlong **)(lVar10 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar15 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147613cb8;
      plVar15 = plVar15 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar15 = (longlong *)0x0;
LAB_147613cb8:
  lVar12 = *plVar14;
  iVar4 = *(int *)(lVar10 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
  }
  LOCK();
  *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar11 = (undefined4 *)((longlong)(int)param_2[1] * 0x20 + *plVar15);
    lVar10 = 0;
    do {
      lVar13 = (longlong)*(int *)(*param_4 + lVar10 * 4) * 0x20;
      puVar1 = (undefined4 *)(lVar12 + lVar13);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar13);
      uVar9 = puVar2[1];
      *(undefined8 *)(puVar11 + 4) = *puVar2;
      *(undefined8 *)(puVar11 + 6) = uVar9;
      *puVar11 = uVar5;
      puVar11[1] = uVar6;
      puVar11[2] = uVar7;
      puVar11[3] = uVar8;
      lVar10 = lVar10 + 1;
      puVar11 = puVar11 + 8;
    } while (lVar10 < (int)param_4[1]);
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
    UNLOCK();
    if (iVar4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 3) = (int)plVar14[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147613d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar14 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147613d6c FUN_147613d6c body=29 status=ok
// SIG undefined FUN_147613d6c(void)

undefined8 FUN_147613d6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147613e16 FUN_147613e16 body=29 status=ok
// SIG undefined FUN_147613e16(void)

undefined8 FUN_147613e16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147613e34 FUN_147613e34 body=309 status=ok
// SIG undefined FUN_147613e34(void)

void FUN_147613e34(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_3 + 0x28);
    lVar10 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147613e73;
      plVar14 = plVar14 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_147613e73:
  iVar3 = *(int *)(param_3 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  lVar10 = *param_2;
  if (*(ushort *)(lVar10 + 0xc) != 0) {
    plVar15 = *(longlong **)(lVar10 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar15 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147613eb6;
      plVar15 = plVar15 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar15 = (longlong *)0x0;
LAB_147613eb6:
  lVar12 = *plVar14;
  iVar4 = *(int *)(lVar10 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
  }
  LOCK();
  *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar11 = (undefined4 *)((longlong)(int)param_2[1] * 0x20 + *plVar15);
    lVar10 = 0;
    do {
      lVar13 = (longlong)*(int *)(*param_4 + lVar10 * 4) * 0x20;
      puVar1 = (undefined4 *)(lVar12 + lVar13);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar13);
      uVar9 = puVar2[1];
      *(undefined8 *)(puVar11 + 4) = *puVar2;
      *(undefined8 *)(puVar11 + 6) = uVar9;
      *puVar11 = uVar5;
      puVar11[1] = uVar6;
      puVar11[2] = uVar7;
      puVar11[3] = uVar8;
      lVar10 = lVar10 + 1;
      puVar11 = puVar11 + 8;
    } while (lVar10 < (int)param_4[1]);
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
    UNLOCK();
    if (iVar4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 3) = (int)plVar14[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147613f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar14 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147613f6a FUN_147613f6a body=29 status=ok
// SIG undefined FUN_147613f6a(void)

undefined8 FUN_147613f6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147613f8a FUN_147613f8a body=44 status=ok
// SIG undefined FUN_147613f8a(void)

void FUN_147613f8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  if (0 < param_4) {
    uVar5 = param_4 + 1;
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  return;
}



// FUNCTION 147613fb6 FUN_147613fb6 body=44 status=ok
// SIG undefined FUN_147613fb6(void)

void FUN_147613fb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  if (0 < param_4) {
    uVar5 = param_4 + 1;
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  return;
}



// FUNCTION 147613ff4 FUN_147613ff4 body=29 status=ok
// SIG undefined FUN_147613ff4(void)

undefined8 FUN_147613ff4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147614012 FUN_147614012 body=322 status=ok
// SIG undefined FUN_147614012(void)

void FUN_147614012(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147614052;
      plVar7 = plVar7 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147614052:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar10 = *(longlong **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147614094;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_147614094:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar4 = (undefined8 *)((longlong)(int)param_2[1] * 0x48 + *plVar10);
    lVar3 = 0;
    do {
      puVar8 = (undefined8 *)((longlong)*(int *)(*param_4 + lVar3 * 4) * 0x48 + lVar5);
      puVar9 = puVar4;
      for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      lVar3 = lVar3 + 1;
      puVar4 = puVar4 + 9;
    } while (lVar3 < (int)param_4[1]);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014761413b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147614154 FUN_147614154 body=29 status=ok
// SIG undefined FUN_147614154(void)

undefined8 FUN_147614154(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476141e8 FUN_1476141e8 body=1 status=ok
// SIG undefined FUN_1476141e8(void)

void FUN_1476141e8(void)

{
  return;
}



// FUNCTION 1476141ec FUN_1476141ec body=29 status=ok
// SIG undefined FUN_1476141ec(void)

undefined8 FUN_1476141ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761420a FUN_14761420a body=312 status=ok
// SIG undefined FUN_14761420a(void)

void FUN_14761420a(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147614249;
      plVar11 = plVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147614249:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar12 = *(longlong **)(lVar7 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14761428c;
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_14761428c:
  lVar9 = *plVar11;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x18 + *plVar12);
    lVar7 = 0;
    do {
      lVar10 = (longlong)*(int *)(*param_4 + lVar7 * 4);
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(lVar9 + 0x10 + lVar10 * 0x18);
      puVar1 = (undefined4 *)(lVar9 + lVar10 * 0x18);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 6;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014761432b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147614342 FUN_147614342 body=29 status=ok
// SIG undefined FUN_147614342(void)

undefined8 FUN_147614342(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476143b8 FUN_1476143b8 body=29 status=ok
// SIG undefined FUN_1476143b8(void)

undefined8 FUN_1476143b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476143d6 FUN_1476143d6 body=291 status=ok
// SIG undefined FUN_1476143d6(void)

void FUN_1476143d6(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147614415;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147614415:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147614458;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147614458:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined2 *)((longlong)(int)lVar3 * 2 + lVar4 + lVar6 * 2) =
           *(undefined2 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 2);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476144e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476144fa FUN_1476144fa body=29 status=ok
// SIG undefined FUN_1476144fa(void)

undefined8 FUN_1476144fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147614574 FUN_147614574 body=29 status=ok
// SIG undefined FUN_147614574(void)

undefined8 FUN_147614574(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147614592 FUN_147614592 body=286 status=ok
// SIG undefined FUN_147614592(void)

void FUN_147614592(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476145d1;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1476145d1:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147614614;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147614614:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined1 *)((int)lVar3 + lVar4 + lVar6) =
           *(undefined1 *)(lVar5 + *(int *)(*param_4 + lVar6 * 4));
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147614699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476146b0 FUN_1476146b0 body=29 status=ok
// SIG undefined FUN_1476146b0(void)

undefined8 FUN_1476146b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761473a FUN_14761473a body=29 status=ok
// SIG undefined FUN_14761473a(void)

undefined8 FUN_14761473a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147614758 FUN_147614758 body=286 status=ok
// SIG undefined FUN_147614758(void)

void FUN_147614758(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147614797;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147614797:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476147da;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476147da:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined1 *)((int)lVar3 + lVar4 + lVar6) =
           *(undefined1 *)(lVar5 + *(int *)(*param_4 + lVar6 * 4));
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014761485f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147614876 FUN_147614876 body=29 status=ok
// SIG undefined FUN_147614876(void)

undefined8 FUN_147614876(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147614896 FUN_147614896 body=103 status=ok
// SIG undefined FUN_147614896(void)

void FUN_147614896(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar4);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar4);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar4) = lVar2;
      *(undefined1 *)(param_2 + 8 + lVar4) = *(undefined1 *)(param_3 + 8 + lVar4);
      lVar4 = lVar4 + 0x10;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 1476148fe FUN_1476148fe body=99 status=ok
// SIG undefined FUN_1476148fe(void)

void FUN_1476148fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_3 + lVar4);
      *(longlong *)(param_2 + lVar4) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined1 *)(param_2 + 8 + lVar4) = *(undefined1 *)(param_3 + 8 + lVar4);
      lVar4 = lVar4 + 0x10;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 147614974 FUN_147614974 body=29 status=ok
// SIG undefined FUN_147614974(void)

undefined8 FUN_147614974(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147614992 FUN_147614992 body=353 status=ok
// SIG undefined FUN_147614992(void)

void FUN_147614992(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476149d2;
      plVar8 = plVar8 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476149d2:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar7 = *(longlong **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147614a16;
      plVar7 = plVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147614a16:
  lVar6 = *plVar8;
  iVar3 = *(int *)(lVar4 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar9 = (undefined1 *)((longlong)(int)param_2[1] * 0x10 + *plVar7 + 8);
    lVar4 = 0;
    do {
      lVar5 = (longlong)*(int *)(*param_4 + lVar4 * 4) * 0x10;
      plVar1 = (longlong *)(lVar6 + lVar5);
      lVar5 = *(longlong *)(lVar6 + lVar5);
      if (DAT_14c950c29 == '\x01') {
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar5 = *plVar1;
        }
      }
      *(longlong *)(puVar9 + -8) = lVar5;
      *puVar9 = (char)plVar1[1];
      lVar4 = lVar4 + 1;
      puVar9 = puVar9 + 0x10;
    } while (lVar4 < (int)param_4[1]);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147614ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar8 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147614af4 FUN_147614af4 body=29 status=ok
// SIG undefined FUN_147614af4(void)

undefined8 FUN_147614af4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147614b9c FUN_147614b9c body=53 status=ok
// SIG undefined FUN_147614b9c(void)

void FUN_147614b9c(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_147614bd1(param_2,param_3);
      param_3 = param_3 + 0x18;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 147614bd1 FUN_147614bd1 body=281 status=ok
// SIG undefined FUN_147614bd1(void)

void FUN_147614bd1(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (DAT_14cab4ad8 == 0) {
    uVar2 = FUN_140d2a6db();
    DAT_14cab4ad8 = FUN_140002ddd(FUN_1463467af,uVar2,L"ConstraintComponentData");
  }
  lVar1 = DAT_14cab4ad8;
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,lVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147614cec FUN_147614cec body=31 status=ok
// SIG undefined FUN_147614cec(void)

undefined8 FUN_147614cec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147614d0c FUN_147614d0c body=312 status=ok
// SIG undefined FUN_147614d0c(void)

void FUN_147614d0c(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147614d4b;
      plVar11 = plVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147614d4b:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar12 = *(longlong **)(lVar7 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147614d8e;
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_147614d8e:
  lVar9 = *plVar11;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x18 + *plVar12);
    lVar7 = 0;
    do {
      lVar10 = (longlong)*(int *)(*param_4 + lVar7 * 4);
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(lVar9 + 0x10 + lVar10 * 0x18);
      puVar1 = (undefined4 *)(lVar9 + lVar10 * 0x18);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 6;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147614e2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147614e44 FUN_147614e44 body=29 status=ok
// SIG undefined FUN_147614e44(void)

undefined8 FUN_147614e44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147614ec6 FUN_147614ec6 body=29 status=ok
// SIG undefined FUN_147614ec6(void)

undefined8 FUN_147614ec6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147614ee4 FUN_147614ee4 body=291 status=ok
// SIG undefined FUN_147614ee4(void)

void FUN_147614ee4(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147614f23;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147614f23:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147614f66;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147614f66:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147614ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147615008 FUN_147615008 body=29 status=ok
// SIG undefined FUN_147615008(void)

undefined8 FUN_147615008(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147615092 FUN_147615092 body=31 status=ok
// SIG undefined FUN_147615092(void)

undefined8 FUN_147615092(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476150b2 FUN_1476150b2 body=29 status=ok
// SIG undefined FUN_1476150b2(void)

undefined8 FUN_1476150b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761513a FUN_14761513a body=31 status=ok
// SIG undefined FUN_14761513a(void)

undefined8 FUN_14761513a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761515a FUN_14761515a body=29 status=ok
// SIG undefined FUN_14761515a(void)

undefined8 FUN_14761515a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147615216 FUN_147615216 body=53 status=ok
// SIG undefined FUN_147615216(void)

void FUN_147615216(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_14761524b(param_2,param_3);
      param_3 = param_3 + 0x18;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 14761524b FUN_14761524b body=281 status=ok
// SIG undefined FUN_14761524b(void)

void FUN_14761524b(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (DAT_14cab4a90 == 0) {
    uVar2 = FUN_140d2a6db();
    DAT_14cab4a90 = FUN_140002ddd(FUN_1463465df,uVar2,L"PerlinNoiseParams");
  }
  lVar1 = DAT_14cab4a90;
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,lVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147615366 FUN_147615366 body=31 status=ok
// SIG undefined FUN_147615366(void)

undefined8 FUN_147615366(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147615386 FUN_147615386 body=312 status=ok
// SIG undefined FUN_147615386(void)

void FUN_147615386(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476153c5;
      plVar11 = plVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1476153c5:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar12 = *(longlong **)(lVar7 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147615408;
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_147615408:
  lVar9 = *plVar11;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x18 + *plVar12);
    lVar7 = 0;
    do {
      lVar10 = (longlong)*(int *)(*param_4 + lVar7 * 4);
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(lVar9 + 0x10 + lVar10 * 0x18);
      puVar1 = (undefined4 *)(lVar9 + lVar10 * 0x18);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 6;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476154a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476154be FUN_1476154be body=29 status=ok
// SIG undefined FUN_1476154be(void)

undefined8 FUN_1476154be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476154de FUN_1476154de body=93 status=ok
// SIG undefined FUN_1476154de(void)

void FUN_1476154de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar4);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar4);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar4) = lVar2;
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 14761554c FUN_14761554c body=31 status=ok
// SIG undefined FUN_14761554c(void)

undefined8 FUN_14761554c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761556c FUN_14761556c body=29 status=ok
// SIG undefined FUN_14761556c(void)

undefined8 FUN_14761556c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147615598 FUN_147615598 body=93 status=ok
// SIG undefined FUN_147615598(void)

void FUN_147615598(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar4);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar4);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar4) = lVar2;
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 1476155f6 FUN_1476155f6 body=91 status=ok
// SIG undefined FUN_1476155f6(void)

void FUN_1476155f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_3 + lVar4);
      *(longlong *)(param_2 + lVar4) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 147615676 FUN_147615676 body=53 status=ok
// SIG undefined FUN_147615676(void)

void FUN_147615676(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_1476156ab(param_2,param_3);
      param_3 = param_3 + 8;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 1476156ab FUN_1476156ab body=281 status=ok
// SIG undefined FUN_1476156ab(void)

void FUN_1476156ab(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (DAT_14cab4aa8 == 0) {
    uVar2 = FUN_140d2a6db();
    DAT_14cab4aa8 = FUN_140002ddd(FUN_146346677,uVar2,L"LevelVisibilityComponentData");
  }
  lVar1 = DAT_14cab4aa8;
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,lVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476157c6 FUN_1476157c6 body=29 status=ok
// SIG undefined FUN_1476157c6(void)

undefined8 FUN_1476157c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476157e4 FUN_1476157e4 body=334 status=ok
// SIG undefined FUN_1476157e4(void)

void FUN_1476157e4(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147615824;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_147615824:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar5 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147615868;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147615868:
  lVar6 = *plVar10;
  iVar2 = *(int *)(lVar5 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar5 = *plVar8;
    lVar11 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar9 = (longlong)*(int *)(*param_4 + lVar11 * 4);
      lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
      if ((bVar4 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
          bVar4 = DAT_14c950c29;
        }
      }
      *(longlong *)((longlong)(int)lVar3 * 8 + lVar5 + lVar11 * 8) = lVar7;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147615919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147615932 FUN_147615932 body=29 status=ok
// SIG undefined FUN_147615932(void)

undefined8 FUN_147615932(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761595e FUN_14761595e body=93 status=ok
// SIG undefined FUN_14761595e(void)

void FUN_14761595e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar4);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar4);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar4) = lVar2;
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 1476159bc FUN_1476159bc body=91 status=ok
// SIG undefined FUN_1476159bc(void)

void FUN_1476159bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_3 + lVar4);
      *(longlong *)(param_2 + lVar4) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 147615a3c FUN_147615a3c body=53 status=ok
// SIG undefined FUN_147615a3c(void)

void FUN_147615a3c(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_147615a71(param_2,param_3);
      param_3 = param_3 + 8;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 147615a71 FUN_147615a71 body=281 status=ok
// SIG undefined FUN_147615a71(void)

void FUN_147615a71(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (DAT_14cab4ac0 == 0) {
    uVar2 = FUN_140d2a6db();
    DAT_14cab4ac0 = FUN_140002ddd(FUN_146346713,uVar2,L"MovieSceneDataLayerComponentData");
  }
  lVar1 = DAT_14cab4ac0;
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,lVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147615b8c FUN_147615b8c body=29 status=ok
// SIG undefined FUN_147615b8c(void)

undefined8 FUN_147615b8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147615baa FUN_147615baa body=334 status=ok
// SIG undefined FUN_147615baa(void)

void FUN_147615baa(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147615bea;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_147615bea:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar5 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147615c2e;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147615c2e:
  lVar6 = *plVar10;
  iVar2 = *(int *)(lVar5 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar5 = *plVar8;
    lVar11 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar9 = (longlong)*(int *)(*param_4 + lVar11 * 4);
      lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
      if ((bVar4 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
          bVar4 = DAT_14c950c29;
        }
      }
      *(longlong *)((longlong)(int)lVar3 * 8 + lVar5 + lVar11 * 8) = lVar7;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147615cdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147615cf8 FUN_147615cf8 body=29 status=ok
// SIG undefined FUN_147615cf8(void)

undefined8 FUN_147615cf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147615d6c FUN_147615d6c body=31 status=ok
// SIG undefined FUN_147615d6c(void)

undefined8 FUN_147615d6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147615d8c FUN_147615d8c body=29 status=ok
// SIG undefined FUN_147615d8c(void)

undefined8 FUN_147615d8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147615e0e FUN_147615e0e body=31 status=ok
// SIG undefined FUN_147615e0e(void)

undefined8 FUN_147615e0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147615e2e FUN_147615e2e body=291 status=ok
// SIG undefined FUN_147615e2e(void)

void FUN_147615e2e(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147615e6d;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147615e6d:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147615eb0;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147615eb0:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147615f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147615f52 FUN_147615f52 body=29 status=ok
// SIG undefined FUN_147615f52(void)

undefined8 FUN_147615f52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147615fd4 FUN_147615fd4 body=31 status=ok
// SIG undefined FUN_147615fd4(void)

undefined8 FUN_147615fd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147615ff4 FUN_147615ff4 body=291 status=ok
// SIG undefined FUN_147615ff4(void)

void FUN_147615ff4(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147616033;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147616033:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147616076;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147616076:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147616100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147616118 FUN_147616118 body=29 status=ok
// SIG undefined FUN_147616118(void)

undefined8 FUN_147616118(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761618c FUN_14761618c body=31 status=ok
// SIG undefined FUN_14761618c(void)

undefined8 FUN_14761618c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476161ac FUN_1476161ac body=29 status=ok
// SIG undefined FUN_1476161ac(void)

undefined8 FUN_1476161ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147616234 FUN_147616234 body=31 status=ok
// SIG undefined FUN_147616234(void)

undefined8 FUN_147616234(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147616254 FUN_147616254 body=312 status=ok
// SIG undefined FUN_147616254(void)

void FUN_147616254(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147616293;
      plVar11 = plVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147616293:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar12 = *(longlong **)(lVar7 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476162d6;
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_1476162d6:
  lVar9 = *plVar11;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x14 + *plVar12);
    lVar7 = 0;
    do {
      lVar10 = (longlong)*(int *)(*param_4 + lVar7 * 4);
      puVar8[4] = *(undefined4 *)(lVar9 + 0x10 + lVar10 * 0x14);
      puVar1 = (undefined4 *)(lVar9 + lVar10 * 0x14);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 5;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147616375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14761638c FUN_14761638c body=29 status=ok
// SIG undefined FUN_14761638c(void)

undefined8 FUN_14761638c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476163b8 FUN_1476163b8 body=93 status=ok
// SIG undefined FUN_1476163b8(void)

void FUN_1476163b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar4);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar4);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar4) = lVar2;
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 147616416 FUN_147616416 body=91 status=ok
// SIG undefined FUN_147616416(void)

void FUN_147616416(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_3 + lVar4);
      *(longlong *)(param_2 + lVar4) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 147616496 FUN_147616496 body=53 status=ok
// SIG undefined FUN_147616496(void)

void FUN_147616496(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_1476164cb(param_2,param_3);
      param_3 = param_3 + 8;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 1476164cb FUN_1476164cb body=281 status=ok
// SIG undefined FUN_1476164cb(void)

void FUN_1476164cb(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (DAT_14cab4b08 == 0) {
    uVar2 = FUN_140d2a6db();
    DAT_14cab4b08 = FUN_140002ddd(FUN_1463468e1,uVar2,L"MovieSceneAudioComponentData");
  }
  lVar1 = DAT_14cab4b08;
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,lVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476165e6 FUN_1476165e6 body=31 status=ok
// SIG undefined FUN_1476165e6(void)

undefined8 FUN_1476165e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147616606 FUN_147616606 body=334 status=ok
// SIG undefined FUN_147616606(void)

void FUN_147616606(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147616646;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_147616646:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar5 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14761668a;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14761668a:
  lVar6 = *plVar10;
  iVar2 = *(int *)(lVar5 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar5 = *plVar8;
    lVar11 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar9 = (longlong)*(int *)(*param_4 + lVar11 * 4);
      lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
      if ((bVar4 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
          bVar4 = DAT_14c950c29;
        }
      }
      *(longlong *)((longlong)(int)lVar3 * 8 + lVar5 + lVar11 * 8) = lVar7;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014761673b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147616754 FUN_147616754 body=29 status=ok
// SIG undefined FUN_147616754(void)

undefined8 FUN_147616754(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147616780 FUN_147616780 body=43 status=ok
// SIG undefined FUN_147616780(void)

void FUN_147616780(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (0 < param_4) {
    uVar5 = param_4 + 1;
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  return;
}



// FUNCTION 1476167ac FUN_1476167ac body=43 status=ok
// SIG undefined FUN_1476167ac(void)

void FUN_1476167ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (0 < param_4) {
    uVar5 = param_4 + 1;
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  return;
}



// FUNCTION 1476167fe FUN_1476167fe body=53 status=ok
// SIG undefined FUN_1476167fe(void)

void FUN_1476167fe(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_147616833(param_2,param_3);
      param_3 = param_3 + 0x60;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 147616833 FUN_147616833 body=281 status=ok
// SIG undefined FUN_147616833(void)

void FUN_147616833(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (DAT_14cab4b50 == 0) {
    uVar2 = FUN_140d2a6db();
    DAT_14cab4b50 = FUN_140002ddd(FUN_146346adb,uVar2,L"MovieSceneAudioInputData");
  }
  lVar1 = DAT_14cab4b50;
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,lVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761694e FUN_14761694e body=31 status=ok
// SIG undefined FUN_14761694e(void)

undefined8 FUN_14761694e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761696e FUN_14761696e body=317 status=ok
// SIG undefined FUN_14761696e(void)

void FUN_14761696e(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476169ae;
      plVar7 = plVar7 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1476169ae:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar10 = *(longlong **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476169f0;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1476169f0:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar4 = (undefined4 *)((longlong)(int)param_2[1] * 0x60 + *plVar10);
    lVar3 = 0;
    do {
      puVar8 = (undefined4 *)((longlong)*(int *)(*param_4 + lVar3 * 4) * 0x60 + lVar5);
      puVar9 = puVar4;
      for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      lVar3 = lVar3 + 1;
      puVar4 = puVar4 + 0x18;
    } while (lVar3 < (int)param_4[1]);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147616a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147616aac FUN_147616aac body=29 status=ok
// SIG undefined FUN_147616aac(void)

undefined8 FUN_147616aac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147616ad8 FUN_147616ad8 body=135 status=ok
// SIG undefined FUN_147616ad8(void)

void FUN_147616ad8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  if (0 < param_4) {
    uVar10 = param_4 + 1;
    lVar11 = 0;
    bVar8 = DAT_14c950c29;
    do {
      lVar9 = *(longlong *)(param_3 + lVar11);
      if ((bVar8 & 1) != 0) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *(longlong *)(param_3 + lVar11);
          bVar8 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar11);
      *plVar1 = lVar9;
      plVar2 = (longlong *)(param_3 + 8 + lVar11);
      lVar9 = plVar2[1];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar11);
      uVar4 = *puVar3;
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      plVar1[1] = *plVar2;
      plVar1[2] = lVar9;
      *(undefined4 *)(plVar1 + 3) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar5;
      *(undefined4 *)(plVar1 + 4) = uVar6;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar7;
      puVar3 = (undefined4 *)(param_3 + 0x28 + lVar11);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *(undefined4 *)(plVar1 + 5) = *puVar3;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar4;
      *(undefined4 *)(plVar1 + 6) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x34) = uVar6;
      plVar1[7] = *(longlong *)(param_3 + 0x38 + lVar11);
      lVar11 = lVar11 + 0x40;
      uVar10 = uVar10 - 1;
    } while (1 < uVar10);
  }
  return;
}



// FUNCTION 147616b60 FUN_147616b60 body=131 status=ok
// SIG undefined FUN_147616b60(void)

void FUN_147616b60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  
  if (0 < param_4) {
    uVar9 = param_4 + 1;
    lVar10 = 0;
    bVar8 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar10);
      *(longlong *)(param_2 + lVar10) = lVar2;
      if ((lVar2 != 0 & bVar8) == 1) {
        FUN_1456cec3c();
        bVar8 = DAT_14c950c29;
      }
      lVar2 = param_3 + lVar10;
      lVar1 = param_2 + lVar10;
      uVar6 = *(undefined8 *)(lVar2 + 8);
      uVar7 = *(undefined8 *)(lVar2 + 0x10);
      uVar3 = *(undefined4 *)(lVar2 + 0x1c);
      uVar4 = *(undefined4 *)(lVar2 + 0x20);
      uVar5 = *(undefined4 *)(lVar2 + 0x24);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x1c) = uVar3;
      *(undefined4 *)(lVar1 + 0x20) = uVar4;
      *(undefined4 *)(lVar1 + 0x24) = uVar5;
      *(undefined8 *)(lVar1 + 8) = uVar6;
      *(undefined8 *)(lVar1 + 0x10) = uVar7;
      uVar3 = *(undefined4 *)(lVar2 + 0x2c);
      uVar4 = *(undefined4 *)(lVar2 + 0x30);
      uVar5 = *(undefined4 *)(lVar2 + 0x34);
      *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar2 + 0x28);
      *(undefined4 *)(lVar1 + 0x2c) = uVar3;
      *(undefined4 *)(lVar1 + 0x30) = uVar4;
      *(undefined4 *)(lVar1 + 0x34) = uVar5;
      *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
      lVar10 = lVar10 + 0x40;
      uVar9 = uVar9 - 1;
    } while (1 < uVar9);
  }
  return;
}



// FUNCTION 147616c22 FUN_147616c22 body=53 status=ok
// SIG undefined FUN_147616c22(void)

void FUN_147616c22(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_147616c57(param_2,param_3);
      param_3 = param_3 + 0x40;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 147616c57 FUN_147616c57 body=281 status=ok
// SIG undefined FUN_147616c57(void)

void FUN_147616c57(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (DAT_14cab4b20 == 0) {
    uVar2 = FUN_140d2a6db();
    DAT_14cab4b20 = FUN_140002ddd(FUN_14634697d,uVar2,L"MovieSceneCameraShakeComponentData");
  }
  lVar1 = DAT_14cab4b20;
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,lVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147616d72 FUN_147616d72 body=31 status=ok
// SIG undefined FUN_147616d72(void)

undefined8 FUN_147616d72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147616d92 FUN_147616d92 body=380 status=ok
// SIG undefined FUN_147616d92(void)

void FUN_147616d92(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar13 = *(longlong **)(param_3 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar13 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147616dd2;
      plVar13 = plVar13 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar13 = (longlong *)0x0;
LAB_147616dd2:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
  }
  LOCK();
  *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
  UNLOCK();
  lVar9 = *param_2;
  if (*(ushort *)(lVar9 + 0xc) != 0) {
    plVar12 = *(longlong **)(lVar9 + 0x28);
    lVar10 = (ulonglong)*(ushort *)(lVar9 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_147616e16;
      plVar12 = plVar12 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_147616e16:
  lVar10 = *plVar13;
  iVar3 = *(int *)(lVar9 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    plVar14 = (longlong *)((longlong)(int)param_2[1] * 0x40 + *plVar12);
    lVar9 = 0;
    bVar8 = DAT_14c950c29;
    do {
      lVar11 = (longlong)*(int *)(*param_4 + lVar9 * 4) * 0x40;
      plVar1 = (longlong *)(lVar10 + lVar11);
      lVar11 = *(longlong *)(lVar10 + lVar11);
      if ((bVar8 & 1) != 0) {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar11 = *plVar1;
          bVar8 = DAT_14c950c29;
        }
      }
      *plVar14 = lVar11;
      lVar11 = plVar1[1];
      lVar6 = plVar1[2];
      lVar7 = plVar1[4];
      plVar14[3] = plVar1[3];
      plVar14[4] = lVar7;
      plVar14[1] = lVar11;
      plVar14[2] = lVar6;
      plVar14[7] = plVar1[7];
      uVar4 = *(undefined4 *)((longlong)plVar1 + 0x2c);
      lVar11 = plVar1[6];
      uVar5 = *(undefined4 *)((longlong)plVar1 + 0x34);
      *(int *)(plVar14 + 5) = (int)plVar1[5];
      *(undefined4 *)((longlong)plVar14 + 0x2c) = uVar4;
      *(int *)(plVar14 + 6) = (int)lVar11;
      *(undefined4 *)((longlong)plVar14 + 0x34) = uVar5;
      lVar9 = lVar9 + 1;
      plVar14 = plVar14 + 8;
    } while (lVar9 < (int)param_4[1]);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 3) = (int)plVar13[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147616ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar13 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147616f0e FUN_147616f0e body=29 status=ok
// SIG undefined FUN_147616f0e(void)

undefined8 FUN_147616f0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147616f3a FUN_147616f3a body=114 status=ok
// SIG undefined FUN_147616f3a(void)

void FUN_147616f3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    uVar8 = param_4 + 1;
    lVar9 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar7 = *(longlong *)(param_3 + lVar9);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar9);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar9);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar9);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      *(undefined1 *)(plVar1 + 3) = *(undefined1 *)(param_3 + 0x18 + lVar9);
      lVar9 = lVar9 + 0x20;
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  return;
}



// FUNCTION 147616fac FUN_147616fac body=115 status=ok
// SIG undefined FUN_147616fac(void)

void FUN_147616fac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  
  if (0 < param_4) {
    uVar7 = param_4 + 1;
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar8);
      *(longlong *)(param_2 + lVar8) = lVar2;
      if ((lVar2 != 0 & bVar6) == 1) {
        FUN_1456cec3c();
        bVar6 = DAT_14c950c29;
      }
      lVar2 = param_3 + lVar8;
      lVar1 = param_2 + lVar8;
      *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(lVar2 + 0x18);
      uVar3 = *(undefined4 *)(lVar2 + 0xc);
      uVar4 = *(undefined4 *)(lVar2 + 0x10);
      uVar5 = *(undefined4 *)(lVar2 + 0x14);
      *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(lVar2 + 8);
      *(undefined4 *)(lVar1 + 0xc) = uVar3;
      *(undefined4 *)(lVar1 + 0x10) = uVar4;
      *(undefined4 *)(lVar1 + 0x14) = uVar5;
      lVar8 = lVar8 + 0x20;
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  return;
}



// FUNCTION 147617048 FUN_147617048 body=53 status=ok
// SIG undefined FUN_147617048(void)

void FUN_147617048(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_14761707d(param_2,param_3);
      param_3 = param_3 + 0x20;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 14761707d FUN_14761707d body=281 status=ok
// SIG undefined FUN_14761707d(void)

void FUN_14761707d(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (DAT_14cab4b38 == 0) {
    uVar2 = FUN_140d2a6db();
    DAT_14cab4b38 = FUN_140002ddd(FUN_146346a45,uVar2,L"MovieSceneCameraShakeInstanceData");
  }
  lVar1 = DAT_14cab4b38;
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,lVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147617198 FUN_147617198 body=29 status=ok
// SIG undefined FUN_147617198(void)

undefined8 FUN_147617198(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476171b6 FUN_1476171b6 body=369 status=ok
// SIG undefined FUN_1476171b6(void)

void FUN_1476171b6(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1476171f6;
      plVar11 = plVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1476171f6:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar10 = *(longlong **)(lVar7 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14761723a;
      plVar10 = plVar10 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14761723a:
  lVar8 = *plVar11;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar12 = (undefined4 *)((longlong)(int)param_2[1] * 0x20 + *plVar10 + 8);
    lVar7 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar9 = (longlong)*(int *)(*param_4 + lVar7 * 4) * 0x20;
      plVar1 = (longlong *)(lVar8 + lVar9);
      lVar9 = *(longlong *)(lVar8 + lVar9);
      if ((bVar6 & 1) != 0) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *plVar1;
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(puVar12 + -2) = lVar9;
      *(char *)(puVar12 + 4) = (char)plVar1[3];
      uVar4 = *(undefined4 *)((longlong)plVar1 + 0xc);
      lVar9 = plVar1[2];
      uVar5 = *(undefined4 *)((longlong)plVar1 + 0x14);
      *puVar12 = (int)plVar1[1];
      puVar12[1] = uVar4;
      puVar12[2] = (int)lVar9;
      puVar12[3] = uVar5;
      lVar7 = lVar7 + 1;
      puVar12 = puVar12 + 8;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014761730e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147617328 FUN_147617328 body=31 status=ok
// SIG undefined FUN_147617328(void)

undefined8 FUN_147617328(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147617348 FUN_147617348 body=927 status=ok
// SIG undefined FUN_147617348(void)

void FUN_147617348(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1f8 [32];
  ushort *local_1d8;
  code **local_1d0;
  longlong local_1c8;
  undefined8 *local_1c0;
  longlong local_1b0;
  undefined8 *local_1a8;
  ushort local_19c [2];
  ushort *local_198;
  undefined8 *local_190;
  undefined2 local_184;
  ushort local_182;
  undefined8 local_180;
  undefined2 local_178;
  undefined2 local_176;
  undefined2 local_174;
  undefined2 local_172;
  undefined2 local_170;
  undefined2 local_16e;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined2 local_168;
  undefined1 local_163;
  undefined4 local_160;
  undefined1 local_15c;
  undefined2 local_158;
  undefined4 local_156;
  undefined2 local_152;
  undefined2 local_150;
  undefined2 local_14e;
  undefined2 local_14c;
  undefined2 local_14a;
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined2 local_142;
  undefined2 local_140;
  undefined1 local_13b;
  undefined8 local_138;
  undefined1 local_130 [28];
  undefined1 local_114;
  byte bStack_113;
  uint local_110;
  undefined1 local_108 [80];
  longlong local_b8;
  code *local_58;
  ushort *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1b0 = param_4;
  lVar3 = FUN_14009d2a0();
  local_158 = *(undefined2 *)(lVar3 + 0x4a);
  local_152 = *(undefined2 *)(lVar3 + 0x108);
  local_156 = *(undefined4 *)(lVar3 + 0x104);
  puVar6 = (undefined2 *)*param_3;
  local_140 = puVar6[0x10];
  local_142 = puVar6[0xe];
  local_144 = puVar6[0xc];
  local_146 = puVar6[10];
  local_148 = puVar6[8];
  local_14a = puVar6[6];
  local_14c = puVar6[4];
  local_150 = *puVar6;
  local_14e = puVar6[2];
  local_13b = 0;
  local_138 = CONCAT35(local_138._5_3_,0x6ff);
  local_182 = *(ushort *)(param_2 + 0x14);
  local_198 = &local_182;
  local_190 = &local_180;
  local_1a8 = param_3;
  FUN_140dad0c2(&local_158,local_130);
  local_110 = *(uint *)(param_6 + 0x290);
  bVar4 = bStack_113 & 0xfe | (local_110 & 0xfffffeff) == 1;
  _local_114 = CONCAT11(bVar4,local_114);
  local_1d8 = local_19c;
  local_19c[0] = CONCAT11(bVar4,local_114) & 0xfdff;
  local_1d0 = (code **)&local_180;
  local_180 = FUN_1476185e4;
  local_178 = CONCAT11(local_178._1_1_,3);
  local_1c8 = param_2;
  FUN_1476183d8(local_130,&local_58,param_6 + 0x28,param_5);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  puVar2 = local_1a8;
  if (0 < *(int *)(local_1b0 + 4)) {
    local_138 = 0x10000000000;
    puVar6 = (undefined2 *)*local_1a8;
    iVar1 = *(int *)(local_1a8 + 1);
    if ((longlong)iVar1 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_158,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar1 * 4 != lVar5);
      puVar6 = (undefined2 *)*puVar2;
    }
    local_168 = puVar6[0x10];
    local_1b0 = CONCAT62(local_1b0._2_6_,local_168);
    local_16a = puVar6[0xe];
    local_16c = puVar6[0xc];
    local_16e = puVar6[10];
    local_170 = puVar6[8];
    local_172 = puVar6[6];
    local_174 = puVar6[4];
    local_178 = *puVar6;
    local_176 = puVar6[2];
    local_180 = (code *)CONCAT26(*(undefined2 *)(lVar3 + 0x108),
                                 CONCAT42(*(undefined4 *)(lVar3 + 0x104),
                                          *(undefined2 *)(lVar3 + 0x4a)));
    local_163 = 0;
    local_160 = 0x6ff;
    local_15c = 0;
    FUN_140dada72(local_130);
    FUN_140dad9c2(local_108,&local_158,2);
    local_184 = *(undefined2 *)(param_2 + 0x14);
    local_50 = &local_182;
    local_58 = (code *)&local_184;
    FUN_1447c44f6(local_108,&local_58);
    FUN_140dad9c2(local_108,&local_158,0x84);
    local_110 = *(uint *)(param_6 + 0x290);
    bVar4 = bStack_113 & 0xfe | (local_110 & 0xfffffeff) == 1;
    _local_114 = CONCAT11(bVar4,local_114);
    local_182 = CONCAT11(bVar4,local_114) & 0xfdff;
    local_58 = FUN_147619392;
    local_50 = (ushort *)CONCAT71(local_50._1_7_,3);
    local_1c0 = local_1a8;
    local_1d8 = &local_182;
    local_1d0 = &local_58;
    local_1c8 = param_2;
    FUN_14761916e(local_130,local_19c,param_6 + 0x28,param_5);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476176e8 FUN_1476176e8 body=912 status=ok
// SIG undefined FUN_1476176e8(void)

void FUN_1476176e8(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined2 *local_1a0;
  uint *local_198;
  undefined8 *local_190;
  undefined2 *local_188;
  undefined2 *local_180;
  undefined2 local_172;
  undefined2 local_170;
  uint local_16e;
  undefined2 local_16a;
  undefined2 local_168;
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined2 local_160;
  undefined2 local_15e;
  undefined2 local_15c;
  undefined2 local_15a;
  undefined2 local_158;
  undefined1 local_153;
  undefined4 local_150;
  undefined1 local_14c;
  undefined2 local_148;
  undefined4 local_146;
  undefined2 local_142;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined2 local_132;
  undefined2 local_130;
  undefined1 local_12b;
  undefined8 local_128;
  undefined1 local_120 [29];
  byte local_103;
  uint local_100;
  undefined1 local_f8 [80];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1b8 = param_4;
  lVar4 = FUN_14009d2a0();
  local_148 = *(undefined2 *)(lVar4 + 0x4a);
  local_142 = *(undefined2 *)(lVar4 + 0x108);
  local_146 = *(undefined4 *)(lVar4 + 0x104);
  puVar6 = (undefined2 *)*param_3;
  local_130 = puVar6[0x10];
  local_132 = puVar6[0xe];
  local_134 = puVar6[0xc];
  local_136 = puVar6[10];
  local_138 = puVar6[8];
  local_13a = puVar6[6];
  local_13c = puVar6[4];
  local_140 = *puVar6;
  local_13e = puVar6[2];
  local_12b = 0;
  local_128 = CONCAT35(local_128._5_3_,0x6ff);
  local_170 = *(undefined2 *)(param_2 + 0x14);
  local_1a0 = &local_170;
  local_198 = &local_16e;
  local_1b0 = param_3;
  FUN_140dad0c2(&local_148,local_120);
  local_100 = *(uint *)(param_7 + 0x290);
  local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
  local_1d8 = param_6;
  local_1d0 = param_2;
  local_1c0 = param_2;
  FUN_1432fc766(local_120,&local_190,param_7 + 0x28,param_5);
  if (local_190 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_190 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_190)(local_190,1);
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  puVar3 = local_1b0;
  if (0 < *(int *)(local_1b8 + 4)) {
    local_128 = 0x10000000000;
    puVar6 = (undefined2 *)*local_1b0;
    iVar2 = *(int *)(local_1b0 + 1);
    if ((longlong)iVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_148,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar2 * 4 != lVar5);
      puVar6 = (undefined2 *)*puVar3;
    }
    local_170 = *(undefined2 *)(lVar4 + 0x4a);
    local_16a = *(undefined2 *)(lVar4 + 0x108);
    local_16e = *(uint *)(lVar4 + 0x104);
    local_158 = puVar6[0x10];
    local_15a = puVar6[0xe];
    local_15c = puVar6[0xc];
    local_15e = puVar6[10];
    local_160 = puVar6[8];
    local_162 = puVar6[6];
    local_164 = puVar6[4];
    local_168 = *puVar6;
    local_166 = puVar6[2];
    local_153 = 0;
    local_150 = 0x6ff;
    local_14c = 0;
    FUN_140dada72(local_120);
    FUN_140dad9c2(local_f8,&local_148,2);
    lVar4 = local_1c0;
    local_172 = *(undefined2 *)(local_1c0 + 0x14);
    local_180 = &local_170;
    local_188 = &local_172;
    FUN_1447c44f6(local_f8);
    FUN_140dad9c2(local_f8,&local_148,0x84);
    local_100 = *(uint *)(param_7 + 0x290);
    local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
    local_1c8 = puVar3;
    local_1d0 = lVar4;
    local_1d8 = param_6;
    FUN_1432fcc04(local_120,&local_1a8,param_7 + 0x28,param_5);
    if (local_1a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_1a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_1a8)(local_1a8,1);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147617a7a FUN_147617a7a body=520 status=ok
// SIG undefined FUN_147617a7a(void)

longlong * FUN_147617a7a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14761b522(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_147617abe;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c6160;
  plVar5 = plVar4 + 2;
  FUN_14761b690(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_14761cedc(&local_58,plVar5);
  plVar2 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_147617c49:
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x000147617c38:
        if (iVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar4;
        goto joined_r0x000147617c38;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_147617c49;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_14761b5d6(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_147617abe:
  plVar2 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147617c86 FUN_147617c86 body=130 status=ok
// SIG undefined FUN_147617c86(void)

void FUN_147617c86(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_14761cf84(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147617d0a FUN_147617d0a body=616 status=ok
// SIG undefined FUN_147617d0a(void)

void FUN_147617d0a(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_147605a78(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147617f74 FUN_147617f74 body=1123 status=ok
// SIG undefined FUN_147617f74(void)

void FUN_147617f74(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_178;
  longlong *local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_120;
  int local_118;
  longlong local_110;
  longlong local_108;
  int local_100;
  longlong local_f8;
  longlong local_f0;
  int local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar2 = (int)param_4[1];
  local_168 = param_3;
  if (0 < iVar2) {
    lVar8 = *param_6;
    local_178 = param_5 + 0x28;
    lVar4 = 0;
    local_170 = param_4;
    do {
      if (*(short *)(*param_4 + lVar4 * 2) != -1) {
        FUN_1432d4ca4(local_178,&local_60);
        lVar6 = local_60;
        plVar1 = local_168;
        lVar9 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)(*local_168 + 0x20));
        local_140 = local_50 + lVar9 * 8;
        if (local_50 == 0) {
          local_140 = 0;
        }
        FUN_1475b4978(lVar6,&local_78,*(undefined2 *)(*plVar1 + 0x1c));
        local_148 = local_68 + lVar9 * 8;
        if (local_68 == 0) {
          local_148 = 0;
        }
        FUN_1475b4978(lVar6,&local_90,*(undefined2 *)(*plVar1 + 0x18));
        local_150 = local_80 + lVar9 * 8;
        if (local_80 == 0) {
          local_150 = 0;
        }
        FUN_1475b4978(lVar6,&local_a8,*(undefined2 *)(*plVar1 + 0x14));
        local_158 = local_98 + lVar9 * 8;
        if (local_98 == 0) {
          local_158 = 0;
        }
        FUN_1475b4978(lVar6,&local_c0,*(undefined2 *)(*plVar1 + 0x10));
        local_160 = local_b0 + lVar9 * 8;
        if (local_b0 == 0) {
          local_160 = 0;
        }
        FUN_1475b4978(lVar6,&local_d8,*(undefined2 *)(*plVar1 + 0xc));
        lVar5 = local_c8 + lVar9 * 8;
        if (local_c8 == 0) {
          lVar5 = 0;
        }
        FUN_1475b4978(lVar6,&local_f0,*(undefined2 *)(*plVar1 + 8));
        lVar3 = local_e0 + lVar9 * 8;
        if (local_e0 == 0) {
          lVar3 = 0;
        }
        FUN_1475b4978(lVar6,&local_108,*(undefined2 *)(*plVar1 + 4));
        lVar7 = local_f8 + lVar9 * 8;
        if (local_f8 == 0) {
          lVar7 = 0;
        }
        FUN_1475b4978(lVar6,&local_120,*(undefined2 *)*plVar1);
        lVar6 = local_110 + lVar9 * 8;
        if (local_110 == 0) {
          lVar6 = 0;
        }
        local_138 = (undefined4)*plVar1;
        uStack_134 = *(undefined4 *)((longlong)plVar1 + 4);
        uStack_130 = (undefined4)plVar1[1];
        uStack_12c = *(undefined4 *)((longlong)plVar1 + 0xc);
        local_188 = local_140;
        local_190 = local_148;
        local_198 = local_150;
        local_1a0 = local_158;
        local_1a8 = local_160;
        local_1b8 = lVar3;
        local_1b0 = lVar5;
        FUN_140911be0(&local_138,lVar8,lVar6,lVar7);
        if (local_120 != 0) {
          LOCK();
          *(int *)(local_120 + 0x18) = *(int *)(local_120 + 0x18) + -1;
          UNLOCK();
          if (local_118 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_120 + 8));
          }
        }
        if (local_108 != 0) {
          LOCK();
          *(int *)(local_108 + 0x18) = *(int *)(local_108 + 0x18) + -1;
          UNLOCK();
          if (local_100 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_108 + 8));
          }
        }
        param_4 = local_170;
        if (local_f0 != 0) {
          LOCK();
          *(int *)(local_f0 + 0x18) = *(int *)(local_f0 + 0x18) + -1;
          UNLOCK();
          if (local_e8 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_f0 + 8));
          }
        }
        if (local_d8 != 0) {
          LOCK();
          *(int *)(local_d8 + 0x18) = *(int *)(local_d8 + 0x18) + -1;
          UNLOCK();
          if (local_d0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_d8 + 8));
          }
        }
        if (local_c0 != 0) {
          LOCK();
          *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + -1;
          UNLOCK();
          if (local_b8 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_c0 + 8));
          }
        }
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
          UNLOCK();
          if (local_a0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
          }
        }
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
          UNLOCK();
          if (local_88 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
          }
        }
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
          UNLOCK();
          if (local_70 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
          }
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar2 = (int)param_4[1];
      }
      lVar4 = lVar4 + 1;
      lVar8 = lVar8 + 0x48;
    } while (lVar4 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476183d8 FUN_1476183d8 body=522 status=ok
// SIG undefined FUN_1476183d8(void)

int * FUN_1476183d8(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  longlong local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar4 = FUN_14760384a();
  if ((cVar4 == '\0') || (cVar4 = FUN_140dac6d2(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_147618427;
  }
  plVar5 = (longlong *)FUN_147618635(param_1,param_7);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x88);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0xb0);
  FUN_140dac962(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_147618730;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x28;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_14761856f;
    }
  }
  else {
LAB_14761856f:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_147618427:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476185e4 FUN_1476185e4 body=80 status=ok
// SIG undefined FUN_1476185e4(void)

void FUN_1476185e4(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_147618748(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147618635 FUN_147618635 body=188 status=ok
// SIG undefined FUN_147618635(void)

undefined8 * FUN_147618635(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar8 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_LAB_14a4c6100;
  puVar8[2] = &PTR_FUN_14a4c6118;
  param_2 = (longlong *)*param_2;
  puVar8[3] = param_2;
  puVar8[4] = 0;
  puVar8[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar8[4] = local_38;
    puVar8[5] = uStack_30;
  }
  puVar8[10] = *(undefined8 *)(param_1 + 8);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  *(undefined4 *)(puVar8 + 8) = param_1[4];
  *(undefined4 *)((longlong)puVar8 + 0x44) = uVar5;
  *(undefined4 *)(puVar8 + 9) = uVar6;
  *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar7;
  *(undefined4 *)(puVar8 + 6) = uVar1;
  *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
  *(undefined4 *)(puVar8 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476186f4 FUN_1476186f4 body=29 status=ok
// SIG undefined FUN_1476186f4(void)

undefined8 FUN_1476186f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147618712 FUN_147618712 body=29 status=ok
// SIG undefined FUN_147618712(void)

undefined8 FUN_147618712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147618748 FUN_147618748 body=574 status=ok
// SIG undefined FUN_147618748(void)

void FUN_147618748(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_68 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar1 = (uint *)*param_3;
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_90 = (ulonglong)puVar1[0xc];
  local_98 = (ulonglong)puVar1[0xb];
  local_a8 = (ulonglong)puVar1[10];
  local_70 = (ulonglong)puVar1[8];
  local_78 = (ulonglong)puVar1[7];
  local_80 = (ulonglong)puVar1[6];
  local_88 = (ulonglong)puVar1[5];
  lVar4 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar4;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar4;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar4;
  }
  local_a0 = lVar2 + local_a8;
  local_b0 = lVar2 + local_70;
  local_b8 = lVar2 + local_78;
  local_c0 = lVar2 + local_80;
  local_c8 = lVar2 + local_88;
  lVar3 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar4;
  }
  local_118 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_118 = lVar4;
  }
  local_110 = local_c8;
  if (local_88 == 0xffffffff) {
    local_110 = lVar4;
  }
  local_108 = local_c0;
  if (local_80 == 0xffffffff) {
    local_108 = lVar4;
  }
  local_100 = local_b8;
  if (local_78 == 0xffffffff) {
    local_100 = lVar4;
  }
  local_f8 = local_b0;
  if (local_70 == 0xffffffff) {
    local_f8 = lVar4;
  }
  local_f0 = lVar2 + (ulonglong)puVar1[9];
  if ((ulonglong)puVar1[9] == 0xffffffff) {
    local_f0 = lVar4;
  }
  local_e8 = local_a0;
  if (local_a8 == 0xffffffff) {
    local_e8 = lVar4;
  }
  local_e0 = lVar2 + local_98;
  if (local_98 == 0xffffffff) {
    local_e0 = lVar4;
  }
  local_d8 = lVar2 + local_90;
  if (local_90 == 0xffffffff) {
    local_d8 = lVar4;
  }
  FUN_147618988(param_1,local_68,lVar3,&local_60);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147618988 FUN_147618988 body=1099 status=ok
// SIG undefined FUN_147618988(void)

void FUN_147618988(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar7 = *(ushort *)(param_2 + 0xe);
  lVar8 = *param_4;
  if (lVar8 == 0) {
    lVar8 = param_4[1];
    if (lVar8 == 0) {
      lVar8 = param_4[2];
      if (uVar7 != 0 && lVar8 != 0) {
        local_140 = (ulonglong)((uint)uVar7 * 8);
        uVar17 = 0;
        do {
          local_c8 = *(undefined8 *)(param_10 + uVar17);
          local_d0 = *(undefined8 *)(param_9 + uVar17);
          local_c0 = *(undefined8 *)(param_8 + uVar17);
          local_148 = *(ulonglong *)(param_3 + uVar17);
          uVar10 = *(undefined8 *)(lVar8 + uVar17 * 2);
          uVar15 = *(undefined8 *)(param_5 + uVar17);
          uVar3 = *(undefined8 *)(param_6 + uVar17);
          uVar4 = *(undefined8 *)(param_7 + uVar17);
          uVar16 = *(undefined8 *)(param_11 + uVar17);
          uVar5 = *(undefined8 *)(param_12 + uVar17);
          uVar6 = *(undefined8 *)(param_13 + uVar17);
          FUN_144a7484c(&local_d0,&local_b8);
          local_138 = local_b8;
          uStack_130 = uStack_b0;
          local_128 = local_a8;
          uStack_120 = CONCAT44(uStack_9c,uStack_a0);
          uStack_100 = 0;
          uStack_e0 = 0;
          local_118 = uVar15;
          uStack_110 = uVar3;
          local_108 = uVar4;
          local_f8 = uVar16;
          uStack_f0 = (int)uVar5;
          uStack_ec = (int)((ulonglong)uVar5 >> 0x20);
          local_e8 = uVar6;
          FUN_147618ede(uVar10,local_148,&local_138);
          uVar17 = uVar17 + 8;
        } while (local_140 != uVar17);
      }
    }
    else if (uVar7 != 0) {
      uVar17 = 0;
      do {
        uVar18 = (ulonglong)*(ushort *)(lVar8 + uVar17);
        if (uVar18 != 0) {
          lVar9 = *(longlong *)(param_3 + uVar17 * 4);
          local_a8 = *(undefined8 *)(param_8 + uVar17 * 4);
          local_b8 = *(undefined8 *)(param_9 + uVar17 * 4);
          uStack_b0 = *(undefined8 *)(param_10 + uVar17 * 4);
          puVar1 = (undefined4 *)(param_5 + uVar17 * 4);
          uVar11 = *puVar1;
          uVar12 = puVar1[1];
          uVar3 = *(undefined8 *)(param_6 + uVar17 * 4);
          uVar4 = *(undefined8 *)(param_7 + uVar17 * 4);
          puVar1 = (undefined4 *)(param_11 + uVar17 * 4);
          uVar13 = *puVar1;
          uVar14 = puVar1[1];
          uVar5 = *(undefined8 *)(param_12 + uVar17 * 4);
          uVar6 = *(undefined8 *)(param_13 + uVar17 * 4);
          FUN_144a7484c(&local_b8,&local_138);
          puVar1 = (undefined4 *)(lVar9 + uVar18);
          *puVar1 = (undefined4)local_138;
          puVar1[1] = local_138._4_4_;
          puVar1[2] = (undefined4)uStack_130;
          puVar1[3] = uStack_130._4_4_;
          puVar2 = (undefined8 *)(lVar9 + 0x10 + uVar18);
          *puVar2 = local_128;
          puVar2[1] = uStack_120;
          puVar1 = (undefined4 *)(lVar9 + 0x20 + uVar18);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          puVar1[2] = (int)uVar3;
          puVar1[3] = (int)((ulonglong)uVar3 >> 0x20);
          puVar2 = (undefined8 *)(lVar9 + 0x30 + uVar18);
          *puVar2 = uVar4;
          puVar2[1] = 0;
          puVar1 = (undefined4 *)(lVar9 + 0x40 + uVar18);
          *puVar1 = uVar13;
          puVar1[1] = uVar14;
          puVar1[2] = (int)uVar5;
          puVar1[3] = (int)((ulonglong)uVar5 >> 0x20);
          puVar2 = (undefined8 *)(lVar9 + 0x50 + uVar18);
          *puVar2 = uVar6;
          puVar2[1] = 0;
        }
        uVar17 = uVar17 + 2;
      } while ((uint)uVar7 * 2 != uVar17);
    }
  }
  else if (uVar7 != 0) {
    local_148 = (ulonglong)((uint)uVar7 * 2);
    uVar17 = 0;
    do {
      local_f8 = *(undefined8 *)(param_13 + uVar17 * 4);
      uStack_100 = *(undefined8 *)(param_12 + uVar17 * 4);
      local_108 = *(undefined8 *)(param_11 + uVar17 * 4);
      uStack_110 = *(undefined8 *)(param_10 + uVar17 * 4);
      local_118 = *(undefined8 *)(param_9 + uVar17 * 4);
      uStack_120 = *(undefined8 *)(param_8 + uVar17 * 4);
      local_128 = *(undefined8 *)(param_7 + uVar17 * 4);
      uStack_130 = *(undefined8 *)(param_6 + uVar17 * 4);
      local_138 = *(undefined8 *)(param_5 + uVar17 * 4);
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * (ulonglong)*(ushort *)(lVar8 + uVar17)))
                (*(undefined8 *)(param_3 + uVar17 * 4),&local_138);
      uVar17 = uVar17 + 2;
    } while (local_148 != uVar17);
  }
  if ((local_90 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147618ede FUN_147618ede body=246 status=ok
// SIG undefined FUN_147618ede(void)

void FUN_147618ede(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar2 = (longlong *)FUN_1406f9508(param_1,param_2);
  if ((plVar2 == (longlong *)0x0) || (cVar1 = (**(code **)(*plVar2 + 0x80))(plVar2), cVar1 == '\0'))
  {
    lVar3 = FUN_14479d2ce(local_30);
    if (lVar3 == 0) {
      lVar3 = FUN_1406f977c(local_60);
      if ((lVar3 != 0) &&
         (puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + local_38), puVar4 != (undefined8 *)0x0))
      {
        for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = *param_3;
          param_3 = param_3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
    }
    else {
      FUN_147618fd6(param_2,lVar3,param_3);
    }
  }
  else {
    (**(code **)(*plVar2 + 0x98))(plVar2,param_2,param_3);
  }
  lVar3 = FUN_14479d2ce(local_28);
  if (lVar3 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar3,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147618fd6 FUN_147618fd6 body=402 status=ok
// SIG undefined FUN_147618fd6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147618fd6(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147619075;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14761908c;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x60) goto LAB_147619127;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476190dd;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476190f6;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 * 0x60);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147619123;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_147619127:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_147619151;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14761916e FUN_14761916e body=546 status=ok
// SIG undefined FUN_14761916e(void)

int * FUN_14761916e(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*param_1 == -1) || (cVar4 = FUN_140dac69c(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_1476191b4;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x68,0x10);
  FUN_1476193e4(plVar5,param_1,param_7,param_8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x44);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x58);
  FUN_140dadb3c(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476194dc;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x14;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_14761931d;
    }
  }
  else {
LAB_14761931d:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_1476191b4:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147619392 FUN_147619392 body=80 status=ok
// SIG undefined FUN_147619392(void)

void FUN_147619392(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1476194f4(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476193e4 FUN_1476193e4 body=185 status=ok
// SIG undefined FUN_1476193e4(void)

undefined8 *
FUN_1476193e4(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a4c6120;
  param_1[2] = &PTR_FUN_14a4c6138;
  param_3 = (longlong *)*param_3;
  uVar8 = *param_4;
  uVar9 = param_4[1];
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48._0_4_ = (undefined4)uVar8;
  local_48._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar9;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(param_1 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_48._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_40._4_4_;
  local_48 = uVar8;
  uStack_40 = uVar9;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3,&local_38);
    param_1[4] = local_38;
    param_1[5] = uStack_30;
  }
  param_1[0xc] = *(undefined8 *)(param_2 + 8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 10) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0xb) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476194a0 FUN_1476194a0 body=29 status=ok
// SIG undefined FUN_1476194a0(void)

undefined8 FUN_1476194a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476194be FUN_1476194be body=29 status=ok
// SIG undefined FUN_1476194be(void)

undefined8 FUN_1476194be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476194f4 FUN_1476194f4 body=574 status=ok
// SIG undefined FUN_1476194f4(void)

void FUN_1476194f4(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_68 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar1 = (uint *)*param_3;
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_90 = (ulonglong)puVar1[0xc];
  local_98 = (ulonglong)puVar1[0xb];
  local_a8 = (ulonglong)puVar1[10];
  local_70 = (ulonglong)puVar1[8];
  local_78 = (ulonglong)puVar1[7];
  local_80 = (ulonglong)puVar1[6];
  local_88 = (ulonglong)puVar1[5];
  lVar4 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar4;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar4;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar4;
  }
  local_a0 = lVar2 + local_a8;
  local_b0 = lVar2 + local_70;
  local_b8 = lVar2 + local_78;
  local_c0 = lVar2 + local_80;
  local_c8 = lVar2 + local_88;
  lVar3 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar4;
  }
  local_118 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_118 = lVar4;
  }
  local_110 = local_c8;
  if (local_88 == 0xffffffff) {
    local_110 = lVar4;
  }
  local_108 = local_c0;
  if (local_80 == 0xffffffff) {
    local_108 = lVar4;
  }
  local_100 = local_b8;
  if (local_78 == 0xffffffff) {
    local_100 = lVar4;
  }
  local_f8 = local_b0;
  if (local_70 == 0xffffffff) {
    local_f8 = lVar4;
  }
  local_f0 = lVar2 + (ulonglong)puVar1[9];
  if ((ulonglong)puVar1[9] == 0xffffffff) {
    local_f0 = lVar4;
  }
  local_e8 = local_a0;
  if (local_a8 == 0xffffffff) {
    local_e8 = lVar4;
  }
  local_e0 = lVar2 + local_98;
  if (local_98 == 0xffffffff) {
    local_e0 = lVar4;
  }
  local_d8 = lVar2 + local_90;
  if (local_90 == 0xffffffff) {
    local_d8 = lVar4;
  }
  FUN_147619734(param_1,local_68,lVar3,&local_60);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147619734 FUN_147619734 body=262 status=ok
// SIG undefined FUN_147619734(void)

void FUN_147619734(void)

{
  longlong *in_R9;
  
  if (*in_R9 == 0) {
    if (in_R9[1] == 0) {
      if (in_R9[2] != 0) {
        FUN_147619fbc();
      }
    }
    else {
      FUN_147619bb0();
    }
    return;
  }
  FUN_14761983a();
  return;
}



// FUNCTION 14761983a FUN_14761983a body=884 status=ok
// SIG undefined FUN_14761983a(void)

void FUN_14761983a(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_188;
  ulonglong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined4 *local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8 [10];
  undefined8 local_a8 [9];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_188 = param_1;
  local_140 = param_3;
  if ((ulonglong)*(ushort *)(param_2 + 0xe) != 0) {
    local_158 = (undefined4 *)(param_1 + 0x18);
    uVar6 = 0;
    local_160 = param_8;
    local_168 = param_7;
    local_170 = param_6;
    local_178 = param_5;
    lVar8 = param_11;
    lVar11 = param_12;
    lVar13 = param_9;
    lVar14 = param_13;
    lVar15 = param_10;
    local_150 = (ulonglong)*(ushort *)(param_2 + 0xe);
    local_148 = param_4;
    do {
      lVar5 = local_140;
      local_130 = (ulonglong)*(ushort *)(local_148 + uVar6 * 2);
      local_f8[6] = 0;
      local_f8[7] = 0;
      local_f8[4] = 0;
      local_f8[5] = 0;
      local_f8[2] = 0;
      local_f8[3] = 0;
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_f8[8] = 0;
      local_180 = uVar6;
      (**(code **)(*(longlong *)(local_188 + 8) + 0x18 +
                  (longlong)*(int *)(local_188 + 0x14) * local_130))
                (local_a8,*(undefined8 *)(local_140 + uVar6 * 8));
      lVar4 = local_160;
      lVar3 = local_168;
      lVar2 = local_170;
      lVar1 = local_178;
      local_198 = lVar14;
      if (param_13 == 0) {
        local_198 = param_13;
      }
      local_1a0 = lVar11;
      if (param_12 == 0) {
        local_1a0 = param_12;
      }
      local_1a8 = lVar8;
      if (param_11 == 0) {
        local_1a8 = param_11;
      }
      local_1b0 = lVar15;
      if (param_10 == 0) {
        local_1b0 = param_10;
      }
      local_1b8 = lVar13;
      if (param_9 == 0) {
        local_1b8 = param_9;
      }
      local_1c0 = local_160;
      if (param_8 == 0) {
        local_1c0 = param_8;
      }
      local_1c8 = local_168;
      if (param_7 == 0) {
        local_1c8 = param_7;
      }
      lVar12 = local_170;
      if (param_6 == 0) {
        lVar12 = param_6;
      }
      puVar9 = local_a8;
      puVar10 = local_f8;
      for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      lVar7 = local_178;
      if (param_5 == 0) {
        lVar7 = param_5;
      }
      local_108 = *local_158;
      uStack_104 = local_158[1];
      uStack_100 = local_158[2];
      uStack_fc = local_158[3];
      local_138 = lVar13;
      local_128 = lVar15;
      local_120 = lVar8;
      local_118 = lVar11;
      local_110 = lVar14;
      FUN_140911be0(&local_108,local_f8,lVar7,lVar12);
      (**(code **)(*(longlong *)(local_188 + 8) + 0x20 +
                  (longlong)*(int *)(local_188 + 0x14) * local_130))
                (*(undefined8 *)(lVar5 + local_180 * 8),local_f8);
      uVar6 = local_180 + 1;
      local_178 = lVar1 + 8;
      local_170 = lVar2 + 8;
      local_168 = lVar3 + 8;
      local_160 = lVar4 + 8;
      lVar13 = local_138 + 8;
      lVar15 = local_128 + 8;
      lVar8 = local_120 + 8;
      lVar11 = local_118 + 8;
      lVar14 = local_110 + 8;
    } while (local_150 != uVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147619bb0 FUN_147619bb0 body=1035 status=ok
// SIG undefined FUN_147619bb0(void)

void FUN_147619bb0(undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined4 *local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  ulonglong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_190 = param_1;
  if ((ulonglong)*(ushort *)(param_2 + 0xe) != 0) {
    local_190 = param_1 + 6;
    uVar21 = 0;
    local_170 = param_8;
    local_178 = param_7;
    local_180 = param_6;
    local_188 = param_5;
    lVar16 = param_10;
    lVar17 = param_11;
    lVar18 = param_13;
    lVar22 = param_12;
    lVar23 = param_9;
    local_168 = (ulonglong)*(ushort *)(param_2 + 0xe);
    local_160 = param_3;
    local_158 = param_4;
    do {
      uVar15 = (ulonglong)*(ushort *)(local_158 + uVar21 * 2);
      lVar19 = *(longlong *)(param_3 + uVar21 * 8);
      puVar2 = (undefined8 *)(lVar19 + 0x20 + uVar15);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      uVar3 = *(undefined8 *)(lVar19 + 0x30 + uVar15);
      local_118 = *(undefined8 *)(lVar19 + uVar15);
      uStack_110 = ((undefined8 *)(lVar19 + uVar15))[1];
      puVar2 = (undefined8 *)(lVar19 + 0x10 + uVar15);
      local_108 = *puVar2;
      uStack_100 = puVar2[1];
      FUN_1448052ee(&local_118,&local_b8);
      param_3 = local_160;
      lVar10 = local_178;
      lVar9 = local_180;
      lVar8 = local_188;
      local_198 = lVar18;
      if (param_13 == 0) {
        local_198 = param_13;
      }
      local_1a0 = lVar22;
      if (param_12 == 0) {
        local_1a0 = param_12;
      }
      local_1a8 = lVar17;
      if (param_11 == 0) {
        local_1a8 = param_11;
      }
      local_1b0 = lVar16;
      if (param_10 == 0) {
        local_1b0 = param_10;
      }
      local_1b8 = lVar23;
      if (param_9 == 0) {
        local_1b8 = param_9;
      }
      local_1c0 = local_170;
      if (param_8 == 0) {
        local_1c0 = param_8;
      }
      local_1c8 = local_178;
      if (param_7 == 0) {
        local_1c8 = param_7;
      }
      lVar20 = local_180;
      if (param_6 == 0) {
        lVar20 = param_6;
      }
      puVar2 = (undefined8 *)(lVar19 + 0x40 + uVar15);
      local_e8 = *puVar2;
      uStack_e0 = puVar2[1];
      local_d8 = *(undefined8 *)(lVar19 + 0x50 + uVar15);
      uStack_100 = CONCAT44(uStack_a4,local_a8);
      local_f8 = local_b8;
      uStack_f4 = uStack_b4;
      uStack_f0 = uStack_b0;
      uStack_ec = uStack_ac;
      lVar19 = local_188;
      if (param_5 == 0) {
        lVar19 = param_5;
      }
      local_128 = *local_190;
      uStack_124 = local_190[1];
      uStack_120 = local_190[2];
      uStack_11c = local_190[3];
      local_150 = lVar23;
      local_148 = lVar16;
      local_140 = lVar17;
      local_138 = lVar22;
      local_130 = lVar18;
      local_118 = uVar4;
      uStack_110 = uVar5;
      local_108 = uVar3;
      FUN_140911be0(&local_128,&local_118,lVar19,lVar20);
      uVar4 = local_d8;
      uVar3 = local_108;
      lVar16 = *(longlong *)(param_3 + uVar21 * 8);
      uVar13 = (undefined4)local_e8;
      uVar14 = local_e8._4_4_;
      uVar11 = (undefined4)local_118;
      uVar12 = local_118._4_4_;
      uVar25 = (undefined4)uStack_110;
      uVar6 = (ulonglong)uStack_110 >> 0x20;
      uVar24 = (undefined4)uStack_e0;
      uVar7 = (ulonglong)uStack_e0 >> 0x20;
      local_d0 = local_f8;
      uStack_cc = uStack_f4;
      uStack_c8 = uStack_f0;
      uStack_c4 = uStack_ec;
      local_c0 = uStack_100;
      FUN_144a7484c(&local_d0,&local_b8);
      puVar1 = (undefined4 *)(lVar16 + uVar15);
      *puVar1 = local_b8;
      puVar1[1] = uStack_b4;
      puVar1[2] = uStack_b0;
      puVar1[3] = uStack_ac;
      puVar1 = (undefined4 *)(lVar16 + 0x10 + uVar15);
      *puVar1 = local_a8;
      puVar1[1] = uStack_a4;
      puVar1[2] = uStack_a0;
      puVar1[3] = uStack_9c;
      puVar1 = (undefined4 *)(lVar16 + 0x20 + uVar15);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      puVar1[2] = uVar25;
      puVar1[3] = (int)uVar6;
      puVar2 = (undefined8 *)(lVar16 + 0x30 + uVar15);
      *puVar2 = uVar3;
      puVar2[1] = 0;
      puVar1 = (undefined4 *)(lVar16 + 0x40 + uVar15);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      puVar1[2] = uVar24;
      puVar1[3] = (int)uVar7;
      puVar2 = (undefined8 *)(lVar16 + 0x50 + uVar15);
      *puVar2 = uVar4;
      puVar2[1] = 0;
      uVar21 = uVar21 + 1;
      local_188 = lVar8 + 8;
      local_180 = lVar9 + 8;
      local_178 = lVar10 + 8;
      local_170 = local_170 + 8;
      lVar23 = local_150 + 8;
      lVar16 = local_148 + 8;
      lVar17 = local_140 + 8;
      lVar22 = local_138 + 8;
      lVar18 = local_130 + 8;
    } while (local_168 != uVar21);
  }
  if ((local_90 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147619fbc FUN_147619fbc body=825 status=ok
// SIG undefined FUN_147619fbc(void)

void FUN_147619fbc(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (*(ushort *)(param_2 + 0xe) != 0) {
    local_1a8 = (ulonglong)*(ushort *)(param_2 + 0xe) << 3;
    lVar13 = 0;
    local_1a0 = param_4;
    do {
      uVar1 = *(undefined8 *)(local_1a0 + lVar13 * 2);
      FUN_14761a2f6(uVar1,&local_138,*(undefined8 *)(param_3 + lVar13));
      uVar10 = local_108;
      uVar2 = CONCAT44(uStack_114,local_118);
      uVar3 = CONCAT44(uStack_10c,uStack_110);
      local_188 = CONCAT44(uStack_134,local_138);
      uStack_180 = CONCAT44(uStack_12c,uStack_130);
      local_178 = CONCAT44(uStack_124,local_128);
      uStack_170 = CONCAT44(uStack_11c,uStack_120);
      FUN_1448052ee(&local_188,&local_b8);
      local_1b8 = param_13 + lVar13;
      if (param_13 == 0) {
        local_1b8 = 0;
      }
      local_1c0 = param_12 + lVar13;
      if (param_12 == 0) {
        local_1c0 = 0;
      }
      local_1c8 = param_11 + lVar13;
      if (param_11 == 0) {
        local_1c8 = 0;
      }
      local_1d0 = param_10 + lVar13;
      if (param_10 == 0) {
        local_1d0 = 0;
      }
      local_1d8 = param_9 + lVar13;
      if (param_9 == 0) {
        local_1d8 = 0;
      }
      local_1e0 = param_8 + lVar13;
      if (param_8 == 0) {
        local_1e0 = 0;
      }
      local_1e8 = param_7 + lVar13;
      if (param_7 == 0) {
        local_1e8 = 0;
      }
      lVar12 = param_6 + lVar13;
      if (param_6 == 0) {
        lVar12 = 0;
      }
      lVar11 = param_5 + lVar13;
      local_158 = CONCAT44(uStack_f4,local_f8);
      uStack_150 = CONCAT44(uStack_ec,uStack_f0);
      uStack_170 = CONCAT44(uStack_a4,local_a8);
      local_178 = uVar10;
      local_168 = local_b8;
      uStack_164 = uStack_b4;
      uStack_160 = uStack_b0;
      uStack_15c = uStack_ac;
      local_148 = local_e8;
      if (param_5 == 0) {
        lVar11 = 0;
      }
      local_198 = *(undefined4 *)(param_1 + 0x18);
      uStack_194 = *(undefined4 *)(param_1 + 0x1c);
      uStack_190 = *(undefined4 *)(param_1 + 0x20);
      uStack_18c = *(undefined4 *)(param_1 + 0x24);
      local_188 = uVar2;
      uStack_180 = uVar3;
      FUN_140911be0(&local_198,&local_188,lVar11,lVar12);
      uVar10 = local_148;
      uVar3 = local_178;
      uVar2 = *(undefined8 *)(param_3 + lVar13);
      uVar8 = (undefined4)local_158;
      uVar9 = local_158._4_4_;
      uVar6 = (undefined4)local_188;
      uVar7 = local_188._4_4_;
      uVar15 = (undefined4)uStack_180;
      uVar4 = (ulonglong)uStack_180 >> 0x20;
      uVar14 = (undefined4)uStack_150;
      uVar5 = (ulonglong)uStack_150 >> 0x20;
      local_d0 = local_168;
      uStack_cc = uStack_164;
      uStack_c8 = uStack_160;
      uStack_c4 = uStack_15c;
      local_c0 = uStack_170;
      FUN_144a7484c(&local_d0,&local_b8);
      local_138 = local_b8;
      uStack_134 = uStack_b4;
      uStack_130 = uStack_b0;
      uStack_12c = uStack_ac;
      local_128 = local_a8;
      uStack_124 = uStack_a4;
      uStack_120 = uStack_a0;
      uStack_11c = uStack_9c;
      local_118 = uVar6;
      uStack_114 = uVar7;
      local_108 = uVar3;
      uStack_100 = 0;
      local_f8 = uVar8;
      uStack_f4 = uVar9;
      local_e8 = uVar10;
      uStack_e0 = 0;
      uStack_110 = uVar15;
      uStack_10c = (int)uVar4;
      uStack_f0 = uVar14;
      uStack_ec = (int)uVar5;
      FUN_147618ede(uVar1,uVar2,&local_138);
      lVar13 = lVar13 + 8;
    } while (local_1a8 != lVar13);
  }
  if ((local_90 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761a2f6 FUN_14761a2f6 body=172 status=ok
// SIG undefined FUN_14761a2f6(void)

undefined8 * FUN_14761a2f6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  FUN_1406f9c46(0,local_60);
  lVar1 = FUN_1406f977c(local_60);
  if ((lVar1 != 0) &&
     (puVar2 = (undefined8 *)(*(int *)(lVar1 + 0x44) + local_38), puVar2 != (undefined8 *)0x0)) {
    puVar3 = param_2;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761a3a4 FUN_14761a3a4 body=143 status=ok
// SIG undefined FUN_14761a3a4(void)

undefined4 * FUN_14761a3a4(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 10,param_3 + 10);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  FUN_1400abb7c(param_1 + 0x22,param_3 + 0x22);
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1400abb7c(param_1 + 0x2c,param_3 + 0x2c);
  *(longlong *)(param_1 + 0x36) = param_2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 14761a434 FUN_14761a434 body=2030 status=ok
// SIG undefined FUN_14761a434(void)

void FUN_14761a434(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  short *local_288;
  longlong local_280;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_190;
  undefined8 *local_188;
  int local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 *local_128;
  int local_120;
  undefined8 local_118;
  undefined8 *local_110;
  int local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[0xc]) goto LAB_14761a48a;
      puVar10 = puVar10 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_14761a48a:
  local_254 = *(int *)(lVar1 + 0x14);
  local_280 = param_3;
  local_1f0 = param_1;
  if (local_254 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar13 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar13 + 0x1e) == param_4[0xb]) goto LAB_14761a4c6;
      puVar13 = puVar13 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar13 = (undefined8 *)0x0;
LAB_14761a4c6:
  local_200 = *puVar10;
  local_258 = *(int *)(lVar1 + 0x14);
  if (local_258 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar13 + 1));
  }
  LOCK();
  *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == param_4[10]) goto LAB_14761a50d;
      puVar11 = puVar11 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_14761a50d:
  local_210 = *puVar13;
  local_25c = *(int *)(lVar1 + 0x14);
  if (local_25c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar17 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar17 + 0x1e) == param_4[9]) goto LAB_14761a555;
      puVar17 = puVar17 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar17 = (undefined8 *)0x0;
LAB_14761a555:
  local_218 = *puVar11;
  local_260 = *(int *)(lVar1 + 0x14);
  if (local_260 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar17 + 1));
  }
  LOCK();
  *(int *)(puVar17 + 3) = *(int *)(puVar17 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar15 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar15 + 0x1e) == param_4[8]) goto LAB_14761a59f;
      puVar15 = puVar15 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar15 = (undefined8 *)0x0;
LAB_14761a59f:
  local_220 = *puVar17;
  local_264 = *(int *)(lVar1 + 0x14);
  if (local_264 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar15 + 1));
  }
  LOCK();
  *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar12 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar12 + 0x1e) == param_4[7]) goto LAB_14761a5f1;
      puVar12 = puVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar12 = (undefined8 *)0x0;
LAB_14761a5f1:
  local_228 = *puVar15;
  local_268 = *(int *)(lVar1 + 0x14);
  local_1f8 = puVar10;
  if (local_268 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
  }
  LOCK();
  *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[6]) goto LAB_14761a639;
      puVar10 = puVar10 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_14761a639:
  local_230 = *puVar12;
  local_26c = *(int *)(lVar1 + 0x14);
  if (local_26c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar14 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar14 + 0x1e) == param_4[5]) goto LAB_14761a688;
      puVar14 = puVar14 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar14 = (undefined8 *)0x0;
LAB_14761a688:
  local_240 = *puVar10;
  local_270 = *(int *)(lVar1 + 0x14);
  local_208 = puVar13;
  if (local_270 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar14 + 1));
  }
  LOCK();
  *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar13 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar13 + 0x1e) == param_4[4]) goto LAB_14761a6d5;
      puVar13 = puVar13 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar13 = (undefined8 *)0x0;
LAB_14761a6d5:
  local_248 = *puVar14;
  local_274 = *(int *)(lVar1 + 0x14);
  local_288 = param_4;
  local_238 = param_2;
  if (local_274 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar13 + 1));
  }
  plVar2 = local_238;
  LOCK();
  *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
  UNLOCK();
  local_250 = *puVar13;
  local_4c = local_288[3];
  local_50 = *(undefined4 *)(local_288 + 1);
  FUN_1410bd8a8(&local_1d0,
                *(undefined8 *)(*(longlong *)(*local_238 + 0x60) + (longlong)(int)local_238[1] * 8),
                &local_50,local_280);
  lVar1 = *(longlong *)(*(longlong *)(*plVar2 + 0x60) + (longlong)(int)plVar2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar16 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar16 + 0x1e) == *local_288) goto LAB_14761a777;
      puVar16 = puVar16 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar16 = (undefined8 *)0x0;
LAB_14761a777:
  local_180 = *(int *)(lVar1 + 0x14);
  if (*(int *)(lVar1 + 0x14) == 1) {
    local_288 = (short *)CONCAT44(local_288._4_4_,1);
    AcquireSRWLockShared((PSRWLOCK)(puVar16 + 1));
    local_180 = (int)local_288;
  }
  lVar1 = local_1c0;
  uVar8 = local_200;
  uVar7 = local_210;
  uVar6 = local_218;
  uVar5 = local_220;
  uVar4 = local_228;
  uVar3 = local_230;
  LOCK();
  *(int *)(puVar16 + 3) = *(int *)(puVar16 + 3) + 1;
  UNLOCK();
  local_178 = *puVar16;
  local_170 = local_1d0;
  local_168 = local_1c8;
  local_1d0 = 0;
  local_160 = local_1c0;
  local_1c0 = 0;
  local_158 = local_1b8;
  local_150 = local_1b0;
  local_1b8 = 0;
  local_288 = (short *)local_1a8;
  local_148 = local_1a8;
  local_1a8 = 0;
  local_140 = local_1a0;
  local_138 = local_198;
  local_1a0 = 0;
  local_280 = local_190;
  local_130 = local_190;
  local_120 = local_274;
  local_118 = local_250;
  local_108 = local_270;
  local_100 = local_248;
  local_f0 = local_26c;
  local_e8 = local_240;
  local_d8 = local_268;
  local_d0 = local_230;
  local_c0 = local_264;
  local_b8 = local_228;
  local_a8 = local_260;
  local_a0 = local_220;
  local_90 = local_25c;
  local_88 = local_218;
  local_80 = local_208;
  local_78 = local_258;
  local_70 = local_210;
  local_68 = local_1f8;
  local_60 = local_254;
  local_190 = 0;
  local_58 = local_200;
  local_188 = puVar16;
  local_128 = puVar13;
  local_110 = puVar14;
  local_f8 = puVar10;
  local_e0 = puVar12;
  local_c8 = puVar15;
  local_b0 = puVar17;
  local_98 = puVar11;
  FUN_1432f59b8();
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0;
  if (lVar1 != 0) {
    local_1e8 = lVar1;
  }
  if (local_288 != (short *)0x0) {
    lStack_1e0 = (longlong)local_288;
  }
  if (local_280 != 0) {
    local_1d8 = local_280;
  }
  local_298 = uVar8;
  local_2a0 = uVar7;
  local_2a8 = uVar6;
  local_2b0 = uVar5;
  local_2b8 = uVar4;
  local_2c0 = uVar3;
  local_2c8 = local_240;
  local_2d0 = local_248;
  local_2d8 = local_250;
  FUN_147618988(local_1f0,
                *(undefined8 *)(*(longlong *)(*local_238 + 0x60) + (longlong)(int)local_238[1] * 8),
                local_178,&local_1e8);
  FUN_147604854(&local_188);
  if ((local_48 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14761ac24 FUN_14761ac24 body=118 status=ok
// SIG undefined FUN_14761ac24(void)

longlong FUN_14761ac24(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14761a3a4();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xe8) = param_4;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xf0) = local_30;
    *(undefined4 *)(param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf8) = uStack_28;
    *(undefined4 *)(param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761ac9c FUN_14761ac9c body=143 status=ok
// SIG undefined FUN_14761ac9c(void)

undefined4 * FUN_14761ac9c(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 10,param_3 + 10);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  FUN_1400abb7c(param_1 + 0x22,param_3 + 0x22);
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1400abb7c(param_1 + 0x2c,param_3 + 0x2c);
  *(longlong *)(param_1 + 0x36) = param_2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 14761ad2c FUN_14761ad2c body=1889 status=ok
// SIG undefined FUN_14761ad2c(void)

void FUN_14761ad2c(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong local_2c8;
  longlong lStack_2c0;
  longlong local_2b8;
  undefined8 local_2a8;
  undefined4 local_2a0;
  longlong local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  longlong local_280;
  undefined8 local_278;
  undefined4 local_270;
  longlong local_268;
  longlong local_260;
  int local_258;
  undefined8 local_250;
  longlong local_248;
  int local_240;
  undefined8 local_238;
  longlong local_230;
  int local_228;
  undefined8 local_220;
  longlong local_218;
  int local_210;
  undefined8 local_208;
  longlong local_200;
  int local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  int local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  int local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  int local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  int local_198;
  undefined8 local_190;
  undefined8 *local_188;
  int local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  longlong local_128;
  int local_120;
  undefined8 local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  longlong local_f8;
  int local_f0;
  undefined8 local_e8;
  longlong local_e0;
  int local_d8;
  undefined8 local_d0;
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  longlong local_98;
  int local_90;
  undefined8 local_88;
  longlong local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1a0,param_4[0xc]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1b8,param_4[0xb]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1d0,param_4[10]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1e8,param_4[9]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_200,param_4[8]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_218,param_4[7]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_230,param_4[6]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_248,param_4[5]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_260,param_4[4]);
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_2a8,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_4) goto LAB_14761aeda;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_14761aeda:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_178 = *puVar4;
  local_170 = local_2a8;
  local_168 = local_2a0;
  local_2a8 = 0;
  local_160 = local_298;
  uStack_158 = uStack_290;
  local_298 = 0;
  uStack_290 = 0;
  local_150 = local_288;
  local_148 = local_280;
  local_280 = 0;
  local_140 = local_278;
  local_138 = local_270;
  local_278 = 0;
  local_130 = local_268;
  local_268 = 0;
  local_128 = local_260;
  local_120 = local_258;
  local_260 = 0;
  local_118 = local_250;
  local_250 = 0;
  local_110 = local_248;
  local_108 = local_240;
  local_248 = 0;
  local_100 = local_238;
  local_238 = 0;
  local_f8 = local_230;
  local_f0 = local_228;
  local_230 = 0;
  local_e8 = local_220;
  local_220 = 0;
  local_e0 = local_218;
  local_d8 = local_210;
  local_218 = 0;
  local_d0 = local_208;
  local_208 = 0;
  local_c8 = local_200;
  local_c0 = local_1f8;
  local_200 = 0;
  local_b8 = local_1f0;
  local_1f0 = 0;
  local_b0 = local_1e8;
  local_a8 = local_1e0;
  local_1e8 = 0;
  local_a0 = local_1d8;
  local_1d8 = 0;
  local_98 = local_1d0;
  local_90 = local_1c8;
  local_1d0 = 0;
  local_88 = local_1c0;
  local_1c0 = 0;
  local_80 = local_1b8;
  local_78 = local_1b0;
  local_1b8 = 0;
  local_70 = local_1a8;
  local_1a8 = 0;
  local_68 = local_1a0;
  local_60 = local_198;
  local_1a0 = 0;
  local_58 = local_190;
  local_190 = 0;
  local_188 = puVar4;
  local_180 = iVar1;
  FUN_1432f59b8();
  if (local_260 != 0) {
    LOCK();
    *(int *)(local_260 + 0x18) = *(int *)(local_260 + 0x18) + -1;
    UNLOCK();
    if (local_258 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_260 + 8));
    }
  }
  if (local_248 != 0) {
    LOCK();
    *(int *)(local_248 + 0x18) = *(int *)(local_248 + 0x18) + -1;
    UNLOCK();
    if (local_240 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_248 + 8));
    }
  }
  if (local_230 != 0) {
    LOCK();
    *(int *)(local_230 + 0x18) = *(int *)(local_230 + 0x18) + -1;
    UNLOCK();
    if (local_228 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_230 + 8));
    }
  }
  if (local_218 != 0) {
    LOCK();
    *(int *)(local_218 + 0x18) = *(int *)(local_218 + 0x18) + -1;
    UNLOCK();
    if (local_210 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_218 + 8));
    }
  }
  if (local_200 != 0) {
    LOCK();
    *(int *)(local_200 + 0x18) = *(int *)(local_200 + 0x18) + -1;
    UNLOCK();
    if (local_1f8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_200 + 8));
    }
  }
  if (local_1e8 != 0) {
    LOCK();
    *(int *)(local_1e8 + 0x18) = *(int *)(local_1e8 + 0x18) + -1;
    UNLOCK();
    if (local_1e0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1e8 + 8));
    }
  }
  if (local_1d0 != 0) {
    LOCK();
    *(int *)(local_1d0 + 0x18) = *(int *)(local_1d0 + 0x18) + -1;
    UNLOCK();
    if (local_1c8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1d0 + 8));
    }
  }
  if (local_1b8 != 0) {
    LOCK();
    *(int *)(local_1b8 + 0x18) = *(int *)(local_1b8 + 0x18) + -1;
    UNLOCK();
    if (local_1b0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1b8 + 8));
    }
  }
  if (local_1a0 != 0) {
    LOCK();
    *(int *)(local_1a0 + 0x18) = *(int *)(local_1a0 + 0x18) + -1;
    UNLOCK();
    if (local_198 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1a0 + 8));
    }
  }
  local_2c8 = 0;
  lStack_2c0 = 0;
  local_2b8 = 0;
  if (local_160 != 0) {
    local_2c8 = local_160;
  }
  if (local_148 != 0) {
    lStack_2c0 = local_148;
  }
  if (local_130 != 0) {
    local_2b8 = local_130;
  }
  local_2d8 = local_58;
  local_2e0 = local_70;
  local_2e8 = local_88;
  local_2f0 = local_a0;
  local_2f8 = local_b8;
  local_300 = local_d0;
  local_308 = local_e8;
  local_310 = local_100;
  local_318 = local_118;
  FUN_147619734(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_178,
                &local_2c8);
  FUN_14760548c(&local_188);
  if ((local_48 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14761b48e FUN_14761b48e body=146 status=ok
// SIG undefined FUN_14761b48e(void)

longlong FUN_14761b48e(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14761ac9c();
  param_4 = (longlong *)*param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(longlong **)(param_1 + 0xe8) = param_4;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x100) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x104) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x108) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x10c) = uStack_40._4_4_;
  local_48 = uVar1;
  uStack_40 = uVar2;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xf0) = local_30;
    *(undefined4 *)(param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf8) = uStack_28;
    *(undefined4 *)(param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761b522 FUN_14761b522 body=179 status=ok
// SIG undefined FUN_14761b522(void)

undefined8 * FUN_14761b522(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_14761b57c;
    }
  }
  uVar6 = 0;
LAB_14761b57c:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14761b5d6 FUN_14761b5d6 body=184 status=ok
// SIG undefined FUN_14761b5d6(void)

void FUN_14761b5d6(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761b690 FUN_14761b690 body=241 status=ok
// SIG undefined FUN_14761b690(void)

undefined8 * FUN_14761b690(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c6180;
  param_1[0x1b] = &PTR_FUN_14a4c61c8;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761b782 FUN_14761b782 body=9 status=ok
// SIG undefined FUN_14761b782(void)

void FUN_14761b782(longlong param_1)

{
  FUN_14761c46a(param_1 + 0x10);
  return;
}



// FUNCTION 14761b78c FUN_14761b78c body=29 status=ok
// SIG undefined FUN_14761b78c(void)

undefined8 FUN_14761b78c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761b7aa FUN_14761b7aa body=38 status=ok
// SIG undefined FUN_14761b7aa(void)

undefined8 FUN_14761b7aa(undefined8 param_1,int param_2)

{
  FUN_14761c46a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761b7f6 FUN_14761b7f6 body=82 status=ok
// SIG undefined FUN_14761b7f6(void)

void FUN_14761b7f6(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_14761c518();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761b84a FUN_14761b84a body=1056 status=ok
// SIG undefined FUN_14761b84a(void)

ulonglong FUN_14761b84a(longlong param_1,int param_2,char param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong unaff_RSI;
  undefined7 uVar10;
  undefined8 *puVar9;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8 [9];
  undefined1 local_70 [16];
  byte local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = *(longlong **)(param_1 + 0xb8);
  if (plVar3 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plVar3 + 8))
                      (plVar3,(longlong)param_2 * 0x78 + *(longlong *)(param_1 + 0x68));
    unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),3);
    if (cVar5 == '\0') goto LAB_14761b8c6;
  }
  uVar10 = (undefined7)(unaff_RSI >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      lVar16 = *(longlong *)(param_1 + 0x68);
      lVar17 = (longlong)param_2 * 0x78;
      puVar7 = (undefined4 *)(lVar16 + lVar17);
      local_c8 = *puVar7;
      uStack_c4 = puVar7[1];
      uStack_c0 = puVar7[2];
      uStack_bc = puVar7[3];
      puVar9 = (undefined8 *)(puVar7 + 4);
      puVar11 = local_b8;
      for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      lVar16 = lVar16 + 0x58 + lVar17;
      local_60 = *(byte *)(lVar16 + 0x10);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,lVar16);
      local_58 = *(byte *)(lVar16 + 0x18);
      FUN_1410d7556(param_1 + 0x18,&local_c8);
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar17 + 0x68)])();
      FUN_14761c756(param_1 + 0x68);
      uVar2 = *(uint *)(param_1 + 0xa8);
      uVar8 = 0;
      if (0 < (int)uVar2) {
        uVar12 = (ulonglong)uVar2;
        uVar14 = uVar2;
        do {
          uVar12 = uVar12 >> 1;
          uVar15 = (uint)uVar12 + (int)uVar8;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar15 * 0x68) < param_2) {
            uVar8 = (ulonglong)(uVar15 + (uVar14 & 1));
          }
          bVar4 = 1 < uVar14;
          uVar14 = (uint)uVar12;
        } while (bVar4);
      }
      if (((int)uVar8 < (int)uVar2) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x68) <= param_2)) {
        FUN_147603588(param_1 + 0xa0,uVar8,1);
      }
joined_r0x00014761bba0:
      if ((local_58 & 1) != 0) {
        FUN_14761c5a2(&local_c8,local_b8);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
      unaff_RSI = 0;
      goto LAB_14761b8c6;
    }
    unaff_RSI = CONCAT71(uVar10,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x70 + (longlong)param_2 * 0x78) & 1) == 0)
    goto LAB_14761b8c6;
    puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xa8);
    lVar16 = *(longlong *)(param_1 + 0xa0);
    uVar14 = 0;
    if (0 < (int)uVar2) {
      uVar8 = (ulonglong)uVar2;
      uVar15 = uVar2;
      do {
        uVar8 = uVar8 >> 1;
        uVar13 = (uint)uVar8 + uVar14;
        if (*(int *)(lVar16 + (ulonglong)uVar13 * 0x68) < param_2) {
          uVar14 = uVar13 + (uVar15 & 1);
        }
        bVar4 = 1 < uVar15;
        uVar15 = (uint)uVar8;
      } while (bVar4);
    }
    if ((((int)uVar14 < (int)uVar2) && (*(int *)(lVar16 + (ulonglong)uVar14 * 0x68) <= param_2)) &&
       (lVar16 + (ulonglong)uVar14 * 0x68 != -8)) {
      FUN_14761c5a2((longlong)param_2 * 0x78 + *(longlong *)(param_1 + 0x68));
      uVar2 = *(uint *)(param_1 + 0xa8);
      uVar8 = 0;
      if (0 < (int)uVar2) {
        uVar12 = (ulonglong)uVar2;
        uVar14 = uVar2;
        do {
          uVar12 = uVar12 >> 1;
          uVar15 = (uint)uVar12 + (int)uVar8;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar15 * 0x68) < param_2) {
            uVar8 = (ulonglong)(uVar15 + (uVar14 & 1));
          }
          bVar4 = 1 < uVar14;
          uVar14 = (uint)uVar12;
        } while (bVar4);
      }
      unaff_RSI = CONCAT71(uVar10,1);
      if (((int)uVar8 < (int)uVar2) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x68) <= param_2)) {
        unaff_RSI = CONCAT71(uVar10,1);
        FUN_147603588(param_1 + 0xa0,uVar8,1);
      }
      goto LAB_14761b8c6;
    }
    unaff_RSI = CONCAT71(uVar10,1);
    if (param_4 == '\x01') {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x70 + (longlong)param_2 * 0x78);
      if ((bVar1 & 1) == 0) goto LAB_14761b8c6;
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78);
      *(byte *)(puVar7 + 0x1c) = bVar1 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_14761b8c6;
      lVar16 = (longlong)param_2 * 0x78;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x70 + lVar16);
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar16);
      if ((bVar1 & 2) == 0) {
        local_c8 = *puVar7;
        uStack_c4 = puVar7[1];
        uStack_c0 = puVar7[2];
        uStack_bc = puVar7[3];
        puVar9 = (undefined8 *)(puVar7 + 4);
        puVar11 = local_b8;
        for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        local_60 = *(byte *)(puVar7 + 0x1a);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar7 + 0x16);
        local_58 = *(byte *)(puVar7 + 0x1c);
        FUN_1410d7556(param_1 + 0x18,&local_c8);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar16 + 0x68)])();
        FUN_14761c756(param_1 + 0x68);
        uVar2 = *(uint *)(param_1 + 0xa8);
        uVar8 = 0;
        if (0 < (int)uVar2) {
          uVar12 = (ulonglong)uVar2;
          uVar14 = uVar2;
          do {
            uVar12 = uVar12 >> 1;
            uVar15 = (uint)uVar12 + (int)uVar8;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar15 * 0x68) < param_2) {
              uVar8 = (ulonglong)(uVar15 + (uVar14 & 1));
            }
            bVar4 = 1 < uVar14;
            uVar14 = (uint)uVar12;
          } while (bVar4);
        }
        if (((int)uVar8 < (int)uVar2) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x68) <= param_2)) {
          FUN_147603588(param_1 + 0xa0,uVar8,1);
        }
        goto joined_r0x00014761bba0;
      }
      if ((bVar1 & 1) == 0) goto LAB_14761b8c6;
    }
  }
  FUN_14761c5a2(puVar7,puVar7 + 4);
LAB_14761b8c6:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 14761bc6c FUN_14761bc6c body=412 status=ok
// SIG undefined FUN_14761bc6c(void)

ulonglong FUN_14761bc6c(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  undefined7 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_14761bd1c;
  }
  if (param_3 == '\x01') {
    lVar11 = (longlong)param_2 * 0x78;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar11);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar11 + 0x68)])();
    FUN_14761c756(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar6 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x68) < param_2) {
          uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar6 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x68) <= param_2)) {
      FUN_147603588(param_1 + 0xa0,uVar6,1);
    }
    unaff_RBP = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar6 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x68) < param_2) {
          uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    uVar7 = (undefined7)(unaff_RBP >> 8);
    if (((int)uVar6 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x68) <= param_2)) {
      unaff_RBP = CONCAT71(uVar7,1);
      FUN_147603588(param_1 + 0xa0,uVar6,1);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x70 + (longlong)param_2 * 0x78);
      *pbVar2 = *pbVar2 | 2;
      unaff_RBP = CONCAT71(uVar7,1);
    }
  }
LAB_14761bd1c:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761be14 FUN_14761be14 body=266 status=ok
// SIG undefined FUN_14761be14(void)

void FUN_14761be14(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_80 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_68 != 0) {
          FUN_14761c7ca(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar3 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar3 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(local_80,&local_4a,&local_60);
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14761bf20 FUN_14761bf20 body=936 status=ok
// SIG undefined FUN_14761bf20(void)

void FUN_14761bf20(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ushort uVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  longlong local_1b8;
  undefined4 local_1ac;
  char *local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined1 local_18c [8];
  int local_184;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar4 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  local_1c0 = param_1;
  if (uVar4 != 0) {
    param_1 = param_1 + -0xd8;
    local_1a0 = *param_6;
    local_198 = param_6[1];
    local_1b8 = param_6[2];
    param_5 = param_5 + 8;
    uVar11 = 0;
    do {
      local_180 = *(longlong *)(param_4 + uVar11 * 4);
      if ((local_180 != 0) && (cVar5 = FUN_14761cae8(param_1,&local_180,param_5), cVar5 != '\0')) {
        FUN_14761c7ca(param_1,local_18c,&local_180,param_5);
        piVar7 = *(int **)(local_1c0 + -0x28);
        if (*piVar7 != 0) {
          FUN_140adeba6(piVar7,local_18c);
          piVar7 = *(int **)(local_1c0 + -0x28);
        }
        lVar6 = FUN_1400e4054(piVar7,local_18c);
        if (lVar6 == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = (undefined4)
                   CONCAT71((int7)((ulonglong)local_18c >> 8),
                            '\x02' - (*(short *)(lVar6 + 0xe) == 0));
        }
        cVar5 = FUN_14761cb6e(param_1,local_184,uVar22);
        if (cVar5 == '\0') {
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_1ac = uVar22;
          local_1a8 = param_2;
          if (local_198 == 0) {
            if (local_1a0 == 0) {
              if (local_1b8 != 0) {
                uStack_90 = *(ulonglong *)(local_1b8 + uVar11 * 8);
                local_88 = *(longlong *)(local_1b8 + 8 + uVar11 * 8);
                uVar8 = uStack_90;
                if (local_88 != 0) {
                  LOCK();
                  *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
                  UNLOCK();
                  uVar8 = *(ulonglong *)(local_1b8 + uVar11 * 8);
                }
                uStack_80 = 2;
                FUN_14761a2f6(uVar8,&local_178,*(undefined8 *)(param_4 + uVar11 * 4));
                uVar25 = uStack_14c;
                uVar24 = uStack_150;
                uVar23 = uStack_154;
                uVar22 = local_158;
                uVar26 = (undefined4)local_148;
                uVar27 = (undefined4)((ulonglong)local_148 >> 0x20);
                local_118 = (undefined4)local_178;
                uStack_114 = local_178._4_4_;
                uStack_110 = (undefined4)uStack_170;
                uStack_10c = uStack_170._4_4_;
                local_108 = local_168;
                uStack_104 = uStack_164;
                uStack_100 = uStack_160;
                uStack_fc = uStack_15c;
                FUN_1448052ee(&local_118,&local_f0);
                uVar16 = (undefined4)local_128;
                uVar17 = (undefined4)((ulonglong)local_128 >> 0x20);
                uVar12 = local_138;
                uVar13 = uStack_134;
                uVar14 = uStack_130;
                uVar15 = uStack_12c;
                uStack_c0 = local_e0;
                uVar18 = local_f0;
                uVar19 = uStack_ec;
                uVar20 = uStack_e8;
                uVar21 = uStack_e4;
                goto LAB_14761c20f;
              }
            }
            else {
              lVar6 = (longlong)*(int *)(local_1c0 + 0x24) *
                      (ulonglong)*(ushort *)(local_1a0 + uVar11);
              uStack_90 = *(longlong *)(local_1c0 + 0x18) + lVar6;
              (**(code **)(*(longlong *)(local_1c0 + 0x18) + 0x18 + lVar6))
                        (&local_178,*(undefined8 *)(param_4 + uVar11 * 4));
              puVar9 = &local_178;
              puVar10 = &local_d8;
              for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
              }
            }
          }
          else {
            uVar8 = (ulonglong)*(ushort *)(local_198 + uVar11);
            uStack_90 = (ulonglong)*(ushort *)(local_198 + uVar11);
            uStack_80 = 1;
            lVar6 = *(longlong *)(param_4 + uVar11 * 4);
            puVar2 = (undefined4 *)(lVar6 + 0x20 + uVar8);
            uVar22 = *puVar2;
            uVar23 = puVar2[1];
            uVar24 = puVar2[2];
            uVar25 = puVar2[3];
            uVar3 = *(undefined8 *)(lVar6 + 0x30 + uVar8);
            uVar26 = (undefined4)uVar3;
            uVar27 = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_178 = *(undefined8 *)(lVar6 + uVar8);
            uStack_170 = ((undefined8 *)(lVar6 + uVar8))[1];
            puVar2 = (undefined4 *)(lVar6 + 0x10 + uVar8);
            local_168 = *puVar2;
            uStack_164 = puVar2[1];
            uStack_160 = puVar2[2];
            uStack_15c = puVar2[3];
            FUN_1448052ee(&local_178,&local_118);
            puVar2 = (undefined4 *)(lVar6 + 0x40 + uVar8);
            uVar12 = *puVar2;
            uVar13 = puVar2[1];
            uVar14 = puVar2[2];
            uVar15 = puVar2[3];
            uVar3 = *(undefined8 *)(lVar6 + 0x50 + uVar8);
            uVar16 = (undefined4)uVar3;
            uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_c0 = CONCAT44(uStack_104,local_108);
            uVar18 = local_118;
            uVar19 = uStack_114;
            uVar20 = uStack_110;
            uVar21 = uStack_10c;
LAB_14761c20f:
            local_d8 = CONCAT44(uVar23,uVar22);
            uStack_d0 = CONCAT44(uVar25,uVar24);
            local_c8 = CONCAT44(uVar27,uVar26);
            local_b8 = CONCAT44(uVar19,uVar18);
            uStack_b0 = CONCAT44(uVar21,uVar20);
            local_a8 = CONCAT44(uVar13,uVar12);
            uStack_a0 = CONCAT44(uVar15,uVar14);
            local_98 = CONCAT44(uVar17,uVar16);
          }
          FUN_14761cc04(param_1,local_184,local_1ac,&local_d8);
          (*(code *)(&PTR_LAB_14a4c7e10)[uStack_80 & 0xff])(&uStack_90);
          param_2 = local_1a8;
        }
        if (*param_2 == '\x01') {
          pbVar1 = (byte *)(*(longlong *)(local_1c0 + -0x70) + 0x70 + (longlong)local_184 * 0x78);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      uVar11 = uVar11 + 2;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar4 * 2 != uVar11);
  }
  if ((local_70 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14761c2ca FUN_14761c2ca body=38 status=ok
// SIG undefined FUN_14761c2ca(void)

undefined8 FUN_14761c2ca(undefined8 param_1,int param_2)

{
  FUN_14761c46a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761c2f0 FUN_14761c2f0 body=52 status=ok
// SIG undefined FUN_14761c2f0(void)

void FUN_14761c2f0(longlong *param_1)

{
  FUN_14761c324();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14761c324 FUN_14761c324 body=324 status=ok
// SIG undefined FUN_14761c324(void)

void FUN_14761c324(longlong *param_1)

{
  longlong *plVar1;
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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x78 + 0x68)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
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



// FUNCTION 14761c46a FUN_14761c46a body=173 status=ok
// SIG undefined FUN_14761c46a(void)

void FUN_14761c46a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c61e0;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_14588e4dd(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14761c2f0(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014761c50b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14761c518 FUN_14761c518 body=136 status=ok
// SIG undefined FUN_14761c518(void)

void FUN_14761c518(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761c5a2 FUN_14761c5a2 body=327 status=ok
// SIG undefined FUN_14761c5a2(void)

void FUN_14761c5a2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = *param_1;
  uStack_84 = param_1[1];
  lVar11 = FUN_14479d2ce(&local_88);
  if (lVar11 != 0) {
    if (*(char *)(param_2 + 0x16) == '\x01') {
      uVar12 = (ulonglong)*(ushort *)(param_2 + 0x12);
      uVar7 = param_2[0xc];
      uVar8 = param_2[0xd];
      uVar9 = *param_2;
      uVar10 = param_2[1];
      uVar3 = *(undefined8 *)(param_2 + 2);
      uVar4 = *(undefined8 *)(param_2 + 4);
      uVar5 = *(undefined8 *)(param_2 + 0xe);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      local_90 = *(undefined8 *)(param_2 + 6);
      local_a0 = param_2[8];
      uStack_9c = param_2[9];
      uStack_98 = param_2[10];
      uStack_94 = param_2[0xb];
      FUN_144a7484c(&local_a0,&local_88);
      puVar1 = (undefined4 *)(lVar11 + uVar12);
      *puVar1 = local_88;
      puVar1[1] = uStack_84;
      puVar1[2] = uStack_80;
      puVar1[3] = uStack_7c;
      puVar2 = (undefined8 *)(lVar11 + 0x10 + uVar12);
      *puVar2 = local_78;
      puVar2[1] = uStack_70;
      puVar1 = (undefined4 *)(lVar11 + 0x20 + uVar12);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = (int)uVar3;
      puVar1[3] = (int)((ulonglong)uVar3 >> 0x20);
      puVar2 = (undefined8 *)(lVar11 + 0x30 + uVar12);
      *puVar2 = uVar4;
      puVar2[1] = 0;
      puVar1 = (undefined4 *)(lVar11 + 0x40 + uVar12);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = (int)uVar5;
      puVar1[3] = (int)((ulonglong)uVar5 >> 0x20);
      puVar2 = (undefined8 *)(lVar11 + 0x50 + uVar12);
      *puVar2 = uVar6;
      puVar2[1] = 0;
    }
    else {
      if (*(char *)(param_2 + 0x16) == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
      }
      if (*(longlong *)(param_2 + 0x12) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761c756 FUN_14761c756 body=116 status=ok
// SIG undefined FUN_14761c756(void)

void FUN_14761c756(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
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



// FUNCTION 14761c7ca FUN_14761c7ca body=189 status=ok
// SIG undefined FUN_14761c7ca(void)

longlong FUN_14761c7ca(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_14761c888(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761c888 FUN_14761c888 body=381 status=ok
// SIG undefined FUN_14761c888(void)

int * FUN_14761c888(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  undefined4 *local_c0;
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
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*param_3,param_3[1]);
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_b8._0_4_ = *param_3;
    local_b8._4_4_ = param_3[1];
    uStack_b0._0_4_ = param_3[2];
    uStack_b0._4_4_ = param_3[3];
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_14761ca06(param_1 + 0x68,local_c8);
    *local_c0 = (undefined4)local_b8;
    local_c0[1] = local_b8._4_4_;
    local_c0[2] = (undefined4)uStack_b0;
    local_c0[3] = uStack_b0._4_4_;
    *(undefined1 *)(local_c0 + 0x1a) = 0;
    *(undefined1 *)(local_c0 + 0x1c) = 0;
    *(undefined8 *)(local_c0 + 4) = 0;
    *(undefined8 *)(local_c0 + 6) = 0;
    *(undefined8 *)(local_c0 + 8) = 0;
    *(undefined8 *)(local_c0 + 10) = 0;
    *(undefined8 *)(local_c0 + 0xc) = 0;
    *(undefined8 *)(local_c0 + 0xe) = 0;
    *(undefined8 *)(local_c0 + 0x10) = 0;
    *(undefined8 *)(local_c0 + 0x12) = 0;
    *(undefined8 *)(local_c0 + 0x14) = 0;
    *(undefined8 *)(local_c0 + 0x16) = 0;
    *param_2 = local_c8[0];
    local_b8 = param_3;
    uStack_b0 = param_2;
    FUN_140bf3cbe(plVar1,local_c8,&local_b8,0);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761ca06 FUN_14761ca06 body=226 status=ok
// SIG undefined FUN_14761ca06(void)

int * FUN_14761ca06(longlong *param_1,int *param_2)

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
      FUN_1410fd1ac(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x78);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x78) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x78 + *param_1;
  return param_2;
}



// FUNCTION 14761cae8 FUN_14761cae8 body=132 status=ok
// SIG undefined FUN_14761cae8(void)

byte FUN_14761cae8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_14761cd76(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 14761cb6e FUN_14761cb6e body=150 status=ok
// SIG undefined FUN_14761cb6e(void)

ulonglong FUN_14761cb6e(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x78 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x70);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x68) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x68) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x68;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x70));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 14761cc04 FUN_14761cc04 body=369 status=ok
// SIG undefined FUN_14761cc04(void)

void FUN_14761cc04(longlong param_1,int param_2,char param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = (longlong)param_2 * 0x78 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar7 = *(byte *)(lVar8 + 0x70);
    if ((bVar7 & 1) == 0) {
      puVar9 = param_4;
      puVar10 = (undefined8 *)(lVar8 + 0x10);
      for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      if ((undefined8 *)(lVar8 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xb));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xb)])
                  (&local_58,param_4 + 9);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar8 + 0x68);
        uVar2 = *(undefined4 *)(lVar8 + 0x58);
        uVar3 = *(undefined4 *)(lVar8 + 0x5c);
        uVar4 = *(undefined4 *)(lVar8 + 0x60);
        uVar5 = *(undefined4 *)(lVar8 + 100);
        *(undefined4 *)(lVar8 + 0x58) = local_58;
        *(undefined4 *)(lVar8 + 0x5c) = uStack_54;
        *(undefined4 *)(lVar8 + 0x60) = uStack_50;
        *(undefined4 *)(lVar8 + 100) = uStack_4c;
        *(ulonglong *)(lVar8 + 0x68) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar7 = *(byte *)(lVar8 + 0x70);
      }
      *(byte *)(lVar8 + 0x70) = bVar7 | 1;
    }
    else {
      FUN_1476036b4(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    puVar9 = param_4;
    puVar10 = (undefined8 *)(lVar8 + 0x10);
    for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    if ((undefined8 *)(lVar8 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xb));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xb)])
                (&local_58,param_4 + 9);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar8 + 0x68);
      uVar2 = *(undefined4 *)(lVar8 + 0x58);
      uVar3 = *(undefined4 *)(lVar8 + 0x5c);
      uVar4 = *(undefined4 *)(lVar8 + 0x60);
      uVar5 = *(undefined4 *)(lVar8 + 100);
      *(undefined4 *)(lVar8 + 0x58) = local_58;
      *(undefined4 *)(lVar8 + 0x5c) = uStack_54;
      *(undefined4 *)(lVar8 + 0x60) = uStack_50;
      *(undefined4 *)(lVar8 + 100) = uStack_4c;
      *(ulonglong *)(lVar8 + 0x68) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(byte *)(lVar8 + 0x70) = *(byte *)(lVar8 + 0x70) | 3;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761cd76 FUN_14761cd76 body=189 status=ok
// SIG undefined FUN_14761cd76(void)

longlong FUN_14761cd76(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_14761ce34(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761ce34 FUN_14761ce34 body=167 status=ok
// SIG undefined FUN_14761ce34(void)

undefined4 * FUN_14761ce34(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 14761cedc FUN_14761cedc body=167 status=ok
// SIG undefined FUN_14761cedc(void)

void FUN_14761cedc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14761cf57;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14761cf57;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14761cf57:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014761cf77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14761cf84 FUN_14761cf84 body=905 status=ok
// SIG undefined FUN_14761cf84(void)

void FUN_14761cf84(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  byte local_599;
  undefined8 *local_578;
  int local_570;
  longlong local_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  int iStack_558;
  undefined4 uStack_554;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined1 local_538 [8];
  undefined1 local_530 [32];
  undefined1 *local_510;
  undefined8 local_508;
  undefined8 local_500 [150];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_538;
  if (param_4 != 0) {
    uVar3 = FUN_145990612();
    plVar4 = (longlong *)FUN_144718840(param_4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar9 = *(longlong *)(param_4 + 0x28);
      *(undefined4 *)(lVar9 + 0x29c) = 0;
      lVar5 = 0x10;
      do {
        *(undefined8 *)((longlong)&local_510 + lVar5) = 0;
        *(undefined4 *)((longlong)local_500 + lVar5 + -8) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 8) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x10) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x18) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x20) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x28) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x30) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x38) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x40) = 0;
        lVar5 = lVar5 + 0x80;
      } while (lVar5 != 0x490);
      local_540 = *(undefined8 *)(param_3 + 8);
      local_560 = *param_3;
      uStack_55c = param_3[1];
      iStack_558 = param_3[2];
      uStack_554 = param_3[3];
      local_550 = *(undefined8 *)(param_3 + 4);
      uStack_548 = *(undefined8 *)(param_3 + 6);
      local_510 = (undefined1 *)0x0;
      local_508 = 0x400000000;
      puVar13 = local_500;
      lVar5 = 0;
      do {
        if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar5 & 0x1f) & 1) != 0) {
          local_540._0_6_ = CONCAT24(*(undefined2 *)(*param_2 + lVar5 * 4),(undefined4)local_540);
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_578,&local_560,puVar13);
          uVar12 = local_508;
          if (local_578 != (undefined8 *)0x0) {
            lVar11 = (longlong)(int)local_508;
            uVar6 = (int)local_508 + 1;
            local_508 = CONCAT44(local_508._4_4_,uVar6);
            if (local_508._4_4_ < uVar6) {
              FUN_14476a5c8(local_530,uVar12 & 0xffffffff);
              puVar7 = local_510;
              if (local_510 == (undefined1 *)0x0) {
                puVar7 = local_530;
              }
              *(undefined8 **)(puVar7 + lVar11 * 8) = local_578;
              if (local_578 == (undefined8 *)0x0) goto LAB_14761d166;
            }
            else {
              puVar7 = local_510;
              if (local_510 == (undefined1 *)0x0) {
                puVar7 = local_530;
              }
              *(undefined8 **)(puVar7 + lVar11 * 8) = local_578;
            }
            LOCK();
            *(int *)(local_578 + 1) = *(int *)(local_578 + 1) + 1;
            UNLOCK();
            if (local_578 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_578 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_578)(local_578,1);
              }
            }
          }
        }
LAB_14761d166:
        lVar5 = lVar5 + 1;
        puVar13 = puVar13 + 0x10;
      } while (lVar5 != 9);
      if ((int)local_508 != 0) {
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_530,1);
      }
      if (*(short *)((longlong)param_3 + 0x22) == -1) {
        local_578 = (undefined8 *)0x0;
        local_568 = 0;
      }
      else {
        FUN_147605a78(lVar9 + 0x28,&local_578,*(short *)((longlong)param_3 + 0x22),
                      *(undefined2 *)(param_1 + 0x16));
        local_599 = local_570 == 1;
      }
      if (0 < iStack_558) {
        lVar5 = 0;
        do {
          uVar2 = *(undefined2 *)(CONCAT44(uStack_55c,local_560) + lVar5 * 2);
          lVar11 = *param_6;
          puVar13 = local_500;
          lVar8 = 0;
          do {
            if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar8 & 0x1f) & 1) != 0) {
              uVar12 = (ulonglong)*(ushort *)(*param_2 + 2 + lVar8 * 4);
              lVar10 = uVar12 + local_568;
              if (local_568 == 0) {
                lVar10 = 0;
              }
              uVar3 = FUN_147546472(puVar13,uVar2,*(undefined8 *)(param_5 + uVar12),lVar10);
              *(undefined8 *)(lVar5 * 0x48 + lVar11 + uVar12) = uVar3;
            }
            lVar8 = lVar8 + 1;
            puVar13 = puVar13 + 0x10;
          } while (lVar8 != 9);
          lVar5 = lVar5 + 1;
        } while (lVar5 < iStack_558);
      }
      *(undefined4 *)(lVar9 + 0x29c) = 1;
      if (local_578 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_578 + 3) = *(int *)(local_578 + 3) + -1;
        UNLOCK();
        if ((local_599 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_578 + 1));
        }
      }
      FUN_14588b8d6(local_530);
      lVar9 = 0x400;
      do {
        FUN_1475d7c02((longlong)local_500 + lVar9);
        lVar9 = lVar9 + -0x80;
      } while (lVar9 != -0x80);
    }
  }
  if ((local_50 ^ (ulonglong)local_538) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14761d30e FUN_14761d30e body=57 status=ok
// SIG undefined FUN_14761d30e(void)

undefined8 * FUN_14761d30e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6250;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761d348 FUN_14761d348 body=152 status=ok
// SIG undefined FUN_14761d348(void)

void FUN_14761d348(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_14083f088(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x270);
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_38);
    *(undefined4 *)(param_1 + 0x30) = local_38;
    *(undefined4 *)(param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  }
  if (param_4 != 0) {
    uVar2 = FUN_14761d49a(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761d426 FUN_14761d426 body=57 status=ok
// SIG undefined FUN_14761d426(void)

void FUN_14761d426(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_147607e22(param_1 + 8,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14761d460 FUN_14761d460 body=57 status=ok
// SIG undefined FUN_14761d460(void)

undefined8 * FUN_14761d460(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6250;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761d49a FUN_14761d49a body=232 status=ok
// SIG undefined FUN_14761d49a(void)

undefined8 * FUN_14761d49a(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_14761d584();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c6270;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761d584 FUN_14761d584 body=104 status=ok
// SIG undefined FUN_14761d584(void)

undefined8 FUN_14761d584(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14761d5ec FUN_14761d5ec body=38 status=ok
// SIG undefined FUN_14761d5ec(void)

undefined8 FUN_14761d5ec(undefined8 param_1,int param_2)

{
  FUN_14761d688();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761d612 FUN_14761d612 body=118 status=ok
// SIG undefined FUN_14761d612(void)

void FUN_14761d612(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_147605ee4(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 14761d688 FUN_14761d688 body=71 status=ok
// SIG undefined FUN_14761d688(void)

void FUN_14761d688(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c6270;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14761d6d0(param_1 + 8);
  FUN_1475b4ca4(param_1 + 1);
  return;
}



// FUNCTION 14761d6d0 FUN_14761d6d0 body=52 status=ok
// SIG undefined FUN_14761d6d0(void)

void FUN_14761d6d0(longlong *param_1)

{
  FUN_14761d704();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14761d704 FUN_14761d704 body=89 status=ok
// SIG undefined FUN_14761d704(void)

void FUN_14761d704(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 14761d75e FUN_14761d75e body=1228 status=ok
// SIG undefined FUN_14761d75e(void)

void FUN_14761d75e(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  int local_158;
  int local_154;
  longlong local_150;
  ulonglong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ushort local_de;
  char local_dc;
  char local_da;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar13 = *(longlong **)(param_2 + 0x28);
    lVar10 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar13 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14761d7cc;
      plVar13 = plVar13 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar13 = (longlong *)0x0;
LAB_14761d7cc:
  uVar4 = *(ushort *)(param_2 + 0xe);
  local_148 = *(ulonglong *)(param_1 + 0x40);
  local_154 = *(int *)(param_2 + 0x14);
  if (local_154 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar13 + 1));
  }
  LOCK();
  *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar20 = *(longlong **)(param_2 + 0x28);
    lVar10 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar20 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_14761d822;
      plVar20 = plVar20 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar20 = (longlong *)0x0;
LAB_14761d822:
  local_160 = *plVar13;
  local_158 = *(int *)(param_2 + 0x14);
  if (local_158 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar20 + 1));
  }
  LOCK();
  *(int *)(plVar20 + 3) = (int)plVar20[3] + 1;
  UNLOCK();
  lVar10 = *plVar20;
  local_140 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar4 != 0) {
    local_150 = param_1 + 8;
    uVar19 = 0;
    do {
      local_11c = *(int *)(lVar10 + uVar19 * 8);
      uVar5 = *(uint *)(param_1 + 0x10);
      lVar12 = *(longlong *)(param_1 + 8);
      uVar18 = 0;
      if (0 < (int)uVar5) {
        uVar18 = 0;
        uVar17 = uVar5;
        do {
          uVar1 = (uVar17 >> 1) + uVar18;
          if (*(int *)(lVar12 + (ulonglong)uVar1 * 0x50) < local_11c) {
            uVar18 = uVar1 + (uVar17 & 1);
          }
          bVar7 = 1 < uVar17;
          uVar17 = uVar17 >> 1;
        } while (bVar7);
      }
      if ((((int)uVar18 < (int)uVar5) && (*(int *)(lVar12 + (ulonglong)uVar18 * 0x50) <= local_11c))
         && (puVar14 = (undefined8 *)(lVar12 + (ulonglong)uVar18 * 0x50 + 8),
            puVar14 != (undefined8 *)0x0)) {
        puVar15 = (undefined8 *)(local_160 + uVar19 * 0x48);
        for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
      }
      else {
        lVar12 = FUN_1475b443c(local_140);
        if (((lVar12 != 0) && (lVar11 = FUN_14479d2ce(lVar12), lVar11 != 0)) &&
           (*(longlong *)(lVar12 + 8) != 0)) {
          local_138 = *(undefined4 *)(param_1 + 0x30);
          uStack_134 = *(undefined4 *)(param_1 + 0x34);
          uStack_130 = *(undefined4 *)(param_1 + 0x38);
          uStack_12c = *(undefined4 *)(param_1 + 0x3c);
          FUN_140d4d2ba(&local_de,lVar11,lVar12 + 8,&local_138);
          lVar6 = *(longlong *)(param_1 + 0x48);
          if (lVar6 == 0) {
LAB_14761d95b:
            if (local_da == '\0') {
              local_a8 = 0;
              uStack_a0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_c8 = 0;
              uStack_c0 = 0;
              local_d8 = 0;
              uStack_d0 = 0;
              local_98 = 0;
              local_90 = 1;
              puVar14 = &local_d8;
              FUN_14761e7d8(lVar11,lVar12 + 0x10,puVar14);
            }
            else if (local_dc == '\x01') {
              local_90 = 1;
              puVar14 = &local_d8;
              (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_de))(puVar14,lVar11)
              ;
            }
            else {
              uVar16 = (ulonglong)local_de;
              local_d8 = 0;
              uStack_d0 = 0;
              local_c8 = 0;
              uStack_c0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_98 = 0;
              local_90 = 1;
              puVar14 = (undefined8 *)(lVar11 + 0x20 + uVar16);
              uVar8 = *puVar14;
              uVar9 = puVar14[1];
              uVar3 = *(undefined8 *)(lVar11 + 0x30 + uVar16);
              local_118 = *(undefined8 *)(lVar11 + uVar16);
              uStack_110 = ((undefined8 *)(lVar11 + uVar16))[1];
              puVar2 = (undefined4 *)(lVar11 + 0x10 + uVar16);
              local_108 = *puVar2;
              uStack_104 = puVar2[1];
              uStack_100 = puVar2[2];
              uStack_fc = puVar2[3];
              FUN_1448052ee(&local_118,&local_f8);
              puVar14 = (undefined8 *)(lVar11 + 0x40 + uVar16);
              local_d8 = uVar8;
              uStack_d0 = uVar9;
              local_c8 = uVar3;
              uStack_c0 = local_e8;
              local_b8 = local_f8;
              uStack_b0 = uStack_f0;
              local_a8 = *puVar14;
              uStack_a0 = puVar14[1];
              local_98 = *(undefined8 *)(lVar11 + 0x50 + uVar16);
              puVar14 = &local_d8;
            }
          }
          else {
            local_168 = lVar6;
            if (local_da == '\0') {
              FUN_14761e91a(lVar6,&local_d8,lVar11,lVar12 + 0x10);
            }
            else if (local_dc == '\x01') {
              FUN_14761f084();
            }
            else {
              FUN_14761f266(lVar6,&local_d8,lVar11,local_de);
            }
            if (local_d8._2_1_ == '\x01') {
              puVar14 = (undefined8 *)
                        ((ulonglong)((uint)(ushort)local_d8 * 0x48) + *(longlong *)(local_168 + 8));
            }
            else {
              puVar14 = (undefined8 *)0x0;
            }
            if (puVar14 == (undefined8 *)0x0) goto LAB_14761d95b;
          }
          puVar15 = (undefined8 *)(local_160 + uVar19 * 0x48);
          for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar15 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
          }
          FUN_1476075da(local_150,&local_11c);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar4);
  }
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 3) = (int)plVar20[3] + -1;
    UNLOCK();
    if (local_158 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar20 + 1));
    }
  }
  if (plVar13 != (longlong *)0x0) {
    uVar19 = plVar13[2];
    if ((ulonglong)plVar13[2] < local_148) {
      uVar19 = local_148;
    }
    plVar13[2] = uVar19;
    LOCK();
    *(int *)(plVar13 + 3) = (int)plVar13[3] + -1;
    UNLOCK();
    if (local_154 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar13 + 1));
    }
  }
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14761dc2c FUN_14761dc2c body=1862 status=ok
// SIG undefined FUN_14761dc2c(void)

void FUN_14761dc2c(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  longlong local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  int local_1a4;
  int local_1a0;
  int local_19c;
  ulonglong local_198;
  ulonglong local_190;
  longlong local_188;
  longlong local_180;
  int local_178;
  longlong local_170;
  longlong local_168;
  int local_160;
  longlong local_158;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 local_138 [4];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ushort local_8c;
  char local_8a;
  ushort local_88;
  char cStack_86;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_14761dc91;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14761dc91:
  uVar3 = *(ushort *)(param_2 + 0xe);
  uVar15 = (ulonglong)uVar3;
  local_190 = *(ulonglong *)(param_1 + 0x40);
  local_19c = *(int *)(param_2 + 0x14);
  if (local_19c == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar14 = *(undefined8 **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar14 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14761dce4;
      puVar14 = puVar14 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar14 = (undefined8 *)0x0;
LAB_14761dce4:
  local_1b0 = *plVar8;
  local_198 = *(ulonglong *)(param_1 + 0x40);
  local_1a0 = *(int *)(param_2 + 0x14);
  if (local_1a0 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar14 + 1));
  }
  LOCK();
  *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_14761dd3d;
      plVar12 = plVar12 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_14761dd3d:
  puVar13 = (undefined8 *)*puVar14;
  local_1a4 = *(int *)(param_2 + 0x14);
  if (local_1a4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  local_1c0 = *plVar12;
  FUN_140b325e4(param_2,&local_150,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  local_1c8 = local_140;
  local_1b8 = uVar15;
  if (local_140 == 0) {
    FUN_1410bd96e(param_2,&local_168,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_158 == 0) {
      FUN_1410bd9c4(param_2,&local_180,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_1c8 = local_170;
      if (uVar3 != 0 && local_170 != 0) {
        local_1b8 = (ulonglong)((uint)uVar3 * 2);
        uVar15 = 0;
        do {
          lVar6 = *(longlong *)(local_1c8 + uVar15 * 8);
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(lVar6 + 0x58) != 0) {
            puVar7 = *(undefined2 **)(lVar6 + 0x50);
          }
          uVar2 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(local_138,puVar7,1);
          FUN_14761e91a(uVar2,&local_8c,*(undefined8 *)(local_1c0 + uVar15 * 4),local_138);
          if (local_8a == '\x01') {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uint)local_8c * 0x48) +
                      *(longlong *)(*(longlong *)(param_1 + 0x48) + 8));
            puVar11 = puVar13;
            for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          else {
            FUN_14761a2f6(*(undefined8 *)(local_1c8 + uVar15 * 8),local_138,
                          *(undefined8 *)(local_1c0 + uVar15 * 4));
            uVar4 = uStack_110;
            uVar2 = local_118;
            FUN_1448052ee(&local_d8,&local_88);
            local_d8 = uVar2;
            uStack_d0 = uVar4;
            uStack_c0 = local_78;
            local_b0 = local_80;
            local_a8 = (undefined4)local_f8;
            uStack_a4 = local_f8._4_4_;
            uStack_a0 = uStack_f0;
            uStack_9c = uStack_ec;
            local_98 = local_e8;
            puVar10 = &local_d8;
            puVar11 = puVar13;
            for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            local_1d8 = *(undefined8 *)(local_1c8 + uVar15 * 8);
            FUN_14761f6b0(*(undefined8 *)(param_1 + 0x48),local_138,
                          *(undefined8 *)(local_1c0 + uVar15 * 4),&local_d8);
            *(undefined2 *)(local_1b0 + uVar15) = (undefined2)local_138[0];
          }
          uVar15 = uVar15 + 2;
          puVar13 = puVar13 + 9;
        } while (local_1b8 != uVar15);
      }
      if (local_180 != 0) {
        LOCK();
        *(int *)(local_180 + 0x18) = *(int *)(local_180 + 0x18) + -1;
        UNLOCK();
        if (local_178 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_180 + 8));
        }
      }
    }
    else {
      local_1c8 = local_158;
      if (uVar15 != 0) {
        uVar15 = 0;
        do {
          FUN_14761f266(*(undefined8 *)(param_1 + 0x48),&local_88,
                        *(undefined8 *)(local_1c0 + uVar15 * 8),
                        *(undefined2 *)(local_158 + uVar15 * 2));
          if (cStack_86 == '\x01') {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uint)local_88 * 0x48) +
                      *(longlong *)(*(longlong *)(param_1 + 0x48) + 8));
            puVar11 = puVar13;
            for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          else {
            uVar9 = (ulonglong)*(ushort *)(local_1c8 + uVar15 * 2);
            lVar6 = *(longlong *)(local_1c0 + uVar15 * 8);
            puVar10 = (undefined8 *)(lVar6 + 0x20 + uVar9);
            uVar4 = *puVar10;
            uVar5 = puVar10[1];
            uVar2 = *(undefined8 *)(lVar6 + 0x30 + uVar9);
            local_138[0] = *(undefined8 *)(lVar6 + uVar9);
            local_138[1] = ((undefined8 *)(lVar6 + uVar9))[1];
            puVar10 = (undefined8 *)(lVar6 + 0x10 + uVar9);
            local_138[2] = *puVar10;
            local_138[3] = puVar10[1];
            FUN_1448052ee(local_138,&local_d8);
            puVar1 = (undefined4 *)(lVar6 + 0x40 + uVar9);
            local_138[0] = uVar4;
            local_138[1] = uVar5;
            local_138[2] = uVar2;
            local_138[3] = local_c8;
            local_118 = local_d8;
            uStack_110 = uStack_d0;
            local_108 = *puVar1;
            uStack_104 = puVar1[1];
            uStack_100 = puVar1[2];
            uStack_fc = puVar1[3];
            local_f8 = *(undefined8 *)(lVar6 + 0x50 + uVar9);
            puVar10 = local_138;
            puVar11 = puVar13;
            for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            local_1d8 = CONCAT62(local_1d8._2_6_,*(undefined2 *)(local_1c8 + uVar15 * 2));
            FUN_14761f5ce(*(undefined8 *)(param_1 + 0x48),&local_d8,
                          *(undefined8 *)(local_1c0 + uVar15 * 8));
            *(ushort *)(local_1b0 + uVar15 * 2) = (ushort)local_d8;
          }
          uVar15 = uVar15 + 1;
          puVar13 = puVar13 + 9;
        } while (local_1b8 != uVar15);
      }
    }
    if (local_168 != 0) {
      LOCK();
      *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
      UNLOCK();
      if (local_160 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
      }
    }
  }
  else {
    local_188 = param_1;
    if (uVar15 != 0) {
      uVar15 = 0;
      do {
        FUN_14761f084(*(undefined8 *)(param_1 + 0x48),&local_d8,
                      *(undefined8 *)(local_1c0 + uVar15 * 8),
                      *(undefined2 *)(local_1c8 + uVar15 * 2));
        if (local_d8._2_1_ == '\x01') {
          puVar10 = (undefined8 *)
                    ((ulonglong)((uint)(ushort)local_d8 * 0x48) +
                    *(longlong *)(*(longlong *)(param_1 + 0x48) + 8));
          puVar11 = puVar13;
          for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
        }
        else {
          (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                      (longlong)*(int *)(param_1 + 0x3c) *
                      (ulonglong)*(ushort *)(local_1c8 + uVar15 * 2)))
                    (local_138,*(undefined8 *)(local_1c0 + uVar15 * 8));
          puVar10 = local_138;
          puVar11 = puVar13;
          for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          local_1d8 = CONCAT62(local_1d8._2_6_,*(undefined2 *)(local_1c8 + uVar15 * 2));
          FUN_14761f4ec(*(undefined8 *)(param_1 + 0x48),&local_88,
                        *(undefined8 *)(local_1c0 + uVar15 * 8),local_138);
          *(ushort *)(local_1b0 + uVar15 * 2) = local_88;
        }
        uVar15 = uVar15 + 1;
        puVar13 = puVar13 + 9;
      } while (local_1b8 != uVar15);
    }
  }
  if (local_150 != 0) {
    LOCK();
    *(int *)(local_150 + 0x18) = *(int *)(local_150 + 0x18) + -1;
    UNLOCK();
    if (local_148 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_150 + 8));
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (local_1a4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (puVar14 != (undefined8 *)0x0) {
    uVar15 = puVar14[2];
    if ((ulonglong)puVar14[2] < local_198) {
      uVar15 = local_198;
    }
    puVar14[2] = uVar15;
    LOCK();
    *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + -1;
    UNLOCK();
    if (local_1a0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar14 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    uVar15 = plVar8[2];
    if ((ulonglong)plVar8[2] < local_190) {
      uVar15 = local_190;
    }
    plVar8[2] = uVar15;
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_19c == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14761e374 FUN_14761e374 body=1122 status=ok
// SIG undefined FUN_14761e374(void)

void FUN_14761e374(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  undefined1 auStack_188 [32];
  int local_168;
  int local_164;
  ulonglong local_160;
  undefined8 *local_158;
  longlong local_150;
  int local_148;
  longlong local_140;
  longlong local_138;
  int local_130;
  longlong local_128;
  longlong local_120;
  int local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar15 = *(undefined8 **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar15 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14761e3d9;
      puVar15 = puVar15 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  puVar15 = (undefined8 *)0x0;
LAB_14761e3d9:
  uVar4 = *(ushort *)(param_2 + 0xe);
  uVar12 = (ulonglong)uVar4;
  local_160 = *(ulonglong *)(param_1 + 0x40);
  local_164 = *(int *)(param_2 + 0x14);
  if (local_164 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar15 + 1));
  }
  LOCK();
  *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar18 = *(longlong **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar18 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_14761e42d;
      plVar18 = plVar18 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar18 = (longlong *)0x0;
LAB_14761e42d:
  puVar19 = (undefined8 *)*puVar15;
  local_168 = *(int *)(param_2 + 0x14);
  local_158 = puVar15;
  if (local_168 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar18 + 1));
  }
  LOCK();
  *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
  UNLOCK();
  lVar11 = *plVar18;
  FUN_140b325e4(param_2,&local_120,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_110 == 0) {
    FUN_1410bd96e(param_2,&local_138,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_128 == 0) {
      FUN_1410bd9c4(param_2,&local_150,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if (uVar4 != 0 && local_140 != 0) {
        puVar19 = puVar19 + 8;
        lVar13 = 0;
        do {
          FUN_14761a2f6(*(undefined8 *)(local_140 + lVar13 * 2),&local_108,
                        *(undefined8 *)(lVar11 + lVar13));
          uVar9 = local_d8;
          uVar3 = uStack_e0;
          uVar2 = local_e8;
          local_a8 = (undefined4)local_108;
          uStack_a4 = local_108._4_4_;
          uStack_a0 = (undefined4)uStack_100;
          uStack_9c = uStack_100._4_4_;
          local_98 = local_f8;
          uStack_94 = uStack_f4;
          uStack_90 = uStack_f0;
          uStack_8c = uStack_ec;
          FUN_1448052ee(&local_a8,&local_88);
          puVar19[-8] = uVar2;
          puVar19[-7] = uVar3;
          puVar19[-6] = uVar9;
          puVar19[-5] = local_78;
          puVar19[-4] = local_88;
          puVar19[-3] = local_80;
          *(undefined4 *)(puVar19 + -2) = local_c8;
          *(undefined4 *)((longlong)puVar19 + -0xc) = uStack_c4;
          *(undefined4 *)(puVar19 + -1) = uStack_c0;
          *(undefined4 *)((longlong)puVar19 + -4) = uStack_bc;
          *puVar19 = local_b8;
          lVar13 = lVar13 + 8;
          puVar19 = puVar19 + 9;
        } while ((ulonglong)uVar4 * 8 != lVar13);
      }
      if (local_150 != 0) {
        LOCK();
        *(int *)(local_150 + 0x18) = *(int *)(local_150 + 0x18) + -1;
        UNLOCK();
        if (local_148 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_150 + 8));
        }
      }
    }
    else if (uVar12 != 0) {
      puVar19 = puVar19 + 8;
      uVar17 = 0;
      do {
        uVar14 = (ulonglong)*(ushort *)(local_128 + uVar17 * 2);
        lVar13 = *(longlong *)(lVar11 + uVar17 * 8);
        puVar15 = (undefined8 *)(lVar13 + 0x20 + uVar14);
        uVar9 = *puVar15;
        uVar10 = puVar15[1];
        uVar2 = *(undefined8 *)(lVar13 + 0x30 + uVar14);
        local_108 = *(undefined8 *)(lVar13 + uVar14);
        uStack_100 = ((undefined8 *)(lVar13 + uVar14))[1];
        puVar1 = (undefined4 *)(lVar13 + 0x10 + uVar14);
        local_f8 = *puVar1;
        uStack_f4 = puVar1[1];
        uStack_f0 = puVar1[2];
        uStack_ec = puVar1[3];
        FUN_1448052ee(&local_108,&local_a8);
        puVar1 = (undefined4 *)(lVar13 + 0x40 + uVar14);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        uVar3 = *(undefined8 *)(lVar13 + 0x50 + uVar14);
        puVar19[-8] = uVar9;
        puVar19[-7] = uVar10;
        puVar19[-6] = uVar2;
        puVar19[-5] = CONCAT44(uStack_94,local_98);
        puVar19[-4] = CONCAT44(uStack_a4,local_a8);
        puVar19[-3] = CONCAT44(uStack_9c,uStack_a0);
        *(undefined4 *)(puVar19 + -2) = uVar5;
        *(undefined4 *)((longlong)puVar19 + -0xc) = uVar6;
        *(undefined4 *)(puVar19 + -1) = uVar7;
        *(undefined4 *)((longlong)puVar19 + -4) = uVar8;
        *puVar19 = uVar3;
        uVar17 = uVar17 + 1;
        puVar19 = puVar19 + 9;
      } while (uVar12 != uVar17);
    }
    if (local_138 != 0) {
      LOCK();
      *(int *)(local_138 + 0x18) = *(int *)(local_138 + 0x18) + -1;
      UNLOCK();
      if (local_130 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_138 + 8));
      }
    }
  }
  else if (uVar12 != 0) {
    uVar17 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                  (longlong)*(int *)(param_1 + 0x3c) *
                  (ulonglong)*(ushort *)(local_110 + uVar17 * 2)))
                (&local_108,*(undefined8 *)(lVar11 + uVar17 * 8));
      puVar15 = &local_108;
      puVar16 = puVar19;
      for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      uVar17 = uVar17 + 1;
      puVar19 = puVar19 + 9;
    } while (uVar12 != uVar17);
  }
  if (local_120 != 0) {
    LOCK();
    *(int *)(local_120 + 0x18) = *(int *)(local_120 + 0x18) + -1;
    UNLOCK();
    if (local_118 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_120 + 8));
    }
  }
  puVar15 = local_158;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 3) = (int)plVar18[3] + -1;
    UNLOCK();
    if (local_168 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar18 + 1));
    }
  }
  if (puVar15 != (undefined8 *)0x0) {
    uVar12 = puVar15[2];
    if ((ulonglong)puVar15[2] < local_160) {
      uVar12 = local_160;
    }
    puVar15[2] = uVar12;
    LOCK();
    *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + -1;
    UNLOCK();
    if (local_164 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar15 + 1));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761e7d8 FUN_14761e7d8 body=320 status=ok
// SIG undefined FUN_14761e7d8(void)

void FUN_14761e7d8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined2 *local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1400021e4(param_2,&local_d0);
  puVar1 = local_d0;
  if (local_c8 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_f8,puVar1);
  FUN_14761f448(&local_b8,param_1,&local_f8);
  if (CONCAT44(uStack_f4,local_f8) != 0) {
    FUN_1400020a8();
  }
  if (local_d0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 == '\x01') {
    local_f8 = local_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    local_e8 = local_a8;
    uStack_e4 = uStack_a4;
    uStack_e0 = uStack_a0;
    uStack_dc = uStack_9c;
    FUN_1448052ee(&local_f8,&local_d0);
    *param_3 = local_98;
    param_3[1] = uStack_90;
    param_3[2] = local_88;
    param_3[3] = local_c0;
    param_3[4] = local_d0;
    param_3[5] = CONCAT44(uStack_c4,local_c8);
    *(undefined4 *)(param_3 + 6) = local_78;
    *(undefined4 *)((longlong)param_3 + 0x34) = uStack_74;
    *(undefined4 *)(param_3 + 7) = uStack_70;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_6c;
    param_3[8] = local_68;
  }
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


