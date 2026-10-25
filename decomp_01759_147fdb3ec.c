// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147fdb3ec FUN_147fdb3ec body=108 status=ok
// SIG undefined FUN_147fdb3ec(void)

bool FUN_147fdb3ec(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,4);
  if (uVar1 == local_2c) {
    FUN_144aa025c(*param_3,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb45a FUN_147fdb45a body=120 status=ok
// SIG undefined FUN_147fdb45a(void)

undefined4 FUN_147fdb45a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_2 + 8);
  FUN_1401a700c(&local_2c,8);
  uVar1 = FUN_1468ec2ac(&local_30,local_2c);
  if ((char)uVar1 != '\0') {
    FUN_144aa029c(*param_3,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb4de FUN_147fdb4de body=188 status=ok
// SIG undefined FUN_147fdb4de(void)

undefined8 FUN_147fdb4de(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_2 + 8);
  FUN_1401a700c(&local_34,0x5a);
  cVar1 = FUN_1468ec2ac(&local_38,local_34);
  if (cVar1 == '\0') {
    local_3c = *(undefined4 *)(param_2 + 8);
    FUN_1401a700c(&local_34,0x36);
    cVar1 = FUN_1468ec2ac(&local_3c,local_34);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_147fdb574;
    }
  }
  FUN_144aa025c(*param_3,param_1);
  FUN_144aa025c(*param_3,param_1 + 4);
  uVar2 = 1;
LAB_147fdb574:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb59c FUN_147fdb59c body=122 status=ok
// SIG undefined FUN_147fdb59c(void)

undefined4 FUN_147fdb59c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_2 + 8);
  FUN_1401a700c(&local_2c,0x5b);
  uVar1 = FUN_1468ec2ac(&local_30,local_2c);
  if ((char)uVar1 != '\0') {
    FUN_146974108(param_3,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb62c FUN_147fdb62c body=147 status=ok
// SIG undefined FUN_147fdb62c(void)

undefined4 FUN_147fdb62c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_2 + 8);
  FUN_1401a700c(&local_2c,0x48);
  uVar1 = FUN_1468ec2ac(&local_30,local_2c);
  if ((char)uVar1 != '\0') {
    FUN_144aa025c(*param_3,param_1);
    FUN_144aa025c(*param_3,param_1 + 4);
    FUN_144aa025c(*param_3,param_1 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb6c0 FUN_147fdb6c0 body=120 status=ok
// SIG undefined FUN_147fdb6c0(void)

undefined4 FUN_147fdb6c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_2 + 8);
  FUN_1401a700c(&local_2c,0x49);
  uVar1 = FUN_1468ec2ac(&local_30,local_2c);
  if ((char)uVar1 != '\0') {
    FUN_144afe965(param_3,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb74c FUN_147fdb74c body=124 status=ok
// SIG undefined FUN_147fdb74c(void)

undefined4 FUN_147fdb74c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_2 + 8);
  FUN_1401a700c(&local_2c,0x56);
  uVar1 = FUN_1468ec2ac(&local_30,local_2c);
  if ((char)uVar1 != '\0') {
    FUN_1447e46aa(*(undefined8 *)(*param_3 + 8),param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb7e0 FUN_147fdb7e0 body=124 status=ok
// SIG undefined FUN_147fdb7e0(void)

undefined4 FUN_147fdb7e0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_2 + 8);
  FUN_1401a700c(&local_2c,0x57);
  uVar1 = FUN_1468ec2ac(&local_30,local_2c);
  if ((char)uVar1 != '\0') {
    FUN_140c5e5ec(*(undefined8 *)(*param_3 + 8),param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb872 FUN_147fdb872 body=126 status=ok
// SIG undefined FUN_147fdb872(void)

undefined4 FUN_147fdb872(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_2 + 8);
  FUN_1401a700c(&local_2c,0x58);
  uVar1 = FUN_1468ec2ac(&local_30,local_2c);
  if ((char)uVar1 != '\0') {
    FUN_1467fab5c(*(undefined8 *)(*param_3 + 8),param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb8f2 FUN_147fdb8f2 body=124 status=ok
// SIG undefined FUN_147fdb8f2(void)

undefined4 FUN_147fdb8f2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_2 + 8);
  FUN_1401a700c(&local_2c,0x59);
  uVar1 = FUN_1468ec2ac(&local_30,local_2c);
  if ((char)uVar1 != '\0') {
    FUN_1401fb57a(*(undefined8 *)(*param_3 + 8),param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb970 FUN_147fdb970 body=122 status=ok
// SIG undefined FUN_147fdb970(void)

undefined4 FUN_147fdb970(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_2 + 8);
  FUN_1401a700c(&local_2c,0x50);
  uVar1 = FUN_1468ec2ac(&local_30,local_2c);
  if ((char)uVar1 != '\0') {
    FUN_147fdb9eb(param_3,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb9eb FUN_147fdb9eb body=69 status=ok
// SIG undefined FUN_147fdb9eb(void)

void FUN_147fdb9eb(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 8);
  FUN_140a4aa2c(lVar1);
  FUN_1447712aa(lVar1,param_2 + 0x10);
  FUN_1447712aa(lVar1,param_2 + 0x20);
  if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  return;
}



// FUNCTION 147fdba30 FUN_147fdba30 body=122 status=ok
// SIG undefined FUN_147fdba30(void)

undefined4 FUN_147fdba30(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_2 + 8);
  FUN_1401a700c(&local_2c,0x51);
  uVar1 = FUN_1468ec2ac(&local_30,local_2c);
  if ((char)uVar1 != '\0') {
    FUN_147fdbaab(param_3,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdbaab FUN_147fdbaab body=71 status=ok
// SIG undefined FUN_147fdbaab(void)

void FUN_147fdbaab(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 8);
  FUN_1400f4f7e(lVar1);
  FUN_14480c34d(lVar1,param_2 + 0x20);
  FUN_14480c34d(lVar1,param_2 + 0x40);
  if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147fdbb04 FUN_147fdbb04 body=90 status=ok
// SIG undefined FUN_147fdbb04(void)

void FUN_147fdbb04(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0x408f400000000000;
  param_1[7] = 0x420c0000bf800000;
  param_1[8] = 0x4270000040333333;
  param_1[9] = 0x41c71eb8bf800000;
  param_1[10] = 0x42c8000041955c29;
  param_1[0xb] = 0x83f800000;
  param_1[0xc] = 0xbf80000041200000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  return;
}



// FUNCTION 147fdbb5e FUN_147fdbb5e body=18 status=ok
// SIG undefined FUN_147fdbb5e(void)

void FUN_147fdbb5e(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 147fdbb70 FUN_147fdbb70 body=126 status=ok
// SIG undefined FUN_147fdbb70(void)

undefined4 * FUN_147fdbb70(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  *(undefined8 *)(param_2 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x12) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x14) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x16) = 0;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar1 = *(undefined8 *)(param_1 + 4);
  param_2[8] = *param_1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  param_2[0xb] = uVar4;
  *(undefined8 *)(param_2 + 0xc) = uVar1;
  *(undefined8 *)(param_2 + 0xe) = 0;
  FUN_144a7484c(param_1 + 6,&local_38);
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  param_2[4] = local_28;
  param_2[5] = uStack_24;
  param_2[6] = uStack_20;
  param_2[7] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdbbf0 FUN_147fdbbf0 body=255 status=ok
// SIG undefined FUN_147fdbbf0(void)

void FUN_147fdbbf0(double *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  dVar2 = (double)param_2[4];
  dVar3 = (double)param_2[5];
  dVar1 = (double)param_2[6];
  if (((((*param_1 != dVar2) || (NAN(*param_1) || NAN(dVar2))) || (param_1[1] != dVar3)) ||
      ((NAN(param_1[1]) || NAN(dVar3) || (param_1[2] != dVar1)))) || (NAN(param_1[2]) || NAN(dVar1))
     ) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *param_1 = dVar2;
    param_1[1] = dVar3;
    param_1[2] = dVar1;
  }
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = *(undefined4 *)(param_2 + 2);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_40 = *(undefined4 *)(param_2 + 3);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_1448052ee(&local_58,&local_30);
  if ((param_1[3] == (double)CONCAT44(uStack_2c,local_30)) &&
     (!NAN(param_1[3]) && !NAN((double)CONCAT44(uStack_2c,local_30)))) {
    if ((param_1[4] == (double)CONCAT44(uStack_24,uStack_28)) &&
       (!NAN(param_1[4]) && !NAN((double)CONCAT44(uStack_24,uStack_28)))) {
      if ((param_1[5] == local_20) && (!NAN(param_1[5]) && !NAN(local_20))) goto LAB_147fdbc73;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[5] = local_20;
  *(undefined4 *)(param_1 + 3) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_2c;
  *(undefined4 *)(param_1 + 4) = uStack_28;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_24;
LAB_147fdbc73:
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fdbcf0 FUN_147fdbcf0 body=46 status=ok
// SIG undefined FUN_147fdbcf0(void)

void FUN_147fdbcf0(longlong param_1)

{
  FUN_1438d8d80(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38),
                *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                *(undefined4 *)(param_1 + 0x58));
  return;
}



// FUNCTION 147fdbd1e FUN_147fdbd1e body=34 status=ok
// SIG undefined FUN_147fdbd1e(void)

double FUN_147fdbd1e(longlong param_1)

{
  if (*(float *)(param_1 + 0x50) <= 0.0) {
    return 0.0;
  }
  return (double)(*(float *)(param_1 + 0x4c) / *(float *)(param_1 + 0x50));
}



// FUNCTION 147fdbd40 FUN_147fdbd40 body=397 status=ok
// SIG undefined FUN_147fdbd40(void)

void FUN_147fdbd40(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  if ((*(char *)(param_1 + 0x6c) == '\x01') && (0.0 < *(float *)(param_1 + 0x68))) {
    bVar1 = *(byte *)(param_2 + 8);
    if ((bVar1 & 0x20) == 0) {
      bVar1 = bVar1 | 0x20;
      *(byte *)(param_2 + 8) = bVar1;
      *(float *)(param_2 + 0x46c) =
           (*(float *)(param_1 + 0x54) - *(float *)(param_2 + 0x46c)) * *(float *)(param_1 + 0x68) +
           *(float *)(param_2 + 0x46c);
    }
    if ((bVar1 & 0x10) == 0) {
      *(byte *)(param_2 + 8) = bVar1 | 0x10;
      *(float *)(param_2 + 0x468) =
           (*(float *)(param_1 + 0x44) - *(float *)(param_2 + 0x468)) * *(float *)(param_1 + 0x68) +
           *(float *)(param_2 + 0x468);
    }
    bVar1 = *(byte *)(param_2 + 0x1a);
    if ((bVar1 & 0x10) == 0) {
      bVar1 = bVar1 | 0x10;
      *(byte *)(param_2 + 0x1a) = bVar1;
      *(float *)(param_2 + 0x470) =
           (*(float *)(param_1 + 0x40) - *(float *)(param_2 + 0x470)) * *(float *)(param_1 + 0x68) +
           *(float *)(param_2 + 0x470);
    }
    if ((bVar1 & 0x40) == 0) {
      bVar1 = bVar1 | 0x40;
      *(byte *)(param_2 + 0x1a) = bVar1;
      *(int *)(param_2 + 0x478) =
           (int)((float)(*(int *)(param_1 + 0x5c) - *(int *)(param_2 + 0x478)) *
                 *(float *)(param_1 + 0x68) + (float)*(int *)(param_2 + 0x478));
    }
    if ((bVar1 & 0x20) == 0) {
      bVar1 = bVar1 | 0x20;
      *(byte *)(param_2 + 0x1a) = bVar1;
      *(float *)(param_2 + 0x474) =
           (DAT_14cb29458 - *(float *)(param_2 + 0x474)) * *(float *)(param_1 + 0x68) +
           *(float *)(param_2 + 0x474);
    }
    if ((bVar1 & 8) == 0) {
      bVar1 = bVar1 | 8;
      *(byte *)(param_2 + 0x1a) = bVar1;
      *(float *)(param_2 + 0x640) =
           (*(float *)(param_1 + 0x48) - *(float *)(param_2 + 0x640)) * *(float *)(param_1 + 0x68) +
           *(float *)(param_2 + 0x640);
    }
    if (-1 < (char)bVar1) {
      *(byte *)(param_2 + 0x1a) = bVar1 | 0x80;
      *(float *)(param_2 + 0x638) =
           (*(float *)(param_1 + 0x4c) - *(float *)(param_2 + 0x638)) * *(float *)(param_1 + 0x68) +
           *(float *)(param_2 + 0x638);
    }
    if ((*(byte *)(param_2 + 0x1b) & 1) == 0) {
      *(byte *)(param_2 + 0x1b) = *(byte *)(param_2 + 0x1b) | 1;
      *(float *)(param_2 + 0x63c) =
           (*(float *)(param_1 + 0x58) - *(float *)(param_2 + 0x63c)) * *(float *)(param_1 + 0x68) +
           *(float *)(param_2 + 0x63c);
    }
  }
  return;
}



// FUNCTION 147fdbece FUN_147fdbece body=230 status=ok
// SIG undefined FUN_147fdbece(void)

undefined8 * FUN_147fdbece(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = param_1[6];
  local_30 = 0;
  uStack_28 = 0;
  FUN_1401c9a0e(param_1 + 3,&local_50);
  param_2[2] = param_1[2];
  uVar4 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar4;
  param_2[3] = local_50;
  param_2[4] = uStack_48;
  param_2[5] = local_40;
  dVar1 = (double)param_2[3];
  dVar2 = (double)param_2[4];
  dVar3 = (double)param_2[5];
  dVar5 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (9.99999993922529e-09 < dVar5) {
    dVar5 = 1.0 / SQRT(dVar5);
    param_2[3] = dVar1 * dVar5;
    param_2[4] = dVar2 * dVar5;
    param_2[5] = dVar3 * dVar5;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdbfb6 FUN_147fdbfb6 body=159 status=ok
// SIG undefined FUN_147fdbfb6(void)

double * FUN_147fdbfb6(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0x3ff0000000000000;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1401c9a0e(param_1 + 3,&local_50);
  dVar1 = param_1[6];
  dVar2 = param_1[2];
  dVar3 = param_1[1];
  *param_2 = dVar1 * local_50 + *param_1;
  param_2[1] = local_48 * dVar1 + dVar3;
  param_2[2] = local_40 * dVar1 + dVar2;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdc056 FUN_147fdc056 body=852 status=ok
// SIG undefined FUN_147fdc056(void)

void FUN_147fdc056(double *param_1,double *param_2,char param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  
  if ((param_3 == '\0') || (*(char *)(param_2 + 0xe) == '\x01')) {
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar4 = param_2[2];
    if ((*param_1 != dVar2) ||
       ((((NAN(*param_1) || NAN(dVar2) || (param_1[1] != dVar3)) || (NAN(param_1[1]) || NAN(dVar3)))
        || ((param_1[2] != dVar4 || (NAN(param_1[2]) || NAN(dVar4))))))) {
      *(undefined1 *)(param_1 + 0xe) = 1;
      *param_1 = dVar2;
      param_1[1] = dVar3;
      param_1[2] = dVar4;
    }
    if (param_3 != '\0') goto LAB_147fdc096;
LAB_147fdc09c:
    dVar2 = param_2[3];
    dVar3 = param_2[4];
    dVar4 = param_2[5];
    if (((param_1[3] != dVar2) || (NAN(param_1[3]) || NAN(dVar2))) ||
       ((param_1[4] != dVar3 ||
        (((NAN(param_1[4]) || NAN(dVar3) || (param_1[5] != dVar4)) ||
         (NAN(param_1[5]) || NAN(dVar4))))))) {
      *(undefined1 *)((longlong)param_1 + 0x71) = 1;
      param_1[3] = dVar2;
      param_1[4] = dVar3;
      param_1[5] = dVar4;
    }
    if (param_3 != '\0') goto LAB_147fdc0d4;
LAB_147fdc0da:
    dVar2 = param_2[6];
    if ((param_1[6] != dVar2) || (NAN(param_1[6]) || NAN(dVar2))) {
      *(undefined1 *)((longlong)param_1 + 0x72) = 1;
      param_1[6] = dVar2;
    }
    if (param_3 != '\0') goto LAB_147fdc0fa;
LAB_147fdc100:
    fVar1 = *(float *)(param_2 + 8);
    if ((*(float *)(param_1 + 8) != fVar1) || (NAN(*(float *)(param_1 + 8)) || NAN(fVar1))) {
      *(undefined1 *)((longlong)param_1 + 0x73) = 1;
      *(float *)(param_1 + 8) = fVar1;
    }
    if (param_3 != '\0') goto LAB_147fdc11f;
LAB_147fdc125:
    fVar1 = *(float *)((longlong)param_2 + 0x44);
    if ((*(float *)((longlong)param_1 + 0x44) != fVar1) ||
       (NAN(*(float *)((longlong)param_1 + 0x44)) || NAN(fVar1))) {
      *(undefined1 *)((longlong)param_1 + 0x74) = 1;
      *(float *)((longlong)param_1 + 0x44) = fVar1;
    }
    if (param_3 != '\0') goto LAB_147fdc144;
LAB_147fdc14a:
    fVar1 = *(float *)(param_2 + 9);
    if ((*(float *)(param_1 + 9) != fVar1) || (NAN(*(float *)(param_1 + 9)) || NAN(fVar1))) {
      *(undefined1 *)((longlong)param_1 + 0x75) = 1;
      *(float *)(param_1 + 9) = fVar1;
    }
    if (param_3 != '\0') goto LAB_147fdc169;
LAB_147fdc16f:
    fVar1 = *(float *)((longlong)param_2 + 0x4c);
    if ((*(float *)((longlong)param_1 + 0x4c) != fVar1) ||
       (NAN(*(float *)((longlong)param_1 + 0x4c)) || NAN(fVar1))) {
      *(undefined1 *)((longlong)param_1 + 0x76) = 1;
      *(float *)((longlong)param_1 + 0x4c) = fVar1;
    }
    if (param_3 != '\0') goto LAB_147fdc18e;
LAB_147fdc194:
    fVar1 = *(float *)(param_2 + 10);
    if ((*(float *)(param_1 + 10) != fVar1) || (NAN(*(float *)(param_1 + 10)) || NAN(fVar1))) {
      *(undefined1 *)((longlong)param_1 + 0x77) = 1;
      *(float *)(param_1 + 10) = fVar1;
    }
    if (param_3 != '\0') goto LAB_147fdc1b3;
LAB_147fdc1b9:
    fVar1 = *(float *)((longlong)param_2 + 0x54);
    if ((*(float *)((longlong)param_1 + 0x54) != fVar1) ||
       (NAN(*(float *)((longlong)param_1 + 0x54)) || NAN(fVar1))) {
      *(undefined1 *)(param_1 + 0xf) = 1;
      *(float *)((longlong)param_1 + 0x54) = fVar1;
    }
    if (param_3 != '\0') goto LAB_147fdc1d8;
LAB_147fdc1de:
    fVar1 = *(float *)(param_2 + 0xb);
    if ((*(float *)(param_1 + 0xb) != fVar1) || (NAN(*(float *)(param_1 + 0xb)) || NAN(fVar1))) {
      *(undefined1 *)((longlong)param_1 + 0x79) = 1;
      *(float *)(param_1 + 0xb) = fVar1;
    }
    if (param_3 != '\0') goto LAB_147fdc1fd;
LAB_147fdc203:
    iVar6 = *(int *)((longlong)param_2 + 0x5c);
    if (*(int *)((longlong)param_1 + 0x5c) != iVar6) {
      *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
      *(int *)((longlong)param_1 + 0x5c) = iVar6;
    }
    if (param_3 != '\0') goto LAB_147fdc217;
LAB_147fdc21d:
    fVar1 = *(float *)(param_2 + 0xd);
    if ((*(float *)(param_1 + 0xd) != fVar1) || (NAN(*(float *)(param_1 + 0xd)) || NAN(fVar1))) {
      *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
      *(float *)(param_1 + 0xd) = fVar1;
    }
    if (param_3 != '\0') goto LAB_147fdc23c;
LAB_147fdc242:
    fVar1 = *(float *)(param_2 + 0xc);
    if ((*(float *)(param_1 + 0xc) != fVar1) || (NAN(*(float *)(param_1 + 0xc)) || NAN(fVar1))) {
      *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
      *(float *)(param_1 + 0xc) = fVar1;
    }
    if (param_3 != '\0') goto LAB_147fdc261;
LAB_147fdc267:
    fVar1 = *(float *)((longlong)param_2 + 100);
    if ((*(float *)((longlong)param_1 + 100) != fVar1) ||
       (NAN(*(float *)((longlong)param_1 + 100)) || NAN(fVar1))) {
      *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
      *(float *)((longlong)param_1 + 100) = fVar1;
    }
    if (param_3 != '\0') goto LAB_147fdc286;
LAB_147fdc28c:
    fVar1 = *(float *)(param_2 + 7);
    if ((*(float *)(param_1 + 7) != fVar1) || (NAN(*(float *)(param_1 + 7)) || NAN(fVar1))) {
      *(undefined1 *)((longlong)param_1 + 0x7e) = 1;
      *(float *)(param_1 + 7) = fVar1;
    }
    if (param_3 != '\0') goto LAB_147fdc2ab;
LAB_147fdc2b1:
    fVar1 = *(float *)((longlong)param_2 + 0x3c);
    if ((*(float *)((longlong)param_1 + 0x3c) != fVar1) ||
       (NAN(*(float *)((longlong)param_1 + 0x3c)) || NAN(fVar1))) {
      *(undefined1 *)((longlong)param_1 + 0x7f) = 1;
      *(float *)((longlong)param_1 + 0x3c) = fVar1;
    }
    if (param_3 != '\0') goto LAB_147fdc2d0;
LAB_147fdc2d9:
    cVar5 = *(char *)((longlong)param_2 + 0x6c);
    if (*(char *)((longlong)param_1 + 0x6c) != cVar5) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(char *)((longlong)param_1 + 0x6c) = cVar5;
    }
    if (param_3 != '\0') goto LAB_147fdc2f0;
LAB_147fdc2f9:
    cVar5 = *(char *)((longlong)param_2 + 0x6d);
    if (*(char *)((longlong)param_1 + 0x6d) != cVar5) {
      *(undefined1 *)((longlong)param_1 + 0x81) = 1;
      *(char *)((longlong)param_1 + 0x6d) = cVar5;
    }
    if (param_3 != '\0') goto LAB_147fdc310;
LAB_147fdc319:
    cVar5 = *(char *)((longlong)param_2 + 0x6e);
    if (*(char *)((longlong)param_1 + 0x6e) != cVar5) {
      *(undefined1 *)((longlong)param_1 + 0x82) = 1;
      *(char *)((longlong)param_1 + 0x6e) = cVar5;
    }
    if (param_3 == '\0') goto LAB_147fdc339;
  }
  else {
LAB_147fdc096:
    if (*(char *)((longlong)param_2 + 0x71) == '\x01') goto LAB_147fdc09c;
LAB_147fdc0d4:
    if (*(char *)((longlong)param_2 + 0x72) == '\x01') goto LAB_147fdc0da;
LAB_147fdc0fa:
    if (*(char *)((longlong)param_2 + 0x73) == '\x01') goto LAB_147fdc100;
LAB_147fdc11f:
    if (*(char *)((longlong)param_2 + 0x74) == '\x01') goto LAB_147fdc125;
LAB_147fdc144:
    if (*(char *)((longlong)param_2 + 0x75) == '\x01') goto LAB_147fdc14a;
LAB_147fdc169:
    if (*(char *)((longlong)param_2 + 0x76) == '\x01') goto LAB_147fdc16f;
LAB_147fdc18e:
    if (*(char *)((longlong)param_2 + 0x77) == '\x01') goto LAB_147fdc194;
LAB_147fdc1b3:
    if (*(char *)(param_2 + 0xf) == '\x01') goto LAB_147fdc1b9;
LAB_147fdc1d8:
    if (*(char *)((longlong)param_2 + 0x79) == '\x01') goto LAB_147fdc1de;
LAB_147fdc1fd:
    if (*(char *)((longlong)param_2 + 0x7a) == '\x01') goto LAB_147fdc203;
LAB_147fdc217:
    if (*(char *)((longlong)param_2 + 0x7b) == '\x01') goto LAB_147fdc21d;
LAB_147fdc23c:
    if (*(char *)((longlong)param_2 + 0x7c) == '\x01') goto LAB_147fdc242;
LAB_147fdc261:
    if (*(char *)((longlong)param_2 + 0x7d) == '\x01') goto LAB_147fdc267;
LAB_147fdc286:
    if (*(char *)((longlong)param_2 + 0x7e) == '\x01') goto LAB_147fdc28c;
LAB_147fdc2ab:
    if (*(char *)((longlong)param_2 + 0x7f) == '\x01') goto LAB_147fdc2b1;
LAB_147fdc2d0:
    if (*(char *)(param_2 + 0x10) == '\x01') goto LAB_147fdc2d9;
LAB_147fdc2f0:
    if (*(char *)((longlong)param_2 + 0x81) == '\x01') goto LAB_147fdc2f9;
LAB_147fdc310:
    if (*(char *)((longlong)param_2 + 0x82) == '\x01') goto LAB_147fdc319;
  }
  if (*(char *)((longlong)param_2 + 0x83) != '\x01') {
    return;
  }
LAB_147fdc339:
  cVar5 = *(char *)((longlong)param_2 + 0x6f);
  if (*(char *)((longlong)param_1 + 0x6f) != cVar5) {
    *(undefined1 *)((longlong)param_1 + 0x83) = 1;
    *(char *)((longlong)param_1 + 0x6f) = cVar5;
  }
  return;
}



// FUNCTION 147fdc3aa thunk_FUN_147fdc056 body=8 status=ok
// SIG undefined thunk_FUN_147fdc056(void)

void thunk_FUN_147fdc056(undefined8 param_1,undefined8 param_2)

{
  FUN_147fdc056(param_1,param_2,1);
  return;
}



// FUNCTION 147fdc3b2 FUN_147fdc3b2 body=2368 status=ok
// SIG undefined FUN_147fdc3b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147fdc3b2(double *param_1,double *param_2,float param_3,char *param_4,undefined1 *param_5)

{
  double dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  uint uVar6;
  double *pdVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  if ((param_3 == 0.0) && (!NAN(param_3))) {
    return;
  }
  if ((param_3 == 1.0) && (!NAN(param_3))) {
    if (*param_4 != '\0') {
      dVar12 = *param_2;
      dVar11 = param_2[1];
      dVar1 = param_2[2];
      if (((((*param_1 != dVar12) || (NAN(*param_1) || NAN(dVar12))) || (param_1[1] != dVar11)) ||
          ((NAN(param_1[1]) || NAN(dVar11) || (param_1[2] != dVar1)))) ||
         (NAN(param_1[2]) || NAN(dVar1))) {
        *(undefined1 *)(param_1 + 0xe) = 1;
        *param_1 = dVar12;
        param_1[1] = dVar11;
        param_1[2] = dVar1;
      }
      *param_5 = 1;
    }
    if (param_4[1] == '\x01') {
      dVar12 = param_2[3];
      dVar11 = param_2[4];
      dVar1 = param_2[5];
      if (((param_1[3] != dVar12) || (NAN(param_1[3]) || NAN(dVar12))) ||
         ((param_1[4] != dVar11 ||
          (((NAN(param_1[4]) || NAN(dVar11) || (param_1[5] != dVar1)) ||
           (NAN(param_1[5]) || NAN(dVar1))))))) {
        *(undefined1 *)((longlong)param_1 + 0x71) = 1;
        param_1[3] = dVar12;
        param_1[4] = dVar11;
        param_1[5] = dVar1;
      }
      param_5[1] = 1;
    }
    if (param_4[2] == '\x01') {
      dVar12 = param_2[6];
      if ((param_1[6] != dVar12) || (NAN(param_1[6]) || NAN(dVar12))) {
        *(undefined1 *)((longlong)param_1 + 0x72) = 1;
        param_1[6] = dVar12;
      }
      param_5[2] = 1;
    }
    if (param_4[3] == '\x01') {
      fVar9 = *(float *)(param_2 + 8);
      if ((*(float *)(param_1 + 8) != fVar9) || (NAN(*(float *)(param_1 + 8)) || NAN(fVar9))) {
        *(undefined1 *)((longlong)param_1 + 0x73) = 1;
        *(float *)(param_1 + 8) = fVar9;
      }
      param_5[3] = 1;
    }
    if (param_4[4] == '\x01') {
      fVar9 = *(float *)((longlong)param_2 + 0x44);
      if ((*(float *)((longlong)param_1 + 0x44) != fVar9) ||
         (NAN(*(float *)((longlong)param_1 + 0x44)) || NAN(fVar9))) {
        *(undefined1 *)((longlong)param_1 + 0x74) = 1;
        *(float *)((longlong)param_1 + 0x44) = fVar9;
      }
      param_5[4] = 1;
    }
    if (param_4[5] == '\x01') {
      fVar9 = *(float *)(param_2 + 9);
      if ((*(float *)(param_1 + 9) != fVar9) || (NAN(*(float *)(param_1 + 9)) || NAN(fVar9))) {
        *(undefined1 *)((longlong)param_1 + 0x75) = 1;
        *(float *)(param_1 + 9) = fVar9;
      }
      param_5[5] = 1;
    }
    if (param_4[6] == '\x01') {
      fVar9 = *(float *)((longlong)param_2 + 0x4c);
      if ((*(float *)((longlong)param_1 + 0x4c) != fVar9) ||
         (NAN(*(float *)((longlong)param_1 + 0x4c)) || NAN(fVar9))) {
        *(undefined1 *)((longlong)param_1 + 0x76) = 1;
        *(float *)((longlong)param_1 + 0x4c) = fVar9;
      }
      param_5[6] = 1;
    }
    if (param_4[7] == '\x01') {
      fVar9 = *(float *)(param_2 + 10);
      if ((*(float *)(param_1 + 10) != fVar9) || (NAN(*(float *)(param_1 + 10)) || NAN(fVar9))) {
        *(undefined1 *)((longlong)param_1 + 0x77) = 1;
        *(float *)(param_1 + 10) = fVar9;
      }
      param_5[7] = 1;
    }
    if (param_4[8] == '\x01') {
      fVar9 = *(float *)((longlong)param_2 + 0x54);
      if ((*(float *)((longlong)param_1 + 0x54) != fVar9) ||
         (NAN(*(float *)((longlong)param_1 + 0x54)) || NAN(fVar9))) {
        *(undefined1 *)(param_1 + 0xf) = 1;
        *(float *)((longlong)param_1 + 0x54) = fVar9;
      }
      param_5[8] = 1;
    }
    if (param_4[9] == '\x01') {
      fVar9 = *(float *)(param_2 + 0xb);
      if ((*(float *)(param_1 + 0xb) != fVar9) || (NAN(*(float *)(param_1 + 0xb)) || NAN(fVar9))) {
        *(undefined1 *)((longlong)param_1 + 0x79) = 1;
        *(float *)(param_1 + 0xb) = fVar9;
      }
      param_5[9] = 1;
    }
    if (param_4[10] == '\x01') {
      iVar3 = *(int *)((longlong)param_2 + 0x5c);
      if (*(int *)((longlong)param_1 + 0x5c) != iVar3) {
        *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
        *(int *)((longlong)param_1 + 0x5c) = iVar3;
      }
      param_5[10] = 1;
    }
    if (param_4[0xb] == '\x01') {
      fVar9 = *(float *)(param_2 + 0xd);
      if ((*(float *)(param_1 + 0xd) != fVar9) || (NAN(*(float *)(param_1 + 0xd)) || NAN(fVar9))) {
        *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
        *(float *)(param_1 + 0xd) = fVar9;
      }
      param_5[0xb] = 1;
    }
    if (param_4[0xc] == '\x01') {
      fVar9 = *(float *)(param_2 + 0xc);
      if ((*(float *)(param_1 + 0xc) != fVar9) || (NAN(*(float *)(param_1 + 0xc)) || NAN(fVar9))) {
        *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
        *(float *)(param_1 + 0xc) = fVar9;
      }
      param_5[0xc] = 1;
    }
    if (param_4[0xd] == '\x01') {
      fVar9 = *(float *)((longlong)param_2 + 100);
      if ((*(float *)((longlong)param_1 + 100) != fVar9) ||
         (NAN(*(float *)((longlong)param_1 + 100)) || NAN(fVar9))) {
        *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
        *(float *)((longlong)param_1 + 100) = fVar9;
      }
      param_5[0xd] = 1;
    }
    if (param_4[0x10] == '\x01') {
      cVar2 = *(char *)((longlong)param_2 + 0x6c);
      if (*(char *)((longlong)param_1 + 0x6c) != cVar2) {
        *(undefined1 *)(param_1 + 0x10) = 1;
        *(char *)((longlong)param_1 + 0x6c) = cVar2;
      }
      param_5[0x10] = 1;
    }
    if (param_4[0x11] == '\x01') {
      cVar2 = *(char *)((longlong)param_2 + 0x6d);
      if (*(char *)((longlong)param_1 + 0x6d) != cVar2) {
        *(undefined1 *)((longlong)param_1 + 0x81) = 1;
        *(char *)((longlong)param_1 + 0x6d) = cVar2;
      }
      param_5[0x11] = 1;
    }
    if (param_4[0x12] == '\x01') {
      cVar2 = *(char *)((longlong)param_2 + 0x6e);
      if (*(char *)((longlong)param_1 + 0x6e) != cVar2) {
        *(undefined1 *)((longlong)param_1 + 0x82) = 1;
        *(char *)((longlong)param_1 + 0x6e) = cVar2;
      }
      param_5[0x12] = 1;
    }
    if (param_4[0x13] == '\x01') {
      cVar2 = *(char *)((longlong)param_2 + 0x6f);
      if (*(char *)((longlong)param_1 + 0x6f) != cVar2) {
        *(undefined1 *)((longlong)param_1 + 0x83) = 1;
        *(char *)((longlong)param_1 + 0x6f) = cVar2;
      }
      param_5[0x13] = 1;
    }
    if ((param_4[0xe] == '\0') && (param_4[0xf] != '\x01')) {
      return;
    }
    fVar9 = *(float *)((longlong)param_2 + 0x3c);
    if ((*(float *)((longlong)param_1 + 0x3c) != fVar9) ||
       (NAN(*(float *)((longlong)param_1 + 0x3c)) || NAN(fVar9))) {
      *(undefined1 *)((longlong)param_1 + 0x7f) = 1;
      *(float *)((longlong)param_1 + 0x3c) = fVar9;
    }
    fVar9 = *(float *)(param_2 + 7);
    if ((*(float *)(param_1 + 7) == fVar9) && (!NAN(*(float *)(param_1 + 7)) && !NAN(fVar9))) {
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x7e) = 1;
    *(float *)(param_1 + 7) = fVar9;
    return;
  }
  if (*param_4 != '\0') {
    dVar12 = *param_1;
    dVar11 = param_1[1];
    dVar1 = param_1[2];
    dVar22 = (double)param_3;
    dVar10 = (param_2[2] - dVar1) * dVar22 + dVar1;
    dVar17 = (param_2[1] - dVar11) * dVar22 + dVar11;
    dVar22 = (*param_2 - dVar12) * dVar22 + dVar12;
    if ((((dVar12 != dVar22) || (NAN(dVar12) || NAN(dVar22))) || (dVar11 != dVar17)) ||
       (NAN(dVar11) || NAN(dVar17))) {
LAB_147fdc773:
      *(undefined1 *)(param_1 + 0xe) = 1;
      *param_1 = dVar22;
      param_1[1] = dVar17;
      param_1[2] = dVar10;
    }
    else if ((dVar1 != dVar10) || (NAN(dVar1) || NAN(dVar10))) goto LAB_147fdc773;
    *param_5 = 1;
  }
  if (param_4[1] != '\x01') goto LAB_147fdc8d0;
  dVar12 = param_1[3];
  dVar11 = param_1[4];
  dVar1 = param_1[5];
  dVar10 = (double)DAT_1499387d0;
  dVar17 = DAT_1499387d0._8_8_;
  auVar19._8_8_ = param_2[4] - dVar11;
  auVar19._0_8_ = param_2[3] - dVar12;
  auVar13 = divpd(auVar19,_DAT_1499387d0);
  auVar18._0_8_ = (param_2[5] - dVar1) / 360.0;
  auVar18._8_8_ = 0;
  auVar13 = roundpd(auVar13,auVar13,3);
  auVar19 = roundpd(auVar18,auVar18,3);
  auVar24._0_8_ = (param_2[5] - dVar1) - auVar19._0_8_ * dVar10;
  auVar24._8_8_ = 0.0 - auVar19._8_8_ * dVar17;
  dVar22 = (param_2[3] - dVar12) - auVar13._0_8_ * dVar10;
  dVar5 = (param_2[4] - dVar11) - auVar13._8_8_ * dVar17;
  auVar21._0_8_ = dVar22 + dVar10;
  auVar21._8_8_ = dVar5 + dVar17;
  auVar23._0_8_ = dVar10 + auVar24._0_8_;
  auVar23._8_8_ = dVar17 + auVar24._8_8_;
  auVar14._8_8_ = -(ulonglong)(0.0 <= dVar5);
  auVar14._0_8_ = -(ulonglong)(0.0 <= dVar22);
  auVar13._8_4_ = SUB84(dVar5,0);
  auVar13._0_8_ = dVar22;
  auVar13._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar13 = blendvpd(auVar21,auVar13,auVar14);
  auVar15._8_8_ = -(ulonglong)(0.0 <= auVar24._8_8_);
  auVar15._0_8_ = -(ulonglong)(0.0 <= auVar24._0_8_);
  auVar19 = blendvpd(auVar23,auVar24,auVar15);
  auVar20._0_8_ = auVar13._0_8_ + -360.0;
  auVar20._8_8_ = auVar13._8_8_ + -360.0;
  auVar16._8_8_ = -(ulonglong)(180.0 < auVar13._8_8_);
  auVar16._0_8_ = -(ulonglong)(180.0 < auVar13._0_8_);
  auVar13 = blendvpd(auVar13,auVar20,auVar16);
  dVar10 = auVar19._0_8_;
  dVar22 = (double)param_3;
  dVar10 = (double)(~-(ulonglong)(180.0 < dVar10) & (ulonglong)dVar10 |
                   (ulonglong)(dVar10 + -360.0) & -(ulonglong)(180.0 < dVar10)) * dVar22 + dVar1;
  dVar17 = auVar13._8_8_ * dVar22 + dVar11;
  dVar22 = auVar13._0_8_ * dVar22 + dVar12;
  if (((dVar12 != dVar22) || (NAN(dVar12) || NAN(dVar22))) ||
     ((dVar11 != dVar17 || (NAN(dVar11) || NAN(dVar17))))) {
LAB_147fdc8b8:
    *(undefined1 *)((longlong)param_1 + 0x71) = 1;
    param_1[3] = dVar22;
    param_1[4] = dVar17;
    param_1[5] = dVar10;
  }
  else if ((dVar1 != dVar10) || (NAN(dVar1) || NAN(dVar10))) goto LAB_147fdc8b8;
  param_5[1] = 1;
LAB_147fdc8d0:
  if (param_4[2] == '\x01') {
    dVar12 = param_1[6];
    dVar11 = (param_2[6] - dVar12) * (double)param_3 + dVar12;
    if ((dVar12 != dVar11) || (NAN(dVar12) || NAN(dVar11))) {
      *(undefined1 *)((longlong)param_1 + 0x72) = 1;
      param_1[6] = dVar11;
    }
    param_5[2] = 1;
  }
  if (param_4[3] == '\x01') {
    fVar9 = *(float *)(param_1 + 8);
    fVar8 = (*(float *)(param_2 + 8) - fVar9) * param_3 + fVar9;
    if ((fVar9 != fVar8) || (NAN(fVar9) || NAN(fVar8))) {
      *(undefined1 *)((longlong)param_1 + 0x73) = 1;
      *(float *)(param_1 + 8) = fVar8;
    }
    param_5[3] = 1;
  }
  if (param_4[4] == '\x01') {
    fVar9 = *(float *)((longlong)param_1 + 0x44);
    fVar8 = (*(float *)((longlong)param_2 + 0x44) - fVar9) * param_3 + fVar9;
    if ((fVar9 != fVar8) || (NAN(fVar9) || NAN(fVar8))) {
      *(undefined1 *)((longlong)param_1 + 0x74) = 1;
      *(float *)((longlong)param_1 + 0x44) = fVar8;
    }
    param_5[4] = 1;
  }
  if (param_4[5] == '\x01') {
    fVar9 = *(float *)(param_1 + 9);
    fVar8 = (*(float *)(param_2 + 9) - fVar9) * param_3 + fVar9;
    if ((fVar9 != fVar8) || (NAN(fVar9) || NAN(fVar8))) {
      *(undefined1 *)((longlong)param_1 + 0x75) = 1;
      *(float *)(param_1 + 9) = fVar8;
    }
    param_5[5] = 1;
  }
  if (param_4[6] == '\x01') {
    fVar9 = *(float *)((longlong)param_1 + 0x4c);
    fVar8 = (*(float *)((longlong)param_2 + 0x4c) - fVar9) * param_3 + fVar9;
    if ((fVar9 != fVar8) || (NAN(fVar9) || NAN(fVar8))) {
      *(undefined1 *)((longlong)param_1 + 0x76) = 1;
      *(float *)((longlong)param_1 + 0x4c) = fVar8;
    }
    param_5[6] = 1;
  }
  if (param_4[7] == '\x01') {
    fVar9 = *(float *)(param_1 + 10);
    fVar8 = (*(float *)(param_2 + 10) - fVar9) * param_3 + fVar9;
    if ((fVar9 != fVar8) || (NAN(fVar9) || NAN(fVar8))) {
      *(undefined1 *)((longlong)param_1 + 0x77) = 1;
      *(float *)(param_1 + 10) = fVar8;
    }
    param_5[7] = 1;
  }
  if (param_4[8] == '\x01') {
    fVar9 = *(float *)((longlong)param_1 + 0x54);
    fVar8 = (*(float *)((longlong)param_2 + 0x54) - fVar9) * param_3 + fVar9;
    if ((fVar9 != fVar8) || (NAN(fVar9) || NAN(fVar8))) {
      *(undefined1 *)(param_1 + 0xf) = 1;
      *(float *)((longlong)param_1 + 0x54) = fVar8;
    }
    param_5[8] = 1;
  }
  if (param_4[9] == '\x01') {
    fVar9 = *(float *)(param_1 + 0xb);
    fVar8 = (*(float *)(param_2 + 0xb) - fVar9) * param_3 + fVar9;
    if ((fVar9 != fVar8) || (NAN(fVar9) || NAN(fVar8))) {
      *(undefined1 *)((longlong)param_1 + 0x79) = 1;
      *(float *)(param_1 + 0xb) = fVar8;
    }
    param_5[9] = 1;
  }
  pdVar7 = param_1;
  if (param_4[10] == '\x01') {
    uVar4 = *(uint *)((longlong)param_1 + 0x5c);
    pdVar7 = (double *)(ulonglong)uVar4;
    uVar6 = (uint)((float)(int)(*(int *)((longlong)param_2 + 0x5c) - uVar4) * param_3 +
                  (float)(int)uVar4);
    if (uVar4 != uVar6) {
      *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
      *(uint *)((longlong)param_1 + 0x5c) = uVar6;
    }
    param_5[10] = 1;
  }
  if (param_4[0xb] == '\x01') {
    fVar9 = *(float *)(param_1 + 0xd);
    fVar8 = (*(float *)(param_2 + 0xd) - fVar9) * param_3 + fVar9;
    if ((fVar9 != fVar8) || (NAN(fVar9) || NAN(fVar8))) {
      *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
      *(float *)(param_1 + 0xd) = fVar8;
    }
    param_5[0xb] = 1;
  }
  if (param_4[0xc] == '\x01') {
    fVar9 = *(float *)(param_1 + 0xc);
    fVar8 = (*(float *)(param_2 + 0xc) - fVar9) * param_3 + fVar9;
    if ((fVar9 != fVar8) || (NAN(fVar9) || NAN(fVar8))) {
      *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
      *(float *)(param_1 + 0xc) = fVar8;
    }
    param_5[0xc] = 1;
  }
  if (param_4[0xd] == '\x01') {
    fVar9 = *(float *)((longlong)param_1 + 100);
    fVar8 = (*(float *)((longlong)param_2 + 100) - fVar9) * param_3 + fVar9;
    if ((fVar9 != fVar8) || (NAN(fVar9) || NAN(fVar8))) {
      *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
      *(float *)((longlong)param_1 + 100) = fVar8;
    }
    param_5[0xd] = 1;
  }
  if ((param_4[0xe] != '\0') || (param_4[0xf] == '\x01')) {
    fVar9 = *(float *)((longlong)param_1 + 0x3c);
    if ((fVar9 <= 0.0) || (*(float *)((longlong)param_2 + 0x3c) <= 0.0)) {
      dVar12 = (double)FUN_1438d8d80(pdVar7,param_2,*(undefined4 *)((longlong)param_1 + 0x4c),
                                     *(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0xb));
      dVar11 = (double)FUN_1438d8d80();
      fVar9 = ((float)dVar11 - (float)dVar12) * param_3 + (float)dVar12;
      if ((*(float *)(param_1 + 7) != fVar9) || (NAN(*(float *)(param_1 + 7)) || NAN(fVar9))) {
        *(undefined1 *)((longlong)param_1 + 0x7e) = 1;
        *(float *)(param_1 + 7) = fVar9;
      }
      fVar9 = *(float *)((longlong)param_1 + 0x3c);
      fVar8 = -1.0;
    }
    else {
      fVar8 = (*(float *)((longlong)param_2 + 0x3c) - fVar9) * param_3 + fVar9;
    }
    if ((fVar9 != fVar8) || (NAN(fVar9) || NAN(fVar8))) {
      *(undefined1 *)((longlong)param_1 + 0x7f) = 1;
      *(float *)((longlong)param_1 + 0x3c) = fVar8;
    }
    *(undefined2 *)(param_5 + 0xe) = 0x101;
  }
  if (param_4[0x10] == '\x01') {
    if ((0.5 <= param_3) &&
       (cVar2 = *(char *)((longlong)param_2 + 0x6c), *(char *)((longlong)param_1 + 0x6c) != cVar2))
    {
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(char *)((longlong)param_1 + 0x6c) = cVar2;
    }
    param_5[0x10] = 1;
  }
  if (param_4[0x11] == '\x01') {
    if ((0.5 <= param_3) &&
       (cVar2 = *(char *)((longlong)param_2 + 0x6d), *(char *)((longlong)param_1 + 0x6d) != cVar2))
    {
      *(undefined1 *)((longlong)param_1 + 0x81) = 1;
      *(char *)((longlong)param_1 + 0x6d) = cVar2;
    }
    param_5[0x11] = 1;
  }
  if (param_4[0x12] == '\x01') {
    if ((0.5 <= param_3) &&
       (cVar2 = *(char *)((longlong)param_2 + 0x6e), *(char *)((longlong)param_1 + 0x6e) != cVar2))
    {
      *(undefined1 *)((longlong)param_1 + 0x82) = 1;
      *(char *)((longlong)param_1 + 0x6e) = cVar2;
    }
    param_5[0x12] = 1;
  }
  if (param_4[0x13] == '\x01') {
    if ((0.5 <= param_3) &&
       (cVar2 = *(char *)((longlong)param_2 + 0x6f), *(char *)((longlong)param_1 + 0x6f) != cVar2))
    {
      *(undefined1 *)((longlong)param_1 + 0x83) = 1;
      *(char *)((longlong)param_1 + 0x6f) = cVar2;
    }
    param_5[0x13] = 1;
  }
                    /* WARNING: Read-only address (ram,0x0001499387d0) is written */
  return;
}



// FUNCTION 147fdccf2 FUN_147fdccf2 body=2357 status=ok
// SIG undefined FUN_147fdccf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147fdccf2(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb294f8) {
    FUN_144b3d300(&DAT_14cb294f8);
    if (DAT_14cb294f8 == -1) {
      _DAT_14cb29490 = 0;
      uRam000000014cb29498 = 0;
      _DAT_14cb29480 = 0;
      uRam000000014cb29488 = 0;
      _DAT_14cb29470 = 0;
      uRam000000014cb29478 = 0;
      _DAT_14cb294a0 = 0x408f400000000000;
      _DAT_14cb294a8 = 0x420c0000bf800000;
      uRam000000014cb294b0 = 0x4270000040333333;
      _DAT_14cb294b8 = 0xbf800000;
      uRam000000014cb294bc = 0x41c71eb8;
      uRam000000014cb294c0 = 0x41955c29;
      uRam000000014cb294c4 = 0x42c80000;
      _DAT_14cb294c8 = 0x83f800000;
      _DAT_14cb294d0 = 0xbf80000041200000;
      _DAT_14cb294d8 = 0;
      uRam000000014cb294e0 = 0;
      _DAT_14cb294e4 = 0;
      uRam000000014cb294e8 = 0;
      uRam000000014cb294ec = 0;
      _Init_thread_footer(&DAT_14cb294f8);
    }
  }
  if (DAT_14cb29448 == 0) {
    uVar2 = FUN_140d2376e();
    DAT_14cb29448 = FUN_140002ddd(FUN_146457d9f,uVar2,L"CameraPose");
  }
  FUN_14047320e(DAT_14cb29448,param_1,param_2,&DAT_14cb29470);
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x70);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x70) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x70) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x71);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x71) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x71) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x72);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x72) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x72) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x73);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x73) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x73) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x74);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x74) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x74) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x75);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x75) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x75) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x76);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x76) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x76) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x77);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x77) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x77) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x78);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x78) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x78) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x79);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x79) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x79) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x7a);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x7a) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x7a) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x7b);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x7b) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x7b) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x7c);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x7c) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x7c) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x7d);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x7d) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x7d) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x7e);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x7e) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x7e) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x7f);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x7f) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x7f) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x80);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x80) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x80) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x81);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x81) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x81) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x82);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x82) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x82) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x83);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x83) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x83) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdd630 FUN_147fdd630 body=92 status=ok
// SIG undefined FUN_147fdd630(void)

void FUN_147fdd630(short *param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = param_1[1];
  if (param_1[1] < param_2[1]) {
    sVar1 = param_2[1];
  }
  param_1[1] = sVar1;
  *param_1 = (-param_2[1] & (*param_1 + param_2[1]) - 1U) + *param_2;
  FUN_147fdd68c(param_1 + 0xc,param_2 + 0xc);
  FUN_147fdd6ea(param_1 + 4,param_2 + 4);
  return;
}



// FUNCTION 147fdd68c FUN_147fdd68c body=94 status=ok
// SIG undefined FUN_147fdd68c(void)

void FUN_147fdd68c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_148003118(param_1,iVar2);
  }
  FUN_147fd69c6((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147fdd6ea FUN_147fdd6ea body=104 status=ok
// SIG undefined FUN_147fdd6ea(void)

void FUN_147fdd6ea(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_147fd807e(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0xc + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0xc);
    return;
  }
  return;
}



// FUNCTION 147fdd752 FUN_147fdd752 body=75 status=ok
// SIG undefined FUN_147fdd752(void)

undefined8 FUN_147fdd752(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 1) == *(int *)(param_2 + 1)) {
    cVar1 = FUN_1480103e0(*param_1,*param_2);
    if ((cVar1 != '\0') && (*(int *)(param_1 + 3) == *(int *)(param_2 + 3))) {
      uVar2 = FUN_148010426(param_1[2],param_2[2]);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147fdd79e FUN_147fdd79e body=100 status=ok
// SIG undefined FUN_147fdd79e(void)

void FUN_147fdd79e(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x54) == 0 && *(int *)(param_1 + 0x50) == 0) &&
      *(int *)(param_1 + 0x58) == 0) && *(int *)(param_1 + 0x5c) == 0) {
    FUN_1412e3d1e(&local_30);
    *(undefined4 *)(param_1 + 0x50) = local_30;
    *(undefined4 *)(param_1 + 0x54) = uStack_2c;
    *(undefined4 *)(param_1 + 0x58) = uStack_28;
    *(undefined4 *)(param_1 + 0x5c) = uStack_24;
  }
  FUN_1446e0b6e(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdd804 FUN_147fdd804 body=94 status=ok
// SIG undefined FUN_147fdd804(void)

void FUN_147fdd804(longlong *param_1,int param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
  if (param_2 == 0) {
    FUN_1412e3d1e(&local_28);
    *(undefined4 *)(param_1 + 10) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x54) = uStack_24;
    *(undefined4 *)(param_1 + 0xb) = uStack_20;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdd864 FUN_147fdd864 body=197 status=ok
// SIG undefined FUN_147fdd864(void)

longlong FUN_147fdd864(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  plVar1 = plVar4 + *(int *)(param_1 + 0x18);
  iVar2 = (int)param_2[1];
LAB_147fdd88e:
  lVar3 = *plVar4;
  if (*(int *)(lVar3 + 0x48) == iVar2) {
    if (1 < iVar2) {
      lVar5 = 0;
      do {
        uVar7 = *(ushort *)(*(longlong *)(lVar3 + 0x40) + lVar5);
        uVar8 = (ulonglong)uVar7;
        uVar6 = *(ushort *)(*param_2 + lVar5);
        if (uVar7 == uVar6) {
          if (uVar7 == 0) break;
        }
        else {
          if (0x7f < (uVar6 | uVar7)) goto LAB_147fdd8f6;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar9 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_147fdd8f6;
        }
        lVar5 = lVar5 + 2;
      } while( true );
    }
    goto LAB_147fdd8fc;
  }
  if (*(int *)(lVar3 + 0x48) + iVar2 == 1) goto LAB_147fdd8fc;
  goto LAB_147fdd8eb;
LAB_147fdd8f6:
  if (uVar7 == uVar6) {
LAB_147fdd8fc:
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
    if (lVar3 != 0) {
      if (DAT_14c950c29 != '\0') {
        FUN_1456cec3c(lVar3);
        return lVar3;
      }
      return lVar3;
    }
    return 0;
  }
LAB_147fdd8eb:
  plVar4 = plVar4 + 1;
  if (plVar4 == plVar1) {
    return 0;
  }
  goto LAB_147fdd88e;
}



// FUNCTION 147fdd92a FUN_147fdd92a body=112 status=ok
// SIG undefined FUN_147fdd92a(void)

longlong FUN_147fdd92a(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    lVar2 = (longlong)*(int *)(param_1 + 0x18) << 3;
    do {
      lVar1 = *plVar3;
      if ((((*(int *)(lVar1 + 0x50) == *param_2) && (*(int *)(lVar1 + 0x54) == param_2[1])) &&
          (*(int *)(lVar1 + 0x58) == param_2[2])) && (*(int *)(lVar1 + 0x5c) == param_2[3])) {
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        if (lVar1 != 0) {
          if (DAT_14c950c29 != '\0') {
            FUN_1456cec3c(lVar1);
            return lVar1;
          }
          return lVar1;
        }
        return 0;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 147fdd99a FUN_147fdd99a body=115 status=ok
// SIG undefined FUN_147fdd99a(void)

void FUN_147fdd99a(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0xe8) == 0 && *(int *)(param_1 + 0xe4) == 0) &&
      *(int *)(param_1 + 0xec) == 0) && *(int *)(param_1 + 0xf0) == 0) {
    FUN_1412e3d1e(&local_30);
    *(undefined4 *)(param_1 + 0xe4) = local_30;
    *(undefined4 *)(param_1 + 0xe8) = uStack_2c;
    *(undefined4 *)(param_1 + 0xec) = uStack_28;
    *(undefined4 *)(param_1 + 0xf0) = uStack_24;
  }
  FUN_1446e0b6e(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdda0e FUN_147fdda0e body=97 status=ok
// SIG undefined FUN_147fdda0e(void)

void FUN_147fdda0e(longlong *param_1,int param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
  if (param_2 == 0) {
    FUN_1412e3d1e(&local_28);
    *(undefined4 *)((longlong)param_1 + 0xe4) = local_28;
    *(undefined4 *)(param_1 + 0x1d) = uStack_24;
    *(undefined4 *)((longlong)param_1 + 0xec) = uStack_20;
    *(undefined4 *)(param_1 + 0x1e) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdda80 FUN_147fdda80 body=330 status=ok
// SIG undefined FUN_147fdda80(void)

void FUN_147fdda80(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_198 [40];
  undefined8 *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_120 = 0;
  local_118 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_170 = (undefined8 *)0x0;
  local_168 = 0;
  local_160 = param_2;
  FUN_1446efa72(&local_170,0,2,0x10);
  puVar1 = local_170;
  local_168 = 2;
  *local_170 = &PTR_LAB_14ad29ad0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ad29a60;
  FUN_147fdde88(&local_160,param_1,&local_170);
  FUN_147fd2e38(&local_160);
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fddbd4 FUN_147fddbd4 body=68 status=ok
// SIG undefined FUN_147fddbd4(void)

void FUN_147fddbd4(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fddc19 FUN_147fddc19 body=325 status=ok
// SIG undefined FUN_147fddc19(void)

void FUN_147fddc19(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_EAX;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  
  auVar3._8_8_ = -(ulonglong)(*(double *)(param_1 + 0x68) != param_2[5]);
  auVar3._0_8_ = -(ulonglong)(*(double *)(param_1 + 0x60) != param_2[4]);
  iVar9 = movmskpd(in_EAX,auVar3);
  auVar5._8_8_ = -(ulonglong)(*(double *)(param_1 + 0x78) != param_2[7]);
  auVar5._0_8_ = -(ulonglong)(*(double *)(param_1 + 0x70) != param_2[6]);
  uVar10 = movmskpd((int)param_1,auVar5);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    auVar7._8_8_ = -(ulonglong)(*(double *)(param_1 + 0x48) != param_2[1]);
    auVar7._0_8_ = -(ulonglong)(*(double *)(param_1 + 0x40) != *param_2);
    uVar10 = movmskpd(iVar9,auVar7);
    auVar8._8_8_ = -(ulonglong)(*(double *)(param_1 + 0x58) != param_2[3]);
    auVar8._0_8_ = -(ulonglong)(*(double *)(param_1 + 0x50) != param_2[2]);
    iVar9 = movmskpd(0,auVar8);
    uVar11 = iVar9 << 2 | uVar10;
    if (uVar11 != 0) {
      auVar2._8_8_ = -(ulonglong)(*(double *)(param_1 + 0x48) + param_2[1] != 0.0);
      auVar2._0_8_ = -(ulonglong)(*(double *)(param_1 + 0x40) + *param_2 != 0.0);
      uVar10 = movmskpd(uVar10,auVar2);
      auVar1._8_8_ = -(ulonglong)(*(double *)(param_1 + 0x58) + param_2[3] != 0.0);
      auVar1._0_8_ = -(ulonglong)(*(double *)(param_1 + 0x50) + param_2[2] != 0.0);
      uVar11 = movmskpd(uVar11,auVar1);
      if ((uVar11 & 0x3fffffff) != 0 || uVar10 != 0) goto LAB_147fddc65;
    }
    auVar4._8_8_ = -(ulonglong)(*(double *)(param_1 + 0x88) != param_2[9]);
    auVar4._0_8_ = -(ulonglong)(*(double *)(param_1 + 0x80) != param_2[8]);
    iVar9 = movmskpd(uVar10,auVar4);
    auVar6._8_8_ = -(ulonglong)(*(double *)(param_1 + 0x98) != param_2[0xb]);
    auVar6._0_8_ = -(ulonglong)(*(double *)(param_1 + 0x90) != param_2[10]);
    uVar10 = movmskpd(0,auVar6);
    if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
      return;
    }
  }
LAB_147fddc65:
  pdVar13 = (double *)(param_1 + 0x40);
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar13 = *param_2;
    param_2 = param_2 + 1;
    pdVar13 = pdVar13 + 1;
  }
  return;
}



// FUNCTION 147fddd5e FUN_147fddd5e body=232 status=ok
// SIG undefined FUN_147fddd5e(void)

void FUN_147fddd5e(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_1 != (longlong *)0x0) {
    uVar5 = FUN_1447addd0((longlong)param_1 + 0x2c,0x10);
    uVar6 = (**(code **)(*param_1 + 0x2a0))(param_1);
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x29);
    uVar2 = *(undefined1 *)((longlong)param_1 + 0x2a);
    iVar3 = (int)param_2[1];
    lVar7 = (longlong)iVar3;
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_147fd807e(param_2,iVar3);
    }
    lVar4 = *param_2;
    *(undefined4 *)(lVar4 + lVar7 * 0xc) = uVar5;
    *(undefined4 *)(lVar4 + 4 + lVar7 * 0xc) = uVar6;
    *(undefined1 *)(lVar4 + 8 + lVar7 * 0xc) = uVar1;
    *(undefined1 *)(lVar4 + 9 + lVar7 * 0xc) = uVar2;
    if ((char)param_1[5] == '\x01') {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_1);
      }
      iVar3 = (int)param_2[3];
      *(uint *)(param_2 + 3) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0x1c) < iVar3 + 1U) {
        FUN_148003118(param_2 + 2,iVar3);
      }
      *(longlong **)(param_2[2] + (longlong)iVar3 * 8) = param_1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147fdde46 FUN_147fdde46 body=65 status=ok
// SIG undefined FUN_147fdde46(void)

undefined4 * FUN_147fdde46(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1447addd0((longlong)param_1 + 0x2c,0x10);
  *param_2 = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x2a0))(param_1);
  param_2[1] = uVar1;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)((longlong)param_1 + 0x29);
  *(undefined1 *)((longlong)param_2 + 9) = *(undefined1 *)((longlong)param_1 + 0x2a);
  return param_2;
}



// FUNCTION 147fdde88 FUN_147fdde88 body=284 status=ok
// SIG undefined FUN_147fdde88(void)

void FUN_147fdde88(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    param_1[1] = param_2;
    lVar3 = *param_1;
    FUN_14010318a(param_2,local_58,0);
    FUN_144a882a8(local_48,local_58,&DAT_149e35320);
    FUN_147fd2d44(lVar3,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    FUN_147fddfa6(param_1);
    lVar3 = *param_1;
    lVar2 = param_1[1];
    if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_3 + 0x60))();
      lVar3 = *param_1;
      lVar2 = param_1[1];
    }
    FUN_1480031ac(lVar2,lVar3);
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_147fd2d44(*param_1,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = 2;
    if (*(char *)(*param_1 + 0x22) == '\0') {
      uVar1 = *(undefined1 *)(*param_1 + 0x21);
    }
    *(undefined1 *)(param_1[1] + 0xe0) = uVar1;
  }
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fddfa6 FUN_147fddfa6 body=675 status=ok
// SIG undefined FUN_147fddfa6(void)

void FUN_147fddfa6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0 [2];
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = param_1[1];
  if (*(longlong *)(lVar4 + 0x48) == 0) {
    uVar5 = *param_1;
    if (lVar4 == 0) {
      FUN_140056680(local_c0,&DAT_149e01fe8);
    }
    else {
      FUN_14010318a(lVar4,local_c0,0);
    }
    FUN_140233b1a(local_b0,local_c0);
    local_60 = L"MissingRootNode";
    local_58 = 0xf;
    FUN_1446e940c(local_e4,&local_60);
    local_60 = L"CameraRigAssetBuilder";
    local_58 = 0x15;
    FUN_1446e940c(local_e8,&local_60);
    FUN_140208bae(local_e0,local_e8,local_e4,L"Camera rig \'{0}\' has no root node.");
    FUN_14023409e(&local_d0,local_e0,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_b0);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_d0;
    local_88 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)local_c8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c8 + 0x10))(local_c8);
        }
      }
    }
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    FUN_147fd2ef2(uVar5,1,param_1[1],local_a0);
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_e0[0] != (longlong *)0x0) {
      (**(code **)(*local_e0[0] + 0x10))();
    }
    if (local_c0[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
  }
  FUN_147fde25e(param_1);
  iVar3 = *(int *)(param_1 + 3);
  if ((longlong)iVar3 != 0) {
    lVar4 = param_1[2];
    lVar6 = 0;
    do {
      (**(code **)(**(longlong **)(lVar4 + lVar6) + 0x2a8))(*(longlong **)(lVar4 + lVar6),*param_1);
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 * 8 != lVar6);
  }
  FUN_1438d8e5a(param_1);
  FUN_147fde2a6(param_1);
  FUN_147fdef26(param_1);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    FUN_147fdf3a6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fde25e FUN_147fde25e body=71 status=ok
// SIG undefined FUN_147fde25e(void)

void FUN_147fde25e(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  FUN_147fdb148(param_1 + 0x10,lVar1);
  return;
}



// FUNCTION 147fde2a6 FUN_147fde2a6 body=3198 status=ok
// SIG undefined FUN_147fde2a6(void)

void FUN_147fde2a6(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  longlong lVar13;
  uint uVar14;
  wchar_t *pwVar15;
  uint uVar16;
  longlong *plVar17;
  undefined1 auStack_2b8 [40];
  longlong local_290;
  longlong local_288;
  longlong *local_280;
  longlong local_278;
  longlong *local_270;
  undefined8 local_268;
  longlong *local_260;
  longlong *local_258 [2];
  longlong *local_248 [2];
  longlong *local_238 [2];
  undefined1 local_228 [4];
  undefined1 local_224 [4];
  wchar_t *local_220 [2];
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong *local_1f8 [2];
  longlong *local_1e8 [2];
  wchar_t *local_1d8 [2];
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong *local_1b8 [2];
  longlong *local_1a8;
  longlong local_1a0;
  longlong local_198 [2];
  longlong local_188 [2];
  undefined8 local_178;
  longlong *local_170;
  wchar_t **local_168;
  ulonglong *local_160;
  longlong local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0 [2];
  longlong *local_98 [2];
  undefined4 local_88 [4];
  undefined1 local_78 [16];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_a8 = *(wchar_t **)(param_1[1] + 0x18);
  FUN_1400021e4(&local_a8,local_188);
  FUN_14010318a(param_1[1],local_198,0);
  lVar9 = (longlong)*(int *)(param_1[1] + 0x88);
  if (lVar9 != 0) {
    plVar11 = *(longlong **)(param_1[1] + 0x80);
    plVar17 = plVar11 + lVar9;
    local_280 = plVar17;
    local_270 = param_1;
    do {
      lVar9 = *plVar11;
      if (lVar9 == 0) {
        lVar9 = *param_1;
        local_a8 = L"InvalidInterfaceParameter";
        local_a0[0] = 0x19;
        FUN_1446e940c(&local_158,&local_a8);
        local_a8 = L"CameraRigAssetBuilder";
        local_a0[0] = 0x15;
        FUN_1446e940c(&local_168,&local_a8);
        FUN_140208bae(&local_a8,&local_168,&local_158,L"Invalid interface parameter or target.");
        FUN_147fd2ef2(lVar9,1,param_1[1],&local_a8);
        pwVar15 = local_a8;
LAB_147fde581:
        if (pwVar15 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)pwVar15 + 0x10))();
        }
      }
      else {
        if (*(longlong *)(lVar9 + 0x30) == 0) {
          lVar13 = *param_1;
          local_a8 = L"DisconnectedInterfaceParameter";
          local_a0[0] = 0x1e;
          FUN_1446e940c(&local_158,&local_a8);
          local_a8 = L"CameraRigAssetBuilder";
          local_a0[0] = 0x15;
          FUN_1446e940c(&local_168,&local_a8);
          FUN_140208bae(&local_a8,&local_168,&local_158,
                        L"Interface parameter isn\'t connected: setting overrides for it will not do anything."
                       );
          uVar10 = 3;
LAB_147fde67b:
          FUN_147fd2ef2(lVar13,uVar10,lVar9);
          pwVar15 = local_a8;
        }
        else {
          if (*(longlong *)(lVar9 + 0x38) == 0) {
            lVar13 = *param_1;
            local_a8 = L"InvalidInterfaceParameterTargetPropertyName";
            local_a0[0] = 0x2b;
            FUN_1446e940c(&local_158,&local_a8);
            local_a8 = L"CameraRigAssetBuilder";
            local_a0[0] = 0x15;
            FUN_1446e940c(&local_168,&local_a8);
            pwVar15 = L"Invalid interface parameter target property name.";
LAB_147fde66e:
            FUN_140208bae(&local_a8,&local_168,&local_158,pwVar15);
            uVar10 = 1;
            goto LAB_147fde67b;
          }
          if (*(int *)(lVar9 + 0x48) < 2) {
            lVar13 = *param_1;
            local_a8 = L"InvalidInterfaceParameterName";
            local_a0[0] = 0x1d;
            FUN_1446e940c(&local_158,&local_a8);
            local_a8 = L"CameraRigAssetBuilder";
            local_a0[0] = 0x15;
            FUN_1446e940c(&local_168,&local_a8);
            pwVar15 = L"Invalid interface parameter name.";
            goto LAB_147fde66e;
          }
          puVar1 = (undefined8 *)(lVar9 + 0x40);
          uVar7 = FUN_144a49b4a(*(int *)(lVar9 + 0x48) + -1,*puVar1);
          iVar8 = FUN_1456cf568(&local_f8,uVar7,puVar1);
          if (iVar8 == -1) {
            local_290 = lVar9 + 0x38;
            FUN_14482b35e(&local_f8,&local_a8,puVar1,0);
            local_1a8 = *(longlong **)(lVar9 + 0x30);
            local_1a0 = *(longlong *)(lVar9 + 0x38);
            if ((int)uStack_140 != local_114) {
              uVar5 = (uint)((ulonglong)local_1a0 >> 0x10);
              uVar14 = (uint)local_1a0 & 0xffff;
              uVar16 = ((uint)((ulonglong)local_1a8 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_1a8 >> 4)) * -0x7a143595;
              uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
              uVar16 = uVar16 >> 0x10 ^ uVar16;
              puVar12 = local_108;
              if (local_108 == (undefined1 *)0x0) {
                puVar12 = local_110;
              }
              iVar8 = *(int *)(puVar12 +
                              (ulonglong)
                              (local_100 - 1U &
                              ((uVar16 >> 2) +
                               (int)((ulonglong)local_1a0 >> 0x20) + (uint)local_1a0 * 0x10000 +
                               uVar14 + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar14 >> 4) +
                               uVar16 * 0x40 + 0x9e3779b9 ^ uVar16)) * 4);
              if (iVar8 != -1) {
LAB_147fde9ca:
                lVar13 = (longlong)iVar8;
                if ((*(longlong **)(local_148 + lVar13 * 0x18) != local_1a8) ||
                   (*(longlong *)(local_148 + 8 + lVar13 * 0x18) != local_1a0)) goto LAB_147fde9de;
                local_288 = *param_1;
                FUN_145715fae(local_1e8,local_290);
                local_200 = *(undefined8 *)(*(longlong *)(lVar9 + 0x30) + 0x18);
                FUN_145715fae(local_1f8,&local_200);
                local_a8 = L"InterfaceParameterTargetCollision";
                local_a0[0] = 0x21;
                FUN_1446e940c(local_224,&local_a8);
                local_a8 = L"CameraRigAssetBuilder";
                local_a0[0] = 0x15;
                FUN_1446e940c(local_228,&local_a8);
                FUN_140208bae(local_220,local_228,local_224,
                              L"Multiple interface parameters targeting property \'{0}\' on camera node \'{1}\'. Ignoring duplicates."
                             );
                FUN_14023409e(&local_210,local_220,1);
                local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
                FUN_14023423e(local_98,local_1f8);
                local_88[0] = 4;
                FUN_14023423e(local_78,local_1e8);
                local_160 = (ulonglong *)local_68;
                local_168 = &local_a8;
                FUN_14010d304(&local_158,&local_168);
                local_178 = local_210;
                local_170 = local_208;
                if (local_208 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_208 + 1) = (int)local_208[1] + 1;
                  UNLOCK();
                }
                FUN_14010c016(local_1d8,&local_178,&local_158);
                FUN_14007f2db(local_158,local_150);
                if (local_158 != 0) {
                  FUN_1400020a8();
                }
                plVar17 = local_280;
                lVar13 = 0x30;
                do {
                  plVar4 = *(longlong **)((longlong)local_a0 + lVar13 + -8);
                  if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*plVar4 + 0x10))();
                    *(undefined8 *)((longlong)local_a0 + lVar13 + -8) = 0;
                    *(undefined4 *)((longlong)local_a0 + lVar13) = 0;
                  }
                  plVar4 = local_208;
                  lVar13 = lVar13 + -0x20;
                } while (lVar13 != -0x10);
                if (local_208 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_208 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_208)(local_208);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar4 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar4 + 0x10))(plVar4);
                    }
                  }
                }
                if (local_1f8[0] != (longlong *)0x0) {
                  (**(code **)(*local_1f8[0] + 0x10))();
                }
                if (local_1e8[0] != (longlong *)0x0) {
                  (**(code **)(*local_1e8[0] + 0x10))();
                }
                FUN_147fd2ef2(local_288,1,lVar9);
                pwVar15 = local_220[0];
                goto joined_r0x000147fdec86;
              }
            }
LAB_147fde9ec:
            FUN_148005502(&local_148,&local_a8,&local_1a8);
            cVar6 = FUN_147fdf5fc(param_1,lVar9);
            if ((cVar6 == '\0') && (cVar6 = FUN_147fdff0e(param_1,lVar9), cVar6 == '\0')) {
              local_288 = *(longlong *)(lVar9 + 0x30);
              local_278 = *param_1;
              local_200 = *(undefined8 *)(local_288 + 0x18);
              FUN_145715fae(local_238,&local_200);
              FUN_145715fae(local_248,local_290);
              FUN_140009b9a(local_258,puVar1);
              local_a8 = L"InvalidInterfaceParameterTargetProperty";
              local_a0[0] = 0x27;
              FUN_1446e940c(local_224,&local_a8);
              local_a8 = L"CameraRigAssetBuilder";
              local_a0[0] = 0x15;
              FUN_1446e940c(local_228,&local_a8);
              FUN_140208bae(local_220,local_228,local_224,
                            L"Invalid interface parameter \'{0}\', driving property \'{1}\' on \'{2}\', but no such property found."
                           );
              FUN_14023409e(&local_268,local_220,1);
              local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
              FUN_14023423e(local_98,local_258);
              local_88[0] = 4;
              FUN_14023423e(local_78,local_248);
              local_68[0] = 4;
              FUN_14023423e(local_58,local_238);
              local_160 = &local_48;
              local_168 = &local_a8;
              FUN_14010d304(&local_158,&local_168);
              local_178 = local_268;
              local_170 = local_260;
              if (local_260 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_260 + 1) = (int)local_260[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_1d8,&local_178,&local_158);
              FUN_14007f2db(local_158,local_150);
              if (local_158 != 0) {
                FUN_1400020a8();
              }
              plVar17 = local_280;
              lVar9 = 0x50;
              do {
                plVar4 = *(longlong **)((longlong)local_a0 + lVar9 + -8);
                if (plVar4 != (longlong *)0x0) {
                  (**(code **)(*plVar4 + 0x10))();
                  *(undefined8 *)((longlong)local_a0 + lVar9 + -8) = 0;
                  *(undefined4 *)((longlong)local_a0 + lVar9) = 0;
                }
                plVar4 = local_260;
                lVar9 = lVar9 + -0x20;
              } while (lVar9 != -0x10);
              if (local_260 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_260 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_260)(local_260);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar4 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                  }
                }
              }
              if (local_258[0] != (longlong *)0x0) {
                (**(code **)(*local_258[0] + 0x10))();
              }
              if (local_248[0] != (longlong *)0x0) {
                (**(code **)(*local_248[0] + 0x10))();
              }
              if (local_238[0] != (longlong *)0x0) {
                (**(code **)(*local_238[0] + 0x10))();
              }
              FUN_147fd2ef2(local_278,1,local_288);
              pwVar15 = local_220[0];
joined_r0x000147fdec86:
              local_220[0] = pwVar15;
              if (local_1d8[0] != (wchar_t *)0x0) {
                (**(code **)(*(longlong *)local_1d8[0] + 0x10))();
                pwVar15 = local_220[0];
              }
              goto LAB_147fde581;
            }
            goto LAB_147fde6a1;
          }
          local_290 = *param_1;
          FUN_140009b9a(local_1b8,puVar1);
          local_a8 = L"InterfaceParameterNameCollision";
          local_a0[0] = 0x1f;
          FUN_1446e940c(local_220,&local_a8);
          local_a8 = L"CameraRigAssetBuilder";
          local_a0[0] = 0x15;
          FUN_1446e940c(&local_200,&local_a8);
          FUN_140208bae(local_1d8,&local_200,local_220,
                        L"Multiple interface parameters named \'{0}\'. Ignoring duplicates.");
          FUN_14023409e(&local_1c8,local_1d8,1);
          local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
          FUN_14023423e(local_98,local_1b8);
          local_160 = (ulonglong *)local_88;
          local_168 = &local_a8;
          FUN_14010d304(&local_158,&local_168);
          local_178 = local_1c8;
          local_170 = local_1c0;
          if (local_1c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_1a8,&local_178,&local_158);
          FUN_14007f2db(local_158,local_150);
          if (local_158 != 0) {
            FUN_1400020a8();
          }
          param_1 = local_270;
          plVar17 = local_280;
          if (local_98[0] != (longlong *)0x0) {
            (**(code **)(*local_98[0] + 0x10))();
          }
          plVar4 = local_1c0;
          if (local_1c0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_1c0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_1c0)(local_1c0);
              LOCK();
              piVar3 = (int *)((longlong)plVar4 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          if (local_1b8[0] != (longlong *)0x0) {
            (**(code **)(*local_1b8[0] + 0x10))();
          }
          FUN_147fd2ef2(local_290,1,lVar9);
          pwVar15 = local_1d8[0];
          if (local_1a8 != (longlong *)0x0) {
            (**(code **)(*local_1a8 + 0x10))();
            pwVar15 = local_1d8[0];
          }
        }
        if (pwVar15 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)pwVar15 + 0x10))();
        }
      }
LAB_147fde6a1:
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar17);
  }
  if (local_198[0] != 0) {
    FUN_1400020a8();
  }
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_148005474(&local_148);
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_f8);
  if ((local_48 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147fde9de:
  iVar8 = *(int *)(local_148 + lVar13 * 0x18 + 0x10);
  if (iVar8 == -1) goto LAB_147fde9ec;
  goto LAB_147fde9ca;
}



// FUNCTION 147fdef26 FUN_147fdef26 body=1150 status=ok
// SIG undefined FUN_147fdef26(void)

void FUN_147fdef26(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_318 [32];
  longlong local_2f8;
  int local_2f0;
  longlong *local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  longlong local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  longlong local_98 [4];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_78 = 0;
  iVar7 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar2 = param_1 + 0x30;
  local_2e8 = (longlong *)0x100000000;
  local_2d8 = (longlong *)0xffffffff;
  uStack_2d0 = (longlong *)((ulonglong)uStack_2d0 & 0xffffffff00000000);
  uStack_2e0 = (longlong *)lVar2;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_2e8);
    iVar7 = *(int *)(param_1 + 0x48);
  }
  local_2a0 = (ulonglong)local_2d8;
  uVar5 = local_2a0;
  local_298 = (uint)uStack_2d0;
  local_294 = uStack_2d0._4_4_;
  local_2b0 = local_2e8;
  local_2a8 = uStack_2e0;
  local_2a0._4_4_ = (uint)((ulonglong)local_2d8 >> 0x20);
  local_2b8 = plVar1;
  if ((local_2a0._4_4_ != iVar7) || (uStack_2e0 != (longlong *)lVar2)) {
    iVar6 = local_2a0._4_4_;
    local_2a0 = uVar5;
    do {
      local_2d8 = *(longlong **)(*local_2b8 + 0x10 + (longlong)iVar6 * 0x20);
      puVar3 = (undefined8 *)(*local_2b8 + (longlong)iVar6 * 0x20);
      local_2e8 = (longlong *)*puVar3;
      uStack_2e0 = (longlong *)puVar3[1];
      FUN_14800533a(local_98,&local_2f8,&local_2d8);
      local_2a0 = CONCAT44(local_2a0._4_4_,(uint)local_2a0 & ~local_2b0._4_4_);
      FUN_1449c0562(&local_2b0);
      iVar6 = local_2a0._4_4_;
      uVar5 = local_2a0;
    } while (local_2b8 != plVar1 || (local_2a8 != (longlong *)lVar2 || local_2a0._4_4_ != iVar7));
  }
  local_2a0 = uVar5;
  FUN_148004658(plVar1);
  plVar1 = (longlong *)(param_1 + 0x70);
  lVar2 = param_1 + 0x80;
  local_2e8 = (longlong *)0x100000000;
  local_2d8._0_4_ = 0xffffffff;
  local_2d8._4_4_ = 0;
  uStack_2d0 = (longlong *)((ulonglong)uStack_2d0 & 0xffffffff00000000);
  uVar8 = 0;
  uStack_2e0 = (longlong *)lVar2;
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_1449c0562(&local_2e8);
    uVar8 = *(uint *)(param_1 + 0x98);
  }
  local_2a0._0_4_ = (uint)local_2d8;
  local_2a0._4_4_ = local_2d8._4_4_;
  local_298 = (uint)uStack_2d0;
  local_294 = uStack_2d0._4_4_;
  local_2b0 = local_2e8;
  local_2a8 = uStack_2e0;
  if ((local_2d8._4_4_ != uVar8) || (local_2b8 = plVar1, uStack_2e0 != (longlong *)lVar2)) {
    local_2b8 = plVar1;
    do {
      puVar3 = (undefined8 *)(*local_2b8 + (longlong)(int)local_2a0._4_4_ * 0x28);
      local_2e8 = (longlong *)*puVar3;
      uStack_2e0 = (longlong *)puVar3[1];
      puVar4 = (uint *)(*local_2b8 + 0x10 + (longlong)(int)local_2a0._4_4_ * 0x28);
      local_2d8._0_4_ = *puVar4;
      local_2d8._4_4_ = puVar4[1];
      uStack_2d0 = *(longlong **)(puVar4 + 2);
      FUN_14800533a(local_98,&local_2f8,&uStack_2d0);
      local_2a0._0_4_ = (uint)local_2a0 & ~local_2b0._4_4_;
      FUN_1449c0562(&local_2b0);
    } while (local_2b8 != plVar1 || (local_2a8 != (longlong *)lVar2 || local_2a0._4_4_ != uVar8));
  }
  FUN_14800d61a(plVar1);
  local_2b0 = local_98 + 2;
  local_2b8 = (longlong *)&DAT_100000000;
  local_2a8 = (longlong *)&DAT_ffffffff;
  local_2a0 = (ulonglong)local_2a0._4_4_ << 0x20;
  iVar7 = 0;
  if (local_70 != 0) {
    FUN_1449c0562(&local_2b8);
    iVar7 = local_70;
  }
  uStack_2d0 = local_2a8;
  plVar1 = uStack_2d0;
  local_2c8 = (uint)local_2a0;
  local_2c4 = local_2a0._4_4_;
  uStack_2e0 = local_2b8;
  local_2d8 = local_2b0;
  uStack_2d0._4_4_ = (int)((ulonglong)local_2a8 >> 0x20);
  local_2e8 = local_98;
  if ((uStack_2d0._4_4_ != iVar7) || (local_2b0 != local_98 + 2)) {
    iVar6 = uStack_2d0._4_4_;
    uStack_2d0 = plVar1;
    do {
      plVar1 = *(longlong **)(*local_2e8 + (longlong)iVar6 * 0x10);
      local_2a0 = local_2a0 & 0xffffffffffffff00;
      local_2a8 = local_98;
      local_2b8 = (longlong *)&local_298;
      local_2b0 = (longlong *)&local_298;
      FUN_147fe0b7e(&local_2b8);
      local_2c0 = plVar1[3];
      FUN_1400021e4(&local_2c0,&local_2f8);
      iVar6 = local_2f0 + -1;
      if (local_2f0 == 0) {
        iVar6 = 0;
      }
      FUN_1449668a2(&local_2b8,local_2f8,iVar6);
      if (local_2f8 != 0) {
        FUN_1400020a8();
      }
      *(undefined2 *)local_2b0 = 0;
      (**(code **)(*plVar1 + 0x170))(plVar1,local_2b8,0,0);
      if ((char)local_2a0 == '\x01') {
        FUN_1400020a8(local_2b8);
      }
      uStack_2d0 = (longlong *)CONCAT44(uStack_2d0._4_4_,(uint)uStack_2d0 & ~uStack_2e0._4_4_);
      FUN_1449c0562(&uStack_2e0);
      iVar6 = uStack_2d0._4_4_;
      plVar1 = uStack_2d0;
    } while (local_2e8 != local_98 || (local_2d8 != local_98 + 2 || uStack_2d0._4_4_ != iVar7));
  }
  uStack_2d0 = plVar1;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_148003272(local_98);
  if ((local_48 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdf3a6 FUN_147fdf3a6 body=483 status=ok
// SIG undefined FUN_147fdf3a6(void)

void FUN_147fdf3a6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong alStack_50 [5];
  
  alStack_50[4] = DAT_14c707940 ^ (ulonglong)auStack_88;
  alStack_50[1] = 0;
  alStack_50[2] = 0;
  local_58 = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  lVar1 = param_1 + 0x118;
  FUN_147ffd292(lVar1,alStack_50);
  if (alStack_50[2] != 0) {
    FUN_1400020a8();
  }
  if (alStack_50[0] != 0) {
    FUN_1400020a8();
  }
  local_60 = 0;
  lVar7 = *(longlong *)(param_1 + 8);
  local_68 = *(longlong *)(lVar7 + 0x48);
  if (DAT_14c950c29 == '\x01') {
    if (local_68 == 0) {
      local_68 = 0;
    }
    else {
      FUN_1456cec3c();
      local_68 = *(longlong *)(lVar7 + 0x48);
    }
  }
  alStack_50[1] = 0;
  alStack_50[2] = 0;
  local_58 = 0;
  alStack_50[0] = 0;
  FUN_147fdb02e();
  iVar6 = 0;
  sVar4 = 0;
  if ((longlong)(int)alStack_50[0] != 0) {
    sVar4 = (short)*(undefined4 *)(local_58 + 8);
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        uVar8 = 0;
      }
      else {
        iVar2 = *(int *)(local_58 + 8 + lVar7);
        uVar8 = -iVar2 & (iVar6 + iVar2) - 1U;
      }
      iVar6 = uVar8 + *(int *)(local_58 + 0x10 + lVar7);
      lVar7 = lVar7 + 0x18;
    } while ((longlong)(int)alStack_50[0] * 0x18 != lVar7);
  }
  sVar5 = (short)iVar6;
  *(short *)(param_1 + 0x110) = sVar5;
  *(short *)(param_1 + 0x112) = sVar4;
  iVar6 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar6 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x10);
    lVar9 = 0;
    do {
      FUN_147fe0bd2(param_1,*(undefined8 *)(lVar7 + lVar9));
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar6 * 8 != lVar9);
    sVar5 = *(short *)(param_1 + 0x110);
    sVar4 = *(short *)(param_1 + 0x112);
  }
  lVar7 = *(longlong *)(param_1 + 8);
  if ((*(short *)(lVar7 + 0xb8) == sVar5) && (*(short *)(lVar7 + 0xba) == sVar4)) {
    cVar3 = FUN_147fdd752(lVar7 + 0xc0,lVar1);
    if (cVar3 != '\0') goto LAB_147fdf51c;
    lVar7 = *(longlong *)(param_1 + 8);
  }
  *(undefined4 *)(lVar7 + 0xb8) = *(undefined4 *)(param_1 + 0x110);
  FUN_147fd6846(lVar7 + 0xc0,lVar1);
  FUN_147fd68a0(lVar7 + 0xd0,param_1 + 0x128);
LAB_147fdf51c:
  FUN_147fd6af0(&local_58);
  if ((alStack_50[4] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fdf58a FUN_147fdf58a body=114 status=ok
// SIG undefined FUN_147fdf58a(void)

longlong FUN_147fdf58a(longlong param_1,char *param_2)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    iVar5 = (int)sVar2;
  }
  lVar4 = (longlong)iVar5;
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(lVar4 * 2 + *(longlong *)(param_1 + 8))) {
    FUN_140213274(param_1,lVar4);
  }
  if (iVar5 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (0 < iVar5) {
      lVar3 = 0;
      do {
        *(short *)(lVar1 + lVar3 * 2) = (short)param_2[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar4 != lVar3);
    }
    *(longlong *)(param_1 + 8) = lVar1 + lVar4 * 2;
  }
  return param_1;
}



// FUNCTION 147fdf5fc FUN_147fdf5fc body=2320 status=ok
// SIG undefined FUN_147fdf5fc(void)

bool FUN_147fdf5fc(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  longlong local_1a8;
  undefined1 local_19c [4];
  longlong *local_198 [2];
  undefined8 local_188;
  longlong *local_180;
  longlong *local_178 [2];
  longlong *local_168 [2];
  undefined8 local_158;
  longlong *local_150 [2];
  undefined1 local_13c [4];
  longlong *local_138 [2];
  undefined8 local_128;
  longlong *local_120;
  longlong *local_118 [2];
  longlong *local_108 [2];
  longlong *local_f8 [2];
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  wchar_t **local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0 [2];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar7 = *(longlong *)(param_2 + 0x30);
  lVar3 = FUN_144a87586(*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(param_2 + 0x38));
  if (lVar3 == 0) goto LAB_147fdf8ed;
  lVar6 = *(longlong *)(lVar3 + 8);
  lVar4 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar8 = lVar6 != 0;
    if (lVar6 != lVar4 && bVar8) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar8 = lVar6 != 0;
        if (lVar6 == lVar4) break;
      } while (lVar6 != 0);
    }
    if (bVar8) goto LAB_147fdf952;
  }
  else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) {
LAB_147fdf952:
    local_e8 = (longlong *)param_1[1];
    local_e0 = param_1;
    lVar6 = FUN_146455da2();
    if (*(longlong *)(lVar3 + 0x70) == lVar6) {
      lVar7 = lVar7 + *(int *)(lVar3 + 0x44);
      FUN_148005aa3(&local_e8,param_2,lVar7);
      uVar5 = FUN_148005d26(&local_e8,lVar3,*(undefined8 *)(param_2 + 0x30));
      FUN_148005e75(&local_e8,param_2,lVar7,uVar5);
    }
    else {
      lVar6 = FUN_146455e0a();
      if (*(longlong *)(lVar3 + 0x70) == lVar6) {
        lVar7 = lVar7 + *(int *)(lVar3 + 0x44);
        FUN_1480063f3(&local_e8,param_2,lVar7);
        uVar5 = FUN_148006676(&local_e8,lVar3,*(undefined8 *)(param_2 + 0x30));
        FUN_1480067c5(&local_e8,param_2,lVar7,uVar5);
      }
      else {
        lVar6 = FUN_146455ea0();
        if (*(longlong *)(lVar3 + 0x70) == lVar6) {
          lVar7 = lVar7 + *(int *)(lVar3 + 0x44);
          FUN_148006b56(&local_e8,param_2,lVar7);
          uVar5 = FUN_148006dd8(&local_e8,lVar3,*(undefined8 *)(param_2 + 0x30));
          FUN_148006f27(&local_e8,param_2,lVar7,uVar5);
        }
        else {
          lVar6 = FUN_146455f08();
          if (*(longlong *)(lVar3 + 0x70) == lVar6) {
            lVar7 = lVar7 + *(int *)(lVar3 + 0x44);
            FUN_1480072c3(&local_e8,param_2,lVar7);
            uVar5 = FUN_148007546(&local_e8,lVar3,*(undefined8 *)(param_2 + 0x30));
            FUN_148007695(&local_e8,param_2,lVar7,uVar5);
          }
          else {
            lVar6 = FUN_146455f70();
            if (*(longlong *)(lVar3 + 0x70) == lVar6) {
              lVar7 = lVar7 + *(int *)(lVar3 + 0x44);
              FUN_148007a32(&local_e8,param_2,lVar7);
              uVar5 = FUN_148007cb4(&local_e8,lVar3,*(undefined8 *)(param_2 + 0x30));
              FUN_148007e03(&local_e8,param_2,lVar7,uVar5);
            }
            else {
              lVar6 = FUN_146456006();
              if (*(longlong *)(lVar3 + 0x70) == lVar6) {
                FUN_147fe0525(&local_e8,param_2,lVar3,lVar7 + *(int *)(lVar3 + 0x44));
              }
              else {
                lVar6 = FUN_14645609e();
                if (*(longlong *)(lVar3 + 0x70) == lVar6) {
                  FUN_147fe056b(&local_e8,param_2,lVar3,lVar7 + *(int *)(lVar3 + 0x44));
                }
                else {
                  lVar6 = FUN_146456134();
                  if (*(longlong *)(lVar3 + 0x70) == lVar6) {
                    FUN_147fe05b1(&local_e8,param_2,lVar3,lVar7 + *(int *)(lVar3 + 0x44));
                  }
                  else {
                    lVar6 = FUN_1464561cc();
                    if (*(longlong *)(lVar3 + 0x70) == lVar6) {
                      FUN_147fe05f7(&local_e8,param_2,lVar3,lVar7 + *(int *)(lVar3 + 0x44));
                    }
                    else {
                      lVar6 = FUN_146456262();
                      if (*(longlong *)(lVar3 + 0x70) == lVar6) {
                        FUN_147fe063d(&local_e8,param_2,lVar3,lVar7 + *(int *)(lVar3 + 0x44));
                      }
                      else {
                        lVar6 = FUN_1464562f8();
                        if (*(longlong *)(lVar3 + 0x70) == lVar6) {
                          FUN_147fe0683(&local_e8,param_2,lVar3,lVar7 + *(int *)(lVar3 + 0x44));
                        }
                        else {
                          lVar6 = FUN_14645638e();
                          if (*(longlong *)(lVar3 + 0x70) == lVar6) {
                            FUN_147fe06c9(&local_e8,param_2,lVar3,lVar7 + *(int *)(lVar3 + 0x44));
                          }
                          else {
                            lVar6 = FUN_146456426();
                            if (*(longlong *)(lVar3 + 0x70) == lVar6) {
                              FUN_147fe070f(&local_e8,param_2,lVar3,lVar7 + *(int *)(lVar3 + 0x44));
                            }
                            else {
                              lVar6 = FUN_1464564bc();
                              if (*(longlong *)(lVar3 + 0x70) == lVar6) {
                                FUN_147fe0755(&local_e8,param_2,lVar3,lVar7 + *(int *)(lVar3 + 0x44)
                                             );
                              }
                              else {
                                local_1b0 = *param_1;
                                local_158 = *(undefined8 *)(lVar7 + 0x18);
                                FUN_145715fae(local_150);
                                FUN_145715fae(local_168,param_2 + 0x38);
                                FUN_140009b9a(local_178,param_2 + 0x40);
                                local_a8 = L"InvalidCameraNodeProperty";
                                local_a0[0] = 0x19;
                                FUN_1446e940c(local_13c,&local_a8);
                                local_a8 = L"CameraRigAssetBuilder";
                                local_a0[0] = 0x15;
                                FUN_1446e940c(local_19c,&local_a8);
                                FUN_140208bae(local_198,local_19c,local_13c,
                                              L"Invalid interface parameter \'{0}\', driving property \'{1}\' on \'{2}\', but it\'s not a camera parameter."
                                             );
                                FUN_14023409e(&local_188,local_198,1);
                                local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
                                FUN_14023423e(local_98,local_178);
                                local_88 = 4;
                                FUN_14023423e(local_78,local_168);
                                local_68 = 4;
                                FUN_14023423e(local_58,local_150);
                                local_c0 = &local_48;
                                local_c8 = &local_a8;
                                FUN_14010d304(&local_b8);
                                local_d8 = local_188;
                                local_d0 = local_180;
                                if (local_180 != (longlong *)0x0) {
                                  LOCK();
                                  *(int *)(local_180 + 1) = (int)local_180[1] + 1;
                                  UNLOCK();
                                }
                                FUN_14010c016(local_138,&local_d8,&local_b8);
                                FUN_14007f2db(local_b8,local_b0);
                                if (local_b8 != 0) {
                                  FUN_1400020a8();
                                }
                                lVar7 = 0x50;
                                do {
                                  plVar2 = *(longlong **)((longlong)local_a0 + lVar7 + -8);
                                  if (plVar2 != (longlong *)0x0) {
                                    (**(code **)(*plVar2 + 0x10))();
                                    *(undefined8 *)((longlong)local_a0 + lVar7 + -8) = 0;
                                    *(undefined4 *)((longlong)local_a0 + lVar7) = 0;
                                  }
                                  lVar7 = lVar7 + -0x20;
                                } while (lVar7 != -0x10);
                                if (local_180 != (longlong *)0x0) {
                                  LOCK();
                                  plVar2 = local_180 + 1;
                                  *(int *)plVar2 = (int)*plVar2 + -1;
                                  UNLOCK();
                                  if ((int)*plVar2 == 0) {
                                    (**(code **)*local_180)(local_180);
                                    LOCK();
                                    piVar1 = (int *)((longlong)local_180 + 0xc);
                                    *piVar1 = *piVar1 + -1;
                                    UNLOCK();
                                    if (*piVar1 == 0) {
                                      (**(code **)(*local_180 + 0x10))(local_180);
                                    }
                                  }
                                }
                                if (local_178[0] != (longlong *)0x0) {
                                  (**(code **)(*local_178[0] + 0x10))();
                                }
                                if (local_168[0] != (longlong *)0x0) {
                                  (**(code **)(*local_168[0] + 0x10))();
                                }
                                if (local_150[0] != (longlong *)0x0) {
                                  (**(code **)(*local_150[0] + 0x10))();
                                }
                                FUN_147fd2ef2(local_1b0,1,param_2,local_138);
                                if (local_138[0] != (longlong *)0x0) {
                                  (**(code **)(*local_138[0] + 0x10))();
                                }
                                if (local_198[0] != (longlong *)0x0) {
                                  (**(code **)(*local_198[0] + 0x10))();
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
          }
        }
      }
    }
    goto LAB_147fdf8ed;
  }
  local_1a8 = *param_1;
  local_198[0] = *(longlong **)(lVar7 + 0x18);
  local_1b0 = lVar3;
  FUN_145715fae(local_f8);
  FUN_145715fae(local_108,param_2 + 0x38);
  FUN_140009b9a(local_118,param_2 + 0x40);
  local_a8 = L"InvalidCameraNodeProperty";
  local_a0[0] = 0x19;
  FUN_1446e940c(&local_158,&local_a8);
  local_a8 = L"CameraRigAssetBuilder";
  local_a0[0] = 0x15;
  FUN_1446e940c(local_13c,&local_a8);
  FUN_140208bae(local_138,local_13c,&local_158,
                L"Invalid interface parameter \'{0}\', driving property \'{1}\' on \'{2}\', but it\'s not a camera parameter."
               );
  FUN_14023409e(&local_128,local_138,1);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(local_98,local_118);
  local_88 = 4;
  FUN_14023423e(local_78,local_108);
  local_68 = 4;
  FUN_14023423e(local_58,local_f8);
  local_c0 = &local_48;
  local_c8 = &local_a8;
  FUN_14010d304(&local_b8);
  local_d8 = local_128;
  local_d0 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_120 + 1) = (int)local_120[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(&local_e8,&local_d8,&local_b8);
  FUN_14007f2db(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  lVar3 = local_1b0;
  lVar6 = 0x50;
  do {
    plVar2 = *(longlong **)((longlong)local_a0 + lVar6 + -8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)((longlong)local_a0 + lVar6 + -8) = 0;
      *(undefined4 *)((longlong)local_a0 + lVar6) = 0;
    }
    lVar6 = lVar6 + -0x20;
  } while (lVar6 != -0x10);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_120 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_120 + 0x10))(local_120);
      }
    }
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_108[0] != (longlong *)0x0) {
    (**(code **)(*local_108[0] + 0x10))();
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  FUN_147fd2ef2(local_1a8,1,lVar7,&local_e8);
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
LAB_147fdf8ed:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 != 0;
}



// FUNCTION 147fdff0e FUN_147fdff0e body=1558 status=ok
// SIG undefined FUN_147fdff0e(void)

ulonglong FUN_147fdff0e(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined8 *local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar5 = FUN_145b68694();
    lVar3 = *(longlong *)(param_2 + 0x30);
    if (lVar3 != 0) {
      uVar8 = 0;
      if ((lVar5 == 0) || (lVar6 = *(longlong *)(lVar3 + 0x10), lVar6 == 0)) goto LAB_147fdff3c;
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
         ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30 && (lVar5 = *(longlong *)(lVar3 + 0x38), lVar5 != 0)))) {
        FUN_1400021e4(param_2 + 0x38,&local_88);
        lVar6 = FUN_147fdd864(lVar5 + 0x70,&local_88);
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (lVar6 != 0) {
          if (*(longlong **)(lVar6 + 0x60) == (longlong *)0x0) {
            uVar7 = *param_1;
            FUN_14010318a(lVar5,local_e8,0);
            FUN_140233b1a(local_d8,local_e8);
            FUN_145715fae(local_f8,param_2 + 0x38);
            local_88 = L"UnbuiltInnerCameraRig";
            local_80._0_4_ = 0x15;
            FUN_1446e940c(local_11c,&local_88);
            local_88 = L"CameraRigAssetBuilder";
            local_80 = (undefined8 *)CONCAT44(local_80._4_4_,0x15);
            FUN_1446e940c(local_120,&local_88);
            FUN_140208bae(local_118,local_120,local_11c,
                          L"Can\'t expose inner camera rig parameter \'{0}\': the inner camera rig \'{1}\' failed to build."
                         );
            FUN_14023409e(&local_108,local_118,1);
            local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
            FUN_14023423e(local_78,local_f8);
            local_68 = 4;
            FUN_14023423e(local_58,local_d8);
            local_a0 = &local_48;
            local_a8 = &local_88;
            FUN_14010d304(&local_98);
            local_b8 = local_108;
            local_b0 = local_100;
            if (local_100 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_100 + 1) = (int)local_100[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_c8,&local_b8,&local_98);
            FUN_14007f2db(local_98,local_90);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            lVar5 = 0x30;
            do {
              if (*(longlong **)((longlong)&local_88 + lVar5) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_88 + lVar5) + 0x10))();
                *(undefined8 *)((longlong)&local_88 + lVar5) = 0;
                *(undefined4 *)(local_78 + lVar5 + -8) = 0;
              }
              lVar5 = lVar5 + -0x20;
            } while (lVar5 != -0x10);
            if (local_100 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_100 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_100)(local_100);
                LOCK();
                piVar2 = (int *)((longlong)local_100 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_100 + 0x10))(local_100);
                }
              }
            }
            if (local_f8[0] != (longlong *)0x0) {
              (**(code **)(*local_f8[0] + 0x10))();
            }
            if (local_d8[0] != (longlong *)0x0) {
              (**(code **)(*local_d8[0] + 0x10))();
            }
            FUN_147fd2ef2(uVar7,1,lVar3,local_c8);
            if (local_c8[0] != (longlong *)0x0) {
              (**(code **)(*local_c8[0] + 0x10))();
            }
            if (local_118[0] != (longlong *)0x0) {
              (**(code **)(*local_118[0] + 0x10))();
            }
            if (local_e8[0] != 0) {
              FUN_1400020a8();
            }
            uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          }
          else {
            uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x60) + 0x2a0))();
            uVar8 = CONCAT71((int7)((ulonglong)(lVar5 + 0x70) >> 8),1);
            if (uVar4 < 0xe) {
              lVar5 = lVar3 + 0x40;
              local_80 = param_1;
              switch(uVar4) {
              case 0:
                uVar7 = FUN_147ffbf1c(lVar5,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe079b(&local_88,param_2,uVar7);
                break;
              case 1:
                uVar7 = FUN_147ffc07e(lVar3 + 0x50,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe07e2(&local_88,param_2,uVar7);
                break;
              case 2:
                uVar7 = FUN_147ffc1e0(lVar5,lVar3 + 0x60,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe0829(&local_88,param_2,uVar7);
                break;
              case 3:
                uVar7 = FUN_147ffc342(lVar3 + 0x70,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe0870(&local_88,param_2,uVar7);
                break;
              case 4:
                uVar7 = FUN_147ffc4a4(lVar3 + 0x80,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe08b7(&local_88,param_2,uVar7);
                break;
              case 5:
                uVar7 = FUN_147ffc606(lVar3 + 0x90,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe08fe(&local_88,param_2,uVar7);
                break;
              case 6:
                uVar7 = FUN_147ffc766(lVar3 + 0xa0,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe0945(&local_88,param_2,uVar7);
                break;
              case 7:
                uVar7 = FUN_147ffc8c6(lVar5,lVar3 + 0xb0,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe098c(&local_88,param_2,uVar7);
                break;
              case 8:
                uVar7 = FUN_147ffca1e(lVar3 + 0xc0,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe09d3(&local_88,param_2,uVar7);
                break;
              case 9:
                uVar7 = FUN_147ffcb82(lVar3 + 0xd0,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe0a1a(&local_88,param_2,uVar7);
                break;
              case 10:
                uVar7 = FUN_147ffccda(lVar3 + 0xe0,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe0a61(&local_88,param_2,uVar7);
                break;
              case 0xb:
                uVar7 = FUN_147ffce3a(lVar3 + 0xf0,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe0aa8(&local_88,param_2,uVar7);
                break;
              case 0xc:
                uVar7 = FUN_147ffcf92(lVar3 + 0x100,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe0aef(&local_88,param_2,uVar7);
                break;
              case 0xd:
                uVar7 = FUN_147ffd0f6(lVar3 + 0x110,lVar6);
                local_88 = (wchar_t *)param_1[1];
                FUN_147fe0b36(&local_88,param_2,uVar7);
              }
            }
          }
          goto LAB_147fdff3c;
        }
      }
    }
  }
  uVar8 = 0;
LAB_147fdff3c:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe0525 FUN_147fe0525 body=70 status=ok
// SIG undefined FUN_147fe0525(void)

void FUN_147fe0525(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_1480081ba(param_1,param_2,param_4);
  uVar1 = FUN_14800843c(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_14800858b(param_1,param_2,param_4,uVar1);
  return;
}



// FUNCTION 147fe056b FUN_147fe056b body=70 status=ok
// SIG undefined FUN_147fe056b(void)

void FUN_147fe056b(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_148008939(param_1,param_2,param_4);
  uVar1 = FUN_148008bbc(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_148008d0b(param_1,param_2,param_4,uVar1);
  return;
}



// FUNCTION 147fe05b1 FUN_147fe05b1 body=70 status=ok
// SIG undefined FUN_147fe05b1(void)

void FUN_147fe05b1(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_1480090c8(param_1,param_2,param_4);
  uVar1 = FUN_14800934a(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_148009499(param_1,param_2,param_4,uVar1);
  return;
}



// FUNCTION 147fe05f7 FUN_147fe05f7 body=70 status=ok
// SIG undefined FUN_147fe05f7(void)

void FUN_147fe05f7(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_14800985d(param_1,param_2,param_4);
  uVar1 = FUN_148009ae0(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_148009c2f(param_1,param_2,param_4,uVar1);
  return;
}



// FUNCTION 147fe063d FUN_147fe063d body=70 status=ok
// SIG undefined FUN_147fe063d(void)

void FUN_147fe063d(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_148009ff3(param_1,param_2,param_4);
  uVar1 = FUN_14800a276(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_14800a3c5(param_1,param_2,param_4,uVar1);
  return;
}



// FUNCTION 147fe0683 FUN_147fe0683 body=70 status=ok
// SIG undefined FUN_147fe0683(void)

void FUN_147fe0683(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_14800a797(param_1,param_2,param_4);
  uVar1 = FUN_14800aa1a(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_14800ab69(param_1,param_2,param_4,uVar1);
  return;
}



// FUNCTION 147fe06c9 FUN_147fe06c9 body=70 status=ok
// SIG undefined FUN_147fe06c9(void)

void FUN_147fe06c9(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_14800af26(param_1,param_2,param_4);
  uVar1 = FUN_14800b1a8(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_14800b2f7(param_1,param_2,param_4,uVar1);
  return;
}



// FUNCTION 147fe070f FUN_147fe070f body=70 status=ok
// SIG undefined FUN_147fe070f(void)

void FUN_147fe070f(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_14800b6bb(param_1,param_2,param_4);
  uVar1 = FUN_14800b93e(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_14800ba8d(param_1,param_2,param_4,uVar1);
  return;
}



// FUNCTION 147fe0755 FUN_147fe0755 body=70 status=ok
// SIG undefined FUN_147fe0755(void)

void FUN_147fe0755(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_14800bea1(param_1,param_2,param_4);
  uVar1 = FUN_14800c124(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_14800c273(param_1,param_2,param_4,uVar1);
  return;
}



// FUNCTION 147fe079b FUN_147fe079b body=71 status=ok
// SIG undefined FUN_147fe079b(void)

void FUN_147fe079b(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_148005aa3(param_1,param_2,param_3 + 0x38);
  uVar1 = FUN_14800c606(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_148005e75(param_1,param_2,param_3 + 0x38,uVar1);
  return;
}



// FUNCTION 147fe07e2 FUN_147fe07e2 body=71 status=ok
// SIG undefined FUN_147fe07e2(void)

void FUN_147fe07e2(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_1480063f3(param_1,param_2,param_3 + 0x38);
  uVar1 = FUN_14800c864(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_1480067c5(param_1,param_2,param_3 + 0x38,uVar1);
  return;
}



// FUNCTION 147fe0829 FUN_147fe0829 body=71 status=ok
// SIG undefined FUN_147fe0829(void)

void FUN_147fe0829(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_148006b56(param_1,param_2,param_3 + 0x38);
  uVar1 = FUN_14800c972(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_148006f27(param_1,param_2,param_3 + 0x38,uVar1);
  return;
}



// FUNCTION 147fe0870 FUN_147fe0870 body=71 status=ok
// SIG undefined FUN_147fe0870(void)

void FUN_147fe0870(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_1480072c3(param_1,param_2,param_3 + 0x38);
  uVar1 = FUN_14800ca80(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_148007695(param_1,param_2,param_3 + 0x38,uVar1);
  return;
}



// FUNCTION 147fe08b7 FUN_147fe08b7 body=71 status=ok
// SIG undefined FUN_147fe08b7(void)

void FUN_147fe08b7(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_148007a32(param_1,param_2,param_3 + 0x38);
  uVar1 = FUN_14800cb8e(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_148007e03(param_1,param_2,param_3 + 0x38,uVar1);
  return;
}



// FUNCTION 147fe08fe FUN_147fe08fe body=71 status=ok
// SIG undefined FUN_147fe08fe(void)

void FUN_147fe08fe(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_1480081ba(param_1,param_2,param_3 + 0x38);
  uVar1 = FUN_14800cc9c(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_14800858b(param_1,param_2,param_3 + 0x38,uVar1);
  return;
}



// FUNCTION 147fe0945 FUN_147fe0945 body=71 status=ok
// SIG undefined FUN_147fe0945(void)

void FUN_147fe0945(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_148008939(param_1,param_2,param_3 + 0x38);
  uVar1 = FUN_14800cdaa(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_148008d0b(param_1,param_2,param_3 + 0x38,uVar1);
  return;
}



// FUNCTION 147fe098c FUN_147fe098c body=71 status=ok
// SIG undefined FUN_147fe098c(void)

void FUN_147fe098c(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_1480090c8(param_1,param_2,param_3 + 0x38);
  uVar1 = FUN_14800ceb8(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_148009499(param_1,param_2,param_3 + 0x38,uVar1);
  return;
}



// FUNCTION 147fe09d3 FUN_147fe09d3 body=71 status=ok
// SIG undefined FUN_147fe09d3(void)

void FUN_147fe09d3(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_14800985d(param_1,param_2,param_3 + 0x40);
  uVar1 = FUN_14800cfc6(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_148009c2f(param_1,param_2,param_3 + 0x40,uVar1);
  return;
}



// FUNCTION 147fe0a1a FUN_147fe0a1a body=71 status=ok
// SIG undefined FUN_147fe0a1a(void)

void FUN_147fe0a1a(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_148009ff3(param_1,param_2,param_3 + 0x40);
  uVar1 = FUN_14800d0d4(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_14800a3c5(param_1,param_2,param_3 + 0x40,uVar1);
  return;
}



// FUNCTION 147fe0a61 FUN_147fe0a61 body=71 status=ok
// SIG undefined FUN_147fe0a61(void)

void FUN_147fe0a61(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_14800a797(param_1,param_2,param_3 + 0x38);
  uVar1 = FUN_14800d1e2(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_14800ab69(param_1,param_2,param_3 + 0x38,uVar1);
  return;
}



// FUNCTION 147fe0aa8 FUN_147fe0aa8 body=71 status=ok
// SIG undefined FUN_147fe0aa8(void)

void FUN_147fe0aa8(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_14800af26(param_1,param_2,param_3 + 0x38);
  uVar1 = FUN_14800d2f0(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_14800b2f7(param_1,param_2,param_3 + 0x38,uVar1);
  return;
}



// FUNCTION 147fe0aef FUN_147fe0aef body=71 status=ok
// SIG undefined FUN_147fe0aef(void)

void FUN_147fe0aef(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_14800b6bb(param_1,param_2,param_3 + 0x40);
  uVar1 = FUN_14800d3fe(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_14800ba8d(param_1,param_2,param_3 + 0x40,uVar1);
  return;
}



// FUNCTION 147fe0b36 FUN_147fe0b36 body=71 status=ok
// SIG undefined FUN_147fe0b36(void)

void FUN_147fe0b36(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_14800bea1(param_1,param_2,param_3 + 0x40);
  uVar1 = FUN_14800d50c(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
  FUN_14800c273(param_1,param_2,param_3 + 0x40,uVar1);
  return;
}



// FUNCTION 147fe0b7e FUN_147fe0b7e body=84 status=ok
// SIG undefined FUN_147fe0b7e(void)

longlong FUN_147fe0b7e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x10) <= lVar1 + 0xcU) {
    FUN_140213274(param_1,6);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  lVar2 = 0;
  do {
    *(short *)(lVar1 + lVar2 * 2) = (short)(char)(&DAT_14ad1234c)[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 6);
  *(longlong *)(param_1 + 8) = lVar1 + 0xc;
  return param_1;
}



// FUNCTION 147fe0bd2 FUN_147fe0bd2 body=871 status=ok
// SIG undefined FUN_147fe0bd2(void)

void FUN_147fe0bd2(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = (undefined8 *)param_2[2];
  if (local_60 == (undefined8 *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = local_60[10];
  }
  local_50 = 0xffffffff;
  local_4c = 0x101;
  local_4a = 0;
  FUN_144a2daf0(&local_60);
  if (local_58 != 0) {
    local_80 = param_2 + 2;
    local_70 = param_2 + 0xc;
    local_68 = param_2 + 6;
    local_78 = param_2 + 3;
    plVar1 = param_2 + 1;
    do {
      lVar2 = local_58;
      lVar4 = *(longlong *)(local_58 + 8);
      lVar3 = FUN_1446dcc8c();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar4 != 0;
        if (lVar4 != lVar3 && bVar6) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar6 = lVar4 != 0;
            if (lVar4 == lVar3) break;
          } while (lVar4 != 0);
        }
        if (bVar6) goto LAB_147fe0cdb;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147fe0cdb:
        lVar4 = FUN_146455da2();
        plVar5 = plVar1;
        if (((((((*(longlong *)(lVar2 + 0x70) == lVar4) ||
                (lVar4 = FUN_14645696c(), plVar5 = param_2, *(longlong *)(lVar2 + 0x70) == lVar4))
               || (lVar4 = FUN_146455e0a(), plVar5 = plVar1, *(longlong *)(lVar2 + 0x70) == lVar4))
              || ((lVar4 = FUN_146456a02(), plVar5 = param_2, *(longlong *)(lVar2 + 0x70) == lVar4
                  || (lVar4 = FUN_146455ea0(), plVar5 = plVar1, *(longlong *)(lVar2 + 0x70) == lVar4
                     )))) ||
             (lVar4 = FUN_146456a98(), plVar5 = param_2, *(longlong *)(lVar2 + 0x70) == lVar4)) ||
            (((((lVar4 = FUN_146455f08(), plVar5 = plVar1, *(longlong *)(lVar2 + 0x70) == lVar4 ||
                (lVar4 = FUN_146456b2e(), plVar5 = param_2, *(longlong *)(lVar2 + 0x70) == lVar4))
               || ((lVar4 = FUN_146455f70(), plVar5 = plVar1, *(longlong *)(lVar2 + 0x70) == lVar4
                   || (((lVar4 = FUN_146456b96(), plVar5 = param_2,
                        *(longlong *)(lVar2 + 0x70) == lVar4 ||
                        (lVar4 = FUN_146456006(), plVar5 = local_80,
                        *(longlong *)(lVar2 + 0x70) == lVar4)) ||
                       (lVar4 = FUN_146456c2c(), plVar5 = param_2,
                       *(longlong *)(lVar2 + 0x70) == lVar4)))))) ||
              ((lVar4 = FUN_14645609e(), plVar5 = local_80, *(longlong *)(lVar2 + 0x70) == lVar4 ||
               (lVar4 = FUN_146456c94(), plVar5 = param_2, *(longlong *)(lVar2 + 0x70) == lVar4))))
             || (lVar4 = FUN_146456134(), plVar5 = local_78, *(longlong *)(lVar2 + 0x70) == lVar4)))
            ) || ((((lVar4 = FUN_146456d2a(), plVar5 = param_2, *(longlong *)(lVar2 + 0x70) == lVar4
                    || (lVar4 = FUN_1464561cc(), plVar5 = local_80,
                       *(longlong *)(lVar2 + 0x70) == lVar4)) ||
                   ((lVar4 = FUN_146456dc2(), plVar5 = param_2, *(longlong *)(lVar2 + 0x70) == lVar4
                    || (((lVar4 = FUN_146456262(), plVar5 = param_2 + 4,
                         *(longlong *)(lVar2 + 0x70) == lVar4 ||
                         (lVar4 = FUN_146456e58(), plVar5 = param_2,
                         *(longlong *)(lVar2 + 0x70) == lVar4)) ||
                        (lVar4 = FUN_1464562f8(), plVar5 = local_80,
                        *(longlong *)(lVar2 + 0x70) == lVar4)))))) ||
                  (((lVar4 = FUN_146456eee(), plVar5 = param_2, *(longlong *)(lVar2 + 0x70) == lVar4
                    || (lVar4 = FUN_14645638e(), plVar5 = local_78,
                       *(longlong *)(lVar2 + 0x70) == lVar4)) ||
                   ((lVar4 = FUN_146456f84(), plVar5 = param_2, *(longlong *)(lVar2 + 0x70) == lVar4
                    || (((lVar4 = FUN_146456426(), plVar5 = local_68,
                         *(longlong *)(lVar2 + 0x70) == lVar4 ||
                         (lVar4 = FUN_14645701a(), plVar5 = param_2,
                         *(longlong *)(lVar2 + 0x70) == lVar4)) ||
                        ((lVar4 = FUN_1464564bc(), plVar5 = local_70,
                         *(longlong *)(lVar2 + 0x70) == lVar4 ||
                         (lVar4 = FUN_1464570b0(), plVar5 = param_2,
                         *(longlong *)(lVar2 + 0x70) == lVar4)))))))))))) {
          FUN_147fddd5e(*(undefined8 *)((longlong)plVar5 + (longlong)*(int *)(lVar2 + 0x44)),
                        param_1 + 0x23);
        }
      }
      local_58 = *(longlong *)(local_58 + 0x18);
      FUN_144a2daf0(&local_60);
    } while (local_58 != 0);
  }
  local_58 = *param_1;
  local_60 = param_1 + 0x22;
  (**(code **)(*param_2 + 0x2b0))(param_2);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fe0f40 FUN_147fe0f40 body=18824 status=ok
// SIG undefined FUN_147fe0f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_147fe0f40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
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
  undefined1 auVar73 [16];
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
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  byte bVar232;
  undefined1 auVar233 [16];
  int iVar234;
  longlong lVar235;
  undefined1 *puVar236;
  ulonglong uVar237;
  int iVar238;
  int iVar239;
  longlong lVar240;
  longlong lVar241;
  ushort uVar242;
  longlong lVar243;
  ulonglong uVar244;
  ushort uVar245;
  int iVar246;
  ulonglong uVar247;
  longlong lVar248;
  undefined4 uVar249;
  undefined4 uVar274;
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar275 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar276 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar277 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  undefined1 auVar381 [16];
  undefined1 auVar382 [16];
  undefined1 auVar383 [16];
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 auVar387 [16];
  undefined1 auVar388 [16];
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  undefined1 unaff_XMM14 [16];
  
  auVar233 = _DAT_149931e80;
  if (*param_1 == 0) {
    lVar243 = (longlong)(int)param_1[2];
    uVar237 = CONCAT71((int7)((ulonglong)param_4 >> 8),lVar243 != 0);
    if (lVar243 != 0) {
      uVar244 = lVar243 * 0x48 - 0x48;
      auVar306._8_8_ = 0;
      auVar306._0_8_ = uVar244;
      uVar249 = SUB164(auVar306 * ZEXT816(0xe38e38e38e38e38f),8);
      uVar274 = (undefined4)(uVar244 / 0x120000000);
      auVar308._0_8_ = CONCAT44(uVar274,uVar249);
      auVar308._8_4_ = uVar249;
      auVar308._12_4_ = uVar274;
      auVar316._0_8_ = auVar308._0_8_ >> 6;
      auVar316._8_8_ = auVar308._8_8_ >> 6;
      puVar236 = (undefined1 *)(param_1[1] + 0x468);
      uVar247 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar275._8_4_ = (int)uVar247;
        auVar275._0_8_ = uVar247;
        auVar275._12_4_ = (int)(uVar247 >> 0x20);
        auVar306 = auVar316 | auVar233;
        auVar308 = (auVar275 | unaff_XMM8) ^ auVar233;
        lVar243 = auVar306._0_8_;
        auVar276._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        lVar241 = auVar306._8_8_;
        auVar276._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar276,0xe8);
        auVar309._8_4_ = 0xffffffff;
        auVar309._0_8_ = 0xffffffffffffffff;
        auVar309._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar309,auVar308 ^ auVar309);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x438] = 1;
        }
        auVar309 = packssdw(auVar276,auVar276);
        auVar277._8_4_ = 0xffffffff;
        auVar277._0_8_ = 0xffffffffffffffff;
        auVar277._12_4_ = 0xffffffff;
        auVar309 = packssdw(auVar309 ^ auVar277,auVar309 ^ auVar277);
        auVar309 = packsswb(auVar309,auVar309);
        if ((auVar309[1] & 1) != 0) {
          puVar236[-0x3f0] = 1;
        }
        auVar309 = (auVar275 | unaff_XMM7) ^ auVar233;
        auVar307._0_8_ = -(ulonglong)(lVar243 < auVar309._0_8_);
        auVar307._8_8_ = -(ulonglong)(lVar241 < auVar309._8_8_);
        auVar308 = packssdw(auVar308,auVar307);
        auVar278._8_4_ = 0xffffffff;
        auVar278._0_8_ = 0xffffffffffffffff;
        auVar278._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar278,auVar308 ^ auVar278);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x3a8] = 1;
        }
        auVar309 = pshufhw(auVar307,auVar307,0x84);
        auVar400._8_4_ = 0xffffffff;
        auVar400._0_8_ = 0xffffffffffffffff;
        auVar400._12_4_ = 0xffffffff;
        auVar309 = packssdw(auVar309 ^ auVar400,auVar309 ^ auVar400);
        auVar309 = packsswb(auVar309,auVar309);
        if ((auVar309[3] & 1) != 0) {
          puVar236[-0x360] = 1;
        }
        auVar309 = (auVar275 | unaff_XMM6) ^ auVar233;
        auVar310._0_8_ = -(ulonglong)(lVar243 < auVar309._0_8_);
        auVar310._8_8_ = -(ulonglong)(lVar241 < auVar309._8_8_);
        auVar308 = pshuflw(auVar308,auVar310,0xe8);
        auVar402._8_4_ = 0xffffffff;
        auVar402._0_8_ = 0xffffffffffffffff;
        auVar402._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar402,auVar308 ^ auVar402);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x318] = 1;
        }
        auVar309 = packssdw(auVar310,auVar310);
        auVar13._8_4_ = 0xffffffff;
        auVar13._0_8_ = 0xffffffffffffffff;
        auVar13._12_4_ = 0xffffffff;
        auVar309 = packssdw(auVar309 ^ auVar13,auVar309 ^ auVar13);
        auVar309 = packsswb(auVar309,auVar309);
        if ((auVar309[5] & 1) != 0) {
          puVar236[-0x2d0] = 1;
        }
        auVar309 = (auVar275 | in_XMM5) ^ auVar233;
        auVar311._0_8_ = -(ulonglong)(lVar243 < auVar309._0_8_);
        auVar311._8_8_ = -(ulonglong)(lVar241 < auVar309._8_8_);
        auVar308 = packssdw(auVar308,auVar311);
        auVar14._8_4_ = 0xffffffff;
        auVar14._0_8_ = 0xffffffffffffffff;
        auVar14._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar14,auVar308 ^ auVar14);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x288] = 1;
        }
        auVar309 = pshufhw(auVar311,auVar311,0x84);
        auVar15._8_4_ = 0xffffffff;
        auVar15._0_8_ = 0xffffffffffffffff;
        auVar15._12_4_ = 0xffffffff;
        auVar309 = packssdw(auVar309 ^ auVar15,auVar309 ^ auVar15);
        auVar309 = packsswb(auVar309,auVar309);
        if ((auVar309[7] & 1) != 0) {
          puVar236[-0x240] = 1;
        }
        auVar309 = (auVar275 | in_XMM4) ^ auVar233;
        auVar312._0_8_ = -(ulonglong)(lVar243 < auVar309._0_8_);
        auVar312._8_8_ = -(ulonglong)(lVar241 < auVar309._8_8_);
        auVar308 = pshuflw(auVar308,auVar312,0xe8);
        auVar16._8_4_ = 0xffffffff;
        auVar16._0_8_ = 0xffffffffffffffff;
        auVar16._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar16,auVar308 ^ auVar16);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x1f8] = 1;
        }
        auVar309 = packssdw(auVar312,auVar312);
        auVar17._8_4_ = 0xffffffff;
        auVar17._0_8_ = 0xffffffffffffffff;
        auVar17._12_4_ = 0xffffffff;
        auVar309 = packssdw(auVar309 ^ auVar17,auVar309 ^ auVar17);
        auVar309 = packsswb(auVar309,auVar309);
        if ((auVar309[9] & 1) != 0) {
          puVar236[-0x1b0] = 1;
        }
        auVar309 = (auVar275 | in_XMM3) ^ auVar233;
        auVar313._0_8_ = -(ulonglong)(lVar243 < auVar309._0_8_);
        auVar313._8_8_ = -(ulonglong)(lVar241 < auVar309._8_8_);
        auVar308 = packssdw(auVar308,auVar313);
        auVar18._8_4_ = 0xffffffff;
        auVar18._0_8_ = 0xffffffffffffffff;
        auVar18._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar18,auVar308 ^ auVar18);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-0x168] = 1;
        }
        auVar309 = pshufhw(auVar313,auVar313,0x84);
        auVar19._8_4_ = 0xffffffff;
        auVar19._0_8_ = 0xffffffffffffffff;
        auVar19._12_4_ = 0xffffffff;
        auVar309 = packssdw(auVar309 ^ auVar19,auVar309 ^ auVar19);
        auVar309 = packsswb(auVar309,auVar309);
        if ((auVar309[0xb] & 1) != 0) {
          puVar236[-0x120] = 1;
        }
        auVar309 = (auVar275 | in_XMM2) ^ auVar233;
        auVar314._0_8_ = -(ulonglong)(lVar243 < auVar309._0_8_);
        auVar314._8_8_ = -(ulonglong)(lVar241 < auVar309._8_8_);
        auVar308 = pshuflw(auVar308,auVar314,0xe8);
        auVar20._8_4_ = 0xffffffff;
        auVar20._0_8_ = 0xffffffffffffffff;
        auVar20._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar20,auVar308 ^ auVar20);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0xd8] = 1;
        }
        auVar308 = packssdw(auVar314,auVar314);
        auVar21._8_4_ = 0xffffffff;
        auVar21._0_8_ = 0xffffffffffffffff;
        auVar21._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar21,auVar308 ^ auVar21);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0x90] = 1;
        }
        auVar308 = (auVar275 | in_XMM1) ^ auVar233;
        auVar279._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        auVar279._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar279);
        auVar22._8_4_ = 0xffffffff;
        auVar22._0_8_ = 0xffffffffffffffff;
        auVar22._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar22,auVar306 ^ auVar22);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x48] = 1;
        }
        auVar306 = pshufhw(auVar279,auVar279,0x84);
        auVar23._8_4_ = 0xffffffff;
        auVar23._0_8_ = 0xffffffffffffffff;
        auVar23._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar23,auVar306 ^ auVar23);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar247 = uVar247 + 0x10;
        puVar236 = puVar236 + 0x480;
      } while ((uVar244 / 0x48 + 0x10 & 0x7fffffffffffff0) != uVar247);
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[4] != 0) {
      uVar237 = (longlong)(int)param_1[4] * 0x48 - 0x48;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar237;
      uVar249 = SUB164(auVar1 * ZEXT816(0xe38e38e38e38e38f),8);
      uVar274 = (undefined4)(uVar237 / 0x120000000);
      auVar250._0_8_ = CONCAT44(uVar274,uVar249);
      auVar250._8_4_ = uVar249;
      auVar250._12_4_ = uVar274;
      auVar251._0_8_ = auVar250._0_8_ >> 6;
      auVar251._8_8_ = auVar250._8_8_ >> 6;
      puVar236 = (undefined1 *)(param_1[3] + 0x468);
      uVar244 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar280._8_4_ = (int)uVar244;
        auVar280._0_8_ = uVar244;
        auVar280._12_4_ = (int)(uVar244 >> 0x20);
        auVar306 = auVar251 | auVar233;
        auVar308 = (auVar280 | unaff_XMM8) ^ auVar233;
        lVar243 = auVar306._0_8_;
        auVar315._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        lVar241 = auVar306._8_8_;
        auVar315._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar315,0xe8);
        auVar24._8_4_ = 0xffffffff;
        auVar24._0_8_ = 0xffffffffffffffff;
        auVar24._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar24,auVar308 ^ auVar24);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x438] = 1;
        }
        auVar316 = packssdw(auVar315,auVar315);
        auVar25._8_4_ = 0xffffffff;
        auVar25._0_8_ = 0xffffffffffffffff;
        auVar25._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar25,auVar316 ^ auVar25);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[1] & 1) != 0) {
          puVar236[-0x3f0] = 1;
        }
        auVar316 = (auVar280 | unaff_XMM7) ^ auVar233;
        auVar317._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar317._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar317);
        auVar26._8_4_ = 0xffffffff;
        auVar26._0_8_ = 0xffffffffffffffff;
        auVar26._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar26,auVar308 ^ auVar26);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x3a8] = 1;
        }
        auVar316 = pshufhw(auVar317,auVar317,0x84);
        auVar27._8_4_ = 0xffffffff;
        auVar27._0_8_ = 0xffffffffffffffff;
        auVar27._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar27,auVar316 ^ auVar27);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[3] & 1) != 0) {
          puVar236[-0x360] = 1;
        }
        auVar316 = (auVar280 | unaff_XMM6) ^ auVar233;
        auVar318._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar318._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar318,0xe8);
        auVar28._8_4_ = 0xffffffff;
        auVar28._0_8_ = 0xffffffffffffffff;
        auVar28._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar28,auVar308 ^ auVar28);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x318] = 1;
        }
        auVar316 = packssdw(auVar318,auVar318);
        auVar29._8_4_ = 0xffffffff;
        auVar29._0_8_ = 0xffffffffffffffff;
        auVar29._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar29,auVar316 ^ auVar29);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[5] & 1) != 0) {
          puVar236[-0x2d0] = 1;
        }
        auVar316 = (auVar280 | in_XMM5) ^ auVar233;
        auVar319._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar319._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar319);
        auVar30._8_4_ = 0xffffffff;
        auVar30._0_8_ = 0xffffffffffffffff;
        auVar30._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar30,auVar308 ^ auVar30);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x288] = 1;
        }
        auVar316 = pshufhw(auVar319,auVar319,0x84);
        auVar31._8_4_ = 0xffffffff;
        auVar31._0_8_ = 0xffffffffffffffff;
        auVar31._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar31,auVar316 ^ auVar31);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[7] & 1) != 0) {
          puVar236[-0x240] = 1;
        }
        auVar316 = (auVar280 | in_XMM4) ^ auVar233;
        auVar320._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar320._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar320,0xe8);
        auVar32._8_4_ = 0xffffffff;
        auVar32._0_8_ = 0xffffffffffffffff;
        auVar32._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar32,auVar308 ^ auVar32);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x1f8] = 1;
        }
        auVar316 = packssdw(auVar320,auVar320);
        auVar33._8_4_ = 0xffffffff;
        auVar33._0_8_ = 0xffffffffffffffff;
        auVar33._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar33,auVar316 ^ auVar33);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[9] & 1) != 0) {
          puVar236[-0x1b0] = 1;
        }
        auVar316 = (auVar280 | in_XMM3) ^ auVar233;
        auVar321._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar321._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar321);
        auVar34._8_4_ = 0xffffffff;
        auVar34._0_8_ = 0xffffffffffffffff;
        auVar34._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar34,auVar308 ^ auVar34);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-0x168] = 1;
        }
        auVar316 = pshufhw(auVar321,auVar321,0x84);
        auVar35._8_4_ = 0xffffffff;
        auVar35._0_8_ = 0xffffffffffffffff;
        auVar35._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar35,auVar316 ^ auVar35);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[0xb] & 1) != 0) {
          puVar236[-0x120] = 1;
        }
        auVar316 = (auVar280 | in_XMM2) ^ auVar233;
        auVar322._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar322._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar322,0xe8);
        auVar36._8_4_ = 0xffffffff;
        auVar36._0_8_ = 0xffffffffffffffff;
        auVar36._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar36,auVar308 ^ auVar36);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0xd8] = 1;
        }
        auVar308 = packssdw(auVar322,auVar322);
        auVar37._8_4_ = 0xffffffff;
        auVar37._0_8_ = 0xffffffffffffffff;
        auVar37._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar37,auVar308 ^ auVar37);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0x90] = 1;
        }
        auVar308 = (auVar280 | in_XMM1) ^ auVar233;
        auVar281._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        auVar281._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar281);
        auVar38._8_4_ = 0xffffffff;
        auVar38._0_8_ = 0xffffffffffffffff;
        auVar38._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar38,auVar306 ^ auVar38);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x48] = 1;
        }
        auVar306 = pshufhw(auVar281,auVar281,0x84);
        auVar39._8_4_ = 0xffffffff;
        auVar39._0_8_ = 0xffffffffffffffff;
        auVar39._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar39,auVar306 ^ auVar39);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar244 = uVar244 + 0x10;
        puVar236 = puVar236 + 0x480;
      } while ((uVar237 / 0x48 + 0x10 & 0x7fffffffffffff0) != uVar244);
      uVar237 = CONCAT71((int7)(uVar244 >> 8),1);
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[6] != 0) {
      uVar237 = (longlong)(int)param_1[6] * 0x48 - 0x48;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar237;
      uVar249 = SUB164(auVar2 * ZEXT816(0xe38e38e38e38e38f),8);
      uVar274 = (undefined4)(uVar237 / 0x120000000);
      auVar252._0_8_ = CONCAT44(uVar274,uVar249);
      auVar252._8_4_ = uVar249;
      auVar252._12_4_ = uVar274;
      auVar253._0_8_ = auVar252._0_8_ >> 6;
      auVar253._8_8_ = auVar252._8_8_ >> 6;
      puVar236 = (undefined1 *)(param_1[5] + 0x468);
      uVar244 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar282._8_4_ = (int)uVar244;
        auVar282._0_8_ = uVar244;
        auVar282._12_4_ = (int)(uVar244 >> 0x20);
        auVar306 = auVar253 | auVar233;
        auVar308 = (auVar282 | unaff_XMM8) ^ auVar233;
        lVar243 = auVar306._0_8_;
        auVar323._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        lVar241 = auVar306._8_8_;
        auVar323._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar323,0xe8);
        auVar40._8_4_ = 0xffffffff;
        auVar40._0_8_ = 0xffffffffffffffff;
        auVar40._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar40,auVar308 ^ auVar40);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x438] = 1;
        }
        auVar316 = packssdw(auVar323,auVar323);
        auVar41._8_4_ = 0xffffffff;
        auVar41._0_8_ = 0xffffffffffffffff;
        auVar41._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar41,auVar316 ^ auVar41);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[1] & 1) != 0) {
          puVar236[-0x3f0] = 1;
        }
        auVar316 = (auVar282 | unaff_XMM7) ^ auVar233;
        auVar324._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar324._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar324);
        auVar42._8_4_ = 0xffffffff;
        auVar42._0_8_ = 0xffffffffffffffff;
        auVar42._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar42,auVar308 ^ auVar42);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x3a8] = 1;
        }
        auVar316 = pshufhw(auVar324,auVar324,0x84);
        auVar43._8_4_ = 0xffffffff;
        auVar43._0_8_ = 0xffffffffffffffff;
        auVar43._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar43,auVar316 ^ auVar43);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[3] & 1) != 0) {
          puVar236[-0x360] = 1;
        }
        auVar316 = (auVar282 | unaff_XMM6) ^ auVar233;
        auVar325._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar325._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar325,0xe8);
        auVar44._8_4_ = 0xffffffff;
        auVar44._0_8_ = 0xffffffffffffffff;
        auVar44._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar44,auVar308 ^ auVar44);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x318] = 1;
        }
        auVar316 = packssdw(auVar325,auVar325);
        auVar45._8_4_ = 0xffffffff;
        auVar45._0_8_ = 0xffffffffffffffff;
        auVar45._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar45,auVar316 ^ auVar45);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[5] & 1) != 0) {
          puVar236[-0x2d0] = 1;
        }
        auVar316 = (auVar282 | in_XMM5) ^ auVar233;
        auVar326._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar326._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar326);
        auVar46._8_4_ = 0xffffffff;
        auVar46._0_8_ = 0xffffffffffffffff;
        auVar46._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar46,auVar308 ^ auVar46);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x288] = 1;
        }
        auVar316 = pshufhw(auVar326,auVar326,0x84);
        auVar47._8_4_ = 0xffffffff;
        auVar47._0_8_ = 0xffffffffffffffff;
        auVar47._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar47,auVar316 ^ auVar47);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[7] & 1) != 0) {
          puVar236[-0x240] = 1;
        }
        auVar316 = (auVar282 | in_XMM4) ^ auVar233;
        auVar327._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar327._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar327,0xe8);
        auVar48._8_4_ = 0xffffffff;
        auVar48._0_8_ = 0xffffffffffffffff;
        auVar48._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar48,auVar308 ^ auVar48);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x1f8] = 1;
        }
        auVar316 = packssdw(auVar327,auVar327);
        auVar49._8_4_ = 0xffffffff;
        auVar49._0_8_ = 0xffffffffffffffff;
        auVar49._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar49,auVar316 ^ auVar49);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[9] & 1) != 0) {
          puVar236[-0x1b0] = 1;
        }
        auVar316 = (auVar282 | in_XMM3) ^ auVar233;
        auVar328._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar328._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar328);
        auVar50._8_4_ = 0xffffffff;
        auVar50._0_8_ = 0xffffffffffffffff;
        auVar50._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar50,auVar308 ^ auVar50);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-0x168] = 1;
        }
        auVar316 = pshufhw(auVar328,auVar328,0x84);
        auVar51._8_4_ = 0xffffffff;
        auVar51._0_8_ = 0xffffffffffffffff;
        auVar51._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar51,auVar316 ^ auVar51);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[0xb] & 1) != 0) {
          puVar236[-0x120] = 1;
        }
        auVar316 = (auVar282 | in_XMM2) ^ auVar233;
        auVar329._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar329._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar329,0xe8);
        auVar52._8_4_ = 0xffffffff;
        auVar52._0_8_ = 0xffffffffffffffff;
        auVar52._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar52,auVar308 ^ auVar52);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0xd8] = 1;
        }
        auVar308 = packssdw(auVar329,auVar329);
        auVar53._8_4_ = 0xffffffff;
        auVar53._0_8_ = 0xffffffffffffffff;
        auVar53._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar53,auVar308 ^ auVar53);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0x90] = 1;
        }
        auVar308 = (auVar282 | in_XMM1) ^ auVar233;
        auVar283._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        auVar283._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar283);
        auVar54._8_4_ = 0xffffffff;
        auVar54._0_8_ = 0xffffffffffffffff;
        auVar54._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar54,auVar306 ^ auVar54);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x48] = 1;
        }
        auVar306 = pshufhw(auVar283,auVar283,0x84);
        auVar55._8_4_ = 0xffffffff;
        auVar55._0_8_ = 0xffffffffffffffff;
        auVar55._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar55,auVar306 ^ auVar55);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar244 = uVar244 + 0x10;
        puVar236 = puVar236 + 0x480;
      } while ((uVar237 / 0x48 + 0x10 & 0x7fffffffffffff0) != uVar244);
      uVar237 = CONCAT71((int7)(uVar244 >> 8),1);
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[8] != 0) {
      uVar237 = (longlong)(int)param_1[8] * 0x48 - 0x48;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar237;
      uVar249 = SUB164(auVar3 * ZEXT816(0xe38e38e38e38e38f),8);
      uVar274 = (undefined4)(uVar237 / 0x120000000);
      auVar254._0_8_ = CONCAT44(uVar274,uVar249);
      auVar254._8_4_ = uVar249;
      auVar254._12_4_ = uVar274;
      auVar255._0_8_ = auVar254._0_8_ >> 6;
      auVar255._8_8_ = auVar254._8_8_ >> 6;
      puVar236 = (undefined1 *)(param_1[7] + 0x468);
      uVar244 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar284._8_4_ = (int)uVar244;
        auVar284._0_8_ = uVar244;
        auVar284._12_4_ = (int)(uVar244 >> 0x20);
        auVar306 = auVar255 | auVar233;
        auVar308 = (auVar284 | unaff_XMM8) ^ auVar233;
        lVar243 = auVar306._0_8_;
        auVar330._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        lVar241 = auVar306._8_8_;
        auVar330._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar330,0xe8);
        auVar56._8_4_ = 0xffffffff;
        auVar56._0_8_ = 0xffffffffffffffff;
        auVar56._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar56,auVar308 ^ auVar56);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x438] = 1;
        }
        auVar316 = packssdw(auVar330,auVar330);
        auVar57._8_4_ = 0xffffffff;
        auVar57._0_8_ = 0xffffffffffffffff;
        auVar57._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar57,auVar316 ^ auVar57);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[1] & 1) != 0) {
          puVar236[-0x3f0] = 1;
        }
        auVar316 = (auVar284 | unaff_XMM7) ^ auVar233;
        auVar331._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar331._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar331);
        auVar58._8_4_ = 0xffffffff;
        auVar58._0_8_ = 0xffffffffffffffff;
        auVar58._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar58,auVar308 ^ auVar58);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x3a8] = 1;
        }
        auVar316 = pshufhw(auVar331,auVar331,0x84);
        auVar59._8_4_ = 0xffffffff;
        auVar59._0_8_ = 0xffffffffffffffff;
        auVar59._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar59,auVar316 ^ auVar59);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[3] & 1) != 0) {
          puVar236[-0x360] = 1;
        }
        auVar316 = (auVar284 | unaff_XMM6) ^ auVar233;
        auVar332._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar332._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar332,0xe8);
        auVar60._8_4_ = 0xffffffff;
        auVar60._0_8_ = 0xffffffffffffffff;
        auVar60._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar60,auVar308 ^ auVar60);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x318] = 1;
        }
        auVar316 = packssdw(auVar332,auVar332);
        auVar61._8_4_ = 0xffffffff;
        auVar61._0_8_ = 0xffffffffffffffff;
        auVar61._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar61,auVar316 ^ auVar61);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[5] & 1) != 0) {
          puVar236[-0x2d0] = 1;
        }
        auVar316 = (auVar284 | in_XMM5) ^ auVar233;
        auVar333._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar333._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar333);
        auVar62._8_4_ = 0xffffffff;
        auVar62._0_8_ = 0xffffffffffffffff;
        auVar62._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar62,auVar308 ^ auVar62);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x288] = 1;
        }
        auVar316 = pshufhw(auVar333,auVar333,0x84);
        auVar63._8_4_ = 0xffffffff;
        auVar63._0_8_ = 0xffffffffffffffff;
        auVar63._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar63,auVar316 ^ auVar63);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[7] & 1) != 0) {
          puVar236[-0x240] = 1;
        }
        auVar316 = (auVar284 | in_XMM4) ^ auVar233;
        auVar334._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar334._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar334,0xe8);
        auVar64._8_4_ = 0xffffffff;
        auVar64._0_8_ = 0xffffffffffffffff;
        auVar64._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar64,auVar308 ^ auVar64);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x1f8] = 1;
        }
        auVar316 = packssdw(auVar334,auVar334);
        auVar65._8_4_ = 0xffffffff;
        auVar65._0_8_ = 0xffffffffffffffff;
        auVar65._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar65,auVar316 ^ auVar65);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[9] & 1) != 0) {
          puVar236[-0x1b0] = 1;
        }
        auVar316 = (auVar284 | in_XMM3) ^ auVar233;
        auVar335._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar335._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar335);
        auVar66._8_4_ = 0xffffffff;
        auVar66._0_8_ = 0xffffffffffffffff;
        auVar66._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar66,auVar308 ^ auVar66);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-0x168] = 1;
        }
        auVar316 = pshufhw(auVar335,auVar335,0x84);
        auVar67._8_4_ = 0xffffffff;
        auVar67._0_8_ = 0xffffffffffffffff;
        auVar67._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar67,auVar316 ^ auVar67);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[0xb] & 1) != 0) {
          puVar236[-0x120] = 1;
        }
        auVar316 = (auVar284 | in_XMM2) ^ auVar233;
        auVar336._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar336._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar336,0xe8);
        auVar68._8_4_ = 0xffffffff;
        auVar68._0_8_ = 0xffffffffffffffff;
        auVar68._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar68,auVar308 ^ auVar68);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0xd8] = 1;
        }
        auVar308 = packssdw(auVar336,auVar336);
        auVar69._8_4_ = 0xffffffff;
        auVar69._0_8_ = 0xffffffffffffffff;
        auVar69._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar69,auVar308 ^ auVar69);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0x90] = 1;
        }
        auVar308 = (auVar284 | in_XMM1) ^ auVar233;
        auVar285._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        auVar285._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar285);
        auVar70._8_4_ = 0xffffffff;
        auVar70._0_8_ = 0xffffffffffffffff;
        auVar70._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar70,auVar306 ^ auVar70);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x48] = 1;
        }
        auVar306 = pshufhw(auVar285,auVar285,0x84);
        auVar71._8_4_ = 0xffffffff;
        auVar71._0_8_ = 0xffffffffffffffff;
        auVar71._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar71,auVar306 ^ auVar71);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar244 = uVar244 + 0x10;
        puVar236 = puVar236 + 0x480;
      } while ((uVar237 / 0x48 + 0x10 & 0x7fffffffffffff0) != uVar244);
      uVar237 = CONCAT71((int7)(uVar244 >> 8),1);
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[10] != 0) {
      uVar237 = (longlong)(int)param_1[10] * 0x48 - 0x48;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar237;
      uVar249 = SUB164(auVar4 * ZEXT816(0xe38e38e38e38e38f),8);
      uVar274 = (undefined4)(uVar237 / 0x120000000);
      auVar256._0_8_ = CONCAT44(uVar274,uVar249);
      auVar256._8_4_ = uVar249;
      auVar256._12_4_ = uVar274;
      auVar257._0_8_ = auVar256._0_8_ >> 6;
      auVar257._8_8_ = auVar256._8_8_ >> 6;
      puVar236 = (undefined1 *)(param_1[9] + 0x468);
      uVar244 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar286._8_4_ = (int)uVar244;
        auVar286._0_8_ = uVar244;
        auVar286._12_4_ = (int)(uVar244 >> 0x20);
        auVar306 = auVar257 | auVar233;
        auVar308 = (auVar286 | unaff_XMM8) ^ auVar233;
        lVar243 = auVar306._0_8_;
        auVar337._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        lVar241 = auVar306._8_8_;
        auVar337._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar337,0xe8);
        auVar72._8_4_ = 0xffffffff;
        auVar72._0_8_ = 0xffffffffffffffff;
        auVar72._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar72,auVar308 ^ auVar72);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x438] = 1;
        }
        auVar316 = packssdw(auVar337,auVar337);
        auVar73._8_4_ = 0xffffffff;
        auVar73._0_8_ = 0xffffffffffffffff;
        auVar73._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar73,auVar316 ^ auVar73);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[1] & 1) != 0) {
          puVar236[-0x3f0] = 1;
        }
        auVar316 = (auVar286 | unaff_XMM7) ^ auVar233;
        auVar338._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar338._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar338);
        auVar74._8_4_ = 0xffffffff;
        auVar74._0_8_ = 0xffffffffffffffff;
        auVar74._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar74,auVar308 ^ auVar74);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x3a8] = 1;
        }
        auVar316 = pshufhw(auVar338,auVar338,0x84);
        auVar75._8_4_ = 0xffffffff;
        auVar75._0_8_ = 0xffffffffffffffff;
        auVar75._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar75,auVar316 ^ auVar75);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[3] & 1) != 0) {
          puVar236[-0x360] = 1;
        }
        auVar316 = (auVar286 | unaff_XMM6) ^ auVar233;
        auVar339._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar339._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar339,0xe8);
        auVar76._8_4_ = 0xffffffff;
        auVar76._0_8_ = 0xffffffffffffffff;
        auVar76._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar76,auVar308 ^ auVar76);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x318] = 1;
        }
        auVar316 = packssdw(auVar339,auVar339);
        auVar77._8_4_ = 0xffffffff;
        auVar77._0_8_ = 0xffffffffffffffff;
        auVar77._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar77,auVar316 ^ auVar77);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[5] & 1) != 0) {
          puVar236[-0x2d0] = 1;
        }
        auVar316 = (auVar286 | in_XMM5) ^ auVar233;
        auVar340._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar340._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar340);
        auVar78._8_4_ = 0xffffffff;
        auVar78._0_8_ = 0xffffffffffffffff;
        auVar78._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar78,auVar308 ^ auVar78);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x288] = 1;
        }
        auVar316 = pshufhw(auVar340,auVar340,0x84);
        auVar79._8_4_ = 0xffffffff;
        auVar79._0_8_ = 0xffffffffffffffff;
        auVar79._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar79,auVar316 ^ auVar79);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[7] & 1) != 0) {
          puVar236[-0x240] = 1;
        }
        auVar316 = (auVar286 | in_XMM4) ^ auVar233;
        auVar341._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar341._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar341,0xe8);
        auVar80._8_4_ = 0xffffffff;
        auVar80._0_8_ = 0xffffffffffffffff;
        auVar80._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar80,auVar308 ^ auVar80);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x1f8] = 1;
        }
        auVar316 = packssdw(auVar341,auVar341);
        auVar81._8_4_ = 0xffffffff;
        auVar81._0_8_ = 0xffffffffffffffff;
        auVar81._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar81,auVar316 ^ auVar81);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[9] & 1) != 0) {
          puVar236[-0x1b0] = 1;
        }
        auVar316 = (auVar286 | in_XMM3) ^ auVar233;
        auVar342._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar342._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar342);
        auVar82._8_4_ = 0xffffffff;
        auVar82._0_8_ = 0xffffffffffffffff;
        auVar82._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar82,auVar308 ^ auVar82);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-0x168] = 1;
        }
        auVar316 = pshufhw(auVar342,auVar342,0x84);
        auVar83._8_4_ = 0xffffffff;
        auVar83._0_8_ = 0xffffffffffffffff;
        auVar83._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar83,auVar316 ^ auVar83);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[0xb] & 1) != 0) {
          puVar236[-0x120] = 1;
        }
        auVar316 = (auVar286 | in_XMM2) ^ auVar233;
        auVar343._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar343._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar343,0xe8);
        auVar84._8_4_ = 0xffffffff;
        auVar84._0_8_ = 0xffffffffffffffff;
        auVar84._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar84,auVar308 ^ auVar84);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0xd8] = 1;
        }
        auVar308 = packssdw(auVar343,auVar343);
        auVar85._8_4_ = 0xffffffff;
        auVar85._0_8_ = 0xffffffffffffffff;
        auVar85._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar85,auVar308 ^ auVar85);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0x90] = 1;
        }
        auVar308 = (auVar286 | in_XMM1) ^ auVar233;
        auVar287._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        auVar287._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar287);
        auVar86._8_4_ = 0xffffffff;
        auVar86._0_8_ = 0xffffffffffffffff;
        auVar86._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar86,auVar306 ^ auVar86);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x48] = 1;
        }
        auVar306 = pshufhw(auVar287,auVar287,0x84);
        auVar87._8_4_ = 0xffffffff;
        auVar87._0_8_ = 0xffffffffffffffff;
        auVar87._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar87,auVar306 ^ auVar87);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar244 = uVar244 + 0x10;
        puVar236 = puVar236 + 0x480;
      } while ((uVar237 / 0x48 + 0x10 & 0x7fffffffffffff0) != uVar244);
      uVar237 = 1;
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[0xc] != 0) {
      uVar237 = (longlong)(int)param_1[0xc] * 0x50 - 0x50;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar237;
      uVar249 = SUB164(auVar5 * ZEXT816(0xcccccccccccccccd),8);
      uVar274 = (undefined4)(uVar237 / 0x140000000);
      auVar258._0_8_ = CONCAT44(uVar274,uVar249);
      auVar258._8_4_ = uVar249;
      auVar258._12_4_ = uVar274;
      auVar259._0_8_ = auVar258._0_8_ >> 6;
      auVar259._8_8_ = auVar258._8_8_ >> 6;
      puVar236 = (undefined1 *)(param_1[0xb] + 0x4e0);
      uVar244 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar288._8_4_ = (int)uVar244;
        auVar288._0_8_ = uVar244;
        auVar288._12_4_ = (int)(uVar244 >> 0x20);
        auVar306 = auVar259 | auVar233;
        auVar308 = (auVar288 | unaff_XMM8) ^ auVar233;
        lVar243 = auVar306._0_8_;
        auVar344._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        lVar241 = auVar306._8_8_;
        auVar344._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar344,0xe8);
        auVar88._8_4_ = 0xffffffff;
        auVar88._0_8_ = 0xffffffffffffffff;
        auVar88._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar88,auVar308 ^ auVar88);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x4b0] = 1;
        }
        auVar316 = packssdw(auVar344,auVar344);
        auVar89._8_4_ = 0xffffffff;
        auVar89._0_8_ = 0xffffffffffffffff;
        auVar89._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar89,auVar316 ^ auVar89);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[1] & 1) != 0) {
          puVar236[-0x460] = 1;
        }
        auVar316 = (auVar288 | unaff_XMM7) ^ auVar233;
        auVar345._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar345._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar345);
        auVar90._8_4_ = 0xffffffff;
        auVar90._0_8_ = 0xffffffffffffffff;
        auVar90._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar90,auVar308 ^ auVar90);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x410] = 1;
        }
        auVar316 = pshufhw(auVar345,auVar345,0x84);
        auVar91._8_4_ = 0xffffffff;
        auVar91._0_8_ = 0xffffffffffffffff;
        auVar91._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar91,auVar316 ^ auVar91);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[3] & 1) != 0) {
          puVar236[-0x3c0] = 1;
        }
        auVar316 = (auVar288 | unaff_XMM6) ^ auVar233;
        auVar346._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar346._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar346,0xe8);
        auVar92._8_4_ = 0xffffffff;
        auVar92._0_8_ = 0xffffffffffffffff;
        auVar92._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar92,auVar308 ^ auVar92);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x370] = 1;
        }
        auVar316 = packssdw(auVar346,auVar346);
        auVar93._8_4_ = 0xffffffff;
        auVar93._0_8_ = 0xffffffffffffffff;
        auVar93._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar93,auVar316 ^ auVar93);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[5] & 1) != 0) {
          puVar236[-800] = 1;
        }
        auVar316 = (auVar288 | in_XMM5) ^ auVar233;
        auVar347._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar347._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar347);
        auVar94._8_4_ = 0xffffffff;
        auVar94._0_8_ = 0xffffffffffffffff;
        auVar94._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar94,auVar308 ^ auVar94);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x2d0] = 1;
        }
        auVar316 = pshufhw(auVar347,auVar347,0x84);
        auVar95._8_4_ = 0xffffffff;
        auVar95._0_8_ = 0xffffffffffffffff;
        auVar95._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar95,auVar316 ^ auVar95);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[7] & 1) != 0) {
          puVar236[-0x280] = 1;
        }
        auVar316 = (auVar288 | in_XMM4) ^ auVar233;
        auVar348._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar348._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar348,0xe8);
        auVar96._8_4_ = 0xffffffff;
        auVar96._0_8_ = 0xffffffffffffffff;
        auVar96._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar96,auVar308 ^ auVar96);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x230] = 1;
        }
        auVar316 = packssdw(auVar348,auVar348);
        auVar97._8_4_ = 0xffffffff;
        auVar97._0_8_ = 0xffffffffffffffff;
        auVar97._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar97,auVar316 ^ auVar97);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[9] & 1) != 0) {
          puVar236[-0x1e0] = 1;
        }
        auVar316 = (auVar288 | in_XMM3) ^ auVar233;
        auVar349._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar349._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar349);
        auVar98._8_4_ = 0xffffffff;
        auVar98._0_8_ = 0xffffffffffffffff;
        auVar98._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar98,auVar308 ^ auVar98);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-400] = 1;
        }
        auVar316 = pshufhw(auVar349,auVar349,0x84);
        auVar99._8_4_ = 0xffffffff;
        auVar99._0_8_ = 0xffffffffffffffff;
        auVar99._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar99,auVar316 ^ auVar99);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[0xb] & 1) != 0) {
          puVar236[-0x140] = 1;
        }
        auVar316 = (auVar288 | in_XMM2) ^ auVar233;
        auVar350._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar350._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar350,0xe8);
        auVar100._8_4_ = 0xffffffff;
        auVar100._0_8_ = 0xffffffffffffffff;
        auVar100._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar100,auVar308 ^ auVar100);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0xf0] = 1;
        }
        auVar308 = packssdw(auVar350,auVar350);
        auVar101._8_4_ = 0xffffffff;
        auVar101._0_8_ = 0xffffffffffffffff;
        auVar101._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar101,auVar308 ^ auVar101);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0xa0] = 1;
        }
        auVar308 = (auVar288 | in_XMM1) ^ auVar233;
        auVar289._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        auVar289._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar289);
        auVar102._8_4_ = 0xffffffff;
        auVar102._0_8_ = 0xffffffffffffffff;
        auVar102._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar102,auVar306 ^ auVar102);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x50] = 1;
        }
        auVar306 = pshufhw(auVar289,auVar289,0x84);
        auVar103._8_4_ = 0xffffffff;
        auVar103._0_8_ = 0xffffffffffffffff;
        auVar103._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar103,auVar306 ^ auVar103);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar244 = uVar244 + 0x10;
        puVar236 = puVar236 + 0x500;
      } while ((uVar237 / 0x50 + 0x10 & 0x7fffffffffffff0) != uVar244);
      uVar237 = 1;
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[0xe] != 0) {
      uVar237 = (longlong)(int)param_1[0xe] * 0x50 - 0x50;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar237;
      uVar249 = SUB164(auVar6 * ZEXT816(0xcccccccccccccccd),8);
      uVar274 = (undefined4)(uVar237 / 0x140000000);
      auVar260._0_8_ = CONCAT44(uVar274,uVar249);
      auVar260._8_4_ = uVar249;
      auVar260._12_4_ = uVar274;
      auVar261._0_8_ = auVar260._0_8_ >> 6;
      auVar261._8_8_ = auVar260._8_8_ >> 6;
      puVar236 = (undefined1 *)(param_1[0xd] + 0x4e0);
      uVar244 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar290._8_4_ = (int)uVar244;
        auVar290._0_8_ = uVar244;
        auVar290._12_4_ = (int)(uVar244 >> 0x20);
        auVar306 = auVar261 | auVar233;
        auVar308 = (auVar290 | unaff_XMM8) ^ auVar233;
        lVar243 = auVar306._0_8_;
        auVar351._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        lVar241 = auVar306._8_8_;
        auVar351._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar351,0xe8);
        auVar104._8_4_ = 0xffffffff;
        auVar104._0_8_ = 0xffffffffffffffff;
        auVar104._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar104,auVar308 ^ auVar104);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x4b0] = 1;
        }
        auVar316 = packssdw(auVar351,auVar351);
        auVar105._8_4_ = 0xffffffff;
        auVar105._0_8_ = 0xffffffffffffffff;
        auVar105._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar105,auVar316 ^ auVar105);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[1] & 1) != 0) {
          puVar236[-0x460] = 1;
        }
        auVar316 = (auVar290 | unaff_XMM7) ^ auVar233;
        auVar352._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar352._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar352);
        auVar106._8_4_ = 0xffffffff;
        auVar106._0_8_ = 0xffffffffffffffff;
        auVar106._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar106,auVar308 ^ auVar106);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x410] = 1;
        }
        auVar316 = pshufhw(auVar352,auVar352,0x84);
        auVar107._8_4_ = 0xffffffff;
        auVar107._0_8_ = 0xffffffffffffffff;
        auVar107._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar107,auVar316 ^ auVar107);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[3] & 1) != 0) {
          puVar236[-0x3c0] = 1;
        }
        auVar316 = (auVar290 | unaff_XMM6) ^ auVar233;
        auVar353._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar353._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar353,0xe8);
        auVar108._8_4_ = 0xffffffff;
        auVar108._0_8_ = 0xffffffffffffffff;
        auVar108._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar108,auVar308 ^ auVar108);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x370] = 1;
        }
        auVar316 = packssdw(auVar353,auVar353);
        auVar109._8_4_ = 0xffffffff;
        auVar109._0_8_ = 0xffffffffffffffff;
        auVar109._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar109,auVar316 ^ auVar109);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[5] & 1) != 0) {
          puVar236[-800] = 1;
        }
        auVar316 = (auVar290 | in_XMM5) ^ auVar233;
        auVar354._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar354._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar354);
        auVar110._8_4_ = 0xffffffff;
        auVar110._0_8_ = 0xffffffffffffffff;
        auVar110._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar110,auVar308 ^ auVar110);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x2d0] = 1;
        }
        auVar316 = pshufhw(auVar354,auVar354,0x84);
        auVar111._8_4_ = 0xffffffff;
        auVar111._0_8_ = 0xffffffffffffffff;
        auVar111._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar111,auVar316 ^ auVar111);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[7] & 1) != 0) {
          puVar236[-0x280] = 1;
        }
        auVar316 = (auVar290 | in_XMM4) ^ auVar233;
        auVar355._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar355._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar355,0xe8);
        auVar112._8_4_ = 0xffffffff;
        auVar112._0_8_ = 0xffffffffffffffff;
        auVar112._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar112,auVar308 ^ auVar112);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x230] = 1;
        }
        auVar316 = packssdw(auVar355,auVar355);
        auVar113._8_4_ = 0xffffffff;
        auVar113._0_8_ = 0xffffffffffffffff;
        auVar113._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar113,auVar316 ^ auVar113);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[9] & 1) != 0) {
          puVar236[-0x1e0] = 1;
        }
        auVar316 = (auVar290 | in_XMM3) ^ auVar233;
        auVar356._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar356._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar356);
        auVar114._8_4_ = 0xffffffff;
        auVar114._0_8_ = 0xffffffffffffffff;
        auVar114._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar114,auVar308 ^ auVar114);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-400] = 1;
        }
        auVar316 = pshufhw(auVar356,auVar356,0x84);
        auVar115._8_4_ = 0xffffffff;
        auVar115._0_8_ = 0xffffffffffffffff;
        auVar115._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar115,auVar316 ^ auVar115);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[0xb] & 1) != 0) {
          puVar236[-0x140] = 1;
        }
        auVar316 = (auVar290 | in_XMM2) ^ auVar233;
        auVar357._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar357._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar357,0xe8);
        auVar116._8_4_ = 0xffffffff;
        auVar116._0_8_ = 0xffffffffffffffff;
        auVar116._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar116,auVar308 ^ auVar116);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0xf0] = 1;
        }
        auVar308 = packssdw(auVar357,auVar357);
        auVar117._8_4_ = 0xffffffff;
        auVar117._0_8_ = 0xffffffffffffffff;
        auVar117._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar117,auVar308 ^ auVar117);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0xa0] = 1;
        }
        auVar308 = (auVar290 | in_XMM1) ^ auVar233;
        auVar291._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        auVar291._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar291);
        auVar118._8_4_ = 0xffffffff;
        auVar118._0_8_ = 0xffffffffffffffff;
        auVar118._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar118,auVar306 ^ auVar118);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x50] = 1;
        }
        auVar306 = pshufhw(auVar291,auVar291,0x84);
        auVar119._8_4_ = 0xffffffff;
        auVar119._0_8_ = 0xffffffffffffffff;
        auVar119._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar119,auVar306 ^ auVar119);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar244 = uVar244 + 0x10;
        puVar236 = puVar236 + 0x500;
      } while ((uVar237 / 0x50 + 0x10 & 0x7fffffffffffff0) != uVar244);
      uVar237 = 1;
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[0x10] != 0) {
      uVar237 = (longlong)(int)param_1[0x10] * 0x58 - 0x58;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar237;
      uVar249 = SUB164(auVar7 * ZEXT816(0x2e8ba2e8ba2e8ba3),8);
      uVar274 = (undefined4)(uVar237 / 0x580000000);
      auVar262._0_8_ = CONCAT44(uVar274,uVar249);
      auVar262._8_4_ = uVar249;
      auVar262._12_4_ = uVar274;
      auVar263._0_8_ = auVar262._0_8_ >> 4;
      auVar263._8_8_ = auVar262._8_8_ >> 4;
      puVar236 = (undefined1 *)(param_1[0xf] + 0x558);
      uVar244 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar292._8_4_ = (int)uVar244;
        auVar292._0_8_ = uVar244;
        auVar292._12_4_ = (int)(uVar244 >> 0x20);
        auVar306 = auVar263 | auVar233;
        auVar308 = (auVar292 | unaff_XMM8) ^ auVar233;
        lVar243 = auVar306._0_8_;
        auVar358._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        lVar241 = auVar306._8_8_;
        auVar358._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar358,0xe8);
        auVar120._8_4_ = 0xffffffff;
        auVar120._0_8_ = 0xffffffffffffffff;
        auVar120._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar120,auVar308 ^ auVar120);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x528] = 1;
        }
        auVar316 = packssdw(auVar358,auVar358);
        auVar121._8_4_ = 0xffffffff;
        auVar121._0_8_ = 0xffffffffffffffff;
        auVar121._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar121,auVar316 ^ auVar121);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[1] & 1) != 0) {
          puVar236[-0x4d0] = 1;
        }
        auVar316 = (auVar292 | unaff_XMM7) ^ auVar233;
        auVar359._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar359._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar359);
        auVar122._8_4_ = 0xffffffff;
        auVar122._0_8_ = 0xffffffffffffffff;
        auVar122._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar122,auVar308 ^ auVar122);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x478] = 1;
        }
        auVar316 = pshufhw(auVar359,auVar359,0x84);
        auVar123._8_4_ = 0xffffffff;
        auVar123._0_8_ = 0xffffffffffffffff;
        auVar123._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar123,auVar316 ^ auVar123);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[3] & 1) != 0) {
          puVar236[-0x420] = 1;
        }
        auVar316 = (auVar292 | unaff_XMM6) ^ auVar233;
        auVar360._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar360._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar360,0xe8);
        auVar124._8_4_ = 0xffffffff;
        auVar124._0_8_ = 0xffffffffffffffff;
        auVar124._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar124,auVar308 ^ auVar124);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x3c8] = 1;
        }
        auVar316 = packssdw(auVar360,auVar360);
        auVar125._8_4_ = 0xffffffff;
        auVar125._0_8_ = 0xffffffffffffffff;
        auVar125._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar125,auVar316 ^ auVar125);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[5] & 1) != 0) {
          puVar236[-0x370] = 1;
        }
        auVar316 = (auVar292 | in_XMM5) ^ auVar233;
        auVar361._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar361._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar361);
        auVar126._8_4_ = 0xffffffff;
        auVar126._0_8_ = 0xffffffffffffffff;
        auVar126._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar126,auVar308 ^ auVar126);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x318] = 1;
        }
        auVar316 = pshufhw(auVar361,auVar361,0x84);
        auVar127._8_4_ = 0xffffffff;
        auVar127._0_8_ = 0xffffffffffffffff;
        auVar127._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar127,auVar316 ^ auVar127);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[7] & 1) != 0) {
          puVar236[-0x2c0] = 1;
        }
        auVar316 = (auVar292 | in_XMM4) ^ auVar233;
        auVar362._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar362._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar362,0xe8);
        auVar128._8_4_ = 0xffffffff;
        auVar128._0_8_ = 0xffffffffffffffff;
        auVar128._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar128,auVar308 ^ auVar128);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x268] = 1;
        }
        auVar316 = packssdw(auVar362,auVar362);
        auVar129._8_4_ = 0xffffffff;
        auVar129._0_8_ = 0xffffffffffffffff;
        auVar129._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar129,auVar316 ^ auVar129);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[9] & 1) != 0) {
          puVar236[-0x210] = 1;
        }
        auVar316 = (auVar292 | in_XMM3) ^ auVar233;
        auVar363._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar363._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar363);
        auVar130._8_4_ = 0xffffffff;
        auVar130._0_8_ = 0xffffffffffffffff;
        auVar130._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar130,auVar308 ^ auVar130);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-0x1b8] = 1;
        }
        auVar316 = pshufhw(auVar363,auVar363,0x84);
        auVar131._8_4_ = 0xffffffff;
        auVar131._0_8_ = 0xffffffffffffffff;
        auVar131._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar131,auVar316 ^ auVar131);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[0xb] & 1) != 0) {
          puVar236[-0x160] = 1;
        }
        auVar316 = (auVar292 | in_XMM2) ^ auVar233;
        auVar364._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar364._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar364,0xe8);
        auVar132._8_4_ = 0xffffffff;
        auVar132._0_8_ = 0xffffffffffffffff;
        auVar132._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar132,auVar308 ^ auVar132);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0x108] = 1;
        }
        auVar308 = packssdw(auVar364,auVar364);
        auVar133._8_4_ = 0xffffffff;
        auVar133._0_8_ = 0xffffffffffffffff;
        auVar133._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar133,auVar308 ^ auVar133);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0xb0] = 1;
        }
        auVar308 = (auVar292 | in_XMM1) ^ auVar233;
        auVar293._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        auVar293._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar293);
        auVar134._8_4_ = 0xffffffff;
        auVar134._0_8_ = 0xffffffffffffffff;
        auVar134._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar134,auVar306 ^ auVar134);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x58] = 1;
        }
        auVar306 = pshufhw(auVar293,auVar293,0x84);
        auVar135._8_4_ = 0xffffffff;
        auVar135._0_8_ = 0xffffffffffffffff;
        auVar135._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar135,auVar306 ^ auVar135);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar244 = uVar244 + 0x10;
        puVar236 = puVar236 + 0x580;
      } while ((uVar237 / 0x58 + 0x10 & 0x7fffffffffffff0) != uVar244);
      uVar237 = CONCAT71((int7)(uVar244 >> 8),1);
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[0x12] != 0) {
      uVar237 = (longlong)(int)param_1[0x12] * 0x60 - 0x60;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar237;
      uVar249 = SUB164(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
      uVar274 = (undefined4)(uVar237 / 0x180000000);
      auVar264._0_8_ = CONCAT44(uVar274,uVar249);
      auVar264._8_4_ = uVar249;
      auVar264._12_4_ = uVar274;
      auVar265._0_8_ = auVar264._0_8_ >> 6;
      auVar265._8_8_ = auVar264._8_8_ >> 6;
      puVar236 = (undefined1 *)(param_1[0x11] + 0x5d0);
      uVar244 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar294._8_4_ = (int)uVar244;
        auVar294._0_8_ = uVar244;
        auVar294._12_4_ = (int)(uVar244 >> 0x20);
        auVar306 = auVar265 | auVar233;
        auVar308 = (auVar294 | unaff_XMM8) ^ auVar233;
        lVar243 = auVar306._0_8_;
        auVar365._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        lVar241 = auVar306._8_8_;
        auVar365._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar365,0xe8);
        auVar136._8_4_ = 0xffffffff;
        auVar136._0_8_ = 0xffffffffffffffff;
        auVar136._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar136,auVar308 ^ auVar136);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x5a0] = 1;
        }
        auVar316 = packssdw(auVar365,auVar365);
        auVar137._8_4_ = 0xffffffff;
        auVar137._0_8_ = 0xffffffffffffffff;
        auVar137._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar137,auVar316 ^ auVar137);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[1] & 1) != 0) {
          puVar236[-0x540] = 1;
        }
        auVar316 = (auVar294 | unaff_XMM7) ^ auVar233;
        auVar366._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar366._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar366);
        auVar138._8_4_ = 0xffffffff;
        auVar138._0_8_ = 0xffffffffffffffff;
        auVar138._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar138,auVar308 ^ auVar138);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x4e0] = 1;
        }
        auVar316 = pshufhw(auVar366,auVar366,0x84);
        auVar139._8_4_ = 0xffffffff;
        auVar139._0_8_ = 0xffffffffffffffff;
        auVar139._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar139,auVar316 ^ auVar139);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[3] & 1) != 0) {
          puVar236[-0x480] = 1;
        }
        auVar316 = (auVar294 | unaff_XMM6) ^ auVar233;
        auVar367._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar367._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar367,0xe8);
        auVar140._8_4_ = 0xffffffff;
        auVar140._0_8_ = 0xffffffffffffffff;
        auVar140._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar140,auVar308 ^ auVar140);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x420] = 1;
        }
        auVar316 = packssdw(auVar367,auVar367);
        auVar141._8_4_ = 0xffffffff;
        auVar141._0_8_ = 0xffffffffffffffff;
        auVar141._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar141,auVar316 ^ auVar141);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[5] & 1) != 0) {
          puVar236[-0x3c0] = 1;
        }
        auVar316 = (auVar294 | in_XMM5) ^ auVar233;
        auVar368._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar368._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar368);
        auVar142._8_4_ = 0xffffffff;
        auVar142._0_8_ = 0xffffffffffffffff;
        auVar142._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar142,auVar308 ^ auVar142);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x360] = 1;
        }
        auVar316 = pshufhw(auVar368,auVar368,0x84);
        auVar143._8_4_ = 0xffffffff;
        auVar143._0_8_ = 0xffffffffffffffff;
        auVar143._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar143,auVar316 ^ auVar143);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[7] & 1) != 0) {
          puVar236[-0x300] = 1;
        }
        auVar316 = (auVar294 | in_XMM4) ^ auVar233;
        auVar369._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar369._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar369,0xe8);
        auVar144._8_4_ = 0xffffffff;
        auVar144._0_8_ = 0xffffffffffffffff;
        auVar144._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar144,auVar308 ^ auVar144);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x2a0] = 1;
        }
        auVar316 = packssdw(auVar369,auVar369);
        auVar145._8_4_ = 0xffffffff;
        auVar145._0_8_ = 0xffffffffffffffff;
        auVar145._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar145,auVar316 ^ auVar145);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[9] & 1) != 0) {
          puVar236[-0x240] = 1;
        }
        auVar316 = (auVar294 | in_XMM3) ^ auVar233;
        auVar370._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar370._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar370);
        auVar146._8_4_ = 0xffffffff;
        auVar146._0_8_ = 0xffffffffffffffff;
        auVar146._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar146,auVar308 ^ auVar146);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-0x1e0] = 1;
        }
        auVar316 = pshufhw(auVar370,auVar370,0x84);
        auVar147._8_4_ = 0xffffffff;
        auVar147._0_8_ = 0xffffffffffffffff;
        auVar147._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar147,auVar316 ^ auVar147);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[0xb] & 1) != 0) {
          puVar236[-0x180] = 1;
        }
        auVar316 = (auVar294 | in_XMM2) ^ auVar233;
        auVar371._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar371._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar371,0xe8);
        auVar148._8_4_ = 0xffffffff;
        auVar148._0_8_ = 0xffffffffffffffff;
        auVar148._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar148,auVar308 ^ auVar148);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0x120] = 1;
        }
        auVar308 = packssdw(auVar371,auVar371);
        auVar149._8_4_ = 0xffffffff;
        auVar149._0_8_ = 0xffffffffffffffff;
        auVar149._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar149,auVar308 ^ auVar149);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0xc0] = 1;
        }
        auVar308 = (auVar294 | in_XMM1) ^ auVar233;
        auVar295._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        auVar295._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar295);
        auVar150._8_4_ = 0xffffffff;
        auVar150._0_8_ = 0xffffffffffffffff;
        auVar150._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar150,auVar306 ^ auVar150);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x60] = 1;
        }
        auVar306 = pshufhw(auVar295,auVar295,0x84);
        auVar151._8_4_ = 0xffffffff;
        auVar151._0_8_ = 0xffffffffffffffff;
        auVar151._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar151,auVar306 ^ auVar151);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar244 = uVar244 + 0x10;
        puVar236 = puVar236 + 0x600;
      } while ((uVar237 / 0x60 + 0x10 & 0x7fffffffffffff0) != uVar244);
      uVar237 = CONCAT71((int7)(uVar244 >> 8),1);
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[0x14] != 0) {
      uVar237 = (longlong)(int)param_1[0x14] * 0x70 - 0x70U >> 4;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar237;
      auVar266._8_4_ = SUB164(auVar9 * ZEXT816(0x2492492492492493),8);
      auVar266._0_8_ = uVar237 / 7;
      auVar266._12_4_ = (int)(uVar237 / 0x700000000);
      puVar236 = (undefined1 *)(param_1[0x13] + 0x6c0);
      uVar244 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar296._8_4_ = (int)uVar244;
        auVar296._0_8_ = uVar244;
        auVar296._12_4_ = (int)(uVar244 >> 0x20);
        auVar306 = auVar266 | auVar233;
        auVar308 = (auVar296 | unaff_XMM8) ^ auVar233;
        lVar243 = auVar306._0_8_;
        auVar372._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        lVar241 = auVar306._8_8_;
        auVar372._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar372,0xe8);
        auVar152._8_4_ = 0xffffffff;
        auVar152._0_8_ = 0xffffffffffffffff;
        auVar152._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar152,auVar308 ^ auVar152);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x690] = 1;
        }
        auVar316 = packssdw(auVar372,auVar372);
        auVar153._8_4_ = 0xffffffff;
        auVar153._0_8_ = 0xffffffffffffffff;
        auVar153._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar153,auVar316 ^ auVar153);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[1] & 1) != 0) {
          puVar236[-0x620] = 1;
        }
        auVar316 = (auVar296 | unaff_XMM7) ^ auVar233;
        auVar373._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar373._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar373);
        auVar154._8_4_ = 0xffffffff;
        auVar154._0_8_ = 0xffffffffffffffff;
        auVar154._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar154,auVar308 ^ auVar154);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x5b0] = 1;
        }
        auVar316 = pshufhw(auVar373,auVar373,0x84);
        auVar155._8_4_ = 0xffffffff;
        auVar155._0_8_ = 0xffffffffffffffff;
        auVar155._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar155,auVar316 ^ auVar155);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[3] & 1) != 0) {
          puVar236[-0x540] = 1;
        }
        auVar316 = (auVar296 | unaff_XMM6) ^ auVar233;
        auVar374._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar374._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar374,0xe8);
        auVar156._8_4_ = 0xffffffff;
        auVar156._0_8_ = 0xffffffffffffffff;
        auVar156._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar156,auVar308 ^ auVar156);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x4d0] = 1;
        }
        auVar316 = packssdw(auVar374,auVar374);
        auVar157._8_4_ = 0xffffffff;
        auVar157._0_8_ = 0xffffffffffffffff;
        auVar157._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar157,auVar316 ^ auVar157);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[5] & 1) != 0) {
          puVar236[-0x460] = 1;
        }
        auVar316 = (auVar296 | in_XMM5) ^ auVar233;
        auVar375._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar375._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar375);
        auVar158._8_4_ = 0xffffffff;
        auVar158._0_8_ = 0xffffffffffffffff;
        auVar158._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar158,auVar308 ^ auVar158);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x3f0] = 1;
        }
        auVar316 = pshufhw(auVar375,auVar375,0x84);
        auVar159._8_4_ = 0xffffffff;
        auVar159._0_8_ = 0xffffffffffffffff;
        auVar159._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar159,auVar316 ^ auVar159);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[7] & 1) != 0) {
          puVar236[-0x380] = 1;
        }
        auVar316 = (auVar296 | in_XMM4) ^ auVar233;
        auVar376._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar376._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar376,0xe8);
        auVar160._8_4_ = 0xffffffff;
        auVar160._0_8_ = 0xffffffffffffffff;
        auVar160._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar160,auVar308 ^ auVar160);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x310] = 1;
        }
        auVar316 = packssdw(auVar376,auVar376);
        auVar161._8_4_ = 0xffffffff;
        auVar161._0_8_ = 0xffffffffffffffff;
        auVar161._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar161,auVar316 ^ auVar161);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[9] & 1) != 0) {
          puVar236[-0x2a0] = 1;
        }
        auVar316 = (auVar296 | in_XMM3) ^ auVar233;
        auVar377._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar377._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar377);
        auVar162._8_4_ = 0xffffffff;
        auVar162._0_8_ = 0xffffffffffffffff;
        auVar162._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar162,auVar308 ^ auVar162);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-0x230] = 1;
        }
        auVar316 = pshufhw(auVar377,auVar377,0x84);
        auVar163._8_4_ = 0xffffffff;
        auVar163._0_8_ = 0xffffffffffffffff;
        auVar163._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar163,auVar316 ^ auVar163);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[0xb] & 1) != 0) {
          puVar236[-0x1c0] = 1;
        }
        auVar316 = (auVar296 | in_XMM2) ^ auVar233;
        auVar378._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar378._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar378,0xe8);
        auVar164._8_4_ = 0xffffffff;
        auVar164._0_8_ = 0xffffffffffffffff;
        auVar164._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar164,auVar308 ^ auVar164);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0x150] = 1;
        }
        auVar308 = packssdw(auVar378,auVar378);
        auVar165._8_4_ = 0xffffffff;
        auVar165._0_8_ = 0xffffffffffffffff;
        auVar165._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar165,auVar308 ^ auVar165);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0xe0] = 1;
        }
        auVar308 = (auVar296 | in_XMM1) ^ auVar233;
        auVar297._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        auVar297._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar297);
        auVar166._8_4_ = 0xffffffff;
        auVar166._0_8_ = 0xffffffffffffffff;
        auVar166._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar166,auVar306 ^ auVar166);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x70] = 1;
        }
        auVar306 = pshufhw(auVar297,auVar297,0x84);
        auVar167._8_4_ = 0xffffffff;
        auVar167._0_8_ = 0xffffffffffffffff;
        auVar167._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar167,auVar306 ^ auVar167);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar244 = uVar244 + 0x10;
        puVar236 = puVar236 + 0x700;
      } while ((uVar237 / 7 + 0x10 & 0x7fffffffffffff0) != uVar244);
      uVar237 = CONCAT71((int7)((ulonglong)puVar236 >> 8),1);
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[0x16] != 0) {
      uVar237 = (longlong)(int)param_1[0x16] * 0x50 - 0x50;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar237;
      uVar249 = SUB164(auVar10 * ZEXT816(0xcccccccccccccccd),8);
      uVar274 = (undefined4)(uVar237 / 0x140000000);
      auVar267._0_8_ = CONCAT44(uVar274,uVar249);
      auVar267._8_4_ = uVar249;
      auVar267._12_4_ = uVar274;
      auVar268._0_8_ = auVar267._0_8_ >> 6;
      auVar268._8_8_ = auVar267._8_8_ >> 6;
      puVar236 = (undefined1 *)(param_1[0x15] + 0x4e0);
      uVar244 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar298._8_4_ = (int)uVar244;
        auVar298._0_8_ = uVar244;
        auVar298._12_4_ = (int)(uVar244 >> 0x20);
        auVar306 = auVar268 | auVar233;
        auVar308 = (auVar298 | unaff_XMM8) ^ auVar233;
        lVar243 = auVar306._0_8_;
        auVar379._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        lVar241 = auVar306._8_8_;
        auVar379._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar379,0xe8);
        auVar168._8_4_ = 0xffffffff;
        auVar168._0_8_ = 0xffffffffffffffff;
        auVar168._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar168,auVar308 ^ auVar168);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x4b0] = 1;
        }
        auVar316 = packssdw(auVar379,auVar379);
        auVar169._8_4_ = 0xffffffff;
        auVar169._0_8_ = 0xffffffffffffffff;
        auVar169._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar169,auVar316 ^ auVar169);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[1] & 1) != 0) {
          puVar236[-0x460] = 1;
        }
        auVar316 = (auVar298 | unaff_XMM7) ^ auVar233;
        auVar380._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar380._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar380);
        auVar170._8_4_ = 0xffffffff;
        auVar170._0_8_ = 0xffffffffffffffff;
        auVar170._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar170,auVar308 ^ auVar170);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x410] = 1;
        }
        auVar316 = pshufhw(auVar380,auVar380,0x84);
        auVar171._8_4_ = 0xffffffff;
        auVar171._0_8_ = 0xffffffffffffffff;
        auVar171._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar171,auVar316 ^ auVar171);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[3] & 1) != 0) {
          puVar236[-0x3c0] = 1;
        }
        auVar316 = (auVar298 | unaff_XMM6) ^ auVar233;
        auVar381._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar381._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar381,0xe8);
        auVar172._8_4_ = 0xffffffff;
        auVar172._0_8_ = 0xffffffffffffffff;
        auVar172._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar172,auVar308 ^ auVar172);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x370] = 1;
        }
        auVar316 = packssdw(auVar381,auVar381);
        auVar173._8_4_ = 0xffffffff;
        auVar173._0_8_ = 0xffffffffffffffff;
        auVar173._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar173,auVar316 ^ auVar173);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[5] & 1) != 0) {
          puVar236[-800] = 1;
        }
        auVar316 = (auVar298 | in_XMM5) ^ auVar233;
        auVar382._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar382._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar382);
        auVar174._8_4_ = 0xffffffff;
        auVar174._0_8_ = 0xffffffffffffffff;
        auVar174._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar174,auVar308 ^ auVar174);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x2d0] = 1;
        }
        auVar316 = pshufhw(auVar382,auVar382,0x84);
        auVar175._8_4_ = 0xffffffff;
        auVar175._0_8_ = 0xffffffffffffffff;
        auVar175._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar175,auVar316 ^ auVar175);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[7] & 1) != 0) {
          puVar236[-0x280] = 1;
        }
        auVar316 = (auVar298 | in_XMM4) ^ auVar233;
        auVar383._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar383._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar383,0xe8);
        auVar176._8_4_ = 0xffffffff;
        auVar176._0_8_ = 0xffffffffffffffff;
        auVar176._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar176,auVar308 ^ auVar176);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x230] = 1;
        }
        auVar316 = packssdw(auVar383,auVar383);
        auVar177._8_4_ = 0xffffffff;
        auVar177._0_8_ = 0xffffffffffffffff;
        auVar177._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar177,auVar316 ^ auVar177);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[9] & 1) != 0) {
          puVar236[-0x1e0] = 1;
        }
        auVar316 = (auVar298 | in_XMM3) ^ auVar233;
        auVar384._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar384._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar384);
        auVar178._8_4_ = 0xffffffff;
        auVar178._0_8_ = 0xffffffffffffffff;
        auVar178._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar178,auVar308 ^ auVar178);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-400] = 1;
        }
        auVar316 = pshufhw(auVar384,auVar384,0x84);
        auVar179._8_4_ = 0xffffffff;
        auVar179._0_8_ = 0xffffffffffffffff;
        auVar179._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar179,auVar316 ^ auVar179);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[0xb] & 1) != 0) {
          puVar236[-0x140] = 1;
        }
        auVar316 = (auVar298 | in_XMM2) ^ auVar233;
        auVar385._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar385._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar385,0xe8);
        auVar180._8_4_ = 0xffffffff;
        auVar180._0_8_ = 0xffffffffffffffff;
        auVar180._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar180,auVar308 ^ auVar180);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0xf0] = 1;
        }
        auVar308 = packssdw(auVar385,auVar385);
        auVar181._8_4_ = 0xffffffff;
        auVar181._0_8_ = 0xffffffffffffffff;
        auVar181._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar181,auVar308 ^ auVar181);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0xa0] = 1;
        }
        auVar308 = (auVar298 | in_XMM1) ^ auVar233;
        auVar299._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        auVar299._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar299);
        auVar182._8_4_ = 0xffffffff;
        auVar182._0_8_ = 0xffffffffffffffff;
        auVar182._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar182,auVar306 ^ auVar182);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x50] = 1;
        }
        auVar306 = pshufhw(auVar299,auVar299,0x84);
        auVar183._8_4_ = 0xffffffff;
        auVar183._0_8_ = 0xffffffffffffffff;
        auVar183._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar183,auVar306 ^ auVar183);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar244 = uVar244 + 0x10;
        puVar236 = puVar236 + 0x500;
      } while ((uVar237 / 0x50 + 0x10 & 0x7fffffffffffff0) != uVar244);
      uVar237 = CONCAT71((int7)(uVar244 >> 8),1);
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[0x18] != 0) {
      uVar237 = (longlong)(int)param_1[0x18] * 0x58 - 0x58;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar237;
      uVar249 = SUB164(auVar11 * ZEXT816(0x2e8ba2e8ba2e8ba3),8);
      uVar274 = (undefined4)(uVar237 / 0x580000000);
      auVar269._0_8_ = CONCAT44(uVar274,uVar249);
      auVar269._8_4_ = uVar249;
      auVar269._12_4_ = uVar274;
      auVar270._0_8_ = auVar269._0_8_ >> 4;
      auVar270._8_8_ = auVar269._8_8_ >> 4;
      puVar236 = (undefined1 *)(param_1[0x17] + 0x558);
      uVar244 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar300._8_4_ = (int)uVar244;
        auVar300._0_8_ = uVar244;
        auVar300._12_4_ = (int)(uVar244 >> 0x20);
        auVar306 = auVar270 | auVar233;
        auVar308 = (auVar300 | unaff_XMM8) ^ auVar233;
        lVar243 = auVar306._0_8_;
        auVar386._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        lVar241 = auVar306._8_8_;
        auVar386._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar386,0xe8);
        auVar184._8_4_ = 0xffffffff;
        auVar184._0_8_ = 0xffffffffffffffff;
        auVar184._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar184,auVar308 ^ auVar184);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x528] = 1;
        }
        auVar316 = packssdw(auVar386,auVar386);
        auVar185._8_4_ = 0xffffffff;
        auVar185._0_8_ = 0xffffffffffffffff;
        auVar185._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar185,auVar316 ^ auVar185);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[1] & 1) != 0) {
          puVar236[-0x4d0] = 1;
        }
        auVar316 = (auVar300 | unaff_XMM7) ^ auVar233;
        auVar387._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar387._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar387);
        auVar186._8_4_ = 0xffffffff;
        auVar186._0_8_ = 0xffffffffffffffff;
        auVar186._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar186,auVar308 ^ auVar186);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x478] = 1;
        }
        auVar316 = pshufhw(auVar387,auVar387,0x84);
        auVar187._8_4_ = 0xffffffff;
        auVar187._0_8_ = 0xffffffffffffffff;
        auVar187._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar187,auVar316 ^ auVar187);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[3] & 1) != 0) {
          puVar236[-0x420] = 1;
        }
        auVar316 = (auVar300 | unaff_XMM6) ^ auVar233;
        auVar388._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar388._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar388,0xe8);
        auVar188._8_4_ = 0xffffffff;
        auVar188._0_8_ = 0xffffffffffffffff;
        auVar188._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar188,auVar308 ^ auVar188);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x3c8] = 1;
        }
        auVar316 = packssdw(auVar388,auVar388);
        auVar189._8_4_ = 0xffffffff;
        auVar189._0_8_ = 0xffffffffffffffff;
        auVar189._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar189,auVar316 ^ auVar189);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[5] & 1) != 0) {
          puVar236[-0x370] = 1;
        }
        auVar316 = (auVar300 | in_XMM5) ^ auVar233;
        auVar389._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar389._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar389);
        auVar190._8_4_ = 0xffffffff;
        auVar190._0_8_ = 0xffffffffffffffff;
        auVar190._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar190,auVar308 ^ auVar190);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x318] = 1;
        }
        auVar316 = pshufhw(auVar389,auVar389,0x84);
        auVar191._8_4_ = 0xffffffff;
        auVar191._0_8_ = 0xffffffffffffffff;
        auVar191._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar191,auVar316 ^ auVar191);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[7] & 1) != 0) {
          puVar236[-0x2c0] = 1;
        }
        auVar316 = (auVar300 | in_XMM4) ^ auVar233;
        auVar390._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar390._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar390,0xe8);
        auVar192._8_4_ = 0xffffffff;
        auVar192._0_8_ = 0xffffffffffffffff;
        auVar192._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar192,auVar308 ^ auVar192);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x268] = 1;
        }
        auVar316 = packssdw(auVar390,auVar390);
        auVar193._8_4_ = 0xffffffff;
        auVar193._0_8_ = 0xffffffffffffffff;
        auVar193._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar193,auVar316 ^ auVar193);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[9] & 1) != 0) {
          puVar236[-0x210] = 1;
        }
        auVar316 = (auVar300 | in_XMM3) ^ auVar233;
        auVar391._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar391._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar391);
        auVar194._8_4_ = 0xffffffff;
        auVar194._0_8_ = 0xffffffffffffffff;
        auVar194._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar194,auVar308 ^ auVar194);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-0x1b8] = 1;
        }
        auVar316 = pshufhw(auVar391,auVar391,0x84);
        auVar195._8_4_ = 0xffffffff;
        auVar195._0_8_ = 0xffffffffffffffff;
        auVar195._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar195,auVar316 ^ auVar195);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[0xb] & 1) != 0) {
          puVar236[-0x160] = 1;
        }
        auVar316 = (auVar300 | in_XMM2) ^ auVar233;
        auVar392._0_8_ = -(ulonglong)(lVar243 < auVar316._0_8_);
        auVar392._8_8_ = -(ulonglong)(lVar241 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar392,0xe8);
        auVar196._8_4_ = 0xffffffff;
        auVar196._0_8_ = 0xffffffffffffffff;
        auVar196._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar196,auVar308 ^ auVar196);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0x108] = 1;
        }
        auVar308 = packssdw(auVar392,auVar392);
        auVar197._8_4_ = 0xffffffff;
        auVar197._0_8_ = 0xffffffffffffffff;
        auVar197._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar197,auVar308 ^ auVar197);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0xb0] = 1;
        }
        auVar308 = (auVar300 | in_XMM1) ^ auVar233;
        auVar301._0_8_ = -(ulonglong)(lVar243 < auVar308._0_8_);
        auVar301._8_8_ = -(ulonglong)(lVar241 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar301);
        auVar198._8_4_ = 0xffffffff;
        auVar198._0_8_ = 0xffffffffffffffff;
        auVar198._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar198,auVar306 ^ auVar198);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x58] = 1;
        }
        auVar306 = pshufhw(auVar301,auVar301,0x84);
        auVar199._8_4_ = 0xffffffff;
        auVar199._0_8_ = 0xffffffffffffffff;
        auVar199._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar199,auVar306 ^ auVar199);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar244 = uVar244 + 0x10;
        puVar236 = puVar236 + 0x580;
      } while ((uVar237 / 0x58 + 0x10 & 0x7fffffffffffff0) != uVar244);
      uVar237 = 1;
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[0x1a] != 0) {
      uVar237 = (longlong)(int)param_1[0x1a] + 0x1ffffffffffffff;
      uVar244 = uVar237 & 0x1ffffffffffffff;
      auVar271._8_4_ = (int)uVar244;
      auVar271._0_8_ = uVar244;
      auVar271._12_4_ = (int)(uVar244 >> 0x20);
      puVar236 = (undefined1 *)(param_1[0x19] + 0x7b0);
      lVar243 = 0;
      in_XMM1 = pmovsxbq(in_XMM1,0xf0e);
      in_XMM2 = pmovsxbq(in_XMM2,0xd0c);
      in_XMM3 = pmovsxbq(in_XMM3,0xb0a);
      in_XMM4 = pmovsxbq(in_XMM4,0x908);
      in_XMM5 = pmovsxbq(in_XMM5,0x706);
      unaff_XMM6 = pmovsxbq(unaff_XMM6,0x504);
      unaff_XMM7 = pmovsxbq(unaff_XMM7,0x302);
      unaff_XMM8 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar302._8_4_ = (int)lVar243;
        auVar302._0_8_ = lVar243;
        auVar302._12_4_ = (int)((ulonglong)lVar243 >> 0x20);
        auVar306 = auVar271 | auVar233;
        auVar308 = (auVar302 | unaff_XMM8) ^ auVar233;
        lVar241 = auVar306._0_8_;
        auVar393._0_8_ = -(ulonglong)(lVar241 < auVar308._0_8_);
        lVar240 = auVar306._8_8_;
        auVar393._8_8_ = -(ulonglong)(lVar240 < auVar308._8_8_);
        auVar308 = pshuflw(unaff_XMM14,auVar393,0xe8);
        auVar200._8_4_ = 0xffffffff;
        auVar200._0_8_ = 0xffffffffffffffff;
        auVar200._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar200,auVar308 ^ auVar200);
        if ((auVar308._0_4_ & 1) != 0) {
          puVar236[-0x780] = 1;
        }
        auVar316 = packssdw(auVar393,auVar393);
        auVar201._8_4_ = 0xffffffff;
        auVar201._0_8_ = 0xffffffffffffffff;
        auVar201._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar201,auVar316 ^ auVar201);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[1] & 1) != 0) {
          puVar236[-0x700] = 1;
        }
        auVar316 = (auVar302 | unaff_XMM7) ^ auVar233;
        auVar394._0_8_ = -(ulonglong)(lVar241 < auVar316._0_8_);
        auVar394._8_8_ = -(ulonglong)(lVar240 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar394);
        auVar202._8_4_ = 0xffffffff;
        auVar202._0_8_ = 0xffffffffffffffff;
        auVar202._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar202,auVar308 ^ auVar202);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[2] & 1) != 0) {
          puVar236[-0x680] = 1;
        }
        auVar316 = pshufhw(auVar394,auVar394,0x84);
        auVar203._8_4_ = 0xffffffff;
        auVar203._0_8_ = 0xffffffffffffffff;
        auVar203._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar203,auVar316 ^ auVar203);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[3] & 1) != 0) {
          puVar236[-0x600] = 1;
        }
        auVar316 = (auVar302 | unaff_XMM6) ^ auVar233;
        auVar395._0_8_ = -(ulonglong)(lVar241 < auVar316._0_8_);
        auVar395._8_8_ = -(ulonglong)(lVar240 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar395,0xe8);
        auVar204._8_4_ = 0xffffffff;
        auVar204._0_8_ = 0xffffffffffffffff;
        auVar204._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar204,auVar308 ^ auVar204);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[4] & 1) != 0) {
          puVar236[-0x580] = 1;
        }
        auVar316 = packssdw(auVar395,auVar395);
        auVar205._8_4_ = 0xffffffff;
        auVar205._0_8_ = 0xffffffffffffffff;
        auVar205._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar205,auVar316 ^ auVar205);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[5] & 1) != 0) {
          puVar236[-0x500] = 1;
        }
        auVar316 = (auVar302 | in_XMM5) ^ auVar233;
        auVar396._0_8_ = -(ulonglong)(lVar241 < auVar316._0_8_);
        auVar396._8_8_ = -(ulonglong)(lVar240 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar396);
        auVar206._8_4_ = 0xffffffff;
        auVar206._0_8_ = 0xffffffffffffffff;
        auVar206._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar206,auVar308 ^ auVar206);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[6] & 1) != 0) {
          puVar236[-0x480] = 1;
        }
        auVar316 = pshufhw(auVar396,auVar396,0x84);
        auVar207._8_4_ = 0xffffffff;
        auVar207._0_8_ = 0xffffffffffffffff;
        auVar207._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar207,auVar316 ^ auVar207);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[7] & 1) != 0) {
          puVar236[-0x400] = 1;
        }
        auVar316 = (auVar302 | in_XMM4) ^ auVar233;
        auVar397._0_8_ = -(ulonglong)(lVar241 < auVar316._0_8_);
        auVar397._8_8_ = -(ulonglong)(lVar240 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar397,0xe8);
        auVar208._8_4_ = 0xffffffff;
        auVar208._0_8_ = 0xffffffffffffffff;
        auVar208._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar208,auVar308 ^ auVar208);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[8] & 1) != 0) {
          puVar236[-0x380] = 1;
        }
        auVar316 = packssdw(auVar397,auVar397);
        auVar209._8_4_ = 0xffffffff;
        auVar209._0_8_ = 0xffffffffffffffff;
        auVar209._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar209,auVar316 ^ auVar209);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[9] & 1) != 0) {
          puVar236[-0x300] = 1;
        }
        auVar316 = (auVar302 | in_XMM3) ^ auVar233;
        auVar398._0_8_ = -(ulonglong)(lVar241 < auVar316._0_8_);
        auVar398._8_8_ = -(ulonglong)(lVar240 < auVar316._8_8_);
        auVar308 = packssdw(auVar308,auVar398);
        auVar210._8_4_ = 0xffffffff;
        auVar210._0_8_ = 0xffffffffffffffff;
        auVar210._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar210,auVar308 ^ auVar210);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[10] & 1) != 0) {
          puVar236[-0x280] = 1;
        }
        auVar316 = pshufhw(auVar398,auVar398,0x84);
        auVar211._8_4_ = 0xffffffff;
        auVar211._0_8_ = 0xffffffffffffffff;
        auVar211._12_4_ = 0xffffffff;
        auVar316 = packssdw(auVar316 ^ auVar211,auVar316 ^ auVar211);
        auVar316 = packsswb(auVar316,auVar316);
        if ((auVar316[0xb] & 1) != 0) {
          puVar236[-0x200] = 1;
        }
        auVar316 = (auVar302 | in_XMM2) ^ auVar233;
        auVar399._0_8_ = -(ulonglong)(lVar241 < auVar316._0_8_);
        auVar399._8_8_ = -(ulonglong)(lVar240 < auVar316._8_8_);
        auVar308 = pshuflw(auVar308,auVar399,0xe8);
        auVar212._8_4_ = 0xffffffff;
        auVar212._0_8_ = 0xffffffffffffffff;
        auVar212._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar212,auVar308 ^ auVar212);
        unaff_XMM14 = packsswb(auVar308,auVar308);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0x180] = 1;
        }
        auVar308 = packssdw(auVar399,auVar399);
        auVar213._8_4_ = 0xffffffff;
        auVar213._0_8_ = 0xffffffffffffffff;
        auVar213._12_4_ = 0xffffffff;
        auVar308 = packssdw(auVar308 ^ auVar213,auVar308 ^ auVar213);
        auVar308 = packsswb(auVar308,auVar308);
        if ((auVar308[0xd] & 1) != 0) {
          puVar236[-0x100] = 1;
        }
        auVar308 = (auVar302 | in_XMM1) ^ auVar233;
        auVar303._0_8_ = -(ulonglong)(lVar241 < auVar308._0_8_);
        auVar303._8_8_ = -(ulonglong)(lVar240 < auVar308._8_8_);
        auVar306 = packssdw(auVar306,auVar303);
        auVar214._8_4_ = 0xffffffff;
        auVar214._0_8_ = 0xffffffffffffffff;
        auVar214._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar214,auVar306 ^ auVar214);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xe] & 1) != 0) {
          puVar236[-0x80] = 1;
        }
        auVar306 = pshufhw(auVar303,auVar303,0x84);
        auVar215._8_4_ = 0xffffffff;
        auVar215._0_8_ = 0xffffffffffffffff;
        auVar215._12_4_ = 0xffffffff;
        auVar306 = packssdw(auVar306 ^ auVar215,auVar306 ^ auVar215);
        auVar306 = packsswb(auVar306,auVar306);
        if ((auVar306[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        lVar243 = lVar243 + 0x10;
        puVar236 = puVar236 + 0x800;
      } while ((uVar244 - ((uint)uVar237 & 0xf)) + 0x10 != lVar243);
      uVar237 = 1;
    }
    auVar233 = _DAT_149931e80;
    if ((longlong)(int)param_1[0x1c] != 0) {
      uVar244 = (longlong)(int)param_1[0x1c] * 0xb0 - 0xb0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar244;
      uVar249 = SUB164(auVar12 * ZEXT816(0x2e8ba2e8ba2e8ba3),8);
      uVar274 = (undefined4)(uVar244 / 0x580000000);
      auVar272._0_8_ = CONCAT44(uVar274,uVar249);
      auVar272._8_4_ = uVar249;
      auVar272._12_4_ = uVar274;
      auVar273._0_8_ = auVar272._0_8_ >> 5;
      auVar273._8_8_ = auVar272._8_8_ >> 5;
      puVar236 = (undefined1 *)(param_1[0x1b] + 0xa80);
      uVar247 = 0;
      auVar306 = pmovsxbq(in_XMM1,0xf0e);
      auVar308 = pmovsxbq(in_XMM2,0xd0c);
      auVar316 = pmovsxbq(in_XMM3,0xb0a);
      auVar309 = pmovsxbq(in_XMM4,0x908);
      auVar275 = pmovsxbq(in_XMM5,0x706);
      auVar276 = pmovsxbq(unaff_XMM6,0x504);
      auVar277 = pmovsxbq(unaff_XMM7,0x302);
      auVar278 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar304._8_4_ = (int)uVar247;
        auVar304._0_8_ = uVar247;
        auVar304._12_4_ = (int)(uVar247 >> 0x20);
        auVar307 = auVar273 | auVar233;
        auVar400 = (auVar304 | auVar278) ^ auVar233;
        lVar243 = auVar307._0_8_;
        auVar401._0_8_ = -(ulonglong)(lVar243 < auVar400._0_8_);
        lVar241 = auVar307._8_8_;
        auVar401._8_8_ = -(ulonglong)(lVar241 < auVar400._8_8_);
        auVar400 = pshuflw(unaff_XMM14,auVar401,0xe8);
        auVar216._8_4_ = 0xffffffff;
        auVar216._0_8_ = 0xffffffffffffffff;
        auVar216._12_4_ = 0xffffffff;
        auVar400 = packssdw(auVar400 ^ auVar216,auVar400 ^ auVar216);
        if ((auVar400._0_4_ & 1) != 0) {
          puVar236[-0xa50] = 1;
        }
        auVar402 = packssdw(auVar401,auVar401);
        auVar217._8_4_ = 0xffffffff;
        auVar217._0_8_ = 0xffffffffffffffff;
        auVar217._12_4_ = 0xffffffff;
        auVar402 = packssdw(auVar402 ^ auVar217,auVar402 ^ auVar217);
        auVar402 = packsswb(auVar402,auVar402);
        if ((auVar402[1] & 1) != 0) {
          puVar236[-0x9a0] = 1;
        }
        auVar402 = (auVar304 | auVar277) ^ auVar233;
        auVar403._0_8_ = -(ulonglong)(lVar243 < auVar402._0_8_);
        auVar403._8_8_ = -(ulonglong)(lVar241 < auVar402._8_8_);
        auVar400 = packssdw(auVar400,auVar403);
        auVar218._8_4_ = 0xffffffff;
        auVar218._0_8_ = 0xffffffffffffffff;
        auVar218._12_4_ = 0xffffffff;
        auVar400 = packssdw(auVar400 ^ auVar218,auVar400 ^ auVar218);
        auVar400 = packsswb(auVar400,auVar400);
        if ((auVar400[2] & 1) != 0) {
          puVar236[-0x8f0] = 1;
        }
        auVar402 = pshufhw(auVar403,auVar403,0x84);
        auVar219._8_4_ = 0xffffffff;
        auVar219._0_8_ = 0xffffffffffffffff;
        auVar219._12_4_ = 0xffffffff;
        auVar402 = packssdw(auVar402 ^ auVar219,auVar402 ^ auVar219);
        auVar402 = packsswb(auVar402,auVar402);
        if ((auVar402[3] & 1) != 0) {
          puVar236[-0x840] = 1;
        }
        auVar402 = (auVar304 | auVar276) ^ auVar233;
        auVar404._0_8_ = -(ulonglong)(lVar243 < auVar402._0_8_);
        auVar404._8_8_ = -(ulonglong)(lVar241 < auVar402._8_8_);
        auVar400 = pshuflw(auVar400,auVar404,0xe8);
        auVar220._8_4_ = 0xffffffff;
        auVar220._0_8_ = 0xffffffffffffffff;
        auVar220._12_4_ = 0xffffffff;
        auVar400 = packssdw(auVar400 ^ auVar220,auVar400 ^ auVar220);
        auVar400 = packsswb(auVar400,auVar400);
        if ((auVar400[4] & 1) != 0) {
          puVar236[-0x790] = 1;
        }
        auVar402 = packssdw(auVar404,auVar404);
        auVar221._8_4_ = 0xffffffff;
        auVar221._0_8_ = 0xffffffffffffffff;
        auVar221._12_4_ = 0xffffffff;
        auVar402 = packssdw(auVar402 ^ auVar221,auVar402 ^ auVar221);
        auVar402 = packsswb(auVar402,auVar402);
        if ((auVar402[5] & 1) != 0) {
          puVar236[-0x6e0] = 1;
        }
        auVar402 = (auVar304 | auVar275) ^ auVar233;
        auVar405._0_8_ = -(ulonglong)(lVar243 < auVar402._0_8_);
        auVar405._8_8_ = -(ulonglong)(lVar241 < auVar402._8_8_);
        auVar400 = packssdw(auVar400,auVar405);
        auVar222._8_4_ = 0xffffffff;
        auVar222._0_8_ = 0xffffffffffffffff;
        auVar222._12_4_ = 0xffffffff;
        auVar400 = packssdw(auVar400 ^ auVar222,auVar400 ^ auVar222);
        auVar400 = packsswb(auVar400,auVar400);
        if ((auVar400[6] & 1) != 0) {
          puVar236[-0x630] = 1;
        }
        auVar402 = pshufhw(auVar405,auVar405,0x84);
        auVar223._8_4_ = 0xffffffff;
        auVar223._0_8_ = 0xffffffffffffffff;
        auVar223._12_4_ = 0xffffffff;
        auVar402 = packssdw(auVar402 ^ auVar223,auVar402 ^ auVar223);
        auVar402 = packsswb(auVar402,auVar402);
        if ((auVar402[7] & 1) != 0) {
          puVar236[-0x580] = 1;
        }
        auVar402 = (auVar304 | auVar309) ^ auVar233;
        auVar406._0_8_ = -(ulonglong)(lVar243 < auVar402._0_8_);
        auVar406._8_8_ = -(ulonglong)(lVar241 < auVar402._8_8_);
        auVar400 = pshuflw(auVar400,auVar406,0xe8);
        auVar224._8_4_ = 0xffffffff;
        auVar224._0_8_ = 0xffffffffffffffff;
        auVar224._12_4_ = 0xffffffff;
        auVar400 = packssdw(auVar400 ^ auVar224,auVar400 ^ auVar224);
        auVar400 = packsswb(auVar400,auVar400);
        if ((auVar400[8] & 1) != 0) {
          puVar236[-0x4d0] = 1;
        }
        auVar402 = packssdw(auVar406,auVar406);
        auVar225._8_4_ = 0xffffffff;
        auVar225._0_8_ = 0xffffffffffffffff;
        auVar225._12_4_ = 0xffffffff;
        auVar402 = packssdw(auVar402 ^ auVar225,auVar402 ^ auVar225);
        auVar402 = packsswb(auVar402,auVar402);
        if ((auVar402[9] & 1) != 0) {
          puVar236[-0x420] = 1;
        }
        auVar402 = (auVar304 | auVar316) ^ auVar233;
        auVar407._0_8_ = -(ulonglong)(lVar243 < auVar402._0_8_);
        auVar407._8_8_ = -(ulonglong)(lVar241 < auVar402._8_8_);
        auVar400 = packssdw(auVar400,auVar407);
        auVar226._8_4_ = 0xffffffff;
        auVar226._0_8_ = 0xffffffffffffffff;
        auVar226._12_4_ = 0xffffffff;
        auVar400 = packssdw(auVar400 ^ auVar226,auVar400 ^ auVar226);
        auVar400 = packsswb(auVar400,auVar400);
        if ((auVar400[10] & 1) != 0) {
          puVar236[-0x370] = 1;
        }
        auVar402 = pshufhw(auVar407,auVar407,0x84);
        auVar227._8_4_ = 0xffffffff;
        auVar227._0_8_ = 0xffffffffffffffff;
        auVar227._12_4_ = 0xffffffff;
        auVar402 = packssdw(auVar402 ^ auVar227,auVar402 ^ auVar227);
        auVar402 = packsswb(auVar402,auVar402);
        if ((auVar402[0xb] & 1) != 0) {
          puVar236[-0x2c0] = 1;
        }
        auVar402 = (auVar304 | auVar308) ^ auVar233;
        auVar408._0_8_ = -(ulonglong)(lVar243 < auVar402._0_8_);
        auVar408._8_8_ = -(ulonglong)(lVar241 < auVar402._8_8_);
        auVar400 = pshuflw(auVar400,auVar408,0xe8);
        auVar228._8_4_ = 0xffffffff;
        auVar228._0_8_ = 0xffffffffffffffff;
        auVar228._12_4_ = 0xffffffff;
        auVar400 = packssdw(auVar400 ^ auVar228,auVar400 ^ auVar228);
        unaff_XMM14 = packsswb(auVar400,auVar400);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar236[-0x210] = 1;
        }
        auVar400 = packssdw(auVar408,auVar408);
        auVar229._8_4_ = 0xffffffff;
        auVar229._0_8_ = 0xffffffffffffffff;
        auVar229._12_4_ = 0xffffffff;
        auVar400 = packssdw(auVar400 ^ auVar229,auVar400 ^ auVar229);
        auVar400 = packsswb(auVar400,auVar400);
        if ((auVar400[0xd] & 1) != 0) {
          puVar236[-0x160] = 1;
        }
        auVar400 = (auVar304 | auVar306) ^ auVar233;
        auVar305._0_8_ = -(ulonglong)(lVar243 < auVar400._0_8_);
        auVar305._8_8_ = -(ulonglong)(lVar241 < auVar400._8_8_);
        auVar307 = packssdw(auVar307,auVar305);
        auVar230._8_4_ = 0xffffffff;
        auVar230._0_8_ = 0xffffffffffffffff;
        auVar230._12_4_ = 0xffffffff;
        auVar307 = packssdw(auVar307 ^ auVar230,auVar307 ^ auVar230);
        auVar307 = packsswb(auVar307,auVar307);
        if ((auVar307[0xe] & 1) != 0) {
          puVar236[-0xb0] = 1;
        }
        auVar307 = pshufhw(auVar305,auVar305,0x84);
        auVar231._8_4_ = 0xffffffff;
        auVar231._0_8_ = 0xffffffffffffffff;
        auVar231._12_4_ = 0xffffffff;
        auVar307 = packssdw(auVar307 ^ auVar231,auVar307 ^ auVar231);
        auVar307 = packsswb(auVar307,auVar307);
        if ((auVar307[0xf] & 1) != 0) {
          *puVar236 = 1;
        }
        uVar247 = uVar247 + 0x10;
        puVar236 = puVar236 + 0xb00;
      } while ((uVar244 / 0xb0 + 0x10 & 0xfffffffffffffff0) != uVar247);
      uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
    }
  }
  else {
    lVar243 = *param_1 + 0x70;
    if ((longlong)(int)param_1[2] == 0) {
      uVar237 = 0;
    }
    else {
      lVar240 = param_1[1];
      lVar241 = lVar240 + (longlong)(int)param_1[2] * 0x48;
      uVar237 = 0;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar240 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar240 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar240 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar240 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe107d;
LAB_147fe102d:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[(uint)uVar242])
                goto LAB_147fe102d;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[(uint)uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe1075;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe1075:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe107d:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if ((((*(int *)(lVar240 + 0x10) != iVar246) || (*(int *)(lVar240 + 0x14) != iVar239)) ||
              (*(int *)(lVar240 + 0x18) != iVar238)) || (*(int *)(lVar240 + 0x1c) != iVar234)) {
            *(int *)(lVar240 + 0x10) = iVar246;
            *(int *)(lVar240 + 0x14) = iVar239;
            *(int *)(lVar240 + 0x18) = iVar238;
            *(int *)(lVar240 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar240 = lVar240 + 0x48;
      } while (lVar240 != lVar241);
    }
    if ((longlong)(int)param_1[4] != 0) {
      lVar240 = param_1[3];
      lVar241 = lVar240 + (longlong)(int)param_1[4] * 0x48;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar240 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar240 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar240 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar240 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe486e;
LAB_147fe4826:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[uVar242]) goto LAB_147fe4826;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe4866;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe4866:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe486e:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if (((*(int *)(lVar240 + 0x10) != iVar246) || (*(int *)(lVar240 + 0x14) != iVar239)) ||
             ((*(int *)(lVar240 + 0x18) != iVar238 || (*(int *)(lVar240 + 0x1c) != iVar234)))) {
            *(int *)(lVar240 + 0x10) = iVar246;
            *(int *)(lVar240 + 0x14) = iVar239;
            *(int *)(lVar240 + 0x18) = iVar238;
            *(int *)(lVar240 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar240 = lVar240 + 0x48;
      } while (lVar240 != lVar241);
    }
    if ((longlong)(int)param_1[6] != 0) {
      lVar240 = param_1[5];
      lVar241 = lVar240 + (longlong)(int)param_1[6] * 0x48;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar240 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar240 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar240 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar240 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe4999;
LAB_147fe4951:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[uVar242]) goto LAB_147fe4951;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe4991;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe4991:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe4999:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if (((*(int *)(lVar240 + 0x10) != iVar246) || (*(int *)(lVar240 + 0x14) != iVar239)) ||
             ((*(int *)(lVar240 + 0x18) != iVar238 || (*(int *)(lVar240 + 0x1c) != iVar234)))) {
            *(int *)(lVar240 + 0x10) = iVar246;
            *(int *)(lVar240 + 0x14) = iVar239;
            *(int *)(lVar240 + 0x18) = iVar238;
            *(int *)(lVar240 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar240 = lVar240 + 0x48;
      } while (lVar240 != lVar241);
    }
    if ((longlong)(int)param_1[8] != 0) {
      lVar240 = param_1[7];
      lVar241 = lVar240 + (longlong)(int)param_1[8] * 0x48;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar240 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar240 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar240 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar240 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe4ac4;
LAB_147fe4a7c:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[uVar242]) goto LAB_147fe4a7c;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe4abc;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe4abc:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe4ac4:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if ((((*(int *)(lVar240 + 0x10) != iVar246) || (*(int *)(lVar240 + 0x14) != iVar239)) ||
              (*(int *)(lVar240 + 0x18) != iVar238)) || (*(int *)(lVar240 + 0x1c) != iVar234)) {
            *(int *)(lVar240 + 0x10) = iVar246;
            *(int *)(lVar240 + 0x14) = iVar239;
            *(int *)(lVar240 + 0x18) = iVar238;
            *(int *)(lVar240 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar240 = lVar240 + 0x48;
      } while (lVar240 != lVar241);
    }
    if ((longlong)(int)param_1[10] != 0) {
      lVar240 = param_1[9];
      lVar241 = lVar240 + (longlong)(int)param_1[10] * 0x48;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar240 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar240 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar240 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar240 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe4bef;
LAB_147fe4ba7:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[uVar242]) goto LAB_147fe4ba7;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe4be7;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe4be7:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe4bef:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if (((*(int *)(lVar240 + 0x10) != iVar246) || (*(int *)(lVar240 + 0x14) != iVar239)) ||
             ((*(int *)(lVar240 + 0x18) != iVar238 || (*(int *)(lVar240 + 0x1c) != iVar234)))) {
            *(int *)(lVar240 + 0x10) = iVar246;
            *(int *)(lVar240 + 0x14) = iVar239;
            *(int *)(lVar240 + 0x18) = iVar238;
            *(int *)(lVar240 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar240 = lVar240 + 0x48;
      } while (lVar240 != lVar241);
    }
    if ((longlong)(int)param_1[0xc] != 0) {
      lVar241 = param_1[0xb];
      lVar240 = (longlong)(int)param_1[0xc] * 0x50 + lVar241;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar241 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar241 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar241 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar241 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe4d1d;
LAB_147fe4cd5:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[uVar242]) goto LAB_147fe4cd5;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe4d15;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe4d15:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe4d1d:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if (((*(int *)(lVar241 + 0x10) != iVar246) || (*(int *)(lVar241 + 0x14) != iVar239)) ||
             ((*(int *)(lVar241 + 0x18) != iVar238 || (*(int *)(lVar241 + 0x1c) != iVar234)))) {
            *(int *)(lVar241 + 0x10) = iVar246;
            *(int *)(lVar241 + 0x14) = iVar239;
            *(int *)(lVar241 + 0x18) = iVar238;
            *(int *)(lVar241 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar241 = lVar241 + 0x50;
      } while (lVar241 != lVar240);
    }
    if ((longlong)(int)param_1[0xe] != 0) {
      lVar241 = param_1[0xd];
      lVar240 = (longlong)(int)param_1[0xe] * 0x50 + lVar241;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar241 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar241 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar241 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar241 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe4e4b;
LAB_147fe4e03:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[uVar242]) goto LAB_147fe4e03;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe4e43;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe4e43:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe4e4b:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if ((((*(int *)(lVar241 + 0x10) != iVar246) || (*(int *)(lVar241 + 0x14) != iVar239)) ||
              (*(int *)(lVar241 + 0x18) != iVar238)) || (*(int *)(lVar241 + 0x1c) != iVar234)) {
            *(int *)(lVar241 + 0x10) = iVar246;
            *(int *)(lVar241 + 0x14) = iVar239;
            *(int *)(lVar241 + 0x18) = iVar238;
            *(int *)(lVar241 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar241 = lVar241 + 0x50;
      } while (lVar241 != lVar240);
    }
    if ((longlong)(int)param_1[0x10] != 0) {
      lVar241 = param_1[0xf];
      lVar240 = (longlong)(int)param_1[0x10] * 0x58 + lVar241;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar241 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar241 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar241 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar241 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe4f78;
LAB_147fe4f30:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[uVar242]) goto LAB_147fe4f30;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe4f70;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe4f70:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe4f78:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if (((*(int *)(lVar241 + 0x10) != iVar246) || (*(int *)(lVar241 + 0x14) != iVar239)) ||
             ((*(int *)(lVar241 + 0x18) != iVar238 || (*(int *)(lVar241 + 0x1c) != iVar234)))) {
            *(int *)(lVar241 + 0x10) = iVar246;
            *(int *)(lVar241 + 0x14) = iVar239;
            *(int *)(lVar241 + 0x18) = iVar238;
            *(int *)(lVar241 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar241 = lVar241 + 0x58;
      } while (lVar241 != lVar240);
    }
    if ((longlong)(int)param_1[0x12] != 0) {
      lVar241 = param_1[0x11];
      lVar240 = (longlong)(int)param_1[0x12] * 0x60 + lVar241;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar241 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar241 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar241 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar241 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe50ac;
LAB_147fe5064:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[uVar242]) goto LAB_147fe5064;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe50a4;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe50a4:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe50ac:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if (((*(int *)(lVar241 + 0x10) != iVar246) || (*(int *)(lVar241 + 0x14) != iVar239)) ||
             ((*(int *)(lVar241 + 0x18) != iVar238 || (*(int *)(lVar241 + 0x1c) != iVar234)))) {
            *(int *)(lVar241 + 0x10) = iVar246;
            *(int *)(lVar241 + 0x14) = iVar239;
            *(int *)(lVar241 + 0x18) = iVar238;
            *(int *)(lVar241 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar241 = lVar241 + 0x60;
      } while (lVar241 != lVar240);
    }
    if ((longlong)(int)param_1[0x14] != 0) {
      lVar241 = param_1[0x13];
      lVar240 = (longlong)(int)param_1[0x14] * 0x70 + lVar241;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar241 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar241 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar241 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar241 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe51dc;
LAB_147fe5194:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[uVar242]) goto LAB_147fe5194;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe51d4;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe51d4:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe51dc:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if ((((*(int *)(lVar241 + 0x10) != iVar246) || (*(int *)(lVar241 + 0x14) != iVar239)) ||
              (*(int *)(lVar241 + 0x18) != iVar238)) || (*(int *)(lVar241 + 0x1c) != iVar234)) {
            *(int *)(lVar241 + 0x10) = iVar246;
            *(int *)(lVar241 + 0x14) = iVar239;
            *(int *)(lVar241 + 0x18) = iVar238;
            *(int *)(lVar241 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar241 = lVar241 + 0x70;
      } while (lVar241 != lVar240);
    }
    if ((longlong)(int)param_1[0x16] != 0) {
      lVar241 = param_1[0x15];
      lVar240 = (longlong)(int)param_1[0x16] * 0x50 + lVar241;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar241 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar241 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar241 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar241 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe5310;
LAB_147fe52c8:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[uVar242]) goto LAB_147fe52c8;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe5308;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe5308:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe5310:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if (((*(int *)(lVar241 + 0x10) != iVar246) || (*(int *)(lVar241 + 0x14) != iVar239)) ||
             ((*(int *)(lVar241 + 0x18) != iVar238 || (*(int *)(lVar241 + 0x1c) != iVar234)))) {
            *(int *)(lVar241 + 0x10) = iVar246;
            *(int *)(lVar241 + 0x14) = iVar239;
            *(int *)(lVar241 + 0x18) = iVar238;
            *(int *)(lVar241 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar241 = lVar241 + 0x50;
      } while (lVar241 != lVar240);
    }
    if ((longlong)(int)param_1[0x18] != 0) {
      lVar241 = param_1[0x17];
      lVar240 = (longlong)(int)param_1[0x18] * 0x58 + lVar241;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar241 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar241 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar241 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar241 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe5440;
LAB_147fe53f8:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[uVar242]) goto LAB_147fe53f8;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe5438;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe5438:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe5440:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if (((*(int *)(lVar241 + 0x10) != iVar246) || (*(int *)(lVar241 + 0x14) != iVar239)) ||
             ((*(int *)(lVar241 + 0x18) != iVar238 || (*(int *)(lVar241 + 0x1c) != iVar234)))) {
            *(int *)(lVar241 + 0x10) = iVar246;
            *(int *)(lVar241 + 0x14) = iVar239;
            *(int *)(lVar241 + 0x18) = iVar238;
            *(int *)(lVar241 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar241 = lVar241 + 0x58;
      } while (lVar241 != lVar240);
    }
    if ((longlong)(int)param_1[0x1a] != 0) {
      lVar241 = param_1[0x19];
      lVar240 = (longlong)(int)param_1[0x1a] * 0x80 + lVar241;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar241 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar241 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar241 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar241 + 0x20) + lVar248);
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe5570;
LAB_147fe5528:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                if ((&DAT_149e05da0)[uVar245] == (&DAT_149e05da0)[uVar242]) goto LAB_147fe5528;
                iVar246 = (uint)(byte)(&DAT_149e05da0)[uVar245] -
                          (uint)(byte)(&DAT_149e05da0)[uVar242];
              }
              else {
                iVar246 = (uint)uVar245 - (uint)uVar242;
              }
              if (iVar246 != 0) goto code_r0x000147fe5568;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe5568:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe5570:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if ((((*(int *)(lVar241 + 0x10) != iVar246) || (*(int *)(lVar241 + 0x14) != iVar239)) ||
              (*(int *)(lVar241 + 0x18) != iVar238)) || (*(int *)(lVar241 + 0x1c) != iVar234)) {
            *(int *)(lVar241 + 0x10) = iVar246;
            *(int *)(lVar241 + 0x14) = iVar239;
            *(int *)(lVar241 + 0x18) = iVar238;
            *(int *)(lVar241 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar241 = lVar241 + 0x80;
      } while (lVar241 != lVar240);
    }
    if ((longlong)(int)param_1[0x1c] != 0) {
      lVar241 = param_1[0x1b];
      lVar240 = (longlong)(int)param_1[0x1c] * 0xb0 + lVar241;
      do {
        bVar232 = (byte)uVar237;
        lVar235 = FUN_147fdd92a(lVar243);
        uVar237 = CONCAT71((int7)(uVar237 >> 8),
                           (bool)*(char *)(lVar241 + 0x30) != (lVar235 == 0) | bVar232);
        *(bool *)(lVar241 + 0x30) = lVar235 == 0;
        if (lVar235 != 0) {
          iVar246 = *(int *)(lVar241 + 0x28);
          if (iVar246 == *(int *)(lVar235 + 0x48)) {
            if (1 < iVar246) {
              lVar248 = 0;
              while( true ) {
                uVar245 = *(ushort *)(*(longlong *)(lVar241 + 0x20) + lVar248);
                uVar244 = (ulonglong)uVar245;
                uVar242 = *(ushort *)(*(longlong *)(lVar235 + 0x40) + lVar248);
                if (uVar245 != uVar242) break;
                if (uVar245 == 0) goto LAB_147fe56a1;
LAB_147fe5657:
                lVar248 = lVar248 + 2;
              }
              if ((uVar242 | uVar245) < 0x80) {
                uVar245 = (ushort)(byte)(&DAT_149e05da0)[uVar244];
                uVar247 = (ulonglong)uVar242;
                uVar242 = (ushort)(byte)(&DAT_149e05da0)[uVar247];
                if ((&DAT_149e05da0)[uVar244] == (&DAT_149e05da0)[uVar247]) goto LAB_147fe5657;
              }
              if (uVar245 != uVar242) goto code_r0x000147fe5699;
            }
          }
          else if (iVar246 + *(int *)(lVar235 + 0x48) != 1) {
code_r0x000147fe5699:
            FUN_1402980a2();
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
LAB_147fe56a1:
          lVar235 = *(longlong *)(lVar235 + 0x60);
          if (lVar235 == 0) {
            iVar234 = 0;
            iVar238 = 0;
            iVar239 = 0;
            iVar246 = 0;
          }
          else {
            iVar246 = *(int *)(lVar235 + 0x2c);
            iVar239 = *(int *)(lVar235 + 0x30);
            iVar238 = *(int *)(lVar235 + 0x34);
            iVar234 = *(int *)(lVar235 + 0x38);
          }
          if (((*(int *)(lVar241 + 0x10) != iVar246) || (*(int *)(lVar241 + 0x14) != iVar239)) ||
             ((*(int *)(lVar241 + 0x18) != iVar238 || (*(int *)(lVar241 + 0x1c) != iVar234)))) {
            *(int *)(lVar241 + 0x10) = iVar246;
            *(int *)(lVar241 + 0x14) = iVar239;
            *(int *)(lVar241 + 0x18) = iVar238;
            *(int *)(lVar241 + 0x1c) = iVar234;
            uVar237 = CONCAT71((int7)(uVar237 >> 8),1);
          }
        }
        lVar241 = lVar241 + 0xb0;
      } while (lVar241 != lVar240);
    }
  }
  return uVar237 & 0xffffff01;
}



// FUNCTION 147fe58c8 FUN_147fe58c8 body=369 status=ok
// SIG undefined FUN_147fe58c8(void)

bool FUN_147fe58c8(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_58,0x13);
  uVar6 = local_58 & 0xffffffff;
  if (uVar2 != uVar6) goto LAB_147fe59fe;
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(*param_3 + 8) + 0x130))(*(longlong **)(*param_3 + 8),&local_58);
  lVar4 = FUN_14479d2ce(&local_58);
  if ((lVar4 == 0) && (lStack_50 != 0)) {
    lVar4 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar3 == '\0')) {
      FUN_14485c47a(&local_58,lVar4);
      if (lVar4 == 0) goto LAB_147fe59ea;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_58,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) goto LAB_147fe59ea;
LAB_147fe59ca:
    lVar5 = FUN_140ff39b8();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_147fe59ea;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar4);
    }
  }
  else {
    if (lVar4 != 0) goto LAB_147fe59ca;
LAB_147fe59ea:
    lVar4 = 0;
  }
  *param_1 = lVar4;
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
LAB_147fe59fe:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 == uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe5a3a FUN_147fe5a3a body=221 status=ok
// SIG undefined FUN_147fe5a3a(void)

longlong FUN_147fe5a3a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x400000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      local_40 = 0;
      FUN_14485c47a(&local_40,*(undefined8 *)(lVar2 + lVar6));
      uVar4 = FUN_144a78877(*(undefined4 *)(param_1 + 0x30),local_40._4_4_ ^ (uint)local_40);
      *(undefined4 *)(param_1 + 0x30) = uVar4;
      iVar1 = *(int *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
        FUN_14800ddbe(param_1,iVar1);
      }
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar5 = param_1;
      }
      *(undefined8 *)(lVar5 + (longlong)iVar1 * 8) = local_40;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147fe5b18 FUN_147fe5b18 body=782 status=ok
// SIG undefined FUN_147fe5b18(void)

undefined8 FUN_147fe5b18(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong lVar8;
  short sVar9;
  longlong lVar10;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  undefined1 local_178 [224];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_80 [32];
  longlong local_60;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_98 = (undefined4)*param_2;
  uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_90 = (undefined4)param_2[1];
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_147fe5a3a(local_80);
  local_180 = CONCAT44(local_180._4_4_,0xffffffff);
  piVar6 = (int *)FUN_14800deb2(param_1,local_50,local_80);
  iVar5 = *piVar6;
  if (iVar5 == -1) {
    plVar1 = (longlong *)(param_1 + 0x50);
    if ((longlong)*(int *)(param_1 + 0x58) != 0) {
      lVar8 = (longlong)*(int *)(param_1 + 0x58) << 3;
      lVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar10 * 8) == 0) {
          *piVar6 = (int)lVar10;
          if ((int)lVar10 != -1) goto LAB_147fe5c12;
          goto LAB_147fe5be9;
        }
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    *piVar6 = -1;
LAB_147fe5be9:
    iVar5 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar5 + 1U) {
      FUN_14800e5b8(plVar1);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar5 * 8) = 0;
    *piVar6 = iVar5;
LAB_147fe5c12:
    local_1a8 = plVar1;
    uVar7 = FUN_1409ffe1d();
    lVar8 = FUN_147fe5e27(uVar7);
    local_1b8 = FUN_147fe5ebc(lVar8);
    if ((longlong)(int)param_2[1] != 0) {
      local_190 = *param_2;
      local_1b0 = (longlong *)(local_1b8 + 0x38);
      local_198 = lVar8 + 0xc0;
      local_1a0 = lVar8 + 0xd0;
      local_188 = (longlong)(int)param_2[1] << 3;
      lVar10 = 0;
      do {
        lVar2 = *(longlong *)(local_190 + lVar10);
        local_180 = lVar2;
        if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar2);
        }
        memset(local_178,0,0xe0);
        iVar5 = *(int *)(local_1b8 + 0x40);
        *(uint *)(local_1b8 + 0x40) = iVar5 + 1U;
        if (*(uint *)(local_1b8 + 0x44) < iVar5 + 1U) {
          FUN_14800e63e(local_1b0,iVar5);
        }
        lVar3 = *local_1b0;
        *(longlong *)(lVar3 + (longlong)iVar5 * 0xe8) = local_180;
        if ((local_180 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_14800e6d2(lVar3 + (longlong)iVar5 * 0xe8 + 8,local_178);
        FUN_145acfbdc(local_178);
        sVar9 = *(short *)(lVar8 + 0xba);
        if (*(short *)(lVar8 + 0xba) < *(short *)(lVar2 + 0xba)) {
          sVar9 = *(short *)(lVar2 + 0xba);
        }
        *(short *)(lVar8 + 0xba) = sVar9;
        *(ushort *)(lVar8 + 0xb8) =
             (-*(short *)(lVar2 + 0xba) & (*(short *)(lVar8 + 0xb8) + *(short *)(lVar2 + 0xba)) - 1U
             ) + *(short *)(lVar2 + 0xb8);
        FUN_147fdd68c(local_1a0,lVar2 + 0xd0);
        FUN_147fdd6ea(local_198);
        lVar10 = lVar10 + 8;
      } while (local_188 != lVar10);
    }
    lVar10 = local_1b8;
    if (local_1b8 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_1b8);
    }
    bVar4 = DAT_14c950c29;
    *(longlong *)(lVar8 + 0x48) = lVar10;
    iVar5 = *piVar6;
    lVar10 = *local_1a8;
    if ((lVar8 != 0) && ((bVar4 & 1) != 0)) {
      FUN_1456cec3c(lVar8);
    }
    *(longlong *)(lVar10 + (longlong)iVar5 * 8) = lVar8;
    iVar5 = *piVar6;
  }
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 8);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147fe5e27 FUN_147fe5e27 body=148 status=ok
// SIG undefined FUN_147fe5e27(void)

undefined8 FUN_147fe5e27(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_140ff39b8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe5ebc FUN_147fe5ebc body=148 status=ok
// SIG undefined FUN_147fe5ebc(void)

undefined8 FUN_147fe5ebc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b67278();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe5f68 FUN_147fe5f68 body=247 status=ok
// SIG undefined FUN_147fe5f68(void)

void FUN_147fe5f68(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar5 = FUN_145b67278();
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 != 0) {
      lVar7 = 0;
      if ((lVar5 == 0) || (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 == 0)) goto LAB_147fe5fcb;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38)) {
        lVar7 = 0;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar7 = lVar3;
        }
        goto LAB_147fe5fcb;
      }
    }
  }
  lVar7 = 0;
LAB_147fe5fcb:
  iVar1 = *(int *)(lVar7 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar7 + 0x38);
    lVar5 = 0;
    do {
      lVar7 = *(longlong *)(lVar3 + lVar5);
      if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x48), lVar7 != 0)) {
        plVar6 = (longlong *)FUN_147fd9dc6(lVar7,*param_2);
        (**(code **)(*plVar6 + 0x18))(plVar6,param_2);
        if (plVar6 != (longlong *)0x0) {
          iVar2 = *(int *)(param_1 + 0x20);
          *(uint *)(param_1 + 0x20) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
            FUN_148002906((longlong *)(param_1 + 0x18),iVar2);
          }
          *(longlong **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8) = plVar6;
        }
      }
      lVar5 = lVar5 + 0xe8;
    } while ((longlong)iVar1 * 0xe8 - lVar5 != 0);
  }
  return;
}



// FUNCTION 147fe6070 FUN_147fe6070 body=206 status=ok
// SIG undefined FUN_147fe6070(void)

void FUN_147fe6070(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar2 = FUN_145b67278();
    lVar4 = *(longlong *)(param_1 + 8);
    if (lVar4 != 0) {
      lVar3 = 0;
      if ((lVar2 == 0) || (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 == 0)) goto LAB_147fe60dc;
      if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        lVar3 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30) {
          lVar3 = lVar4;
        }
        goto LAB_147fe60dc;
      }
    }
  }
  lVar3 = 0;
LAB_147fe60dc:
  if ((longlong)*(int *)(lVar3 + 0x40) != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x38);
    lVar2 = (longlong)*(int *)(lVar3 + 0x40) * 0xe8;
    do {
      local_38 = lVar4;
      FUN_147fe61b4(&local_38,param_2,param_3);
      lVar4 = lVar4 + 0xe8;
      lVar2 = lVar2 + -0xe8;
    } while (lVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe6140 FUN_147fe6140 body=107 status=ok
// SIG undefined FUN_147fe6140(void)

void FUN_147fe6140(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_147fe6070(param_1,param_3 + 0x88,1);
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if ((plVar3[1] == 0) || (*(char *)(plVar3[1] + 0x30) == '\x01')) {
        (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147fe61ac FUN_147fe61ac body=7 status=ok
// SIG undefined FUN_147fe61ac(void)

undefined8 * FUN_147fe61ac(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 147fe61b4 FUN_147fe61b4 body=536 status=ok
// SIG undefined FUN_147fe61b4(void)

void FUN_147fe61b4(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = *param_1;
  local_30 = *(undefined8 *)(lVar1 + 8);
  local_28 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1438da5ef();
  local_40 = *(undefined8 *)(lVar1 + 0x18);
  local_38 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1438da6ec(&local_40,param_2,param_3);
  local_50 = *(undefined8 *)(lVar1 + 0x28);
  local_48 = *(undefined4 *)(lVar1 + 0x30);
  FUN_1438da7e2(&local_50,param_2,param_3);
  local_60 = *(undefined8 *)(lVar1 + 0x38);
  local_58 = *(undefined4 *)(lVar1 + 0x40);
  FUN_1438da8eb(&local_60,param_2,param_3);
  local_70 = *(undefined8 *)(lVar1 + 0x48);
  local_68 = *(undefined4 *)(lVar1 + 0x50);
  FUN_1438da9f4(&local_70,param_2,param_3);
  local_80 = *(undefined8 *)(lVar1 + 0x58);
  local_78 = *(undefined4 *)(lVar1 + 0x60);
  FUN_1438daaef(&local_80,param_2,param_3);
  local_90 = *(undefined8 *)(lVar1 + 0x68);
  local_88 = *(undefined4 *)(lVar1 + 0x70);
  FUN_1438dac34(&local_90,param_2,param_3);
  local_a0 = *(undefined8 *)(lVar1 + 0x78);
  local_98 = *(undefined4 *)(lVar1 + 0x80);
  FUN_1438dad9d(&local_a0,param_2,param_3);
  local_b0 = *(undefined8 *)(lVar1 + 0x88);
  local_a8 = *(undefined4 *)(lVar1 + 0x90);
  FUN_1438daf07(&local_b0,param_2,param_3);
  local_c0 = *(undefined8 *)(lVar1 + 0x98);
  local_b8 = *(undefined4 *)(lVar1 + 0xa0);
  FUN_1438db04c(&local_c0,param_2,param_3);
  local_d0 = *(undefined8 *)(lVar1 + 0xa8);
  local_c8 = *(undefined4 *)(lVar1 + 0xb0);
  FUN_1438db1b3(&local_d0,param_2,param_3);
  local_e0 = *(undefined8 *)(lVar1 + 0xb8);
  local_d8 = *(undefined4 *)(lVar1 + 0xc0);
  FUN_1438db31c(&local_e0,param_2,param_3);
  local_f0 = *(undefined8 *)(lVar1 + 200);
  local_e8 = *(undefined4 *)(lVar1 + 0xd0);
  FUN_1438db486(&local_f0,param_2,param_3);
  local_100 = *(undefined8 *)(lVar1 + 0xd8);
  local_f8 = *(undefined4 *)(lVar1 + 0xe0);
  FUN_1438db61a(&local_100,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe63ce FUN_147fe63ce body=211 status=ok
// SIG undefined FUN_147fe63ce(void)

void FUN_147fe63ce(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = FUN_145b67278();
      lVar3 = *(longlong *)(param_1 + 0x48);
      if ((((lVar3 != 0) && (lVar5 != 0)) && (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0)) &&
         ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)))) {
        iVar1 = *(int *)(lVar3 + 0x40);
        if ((longlong)iVar1 == 0) {
          return;
        }
        lVar3 = *(longlong *)(lVar3 + 0x38);
        lVar5 = 0;
        do {
          lVar4 = *(longlong *)(lVar3 + lVar5);
          if (lVar4 != 0) {
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_14800e9f2(param_2,iVar2);
            }
            *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
          }
          lVar5 = lVar5 + 0xe8;
        } while ((longlong)iVar1 * 0xe8 - lVar5 != 0);
        return;
      }
    }
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_14800e9f2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 147fe64aa FUN_147fe64aa body=79 status=ok
// SIG undefined FUN_147fe64aa(void)

longlong FUN_147fe64aa(longlong param_1,longlong param_2)

{
  FUN_147fe64f9();
  FUN_1400f4f7e(param_1,param_2 + 0x10);
  FUN_14480c34d(param_1,param_2 + 0x30);
  FUN_14480c34d(param_1,param_2 + 0x50);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  return param_1;
}



// FUNCTION 147fe64f9 FUN_147fe64f9 body=82 status=ok
// SIG undefined FUN_147fe64f9(void)

longlong * FUN_147fe64f9(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 147fe654c FUN_147fe654c body=169 status=ok
// SIG undefined FUN_147fe654c(void)

void FUN_147fe654c(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_b8 [36];
  undefined4 local_94 [27];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_147fd28d4();
  uVar1 = *(undefined4 *)(lVar3 + 0x30);
  puVar5 = local_94 + 3;
  for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = *(int *)(param_1 + 0xf0);
  *(uint *)(param_1 + 0xf0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xf4) < iVar2 + 1U) {
    FUN_14800eae8(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    lVar3 = param_1;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x70);
  *puVar5 = uVar1;
  puVar4 = local_94;
  for (lVar3 = 0x1b; puVar5 = puVar5 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe65f6 FUN_147fe65f6 body=119 status=ok
// SIG undefined FUN_147fe65f6(void)

void * FUN_147fe65f6(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0xe0);
    if (*(void **)((longlong)param_2 + 0xe0) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0xf0);
    *(int *)((longlong)param_1 + 0xf0) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xf4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xf4) = 2;
    }
    else {
      FUN_14800ee9c(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0xe0);
        if (*(void **)((longlong)param_1 + 0xe0) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x70);
      }
    }
  }
  return param_1;
}



// FUNCTION 147fe668e FUN_147fe668e body=89 status=ok
// SIG undefined FUN_147fe668e(void)

ulonglong FUN_147fe668e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x38);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x2a0))(plVar3,param_2);
        if (cVar4 == '\0') {
          uVar5 = 0;
          break;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147fe66e8 FUN_147fe66e8 body=247 status=ok
// SIG undefined FUN_147fe66e8(void)

void * FUN_147fe66e8(void *param_1)

{
  memset(param_1,0,0x90);
  FUN_147fd8372((longlong)param_1 + 0x90);
  *(undefined8 *)((longlong)param_1 + 0xb70) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb78) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb80) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb88) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xba0) = 0x408f400000000000;
  *(undefined8 *)((longlong)param_1 + 0xba8) = 0x420c0000bf800000;
  *(undefined8 *)((longlong)param_1 + 0xbb0) = 0x4270000040333333;
  *(undefined8 *)((longlong)param_1 + 3000) = 0x41c71eb8bf800000;
  *(undefined8 *)((longlong)param_1 + 0xbc0) = 0x42c8000041955c29;
  *(undefined8 *)((longlong)param_1 + 0xbc8) = 0x83f800000;
  *(undefined8 *)((longlong)param_1 + 0xbd0) = 0xbf80000041200000;
  *(undefined8 *)((longlong)param_1 + 0xbd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc28) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc30) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc08) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc00) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc48) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc50) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc58) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc60) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc68) = 0;
  return param_1;
}



// FUNCTION 147fe67e0 FUN_147fe67e0 body=145 status=ok
// SIG undefined FUN_147fe67e0(void)

void FUN_147fe67e0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_68[0] = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_68[0] == 0) {
      local_68[0] = 0;
    }
    else {
      FUN_1456cec3c();
      local_68[0] = *param_2;
    }
  }
  FUN_147fe6872(param_1,local_68);
  if (local_58 != 0) {
    plVar1 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar1 = local_38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe6872 FUN_147fe6872 body=1206 status=ok
// SIG undefined FUN_147fe6872(void)

void FUN_147fe6872(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar4 = FUN_1409ffe1d();
  }
  FUN_14485c47a(param_1 + 2,lVar4);
  pcVar3 = (code *)param_2[2];
  if (pcVar3 == (code *)0x0) {
    FUN_1446f470e(&local_40,L"RootNode",1);
    lVar4 = FUN_147fe6d29(lVar4,local_40);
  }
  else {
    plVar8 = param_2 + 6;
    if ((longlong *)param_2[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_2[4];
    }
    uVar5 = (**(code **)(*plVar8 + 8))(plVar8);
    lVar4 = (*pcVar3)(uVar5);
  }
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[3] = lVar4;
  param_1[6] = (longlong)param_1;
  local_48 = 0;
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c(lVar4);
      lVar4 = param_1[3];
    }
  }
  local_50 = lVar4;
  lVar4 = FUN_147fdb02e(param_1 + 0xd);
  param_1[0x11] = lVar4;
  if (lVar4 != 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = (longlong *)0x0;
    uStack_88 = 0;
    local_98 = param_1;
    FUN_147fdabe0(lVar4,&local_98,param_1 + 0x12);
    FUN_147fcf93c(&local_98);
  }
  plVar6 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ad29c90;
  plVar8 = plVar6 + 2;
  FUN_1480221be(plVar8);
  local_98 = plVar8;
  local_90 = plVar6;
  FUN_14800f5bc(&local_98,plVar8);
  if (plVar6 == (longlong *)0x0) {
    param_1[9] = 0x10;
    plVar8 = (longlong *)param_1[10];
    if (plVar8 != (longlong *)0x0) {
      param_1[10] = 0;
LAB_147fe6cc6:
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000147fe6c00:
        if (iVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[9] = (longlong)plVar8;
    plVar8 = (longlong *)param_1[10];
    if (plVar6 == plVar8) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar8 = plVar6;
        goto joined_r0x000147fe6c00;
      }
    }
    else {
      param_1[10] = (longlong)plVar6;
      if (plVar8 != (longlong *)0x0) goto LAB_147fe6cc6;
    }
  }
  plVar8 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_90 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  local_a8 = param_1[9];
  plVar8 = (longlong *)param_1[10];
  if (plVar8 == (longlong *)0x0) {
    local_a0 = (longlong *)0x0;
    FUN_147fe6de2(param_1);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_a0 = plVar8;
    FUN_147fe6de2(param_1);
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  plVar7 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ad29cb0;
  plVar8 = plVar7 + 2;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[2] = (longlong)&PTR_LAB_14ad2a880;
  plVar7[8] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  local_98 = plVar8;
  local_90 = plVar7;
  FUN_14800f742(&local_98,plVar8);
  plVar6 = local_90;
  local_b8 = plVar8;
  local_b0 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    FUN_147fe6de2(param_1,&local_b8);
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    FUN_147fe6de2(param_1,&local_b8);
    if (plVar6 != (longlong *)0x0) {
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
  }
  plVar8 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ad29cd0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  *(undefined4 *)((longlong)plVar8 + 0x3c) = 0x80;
  *(undefined4 *)(plVar8 + 8) = 0xffffffff;
  plVar8[0xc] = 0;
  plVar8[0xd] = 0;
  if (plVar8 == (longlong *)0x0) {
    param_1[0xb] = 0x10;
    plVar6 = (longlong *)param_1[0xc];
    if (plVar6 == (longlong *)0x0) goto LAB_147fe6ba1;
    param_1[0xc] = 0;
LAB_147fe6b62:
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    if (plVar8 == (longlong *)0x0) goto LAB_147fe6ba1;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0xb] = (longlong)(plVar8 + 2);
    plVar6 = (longlong *)param_1[0xc];
    if (plVar8 == plVar6) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      param_1[0xc] = (longlong)plVar8;
      if (plVar6 != (longlong *)0x0) goto LAB_147fe6b62;
    }
  }
  LOCK();
  plVar6 = plVar8 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_147fe6ba1:
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe6d29 FUN_147fe6d29 body=183 status=ok
// SIG undefined FUN_147fe6d29(void)

undefined8 FUN_147fe6d29(undefined8 param_1,longlong param_2)

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
  uVar1 = FUN_145b677f4();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
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



// FUNCTION 147fe6de2 FUN_147fe6de2 body=183 status=ok
// SIG undefined FUN_147fe6de2(void)

void FUN_147fe6de2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
    FUN_14800f9ea(param_1 + 0x38,iVar3);
  }
  lVar6 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(lVar6 + (longlong)iVar3 * 0x10) = uVar4;
  *(longlong *)(lVar6 + 8 + (longlong)iVar3 * 0x10) = lVar5;
  local_38 = param_1;
  (**(code **)(*(longlong *)*param_2 + 0x18))();
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe6e9a FUN_147fe6e9a body=398 status=ok
// SIG undefined FUN_147fe6e9a(void)

void FUN_147fe6e9a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147fd8a1a(param_1 + 0x20);
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  uVar5 = 0;
  local_48 = param_1;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    puVar7 = puVar6 + (longlong)*(int *)(param_1 + 0x40) * 2;
    do {
      plVar3 = (longlong *)*puVar6;
      plVar4 = (longlong *)puVar6[1];
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar7);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    puVar6 = *(undefined8 **)(param_1 + 0x38);
  }
  iVar2 = *(int *)(param_1 + 0x44);
  FUN_14800f3f4(puVar6,uVar5);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_14800f9ba(param_1 + 0x38);
  }
  FUN_147fe79c8(param_1 + 0xbf8);
  FUN_147fd6a5a(param_1 + 0x90);
  FUN_147fd6af0(param_1 + 0x68);
  plVar3 = *(longlong **)(param_1 + 0x60);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_14800f3f4(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_147fd89e8(param_1 + 0x20);
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe702a FUN_147fe702a body=228 status=ok
// SIG undefined FUN_147fe702a(void)

void FUN_147fe702a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x18,0,0);
  FUN_147fd8f3c(param_1 + 0x20,param_2);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_147fdad00(*(longlong *)(param_1 + 0x88),param_2);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x38);
    puVar5 = puVar6 + (longlong)*(int *)(param_1 + 0x40) * 2;
    do {
      plVar2 = (longlong *)*puVar6;
      plVar3 = (longlong *)puVar6[1];
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
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
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar5);
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*param_2 + 0x90))
              (param_2,*(undefined8 *)(lVar4 + 0x50),*(undefined4 *)(lVar4 + 0x58),0,0);
  }
  return;
}



// FUNCTION 147fe710e FUN_147fe710e body=138 status=ok
// SIG undefined FUN_147fe710e(void)

void FUN_147fe710e(longlong param_1,undefined8 *param_2)

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
  FUN_147fd8b9a(param_1 + 0x20,&local_28);
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



// FUNCTION 147fe71aa FUN_147fe71aa body=138 status=ok
// SIG undefined FUN_147fe71aa(void)

void FUN_147fe71aa(longlong param_1,undefined8 *param_2)

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
  FUN_147fd8d94(param_1 + 0x20,&local_28);
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



// FUNCTION 147fe7246 FUN_147fe7246 body=198 status=ok
// SIG undefined FUN_147fe7246(void)

void FUN_147fe7246(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1;
  (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,&local_38);
  local_38 = *param_2;
  local_30 = (longlong *)param_2[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_28 = &local_38;
  FUN_14800fa70(param_1 + 0x38);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe730e FUN_147fe730e body=148 status=ok
// SIG undefined FUN_147fe730e(void)

undefined8 * FUN_147fe730e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x38);
    puVar6 = puVar7 + (longlong)*(int *)(param_1 + 0x40) * 2;
    do {
      plVar5 = (longlong *)*puVar7;
      *param_2 = plVar5;
      lVar3 = puVar7[1];
      param_2[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
        plVar5 = (longlong *)*param_2;
      }
      cVar4 = (**(code **)(*plVar5 + 8))(plVar5,&DAT_14cb2b6ec);
      if (cVar4 != '\0') {
        return param_2;
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
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar6);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147fe73a2 FUN_147fe73a2 body=116 status=ok
// SIG undefined FUN_147fe73a2(void)

void FUN_147fe73a2(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x38);
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x40) * 2;
    do {
      plVar2 = (longlong *)*plVar5;
      plVar3 = (longlong *)plVar5[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if ((*(byte *)(plVar2 + 3) & 4) != 0) {
        (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
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
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  return;
}



// FUNCTION 147fe7416 FUN_147fe7416 body=190 status=ok
// SIG undefined FUN_147fe7416(void)

void FUN_147fe7416(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1 + 0x90;
  local_40 = param_1;
  local_38 = param_2;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x38);
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x40) * 2;
    do {
      plVar2 = (longlong *)*plVar5;
      plVar3 = (longlong *)plVar5[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if ((*(byte *)(plVar2 + 3) & 1) != 0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_40,&local_48);
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
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe74d6 FUN_147fe74d6 body=190 status=ok
// SIG undefined FUN_147fe74d6(void)

void FUN_147fe74d6(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1 + 0x90;
  local_40 = param_1;
  local_38 = param_2;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x38);
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x40) * 2;
    do {
      plVar2 = (longlong *)*plVar5;
      plVar3 = (longlong *)plVar5[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if ((*(byte *)(plVar2 + 3) & 2) != 0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,&local_40,&local_48);
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
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe7596 FUN_147fe7596 body=307 status=ok
// SIG undefined FUN_147fe7596(void)

void FUN_147fe7596(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  param_2[2] = *(undefined8 *)(param_1 + 0xa0);
  *param_2 = uVar2;
  param_2[1] = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  param_2[5] = *(undefined8 *)(param_1 + 0xb8);
  param_2[3] = uVar2;
  param_2[4] = uVar3;
  dVar1 = (double)FUN_1438d8d80(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 200),
                                *(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0),
                                *(undefined4 *)(param_1 + 0xe8));
  *(float *)(param_2 + 6) = (float)dVar1;
  *(uint *)((longlong)param_2 + 0x94) =
       -(uint)(0.0 < *(float *)(param_1 + 0xe0)) &
       (uint)(*(float *)(param_1 + 0xdc) / *(float *)(param_1 + 0xe0));
  *(uint *)(param_2 + 0x14) =
       (*(uint *)(param_2 + 0x14) & 0xfffffffb) + (uint)*(byte *)(param_1 + 0xfd) * 4;
  if (*(char *)(param_1 + 0xfe) == '\0') {
    if (*(char *)((longlong)param_2 + 0x9c) == '\x01') {
      *(undefined1 *)((longlong)param_2 + 0x9c) = 0;
    }
  }
  else {
    *(uint *)(param_2 + 0x13) = (uint)*(byte *)(param_1 + 0xff);
    *(undefined1 *)((longlong)param_2 + 0x9c) = 1;
  }
  *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(param_1 + 0xf0);
  FUN_14477b16e(param_2 + 0x16,param_1 + 0x290);
  *(undefined4 *)(param_2 + 0x15) = 0x3f800000;
  FUN_147fdbd40(param_1 + 0x90,param_2 + 0x16);
  return;
}



// FUNCTION 147fe76d2 FUN_147fe76d2 body=26 status=ok
// SIG undefined FUN_147fe76d2(void)

undefined8 FUN_147fe76d2(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2b8))();
  return param_2;
}



// FUNCTION 147fe76ec FUN_147fe76ec body=26 status=ok
// SIG undefined FUN_147fe76ec(void)

undefined8 FUN_147fe76ec(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2c0))();
  return param_2;
}



// FUNCTION 147fe7706 FUN_147fe7706 body=26 status=ok
// SIG undefined FUN_147fe7706(void)

undefined8 FUN_147fe7706(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2c8))();
  return param_2;
}



// FUNCTION 147fe7720 FUN_147fe7720 body=65 status=ok
// SIG undefined FUN_147fe7720(void)

undefined8 * FUN_147fe7720(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *puVar1 = &PTR_FUN_14ad2a860;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 147fe7762 FUN_147fe7762 body=69 status=ok
// SIG undefined FUN_147fe7762(void)

undefined8 * FUN_147fe7762(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *puVar1 = &PTR_FUN_14ad29cf0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 147fe77a8 FUN_147fe77a8 body=73 status=ok
// SIG undefined FUN_147fe77a8(void)

undefined8 * FUN_147fe77a8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  *puVar1 = &PTR_FUN_14ad29d10;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 147fe7846 FUN_147fe7846 body=33 status=ok
// SIG undefined FUN_147fe7846(void)

undefined4 * FUN_147fe7846(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1447addd0(param_1 + 0x2c,0x10);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 147fe7868 FUN_147fe7868 body=100 status=ok
// SIG undefined FUN_147fe7868(void)

void FUN_147fe7868(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x30) == 0 && *(int *)(param_1 + 0x2c) == 0) &&
      *(int *)(param_1 + 0x34) == 0) && *(int *)(param_1 + 0x38) == 0) {
    FUN_1412e3d1e(&local_30);
    *(undefined4 *)(param_1 + 0x2c) = local_30;
    *(undefined4 *)(param_1 + 0x30) = uStack_2c;
    *(undefined4 *)(param_1 + 0x34) = uStack_28;
    *(undefined4 *)(param_1 + 0x38) = uStack_24;
  }
  FUN_1446e0b6e(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe78ce FUN_147fe78ce body=94 status=ok
// SIG undefined FUN_147fe78ce(void)

void FUN_147fe78ce(longlong *param_1,int param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
  if (param_2 == 0) {
    FUN_1412e3d1e(&local_28);
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_28;
    *(undefined4 *)(param_1 + 6) = uStack_24;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_20;
    *(undefined4 *)(param_1 + 7) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe7938 FUN_147fe7938 body=51 status=ok
// SIG undefined FUN_147fe7938(void)

void FUN_147fe7938(undefined8 *param_1)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 147fe796c FUN_147fe796c body=92 status=ok
// SIG undefined FUN_147fe796c(void)

undefined8 * FUN_147fe796c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_148000bea(param_1 + 2,param_2 + 2);
  param_1[0xc] = param_2[0xc];
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return param_1;
}



// FUNCTION 147fe79c8 FUN_147fe79c8 body=93 status=ok
// SIG undefined FUN_147fe79c8(void)

void FUN_147fe79c8(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_148000cf8(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fe7a26 FUN_147fe7a26 body=325 status=ok
// SIG undefined FUN_147fe7a26(void)

void FUN_147fe7a26(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  int local_64;
  undefined4 *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = param_2[1] - 1;
  iVar11 = 1;
  iVar5 = 1;
  if (uVar7 < 0xd) {
    iVar11 = (int)*(undefined8 *)(&DAT_14ad2a938 + (ulonglong)uVar7 * 8);
    iVar5 = (int)*(undefined8 *)(&DAT_14ad2a9a0 + (ulonglong)uVar7 * 8);
  }
  iVar12 = (int)param_1[0xc];
  uVar7 = (iVar11 + *(int *)((longlong)param_1 + 0x6c) + iVar12) - 1U & -iVar11;
  uVar9 = uVar7 + (iVar5 - iVar12);
  if (*(uint *)(param_1 + 0xd) < uVar9) {
    FUN_147fe7b6c(param_1,uVar9);
    iVar12 = (int)param_1[0xc];
    uVar7 = *(int *)((longlong)param_1 + 0x6c) + iVar12 + iVar11 + -1 & -iVar11;
  }
  *(uint *)((longlong)param_1 + 0x6c) = uVar9;
  uVar8 = *param_2;
  uVar3 = param_2[1];
  bVar1 = *(byte *)(param_2 + 2);
  cVar2 = *(char *)((longlong)param_2 + 9);
  iVar11 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar11 + 1U) {
    local_68 = uVar8;
    FUN_14800fdca(param_1,iVar11);
    uVar8 = local_68;
  }
  bVar6 = bVar1 | 2;
  if (cVar2 == '\0') {
    bVar6 = bVar1;
  }
  lVar4 = *param_1;
  lVar10 = (longlong)iVar11 * 0x10;
  *(undefined4 *)(lVar4 + lVar10) = uVar8;
  *(undefined4 *)(lVar4 + 4 + lVar10) = uVar3;
  *(uint *)(lVar4 + 8 + lVar10) = uVar7 - iVar12;
  *(byte *)(lVar4 + 0xc + lVar10) = bVar6;
  local_64 = (int)param_1[1] + -1;
  local_58 = &local_64;
  local_60 = param_2;
  FUN_14800fe50(param_1 + 2,local_4c);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe7b6c FUN_147fe7b6c body=105 status=ok
// SIG undefined FUN_147fe7b6c(void)

void FUN_147fe7b6c(longlong param_1,uint param_2)

{
  void *_Src;
  uint uVar1;
  uint uVar2;
  void *_Dst;
  
  uVar2 = 0x40;
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar2 = *(int *)(param_1 + 0x68) * 2;
  }
  uVar1 = uVar2;
  if (uVar2 < param_2) {
    uVar1 = param_2;
  }
  if (param_2 == 0) {
    uVar1 = uVar2;
  }
  _Src = *(void **)(param_1 + 0x60);
  _Dst = (void *)FUN_14001cc68(uVar1,0x20);
  if (_Src != (void *)0x0) {
    memmove(_Dst,_Src,(ulonglong)*(uint *)(param_1 + 0x68));
    FUN_1400020a8(_Src);
  }
  *(void **)(param_1 + 0x60) = _Dst;
  *(uint *)(param_1 + 0x68) = uVar1;
  return;
}



// FUNCTION 147fe7bd6 FUN_147fe7bd6 body=109 status=ok
// SIG undefined FUN_147fe7bd6(void)

longlong FUN_147fe7bd6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    plVar2 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[10];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[0xb] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = param_1[2] + (longlong)iVar3 * 0x10;
        if (*(uint *)(param_1[2] + (longlong)iVar3 * 0x10) == param_2) {
          if ((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) {
            return (longlong)*(int *)(lVar1 + 4) * 0x10 + *param_1;
          }
          return 0;
        }
        iVar3 = *(int *)(lVar1 + 8);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 147fe7c44 FUN_147fe7c44 body=109 status=ok
// SIG undefined FUN_147fe7c44(void)

longlong FUN_147fe7c44(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    plVar2 = param_1 + 9;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[10];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[0xb] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = param_1[2] + (longlong)iVar3 * 0x10;
        if (*(uint *)(param_1[2] + (longlong)iVar3 * 0x10) == param_2) {
          if ((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) {
            return (longlong)*(int *)(lVar1 + 4) * 0x10 + *param_1;
          }
          return 0;
        }
        iVar3 = *(int *)(lVar1 + 8);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 147fe7cb2 FUN_147fe7cb2 body=106 status=ok
// SIG undefined FUN_147fe7cb2(void)

void FUN_147fe7cb2(longlong param_1,undefined8 param_2,undefined8 param_3,void *param_4,char param_5
                  )

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  size_t _Size;
  
  lVar3 = FUN_147fe7bd6();
  if (lVar3 != 0) {
    uVar2 = *(int *)(lVar3 + 4) - 1;
    _Size = 1;
    if (uVar2 < 0xd) {
      _Size = *(size_t *)(&DAT_14ad2a9a0 + (ulonglong)uVar2 * 8);
    }
    memcpy((void *)((ulonglong)*(uint *)(lVar3 + 8) + *(longlong *)(param_1 + 0x60)),param_4,_Size);
    bVar1 = *(byte *)(lVar3 + 0xc);
    *(byte *)(lVar3 + 0xc) = bVar1 | 4;
    if (param_5 != '\0') {
      *(byte *)(lVar3 + 0xc) = bVar1 | 0xc;
    }
  }
  return;
}



// FUNCTION 147fe7d1c FUN_147fe7d1c body=112 status=ok
// SIG undefined FUN_147fe7d1c(void)

undefined8
FUN_147fe7d1c(longlong param_1,undefined8 param_2,undefined8 param_3,void *param_4,char param_5)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  undefined7 uVar5;
  size_t _Size;
  
  lVar3 = FUN_147fe7bd6();
  uVar5 = 0;
  if (lVar3 != 0) {
    uVar2 = *(int *)(lVar3 + 4) - 1;
    _Size = 1;
    if (uVar2 < 0xd) {
      _Size = *(size_t *)(&DAT_14ad2a9a0 + (ulonglong)uVar2 * 8);
    }
    pvVar4 = memcpy((void *)((ulonglong)*(uint *)(lVar3 + 8) + *(longlong *)(param_1 + 0x60)),
                    param_4,_Size);
    bVar1 = *(byte *)(lVar3 + 0xc);
    uVar5 = (undefined7)((ulonglong)pvVar4 >> 8);
    *(byte *)(lVar3 + 0xc) = bVar1 | 4;
    if (param_5 != '\0') {
      *(byte *)(lVar3 + 0xc) = bVar1 | 0xc;
    }
  }
  return CONCAT71(uVar5,lVar3 != 0);
}



// FUNCTION 147fe7d8c FUN_147fe7d8c body=31 status=ok
// SIG undefined FUN_147fe7d8c(void)

undefined8 FUN_147fe7d8c(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_147fe7c44();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0xc)) &
            0xffffffffffffff08;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 3);
  }
  return uVar3;
}



// FUNCTION 147fe7dac FUN_147fe7dac body=94 status=ok
// SIG undefined FUN_147fe7dac(void)

void FUN_147fe7dac(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14800fdca(param_1,iVar1);
    }
    FUN_1480102e9((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
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



// FUNCTION 147fe7e0c FUN_147fe7e0c body=363 status=ok
// SIG undefined FUN_147fe7e0c(void)

void FUN_147fe7e0c(longlong param_1,longlong *param_2,byte param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  size_t _Size;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  byte local_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      bVar1 = *(byte *)(lVar2 + 0xc + lVar6);
      if (((bVar1 & 4) != 0) && (((param_3 & 4) == 0 || ((bVar1 & 8) != 0)))) {
        bVar5 = bVar1 >> 1 & 1;
        if ((((param_3 & bVar5) != 0) || ((param_3 & 2) != 0 && bVar5 == 0)) &&
           (((param_3 & 8) != 0 || ((bVar1 & 1) == 0)))) {
          local_58 = *(undefined4 *)(lVar2 + lVar6);
          local_60 = param_1;
          lVar4 = FUN_147fe7bd6(param_1);
          param_1 = local_60;
          if (lVar4 == 0) {
            local_4c = 0;
            local_54 = local_58;
            local_50 = *(undefined4 *)(lVar2 + 4 + lVar6);
            local_4b = bVar5;
            FUN_147fe7a26(local_60,&local_54);
            lVar4 = FUN_147fe7bd6(param_1,*(undefined4 *)(lVar2 + lVar6));
            if (lVar4 == 0) goto LAB_147fe7e56;
          }
          if ((ulonglong)*(uint *)(lVar4 + 4) < 0xe) {
            _Size = *(size_t *)(&DAT_14ad2aa08 + (ulonglong)*(uint *)(lVar4 + 4) * 8);
          }
          else {
            _Size = 0;
          }
          memcpy((void *)((ulonglong)*(uint *)(lVar4 + 8) + *(longlong *)(param_1 + 0x60)),
                 (void *)((ulonglong)*(uint *)(lVar2 + 8 + lVar6) + param_2[0xc]),_Size);
          *(byte *)(lVar4 + 0xc) = *(byte *)(lVar4 + 0xc) | bVar1 & 0xc;
          param_1 = local_60;
        }
      }
LAB_147fe7e56:
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fe7f78 FUN_147fe7f78 body=1602 status=ok
// SIG undefined FUN_147fe7f78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147fe7f78(longlong param_1,longlong *param_2,byte param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  byte bVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  size_t _Size;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar39;
  undefined1 auStack_188 [40];
  longlong local_160;
  undefined8 local_158;
  undefined1 local_150;
  byte local_14f;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar13 = param_2[1];
  if ((longlong)(int)lVar13 != 0) {
    lVar9 = *param_2;
    lVar20 = 0;
    fVar33 = 1.0 - param_4;
    dVar11 = (double)fVar33;
    dVar12 = (double)param_4;
    do {
      bVar7 = *(byte *)(lVar9 + 0xc + lVar20);
      if (((bVar7 & 4) != 0) && (((param_3 & 4) == 0 || ((bVar7 & 8) != 0)))) {
        bVar17 = bVar7 >> 1 & 1;
        if ((((param_3 & bVar17) != 0) || ((param_3 & 2) != 0 && bVar17 == 0)) &&
           (((param_3 & 8) != 0 || ((bVar7 & 1) == 0)))) {
          uVar8 = *(undefined4 *)(lVar9 + lVar20);
          local_160 = param_1;
          lVar14 = FUN_147fe7bd6(param_1,uVar8);
          lVar15 = local_160;
          if (lVar14 == 0) {
            local_150 = 0;
            local_158._4_4_ = *(undefined4 *)(lVar9 + 4 + lVar20);
            local_158._0_4_ = uVar8;
            local_14f = bVar17;
            FUN_147fe7a26(local_160,&local_158);
            lVar15 = FUN_147fe7bd6(lVar15,*(undefined4 *)(lVar9 + lVar20));
            param_1 = local_160;
            if ((ulonglong)*(uint *)(lVar15 + 4) < 0xe) {
              _Size = *(size_t *)(&DAT_14ad2aa08 + (ulonglong)*(uint *)(lVar15 + 4) * 8);
            }
            else {
              _Size = 0;
            }
            memcpy((void *)((ulonglong)*(uint *)(lVar15 + 8) + *(longlong *)(local_160 + 0x60)),
                   (void *)((ulonglong)*(uint *)(lVar9 + 8 + lVar20) + param_2[0xc]),_Size);
            *(byte *)(lVar15 + 0xc) = *(byte *)(lVar15 + 0xc) | bVar7 & 0xc;
          }
          else {
            if (*(uint *)(lVar14 + 4) < 0xe) {
              pauVar18 = (undefined1 (*) [16])
                         ((ulonglong)*(uint *)(lVar14 + 8) + *(longlong *)(local_160 + 0x60));
              pauVar19 = (undefined1 (*) [16])
                         ((ulonglong)*(uint *)(lVar9 + 8 + lVar20) + param_2[0xc]);
              switch(*(uint *)(lVar14 + 4)) {
              case 0:
                (*pauVar18)[0] =
                     (float)(int)(char)(*pauVar18)[0] * fVar33 +
                     (float)(int)(char)(*pauVar19)[0] * param_4 != 0.0;
                break;
              case 1:
                *(int *)*pauVar18 =
                     (int)((float)*(int *)*pauVar18 * fVar33 + (float)*(int *)*pauVar19 * param_4);
                break;
              case 2:
                *(float *)*pauVar18 = *(float *)*pauVar18 * fVar33 + *(float *)*pauVar19 * param_4;
                break;
              case 3:
                *(double *)*pauVar18 = *(double *)*pauVar18 * dVar11 + *(double *)*pauVar19 * dVar12
                ;
                break;
              case 4:
                fVar23 = *(float *)(*pauVar18 + 4);
                fVar24 = *(float *)(*pauVar19 + 4);
                *(float *)*pauVar18 = *(float *)*pauVar19 * param_4 + *(float *)*pauVar18 * fVar33;
                *(float *)(*pauVar18 + 4) = fVar24 * param_4 + fVar23 * fVar33;
                break;
              case 5:
                dVar1 = *(double *)(*pauVar18 + 8);
                dVar2 = *(double *)(*pauVar19 + 8);
                *(double *)*pauVar18 = *(double *)*pauVar19 * dVar12 + *(double *)*pauVar18 * dVar11
                ;
                *(double *)(*pauVar18 + 8) = dVar2 * dVar12 + dVar1 * dVar11;
                break;
              default:
                fVar23 = *(float *)(*pauVar18 + 8);
                fVar24 = *(float *)(*pauVar18 + 4);
                fVar25 = *(float *)(*pauVar19 + 8);
                fVar26 = *(float *)(*pauVar19 + 4);
                *(float *)*pauVar18 = *(float *)*pauVar19 * param_4 + *(float *)*pauVar18 * fVar33;
                *(float *)(*pauVar18 + 4) = fVar26 * param_4 + fVar24 * fVar33;
                *(float *)(*pauVar18 + 8) = fVar25 * param_4 + fVar23 * fVar33;
                break;
              case 7:
              case 0xb:
                dVar1 = *(double *)pauVar18[1];
                dVar2 = *(double *)(*pauVar18 + 8);
                dVar3 = *(double *)pauVar19[1];
                dVar4 = *(double *)(*pauVar19 + 8);
                *(double *)*pauVar18 = *(double *)*pauVar19 * dVar12 + *(double *)*pauVar18 * dVar11
                ;
                *(double *)(*pauVar18 + 8) = dVar4 * dVar12 + dVar2 * dVar11;
                *(double *)pauVar18[1] = dVar3 * dVar12 + dVar1 * dVar11;
                break;
              case 8:
                fVar23 = *(float *)(*pauVar18 + 0xc);
                fVar24 = *(float *)(*pauVar18 + 8);
                fVar25 = *(float *)(*pauVar18 + 4);
                fVar26 = *(float *)(*pauVar19 + 0xc);
                fVar27 = *(float *)(*pauVar19 + 8);
                fVar28 = *(float *)(*pauVar19 + 4);
                *(float *)*pauVar18 = *(float *)*pauVar19 * param_4 + *(float *)*pauVar18 * fVar33;
                *(float *)(*pauVar18 + 4) = fVar28 * param_4 + fVar25 * fVar33;
                *(float *)(*pauVar18 + 8) = fVar27 * param_4 + fVar24 * fVar33;
                *(float *)(*pauVar18 + 0xc) = fVar26 * param_4 + fVar23 * fVar33;
                break;
              case 9:
                dVar1 = *(double *)(pauVar18[1] + 8);
                dVar2 = *(double *)pauVar18[1];
                dVar3 = *(double *)(*pauVar18 + 8);
                dVar4 = *(double *)(pauVar19[1] + 8);
                dVar5 = *(double *)pauVar19[1];
                dVar6 = *(double *)(*pauVar19 + 8);
                *(double *)*pauVar18 = *(double *)*pauVar19 * dVar12 + *(double *)*pauVar18 * dVar11
                ;
                *(double *)(*pauVar18 + 8) = dVar6 * dVar12 + dVar3 * dVar11;
                *(double *)pauVar18[1] = dVar5 * dVar12 + dVar2 * dVar11;
                *(double *)(pauVar18[1] + 8) = dVar4 * dVar12 + dVar1 * dVar11;
                break;
              case 0xc:
                auVar36 = *pauVar18;
                fVar23 = *(float *)pauVar18[1];
                fVar24 = *(float *)(pauVar18[1] + 4);
                fVar25 = *(float *)(pauVar18[1] + 8);
                fVar26 = *(float *)(pauVar18[1] + 0xc);
                fVar27 = *(float *)pauVar18[2];
                fVar28 = *(float *)(pauVar18[2] + 4);
                fVar29 = *(float *)(pauVar18[2] + 8);
                fVar30 = *(float *)(pauVar18[2] + 0xc);
                if (1e-05 < param_4) {
                  if (0.99999 <= param_4) {
                    auVar36 = *pauVar19;
                    fVar23 = *(float *)pauVar19[1];
                    fVar24 = *(float *)(pauVar19[1] + 4);
                    fVar25 = *(float *)(pauVar19[1] + 8);
                    fVar26 = *(float *)(pauVar19[1] + 0xc);
                    fVar27 = *(float *)pauVar19[2];
                    fVar28 = *(float *)(pauVar19[2] + 4);
                    fVar29 = *(float *)(pauVar19[2] + 8);
                    fVar30 = *(float *)(pauVar19[2] + 0xc);
                  }
                  else {
                    fVar23 = fVar23 * fVar33 + *(float *)pauVar19[1] * param_4;
                    fVar24 = fVar24 * fVar33 + *(float *)(pauVar19[1] + 4) * param_4;
                    fVar25 = fVar25 * fVar33 + *(float *)(pauVar19[1] + 8) * param_4;
                    fVar26 = fVar26 * fVar33 + *(float *)(pauVar19[1] + 0xc) * param_4;
                    fVar27 = fVar27 * fVar33 + *(float *)pauVar19[2] * param_4;
                    fVar28 = fVar28 * fVar33 + *(float *)(pauVar19[2] + 4) * param_4;
                    fVar29 = fVar29 * fVar33 + *(float *)(pauVar19[2] + 8) * param_4;
                    fVar30 = fVar30 * fVar33 + *(float *)(pauVar19[2] + 0xc) * param_4;
                    fVar21 = auVar36._0_4_ * *(float *)*pauVar19 +
                             auVar36._4_4_ * *(float *)(*pauVar19 + 4);
                    fVar22 = auVar36._8_4_ * *(float *)(*pauVar19 + 8) +
                             auVar36._12_4_ * *(float *)(*pauVar19 + 0xc);
                    auVar35._0_4_ = 0.0 - auVar36._0_4_;
                    auVar35._4_4_ = 0.0 - auVar36._4_4_;
                    auVar35._8_4_ = 0.0 - auVar36._8_4_;
                    auVar35._12_4_ = 0.0 - auVar36._12_4_;
                    auVar10._4_4_ = -(uint)(0.0 <= fVar22 + fVar21);
                    auVar10._0_4_ = -(uint)(0.0 <= fVar22 + fVar21);
                    auVar10._8_4_ = -(uint)(0.0 <= fVar21 + fVar22);
                    auVar10._12_4_ = -(uint)(0.0 <= fVar21 + fVar22);
                    auVar36 = blendvps(auVar35,auVar36,auVar10);
                    fVar34 = auVar36._0_4_ * fVar33 + param_4 * *(float *)*pauVar19;
                    fVar37 = auVar36._4_4_ * fVar33 + param_4 * *(float *)(*pauVar19 + 4);
                    fVar38 = auVar36._8_4_ * fVar33 + param_4 * *(float *)(*pauVar19 + 8);
                    fVar39 = auVar36._12_4_ * fVar33 + param_4 * *(float *)(*pauVar19 + 0xc);
                    fVar21 = fVar34 * fVar34 + fVar37 * fVar37;
                    fVar22 = fVar38 * fVar38 + fVar39 * fVar39;
                    auVar31._0_4_ = fVar22 + fVar21;
                    auVar31._4_4_ = fVar22 + fVar21;
                    auVar31._8_4_ = fVar21 + fVar22;
                    auVar31._12_4_ = fVar21 + fVar22;
                    auVar36 = sqrtps(auVar31,auVar31);
                    auVar36 = divps(_DAT_1499314a0,auVar36);
                    auVar32._0_4_ = auVar36._0_4_ * fVar34;
                    auVar32._4_4_ = auVar36._4_4_ * fVar37;
                    auVar32._8_4_ = auVar36._8_4_ * fVar38;
                    auVar32._12_4_ = auVar36._12_4_ * fVar39;
                    auVar36._4_4_ = -(uint)(1e-08 <= auVar31._4_4_);
                    auVar36._0_4_ = -(uint)(1e-08 <= auVar31._0_4_);
                    auVar36._8_4_ = -(uint)(1e-08 <= auVar31._8_4_);
                    auVar36._12_4_ = -(uint)(1e-08 <= auVar31._12_4_);
                    auVar36 = blendvps(_DAT_149932320,auVar32,auVar36);
                  }
                }
                *pauVar18 = auVar36;
                *(float *)pauVar18[1] = fVar23;
                *(float *)(pauVar18[1] + 4) = fVar24;
                *(float *)(pauVar18[1] + 8) = fVar25;
                *(float *)(pauVar18[1] + 0xc) = fVar26;
                *(float *)pauVar18[2] = fVar27;
                *(float *)(pauVar18[2] + 4) = fVar28;
                *(float *)(pauVar18[2] + 8) = fVar29;
                *(float *)(pauVar18[2] + 0xc) = fVar30;
                break;
              case 0xd:
                FUN_147fe85c2(&local_158,pauVar18);
                puVar16 = &local_158;
                for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
                  *(undefined8 *)*pauVar18 = *puVar16;
                  puVar16 = puVar16 + 1;
                  pauVar18 = (undefined1 (*) [16])(*pauVar18 + 8);
                }
              }
            }
            *(byte *)(lVar14 + 0xc) = *(byte *)(lVar14 + 0xc) | bVar7 & 0xc;
            param_1 = local_160;
          }
        }
      }
      lVar20 = lVar20 + 0x10;
    } while ((longlong)(int)lVar13 * 0x10 != lVar20);
  }
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fe85bc thunk_FUN_147fe7f78 body=5 status=ok
// SIG undefined thunk_FUN_147fe7f78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_147fe7f78(longlong param_1,longlong *param_2,byte param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  byte bVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  size_t _Size;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar39;
  undefined1 auStack_188 [40];
  longlong lStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  byte bStack_14f;
  ulonglong uStack_f0;
  
  uStack_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar13 = param_2[1];
  if ((longlong)(int)lVar13 != 0) {
    lVar9 = *param_2;
    lVar20 = 0;
    fVar33 = 1.0 - param_4;
    dVar11 = (double)fVar33;
    dVar12 = (double)param_4;
    do {
      bVar7 = *(byte *)(lVar9 + 0xc + lVar20);
      if (((bVar7 & 4) != 0) && (((param_3 & 4) == 0 || ((bVar7 & 8) != 0)))) {
        bVar17 = bVar7 >> 1 & 1;
        if ((((param_3 & bVar17) != 0) || ((param_3 & 2) != 0 && bVar17 == 0)) &&
           (((param_3 & 8) != 0 || ((bVar7 & 1) == 0)))) {
          uVar8 = *(undefined4 *)(lVar9 + lVar20);
          lStack_160 = param_1;
          lVar14 = FUN_147fe7bd6(param_1,uVar8);
          lVar15 = lStack_160;
          if (lVar14 == 0) {
            uStack_150 = 0;
            uStack_158._4_4_ = *(undefined4 *)(lVar9 + 4 + lVar20);
            uStack_158._0_4_ = uVar8;
            bStack_14f = bVar17;
            FUN_147fe7a26(lStack_160,&uStack_158);
            lVar15 = FUN_147fe7bd6(lVar15,*(undefined4 *)(lVar9 + lVar20));
            param_1 = lStack_160;
            if ((ulonglong)*(uint *)(lVar15 + 4) < 0xe) {
              _Size = *(size_t *)(&DAT_14ad2aa08 + (ulonglong)*(uint *)(lVar15 + 4) * 8);
            }
            else {
              _Size = 0;
            }
            memcpy((void *)((ulonglong)*(uint *)(lVar15 + 8) + *(longlong *)(lStack_160 + 0x60)),
                   (void *)((ulonglong)*(uint *)(lVar9 + 8 + lVar20) + param_2[0xc]),_Size);
            *(byte *)(lVar15 + 0xc) = *(byte *)(lVar15 + 0xc) | bVar7 & 0xc;
          }
          else {
            if (*(uint *)(lVar14 + 4) < 0xe) {
              pauVar18 = (undefined1 (*) [16])
                         ((ulonglong)*(uint *)(lVar14 + 8) + *(longlong *)(lStack_160 + 0x60));
              pauVar19 = (undefined1 (*) [16])
                         ((ulonglong)*(uint *)(lVar9 + 8 + lVar20) + param_2[0xc]);
              switch(*(uint *)(lVar14 + 4)) {
              case 0:
                (*pauVar18)[0] =
                     (float)(int)(char)(*pauVar18)[0] * fVar33 +
                     (float)(int)(char)(*pauVar19)[0] * param_4 != 0.0;
                break;
              case 1:
                *(int *)*pauVar18 =
                     (int)((float)*(int *)*pauVar18 * fVar33 + (float)*(int *)*pauVar19 * param_4);
                break;
              case 2:
                *(float *)*pauVar18 = *(float *)*pauVar18 * fVar33 + *(float *)*pauVar19 * param_4;
                break;
              case 3:
                *(double *)*pauVar18 = *(double *)*pauVar18 * dVar11 + *(double *)*pauVar19 * dVar12
                ;
                break;
              case 4:
                fVar23 = *(float *)(*pauVar18 + 4);
                fVar24 = *(float *)(*pauVar19 + 4);
                *(float *)*pauVar18 = *(float *)*pauVar19 * param_4 + *(float *)*pauVar18 * fVar33;
                *(float *)(*pauVar18 + 4) = fVar24 * param_4 + fVar23 * fVar33;
                break;
              case 5:
                dVar1 = *(double *)(*pauVar18 + 8);
                dVar2 = *(double *)(*pauVar19 + 8);
                *(double *)*pauVar18 = *(double *)*pauVar19 * dVar12 + *(double *)*pauVar18 * dVar11
                ;
                *(double *)(*pauVar18 + 8) = dVar2 * dVar12 + dVar1 * dVar11;
                break;
              default:
                fVar23 = *(float *)(*pauVar18 + 8);
                fVar24 = *(float *)(*pauVar18 + 4);
                fVar25 = *(float *)(*pauVar19 + 8);
                fVar26 = *(float *)(*pauVar19 + 4);
                *(float *)*pauVar18 = *(float *)*pauVar19 * param_4 + *(float *)*pauVar18 * fVar33;
                *(float *)(*pauVar18 + 4) = fVar26 * param_4 + fVar24 * fVar33;
                *(float *)(*pauVar18 + 8) = fVar25 * param_4 + fVar23 * fVar33;
                break;
              case 7:
              case 0xb:
                dVar1 = *(double *)pauVar18[1];
                dVar2 = *(double *)(*pauVar18 + 8);
                dVar3 = *(double *)pauVar19[1];
                dVar4 = *(double *)(*pauVar19 + 8);
                *(double *)*pauVar18 = *(double *)*pauVar19 * dVar12 + *(double *)*pauVar18 * dVar11
                ;
                *(double *)(*pauVar18 + 8) = dVar4 * dVar12 + dVar2 * dVar11;
                *(double *)pauVar18[1] = dVar3 * dVar12 + dVar1 * dVar11;
                break;
              case 8:
                fVar23 = *(float *)(*pauVar18 + 0xc);
                fVar24 = *(float *)(*pauVar18 + 8);
                fVar25 = *(float *)(*pauVar18 + 4);
                fVar26 = *(float *)(*pauVar19 + 0xc);
                fVar27 = *(float *)(*pauVar19 + 8);
                fVar28 = *(float *)(*pauVar19 + 4);
                *(float *)*pauVar18 = *(float *)*pauVar19 * param_4 + *(float *)*pauVar18 * fVar33;
                *(float *)(*pauVar18 + 4) = fVar28 * param_4 + fVar25 * fVar33;
                *(float *)(*pauVar18 + 8) = fVar27 * param_4 + fVar24 * fVar33;
                *(float *)(*pauVar18 + 0xc) = fVar26 * param_4 + fVar23 * fVar33;
                break;
              case 9:
                dVar1 = *(double *)(pauVar18[1] + 8);
                dVar2 = *(double *)pauVar18[1];
                dVar3 = *(double *)(*pauVar18 + 8);
                dVar4 = *(double *)(pauVar19[1] + 8);
                dVar5 = *(double *)pauVar19[1];
                dVar6 = *(double *)(*pauVar19 + 8);
                *(double *)*pauVar18 = *(double *)*pauVar19 * dVar12 + *(double *)*pauVar18 * dVar11
                ;
                *(double *)(*pauVar18 + 8) = dVar6 * dVar12 + dVar3 * dVar11;
                *(double *)pauVar18[1] = dVar5 * dVar12 + dVar2 * dVar11;
                *(double *)(pauVar18[1] + 8) = dVar4 * dVar12 + dVar1 * dVar11;
                break;
              case 0xc:
                auVar36 = *pauVar18;
                fVar23 = *(float *)pauVar18[1];
                fVar24 = *(float *)(pauVar18[1] + 4);
                fVar25 = *(float *)(pauVar18[1] + 8);
                fVar26 = *(float *)(pauVar18[1] + 0xc);
                fVar27 = *(float *)pauVar18[2];
                fVar28 = *(float *)(pauVar18[2] + 4);
                fVar29 = *(float *)(pauVar18[2] + 8);
                fVar30 = *(float *)(pauVar18[2] + 0xc);
                if (1e-05 < param_4) {
                  if (0.99999 <= param_4) {
                    auVar36 = *pauVar19;
                    fVar23 = *(float *)pauVar19[1];
                    fVar24 = *(float *)(pauVar19[1] + 4);
                    fVar25 = *(float *)(pauVar19[1] + 8);
                    fVar26 = *(float *)(pauVar19[1] + 0xc);
                    fVar27 = *(float *)pauVar19[2];
                    fVar28 = *(float *)(pauVar19[2] + 4);
                    fVar29 = *(float *)(pauVar19[2] + 8);
                    fVar30 = *(float *)(pauVar19[2] + 0xc);
                  }
                  else {
                    fVar23 = fVar23 * fVar33 + *(float *)pauVar19[1] * param_4;
                    fVar24 = fVar24 * fVar33 + *(float *)(pauVar19[1] + 4) * param_4;
                    fVar25 = fVar25 * fVar33 + *(float *)(pauVar19[1] + 8) * param_4;
                    fVar26 = fVar26 * fVar33 + *(float *)(pauVar19[1] + 0xc) * param_4;
                    fVar27 = fVar27 * fVar33 + *(float *)pauVar19[2] * param_4;
                    fVar28 = fVar28 * fVar33 + *(float *)(pauVar19[2] + 4) * param_4;
                    fVar29 = fVar29 * fVar33 + *(float *)(pauVar19[2] + 8) * param_4;
                    fVar30 = fVar30 * fVar33 + *(float *)(pauVar19[2] + 0xc) * param_4;
                    fVar21 = auVar36._0_4_ * *(float *)*pauVar19 +
                             auVar36._4_4_ * *(float *)(*pauVar19 + 4);
                    fVar22 = auVar36._8_4_ * *(float *)(*pauVar19 + 8) +
                             auVar36._12_4_ * *(float *)(*pauVar19 + 0xc);
                    auVar35._0_4_ = 0.0 - auVar36._0_4_;
                    auVar35._4_4_ = 0.0 - auVar36._4_4_;
                    auVar35._8_4_ = 0.0 - auVar36._8_4_;
                    auVar35._12_4_ = 0.0 - auVar36._12_4_;
                    auVar10._4_4_ = -(uint)(0.0 <= fVar22 + fVar21);
                    auVar10._0_4_ = -(uint)(0.0 <= fVar22 + fVar21);
                    auVar10._8_4_ = -(uint)(0.0 <= fVar21 + fVar22);
                    auVar10._12_4_ = -(uint)(0.0 <= fVar21 + fVar22);
                    auVar36 = blendvps(auVar35,auVar36,auVar10);
                    fVar34 = auVar36._0_4_ * fVar33 + param_4 * *(float *)*pauVar19;
                    fVar37 = auVar36._4_4_ * fVar33 + param_4 * *(float *)(*pauVar19 + 4);
                    fVar38 = auVar36._8_4_ * fVar33 + param_4 * *(float *)(*pauVar19 + 8);
                    fVar39 = auVar36._12_4_ * fVar33 + param_4 * *(float *)(*pauVar19 + 0xc);
                    fVar21 = fVar34 * fVar34 + fVar37 * fVar37;
                    fVar22 = fVar38 * fVar38 + fVar39 * fVar39;
                    auVar31._0_4_ = fVar22 + fVar21;
                    auVar31._4_4_ = fVar22 + fVar21;
                    auVar31._8_4_ = fVar21 + fVar22;
                    auVar31._12_4_ = fVar21 + fVar22;
                    auVar36 = sqrtps(auVar31,auVar31);
                    auVar36 = divps(_DAT_1499314a0,auVar36);
                    auVar32._0_4_ = auVar36._0_4_ * fVar34;
                    auVar32._4_4_ = auVar36._4_4_ * fVar37;
                    auVar32._8_4_ = auVar36._8_4_ * fVar38;
                    auVar32._12_4_ = auVar36._12_4_ * fVar39;
                    auVar36._4_4_ = -(uint)(1e-08 <= auVar31._4_4_);
                    auVar36._0_4_ = -(uint)(1e-08 <= auVar31._0_4_);
                    auVar36._8_4_ = -(uint)(1e-08 <= auVar31._8_4_);
                    auVar36._12_4_ = -(uint)(1e-08 <= auVar31._12_4_);
                    auVar36 = blendvps(_DAT_149932320,auVar32,auVar36);
                  }
                }
                *pauVar18 = auVar36;
                *(float *)pauVar18[1] = fVar23;
                *(float *)(pauVar18[1] + 4) = fVar24;
                *(float *)(pauVar18[1] + 8) = fVar25;
                *(float *)(pauVar18[1] + 0xc) = fVar26;
                *(float *)pauVar18[2] = fVar27;
                *(float *)(pauVar18[2] + 4) = fVar28;
                *(float *)(pauVar18[2] + 8) = fVar29;
                *(float *)(pauVar18[2] + 0xc) = fVar30;
                break;
              case 0xd:
                FUN_147fe85c2(&uStack_158,pauVar18);
                puVar16 = &uStack_158;
                for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
                  *(undefined8 *)*pauVar18 = *puVar16;
                  puVar16 = puVar16 + 1;
                  pauVar18 = (undefined1 (*) [16])(*pauVar18 + 8);
                }
              }
            }
            *(byte *)(lVar14 + 0xc) = *(byte *)(lVar14 + 0xc) | bVar7 & 0xc;
            param_1 = lStack_160;
          }
        }
      }
      lVar20 = lVar20 + 0x10;
    } while ((longlong)(int)lVar13 * 0x10 != lVar20);
  }
  if ((uStack_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fe85c2 FUN_147fe85c2 body=443 status=ok
// SIG undefined FUN_147fe85c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147fe85c2(undefined1 (*param_1) [16],undefined8 *param_2,double *param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  pauVar4 = param_1;
  for (lVar3 = 0xc; auVar12 = _DAT_149934d80, lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)*pauVar4 = *param_2;
    param_2 = param_2 + 1;
    pauVar4 = (undefined1 (*) [16])(*pauVar4 + 8);
  }
  if (1e-05 < param_4) {
    if (0.99999 <= param_4) {
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(double *)*param_1 = *param_3;
        param_3 = param_3 + 1;
        param_1 = (undefined1 (*) [16])(*param_1 + 8);
      }
    }
    else {
      dVar14 = (double)param_4;
      dVar15 = (double)param_4;
      dVar10 = (double)DAT_149934d80 - dVar14;
      dVar13 = DAT_149934d80._8_8_ - dVar15;
      dVar20 = *(double *)(param_1[2] + 8);
      dVar17 = *(double *)param_1[3];
      dVar21 = param_3[5];
      dVar22 = param_3[6];
      dVar16 = param_3[7] * dVar15 + *(double *)(param_1[3] + 8) * dVar13;
      *(double *)param_1[2] = param_3[4] * dVar14 + *(double *)param_1[2] * dVar10;
      *(double *)(param_1[2] + 8) = dVar21 * dVar15 + dVar20 * dVar13;
      auVar19._8_4_ = SUB84(dVar16,0);
      auVar19._0_8_ = dVar22 * dVar14 + dVar17 * dVar10;
      auVar19._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      param_1[3] = auVar19;
      dVar20 = *(double *)(param_1[4] + 8);
      dVar17 = *(double *)param_1[5];
      dVar21 = param_3[9];
      dVar22 = param_3[10];
      dVar16 = param_3[0xb] * dVar15 + *(double *)(param_1[5] + 8) * dVar13;
      *(double *)param_1[4] = param_3[8] * dVar14 + *(double *)param_1[4] * dVar10;
      *(double *)(param_1[4] + 8) = dVar21 * dVar15 + dVar20 * dVar13;
      auVar24._8_4_ = SUB84(dVar16,0);
      auVar24._0_8_ = dVar22 * dVar14 + dVar17 * dVar10;
      auVar24._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      param_1[5] = auVar24;
      auVar19 = *param_1;
      auVar24 = param_1[1];
      dVar16 = param_3[2] * auVar24._0_8_ + *param_3 * auVar19._0_8_;
      dVar20 = param_3[3] * auVar24._8_8_ + param_3[1] * auVar19._8_8_;
      lVar3 = -(ulonglong)(0.0 <= dVar16 + dVar20);
      lVar5 = -(ulonglong)(0.0 <= dVar16 + dVar20);
      uVar7 = (undefined4)lVar5;
      uVar8 = (undefined4)((ulonglong)lVar5 >> 0x20);
      auVar18._0_8_ = 0.0 - auVar19._0_8_;
      auVar18._8_8_ = 0.0 - auVar19._8_8_;
      auVar23._0_8_ = 0.0 - auVar24._0_8_;
      auVar23._8_8_ = 0.0 - auVar24._8_8_;
      auVar1._8_4_ = uVar7;
      auVar1._0_8_ = lVar3;
      auVar1._12_4_ = uVar8;
      auVar19 = blendvpd(auVar18,auVar19,auVar1);
      auVar2._8_4_ = uVar7;
      auVar2._0_8_ = lVar3;
      auVar2._12_4_ = uVar8;
      auVar24 = blendvpd(auVar23,auVar24,auVar2);
      dVar17 = auVar19._0_8_ * dVar10 + *param_3 * dVar14;
      dVar21 = auVar19._8_8_ * dVar13 + param_3[1] * dVar15;
      dVar22 = auVar24._0_8_ * dVar10 + param_3[2] * dVar14;
      dVar10 = auVar24._8_8_ * dVar13 + param_3[3] * dVar15;
      dVar16 = dVar22 * dVar22 + dVar17 * dVar17;
      dVar20 = dVar10 * dVar10 + dVar21 * dVar21;
      auVar11._0_8_ = dVar16 + dVar20;
      auVar11._8_8_ = dVar16 + dVar20;
      uVar6 = -(ulonglong)(1e-08 <= auVar11._8_8_);
      auVar19 = sqrtpd(auVar11,auVar11);
      auVar19 = divpd(auVar12,auVar19);
      auVar9._0_8_ = auVar19._0_8_ * dVar22;
      auVar9._8_8_ = auVar19._8_8_ * dVar10;
      auVar12._8_4_ = (int)uVar6;
      auVar12._0_8_ = -(ulonglong)(1e-08 <= auVar11._0_8_);
      auVar12._12_4_ = (int)(uVar6 >> 0x20);
      auVar12 = blendvpd(_DAT_149935300,auVar9,auVar12);
      *(ulonglong *)*param_1 =
           (ulonglong)(dVar17 * auVar19._0_8_) & -(ulonglong)(1e-08 <= auVar11._0_8_);
      *(ulonglong *)(*param_1 + 8) = (ulonglong)(dVar21 * auVar19._8_8_) & uVar6;
      param_1[1] = auVar12;
    }
  }
  return;
}



// FUNCTION 147fe877d FUN_147fe877d body=24 status=ok
// SIG undefined FUN_147fe877d(void)

undefined8 FUN_147fe877d(ulonglong *param_1,ulonglong *param_2)

{
  return CONCAT71((int7)((*param_1 ^ *param_2) >> 8),
                  (short)param_1[1] == (short)param_2[1] && (*param_1 ^ *param_2) == 0);
}



// FUNCTION 147fe87a2 FUN_147fe87a2 body=166 status=ok
// SIG undefined FUN_147fe87a2(void)

void FUN_147fe87a2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar3 = FUN_145b677f4();
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_147fe87f4;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_147fe87f4;
      }
    }
  }
  lVar5 = 0;
LAB_147fe87f4:
  uVar4 = FUN_147fe8848(param_1,param_2,*(undefined8 *)(lVar5 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar4 = FUN_147fe88ba(param_1,param_2,*(undefined8 *)(lVar5 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  uVar4 = FUN_147fe8848(param_1,param_2,*(undefined8 *)(lVar5 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  uVar4 = FUN_147fe8848(param_1,param_2,*(undefined8 *)(lVar5 + 0x50));
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  return;
}



// FUNCTION 147fe8848 FUN_147fe8848 body=113 status=ok
// SIG undefined FUN_147fe8848(void)

longlong * FUN_147fe8848(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)FUN_147fd9dc6(param_3,*param_2);
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  FUN_14801060c(plVar1 + 6,local_28,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe88ba FUN_147fe88ba body=113 status=ok
// SIG undefined FUN_147fe88ba(void)

longlong * FUN_147fe88ba(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)FUN_147fd9dc6(param_3,*param_2);
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  FUN_14801060c(plVar1 + 6,local_28,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe892c FUN_147fe892c body=115 status=ok
// SIG undefined FUN_147fe892c(void)

undefined8 FUN_147fe892c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *(undefined8 *)(param_1 + 0x38);
  local_40 = &local_30;
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_20 = *(undefined8 *)(param_1 + 0x48);
  local_18 = *(undefined8 *)(param_1 + 0x50);
  local_38 = &local_10;
  FUN_147fe89a0(param_2);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe89a0 FUN_147fe89a0 body=163 status=ok
// SIG undefined FUN_147fe89a0(void)

undefined8 * FUN_147fe89a0(undefined8 *param_1,undefined4 *param_2)

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
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_148010958(&local_48);
  (*(code *)(&PTR_LAB_14ad0ff00)[*(byte *)(param_1 + 6)])(param_1);
  if (local_28 == 0) {
    param_1[2] = local_38;
    param_1[3] = uStack_30;
    *(undefined4 *)param_1 = local_48;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_44;
    *(undefined4 *)(param_1 + 1) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
  }
  param_1[4] = local_28;
  *(undefined4 *)(param_1 + 5) = local_20;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_1c;
  *(undefined1 *)(param_1 + 6) = 1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe8a44 FUN_147fe8a44 body=160 status=ok
// SIG undefined FUN_147fe8a44(void)

void FUN_147fe8a44(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if ((plVar1[1] == 0) || (*(char *)(plVar1[1] + 0x30) == '\x01')) {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
  }
  plVar1 = *(longlong **)(param_1 + 0x40);
  if ((plVar1[1] == 0) || (*(char *)(plVar1[1] + 0x30) == '\x01')) {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  if ((plVar1[1] == 0) || (*(char *)(plVar1[1] + 0x30) == '\x01')) {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  if ((plVar1[1] != 0) && (*(char *)(plVar1[1] + 0x30) != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147fe8ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
  return;
}



// FUNCTION 147fe8ae4 FUN_147fe8ae4 body=501 status=ok
// SIG undefined FUN_147fe8ae4(void)

/* WARNING: Removing unreachable block (ram,0x000147fe8b7b) */
/* WARNING: Removing unreachable block (ram,0x000147fe8b85) */
/* WARNING: Removing unreachable block (ram,0x000147fe8b97) */
/* WARNING: Removing unreachable block (ram,0x000147fe8bdf) */
/* WARNING: Removing unreachable block (ram,0x000147fe8be9) */
/* WARNING: Removing unreachable block (ram,0x000147fe8bfb) */

void FUN_147fe8ae4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    lVar4 = 0x38;
    break;
  case 1:
    local_28 = 0;
    local_38 = *param_2;
    plStack_30 = (longlong *)param_2[1];
    if (plStack_30 == (longlong *)0x0) {
      plStack_30 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    lVar4 = param_2[2];
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = param_2[2];
      }
    }
    local_28 = lVar4;
    FUN_147fd020c(*(undefined8 *)(param_1 + 0x40),&local_38);
    goto LAB_147fe8c43;
  case 2:
    lVar4 = 0x48;
    break;
  case 3:
    lVar4 = 0x50;
    break;
  default:
    goto switchD_147fe8b1c_default;
  }
  lVar4 = *(longlong *)(param_1 + lVar4);
  if (lVar4 != 0) {
    local_28 = 0;
    local_38 = *param_2;
    plStack_30 = (longlong *)param_2[1];
    if (plStack_30 == (longlong *)0x0) {
      plStack_30 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    lVar5 = param_2[2];
    if (DAT_14c950c29 == '\x01') {
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar5 = param_2[2];
      }
    }
    local_28 = lVar5;
    FUN_147fd1918(lVar4,&local_38);
LAB_147fe8c43:
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
switchD_147fe8b1c_default:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe8cda FUN_147fe8cda body=499 status=ok
// SIG undefined FUN_147fe8cda(void)

/* WARNING: Removing unreachable block (ram,0x000147fe8d71) */
/* WARNING: Removing unreachable block (ram,0x000147fe8d7b) */
/* WARNING: Removing unreachable block (ram,0x000147fe8d8d) */

void FUN_147fe8cda(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    lVar6 = 0x38;
    break;
  case 1:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    local_28 = param_2[2];
    if (DAT_14c950c29 == '\x01') {
      if (local_28 == 0) {
        local_28 = 0;
      }
      else {
        FUN_1456cec3c();
        local_28 = param_2[2];
      }
    }
    plVar2 = plStack_30;
    local_38 = *param_2;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 == (longlong *)0x0) {
      plStack_30 = (longlong *)0x0;
      plVar4 = plStack_30;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          puVar5 = (undefined8 *)*plStack_30;
          plStack_30 = plVar4;
          (*(code *)*puVar5)(plVar2);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          plVar4 = plStack_30;
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            plVar4 = plStack_30;
          }
        }
      }
    }
    plStack_30 = plVar4;
    FUN_147fd0e3a(*(undefined8 *)(param_1 + 0x40),&local_38);
    goto LAB_147fe8e4c;
  case 2:
    lVar6 = 0x48;
    break;
  case 3:
    lVar6 = 0x50;
    break;
  default:
    goto switchD_147fe8d12_default;
  }
  lVar6 = *(longlong *)(param_1 + lVar6);
  if (lVar6 != 0) {
    local_28 = 0;
    local_38 = *param_2;
    plStack_30 = (longlong *)param_2[1];
    if (plStack_30 == (longlong *)0x0) {
      plStack_30 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    lVar7 = param_2[2];
    if (DAT_14c950c29 == '\x01') {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar7 = param_2[2];
      }
    }
    local_28 = lVar7;
    FUN_147fd1b34(lVar6,&local_38);
LAB_147fe8e4c:
    plVar4 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
switchD_147fe8d12_default:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe8ece FUN_147fe8ece body=172 status=ok
// SIG undefined FUN_147fe8ece(void)

void FUN_147fe8ece(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147fdae54(param_3,*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  local_48 = *(undefined8 *)(param_2 + 0x28);
  local_40 = &local_48;
  FUN_148002a28(param_3 + 0x10,&local_34);
  lVar2 = *(longlong *)(param_3 + 0x10);
  *(undefined4 *)(lVar2 + 8 + (longlong)local_34 * 0x18) = *(undefined4 *)(param_3 + 8);
  FUN_147fdae98(param_3,uVar1);
  *(undefined4 *)(lVar2 + 0xc + (longlong)local_34 * 0x18) = *(undefined4 *)(param_3 + 8);
  FUN_147fdae98(param_3,*(undefined8 *)(param_1 + 0x48));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fe8f7c FUN_147fe8f7c body=449 status=ok
// SIG undefined FUN_147fe8f7c(void)

void FUN_147fe8f7c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = *(longlong **)(param_1 + 0x38);
  local_c8 = param_1;
  if ((plVar1[1] == 0) || (*(char *)(plVar1[1] + 0x30) == '\x01')) {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
  }
  local_b0 = *(undefined8 *)(param_2 + 0x40);
  plVar1 = *(longlong **)(param_2 + 0x48);
  local_d0 = (undefined8 *)(param_3 + 0x88);
  local_78 = 0;
  local_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_c0 = local_d0;
  local_b8 = param_2;
  FUN_147fdae54(&local_a8,plVar1);
  lVar2 = local_a8;
  lVar4 = (longlong)(int)uStack_a0;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (((*(byte *)(plVar3 + 2) & 1) != 0) &&
         ((plVar3[1] == 0 || (*(char *)(plVar3[1] + 0x30) == '\x01')))) {
        (**(code **)(*plVar3 + 0x38))(plVar3,&local_b8,&local_c0);
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 != lVar5);
  }
  FUN_147fd6aaa(&local_a8);
  lVar2 = *(longlong *)(param_2 + 0x28);
  FUN_147fdc056(param_3,lVar2 + 0x40,1);
  FUN_147fe7e0c(local_d0,lVar2 + 200,3);
  if ((plVar1[1] == 0) || (*(char *)(plVar1[1] + 0x30) == '\x01')) {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
  }
  plVar1 = *(longlong **)(local_c8 + 0x48);
  if ((plVar1[1] == 0) || (*(char *)(plVar1[1] + 0x30) == '\x01')) {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
  }
  *(undefined1 *)(param_3 + 0xad1) = 1;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fe913e FUN_147fe913e body=293 status=ok
// SIG undefined FUN_147fe913e(void)

void FUN_147fe913e(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong lStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_2 & 0xfffffffd) != 0) goto LAB_147fe915b;
  local_28 = 0;
  lStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_147fd95c2(&local_48,param_2 + 4);
  lVar6 = *(longlong *)(param_2 + 0xe);
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(param_2 + 0xe);
    }
  }
  if (*param_2 == 2) {
    local_50 = 1;
  }
  else if (*param_2 == 0) {
    local_50 = 0;
  }
  lVar3 = *(longlong *)(param_2 + 2);
  if (lVar3 == *(longlong *)(param_1 + 0x38)) {
    uVar5 = 0;
LAB_147fe91e8:
    local_4c = uVar5;
  }
  else {
    uVar5 = 1;
    if (((lVar3 == *(longlong *)(param_1 + 0x40)) ||
        (uVar5 = 2, lVar3 == *(longlong *)(param_1 + 0x48))) ||
       (uVar5 = 3, lVar3 == *(longlong *)(param_1 + 0x50))) goto LAB_147fe91e8;
  }
  lStack_20 = lVar6;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_147fe73a2(*(longlong *)(param_1 + 0x18),&local_50);
  }
  FUN_148010a2a(param_1 + 0x20,&local_50);
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_147fe915b:
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fe9264 FUN_147fe9264 body=7491 status=ok
// SIG undefined FUN_147fe9264(void)

void FUN_147fe9264(byte *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  
  bVar9 = *param_2;
  if ((bVar9 & 1) != 0) {
    *param_1 = *param_1 | 1;
    param_1[0x37] = param_2[0x37];
    param_1[0x8c0] = 1;
    bVar9 = *param_2;
  }
  if ((bVar9 & 2) != 0) {
    *param_1 = *param_1 | 2;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    param_1[0x8c0] = 1;
    bVar9 = *param_2;
  }
  if ((bVar9 & 4) != 0) {
    *param_1 = *param_1 | 4;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    param_1[0x8c0] = 1;
    bVar9 = *param_2;
  }
  if ((bVar9 & 8) != 0) {
    *param_1 = *param_1 | 8;
    uVar1 = *(undefined4 *)(param_2 + 0x44);
    uVar2 = *(undefined4 *)(param_2 + 0x48);
    uVar3 = *(undefined4 *)(param_2 + 0x4c);
    uVar4 = *(undefined4 *)(param_2 + 0x50);
    uVar5 = *(undefined4 *)(param_2 + 0x54);
    uVar6 = *(undefined4 *)(param_2 + 0x58);
    uVar7 = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    *(undefined4 *)(param_1 + 0x5c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = *param_2;
  }
  if ((bVar9 & 0x10) != 0) {
    *param_1 = *param_1 | 0x10;
    uVar1 = *(undefined4 *)(param_2 + 100);
    uVar2 = *(undefined4 *)(param_2 + 0x68);
    uVar3 = *(undefined4 *)(param_2 + 0x6c);
    uVar4 = *(undefined4 *)(param_2 + 0x70);
    uVar5 = *(undefined4 *)(param_2 + 0x74);
    uVar6 = *(undefined4 *)(param_2 + 0x78);
    uVar7 = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined4 *)(param_1 + 0x70) = uVar4;
    *(undefined4 *)(param_1 + 0x74) = uVar5;
    *(undefined4 *)(param_1 + 0x78) = uVar6;
    *(undefined4 *)(param_1 + 0x7c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = *param_2;
  }
  if ((bVar9 & 0x20) != 0) {
    *param_1 = *param_1 | 0x20;
    uVar1 = *(undefined4 *)(param_2 + 0x84);
    uVar2 = *(undefined4 *)(param_2 + 0x88);
    uVar3 = *(undefined4 *)(param_2 + 0x8c);
    uVar4 = *(undefined4 *)(param_2 + 0x90);
    uVar5 = *(undefined4 *)(param_2 + 0x94);
    uVar6 = *(undefined4 *)(param_2 + 0x98);
    uVar7 = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x84) = uVar1;
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    *(undefined4 *)(param_1 + 0x8c) = uVar3;
    *(undefined4 *)(param_1 + 0x90) = uVar4;
    *(undefined4 *)(param_1 + 0x94) = uVar5;
    *(undefined4 *)(param_1 + 0x98) = uVar6;
    *(undefined4 *)(param_1 + 0x9c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = *param_2;
  }
  if ((bVar9 & 0x40) != 0) {
    *param_1 = *param_1 | 0x40;
    uVar1 = *(undefined4 *)(param_2 + 0xa4);
    uVar2 = *(undefined4 *)(param_2 + 0xa8);
    uVar3 = *(undefined4 *)(param_2 + 0xac);
    uVar4 = *(undefined4 *)(param_2 + 0xb0);
    uVar5 = *(undefined4 *)(param_2 + 0xb4);
    uVar6 = *(undefined4 *)(param_2 + 0xb8);
    uVar7 = *(undefined4 *)(param_2 + 0xbc);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(param_1 + 0xa4) = uVar1;
    *(undefined4 *)(param_1 + 0xa8) = uVar2;
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    *(undefined4 *)(param_1 + 0xb0) = uVar4;
    *(undefined4 *)(param_1 + 0xb4) = uVar5;
    *(undefined4 *)(param_1 + 0xb8) = uVar6;
    *(undefined4 *)(param_1 + 0xbc) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = *param_2;
  }
  if ((char)bVar9 < '\0') {
    *param_1 = *param_1 | 0x80;
    uVar1 = *(undefined4 *)(param_2 + 0xc4);
    uVar2 = *(undefined4 *)(param_2 + 200);
    uVar3 = *(undefined4 *)(param_2 + 0xcc);
    uVar4 = *(undefined4 *)(param_2 + 0xd0);
    uVar5 = *(undefined4 *)(param_2 + 0xd4);
    uVar6 = *(undefined4 *)(param_2 + 0xd8);
    uVar7 = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = uVar1;
    *(undefined4 *)(param_1 + 200) = uVar2;
    *(undefined4 *)(param_1 + 0xcc) = uVar3;
    *(undefined4 *)(param_1 + 0xd0) = uVar4;
    *(undefined4 *)(param_1 + 0xd4) = uVar5;
    *(undefined4 *)(param_1 + 0xd8) = uVar6;
    *(undefined4 *)(param_1 + 0xdc) = uVar7;
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[1];
  if ((bVar9 & 1) != 0) {
    param_1[1] = param_1[1] | 1;
    uVar1 = *(undefined4 *)(param_2 + 0xe4);
    uVar2 = *(undefined4 *)(param_2 + 0xe8);
    uVar3 = *(undefined4 *)(param_2 + 0xec);
    uVar4 = *(undefined4 *)(param_2 + 0xf0);
    uVar5 = *(undefined4 *)(param_2 + 0xf4);
    uVar6 = *(undefined4 *)(param_2 + 0xf8);
    uVar7 = *(undefined4 *)(param_2 + 0xfc);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = uVar1;
    *(undefined4 *)(param_1 + 0xe8) = uVar2;
    *(undefined4 *)(param_1 + 0xec) = uVar3;
    *(undefined4 *)(param_1 + 0xf0) = uVar4;
    *(undefined4 *)(param_1 + 0xf4) = uVar5;
    *(undefined4 *)(param_1 + 0xf8) = uVar6;
    *(undefined4 *)(param_1 + 0xfc) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[1];
  }
  if ((bVar9 & 2) != 0) {
    param_1[1] = param_1[1] | 2;
    uVar1 = *(undefined4 *)(param_2 + 0x104);
    uVar2 = *(undefined4 *)(param_2 + 0x108);
    uVar3 = *(undefined4 *)(param_2 + 0x10c);
    uVar4 = *(undefined4 *)(param_2 + 0x110);
    uVar5 = *(undefined4 *)(param_2 + 0x114);
    uVar6 = *(undefined4 *)(param_2 + 0x118);
    uVar7 = *(undefined4 *)(param_2 + 0x11c);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = uVar1;
    *(undefined4 *)(param_1 + 0x108) = uVar2;
    *(undefined4 *)(param_1 + 0x10c) = uVar3;
    *(undefined4 *)(param_1 + 0x110) = uVar4;
    *(undefined4 *)(param_1 + 0x114) = uVar5;
    *(undefined4 *)(param_1 + 0x118) = uVar6;
    *(undefined4 *)(param_1 + 0x11c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[1];
  }
  if ((bVar9 & 4) != 0) {
    param_1[1] = param_1[1] | 4;
    uVar1 = *(undefined4 *)(param_2 + 0x124);
    uVar2 = *(undefined4 *)(param_2 + 0x128);
    uVar3 = *(undefined4 *)(param_2 + 300);
    uVar4 = *(undefined4 *)(param_2 + 0x130);
    uVar5 = *(undefined4 *)(param_2 + 0x134);
    uVar6 = *(undefined4 *)(param_2 + 0x138);
    uVar7 = *(undefined4 *)(param_2 + 0x13c);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x124) = uVar1;
    *(undefined4 *)(param_1 + 0x128) = uVar2;
    *(undefined4 *)(param_1 + 300) = uVar3;
    *(undefined4 *)(param_1 + 0x130) = uVar4;
    *(undefined4 *)(param_1 + 0x134) = uVar5;
    *(undefined4 *)(param_1 + 0x138) = uVar6;
    *(undefined4 *)(param_1 + 0x13c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[1];
  }
  if ((bVar9 & 8) != 0) {
    param_1[1] = param_1[1] | 8;
    uVar1 = *(undefined4 *)(param_2 + 0x144);
    uVar2 = *(undefined4 *)(param_2 + 0x148);
    uVar3 = *(undefined4 *)(param_2 + 0x14c);
    uVar4 = *(undefined4 *)(param_2 + 0x150);
    uVar5 = *(undefined4 *)(param_2 + 0x154);
    uVar6 = *(undefined4 *)(param_2 + 0x158);
    uVar7 = *(undefined4 *)(param_2 + 0x15c);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    *(undefined4 *)(param_1 + 0x144) = uVar1;
    *(undefined4 *)(param_1 + 0x148) = uVar2;
    *(undefined4 *)(param_1 + 0x14c) = uVar3;
    *(undefined4 *)(param_1 + 0x150) = uVar4;
    *(undefined4 *)(param_1 + 0x154) = uVar5;
    *(undefined4 *)(param_1 + 0x158) = uVar6;
    *(undefined4 *)(param_1 + 0x15c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[1];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[1] = param_1[1] | 0x10;
    uVar1 = *(undefined4 *)(param_2 + 0x164);
    uVar2 = *(undefined4 *)(param_2 + 0x168);
    uVar3 = *(undefined4 *)(param_2 + 0x16c);
    uVar4 = *(undefined4 *)(param_2 + 0x170);
    uVar5 = *(undefined4 *)(param_2 + 0x174);
    uVar6 = *(undefined4 *)(param_2 + 0x178);
    uVar7 = *(undefined4 *)(param_2 + 0x17c);
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x164) = uVar1;
    *(undefined4 *)(param_1 + 0x168) = uVar2;
    *(undefined4 *)(param_1 + 0x16c) = uVar3;
    *(undefined4 *)(param_1 + 0x170) = uVar4;
    *(undefined4 *)(param_1 + 0x174) = uVar5;
    *(undefined4 *)(param_1 + 0x178) = uVar6;
    *(undefined4 *)(param_1 + 0x17c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[1];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[1] = param_1[1] | 0x20;
    uVar1 = *(undefined4 *)(param_2 + 0x184);
    uVar2 = *(undefined4 *)(param_2 + 0x188);
    uVar3 = *(undefined4 *)(param_2 + 0x18c);
    uVar4 = *(undefined4 *)(param_2 + 400);
    uVar5 = *(undefined4 *)(param_2 + 0x194);
    uVar6 = *(undefined4 *)(param_2 + 0x198);
    uVar7 = *(undefined4 *)(param_2 + 0x19c);
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
    *(undefined4 *)(param_1 + 0x184) = uVar1;
    *(undefined4 *)(param_1 + 0x188) = uVar2;
    *(undefined4 *)(param_1 + 0x18c) = uVar3;
    *(undefined4 *)(param_1 + 400) = uVar4;
    *(undefined4 *)(param_1 + 0x194) = uVar5;
    *(undefined4 *)(param_1 + 0x198) = uVar6;
    *(undefined4 *)(param_1 + 0x19c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[1];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[1] = param_1[1] | 0x40;
    uVar1 = *(undefined4 *)(param_2 + 0x1a4);
    uVar2 = *(undefined4 *)(param_2 + 0x1a8);
    uVar3 = *(undefined4 *)(param_2 + 0x1ac);
    uVar4 = *(undefined4 *)(param_2 + 0x1b0);
    uVar5 = *(undefined4 *)(param_2 + 0x1b4);
    uVar6 = *(undefined4 *)(param_2 + 0x1b8);
    uVar7 = *(undefined4 *)(param_2 + 0x1bc);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
    *(undefined4 *)(param_1 + 0x1a8) = uVar2;
    *(undefined4 *)(param_1 + 0x1ac) = uVar3;
    *(undefined4 *)(param_1 + 0x1b0) = uVar4;
    *(undefined4 *)(param_1 + 0x1b4) = uVar5;
    *(undefined4 *)(param_1 + 0x1b8) = uVar6;
    *(undefined4 *)(param_1 + 0x1bc) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[1];
  }
  if ((char)bVar9 < '\0') {
    param_1[1] = param_1[1] | 0x80;
    uVar1 = *(undefined4 *)(param_2 + 0x1c4);
    uVar2 = *(undefined4 *)(param_2 + 0x1c8);
    uVar3 = *(undefined4 *)(param_2 + 0x1cc);
    uVar4 = *(undefined4 *)(param_2 + 0x1d0);
    uVar5 = *(undefined4 *)(param_2 + 0x1d4);
    uVar6 = *(undefined4 *)(param_2 + 0x1d8);
    uVar7 = *(undefined4 *)(param_2 + 0x1dc);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
    *(undefined4 *)(param_1 + 0x1c4) = uVar1;
    *(undefined4 *)(param_1 + 0x1c8) = uVar2;
    *(undefined4 *)(param_1 + 0x1cc) = uVar3;
    *(undefined4 *)(param_1 + 0x1d0) = uVar4;
    *(undefined4 *)(param_1 + 0x1d4) = uVar5;
    *(undefined4 *)(param_1 + 0x1d8) = uVar6;
    *(undefined4 *)(param_1 + 0x1dc) = uVar7;
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[2];
  if ((bVar9 & 1) != 0) {
    param_1[2] = param_1[2] | 1;
    uVar1 = *(undefined4 *)(param_2 + 0x1e4);
    uVar2 = *(undefined4 *)(param_2 + 0x1e8);
    uVar3 = *(undefined4 *)(param_2 + 0x1ec);
    uVar4 = *(undefined4 *)(param_2 + 0x1f0);
    uVar5 = *(undefined4 *)(param_2 + 500);
    uVar6 = *(undefined4 *)(param_2 + 0x1f8);
    uVar7 = *(undefined4 *)(param_2 + 0x1fc);
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
    *(undefined4 *)(param_1 + 0x1e4) = uVar1;
    *(undefined4 *)(param_1 + 0x1e8) = uVar2;
    *(undefined4 *)(param_1 + 0x1ec) = uVar3;
    *(undefined4 *)(param_1 + 0x1f0) = uVar4;
    *(undefined4 *)(param_1 + 500) = uVar5;
    *(undefined4 *)(param_1 + 0x1f8) = uVar6;
    *(undefined4 *)(param_1 + 0x1fc) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[2];
  }
  if ((bVar9 & 2) != 0) {
    param_1[2] = param_1[2] | 2;
    uVar1 = *(undefined4 *)(param_2 + 0x204);
    uVar2 = *(undefined4 *)(param_2 + 0x208);
    uVar3 = *(undefined4 *)(param_2 + 0x20c);
    uVar4 = *(undefined4 *)(param_2 + 0x210);
    uVar5 = *(undefined4 *)(param_2 + 0x214);
    uVar6 = *(undefined4 *)(param_2 + 0x218);
    uVar7 = *(undefined4 *)(param_2 + 0x21c);
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
    *(undefined4 *)(param_1 + 0x204) = uVar1;
    *(undefined4 *)(param_1 + 0x208) = uVar2;
    *(undefined4 *)(param_1 + 0x20c) = uVar3;
    *(undefined4 *)(param_1 + 0x210) = uVar4;
    *(undefined4 *)(param_1 + 0x214) = uVar5;
    *(undefined4 *)(param_1 + 0x218) = uVar6;
    *(undefined4 *)(param_1 + 0x21c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[2];
  }
  if ((bVar9 & 4) != 0) {
    param_1[2] = param_1[2] | 4;
    uVar1 = *(undefined4 *)(param_2 + 0x224);
    uVar2 = *(undefined4 *)(param_2 + 0x228);
    uVar3 = *(undefined4 *)(param_2 + 0x22c);
    uVar4 = *(undefined4 *)(param_2 + 0x230);
    uVar5 = *(undefined4 *)(param_2 + 0x234);
    uVar6 = *(undefined4 *)(param_2 + 0x238);
    uVar7 = *(undefined4 *)(param_2 + 0x23c);
    *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
    *(undefined4 *)(param_1 + 0x224) = uVar1;
    *(undefined4 *)(param_1 + 0x228) = uVar2;
    *(undefined4 *)(param_1 + 0x22c) = uVar3;
    *(undefined4 *)(param_1 + 0x230) = uVar4;
    *(undefined4 *)(param_1 + 0x234) = uVar5;
    *(undefined4 *)(param_1 + 0x238) = uVar6;
    *(undefined4 *)(param_1 + 0x23c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[2];
  }
  if ((bVar9 & 8) != 0) {
    param_1[2] = param_1[2] | 8;
    uVar1 = *(undefined4 *)(param_2 + 0x244);
    uVar2 = *(undefined4 *)(param_2 + 0x248);
    uVar3 = *(undefined4 *)(param_2 + 0x24c);
    uVar4 = *(undefined4 *)(param_2 + 0x250);
    uVar5 = *(undefined4 *)(param_2 + 0x254);
    uVar6 = *(undefined4 *)(param_2 + 600);
    uVar7 = *(undefined4 *)(param_2 + 0x25c);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
    *(undefined4 *)(param_1 + 0x244) = uVar1;
    *(undefined4 *)(param_1 + 0x248) = uVar2;
    *(undefined4 *)(param_1 + 0x24c) = uVar3;
    *(undefined4 *)(param_1 + 0x250) = uVar4;
    *(undefined4 *)(param_1 + 0x254) = uVar5;
    *(undefined4 *)(param_1 + 600) = uVar6;
    *(undefined4 *)(param_1 + 0x25c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[2];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[2] = param_1[2] | 0x10;
    uVar1 = *(undefined4 *)(param_2 + 0x264);
    uVar2 = *(undefined4 *)(param_2 + 0x268);
    uVar3 = *(undefined4 *)(param_2 + 0x26c);
    uVar4 = *(undefined4 *)(param_2 + 0x270);
    uVar5 = *(undefined4 *)(param_2 + 0x274);
    uVar6 = *(undefined4 *)(param_2 + 0x278);
    uVar7 = *(undefined4 *)(param_2 + 0x27c);
    *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
    *(undefined4 *)(param_1 + 0x264) = uVar1;
    *(undefined4 *)(param_1 + 0x268) = uVar2;
    *(undefined4 *)(param_1 + 0x26c) = uVar3;
    *(undefined4 *)(param_1 + 0x270) = uVar4;
    *(undefined4 *)(param_1 + 0x274) = uVar5;
    *(undefined4 *)(param_1 + 0x278) = uVar6;
    *(undefined4 *)(param_1 + 0x27c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[2];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[2] = param_1[2] | 0x20;
    uVar1 = *(undefined4 *)(param_2 + 0x284);
    uVar2 = *(undefined4 *)(param_2 + 0x288);
    uVar3 = *(undefined4 *)(param_2 + 0x28c);
    uVar4 = *(undefined4 *)(param_2 + 0x290);
    uVar5 = *(undefined4 *)(param_2 + 0x294);
    uVar6 = *(undefined4 *)(param_2 + 0x298);
    uVar7 = *(undefined4 *)(param_2 + 0x29c);
    *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
    *(undefined4 *)(param_1 + 0x284) = uVar1;
    *(undefined4 *)(param_1 + 0x288) = uVar2;
    *(undefined4 *)(param_1 + 0x28c) = uVar3;
    *(undefined4 *)(param_1 + 0x290) = uVar4;
    *(undefined4 *)(param_1 + 0x294) = uVar5;
    *(undefined4 *)(param_1 + 0x298) = uVar6;
    *(undefined4 *)(param_1 + 0x29c) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[2];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[2] = param_1[2] | 0x40;
    uVar1 = *(undefined4 *)(param_2 + 0x2a4);
    uVar2 = *(undefined4 *)(param_2 + 0x2a8);
    uVar3 = *(undefined4 *)(param_2 + 0x2ac);
    uVar4 = *(undefined4 *)(param_2 + 0x2b0);
    uVar5 = *(undefined4 *)(param_2 + 0x2b4);
    uVar6 = *(undefined4 *)(param_2 + 0x2b8);
    uVar7 = *(undefined4 *)(param_2 + 700);
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
    *(undefined4 *)(param_1 + 0x2a4) = uVar1;
    *(undefined4 *)(param_1 + 0x2a8) = uVar2;
    *(undefined4 *)(param_1 + 0x2ac) = uVar3;
    *(undefined4 *)(param_1 + 0x2b0) = uVar4;
    *(undefined4 *)(param_1 + 0x2b4) = uVar5;
    *(undefined4 *)(param_1 + 0x2b8) = uVar6;
    *(undefined4 *)(param_1 + 700) = uVar7;
    param_1[0x8c0] = 1;
    bVar9 = param_2[2];
  }
  if ((char)bVar9 < '\0') {
    param_1[2] = param_1[2] | 0x80;
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[3];
  if ((bVar9 & 1) != 0) {
    param_1[3] = param_1[3] | 1;
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
    param_1[0x8c0] = 1;
    bVar9 = param_2[3];
  }
  if ((bVar9 & 2) != 0) {
    param_1[3] = param_1[3] | 2;
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x2c4);
    param_1[0x8c0] = 1;
    bVar9 = param_2[3];
  }
  if ((bVar9 & 4) != 0) {
    param_1[3] = param_1[3] | 4;
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x2cc);
    param_1[0x8c0] = 1;
    bVar9 = param_2[3];
  }
  if ((bVar9 & 8) != 0) {
    param_1[3] = param_1[3] | 8;
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
    param_1[0x8c0] = 1;
    bVar9 = param_2[3];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[3] = param_1[3] | 0x10;
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
    param_1[0x8c0] = 1;
    bVar9 = param_2[3];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[3] = param_1[3] | 0x20;
    *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[3];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[3] = param_1[3] | 0x40;
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_2 + 0x2dc);
    param_1[0x8c0] = 1;
    bVar9 = param_2[3];
  }
  if ((char)bVar9 < '\0') {
    param_1[3] = param_1[3] | 0x80;
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[4];
  if ((bVar9 & 1) != 0) {
    param_1[4] = param_1[4] | 1;
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_2 + 0x2e4);
    param_1[0x8c0] = 1;
    bVar9 = param_2[4];
  }
  if ((bVar9 & 2) != 0) {
    param_1[4] = param_1[4] | 2;
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[4];
  }
  if ((bVar9 & 4) != 0) {
    param_1[4] = param_1[4] | 4;
    uVar1 = *(undefined4 *)(param_2 + 0x2f0);
    uVar2 = *(undefined4 *)(param_2 + 0x2f4);
    uVar3 = *(undefined4 *)(param_2 + 0x2f8);
    *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
    *(undefined4 *)(param_1 + 0x2f0) = uVar1;
    *(undefined4 *)(param_1 + 0x2f4) = uVar2;
    *(undefined4 *)(param_1 + 0x2f8) = uVar3;
    param_1[0x8c0] = 1;
    bVar9 = param_2[4];
  }
  if ((bVar9 & 8) != 0) {
    param_1[4] = param_1[4] | 8;
    *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
    param_1[0x8c0] = 1;
    bVar9 = param_2[4];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[4] = param_1[4] | 0x10;
    *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[5];
  if ((bVar9 & 2) != 0) {
    param_1[5] = param_1[5] | 2;
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x304);
    param_1[0x8c0] = 1;
    bVar9 = param_2[5];
  }
  if ((bVar9 & 4) != 0) {
    param_1[5] = param_1[5] | 4;
    *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
    param_1[0x8c0] = 1;
    bVar9 = param_2[5];
  }
  if ((bVar9 & 8) != 0) {
    param_1[5] = param_1[5] | 8;
    uVar1 = *(undefined4 *)(param_2 + 0x32c);
    uVar2 = *(undefined4 *)(param_2 + 0x330);
    uVar3 = *(undefined4 *)(param_2 + 0x334);
    *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
    *(undefined4 *)(param_1 + 0x32c) = uVar1;
    *(undefined4 *)(param_1 + 0x330) = uVar2;
    *(undefined4 *)(param_1 + 0x334) = uVar3;
    param_1[0x8c0] = 1;
  }
  if ((char)param_2[6] < '\0') {
    param_1[6] = param_1[6] | 0x80;
    *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_2 + 0x30c);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[5];
  if ((bVar9 & 0x10) != 0) {
    param_1[5] = param_1[5] | 0x10;
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
    param_1[0x8c0] = 1;
    bVar9 = param_2[5];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[5] = param_1[5] | 0x40;
    uVar1 = *(undefined4 *)(param_2 + 0x33c);
    uVar2 = *(undefined4 *)(param_2 + 0x340);
    uVar3 = *(undefined4 *)(param_2 + 0x344);
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
    *(undefined4 *)(param_1 + 0x33c) = uVar1;
    *(undefined4 *)(param_1 + 0x340) = uVar2;
    *(undefined4 *)(param_1 + 0x344) = uVar3;
    param_1[0x8c0] = 1;
    bVar9 = param_2[5];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[5] = param_1[5] | 0x20;
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_2 + 0x314);
    param_1[0x8c0] = 1;
    bVar9 = param_2[5];
  }
  if ((char)bVar9 < '\0') {
    param_1[5] = param_1[5] | 0x80;
    uVar1 = *(undefined4 *)(param_2 + 0x34c);
    uVar2 = *(undefined4 *)(param_2 + 0x350);
    uVar3 = *(undefined4 *)(param_2 + 0x354);
    *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x348);
    *(undefined4 *)(param_1 + 0x34c) = uVar1;
    *(undefined4 *)(param_1 + 0x350) = uVar2;
    *(undefined4 *)(param_1 + 0x354) = uVar3;
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[6];
  if ((bVar9 & 1) != 0) {
    param_1[6] = param_1[6] | 1;
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
    param_1[0x8c0] = 1;
    bVar9 = param_2[6];
  }
  if ((bVar9 & 2) != 0) {
    param_1[6] = param_1[6] | 2;
    uVar1 = *(undefined4 *)(param_2 + 0x35c);
    uVar2 = *(undefined4 *)(param_2 + 0x360);
    uVar3 = *(undefined4 *)(param_2 + 0x364);
    *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_2 + 0x358);
    *(undefined4 *)(param_1 + 0x35c) = uVar1;
    *(undefined4 *)(param_1 + 0x360) = uVar2;
    *(undefined4 *)(param_1 + 0x364) = uVar3;
    param_1[0x8c0] = 1;
    bVar9 = param_2[6];
  }
  if ((bVar9 & 4) != 0) {
    param_1[6] = param_1[6] | 4;
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_2 + 0x31c);
    param_1[0x8c0] = 1;
    bVar9 = param_2[6];
  }
  if ((bVar9 & 8) != 0) {
    param_1[6] = param_1[6] | 8;
    uVar1 = *(undefined4 *)(param_2 + 0x36c);
    uVar2 = *(undefined4 *)(param_2 + 0x370);
    uVar3 = *(undefined4 *)(param_2 + 0x374);
    *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x368);
    *(undefined4 *)(param_1 + 0x36c) = uVar1;
    *(undefined4 *)(param_1 + 0x370) = uVar2;
    *(undefined4 *)(param_1 + 0x374) = uVar3;
    param_1[0x8c0] = 1;
    bVar9 = param_2[6];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[6] = param_1[6] | 0x10;
    *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
    param_1[0x8c0] = 1;
    bVar9 = param_2[6];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[6] = param_1[6] | 0x20;
    uVar1 = *(undefined4 *)(param_2 + 0x37c);
    uVar2 = *(undefined4 *)(param_2 + 0x380);
    uVar3 = *(undefined4 *)(param_2 + 900);
    *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x378);
    *(undefined4 *)(param_1 + 0x37c) = uVar1;
    *(undefined4 *)(param_1 + 0x380) = uVar2;
    *(undefined4 *)(param_1 + 900) = uVar3;
    param_1[0x8c0] = 1;
    bVar9 = param_2[6];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[6] = param_1[6] | 0x40;
    *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_2 + 0x324);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[8];
  if ((bVar9 & 2) != 0) {
    param_1[8] = param_1[8] | 2;
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3c0);
    param_1[0x8c0] = 1;
    bVar9 = param_2[8];
  }
  if ((bVar9 & 4) != 0) {
    param_1[8] = param_1[8] | 4;
    uVar1 = *(undefined4 *)(param_2 + 0x3c8);
    uVar2 = *(undefined4 *)(param_2 + 0x3cc);
    uVar3 = *(undefined4 *)(param_2 + 0x3d0);
    *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_2 + 0x3c4);
    *(undefined4 *)(param_1 + 0x3c8) = uVar1;
    *(undefined4 *)(param_1 + 0x3cc) = uVar2;
    *(undefined4 *)(param_1 + 0x3d0) = uVar3;
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[7];
  if ((bVar9 & 2) != 0) {
    param_1[7] = param_1[7] | 2;
    *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_2 + 0x388);
    param_1[0x8c0] = 1;
    bVar9 = param_2[7];
  }
  if ((bVar9 & 4) != 0) {
    param_1[7] = param_1[7] | 4;
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_2 + 0x38c);
    param_1[0x8c0] = 1;
    bVar9 = param_2[7];
  }
  if ((bVar9 & 8) != 0) {
    param_1[7] = param_1[7] | 8;
    uVar1 = *(undefined4 *)(param_2 + 0x39c);
    uVar2 = *(undefined4 *)(param_2 + 0x3a0);
    uVar3 = *(undefined4 *)(param_2 + 0x3a4);
    *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_2 + 0x398);
    *(undefined4 *)(param_1 + 0x39c) = uVar1;
    *(undefined4 *)(param_1 + 0x3a0) = uVar2;
    *(undefined4 *)(param_1 + 0x3a4) = uVar3;
    param_1[0x8c0] = 1;
    bVar9 = param_2[7];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[7] = param_1[7] | 0x20;
    *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[7];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[7] = param_1[7] | 0x40;
    *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_2 + 0x3ac);
    param_1[0x8c0] = 1;
    bVar9 = param_2[7];
  }
  if ((char)bVar9 < '\0') {
    param_1[7] = param_1[7] | 0x80;
    *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x3b0);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[4];
  if ((char)bVar9 < '\0') {
    param_1[4] = param_1[4] | 0x80;
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
    param_1[0x8c0] = 1;
    bVar9 = param_2[4];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[4] = param_1[4] | 0x40;
    uVar1 = *(undefined4 *)(param_2 + 0x44c);
    uVar2 = *(undefined4 *)(param_2 + 0x450);
    uVar3 = *(undefined4 *)(param_2 + 0x454);
    *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_2 + 0x448);
    *(undefined4 *)(param_1 + 0x44c) = uVar1;
    *(undefined4 *)(param_1 + 0x450) = uVar2;
    *(undefined4 *)(param_1 + 0x454) = uVar3;
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[8];
  if ((bVar9 & 0x10) != 0) {
    param_1[8] = param_1[8] | 0x10;
    *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
    param_1[0x8c0] = 1;
    bVar9 = param_2[8];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[8] = param_1[8] | 0x20;
    *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x46c);
    param_1[0x8c0] = 1;
    bVar9 = param_2[8];
  }
  if ((char)bVar9 < '\0') {
    param_1[8] = param_1[8] | 0x80;
    *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[9];
  if ((bVar9 & 1) != 0) {
    param_1[9] = param_1[9] | 1;
    *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_2 + 0x4a4);
    param_1[0x8c0] = 1;
    bVar9 = param_2[9];
  }
  if ((bVar9 & 2) != 0) {
    param_1[9] = param_1[9] | 2;
    *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x4a8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[9];
  }
  if ((bVar9 & 4) != 0) {
    param_1[9] = param_1[9] | 4;
    *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_2 + 0x4ac);
    param_1[0x8c0] = 1;
    bVar9 = param_2[9];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[9] = param_1[9] | 0x10;
    *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x4b0);
    param_1[0x8c0] = 1;
    bVar9 = param_2[9];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[9] = param_1[9] | 0x20;
    *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_2 + 0x4b4);
    param_1[0x8c0] = 1;
    bVar9 = param_2[9];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[9] = param_1[9] | 0x40;
    *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_2 + 0x47c);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[10];
  if ((bVar9 & 4) != 0) {
    param_1[10] = param_1[10] | 4;
    *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_2 + 0x4b8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[10];
  }
  if ((bVar9 & 8) != 0) {
    param_1[10] = param_1[10] | 8;
    *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_2 + 0x4bc);
    param_1[0x8c0] = 1;
    bVar9 = param_2[10];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[10] = param_1[10] | 0x10;
    param_1[0x4c4] = param_2[0x4c4];
    param_1[0x8c0] = 1;
    bVar9 = param_2[10];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[10] = param_1[10] | 0x20;
    *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_2 + 0x4c8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[10];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[10] = param_1[10] | 0x40;
    *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_2 + 0x4cc);
    param_1[0x8c0] = 1;
    bVar9 = param_2[10];
  }
  if ((char)bVar9 < '\0') {
    param_1[10] = param_1[10] | 0x80;
    *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0xb];
  if ((bVar9 & 4) != 0) {
    param_1[0xb] = param_1[0xb] | 4;
    *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xb];
  }
  if ((bVar9 & 8) != 0) {
    param_1[0xb] = param_1[0xb] | 8;
    *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xb];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[0xb] = param_1[0xb] | 0x10;
    *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xb];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[0xb] = param_1[0xb] | 0x20;
    *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xb];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[0xb] = param_1[0xb] | 0x40;
    *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x4f8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xb];
  }
  if ((char)bVar9 < '\0') {
    param_1[0xb] = param_1[0xb] | 0x80;
    *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0xc];
  if ((bVar9 & 1) != 0) {
    param_1[0xc] = param_1[0xc] | 1;
    *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x500);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xc];
  }
  if ((bVar9 & 2) != 0) {
    param_1[0xc] = param_1[0xc] | 2;
    uVar1 = *(undefined4 *)(param_2 + 0x508);
    uVar2 = *(undefined4 *)(param_2 + 0x50c);
    uVar3 = *(undefined4 *)(param_2 + 0x510);
    *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_2 + 0x504);
    *(undefined4 *)(param_1 + 0x508) = uVar1;
    *(undefined4 *)(param_1 + 0x50c) = uVar2;
    *(undefined4 *)(param_1 + 0x510) = uVar3;
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xc];
  }
  if ((bVar9 & 8) != 0) {
    param_1[0xc] = param_1[0xc] | 8;
    *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_2 + 0x514);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xc];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[0xc] = param_1[0xc] | 0x20;
    *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_2 + 0x518);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xc];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[0xc] = param_1[0xc] | 0x40;
    *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_2 + 0x5a8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xc];
  }
  if ((char)bVar9 < '\0') {
    param_1[0xc] = param_1[0xc] | 0x80;
    *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_2 + 0x5ac);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0xd];
  if ((bVar9 & 4) != 0) {
    param_1[0xd] = param_1[0xd] | 4;
    *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_2 + 0x5b8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xd];
  }
  if ((bVar9 & 8) != 0) {
    param_1[0xd] = param_1[0xd] | 8;
    *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_2 + 0x5bc);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xd];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[0xd] = param_1[0xd] | 0x10;
    *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_2 + 0x5c0);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xd];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[0xd] = param_1[0xd] | 0x20;
    *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(param_2 + 0x5c4);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xd];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[0xd] = param_1[0xd] | 0x40;
    *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_2 + 0x5c8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xd];
  }
  if ((char)bVar9 < '\0') {
    param_1[0xd] = param_1[0xd] | 0x80;
    *(undefined4 *)(param_1 + 0x5cc) = *(undefined4 *)(param_2 + 0x5cc);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0xe];
  if ((bVar9 & 1) != 0) {
    param_1[0xe] = param_1[0xe] | 1;
    *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_2 + 0x5d0);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xe];
  }
  if ((bVar9 & 2) != 0) {
    param_1[0xe] = param_1[0xe] | 2;
    *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)(param_2 + 0x5d4);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xe];
  }
  if ((bVar9 & 8) != 0) {
    param_1[0xe] = param_1[0xe] | 8;
    *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_2 + 0x5e0);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xe];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[0xe] = param_1[0xe] | 0x10;
    *(undefined4 *)(param_1 + 0x5e4) = *(undefined4 *)(param_2 + 0x5e4);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xe];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[0xe] = param_1[0xe] | 0x20;
    *(undefined4 *)(param_1 + 0x5e8) = *(undefined4 *)(param_2 + 0x5e8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xe];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[0xe] = param_1[0xe] | 0x40;
    *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(param_2 + 0x5f0);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xe];
  }
  if ((char)bVar9 < '\0') {
    param_1[0xe] = param_1[0xe] | 0x80;
    *(undefined4 *)(param_1 + 0x5f4) = *(undefined4 *)(param_2 + 0x5f4);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0xf];
  if ((bVar9 & 1) != 0) {
    param_1[0xf] = param_1[0xf] | 1;
    *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(param_2 + 0x5f8);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xf];
  }
  if ((bVar9 & 4) != 0) {
    param_1[0xf] = param_1[0xf] | 4;
    *(undefined4 *)(param_1 + 0x5fc) = *(undefined4 *)(param_2 + 0x5fc);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xf];
  }
  if ((bVar9 & 8) != 0) {
    param_1[0xf] = param_1[0xf] | 8;
    *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(param_2 + 0x600);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xf];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[0xf] = param_1[0xf] | 0x10;
    *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)(param_2 + 0x604);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xf];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[0xf] = param_1[0xf] | 0x20;
    *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_2 + 0x608);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xf];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[0xf] = param_1[0xf] | 0x40;
    *(undefined4 *)(param_1 + 0x60c) = *(undefined4 *)(param_2 + 0x60c);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xf];
  }
  if ((char)bVar9 < '\0') {
    param_1[0xf] = param_1[0xf] | 0x80;
    *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_2 + 0x610);
    param_1[0x8c0] = 1;
  }
  if ((param_2[0x10] & 1) != 0) {
    param_1[0x10] = param_1[0x10] | 1;
    *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_2 + 0x614);
    param_1[0x8c0] = 1;
  }
  if ((char)param_2[0x19] < '\0') {
    param_1[0x19] = param_1[0x19] | 0x80;
    uVar1 = *(undefined4 *)(param_2 + 0x3dc);
    uVar2 = *(undefined4 *)(param_2 + 0x3e0);
    uVar3 = *(undefined4 *)(param_2 + 0x3e4);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
    *(undefined4 *)(param_1 + 0x3dc) = uVar1;
    *(undefined4 *)(param_1 + 0x3e0) = uVar2;
    *(undefined4 *)(param_1 + 0x3e4) = uVar3;
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0x1a];
  if ((bVar9 & 1) != 0) {
    param_1[0x1a] = param_1[0x1a] | 1;
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1a];
  }
  if ((bVar9 & 8) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
    *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_2 + 0x640);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1a];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[0x1a] = param_1[0x1a] | 0x10;
    *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1a];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[0x1a] = param_1[0x1a] | 0x20;
    *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_2 + 0x474);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1a];
  }
  if ((char)bVar9 < '\0') {
    param_1[0x1a] = param_1[0x1a] | 0x80;
    *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_2 + 0x638);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0x1b];
  if ((bVar9 & 1) != 0) {
    param_1[0x1b] = param_1[0x1b] | 1;
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_2 + 0x63c);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1b];
  }
  if ((bVar9 & 2) != 0) {
    param_1[0x1b] = param_1[0x1b] | 2;
    *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(param_2 + 0x648);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1b];
  }
  if ((bVar9 & 4) != 0) {
    param_1[0x1b] = param_1[0x1b] | 4;
    *(uint *)(param_1 + 0x64c) =
         *(uint *)(param_1 + 0x64c) & 0xfffffffe | *(uint *)(param_2 + 0x64c) & 1;
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1b];
  }
  if ((bVar9 & 8) != 0) {
    param_1[0x1b] = param_1[0x1b] | 8;
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_2 + 0x644);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1b];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[0x1b] = param_1[0x1b] | 0x10;
    *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(param_2 + 0x650);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1b];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[0x1b] = param_1[0x1b] | 0x20;
    *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(param_2 + 0x654);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1b];
  }
  if ((bVar9 & 0x40) != 0) {
    param_1[0x1b] = param_1[0x1b] | 0x40;
    *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_2 + 0x658);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1b];
  }
  if ((char)bVar9 < '\0') {
    param_1[0x1b] = param_1[0x1b] | 0x80;
    *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_2 + 0x65c);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0x1c];
  if ((bVar9 & 1) != 0) {
    param_1[0x1c] = param_1[0x1c] | 1;
    *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_2 + 0x660);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1c];
  }
  if ((bVar9 & 2) != 0) {
    param_1[0x1c] = param_1[0x1c] | 2;
    *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_2 + 0x664);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1c];
  }
  if ((bVar9 & 8) != 0) {
    param_1[0x1c] = param_1[0x1c] | 8;
    *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(param_2 + 0x668);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1c];
  }
  if ((bVar9 & 0x10) != 0) {
    param_1[0x1c] = param_1[0x1c] | 0x10;
    *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_2 + 0x66c);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1c];
  }
  if ((bVar9 & 0x20) != 0) {
    param_1[0x1c] = param_1[0x1c] | 0x20;
    *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(param_2 + 0x670);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1c];
  }
  if ((char)bVar9 < '\0') {
    param_1[0x1c] = param_1[0x1c] | 0x80;
    *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_2 + 0x678);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0x1d];
  if ((bVar9 & 1) != 0) {
    param_1[0x1d] = param_1[0x1d] | 1;
    *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(param_2 + 0x67c);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1d];
  }
  if ((bVar9 & 4) != 0) {
    param_1[0x1d] = param_1[0x1d] | 4;
    *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(param_2 + 0x684);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0x1e];
  if ((bVar9 & 2) != 0) {
    param_1[0x1e] = param_1[0x1e] | 2;
    *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x43c);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1e];
  }
  if ((bVar9 & 1) != 0) {
    param_1[0x1e] = param_1[0x1e] | 1;
    *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_2 + 0x438);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1e];
  }
  if ((bVar9 & 4) != 0) {
    param_1[0x1e] = param_1[0x1e] | 4;
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x440);
    param_1[0x8c0] = 1;
  }
  uVar10 = *(uint *)(param_2 + 0x20);
  if ((uVar10 & 0x40) != 0) {
    param_1[0x20] = param_1[0x20] | 0x40;
    param_1[0x6c4] = param_2[0x6c4];
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((char)uVar10 < '\0') {
    param_1[0x20] = param_1[0x20] | 0x80;
    *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_2 + 0x6c8);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 8 & 1) != 0) {
    param_1[0x21] = param_1[0x21] | 1;
    *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(param_2 + 0x6cc);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 9 & 1) != 0) {
    param_1[0x21] = param_1[0x21] | 2;
    *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_2 + 0x6d0);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 10 & 1) != 0) {
    param_1[0x21] = param_1[0x21] | 4;
    param_1[0x6d4] = param_2[0x6d4];
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 0xb & 1) != 0) {
    param_1[0x21] = param_1[0x21] | 8;
    param_1[0x6d5] = param_1[0x6d5] & 0xfe | param_2[0x6d5] & 1;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 0xc & 1) != 0) {
    param_1[0x21] = param_1[0x21] | 0x10;
    param_1[0x3d4] = param_2[0x3d4];
    param_1[0x8c0] = 1;
  }
  if ((param_2[0x2c] & 1) != 0) {
    param_1[0x2c] = param_1[0x2c] | 1;
    *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_2 + 0x41c);
    param_1[0x8c0] = 1;
  }
  uVar10 = *(uint *)(param_2 + 0x20);
  if ((uVar10 >> 0xd & 1) != 0) {
    param_1[0x21] = param_1[0x21] | 0x20;
    *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 0xe & 1) != 0) {
    param_1[0x21] = param_1[0x21] | 0x40;
    *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_2 + 0x3f4);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((short)uVar10 < 0) {
    param_1[0x21] = param_1[0x21] | 0x80;
    *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 0x3f8);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 0x10 & 1) != 0) {
    param_1[0x22] = param_1[0x22] | 1;
    *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_2 + 0x3fc);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 0x11 & 1) != 0) {
    param_1[0x22] = param_1[0x22] | 2;
    *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 0x12 & 1) != 0) {
    param_1[0x22] = param_1[0x22] | 4;
    *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_2 + 0x404);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 0x13 & 1) != 0) {
    param_1[0x22] = param_1[0x22] | 8;
    param_1[0x408] = param_1[0x408] & 0xfe | param_2[0x408] & 1;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 0x14 & 1) != 0) {
    param_1[0x22] = param_1[0x22] | 0x10;
    *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x40c);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 0x15 & 1) != 0) {
    param_1[0x22] = param_1[0x22] | 0x20;
    *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 0x16 & 1) != 0) {
    param_1[0x22] = param_1[0x22] | 0x40;
    *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_2 + 0x414);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar10 >> 0x17 & 1) != 0) {
    param_1[0x22] = param_1[0x22] | 0x80;
    *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x418);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0x24];
  if ((bVar9 & 1) != 0) {
    param_1[0x24] = param_1[0x24] | 1;
    param_1[0x3ec] = param_2[0x3ec];
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x24];
  }
  if ((bVar9 & 2) != 0) {
    param_1[0x24] = param_1[0x24] | 2;
    param_1[0x428] = param_1[0x428] & 0xfe | param_2[0x428] & 1;
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x24];
  }
  if ((bVar9 & 4) != 0) {
    param_1[0x24] = param_1[0x24] | 4;
    param_1[0x428] = param_1[0x428] & 0xfd | param_2[0x428] & 2;
    param_1[0x8c0] = 1;
  }
  uVar10 = *(uint *)(param_2 + 0x28);
  if ((uVar10 & 1) != 0) {
    param_1[0x28] = param_1[0x28] | 1;
    *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x42c);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x28);
  }
  if ((uVar10 & 2) != 0) {
    param_1[0x28] = param_1[0x28] | 2;
    *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x430);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x28);
  }
  if ((uVar10 & 4) != 0) {
    param_1[0x28] = param_1[0x28] | 4;
    *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_2 + 0x434);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0x1d];
  if ((bVar9 & 0x40) != 0) {
    param_1[0x1d] = param_1[0x1d] | 0x40;
    param_1[0x420] = param_2[0x420];
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1d];
  }
  if ((char)bVar9 < '\0') {
    param_1[0x1d] = param_1[0x1d] | 0x80;
    *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(param_2 + 0x424);
    param_1[0x8c0] = 1;
  }
  uVar10 = *(uint *)(param_2 + 0x14);
  if ((uVar10 & 1) != 0) {
    param_1[0x14] = param_1[0x14] | 1;
    *(uint *)(param_1 + 0x618) =
         *(uint *)(param_1 + 0x618) & 0xfffffffe | *(uint *)(param_2 + 0x618) & 1;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x14);
  }
  if ((uVar10 & 2) != 0) {
    param_1[0x14] = param_1[0x14] | 2;
    *(undefined4 *)(param_1 + 0x61c) = *(undefined4 *)(param_2 + 0x61c);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x14);
  }
  if ((uVar10 & 4) != 0) {
    param_1[0x14] = param_1[0x14] | 4;
    *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_2 + 0x620);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x14);
  }
  if ((uVar10 & 8) != 0) {
    param_1[0x14] = param_1[0x14] | 8;
    *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_2 + 0x624);
    param_1[0x8c0] = 1;
  }
  uVar10 = *(uint *)(param_2 + 0x30);
  if ((uVar10 & 8) != 0) {
    param_1[0x30] = param_1[0x30] | 8;
    *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_2 + 0x6d8);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 & 0x10) != 0) {
    param_1[0x30] = param_1[0x30] | 0x10;
    *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(param_2 + 0x6dc);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 & 0x20) != 0) {
    param_1[0x30] = param_1[0x30] | 0x20;
    *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_2 + 0x6e0);
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 & 0x40) != 0) {
    param_1[0x30] = param_1[0x30] | 0x40;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xfffffffe | *(uint *)(param_2 + 0x6e4) & 1;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((char)uVar10 < '\0') {
    param_1[0x30] = param_1[0x30] | 0x80;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xfffffffd | *(uint *)(param_2 + 0x6e4) & 2;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 >> 8 & 1) != 0) {
    param_1[0x31] = param_1[0x31] | 1;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xfffffffb | *(uint *)(param_2 + 0x6e4) & 4;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 >> 9 & 1) != 0) {
    param_1[0x31] = param_1[0x31] | 2;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xfffffff7 | *(uint *)(param_2 + 0x6e4) & 8;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 >> 10 & 1) != 0) {
    param_1[0x31] = param_1[0x31] | 4;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xffffffef | *(uint *)(param_2 + 0x6e4) & 0x10;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 >> 0xb & 1) != 0) {
    param_1[0x31] = param_1[0x31] | 8;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xffffffdf | *(uint *)(param_2 + 0x6e4) & 0x20;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 >> 0xc & 1) != 0) {
    param_1[0x31] = param_1[0x31] | 0x10;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xffffffbf | *(uint *)(param_2 + 0x6e4) & 0x40;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 >> 0xd & 1) != 0) {
    param_1[0x31] = param_1[0x31] | 0x20;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xffffff7f | *(uint *)(param_2 + 0x6e4) & 0x80;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 >> 0xe & 1) != 0) {
    param_1[0x31] = param_1[0x31] | 0x40;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xfffffeff | *(uint *)(param_2 + 0x6e4) & 0x100;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((short)uVar10 < 0) {
    param_1[0x31] = param_1[0x31] | 0x80;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xfffffdff | *(uint *)(param_2 + 0x6e4) & 0x200;
    param_1[0x8c0] = 1;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 >> 0x10 & 1) != 0) {
    param_1[0x32] = param_1[0x32] | 1;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xfffffbff | *(uint *)(param_2 + 0x6e4) & 0x400;
    param_1[0x8c0] = 1;
  }
  if ((param_2[0x1a] & 0x40) != 0) {
    param_1[0x1a] = param_1[0x1a] | 0x40;
    *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
    param_1[0x8c0] = 1;
  }
  lVar11 = *(longlong *)(param_2 + 0x460);
  if (lVar11 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x460);
    }
    *(longlong *)(param_1 + 0x460) = lVar11;
  }
  bVar9 = param_2[0x1a];
  if ((bVar9 & 2) != 0) {
    param_1[0x1a] = param_1[0x1a] | 2;
    *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(param_2 + 0x628);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1a];
  }
  if ((bVar9 & 4) != 0) {
    param_1[0x1a] = param_1[0x1a] | 4;
    lVar11 = *(longlong *)(param_2 + 0x630);
    if (DAT_14c950c29 == '\x01') {
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar11 = *(longlong *)(param_2 + 0x630);
      }
    }
    *(longlong *)(param_1 + 0x630) = lVar11;
    param_1[0x8c0] = 1;
  }
  if ((param_2[8] & 8) != 0) {
    param_1[8] = param_1[8] | 8;
    lVar11 = *(longlong *)(param_2 + 0x3b8);
    if (DAT_14c950c29 == '\x01') {
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar11 = *(longlong *)(param_2 + 0x3b8);
      }
    }
    *(longlong *)(param_1 + 0x3b8) = lVar11;
    param_1[0x8c0] = 1;
  }
  if ((param_2[5] & 1) != 0) {
    param_1[5] = param_1[5] | 1;
    param_1[0x35] = param_2[0x35];
    param_1[0x8c0] = 1;
  }
  if ((param_2[7] & 1) != 0) {
    param_1[7] = param_1[7] | 1;
    lVar11 = *(longlong *)(param_2 + 0x390);
    if (DAT_14c950c29 == '\x01') {
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar11 = *(longlong *)(param_2 + 0x390);
      }
    }
    *(longlong *)(param_1 + 0x390) = lVar11;
    param_1[0x8c0] = 1;
  }
  if ((param_2[0xe] & 4) != 0) {
    param_1[0xe] = param_1[0xe] | 4;
    lVar11 = *(longlong *)(param_2 + 0x5d8);
    if (DAT_14c950c29 == '\x01') {
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar11 = *(longlong *)(param_2 + 0x5d8);
      }
    }
    *(longlong *)(param_1 + 0x5d8) = lVar11;
    param_1[0x8c0] = 1;
  }
  if ((param_2[8] & 1) != 0) {
    param_1[8] = param_1[8] | 1;
    *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_2 + 0x3b4);
    param_1[0x8c0] = 1;
  }
  if ((char)param_2[9] < '\0') {
    param_1[9] = param_1[9] | 0x80;
    lVar11 = *(longlong *)(param_2 + 0x490);
    if (DAT_14c950c29 == '\x01') {
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar11 = *(longlong *)(param_2 + 0x490);
      }
    }
    *(longlong *)(param_1 + 0x490) = lVar11;
    param_1[0x8c0] = 1;
  }
  if ((param_2[10] & 1) != 0) {
    param_1[10] = param_1[10] | 1;
    lVar11 = *(longlong *)(param_2 + 0x498);
    if (DAT_14c950c29 == '\x01') {
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar11 = *(longlong *)(param_2 + 0x498);
      }
    }
    *(longlong *)(param_1 + 0x498) = lVar11;
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0xb];
  if ((bVar9 & 1) != 0) {
    param_1[0xb] = param_1[0xb] | 1;
    lVar11 = *(longlong *)(param_2 + 0x4d8);
    if (DAT_14c950c29 == '\x01') {
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar11 = *(longlong *)(param_2 + 0x4d8);
      }
    }
    *(longlong *)(param_1 + 0x4d8) = lVar11;
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xb];
  }
  if ((bVar9 & 2) != 0) {
    param_1[0xb] = param_1[0xb] | 2;
    lVar11 = *(longlong *)(param_2 + 0x4e0);
    if (DAT_14c950c29 == '\x01') {
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar11 = *(longlong *)(param_2 + 0x4e0);
      }
    }
    *(longlong *)(param_1 + 0x4e0) = lVar11;
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0xc];
  if ((bVar9 & 0x10) != 0) {
    param_1[0xc] = param_1[0xc] | 0x10;
    lVar11 = *(longlong *)(param_2 + 0x520);
    if (DAT_14c950c29 == '\x01') {
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar11 = *(longlong *)(param_2 + 0x520);
      }
    }
    *(longlong *)(param_1 + 0x520) = lVar11;
    param_1[0x8c0] = 1;
    bVar9 = param_2[0xc];
  }
  if ((bVar9 & 4) != 0) {
    lVar11 = 0;
    do {
      uVar8 = *(undefined8 *)(param_2 + lVar11 + 0x528 + 8);
      *(undefined8 *)(param_1 + lVar11 + 0x528) = *(undefined8 *)(param_2 + lVar11 + 0x528);
      *(undefined8 *)(param_1 + lVar11 + 0x528 + 8) = uVar8;
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != 0x80);
  }
  if ((param_2[0x1c] & 4) != 0) {
    param_1[0x34] = param_1[0x34] & 0xfe | param_2[0x34] & 1;
  }
  if ((param_2[8] & 0x40) != 0) {
    param_1[8] = param_1[8] | 0x40;
    param_1[0x36] = param_2[0x36];
    param_1[0x8c0] = 1;
  }
  if ((param_2[0xf] & 2) != 0) {
    param_1[0xf] = param_1[0xf] | 2;
    *(uint *)(param_1 + 0x5ec) =
         *(uint *)(param_1 + 0x5ec) & 0xfffffffe | *(uint *)(param_2 + 0x5ec) & 1;
    param_1[0x8c0] = 1;
  }
  if ((param_2[0x1d] & 2) != 0) {
    param_1[0x1d] = param_1[0x1d] | 2;
    *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(param_2 + 0x680);
    param_1[0x8c0] = 1;
  }
  if ((param_2[10] & 2) != 0) {
    param_1[10] = param_1[10] | 2;
    *(uint *)(param_1 + 0x488) =
         *(uint *)(param_1 + 0x488) & 0xfffffffe | *(uint *)(param_2 + 0x488) & 1;
    param_1[0x8c0] = 1;
  }
  if ((param_2[0x1e] & 0x10) != 0) {
    param_1[0x1e] = param_1[0x1e] | 0x10;
    *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_2 + 0x6f4);
    param_1[0x8c0] = 1;
  }
  return;
}



// FUNCTION 147feafa8 FUN_147feafa8 body=18181 status=ok
// SIG undefined FUN_147feafa8(void)

void FUN_147feafa8(byte *param_1,byte *param_2,float param_3)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  float fVar15;
  
  if (param_3 <= 0.0) {
    return;
  }
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  bVar9 = *param_2;
  bVar8 = *param_1;
  if ((bVar9 & 1) == 0) {
    if ((bVar8 & 1) != 0 && 0.5 <= param_3) {
LAB_147feb01f:
      bVar8 = bVar8 | 1;
      *param_1 = bVar8;
      param_1[0x37] = param_2[0x37];
      param_1[0x8c0] = 1;
      bVar9 = *param_2;
    }
  }
  else if (0.5 <= param_3) goto LAB_147feb01f;
  if (((bVar9 & 2) != 0) || ((bVar8 & 2) != 0)) {
    bVar8 = bVar8 | 2;
    *param_1 = bVar8;
    *(float *)(param_1 + 0x38) =
         (*(float *)(param_2 + 0x38) - *(float *)(param_1 + 0x38)) * param_3 +
         *(float *)(param_1 + 0x38);
    param_1[0x8c0] = 1;
    bVar9 = *param_2;
  }
  if (((bVar9 & 4) != 0) || ((bVar8 & 4) != 0)) {
    bVar8 = bVar8 | 4;
    *param_1 = bVar8;
    *(float *)(param_1 + 0x3c) =
         (*(float *)(param_2 + 0x3c) - *(float *)(param_1 + 0x3c)) * param_3 +
         *(float *)(param_1 + 0x3c);
    param_1[0x8c0] = 1;
    bVar9 = *param_2;
  }
  if (((bVar9 & 8) != 0) || ((bVar8 & 8) != 0)) {
    bVar8 = bVar8 | 8;
    *param_1 = bVar8;
    dVar4 = *(double *)(param_2 + 0x58);
    dVar5 = *(double *)(param_2 + 0x50);
    dVar6 = *(double *)(param_2 + 0x48);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x40) =
         (*(double *)(param_2 + 0x40) - *(double *)(param_1 + 0x40)) * dVar7 +
         *(double *)(param_1 + 0x40);
    *(double *)(param_1 + 0x48) =
         (dVar6 - *(double *)(param_1 + 0x48)) * dVar7 + *(double *)(param_1 + 0x48);
    *(double *)(param_1 + 0x50) =
         (dVar5 - *(double *)(param_1 + 0x50)) * dVar7 + *(double *)(param_1 + 0x50);
    *(double *)(param_1 + 0x58) =
         (dVar4 - *(double *)(param_1 + 0x58)) * dVar7 + *(double *)(param_1 + 0x58);
    param_1[0x8c0] = 1;
    bVar9 = *param_2;
  }
  if (((bVar9 & 0x10) != 0) || ((bVar8 & 0x10) != 0)) {
    bVar8 = bVar8 | 0x10;
    *param_1 = bVar8;
    dVar4 = *(double *)(param_2 + 0x78);
    dVar5 = *(double *)(param_2 + 0x70);
    dVar6 = *(double *)(param_2 + 0x68);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x60) =
         (*(double *)(param_2 + 0x60) - *(double *)(param_1 + 0x60)) * dVar7 +
         *(double *)(param_1 + 0x60);
    *(double *)(param_1 + 0x68) =
         (dVar6 - *(double *)(param_1 + 0x68)) * dVar7 + *(double *)(param_1 + 0x68);
    *(double *)(param_1 + 0x70) =
         (dVar5 - *(double *)(param_1 + 0x70)) * dVar7 + *(double *)(param_1 + 0x70);
    *(double *)(param_1 + 0x78) =
         (dVar4 - *(double *)(param_1 + 0x78)) * dVar7 + *(double *)(param_1 + 0x78);
    param_1[0x8c0] = 1;
    bVar9 = *param_2;
  }
  if (((bVar9 & 0x20) != 0) || ((bVar8 & 0x20) != 0)) {
    bVar8 = bVar8 | 0x20;
    *param_1 = bVar8;
    dVar4 = *(double *)(param_2 + 0x98);
    dVar5 = *(double *)(param_2 + 0x90);
    dVar6 = *(double *)(param_2 + 0x88);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x80) =
         (*(double *)(param_2 + 0x80) - *(double *)(param_1 + 0x80)) * dVar7 +
         *(double *)(param_1 + 0x80);
    *(double *)(param_1 + 0x88) =
         (dVar6 - *(double *)(param_1 + 0x88)) * dVar7 + *(double *)(param_1 + 0x88);
    *(double *)(param_1 + 0x90) =
         (dVar5 - *(double *)(param_1 + 0x90)) * dVar7 + *(double *)(param_1 + 0x90);
    *(double *)(param_1 + 0x98) =
         (dVar4 - *(double *)(param_1 + 0x98)) * dVar7 + *(double *)(param_1 + 0x98);
    param_1[0x8c0] = 1;
    bVar9 = *param_2;
  }
  if (((bVar9 & 0x40) == 0) && ((bVar8 & 0x40) == 0)) {
    if ((char)bVar9 < '\0') goto LAB_147feb344;
LAB_147feb33c:
    if ((char)bVar8 < '\0') goto LAB_147feb344;
  }
  else {
    bVar8 = bVar8 | 0x40;
    *param_1 = bVar8;
    dVar4 = *(double *)(param_2 + 0xb8);
    dVar5 = *(double *)(param_2 + 0xb0);
    dVar6 = *(double *)(param_2 + 0xa8);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0xa0) =
         (*(double *)(param_2 + 0xa0) - *(double *)(param_1 + 0xa0)) * dVar7 +
         *(double *)(param_1 + 0xa0);
    *(double *)(param_1 + 0xa8) =
         (dVar6 - *(double *)(param_1 + 0xa8)) * dVar7 + *(double *)(param_1 + 0xa8);
    *(double *)(param_1 + 0xb0) =
         (dVar5 - *(double *)(param_1 + 0xb0)) * dVar7 + *(double *)(param_1 + 0xb0);
    *(double *)(param_1 + 0xb8) =
         (dVar4 - *(double *)(param_1 + 0xb8)) * dVar7 + *(double *)(param_1 + 0xb8);
    param_1[0x8c0] = 1;
    if (-1 < (char)*param_2) goto LAB_147feb33c;
LAB_147feb344:
    *param_1 = bVar8 | 0x80;
    dVar4 = *(double *)(param_2 + 0xd8);
    dVar5 = *(double *)(param_2 + 0xd0);
    dVar6 = *(double *)(param_2 + 200);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0xc0) =
         (*(double *)(param_2 + 0xc0) - *(double *)(param_1 + 0xc0)) * dVar7 +
         *(double *)(param_1 + 0xc0);
    *(double *)(param_1 + 200) =
         (dVar6 - *(double *)(param_1 + 200)) * dVar7 + *(double *)(param_1 + 200);
    *(double *)(param_1 + 0xd0) =
         (dVar5 - *(double *)(param_1 + 0xd0)) * dVar7 + *(double *)(param_1 + 0xd0);
    *(double *)(param_1 + 0xd8) =
         (dVar4 - *(double *)(param_1 + 0xd8)) * dVar7 + *(double *)(param_1 + 0xd8);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[1];
  if (((bVar8 & 1) != 0) || (bVar9 = param_1[1], (bVar9 & 1) != 0)) {
    bVar9 = param_1[1] | 1;
    param_1[1] = bVar9;
    dVar4 = *(double *)(param_2 + 0xf8);
    dVar5 = *(double *)(param_2 + 0xf0);
    dVar6 = *(double *)(param_2 + 0xe8);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0xe0) =
         (*(double *)(param_2 + 0xe0) - *(double *)(param_1 + 0xe0)) * dVar7 +
         *(double *)(param_1 + 0xe0);
    *(double *)(param_1 + 0xe8) =
         (dVar6 - *(double *)(param_1 + 0xe8)) * dVar7 + *(double *)(param_1 + 0xe8);
    *(double *)(param_1 + 0xf0) =
         (dVar5 - *(double *)(param_1 + 0xf0)) * dVar7 + *(double *)(param_1 + 0xf0);
    *(double *)(param_1 + 0xf8) =
         (dVar4 - *(double *)(param_1 + 0xf8)) * dVar7 + *(double *)(param_1 + 0xf8);
    param_1[0x8c0] = 1;
    bVar8 = param_2[1];
  }
  if (((bVar8 & 2) != 0) || ((bVar9 & 2) != 0)) {
    bVar9 = bVar9 | 2;
    param_1[1] = bVar9;
    dVar4 = *(double *)(param_2 + 0x118);
    dVar5 = *(double *)(param_2 + 0x110);
    dVar6 = *(double *)(param_2 + 0x108);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x100) =
         (*(double *)(param_2 + 0x100) - *(double *)(param_1 + 0x100)) * dVar7 +
         *(double *)(param_1 + 0x100);
    *(double *)(param_1 + 0x108) =
         (dVar6 - *(double *)(param_1 + 0x108)) * dVar7 + *(double *)(param_1 + 0x108);
    *(double *)(param_1 + 0x110) =
         (dVar5 - *(double *)(param_1 + 0x110)) * dVar7 + *(double *)(param_1 + 0x110);
    *(double *)(param_1 + 0x118) =
         (dVar4 - *(double *)(param_1 + 0x118)) * dVar7 + *(double *)(param_1 + 0x118);
    param_1[0x8c0] = 1;
    bVar8 = param_2[1];
  }
  if (((bVar8 & 4) != 0) || ((bVar9 & 4) != 0)) {
    bVar9 = bVar9 | 4;
    param_1[1] = bVar9;
    dVar4 = *(double *)(param_2 + 0x138);
    dVar5 = *(double *)(param_2 + 0x130);
    dVar6 = *(double *)(param_2 + 0x128);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x120) =
         (*(double *)(param_2 + 0x120) - *(double *)(param_1 + 0x120)) * dVar7 +
         *(double *)(param_1 + 0x120);
    *(double *)(param_1 + 0x128) =
         (dVar6 - *(double *)(param_1 + 0x128)) * dVar7 + *(double *)(param_1 + 0x128);
    *(double *)(param_1 + 0x130) =
         (dVar5 - *(double *)(param_1 + 0x130)) * dVar7 + *(double *)(param_1 + 0x130);
    *(double *)(param_1 + 0x138) =
         (dVar4 - *(double *)(param_1 + 0x138)) * dVar7 + *(double *)(param_1 + 0x138);
    param_1[0x8c0] = 1;
    bVar8 = param_2[1];
  }
  if (((bVar8 & 8) != 0) || ((bVar9 & 8) != 0)) {
    bVar9 = bVar9 | 8;
    param_1[1] = bVar9;
    dVar4 = *(double *)(param_2 + 0x158);
    dVar5 = *(double *)(param_2 + 0x150);
    dVar6 = *(double *)(param_2 + 0x148);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x140) =
         (*(double *)(param_2 + 0x140) - *(double *)(param_1 + 0x140)) * dVar7 +
         *(double *)(param_1 + 0x140);
    *(double *)(param_1 + 0x148) =
         (dVar6 - *(double *)(param_1 + 0x148)) * dVar7 + *(double *)(param_1 + 0x148);
    *(double *)(param_1 + 0x150) =
         (dVar5 - *(double *)(param_1 + 0x150)) * dVar7 + *(double *)(param_1 + 0x150);
    *(double *)(param_1 + 0x158) =
         (dVar4 - *(double *)(param_1 + 0x158)) * dVar7 + *(double *)(param_1 + 0x158);
    param_1[0x8c0] = 1;
    bVar8 = param_2[1];
  }
  if (((bVar8 & 0x10) != 0) || ((bVar9 & 0x10) != 0)) {
    bVar9 = bVar9 | 0x10;
    param_1[1] = bVar9;
    dVar4 = *(double *)(param_2 + 0x178);
    dVar5 = *(double *)(param_2 + 0x170);
    dVar6 = *(double *)(param_2 + 0x168);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x160) =
         (*(double *)(param_2 + 0x160) - *(double *)(param_1 + 0x160)) * dVar7 +
         *(double *)(param_1 + 0x160);
    *(double *)(param_1 + 0x168) =
         (dVar6 - *(double *)(param_1 + 0x168)) * dVar7 + *(double *)(param_1 + 0x168);
    *(double *)(param_1 + 0x170) =
         (dVar5 - *(double *)(param_1 + 0x170)) * dVar7 + *(double *)(param_1 + 0x170);
    *(double *)(param_1 + 0x178) =
         (dVar4 - *(double *)(param_1 + 0x178)) * dVar7 + *(double *)(param_1 + 0x178);
    param_1[0x8c0] = 1;
    bVar8 = param_2[1];
  }
  if (((bVar8 & 0x20) != 0) || ((bVar9 & 0x20) != 0)) {
    bVar9 = bVar9 | 0x20;
    param_1[1] = bVar9;
    dVar4 = *(double *)(param_2 + 0x198);
    dVar5 = *(double *)(param_2 + 400);
    dVar6 = *(double *)(param_2 + 0x188);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x180) =
         (*(double *)(param_2 + 0x180) - *(double *)(param_1 + 0x180)) * dVar7 +
         *(double *)(param_1 + 0x180);
    *(double *)(param_1 + 0x188) =
         (dVar6 - *(double *)(param_1 + 0x188)) * dVar7 + *(double *)(param_1 + 0x188);
    *(double *)(param_1 + 400) =
         (dVar5 - *(double *)(param_1 + 400)) * dVar7 + *(double *)(param_1 + 400);
    *(double *)(param_1 + 0x198) =
         (dVar4 - *(double *)(param_1 + 0x198)) * dVar7 + *(double *)(param_1 + 0x198);
    param_1[0x8c0] = 1;
    bVar8 = param_2[1];
  }
  if (((bVar8 & 0x40) == 0) && ((bVar9 & 0x40) == 0)) {
    if ((char)bVar8 < '\0') goto LAB_147feb930;
LAB_147feb928:
    if ((char)bVar9 < '\0') goto LAB_147feb930;
  }
  else {
    bVar9 = bVar9 | 0x40;
    param_1[1] = bVar9;
    dVar4 = *(double *)(param_2 + 0x1b8);
    dVar5 = *(double *)(param_2 + 0x1b0);
    dVar6 = *(double *)(param_2 + 0x1a8);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x1a0) =
         (*(double *)(param_2 + 0x1a0) - *(double *)(param_1 + 0x1a0)) * dVar7 +
         *(double *)(param_1 + 0x1a0);
    *(double *)(param_1 + 0x1a8) =
         (dVar6 - *(double *)(param_1 + 0x1a8)) * dVar7 + *(double *)(param_1 + 0x1a8);
    *(double *)(param_1 + 0x1b0) =
         (dVar5 - *(double *)(param_1 + 0x1b0)) * dVar7 + *(double *)(param_1 + 0x1b0);
    *(double *)(param_1 + 0x1b8) =
         (dVar4 - *(double *)(param_1 + 0x1b8)) * dVar7 + *(double *)(param_1 + 0x1b8);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[1]) goto LAB_147feb928;
LAB_147feb930:
    param_1[1] = bVar9 | 0x80;
    dVar4 = *(double *)(param_2 + 0x1d8);
    dVar5 = *(double *)(param_2 + 0x1d0);
    dVar6 = *(double *)(param_2 + 0x1c8);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x1c0) =
         (*(double *)(param_2 + 0x1c0) - *(double *)(param_1 + 0x1c0)) * dVar7 +
         *(double *)(param_1 + 0x1c0);
    *(double *)(param_1 + 0x1c8) =
         (dVar6 - *(double *)(param_1 + 0x1c8)) * dVar7 + *(double *)(param_1 + 0x1c8);
    *(double *)(param_1 + 0x1d0) =
         (dVar5 - *(double *)(param_1 + 0x1d0)) * dVar7 + *(double *)(param_1 + 0x1d0);
    *(double *)(param_1 + 0x1d8) =
         (dVar4 - *(double *)(param_1 + 0x1d8)) * dVar7 + *(double *)(param_1 + 0x1d8);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[2];
  if (((bVar8 & 1) != 0) || (bVar9 = param_1[2], (bVar9 & 1) != 0)) {
    bVar9 = param_1[2] | 1;
    param_1[2] = bVar9;
    dVar4 = *(double *)(param_2 + 0x1f8);
    dVar5 = *(double *)(param_2 + 0x1f0);
    dVar6 = *(double *)(param_2 + 0x1e8);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x1e0) =
         (*(double *)(param_2 + 0x1e0) - *(double *)(param_1 + 0x1e0)) * dVar7 +
         *(double *)(param_1 + 0x1e0);
    *(double *)(param_1 + 0x1e8) =
         (dVar6 - *(double *)(param_1 + 0x1e8)) * dVar7 + *(double *)(param_1 + 0x1e8);
    *(double *)(param_1 + 0x1f0) =
         (dVar5 - *(double *)(param_1 + 0x1f0)) * dVar7 + *(double *)(param_1 + 0x1f0);
    *(double *)(param_1 + 0x1f8) =
         (dVar4 - *(double *)(param_1 + 0x1f8)) * dVar7 + *(double *)(param_1 + 0x1f8);
    param_1[0x8c0] = 1;
    bVar8 = param_2[2];
  }
  if (((bVar8 & 2) != 0) || ((bVar9 & 2) != 0)) {
    bVar9 = bVar9 | 2;
    param_1[2] = bVar9;
    dVar4 = *(double *)(param_2 + 0x218);
    dVar5 = *(double *)(param_2 + 0x210);
    dVar6 = *(double *)(param_2 + 0x208);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x200) =
         (*(double *)(param_2 + 0x200) - *(double *)(param_1 + 0x200)) * dVar7 +
         *(double *)(param_1 + 0x200);
    *(double *)(param_1 + 0x208) =
         (dVar6 - *(double *)(param_1 + 0x208)) * dVar7 + *(double *)(param_1 + 0x208);
    *(double *)(param_1 + 0x210) =
         (dVar5 - *(double *)(param_1 + 0x210)) * dVar7 + *(double *)(param_1 + 0x210);
    *(double *)(param_1 + 0x218) =
         (dVar4 - *(double *)(param_1 + 0x218)) * dVar7 + *(double *)(param_1 + 0x218);
    param_1[0x8c0] = 1;
    bVar8 = param_2[2];
  }
  if (((bVar8 & 4) != 0) || ((bVar9 & 4) != 0)) {
    bVar9 = bVar9 | 4;
    param_1[2] = bVar9;
    dVar4 = *(double *)(param_2 + 0x238);
    dVar5 = *(double *)(param_2 + 0x230);
    dVar6 = *(double *)(param_2 + 0x228);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x220) =
         (*(double *)(param_2 + 0x220) - *(double *)(param_1 + 0x220)) * dVar7 +
         *(double *)(param_1 + 0x220);
    *(double *)(param_1 + 0x228) =
         (dVar6 - *(double *)(param_1 + 0x228)) * dVar7 + *(double *)(param_1 + 0x228);
    *(double *)(param_1 + 0x230) =
         (dVar5 - *(double *)(param_1 + 0x230)) * dVar7 + *(double *)(param_1 + 0x230);
    *(double *)(param_1 + 0x238) =
         (dVar4 - *(double *)(param_1 + 0x238)) * dVar7 + *(double *)(param_1 + 0x238);
    param_1[0x8c0] = 1;
    bVar8 = param_2[2];
  }
  if (((bVar8 & 8) != 0) || ((bVar9 & 8) != 0)) {
    bVar9 = bVar9 | 8;
    param_1[2] = bVar9;
    dVar4 = *(double *)(param_2 + 600);
    dVar5 = *(double *)(param_2 + 0x250);
    dVar6 = *(double *)(param_2 + 0x248);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x240) =
         (*(double *)(param_2 + 0x240) - *(double *)(param_1 + 0x240)) * dVar7 +
         *(double *)(param_1 + 0x240);
    *(double *)(param_1 + 0x248) =
         (dVar6 - *(double *)(param_1 + 0x248)) * dVar7 + *(double *)(param_1 + 0x248);
    *(double *)(param_1 + 0x250) =
         (dVar5 - *(double *)(param_1 + 0x250)) * dVar7 + *(double *)(param_1 + 0x250);
    *(double *)(param_1 + 600) =
         (dVar4 - *(double *)(param_1 + 600)) * dVar7 + *(double *)(param_1 + 600);
    param_1[0x8c0] = 1;
    bVar8 = param_2[2];
  }
  if (((bVar8 & 0x10) != 0) || ((bVar9 & 0x10) != 0)) {
    bVar9 = bVar9 | 0x10;
    param_1[2] = bVar9;
    dVar4 = *(double *)(param_2 + 0x278);
    dVar5 = *(double *)(param_2 + 0x270);
    dVar6 = *(double *)(param_2 + 0x268);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x260) =
         (*(double *)(param_2 + 0x260) - *(double *)(param_1 + 0x260)) * dVar7 +
         *(double *)(param_1 + 0x260);
    *(double *)(param_1 + 0x268) =
         (dVar6 - *(double *)(param_1 + 0x268)) * dVar7 + *(double *)(param_1 + 0x268);
    *(double *)(param_1 + 0x270) =
         (dVar5 - *(double *)(param_1 + 0x270)) * dVar7 + *(double *)(param_1 + 0x270);
    *(double *)(param_1 + 0x278) =
         (dVar4 - *(double *)(param_1 + 0x278)) * dVar7 + *(double *)(param_1 + 0x278);
    param_1[0x8c0] = 1;
    bVar8 = param_2[2];
  }
  if (((bVar8 & 0x20) != 0) || ((bVar9 & 0x20) != 0)) {
    bVar9 = bVar9 | 0x20;
    param_1[2] = bVar9;
    dVar4 = *(double *)(param_2 + 0x298);
    dVar5 = *(double *)(param_2 + 0x290);
    dVar6 = *(double *)(param_2 + 0x288);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x280) =
         (*(double *)(param_2 + 0x280) - *(double *)(param_1 + 0x280)) * dVar7 +
         *(double *)(param_1 + 0x280);
    *(double *)(param_1 + 0x288) =
         (dVar6 - *(double *)(param_1 + 0x288)) * dVar7 + *(double *)(param_1 + 0x288);
    *(double *)(param_1 + 0x290) =
         (dVar5 - *(double *)(param_1 + 0x290)) * dVar7 + *(double *)(param_1 + 0x290);
    *(double *)(param_1 + 0x298) =
         (dVar4 - *(double *)(param_1 + 0x298)) * dVar7 + *(double *)(param_1 + 0x298);
    param_1[0x8c0] = 1;
    bVar8 = param_2[2];
  }
  if (((bVar8 & 0x40) == 0) && ((bVar9 & 0x40) == 0)) {
    if ((char)bVar8 < '\0') goto LAB_147febf19;
LAB_147febf15:
    if ((char)bVar9 < '\0') goto LAB_147febf19;
  }
  else {
    bVar9 = bVar9 | 0x40;
    param_1[2] = bVar9;
    dVar4 = *(double *)(param_2 + 0x2b8);
    dVar5 = *(double *)(param_2 + 0x2b0);
    dVar6 = *(double *)(param_2 + 0x2a8);
    dVar7 = (double)param_3;
    *(double *)(param_1 + 0x2a0) =
         (*(double *)(param_2 + 0x2a0) - *(double *)(param_1 + 0x2a0)) * dVar7 +
         *(double *)(param_1 + 0x2a0);
    *(double *)(param_1 + 0x2a8) =
         (dVar6 - *(double *)(param_1 + 0x2a8)) * dVar7 + *(double *)(param_1 + 0x2a8);
    *(double *)(param_1 + 0x2b0) =
         (dVar5 - *(double *)(param_1 + 0x2b0)) * dVar7 + *(double *)(param_1 + 0x2b0);
    *(double *)(param_1 + 0x2b8) =
         (dVar4 - *(double *)(param_1 + 0x2b8)) * dVar7 + *(double *)(param_1 + 0x2b8);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[2]) goto LAB_147febf15;
LAB_147febf19:
    param_1[2] = bVar9 | 0x80;
    *(float *)(param_1 + 0x2c8) =
         (*(float *)(param_2 + 0x2c8) - *(float *)(param_1 + 0x2c8)) * param_3 +
         *(float *)(param_1 + 0x2c8);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[3];
  if (((bVar8 & 1) != 0) || (bVar9 = param_1[3], (bVar9 & 1) != 0)) {
    bVar9 = param_1[3] | 1;
    param_1[3] = bVar9;
    *(float *)(param_1 + 0x2c0) =
         (*(float *)(param_2 + 0x2c0) - *(float *)(param_1 + 0x2c0)) * param_3 +
         *(float *)(param_1 + 0x2c0);
    param_1[0x8c0] = 1;
    bVar8 = param_2[3];
  }
  if (((bVar8 & 2) != 0) || ((bVar9 & 2) != 0)) {
    bVar9 = bVar9 | 2;
    param_1[3] = bVar9;
    *(float *)(param_1 + 0x2c4) =
         (*(float *)(param_2 + 0x2c4) - *(float *)(param_1 + 0x2c4)) * param_3 +
         *(float *)(param_1 + 0x2c4);
    param_1[0x8c0] = 1;
    bVar8 = param_2[3];
  }
  if (((bVar8 & 4) != 0) || ((bVar9 & 4) != 0)) {
    bVar9 = bVar9 | 4;
    param_1[3] = bVar9;
    *(float *)(param_1 + 0x2cc) =
         (*(float *)(param_2 + 0x2cc) - *(float *)(param_1 + 0x2cc)) * param_3 +
         *(float *)(param_1 + 0x2cc);
    param_1[0x8c0] = 1;
    bVar8 = param_2[3];
  }
  if (((bVar8 & 8) != 0) || ((bVar9 & 8) != 0)) {
    bVar9 = bVar9 | 8;
    param_1[3] = bVar9;
    *(float *)(param_1 + 0x2d0) =
         (*(float *)(param_2 + 0x2d0) - *(float *)(param_1 + 0x2d0)) * param_3 +
         *(float *)(param_1 + 0x2d0);
    param_1[0x8c0] = 1;
    bVar8 = param_2[3];
  }
  if (((bVar8 & 0x10) != 0) || ((bVar9 & 0x10) != 0)) {
    bVar9 = bVar9 | 0x10;
    param_1[3] = bVar9;
    *(float *)(param_1 + 0x2d4) =
         (*(float *)(param_2 + 0x2d4) - *(float *)(param_1 + 0x2d4)) * param_3 +
         *(float *)(param_1 + 0x2d4);
    param_1[0x8c0] = 1;
    bVar8 = param_2[3];
  }
  if (((bVar8 & 0x20) != 0) || ((bVar9 & 0x20) != 0)) {
    bVar9 = bVar9 | 0x20;
    param_1[3] = bVar9;
    *(float *)(param_1 + 0x2d8) =
         (*(float *)(param_2 + 0x2d8) - *(float *)(param_1 + 0x2d8)) * param_3 +
         *(float *)(param_1 + 0x2d8);
    param_1[0x8c0] = 1;
    bVar8 = param_2[3];
  }
  if (((bVar8 & 0x40) == 0) && ((bVar9 & 0x40) == 0)) {
    if ((char)bVar8 < '\0') goto LAB_147fec103;
LAB_147fec0ff:
    if ((char)bVar9 < '\0') goto LAB_147fec103;
  }
  else {
    bVar9 = bVar9 | 0x40;
    param_1[3] = bVar9;
    *(float *)(param_1 + 0x2dc) =
         (*(float *)(param_2 + 0x2dc) - *(float *)(param_1 + 0x2dc)) * param_3 +
         *(float *)(param_1 + 0x2dc);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[3]) goto LAB_147fec0ff;
LAB_147fec103:
    param_1[3] = bVar9 | 0x80;
    *(float *)(param_1 + 0x2e0) =
         (*(float *)(param_2 + 0x2e0) - *(float *)(param_1 + 0x2e0)) * param_3 +
         *(float *)(param_1 + 0x2e0);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[4];
  if (((bVar8 & 1) != 0) || (bVar9 = param_1[4], (bVar9 & 1) != 0)) {
    bVar9 = param_1[4] | 1;
    param_1[4] = bVar9;
    *(float *)(param_1 + 0x2e4) =
         (*(float *)(param_2 + 0x2e4) - *(float *)(param_1 + 0x2e4)) * param_3 +
         *(float *)(param_1 + 0x2e4);
    param_1[0x8c0] = 1;
    bVar8 = param_2[4];
  }
  if (((bVar8 & 2) != 0) || ((bVar9 & 2) != 0)) {
    bVar9 = bVar9 | 2;
    param_1[4] = bVar9;
    *(float *)(param_1 + 0x2e8) =
         (*(float *)(param_2 + 0x2e8) - *(float *)(param_1 + 0x2e8)) * param_3 +
         *(float *)(param_1 + 0x2e8);
    param_1[0x8c0] = 1;
    bVar8 = param_2[4];
  }
  if (((bVar8 & 4) != 0) || ((bVar9 & 4) != 0)) {
    bVar9 = bVar9 | 4;
    param_1[4] = bVar9;
    fVar2 = *(float *)(param_2 + 0x2f8);
    fVar15 = *(float *)(param_2 + 0x2f4);
    fVar3 = *(float *)(param_2 + 0x2f0);
    *(float *)(param_1 + 0x2ec) =
         (*(float *)(param_2 + 0x2ec) - *(float *)(param_1 + 0x2ec)) * param_3 +
         *(float *)(param_1 + 0x2ec);
    *(float *)(param_1 + 0x2f0) =
         (fVar3 - *(float *)(param_1 + 0x2f0)) * param_3 + *(float *)(param_1 + 0x2f0);
    *(float *)(param_1 + 0x2f4) =
         (fVar15 - *(float *)(param_1 + 0x2f4)) * param_3 + *(float *)(param_1 + 0x2f4);
    *(float *)(param_1 + 0x2f8) =
         (fVar2 - *(float *)(param_1 + 0x2f8)) * param_3 + *(float *)(param_1 + 0x2f8);
    param_1[0x8c0] = 1;
    bVar8 = param_2[4];
  }
  if (((bVar8 & 8) == 0) && ((bVar9 & 8) == 0)) {
    if ((bVar8 & 0x10) != 0) goto LAB_147fec2b1;
LAB_147fec2ad:
    if ((bVar9 & 0x10) != 0) goto LAB_147fec2b1;
  }
  else {
    bVar9 = bVar9 | 8;
    param_1[4] = bVar9;
    *(float *)(param_1 + 0x2fc) =
         (*(float *)(param_2 + 0x2fc) - *(float *)(param_1 + 0x2fc)) * param_3 +
         *(float *)(param_1 + 0x2fc);
    param_1[0x8c0] = 1;
    if ((param_2[4] & 0x10) == 0) goto LAB_147fec2ad;
LAB_147fec2b1:
    bVar9 = bVar9 | 0x10;
    param_1[4] = bVar9;
    *(float *)(param_1 + 0x300) =
         (*(float *)(param_2 + 0x300) - *(float *)(param_1 + 0x300)) * param_3 +
         *(float *)(param_1 + 0x300);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[5];
  if (((bVar8 & 2) != 0) || (bVar13 = param_1[5], (bVar13 & 2) != 0)) {
    bVar13 = param_1[5] | 2;
    param_1[5] = bVar13;
    *(float *)(param_1 + 0x304) =
         (*(float *)(param_2 + 0x304) - *(float *)(param_1 + 0x304)) * param_3 +
         *(float *)(param_1 + 0x304);
    param_1[0x8c0] = 1;
    bVar8 = param_2[5];
  }
  if (((bVar8 & 4) == 0) && ((bVar13 & 4) == 0)) {
    if ((bVar8 & 8) != 0) goto LAB_147fec386;
LAB_147fec37c:
    if ((bVar13 & 8) != 0) goto LAB_147fec386;
  }
  else {
    bVar13 = bVar13 | 4;
    param_1[5] = bVar13;
    *(float *)(param_1 + 0x308) =
         (*(float *)(param_2 + 0x308) - *(float *)(param_1 + 0x308)) * param_3 +
         *(float *)(param_1 + 0x308);
    param_1[0x8c0] = 1;
    if ((param_2[5] & 8) == 0) goto LAB_147fec37c;
LAB_147fec386:
    bVar13 = bVar13 | 8;
    param_1[5] = bVar13;
    fVar2 = *(float *)(param_2 + 0x334);
    fVar15 = *(float *)(param_2 + 0x330);
    fVar3 = *(float *)(param_2 + 0x32c);
    *(float *)(param_1 + 0x328) =
         (*(float *)(param_2 + 0x328) - *(float *)(param_1 + 0x328)) * param_3 +
         *(float *)(param_1 + 0x328);
    *(float *)(param_1 + 0x32c) =
         (fVar3 - *(float *)(param_1 + 0x32c)) * param_3 + *(float *)(param_1 + 0x32c);
    *(float *)(param_1 + 0x330) =
         (fVar15 - *(float *)(param_1 + 0x330)) * param_3 + *(float *)(param_1 + 0x330);
    *(float *)(param_1 + 0x334) =
         (fVar2 - *(float *)(param_1 + 0x334)) * param_3 + *(float *)(param_1 + 0x334);
    param_1[0x8c0] = 1;
  }
  if (((char)param_2[6] < '\0') || (bVar8 = param_1[6], (char)bVar8 < '\0')) {
    bVar8 = param_1[6] | 0x80;
    param_1[6] = bVar8;
    *(float *)(param_1 + 0x30c) =
         (*(float *)(param_2 + 0x30c) - *(float *)(param_1 + 0x30c)) * param_3 +
         *(float *)(param_1 + 0x30c);
    param_1[0x8c0] = 1;
    bVar14 = param_2[5];
  }
  else {
    bVar14 = param_2[5];
  }
  if (((bVar14 & 0x10) != 0) || ((bVar13 & 0x10) != 0)) {
    bVar13 = bVar13 | 0x10;
    param_1[5] = bVar13;
    *(float *)(param_1 + 0x310) =
         (*(float *)(param_2 + 0x310) - *(float *)(param_1 + 0x310)) * param_3 +
         *(float *)(param_1 + 0x310);
    param_1[0x8c0] = 1;
    bVar14 = param_2[5];
  }
  if (((bVar14 & 0x40) != 0) || ((bVar13 & 0x40) != 0)) {
    bVar13 = bVar13 | 0x40;
    param_1[5] = bVar13;
    fVar2 = *(float *)(param_2 + 0x344);
    fVar15 = *(float *)(param_2 + 0x340);
    fVar3 = *(float *)(param_2 + 0x33c);
    *(float *)(param_1 + 0x338) =
         (*(float *)(param_2 + 0x338) - *(float *)(param_1 + 0x338)) * param_3 +
         *(float *)(param_1 + 0x338);
    *(float *)(param_1 + 0x33c) =
         (fVar3 - *(float *)(param_1 + 0x33c)) * param_3 + *(float *)(param_1 + 0x33c);
    *(float *)(param_1 + 0x340) =
         (fVar15 - *(float *)(param_1 + 0x340)) * param_3 + *(float *)(param_1 + 0x340);
    *(float *)(param_1 + 0x344) =
         (fVar2 - *(float *)(param_1 + 0x344)) * param_3 + *(float *)(param_1 + 0x344);
    param_1[0x8c0] = 1;
    bVar14 = param_2[5];
  }
  if (((bVar14 & 0x20) == 0) && ((bVar13 & 0x20) == 0)) {
    if ((char)bVar14 < '\0') goto LAB_147fec5c8;
LAB_147fec5bb:
    if ((char)bVar13 < '\0') goto LAB_147fec5c8;
    bVar13 = param_2[6];
  }
  else {
    bVar13 = bVar13 | 0x20;
    param_1[5] = bVar13;
    *(float *)(param_1 + 0x314) =
         (*(float *)(param_2 + 0x314) - *(float *)(param_1 + 0x314)) * param_3 +
         *(float *)(param_1 + 0x314);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[5]) goto LAB_147fec5bb;
LAB_147fec5c8:
    param_1[5] = bVar13 | 0x80;
    fVar2 = *(float *)(param_2 + 0x354);
    fVar15 = *(float *)(param_2 + 0x350);
    fVar3 = *(float *)(param_2 + 0x34c);
    *(float *)(param_1 + 0x348) =
         (*(float *)(param_2 + 0x348) - *(float *)(param_1 + 0x348)) * param_3 +
         *(float *)(param_1 + 0x348);
    *(float *)(param_1 + 0x34c) =
         (fVar3 - *(float *)(param_1 + 0x34c)) * param_3 + *(float *)(param_1 + 0x34c);
    *(float *)(param_1 + 0x350) =
         (fVar15 - *(float *)(param_1 + 0x350)) * param_3 + *(float *)(param_1 + 0x350);
    *(float *)(param_1 + 0x354) =
         (fVar2 - *(float *)(param_1 + 0x354)) * param_3 + *(float *)(param_1 + 0x354);
    param_1[0x8c0] = 1;
    bVar13 = param_2[6];
  }
  if (((bVar13 & 1) != 0) || ((bVar8 & 1) != 0)) {
    bVar8 = bVar8 | 1;
    param_1[6] = bVar8;
    *(float *)(param_1 + 0x318) =
         (*(float *)(param_2 + 0x318) - *(float *)(param_1 + 0x318)) * param_3 +
         *(float *)(param_1 + 0x318);
    param_1[0x8c0] = 1;
    bVar13 = param_2[6];
  }
  if (((bVar13 & 2) != 0) || ((bVar8 & 2) != 0)) {
    bVar8 = bVar8 | 2;
    param_1[6] = bVar8;
    fVar2 = *(float *)(param_2 + 0x364);
    fVar15 = *(float *)(param_2 + 0x360);
    fVar3 = *(float *)(param_2 + 0x35c);
    *(float *)(param_1 + 0x358) =
         (*(float *)(param_2 + 0x358) - *(float *)(param_1 + 0x358)) * param_3 +
         *(float *)(param_1 + 0x358);
    *(float *)(param_1 + 0x35c) =
         (fVar3 - *(float *)(param_1 + 0x35c)) * param_3 + *(float *)(param_1 + 0x35c);
    *(float *)(param_1 + 0x360) =
         (fVar15 - *(float *)(param_1 + 0x360)) * param_3 + *(float *)(param_1 + 0x360);
    *(float *)(param_1 + 0x364) =
         (fVar2 - *(float *)(param_1 + 0x364)) * param_3 + *(float *)(param_1 + 0x364);
    param_1[0x8c0] = 1;
    bVar13 = param_2[6];
  }
  if (((bVar13 & 4) != 0) || ((bVar8 & 4) != 0)) {
    bVar8 = bVar8 | 4;
    param_1[6] = bVar8;
    *(float *)(param_1 + 0x31c) =
         (*(float *)(param_2 + 0x31c) - *(float *)(param_1 + 0x31c)) * param_3 +
         *(float *)(param_1 + 0x31c);
    param_1[0x8c0] = 1;
    bVar13 = param_2[6];
  }
  if (((bVar13 & 8) != 0) || ((bVar8 & 8) != 0)) {
    bVar8 = bVar8 | 8;
    param_1[6] = bVar8;
    fVar2 = *(float *)(param_2 + 0x374);
    fVar15 = *(float *)(param_2 + 0x370);
    fVar3 = *(float *)(param_2 + 0x36c);
    *(float *)(param_1 + 0x368) =
         (*(float *)(param_2 + 0x368) - *(float *)(param_1 + 0x368)) * param_3 +
         *(float *)(param_1 + 0x368);
    *(float *)(param_1 + 0x36c) =
         (fVar3 - *(float *)(param_1 + 0x36c)) * param_3 + *(float *)(param_1 + 0x36c);
    *(float *)(param_1 + 0x370) =
         (fVar15 - *(float *)(param_1 + 0x370)) * param_3 + *(float *)(param_1 + 0x370);
    *(float *)(param_1 + 0x374) =
         (fVar2 - *(float *)(param_1 + 0x374)) * param_3 + *(float *)(param_1 + 0x374);
    param_1[0x8c0] = 1;
    bVar13 = param_2[6];
  }
  if (((bVar13 & 0x10) != 0) || ((bVar8 & 0x10) != 0)) {
    bVar8 = bVar8 | 0x10;
    param_1[6] = bVar8;
    *(float *)(param_1 + 800) =
         (*(float *)(param_2 + 800) - *(float *)(param_1 + 800)) * param_3 +
         *(float *)(param_1 + 800);
    param_1[0x8c0] = 1;
    bVar13 = param_2[6];
  }
  if (((bVar13 & 0x20) == 0) && ((bVar8 & 0x20) == 0)) {
    if ((bVar13 & 0x40) != 0) goto LAB_147fec959;
LAB_147fec954:
    if ((bVar8 & 0x40) != 0) goto LAB_147fec959;
  }
  else {
    bVar8 = bVar8 | 0x20;
    param_1[6] = bVar8;
    fVar2 = *(float *)(param_2 + 900);
    fVar15 = *(float *)(param_2 + 0x380);
    fVar3 = *(float *)(param_2 + 0x37c);
    *(float *)(param_1 + 0x378) =
         (*(float *)(param_2 + 0x378) - *(float *)(param_1 + 0x378)) * param_3 +
         *(float *)(param_1 + 0x378);
    *(float *)(param_1 + 0x37c) =
         (fVar3 - *(float *)(param_1 + 0x37c)) * param_3 + *(float *)(param_1 + 0x37c);
    *(float *)(param_1 + 0x380) =
         (fVar15 - *(float *)(param_1 + 0x380)) * param_3 + *(float *)(param_1 + 0x380);
    *(float *)(param_1 + 900) =
         (fVar2 - *(float *)(param_1 + 900)) * param_3 + *(float *)(param_1 + 900);
    param_1[0x8c0] = 1;
    if ((param_2[6] & 0x40) == 0) goto LAB_147fec954;
LAB_147fec959:
    param_1[6] = bVar8 | 0x40;
    *(float *)(param_1 + 0x324) =
         (*(float *)(param_2 + 0x324) - *(float *)(param_1 + 0x324)) * param_3 +
         *(float *)(param_1 + 0x324);
    param_1[0x8c0] = 1;
  }
  pbVar1 = param_2 + 8;
  if (((param_2[8] & 2) == 0) && (bVar8 = param_1[8], (bVar8 & 2) == 0)) {
    if ((param_2[8] & 4) != 0) goto LAB_147fec9f0;
LAB_147fec9e7:
    if ((bVar8 & 4) != 0) goto LAB_147fec9f0;
  }
  else {
    bVar8 = param_1[8] | 2;
    param_1[8] = bVar8;
    *(float *)(param_1 + 0x3c0) =
         (*(float *)(param_2 + 0x3c0) - *(float *)(param_1 + 0x3c0)) * param_3 +
         *(float *)(param_1 + 0x3c0);
    param_1[0x8c0] = 1;
    if ((param_2[8] & 4) == 0) goto LAB_147fec9e7;
LAB_147fec9f0:
    bVar8 = bVar8 | 4;
    param_1[8] = bVar8;
    fVar2 = *(float *)(param_2 + 0x3d0);
    fVar15 = *(float *)(param_2 + 0x3cc);
    fVar3 = *(float *)(param_2 + 0x3c8);
    *(float *)(param_1 + 0x3c4) =
         (*(float *)(param_2 + 0x3c4) - *(float *)(param_1 + 0x3c4)) * param_3 +
         *(float *)(param_1 + 0x3c4);
    *(float *)(param_1 + 0x3c8) =
         (fVar3 - *(float *)(param_1 + 0x3c8)) * param_3 + *(float *)(param_1 + 0x3c8);
    *(float *)(param_1 + 0x3cc) =
         (fVar15 - *(float *)(param_1 + 0x3cc)) * param_3 + *(float *)(param_1 + 0x3cc);
    *(float *)(param_1 + 0x3d0) =
         (fVar2 - *(float *)(param_1 + 0x3d0)) * param_3 + *(float *)(param_1 + 0x3d0);
    param_1[0x8c0] = 1;
  }
  bVar13 = param_2[7];
  if (((bVar13 & 2) != 0) || (bVar14 = param_1[7], (bVar14 & 2) != 0)) {
    bVar14 = param_1[7] | 2;
    param_1[7] = bVar14;
    *(float *)(param_1 + 0x388) =
         (*(float *)(param_2 + 0x388) - *(float *)(param_1 + 0x388)) * param_3 +
         *(float *)(param_1 + 0x388);
    param_1[0x8c0] = 1;
    bVar13 = param_2[7];
  }
  if (((bVar13 & 4) != 0) || ((bVar14 & 4) != 0)) {
    bVar14 = bVar14 | 4;
    param_1[7] = bVar14;
    *(float *)(param_1 + 0x38c) =
         (*(float *)(param_2 + 0x38c) - *(float *)(param_1 + 0x38c)) * param_3 +
         *(float *)(param_1 + 0x38c);
    param_1[0x8c0] = 1;
    bVar13 = param_2[7];
  }
  if (((bVar13 & 8) != 0) || ((bVar14 & 8) != 0)) {
    bVar14 = bVar14 | 8;
    param_1[7] = bVar14;
    dVar4 = *(double *)(param_2 + 0x3a0);
    *(double *)(param_1 + 0x398) =
         (*(double *)(param_2 + 0x398) - *(double *)(param_1 + 0x398)) * (double)param_3 +
         *(double *)(param_1 + 0x398);
    *(double *)(param_1 + 0x3a0) =
         (dVar4 - *(double *)(param_1 + 0x3a0)) * (double)param_3 + *(double *)(param_1 + 0x3a0);
    param_1[0x8c0] = 1;
    bVar13 = param_2[7];
  }
  if (((bVar13 & 0x20) != 0) || ((bVar14 & 0x20) != 0)) {
    bVar14 = bVar14 | 0x20;
    param_1[7] = bVar14;
    *(float *)(param_1 + 0x3a8) =
         (*(float *)(param_2 + 0x3a8) - *(float *)(param_1 + 0x3a8)) * param_3 +
         *(float *)(param_1 + 0x3a8);
    param_1[0x8c0] = 1;
    bVar13 = param_2[7];
  }
  if (((bVar13 & 0x40) == 0) && ((bVar14 & 0x40) == 0)) {
    if ((char)bVar13 < '\0') goto LAB_147fecc31;
LAB_147fecc28:
    if ((char)bVar14 < '\0') goto LAB_147fecc31;
    bVar13 = param_2[4];
  }
  else {
    bVar14 = bVar14 | 0x40;
    param_1[7] = bVar14;
    *(float *)(param_1 + 0x3ac) =
         (*(float *)(param_2 + 0x3ac) - *(float *)(param_1 + 0x3ac)) * param_3 +
         *(float *)(param_1 + 0x3ac);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[7]) goto LAB_147fecc28;
LAB_147fecc31:
    param_1[7] = bVar14 | 0x80;
    *(float *)(param_1 + 0x3b0) =
         (*(float *)(param_2 + 0x3b0) - *(float *)(param_1 + 0x3b0)) * param_3 +
         *(float *)(param_1 + 0x3b0);
    param_1[0x8c0] = 1;
    bVar13 = param_2[4];
  }
  if (((char)bVar13 < '\0') || ((char)bVar9 < '\0')) {
    bVar9 = bVar9 | 0x80;
    param_1[4] = bVar9;
    *(float *)(param_1 + 0x458) =
         (*(float *)(param_2 + 0x458) - *(float *)(param_1 + 0x458)) * param_3 +
         *(float *)(param_1 + 0x458);
    param_1[0x8c0] = 1;
    if ((param_2[4] & 0x40) == 0) goto LAB_147feccac;
LAB_147feccbc:
    param_1[4] = bVar9 | 0x40;
    fVar2 = *(float *)(param_2 + 0x454);
    fVar15 = *(float *)(param_2 + 0x450);
    fVar3 = *(float *)(param_2 + 0x44c);
    *(float *)(param_1 + 0x448) =
         (*(float *)(param_2 + 0x448) - *(float *)(param_1 + 0x448)) * param_3 +
         *(float *)(param_1 + 0x448);
    *(float *)(param_1 + 0x44c) =
         (fVar3 - *(float *)(param_1 + 0x44c)) * param_3 + *(float *)(param_1 + 0x44c);
    *(float *)(param_1 + 0x450) =
         (fVar15 - *(float *)(param_1 + 0x450)) * param_3 + *(float *)(param_1 + 0x450);
    *(float *)(param_1 + 0x454) =
         (fVar2 - *(float *)(param_1 + 0x454)) * param_3 + *(float *)(param_1 + 0x454);
    param_1[0x8c0] = 1;
    bVar9 = param_2[8];
  }
  else {
    if (0x3f < bVar13) goto LAB_147feccbc;
LAB_147feccac:
    if ((bVar9 & 0x40) != 0) goto LAB_147feccbc;
    bVar9 = *pbVar1;
  }
  if (((bVar9 & 0x10) != 0) || ((bVar8 & 0x10) != 0)) {
    bVar8 = bVar8 | 0x10;
    param_1[8] = bVar8;
    *(float *)(param_1 + 0x468) =
         (*(float *)(param_2 + 0x468) - *(float *)(param_1 + 0x468)) * param_3 +
         *(float *)(param_1 + 0x468);
    param_1[0x8c0] = 1;
    bVar9 = param_2[8];
  }
  if (((bVar9 & 0x20) == 0) && ((bVar8 & 0x20) == 0)) {
    if ((char)bVar9 < '\0') goto LAB_147fecde5;
LAB_147fecde1:
    if ((char)bVar8 < '\0') goto LAB_147fecde5;
  }
  else {
    bVar8 = bVar8 | 0x20;
    param_1[8] = bVar8;
    *(float *)(param_1 + 0x46c) =
         (*(float *)(param_2 + 0x46c) - *(float *)(param_1 + 0x46c)) * param_3 +
         *(float *)(param_1 + 0x46c);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[8]) goto LAB_147fecde1;
LAB_147fecde5:
    param_1[8] = bVar8 | 0x80;
    *(float *)(param_1 + 0x4a0) =
         (*(float *)(param_2 + 0x4a0) - *(float *)(param_1 + 0x4a0)) * param_3 +
         *(float *)(param_1 + 0x4a0);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[9];
  if (((bVar8 & 1) != 0) || (bVar9 = param_1[9], (bVar9 & 1) != 0)) {
    bVar9 = param_1[9] | 1;
    param_1[9] = bVar9;
    *(float *)(param_1 + 0x4a4) =
         (*(float *)(param_2 + 0x4a4) - *(float *)(param_1 + 0x4a4)) * param_3 +
         *(float *)(param_1 + 0x4a4);
    param_1[0x8c0] = 1;
    bVar8 = param_2[9];
  }
  if (((bVar8 & 2) != 0) || ((bVar9 & 2) != 0)) {
    bVar9 = bVar9 | 2;
    param_1[9] = bVar9;
    *(float *)(param_1 + 0x4a8) =
         (*(float *)(param_2 + 0x4a8) - *(float *)(param_1 + 0x4a8)) * param_3 +
         *(float *)(param_1 + 0x4a8);
    param_1[0x8c0] = 1;
    bVar8 = param_2[9];
  }
  if (((bVar8 & 4) != 0) || ((bVar9 & 4) != 0)) {
    bVar9 = bVar9 | 4;
    param_1[9] = bVar9;
    *(float *)(param_1 + 0x4ac) =
         (*(float *)(param_2 + 0x4ac) - *(float *)(param_1 + 0x4ac)) * param_3 +
         *(float *)(param_1 + 0x4ac);
    param_1[0x8c0] = 1;
    bVar8 = param_2[9];
  }
  if (((bVar8 & 0x10) != 0) || ((bVar9 & 0x10) != 0)) {
    bVar9 = bVar9 | 0x10;
    param_1[9] = bVar9;
    *(float *)(param_1 + 0x4b0) =
         (*(float *)(param_2 + 0x4b0) - *(float *)(param_1 + 0x4b0)) * param_3 +
         *(float *)(param_1 + 0x4b0);
    param_1[0x8c0] = 1;
    bVar8 = param_2[9];
  }
  if (((bVar8 & 0x20) == 0) && ((bVar9 & 0x20) == 0)) {
    if ((bVar8 & 0x40) != 0) goto LAB_147fecf62;
LAB_147fecf5e:
    if ((bVar9 & 0x40) != 0) goto LAB_147fecf62;
  }
  else {
    bVar9 = bVar9 | 0x20;
    param_1[9] = bVar9;
    *(float *)(param_1 + 0x4b4) =
         (*(float *)(param_2 + 0x4b4) - *(float *)(param_1 + 0x4b4)) * param_3 +
         *(float *)(param_1 + 0x4b4);
    param_1[0x8c0] = 1;
    if ((param_2[9] & 0x40) == 0) goto LAB_147fecf5e;
LAB_147fecf62:
    param_1[9] = bVar9 | 0x40;
    *(float *)(param_1 + 0x47c) =
         (*(float *)(param_2 + 0x47c) - *(float *)(param_1 + 0x47c)) * param_3 +
         *(float *)(param_1 + 0x47c);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[10];
  if (((bVar8 & 4) != 0) || (bVar9 = param_1[10], (bVar9 & 4) != 0)) {
    bVar9 = param_1[10] | 4;
    param_1[10] = bVar9;
    *(float *)(param_1 + 0x4b8) =
         (*(float *)(param_2 + 0x4b8) - *(float *)(param_1 + 0x4b8)) * param_3 +
         *(float *)(param_1 + 0x4b8);
    param_1[0x8c0] = 1;
    bVar8 = param_2[10];
  }
  if (((bVar8 & 8) != 0) || ((bVar9 & 8) != 0)) {
    bVar9 = bVar9 | 8;
    param_1[10] = bVar9;
    *(float *)(param_1 + 0x4bc) =
         (*(float *)(param_2 + 0x4bc) - *(float *)(param_1 + 0x4bc)) * param_3 +
         *(float *)(param_1 + 0x4bc);
    param_1[0x8c0] = 1;
    bVar8 = param_2[10];
  }
  if ((bVar8 & 0x10) == 0) {
    if ((0.5 <= param_3) && ((bVar9 & 0x10) != 0)) {
LAB_147fed03c:
      bVar9 = bVar9 | 0x10;
      param_1[10] = bVar9;
      param_1[0x4c4] = param_2[0x4c4];
      param_1[0x8c0] = 1;
      bVar8 = param_2[10];
    }
  }
  else if (0.5 <= param_3) goto LAB_147fed03c;
  if (((bVar8 & 0x20) != 0) || ((bVar9 & 0x20) != 0)) {
    bVar9 = bVar9 | 0x20;
    param_1[10] = bVar9;
    *(float *)(param_1 + 0x4c8) =
         (*(float *)(param_2 + 0x4c8) - *(float *)(param_1 + 0x4c8)) * param_3 +
         *(float *)(param_1 + 0x4c8);
    param_1[0x8c0] = 1;
    bVar8 = param_2[10];
  }
  if (((bVar8 & 0x40) == 0) && ((bVar9 & 0x40) == 0)) {
    if ((char)bVar8 < '\0') goto LAB_147fed0dc;
LAB_147fed0d8:
    if ((char)bVar9 < '\0') goto LAB_147fed0dc;
  }
  else {
    bVar9 = bVar9 | 0x40;
    param_1[10] = bVar9;
    *(float *)(param_1 + 0x4cc) =
         (*(float *)(param_2 + 0x4cc) - *(float *)(param_1 + 0x4cc)) * param_3 +
         *(float *)(param_1 + 0x4cc);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[10]) goto LAB_147fed0d8;
LAB_147fed0dc:
    param_1[10] = bVar9 | 0x80;
    *(float *)(param_1 + 0x4d0) =
         (*(float *)(param_2 + 0x4d0) - *(float *)(param_1 + 0x4d0)) * param_3 +
         *(float *)(param_1 + 0x4d0);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[0xb];
  if (((bVar8 & 4) != 0) || (bVar9 = param_1[0xb], (bVar9 & 4) != 0)) {
    bVar9 = param_1[0xb] | 4;
    param_1[0xb] = bVar9;
    *(float *)(param_1 + 0x4e8) =
         (*(float *)(param_2 + 0x4e8) - *(float *)(param_1 + 0x4e8)) * param_3 +
         *(float *)(param_1 + 0x4e8);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xb];
  }
  if (((bVar8 & 8) != 0) || ((bVar9 & 8) != 0)) {
    bVar9 = bVar9 | 8;
    param_1[0xb] = bVar9;
    *(float *)(param_1 + 0x4ec) =
         (*(float *)(param_2 + 0x4ec) - *(float *)(param_1 + 0x4ec)) * param_3 +
         *(float *)(param_1 + 0x4ec);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xb];
  }
  if (((bVar8 & 0x10) != 0) || ((bVar9 & 0x10) != 0)) {
    bVar9 = bVar9 | 0x10;
    param_1[0xb] = bVar9;
    *(float *)(param_1 + 0x4f0) =
         (*(float *)(param_2 + 0x4f0) - *(float *)(param_1 + 0x4f0)) * param_3 +
         *(float *)(param_1 + 0x4f0);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xb];
  }
  if (((bVar8 & 0x20) != 0) || ((bVar9 & 0x20) != 0)) {
    bVar9 = bVar9 | 0x20;
    param_1[0xb] = bVar9;
    *(float *)(param_1 + 0x4f4) =
         (*(float *)(param_2 + 0x4f4) - *(float *)(param_1 + 0x4f4)) * param_3 +
         *(float *)(param_1 + 0x4f4);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xb];
  }
  if (((bVar8 & 0x40) == 0) && ((bVar9 & 0x40) == 0)) {
    if ((char)bVar8 < '\0') goto LAB_147fed252;
LAB_147fed24e:
    if ((char)bVar9 < '\0') goto LAB_147fed252;
  }
  else {
    bVar9 = bVar9 | 0x40;
    param_1[0xb] = bVar9;
    *(float *)(param_1 + 0x4f8) =
         (*(float *)(param_2 + 0x4f8) - *(float *)(param_1 + 0x4f8)) * param_3 +
         *(float *)(param_1 + 0x4f8);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[0xb]) goto LAB_147fed24e;
LAB_147fed252:
    param_1[0xb] = bVar9 | 0x80;
    *(float *)(param_1 + 0x4fc) =
         (*(float *)(param_2 + 0x4fc) - *(float *)(param_1 + 0x4fc)) * param_3 +
         *(float *)(param_1 + 0x4fc);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[0xc];
  if (((bVar8 & 1) != 0) || (bVar9 = param_1[0xc], (bVar9 & 1) != 0)) {
    bVar9 = param_1[0xc] | 1;
    param_1[0xc] = bVar9;
    *(float *)(param_1 + 0x500) =
         (*(float *)(param_2 + 0x500) - *(float *)(param_1 + 0x500)) * param_3 +
         *(float *)(param_1 + 0x500);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xc];
  }
  if (((bVar8 & 2) != 0) || ((bVar9 & 2) != 0)) {
    bVar9 = bVar9 | 2;
    param_1[0xc] = bVar9;
    fVar2 = *(float *)(param_2 + 0x510);
    fVar15 = *(float *)(param_2 + 0x50c);
    fVar3 = *(float *)(param_2 + 0x508);
    *(float *)(param_1 + 0x504) =
         (*(float *)(param_2 + 0x504) - *(float *)(param_1 + 0x504)) * param_3 +
         *(float *)(param_1 + 0x504);
    *(float *)(param_1 + 0x508) =
         (fVar3 - *(float *)(param_1 + 0x508)) * param_3 + *(float *)(param_1 + 0x508);
    *(float *)(param_1 + 0x50c) =
         (fVar15 - *(float *)(param_1 + 0x50c)) * param_3 + *(float *)(param_1 + 0x50c);
    *(float *)(param_1 + 0x510) =
         (fVar2 - *(float *)(param_1 + 0x510)) * param_3 + *(float *)(param_1 + 0x510);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xc];
  }
  if (((bVar8 & 8) != 0) || ((bVar9 & 8) != 0)) {
    bVar9 = bVar9 | 8;
    param_1[0xc] = bVar9;
    *(float *)(param_1 + 0x514) =
         (*(float *)(param_2 + 0x514) - *(float *)(param_1 + 0x514)) * param_3 +
         *(float *)(param_1 + 0x514);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xc];
  }
  if (((bVar8 & 0x20) != 0) || ((bVar9 & 0x20) != 0)) {
    bVar9 = bVar9 | 0x20;
    param_1[0xc] = bVar9;
    *(float *)(param_1 + 0x518) =
         (*(float *)(param_2 + 0x518) - *(float *)(param_1 + 0x518)) * param_3 +
         *(float *)(param_1 + 0x518);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xc];
  }
  if (((bVar8 & 0x40) == 0) && ((bVar9 & 0x40) == 0)) {
    if ((char)bVar8 < '\0') goto LAB_147fed43b;
LAB_147fed437:
    if ((char)bVar9 < '\0') goto LAB_147fed43b;
  }
  else {
    bVar9 = bVar9 | 0x40;
    param_1[0xc] = bVar9;
    *(float *)(param_1 + 0x5a8) =
         (*(float *)(param_2 + 0x5a8) - *(float *)(param_1 + 0x5a8)) * param_3 +
         *(float *)(param_1 + 0x5a8);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[0xc]) goto LAB_147fed437;
LAB_147fed43b:
    param_1[0xc] = bVar9 | 0x80;
    *(float *)(param_1 + 0x5ac) =
         (*(float *)(param_2 + 0x5ac) - *(float *)(param_1 + 0x5ac)) * param_3 +
         *(float *)(param_1 + 0x5ac);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[0xd];
  if (((bVar8 & 4) != 0) || (bVar9 = param_1[0xd], (bVar9 & 4) != 0)) {
    bVar9 = param_1[0xd] | 4;
    param_1[0xd] = bVar9;
    *(float *)(param_1 + 0x5b8) =
         (*(float *)(param_2 + 0x5b8) - *(float *)(param_1 + 0x5b8)) * param_3 +
         *(float *)(param_1 + 0x5b8);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xd];
  }
  if (((bVar8 & 8) != 0) || ((bVar9 & 8) != 0)) {
    bVar9 = bVar9 | 8;
    param_1[0xd] = bVar9;
    *(float *)(param_1 + 0x5bc) =
         (*(float *)(param_2 + 0x5bc) - *(float *)(param_1 + 0x5bc)) * param_3 +
         *(float *)(param_1 + 0x5bc);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xd];
  }
  if (((bVar8 & 0x10) != 0) || ((bVar9 & 0x10) != 0)) {
    bVar9 = bVar9 | 0x10;
    param_1[0xd] = bVar9;
    *(float *)(param_1 + 0x5c0) =
         (*(float *)(param_2 + 0x5c0) - *(float *)(param_1 + 0x5c0)) * param_3 +
         *(float *)(param_1 + 0x5c0);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xd];
  }
  if (((bVar8 & 0x20) != 0) || ((bVar9 & 0x20) != 0)) {
    bVar9 = bVar9 | 0x20;
    param_1[0xd] = bVar9;
    *(float *)(param_1 + 0x5c4) =
         (*(float *)(param_2 + 0x5c4) - *(float *)(param_1 + 0x5c4)) * param_3 +
         *(float *)(param_1 + 0x5c4);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xd];
  }
  if (((bVar8 & 0x40) == 0) && ((bVar9 & 0x40) == 0)) {
    if ((char)bVar8 < '\0') goto LAB_147fed5ad;
LAB_147fed5a9:
    if ((char)bVar9 < '\0') goto LAB_147fed5ad;
  }
  else {
    bVar9 = bVar9 | 0x40;
    param_1[0xd] = bVar9;
    *(float *)(param_1 + 0x5c8) =
         (*(float *)(param_2 + 0x5c8) - *(float *)(param_1 + 0x5c8)) * param_3 +
         *(float *)(param_1 + 0x5c8);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[0xd]) goto LAB_147fed5a9;
LAB_147fed5ad:
    param_1[0xd] = bVar9 | 0x80;
    *(float *)(param_1 + 0x5cc) =
         (*(float *)(param_2 + 0x5cc) - *(float *)(param_1 + 0x5cc)) * param_3 +
         *(float *)(param_1 + 0x5cc);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[0xe];
  if (((bVar8 & 1) != 0) || (bVar9 = param_1[0xe], (bVar9 & 1) != 0)) {
    bVar9 = param_1[0xe] | 1;
    param_1[0xe] = bVar9;
    *(float *)(param_1 + 0x5d0) =
         (*(float *)(param_2 + 0x5d0) - *(float *)(param_1 + 0x5d0)) * param_3 +
         *(float *)(param_1 + 0x5d0);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xe];
  }
  if (((bVar8 & 2) != 0) || ((bVar9 & 2) != 0)) {
    bVar9 = bVar9 | 2;
    param_1[0xe] = bVar9;
    *(float *)(param_1 + 0x5d4) =
         (*(float *)(param_2 + 0x5d4) - *(float *)(param_1 + 0x5d4)) * param_3 +
         *(float *)(param_1 + 0x5d4);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xe];
  }
  if (((bVar8 & 8) != 0) || ((bVar9 & 8) != 0)) {
    bVar9 = bVar9 | 8;
    param_1[0xe] = bVar9;
    *(float *)(param_1 + 0x5e0) =
         (*(float *)(param_2 + 0x5e0) - *(float *)(param_1 + 0x5e0)) * param_3 +
         *(float *)(param_1 + 0x5e0);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xe];
  }
  if (((bVar8 & 0x10) != 0) || ((bVar9 & 0x10) != 0)) {
    bVar9 = bVar9 | 0x10;
    param_1[0xe] = bVar9;
    *(float *)(param_1 + 0x5e4) =
         (*(float *)(param_2 + 0x5e4) - *(float *)(param_1 + 0x5e4)) * param_3 +
         *(float *)(param_1 + 0x5e4);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xe];
  }
  if (((bVar8 & 0x20) != 0) || ((bVar9 & 0x20) != 0)) {
    bVar9 = bVar9 | 0x20;
    param_1[0xe] = bVar9;
    *(float *)(param_1 + 0x5e8) =
         (*(float *)(param_2 + 0x5e8) - *(float *)(param_1 + 0x5e8)) * param_3 +
         *(float *)(param_1 + 0x5e8);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xe];
  }
  if (((bVar8 & 0x40) == 0) && ((bVar9 & 0x40) == 0)) {
    if ((char)bVar8 < '\0') goto LAB_147fed75f;
LAB_147fed75b:
    if ((char)bVar9 < '\0') goto LAB_147fed75f;
  }
  else {
    bVar9 = bVar9 | 0x40;
    param_1[0xe] = bVar9;
    *(float *)(param_1 + 0x5f0) =
         (*(float *)(param_2 + 0x5f0) - *(float *)(param_1 + 0x5f0)) * param_3 +
         *(float *)(param_1 + 0x5f0);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[0xe]) goto LAB_147fed75b;
LAB_147fed75f:
    param_1[0xe] = bVar9 | 0x80;
    *(float *)(param_1 + 0x5f4) =
         (*(float *)(param_2 + 0x5f4) - *(float *)(param_1 + 0x5f4)) * param_3 +
         *(float *)(param_1 + 0x5f4);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[0xf];
  if (((bVar8 & 1) != 0) || (bVar9 = param_1[0xf], (bVar9 & 1) != 0)) {
    bVar9 = param_1[0xf] | 1;
    param_1[0xf] = bVar9;
    *(float *)(param_1 + 0x5f8) =
         (*(float *)(param_2 + 0x5f8) - *(float *)(param_1 + 0x5f8)) * param_3 +
         *(float *)(param_1 + 0x5f8);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xf];
  }
  if (((bVar8 & 4) != 0) || ((bVar9 & 4) != 0)) {
    bVar9 = bVar9 | 4;
    param_1[0xf] = bVar9;
    *(float *)(param_1 + 0x5fc) =
         (*(float *)(param_2 + 0x5fc) - *(float *)(param_1 + 0x5fc)) * param_3 +
         *(float *)(param_1 + 0x5fc);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xf];
  }
  if (((bVar8 & 8) != 0) || ((bVar9 & 8) != 0)) {
    bVar9 = bVar9 | 8;
    param_1[0xf] = bVar9;
    *(float *)(param_1 + 0x600) =
         (*(float *)(param_2 + 0x600) - *(float *)(param_1 + 0x600)) * param_3 +
         *(float *)(param_1 + 0x600);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xf];
  }
  if (((bVar8 & 0x10) != 0) || ((bVar9 & 0x10) != 0)) {
    bVar9 = bVar9 | 0x10;
    param_1[0xf] = bVar9;
    *(float *)(param_1 + 0x604) =
         (*(float *)(param_2 + 0x604) - *(float *)(param_1 + 0x604)) * param_3 +
         *(float *)(param_1 + 0x604);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xf];
  }
  if (((bVar8 & 0x20) != 0) || ((bVar9 & 0x20) != 0)) {
    bVar9 = bVar9 | 0x20;
    param_1[0xf] = bVar9;
    *(float *)(param_1 + 0x608) =
         (*(float *)(param_2 + 0x608) - *(float *)(param_1 + 0x608)) * param_3 +
         *(float *)(param_1 + 0x608);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0xf];
  }
  if (((bVar8 & 0x40) == 0) && ((bVar9 & 0x40) == 0)) {
    if ((char)bVar8 < '\0') goto LAB_147fed911;
LAB_147fed90d:
    if ((char)bVar9 < '\0') goto LAB_147fed911;
  }
  else {
    bVar9 = bVar9 | 0x40;
    param_1[0xf] = bVar9;
    *(float *)(param_1 + 0x60c) =
         (*(float *)(param_2 + 0x60c) - *(float *)(param_1 + 0x60c)) * param_3 +
         *(float *)(param_1 + 0x60c);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[0xf]) goto LAB_147fed90d;
LAB_147fed911:
    param_1[0xf] = bVar9 | 0x80;
    *(float *)(param_1 + 0x610) =
         (*(float *)(param_2 + 0x610) - *(float *)(param_1 + 0x610)) * param_3 +
         *(float *)(param_1 + 0x610);
    param_1[0x8c0] = 1;
  }
  if (((param_2[0x10] & 1) != 0) || ((param_1[0x10] & 1) != 0)) {
    param_1[0x10] = param_1[0x10] | 1;
    *(float *)(param_1 + 0x614) =
         (*(float *)(param_2 + 0x614) - *(float *)(param_1 + 0x614)) * param_3 +
         *(float *)(param_1 + 0x614);
    param_1[0x8c0] = 1;
  }
  if (((char)param_2[0x19] < '\0') || ((char)param_1[0x19] < '\0')) {
    param_1[0x19] = param_1[0x19] | 0x80;
    fVar2 = *(float *)(param_2 + 0x3e4);
    fVar15 = *(float *)(param_2 + 0x3e0);
    fVar3 = *(float *)(param_2 + 0x3dc);
    *(float *)(param_1 + 0x3d8) =
         (*(float *)(param_2 + 0x3d8) - *(float *)(param_1 + 0x3d8)) * param_3 +
         *(float *)(param_1 + 0x3d8);
    *(float *)(param_1 + 0x3dc) =
         (fVar3 - *(float *)(param_1 + 0x3dc)) * param_3 + *(float *)(param_1 + 0x3dc);
    *(float *)(param_1 + 0x3e0) =
         (fVar15 - *(float *)(param_1 + 0x3e0)) * param_3 + *(float *)(param_1 + 0x3e0);
    *(float *)(param_1 + 0x3e4) =
         (fVar2 - *(float *)(param_1 + 0x3e4)) * param_3 + *(float *)(param_1 + 0x3e4);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[0x1a];
  if (((bVar8 & 1) != 0) || (bVar9 = param_1[0x1a], (bVar9 & 1) != 0)) {
    bVar9 = param_1[0x1a] | 1;
    param_1[0x1a] = bVar9;
    *(float *)(param_1 + 1000) =
         (*(float *)(param_2 + 1000) - *(float *)(param_1 + 1000)) * param_3 +
         *(float *)(param_1 + 1000);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0x1a];
  }
  if ((bVar8 & 8) != 0) {
    fVar2 = *(float *)(param_1 + 0x640);
    fVar15 = *(float *)(param_2 + 0x640);
    if (fVar15 != 0.0 && fVar2 != 0.0) {
      fVar15 = (fVar15 - fVar2) * param_3 + fVar2;
    }
    *(float *)(param_1 + 0x640) = fVar15;
    bVar8 = param_2[0x1a];
  }
  if (((bVar8 | bVar9) & 0x10) != 0) {
    bVar9 = bVar9 | 0x10;
    param_1[0x1a] = bVar9;
    *(float *)(param_1 + 0x470) =
         (*(float *)(param_2 + 0x470) - *(float *)(param_1 + 0x470)) * param_3 +
         *(float *)(param_1 + 0x470);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0x1a];
  }
  if (((bVar8 & 0x20) == 0) && ((bVar9 & 0x20) == 0)) {
    if ((char)bVar8 < '\0') goto LAB_147fedb43;
LAB_147fedb3f:
    if ((char)bVar9 < '\0') goto LAB_147fedb43;
  }
  else {
    bVar9 = bVar9 | 0x20;
    param_1[0x1a] = bVar9;
    *(float *)(param_1 + 0x474) =
         (*(float *)(param_2 + 0x474) - *(float *)(param_1 + 0x474)) * param_3 +
         *(float *)(param_1 + 0x474);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[0x1a]) goto LAB_147fedb3f;
LAB_147fedb43:
    param_1[0x1a] = bVar9 | 0x80;
    *(float *)(param_1 + 0x638) =
         (*(float *)(param_2 + 0x638) - *(float *)(param_1 + 0x638)) * param_3 +
         *(float *)(param_1 + 0x638);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[0x1b];
  if (((bVar8 & 1) != 0) || (bVar9 = param_1[0x1b], (bVar9 & 1) != 0)) {
    bVar9 = param_1[0x1b] | 1;
    param_1[0x1b] = bVar9;
    *(float *)(param_1 + 0x63c) =
         (*(float *)(param_2 + 0x63c) - *(float *)(param_1 + 0x63c)) * param_3 +
         *(float *)(param_1 + 0x63c);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0x1b];
  }
  if (((bVar8 & 2) != 0) || ((bVar9 & 2) != 0)) {
    bVar9 = bVar9 | 2;
    param_1[0x1b] = bVar9;
    *(float *)(param_1 + 0x648) =
         (*(float *)(param_2 + 0x648) - *(float *)(param_1 + 0x648)) * param_3 +
         *(float *)(param_1 + 0x648);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0x1b];
  }
  if ((bVar8 & 4) == 0) {
    if ((0.5 <= param_3) && ((bVar9 & 4) != 0)) {
LAB_147fedc14:
      bVar9 = bVar9 | 4;
      param_1[0x1b] = bVar9;
      *(uint *)(param_1 + 0x64c) =
           *(uint *)(param_1 + 0x64c) & 0xfffffffe | *(uint *)(param_2 + 0x64c) & 1;
      param_1[0x8c0] = 1;
      bVar8 = param_2[0x1b];
    }
  }
  else if (0.5 <= param_3) goto LAB_147fedc14;
  if (((bVar8 & 8) != 0) || ((bVar9 & 8) != 0)) {
    bVar9 = bVar9 | 8;
    param_1[0x1b] = bVar9;
    *(float *)(param_1 + 0x644) =
         (*(float *)(param_2 + 0x644) - *(float *)(param_1 + 0x644)) * param_3 +
         *(float *)(param_1 + 0x644);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0x1b];
  }
  if (((bVar8 & 0x10) != 0) || ((bVar9 & 0x10) != 0)) {
    bVar9 = bVar9 | 0x10;
    param_1[0x1b] = bVar9;
    *(float *)(param_1 + 0x650) =
         (*(float *)(param_2 + 0x650) - *(float *)(param_1 + 0x650)) * param_3 +
         *(float *)(param_1 + 0x650);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0x1b];
  }
  if (((bVar8 & 0x20) != 0) || ((bVar9 & 0x20) != 0)) {
    bVar9 = bVar9 | 0x20;
    param_1[0x1b] = bVar9;
    *(float *)(param_1 + 0x654) =
         (*(float *)(param_2 + 0x654) - *(float *)(param_1 + 0x654)) * param_3 +
         *(float *)(param_1 + 0x654);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0x1b];
  }
  if (((bVar8 & 0x40) == 0) && ((bVar9 & 0x40) == 0)) {
    if ((char)bVar8 < '\0') goto LAB_147fedd3a;
LAB_147fedd36:
    if ((char)bVar9 < '\0') goto LAB_147fedd3a;
  }
  else {
    bVar9 = bVar9 | 0x40;
    param_1[0x1b] = bVar9;
    *(float *)(param_1 + 0x658) =
         (*(float *)(param_2 + 0x658) - *(float *)(param_1 + 0x658)) * param_3 +
         *(float *)(param_1 + 0x658);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[0x1b]) goto LAB_147fedd36;
LAB_147fedd3a:
    param_1[0x1b] = bVar9 | 0x80;
    *(float *)(param_1 + 0x65c) =
         (*(float *)(param_2 + 0x65c) - *(float *)(param_1 + 0x65c)) * param_3 +
         *(float *)(param_1 + 0x65c);
    param_1[0x8c0] = 1;
  }
  bVar8 = param_2[0x1c];
  if (((bVar8 & 1) != 0) || (bVar9 = param_1[0x1c], (bVar9 & 1) != 0)) {
    bVar9 = param_1[0x1c] | 1;
    param_1[0x1c] = bVar9;
    *(float *)(param_1 + 0x660) =
         (*(float *)(param_2 + 0x660) - *(float *)(param_1 + 0x660)) * param_3 +
         *(float *)(param_1 + 0x660);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0x1c];
  }
  if (((bVar8 & 2) != 0) || ((bVar9 & 2) != 0)) {
    bVar9 = bVar9 | 2;
    param_1[0x1c] = bVar9;
    *(float *)(param_1 + 0x664) =
         (*(float *)(param_2 + 0x664) - *(float *)(param_1 + 0x664)) * param_3 +
         *(float *)(param_1 + 0x664);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0x1c];
  }
  if (((bVar8 & 8) != 0) || ((bVar9 & 8) != 0)) {
    bVar9 = bVar9 | 8;
    param_1[0x1c] = bVar9;
    *(float *)(param_1 + 0x668) =
         (*(float *)(param_2 + 0x668) - *(float *)(param_1 + 0x668)) * param_3 +
         *(float *)(param_1 + 0x668);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0x1c];
  }
  if (((bVar8 & 0x10) != 0) || ((bVar9 & 0x10) != 0)) {
    bVar9 = bVar9 | 0x10;
    param_1[0x1c] = bVar9;
    *(float *)(param_1 + 0x66c) =
         (*(float *)(param_2 + 0x66c) - *(float *)(param_1 + 0x66c)) * param_3 +
         *(float *)(param_1 + 0x66c);
    param_1[0x8c0] = 1;
    bVar8 = param_2[0x1c];
  }
  if (((bVar8 & 0x20) == 0) && ((bVar9 & 0x20) == 0)) {
    if ((char)bVar8 < '\0') goto LAB_147fedeb0;
LAB_147fedeac:
    if ((char)bVar9 < '\0') goto LAB_147fedeb0;
  }
  else {
    bVar9 = bVar9 | 0x20;
    param_1[0x1c] = bVar9;
    *(float *)(param_1 + 0x670) =
         (*(float *)(param_2 + 0x670) - *(float *)(param_1 + 0x670)) * param_3 +
         *(float *)(param_1 + 0x670);
    param_1[0x8c0] = 1;
    if (-1 < (char)param_2[0x1c]) goto LAB_147fedeac;
LAB_147fedeb0:
    param_1[0x1c] = bVar9 | 0x80;
    *(float *)(param_1 + 0x678) =
         (*(float *)(param_2 + 0x678) - *(float *)(param_1 + 0x678)) * param_3 +
         *(float *)(param_1 + 0x678);
    param_1[0x8c0] = 1;
  }
  if (((param_2[0x1d] & 1) == 0) && (bVar8 = param_1[0x1d], (bVar8 & 1) == 0)) {
    if ((param_2[0x1d] & 4) != 0) goto LAB_147fedf37;
LAB_147fedf33:
    if ((bVar8 & 4) != 0) goto LAB_147fedf37;
  }
  else {
    bVar8 = param_1[0x1d] | 1;
    param_1[0x1d] = bVar8;
    *(float *)(param_1 + 0x67c) =
         (*(float *)(param_2 + 0x67c) - *(float *)(param_1 + 0x67c)) * param_3 +
         *(float *)(param_1 + 0x67c);
    param_1[0x8c0] = 1;
    if ((param_2[0x1d] & 4) == 0) goto LAB_147fedf33;
LAB_147fedf37:
    bVar8 = bVar8 | 4;
    param_1[0x1d] = bVar8;
    *(float *)(param_1 + 0x684) =
         (*(float *)(param_2 + 0x684) - *(float *)(param_1 + 0x684)) * param_3 +
         *(float *)(param_1 + 0x684);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0x1e];
  if (((bVar9 & 2) != 0) || (bVar13 = param_1[0x1e], (bVar13 & 2) != 0)) {
    bVar13 = param_1[0x1e] | 2;
    param_1[0x1e] = bVar13;
    *(float *)(param_1 + 0x43c) =
         (*(float *)(param_2 + 0x43c) - *(float *)(param_1 + 0x43c)) * param_3 +
         *(float *)(param_1 + 0x43c);
    param_1[0x8c0] = 1;
    bVar9 = param_2[0x1e];
  }
  if (((bVar9 & 1) == 0) && ((bVar13 & 1) == 0)) {
    if ((bVar9 & 4) != 0) goto LAB_147fee004;
LAB_147fedfff:
    if ((bVar13 & 4) != 0) goto LAB_147fee004;
  }
  else {
    bVar13 = bVar13 | 1;
    param_1[0x1e] = bVar13;
    *(float *)(param_1 + 0x438) =
         (*(float *)(param_2 + 0x438) - *(float *)(param_1 + 0x438)) * param_3 +
         *(float *)(param_1 + 0x438);
    param_1[0x8c0] = 1;
    if ((param_2[0x1e] & 4) == 0) goto LAB_147fedfff;
LAB_147fee004:
    param_1[0x1e] = bVar13 | 4;
    *(float *)(param_1 + 0x440) =
         (*(float *)(param_2 + 0x440) - *(float *)(param_1 + 0x440)) * param_3 +
         *(float *)(param_1 + 0x440);
    param_1[0x8c0] = 1;
  }
  uVar11 = *(uint *)(param_2 + 0x20);
  if ((uVar11 & 0x40) == 0) {
    uVar12 = *(uint *)(param_1 + 0x20);
    if ((uVar12 & 0x40) != 0 && 0.5 <= param_3) {
LAB_147fee07b:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x40;
      param_1[0x6c4] = param_2[0x6c4];
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
      goto LAB_147fee099;
    }
    if (-1 < (char)uVar11) goto LAB_147fee0a1;
LAB_147fee0c6:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
LAB_147fee0d8:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x80;
      *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_2 + 0x6c8);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
    }
    if ((uVar11 >> 8 & 1) == 0) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee107;
    }
LAB_147fee124:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee131;
    }
LAB_147fee152:
    if ((uVar11 >> 9 & 1) == 0) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee15c;
    }
LAB_147fee179:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee186;
    }
LAB_147fee1a7:
    if ((uVar11 >> 10 & 1) == 0) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee1b1;
    }
LAB_147fee1ce:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee1db;
    }
LAB_147fee1fc:
    if ((uVar11 >> 0xb & 1) != 0) goto LAB_147fee223;
    uVar12 = *(uint *)(param_1 + 0x20);
LAB_147fee206:
    if ((0.5 <= param_3) && ((uVar12 & 0x800) != 0)) goto LAB_147fee230;
    if ((uVar11 >> 0xc & 1) != 0) goto LAB_147fee283;
LAB_147fee26d:
    if ((0.5 <= param_3) && ((uVar12 & 0x1000) != 0)) {
LAB_147fee290:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x1000;
      param_1[0x3d4] = param_2[0x3d4];
      param_1[0x8c0] = 1;
    }
  }
  else {
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee07b;
    }
LAB_147fee099:
    if ((char)uVar11 < '\0') goto LAB_147fee0c6;
    uVar12 = *(uint *)(param_1 + 0x20);
LAB_147fee0a1:
    if ((char)uVar12 < '\0' && 0.5 <= param_3) goto LAB_147fee0d8;
    if ((uVar11 >> 8 & 1) != 0) goto LAB_147fee124;
LAB_147fee107:
    if ((0.5 <= param_3) && ((uVar12 & 0x100) != 0)) {
LAB_147fee131:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x100;
      *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(param_2 + 0x6cc);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
      goto LAB_147fee152;
    }
    if ((uVar11 >> 9 & 1) != 0) goto LAB_147fee179;
LAB_147fee15c:
    if ((0.5 <= param_3) && ((uVar12 & 0x200) != 0)) {
LAB_147fee186:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x200;
      *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_2 + 0x6d0);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
      goto LAB_147fee1a7;
    }
    if ((uVar11 >> 10 & 1) != 0) goto LAB_147fee1ce;
LAB_147fee1b1:
    if ((0.5 <= param_3) && ((uVar12 & 0x400) != 0)) {
LAB_147fee1db:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x400;
      param_1[0x6d4] = param_2[0x6d4];
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
      goto LAB_147fee1fc;
    }
    if ((uVar11 >> 0xb & 1) == 0) goto LAB_147fee206;
LAB_147fee223:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
LAB_147fee230:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x800;
      param_1[0x6d5] = param_1[0x6d5] & 0xfe | param_2[0x6d5] & 1;
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
    }
    if ((uVar11 >> 0xc & 1) == 0) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee26d;
    }
LAB_147fee283:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee290;
    }
  }
  if ((param_2[0x2c] & 1) == 0) {
    bVar9 = param_1[0x2c];
    if ((bVar9 & 1) != 0 && 0.5 <= param_3) {
LAB_147fee2dc:
      param_1[0x2c] = bVar9 | 1;
      *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_2 + 0x41c);
      param_1[0x8c0] = 1;
    }
  }
  else if (0.5 <= param_3) {
    bVar9 = param_1[0x2c];
    goto LAB_147fee2dc;
  }
  uVar11 = *(uint *)(param_2 + 0x20);
  if ((uVar11 >> 0xd & 1) == 0) {
    uVar12 = *(uint *)(param_1 + 0x20);
    if ((uVar12 >> 0xd & 1) != 0 && 0.5 <= param_3) {
LAB_147fee330:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x2000;
      *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
      goto LAB_147fee353;
    }
    if ((uVar11 >> 0xe & 1) == 0) goto LAB_147fee35c;
LAB_147fee37b:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
LAB_147fee387:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x4000;
      *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_2 + 0x3f4);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
    }
    if (-1 < (short)uVar11) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee3b2;
    }
LAB_147fee3cf:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee3db;
    }
LAB_147fee3fe:
    if ((uVar11 >> 0x10 & 1) == 0) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee407;
    }
LAB_147fee424:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee430;
    }
LAB_147fee453:
    if ((uVar11 >> 0x11 & 1) == 0) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee45c;
    }
LAB_147fee479:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee485;
    }
LAB_147fee4a8:
    if ((uVar11 >> 0x12 & 1) != 0) goto LAB_147fee4ce;
    uVar12 = *(uint *)(param_1 + 0x20);
LAB_147fee4b1:
    if ((0.5 <= param_3) && ((uVar12 & 0x40000) != 0)) goto LAB_147fee4da;
    if ((uVar11 >> 0x13 & 1) != 0) goto LAB_147fee523;
LAB_147fee506:
    if ((0.5 <= param_3) && ((uVar12 & 0x80000) != 0)) {
LAB_147fee52f:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x80000;
      param_1[0x408] = param_1[0x408] & 0xfe | param_2[0x408] & 1;
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
      goto LAB_147fee55c;
    }
    if ((uVar11 >> 0x14 & 1) != 0) goto LAB_147fee582;
LAB_147fee565:
    if ((0.5 <= param_3) && ((uVar12 & 0x100000) != 0)) {
LAB_147fee58e:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x100000;
      *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x40c);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
      goto LAB_147fee5b1;
    }
    if ((uVar11 >> 0x15 & 1) == 0) goto LAB_147fee5ba;
LAB_147fee5c0:
    uVar12 = uVar12 | 0x200000;
    *(uint *)(param_1 + 0x20) = uVar12;
    *(float *)(param_1 + 0x410) =
         (*(float *)(param_2 + 0x410) - *(float *)(param_1 + 0x410)) * param_3 +
         *(float *)(param_1 + 0x410);
    param_1[0x8c0] = 1;
    uVar11 = *(uint *)(param_2 + 0x20);
  }
  else {
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee330;
    }
LAB_147fee353:
    if ((uVar11 >> 0xe & 1) != 0) goto LAB_147fee37b;
    uVar12 = *(uint *)(param_1 + 0x20);
LAB_147fee35c:
    if ((uVar12 >> 0xe & 1) != 0 && 0.5 <= param_3) goto LAB_147fee387;
    if ((short)uVar11 < 0) goto LAB_147fee3cf;
LAB_147fee3b2:
    if ((0.5 <= param_3) && ((uVar12 & 0x8000) != 0)) {
LAB_147fee3db:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x8000;
      *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 0x3f8);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
      goto LAB_147fee3fe;
    }
    if ((uVar11 >> 0x10 & 1) != 0) goto LAB_147fee424;
LAB_147fee407:
    if ((0.5 <= param_3) && ((uVar12 & 0x10000) != 0)) {
LAB_147fee430:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x10000;
      *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_2 + 0x3fc);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
      goto LAB_147fee453;
    }
    if ((uVar11 >> 0x11 & 1) != 0) goto LAB_147fee479;
LAB_147fee45c:
    if ((0.5 <= param_3) && ((uVar12 & 0x20000) != 0)) {
LAB_147fee485:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x20000;
      *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
      goto LAB_147fee4a8;
    }
    if ((uVar11 >> 0x12 & 1) == 0) goto LAB_147fee4b1;
LAB_147fee4ce:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
LAB_147fee4da:
      *(uint *)(param_1 + 0x20) = uVar12 | 0x40000;
      *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_2 + 0x404);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x20);
    }
    if ((uVar11 >> 0x13 & 1) == 0) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee506;
    }
LAB_147fee523:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee52f;
    }
LAB_147fee55c:
    if ((uVar11 >> 0x14 & 1) == 0) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee565;
    }
LAB_147fee582:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x20);
      goto LAB_147fee58e;
    }
LAB_147fee5b1:
    uVar12 = *(uint *)(param_1 + 0x20);
    if ((uVar11 >> 0x15 & 1) != 0) goto LAB_147fee5c0;
LAB_147fee5ba:
    if ((uVar12 >> 0x15 & 1) != 0) goto LAB_147fee5c0;
  }
  if (((uVar11 >> 0x16 & 1) == 0) && ((uVar12 >> 0x16 & 1) == 0)) {
    if ((uVar11 >> 0x17 & 1) != 0) goto LAB_147fee64b;
LAB_147fee645:
    if ((uVar12 >> 0x17 & 1) != 0) goto LAB_147fee64b;
  }
  else {
    uVar12 = uVar12 | 0x400000;
    *(uint *)(param_1 + 0x20) = uVar12;
    *(float *)(param_1 + 0x414) =
         (*(float *)(param_2 + 0x414) - *(float *)(param_1 + 0x414)) * param_3 +
         *(float *)(param_1 + 0x414);
    param_1[0x8c0] = 1;
    if ((param_2[0x22] & 0x80) == 0) goto LAB_147fee645;
LAB_147fee64b:
    *(uint *)(param_1 + 0x20) = uVar12 | 0x800000;
    *(float *)(param_1 + 0x418) =
         (*(float *)(param_2 + 0x418) - *(float *)(param_1 + 0x418)) * param_3 +
         *(float *)(param_1 + 0x418);
    param_1[0x8c0] = 1;
  }
  bVar9 = param_2[0x24];
  if ((bVar9 & 1) == 0) {
    bVar13 = param_1[0x24];
    if ((bVar13 & 1) != 0 && 0.5 <= param_3) {
LAB_147fee6b4:
      param_1[0x24] = bVar13 | 1;
      param_1[0x3ec] = param_2[0x3ec];
      param_1[0x8c0] = 1;
      bVar9 = param_2[0x24];
      goto LAB_147fee6d0;
    }
    if ((bVar9 & 2) == 0) goto LAB_147fee6d8;
LAB_147fee6f6:
    if (0.5 <= param_3) {
      bVar13 = param_1[0x24];
LAB_147fee702:
      param_1[0x24] = bVar13 | 2;
      param_1[0x428] = param_1[0x428] & 0xfe | param_2[0x428] & 1;
      param_1[0x8c0] = 1;
      bVar9 = param_2[0x24];
    }
    if ((bVar9 & 4) == 0) {
      bVar13 = param_1[0x24];
      goto LAB_147fee734;
    }
LAB_147fee746:
    if (0.5 <= param_3) {
      bVar13 = param_1[0x24];
      goto LAB_147fee752;
    }
  }
  else {
    if (0.5 <= param_3) {
      bVar13 = param_1[0x24];
      goto LAB_147fee6b4;
    }
LAB_147fee6d0:
    if ((bVar9 & 2) != 0) goto LAB_147fee6f6;
    bVar13 = param_1[0x24];
LAB_147fee6d8:
    if ((bVar13 & 2) != 0 && 0.5 <= param_3) goto LAB_147fee702;
    if ((bVar9 & 4) != 0) goto LAB_147fee746;
LAB_147fee734:
    if ((0.5 <= param_3) && ((bVar13 & 4) != 0)) {
LAB_147fee752:
      param_1[0x24] = bVar13 | 4;
      param_1[0x428] = param_1[0x428] & 0xfd | param_2[0x428] & 2;
      param_1[0x8c0] = 1;
    }
  }
  uVar11 = *(uint *)(param_2 + 0x28);
  if ((uVar11 & 1) == 0) {
    uVar12 = *(uint *)(param_1 + 0x28);
    if ((uVar12 & 1) != 0 && 0.5 <= param_3) {
LAB_147fee7ae:
      *(uint *)(param_1 + 0x28) = uVar12 | 1;
      *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x42c);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x28);
      goto LAB_147fee7ce;
    }
    if ((uVar11 & 2) == 0) goto LAB_147fee7d6;
LAB_147fee7f4:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x28);
LAB_147fee800:
      *(uint *)(param_1 + 0x28) = uVar12 | 2;
      *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x430);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x28);
    }
    if ((uVar11 & 4) == 0) {
      uVar12 = *(uint *)(param_1 + 0x28);
      goto LAB_147fee824;
    }
LAB_147fee836:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x28);
      goto LAB_147fee842;
    }
  }
  else {
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x28);
      goto LAB_147fee7ae;
    }
LAB_147fee7ce:
    if ((uVar11 & 2) != 0) goto LAB_147fee7f4;
    uVar12 = *(uint *)(param_1 + 0x28);
LAB_147fee7d6:
    if ((uVar12 & 2) != 0 && 0.5 <= param_3) goto LAB_147fee800;
    if ((uVar11 & 4) != 0) goto LAB_147fee836;
LAB_147fee824:
    if ((0.5 <= param_3) && ((uVar12 & 4) != 0)) {
LAB_147fee842:
      *(uint *)(param_1 + 0x28) = uVar12 | 4;
      *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_2 + 0x434);
      param_1[0x8c0] = 1;
    }
  }
  bVar9 = param_2[0x1d];
  if ((bVar9 & 0x40) == 0) {
    if ((0.5 <= param_3) && ((bVar8 & 0x40) != 0)) {
LAB_147fee87e:
      bVar8 = bVar8 | 0x40;
      param_1[0x1d] = bVar8;
      param_1[0x420] = param_2[0x420];
      param_1[0x8c0] = 1;
      bVar9 = param_2[0x1d];
    }
  }
  else if (0.5 <= param_3) goto LAB_147fee87e;
  if ((char)bVar9 < '\0') {
    if (0.5 <= param_3) goto LAB_147fee8ae;
  }
  else if ((0.5 <= param_3) && ((char)bVar8 < '\0')) {
LAB_147fee8ae:
    param_1[0x1d] = bVar8 | 0x80;
    *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(param_2 + 0x424);
    param_1[0x8c0] = 1;
  }
  uVar11 = *(uint *)(param_2 + 0x14);
  if ((uVar11 & 1) == 0) {
    uVar12 = *(uint *)(param_1 + 0x14);
    if ((uVar12 & 1) != 0 && 0.5 <= param_3) {
LAB_147fee8fc:
      *(uint *)(param_1 + 0x14) = uVar12 | 1;
      *(uint *)(param_1 + 0x618) =
           *(uint *)(param_1 + 0x618) & 0xfffffffe | *(uint *)(param_2 + 0x618) & 1;
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x14);
      goto LAB_147fee926;
    }
    if ((uVar11 & 2) == 0) goto LAB_147fee92d;
LAB_147fee949:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x14);
LAB_147fee955:
      *(uint *)(param_1 + 0x14) = uVar12 | 2;
      *(undefined4 *)(param_1 + 0x61c) = *(undefined4 *)(param_2 + 0x61c);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x14);
    }
    if ((uVar11 & 4) == 0) {
      uVar12 = *(uint *)(param_1 + 0x14);
      goto LAB_147fee978;
    }
LAB_147fee98e:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x14);
      goto LAB_147fee99a;
    }
LAB_147fee9ba:
    if ((uVar11 & 8) == 0) {
      uVar12 = *(uint *)(param_1 + 0x14);
      goto LAB_147fee9c1;
    }
LAB_147fee9d3:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x14);
      goto LAB_147fee9df;
    }
  }
  else {
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x14);
      goto LAB_147fee8fc;
    }
LAB_147fee926:
    if ((uVar11 & 2) != 0) goto LAB_147fee949;
    uVar12 = *(uint *)(param_1 + 0x14);
LAB_147fee92d:
    if ((uVar12 & 2) != 0 && 0.5 <= param_3) goto LAB_147fee955;
    if ((uVar11 & 4) != 0) goto LAB_147fee98e;
LAB_147fee978:
    if ((0.5 <= param_3) && ((uVar12 & 4) != 0)) {
LAB_147fee99a:
      *(uint *)(param_1 + 0x14) = uVar12 | 4;
      *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_2 + 0x620);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x14);
      goto LAB_147fee9ba;
    }
    if ((uVar11 & 8) != 0) goto LAB_147fee9d3;
LAB_147fee9c1:
    if ((0.5 <= param_3) && ((uVar12 & 8) != 0)) {
LAB_147fee9df:
      *(uint *)(param_1 + 0x14) = uVar12 | 8;
      *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_2 + 0x624);
      param_1[0x8c0] = 1;
    }
  }
  uVar11 = *(uint *)(param_2 + 0x30);
  if ((uVar11 & 8) == 0) {
    uVar12 = *(uint *)(param_1 + 0x30);
    if ((uVar12 & 8) != 0 && 0.5 <= param_3) {
LAB_147feea2f:
      *(uint *)(param_1 + 0x30) = uVar12 | 8;
      *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_2 + 0x6d8);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x30);
      goto LAB_147feea4b;
    }
    if ((uVar11 & 0x10) == 0) goto LAB_147feea53;
LAB_147feea74:
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x30);
LAB_147feea99:
      *(uint *)(param_1 + 0x30) = uVar12 | 0x10;
      *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(param_2 + 0x6dc);
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x30);
    }
    uVar12 = *(uint *)(param_1 + 0x30);
    if ((uVar11 & 0x20) != 0) goto LAB_147feeac6;
LAB_147feeac2:
    if ((uVar12 & 0x20) != 0) goto LAB_147feeac6;
  }
  else {
    if (0.5 <= param_3) {
      uVar12 = *(uint *)(param_1 + 0x30);
      goto LAB_147feea2f;
    }
LAB_147feea4b:
    if ((uVar11 & 0x10) != 0) goto LAB_147feea74;
    uVar12 = *(uint *)(param_1 + 0x30);
LAB_147feea53:
    if ((uVar12 & 0x10) != 0 && 0.5 <= param_3) goto LAB_147feea99;
    if ((uVar11 & 0x20) == 0) goto LAB_147feeac2;
LAB_147feeac6:
    uVar12 = uVar12 | 0x20;
    *(uint *)(param_1 + 0x30) = uVar12;
    *(float *)(param_1 + 0x6e0) =
         (*(float *)(param_2 + 0x6e0) - *(float *)(param_1 + 0x6e0)) * param_3 +
         *(float *)(param_1 + 0x6e0);
    param_1[0x8c0] = 1;
    uVar11 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar11 & 0x40) == 0) {
    if ((0.5 <= param_3) && ((uVar12 & 0x40) != 0)) {
LAB_147feeb1a:
      uVar12 = uVar12 | 0x40;
      *(uint *)(param_1 + 0x30) = uVar12;
      *(uint *)(param_1 + 0x6e4) =
           *(uint *)(param_1 + 0x6e4) & 0xfffffffe | *(uint *)(param_2 + 0x6e4) & 1;
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x30);
    }
  }
  else if (0.5 <= param_3) goto LAB_147feeb1a;
  if ((char)uVar11 < '\0') {
    if (0.5 <= param_3) goto LAB_147feeb66;
  }
  else if ((0.5 <= param_3) && ((uVar12 & 0x80) != 0)) {
LAB_147feeb66:
    uVar12 = uVar12 | 0x80;
    *(uint *)(param_1 + 0x30) = uVar12;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xfffffffd | *(uint *)(param_2 + 0x6e4) & 2;
    param_1[0x8c0] = 1;
    uVar11 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar11 >> 8 & 1) == 0) {
    if ((0.5 <= param_3) && ((uVar12 & 0x100) != 0)) {
LAB_147feebb6:
      uVar12 = uVar12 | 0x100;
      *(uint *)(param_1 + 0x30) = uVar12;
      *(uint *)(param_1 + 0x6e4) =
           *(uint *)(param_1 + 0x6e4) & 0xfffffffb | *(uint *)(param_2 + 0x6e4) & 4;
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x30);
    }
  }
  else if (0.5 <= param_3) goto LAB_147feebb6;
  if ((uVar11 >> 9 & 1) == 0) {
    if ((0.5 <= param_3) && ((uVar12 & 0x200) != 0)) {
LAB_147feec06:
      uVar12 = uVar12 | 0x200;
      *(uint *)(param_1 + 0x30) = uVar12;
      *(uint *)(param_1 + 0x6e4) =
           *(uint *)(param_1 + 0x6e4) & 0xfffffff7 | *(uint *)(param_2 + 0x6e4) & 8;
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x30);
    }
  }
  else if (0.5 <= param_3) goto LAB_147feec06;
  if ((uVar11 >> 10 & 1) == 0) {
    if ((0.5 <= param_3) && ((uVar12 & 0x400) != 0)) {
LAB_147feec56:
      uVar12 = uVar12 | 0x400;
      *(uint *)(param_1 + 0x30) = uVar12;
      *(uint *)(param_1 + 0x6e4) =
           *(uint *)(param_1 + 0x6e4) & 0xffffffef | *(uint *)(param_2 + 0x6e4) & 0x10;
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x30);
    }
  }
  else if (0.5 <= param_3) goto LAB_147feec56;
  if ((uVar11 >> 0xb & 1) == 0) {
    if ((0.5 <= param_3) && ((uVar12 & 0x800) != 0)) {
LAB_147feeca6:
      uVar12 = uVar12 | 0x800;
      *(uint *)(param_1 + 0x30) = uVar12;
      *(uint *)(param_1 + 0x6e4) =
           *(uint *)(param_1 + 0x6e4) & 0xffffffdf | *(uint *)(param_2 + 0x6e4) & 0x20;
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x30);
    }
  }
  else if (0.5 <= param_3) goto LAB_147feeca6;
  if ((uVar11 >> 0xc & 1) == 0) {
    if ((0.5 <= param_3) && ((uVar12 & 0x1000) != 0)) {
LAB_147feecf6:
      uVar12 = uVar12 | 0x1000;
      *(uint *)(param_1 + 0x30) = uVar12;
      *(uint *)(param_1 + 0x6e4) =
           *(uint *)(param_1 + 0x6e4) & 0xffffffbf | *(uint *)(param_2 + 0x6e4) & 0x40;
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x30);
    }
  }
  else if (0.5 <= param_3) goto LAB_147feecf6;
  if ((uVar11 >> 0xd & 1) == 0) {
    if ((0.5 <= param_3) && ((uVar12 & 0x2000) != 0)) {
LAB_147feed46:
      uVar12 = uVar12 | 0x2000;
      *(uint *)(param_1 + 0x30) = uVar12;
      *(uint *)(param_1 + 0x6e4) =
           *(uint *)(param_1 + 0x6e4) & 0xffffff7f | *(uint *)(param_2 + 0x6e4) & 0x80;
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x30);
    }
  }
  else if (0.5 <= param_3) goto LAB_147feed46;
  if ((uVar11 >> 0xe & 1) == 0) {
    if ((0.5 <= param_3) && ((uVar12 & 0x4000) != 0)) {
LAB_147feed9a:
      uVar12 = uVar12 | 0x4000;
      *(uint *)(param_1 + 0x30) = uVar12;
      *(uint *)(param_1 + 0x6e4) =
           *(uint *)(param_1 + 0x6e4) & 0xfffffeff | *(uint *)(param_2 + 0x6e4) & 0x100;
      param_1[0x8c0] = 1;
      uVar11 = *(uint *)(param_2 + 0x30);
    }
  }
  else if (0.5 <= param_3) goto LAB_147feed9a;
  if ((short)uVar11 < 0) {
    if (0.5 <= param_3) goto LAB_147feeded;
  }
  else if ((0.5 <= param_3) && ((uVar12 & 0x8000) != 0)) {
LAB_147feeded:
    uVar12 = uVar12 | 0x8000;
    *(uint *)(param_1 + 0x30) = uVar12;
    *(uint *)(param_1 + 0x6e4) =
         *(uint *)(param_1 + 0x6e4) & 0xfffffdff | *(uint *)(param_2 + 0x6e4) & 0x200;
    param_1[0x8c0] = 1;
    uVar11 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar11 >> 0x10 & 1) == 0) {
    if ((0.5 <= param_3) && ((uVar12 & 0x10000) != 0)) {
LAB_147feee41:
      *(uint *)(param_1 + 0x30) = uVar12 | 0x10000;
      *(uint *)(param_1 + 0x6e4) =
           *(uint *)(param_1 + 0x6e4) & 0xfffffbff | *(uint *)(param_2 + 0x6e4) & 0x400;
      param_1[0x8c0] = 1;
    }
  }
  else if (0.5 <= param_3) goto LAB_147feee41;
  if ((param_2[0x1a] & 0x40) == 0) {
    bVar8 = param_1[0x1a];
    if ((bVar8 & 0x40) != 0 && 0.5 <= param_3) {
LAB_147feee98:
      param_1[0x1a] = bVar8 | 0x40;
      *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
      param_1[0x8c0] = 1;
    }
    if (0.5 <= param_3) {
      lVar10 = *(longlong *)(param_2 + 0x460);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_2 + 0x460);
        }
      }
      *(longlong *)(param_1 + 0x460) = lVar10;
    }
  }
  else if (0.5 <= param_3) {
    bVar8 = param_1[0x1a];
    goto LAB_147feee98;
  }
  bVar8 = param_2[0x1a];
  bVar9 = param_1[0x1a];
  if (((bVar8 | bVar9) & 2) == 0) {
    if ((bVar8 & 4) != 0) goto LAB_147feeeef;
LAB_147feef30:
    if ((bVar9 & 4) != 0 && 0.5 <= param_3) goto LAB_147feef43;
  }
  else {
    bVar9 = bVar9 | 2;
    param_1[0x1a] = bVar9;
    *(float *)(param_1 + 0x628) =
         (*(float *)(param_2 + 0x628) - *(float *)(param_1 + 0x628)) * param_3 +
         *(float *)(param_1 + 0x628);
    param_1[0x8c0] = 1;
    if ((param_2[0x1a] & 4) == 0) goto LAB_147feef30;
LAB_147feeeef:
    if (0.5 <= param_3) {
LAB_147feef43:
      param_1[0x1a] = bVar9 | 4;
      lVar10 = *(longlong *)(param_2 + 0x630);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_2 + 0x630);
        }
      }
      *(longlong *)(param_1 + 0x630) = lVar10;
      param_1[0x8c0] = 1;
    }
  }
  if ((*pbVar1 & 8) == 0) {
    bVar8 = param_1[8];
    if ((bVar8 & 8) != 0 && 0.5 <= param_3) {
LAB_147feef9f:
      param_1[8] = bVar8 | 8;
      lVar10 = *(longlong *)(param_2 + 0x3b8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_2 + 0x3b8);
        }
      }
      *(longlong *)(param_1 + 0x3b8) = lVar10;
      param_1[0x8c0] = 1;
    }
  }
  else if (0.5 <= param_3) {
    bVar8 = param_1[8];
    goto LAB_147feef9f;
  }
  if ((param_2[5] & 1) == 0) {
    bVar8 = param_1[5];
    if ((bVar8 & 1) != 0 && 0.5 <= param_3) {
LAB_147feeff7:
      param_1[5] = bVar8 | 1;
      param_1[0x35] = param_2[0x35];
      param_1[0x8c0] = 1;
    }
  }
  else if (0.5 <= param_3) {
    bVar8 = param_1[5];
    goto LAB_147feeff7;
  }
  if ((param_2[7] & 1) == 0) {
    bVar8 = param_1[7];
    if ((bVar8 & 1) != 0 && 0.5 <= param_3) {
LAB_147fef037:
      param_1[7] = bVar8 | 1;
      lVar10 = *(longlong *)(param_2 + 0x390);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_2 + 0x390);
        }
      }
      *(longlong *)(param_1 + 0x390) = lVar10;
      param_1[0x8c0] = 1;
    }
  }
  else if (0.5 <= param_3) {
    bVar8 = param_1[7];
    goto LAB_147fef037;
  }
  if ((param_2[0xe] & 4) == 0) {
    bVar8 = param_1[0xe];
    if ((bVar8 & 4) != 0 && 0.5 <= param_3) {
LAB_147fef08f:
      param_1[0xe] = bVar8 | 4;
      lVar10 = *(longlong *)(param_2 + 0x5d8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_2 + 0x5d8);
        }
      }
      *(longlong *)(param_1 + 0x5d8) = lVar10;
      param_1[0x8c0] = 1;
    }
  }
  else if (0.5 <= param_3) {
    bVar8 = param_1[0xe];
    goto LAB_147fef08f;
  }
  if ((*pbVar1 & 1) == 0) {
    bVar8 = param_1[8];
    if ((bVar8 & 1) != 0 && 0.5 <= param_3) {
LAB_147fef0eb:
      param_1[8] = bVar8 | 1;
      *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_2 + 0x3b4);
      param_1[0x8c0] = 1;
    }
  }
  else if (0.5 <= param_3) {
    bVar8 = param_1[8];
    goto LAB_147fef0eb;
  }
  if ((char)param_2[9] < '\0') {
    if (0.5 <= param_3) {
      bVar8 = param_1[9];
      goto LAB_147fef12b;
    }
  }
  else {
    bVar8 = param_1[9];
    if ((char)bVar8 < '\0' && 0.5 <= param_3) {
LAB_147fef12b:
      param_1[9] = bVar8 | 0x80;
      lVar10 = *(longlong *)(param_2 + 0x490);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_2 + 0x490);
        }
      }
      *(longlong *)(param_1 + 0x490) = lVar10;
      param_1[0x8c0] = 1;
    }
  }
  if ((param_2[10] & 1) == 0) {
    bVar8 = param_1[10];
    if ((bVar8 & 1) != 0 && 0.5 <= param_3) {
LAB_147fef187:
      param_1[10] = bVar8 | 1;
      lVar10 = *(longlong *)(param_2 + 0x498);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_2 + 0x498);
        }
      }
      *(longlong *)(param_1 + 0x498) = lVar10;
      param_1[0x8c0] = 1;
    }
  }
  else if (0.5 <= param_3) {
    bVar8 = param_1[10];
    goto LAB_147fef187;
  }
  bVar8 = param_2[0xb];
  if ((bVar8 & 1) == 0) {
    bVar9 = param_1[0xb];
    if ((bVar9 & 1) != 0 && 0.5 <= param_3) {
LAB_147fef1e8:
      param_1[0xb] = bVar9 | 1;
      lVar10 = *(longlong *)(param_2 + 0x4d8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_2 + 0x4d8);
        }
      }
      *(longlong *)(param_1 + 0x4d8) = lVar10;
      param_1[0x8c0] = 1;
      bVar8 = param_2[0xb];
      goto LAB_147fef21b;
    }
    if ((bVar8 & 2) == 0) goto LAB_147fef222;
LAB_147fef232:
    if (0.5 <= param_3) {
LAB_147fef23b:
      param_1[0xb] = param_1[0xb] | 2;
      lVar10 = *(longlong *)(param_2 + 0x4e0);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_2 + 0x4e0);
        }
      }
      *(longlong *)(param_1 + 0x4e0) = lVar10;
      param_1[0x8c0] = 1;
    }
  }
  else {
    if (0.5 <= param_3) {
      bVar9 = param_1[0xb];
      goto LAB_147fef1e8;
    }
LAB_147fef21b:
    if ((bVar8 & 2) != 0) goto LAB_147fef232;
    bVar9 = param_1[0xb];
LAB_147fef222:
    if ((0.5 <= param_3) && ((bVar9 & 2) != 0)) goto LAB_147fef23b;
  }
  bVar8 = param_2[0xc];
  if ((bVar8 & 0x10) == 0) {
    bVar9 = param_1[0xc];
    if ((bVar9 & 0x10) != 0 && 0.5 <= param_3) {
LAB_147fef295:
      param_1[0xc] = bVar9 | 0x10;
      lVar10 = *(longlong *)(param_2 + 0x520);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_2 + 0x520);
        }
      }
      *(longlong *)(param_1 + 0x520) = lVar10;
      param_1[0x8c0] = 1;
      bVar8 = param_2[0xc];
    }
  }
  else if (0.5 <= param_3) {
    bVar9 = param_1[0xc];
    goto LAB_147fef295;
  }
  if ((bVar8 & 4) != 0) {
    lVar10 = 0;
    do {
      fVar2 = *(float *)(param_2 + lVar10 + 0x534);
      fVar15 = *(float *)(param_2 + lVar10 + 0x530);
      fVar3 = *(float *)(param_2 + lVar10 + 0x52c);
      *(float *)(param_1 + lVar10 + 0x528) =
           (*(float *)(param_2 + lVar10 + 0x528) - *(float *)(param_1 + lVar10 + 0x528)) * param_3 +
           *(float *)(param_1 + lVar10 + 0x528);
      *(float *)(param_1 + lVar10 + 0x52c) =
           (fVar3 - *(float *)(param_1 + lVar10 + 0x52c)) * param_3 +
           *(float *)(param_1 + lVar10 + 0x52c);
      *(float *)(param_1 + lVar10 + 0x530) =
           (fVar15 - *(float *)(param_1 + lVar10 + 0x530)) * param_3 +
           *(float *)(param_1 + lVar10 + 0x530);
      *(float *)(param_1 + lVar10 + 0x534) =
           (fVar2 - *(float *)(param_1 + lVar10 + 0x534)) * param_3 +
           *(float *)(param_1 + lVar10 + 0x534);
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x80);
  }
  if ((0.5 <= param_3) && ((param_2[0x1c] & 4) != 0)) {
    param_1[0x34] = param_1[0x34] & 0xfe | param_2[0x34] & 1;
  }
  if ((*pbVar1 & 0x40) == 0) {
    bVar8 = param_1[8];
    if ((bVar8 & 0x40) != 0 && 0.5 <= param_3) {
LAB_147fef3cd:
      param_1[8] = bVar8 | 0x40;
      param_1[0x36] = param_2[0x36];
      param_1[0x8c0] = 1;
    }
  }
  else if (0.5 <= param_3) {
    bVar8 = param_1[8];
    goto LAB_147fef3cd;
  }
  if ((param_2[0xf] & 2) == 0) {
    bVar8 = param_1[0xf];
    if ((bVar8 & 2) != 0 && 0.5 <= param_3) {
LAB_147fef409:
      param_1[0xf] = bVar8 | 2;
      *(uint *)(param_1 + 0x5ec) =
           *(uint *)(param_1 + 0x5ec) & 0xfffffffe | *(uint *)(param_2 + 0x5ec) & 1;
      param_1[0x8c0] = 1;
    }
  }
  else if (0.5 <= param_3) {
    bVar8 = param_1[0xf];
    goto LAB_147fef409;
  }
  if ((param_2[0x1d] & 2) == 0) {
    bVar8 = param_1[0x1d];
    if ((bVar8 & 2) != 0 && 0.5 <= param_3) {
LAB_147fef459:
      param_1[0x1d] = bVar8 | 2;
      *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(param_2 + 0x680);
      param_1[0x8c0] = 1;
    }
  }
  else if (0.5 <= param_3) {
    bVar8 = param_1[0x1d];
    goto LAB_147fef459;
  }
  if ((param_2[10] & 2) == 0) {
    bVar8 = param_1[10];
    if ((bVar8 & 2) == 0 || param_3 < 0.5) goto LAB_147fef4c5;
  }
  else {
    if (param_3 < 0.5) goto LAB_147fef4c5;
    bVar8 = param_1[10];
  }
  param_1[10] = bVar8 | 2;
  *(uint *)(param_1 + 0x488) =
       *(uint *)(param_1 + 0x488) & 0xfffffffe | *(uint *)(param_2 + 0x488) & 1;
  param_1[0x8c0] = 1;
LAB_147fef4c5:
  if ((param_2[0x1e] & 0x10) == 0) {
    bVar8 = param_1[0x1e];
    if ((bVar8 & 0x10) == 0 || param_3 < 0.5) {
      return;
    }
  }
  else {
    if (param_3 < 0.5) {
      return;
    }
    bVar8 = param_1[0x1e];
  }
  param_1[0x1e] = bVar8 | 0x10;
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_2 + 0x6f4);
  param_1[0x8c0] = 1;
  return;
}



// FUNCTION 147fef6ba FUN_147fef6ba body=127 status=ok
// SIG undefined FUN_147fef6ba(void)

void FUN_147fef6ba(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_20 == 0) {
      local_20 = 0;
    }
    else {
      FUN_1456cec3c();
      local_20 = *param_2;
    }
  }
  uVar1 = FUN_14477b072(param_1,DAT_14cb2ab60);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fef73a FUN_147fef73a body=192 status=ok
// SIG undefined FUN_147fef73a(void)

void FUN_147fef73a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar2 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
    FUN_148010d8c((longlong *)(param_1 + 0x38),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fef7fc FUN_147fef7fc body=192 status=ok
// SIG undefined FUN_147fef7fc(void)

void FUN_147fef7fc(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar2 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
    FUN_148010d8c((longlong *)(param_1 + 0x38),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fef8be FUN_147fef8be body=192 status=ok
// SIG undefined FUN_147fef8be(void)

void FUN_147fef8be(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar2 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_148010e12((longlong *)(param_1 + 0x28),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fef980 FUN_147fef980 body=201 status=ok
// SIG undefined FUN_147fef980(void)

void FUN_147fef980(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar3 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_148010d06((longlong *)(param_1 + 0x48),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = uVar3;
  *(undefined1 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fefa4a FUN_147fefa4a body=201 status=ok
// SIG undefined FUN_147fefa4a(void)

void FUN_147fefa4a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar3 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_148010d06((longlong *)(param_1 + 0x48),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = uVar3;
  *(undefined1 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = 2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fefb14 FUN_147fefb14 body=201 status=ok
// SIG undefined FUN_147fefb14(void)

void FUN_147fefb14(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar3 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_148010d06((longlong *)(param_1 + 0x48),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = uVar3;
  *(undefined1 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = 3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fefbde FUN_147fefbde body=127 status=ok
// SIG undefined FUN_147fefbde(void)

void FUN_147fefbde(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_20 == 0) {
      local_20 = 0;
    }
    else {
      FUN_1456cec3c();
      local_20 = *param_2;
    }
  }
  uVar1 = FUN_14477b072(param_1,DAT_14cb2aba0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fefc5e FUN_147fefc5e body=201 status=ok
// SIG undefined FUN_147fefc5e(void)

void FUN_147fefc5e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar3 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar1 + 1U;
  if (*(uint *)(param_1 + 100) < iVar1 + 1U) {
    FUN_148010d06((longlong *)(param_1 + 0x58),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x58);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = uVar3;
  *(undefined1 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fefd28 FUN_147fefd28 body=201 status=ok
// SIG undefined FUN_147fefd28(void)

void FUN_147fefd28(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar3 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar1 + 1U;
  if (*(uint *)(param_1 + 100) < iVar1 + 1U) {
    FUN_148010d06((longlong *)(param_1 + 0x58),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x58);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = uVar3;
  *(undefined1 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = 2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fefdf2 FUN_147fefdf2 body=201 status=ok
// SIG undefined FUN_147fefdf2(void)

void FUN_147fefdf2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar3 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar1 + 1U;
  if (*(uint *)(param_1 + 100) < iVar1 + 1U) {
    FUN_148010d06((longlong *)(param_1 + 0x58),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x58);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = uVar3;
  *(undefined1 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = 3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fefebc FUN_147fefebc body=183 status=ok
// SIG undefined FUN_147fefebc(void)

void FUN_147fefebc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
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
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_147feff74(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147feff74 FUN_147feff74 body=162 status=ok
// SIG undefined FUN_147feff74(void)

longlong FUN_147feff74(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_1415b7ec4(L"Can\'t access evaluation context outside of RunCameraDirector",2,0);
  }
  else {
    lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x68) + 0x20);
    if (lVar1 != 0) {
      lVar2 = FUN_144a78d6a();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return *(longlong *)(lVar1 + 0xa8);
      }
    }
    lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x68) + 0x20);
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 147ff0016 FUN_147ff0016 body=151 status=ok
// SIG undefined FUN_147ff0016(void)

void FUN_147ff0016(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff00ae FUN_147ff00ae body=102 status=ok
// SIG undefined FUN_147ff00ae(void)

void FUN_147ff00ae(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [14];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff0116(param_1,local_88);
  puVar2 = local_88;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff0116 FUN_147ff0116 body=143 status=ok
// SIG undefined FUN_147ff0116(void)

undefined8 * FUN_147ff0116(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_1415b7ec4(L"Can\'t access evaluation context\'s initial result outside of RunCameraDirector"
                  ,2,0);
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[6] = 0x408f400000000000;
    param_2[7] = 0x420c0000bf800000;
    param_2[8] = 0x4270000040333333;
    param_2[9] = 0x41c71eb8bf800000;
    param_2[10] = 0x42c8000041955c29;
    param_2[0xb] = 0x83f800000;
    param_2[0xc] = 0xbf80000041200000;
    param_2[0xd] = 0;
  }
  else {
    FUN_147ff0ee8(param_2,*(longlong *)(param_1 + 0x68) + 0x40);
  }
  return param_2;
}



// FUNCTION 147ff01a6 FUN_147ff01a6 body=131 status=ok
// SIG undefined FUN_147ff01a6(void)

void FUN_147ff01a6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff022a(param_1,local_30);
  FUN_147ff02b6(param_3,local_30);
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



// FUNCTION 147ff022a FUN_147ff022a body=140 status=ok
// SIG undefined FUN_147ff022a(void)

longlong * FUN_147ff022a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_1415b7ec4(L"Can\'t access evaluation context\'s initial result outside of RunCameraDirector"
                  ,2,0);
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x68) + 200;
    lVar3 = *(longlong *)(param_1 + 0x78);
    plVar4 = *(longlong **)(param_1 + 0x80);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *param_2 = lVar5;
      param_2[1] = lVar3;
      param_2[2] = (longlong)plVar4;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return param_2;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return param_2;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return param_2;
    }
    *param_2 = lVar5;
    param_2[1] = lVar3;
  }
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 147ff02b6 FUN_147ff02b6 body=105 status=ok
// SIG undefined FUN_147ff02b6(void)

undefined8 * FUN_147ff02b6(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    param_1[1] = param_2[1];
    param_2[1] = 0;
    plVar2 = (longlong *)param_2[2];
    plVar3 = (longlong *)param_1[2];
    if (plVar2 != plVar3) {
      param_2[2] = 0;
      param_1[2] = plVar2;
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
    }
  }
  return param_1;
}



// FUNCTION 147ff0320 FUN_147ff0320 body=140 status=ok
// SIG undefined FUN_147ff0320(void)

void FUN_147ff0320(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = *param_2;
  local_20 = *(longlong *)(param_2 + 2);
  if (DAT_14c950c29 == '\x01') {
    if (local_20 == 0) {
      local_20 = 0;
    }
    else {
      FUN_1456cec3c();
      local_20 = *(longlong *)(param_2 + 2);
    }
  }
  uVar1 = FUN_14477b072(param_1,DAT_14cb2abe8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff03ae FUN_147ff03ae body=300 status=ok
// SIG undefined FUN_147ff03ae(void)

void FUN_147ff03ae(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0x408f400000000000;
  local_50 = 0x420c0000bf800000;
  uStack_48 = 0x4270000040333333;
  local_40 = 0xbf800000;
  uStack_3c = 0x41c71eb8;
  uStack_38 = 0x41955c29;
  uStack_34 = 0x42c80000;
  local_30 = 0x83f800000;
  local_28 = 0xbf80000041200000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_1415b7ec4(L"Can\'t access evaluation context\'s initial result outside of RunCameraDirector"
                  ,2,0);
  }
  else {
    puVar1 = &local_88;
    if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_2 + 0x38);
    }
    FUN_147ff0faa(puVar1,*(longlong *)(param_1 + 0x68) + 0x40);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff04e2 FUN_147ff04e2 body=136 status=ok
// SIG undefined FUN_147ff04e2(void)

void FUN_147ff04e2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_148010ace(param_1);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_148010afe(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_148010b2e(param_1 + 0x20);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_148010b2e(param_1 + 0x30);
  return;
}



// FUNCTION 147ff056a FUN_147ff056a body=175 status=ok
// SIG undefined FUN_147ff056a(void)

undefined8 FUN_147ff056a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 147ff061a FUN_147ff061a body=348 status=ok
// SIG undefined FUN_147ff061a(void)

void FUN_147ff061a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = param_2[1];
  lVar5 = param_2[2];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(longlong *)(param_1 + 0x70) = lVar5;
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
  FUN_147ff120a(*param_2,&local_38);
  plVar1 = local_30;
  *(longlong *)(param_1 + 0x78) = local_38;
  local_38 = 0;
  plVar4 = *(longlong **)(param_1 + 0x80);
  if (local_30 != plVar4) {
    local_30 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x80) = plVar1;
    if (plVar4 == (longlong *)0x0) goto LAB_147ff06de;
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
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_147ff06de:
  FUN_147ff04e2(param_1 + 0x28);
  local_38 = 0;
  lVar5 = local_38;
  if (((param_2[1] != 0) && (lVar5 = FUN_14479d2ce(param_2[1] + 0x20), lVar5 != 0)) &&
     (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  local_38 = lVar5;
  FUN_147fef6ba(param_1,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff0778 FUN_147ff0778 body=809 status=ok
// SIG undefined FUN_147ff0778(void)

/* WARNING: Removing unreachable block (ram,0x000147ff087c) */
/* WARNING: Removing unreachable block (ram,0x000147ff0884) */
/* WARNING: Removing unreachable block (ram,0x000147ff0895) */
/* WARNING: Removing unreachable block (ram,0x000147ff0974) */
/* WARNING: Removing unreachable block (ram,0x000147ff097b) */
/* WARNING: Removing unreachable block (ram,0x000147ff098a) */

void FUN_147ff0778(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined1 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_3 + 0x28) == 0 && *(int *)(param_3 + 0x38) == 0) ||
     (*(longlong *)(param_1 + 0x20) == 0)) goto LAB_147ff07a9;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x88);
  lVar5 = FUN_14479d2ce(*param_2 + 0x28);
  local_90 = param_2;
  if (lVar5 == 0) {
    uVar9 = 0;
LAB_147ff082a:
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar5 = FUN_147ff2080(lVar5);
    FUN_147ff891e(lVar5);
    uVar9 = *(undefined8 *)(lVar5 + 0x120);
    plVar6 = *(longlong **)(lVar5 + 0x128);
    if (plVar6 == (longlong *)0x0) goto LAB_147ff082a;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  if ((longlong)*(int *)(param_3 + 0x38) != 0) {
    plVar8 = *(longlong **)(param_3 + 0x30);
    plVar7 = plVar8 + (longlong)*(int *)(param_3 + 0x38) * 2;
    do {
      local_78 = 0;
      local_70 = 1;
      if (plVar6 == (longlong *)0x0) {
        plStack_80 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        plStack_80 = plVar6;
      }
      lVar5 = *plVar8;
      local_88 = uVar9;
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      local_70 = (undefined1)plVar8[1];
      local_78 = lVar5;
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_88);
      plVar4 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_80 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
  }
  if ((longlong)*(int *)(param_3 + 0x28) != 0) {
    plVar8 = *(longlong **)(param_3 + 0x20);
    plVar7 = plVar8 + (longlong)*(int *)(param_3 + 0x28) * 2;
    do {
      local_78 = 0;
      local_70 = 1;
      if (plVar6 == (longlong *)0x0) {
        plStack_80 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        plStack_80 = plVar6;
      }
      lVar5 = *plVar8;
      local_88 = uVar9;
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      local_70 = (undefined1)plVar8[1];
      local_78 = lVar5;
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_88);
      plVar4 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_80 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
  }
  param_2 = local_90;
  if (plVar6 != (longlong *)0x0) {
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
LAB_147ff07a9:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff0aa2 FUN_147ff0aa2 body=127 status=ok
// SIG undefined FUN_147ff0aa2(void)

void FUN_147ff0aa2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_147ff0b22();
    lVar1 = *(longlong *)(param_1 + 0x28);
    local_28 = *param_2;
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_147ff0778(param_1,&local_28,lVar1 + 0x28);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff0b22 FUN_147ff0b22 body=255 status=ok
// SIG undefined FUN_147ff0b22(void)

void FUN_147ff0b22(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147ff04e2(param_1 + 0x28);
  local_20 = 0;
  lVar5 = local_20;
  if (((*param_2 != 0) && (lVar5 = FUN_14479d2ce(*param_2 + 0x20), lVar5 != 0)) &&
     (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  local_20 = lVar5;
  FUN_147fefbde(param_1,&local_20);
  *(undefined8 *)(param_1 + 0x78) = 0;
  plVar3 = *(longlong **)(param_1 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
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
  *(undefined8 *)(param_1 + 0x68) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x70);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff0c32 FUN_147ff0c32 body=149 status=ok
// SIG undefined FUN_147ff0c32(void)

void FUN_147ff0c32(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_147ff0cc8();
    lVar1 = *(longlong *)(param_1 + 0x28) + 0x28;
    FUN_1438dc06a(param_1,param_2,lVar1,param_3);
    local_38 = *(undefined8 *)(param_2 + 8);
    local_30 = *(longlong *)(param_2 + 0x10);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_147ff0778(param_1,&local_38,lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff0cc8 FUN_147ff0cc8 body=145 status=ok
// SIG undefined FUN_147ff0cc8(void)

void FUN_147ff0cc8(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147ff04e2(param_1 + 0x28);
  local_20 = 0;
  local_28[0] = *param_2;
  lVar1 = local_20;
  if (((*(longlong *)(param_2 + 2) != 0) &&
      (lVar1 = FUN_14479d2ce(*(longlong *)(param_2 + 2) + 0x20), lVar1 != 0)) &&
     (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  local_20 = lVar1;
  FUN_147ff0320(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff0d5a FUN_147ff0d5a body=140 status=ok
// SIG undefined FUN_147ff0d5a(void)

undefined8 FUN_147ff0d5a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar3 = FUN_145b678de();
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      if ((((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) &&
         ((longlong)*(int *)(lVar1 + 0x30) != 0)) {
        lVar3 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x28) + lVar3) == param_2) {
            return *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 8 + lVar3);
          }
          lVar3 = lVar3 + 0x10;
        } while ((longlong)*(int *)(lVar1 + 0x30) * 0x10 != lVar3);
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 147ff0de6 FUN_147ff0de6 body=227 status=ok
// SIG undefined FUN_147ff0de6(void)

void FUN_147ff0de6(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  lVar6 = *param_3;
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  iVar3 = *(int *)(param_1 + 0x38);
  lVar9 = (longlong)iVar3;
  *(uint *)(param_1 + 0x38) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
    FUN_148001182(param_1,iVar3);
  }
  lVar8 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar8 = param_1;
  }
  *(undefined8 *)(lVar8 + lVar9 * 0x18) = uVar4;
  *(longlong *)(lVar8 + 8 + lVar9 * 0x18) = lVar5;
  *(longlong *)(lVar8 + 0x10 + lVar9 * 0x18) = lVar6;
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147ff0e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ff0ee8 FUN_147ff0ee8 body=194 status=ok
// SIG undefined FUN_147ff0ee8(void)

void FUN_147ff0ee8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined1 *)((longlong)param_1 + 0x6c) = *(undefined1 *)((longlong)param_2 + 0x6c);
  *(undefined1 *)((longlong)param_1 + 0x6d) = *(undefined1 *)((longlong)param_2 + 0x6d);
  *(undefined1 *)((longlong)param_1 + 0x6e) = *(undefined1 *)((longlong)param_2 + 0x6e);
  *(undefined1 *)((longlong)param_1 + 0x6f) = *(undefined1 *)((longlong)param_2 + 0x6f);
  return;
}



// FUNCTION 147ff0faa FUN_147ff0faa body=608 status=ok
// SIG undefined FUN_147ff0faa(void)

void FUN_147ff0faa(double *param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  
  if (((((*param_2 != *param_1) || (NAN(*param_2) || NAN(*param_1))) || (param_2[1] != param_1[1]))
      || ((NAN(param_2[1]) || NAN(param_1[1]) || (param_2[2] != param_1[2])))) ||
     (NAN(param_2[2]) || NAN(param_1[2]))) {
    *(undefined1 *)(param_2 + 0xe) = 1;
    dVar2 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = dVar2;
    param_2[2] = param_1[2];
  }
  if (((param_2[3] != param_1[3]) || (NAN(param_2[3]) || NAN(param_1[3]))) ||
     ((param_2[4] != param_1[4] ||
      (((NAN(param_2[4]) || NAN(param_1[4]) || (param_2[5] != param_1[5])) ||
       (NAN(param_2[5]) || NAN(param_1[5]))))))) {
    *(undefined1 *)((longlong)param_2 + 0x71) = 1;
    param_2[5] = param_1[5];
    dVar2 = param_1[4];
    param_2[3] = param_1[3];
    param_2[4] = dVar2;
  }
  dVar2 = param_1[6];
  if ((param_2[6] != dVar2) || (NAN(param_2[6]) || NAN(dVar2))) {
    *(undefined1 *)((longlong)param_2 + 0x72) = 1;
    param_2[6] = dVar2;
  }
  fVar1 = *(float *)(param_1 + 8);
  if ((*(float *)(param_2 + 8) != fVar1) || (NAN(*(float *)(param_2 + 8)) || NAN(fVar1))) {
    *(undefined1 *)((longlong)param_2 + 0x73) = 1;
    *(float *)(param_2 + 8) = fVar1;
  }
  fVar1 = *(float *)((longlong)param_1 + 0x44);
  if ((*(float *)((longlong)param_2 + 0x44) != fVar1) ||
     (NAN(*(float *)((longlong)param_2 + 0x44)) || NAN(fVar1))) {
    *(undefined1 *)((longlong)param_2 + 0x74) = 1;
    *(float *)((longlong)param_2 + 0x44) = fVar1;
  }
  fVar1 = *(float *)(param_1 + 9);
  if ((*(float *)(param_2 + 9) != fVar1) || (NAN(*(float *)(param_2 + 9)) || NAN(fVar1))) {
    *(undefined1 *)((longlong)param_2 + 0x75) = 1;
    *(float *)(param_2 + 9) = fVar1;
  }
  fVar1 = *(float *)((longlong)param_1 + 0x4c);
  if ((*(float *)((longlong)param_2 + 0x4c) != fVar1) ||
     (NAN(*(float *)((longlong)param_2 + 0x4c)) || NAN(fVar1))) {
    *(undefined1 *)((longlong)param_2 + 0x76) = 1;
    *(float *)((longlong)param_2 + 0x4c) = fVar1;
  }
  fVar1 = *(float *)(param_1 + 10);
  if ((*(float *)(param_2 + 10) != fVar1) || (NAN(*(float *)(param_2 + 10)) || NAN(fVar1))) {
    *(undefined1 *)((longlong)param_2 + 0x77) = 1;
    *(float *)(param_2 + 10) = fVar1;
  }
  fVar1 = *(float *)((longlong)param_1 + 0x54);
  if ((*(float *)((longlong)param_2 + 0x54) != fVar1) ||
     (NAN(*(float *)((longlong)param_2 + 0x54)) || NAN(fVar1))) {
    *(undefined1 *)(param_2 + 0xf) = 1;
    *(float *)((longlong)param_2 + 0x54) = fVar1;
  }
  fVar1 = *(float *)(param_1 + 0xb);
  if ((*(float *)(param_2 + 0xb) != fVar1) || (NAN(*(float *)(param_2 + 0xb)) || NAN(fVar1))) {
    *(undefined1 *)((longlong)param_2 + 0x79) = 1;
    *(float *)(param_2 + 0xb) = fVar1;
  }
  iVar4 = *(int *)((longlong)param_1 + 0x5c);
  if (*(int *)((longlong)param_2 + 0x5c) != iVar4) {
    *(undefined1 *)((longlong)param_2 + 0x7a) = 1;
    *(int *)((longlong)param_2 + 0x5c) = iVar4;
  }
  fVar1 = *(float *)(param_1 + 0xd);
  if ((*(float *)(param_2 + 0xd) != fVar1) || (NAN(*(float *)(param_2 + 0xd)) || NAN(fVar1))) {
    *(undefined1 *)((longlong)param_2 + 0x7b) = 1;
    *(float *)(param_2 + 0xd) = fVar1;
  }
  fVar1 = *(float *)(param_1 + 0xc);
  if ((*(float *)(param_2 + 0xc) != fVar1) || (NAN(*(float *)(param_2 + 0xc)) || NAN(fVar1))) {
    *(undefined1 *)((longlong)param_2 + 0x7c) = 1;
    *(float *)(param_2 + 0xc) = fVar1;
  }
  fVar1 = *(float *)((longlong)param_1 + 100);
  if ((*(float *)((longlong)param_2 + 100) != fVar1) ||
     (NAN(*(float *)((longlong)param_2 + 100)) || NAN(fVar1))) {
    *(undefined1 *)((longlong)param_2 + 0x7d) = 1;
    *(float *)((longlong)param_2 + 100) = fVar1;
  }
  fVar1 = *(float *)(param_1 + 7);
  if ((*(float *)(param_2 + 7) != fVar1) || (NAN(*(float *)(param_2 + 7)) || NAN(fVar1))) {
    *(undefined1 *)((longlong)param_2 + 0x7e) = 1;
    *(float *)(param_2 + 7) = fVar1;
  }
  fVar1 = *(float *)((longlong)param_1 + 0x3c);
  if ((*(float *)((longlong)param_2 + 0x3c) != fVar1) ||
     (NAN(*(float *)((longlong)param_2 + 0x3c)) || NAN(fVar1))) {
    *(undefined1 *)((longlong)param_2 + 0x7f) = 1;
    *(float *)((longlong)param_2 + 0x3c) = fVar1;
  }
  cVar3 = *(char *)((longlong)param_1 + 0x6c);
  if (*(char *)((longlong)param_2 + 0x6c) != cVar3) {
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(char *)((longlong)param_2 + 0x6c) = cVar3;
  }
  cVar3 = *(char *)((longlong)param_1 + 0x6d);
  if (*(char *)((longlong)param_2 + 0x6d) != cVar3) {
    *(undefined1 *)((longlong)param_2 + 0x81) = 1;
    *(char *)((longlong)param_2 + 0x6d) = cVar3;
  }
  cVar3 = *(char *)((longlong)param_1 + 0x6e);
  if (*(char *)((longlong)param_2 + 0x6e) != cVar3) {
    *(undefined1 *)((longlong)param_2 + 0x82) = 1;
    *(char *)((longlong)param_2 + 0x6e) = cVar3;
  }
  cVar3 = *(char *)((longlong)param_1 + 0x6f);
  if (*(char *)((longlong)param_2 + 0x6f) != cVar3) {
    *(undefined1 *)((longlong)param_2 + 0x83) = 1;
    *(char *)((longlong)param_2 + 0x6f) = cVar3;
  }
  return;
}



// FUNCTION 147ff120a FUN_147ff120a body=158 status=ok
// SIG undefined FUN_147ff120a(void)

longlong * FUN_147ff120a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147fe730e(param_1,&local_28);
  if (local_28 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = local_28;
    param_2[1] = (longlong)local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
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



// FUNCTION 147ff12b4 FUN_147ff12b4 body=261 status=ok
// SIG undefined FUN_147ff12b4(void)

void FUN_147ff12b4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((((lVar1 == 0) || (lVar2 = FUN_1459d67c8(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (*(longlong *)(param_1 + 0x28) == 0)))) {
    local_38 = L"MissingBlueprintClass";
    local_30 = 0x15;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"BlueprintCameraDirector";
    local_30 = 0x17;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,L"No evaluator Blueprint class is set.");
    FUN_147fd2e2c(param_2,1,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff13be FUN_147ff13be body=311 status=ok
// SIG undefined FUN_147ff13be(void)

undefined8 FUN_147ff13be(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1464525da();
  if ((((((lVar1 == 0) || (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
        (lVar2 = lVar1 + 0x30,
        *(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar2
        )) && (((lVar1 = FUN_1464526d0(), lVar1 == 0 ||
                (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
               (lVar2 = lVar1 + 0x30,
               *(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
               != lVar2)))) &&
      (((lVar1 = FUN_1464527c6(), lVar1 == 0 || (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38)))
       || (lVar2 = lVar1 + 0x30,
          *(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar2)))) &&
     (((lVar1 = FUN_146453ece(), lVar1 == 0 || (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38)))
      || (lVar2 = lVar1 + 0x30,
         *(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar2)))) {
    if (DAT_14cb2ac70 == 0) {
      uVar3 = FUN_140d2376e();
      DAT_14cb2ac70 = FUN_140002ddd(FUN_146459b29,uVar3,L"GameplayCamerasStateTreeTask");
      if (DAT_14cb2ac70 == 0) goto LAB_147ff1471;
    }
    if ((*(int *)(param_2 + 0x38) < *(int *)(DAT_14cb2ac70 + 0x38)) ||
       (lVar2 = DAT_14cb2ac70 + 0x30,
       *(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(DAT_14cb2ac70 + 0x38) * 8)
       != lVar2)) {
LAB_147ff1471:
      if (DAT_14cb2ac88 == 0) {
        uVar3 = FUN_140d2376e();
        DAT_14cb2ac88 = FUN_140002ddd(FUN_146459bbf,uVar3,L"GameplayCamerasStateTreeCondition");
        if (DAT_14cb2ac88 == 0) {
          return 0;
        }
      }
      if (*(int *)(param_2 + 0x38) < *(int *)(DAT_14cb2ac88 + 0x38)) {
        return 0;
      }
      return CONCAT71((int7)((ulonglong)(DAT_14cb2ac88 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(DAT_14cb2ac88 + 0x38) * 8
                       ) == DAT_14cb2ac88 + 0x30);
    }
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 147ff1500 FUN_147ff1500 body=74 status=ok
// SIG undefined FUN_147ff1500(void)

void FUN_147ff1500(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_148010fde(param_1);
  }
  if (-1 < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_14801100e(param_1 + 0x10);
  return;
}



// FUNCTION 147ff154e FUN_147ff154e body=110 status=ok
// SIG undefined FUN_147ff154e(void)

void FUN_147ff154e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x18);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_148011122((longlong *)(param_1 + 0x20),iVar1);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  lVar5 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar4 + lVar5) = uVar2;
  *(longlong *)(lVar4 + 8 + lVar5) = lVar3;
  *(undefined1 *)(lVar4 + 0x18 + lVar5) = 0;
  *(undefined4 *)(lVar4 + 0x10 + lVar5) = 0;
  *param_3 = 1;
  return;
}



// FUNCTION 147ff15bc FUN_147ff15bc body=89 status=ok
// SIG undefined FUN_147ff15bc(void)

void FUN_147ff15bc(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_3 = 0;
  if (0 < (longlong)*(int *)(param_1 + 0x28)) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    plVar1 = (longlong *)*puVar3;
    lVar2 = 0;
    do {
      if (*plVar1 == *(longlong *)(param_2 + 0x10)) {
        FUN_1480111a8(puVar3);
        FUN_14801121e(puVar3);
        *param_3 = 1;
        return;
      }
      lVar2 = lVar2 + 1;
      plVar1 = plVar1 + 4;
    } while (*(int *)(param_1 + 0x28) != lVar2);
  }
  return;
}



// FUNCTION 147ff1616 FUN_147ff1616 body=1281 status=ok
// SIG undefined FUN_147ff1616(void)

void FUN_147ff1616(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  int iVar24;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c4;
  undefined8 *local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar18 = *(int *)(param_1 + 0x28);
  if (0 < iVar18) {
    local_78 = (undefined8 *)0x0;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    local_a0 = param_2;
    local_98 = param_3;
    local_70 = iVar18;
    FUN_1480112ba(&local_78,iVar18);
    FUN_148011310(local_78,uVar4,iVar18);
    iVar18 = local_70;
    uVar22 = (ulonglong)local_70;
    if (0 < (longlong)uVar22) {
      lVar15 = 0;
      local_90 = local_78;
      puVar17 = local_78;
      do {
        if (lVar15 + 1U < uVar22) {
          if (*(char *)(puVar17 + 3) == '\x01') {
            iVar14 = (**(code **)(*(longlong *)puVar17[2] + 8))();
          }
          else {
            iVar14 = 0;
            if (*(char *)(puVar17 + 3) == '\0') {
              iVar14 = *(int *)(puVar17 + 2);
            }
          }
          if (*(char *)(puVar17 + 7) == '\x01') {
            iVar24 = (**(code **)(*(longlong *)puVar17[6] + 8))();
          }
          else {
            iVar24 = 0;
            if (*(char *)(puVar17 + 7) == '\0') {
              iVar24 = *(int *)(puVar17 + 6);
            }
          }
          if (iVar24 < iVar14) {
            uVar4 = *puVar17;
            lVar8 = puVar17[1];
            local_58 = (longlong *)puVar17[2];
            uStack_50 = puVar17[3];
            puVar17[2] = puVar17[6];
            puVar17[3] = puVar17[7];
            *puVar17 = puVar17[4];
            puVar17[1] = puVar17[5];
            local_68._0_4_ = (undefined4)uVar4;
            local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_60._0_4_ = (undefined4)lVar8;
            uStack_60._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
            puVar17[6] = local_58;
            puVar17[7] = uStack_50;
            *(undefined4 *)(puVar17 + 4) = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar17 + 0x24) = local_68._4_4_;
            *(undefined4 *)(puVar17 + 5) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_60._4_4_;
            local_68 = uVar4;
            uStack_60 = lVar8;
          }
        }
        lVar15 = lVar15 + 2;
        puVar17 = puVar17 + 8;
      } while ((int)lVar15 < iVar18);
      if (2 < iVar18) {
        uVar12 = 2;
        local_88 = uVar22;
        do {
          local_c8 = (int)uVar12 * 2;
          local_80 = (longlong)(int)local_c8;
          lVar15 = 0;
          local_b8 = uVar12;
          do {
            local_c4 = (int)local_88 - (int)lVar15;
            if ((int)local_c8 <= (int)local_c4) {
              local_c4 = local_c8;
            }
            local_b0 = lVar15;
            if ((int)local_b8 < (int)local_c4 && 0 < (int)local_b8) {
              local_c0 = local_90 + lVar15 * 4;
              iVar18 = 0;
              uVar22 = local_b8 & 0xffffffff;
              while( true ) {
                puVar17 = local_c0;
                iVar14 = (int)uVar22;
                lVar15 = (longlong)iVar14;
                if (*(char *)(local_c0 + lVar15 * 4 + 3) == '\x01') {
                  iVar24 = (**(code **)(*(longlong *)local_c0[lVar15 * 4 + 2] + 8))();
                }
                else {
                  iVar24 = 0;
                  if (*(char *)(local_c0 + lVar15 * 4 + 3) == '\0') {
                    iVar24 = *(int *)(local_c0 + lVar15 * 4 + 2);
                  }
                }
                puVar23 = local_c0;
                local_a8 = uVar22;
                if (iVar14 - iVar18 == 0 || iVar14 < iVar18) {
                  iVar20 = 0;
                }
                else {
                  iVar20 = 0;
                  uVar16 = iVar14 - iVar18;
                  do {
                    uVar21 = (uVar16 >> 1) + iVar20;
                    uVar22 = (ulonglong)uVar21;
                    if (*(char *)(puVar23 + (longlong)iVar18 * 4 + uVar22 * 4 + 3) == '\x01') {
                      iVar14 = (**(code **)(*(longlong *)
                                             puVar23[(longlong)iVar18 * 4 + uVar22 * 4 + 2] + 8))();
                    }
                    else {
                      iVar14 = 0;
                      if (*(char *)(puVar23 + (longlong)iVar18 * 4 + uVar22 * 4 + 3) == '\0') {
                        iVar14 = *(int *)(puVar23 + (longlong)iVar18 * 4 + uVar22 * 4 + 2);
                      }
                    }
                    if (iVar14 <= iVar24) {
                      iVar20 = uVar21 + (uVar16 & 1);
                    }
                    bVar7 = 1 < uVar16;
                    uVar16 = uVar16 >> 1;
                  } while (bVar7);
                }
                uVar22 = local_a8;
                iVar20 = iVar20 + iVar18;
                iVar18 = (int)local_a8;
                if (iVar18 <= iVar20) break;
                puVar23 = local_c0 + (longlong)iVar20 * 4;
                if (*(char *)(local_c0 + (longlong)iVar20 * 4 + 3) == '\x01') {
                  iVar14 = (**(code **)(*(longlong *)puVar23[2] + 8))();
                }
                else {
                  iVar14 = 0;
                  if (*(char *)(local_c0 + (longlong)iVar20 * 4 + 3) == '\0') {
                    iVar14 = *(int *)(puVar23 + 2);
                  }
                }
                iVar24 = 0;
                uVar16 = local_c4 - iVar18;
                if (uVar16 != 0 && iVar18 <= (int)local_c4) {
                  uVar22 = (ulonglong)uVar16;
                  do {
                    uVar22 = uVar22 >> 1;
                    uVar21 = (uint)uVar22 + iVar24;
                    uVar12 = (ulonglong)uVar21;
                    if (*(char *)(puVar17 + lVar15 * 4 + uVar12 * 4 + 3) == '\x01') {
                      iVar18 = (**(code **)(*(longlong *)puVar17[lVar15 * 4 + uVar12 * 4 + 2] + 8))
                                         ();
                    }
                    else {
                      iVar18 = 0;
                      if (*(char *)(puVar17 + lVar15 * 4 + uVar12 * 4 + 3) == '\0') {
                        iVar18 = *(int *)(puVar17 + lVar15 * 4 + uVar12 * 4 + 2);
                      }
                    }
                    if (iVar18 < iVar14) {
                      iVar24 = uVar21 + (uVar16 & 1);
                    }
                    bVar7 = 1 < uVar16;
                    uVar16 = (uint)uVar22;
                  } while (bVar7);
                  uVar16 = iVar24 + (int)local_a8;
                  iVar18 = (int)local_a8 - iVar20;
                  if (0 < iVar24 && iVar18 != 0) {
                    puVar13 = puVar23 + (longlong)(int)(uVar16 - iVar20) * 4;
                    puVar17 = puVar23 + (longlong)iVar18 * 4;
                    puVar19 = puVar23 + (longlong)iVar18 * 4;
                    do {
                      while( true ) {
                        puVar1 = puVar17 + 4;
                        uVar4 = *puVar23;
                        lVar15 = puVar23[1];
                        local_58 = (longlong *)puVar23[2];
                        uStack_50 = puVar23[3];
                        uVar9 = *puVar17;
                        uVar10 = puVar17[1];
                        uVar11 = puVar17[3];
                        puVar23[2] = puVar17[2];
                        puVar23[3] = uVar11;
                        *puVar23 = uVar9;
                        puVar23[1] = uVar10;
                        puVar23 = puVar23 + 4;
                        local_68._0_4_ = (undefined4)uVar4;
                        local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
                        uStack_60._0_4_ = (undefined4)lVar15;
                        uStack_60._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
                        puVar17[2] = local_58;
                        puVar17[3] = uStack_50;
                        *(undefined4 *)puVar17 = (undefined4)local_68;
                        *(undefined4 *)((longlong)puVar17 + 4) = local_68._4_4_;
                        *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_60;
                        *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_60._4_4_;
                        if (puVar1 == puVar13) break;
                        puVar17 = puVar1;
                        if (puVar23 == puVar19) {
                          puVar19 = puVar1;
                        }
                      }
                      puVar17 = puVar19;
                      local_68 = uVar4;
                      uStack_60 = lVar15;
                    } while (puVar23 != puVar19);
                  }
                  uVar22 = (ulonglong)uVar16;
                }
                if (((int)local_c4 <= (int)uVar22) ||
                   (iVar18 = iVar20 + iVar24 + 1, (int)uVar22 <= iVar18)) break;
              }
            }
            lVar15 = local_b0 + local_80;
          } while (lVar15 < (longlong)local_88);
          uVar12 = (ulonglong)local_c8;
        } while ((int)local_c8 < (int)local_88);
      }
    }
    uVar4 = local_98;
    lVar15 = local_78[(longlong)(local_70 + -1) * 4];
    if ((lVar15 != 0) && (plVar5 = *(longlong **)(lVar15 + 0xb30), plVar5 != (longlong *)0x0)) {
      local_68 = CONCAT44(local_68._4_4_,*local_a0);
      plVar6 = *(longlong **)(local_a0 + 4);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        lVar15 = local_78[(longlong)(local_70 + -1) * 4];
      }
      local_58 = (longlong *)(local_78 + (longlong)(local_70 + -1) * 4)[1];
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      uStack_60 = lVar15;
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
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_68,uVar4);
      plVar5 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_58 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_58)(local_58);
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
    FUN_14801137f(local_78,local_70);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ff1b2c FUN_147ff1b2c body=214 status=ok
// SIG undefined FUN_147ff1b2c(void)

void FUN_147ff1b2c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_40 = L"MissingCameraRig";
    local_38 = 0x10;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"SingleCameraDirector";
    local_38 = 0x14;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,L"No camera rig is set.");
    FUN_147fd2ef2(param_2,1,param_1,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff1c08 FUN_147ff1c08 body=273 status=ok
// SIG undefined FUN_147ff1c08(void)

void FUN_147ff1c08(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = FUN_14479d2ce();
  if (local_38 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = *(undefined8 *)(local_38 + 0x10);
  }
  FUN_147fabacc(param_3,DAT_14cb2ac98);
  FUN_147ff1500(param_1 + 0x30);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  puVar4 = local_50;
  local_48 = 2;
  *local_50 = &PTR_LAB_14ad2a130;
  uVar5 = FUN_144a3f946();
  puVar4[2] = uVar5;
  *puVar4 = &PTR_FUN_14ad2a0c0;
  puVar4[3] = param_1;
  FUN_147faba10(param_3,&local_50);
  FUN_1449db362(&local_50);
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff1d1a FUN_147ff1d1a body=140 status=ok
// SIG undefined FUN_147ff1d1a(void)

undefined8 FUN_147ff1d1a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar3 = FUN_145b67c86();
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      if ((((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) && (lVar1 = *(longlong *)(lVar1 + 0x50), lVar1 != 0)) &&
         ((longlong)*(int *)(lVar1 + 0x30) != 0)) {
        lVar3 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x28) + lVar3) == param_2) {
            return *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 8 + lVar3);
          }
          lVar3 = lVar3 + 0x10;
        } while ((longlong)*(int *)(lVar1 + 0x30) * 0x10 != lVar3);
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 147ff1db8 FUN_147ff1db8 body=204 status=ok
// SIG undefined FUN_147ff1db8(void)

void FUN_147ff1db8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_38 = L"MissingStateTree";
    local_30 = 0x10;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"StateTreeCameraDirector";
    local_30 = 0x17;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,L"No state tree reference is set.");
    FUN_147fd2e2c(param_2,1,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff1e92 FUN_147ff1e92 body=26 status=ok
// SIG undefined FUN_147ff1e92(void)

undefined8 FUN_147ff1e92(longlong param_1,undefined8 param_2)

{
  FUN_147ff1eac(param_2,param_1 + 0x28);
  return 1;
}



// FUNCTION 147ff1eac FUN_147ff1eac body=78 status=ok
// SIG undefined FUN_147ff1eac(void)

void FUN_147ff1eac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cb2ac58 == 0) {
    uVar1 = FUN_140d2376e();
    DAT_14cb2ac58 = FUN_140002ddd(FUN_146459a93,uVar1,L"CameraDirectorStateTreeEvaluationData");
  }
  FUN_1438debfe(param_1,param_2,DAT_14cb2ac58);
  return;
}



// FUNCTION 147ff1efa FUN_147ff1efa body=32 status=ok
// SIG undefined FUN_147ff1efa(void)

char FUN_147ff1efa(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_147ff1f1a();
  cVar2 = '\x01';
  if (cVar1 != '\0') {
    cVar2 = *(char *)(param_1 + 0x2e) * '\x02';
  }
  return cVar2;
}



// FUNCTION 147ff1f1a FUN_147ff1f1a body=130 status=ok
// SIG undefined FUN_147ff1f1a(void)

bool FUN_147ff1f1a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar2 = *(longlong **)(param_2 + 0x100);
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    plVar4 = *(longlong **)
              ((ulonglong)*(ushort *)(*(longlong *)(param_2 + 200) + 0x1c) * 0x10 + 8 +
              (ulonglong)*(ushort *)(param_1 + 0x2a) * 0x10 + *(longlong *)(param_2 + 0x40));
    iVar1 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
      FUN_147fd81ec(plVar4,iVar1);
    }
    lVar5 = *plVar2;
    *(longlong *)(*plVar4 + (longlong)iVar1 * 8) = lVar5;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  return lVar3 != 0;
}



// FUNCTION 147ff1f9c FUN_147ff1f9c body=16 status=ok
// SIG undefined FUN_147ff1f9c(void)

undefined8 FUN_147ff1f9c(void)

{
  FUN_147ff1f1a();
  return 0;
}



// FUNCTION 147ff1fac FUN_147ff1fac body=26 status=ok
// SIG undefined FUN_147ff1fac(void)

undefined8 FUN_147ff1fac(longlong param_1,undefined8 param_2)

{
  FUN_147ff1eac(param_2,param_1 + 0x28);
  return 1;
}



// FUNCTION 147ff1fc6 FUN_147ff1fc6 body=32 status=ok
// SIG undefined FUN_147ff1fc6(void)

char FUN_147ff1fc6(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_147ff1fe6();
  cVar2 = '\x01';
  if (cVar1 != '\0') {
    cVar2 = *(char *)(param_1 + 0x2e) * '\x02';
  }
  return cVar2;
}



// FUNCTION 147ff1fe6 FUN_147ff1fe6 body=134 status=ok
// SIG undefined FUN_147ff1fe6(void)

bool FUN_147ff1fe6(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = *(longlong **)(param_2 + 0x100);
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)
             ((ulonglong)*(ushort *)(*(longlong *)(param_2 + 200) + 0x1c) * 0x10 + 8 +
             (ulonglong)*(ushort *)(param_1 + 0x2a) * 0x10 + *(longlong *)(param_2 + 0x40));
    iVar1 = *(int *)(lVar4 + 0x18);
    *(uint *)(lVar4 + 0x18) = iVar1 + 1U;
    if (*(uint *)(lVar4 + 0x1c) < iVar1 + 1U) {
      FUN_148011a8a((longlong *)(lVar4 + 0x10),iVar1);
    }
    lVar5 = *plVar2;
    *(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar1 * 8) = lVar5;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  return lVar3 != 0;
}



// FUNCTION 147ff206c FUN_147ff206c body=16 status=ok
// SIG undefined FUN_147ff206c(void)

undefined8 FUN_147ff206c(void)

{
  FUN_147ff1fe6();
  return 0;
}



// FUNCTION 147ff2080 FUN_147ff2080 body=119 status=ok
// SIG undefined FUN_147ff2080(void)

longlong FUN_147ff2080(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_147ff8b7c();
  if (lVar1 == 0) {
    FUN_1446f470e(&local_20,L"ControllerGameplayCameraEvaluationComponent",1);
    lVar1 = FUN_147ff8be3(param_1,local_20);
    FUN_140b506a4(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff20f8 FUN_147ff20f8 body=161 status=ok
// SIG undefined FUN_147ff20f8(void)

void FUN_147ff20f8(longlong param_1,undefined8 param_2,ushort param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x11c) < iVar1 + 1U) {
    FUN_148011b10((longlong *)(param_1 + 0x110),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x110);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *(ushort *)(lVar2 + (longlong)iVar1 * 0x10 + 8) = param_3 & 0xff;
  if ((*(byte *)(param_1 + 0x9e) & 0x10) == 0) {
    return;
  }
  FUN_147ff85e0(param_1);
  return;
}



// FUNCTION 147ff21ac FUN_147ff21ac body=336 status=ok
// SIG undefined FUN_147ff21ac(void)

void FUN_147ff21ac(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_78 = 0x408f400000000000;
  local_70 = 0x420c0000bf800000;
  uStack_68 = 0x4270000040333333;
  local_60 = 0xbf800000;
  uStack_5c = 0x41c71eb8;
  uStack_58 = 0x41955c29;
  uStack_54 = 0x42c80000;
  local_50 = 0x83f800000;
  local_48 = 0xbf80000041200000;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_30 = 0x3ff0000000000000;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1401c9a0e(puVar1 + 3,&local_c0);
  *(undefined8 *)(param_3 + 4) = local_b0;
  *param_3 = local_c0;
  param_3[1] = uStack_bc;
  param_3[2] = uStack_b8;
  param_3[3] = uStack_b4;
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff22fe FUN_147ff22fe body=406 status=ok
// SIG undefined FUN_147ff22fe(void)

void FUN_147ff22fe(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_98 = 0x408f400000000000;
  local_90 = 0x420c0000bf800000;
  uStack_88 = 0x4270000040333333;
  local_80 = 0xbf800000;
  uStack_7c = 0x41c71eb8;
  uStack_78 = 0x41955c29;
  uStack_74 = 0x42c80000;
  local_70 = 0x83f800000;
  local_68 = 0xbf80000041200000;
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  puVar1 = &local_c8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = 0x3ff0000000000000;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1401c9a0e(puVar1 + 3,&local_50);
  local_e8 = puVar1[2];
  local_f8 = *(undefined4 *)puVar1;
  uStack_f4 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_f0 = *(undefined4 *)(puVar1 + 1);
  uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_d0 = local_40;
  local_e0 = local_50;
  uStack_dc = uStack_4c;
  uStack_d8 = uStack_48;
  uStack_d4 = uStack_44;
  *(ulonglong *)(param_3 + 8) = CONCAT44(uStack_44,uStack_48);
  *(undefined8 *)(param_3 + 10) = local_40;
  *(undefined8 *)(param_3 + 4) = local_e8;
  *(ulonglong *)(param_3 + 6) = CONCAT44(uStack_4c,local_50);
  *param_3 = local_f8;
  param_3[1] = uStack_f4;
  param_3[2] = uStack_f0;
  param_3[3] = uStack_ec;
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff2496 FUN_147ff2496 body=309 status=ok
// SIG undefined FUN_147ff2496(void)

void FUN_147ff2496(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0x408f400000000000;
  local_50 = 0x420c0000bf800000;
  uStack_48 = 0x4270000040333333;
  local_40 = 0xbf800000;
  uStack_3c = 0x41c71eb8;
  uStack_38 = 0x41955c29;
  uStack_34 = 0x42c80000;
  local_30 = 0x83f800000;
  local_28 = 0xbf80000041200000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_98 = *(undefined4 *)(puVar2 + 0xb);
  uVar1 = FUN_1438d8d80(*(undefined4 *)((longlong)puVar2 + 0x3c),*(undefined4 *)(puVar2 + 7),
                        *(undefined4 *)((longlong)puVar2 + 0x4c),*(undefined4 *)(puVar2 + 10));
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff25cc FUN_147ff25cc body=275 status=ok
// SIG undefined FUN_147ff25cc(void)

void FUN_147ff25cc(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0x408f400000000000;
  local_50 = 0x420c0000bf800000;
  uStack_48 = 0x4270000040333333;
  local_40 = 0xbf800000;
  uStack_3c = 0x41c71eb8;
  uStack_38 = 0x41955c29;
  uStack_34 = 0x42c80000;
  local_30 = 0x83f800000;
  local_28 = 0xbf80000041200000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (double)*(float *)(puVar1 + 7);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff26e0 FUN_147ff26e0 body=275 status=ok
// SIG undefined FUN_147ff26e0(void)

void FUN_147ff26e0(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0x408f400000000000;
  local_50 = 0x420c0000bf800000;
  uStack_48 = 0x4270000040333333;
  local_40 = 0xbf800000;
  uStack_3c = 0x41c71eb8;
  uStack_38 = 0x41955c29;
  uStack_34 = 0x42c80000;
  local_30 = 0x83f800000;
  local_28 = 0xbf80000041200000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (double)*(float *)((longlong)puVar1 + 0x3c);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff27f4 FUN_147ff27f4 body=277 status=ok
// SIG undefined FUN_147ff27f4(void)

void FUN_147ff27f4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0x408f400000000000;
  local_50 = 0x420c0000bf800000;
  uStack_48 = 0x4270000040333333;
  local_40 = 0xbf800000;
  uStack_3c = 0x41c71eb8;
  uStack_38 = 0x41955c29;
  uStack_34 = 0x42c80000;
  local_30 = 0x83f800000;
  local_28 = 0xbf80000041200000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar5 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined4 *)puVar5;
  uVar2 = *(undefined4 *)((longlong)puVar5 + 4);
  uVar3 = *(undefined4 *)(puVar5 + 1);
  uVar4 = *(undefined4 *)((longlong)puVar5 + 0xc);
  *(undefined8 *)(param_3 + 4) = puVar5[2];
  *param_3 = uVar1;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff290a FUN_147ff290a body=278 status=ok
// SIG undefined FUN_147ff290a(void)

void FUN_147ff290a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0x408f400000000000;
  local_50 = 0x420c0000bf800000;
  uStack_48 = 0x4270000040333333;
  local_40 = 0xbf800000;
  uStack_3c = 0x41c71eb8;
  uStack_38 = 0x41955c29;
  uStack_34 = 0x42c80000;
  local_30 = 0x83f800000;
  local_28 = 0xbf80000041200000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  uVar1 = *(undefined4 *)(puVar5 + 3);
  uVar2 = *(undefined4 *)((longlong)puVar5 + 0x1c);
  uVar3 = *(undefined4 *)(puVar5 + 4);
  uVar4 = *(undefined4 *)((longlong)puVar5 + 0x24);
  *(undefined8 *)(param_3 + 4) = puVar5[5];
  *param_3 = uVar1;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff2a22 FUN_147ff2a22 body=304 status=ok
// SIG undefined FUN_147ff2a22(void)

void FUN_147ff2a22(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0x408f400000000000;
  local_50 = 0x420c0000bf800000;
  uStack_48 = 0x4270000040333333;
  local_40 = 0xbf800000;
  uStack_3c = 0x41c71eb8;
  uStack_38 = 0x41955c29;
  uStack_34 = 0x42c80000;
  local_30 = 0x83f800000;
  local_28 = 0xbf80000041200000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  if (0.0 < *(float *)(puVar2 + 10)) {
    dVar1 = (double)(*(float *)((longlong)puVar2 + 0x4c) / *(float *)(puVar2 + 10));
  }
  else {
    dVar1 = 0.0;
  }
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff2b54 FUN_147ff2b54 body=376 status=ok
// SIG undefined FUN_147ff2b54(void)

void FUN_147ff2b54(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  undefined1 auStack_e8 [32];
  double local_c8 [9];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_50;
  double local_48;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8[4] = 0.0;
  local_c8[5] = 0.0;
  local_c8[2] = 0.0;
  local_c8[3] = 0.0;
  local_c8[0] = 0.0;
  local_c8[1] = 0.0;
  local_c8[6] = 1000.0;
  local_c8[7] = 15032391664.0;
  local_c8[8] = 1099511890739.2;
  local_80 = 0xbf800000;
  uStack_7c = 0x41c71eb8;
  uStack_78 = 0x41955c29;
  uStack_74 = 0x42c80000;
  local_70 = 0x83f800000;
  local_68 = 0xbf80000041200000;
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  pdVar4 = local_c8;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar4 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = 0x3ff0000000000000;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1401c9a0e(pdVar4 + 3,&local_50);
  dVar1 = pdVar4[6];
  dVar2 = pdVar4[2];
  dVar3 = pdVar4[1];
  *param_3 = dVar1 * local_50 + *pdVar4;
  param_3[1] = local_48 * dVar1 + dVar3;
  param_3[2] = local_40 * dVar1 + dVar2;
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff2cce FUN_147ff2cce body=478 status=ok
// SIG undefined FUN_147ff2cce(void)

void FUN_147ff2cce(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double dVar4;
  double *pdVar5;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8 [9];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8[4] = 0.0;
  local_e8[5] = 0.0;
  local_e8[2] = 0.0;
  local_e8[3] = 0.0;
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  local_e8[6] = 1000.0;
  local_e8[7] = 15032391664.0;
  local_e8[8] = 1099511890739.2;
  local_a0 = 0xbf800000;
  uStack_9c = 0x41c71eb8;
  uStack_98 = 0x41955c29;
  uStack_94 = 0x42c80000;
  local_90 = 0x83f800000;
  local_88 = 0xbf80000041200000;
  local_80 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  pdVar3 = *(double **)(param_2 + 0x38);
  local_f0 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  dVar4 = local_f0;
  pdVar5 = local_e8;
  if (pdVar3 != (double *)0x0) {
    pdVar5 = pdVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = 0x3ff0000000000000;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1401c9a0e(pdVar5 + 3,&local_70);
  dVar1 = pdVar5[2];
  dVar2 = pdVar5[1];
  *param_3 = dVar4 * local_70 + *pdVar5;
  param_3[1] = local_68 * dVar4 + dVar2;
  param_3[2] = local_60 * dVar4 + dVar1;
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff2eae FUN_147ff2eae body=272 status=ok
// SIG undefined FUN_147ff2eae(void)

void FUN_147ff2eae(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0x408f400000000000;
  local_50 = 0x420c0000bf800000;
  uStack_48 = 0x4270000040333333;
  local_40 = 0xbf800000;
  uStack_3c = 0x41c71eb8;
  uStack_38 = 0x41955c29;
  uStack_34 = 0x42c80000;
  local_30 = 0x83f800000;
  local_28 = 0xbf80000041200000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *param_3 = puVar1[6];
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff2fc0 FUN_147ff2fc0 body=375 status=ok
// SIG undefined FUN_147ff2fc0(void)

void FUN_147ff2fc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = 0x408f400000000000;
  local_a0 = 0x420c0000bf800000;
  uStack_98 = 0x4270000040333333;
  local_90 = 0xbf800000;
  uStack_8c = 0x41c71eb8;
  uStack_88 = 0x41955c29;
  uStack_84 = 0x42c80000;
  local_80 = 0x83f800000;
  local_78 = 0xbf80000041200000;
  local_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  puVar4 = &local_d8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  uVar1 = puVar4[2];
  FUN_144a7484c(puVar4 + 3,&local_68);
  *param_3 = local_68;
  param_3[1] = uStack_60;
  *(undefined4 *)(param_3 + 2) = local_58;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_54;
  *(undefined4 *)(param_3 + 3) = uStack_50;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_4c;
  param_3[4] = uVar2;
  param_3[5] = uVar3;
  param_3[6] = uVar1;
  param_3[7] = 0;
  param_3[8] = 0x3ff0000000000000;
  param_3[9] = 0x3ff0000000000000;
  param_3[10] = 0x3ff0000000000000;
  param_3[0xb] = 0;
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff3138 FUN_147ff3138 body=193 status=ok
// SIG undefined FUN_147ff3138(void)

void FUN_147ff3138(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90 [14];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
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
  FUN_147ff31fa(local_90,local_20);
  puVar2 = local_90;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff31fa FUN_147ff31fa body=626 status=ok
// SIG undefined FUN_147ff31fa(void)

undefined1 (*) [16] FUN_147ff31fa(undefined1 (*param_1) [16],longlong param_2)

{
  double dVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_118 [32];
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  float local_cc;
  double local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)param_1[2] = 0;
  *(undefined8 *)(param_1[2] + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)param_1[3] = 0x408f400000000000;
  *(undefined8 *)(param_1[3] + 8) = 0x420c0000bf800000;
  *(undefined8 *)param_1[4] = 0x4270000040333333;
  *(undefined4 *)(param_1[4] + 8) = 0xbf800000;
  *(undefined4 *)(param_1[4] + 0xc) = 0x41c71eb8;
  *(undefined4 *)param_1[5] = 0x41955c29;
  *(undefined4 *)(param_1[5] + 4) = 0x42c80000;
  *(undefined8 *)(param_1[5] + 8) = 0x83f800000;
  *(undefined8 *)param_1[6] = 0xbf80000041200000;
  *(undefined8 *)(param_1[6] + 8) = 0;
  if (param_2 != 0) {
    local_c8 = 0.0;
    dStack_c0 = 0.0;
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0x3ff00000;
    local_a8 = 0.0;
    dStack_a0 = 0.0;
    local_98 = 0.0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_84 = 0x3ff00000;
    uStack_80 = 0;
    uStack_7c = 0x3ff00000;
    local_78 = 0x3ff0000000000000;
    uStack_70 = 0;
    FUN_14798eb06(param_2,&local_c8,&local_cc);
    dVar1 = *(double *)(param_2 + 0x270);
    dVar4 = *(double *)(param_2 + 0x268) + dStack_a0;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = *(double *)(param_2 + 0x260) + local_a8;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *param_1 = auVar3;
    *(double *)param_1[1] = dVar1 + local_98;
    dVar4 = *(double *)(param_2 + 0x240);
    dVar5 = *(double *)(param_2 + 0x248);
    dVar6 = *(double *)(param_2 + 0x250);
    dVar7 = *(double *)(param_2 + 600);
    local_f8 = dVar5 * (double)CONCAT44(uStack_b4,local_b8) * -1.0 +
               dVar6 * dStack_c0 +
               local_c8 * dVar7 * 1.0 + (double)CONCAT44(uStack_ac,uStack_b0) * dVar4;
    dStack_f0 = dVar4 * (double)CONCAT44(uStack_b4,local_b8) * 1.0 +
                dVar7 * dStack_c0 +
                local_c8 * dVar6 * -1.0 + (double)CONCAT44(uStack_ac,uStack_b0) * dVar5;
    dVar1 = dVar6 * (double)CONCAT44(uStack_b4,local_b8) * -1.0 +
            ((local_c8 * dVar4 * -1.0 + (double)CONCAT44(uStack_ac,uStack_b0) * dVar7) -
            dStack_c0 * dVar5);
    local_e8._8_4_ = SUB84(dVar1,0);
    local_e8._0_8_ =
         dVar7 * (double)CONCAT44(uStack_b4,local_b8) * 1.0 +
         ((local_c8 * dVar5 * 1.0 + (double)CONCAT44(uStack_ac,uStack_b0) * dVar6) -
         dStack_c0 * dVar4);
    local_e8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    FUN_1448052ee(&local_f8,param_1[1] + 8);
    *(float *)(param_1[3] + 8) = *(float *)(param_2 + 0x2a8) + local_cc;
    bVar2 = *(byte *)(param_2 + 0x2d1);
    param_1[6][0xd] = bVar2 & 1;
    param_1[6][0xe] = bVar2 >> 1 & 1;
    param_1[6][0xf] = *(undefined1 *)(param_2 + 0x2d0);
    *(float *)(param_1[4] + 0xc) = *(float *)(param_2 + 0x2cc) * 18.67;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
  }
  FUN_1415b7ec4(L"Invalid camera component was given",2,0);
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ff346e FUN_147ff346e body=193 status=ok
// SIG undefined FUN_147ff346e(void)

void FUN_147ff346e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90 [14];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
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
  FUN_147ff3530(local_90,local_20);
  puVar2 = local_90;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff3530 FUN_147ff3530 body=117 status=ok
// SIG undefined FUN_147ff3530(void)

longlong FUN_147ff3530(longlong param_1,longlong param_2)

{
  FUN_147ff31fa();
  if (param_2 != 0) {
    *(double *)(param_1 + 0x30) = (double)*(float *)(param_2 + 0xce4);
    *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0xcdc);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0xce0);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0xc44);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0xc48);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0xc6c);
  }
  return param_1;
}



// FUNCTION 147ff35a6 FUN_147ff35a6 body=492 status=ok
// SIG undefined FUN_147ff35a6(void)

void FUN_147ff35a6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0x408f400000000000;
  local_60 = (undefined1  [8])0x420c0000bf800000;
  uStack_58 = 0x4270000040333333;
  local_50 = 0xbf800000;
  uStack_4c = 0x41c71eb8;
  uStack_48 = 0x41955c29;
  uStack_44 = 0x42c80000;
  local_40 = 0x83f800000;
  uStack_38 = 0xbf80000041200000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  puVar17 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar17 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar16 = (undefined8 *)((longlong)puVar1 + 0x3c);
  if (puVar1 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)(local_60 + 4);
  }
  uVar6 = *puVar16;
  uVar7 = puVar16[1];
  uVar8 = puVar16[2];
  uVar9 = puVar16[3];
  uVar10 = puVar16[4];
  uVar11 = puVar16[5];
  local_a8 = *(undefined4 *)(puVar16 + 6);
  uVar12 = *puVar17;
  uVar13 = puVar17[1];
  uVar14 = puVar17[2];
  uVar15 = puVar17[3];
  uVar2 = *(undefined4 *)(puVar17 + 4);
  uVar3 = *(undefined4 *)((longlong)puVar17 + 0x24);
  uVar4 = *(undefined4 *)(puVar17 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar17 + 0x2c);
  param_3[6] = puVar17[6];
  *(undefined4 *)(param_3 + 4) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar3;
  *(undefined4 *)(param_3 + 5) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar5;
  param_3[2] = uVar14;
  param_3[3] = uVar15;
  *param_3 = uVar12;
  param_3[1] = uVar13;
  *(undefined4 *)(param_3 + 7) = local_9c;
  local_d8._0_4_ = (undefined4)uVar6;
  local_d8._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_d0._0_4_ = (undefined4)uVar7;
  uStack_d0._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_c8._0_4_ = (undefined4)uVar8;
  local_c8._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_c0._0_4_ = (undefined4)uVar9;
  uStack_c0._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_b8._0_4_ = (undefined4)uVar10;
  local_b8._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_b0._0_4_ = (undefined4)uVar11;
  uStack_b0._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
  *(undefined4 *)((longlong)param_3 + 0x3c) = (undefined4)local_d8;
  *(undefined4 *)(param_3 + 8) = local_d8._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x44) = (undefined4)uStack_d0;
  *(undefined4 *)(param_3 + 9) = uStack_d0._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x4c) = (undefined4)local_c8;
  *(undefined4 *)(param_3 + 10) = local_c8._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x54) = (undefined4)uStack_c0;
  *(undefined4 *)(param_3 + 0xb) = uStack_c0._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x5c) = (undefined4)local_b8;
  *(undefined4 *)(param_3 + 0xc) = local_b8._4_4_;
  *(undefined4 *)((longlong)param_3 + 100) = (undefined4)uStack_b0;
  *(undefined4 *)(param_3 + 0xd) = uStack_b0._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x6c) = local_a8;
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
  local_d8 = uVar6;
  uStack_d0 = uVar7;
  local_c8 = uVar8;
  uStack_c0 = uVar9;
  local_b8 = uVar10;
  uStack_b0 = uVar11;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff3794 FUN_147ff3794 body=478 status=ok
// SIG undefined FUN_147ff3794(void)

void FUN_147ff3794(undefined8 param_1,longlong param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *_Src;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_88 = 0x408f400000000000;
  local_80 = 0x420c0000bf800000;
  uStack_78 = 0x4270000040333333;
  local_70 = 0xbf800000;
  uStack_6c = 0x41c71eb8;
  uStack_68 = 0x41955c29;
  uStack_64 = 0x42c80000;
  local_60 = 0x83f800000;
  local_58 = 0xbf80000041200000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_bc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  uVar2 = local_bc;
  _Src = &local_b8;
  if (puVar1 != (undefined8 *)0x0) {
    _Src = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = puVar1 + 8;
  if (puVar1 == (undefined8 *)0x0) {
    puVar3 = &uStack_78;
  }
  local_f8 = *puVar3;
  uStack_f0 = puVar3[1];
  local_e8 = puVar3[2];
  uStack_e0 = puVar3[3];
  local_d8 = puVar3[4];
  uStack_d0 = puVar3[5];
  memmove(param_3,_Src,0x3c);
  *(undefined4 *)((longlong)param_3 + 0x3c) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x40) = (undefined4)local_f8;
  *(undefined4 *)((longlong)param_3 + 0x44) = local_f8._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x48) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)param_3 + 0x4c) = uStack_f0._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x50) = (undefined4)local_e8;
  *(undefined4 *)((longlong)param_3 + 0x54) = local_e8._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x58) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)param_3 + 0x5c) = uStack_e0._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x60) = (undefined4)local_d8;
  *(undefined4 *)((longlong)param_3 + 100) = local_d8._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x68) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)param_3 + 0x6c) = uStack_d0._4_4_;
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff3974 FUN_147ff3974 body=449 status=ok
// SIG undefined FUN_147ff3974(void)

void FUN_147ff3974(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_b0 [6];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0x408f400000000000;
  local_60 = 0x420c0000bf800000;
  uStack_58 = 0x4270000040333333;
  local_50 = 0xbf800000;
  uStack_4c = 0x41c71eb8;
  uStack_48 = 0x41955c29;
  uStack_44 = 0x42c80000;
  local_40 = 0x83f800000;
  local_38 = 0xbf80000041200000;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar3 = &local_98;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = puVar4;
  }
  puVar2 = local_b0;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_128;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_118 = *(undefined8 *)(puVar2 + 4);
  local_128._0_4_ = *puVar2;
  local_128._4_4_ = puVar2[1];
  uStack_120 = puVar2[2];
  uStack_11c = puVar2[3];
  puVar4 = &local_128;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar4;
    puVar4 = puVar4 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff3b36 FUN_147ff3b36 body=450 status=ok
// SIG undefined FUN_147ff3b36(void)

void FUN_147ff3b36(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_148 [40];
  undefined8 local_120 [3];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_b0 [6];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0x408f400000000000;
  local_60 = 0x420c0000bf800000;
  uStack_58 = 0x4270000040333333;
  local_50 = 0xbf800000;
  uStack_4c = 0x41c71eb8;
  uStack_48 = 0x41955c29;
  uStack_44 = 0x42c80000;
  local_40 = 0x83f800000;
  local_38 = 0xbf80000041200000;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar3 = &local_98;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = puVar4;
  }
  puVar2 = local_b0;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_120;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_f8 = *(undefined8 *)(puVar2 + 4);
  local_108 = *puVar2;
  uStack_104 = puVar2[1];
  uStack_100 = puVar2[2];
  uStack_fc = puVar2[3];
  puVar4 = local_120;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar4;
    puVar4 = puVar4 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff3cfa FUN_147ff3cfa body=489 status=ok
// SIG undefined FUN_147ff3cfa(void)

void FUN_147ff3cfa(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 0x408f400000000000;
  local_60 = 0x420c0000bf800000;
  uStack_58 = 0x4270000040333333;
  local_50 = 0xbf800000;
  uStack_4c = 0x41c71eb8;
  uStack_48 = 0x41955c29;
  uStack_44 = 0x42c80000;
  local_40 = 0x83f800000;
  uStack_38 = 0xbf80000041200000;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_a0 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  puVar15 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar15 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar16 = puVar1 + 7;
  if (puVar1 == (undefined8 *)0x0) {
    puVar16 = &local_60;
  }
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  uVar9 = puVar16[4];
  uVar10 = puVar16[5];
  local_a8 = puVar16[6];
  uVar11 = *puVar15;
  uVar12 = puVar15[1];
  uVar13 = puVar15[2];
  uVar14 = puVar15[3];
  uVar2 = *(undefined4 *)((longlong)puVar15 + 0x24);
  uVar3 = *(undefined4 *)(puVar15 + 5);
  uVar4 = *(undefined4 *)((longlong)puVar15 + 0x2c);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar15 + 4);
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar2;
  *(undefined4 *)(param_3 + 5) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar4;
  param_3[2] = uVar13;
  param_3[3] = uVar14;
  *param_3 = uVar11;
  param_3[1] = uVar12;
  param_3[6] = local_a0;
  local_d8._0_4_ = (undefined4)uVar5;
  local_d8._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_d0._0_4_ = (undefined4)uVar6;
  uStack_d0._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_c8._0_4_ = (undefined4)uVar7;
  local_c8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_c0._0_4_ = (undefined4)uVar8;
  uStack_c0._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_b8._0_4_ = (undefined4)uVar9;
  local_b8._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_b0._0_4_ = (undefined4)uVar10;
  uStack_b0._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  *(undefined4 *)(param_3 + 7) = (undefined4)local_d8;
  *(undefined4 *)((longlong)param_3 + 0x3c) = local_d8._4_4_;
  *(undefined4 *)(param_3 + 8) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)param_3 + 0x44) = uStack_d0._4_4_;
  *(undefined4 *)(param_3 + 9) = (undefined4)local_c8;
  *(undefined4 *)((longlong)param_3 + 0x4c) = local_c8._4_4_;
  *(undefined4 *)(param_3 + 10) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)param_3 + 0x54) = uStack_c0._4_4_;
  *(undefined4 *)(param_3 + 0xb) = (undefined4)local_b8;
  *(undefined4 *)((longlong)param_3 + 0x5c) = local_b8._4_4_;
  *(undefined4 *)(param_3 + 0xc) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)param_3 + 100) = uStack_b0._4_4_;
  param_3[0xd] = local_a8;
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
  local_d8 = uVar5;
  uStack_d0 = uVar6;
  local_c8 = uVar7;
  uStack_c0 = uVar8;
  local_b8 = uVar9;
  uStack_b0 = uVar10;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff3ee4 FUN_147ff3ee4 body=684 status=ok
// SIG undefined FUN_147ff3ee4(void)

void FUN_147ff3ee4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
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
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 0x408f400000000000;
  uStack_b0 = 0x420c0000bf800000;
  uStack_a8 = 0x4270000040333333;
  uStack_a0 = 0xbf800000;
  uStack_9c = 0x41c71eb8;
  uStack_98 = 0x41955c29;
  uStack_94 = 0x42c80000;
  local_90 = 0x83f800000;
  local_88 = 0xbf80000041200000;
  uStack_80 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0x3ff00000;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0x3ff00000;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_148);
  }
  puVar5 = &local_148;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = &local_e8;
  if (puVar2 != (undefined8 *)0x0) {
    puVar6 = puVar2;
  }
  local_158 = puVar6[5];
  local_168 = puVar6[3];
  uStack_160 = puVar6[4];
  puVar6 = puVar2 + 6;
  if (puVar2 == (undefined8 *)0x0) {
    puVar6 = &local_b8;
  }
  local_1a8 = *puVar6;
  uStack_1a0 = puVar6[1];
  local_198 = *(undefined4 *)(puVar6 + 2);
  uStack_194 = *(undefined4 *)((longlong)puVar6 + 0x14);
  uStack_190 = *(undefined4 *)(puVar6 + 3);
  uStack_18c = *(undefined4 *)((longlong)puVar6 + 0x1c);
  local_188 = *(undefined4 *)(puVar6 + 4);
  uStack_184 = *(undefined4 *)((longlong)puVar6 + 0x24);
  uStack_180 = *(undefined4 *)(puVar6 + 5);
  uStack_17c = *(undefined4 *)((longlong)puVar6 + 0x2c);
  local_178 = *(undefined4 *)(puVar6 + 6);
  uStack_174 = *(undefined4 *)((longlong)puVar6 + 0x34);
  uStack_170 = *(undefined4 *)(puVar6 + 7);
  uStack_16c = *(undefined4 *)((longlong)puVar6 + 0x3c);
  uVar3 = puVar5[4];
  uVar4 = puVar5[5];
  uVar1 = puVar5[6];
  local_78 = *puVar5;
  uStack_70 = puVar5[1];
  local_68 = *(undefined4 *)(puVar5 + 2);
  uStack_64 = *(undefined4 *)((longlong)puVar5 + 0x14);
  uStack_60 = *(undefined4 *)(puVar5 + 3);
  uStack_5c = *(undefined4 *)((longlong)puVar5 + 0x1c);
  FUN_1448052ee(&local_78,&local_168);
  *param_3 = uVar3;
  param_3[1] = uVar4;
  param_3[2] = uVar1;
  param_3[3] = local_168;
  param_3[4] = uStack_160;
  param_3[5] = local_158;
  *(undefined4 *)(param_3 + 6) = (undefined4)local_1a8;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_1a8._4_4_;
  *(undefined4 *)(param_3 + 7) = (undefined4)uStack_1a0;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_1a0._4_4_;
  *(undefined4 *)(param_3 + 8) = local_198;
  *(undefined4 *)((longlong)param_3 + 0x44) = uStack_194;
  *(undefined4 *)(param_3 + 9) = uStack_190;
  *(undefined4 *)((longlong)param_3 + 0x4c) = uStack_18c;
  *(undefined4 *)(param_3 + 10) = local_188;
  *(undefined4 *)((longlong)param_3 + 0x54) = uStack_184;
  *(undefined4 *)(param_3 + 0xb) = uStack_180;
  *(undefined4 *)((longlong)param_3 + 0x5c) = uStack_17c;
  *(undefined4 *)(param_3 + 0xc) = local_178;
  *(undefined4 *)((longlong)param_3 + 100) = uStack_174;
  *(undefined4 *)(param_3 + 0xd) = uStack_170;
  *(undefined4 *)((longlong)param_3 + 0x6c) = uStack_16c;
  if ((local_50 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff419a FUN_147ff419a body=293 status=ok
// SIG undefined FUN_147ff419a(void)

void FUN_147ff419a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147ff42c0(puVar5,local_40);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff42c0 FUN_147ff42c0 body=112 status=ok
// SIG undefined FUN_147ff42c0(void)

ulonglong FUN_147ff42c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  wchar_t *pwVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined7 uVar7;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    pwVar5 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
      uVar6 = CONCAT71(uVar7,*(undefined1 *)(param_2 + 0x40));
      uVar2 = FUN_1447addd0(param_2 + 0x2c,0x10);
      lVar3 = FUN_147fe7c44(lVar1,uVar2);
      if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0xc) & 4) != 0)) &&
         (puVar4 = (undefined1 *)((ulonglong)*(uint *)(lVar3 + 8) + *(longlong *)(lVar1 + 0x60)),
         puVar4 != (undefined1 *)0x0)) {
        uVar6 = CONCAT71(uVar7,*puVar4);
      }
      goto LAB_147ff42e6;
    }
    pwVar5 = L"No camera variable asset was given";
  }
  uVar6 = 0;
  FUN_1415b7ec4(pwVar5,2,0);
LAB_147ff42e6:
  return uVar6 & 0xffffffff;
}



// FUNCTION 147ff4330 FUN_147ff4330 body=295 status=ok
// SIG undefined FUN_147ff4330(void)

void FUN_147ff4330(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_147ff4458(puVar5,local_40);
  plVar4 = local_28;
  *param_3 = uVar3;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff4458 FUN_147ff4458 body=124 status=ok
// SIG undefined FUN_147ff4458(void)

undefined8 FUN_147ff4458(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    pwVar6 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      uVar7 = (undefined4)*(undefined8 *)(param_2 + 0x40);
      uVar8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
      uVar3 = FUN_1447addd0(param_2 + 0x2c,0x10);
      lVar4 = FUN_147fe7c44(lVar2,uVar3);
      if (((lVar4 != 0) && ((*(byte *)(lVar4 + 0xc) & 4) != 0)) &&
         (puVar5 = (undefined8 *)((ulonglong)*(uint *)(lVar4 + 8) + *(longlong *)(lVar2 + 0x60)),
         puVar5 != (undefined8 *)0x0)) {
        uVar1 = *puVar5;
        uVar7 = (undefined4)uVar1;
        uVar8 = (undefined4)((ulonglong)uVar1 >> 0x20);
      }
      goto LAB_147ff4483;
    }
    pwVar6 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar6,2,0);
  uVar7 = 0;
  uVar8 = 0;
LAB_147ff4483:
  return CONCAT44(uVar8,uVar7);
}



// FUNCTION 147ff44d4 FUN_147ff44d4 body=295 status=ok
// SIG undefined FUN_147ff44d4(void)

void FUN_147ff44d4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = FUN_147ff45fc(puVar4,local_40);
  plVar3 = local_28;
  *param_3 = uVar5;
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff45fc FUN_147ff45fc body=124 status=ok
// SIG undefined FUN_147ff45fc(void)

undefined4 FUN_147ff45fc(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    pwVar6 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x40);
      uVar3 = FUN_1447addd0(param_2 + 0x2c,0x10);
      lVar4 = FUN_147fe7c44(lVar2,uVar3);
      if (lVar4 == 0) {
        return uVar1;
      }
      if ((*(byte *)(lVar4 + 0xc) & 4) == 0) {
        return uVar1;
      }
      puVar5 = (undefined4 *)((ulonglong)*(uint *)(lVar4 + 8) + *(longlong *)(lVar2 + 0x60));
      if (puVar5 == (undefined4 *)0x0) {
        return uVar1;
      }
      return *puVar5;
    }
    pwVar6 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar6,2,0);
  return 0;
}



// FUNCTION 147ff4678 FUN_147ff4678 body=293 status=ok
// SIG undefined FUN_147ff4678(void)

void FUN_147ff4678(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147ff479e(puVar5,local_40);
  plVar3 = local_28;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff479e FUN_147ff479e body=110 status=ok
// SIG undefined FUN_147ff479e(void)

undefined4 FUN_147ff479e(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    pwVar6 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x40);
      uVar3 = FUN_1447addd0(param_2 + 0x2c,0x10);
      lVar4 = FUN_147fe7c44(lVar2,uVar3);
      if (lVar4 == 0) {
        return uVar1;
      }
      if ((*(byte *)(lVar4 + 0xc) & 4) == 0) {
        return uVar1;
      }
      puVar5 = (undefined4 *)((ulonglong)*(uint *)(lVar4 + 8) + *(longlong *)(lVar2 + 0x60));
      if (puVar5 == (undefined4 *)0x0) {
        return uVar1;
      }
      return *puVar5;
    }
    pwVar6 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar6,2,0);
  return 0;
}



// FUNCTION 147ff480c FUN_147ff480c body=313 status=ok
// SIG undefined FUN_147ff480c(void)

void FUN_147ff480c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff4946(&local_58,puVar4,local_40);
  plVar3 = local_28;
  *(undefined8 *)(param_3 + 4) = local_48;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff4946 FUN_147ff4946 body=154 status=ok
// SIG undefined FUN_147ff4946(void)

undefined8 * FUN_147ff4946(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    pwVar5 = L"No camera variable table has been set";
  }
  else {
    if (param_3 != 0) {
      uVar2 = FUN_1447addd0(param_3 + 0x2c,0x10);
      lVar3 = FUN_147fe7c44(lVar1,uVar2);
      if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0xc) & 4) == 0)) ||
         (puVar4 = (undefined4 *)((ulonglong)*(uint *)(lVar3 + 8) + *(longlong *)(lVar1 + 0x60)),
         puVar4 == (undefined4 *)0x0)) {
        param_1[2] = *(undefined8 *)(param_3 + 0x50);
        uVar2 = *(undefined4 *)(param_3 + 0x40);
        uVar6 = *(undefined4 *)(param_3 + 0x44);
        uVar7 = *(undefined4 *)(param_3 + 0x48);
        uVar8 = *(undefined4 *)(param_3 + 0x4c);
      }
      else {
        param_1[2] = *(undefined8 *)(puVar4 + 4);
        uVar2 = *puVar4;
        uVar6 = puVar4[1];
        uVar7 = puVar4[2];
        uVar8 = puVar4[3];
      }
      *(undefined4 *)param_1 = uVar2;
      *(undefined4 *)((longlong)param_1 + 4) = uVar6;
      *(undefined4 *)(param_1 + 1) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar8;
      return param_1;
    }
    pwVar5 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar5,2,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 147ff49e0 FUN_147ff49e0 body=349 status=ok
// SIG undefined FUN_147ff49e0(void)

void FUN_147ff49e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [13];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff4b3e(local_a8,puVar5,local_40);
  plVar3 = local_28;
  puVar5 = local_a8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *param_3 = *puVar5;
    puVar5 = puVar5 + 1;
    param_3 = param_3 + 1;
  }
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
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff4b3e FUN_147ff4b3e body=300 status=ok
// SIG undefined FUN_147ff4b3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147ff4b3e(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb2afb0) && (FUN_144b3d300(&DAT_14cb2afb0), DAT_14cb2afb0 == -1)) {
    DAT_14cb2af50 = 0;
    DAT_14cb2af58 = 0;
    _DAT_14cb2af60 = 0;
    uRam000000014cb2af64 = 0;
    uRam000000014cb2af68 = 0;
    uRam000000014cb2af6c = 0x3ff00000;
    _DAT_14cb2af70 = 0;
    uRam000000014cb2af78 = 0;
    _DAT_14cb2af80 = 0;
    uRam000000014cb2af88 = 0;
    _DAT_14cb2af90 = 0;
    uRam000000014cb2af94 = 0x3ff00000;
    uRam000000014cb2af98 = 0;
    uRam000000014cb2af9c = 0x3ff00000;
    _DAT_14cb2afa0 = 0x3ff0000000000000;
    uRam000000014cb2afa8 = 0;
    _Init_thread_footer(&DAT_14cb2afb0);
  }
  lVar4 = *param_2;
  puVar6 = param_1;
  if (lVar4 == 0) {
    pwVar3 = L"No camera variable table has been set";
LAB_147ff4b89:
    FUN_1415b7ec4(pwVar3,2,0);
    puVar5 = &DAT_14cb2af50;
  }
  else {
    if (param_3 == 0) {
      pwVar3 = L"No camera variable asset was given";
      goto LAB_147ff4b89;
    }
    uVar1 = FUN_1447addd0(param_3 + 0x2c,0x10);
    lVar2 = FUN_147fe7c44(lVar4,uVar1);
    if (((lVar2 == 0) || ((*(byte *)(lVar2 + 0xc) & 4) == 0)) ||
       (puVar5 = (undefined8 *)((ulonglong)*(uint *)(lVar2 + 8) + *(longlong *)(lVar4 + 0x60)),
       puVar5 == (undefined8 *)0x0)) {
      puVar5 = (undefined8 *)(param_3 + 0x40);
      lVar4 = 0xc;
      goto LAB_147ff4ba2;
    }
  }
  lVar4 = 0xc;
LAB_147ff4ba2:
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return param_1;
}



// FUNCTION 147ff4c6a FUN_147ff4c6a body=305 status=ok
// SIG undefined FUN_147ff4c6a(void)

void FUN_147ff4c6a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff4d9c(&local_50,puVar4,local_40);
  plVar3 = local_28;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff4d9c FUN_147ff4d9c body=127 status=ok
// SIG undefined FUN_147ff4d9c(void)

undefined4 * FUN_147ff4d9c(undefined4 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    pwVar4 = L"No camera variable table has been set";
  }
  else {
    if (param_3 != 0) {
      uVar5 = FUN_1447addd0(param_3 + 0x2c,0x10);
      lVar2 = FUN_147fe7c44(lVar1,uVar5);
      if (((lVar2 == 0) || ((*(byte *)(lVar2 + 0xc) & 4) == 0)) ||
         (puVar3 = (undefined4 *)((ulonglong)*(uint *)(lVar2 + 8) + *(longlong *)(lVar1 + 0x60)),
         puVar3 == (undefined4 *)0x0)) {
        uVar5 = *(undefined4 *)(param_3 + 0x40);
        uVar6 = *(undefined4 *)(param_3 + 0x44);
        uVar7 = *(undefined4 *)(param_3 + 0x48);
        uVar8 = *(undefined4 *)(param_3 + 0x4c);
      }
      else {
        uVar5 = *puVar3;
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
      }
      goto LAB_147ff4dca;
    }
    pwVar4 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar4,2,0);
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
LAB_147ff4dca:
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  return param_1;
}



// FUNCTION 147ff4e1c FUN_147ff4e1c body=313 status=ok
// SIG undefined FUN_147ff4e1c(void)

void FUN_147ff4e1c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff4f56(&local_58,puVar4,local_40);
  plVar3 = local_28;
  *(undefined8 *)(param_3 + 4) = local_48;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff4f56 FUN_147ff4f56 body=154 status=ok
// SIG undefined FUN_147ff4f56(void)

undefined8 * FUN_147ff4f56(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    pwVar5 = L"No camera variable table has been set";
  }
  else {
    if (param_3 != 0) {
      uVar2 = FUN_1447addd0(param_3 + 0x2c,0x10);
      lVar3 = FUN_147fe7c44(lVar1,uVar2);
      if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0xc) & 4) == 0)) ||
         (puVar4 = (undefined4 *)((ulonglong)*(uint *)(lVar3 + 8) + *(longlong *)(lVar1 + 0x60)),
         puVar4 == (undefined4 *)0x0)) {
        param_1[2] = *(undefined8 *)(param_3 + 0x50);
        uVar2 = *(undefined4 *)(param_3 + 0x40);
        uVar6 = *(undefined4 *)(param_3 + 0x44);
        uVar7 = *(undefined4 *)(param_3 + 0x48);
        uVar8 = *(undefined4 *)(param_3 + 0x4c);
      }
      else {
        param_1[2] = *(undefined8 *)(puVar4 + 4);
        uVar2 = *puVar4;
        uVar6 = puVar4[1];
        uVar7 = puVar4[2];
        uVar8 = puVar4[3];
      }
      *(undefined4 *)param_1 = uVar2;
      *(undefined4 *)((longlong)param_1 + 4) = uVar6;
      *(undefined4 *)(param_1 + 1) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar8;
      return param_1;
    }
    pwVar5 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar5,2,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 147ff4ff0 FUN_147ff4ff0 body=313 status=ok
// SIG undefined FUN_147ff4ff0(void)

void FUN_147ff4ff0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff512a(&local_68,puVar4,local_40);
  plVar3 = local_28;
  param_3[4] = local_58;
  param_3[5] = uStack_54;
  param_3[6] = uStack_50;
  param_3[7] = uStack_4c;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff512a FUN_147ff512a body=274 status=ok
// SIG undefined FUN_147ff512a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_147ff512a(undefined4 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2af40) {
    FUN_144b3d300(&DAT_14cb2af40);
    if (DAT_14cb2af40 == -1) {
      _DAT_14cb2af20 = 0;
      uRam000000014cb2af28 = 0;
      _DAT_14cb2af30 = 0;
      _DAT_14cb2af38 = 0x3ff0000000000000;
      _Init_thread_footer(&DAT_14cb2af40);
    }
  }
  lVar1 = *param_2;
  if (lVar1 == 0) {
    pwVar6 = L"No camera variable table has been set";
  }
  else {
    if (param_3 != 0) {
      uVar3 = FUN_1447addd0(param_3 + 0x2c,0x10);
      lVar4 = FUN_147fe7c44(lVar1,uVar3);
      if (((lVar4 == 0) || ((*(byte *)(lVar4 + 0xc) & 4) == 0)) ||
         (puVar5 = (undefined4 *)((ulonglong)*(uint *)(lVar4 + 8) + *(longlong *)(lVar1 + 0x60)),
         puVar5 == (undefined4 *)0x0)) {
        uVar3 = *(undefined4 *)(param_3 + 0x40);
        uVar7 = *(undefined4 *)(param_3 + 0x44);
        uVar8 = *(undefined4 *)(param_3 + 0x48);
        uVar9 = *(undefined4 *)(param_3 + 0x4c);
        uVar10 = *(undefined4 *)(param_3 + 0x50);
        uVar11 = *(undefined4 *)(param_3 + 0x54);
        uVar12 = *(undefined4 *)(param_3 + 0x58);
        uVar13 = *(undefined4 *)(param_3 + 0x5c);
      }
      else {
        uVar3 = *puVar5;
        uVar7 = puVar5[1];
        uVar8 = puVar5[2];
        uVar9 = puVar5[3];
        uVar10 = puVar5[4];
        uVar11 = puVar5[5];
        uVar12 = puVar5[6];
        uVar13 = puVar5[7];
      }
      param_1[4] = uVar10;
      param_1[5] = uVar11;
      param_1[6] = uVar12;
      param_1[7] = uVar13;
      goto LAB_147ff518f;
    }
    pwVar6 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar6,2,0);
  uVar2 = _DAT_14cb2af38;
  *(undefined8 *)(param_1 + 4) = _DAT_14cb2af30;
  *(undefined8 *)(param_1 + 6) = uVar2;
  uVar3 = _DAT_14cb2af20;
  uVar7 = DAT_14cb2af20_4;
  uVar8 = (undefined4)uRam000000014cb2af28;
  uVar9 = uRam000000014cb2af28._4_4_;
LAB_147ff518f:
  *param_1 = uVar3;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  return param_1;
}



// FUNCTION 147ff5242 FUN_147ff5242 body=365 status=ok
// SIG undefined FUN_147ff5242(void)

void FUN_147ff5242(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [36];
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
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
  FUN_147ff53b0(puVar4,local_40,local_44 != 0);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff53b0 FUN_147ff53b0 body=102 status=ok
// SIG undefined FUN_147ff53b0(void)

void FUN_147ff53b0(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  
  if (*param_1 == 0) {
    pwVar1 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      FUN_147ff6350(*param_1,param_2);
      if ((*(char *)(param_2 + 0x28) == '\x01') && (param_1[1] != 0)) {
        FUN_14802292c(param_1[1],param_2);
        return;
      }
      return;
    }
    pwVar1 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar1,2,0);
  return;
}



// FUNCTION 147ff5416 FUN_147ff5416 body=363 status=ok
// SIG undefined FUN_147ff5416(void)

void FUN_147ff5416(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff5582(puVar4,local_40,local_48);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff5582 FUN_147ff5582 body=102 status=ok
// SIG undefined FUN_147ff5582(void)

void FUN_147ff5582(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  
  if (*param_1 == 0) {
    pwVar1 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      FUN_147ff6594(*param_1,param_2);
      if ((*(char *)(param_2 + 0x28) == '\x01') && (param_1[1] != 0)) {
        FUN_14802292c(param_1[1],param_2);
        return;
      }
      return;
    }
    pwVar1 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar1,2,0);
  return;
}



// FUNCTION 147ff55e8 FUN_147ff55e8 body=362 status=ok
// SIG undefined FUN_147ff55e8(void)

void FUN_147ff55e8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff5754(puVar4,local_40,local_44);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff5754 FUN_147ff5754 body=102 status=ok
// SIG undefined FUN_147ff5754(void)

void FUN_147ff5754(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  
  if (*param_1 == 0) {
    pwVar1 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      FUN_147ff64d0(*param_1,param_2);
      if ((*(char *)(param_2 + 0x28) == '\x01') && (param_1[1] != 0)) {
        FUN_14802292c(param_1[1],param_2);
        return;
      }
      return;
    }
    pwVar1 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar1,2,0);
  return;
}



// FUNCTION 147ff57ba FUN_147ff57ba body=361 status=ok
// SIG undefined FUN_147ff57ba(void)

void FUN_147ff57ba(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff5924(puVar4,local_40,local_44);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ff5924 FUN_147ff5924 body=102 status=ok
// SIG undefined FUN_147ff5924(void)

void FUN_147ff5924(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  
  if (*param_1 == 0) {
    pwVar1 = L"No camera variable table has been set";
  }
  else {
    if (param_2 != 0) {
      FUN_147ff6410(*param_1,param_2);
      if ((*(char *)(param_2 + 0x28) == '\x01') && (param_1[1] != 0)) {
        FUN_14802292c(param_1[1],param_2);
        return;
      }
      return;
    }
    pwVar1 = L"No camera variable asset was given";
  }
  FUN_1415b7ec4(pwVar1,2,0);
  return;
}



// FUNCTION 147ff598a FUN_147ff598a body=371 status=ok
// SIG undefined FUN_147ff598a(void)

void FUN_147ff598a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar5 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ff5afe(puVar4,local_40,puVar5);
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


