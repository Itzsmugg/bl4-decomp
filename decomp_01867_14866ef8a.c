// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14866ef8a FUN_14866ef8a body=48 status=ok
// SIG undefined FUN_14866ef8a(void)

void FUN_14866ef8a(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_144909e75(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14866f006 FUN_14866f006 body=200 status=ok
// SIG undefined FUN_14866f006(void)

undefined8 FUN_14866f006(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x7c) = *(undefined1 *)(lVar2 + 0x7c);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar2 + 0x78);
      FUN_1457892b8(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      *(undefined4 *)(lVar1 + 0x98) = *(undefined4 *)(lVar2 + 0x98);
      lVar10 = lVar10 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866f0f6 FUN_14866f0f6 body=59 status=ok
// SIG undefined FUN_14866f0f6(void)

undefined8 FUN_14866f0f6(longlong *param_1)

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



// FUNCTION 14866f142 FUN_14866f142 body=57 status=ok
// SIG undefined FUN_14866f142(void)

void FUN_14866f142(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 14866f1cc FUN_14866f1cc body=46 status=ok
// SIG undefined FUN_14866f1cc(void)

void FUN_14866f1cc(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0c65c0;
  FUN_144a6ccf8(param_2 + 0x1b);
  return;
}



// FUNCTION 14866f21e FUN_14866f21e body=99 status=ok
// SIG undefined FUN_14866f21e(void)

undefined8 FUN_14866f21e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    FUN_1411f346e(param_2 + 0xd8,param_3 + 0xd8);
    *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_3 + 0xe8);
    param_2 = param_2 + 0xf0;
    param_3 = param_3 + 0xf0;
  }
  return 1;
}



// FUNCTION 14866f2aa FUN_14866f2aa body=59 status=ok
// SIG undefined FUN_14866f2aa(void)

undefined8 FUN_14866f2aa(longlong *param_1)

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



// FUNCTION 14866f2f6 FUN_14866f2f6 body=60 status=ok
// SIG undefined FUN_14866f2f6(void)

void FUN_14866f2f6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1e) == '\x01') {
    *param_2 = &PTR_FUN_14b0c65c0;
    FUN_144a7b030(param_2 + 0x1b);
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x1e) = 0;
  }
  return;
}



// FUNCTION 14866f380 FUN_14866f380 body=57 status=ok
// SIG undefined FUN_14866f380(void)

void FUN_14866f380(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a998 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a998 = FUN_140002ddd(FUN_1464cb612,uVar1,L"GbxBrainAspect_CharacterSound");
  }
  return;
}



// FUNCTION 14866f3ba FUN_14866f3ba body=45 status=ok
// SIG undefined FUN_14866f3ba(void)

void FUN_14866f3ba(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e48d86(param_2);
  *param_2 = &PTR_FUN_14b0c6840;
  FUN_140785382(param_2 + 0x10,10);
  return;
}



// FUNCTION 14866f410 FUN_14866f410 body=191 status=ok
// SIG undefined FUN_14866f410(void)

undefined8 FUN_14866f410(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x7c) = *(undefined1 *)(lVar2 + 0x7c);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar2 + 0x78);
      FUN_144983130(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866f4f8 FUN_14866f4f8 body=59 status=ok
// SIG undefined FUN_14866f4f8(void)

undefined8 FUN_14866f4f8(longlong *param_1)

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



// FUNCTION 14866f59c FUN_14866f59c body=79 status=ok
// SIG undefined FUN_14866f59c(void)

void FUN_14866f59c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *param_1 = &PTR_FUN_14b0c6840;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  return;
}



// FUNCTION 14866f5ec FUN_14866f5ec body=43 status=ok
// SIG undefined FUN_14866f5ec(void)

void FUN_14866f5ec(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0c6a40;
  param_2[0x1b] = 0;
  return;
}



// FUNCTION 14866f63c FUN_14866f63c body=76 status=ok
// SIG undefined FUN_14866f63c(void)

undefined8 FUN_14866f63c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_3 + 0xd8);
    param_2 = param_2 + 0xe0;
    param_3 = param_3 + 0xe0;
  }
  return 1;
}



// FUNCTION 14866f6b0 FUN_14866f6b0 body=59 status=ok
// SIG undefined FUN_14866f6b0(void)

undefined8 FUN_14866f6b0(longlong *param_1)

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



// FUNCTION 14866f6fc FUN_14866f6fc body=38 status=ok
// SIG undefined FUN_14866f6fc(void)

void FUN_14866f6fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 14866f7a0 FUN_14866f7a0 body=88 status=ok
// SIG undefined FUN_14866f7a0(void)

undefined1 FUN_14866f7a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    FUN_140e7790a(param_2 + 0x38,param_3 + 0x38);
    FUN_1457b9864(param_2 + 0x50,param_3 + 0x50);
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + 0xa0;
  }
  return 1;
}



// FUNCTION 14866f820 FUN_14866f820 body=59 status=ok
// SIG undefined FUN_14866f820(void)

undefined8 FUN_14866f820(longlong *param_1)

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



// FUNCTION 14866f86c FUN_14866f86c body=40 status=ok
// SIG undefined FUN_14866f86c(void)

void FUN_14866f86c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_14866f8e2(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14866f8e2 FUN_14866f8e2 body=57 status=ok
// SIG undefined FUN_14866f8e2(void)

void FUN_14866f8e2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_1 + 0x50);
  FUN_144a2da94(param_1);
  return;
}



// FUNCTION 14866f94c FUN_14866f94c body=63 status=ok
// SIG undefined FUN_14866f94c(void)

undefined1 FUN_14866f94c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14866fa74(param_2,param_3);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 14866f9b4 FUN_14866f9b4 body=59 status=ok
// SIG undefined FUN_14866f9b4(void)

undefined8 FUN_14866f9b4(longlong *param_1)

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



// FUNCTION 14866fa00 FUN_14866fa00 body=38 status=ok
// SIG undefined FUN_14866fa00(void)

void FUN_14866fa00(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x178) == '\x01') {
    FUN_140d2c056(param_2);
    *(undefined1 *)(param_2 + 0x178) = 0;
  }
  return;
}



// FUNCTION 14866fa74 FUN_14866fa74 body=193 status=ok
// SIG undefined FUN_14866fa74(void)

