// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c459f4 FUN_148c459f4 body=71 status=ok
// SIG undefined FUN_148c459f4(void)

void FUN_148c459f4(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14112fbd2(param_2 + 4);
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2b7) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2bf) = 0;
  return;
}



// FUNCTION 148c45a52 FUN_148c45a52 body=63 status=ok
// SIG undefined FUN_148c45a52(void)

undefined1 FUN_148c45a52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c45b7c(param_2,param_3);
    param_3 = param_3 + 0x2c8;
    param_2 = param_2 + 0x2c8;
  }
  return 1;
}



// FUNCTION 148c45aba FUN_148c45aba body=59 status=ok
// SIG undefined FUN_148c45aba(void)

undefined8 FUN_148c45aba(longlong *param_1)

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



// FUNCTION 148c45b06 FUN_148c45b06 body=39 status=ok
// SIG undefined FUN_148c45b06(void)

void FUN_148c45b06(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c8) == '\x01') {
    FUN_14076ba26(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x2c8) = 0;
  }
  return;
}



// FUNCTION 148c45b7c FUN_148c45b7c body=198 status=ok
// SIG undefined FUN_148c45b7c(void)

longlong * FUN_148c45b7c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  bVar2 = DAT_14c950c29;
  *param_1 = lVar3;
  lVar3 = param_2[1];
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_2[1];
      bVar2 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar3;
  lVar3 = param_2[2];
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_2[2];
    }
  }
  param_1[2] = lVar3;
  FUN_14054d68c(param_1 + 3,param_2 + 3);
  FUN_145c43818(param_1 + 0x52,param_2 + 0x52);
  FUN_14870773e(param_1 + 0x55,param_2 + 0x55);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x2c3);
  *(int *)(param_1 + 0x58) = (int)param_2[0x58];
  *(undefined4 *)((longlong)param_1 + 0x2c3) = uVar1;
  return param_1;
}



// FUNCTION 148c45c74 FUN_148c45c74 body=180 status=ok
// SIG undefined FUN_148c45c74(void)

