// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c30124 FUN_148c30124 body=65 status=ok
// SIG undefined FUN_148c30124(void)

void FUN_148c30124(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x92) == '\x01') {
    *param_2 = &PTR_FUN_14b7a7a10;
    if (param_2[0x8f] != 0) {
      FUN_1400020a8();
    }
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x92) = 0;
  }
  return;
}



// FUNCTION 148c30236 FUN_148c30236 body=59 status=ok
// SIG undefined FUN_148c30236(void)

undefined8 FUN_148c30236(longlong *param_1)

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



// FUNCTION 148c302d6 FUN_148c302d6 body=55 status=ok
// SIG undefined FUN_148c302d6(void)

void FUN_148c302d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbac8f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbac8f8 = FUN_140002ddd(FUN_1465e2e39,uVar1,L"OakLostLootValueResolver");
  }
  return;
}



// FUNCTION 148c30326 FUN_148c30326 body=42 status=ok
// SIG undefined FUN_148c30326(void)

void FUN_148c30326(undefined8 param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_2 + 0xe) = 0;
  *(undefined4 *)((longlong)param_2 + 0x74) = 0x42b40000;
  return;
}



// FUNCTION 148c30368 FUN_148c30368 body=39 status=ok
// SIG undefined FUN_148c30368(void)

undefined8 FUN_148c30368(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c303b8 FUN_148c303b8 body=59 status=ok
// SIG undefined FUN_148c303b8(void)

undefined8 FUN_148c303b8(longlong *param_1)

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



// FUNCTION 148c304ae FUN_148c304ae body=49 status=ok
// SIG undefined FUN_148c304ae(void)

void FUN_148c304ae(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148c304f6 FUN_148c304f6 body=146 status=ok
// SIG undefined FUN_148c304f6(void)

undefined8 FUN_148c304f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x34);
      uVar4 = *(undefined4 *)(puVar1 + 7);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x3c);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(puVar1 + 6);
      *(undefined4 *)(lVar2 + 0x1c) = uVar3;
      *(undefined4 *)(lVar2 + 0x20) = uVar4;
      *(undefined4 *)(lVar2 + 0x24) = uVar5;
      lVar2 = param_3 + 0x40 + lVar6;
      FUN_144a787a6(param_2 + lVar6 + 0x40,lVar2);
      *(undefined8 *)(param_2 + lVar6 + 0x50) = *(undefined8 *)(lVar2 + 0x10);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c305b0 FUN_148c305b0 body=59 status=ok
// SIG undefined FUN_148c305b0(void)

undefined8 FUN_148c305b0(longlong *param_1)

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



// FUNCTION 148c3064e FUN_148c3064e body=52 status=ok
// SIG undefined FUN_148c3064e(void)

void FUN_148c3064e(longlong param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c30712 FUN_148c30712 body=59 status=ok
// SIG undefined FUN_148c30712(void)

undefined8 FUN_148c30712(longlong *param_1)

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



// FUNCTION 148c307b4 FUN_148c307b4 body=100 status=ok
// SIG undefined FUN_148c307b4(void)

void FUN_148c307b4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,200);
  *(undefined4 *)((longlong)param_2 + 0x58) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0x412000003f800000;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0x3dcccccd3dcccccd;
  *(undefined4 *)((longlong)param_2 + 0xc0) = 0x3e4ccccd;
  *(undefined1 *)((longlong)param_2 + 0xc5) = 0;
  return;
}



// FUNCTION 148c30892 FUN_148c30892 body=63 status=ok
// SIG undefined FUN_148c30892(void)

undefined1 FUN_148c30892(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c309bc(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148c308fa FUN_148c308fa body=59 status=ok
// SIG undefined FUN_148c308fa(void)

undefined8 FUN_148c308fa(longlong *param_1)

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



// FUNCTION 148c30946 FUN_148c30946 body=40 status=ok
// SIG undefined FUN_148c30946(void)

void FUN_148c30946(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_145c19f32(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148c309bc FUN_148c309bc body=196 status=ok
// SIG undefined FUN_148c309bc(void)

undefined8 * FUN_148c309bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 9,param_2 + 9);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  param_1[0xc] = param_2[0xc];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0xe);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  FUN_144a787a6(param_1 + 0xf,param_2 + 0xf);
  param_1[0x11] = param_2[0x11];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x13);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x13) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  FUN_144a787a6(param_1 + 0x14,param_2 + 0x14);
  uVar4 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar4;
  *(undefined8 *)((longlong)param_1 + 0xbe) = *(undefined8 *)((longlong)param_2 + 0xbe);
  return param_1;
}



// FUNCTION 148c30aa0 FUN_148c30aa0 body=63 status=ok
// SIG undefined FUN_148c30aa0(void)

undefined1 FUN_148c30aa0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14404d35a(param_2,param_3);
    param_3 = param_3 + 0x4c8;
    param_2 = param_2 + 0x4c8;
  }
  return 1;
}



// FUNCTION 148c30b08 FUN_148c30b08 body=59 status=ok
// SIG undefined FUN_148c30b08(void)

undefined8 FUN_148c30b08(longlong *param_1)

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



// FUNCTION 148c30b54 FUN_148c30b54 body=38 status=ok
// SIG undefined FUN_148c30b54(void)

void FUN_148c30b54(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4c8) == '\x01') {
    FUN_1414f9576(param_2);
    *(undefined1 *)(param_2 + 0x4c8) = 0;
  }
  return;
}



// FUNCTION 148c30bcc FUN_148c30bcc body=49 status=ok
// SIG undefined FUN_148c30bcc(void)

void FUN_148c30bcc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148c30bfe FUN_148c30bfe body=95 status=ok
// SIG undefined FUN_148c30bfe(void)

undefined8 * FUN_148c30bfe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c30bcc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c30c5e(param_1,iVar1);
      FUN_148c30cd1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c30c5e FUN_148c30c5e body=115 status=ok
// SIG undefined FUN_148c30c5e(void)

void FUN_148c30c5e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c30cd1 FUN_148c30cd1 body=134 status=ok
// SIG undefined FUN_148c30cd1(void)