longlong FUN_14866fa74(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_14866fb36(param_1 + 0x80,param_2 + 0x80);
  FUN_140e7790a(param_1 + 0x90,param_2 + 0x90);
  FUN_1457b9864(param_1 + 0xa8,param_2 + 0xa8);
  FUN_144983130(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
  FUN_144983130(param_1 + 0x138,param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  return param_1;
}



// FUNCTION 14866fb36 FUN_14866fb36 body=93 status=ok
// SIG undefined FUN_14866fb36(void)

undefined8 * FUN_14866fb36(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d2c1dd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14866fb94(param_1,iVar1);
      FUN_14866fc07(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14866fb94 FUN_14866fb94 body=115 status=ok
// SIG undefined FUN_14866fb94(void)

void FUN_14866fb94(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14866fc07 FUN_14866fc07 body=60 status=ok
// SIG undefined FUN_14866fc07(void)

void FUN_14866fc07(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14866fc44(param_1,param_2);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 14866fc44 FUN_14866fc44 body=105 status=ok
// SIG undefined FUN_14866fc44(void)

longlong FUN_14866fc44(longlong param_1,longlong param_2)

{
  FUN_14034cca6();
  FUN_140f746b6(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_1457b9864(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 14866fcae FUN_14866fcae body=32 status=ok
// SIG undefined FUN_14866fcae(void)

void FUN_14866fcae(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0c6f80;
  return;
}



// FUNCTION 14866fcf2 FUN_14866fcf2 body=78 status=ok
// SIG undefined FUN_14866fcf2(void)

undefined1 FUN_14866fcf2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    param_2 = param_2 + 0xe0;
    param_3 = param_3 + 0xe0;
  }
  return 1;
}



// FUNCTION 14866fd68 FUN_14866fd68 body=59 status=ok
// SIG undefined FUN_14866fd68(void)

undefined8 FUN_14866fd68(longlong *param_1)

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



// FUNCTION 14866fdb4 FUN_14866fdb4 body=38 status=ok
// SIG undefined FUN_14866fdb4(void)

void FUN_14866fdb4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 14866fe5a FUN_14866fe5a body=185 status=ok
// SIG undefined FUN_14866fe5a(void)

undefined8 FUN_14866fe5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      FUN_144983130(param_2 + 0x38 + lVar10,param_3 + 0x38 + lVar10);
      *(undefined8 *)(param_2 + 0x70 + lVar10) = *(undefined8 *)(param_3 + 0x70 + lVar10);
      *(undefined1 *)(param_2 + 0x7c + lVar10) = *(undefined1 *)(param_3 + 0x7c + lVar10);
      *(undefined4 *)(param_2 + 0x78 + lVar10) = *(undefined4 *)(param_3 + 0x78 + lVar10);
      *(undefined4 *)(param_2 + 0x80 + lVar10) = *(undefined4 *)(param_3 + 0x80 + lVar10);
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14866ff3c FUN_14866ff3c body=59 status=ok
// SIG undefined FUN_14866ff3c(void)

undefined8 FUN_14866ff3c(longlong *param_1)

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



// FUNCTION 14866ff88 FUN_14866ff88 body=57 status=ok
// SIG undefined FUN_14866ff88(void)

void FUN_14866ff88(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 148670012 FUN_148670012 body=37 status=ok
// SIG undefined FUN_148670012(void)

void FUN_148670012(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x7f0);
  FUN_145c8d346(param_2);
  return;
}



// FUNCTION 148670064 FUN_148670064 body=63 status=ok
// SIG undefined FUN_148670064(void)

undefined1 FUN_148670064(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486701ba(param_2,param_3);
    param_3 = param_3 + 0x7f0;
    param_2 = param_2 + 0x7f0;
  }
  return 1;
}



// FUNCTION 1486700cc FUN_1486700cc body=59 status=ok
// SIG undefined FUN_1486700cc(void)

undefined8 FUN_1486700cc(longlong *param_1)

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



// FUNCTION 148670118 FUN_148670118 body=40 status=ok
// SIG undefined FUN_148670118(void)

void FUN_148670118(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x7f0) == '\x01') {
    FUN_1459758f6(param_2);
    *(undefined1 *)(param_2 + 0x7f0) = 0;
  }
  return;
}



// FUNCTION 14867018e FUN_14867018e body=43 status=ok
// SIG undefined FUN_14867018e(void)

undefined8 FUN_14867018e(undefined8 param_1,int param_2)

{
  FUN_1459758f6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x7f0);
  }
  return param_1;
}



// FUNCTION 1486701ba FUN_1486701ba body=365 status=ok
// SIG undefined FUN_1486701ba(void)

longlong FUN_1486701ba(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
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
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar18 = *(longlong *)(param_2 + 0x10);
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 0xc) = *(int *)(lVar18 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x10) = lVar18;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  puVar19 = (undefined8 *)(param_2 + 0x30);
  puVar20 = (undefined8 *)(param_1 + 0x30);
  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar20 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar20 = puVar20 + 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  lVar18 = *(longlong *)(param_2 + 0x98);
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 0xc) = *(int *)(lVar18 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(longlong *)(param_1 + 0x98) = lVar18;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  uVar4 = *(undefined4 *)(param_2 + 0xa0);
  uVar5 = *(undefined4 *)(param_2 + 0xa4);
  uVar6 = *(undefined4 *)(param_2 + 0xa8);
  uVar7 = *(undefined4 *)(param_2 + 0xac);
  uVar8 = *(undefined4 *)(param_2 + 0xb0);
  uVar9 = *(undefined4 *)(param_2 + 0xb4);
  uVar10 = *(undefined4 *)(param_2 + 0xb8);
  uVar11 = *(undefined4 *)(param_2 + 0xbc);
  uVar12 = *(undefined4 *)(param_2 + 0xc4);
  uVar13 = *(undefined4 *)(param_2 + 200);
  uVar14 = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = uVar12;
  *(undefined4 *)(param_1 + 200) = uVar13;
  *(undefined4 *)(param_1 + 0xcc) = uVar14;
  *(undefined4 *)(param_1 + 0xb0) = uVar8;
  *(undefined4 *)(param_1 + 0xb4) = uVar9;
  *(undefined4 *)(param_1 + 0xb8) = uVar10;
  *(undefined4 *)(param_1 + 0xbc) = uVar11;
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  *(undefined4 *)(param_1 + 0xa4) = uVar5;
  *(undefined4 *)(param_1 + 0xa8) = uVar6;
  *(undefined4 *)(param_1 + 0xac) = uVar7;
  FUN_148670328(param_1 + 0xd8,param_2 + 0xd8);
  uVar2 = *(undefined8 *)(param_2 + 0x6f0);
  uVar15 = *(undefined8 *)(param_2 + 0x6f8);
  uVar16 = *(undefined8 *)(param_2 + 0x700);
  *(undefined8 *)(param_1 + 0x6e8) = *(undefined8 *)(param_2 + 0x6e8);
  *(undefined8 *)(param_1 + 0x6f0) = uVar2;
  *(undefined8 *)(param_1 + 0x6f8) = uVar15;
  *(undefined8 *)(param_1 + 0x700) = uVar16;
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_2 + 0x708);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x710) == '\x01') {
      *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_2 + 0x70c);
      uVar17 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x710) != '\x01') goto LAB_1486702f3;
      uVar17 = 0;
    }
    *(undefined1 *)(param_1 + 0x710) = uVar17;
  }
LAB_1486702f3:
  memcpy((void *)(param_1 + 0x714),(void *)(param_2 + 0x714),0xd8);
  return param_1;
}



// FUNCTION 148670328 FUN_148670328 body=123 status=ok
// SIG undefined FUN_148670328(void)

void * FUN_148670328(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x600);
    if (*(void **)((longlong)param_2 + 0x600) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x608);
    *(int *)((longlong)param_1 + 0x608) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x60c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x60c) = 8;
    }
    else {
      FUN_1486703a4(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x600);
        if (*(void **)((longlong)param_1 + 0x600) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0xc0);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486703a4 FUN_1486703a4 body=121 status=ok
// SIG undefined FUN_1486703a4(void)

void FUN_1486703a4(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc0,0);
      iVar2 = (int)(uVar1 / 0xc0);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14867041e(param_1,0,iVar3,0xc0);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x60c) = param_3;
  return;
}



// FUNCTION 14867041e FUN_14867041e body=150 status=ok
// SIG undefined FUN_14867041e(void)

void FUN_14867041e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x600);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x600,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x600),param_1,(longlong)param_2 * 0xc0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x600,param_2,param_3,param_4);
  return;
}



// FUNCTION 1486704b6 FUN_1486704b6 body=42 status=ok
// SIG undefined FUN_1486704b6(void)

void FUN_1486704b6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0c74c0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 148670504 FUN_148670504 body=63 status=ok
// SIG undefined FUN_148670504(void)

undefined1 FUN_148670504(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148670678(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 14867056c FUN_14867056c body=59 status=ok
// SIG undefined FUN_14867056c(void)

undefined8 FUN_14867056c(longlong *param_1)

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



// FUNCTION 1486705b8 FUN_1486705b8 body=38 status=ok
// SIG undefined FUN_1486705b8(void)

void FUN_1486705b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14867062c(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 14867062c FUN_14867062c body=76 status=ok
// SIG undefined FUN_14867062c(void)

void FUN_14867062c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0c74c0;
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 148670678 FUN_148670678 body=105 status=ok
// SIG undefined FUN_148670678(void)

longlong FUN_148670678(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_147f186d8();
  uVar3 = *(undefined8 *)(param_2 + 0xd8);
  lVar4 = *(longlong *)(param_2 + 0xe0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  *(longlong *)(param_1 + 0xe0) = lVar4;
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



// FUNCTION 1486706e2 FUN_1486706e2 body=56 status=ok
// SIG undefined FUN_1486706e2(void)

void FUN_1486706e2(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e48d86(param_2);
  *param_2 = &PTR_FUN_14b0c7740;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 148670742 FUN_148670742 body=211 status=ok
// SIG undefined FUN_148670742(void)

undefined8 FUN_148670742(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0;
    do {
      puVar2 = (undefined4 *)(param_3 + 8 + lVar15);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x18 + lVar15);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + 0x18 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      puVar2 = (undefined4 *)(param_2 + 8 + lVar15);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      FUN_1470d00c2(param_2 + 0x28 + lVar15,param_3 + 0x28 + lVar15);
      FUN_144983130(param_2 + 0x38 + lVar15,param_3 + 0x38 + lVar15);
      *(undefined8 *)(param_2 + 0x70 + lVar15) = *(undefined8 *)(param_3 + 0x70 + lVar15);
      *(undefined1 *)(param_2 + 0x7c + lVar15) = *(undefined1 *)(param_3 + 0x7c + lVar15);
      *(undefined4 *)(param_2 + 0x78 + lVar15) = *(undefined4 *)(param_3 + 0x78 + lVar15);
      puVar1 = (undefined8 *)(param_3 + 0x80 + lVar15);
      uVar12 = puVar1[1];
      puVar4 = (undefined8 *)(param_3 + 0x90 + lVar15);
      uVar13 = *puVar4;
      uVar14 = puVar4[1];
      puVar2 = (undefined4 *)(param_3 + 0xa0 + lVar15);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar4 = (undefined8 *)(param_2 + 0x80 + lVar15);
      *puVar4 = *puVar1;
      puVar4[1] = uVar12;
      puVar1 = (undefined8 *)(param_2 + 0x90 + lVar15);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      puVar2 = (undefined4 *)(param_2 + 0xa0 + lVar15);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      lVar15 = lVar15 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14867083e FUN_14867083e body=59 status=ok
// SIG undefined FUN_14867083e(void)

undefined8 FUN_14867083e(longlong *param_1)

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



// FUNCTION 14867088a FUN_14867088a body=57 status=ok
// SIG undefined FUN_14867088a(void)

void FUN_14867088a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x16) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}



// FUNCTION 148670914 FUN_148670914 body=42 status=ok
// SIG undefined FUN_148670914(void)

void FUN_148670914(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0c7940;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 148670962 FUN_148670962 body=76 status=ok
// SIG undefined FUN_148670962(void)

undefined1 FUN_148670962(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    param_2 = param_2 + 0xe8;
    param_3 = param_3 + 0xe8;
  }
  return 1;
}



// FUNCTION 1486709d6 FUN_1486709d6 body=59 status=ok
// SIG undefined FUN_1486709d6(void)

undefined8 FUN_1486709d6(longlong *param_1)

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



// FUNCTION 148670a22 FUN_148670a22 body=38 status=ok
// SIG undefined FUN_148670a22(void)

void FUN_148670a22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148670ac8 FUN_148670ac8 body=63 status=ok
// SIG undefined FUN_148670ac8(void)

undefined1 FUN_148670ac8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148670bd2(param_2,param_3);
    param_3 = param_3 + 1000;
    param_2 = param_2 + 1000;
  }
  return 1;
}



// FUNCTION 148670b30 FUN_148670b30 body=59 status=ok
// SIG undefined FUN_148670b30(void)

undefined8 FUN_148670b30(longlong *param_1)

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



// FUNCTION 148670bd2 FUN_148670bd2 body=92 status=ok
// SIG undefined FUN_148670bd2(void)

longlong FUN_148670bd2(longlong param_1,longlong param_2)

{
  FUN_147f1b368();
  FUN_144983130(param_1 + 0x338,param_2 + 0x338);
  FUN_144983130(param_1 + 0x370,param_2 + 0x370);
  FUN_144983130(param_1 + 0x3a8,param_2 + 0x3a8);
  *(undefined2 *)(param_1 + 0x3e0) = *(undefined2 *)(param_2 + 0x3e0);
  return param_1;
}



// FUNCTION 148670c30 FUN_148670c30 body=84 status=ok
// SIG undefined FUN_148670c30(void)

void FUN_148670c30(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x7d) == '\x01') {
    *param_1 = &PTR_FUN_14b0c7bc0;
    FUN_144a2da94(param_1 + 0x75);
    FUN_144a2da94(param_1 + 0x6e);
    FUN_144a2da94(param_1 + 0x67);
    FUN_145cb973a(param_1);
    *(undefined1 *)(param_1 + 0x7d) = 0;
  }
  return;
}



// FUNCTION 148670c84 FUN_148670c84 body=98 status=ok
// SIG undefined FUN_148670c84(void)

void FUN_148670c84(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x238);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac3afe0;
  FUN_143860306(param_2 + 0x1b);
  *param_2 = &PTR_FUN_14b0c7dc0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  return;
}