void FUN_148c45c74(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148e00b02(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c45d3e FUN_148c45d3e body=72 status=ok
// SIG undefined FUN_148c45d3e(void)

void FUN_148c45d3e(longlong param_1)

{
  FUN_140d4df51(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140d4df51(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c45d8c FUN_148c45d8c body=326 status=ok
// SIG undefined FUN_148c45d8c(void)

void FUN_148c45d8c(undefined8 param_1,longlong param_2)

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
  FUN_148e03312(local_20,iVar1 != 0,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c45ef6 FUN_148c45ef6 body=154 status=ok
// SIG undefined FUN_148c45ef6(void)

void FUN_148c45ef6(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x174) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c45fa4 FUN_148c45fa4 body=48 status=ok
// SIG undefined FUN_148c45fa4(void)

longlong FUN_148c45fa4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c45fd4 FUN_148c45fd4 body=45 status=ok
// SIG undefined FUN_148c45fd4(void)

longlong FUN_148c45fd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46002 FUN_148c46002 body=48 status=ok
// SIG undefined FUN_148c46002(void)

longlong FUN_148c46002(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46032 FUN_148c46032 body=48 status=ok
// SIG undefined FUN_148c46032(void)

longlong FUN_148c46032(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46062 FUN_148c46062 body=48 status=ok
// SIG undefined FUN_148c46062(void)

longlong FUN_148c46062(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46092 FUN_148c46092 body=48 status=ok
// SIG undefined FUN_148c46092(void)

longlong FUN_148c46092(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc40;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c460c2 FUN_148c460c2 body=48 status=ok
// SIG undefined FUN_148c460c2(void)

longlong FUN_148c460c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc48;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c460f2 FUN_148c460f2 body=48 status=ok
// SIG undefined FUN_148c460f2(void)

longlong FUN_148c460f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xed0;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46122 FUN_148c46122 body=48 status=ok
// SIG undefined FUN_148c46122(void)

longlong FUN_148c46122(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46152 FUN_148c46152 body=48 status=ok
// SIG undefined FUN_148c46152(void)

longlong FUN_148c46152(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46182 FUN_148c46182 body=48 status=ok
// SIG undefined FUN_148c46182(void)

longlong FUN_148c46182(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c461b2 FUN_148c461b2 body=48 status=ok
// SIG undefined FUN_148c461b2(void)

longlong FUN_148c461b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c461e2 FUN_148c461e2 body=48 status=ok
// SIG undefined FUN_148c461e2(void)

longlong FUN_148c461e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46212 FUN_148c46212 body=48 status=ok
// SIG undefined FUN_148c46212(void)

longlong FUN_148c46212(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46242 FUN_148c46242 body=45 status=ok
// SIG undefined FUN_148c46242(void)

longlong FUN_148c46242(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46270 FUN_148c46270 body=45 status=ok
// SIG undefined FUN_148c46270(void)

longlong FUN_148c46270(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4629e FUN_148c4629e body=45 status=ok
// SIG undefined FUN_148c4629e(void)

longlong FUN_148c4629e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c462cc FUN_148c462cc body=45 status=ok
// SIG undefined FUN_148c462cc(void)

longlong FUN_148c462cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c462fa FUN_148c462fa body=48 status=ok
// SIG undefined FUN_148c462fa(void)

longlong FUN_148c462fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4632a FUN_148c4632a body=48 status=ok
// SIG undefined FUN_148c4632a(void)

longlong FUN_148c4632a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4635a FUN_148c4635a body=48 status=ok
// SIG undefined FUN_148c4635a(void)

longlong FUN_148c4635a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46392 FUN_148c46392 body=45 status=ok
// SIG undefined FUN_148c46392(void)

longlong FUN_148c46392(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c463ce FUN_148c463ce body=45 status=ok
// SIG undefined FUN_148c463ce(void)

longlong FUN_148c463ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a1f7ae(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c463fc FUN_148c463fc body=45 status=ok
// SIG undefined FUN_148c463fc(void)

longlong FUN_148c463fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145a1f7ae(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4642a FUN_148c4642a body=45 status=ok
// SIG undefined FUN_148c4642a(void)

longlong FUN_148c4642a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1459e1012(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4648c FUN_148c4648c body=45 status=ok
// SIG undefined FUN_148c4648c(void)

longlong FUN_148c4648c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1458c8e36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c464c6 FUN_148c464c6 body=45 status=ok
// SIG undefined FUN_148c464c6(void)

longlong FUN_148c464c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1458c8e36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c464f4 FUN_148c464f4 body=116 status=ok
// SIG undefined FUN_148c464f4(void)

void FUN_148c464f4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x420);
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined2 *)(param_2 + 9) = 0x101;
  *(undefined1 *)(param_2 + 0x7f) = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x85] = 0;
  param_2[0x86] = 0;
  param_2[0x87] = 0;
  param_2[0x88] = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x51) = 0;
  *param_2 = &PTR_FUN_14b800e40;
  param_2[0x89] = 0;
  param_2[0x8a] = 0;
  param_2[0x8b] = 0;
  return;
}



// FUNCTION 148c465f2 FUN_148c465f2 body=85 status=ok
// SIG undefined FUN_148c465f2(void)

undefined1 FUN_148c465f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b2ca2(param_2,param_3);
    FUN_140d895f4(param_2 + 0x448,param_3 + 0x448);
    param_2 = param_2 + 0x460;
    param_3 = param_3 + 0x460;
  }
  return 1;
}



// FUNCTION 148c46670 FUN_148c46670 body=59 status=ok
// SIG undefined FUN_148c46670(void)

undefined8 FUN_148c46670(longlong *param_1)

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



// FUNCTION 148c466bc FUN_148c466bc body=38 status=ok
// SIG undefined FUN_148c466bc(void)

void FUN_148c466bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x460) == '\x01') {
    FUN_140fcba78(param_2);
    *(undefined1 *)(param_2 + 0x460) = 0;
  }
  return;
}



// FUNCTION 148c46730 FUN_148c46730 body=38 status=ok
// SIG undefined FUN_148c46730(void)

undefined8 FUN_148c46730(undefined8 param_1,int param_2)

{
  FUN_140fcba78();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46756 FUN_148c46756 body=57 status=ok
// SIG undefined FUN_148c46756(void)

void FUN_148c46756(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaee20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaee20 = FUN_140002ddd(FUN_1465edad4,uVar1,L"OakSpawnerBehaviorMod");
  }
  return;
}



// FUNCTION 148c46790 FUN_148c46790 body=87 status=ok
// SIG undefined FUN_148c46790(void)

void FUN_148c46790(undefined8 param_1,undefined8 *param_2)

{
  FUN_145e4783c(param_2);
  param_2[0x17] = 0x1e00000019;
  *param_2 = &PTR_FUN_14b7fd950;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  return;
}



// FUNCTION 148c467fe FUN_148c467fe body=63 status=ok
// SIG undefined FUN_148c467fe(void)

undefined1 FUN_148c467fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c46966(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 148c46866 FUN_148c46866 body=59 status=ok
// SIG undefined FUN_148c46866(void)

undefined8 FUN_148c46866(longlong *param_1)

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



// FUNCTION 148c468b2 FUN_148c468b2 body=40 status=ok
// SIG undefined FUN_148c468b2(void)

void FUN_148c468b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_145a0bad0(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 148c4692c FUN_148c4692c body=57 status=ok
// SIG undefined FUN_148c4692c(void)

void FUN_148c4692c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaee60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaee60 = FUN_140002ddd(FUN_1465edbbd,uVar1,L"OakSpawnGlobals");
  }
  return;
}



// FUNCTION 148c46966 FUN_148c46966 body=134 status=ok
// SIG undefined FUN_148c46966(void)

longlong FUN_148c46966(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_147e1f39c();
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar1 = *(undefined4 *)(param_2 + 0xcc);
  uVar2 = *(undefined4 *)(param_2 + 0xd0);
  uVar3 = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  *(undefined4 *)(param_1 + 0xd4) = uVar3;
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  uVar1 = *(undefined4 *)(param_2 + 0xf4);
  uVar2 = *(undefined4 *)(param_2 + 0xf8);
  uVar3 = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
  return param_1;
}



// FUNCTION 148c469ee FUN_148c469ee body=40 status=ok
// SIG undefined FUN_148c469ee(void)

void FUN_148c469ee(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d8d5f0();
  FUN_140d8d594(param_2,uVar1);
  *param_2 = &PTR_FUN_14b9a0c80;
  return;
}



// FUNCTION 148c46a30 FUN_148c46a30 body=63 status=ok
// SIG undefined FUN_148c46a30(void)

undefined1 FUN_148c46a30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 148c46a98 FUN_148c46a98 body=59 status=ok
// SIG undefined FUN_148c46a98(void)

undefined8 FUN_148c46a98(longlong *param_1)

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



// FUNCTION 148c46ae4 FUN_148c46ae4 body=38 status=ok
// SIG undefined FUN_148c46ae4(void)

void FUN_148c46ae4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148c46b62 FUN_148c46b62 body=48 status=ok
// SIG undefined FUN_148c46b62(void)

void FUN_148c46b62(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b7fdc60;
  return;
}



// FUNCTION 148c46b92 FUN_148c46b92 body=32 status=ok
// SIG undefined FUN_148c46b92(void)

void FUN_148c46b92(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b7fdc60;
  return;
}



// FUNCTION 148c46c0c FUN_148c46c0c body=59 status=ok
// SIG undefined FUN_148c46c0c(void)

undefined8 FUN_148c46c0c(longlong *param_1)

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



// FUNCTION 148c46c58 FUN_148c46c58 body=40 status=ok
// SIG undefined FUN_148c46c58(void)

void FUN_148c46c58(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_148c46d64(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 148c46cce FUN_148c46cce body=38 status=ok
// SIG undefined FUN_148c46cce(void)

undefined8 FUN_148c46cce(undefined8 param_1,int param_2)

{
  FUN_148c46d64();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c46cf4 FUN_148c46cf4 body=55 status=ok
// SIG undefined FUN_148c46cf4(void)

void FUN_148c46cf4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaeee0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaeee0 = FUN_140002ddd(FUN_1465edd43,uVar1,L"OakSpawnPointBodyState");
  }
  return;
}



// FUNCTION 148c46d2c FUN_148c46d2c body=55 status=ok
// SIG undefined FUN_148c46d2c(void)

void FUN_148c46d2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaeeb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaeeb0 = FUN_140002ddd(FUN_1465edc7c,uVar1,L"OakSpawnPointBodySettings");
  }
  return;
}



// FUNCTION 148c46d64 FUN_148c46d64 body=83 status=ok
// SIG undefined FUN_148c46d64(void)

void FUN_148c46d64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7fdc60;
  if (param_1[8] == 0) {
    *param_1 = &PTR_FUN_14b177f30;
  }
  else {
    FUN_140872868(param_1);
    *param_1 = &PTR_FUN_14b177f30;
    if (param_1[8] != 0) {
      FUN_140872868(param_1);
    }
  }
  FUN_1403d7c6c(param_1);
  return;
}



// FUNCTION 148c46db8 FUN_148c46db8 body=84 status=ok
// SIG undefined FUN_148c46db8(void)

void FUN_148c46db8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1404e2388(param_2);
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0xaaad1010;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14b7fde70;
  return;
}



// FUNCTION 148c46e22 FUN_148c46e22 body=63 status=ok
// SIG undefined FUN_148c46e22(void)

undefined1 FUN_148c46e22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487a6de0(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 148c46e8a FUN_148c46e8a body=59 status=ok
// SIG undefined FUN_148c46e8a(void)

undefined8 FUN_148c46e8a(longlong *param_1)

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



// FUNCTION 148c46ed6 FUN_148c46ed6 body=38 status=ok
// SIG undefined FUN_148c46ed6(void)

void FUN_148c46ed6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14186266a(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148c46fbc FUN_148c46fbc body=63 status=ok
// SIG undefined FUN_148c46fbc(void)

undefined1 FUN_148c46fbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4712a(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148c47024 FUN_148c47024 body=59 status=ok
// SIG undefined FUN_148c47024(void)

undefined8 FUN_148c47024(longlong *param_1)

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



// FUNCTION 148c47070 FUN_148c47070 body=49 status=ok
// SIG undefined FUN_148c47070(void)

void FUN_148c47070(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 148c470f0 FUN_148c470f0 body=57 status=ok
// SIG undefined FUN_148c470f0(void)

void FUN_148c470f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaefc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaefc8 = FUN_140002ddd(FUN_1465edf8d,uVar1,L"OakStandInGlobals");
  }
  return;
}



// FUNCTION 148c4712a FUN_148c4712a body=101 status=ok
// SIG undefined FUN_148c4712a(void)

longlong FUN_148c4712a(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_148b8d154(param_1 + 0x20,param_2 + 0x20);
  FUN_148b8d154(param_1 + 0x38,param_2 + 0x38);
  FUN_148b8d154(param_1 + 0x50,param_2 + 0x50);
  FUN_1465a9244(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 148c471ca FUN_148c471ca body=101 status=ok
// SIG undefined FUN_148c471ca(void)

undefined8 FUN_148c471ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_14173baee(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      uVar1 = *(undefined8 *)(param_3 + 0x26 + lVar2);
      *(undefined8 *)(param_2 + 0x20 + lVar2) = *(undefined8 *)(param_3 + 0x20 + lVar2);
      *(undefined8 *)(param_2 + 0x26 + lVar2) = uVar1;
      lVar2 = lVar2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c47258 FUN_148c47258 body=59 status=ok
// SIG undefined FUN_148c47258(void)

undefined8 FUN_148c47258(longlong *param_1)

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



// FUNCTION 148c472f4 FUN_148c472f4 body=55 status=ok
// SIG undefined FUN_148c472f4(void)

void FUN_148c472f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf058 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf058 =
         FUN_140002ddd(FUN_1465ee109,uVar1,L"OakStatusEffectApplicationDefaultsValueResolver");
  }
  return;
}



// FUNCTION 148c473b0 FUN_148c473b0 body=59 status=ok
// SIG undefined FUN_148c473b0(void)

undefined8 FUN_148c473b0(longlong *param_1)

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



// FUNCTION 148c474e2 FUN_148c474e2 body=180 status=ok
// SIG undefined FUN_148c474e2(void)

undefined8 FUN_148c474e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      *(undefined8 *)(param_2 + lVar6) = *(undefined8 *)(param_3 + lVar6);
      *(undefined4 *)(param_2 + 0x78 + lVar6) = *(undefined4 *)(param_3 + 0x78 + lVar6);
      *(undefined2 *)(param_2 + 0x7c + lVar6) = *(undefined2 *)(param_3 + 0x7c + lVar6);
      FUN_14093c00e(param_2 + lVar6 + 0x80,param_3 + lVar6 + 0x80);
      *(undefined8 *)(param_2 + 0x90 + lVar6) = *(undefined8 *)(param_3 + 0x90 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x98 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x98 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_144a787a6(param_2 + lVar6 + 0xa8,param_3 + lVar6 + 0xa8);
      lVar6 = lVar6 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c475be FUN_148c475be body=59 status=ok
// SIG undefined FUN_148c475be(void)

undefined8 FUN_148c475be(longlong *param_1)

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



// FUNCTION 148c4760a FUN_148c4760a body=39 status=ok
// SIG undefined FUN_148c4760a(void)

void FUN_148c4760a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14051f4c4(param_2 + 8);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148c4769a FUN_148c4769a body=46 status=ok
// SIG undefined FUN_148c4769a(void)

void FUN_148c4769a(undefined8 param_1,longlong param_2)

{
  FUN_140d4df51(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c476de FUN_148c476de body=54 status=ok
// SIG undefined FUN_148c476de(void)

undefined1 FUN_148c476de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c477d8(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 148c4773c FUN_148c4773c body=59 status=ok
// SIG undefined FUN_148c4773c(void)

undefined8 FUN_148c4773c(longlong *param_1)

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



// FUNCTION 148c477d8 FUN_148c477d8 body=81 status=ok
// SIG undefined FUN_148c477d8(void)

undefined8 * FUN_148c477d8(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[1];
    }
  }
  param_1[1] = lVar1;
  FUN_140d4def4(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 148c4782a FUN_148c4782a body=50 status=ok
// SIG undefined FUN_148c4782a(void)

void FUN_148c4782a(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_140d4df51(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148c478b2 FUN_148c478b2 body=59 status=ok
// SIG undefined FUN_148c478b2(void)

undefined8 FUN_148c478b2(longlong *param_1)

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



// FUNCTION 148c478f8 FUN_148c478f8 body=32 status=ok
// SIG undefined FUN_148c478f8(void)

void FUN_148c478f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_148c45d3e(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c479ae FUN_148c479ae body=59 status=ok
// SIG undefined FUN_148c479ae(void)

undefined8 FUN_148c479ae(longlong *param_1)

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



// FUNCTION 148c479fa FUN_148c479fa body=38 status=ok
// SIG undefined FUN_148c479fa(void)

void FUN_148c479fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_140c2c108(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 148c47a6e FUN_148c47a6e body=98 status=ok
// SIG undefined FUN_148c47a6e(void)

void FUN_148c47a6e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c47ad0 FUN_148c47ad0 body=45 status=ok
// SIG undefined FUN_148c47ad0(void)

void FUN_148c47ad0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c47afe FUN_148c47afe body=115 status=ok
// SIG undefined FUN_148c47afe(void)

void FUN_148c47afe(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x54,4);
    iVar2 = (int)(uVar1 / 0x54);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x54,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c47b71 FUN_148c47b71 body=52 status=ok
// SIG undefined FUN_148c47b71(void)

void FUN_148c47b71(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c47ba6(param_1,param_2);
    param_1 = param_1 + 0x54;
    param_2 = param_2 + 0x54;
  }
  return;
}



// FUNCTION 148c47ba6 FUN_148c47ba6 body=108 status=ok
// SIG undefined FUN_148c47ba6(void)

longlong FUN_148c47ba6(longlong param_1,longlong param_2)

{
  FUN_144a8b00e();
  FUN_144a8b00e(param_1 + 0xc,param_2 + 0xc);
  FUN_144a8b00e(param_1 + 0x18,param_2 + 0x18);
  FUN_144a8b00e(param_1 + 0x24,param_2 + 0x24);
  FUN_144a8b00e(param_1 + 0x30,param_2 + 0x30);
  FUN_144a8b00e(param_1 + 0x3c,param_2 + 0x3c);
  FUN_144a8b00e(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



// FUNCTION 148c47c7c FUN_148c47c7c body=59 status=ok
// SIG undefined FUN_148c47c7c(void)

undefined8 FUN_148c47c7c(longlong *param_1)

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



// FUNCTION 148c47d1c FUN_148c47d1c body=29 status=ok
// SIG undefined FUN_148c47d1c(void)

undefined8 FUN_148c47d1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c47d3a FUN_148c47d3a body=55 status=ok
// SIG undefined FUN_148c47d3a(void)

void FUN_148c47d3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf128 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf128 =
         FUN_140002ddd(FUN_1465ee591,uVar1,L"OakStatusEffectElementaEffectInstanceCountResolver");
  }
  return;
}



// FUNCTION 148c47dfa FUN_148c47dfa body=59 status=ok
// SIG undefined FUN_148c47dfa(void)

undefined8 FUN_148c47dfa(longlong *param_1)

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



// FUNCTION 148c47e96 FUN_148c47e96 body=55 status=ok
// SIG undefined FUN_148c47e96(void)

void FUN_148c47e96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf140 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf140 =
         FUN_140002ddd(FUN_1465ee627,uVar1,L"OakStatusEffectElementaEffectScalarValueResolver");
  }
  return;
}



// FUNCTION 148c47f2e FUN_148c47f2e body=59 status=ok
// SIG undefined FUN_148c47f2e(void)

undefined8 FUN_148c47f2e(longlong *param_1)

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



// FUNCTION 148c48030 FUN_148c48030 body=99 status=ok
// SIG undefined FUN_148c48030(void)

undefined1 FUN_148c48030(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      FUN_140c19bee(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c480bc FUN_148c480bc body=59 status=ok
// SIG undefined FUN_148c480bc(void)

undefined8 FUN_148c480bc(longlong *param_1)

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



// FUNCTION 148c48108 FUN_148c48108 body=57 status=ok
// SIG undefined FUN_148c48108(void)

void FUN_148c48108(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b7ff580;
    FUN_1412dafa6(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 148c48204 FUN_148c48204 body=59 status=ok
// SIG undefined FUN_148c48204(void)

undefined8 FUN_148c48204(longlong *param_1)

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



// FUNCTION 148c482da FUN_148c482da body=54 status=ok
// SIG undefined FUN_148c482da(void)

undefined1 FUN_148c482da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c483ec(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148c48338 FUN_148c48338 body=59 status=ok
// SIG undefined FUN_148c48338(void)

undefined8 FUN_148c48338(longlong *param_1)

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



// FUNCTION 148c4837e FUN_148c4837e body=32 status=ok
// SIG undefined FUN_148c4837e(void)

void FUN_148c4837e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1418c7d38(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148c483ec FUN_148c483ec body=196 status=ok
// SIG undefined FUN_148c483ec(void)

longlong FUN_148c483ec(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x14);
  FUN_14020a6cc(param_1 + 0x10,1);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x20);
  FUN_14020a6cc(param_1 + 0x1c,1);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x2c);
  FUN_14020a6cc(param_1 + 0x28,1);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x38);
  FUN_14020a6cc(param_1 + 0x34,1);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x44);
  FUN_14020a6cc(param_1 + 0x40,1);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x50);
  FUN_14020a6cc(param_1 + 0x4c,1);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x5c);
  FUN_14020a6cc(param_1 + 0x58,1);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x68);
  FUN_14020a6cc(param_1 + 100,1);
  return param_1;
}



// FUNCTION 148c484e6 FUN_148c484e6 body=54 status=ok
// SIG undefined FUN_148c484e6(void)

undefined1 FUN_148c484e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1418cffa4(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148c48544 FUN_148c48544 body=59 status=ok
// SIG undefined FUN_148c48544(void)

undefined8 FUN_148c48544(longlong *param_1)

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



// FUNCTION 148c485e2 FUN_148c485e2 body=70 status=ok
// SIG undefined FUN_148c485e2(void)

void FUN_148c485e2(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    *param_1 = &PTR_FUN_14b695510;
    FUN_1449e6b18((longlong)param_1 + 0x34);
    FUN_1449e6b18(param_1 + 5);
    FUN_1449e6b18((longlong)param_1 + 0x1c);
    FUN_1449e6b18(param_1 + 2);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 148c4865c FUN_148c4865c body=54 status=ok
// SIG undefined FUN_148c4865c(void)

undefined1 FUN_148c4865c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4876e(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148c486ba FUN_148c486ba body=59 status=ok
// SIG undefined FUN_148c486ba(void)

undefined8 FUN_148c486ba(longlong *param_1)

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



// FUNCTION 148c48700 FUN_148c48700 body=32 status=ok
// SIG undefined FUN_148c48700(void)

void FUN_148c48700(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1418d0014(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148c4876e FUN_148c4876e body=217 status=ok
// SIG undefined FUN_148c4876e(void)

longlong FUN_148c4876e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x14);
  FUN_14020a6cc(param_1 + 0x10,1);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x20);
  FUN_14020a6cc(param_1 + 0x1c,1);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x2c);
  FUN_14020a6cc(param_1 + 0x28,1);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x38);
  FUN_14020a6cc(param_1 + 0x34,1);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x44);
  FUN_14020a6cc(param_1 + 0x40,1);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x50);
  FUN_14020a6cc(param_1 + 0x4c,1);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
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



// FUNCTION 148c48848 FUN_148c48848 body=38 status=ok
// SIG undefined FUN_148c48848(void)

undefined8 FUN_148c48848(undefined8 param_1,int param_2)

{
  FUN_1418d0014();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4886e FUN_148c4886e body=53 status=ok
// SIG undefined FUN_148c4886e(void)

void FUN_148c4886e(undefined8 param_1,undefined8 *param_2)

{
  FUN_14583f632(param_2);
  *param_2 = &PTR_FUN_14b7ffd00;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0x3002;
  param_2[9] = 0;
  return;
}



// FUNCTION 148c488c8 FUN_148c488c8 body=54 status=ok
// SIG undefined FUN_148c488c8(void)

undefined1 FUN_148c488c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c489ea(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148c48926 FUN_148c48926 body=59 status=ok
// SIG undefined FUN_148c48926(void)

undefined8 FUN_148c48926(longlong *param_1)

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



// FUNCTION 148c4896c FUN_148c4896c body=48 status=ok
// SIG undefined FUN_148c4896c(void)

void FUN_148c4896c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b291110;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 148c489ea FUN_148c489ea body=93 status=ok
// SIG undefined FUN_148c489ea(void)

longlong FUN_148c489ea(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 148c48aa2 FUN_148c48aa2 body=59 status=ok
// SIG undefined FUN_148c48aa2(void)

undefined8 FUN_148c48aa2(longlong *param_1)

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



// FUNCTION 148c48b42 FUN_148c48b42 body=55 status=ok
// SIG undefined FUN_148c48b42(void)

void FUN_148c48b42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf200 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf200 = FUN_140002ddd(FUN_1465eeaa3,uVar1,L"OakStatusEffectRuleData_AIDeath");
  }
  return;
}



// FUNCTION 148c48bd4 FUN_148c48bd4 body=59 status=ok
// SIG undefined FUN_148c48bd4(void)

undefined8 FUN_148c48bd4(longlong *param_1)

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



// FUNCTION 148c48c74 FUN_148c48c74 body=55 status=ok
// SIG undefined FUN_148c48c74(void)

void FUN_148c48c74(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf218 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf218 = FUN_140002ddd(FUN_1465eeb39,uVar1,L"OakStatusEffectRuleData_Freeze");
  }
  return;
}



// FUNCTION 148c48d8c FUN_148c48d8c body=105 status=ok
// SIG undefined FUN_148c48d8c(void)

undefined1 FUN_148c48d8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148740a70(param_2,param_3);
    FUN_148c48f12(param_2 + 0xa0,param_3 + 0xa0);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148c48e1e FUN_148c48e1e body=59 status=ok
// SIG undefined FUN_148c48e1e(void)

undefined8 FUN_148c48e1e(longlong *param_1)

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



// FUNCTION 148c48e6a FUN_148c48e6a body=40 status=ok
// SIG undefined FUN_148c48e6a(void)

void FUN_148c48e6a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14583b7fe(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148c48ed8 FUN_148c48ed8 body=57 status=ok
// SIG undefined FUN_148c48ed8(void)

void FUN_148c48ed8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf330 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf330 = FUN_140002ddd(FUN_1465eecfb,uVar1,L"OakSymphonicAmbientAudioDef");
  }
  return;
}



// FUNCTION 148c48f12 FUN_148c48f12 body=95 status=ok
// SIG undefined FUN_148c48f12(void)

undefined8 * FUN_148c48f12(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14583b861(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c48f72(param_1,iVar1);
      FUN_148c48fe5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c48f72 FUN_148c48f72 body=115 status=ok
// SIG undefined FUN_148c48f72(void)

void FUN_148c48f72(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c48fe5 FUN_148c48fe5 body=134 status=ok
// SIG undefined FUN_148c48fe5(void)

void FUN_148c48fe5(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c490b8 FUN_148c490b8 body=76 status=ok
// SIG undefined FUN_148c490b8(void)

undefined8 FUN_148c490b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    uVar4 = *(undefined4 *)(param_3 + 0x20);
    uVar5 = *(undefined4 *)(param_3 + 0x24);
    uVar6 = *(undefined4 *)(param_3 + 0x28);
    uVar7 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined4 *)(param_2 + 0x20) = uVar4;
    *(undefined4 *)(param_2 + 0x24) = uVar5;
    *(undefined4 *)(param_2 + 0x28) = uVar6;
    *(undefined4 *)(param_2 + 0x2c) = uVar7;
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 148c4912c FUN_148c4912c body=70 status=ok
// SIG undefined FUN_148c4912c(void)

void FUN_148c4912c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1411bcf8a(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4917e FUN_148c4917e body=37 status=ok
// SIG undefined FUN_148c4917e(void)

void FUN_148c4917e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[7] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 148c49246 FUN_148c49246 body=54 status=ok
// SIG undefined FUN_148c49246(void)

undefined1 FUN_148c49246(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4935a(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148c492a4 FUN_148c492a4 body=59 status=ok
// SIG undefined FUN_148c492a4(void)

undefined8 FUN_148c492a4(longlong *param_1)

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



// FUNCTION 148c492ea FUN_148c492ea body=34 status=ok
// SIG undefined FUN_148c492ea(void)

void FUN_148c492ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1458c9080(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c4935a FUN_148c4935a body=154 status=ok
// SIG undefined FUN_148c4935a(void)

longlong * FUN_148c4935a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *param_2;
    }
  }
  *param_1 = lVar6;
  lVar6 = param_2[1];
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[2];
  param_1[1] = lVar6;
  param_1[2] = lVar3;
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
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  lVar6 = param_2[6];
  lVar3 = param_2[7];
  lVar5 = param_2[8];
  param_1[5] = param_2[5];
  param_1[6] = lVar6;
  param_1[7] = lVar3;
  param_1[8] = lVar5;
  *(int *)(param_1 + 9) = (int)param_2[9];
  return param_1;
}



// FUNCTION 148c4948e FUN_148c4948e body=70 status=ok
// SIG undefined FUN_148c4948e(void)

undefined8 FUN_148c4948e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    param_2 = param_2 + 0x50;
    param_3 = param_3 + 0x50;
  }
  return 1;
}



// FUNCTION 148c494fc FUN_148c494fc body=59 status=ok
// SIG undefined FUN_148c494fc(void)

undefined8 FUN_148c494fc(longlong *param_1)

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



// FUNCTION 148c49542 FUN_148c49542 body=32 status=ok
// SIG undefined FUN_148c49542(void)

void FUN_148c49542(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c495d0 FUN_148c495d0 body=63 status=ok
// SIG undefined FUN_148c495d0(void)

undefined1 FUN_148c495d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4976e(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148c49638 FUN_148c49638 body=59 status=ok
// SIG undefined FUN_148c49638(void)

undefined8 FUN_148c49638(longlong *param_1)

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



// FUNCTION 148c49684 FUN_148c49684 body=38 status=ok
// SIG undefined FUN_148c49684(void)

void FUN_148c49684(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_1411101e0(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148c496f8 FUN_148c496f8 body=118 status=ok
// SIG undefined FUN_148c496f8(void)

undefined8 * FUN_148c496f8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14044066a(param_1 + 2,10,1);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 0xd) = 4;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe) = 3;
  *(char *)(param_1 + 0xf) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 148c4976e FUN_148c4976e body=102 status=ok
// SIG undefined FUN_148c4976e(void)

longlong FUN_148c4976e(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144983130(param_1 + 0x10,param_2 + 0x10);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_148c497d4(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  FUN_1403de7ba(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 148c497d4 FUN_148c497d4 body=93 status=ok
// SIG undefined FUN_148c497d4(void)

undefined8 * FUN_148c497d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1411102ed(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c49832(param_1,iVar1);
      FUN_148c498a5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c49832 FUN_148c49832 body=115 status=ok
// SIG undefined FUN_148c49832(void)

void FUN_148c49832(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c498a5 FUN_148c498a5 body=68 status=ok
// SIG undefined FUN_148c498a5(void)

void FUN_148c498a5(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14034cca6(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
    uVar2 = *(undefined4 *)(param_2 + 0x40);
    uVar3 = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 148c49908 FUN_148c49908 body=54 status=ok
// SIG undefined FUN_148c49908(void)

undefined1 FUN_148c49908(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c49a14(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c49966 FUN_148c49966 body=59 status=ok
// SIG undefined FUN_148c49966(void)

undefined8 FUN_148c49966(longlong *param_1)

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



// FUNCTION 148c499ac FUN_148c499ac body=34 status=ok
// SIG undefined FUN_148c499ac(void)

void FUN_148c499ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14580c084(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c49a14 FUN_148c49a14 body=92 status=ok
// SIG undefined FUN_148c49a14(void)

longlong FUN_148c49a14(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_148c49a70(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_144a7bb84(param_1 + 0x30,param_2 + 0x30);
  FUN_145a17b6e(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



// FUNCTION 148c49a70 FUN_148c49a70 body=93 status=ok
// SIG undefined FUN_148c49a70(void)

undefined8 * FUN_148c49a70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14580c0cb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c49ace(param_1,iVar1);
      FUN_148c49b43(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c49ace FUN_148c49ace body=117 status=ok
// SIG undefined FUN_148c49ace(void)

void FUN_148c49ace(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c49b43 FUN_148c49b43 body=60 status=ok
// SIG undefined FUN_148c49b43(void)

void FUN_148c49b43(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c49b80(param_1,param_2);
    param_1 = param_1 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return;
}



// FUNCTION 148c49b80 FUN_148c49b80 body=255 status=ok
// SIG undefined FUN_148c49b80(void)

undefined8 * FUN_148c49b80(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
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
  FUN_14034cca6(param_1 + 2,param_2 + 2);
  FUN_14034cca6(param_1 + 9,param_2 + 9);
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x11);
  uVar2 = param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_148c49832(param_1 + 0x10,iVar1,0);
    FUN_148c498a5(param_1[0x10],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_1403de7ba(param_1 + 0x13,param_2 + 0x13);
  return param_1;
}



// FUNCTION 148c49c80 FUN_148c49c80 body=57 status=ok
// SIG undefined FUN_148c49c80(void)

void FUN_148c49c80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf440 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf440 = FUN_140002ddd(FUN_1465ef150,uVar1,L"OakTownDef");
  }
  return;
}



// FUNCTION 148c49cba FUN_148c49cba body=28 status=ok
// SIG undefined FUN_148c49cba(void)

undefined8 FUN_148c49cba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c49cfc FUN_148c49cfc body=75 status=ok
// SIG undefined FUN_148c49cfc(void)

void FUN_148c49cfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_144229ad8(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c49d4e FUN_148c49d4e body=232 status=ok
// SIG undefined FUN_148c49d4e(void)

void FUN_148c49d4e(undefined8 param_1,longlong param_2)

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
  FUN_148ef965a(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c49e3e FUN_148c49e3e body=359 status=ok
// SIG undefined FUN_148c49e3e(void)

void FUN_148c49e3e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0x6000;
  local_28 = 0;
  FUN_1446ef920();
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
  local_58 = local_38;
  local_50 = local_30;
  local_48 = 0;
  FUN_148ef9664(local_20,&local_58,local_3c != 0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c49fa9 FUN_148c49fa9 body=55 status=ok
// SIG undefined FUN_148c49fa9(void)

void FUN_148c49fa9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf4c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf4c8 = FUN_14171c317(FUN_1465efa41,uVar1,L"EOakTrackerObjectIconType");
  }
  return;
}



// FUNCTION 148c4a040 FUN_148c4a040 body=71 status=ok
// SIG undefined FUN_148c4a040(void)

undefined8 * FUN_148c4a040(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148c4a08e FUN_148c4a08e body=148 status=ok
// SIG undefined FUN_148c4a08e(void)

void FUN_148c4a08e(undefined8 param_1,longlong param_2)

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
  FUN_14422e1e8(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4a12c FUN_148c4a12c body=230 status=ok
// SIG undefined FUN_148c4a12c(void)

void FUN_148c4a12c(undefined8 param_1,longlong param_2)

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
  FUN_148e0a862(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4a214 FUN_148c4a214 body=230 status=ok
// SIG undefined FUN_148c4a214(void)

void FUN_148c4a214(undefined8 param_1,longlong param_2)

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
  FUN_148e0a728(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4a2fc FUN_148c4a2fc body=230 status=ok
// SIG undefined FUN_148c4a2fc(void)

void FUN_148c4a2fc(undefined8 param_1,longlong param_2)

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
  FUN_148e0a34c(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4a3e4 FUN_148c4a3e4 body=337 status=ok
// SIG undefined FUN_148c4a3e4(void)

void FUN_148c4a3e4(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1401b309e(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 << 3);
  }
  FUN_148e0a500(local_28,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4a536 FUN_148c4a536 body=230 status=ok
// SIG undefined FUN_148c4a536(void)

void FUN_148c4a536(undefined8 param_1,longlong param_2)

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
  FUN_148e0a1f0(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4a736 FUN_148c4a736 body=48 status=ok
// SIG undefined FUN_148c4a736(void)

longlong FUN_148c4a736(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_145f7cdd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4a782 FUN_148c4a782 body=89 status=ok
// SIG undefined FUN_148c4a782(void)

undefined8 * FUN_148c4a782(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x908);
  _Src = *(void **)(param_1 + 0x900);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 148c4a7f6 FUN_148c4a7f6 body=45 status=ok
// SIG undefined FUN_148c4a7f6(void)

longlong FUN_148c4a7f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145aa0400(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4a824 FUN_148c4a824 body=48 status=ok
// SIG undefined FUN_148c4a824(void)

longlong FUN_148c4a824(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4a854 FUN_148c4a854 body=48 status=ok
// SIG undefined FUN_148c4a854(void)

longlong FUN_148c4a854(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4a884 FUN_148c4a884 body=48 status=ok
// SIG undefined FUN_148c4a884(void)

longlong FUN_148c4a884(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4a8b4 FUN_148c4a8b4 body=48 status=ok
// SIG undefined FUN_148c4a8b4(void)

longlong FUN_148c4a8b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4a8e4 FUN_148c4a8e4 body=48 status=ok
// SIG undefined FUN_148c4a8e4(void)

longlong FUN_148c4a8e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4a914 FUN_148c4a914 body=48 status=ok
// SIG undefined FUN_148c4a914(void)

longlong FUN_148c4a914(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4a944 FUN_148c4a944 body=48 status=ok
// SIG undefined FUN_148c4a944(void)

longlong FUN_148c4a944(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_140ce0512(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4a974 FUN_148c4a974 body=48 status=ok
// SIG undefined FUN_148c4a974(void)

longlong FUN_148c4a974(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_140ce0512(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4aaba FUN_148c4aaba body=59 status=ok
// SIG undefined FUN_148c4aaba(void)

undefined8 FUN_148c4aaba(longlong *param_1)

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



// FUNCTION 148c4ab6e FUN_148c4ab6e body=63 status=ok
// SIG undefined FUN_148c4ab6e(void)

undefined1 FUN_148c4ab6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4ad48(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 148c4abd6 FUN_148c4abd6 body=59 status=ok
// SIG undefined FUN_148c4abd6(void)

undefined8 FUN_148c4abd6(longlong *param_1)

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



// FUNCTION 148c4ac22 FUN_148c4ac22 body=38 status=ok
// SIG undefined FUN_148c4ac22(void)

void FUN_148c4ac22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_140b3fcda(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 148c4ad48 FUN_148c4ad48 body=212 status=ok
// SIG undefined FUN_148c4ad48(void)

longlong FUN_148c4ad48(longlong param_1,longlong param_2)

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
  undefined8 uVar12;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  uVar8 = *(undefined4 *)(param_2 + 0x32);
  uVar9 = *(undefined4 *)(param_2 + 0x36);
  uVar10 = *(undefined4 *)(param_2 + 0x3a);
  uVar11 = *(undefined4 *)(param_2 + 0x3e);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x32) = uVar8;
  *(undefined4 *)(param_1 + 0x36) = uVar9;
  *(undefined4 *)(param_1 + 0x3a) = uVar10;
  *(undefined4 *)(param_1 + 0x3e) = uVar11;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_1447715ec(param_1 + 0x58,param_2 + 0x58);
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
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  FUN_1447715ec(param_1 + 0xb8,param_2 + 0xb8);
  FUN_14184b2ce(param_1 + 0xe0,param_2 + 0xe0);
  uVar12 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = uVar12;
  *(undefined4 *)(param_1 + 0x107) = *(undefined4 *)(param_2 + 0x107);
  return param_1;
}



// FUNCTION 148c4ae1e FUN_148c4ae1e body=104 status=ok
// SIG undefined FUN_148c4ae1e(void)

undefined8 FUN_148c4ae1e(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1403a1980(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4ae88 FUN_148c4ae88 body=28 status=ok
// SIG undefined FUN_148c4ae88(void)

undefined8 FUN_148c4ae88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c4af4c FUN_148c4af4c body=54 status=ok
// SIG undefined FUN_148c4af4c(void)

undefined1 FUN_148c4af4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4b060(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c4afaa FUN_148c4afaa body=59 status=ok
// SIG undefined FUN_148c4afaa(void)

undefined8 FUN_148c4afaa(longlong *param_1)

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



// FUNCTION 148c4aff0 FUN_148c4aff0 body=34 status=ok
// SIG undefined FUN_148c4aff0(void)

void FUN_148c4aff0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_145aa0682(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c4b060 FUN_148c4b060 body=79 status=ok
// SIG undefined FUN_148c4b060(void)

longlong FUN_148c4b060(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_148c4b0b0(param_1);
    FUN_148c4b1e2(param_1 + 0x18,param_2 + 0x18);
    FUN_148c4b314(param_1 + 0x30,param_2 + 0x30);
    FUN_148c4b1e2(param_1 + 0x48,param_2 + 0x48);
  }
  return param_1;
}



// FUNCTION 148c4b0b0 FUN_148c4b0b0 body=304 status=ok
// SIG undefined FUN_148c4b0b0(void)

void FUN_148c4b0b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4b1e2 FUN_148c4b1e2 body=304 status=ok
// SIG undefined FUN_148c4b1e2(void)

void FUN_148c4b1e2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4b314 FUN_148c4b314 body=304 status=ok
// SIG undefined FUN_148c4b314(void)

void FUN_148c4b314(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c4b4da FUN_148c4b4da body=142 status=ok
// SIG undefined FUN_148c4b4da(void)

undefined8 FUN_148c4b4da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar12);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar2 = param_2 + 0x20 + lVar12;
      *(undefined4 *)(lVar2 + -0x20) = *puVar1;
      *(undefined4 *)(lVar2 + -0x1c) = uVar3;
      *(undefined4 *)(lVar2 + -0x18) = uVar4;
      *(undefined4 *)(lVar2 + -0x14) = uVar5;
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(puVar1 + 4);
      *(undefined4 *)(lVar2 + -8) = puVar1[6];
      FUN_1447715ec(lVar2,puVar1 + 8);
      uVar11 = *(undefined8 *)(puVar1 + 0x14);
      uVar3 = puVar1[0x16];
      uVar4 = puVar1[0x17];
      uVar5 = puVar1[0x18];
      uVar6 = puVar1[0x19];
      uVar7 = puVar1[0x1a];
      uVar8 = puVar1[0x1b];
      uVar9 = puVar1[0x1c];
      uVar10 = puVar1[0x1d];
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(puVar1 + 0x12);
      *(undefined8 *)(lVar2 + 0x30) = uVar11;
      *(undefined4 *)(lVar2 + 0x38) = uVar3;
      *(undefined4 *)(lVar2 + 0x3c) = uVar4;
      *(undefined4 *)(lVar2 + 0x40) = uVar5;
      *(undefined4 *)(lVar2 + 0x44) = uVar6;
      *(undefined4 *)(lVar2 + 0x48) = uVar7;
      *(undefined4 *)(lVar2 + 0x4c) = uVar8;
      *(undefined4 *)(lVar2 + 0x50) = uVar9;
      *(undefined4 *)(lVar2 + 0x54) = uVar10;
      *(undefined8 *)(lVar2 + 0x55) = *(undefined8 *)((longlong)puVar1 + 0x75);
      lVar12 = lVar12 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c4b590 FUN_148c4b590 body=59 status=ok
// SIG undefined FUN_148c4b590(void)

undefined8 FUN_148c4b590(longlong *param_1)

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



// FUNCTION 148c4b5dc FUN_148c4b5dc body=46 status=ok
// SIG undefined FUN_148c4b5dc(void)

void FUN_148c4b5dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148c4b684 FUN_148c4b684 body=87 status=ok
// SIG undefined FUN_148c4b684(void)

undefined1 FUN_148c4b684(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4b7a0(param_2,param_3);
    FUN_140f82514(param_2 + 0x18,param_3 + 0x18);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148c4b704 FUN_148c4b704 body=59 status=ok
// SIG undefined FUN_148c4b704(void)

undefined8 FUN_148c4b704(longlong *param_1)

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



// FUNCTION 148c4b7a0 FUN_148c4b7a0 body=84 status=ok
// SIG undefined FUN_148c4b7a0(void)

longlong * FUN_148c4b7a0(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c4b7f6 FUN_148c4b7f6 body=50 status=ok
// SIG undefined FUN_148c4b7f6(void)

void FUN_148c4b7f6(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_140368c45(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c4b880 FUN_148c4b880 body=59 status=ok
// SIG undefined FUN_148c4b880(void)

undefined8 FUN_148c4b880(longlong *param_1)

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



// FUNCTION 148c4b8c6 FUN_148c4b8c6 body=32 status=ok
// SIG undefined FUN_148c4b8c6(void)

void FUN_148c4b8c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1418d05f2(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148c4b9b0 FUN_148c4b9b0 body=73 status=ok
// SIG undefined FUN_148c4b9b0(void)

undefined1 FUN_148c4b9b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14150acc4(param_2,param_3);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    FUN_140d02432(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 148c4ba22 FUN_148c4ba22 body=59 status=ok
// SIG undefined FUN_148c4ba22(void)

undefined8 FUN_148c4ba22(longlong *param_1)

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



// FUNCTION 148c4bb0a FUN_148c4bb0a body=54 status=ok
// SIG undefined FUN_148c4bb0a(void)

undefined1 FUN_148c4bb0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4bc46(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148c4bb68 FUN_148c4bb68 body=59 status=ok
// SIG undefined FUN_148c4bb68(void)

undefined8 FUN_148c4bb68(longlong *param_1)

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



// FUNCTION 148c4bbae FUN_148c4bbae body=32 status=ok
// SIG undefined FUN_148c4bbae(void)

void FUN_148c4bbae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_148c4bc08(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148c4bc08 FUN_148c4bc08 body=61 status=ok
// SIG undefined FUN_148c4bc08(void)

void FUN_148c4bc08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b80d9f0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c4bc46 FUN_148c4bc46 body=91 status=ok
// SIG undefined FUN_148c4bc46(void)

longlong FUN_148c4bc46(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_145c56af0(param_1 + 0x28,param_2 + 0x28);
  FUN_148c4bca2(param_1 + 0x40,param_2 + 0x40);
  FUN_148c4bcf2(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 148c4bca2 FUN_148c4bca2 body=79 status=ok
// SIG undefined FUN_148c4bca2(void)

undefined8 * FUN_148c4bca2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c4bd46(param_1,iVar1);
      FUN_148c4bdb5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c4bcf2 FUN_148c4bcf2 body=84 status=ok
// SIG undefined FUN_148c4bcf2(void)

longlong * FUN_148c4bcf2(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c4bd46 FUN_148c4bd46 body=111 status=ok
// SIG undefined FUN_148c4bd46(void)

void FUN_148c4bd46(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c4bdb5 FUN_148c4bdb5 body=121 status=ok
// SIG undefined FUN_148c4bdb5(void)

void FUN_148c4bdb5(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_144a76ff0(param_1,param_2);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    FUN_144a7f96e(param_1 + 0x28,param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 148c4bed6 FUN_148c4bed6 body=59 status=ok
// SIG undefined FUN_148c4bed6(void)

undefined8 FUN_148c4bed6(longlong *param_1)

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



// FUNCTION 148c4bf76 FUN_148c4bf76 body=29 status=ok
// SIG undefined FUN_148c4bf76(void)

undefined8 FUN_148c4bf76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c4bfde FUN_148c4bfde body=87 status=ok
// SIG undefined FUN_148c4bfde(void)

undefined1 FUN_148c4bfde(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4b7a0(param_2,param_3);
    FUN_140d02432(param_2 + 0x18,param_3 + 0x18);
    *(undefined1 *)(param_2 + 0x68) = *(undefined1 *)(param_3 + 0x68);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148c4c05e FUN_148c4c05e body=59 status=ok
// SIG undefined FUN_148c4c05e(void)

undefined8 FUN_148c4c05e(longlong *param_1)

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



// FUNCTION 148c4c112 FUN_148c4c112 body=63 status=ok
// SIG undefined FUN_148c4c112(void)

undefined1 FUN_148c4c112(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4c234(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 148c4c17a FUN_148c4c17a body=59 status=ok
// SIG undefined FUN_148c4c17a(void)

undefined8 FUN_148c4c17a(longlong *param_1)

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



// FUNCTION 148c4c1c6 FUN_148c4c1c6 body=40 status=ok
// SIG undefined FUN_148c4c1c6(void)

void FUN_148c4c1c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_1457e3f52(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148c4c234 FUN_148c4c234 body=88 status=ok
// SIG undefined FUN_148c4c234(void)

longlong FUN_148c4c234(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_148c4c28c(param_1 + 0x18,param_2 + 0x18);
  FUN_140d02432(param_1 + 0x28,param_2 + 0x28);
  FUN_140d02432(param_1 + 0x78,param_2 + 0x78);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  return param_1;
}



// FUNCTION 148c4c28c FUN_148c4c28c body=79 status=ok
// SIG undefined FUN_148c4c28c(void)

undefined8 * FUN_148c4c28c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c4c2dc(param_1,iVar1);
      FUN_148c4c34b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c4c2dc FUN_148c4c2dc body=111 status=ok
// SIG undefined FUN_148c4c2dc(void)

void FUN_148c4c2dc(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c4c34b FUN_148c4c34b body=121 status=ok
// SIG undefined FUN_148c4c34b(void)

void FUN_148c4c34b(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c4a040(param_1,param_2);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    FUN_144a7f96e(param_1 + 0x20,param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 148c4c3c6 FUN_148c4c3c6 body=28 status=ok
// SIG undefined FUN_148c4c3c6(void)

undefined8 FUN_148c4c3c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c4c3f4 FUN_148c4c3f4 body=97 status=ok
// SIG undefined FUN_148c4c3f4(void)

void FUN_148c4c3f4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  *(undefined4 *)((longlong)param_2 + 0x20) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x68) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa8) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0xb8) = 0x3f800000;
  return;
}



// FUNCTION 148c4c4c8 FUN_148c4c4c8 body=112 status=ok
// SIG undefined FUN_148c4c4c8(void)

undefined8 FUN_148c4c4c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_148c4c60c(param_2 + lVar1,param_3 + lVar1);
      *(undefined2 *)(param_2 + lVar1 + 0x18) = *(undefined2 *)(param_3 + lVar1 + 0x18);
      FUN_140d02432();
      FUN_140d02432(param_2 + lVar1 + 0x70,param_3 + lVar1 + 0x70);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c4c560 FUN_148c4c560 body=59 status=ok
// SIG undefined FUN_148c4c560(void)

undefined8 FUN_148c4c560(longlong *param_1)

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



// FUNCTION 148c4c60c FUN_148c4c60c body=84 status=ok
// SIG undefined FUN_148c4c60c(void)

longlong * FUN_148c4c60c(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c4c680 FUN_148c4c680 body=63 status=ok
// SIG undefined FUN_148c4c680(void)

undefined1 FUN_148c4c680(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c4c7dc(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148c4c6e8 FUN_148c4c6e8 body=59 status=ok
// SIG undefined FUN_148c4c6e8(void)

undefined8 FUN_148c4c6e8(longlong *param_1)

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



// FUNCTION 148c4c734 FUN_148c4c734 body=40 status=ok
// SIG undefined FUN_148c4c734(void)

void FUN_148c4c734(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14598d71a(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148c4c7a2 FUN_148c4c7a2 body=57 status=ok
// SIG undefined FUN_148c4c7a2(void)

void FUN_148c4c7a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf808 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf808 = FUN_140002ddd(FUN_1465f02b4,uVar1,L"OakTraitPoolListDef");
  }
  return;
}



// FUNCTION 148c4c7dc FUN_148c4c7dc body=83 status=ok
// SIG undefined FUN_148c4c7dc(void)

longlong FUN_148c4c7dc(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_148c4c830(param_1 + 0x18,param_2 + 0x18);
  FUN_14117b026(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  FUN_140d02432(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 148c4c830 FUN_148c4c830 body=79 status=ok
// SIG undefined FUN_148c4c830(void)

undefined8 * FUN_148c4c830(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c4c880(param_1,iVar1);
      FUN_148c4c8f3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c4c880 FUN_148c4c880 body=115 status=ok
// SIG undefined FUN_148c4c880(void)

void FUN_148c4c880(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c4c8f3 FUN_148c4c8f3 body=60 status=ok
// SIG undefined FUN_148c4c8f3(void)

void FUN_148c4c8f3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c4c930(param_1,param_2);
    param_1 = param_1 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return;
}



// FUNCTION 148c4c930 FUN_148c4c930 body=184 status=ok
// SIG undefined FUN_148c4c930(void)

longlong FUN_148c4c930(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_148c4c9e8();
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_144a7f96e(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  FUN_144a7f96e(param_1 + 0x78,param_2 + 0x78);
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 148c4c9e8 FUN_148c4c9e8 body=71 status=ok
// SIG undefined FUN_148c4c9e8(void)

undefined8 * FUN_148c4c9e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148c4ca30 FUN_148c4ca30 body=28 status=ok
// SIG undefined FUN_148c4ca30(void)

undefined8 FUN_148c4ca30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c4ca7c FUN_148c4ca7c body=88 status=ok
// SIG undefined FUN_148c4ca7c(void)

undefined1 FUN_148c4ca7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    FUN_144983130(param_2 + 0x38,param_3 + 0x38);
    FUN_148c4b7a0(param_2 + 0x70,param_3 + 0x70);
    param_2 = param_2 + 0x88;
    param_3 = param_3 + 0x88;
  }
  return 1;
}



// FUNCTION 148c4cafc FUN_148c4cafc body=59 status=ok
// SIG undefined FUN_148c4cafc(void)

undefined8 FUN_148c4cafc(longlong *param_1)

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



// FUNCTION 148c4cb48 FUN_148c4cb48 body=47 status=ok
// SIG undefined FUN_148c4cb48(void)

void FUN_148c4cb48(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_144a2da94(param_2 + 0x38);
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148c4cc46 FUN_148c4cc46 body=87 status=ok
// SIG undefined FUN_148c4cc46(void)

undefined1 FUN_148c4cc46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    FUN_148c4cd7c(param_2 + 0x38,param_3 + 0x38);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148c4ccc6 FUN_148c4ccc6 body=59 status=ok
// SIG undefined FUN_148c4ccc6(void)

undefined8 FUN_148c4ccc6(longlong *param_1)

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



// FUNCTION 148c4cd0c FUN_148c4cd0c body=34 status=ok
// SIG undefined FUN_148c4cd0c(void)

void FUN_148c4cd0c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1458f55f2(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148c4cd7c FUN_148c4cd7c body=95 status=ok
// SIG undefined FUN_148c4cd7c(void)

undefined8 * FUN_148c4cd7c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458f5621(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c4cddc(param_1,iVar1);
      FUN_148c4ce52(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c4cddc FUN_148c4cddc body=118 status=ok
// SIG undefined FUN_148c4cddc(void)

void FUN_148c4cddc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c4ce52 FUN_148c4ce52 body=86 status=ok
// SIG undefined FUN_148c4ce52(void)

void FUN_148c4ce52(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14034cca6(param_1,param_2);
    FUN_14034cca6(param_1 + 0x38,param_2 + 0x38);
    FUN_148c4a040(param_1 + 0x70,param_2 + 0x70);
    param_1 = param_1 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



// FUNCTION 148c4cef4 FUN_148c4cef4 body=75 status=ok
// SIG undefined FUN_148c4cef4(void)

undefined1 FUN_148c4cef4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_148c4d058(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c4cf68 FUN_148c4cf68 body=59 status=ok
// SIG undefined FUN_148c4cf68(void)

undefined8 FUN_148c4cf68(longlong *param_1)

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