void FUN_148c30cd1(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 148c30d58 FUN_148c30d58 body=28 status=ok
// SIG undefined FUN_148c30d58(void)

undefined8 FUN_148c30d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c30da4 FUN_148c30da4 body=63 status=ok
// SIG undefined FUN_148c30da4(void)

undefined1 FUN_148c30da4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c30f06(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 148c30e0c FUN_148c30e0c body=59 status=ok
// SIG undefined FUN_148c30e0c(void)

undefined8 FUN_148c30e0c(longlong *param_1)

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



// FUNCTION 148c30e58 FUN_148c30e58 body=38 status=ok
// SIG undefined FUN_148c30e58(void)

void FUN_148c30e58(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1414a66de(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148c30ecc FUN_148c30ecc body=57 status=ok
// SIG undefined FUN_148c30ecc(void)

void FUN_148c30ecc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaca38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaca38 = FUN_140002ddd(FUN_1465e34ab,uVar1,L"OakMapViewerGlobals");
  }
  return;
}



// FUNCTION 148c30f06 FUN_148c30f06 body=164 status=ok
// SIG undefined FUN_148c30f06(void)

longlong FUN_148c30f06(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_148c30faa(param_1 + 0x20,param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  FUN_1486994a8(param_1 + 0x40,param_2 + 0x40);
  FUN_1487297d4(param_1 + 0x58,param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  uVar6 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 148c30faa FUN_148c30faa body=84 status=ok
// SIG undefined FUN_148c30faa(void)

longlong * FUN_148c30faa(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c31000 FUN_148c31000 body=63 status=ok
// SIG undefined FUN_148c31000(void)

void FUN_148c31000(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_2 + 3);
  *param_2 = &PTR_FUN_14b7a8d10;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2b) = 0;
  return;
}



// FUNCTION 148c31056 FUN_148c31056 body=66 status=ok
// SIG undefined FUN_148c31056(void)

undefined8 FUN_148c31056(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8080(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x2b);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x2b) = uVar1;
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148c310c0 FUN_148c310c0 body=59 status=ok
// SIG undefined FUN_148c310c0(void)

undefined8 FUN_148c310c0(longlong *param_1)

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



// FUNCTION 148c31106 FUN_148c31106 body=32 status=ok
// SIG undefined FUN_148c31106(void)

void FUN_148c31106(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c3116e FUN_148c3116e body=84 status=ok
// SIG undefined FUN_148c3116e(void)

longlong * FUN_148c3116e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c311c2 FUN_148c311c2 body=79 status=ok
// SIG undefined FUN_148c311c2(void)

undefined8 * FUN_148c311c2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c31262(param_1,iVar1);
      FUN_148c312d5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c31212 FUN_148c31212 body=79 status=ok
// SIG undefined FUN_148c31212(void)

undefined8 * FUN_148c31212(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1418cb1da(param_1,iVar1);
      FUN_1418cb328(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c31262 FUN_148c31262 body=115 status=ok
// SIG undefined FUN_148c31262(void)

void FUN_148c31262(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c312d5 FUN_148c312d5 body=52 status=ok
// SIG undefined FUN_148c312d5(void)

void FUN_148c312d5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c3130a(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148c3130a FUN_148c3130a body=71 status=ok
// SIG undefined FUN_148c3130a(void)

undefined8 * FUN_148c3130a(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c31428 FUN_148c31428 body=59 status=ok
// SIG undefined FUN_148c31428(void)

undefined8 FUN_148c31428(longlong *param_1)

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



// FUNCTION 148c314e4 FUN_148c314e4 body=121 status=ok
// SIG undefined FUN_148c314e4(void)

undefined8 FUN_148c314e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar4;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar4) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar4);
      FUN_14115e0ba();
      puVar2 = (undefined8 *)(param_3 + lVar4 + 0x98);
      puVar3 = (undefined8 *)(param_2 + lVar4 + 0x98);
      for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      lVar4 = lVar4 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c31586 FUN_148c31586 body=59 status=ok
// SIG undefined FUN_148c31586(void)

undefined8 FUN_148c31586(longlong *param_1)

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



// FUNCTION 148c3161e FUN_148c3161e body=78 status=ok
// SIG undefined FUN_148c3161e(void)

void FUN_148c3161e(longlong param_1)

{
  if (*(char *)(param_1 + 0x110) == '\x01') {
    *(undefined **)(param_1 + 0x10) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
  return;
}



// FUNCTION 148c3166c FUN_148c3166c body=87 status=ok
// SIG undefined FUN_148c3166c(void)

void FUN_148c3166c(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_1446f470e(param_2 + 5,&DAT_14a1f75d8,1);
  *(undefined1 *)(param_2 + 6) = 1;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0x42c80000;
  return;
}



// FUNCTION 148c316c4 FUN_148c316c4 body=49 status=ok
// SIG undefined FUN_148c316c4(void)

void FUN_148c316c4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148c3170c FUN_148c3170c body=170 status=ok
// SIG undefined FUN_148c3170c(void)

undefined8 FUN_148c3170c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(lVar2 + 0x18) = *(undefined1 *)(puVar1 + 6);
      *(undefined8 *)(lVar2 + 0x20) = puVar1[7];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x44);
      uVar4 = *(undefined4 *)(puVar1 + 9);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x4c);
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(puVar1 + 8);
      *(undefined4 *)(lVar2 + 0x2c) = uVar3;
      *(undefined4 *)(lVar2 + 0x30) = uVar4;
      *(undefined4 *)(lVar2 + 0x34) = uVar5;
      lVar2 = param_3 + 0x50 + lVar6;
      FUN_144a787a6(param_2 + lVar6 + 0x50,lVar2);
      *(undefined4 *)(param_2 + lVar6 + 0x60) = *(undefined4 *)(lVar2 + 0x10);
      lVar6 = lVar6 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c317de FUN_148c317de body=59 status=ok
// SIG undefined FUN_148c317de(void)

undefined8 FUN_148c317de(longlong *param_1)

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



// FUNCTION 148c3187c FUN_148c3187c body=52 status=ok
// SIG undefined FUN_148c3187c(void)

void FUN_148c3187c(longlong param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148c318d0 FUN_148c318d0 body=203 status=ok
// SIG undefined FUN_148c318d0(void)

undefined1 FUN_148c318d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  longlong lVar26;
  
  if (param_4 != 0) {
    lVar26 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar26);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      uVar8 = puVar1[4];
      uVar9 = puVar1[5];
      uVar10 = puVar1[6];
      uVar11 = puVar1[7];
      uVar12 = puVar1[8];
      uVar13 = puVar1[9];
      uVar14 = puVar1[10];
      uVar15 = puVar1[0xb];
      uVar16 = *(undefined4 *)((longlong)puVar1 + 0x2d);
      uVar17 = *(undefined4 *)((longlong)puVar1 + 0x31);
      uVar18 = *(undefined4 *)((longlong)puVar1 + 0x35);
      lVar3 = param_2 + 0x40 + lVar26;
      *(undefined4 *)(lVar3 + -0x17) = *(undefined4 *)((longlong)puVar1 + 0x29);
      *(undefined4 *)(lVar3 + -0x13) = uVar16;
      *(undefined4 *)(lVar3 + -0xf) = uVar17;
      *(undefined4 *)(lVar3 + -0xb) = uVar18;
      *(undefined4 *)(lVar3 + -0x20) = uVar12;
      *(undefined4 *)(lVar3 + -0x1c) = uVar13;
      *(undefined4 *)(lVar3 + -0x18) = uVar14;
      *(undefined4 *)(lVar3 + -0x14) = uVar15;
      *(undefined4 *)(lVar3 + -0x30) = uVar8;
      *(undefined4 *)(lVar3 + -0x2c) = uVar9;
      *(undefined4 *)(lVar3 + -0x28) = uVar10;
      *(undefined4 *)(lVar3 + -0x24) = uVar11;
      *(undefined4 *)(lVar3 + -0x40) = uVar4;
      *(undefined4 *)(lVar3 + -0x3c) = uVar5;
      *(undefined4 *)(lVar3 + -0x38) = uVar6;
      *(undefined4 *)(lVar3 + -0x34) = uVar7;
      FUN_1465e3ce2();
      FUN_1465e3ce2(param_2 + lVar26 + 0x58,param_3 + lVar26 + 0x58);
      lVar3 = param_2 + lVar26;
      lVar2 = param_3 + lVar26;
      FUN_1465e3ce2(lVar3 + 0x70,lVar2 + 0x70);
      uVar19 = *(undefined8 *)(lVar2 + 0x90);
      uVar20 = *(undefined8 *)(lVar2 + 0x98);
      uVar21 = *(undefined8 *)(lVar2 + 0xa0);
      uVar22 = *(undefined8 *)(lVar2 + 0xa8);
      uVar23 = *(undefined8 *)(lVar2 + 0xb0);
      uVar24 = *(undefined8 *)(lVar2 + 0xb4);
      uVar25 = *(undefined8 *)(lVar2 + 0xbc);
      *(undefined8 *)(lVar3 + 0x88) = *(undefined8 *)(lVar2 + 0x88);
      *(undefined8 *)(lVar3 + 0x90) = uVar19;
      *(undefined8 *)(lVar3 + 0x98) = uVar20;
      *(undefined8 *)(lVar3 + 0xa0) = uVar21;
      *(undefined8 *)(lVar3 + 0xa8) = uVar22;
      *(undefined8 *)(lVar3 + 0xb0) = uVar23;
      *(undefined8 *)(lVar3 + 0xb4) = uVar24;
      *(undefined8 *)(lVar3 + 0xbc) = uVar25;
      lVar26 = lVar26 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c319c4 FUN_148c319c4 body=59 status=ok
// SIG undefined FUN_148c319c4(void)

undefined8 FUN_148c319c4(longlong *param_1)

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



// FUNCTION 148c31aca FUN_148c31aca body=262 status=ok
// SIG undefined FUN_148c31aca(void)

void FUN_148c31aca(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
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
  FUN_148ce0a4e(local_20,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c31bf6 FUN_148c31bf6 body=238 status=ok
// SIG undefined FUN_148c31bf6(void)

void FUN_148c31bf6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_148e09c16(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c31ce6 FUN_148c31ce6 body=238 status=ok
// SIG undefined FUN_148c31ce6(void)

void FUN_148c31ce6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_148e09d28(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c31e0c FUN_148c31e0c body=48 status=ok
// SIG undefined FUN_148c31e0c(void)

longlong FUN_148c31e0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c31e3c FUN_148c31e3c body=48 status=ok
// SIG undefined FUN_148c31e3c(void)

longlong FUN_148c31e3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c31e6c FUN_148c31e6c body=48 status=ok
// SIG undefined FUN_148c31e6c(void)

longlong FUN_148c31e6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c31e9c FUN_148c31e9c body=48 status=ok
// SIG undefined FUN_148c31e9c(void)

longlong FUN_148c31e9c(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c31ecc FUN_148c31ecc body=48 status=ok
// SIG undefined FUN_148c31ecc(void)

longlong FUN_148c31ecc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c31efc FUN_148c31efc body=48 status=ok
// SIG undefined FUN_148c31efc(void)

longlong FUN_148c31efc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c31f2c FUN_148c31f2c body=45 status=ok
// SIG undefined FUN_148c31f2c(void)

longlong FUN_148c31f2c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c31f5a FUN_148c31f5a body=48 status=ok
// SIG undefined FUN_148c31f5a(void)

longlong FUN_148c31f5a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c31f8a FUN_148c31f8a body=48 status=ok
// SIG undefined FUN_148c31f8a(void)

longlong FUN_148c31f8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c31fba FUN_148c31fba body=48 status=ok
// SIG undefined FUN_148c31fba(void)

longlong FUN_148c31fba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c31fea FUN_148c31fea body=45 status=ok
// SIG undefined FUN_148c31fea(void)

longlong FUN_148c31fea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14597842a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c32018 FUN_148c32018 body=45 status=ok
// SIG undefined FUN_148c32018(void)

longlong FUN_148c32018(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140d4f690(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c32046 FUN_148c32046 body=48 status=ok
// SIG undefined FUN_148c32046(void)

longlong FUN_148c32046(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140d4f690(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c32076 FUN_148c32076 body=48 status=ok
// SIG undefined FUN_148c32076(void)

longlong FUN_148c32076(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140d4f690(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c320a6 FUN_148c320a6 body=48 status=ok
// SIG undefined FUN_148c320a6(void)

longlong FUN_148c320a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140d4f690(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c32132 FUN_148c32132 body=54 status=ok
// SIG undefined FUN_148c32132(void)

undefined1 FUN_148c32132(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c32230(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148c32190 FUN_148c32190 body=59 status=ok
// SIG undefined FUN_148c32190(void)

undefined8 FUN_148c32190(longlong *param_1)

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



// FUNCTION 148c32230 FUN_148c32230 body=99 status=ok
// SIG undefined FUN_148c32230(void)

longlong * FUN_148c32230(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148c32294 FUN_148c32294 body=70 status=ok
// SIG undefined FUN_148c32294(void)

void FUN_148c32294(undefined8 param_1,undefined8 *param_2)

{
  FUN_143c7f6c0(param_2);
  *param_2 = &PTR_FUN_14b6ff1c0;
  *(undefined4 *)(param_2 + 0x31) = 0x3f800000;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 148c32318 FUN_148c32318 body=59 status=ok
// SIG undefined FUN_148c32318(void)

undefined8 FUN_148c32318(longlong *param_1)

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



// FUNCTION 148c32364 FUN_148c32364 body=38 status=ok
// SIG undefined FUN_148c32364(void)

void FUN_148c32364(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_140fe8226(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 148c323da FUN_148c323da body=99 status=ok
// SIG undefined FUN_148c323da(void)

void FUN_148c323da(undefined8 param_1,undefined8 *param_2)

{
  FUN_14145983e(param_2);
  *param_2 = &PTR_FUN_14b7b7a40;
  FUN_1446f470e(param_2 + 0x5a,L"MeleeResonator",1);
  FUN_1446f470e(param_2 + 0x5b,L"MeleeResonatorNotBroken",1);
  *(undefined1 *)(param_2 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2e4) = 0x3f800000;
  return;
}



// FUNCTION 148c32454 FUN_148c32454 body=90 status=ok
// SIG undefined FUN_148c32454(void)

undefined8 FUN_148c32454(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148777148(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x2d4);
    uVar2 = *(undefined4 *)(param_3 + 0x2d8);
    uVar3 = *(undefined4 *)(param_3 + 0x2dc);
    *(undefined4 *)(param_2 + 0x2d0) = *(undefined4 *)(param_3 + 0x2d0);
    *(undefined4 *)(param_2 + 0x2d4) = uVar1;
    *(undefined4 *)(param_2 + 0x2d8) = uVar2;
    *(undefined4 *)(param_2 + 0x2dc) = uVar3;
    *(undefined8 *)(param_2 + 0x2e0) = *(undefined8 *)(param_3 + 0x2e0);
    param_2 = param_2 + 0x2e8;
    param_3 = param_3 + 0x2e8;
  }
  return 1;
}



// FUNCTION 148c324d6 FUN_148c324d6 body=59 status=ok
// SIG undefined FUN_148c324d6(void)

undefined8 FUN_148c324d6(longlong *param_1)

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



// FUNCTION 148c32522 FUN_148c32522 body=49 status=ok
// SIG undefined FUN_148c32522(void)

void FUN_148c32522(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5d) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0x5d) = 0;
  }
  return;
}



// FUNCTION 148c325e8 FUN_148c325e8 body=59 status=ok
// SIG undefined FUN_148c325e8(void)

undefined8 FUN_148c325e8(longlong *param_1)

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



// FUNCTION 148c3270e FUN_148c3270e body=54 status=ok
// SIG undefined FUN_148c3270e(void)

undefined1 FUN_148c3270e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c32888(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148c3276c FUN_148c3276c body=59 status=ok
// SIG undefined FUN_148c3276c(void)

undefined8 FUN_148c3276c(longlong *param_1)

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



// FUNCTION 148c327b2 FUN_148c327b2 body=32 status=ok
// SIG undefined FUN_148c327b2(void)

void FUN_148c327b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c32820 FUN_148c32820 body=38 status=ok
// SIG undefined FUN_148c32820(void)

undefined8 FUN_148c32820(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c32846 FUN_148c32846 body=57 status=ok
// SIG undefined FUN_148c32846(void)

void FUN_148c32846(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaccd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaccd0 = FUN_140002ddd(FUN_1465e4260,uVar1,L"OakMigrationBehaviorMod");
  }
  return;
}



// FUNCTION 148c32888 FUN_148c32888 body=105 status=ok
// SIG undefined FUN_148c32888(void)

longlong FUN_148c32888(longlong param_1,longlong param_2)

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



// FUNCTION 148c32934 FUN_148c32934 body=67 status=ok
// SIG undefined FUN_148c32934(void)

undefined1 FUN_148c32934(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140862116(param_2,param_3);
    FUN_144983130(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x50;
    param_3 = param_3 + 0x50;
  }
  return 1;
}



// FUNCTION 148c329a0 FUN_148c329a0 body=59 status=ok
// SIG undefined FUN_148c329a0(void)

undefined8 FUN_148c329a0(longlong *param_1)

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



// FUNCTION 148c329e6 FUN_148c329e6 body=33 status=ok
// SIG undefined FUN_148c329e6(void)

void FUN_148c329e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_144a2da94(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c32a6a FUN_148c32a6a body=63 status=ok
// SIG undefined FUN_148c32a6a(void)

undefined1 FUN_148c32a6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c32cae(param_2,param_3);
    param_3 = param_3 + 0x410;
    param_2 = param_2 + 0x410;
  }
  return 1;
}



// FUNCTION 148c32ad2 FUN_148c32ad2 body=59 status=ok
// SIG undefined FUN_148c32ad2(void)

undefined8 FUN_148c32ad2(longlong *param_1)

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



// FUNCTION 148c32b1e FUN_148c32b1e body=38 status=ok
// SIG undefined FUN_148c32b1e(void)

void FUN_148c32b1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x410) == '\x01') {
    FUN_140dc8b0e(param_2);
    *(undefined1 *)(param_2 + 0x410) = 0;
  }
  return;
}



// FUNCTION 148c32b7e FUN_148c32b7e body=302 status=ok
// SIG undefined FUN_148c32b7e(void)

undefined8 * FUN_148c32b7e(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStack_58 [32];
  undefined8 ***local_38 [3];
  ushort local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b7b80f0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[8] = &PTR_FUN_14b099c30;
  *(undefined2 *)(param_1 + 0xb) = 0;
  local_20 = 8;
  local_38[0] = (undefined8 ****)0x4170000042700000;
  local_18 = 0xb;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0x10) = 8;
  pcVar1 = DAT_14c9a9218;
  if ((DAT_14c9a9218 == (code *)0x0) && (pcVar1 = DAT_14c9a9210, DAT_14c9a9210 == (code *)0x0)) {
    memcpy(param_1 + 0xd,local_38,(longlong)DAT_14c9a9170);
  }
  else {
    (*pcVar1)(param_1 + 0xd,local_38);
  }
  *(undefined1 *)(param_1 + 0x11) = local_18;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x12) = 3;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar2 = (undefined8 ****)local_38[0];
    if (local_20 < 0x19) {
      ppppuVar2 = local_38;
    }
    (*DAT_14c9a85d0)(ppppuVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(local_38[0]);
  }
  FUN_140803772(param_1 + 0x13);
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148c32cae FUN_148c32cae body=113 status=ok
// SIG undefined FUN_148c32cae(void)

longlong FUN_148c32cae(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_148c32d20(param_1 + 0x18,param_2 + 0x18);
  FUN_148c32d7e(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_2 + 0x58);
  FUN_144983130(param_1 + 0x60,param_2 + 0x60);
  FUN_1458df8c6(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 148c32d20 FUN_148c32d20 body=93 status=ok
// SIG undefined FUN_148c32d20(void)

undefined8 * FUN_148c32d20(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140dc8c37(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c32dd2(param_1,iVar1);
      FUN_148c32e45(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c32d7e FUN_148c32d7e body=84 status=ok
// SIG undefined FUN_148c32d7e(void)

longlong * FUN_148c32d7e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c32dd2 FUN_148c32dd2 body=115 status=ok
// SIG undefined FUN_148c32dd2(void)

void FUN_148c32dd2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c32e45 FUN_148c32e45 body=65 status=ok
// SIG undefined FUN_148c32e45(void)

void FUN_148c32e45(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14151bf7c(param_1,param_2);
    FUN_14034cca6(param_1 + 0x18,param_2 + 0x18);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 148c32e88 FUN_148c32e88 body=28 status=ok
// SIG undefined FUN_148c32e88(void)

undefined8 FUN_148c32e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c32f08 FUN_148c32f08 body=143 status=ok
// SIG undefined FUN_148c32f08(void)

undefined1 FUN_148c32f08(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_141289ada(param_2 + lVar10 + 8,param_3 + lVar10 + 8);
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_148c330a8(lVar1 + 0x18,lVar2 + 0x18);
      uVar3 = *(undefined4 *)(lVar2 + 0x34);
      uVar4 = *(undefined4 *)(lVar2 + 0x38);
      uVar5 = *(undefined4 *)(lVar2 + 0x3c);
      uVar6 = *(undefined4 *)(lVar2 + 0x3c);
      uVar7 = *(undefined4 *)(lVar2 + 0x40);
      uVar8 = *(undefined4 *)(lVar2 + 0x44);
      uVar9 = *(undefined4 *)(lVar2 + 0x48);
      *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
      *(undefined4 *)(lVar1 + 0x34) = uVar3;
      *(undefined4 *)(lVar1 + 0x38) = uVar4;
      *(undefined4 *)(lVar1 + 0x3c) = uVar5;
      *(undefined4 *)(lVar1 + 0x3c) = uVar6;
      *(undefined4 *)(lVar1 + 0x40) = uVar7;
      *(undefined4 *)(lVar1 + 0x44) = uVar8;
      *(undefined4 *)(lVar1 + 0x48) = uVar9;
      FUN_1486c2726(param_2 + lVar10 + 0x50,param_3 + lVar10 + 0x50);
      lVar10 = lVar10 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c32fc0 FUN_148c32fc0 body=59 status=ok
// SIG undefined FUN_148c32fc0(void)

undefined8 FUN_148c32fc0(longlong *param_1)

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



// FUNCTION 148c33006 FUN_148c33006 body=32 status=ok
// SIG undefined FUN_148c33006(void)

void FUN_148c33006(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_148c3306c(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c3306c FUN_148c3306c body=59 status=ok
// SIG undefined FUN_148c3306c(void)

void FUN_148c3306c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7b8290;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c330a8 FUN_148c330a8 body=84 status=ok
// SIG undefined FUN_148c330a8(void)

longlong * FUN_148c330a8(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c330fe FUN_148c330fe body=104 status=ok
// SIG undefined FUN_148c330fe(void)

undefined8 FUN_148c330fe(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_148ce07f2(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c33168 FUN_148c33168 body=28 status=ok
// SIG undefined FUN_148c33168(void)

undefined8 FUN_148c33168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c331e0 FUN_148c331e0 body=59 status=ok
// SIG undefined FUN_148c331e0(void)

undefined8 FUN_148c331e0(longlong *param_1)

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



// FUNCTION 148c3322c FUN_148c3322c body=65 status=ok
// SIG undefined FUN_148c3322c(void)

void FUN_148c3322c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10b) == '\x01') {
    *param_2 = &PTR_FUN_14b7bcd40;
    if (param_2[0x101] != 0) {
      FUN_1400020a8();
    }
    FUN_140d79878(param_2);
    *(undefined1 *)(param_2 + 0x10b) = 0;
  }
  return;
}



// FUNCTION 148c332dc FUN_148c332dc body=54 status=ok
// SIG undefined FUN_148c332dc(void)

undefined1 FUN_148c332dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c33422(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148c3333a FUN_148c3333a body=59 status=ok
// SIG undefined FUN_148c3333a(void)

undefined8 FUN_148c3333a(longlong *param_1)

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



// FUNCTION 148c33380 FUN_148c33380 body=34 status=ok
// SIG undefined FUN_148c33380(void)

void FUN_148c33380(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1457ffb5a(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c333e8 FUN_148c333e8 body=57 status=ok
// SIG undefined FUN_148c333e8(void)

void FUN_148c333e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacda8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacda8 = FUN_140002ddd(FUN_1465e4553,uVar1,L"UIDisplayDataDef_MissionDifficulty");
  }
  return;
}



// FUNCTION 148c33422 FUN_148c33422 body=85 status=ok
// SIG undefined FUN_148c33422(void)

longlong FUN_148c33422(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}



// FUNCTION 148c33478 FUN_148c33478 body=28 status=ok
// SIG undefined FUN_148c33478(void)

undefined8 FUN_148c33478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c334a6 FUN_148c334a6 body=58 status=ok
// SIG undefined FUN_148c334a6(void)

void FUN_148c334a6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x130);
  FUN_148781ee6(param_2);
  *param_2 = &PTR_FUN_14b7bd210;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  return;
}



// FUNCTION 148c334e0 FUN_148c334e0 body=42 status=ok
// SIG undefined FUN_148c334e0(void)

void FUN_148c334e0(undefined8 param_1,undefined8 *param_2)

{
  FUN_148781ee6(param_2);
  *param_2 = &PTR_FUN_14b7bd210;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  return;
}



// FUNCTION 148c3355a FUN_148c3355a body=59 status=ok
// SIG undefined FUN_148c3355a(void)

undefined8 FUN_148c3355a(longlong *param_1)

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



// FUNCTION 148c335a6 FUN_148c335a6 body=65 status=ok
// SIG undefined FUN_148c335a6(void)

void FUN_148c335a6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x26) == '\x01') {
    *param_2 = &PTR_FUN_14b7bd210;
    if (param_2[0x24] != 0) {
      FUN_1400020a8();
    }
    FUN_140e75154(param_2);
    *(undefined1 *)(param_2 + 0x26) = 0;
  }
  return;
}



// FUNCTION 148c33636 FUN_148c33636 body=68 status=ok
// SIG undefined FUN_148c33636(void)

undefined8 * FUN_148c33636(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7bd210;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_140e75154(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c336fa FUN_148c336fa body=67 status=ok
// SIG undefined FUN_148c336fa(void)

undefined1 FUN_148c336fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1418c41de(param_2,param_3);
    FUN_140d02432(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 148c33766 FUN_148c33766 body=59 status=ok
// SIG undefined FUN_148c33766(void)

undefined8 FUN_148c33766(longlong *param_1)

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



// FUNCTION 148c3384e FUN_148c3384e body=54 status=ok
// SIG undefined FUN_148c3384e(void)

undefined1 FUN_148c3384e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c339a0(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c338ac FUN_148c338ac body=59 status=ok
// SIG undefined FUN_148c338ac(void)

undefined8 FUN_148c338ac(longlong *param_1)

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



// FUNCTION 148c338f2 FUN_148c338f2 body=33 status=ok
// SIG undefined FUN_148c338f2(void)

void FUN_148c338f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_148c33956(param_2 + 0x38);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c33956 FUN_148c33956 body=73 status=ok
// SIG undefined FUN_148c33956(void)

void FUN_148c33956(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7bd2a0;
  FUN_14104d982(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c339a0 FUN_148c339a0 body=75 status=ok
// SIG undefined FUN_148c339a0(void)

longlong FUN_148c339a0(longlong param_1,longlong param_2)

{
  FUN_1489fc572();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_148bde8da(param_1 + 0x20,param_2 + 0x20);
  FUN_141289ada(param_1 + 0x40,param_2 + 0x40);
  FUN_148c339ec(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 148c339ec FUN_148c339ec body=93 status=ok
// SIG undefined FUN_148c339ec(void)

undefined8 * FUN_148c339ec(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14104d982(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c33a4a(param_1,iVar1);
      FUN_148c33abd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c33a4a FUN_148c33a4a body=115 status=ok
// SIG undefined FUN_148c33a4a(void)

void FUN_148c33a4a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c33abd FUN_148c33abd body=65 status=ok
// SIG undefined FUN_148c33abd(void)

void FUN_148c33abd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14593ec7a(param_1,param_2);
    FUN_14034cca6(param_1 + 0x18,param_2 + 0x18);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 148c33b1e FUN_148c33b1e body=63 status=ok
// SIG undefined FUN_148c33b1e(void)

undefined1 FUN_148c33b1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c33c80(param_2,param_3);
    param_3 = param_3 + 0x2d8;
    param_2 = param_2 + 0x2d8;
  }
  return 1;
}



// FUNCTION 148c33b86 FUN_148c33b86 body=59 status=ok
// SIG undefined FUN_148c33b86(void)

undefined8 FUN_148c33b86(longlong *param_1)

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



// FUNCTION 148c33bd2 FUN_148c33bd2 body=38 status=ok
// SIG undefined FUN_148c33bd2(void)

void FUN_148c33bd2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2d8) == '\x01') {
    FUN_1415c0590(param_2);
    *(undefined1 *)(param_2 + 0x2d8) = 0;
  }
  return;
}



// FUNCTION 148c33c46 FUN_148c33c46 body=57 status=ok
// SIG undefined FUN_148c33c46(void)

void FUN_148c33c46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbace20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbace20 = FUN_140002ddd(FUN_1465e47d3,uVar1,L"OakMissionGlobals");
  }
  return;
}



// FUNCTION 148c33c80 FUN_148c33c80 body=408 status=ok
// SIG undefined FUN_148c33c80(void)

longlong FUN_148c33c80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_148c33e6c(param_1 + 0x20,param_2 + 0x20);
  FUN_140115bdc(param_1 + 0x70,param_2 + 0x70);
  FUN_140115bdc(param_1 + 0x90,param_2 + 0x90);
  FUN_140115bdc(param_1 + 0xb0,param_2 + 0xb0);
  FUN_140115bdc(param_1 + 0xd0,param_2 + 0xd0);
  FUN_140115bdc(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  FUN_14404ede8(param_1 + 0x118,param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  FUN_140115bdc(param_1 + 0x178,param_2 + 0x178);
  FUN_140115bdc(param_1 + 0x198,param_2 + 0x198);
  if ((*(longlong *)(param_1 + 0x1b8) != *(longlong *)(param_2 + 0x1b8)) ||
     (*(int *)(param_1 + 0x1c0) != *(int *)(param_2 + 0x1c0))) {
    *(longlong *)(param_1 + 0x1b8) = *(longlong *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  FUN_148c33e18(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_140d02432(param_1 + 0x1e8,param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
  FUN_148c3403a(param_1 + 0x240,param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  FUN_1447715ec(param_1 + 0x2a0,param_2 + 0x2a0);
  uVar1 = *(undefined8 *)(param_2 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2d0) = uVar1;
  return param_1;
}



// FUNCTION 148c33e18 FUN_148c33e18 body=84 status=ok
// SIG undefined FUN_148c33e18(void)

longlong * FUN_148c33e18(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c33e6c FUN_148c33e6c body=122 status=ok
// SIG undefined FUN_148c33e6c(void)

longlong FUN_148c33e6c(longlong param_1,longlong param_2)

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
    FUN_148c33ee6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c33ee6 FUN_148c33ee6 body=211 status=ok
// SIG undefined FUN_148c33ee6(void)

undefined8 * FUN_148c33ee6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145fa0f22(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406cd6a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_148c33fba(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(puVar4 + 0xe);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x10;
        puVar6 = puVar6 + 0x10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c33fba FUN_148c33fba body=128 status=ok
// SIG undefined FUN_148c33fba(void)

undefined8 * FUN_148c33fba(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  _Src = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148c3403a FUN_148c3403a body=122 status=ok
// SIG undefined FUN_148c3403a(void)

longlong FUN_148c3403a(longlong param_1,longlong param_2)

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
    FUN_148c340b4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c340b4 FUN_148c340b4 body=337 status=ok
// SIG undefined FUN_148c340b4(void)

longlong * FUN_148c340b4(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_1415dcd2c(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_140275bcc(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0)
        {
          *(undefined4 *)(lVar4 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
          *(undefined4 *)(lVar4 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          puVar1 = (undefined8 *)(lVar4 + lVar6);
          *puVar1 = *(undefined8 *)(lVar6 + lVar3);
          FUN_14593ec7a(puVar1 + 1);
          *(undefined1 *)(puVar1 + 4) = *(undefined1 *)((undefined8 *)(lVar6 + lVar3) + 4);
          FUN_148c34206(lVar4 + lVar6 + 0x28,lVar6 + lVar3 + 0x28);
          FUN_148c3424e(lVar4 + lVar6 + 0x40,lVar6 + lVar3 + 0x40);
          *(undefined8 *)(lVar4 + lVar6 + 0x68) = *(undefined8 *)(lVar6 + lVar3 + 0x68);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x70;
      } while ((ulonglong)uVar2 * 0x70 - lVar6 != 0);
    }
  }
  return param_1;
}



// FUNCTION 148c34206 FUN_148c34206 body=71 status=ok
// SIG undefined FUN_148c34206(void)

undefined8 * FUN_148c34206(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c3424e FUN_148c3424e body=123 status=ok
// SIG undefined FUN_148c3424e(void)

undefined8 * FUN_148c3424e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_142b15db4(param_1 + 1,param_2 + 8);
  *param_1 = &PTR_FUN_14b7bd2a0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_148c33a4a(param_1 + 3,iVar1,0);
    FUN_148c33abd(param_1[3],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148c342ca FUN_148c342ca body=32 status=ok
// SIG undefined FUN_148c342ca(void)

void FUN_148c342ca(undefined8 param_1,undefined8 *param_2)

{
  FUN_1405e5ba4(param_2);
  *param_2 = &PTR_FUN_14b7b8cc0;
  return;
}



// FUNCTION 148c3432c FUN_148c3432c body=59 status=ok
// SIG undefined FUN_148c3432c(void)

undefined8 FUN_148c3432c(longlong *param_1)

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



// FUNCTION 148c34378 FUN_148c34378 body=38 status=ok
// SIG undefined FUN_148c34378(void)

void FUN_148c34378(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x470) == '\x01') {
    FUN_1403d96c2(param_2);
    *(undefined1 *)(param_2 + 0x470) = 0;
  }
  return;
}



// FUNCTION 148c344b2 FUN_148c344b2 body=59 status=ok
// SIG undefined FUN_148c344b2(void)

undefined8 FUN_148c344b2(longlong *param_1)

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



// FUNCTION 148c34552 FUN_148c34552 body=55 status=ok
// SIG undefined FUN_148c34552(void)

void FUN_148c34552(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbace50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbace50 = FUN_140002ddd(FUN_1465e48c9,uVar1,L"OakMissionReplayParams");
  }
  return;
}



// FUNCTION 148c3463c FUN_148c3463c body=63 status=ok
// SIG undefined FUN_148c3463c(void)

undefined1 FUN_148c3463c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c3475c(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148c346a4 FUN_148c346a4 body=59 status=ok
// SIG undefined FUN_148c346a4(void)

undefined8 FUN_148c346a4(longlong *param_1)

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



// FUNCTION 148c346f0 FUN_148c346f0 body=38 status=ok
// SIG undefined FUN_148c346f0(void)

void FUN_148c346f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_140d50f72(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148c3475c FUN_148c3475c body=99 status=ok
// SIG undefined FUN_148c3475c(void)

longlong FUN_148c3475c(longlong param_1,longlong param_2)

{
  FUN_14878a512();
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  if ((*(longlong *)(param_1 + 0xd8) != *(longlong *)(param_2 + 0xd8)) ||
     (*(int *)(param_1 + 0xe0) != *(int *)(param_2 + 0xe0))) {
    *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return param_1;
}



// FUNCTION 148c34826 FUN_148c34826 body=59 status=ok
// SIG undefined FUN_148c34826(void)

undefined8 FUN_148c34826(longlong *param_1)

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



// FUNCTION 148c348ea FUN_148c348ea body=99 status=ok
// SIG undefined FUN_148c348ea(void)

undefined8 FUN_148c348ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_144a7bb84();
      FUN_144a82394(param_2 + lVar2 + 0x28,param_3 + lVar2 + 0x28);
      lVar2 = lVar2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c34976 FUN_148c34976 body=59 status=ok
// SIG undefined FUN_148c34976(void)

undefined8 FUN_148c34976(longlong *param_1)

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



// FUNCTION 148c349bc FUN_148c349bc body=51 status=ok
// SIG undefined FUN_148c349bc(void)

void FUN_148c349bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if ((*(longlong *)(param_2 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x50));
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c34aac FUN_148c34aac body=59 status=ok
// SIG undefined FUN_148c34aac(void)

undefined8 FUN_148c34aac(longlong *param_1)

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



// FUNCTION 148c34b60 FUN_148c34b60 body=63 status=ok
// SIG undefined FUN_148c34b60(void)

undefined1 FUN_148c34b60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145c8b1ae(param_2,param_3);
    param_3 = param_3 + 0x1f8;
    param_2 = param_2 + 0x1f8;
  }
  return 1;
}



// FUNCTION 148c34bc8 FUN_148c34bc8 body=59 status=ok
// SIG undefined FUN_148c34bc8(void)

undefined8 FUN_148c34bc8(longlong *param_1)

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



// FUNCTION 148c34c14 FUN_148c34c14 body=38 status=ok
// SIG undefined FUN_148c34c14(void)

void FUN_148c34c14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f8) == '\x01') {
    FUN_140e20a16(param_2);
    *(undefined1 *)(param_2 + 0x1f8) = 0;
  }
  return;
}



// FUNCTION 148c34c7e FUN_148c34c7e body=46 status=ok
// SIG undefined FUN_148c34c7e(void)

void FUN_148c34c7e(undefined8 param_1,undefined8 *param_2)

{
  FUN_143c60060(param_2);
  *param_2 = &PTR_FUN_14b7b9820;
  FUN_1458e9854(param_2 + 0x1d);
  return;
}



// FUNCTION 148c34cc2 FUN_148c34cc2 body=85 status=ok
// SIG undefined FUN_148c34cc2(void)

undefined1 FUN_148c34cc2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486dd928(param_2,param_3);
    FUN_145c8b1ae(param_2 + 0xe8,param_3 + 0xe8);
    param_2 = param_2 + 0x2e0;
    param_3 = param_3 + 0x2e0;
  }
  return 1;
}



// FUNCTION 148c34d40 FUN_148c34d40 body=59 status=ok
// SIG undefined FUN_148c34d40(void)

undefined8 FUN_148c34d40(longlong *param_1)

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



// FUNCTION 148c34d8c FUN_148c34d8c body=60 status=ok
// SIG undefined FUN_148c34d8c(void)

void FUN_148c34d8c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5c) == '\x01') {
    *param_2 = &PTR_FUN_14b7b9820;
    FUN_140e20a16(param_2 + 0x1d);
    FUN_141855702(param_2);
    *(undefined1 *)(param_2 + 0x5c) = 0;
  }
  return;
}



// FUNCTION 148c34e70 FUN_148c34e70 body=59 status=ok
// SIG undefined FUN_148c34e70(void)

undefined8 FUN_148c34e70(longlong *param_1)

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



// FUNCTION 148c34eb6 FUN_148c34eb6 body=63 status=ok
// SIG undefined FUN_148c34eb6(void)

void FUN_148c34eb6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14b7b99b0;
    if ((param_2[6] != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(param_2[6] + 0x50));
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 148c34f38 FUN_148c34f38 body=55 status=ok
// SIG undefined FUN_148c34f38(void)

void FUN_148c34f38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacfd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacfd0 = FUN_140002ddd(FUN_1465e4dbd,uVar1,L"GbxMusicAction_OakGameplayMusic");
  }
  return;
}



// FUNCTION 148c34ffe FUN_148c34ffe body=59 status=ok
// SIG undefined FUN_148c34ffe(void)

undefined8 FUN_148c34ffe(longlong *param_1)

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



// FUNCTION 148c3509e FUN_148c3509e body=31 status=ok
// SIG undefined FUN_148c3509e(void)

undefined8 FUN_148c3509e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c35110 FUN_148c35110 body=78 status=ok
// SIG undefined FUN_148c35110(void)

undefined8 FUN_148c35110(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c35186 FUN_148c35186 body=59 status=ok
// SIG undefined FUN_148c35186(void)

undefined8 FUN_148c35186(longlong *param_1)

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



// FUNCTION 148c351cc FUN_148c351cc body=48 status=ok
// SIG undefined FUN_148c351cc(void)

void FUN_148c351cc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b7b9cf0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148c3524a FUN_148c3524a body=55 status=ok
// SIG undefined FUN_148c3524a(void)

void FUN_148c3524a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad000 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad000 = FUN_140002ddd(FUN_1465e4ee9,uVar1,L"GbxMusicCondition_BossRelevanceVolume");
  }
  return;
}



// FUNCTION 148c352dc FUN_148c352dc body=59 status=ok
// SIG undefined FUN_148c352dc(void)

undefined8 FUN_148c352dc(longlong *param_1)

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



// FUNCTION 148c3537c FUN_148c3537c body=55 status=ok
// SIG undefined FUN_148c3537c(void)

void FUN_148c3537c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad018 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad018 = FUN_140002ddd(FUN_1465e4f7f,uVar1,L"GbxMusicCondition_IsCharacterSelect");
  }
  return;
}



// FUNCTION 148c353e8 FUN_148c353e8 body=75 status=ok
// SIG undefined FUN_148c353e8(void)

undefined8 FUN_148c353e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1405b70a4();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c3545c FUN_148c3545c body=59 status=ok
// SIG undefined FUN_148c3545c(void)

undefined8 FUN_148c3545c(longlong *param_1)

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



// FUNCTION 148c354a2 FUN_148c354a2 body=38 status=ok
// SIG undefined FUN_148c354a2(void)

void FUN_148c354a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148c35552 FUN_148c35552 body=131 status=ok
// SIG undefined FUN_148c35552(void)

undefined8 FUN_148c35552(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      FUN_148c35702(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_1406fa324(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      *(undefined8 *)(param_2 + lVar1 + 0x38) = *(undefined8 *)(param_3 + lVar1 + 0x38);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c355fe FUN_148c355fe body=59 status=ok
// SIG undefined FUN_148c355fe(void)

undefined8 FUN_148c355fe(longlong *param_1)

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



// FUNCTION 148c35644 FUN_148c35644 body=32 status=ok
// SIG undefined FUN_148c35644(void)

void FUN_148c35644(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148c356aa(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148c356aa FUN_148c356aa body=87 status=ok
// SIG undefined FUN_148c356aa(void)

void FUN_148c356aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7ba180;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_141107747(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c35702 FUN_148c35702 body=93 status=ok
// SIG undefined FUN_148c35702(void)

undefined8 * FUN_148c35702(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141107747(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c35760(param_1,iVar1);
      FUN_148c357d3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c35760 FUN_148c35760 body=115 status=ok
// SIG undefined FUN_148c35760(void)

void FUN_148c35760(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c357d3 FUN_148c357d3 body=146 status=ok
// SIG undefined FUN_148c357d3(void)

void FUN_148c357d3(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_1405b70fe(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 * 0x18);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c35866 FUN_148c35866 body=28 status=ok
// SIG undefined FUN_148c35866(void)

undefined8 FUN_148c35866(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c358e0 FUN_148c358e0 body=155 status=ok
// SIG undefined FUN_148c358e0(void)

void FUN_148c358e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_148ce0aca(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c35982 FUN_148c35982 body=155 status=ok
// SIG undefined FUN_148c35982(void)

void FUN_148c35982(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_148ce0b20(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c35a1e FUN_148c35a1e body=230 status=ok
// SIG undefined FUN_148c35a1e(void)

void FUN_148c35a1e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
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
  FUN_148ce0a78(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c35b56 FUN_148c35b56 body=37 status=ok
// SIG undefined FUN_148c35b56(void)

void FUN_148c35b56(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_141660e76();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148c35b7c FUN_148c35b7c body=132 status=ok
// SIG undefined FUN_148c35b7c(void)

void FUN_148c35b7c(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  uVar1 = FUN_14477b072(param_1,DAT_14cbad780);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c35c02 FUN_148c35c02 body=168 status=ok
// SIG undefined FUN_148c35c02(void)

void FUN_148c35c02(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1370))(param_1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c35cc6 FUN_148c35cc6 body=92 status=ok
// SIG undefined FUN_148c35cc6(void)

void FUN_148c35cc6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad7a0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c35d24 FUN_148c35d24 body=160 status=ok
// SIG undefined FUN_148c35d24(void)

void FUN_148c35d24(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  (**(code **)(*param_1 + 0x1118))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c35dc6 FUN_148c35dc6 body=92 status=ok
// SIG undefined FUN_148c35dc6(void)

void FUN_148c35dc6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad7b0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c35e24 FUN_148c35e24 body=160 status=ok
// SIG undefined FUN_148c35e24(void)

void FUN_148c35e24(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  (**(code **)(*param_1 + 0x1120))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c35ec6 FUN_148c35ec6 body=132 status=ok
// SIG undefined FUN_148c35ec6(void)

void FUN_148c35ec6(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  uVar1 = FUN_14477b072(param_1,DAT_14cbad7c0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c35f4c FUN_148c35f4c body=168 status=ok
// SIG undefined FUN_148c35f4c(void)

void FUN_148c35f4c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1378))(param_1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c35ff6 FUN_148c35ff6 body=91 status=ok
// SIG undefined FUN_148c35ff6(void)

void FUN_148c35ff6(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad7e0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c36056 FUN_148c36056 body=162 status=ok
// SIG undefined FUN_148c36056(void)

void FUN_148c36056(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x1270))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c360fa FUN_148c360fa body=96 status=ok
// SIG undefined FUN_148c360fa(void)

void FUN_148c360fa(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad7f0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3615c FUN_148c3615c body=238 status=ok
// SIG undefined FUN_148c3615c(void)

void FUN_148c3615c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1278))(param_1,local_20,local_21);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3624c FUN_148c3624c body=111 status=ok
// SIG undefined FUN_148c3624c(void)

void FUN_148c3624c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_4;
  uStack_2c = param_4[1];
  uStack_28 = param_4[2];
  uStack_24 = param_4[3];
  local_20 = *(undefined8 *)(param_4 + 4);
  local_40[0] = param_2;
  local_38 = param_3;
  uVar1 = FUN_14477b072(local_30,DAT_14cbad800);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c362bc FUN_148c362bc body=340 status=ok
// SIG undefined FUN_148c362bc(void)

void FUN_148c362bc(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  (**(code **)(*param_1 + 0x1198))(param_1,local_1c,local_28);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c36412 FUN_148c36412 body=47 status=ok
// SIG undefined FUN_148c36412(void)

void FUN_148c36412(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbad810);
                    /* WARNING: Could not recover jumptable at 0x000148c3643e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148c3645c FUN_148c3645c body=47 status=ok
// SIG undefined FUN_148c3645c(void)

void FUN_148c3645c(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbad850);
                    /* WARNING: Could not recover jumptable at 0x000148c36488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148c364a6 FUN_148c364a6 body=91 status=ok
// SIG undefined FUN_148c364a6(void)

void FUN_148c364a6(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad860);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c36502 FUN_148c36502 body=155 status=ok
// SIG undefined FUN_148c36502(void)

void FUN_148c36502(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1148))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3659e FUN_148c3659e body=47 status=ok
// SIG undefined FUN_148c3659e(void)

void FUN_148c3659e(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbad880);
                    /* WARNING: Could not recover jumptable at 0x000148c365ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148c36606 FUN_148c36606 body=137 status=ok
// SIG undefined FUN_148c36606(void)

void FUN_148c36606(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_5;
  local_24 = param_6;
  local_1c = param_7;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad8a0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c36696 FUN_148c36696 body=594 status=ok
// SIG undefined FUN_148c36696(void)

void FUN_148c36696(longlong *param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  int local_44;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
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
  local_60 = local_40;
  local_68 = local_31;
  (**(code **)(*param_1 + 0x12e8))(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c368ea FUN_148c368ea body=91 status=ok
// SIG undefined FUN_148c368ea(void)

void FUN_148c368ea(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad8c0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3694a FUN_148c3694a body=162 status=ok
// SIG undefined FUN_148c3694a(void)

void FUN_148c3694a(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x14a8))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c369ee FUN_148c369ee body=95 status=ok
// SIG undefined FUN_148c369ee(void)

void FUN_148c369ee(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad8e0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c36a4e FUN_148c36a4e body=160 status=ok
// SIG undefined FUN_148c36a4e(void)

void FUN_148c36a4e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  (**(code **)(*param_1 + 0x13a0))(param_1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c36af0 FUN_148c36af0 body=99 status=ok
// SIG undefined FUN_148c36af0(void)

void FUN_148c36af0(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad900);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c36b5a FUN_148c36b5a body=245 status=ok
// SIG undefined FUN_148c36b5a(void)

void FUN_148c36b5a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1398))(param_1,&local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c36c50 FUN_148c36c50 body=97 status=ok
// SIG undefined FUN_148c36c50(void)

void FUN_148c36c50(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad910);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c36cb2 FUN_148c36cb2 body=242 status=ok
// SIG undefined FUN_148c36cb2(void)

void FUN_148c36cb2(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  (**(code **)(*param_1 + 0x1280))(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c36da6 FUN_148c36da6 body=96 status=ok
// SIG undefined FUN_148c36da6(void)

void FUN_148c36da6(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad920);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c36e0e FUN_148c36e0e body=245 status=ok
// SIG undefined FUN_148c36e0e(void)

void FUN_148c36e0e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1258))(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c36f1a FUN_148c36f1a body=257 status=ok
// SIG undefined FUN_148c36f1a(void)

void FUN_148c36f1a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148db8dce(param_1,puVar2,local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3701c FUN_148c3701c body=38 status=ok
// SIG undefined FUN_148c3701c(void)

void FUN_148c3701c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1402a1246();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148c37076 FUN_148c37076 body=96 status=ok
// SIG undefined FUN_148c37076(void)

void FUN_148c37076(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad968);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c370de FUN_148c370de body=245 status=ok
// SIG undefined FUN_148c370de(void)

void FUN_148c370de(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1130))(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c371d4 FUN_148c371d4 body=96 status=ok
// SIG undefined FUN_148c371d4(void)

void FUN_148c371d4(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad978);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3723c FUN_148c3723c body=245 status=ok
// SIG undefined FUN_148c3723c(void)

void FUN_148c3723c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1138))(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c37348 FUN_148c37348 body=151 status=ok
// SIG undefined FUN_148c37348(void)

void FUN_148c37348(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145b251d4(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c373e0 FUN_148c373e0 body=151 status=ok
// SIG undefined FUN_148c373e0(void)

void FUN_148c373e0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145a2a4fe(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c374a4 FUN_148c374a4 body=238 status=ok
// SIG undefined FUN_148c374a4(void)

void FUN_148c374a4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  FUN_14621ebb6(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c37594 FUN_148c37594 body=156 status=ok
// SIG undefined FUN_148c37594(void)

void FUN_148c37594(longlong *param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0x6000;
  local_28 = 0;
  if (*param_2 != 0 || (int)param_2[1] != 0x6000) {
    local_38 = *param_2;
    local_30 = (int)param_2[1];
  }
  local_20 = param_3;
  local_1f = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbada08);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3763e FUN_148c3763e body=352 status=ok
// SIG undefined FUN_148c3763e(void)

void FUN_148c3763e(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  iVar1 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1488))(param_1,&local_38,iVar1 != 0,local_40 != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c377a0 FUN_148c377a0 body=132 status=ok
// SIG undefined FUN_148c377a0(void)

void FUN_148c377a0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  uVar1 = FUN_14477b072(param_1,DAT_14cbada18);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c37826 FUN_148c37826 body=168 status=ok
// SIG undefined FUN_148c37826(void)

void FUN_148c37826(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1368))(param_1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c378d0 FUN_148c378d0 body=91 status=ok
// SIG undefined FUN_148c378d0(void)

void FUN_148c378d0(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbada28);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3792c FUN_148c3792c body=155 status=ok
// SIG undefined FUN_148c3792c(void)

void FUN_148c3792c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1110))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c379c8 FUN_148c379c8 body=124 status=ok
// SIG undefined FUN_148c379c8(void)

void FUN_148c379c8(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                  undefined2 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined2 local_1e;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined4 *)(param_2 + 1);
  local_30 = *param_2;
  local_1e = param_5;
  local_24 = param_3;
  local_20 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbada38);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c37a4c FUN_148c37a4c body=520 status=ok
// SIG undefined FUN_148c37a4c(void)

void FUN_148c37a4c(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined2 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_36;
  int local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = 0;
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  local_36 = 0;
  FUN_14093f0c0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_36);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_36);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_2c;
  local_40 = local_24;
  local_68 = local_36;
  cVar2 = (**(code **)(*param_1 + 0x13c0))(param_1,&local_48,local_30,iVar1 != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerActivateMission_Validate");
  }
  else {
    local_58 = local_2c;
    local_50 = local_24;
    local_68 = local_36;
    (**(code **)(*param_1 + 0x13c8))(param_1,&local_58,local_30,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c37c56 FUN_148c37c56 body=101 status=ok
// SIG undefined FUN_148c37c56(void)

void FUN_148c37c56(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[0] = *param_2;
  local_28 = param_3;
  local_20 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbada48);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c37cbc FUN_148c37cbc body=334 status=ok
// SIG undefined FUN_148c37cbc(void)

void FUN_148c37cbc(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [43];
  undefined1 local_2d;
  undefined4 local_2c;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_2d = local_19;
  (**(code **)(*param_1 + 0x1268))(param_1,&local_2d,local_28,local_2c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c37e0c FUN_148c37e0c body=101 status=ok
// SIG undefined FUN_148c37e0c(void)

void FUN_148c37e0c(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[0] = *param_2;
  local_28 = param_3;
  local_20 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbada58);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c37e78 FUN_148c37e78 body=338 status=ok
// SIG undefined FUN_148c37e78(void)

void FUN_148c37e78(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [43];
  undefined1 local_2d;
  int local_2c;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_28 = 0;
  FUN_1446f4b16();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_2d = local_19;
  (**(code **)(*param_1 + 0x12a0))(param_1,&local_2d,local_28,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c37fd8 FUN_148c37fd8 body=108 status=ok
// SIG undefined FUN_148c37fd8(void)

void FUN_148c37fd8(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  local_20 = *(undefined8 *)(param_3 + 4);
  local_38 = param_2;
  uVar1 = FUN_14477b072(local_30,DAT_14cbada78);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c38046 FUN_148c38046 body=329 status=ok
// SIG undefined FUN_148c38046(void)

void FUN_148c38046(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  cVar1 = (**(code **)(*param_1 + 0x11a0))(param_1,local_20);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerCancelPing_Validate");
  }
  else {
    local_68 = local_28;
    local_78 = local_38;
    uStack_74 = uStack_34;
    uStack_70 = uStack_30;
    uStack_6c = uStack_2c;
    (**(code **)(*param_1 + 0x11a8))(param_1,local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c38190 FUN_148c38190 body=95 status=ok
// SIG undefined FUN_148c38190(void)

void FUN_148c38190(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_1c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbada98);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c381f6 FUN_148c381f6 body=294 status=ok
// SIG undefined FUN_148c381f6(void)

void FUN_148c381f6(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  int local_28;
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
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  iVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0x1428))(param_1,local_24,local_28 != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerCycleTrackedMission_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1430))(param_1,local_24,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3831e FUN_148c3831e body=198 status=ok
// SIG undefined FUN_148c3831e(void)

void FUN_148c3831e(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [3];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_60 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_58 = FUN_14477b664(uVar1);
  local_50 = param_2[2];
  FUN_144a787a6(local_48,param_2 + 3);
  local_48[2] = param_2[5];
  local_30 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadab8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_60);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c383e6 FUN_148c383e6 body=275 status=ok
// SIG undefined FUN_148c383e6(void)

void FUN_148c383e6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  lStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 5000))(param_1,&local_48,local_4c);
  if (lStack_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c384fa FUN_148c384fa body=284 status=ok
// SIG undefined FUN_148c384fa(void)

void FUN_148c384fa(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined1 local_70 [40];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1447a97f4(local_70,&local_48);
  cVar1 = (**(code **)(*param_1 + 0x1338))(param_1,local_70);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerInterruptTravelCountdown_Validate");
  }
  else {
    FUN_1447a97f4(local_98,&local_48);
    (**(code **)(*param_1 + 0x1340))(param_1,local_98);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c38618 FUN_148c38618 body=92 status=ok
// SIG undefined FUN_148c38618(void)

void FUN_148c38618(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadae8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c38676 FUN_148c38676 body=160 status=ok
// SIG undefined FUN_148c38676(void)

void FUN_148c38676(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x1298))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