// FUNCTION 148670ce6 FUN_148670ce6 body=82 status=ok
// SIG undefined FUN_148670ce6(void)

void FUN_148670ce6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac3afe0;
  FUN_143860306(param_2 + 0x1b);
  *param_2 = &PTR_FUN_14b0c7dc0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  return;
}



// FUNCTION 148670d5c FUN_148670d5c body=63 status=ok
// SIG undefined FUN_148670d5c(void)

undefined1 FUN_148670d5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148670f4a(param_2,param_3);
    param_3 = param_3 + 0x238;
    param_2 = param_2 + 0x238;
  }
  return 1;
}



// FUNCTION 148670dc4 FUN_148670dc4 body=59 status=ok
// SIG undefined FUN_148670dc4(void)

undefined8 FUN_148670dc4(longlong *param_1)

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



// FUNCTION 148670e10 FUN_148670e10 body=40 status=ok
// SIG undefined FUN_148670e10(void)

void FUN_148670e10(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x238) == '\x01') {
    FUN_148670eea(param_2);
    *(undefined1 *)(param_2 + 0x238) = 0;
  }
  return;
}



// FUNCTION 148670e86 FUN_148670e86 body=43 status=ok
// SIG undefined FUN_148670e86(void)

undefined8 FUN_148670e86(undefined8 param_1,int param_2)

{
  FUN_148670eea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 148670eb2 FUN_148670eb2 body=55 status=ok
// SIG undefined FUN_148670eb2(void)

void FUN_148670eb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ab10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ab10 = FUN_140002ddd(FUN_1464cbb34,uVar1,L"GbxBrainAspect_Follow");
  }
  return;
}



// FUNCTION 148670eea FUN_148670eea body=96 status=ok
// SIG undefined FUN_148670eea(void)

void FUN_148670eea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0c7dc0;
  plVar3 = (longlong *)param_1[0x43];
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
  *param_1 = &PTR_FUN_14ac3afe0;
  FUN_140cabc42(param_1 + 0x1b);
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 148670f4a FUN_148670f4a body=152 status=ok
// SIG undefined FUN_148670f4a(void)

longlong FUN_148670f4a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_147f186d8();
  FUN_147f1b59c(param_1 + 0xd8,param_2 + 0xd8);
  uVar3 = *(undefined8 *)(param_2 + 0x210);
  lVar4 = *(longlong *)(param_2 + 0x218);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x210) = uVar3;
  *(longlong *)(param_1 + 0x218) = lVar4;
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
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  uVar3 = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x228) = uVar3;
  return param_1;
}



// FUNCTION 148671014 FUN_148671014 body=63 status=ok
// SIG undefined FUN_148671014(void)

undefined1 FUN_148671014(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148671150(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 14867107c FUN_14867107c body=59 status=ok
// SIG undefined FUN_14867107c(void)

undefined8 FUN_14867107c(longlong *param_1)

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



// FUNCTION 1486710c8 FUN_1486710c8 body=57 status=ok
// SIG undefined FUN_1486710c8(void)

void FUN_1486710c8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 148671150 FUN_148671150 body=156 status=ok
// SIG undefined FUN_148671150(void)

longlong FUN_148671150(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  if ((*(longlong *)(param_1 + 0x80) != *(longlong *)(param_2 + 0x80)) ||
     (*(int *)(param_1 + 0x88) != *(int *)(param_2 + 0x88))) {
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  return param_1;
}



// FUNCTION 1486711ee FUN_1486711ee body=32 status=ok
// SIG undefined FUN_1486711ee(void)

void FUN_1486711ee(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0c81a0;
  return;
}



// FUNCTION 148671232 FUN_148671232 body=63 status=ok
// SIG undefined FUN_148671232(void)

undefined1 FUN_148671232(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 14867129a FUN_14867129a body=59 status=ok
// SIG undefined FUN_14867129a(void)

undefined8 FUN_14867129a(longlong *param_1)

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



// FUNCTION 1486712e6 FUN_1486712e6 body=38 status=ok
// SIG undefined FUN_1486712e6(void)

void FUN_1486712e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 1486713b0 FUN_1486713b0 body=63 status=ok
// SIG undefined FUN_1486713b0(void)

undefined1 FUN_1486713b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486714da(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148671418 FUN_148671418 body=59 status=ok
// SIG undefined FUN_148671418(void)

undefined8 FUN_148671418(longlong *param_1)

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



// FUNCTION 148671464 FUN_148671464 body=40 status=ok
// SIG undefined FUN_148671464(void)

void FUN_148671464(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_148671568(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1486714da FUN_1486714da body=141 status=ok
// SIG undefined FUN_1486714da(void)

longlong FUN_1486714da(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  FUN_144a787a6(param_1 + 0x98,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 148671568 FUN_148671568 body=67 status=ok
// SIG undefined FUN_148671568(void)

void FUN_148671568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0c9610;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486715ac FUN_1486715ac body=43 status=ok
// SIG undefined FUN_1486715ac(void)

undefined8 FUN_1486715ac(undefined8 param_1,int param_2)

{
  FUN_148671568();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1486715d8 FUN_1486715d8 body=55 status=ok
// SIG undefined FUN_1486715d8(void)

void FUN_1486715d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ab58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ab58 = FUN_140002ddd(FUN_1464cbc8b,uVar1,L"GbxBrainAspectSettings_HasStatusEffect");
  }
  return;
}



// FUNCTION 148671610 FUN_148671610 body=48 status=ok
// SIG undefined FUN_148671610(void)

void FUN_148671610(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd8);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0c8580;
  return;
}



// FUNCTION 148671640 FUN_148671640 body=32 status=ok
// SIG undefined FUN_148671640(void)

void FUN_148671640(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0c8580;
  return;
}



// FUNCTION 148671684 FUN_148671684 body=63 status=ok
// SIG undefined FUN_148671684(void)

undefined1 FUN_148671684(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 1486716ec FUN_1486716ec body=59 status=ok
// SIG undefined FUN_1486716ec(void)

undefined8 FUN_1486716ec(longlong *param_1)

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



// FUNCTION 148671738 FUN_148671738 body=38 status=ok
// SIG undefined FUN_148671738(void)

void FUN_148671738(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 1486717ac FUN_1486717ac body=43 status=ok
// SIG undefined FUN_1486717ac(void)

undefined8 FUN_1486717ac(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1486717d8 FUN_1486717d8 body=55 status=ok
// SIG undefined FUN_1486717d8(void)

void FUN_1486717d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ab70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ab70 = FUN_140002ddd(FUN_1464cbd21,uVar1,L"GbxBrainAspect_HasStatusEffect");
  }
  return;
}



// FUNCTION 148671810 FUN_148671810 body=104 status=ok
// SIG undefined FUN_148671810(void)

void FUN_148671810(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e48d86(param_2);
  *param_2 = &PTR_FUN_14b0c8880;
  *(undefined1 *)(param_2 + 0x10) = 0;
  param_2[0x11] = 0;
  *(undefined2 *)(param_2 + 0x15) = 4;
  *(undefined4 *)(param_2 + 0x12) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x16) = 3;
  *(char *)(param_2 + 0x17) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 1486718a0 FUN_1486718a0 body=63 status=ok
// SIG undefined FUN_1486718a0(void)

undefined1 FUN_1486718a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486719aa(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148671908 FUN_148671908 body=59 status=ok
// SIG undefined FUN_148671908(void)

undefined8 FUN_148671908(longlong *param_1)

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



// FUNCTION 1486719aa FUN_1486719aa body=125 status=ok
// SIG undefined FUN_1486719aa(void)

longlong FUN_1486719aa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 148671a28 FUN_148671a28 body=79 status=ok
// SIG undefined FUN_148671a28(void)

void FUN_148671a28(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *param_1 = &PTR_FUN_14b0c8880;
    FUN_144a2da94(param_1 + 0x11);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}



// FUNCTION 148671a78 FUN_148671a78 body=32 status=ok
// SIG undefined FUN_148671a78(void)

void FUN_148671a78(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0c8a90;
  return;
}



// FUNCTION 148671abc FUN_148671abc body=63 status=ok
// SIG undefined FUN_148671abc(void)

undefined1 FUN_148671abc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 148671b24 FUN_148671b24 body=59 status=ok
// SIG undefined FUN_148671b24(void)

undefined8 FUN_148671b24(longlong *param_1)

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



// FUNCTION 148671b70 FUN_148671b70 body=38 status=ok
// SIG undefined FUN_148671b70(void)

void FUN_148671b70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148671c9e FUN_148671c9e body=55 status=ok
// SIG undefined FUN_148671c9e(void)

void FUN_148671c9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ae10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ae10 = FUN_14171c317(FUN_1464cd0fd,uVar1,L"ETeleportTravel");
  }
  return;
}



// FUNCTION 148671d1c FUN_148671d1c body=55 status=ok
// SIG undefined FUN_148671d1c(void)

void FUN_148671d1c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ae88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ae88 = FUN_14171c317(FUN_1464cd2a3,uVar1,L"ETrickInterrupt");
  }
  return;
}



// FUNCTION 148671d6c FUN_148671d6c body=55 status=ok
// SIG undefined FUN_148671d6c(void)

void FUN_148671d6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5af30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5af30 = FUN_14171c317(FUN_1464cd529,uVar1,L"EGbxLeadFollowMode");
  }
  return;
}



// FUNCTION 148671e04 FUN_148671e04 body=55 status=ok
// SIG undefined FUN_148671e04(void)

void FUN_148671e04(undefined8 param_1,longlong param_2)

{
  FUN_144a2da94(param_2 + 0xb8);
  FUN_144a2da94(param_2 + 0x78);
  FUN_144a2da94(param_2 + 0x40);
  FUN_144a2da94(param_2 + 8);
  return;
}



// FUNCTION 148671e52 FUN_148671e52 body=63 status=ok
// SIG undefined FUN_148671e52(void)

undefined1 FUN_148671e52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143c4a622(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148671ebe FUN_148671ebe body=59 status=ok
// SIG undefined FUN_148671ebe(void)

undefined8 FUN_148671ebe(longlong *param_1)

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



// FUNCTION 148671f62 FUN_148671f62 body=69 status=ok
// SIG undefined FUN_148671f62(void)

void FUN_148671f62(longlong param_1)

{
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    FUN_144a2da94(param_1 + 0xb8);
    FUN_144a2da94(param_1 + 0x78);
    FUN_144a2da94(param_1 + 0x40);
    FUN_144a2da94(param_1 + 8);
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148671fd8 FUN_148671fd8 body=63 status=ok
// SIG undefined FUN_148671fd8(void)

undefined1 FUN_148671fd8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148672100(param_2,param_3);
    param_3 = param_3 + 0x330;
    param_2 = param_2 + 0x330;
  }
  return 1;
}



// FUNCTION 148672040 FUN_148672040 body=59 status=ok
// SIG undefined FUN_148672040(void)

undefined8 FUN_148672040(longlong *param_1)

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



// FUNCTION 14867208c FUN_14867208c body=38 status=ok
// SIG undefined FUN_14867208c(void)

void FUN_14867208c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x330) == '\x01') {
    FUN_14105cfcc(param_2);
    *(undefined1 *)(param_2 + 0x330) = 0;
  }
  return;
}



// FUNCTION 148672100 FUN_148672100 body=212 status=ok
// SIG undefined FUN_148672100(void)

longlong FUN_148672100(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_143c4a622(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(param_2 + 0x1b0);
  FUN_143c4a622(param_1 + 0x1b8,param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x2b0);
  *(undefined1 *)(param_1 + 0x2b8) = *(undefined1 *)(param_2 + 0x2b8);
  FUN_144983130(param_1 + 0x2c0,param_2 + 0x2c0);
  FUN_144983130(param_1 + 0x2f8,param_2 + 0x2f8);
  return param_1;
}



// FUNCTION 1486721d6 FUN_1486721d6 body=69 status=ok
// SIG undefined FUN_1486721d6(void)

void FUN_1486721d6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0cea90;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined2 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 148672240 FUN_148672240 body=63 status=ok
// SIG undefined FUN_148672240(void)

undefined1 FUN_148672240(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867238e(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 1486722a8 FUN_1486722a8 body=59 status=ok
// SIG undefined FUN_1486722a8(void)

undefined8 FUN_1486722a8(longlong *param_1)

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



// FUNCTION 1486722f4 FUN_1486722f4 body=72 status=ok
// SIG undefined FUN_1486722f4(void)

void FUN_1486722f4(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *param_2 = &PTR_FUN_14b0cea90;
    plVar2 = (longlong *)param_2[0x1e];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x21) = 0;
  }
  return;
}



// FUNCTION 14867238e FUN_14867238e body=128 status=ok
// SIG undefined FUN_14867238e(void)

longlong FUN_14867238e(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_147f186d8();
  uVar5 = *(undefined4 *)(param_2 + 0xdc);
  uVar6 = *(undefined4 *)(param_2 + 0xe0);
  uVar7 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar5;
  *(undefined4 *)(param_1 + 0xe0) = uVar6;
  *(undefined4 *)(param_1 + 0xe4) = uVar7;
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  lVar3 = *(longlong *)(param_2 + 0xf0);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(longlong *)(param_1 + 0xf0) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  return param_1;
}



// FUNCTION 148672440 FUN_148672440 body=200 status=ok
// SIG undefined FUN_148672440(void)

undefined8 FUN_148672440(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x7c) = *(undefined1 *)(lVar2 + 0x7c);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar2 + 0x78);
      FUN_140862116(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      *(undefined1 *)(lVar1 + 0x98) = *(undefined1 *)(lVar2 + 0x98);
      lVar10 = lVar10 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148672530 FUN_148672530 body=59 status=ok
// SIG undefined FUN_148672530(void)

undefined8 FUN_148672530(longlong *param_1)

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



// FUNCTION 14867257c FUN_14867257c body=57 status=ok
// SIG undefined FUN_14867257c(void)

void FUN_14867257c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 148672606 FUN_148672606 body=32 status=ok
// SIG undefined FUN_148672606(void)

void FUN_148672606(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0cee70;
  return;
}



// FUNCTION 14867264a FUN_14867264a body=63 status=ok
// SIG undefined FUN_14867264a(void)

undefined1 FUN_14867264a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 1486726b2 FUN_1486726b2 body=59 status=ok
// SIG undefined FUN_1486726b2(void)

undefined8 FUN_1486726b2(longlong *param_1)

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



// FUNCTION 1486726fe FUN_1486726fe body=38 status=ok
// SIG undefined FUN_1486726fe(void)

void FUN_1486726fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148672772 FUN_148672772 body=57 status=ok
// SIG undefined FUN_148672772(void)

void FUN_148672772(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ac70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ac70 = FUN_140002ddd(FUN_1464cca0f,uVar1,L"GbxBrainAspect_IsSpawnCostAvailable");
  }
  return;
}



// FUNCTION 1486727dc FUN_1486727dc body=63 status=ok
// SIG undefined FUN_1486727dc(void)

undefined1 FUN_1486727dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148672906(param_2,param_3);
    param_3 = param_3 + 0x1d8;
    param_2 = param_2 + 0x1d8;
  }
  return 1;
}



// FUNCTION 148672844 FUN_148672844 body=59 status=ok
// SIG undefined FUN_148672844(void)

undefined8 FUN_148672844(longlong *param_1)

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



// FUNCTION 148672890 FUN_148672890 body=40 status=ok
// SIG undefined FUN_148672890(void)

void FUN_148672890(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d8) == '\x01') {
    FUN_145ceb5e0(param_2);
    *(undefined1 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 148672906 FUN_148672906 body=198 status=ok
// SIG undefined FUN_148672906(void)

longlong FUN_148672906(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144983130(param_1 + 0xf0,param_2 + 0xf0);
  FUN_144983130(param_1 + 0x128,param_2 + 0x128);
  FUN_144983130(param_1 + 0x160,param_2 + 0x160);
  FUN_144983130(param_1 + 0x198,param_2 + 0x198);
  *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
  return param_1;
}



// FUNCTION 1486729ce FUN_1486729ce body=76 status=ok
// SIG undefined FUN_1486729ce(void)

void FUN_1486729ce(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x100);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0cf2f0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  return;
}



// FUNCTION 148672a1a FUN_148672a1a body=60 status=ok
// SIG undefined FUN_148672a1a(void)

void FUN_148672a1a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0cf2f0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  return;
}



// FUNCTION 148672a7a FUN_148672a7a body=63 status=ok
// SIG undefined FUN_148672a7a(void)

undefined1 FUN_148672a7a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148672c52(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 148672ae2 FUN_148672ae2 body=59 status=ok
// SIG undefined FUN_148672ae2(void)

undefined8 FUN_148672ae2(longlong *param_1)

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



// FUNCTION 148672b2e FUN_148672b2e body=40 status=ok
// SIG undefined FUN_148672b2e(void)

void FUN_148672b2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_148672c08(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 148672ba4 FUN_148672ba4 body=43 status=ok
// SIG undefined FUN_148672ba4(void)

undefined8 FUN_148672ba4(undefined8 param_1,int param_2)

{
  FUN_148672c08();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 148672bd0 FUN_148672bd0 body=55 status=ok
// SIG undefined FUN_148672bd0(void)

void FUN_148672bd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aca0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aca0 = FUN_140002ddd(FUN_1464ccafb,uVar1,L"GbxBrainAspect_Lead");
  }
  return;
}



// FUNCTION 148672c08 FUN_148672c08 body=74 status=ok
// SIG undefined FUN_148672c08(void)

void FUN_148672c08(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0cf2f0;
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 148672c52 FUN_148672c52 body=135 status=ok
// SIG undefined FUN_148672c52(void)

longlong FUN_148672c52(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_147f186d8();
  uVar3 = *(undefined8 *)(param_2 + 0xd8);
  lVar4 = *(longlong *)(param_2 + 0xe0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  *(longlong *)(param_1 + 0xe0) = lVar4;
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
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  uVar3 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  return param_1;
}



// FUNCTION 148672d26 FUN_148672d26 body=63 status=ok
// SIG undefined FUN_148672d26(void)

undefined1 FUN_148672d26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148672e4e(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 148672d8e FUN_148672d8e body=59 status=ok
// SIG undefined FUN_148672d8e(void)

undefined8 FUN_148672d8e(longlong *param_1)

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



// FUNCTION 148672dda FUN_148672dda body=38 status=ok
// SIG undefined FUN_148672dda(void)

void FUN_148672dda(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_1411cbdb8(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 148672e4e FUN_148672e4e body=203 status=ok
// SIG undefined FUN_148672e4e(void)

longlong FUN_148672e4e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  lVar8 = *(longlong *)(param_2 + 0x80);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x80);
    }
  }
  *(longlong *)(param_1 + 0x80) = lVar8;
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  puVar9 = (undefined8 *)(param_2 + 0xc0);
  puVar10 = (undefined8 *)(param_1 + 0xc0);
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_144983130(param_1 + 0x108,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  return param_1;
}



// FUNCTION 148672f1a FUN_148672f1a body=58 status=ok
// SIG undefined FUN_148672f1a(void)

void FUN_148672f1a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0cf6d0;
  *(undefined2 *)(param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  return;
}



// FUNCTION 148672f78 FUN_148672f78 body=63 status=ok
// SIG undefined FUN_148672f78(void)

undefined1 FUN_148672f78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148673114(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 148672fe0 FUN_148672fe0 body=59 status=ok
// SIG undefined FUN_148672fe0(void)

undefined8 FUN_148672fe0(longlong *param_1)

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



// FUNCTION 14867302c FUN_14867302c body=38 status=ok
// SIG undefined FUN_14867302c(void)

void FUN_14867302c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_1486730a0(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 1486730a0 FUN_1486730a0 body=116 status=ok
// SIG undefined FUN_1486730a0(void)

void FUN_1486730a0(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0cf6d0;
  plVar1 = param_1 + 0x1c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x20) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1f)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 148673114 FUN_148673114 body=357 status=ok
// SIG undefined FUN_148673114(void)

longlong FUN_148673114(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *_Src;
  longlong *_Dst;
  
  FUN_147f186d8();
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  _Dst = (longlong *)(param_1 + 0xe0);
  _Src = (undefined8 *)(param_2 + 0xe0);
  bVar1 = *(byte *)(param_1 + 0x100);
  if (bVar1 == *(byte *)(param_2 + 0x100)) {
    if (0x18 < *(ushort *)(param_2 + 0xf8)) {
      _Src = *(undefined8 **)(param_2 + 0xe0);
    }
    if (0x18 < *(ushort *)(param_1 + 0xf8)) {
      _Dst = (longlong *)*_Dst;
    }
    uVar5 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar5);
    if (pcVar3 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
    }
    else {
      (*pcVar3)(_Dst,_Src);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      plVar6 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0xf8)) {
        plVar6 = (longlong *)*_Dst;
      }
      (*pcVar3)(plVar6);
    }
    if (0x18 < *(ushort *)(param_1 + 0xf8)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 0x100);
    uVar2 = *(ushort *)(param_2 + 0xf8);
    *(ushort *)(param_1 + 0xf8) = uVar2;
    plVar6 = _Dst;
    if (0x18 < uVar2) {
      plVar6 = (longlong *)FUN_14001cc68(uVar2,0);
      *_Dst = (longlong)plVar6;
      _Src = (undefined8 *)*_Src;
    }
    uVar5 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar5);
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar6,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
    }
    else {
      (*pcVar3)(plVar6,_Src);
    }
    *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  return param_1;
}



// FUNCTION 1486732aa FUN_1486732aa body=63 status=ok
// SIG undefined FUN_1486732aa(void)

undefined1 FUN_1486732aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486733d2(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148673312 FUN_148673312 body=59 status=ok
// SIG undefined FUN_148673312(void)

undefined8 FUN_148673312(longlong *param_1)

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



// FUNCTION 14867335e FUN_14867335e body=38 status=ok
// SIG undefined FUN_14867335e(void)

void FUN_14867335e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_1411af3fc(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 1486733d2 FUN_1486733d2 body=132 status=ok
// SIG undefined FUN_1486733d2(void)

longlong FUN_1486733d2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined2 *)(param_1 + 0xf0) = *(undefined2 *)(param_2 + 0xf0);
  return param_1;
}



// FUNCTION 148673458 FUN_148673458 body=43 status=ok
// SIG undefined FUN_148673458(void)

void FUN_148673458(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0cfab0;
  param_2[0x1b] = 0;
  return;
}



// FUNCTION 1486734a8 FUN_1486734a8 body=76 status=ok
// SIG undefined FUN_1486734a8(void)

undefined8 FUN_1486734a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_3 + 0xd8);
    param_2 = param_2 + 0xe0;
    param_3 = param_3 + 0xe0;
  }
  return 1;
}



// FUNCTION 14867351c FUN_14867351c body=59 status=ok
// SIG undefined FUN_14867351c(void)

undefined8 FUN_14867351c(longlong *param_1)

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



// FUNCTION 148673568 FUN_148673568 body=38 status=ok
// SIG undefined FUN_148673568(void)

void FUN_148673568(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 1486735dc FUN_1486735dc body=57 status=ok
// SIG undefined FUN_1486735dc(void)

void FUN_1486735dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ad08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ad08 = FUN_140002ddd(FUN_1464ccc9b,uVar1,L"GbxBrainAspect_MaxChildActors");
  }
  return;
}



// FUNCTION 148673616 FUN_148673616 body=66 status=ok
// SIG undefined FUN_148673616(void)

void FUN_148673616(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140e48d86(param_2);
  *param_2 = &PTR_FUN_14b0cfd30;
  return;
}



// FUNCTION 148673658 FUN_148673658 body=32 status=ok
// SIG undefined FUN_148673658(void)

void FUN_148673658(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e48d86(param_2);
  *param_2 = &PTR_FUN_14b0cfd30;
  return;
}



// FUNCTION 1486736bc FUN_1486736bc body=163 status=ok
// SIG undefined FUN_1486736bc(void)

undefined8 FUN_1486736bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      FUN_144983130(param_2 + 0x38 + lVar10,param_3 + 0x38 + lVar10);
      *(undefined8 *)(param_2 + 0x70 + lVar10) = *(undefined8 *)(param_3 + 0x70 + lVar10);
      *(undefined1 *)(param_2 + 0x7c + lVar10) = *(undefined1 *)(param_3 + 0x7c + lVar10);
      *(undefined4 *)(param_2 + 0x78 + lVar10) = *(undefined4 *)(param_3 + 0x78 + lVar10);
      lVar10 = lVar10 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148673788 FUN_148673788 body=59 status=ok
// SIG undefined FUN_148673788(void)

undefined8 FUN_148673788(longlong *param_1)

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



// FUNCTION 1486737d4 FUN_1486737d4 body=57 status=ok
// SIG undefined FUN_1486737d4(void)

void FUN_1486737d4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14867385c FUN_14867385c body=65 status=ok
// SIG undefined FUN_14867385c(void)

undefined8 * FUN_14867385c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14867389e FUN_14867389e body=55 status=ok
// SIG undefined FUN_14867389e(void)

void FUN_14867389e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ad20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ad20 = FUN_140002ddd(FUN_1464ccd2d,uVar1,L"GbxBrainAspectSettings_Melee");
  }
  return;
}



// FUNCTION 1486738d6 FUN_1486738d6 body=58 status=ok
// SIG undefined FUN_1486738d6(void)

void FUN_1486738d6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xe8);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0cff30;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 148673910 FUN_148673910 body=42 status=ok
// SIG undefined FUN_148673910(void)

void FUN_148673910(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0cff30;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 14867395e FUN_14867395e body=76 status=ok
// SIG undefined FUN_14867395e(void)

undefined1 FUN_14867395e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    param_2 = param_2 + 0xe8;
    param_3 = param_3 + 0xe8;
  }
  return 1;
}



// FUNCTION 1486739d2 FUN_1486739d2 body=59 status=ok
// SIG undefined FUN_1486739d2(void)

undefined8 FUN_1486739d2(longlong *param_1)

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



// FUNCTION 148673a1e FUN_148673a1e body=38 status=ok
// SIG undefined FUN_148673a1e(void)

void FUN_148673a1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148673a92 FUN_148673a92 body=43 status=ok
// SIG undefined FUN_148673a92(void)

undefined8 FUN_148673a92(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 148673abe FUN_148673abe body=55 status=ok
// SIG undefined FUN_148673abe(void)

void FUN_148673abe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ad38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ad38 = FUN_140002ddd(FUN_1464ccdbf,uVar1,L"GbxBrainAspect_Melee");
  }
  return;
}



// FUNCTION 148673b26 FUN_148673b26 body=63 status=ok
// SIG undefined FUN_148673b26(void)

undefined1 FUN_148673b26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148673c4e(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 148673b8e FUN_148673b8e body=59 status=ok
// SIG undefined FUN_148673b8e(void)

undefined8 FUN_148673b8e(longlong *param_1)

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



// FUNCTION 148673bda FUN_148673bda body=38 status=ok
// SIG undefined FUN_148673bda(void)

void FUN_148673bda(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_140ffc9f6(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 148673c4e FUN_148673c4e body=290 status=ok
// SIG undefined FUN_148673c4e(void)

longlong FUN_148673c4e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144983130(param_1 + 0xf0,param_2 + 0xf0);
  FUN_144983130(param_1 + 0x128,param_2 + 0x128);
  FUN_144983130(param_1 + 0x160,param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  FUN_1403de7ba(param_1 + 0x1a0,param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x1c0);
  FUN_144983130(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_144983130(param_1 + 0x200,param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  *(undefined1 *)(param_1 + 0x240) = *(undefined1 *)(param_2 + 0x240);
  FUN_144983130(param_1 + 0x248,param_2 + 0x248);
  return param_1;
}



// FUNCTION 148673d72 FUN_148673d72 body=43 status=ok
// SIG undefined FUN_148673d72(void)

void FUN_148673d72(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0d03f0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 148673dc2 FUN_148673dc2 body=76 status=ok
// SIG undefined FUN_148673dc2(void)

undefined1 FUN_148673dc2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    param_2 = param_2 + 0xe8;
    param_3 = param_3 + 0xe8;
  }
  return 1;
}



// FUNCTION 148673e36 FUN_148673e36 body=59 status=ok
// SIG undefined FUN_148673e36(void)

undefined8 FUN_148673e36(longlong *param_1)

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



// FUNCTION 148673e82 FUN_148673e82 body=38 status=ok
// SIG undefined FUN_148673e82(void)

void FUN_148673e82(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148673ef6 FUN_148673ef6 body=57 status=ok
// SIG undefined FUN_148673ef6(void)

void FUN_148673ef6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ad80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ad80 = FUN_140002ddd(FUN_1464cced9,uVar1,L"GbxBrainAspect_ResourceLock");
  }
  return;
}



// FUNCTION 148673f60 FUN_148673f60 body=88 status=ok
// SIG undefined FUN_148673f60(void)

undefined8 FUN_148673f60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1ef36(param_2,param_3);
    *(undefined2 *)(param_2 + 0x1e8) = *(undefined2 *)(param_3 + 0x1e8);
    *(undefined1 *)(param_2 + 0x1ea) = *(undefined1 *)(param_3 + 0x1ea);
    param_2 = param_2 + 0x1f0;
    param_3 = param_3 + 0x1f0;
  }
  return 1;
}



// FUNCTION 148673fe0 FUN_148673fe0 body=59 status=ok
// SIG undefined FUN_148673fe0(void)

undefined8 FUN_148673fe0(longlong *param_1)

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



// FUNCTION 14867402c FUN_14867402c body=38 status=ok
// SIG undefined FUN_14867402c(void)

void FUN_14867402c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_140d29fd0(param_2);
    *(undefined1 *)(param_2 + 0x1f0) = 0;
  }
  return;
}



// FUNCTION 1486740ce FUN_1486740ce body=63 status=ok
// SIG undefined FUN_1486740ce(void)

undefined1 FUN_1486740ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148674398(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 148674136 FUN_148674136 body=59 status=ok
// SIG undefined FUN_148674136(void)

undefined8 FUN_148674136(longlong *param_1)

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



// FUNCTION 148674182 FUN_148674182 body=38 status=ok
// SIG undefined FUN_148674182(void)

void FUN_148674182(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_148674320(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 148674320 FUN_148674320 body=119 status=ok
// SIG undefined FUN_148674320(void)

void FUN_148674320(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0d07e0;
  plVar3 = (longlong *)param_1[0x30];
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
  plVar3 = (longlong *)param_1[0x25];
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
  FUN_14180bfea(param_1);
  return;
}



// FUNCTION 148674398 FUN_148674398 body=207 status=ok
// SIG undefined FUN_148674398(void)

longlong FUN_148674398(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
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
  
  FUN_147f1f36a();
  uVar3 = *(undefined8 *)(param_2 + 0x120);
  lVar4 = *(longlong *)(param_2 + 0x128);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = uVar3;
  *(longlong *)(param_1 + 0x128) = lVar4;
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
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  uVar6 = *(undefined4 *)(param_2 + 0x14c);
  uVar7 = *(undefined4 *)(param_2 + 0x150);
  uVar8 = *(undefined4 *)(param_2 + 0x154);
  uVar9 = *(undefined4 *)(param_2 + 0x158);
  uVar10 = *(undefined4 *)(param_2 + 0x15c);
  uVar11 = *(undefined4 *)(param_2 + 0x160);
  uVar12 = *(undefined4 *)(param_2 + 0x164);
  uVar13 = *(undefined4 *)(param_2 + 0x168);
  uVar14 = *(undefined4 *)(param_2 + 0x16c);
  uVar15 = *(undefined4 *)(param_2 + 0x170);
  uVar16 = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = uVar6;
  *(undefined4 *)(param_1 + 0x150) = uVar7;
  *(undefined4 *)(param_1 + 0x154) = uVar8;
  *(undefined4 *)(param_1 + 0x158) = uVar9;
  *(undefined4 *)(param_1 + 0x15c) = uVar10;
  *(undefined4 *)(param_1 + 0x160) = uVar11;
  *(undefined4 *)(param_1 + 0x164) = uVar12;
  *(undefined4 *)(param_1 + 0x168) = uVar13;
  *(undefined4 *)(param_1 + 0x16c) = uVar14;
  *(undefined4 *)(param_1 + 0x170) = uVar15;
  *(undefined4 *)(param_1 + 0x174) = uVar16;
  FUN_14488c2fc(param_1 + 0x178,param_2 + 0x178);
  return param_1;
}



// FUNCTION 148674498 FUN_148674498 body=63 status=ok
// SIG undefined FUN_148674498(void)

undefined1 FUN_148674498(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486745c0(param_2,param_3);
    param_3 = param_3 + 0x2c0;
    param_2 = param_2 + 0x2c0;
  }
  return 1;
}



// FUNCTION 148674500 FUN_148674500 body=59 status=ok
// SIG undefined FUN_148674500(void)

undefined8 FUN_148674500(longlong *param_1)

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



// FUNCTION 14867454c FUN_14867454c body=38 status=ok
// SIG undefined FUN_14867454c(void)

void FUN_14867454c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c0) == '\x01') {
    FUN_140da8078(param_2);
    *(undefined1 *)(param_2 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 1486745c0 FUN_1486745c0 body=305 status=ok
// SIG undefined FUN_1486745c0(void)

longlong FUN_1486745c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  FUN_1403de7ba(param_1 + 0xc0,param_2 + 0xc0);
  FUN_143c4a622(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined1 *)(param_1 + 0x1d8) = *(undefined1 *)(param_2 + 0x1d8);
  FUN_144983130(param_1 + 0x1e0,param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  *(undefined1 *)(param_1 + 0x220) = *(undefined1 *)(param_2 + 0x220);
  FUN_144983130(param_1 + 0x228,param_2 + 0x228);
  *(undefined2 *)(param_1 + 0x260) = *(undefined2 *)(param_2 + 0x260);
  FUN_144983130(param_1 + 0x268,param_2 + 0x268);
  *(undefined1 *)(param_1 + 0x2a0) = *(undefined1 *)(param_2 + 0x2a0);
  FUN_1411157dc(param_1 + 0x2a8,param_2 + 0x2a8);
  *(undefined2 *)(param_1 + 0x2b8) = *(undefined2 *)(param_2 + 0x2b8);
  *(undefined1 *)(param_1 + 0x2ba) = *(undefined1 *)(param_2 + 0x2ba);
  return param_1;
}



// FUNCTION 1486746f2 FUN_1486746f2 body=115 status=ok
// SIG undefined FUN_1486746f2(void)

void FUN_1486746f2(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0d0cf0;
  param_2[0x43] = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x224) = 3;
  *(undefined4 *)((longlong)param_2 + 0x22c) = 0;
  *(undefined1 *)(param_2 + 0x4a) = 0;
  *(undefined1 *)((longlong)param_2 + 0x264) = 0;
  *(undefined4 *)(param_2 + 0x4d) = 0;
  *(undefined2 *)((longlong)param_2 + 0x26c) = 0;
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 14867478a FUN_14867478a body=63 status=ok
// SIG undefined FUN_14867478a(void)

undefined1 FUN_14867478a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148674920(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 1486747f2 FUN_1486747f2 body=59 status=ok
// SIG undefined FUN_1486747f2(void)

undefined8 FUN_1486747f2(longlong *param_1)

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



// FUNCTION 14867483e FUN_14867483e body=38 status=ok
// SIG undefined FUN_14867483e(void)

void FUN_14867483e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_1486748b6(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 1486748b6 FUN_1486748b6 body=105 status=ok
// SIG undefined FUN_1486748b6(void)

void FUN_1486748b6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b0d0cf0;
  if (*(char *)((longlong)param_1 + 0x264) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x264) = 0;
  }
  if (*(char *)(param_1 + 0x4a) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a) = 0;
  }
  FUN_1405f990e(param_1 + 0x1f);
  plVar2 = (longlong *)param_1[0x1c];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 148674920 FUN_148674920 body=258 status=ok
// SIG undefined FUN_148674920(void)

longlong FUN_148674920(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  
  FUN_147f186d8();
  uVar2 = *(undefined8 *)(param_2 + 0xd8);
  lVar3 = *(longlong *)(param_2 + 0xe0);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  *(longlong *)(param_1 + 0xe0) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0xec);
  uVar6 = *(undefined4 *)(param_2 + 0xf0);
  uVar7 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  *(undefined4 *)(param_1 + 0xf0) = uVar6;
  *(undefined4 *)(param_1 + 0xf4) = uVar7;
  FUN_148674a22(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  if (param_2 == param_1) goto LAB_1486749eb;
  if (*(char *)(param_2 + 0x250) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x230);
    uVar8 = *(undefined8 *)(param_2 + 0x238);
    uVar9 = *(undefined8 *)(param_2 + 0x248);
    *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
    *(undefined8 *)(param_1 + 0x248) = uVar9;
    *(undefined8 *)(param_1 + 0x230) = uVar2;
    *(undefined8 *)(param_1 + 0x238) = uVar8;
    uVar10 = 1;
LAB_1486749c5:
    *(undefined1 *)(param_1 + 0x250) = uVar10;
  }
  else if (*(char *)(param_1 + 0x250) == '\x01') {
    uVar10 = 0;
    goto LAB_1486749c5;
  }
  if (*(char *)(param_2 + 0x264) == '\x01') {
    *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
    *(undefined1 *)(param_1 + 0x264) = 1;
  }
  else if (*(char *)(param_1 + 0x264) == '\x01') {
    *(undefined1 *)(param_1 + 0x264) = 0;
  }
LAB_1486749eb:
  uVar2 = *(undefined8 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x270) = uVar2;
  return param_1;
}



// FUNCTION 148674a22 FUN_148674a22 body=90 status=ok
// SIG undefined FUN_148674a22(void)

longlong FUN_148674a22(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar1 = param_1;
    }
    FUN_1405f994b(lVar1,*(undefined4 *)(param_1 + 0x128));
    lVar1 = *(longlong *)(param_2 + 0x120);
    if (*(longlong *)(param_2 + 0x120) == 0) {
      lVar1 = param_2;
    }
    FUN_148674a7c(param_1,lVar1,*(undefined4 *)(param_2 + 0x128),*(undefined4 *)(param_1 + 300));
  }
  return param_1;
}



// FUNCTION 148674a7c FUN_148674a7c body=95 status=ok
// SIG undefined FUN_148674a7c(void)

void FUN_148674a7c(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x128) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 300) = 3;
    return;
  }
  FUN_148674adc(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar1 = param_1;
  }
  FUN_148674b55(lVar1,param_2,param_3);
  return;
}



// FUNCTION 148674adc FUN_148674adc body=121 status=ok
// SIG undefined FUN_148674adc(void)

void FUN_148674adc(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 3;
    if (3 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x60,0);
      iVar2 = (int)(uVar1 / 0x60);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148674ba8(param_1,0,iVar3,0x60);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 300) = param_3;
  return;
}



// FUNCTION 148674b55 FUN_148674b55 body=82 status=ok
// SIG undefined FUN_148674b55(void)

void FUN_148674b55(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar6);
      lVar2 = param_1 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      *(undefined1 *)(lVar2 + 0x40) = 0xff;
      FUN_140219b74();
      lVar6 = lVar6 + 0x60;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148674ba8 FUN_148674ba8 body=150 status=ok
// SIG undefined FUN_148674ba8(void)

void FUN_148674ba8(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x120);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x60);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x120,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x120),param_1,(longlong)param_2 * 0x60);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x120,param_2,param_3,param_4);
  return;
}



// FUNCTION 148674c40 FUN_148674c40 body=37 status=ok
// SIG undefined FUN_148674c40(void)

void FUN_148674c40(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  FUN_1412ed500(param_2);
  return;
}



// FUNCTION 148674c6e FUN_148674c6e body=34 status=ok
// SIG undefined FUN_148674c6e(void)

void FUN_148674c6e(undefined8 param_1,longlong param_2)

{
  FUN_144a2da94(param_2 + 0x48);
  FUN_144a2da94(param_2 + 0x10);
  return;
}



// FUNCTION 148674ca6 FUN_148674ca6 body=63 status=ok
// SIG undefined FUN_148674ca6(void)

undefined1 FUN_148674ca6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1461784b8(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148674d0e FUN_148674d0e body=59 status=ok
// SIG undefined FUN_148674d0e(void)

undefined8 FUN_148674d0e(longlong *param_1)

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



// FUNCTION 148674d5a FUN_148674d5a body=48 status=ok
// SIG undefined FUN_148674d5a(void)

void FUN_148674d5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_144a2da94(param_2 + 0x48);
    FUN_144a2da94(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148674e0a FUN_148674e0a body=63 status=ok
// SIG undefined FUN_148674e0a(void)

undefined1 FUN_148674e0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148674f34(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 148674e72 FUN_148674e72 body=59 status=ok
// SIG undefined FUN_148674e72(void)

undefined8 FUN_148674e72(longlong *param_1)

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



// FUNCTION 148674ebe FUN_148674ebe body=40 status=ok
// SIG undefined FUN_148674ebe(void)

void FUN_148674ebe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_145854b18(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 148674f34 FUN_148674f34 body=152 status=ok
// SIG undefined FUN_148674f34(void)

longlong FUN_148674f34(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined2 *)(param_1 + 0xf0) = *(undefined2 *)(param_2 + 0xf0);
  FUN_1461784b8(param_1 + 0xf8,param_2 + 0xf8);
  return param_1;
}



// FUNCTION 148674fce FUN_148674fce body=143 status=ok
// SIG undefined FUN_148674fce(void)

void FUN_148674fce(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0d13c0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x104) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x22] = DAT_14c8464e0;
  param_2[0x23] = uVar1;
  param_2[0x24] = DAT_14c8464f0;
  param_2[0x27] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x25] = DAT_14c8464e0;
  param_2[0x26] = uVar1;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  return;
}



// FUNCTION 148675082 FUN_148675082 body=63 status=ok
// SIG undefined FUN_148675082(void)

undefined1 FUN_148675082(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486751ac(param_2,param_3);
    param_3 = param_3 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return 1;
}



// FUNCTION 1486750ea FUN_1486750ea body=59 status=ok
// SIG undefined FUN_1486750ea(void)

undefined8 FUN_1486750ea(longlong *param_1)

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



// FUNCTION 148675136 FUN_148675136 body=40 status=ok
// SIG undefined FUN_148675136(void)

void FUN_148675136(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_14583c3d0(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 1486751ac FUN_1486751ac body=235 status=ok
// SIG undefined FUN_1486751ac(void)

longlong FUN_1486751ac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_147f186d8();
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  uVar3 = *(undefined8 *)(param_2 + 0xe0);
  lVar5 = *(longlong *)(param_2 + 0xe8);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  *(longlong *)(param_1 + 0xe8) = lVar5;
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
  puVar6 = (undefined8 *)(param_2 + 0xf0);
  puVar7 = (undefined8 *)(param_1 + 0xf0);
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  lVar5 = *(longlong *)(param_2 + 0x160);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  *(longlong *)(param_1 + 0x160) = lVar5;
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
  return param_1;
}



// FUNCTION 1486752c8 FUN_1486752c8 body=63 status=ok
// SIG undefined FUN_1486752c8(void)

undefined1 FUN_1486752c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486754ee(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 148675330 FUN_148675330 body=59 status=ok
// SIG undefined FUN_148675330(void)

undefined8 FUN_148675330(longlong *param_1)

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



// FUNCTION 14867537c FUN_14867537c body=38 status=ok
// SIG undefined FUN_14867537c(void)

void FUN_14867537c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_140e4bfb8(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 1486753f0 FUN_1486753f0 body=254 status=ok
// SIG undefined FUN_1486753f0(void)

undefined8 * FUN_1486753f0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *param_1 = &PTR_FUN_14b0d16d0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x17) = 4;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x18) = 2;
  *(byte *)(param_1 + 0x19) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 4;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1f) = 3;
  *(char *)(param_1 + 0x20) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 1486754ee FUN_1486754ee body=236 status=ok
// SIG undefined FUN_1486754ee(void)

longlong FUN_1486754ee(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  lVar8 = *(longlong *)(param_2 + 0x80);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x80);
    }
  }
  *(longlong *)(param_1 + 0x80) = lVar8;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  FUN_144983130(param_1 + 0x98,param_2 + 0x98);
  FUN_144983130(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(param_2 + 0x10c);
  FUN_140b57998(param_1 + 0x110,param_2 + 0x110);
  return param_1;
}



// FUNCTION 1486755dc FUN_1486755dc body=49 status=ok
// SIG undefined FUN_1486755dc(void)

void FUN_1486755dc(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0d18d0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *(undefined8 *)((longlong)param_2 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf1) = 0;
  return;
}



// FUNCTION 148675632 FUN_148675632 body=102 status=ok
// SIG undefined FUN_148675632(void)

undefined1 FUN_148675632(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    uVar4 = *(undefined4 *)(param_3 + 0xe8);
    uVar5 = *(undefined4 *)(param_3 + 0xec);
    uVar6 = *(undefined4 *)(param_3 + 0xf0);
    uVar7 = *(undefined4 *)(param_3 + 0xf4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    *(undefined4 *)(param_2 + 0xe8) = uVar4;
    *(undefined4 *)(param_2 + 0xec) = uVar5;
    *(undefined4 *)(param_2 + 0xf0) = uVar6;
    *(undefined4 *)(param_2 + 0xf4) = uVar7;
    *(undefined1 *)(param_2 + 0xf8) = *(undefined1 *)(param_3 + 0xf8);
    param_2 = param_2 + 0x100;
    param_3 = param_3 + 0x100;
  }
  return 1;
}



// FUNCTION 1486756c0 FUN_1486756c0 body=59 status=ok
// SIG undefined FUN_1486756c0(void)

undefined8 FUN_1486756c0(longlong *param_1)

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



// FUNCTION 14867570c FUN_14867570c body=38 status=ok
// SIG undefined FUN_14867570c(void)

void FUN_14867570c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 1486757b2 FUN_1486757b2 body=63 status=ok
// SIG undefined FUN_1486757b2(void)

undefined1 FUN_1486757b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486758dc(param_2,param_3);
    param_3 = param_3 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return 1;
}



// FUNCTION 14867581a FUN_14867581a body=59 status=ok
// SIG undefined FUN_14867581a(void)

undefined8 FUN_14867581a(longlong *param_1)

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



// FUNCTION 148675866 FUN_148675866 body=40 status=ok
// SIG undefined FUN_148675866(void)

void FUN_148675866(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_145854a7e(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 1486758dc FUN_1486758dc body=167 status=ok
// SIG undefined FUN_1486758dc(void)

longlong FUN_1486758dc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
  FUN_144983130(param_1 + 0xf8,param_2 + 0xf8);
  FUN_144983130(param_1 + 0x130,param_2 + 0x130);
  return param_1;
}



// FUNCTION 148675984 FUN_148675984 body=43 status=ok
// SIG undefined FUN_148675984(void)

void FUN_148675984(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14b0d1d50;
  return;
}



// FUNCTION 1486759d4 FUN_1486759d4 body=76 status=ok
// SIG undefined FUN_1486759d4(void)

undefined8 FUN_1486759d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_3 + 0xd8);
    param_2 = param_2 + 0xe0;
    param_3 = param_3 + 0xe0;
  }
  return 1;
}



// FUNCTION 148675a48 FUN_148675a48 body=59 status=ok
// SIG undefined FUN_148675a48(void)

undefined8 FUN_148675a48(longlong *param_1)

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



// FUNCTION 148675a94 FUN_148675a94 body=38 status=ok
// SIG undefined FUN_148675a94(void)

void FUN_148675a94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148675b0a FUN_148675b0a body=53 status=ok
// SIG undefined FUN_148675b0a(void)

void FUN_148675b0a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e48d86(param_2);
  *param_2 = &PTR_FUN_14b0d1fd0;
  FUN_140785382(param_2 + 0x10,10);
  *(undefined1 *)(param_2 + 0x17) = 0;
  return;
}



// FUNCTION 148675b68 FUN_148675b68 body=206 status=ok
// SIG undefined FUN_148675b68(void)

undefined8 FUN_148675b68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x7c) = *(undefined1 *)(lVar2 + 0x7c);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar2 + 0x78);
      FUN_144983130(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      *(undefined1 *)(lVar1 + 0xb8) = *(undefined1 *)(lVar2 + 0xb8);
      lVar10 = lVar10 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148675c5e FUN_148675c5e body=59 status=ok
// SIG undefined FUN_148675c5e(void)

undefined8 FUN_148675c5e(longlong *param_1)

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



// FUNCTION 148675d02 FUN_148675d02 body=79 status=ok
// SIG undefined FUN_148675d02(void)

void FUN_148675d02(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *param_1 = &PTR_FUN_14b0d1fd0;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148675d52 FUN_148675d52 body=69 status=ok
// SIG undefined FUN_148675d52(void)

void FUN_148675d52(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf0);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0d21d0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined8 *)((longlong)param_2 + 0xe5) = 0;
  return;
}



// FUNCTION 148675d98 FUN_148675d98 body=53 status=ok
// SIG undefined FUN_148675d98(void)

void FUN_148675d98(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b0d21d0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined8 *)((longlong)param_2 + 0xe5) = 0;
  return;
}



// FUNCTION 148675df2 FUN_148675df2 body=90 status=ok
// SIG undefined FUN_148675df2(void)

undefined8 FUN_148675df2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    *(undefined8 *)(param_2 + 0xe5) = *(undefined8 *)(param_3 + 0xe5);
    param_2 = param_2 + 0xf0;
    param_3 = param_3 + 0xf0;
  }
  return 1;
}



// FUNCTION 148675e74 FUN_148675e74 body=59 status=ok
// SIG undefined FUN_148675e74(void)

undefined8 FUN_148675e74(longlong *param_1)

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



// FUNCTION 148675ec0 FUN_148675ec0 body=38 status=ok
// SIG undefined FUN_148675ec0(void)

void FUN_148675ec0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148675f34 FUN_148675f34 body=43 status=ok
// SIG undefined FUN_148675f34(void)

undefined8 FUN_148675f34(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 148675f60 FUN_148675f60 body=55 status=ok
// SIG undefined FUN_148675f60(void)

void FUN_148675f60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5af18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5af18 = FUN_140002ddd(FUN_1464cd4cf,uVar1,L"GbxBrainAspect_UseUsable");
  }
  return;
}



// FUNCTION 148675f98 FUN_148675f98 body=92 status=ok
// SIG undefined FUN_148675f98(void)

void FUN_148675f98(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xf8);
  *param_2 = &PTR_FUN_14b0d30c0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined8 *)((longlong)param_2 + 0xcd) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd5) = 0;
  return;
}



// FUNCTION 148676070 FUN_148676070 body=63 status=ok
// SIG undefined FUN_148676070(void)

undefined1 FUN_148676070(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867629a(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 1486760d8 FUN_1486760d8 body=59 status=ok
// SIG undefined FUN_1486760d8(void)

undefined8 FUN_1486760d8(longlong *param_1)

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


