// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149201954 FUN_149201954 body=112 status=ok
// SIG undefined FUN_149201954(void)

ulonglong FUN_149201954(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x140) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14920198e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x140,0x10);
      param_2 = param_2 / 0x140;
    }
  }
LAB_14920198e:
  return param_2 & 0xffffffff;
}



// FUNCTION 1492019c4 FUN_1492019c4 body=77 status=ok
// SIG undefined FUN_1492019c4(void)

longlong FUN_1492019c4(longlong param_1,longlong param_2)

{
  FUN_146910096(param_1 + 8,param_2 + 8);
  FUN_144756208(param_1 + 0x18,param_2 + 0x18);
  FUN_140816cc4(param_1 + 0x28,param_2 + 0x28);
  FUN_149201a12(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 149201a12 FUN_149201a12 body=95 status=ok
// SIG undefined FUN_149201a12(void)

undefined8 * FUN_149201a12(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_149201688(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149201a72(param_1,iVar1);
      FUN_149201ae5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149201a72 FUN_149201a72 body=115 status=ok
// SIG undefined FUN_149201a72(void)

void FUN_149201a72(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x140,0x10);
    iVar2 = (int)(uVar1 / 0x140);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x140,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149201ae5 FUN_149201ae5 body=159 status=ok
// SIG undefined FUN_149201ae5(void)

void FUN_149201ae5(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x128);
    do {
      memcpy(puVar2 + -0x25,param_2,0x128);
      *puVar2 = 0;
      iVar1 = *(int *)((longlong)param_2 + 0x130);
      _Src = *(void **)((longlong)param_2 + 0x128);
      *(int *)(puVar2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_1492007ae(puVar2,iVar1,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 0x28);
      }
      param_2 = (void *)((longlong)param_2 + 0x140);
      puVar2 = puVar2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 149201b86 FUN_149201b86 body=111 status=ok
// SIG undefined FUN_149201b86(void)

void FUN_149201b86(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *param_2 = &PTR_FUN_14bb89190;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 149201bf6 FUN_149201bf6 body=111 status=ok
// SIG undefined FUN_149201bf6(void)

void FUN_149201bf6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *param_2 = &PTR_FUN_14bb89190;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 149201c8a FUN_149201c8a body=135 status=ok
// SIG undefined FUN_149201c8a(void)

undefined8 FUN_149201c8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
    do {
      *(undefined4 *)(param_2 + -0x140) = *(undefined4 *)(param_3 + -0x140);
      *(undefined8 *)(param_2 + -0x148) = *(undefined8 *)(param_3 + -0x148);
      memcpy((void *)(param_2 + -0x138),(void *)(param_3 + -0x138),0x138);
      FUN_14054c6c4(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0x170;
      param_2 = param_2 + 0x170;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149201d3a FUN_149201d3a body=59 status=ok
// SIG undefined FUN_149201d3a(void)

undefined8 FUN_149201d3a(longlong *param_1)

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



// FUNCTION 149201d86 FUN_149201d86 body=57 status=ok
// SIG undefined FUN_149201d86(void)

void FUN_149201d86(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2e) == '\x01') {
    *param_2 = &PTR_FUN_14bb89190;
    if (param_2[0x2a] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x2e) = 0;
  }
  return;
}



// FUNCTION 149201e20 FUN_149201e20 body=44 status=ok
// SIG undefined FUN_149201e20(void)

void FUN_149201e20(undefined8 param_1,longlong *param_2)

{
  FUN_149201f5c(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149201e62 FUN_149201e62 body=54 status=ok
// SIG undefined FUN_149201e62(void)

undefined1 FUN_149201e62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492036b2(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 149201ec0 FUN_149201ec0 body=59 status=ok
// SIG undefined FUN_149201ec0(void)

undefined8 FUN_149201ec0(longlong *param_1)

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



// FUNCTION 149201f5c FUN_149201f5c body=62 status=ok
// SIG undefined FUN_149201f5c(void)

void FUN_149201f5c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14bb89190;
    if (param_1[0x2a] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x2e;
  }
  return;
}



// FUNCTION 149201f9c FUN_149201f9c body=50 status=ok
// SIG undefined FUN_149201f9c(void)

void FUN_149201f9c(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_149201f5c(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 149201fce FUN_149201fce body=60 status=ok
// SIG undefined FUN_149201fce(void)

undefined8 * FUN_149201fce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb89190;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14920200e FUN_14920200e body=38 status=ok
// SIG undefined FUN_14920200e(void)

undefined1 * FUN_14920200e(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  *param_2 = uVar1;
  *(longlong *)(param_2 + 4) = param_1[3];
  return param_2;
}



// FUNCTION 149202034 FUN_149202034 body=29 status=ok
// SIG undefined FUN_149202034(void)

undefined8 FUN_149202034(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14920206e FUN_14920206e body=47 status=ok
// SIG undefined FUN_14920206e(void)

void FUN_14920206e(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492020b4 FUN_1492020b4 body=67 status=ok
// SIG undefined FUN_1492020b4(void)

undefined1 FUN_1492020b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 149202120 FUN_149202120 body=70 status=ok
// SIG undefined FUN_149202120(void)

void FUN_149202120(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1491d63fe(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492021ca FUN_1492021ca body=51 status=ok
// SIG undefined FUN_1492021ca(void)

void FUN_1492021ca(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 149202266 FUN_149202266 body=59 status=ok
// SIG undefined FUN_149202266(void)

undefined8 FUN_149202266(longlong *param_1)

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



// FUNCTION 149202306 FUN_149202306 body=29 status=ok
// SIG undefined FUN_149202306(void)

undefined8 FUN_149202306(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149202324 FUN_149202324 body=55 status=ok
// SIG undefined FUN_149202324(void)

void FUN_149202324(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07660 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07660 = FUN_140002ddd(FUN_1466cd1d9,uVar1,L"RigConnectionRule");
  }
  return;
}



// FUNCTION 1492023a4 FUN_1492023a4 body=62 status=ok
// SIG undefined FUN_1492023a4(void)

undefined1 FUN_1492023a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1491bf11c(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14920240a FUN_14920240a body=59 status=ok
// SIG undefined FUN_14920240a(void)

undefined8 FUN_14920240a(longlong *param_1)

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



// FUNCTION 1492024a6 FUN_1492024a6 body=69 status=ok
// SIG undefined FUN_1492024a6(void)

undefined8 * FUN_1492024a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb89600;
  FUN_149195d42(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492024ec FUN_1492024ec body=55 status=ok
// SIG undefined FUN_1492024ec(void)

void FUN_1492024ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07678 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07678 = FUN_140002ddd(FUN_1466cd271,uVar1,L"RigAndConnectionRule");
  }
  return;
}



// FUNCTION 149202524 FUN_149202524 body=62 status=ok
// SIG undefined FUN_149202524(void)

void FUN_149202524(undefined8 *param_1)

{
  if (*(char *)(param_1 + 3) == '\x01') {
    *param_1 = &PTR_FUN_14bb89600;
    FUN_149195d42(param_1[1],*(undefined4 *)(param_1 + 2));
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 1492025aa FUN_1492025aa body=62 status=ok
// SIG undefined FUN_1492025aa(void)

undefined1 FUN_1492025aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1491bf11c(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149202610 FUN_149202610 body=59 status=ok
// SIG undefined FUN_149202610(void)

undefined8 FUN_149202610(longlong *param_1)

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



// FUNCTION 1492026ac FUN_1492026ac body=69 status=ok
// SIG undefined FUN_1492026ac(void)

undefined8 * FUN_1492026ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb89780;
  FUN_149195d42(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492026f2 FUN_1492026f2 body=55 status=ok
// SIG undefined FUN_1492026f2(void)

void FUN_1492026f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07690 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07690 = FUN_140002ddd(FUN_1466cd307,uVar1,L"RigOrConnectionRule");
  }
  return;
}



// FUNCTION 14920272a FUN_14920272a body=62 status=ok
// SIG undefined FUN_14920272a(void)

void FUN_14920272a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 3) == '\x01') {
    *param_1 = &PTR_FUN_14bb89780;
    FUN_149195d42(param_1[1],*(undefined4 *)(param_1 + 2));
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 1492027f2 FUN_1492027f2 body=59 status=ok
// SIG undefined FUN_1492027f2(void)

undefined8 FUN_1492027f2(longlong *param_1)

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



// FUNCTION 149202892 FUN_149202892 body=29 status=ok
// SIG undefined FUN_149202892(void)

undefined8 FUN_149202892(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492028b0 FUN_1492028b0 body=55 status=ok
// SIG undefined FUN_1492028b0(void)

void FUN_1492028b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc076a8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc076a8 = FUN_140002ddd(FUN_1466cd39d,uVar1,L"RigTypeConnectionRule");
  }
  return;
}



// FUNCTION 14920297a FUN_14920297a body=59 status=ok
// SIG undefined FUN_14920297a(void)

undefined8 FUN_14920297a(longlong *param_1)

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



// FUNCTION 149202a1a FUN_149202a1a body=29 status=ok
// SIG undefined FUN_149202a1a(void)

undefined8 FUN_149202a1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149202a38 FUN_149202a38 body=55 status=ok
// SIG undefined FUN_149202a38(void)

void FUN_149202a38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc076c0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc076c0 = FUN_140002ddd(FUN_1466cd433,uVar1,L"RigTagConnectionRule");
  }
  return;
}



// FUNCTION 149202ad8 FUN_149202ad8 body=59 status=ok
// SIG undefined FUN_149202ad8(void)

undefined8 FUN_149202ad8(longlong *param_1)

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



// FUNCTION 149202b78 FUN_149202b78 body=29 status=ok
// SIG undefined FUN_149202b78(void)

undefined8 FUN_149202b78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149202b96 FUN_149202b96 body=55 status=ok
// SIG undefined FUN_149202b96(void)

void FUN_149202b96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc076d8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc076d8 = FUN_140002ddd(FUN_1466cd4c9,uVar1,L"RigChildOfPrimaryConnectionRule");
  }
  return;
}



// FUNCTION 149202c02 FUN_149202c02 body=63 status=ok
// SIG undefined FUN_149202c02(void)

undefined1 FUN_149202c02(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149202d3e(param_2,param_3);
    param_3 = param_3 + 0x360;
    param_2 = param_2 + 0x360;
  }
  return 1;
}



// FUNCTION 149202c6a FUN_149202c6a body=59 status=ok
// SIG undefined FUN_149202c6a(void)

undefined8 FUN_149202c6a(longlong *param_1)

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



// FUNCTION 149202cb6 FUN_149202cb6 body=57 status=ok
// SIG undefined FUN_149202cb6(void)

void FUN_149202cb6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x6c) == '\x01') {
    *param_2 = &PTR_FUN_14bb89f40;
    if (param_2[0x68] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x6c) = 0;
  }
  return;
}



// FUNCTION 149202d3e FUN_149202d3e body=128 status=ok
// SIG undefined FUN_149202d3e(void)

longlong FUN_149202d3e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  memcpy((void *)(param_1 + 0x18),(void *)(param_2 + 0x18),0x328);
  FUN_14054c6c4(param_1 + 0x340,param_2 + 0x340);
  *(undefined1 *)(param_1 + 0x350) = *(undefined1 *)(param_2 + 0x350);
  lVar1 = *(longlong *)(param_2 + 0x358);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x358);
    }
  }
  *(longlong *)(param_1 + 0x358) = lVar1;
  return param_1;
}



// FUNCTION 149202dd0 FUN_149202dd0 body=44 status=ok
// SIG undefined FUN_149202dd0(void)

void FUN_149202dd0(undefined8 param_1,longlong *param_2)

{
  FUN_149202f0c(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149202e12 FUN_149202e12 body=54 status=ok
// SIG undefined FUN_149202e12(void)

undefined1 FUN_149202e12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149203a12(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 149202e70 FUN_149202e70 body=59 status=ok
// SIG undefined FUN_149202e70(void)

undefined8 FUN_149202e70(longlong *param_1)

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



// FUNCTION 149202f0c FUN_149202f0c body=62 status=ok
// SIG undefined FUN_149202f0c(void)

void FUN_149202f0c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14bb89f40;
    if (param_1[0x68] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x6c;
  }
  return;
}



// FUNCTION 149202f4c FUN_149202f4c body=50 status=ok
// SIG undefined FUN_149202f4c(void)

void FUN_149202f4c(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_149202f0c(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 149202f7e FUN_149202f7e body=60 status=ok
// SIG undefined FUN_149202f7e(void)

undefined8 * FUN_149202f7e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb89f40;
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149202fbe FUN_149202fbe body=38 status=ok
// SIG undefined FUN_149202fbe(void)

undefined1 * FUN_149202fbe(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  *param_2 = uVar1;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)((longlong)param_1 + 0x24);
  return param_2;
}



// FUNCTION 1492030b8 FUN_1492030b8 body=59 status=ok
// SIG undefined FUN_1492030b8(void)

undefined8 FUN_1492030b8(longlong *param_1)

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



// FUNCTION 14920318e FUN_14920318e body=54 status=ok
// SIG undefined FUN_14920318e(void)

undefined1 FUN_14920318e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149203bfc(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1492031ec FUN_1492031ec body=59 status=ok
// SIG undefined FUN_1492031ec(void)

undefined8 FUN_1492031ec(longlong *param_1)

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



// FUNCTION 149203232 FUN_149203232 body=37 status=ok
// SIG undefined FUN_149203232(void)

void FUN_149203232(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1492032a8 FUN_1492032a8 body=29 status=ok
// SIG undefined FUN_1492032a8(void)

undefined8 FUN_1492032a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492032ca FUN_1492032ca body=22 status=ok
// SIG undefined FUN_1492032ca(void)

bool FUN_1492032ca(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_14449ffea(param_1,*param_2);
  return iVar1 == 0;
}



// FUNCTION 14920330a FUN_14920330a body=29 status=ok
// SIG undefined FUN_14920330a(void)

undefined8 FUN_14920330a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149203382 FUN_149203382 body=131 status=ok
// SIG undefined FUN_149203382(void)

int FUN_149203382(longlong *param_1,byte *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (uint)*(ushort *)(param_2 + 0xc) +
           ((uint)*param_2 +
           (((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4)) * 10) * 0xd;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492034b2 FUN_1492034b2 body=54 status=ok
// SIG undefined FUN_1492034b2(void)

undefined1 FUN_1492034b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491e14ac(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 149203510 FUN_149203510 body=59 status=ok
// SIG undefined FUN_149203510(void)

undefined8 FUN_149203510(longlong *param_1)

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



// FUNCTION 149203556 FUN_149203556 body=34 status=ok
// SIG undefined FUN_149203556(void)

void FUN_149203556(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1491f007e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 149203610 FUN_149203610 body=59 status=ok
// SIG undefined FUN_149203610(void)

undefined8 FUN_149203610(longlong *param_1)

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



// FUNCTION 1492036b2 FUN_1492036b2 body=95 status=ok
// SIG undefined FUN_1492036b2(void)

undefined8 * FUN_1492036b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_149201f5c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149203712(param_1,iVar1);
      FUN_149203787(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149203712 FUN_149203712 body=117 status=ok
// SIG undefined FUN_149203712(void)

void FUN_149203712(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x170,0x10);
    iVar2 = (int)(uVar1 / 0x170);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x170,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149203787 FUN_149203787 body=60 status=ok
// SIG undefined FUN_149203787(void)

void FUN_149203787(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1492037c4(param_1,param_2);
    param_1 = param_1 + 0x170;
    param_2 = param_2 + 0x170;
  }
  return;
}



// FUNCTION 1492037c4 FUN_1492037c4 body=183 status=ok
// SIG undefined FUN_1492037c4(void)

undefined8 * FUN_1492037c4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14bb891a8;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bb89190;
  memcpy(param_1 + 3,(void *)(param_2 + 0x18),0x138);
  param_1[0x2a] = 0;
  iVar1 = *(int *)(param_2 + 0x158);
  _Src = *(void **)(param_2 + 0x150);
  *(int *)(param_1 + 0x2b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x2a,iVar1,0);
    memcpy((void *)param_1[0x2a],_Src,(longlong)iVar1 << 2);
  }
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x160);
  return param_1;
}



// FUNCTION 14920387c FUN_14920387c body=79 status=ok
// SIG undefined FUN_14920387c(void)

undefined8 * FUN_14920387c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492038cc(param_1,iVar1);
      FUN_14920393e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1492038cc FUN_1492038cc body=114 status=ok
// SIG undefined FUN_1492038cc(void)

void FUN_1492038cc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf0,0x10);
    iVar2 = (int)(uVar1 / 0xf0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xf0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14920393e FUN_14920393e body=121 status=ok
// SIG undefined FUN_14920393e(void)

void FUN_14920393e(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar2);
      *puVar1 = &PTR_FUN_14bb891a8;
      puVar1[1] = *(undefined8 *)(param_2 + 8 + lVar2);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10 + lVar2);
      *puVar1 = &PTR_FUN_14bb8a6c0;
      memcpy(puVar1 + 3,(void *)(param_2 + 0x18 + lVar2),0xd8);
      lVar2 = lVar2 + 0xf0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1492039b8 FUN_1492039b8 body=29 status=ok
// SIG undefined FUN_1492039b8(void)

undefined8 FUN_1492039b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149203a12 FUN_149203a12 body=95 status=ok
// SIG undefined FUN_149203a12(void)

undefined8 * FUN_149203a12(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_149202f0c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149203a72(param_1,iVar1);
      FUN_149203ae4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149203a72 FUN_149203a72 body=114 status=ok
// SIG undefined FUN_149203a72(void)

void FUN_149203a72(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x360,0x10);
    iVar2 = (int)(uVar1 / 0x360);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x360,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149203ae4 FUN_149203ae4 body=60 status=ok
// SIG undefined FUN_149203ae4(void)

void FUN_149203ae4(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_149203b20(param_1,param_2);
    param_1 = param_1 + 0x360;
    param_2 = param_2 + 0x360;
  }
  return;
}



// FUNCTION 149203b20 FUN_149203b20 body=220 status=ok
// SIG undefined FUN_149203b20(void)

undefined8 * FUN_149203b20(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14bb891a8;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bb89f40;
  memcpy(param_1 + 3,(void *)(param_2 + 0x18),0x328);
  param_1[0x68] = 0;
  iVar1 = *(int *)(param_2 + 0x348);
  _Src = *(void **)(param_2 + 0x340);
  *(int *)(param_1 + 0x69) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x68,iVar1,0);
    memcpy((void *)param_1[0x68],_Src,(longlong)iVar1 << 2);
  }
  *(undefined1 *)(param_1 + 0x6a) = *(undefined1 *)(param_2 + 0x350);
  lVar2 = *(longlong *)(param_2 + 0x358);
  param_1[0x6b] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 149203bfc FUN_149203bfc body=79 status=ok
// SIG undefined FUN_149203bfc(void)

undefined8 * FUN_149203bfc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149203c4c(param_1,iVar1);
      FUN_149203cae(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149203c4c FUN_149203c4c body=98 status=ok
// SIG undefined FUN_149203c4c(void)

void FUN_149203c4c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149203cae FUN_149203cae body=74 status=ok
// SIG undefined FUN_149203cae(void)

void FUN_149203cae(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined ***)(param_1 + lVar1) = &PTR_FUN_14bb891a8;
      *(undefined8 *)(param_1 + 8 + lVar1) = *(undefined8 *)(param_2 + 8 + lVar1);
      *(undefined4 *)(param_1 + 0x10 + lVar1) = *(undefined4 *)(param_2 + 0x10 + lVar1);
      *(undefined ***)(param_1 + lVar1) = &PTR_FUN_14bb8a230;
      *(undefined4 *)(param_1 + 0x18 + lVar1) = *(undefined4 *)(param_2 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 149203cf8 FUN_149203cf8 body=29 status=ok
// SIG undefined FUN_149203cf8(void)

undefined8 FUN_149203cf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149203d16 FUN_149203d16 body=111 status=ok
// SIG undefined FUN_149203d16(void)

longlong * FUN_149203d16(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 149203d86 FUN_149203d86 body=201 status=ok
// SIG undefined FUN_149203d86(void)

void FUN_149203d86(longlong param_1,longlong param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined8 unaff_RBP;
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    if ((*(char *)(param_1 + 0x52c) == '\x01') && (*(char *)(param_2 + 0x3c1) == '\x01')) {
      uVar1 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(param_2 + 0x3c0));
      FUN_1491f46f0(param_2 + 0x3c8,uVar1 & 0xffffffff);
      local_48 = 0;
      FUN_1491de136(param_2 + 0x3c8,param_3,param_4,uVar1 & 0xffffffff);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
    local_40 = *param_3;
    uStack_3c = param_3[1];
    uStack_38 = param_3[2];
    uStack_34 = param_3[3];
    local_30 = *(undefined8 *)(param_3 + 4);
    local_48 = 0;
    FUN_1491de136(param_2 + 0x3c8,&local_40,param_4,*(undefined1 *)(param_2 + 0x3c8));
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149203e52 FUN_149203e52 body=192 status=ok
// SIG undefined FUN_149203e52(void)

undefined8 *
FUN_149203e52(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    local_30 = *param_4;
    local_40 = param_4[1];
    local_38 = param_4[2];
    if ((*(char *)(param_1 + 0x52c) == '\x01') && (*(char *)(param_3 + 0x3c1) == '\x01')) {
      local_28 = local_30;
      local_20 = local_40;
      local_18 = local_38;
      FUN_14690c017(param_2,&local_28,*(undefined1 *)(param_3 + 0x3c8),1);
    }
    else {
      FUN_144a7484c(&local_40,param_2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_68);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149203f14 FUN_149203f14 body=29 status=ok
// SIG undefined FUN_149203f14(void)

undefined8 FUN_149203f14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149203f9c FUN_149203f9c body=59 status=ok
// SIG undefined FUN_149203f9c(void)

undefined8 FUN_149203f9c(longlong *param_1)

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



// FUNCTION 149204076 FUN_149204076 body=68 status=ok
// SIG undefined FUN_149204076(void)

undefined8 FUN_149204076(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x84);
      lVar1 = lVar1 + 0x84;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492040e2 FUN_1492040e2 body=59 status=ok
// SIG undefined FUN_1492040e2(void)

undefined8 FUN_1492040e2(longlong *param_1)

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



// FUNCTION 1492041c8 FUN_1492041c8 body=68 status=ok
// SIG undefined FUN_1492041c8(void)

undefined8 FUN_1492041c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x84);
      lVar1 = lVar1 + 0x84;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149204234 FUN_149204234 body=59 status=ok
// SIG undefined FUN_149204234(void)

undefined8 FUN_149204234(longlong *param_1)

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



// FUNCTION 149204384 FUN_149204384 body=59 status=ok
// SIG undefined FUN_149204384(void)

undefined8 FUN_149204384(longlong *param_1)

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



// FUNCTION 149204470 FUN_149204470 body=119 status=ok
// SIG undefined FUN_149204470(void)

int FUN_149204470(longlong *param_1,byte *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (uint)*param_2 +
           (((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4)) * 10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149204582 FUN_149204582 body=54 status=ok
// SIG undefined FUN_149204582(void)

undefined1 FUN_149204582(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1444888de(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1492045e0 FUN_1492045e0 body=173 status=ok
// SIG undefined FUN_1492045e0(void)

int FUN_1492045e0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  iVar1 = (int)param_2[1];
  iVar4 = iVar1 * 0x11 + 3;
  if ((longlong)iVar1 != 0) {
    lVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(*param_2 + 4 + lVar6);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar5 = (uint)uVar2 & 0xffff;
      iVar4 = (uint)*(byte *)(*param_2 + lVar6) + iVar4 +
              (((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 10;
      lVar6 = lVar6 + 0xc;
    } while ((longlong)iVar1 * 0xc != lVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149204698 FUN_149204698 body=37 status=ok
// SIG undefined FUN_149204698(void)

void FUN_149204698(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1492047b6 FUN_1492047b6 body=59 status=ok
// SIG undefined FUN_1492047b6(void)

undefined8 FUN_1492047b6(longlong *param_1)

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



// FUNCTION 149204902 FUN_149204902 body=59 status=ok
// SIG undefined FUN_149204902(void)

undefined8 FUN_149204902(longlong *param_1)

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



// FUNCTION 1492049fc FUN_1492049fc body=129 status=ok
// SIG undefined FUN_1492049fc(void)

undefined8 FUN_1492049fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined8 *)(param_3 + lVar4);
      *(undefined8 *)(param_2 + 5 + lVar4) = *(undefined8 *)(param_3 + 5 + lVar4);
      *(undefined8 *)(param_2 + lVar4) = uVar1;
      plVar2 = *(longlong **)(param_3 + 0x10 + lVar4);
      plVar3 = *(longlong **)(param_2 + 0x10 + lVar4);
      if (plVar3 != plVar2) {
        *(longlong **)(param_2 + 0x10 + lVar4) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      *(undefined4 *)(param_2 + 0x18 + lVar4) = *(undefined4 *)(param_3 + lVar4 + 0x18);
      lVar4 = lVar4 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149204aa6 FUN_149204aa6 body=59 status=ok
// SIG undefined FUN_149204aa6(void)

undefined8 FUN_149204aa6(longlong *param_1)

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



// FUNCTION 149204aec FUN_149204aec body=39 status=ok
// SIG undefined FUN_149204aec(void)

void FUN_149204aec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 149204bca FUN_149204bca body=54 status=ok
// SIG undefined FUN_149204bca(void)

undefined1 FUN_149204bca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491b47dc(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 149204c28 FUN_149204c28 body=59 status=ok
// SIG undefined FUN_149204c28(void)

undefined8 FUN_149204c28(longlong *param_1)

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



// FUNCTION 149204c6e FUN_149204c6e body=32 status=ok
// SIG undefined FUN_149204c6e(void)

void FUN_149204c6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1491c057c(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 149204d92 FUN_149204d92 body=59 status=ok
// SIG undefined FUN_149204d92(void)

undefined8 FUN_149204d92(longlong *param_1)

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



// FUNCTION 149204e32 FUN_149204e32 body=29 status=ok
// SIG undefined FUN_149204e32(void)

undefined8 FUN_149204e32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149204e50 FUN_149204e50 body=149 status=ok
// SIG undefined FUN_149204e50(void)

uint FUN_149204e50(longlong param_1,void *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Dst;
  
  plVar2 = (longlong *)FUN_1491929d8();
  lVar3 = FUN_1491929d8(param_1);
  uVar1 = (**(code **)(*plVar2 + 200))(plVar2,*(int *)(lVar3 + 0x44) + param_1,param_2,0);
  if ((char)uVar1 == '\0') {
    lVar3 = FUN_1491929d8(param_1);
    _Dst = (void *)(*(int *)(lVar3 + 0x44) + param_1);
    if (_Dst != param_2) {
      if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
        (**(code **)(*plVar2 + 0x100))(plVar2,_Dst,param_2,(int)plVar2[6]);
      }
      else {
        memcpy(_Dst,param_2,(longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
      }
    }
  }
  return uVar1 ^ 1;
}



// FUNCTION 149204f9c FUN_149204f9c body=59 status=ok
// SIG undefined FUN_149204f9c(void)

undefined8 FUN_149204f9c(longlong *param_1)

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



// FUNCTION 14920503c FUN_14920503c body=29 status=ok
// SIG undefined FUN_14920503c(void)

undefined8 FUN_14920503c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14920505a FUN_14920505a body=156 status=ok
// SIG undefined FUN_14920505a(void)

void FUN_14920505a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1491f8308();
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x20);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x20) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x20) = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14920515e FUN_14920515e body=78 status=ok
// SIG undefined FUN_14920515e(void)

undefined8 FUN_14920515e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1447cd5a6(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492051d4 FUN_1492051d4 body=59 status=ok
// SIG undefined FUN_1492051d4(void)

undefined8 FUN_1492051d4(longlong *param_1)

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



// FUNCTION 14920521a FUN_14920521a body=48 status=ok
// SIG undefined FUN_14920521a(void)

void FUN_14920521a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14bb8c7d0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 149205298 FUN_149205298 body=57 status=ok
// SIG undefined FUN_149205298(void)

undefined8 * FUN_149205298(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb8c7d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492052d2 FUN_1492052d2 body=38 status=ok
// SIG undefined FUN_1492052d2(void)

void FUN_1492052d2(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_146e9d99c(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 1492053b6 FUN_1492053b6 body=59 status=ok
// SIG undefined FUN_1492053b6(void)

undefined8 FUN_1492053b6(longlong *param_1)

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



// FUNCTION 149205456 FUN_149205456 body=29 status=ok
// SIG undefined FUN_149205456(void)

undefined8 FUN_149205456(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149205474 FUN_149205474 body=111 status=ok
// SIG undefined FUN_149205474(void)

void FUN_149205474(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_1491f8308();
  puVar2 = (undefined4 *)(param_1 + 0x20);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001492054bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    return;
  }
  FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 14920554a FUN_14920554a body=78 status=ok
// SIG undefined FUN_14920554a(void)

undefined8 FUN_14920554a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_144a67f5c(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492055c0 FUN_1492055c0 body=59 status=ok
// SIG undefined FUN_1492055c0(void)

undefined8 FUN_1492055c0(longlong *param_1)

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



// FUNCTION 149205606 FUN_149205606 body=48 status=ok
// SIG undefined FUN_149205606(void)

void FUN_149205606(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14bb8cad0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 149205684 FUN_149205684 body=57 status=ok
// SIG undefined FUN_149205684(void)

undefined8 * FUN_149205684(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb8cad0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492056be FUN_1492056be body=38 status=ok
// SIG undefined FUN_1492056be(void)

void FUN_1492056be(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_146db24e8(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 14920579e FUN_14920579e body=59 status=ok
// SIG undefined FUN_14920579e(void)

undefined8 FUN_14920579e(longlong *param_1)

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



// FUNCTION 14920583e FUN_14920583e body=29 status=ok
// SIG undefined FUN_14920583e(void)

undefined8 FUN_14920583e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14920585c FUN_14920585c body=111 status=ok
// SIG undefined FUN_14920585c(void)

void FUN_14920585c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_1491f8308();
  puVar2 = (undefined4 *)(param_1 + 0x20);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001492058a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    return;
  }
  FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 149205932 FUN_149205932 body=78 status=ok
// SIG undefined FUN_149205932(void)

undefined8 FUN_149205932(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_14054c6c4(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492059a8 FUN_1492059a8 body=59 status=ok
// SIG undefined FUN_1492059a8(void)

undefined8 FUN_1492059a8(longlong *param_1)

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



// FUNCTION 1492059ee FUN_1492059ee body=48 status=ok
// SIG undefined FUN_1492059ee(void)

void FUN_1492059ee(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14bb8cdd0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 149205a6c FUN_149205a6c body=57 status=ok
// SIG undefined FUN_149205a6c(void)

undefined8 * FUN_149205a6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb8cdd0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149205aa6 FUN_149205aa6 body=38 status=ok
// SIG undefined FUN_149205aa6(void)

void FUN_149205aa6(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_1403b0476(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 149205b86 FUN_149205b86 body=59 status=ok
// SIG undefined FUN_149205b86(void)

undefined8 FUN_149205b86(longlong *param_1)

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



// FUNCTION 149205c26 FUN_149205c26 body=29 status=ok
// SIG undefined FUN_149205c26(void)

undefined8 FUN_149205c26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149205c44 FUN_149205c44 body=46 status=ok
// SIG undefined FUN_149205c44(void)

void FUN_149205c44(longlong param_1,longlong *param_2)

{
  FUN_1491f8308();
                    /* WARNING: Could not recover jumptable at 0x000149205c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 149205cda FUN_149205cda body=78 status=ok
// SIG undefined FUN_149205cda(void)

undefined8 FUN_149205cda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1406fa324(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149205d50 FUN_149205d50 body=59 status=ok
// SIG undefined FUN_149205d50(void)

undefined8 FUN_149205d50(longlong *param_1)

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



// FUNCTION 149205d96 FUN_149205d96 body=48 status=ok
// SIG undefined FUN_149205d96(void)

void FUN_149205d96(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14bb8d0d0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 149205e14 FUN_149205e14 body=57 status=ok
// SIG undefined FUN_149205e14(void)

undefined8 * FUN_149205e14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb8d0d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149205e4e FUN_149205e4e body=38 status=ok
// SIG undefined FUN_149205e4e(void)

void FUN_149205e4e(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_140219018(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 149205f64 FUN_149205f64 body=59 status=ok
// SIG undefined FUN_149205f64(void)

undefined8 FUN_149205f64(longlong *param_1)

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



// FUNCTION 149206004 FUN_149206004 body=29 status=ok
// SIG undefined FUN_149206004(void)

undefined8 FUN_149206004(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149206022 FUN_149206022 body=38 status=ok
// SIG undefined FUN_149206022(void)

void FUN_149206022(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_14480c34d(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 1492060b0 FUN_1492060b0 body=78 status=ok
// SIG undefined FUN_1492060b0(void)

undefined8 FUN_1492060b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1405b70a4(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149206126 FUN_149206126 body=59 status=ok
// SIG undefined FUN_149206126(void)

undefined8 FUN_149206126(longlong *param_1)

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



// FUNCTION 14920616c FUN_14920616c body=48 status=ok
// SIG undefined FUN_14920616c(void)

void FUN_14920616c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14bb8d3d0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 1492061ea FUN_1492061ea body=57 status=ok
// SIG undefined FUN_1492061ea(void)

undefined8 * FUN_1492061ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb8d3d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149206224 FUN_149206224 body=38 status=ok
// SIG undefined FUN_149206224(void)

void FUN_149206224(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_1436364e8(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 14920633a FUN_14920633a body=59 status=ok
// SIG undefined FUN_14920633a(void)

undefined8 FUN_14920633a(longlong *param_1)

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



// FUNCTION 1492063da FUN_1492063da body=29 status=ok
// SIG undefined FUN_1492063da(void)

undefined8 FUN_1492063da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492063f8 FUN_1492063f8 body=38 status=ok
// SIG undefined FUN_1492063f8(void)

void FUN_1492063f8(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_1401fb57a(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 149206486 FUN_149206486 body=78 status=ok
// SIG undefined FUN_149206486(void)

undefined8 FUN_149206486(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1492067de(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492064fc FUN_1492064fc body=59 status=ok
// SIG undefined FUN_1492064fc(void)

undefined8 FUN_1492064fc(longlong *param_1)

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



// FUNCTION 149206542 FUN_149206542 body=48 status=ok
// SIG undefined FUN_149206542(void)

void FUN_149206542(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14bb8d6d0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 1492065c0 FUN_1492065c0 body=57 status=ok
// SIG undefined FUN_1492065c0(void)

undefined8 * FUN_1492065c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb8d6d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492065fa FUN_1492065fa body=38 status=ok
// SIG undefined FUN_1492065fa(void)

void FUN_1492065fa(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_149206620(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 149206620 FUN_149206620 body=377 status=ok
// SIG undefined FUN_149206620(void)

longlong * FUN_149206620(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147ed6cde(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1401fb57a(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147ed6cde(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14920679a(param_2);
        FUN_1401fb57a(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14920679a FUN_14920679a body=68 status=ok
// SIG undefined FUN_14920679a(void)

longlong FUN_14920679a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ed6d50(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1476141e8(lVar2,1);
  return lVar2;
}



// FUNCTION 1492067de FUN_1492067de body=89 status=ok
// SIG undefined FUN_1492067de(void)

undefined8 * FUN_1492067de(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1464bf958(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 149206928 FUN_149206928 body=59 status=ok
// SIG undefined FUN_149206928(void)

undefined8 FUN_149206928(longlong *param_1)

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



// FUNCTION 1492069c8 FUN_1492069c8 body=29 status=ok
// SIG undefined FUN_1492069c8(void)

undefined8 FUN_1492069c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492069e6 FUN_1492069e6 body=38 status=ok
// SIG undefined FUN_1492069e6(void)

void FUN_1492069e6(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_1400f4f7e(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 149206a74 FUN_149206a74 body=78 status=ok
// SIG undefined FUN_149206a74(void)

undefined8 FUN_149206a74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_140472d9a(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149206aea FUN_149206aea body=59 status=ok
// SIG undefined FUN_149206aea(void)

undefined8 FUN_149206aea(longlong *param_1)

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



// FUNCTION 149206b30 FUN_149206b30 body=48 status=ok
// SIG undefined FUN_149206b30(void)

void FUN_149206b30(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14bb8d9d0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 149206bae FUN_149206bae body=57 status=ok
// SIG undefined FUN_149206bae(void)

undefined8 * FUN_149206bae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb8d9d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149206be8 FUN_149206be8 body=38 status=ok
// SIG undefined FUN_149206be8(void)

void FUN_149206be8(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_149206c0e(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 149206c0e FUN_149206c0e body=390 status=ok
// SIG undefined FUN_149206c0e(void)

longlong * FUN_149206c0e(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) << 5,
             (longlong)*(int *)((longlong)param_2 + 0xc) << 5);
  local_24 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_24 = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    }
    else {
      FUN_14572512c(param_1,&local_24);
    }
  }
  else {
    local_24 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_24 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1401017f4(param_2,0);
    }
  }
  else if ((((int)local_24 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_24 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_24;
    if ((((*(byte *)(param_1 + 5) & 1) == 0) ||
        (FUN_14735390a(param_2,local_24,*(undefined4 *)((longlong)param_2 + 0xc)),
        (*(byte *)(param_1 + 5) & 1) == 0)) || (0x3eb < *(int *)((longlong)param_1 + 0x44))) {
      (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)*(int *)(param_2 + 1) << 5);
    }
    else {
      if ((int)local_24 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_24);
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(uint *)((longlong)param_2 + 0xc) != local_24) {
        FUN_1401017f4(param_2);
      }
      if (0 < (int)local_24) {
        iVar4 = 0;
        do {
          uVar3 = FUN_149206d96(param_2);
          FUN_1400f4f7e(param_1,uVar3);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)local_24);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149206d96 FUN_149206d96 body=64 status=ok
// SIG undefined FUN_149206d96(void)

longlong FUN_149206d96(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140e16be0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_148155984(lVar2,1);
  return lVar2;
}



// FUNCTION 149206dd8 FUN_149206dd8 body=53 status=ok
// SIG undefined FUN_149206dd8(void)

void FUN_149206dd8(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined1 *)(param_2 + 2) = 0x14;
  *param_2 = &PTR_FUN_14bb8db50;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149206e0e FUN_149206e0e body=48 status=ok
// SIG undefined FUN_149206e0e(void)

void FUN_149206e0e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0x14;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14bb8db50;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149206e62 FUN_149206e62 body=63 status=ok
// SIG undefined FUN_149206e62(void)

undefined8 FUN_149206e62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    lVar2 = 0x20;
    do {
      *(undefined8 *)(param_2 + -8 + lVar2) = *(undefined8 *)(param_3 + -8 + lVar2);
      puVar4 = (undefined8 *)(param_3 + -0x18 + lVar2);
      uVar1 = puVar4[1];
      puVar5 = (undefined8 *)(param_2 + -0x18 + lVar2);
      *puVar5 = *puVar4;
      puVar5[1] = uVar1;
      puVar4 = (undefined8 *)(param_3 + lVar2);
      puVar5 = (undefined8 *)(param_2 + lVar2);
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar2 = lVar2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149206eca FUN_149206eca body=59 status=ok
// SIG undefined FUN_149206eca(void)

undefined8 FUN_149206eca(longlong *param_1)

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



// FUNCTION 149206f76 FUN_149206f76 body=29 status=ok
// SIG undefined FUN_149206f76(void)

undefined8 FUN_149206f76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149206f94 FUN_149206f94 body=76 status=ok
// SIG undefined FUN_149206f94(void)

void FUN_149206f94(longlong param_1,longlong param_2)

{
  FUN_1491f8308();
  FUN_1400f4f7e(param_2,param_1 + 0x20);
  FUN_14480c34d(param_2,param_1 + 0x40);
  FUN_14480c34d(param_2,param_1 + 0x60);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 149207048 FUN_149207048 body=78 status=ok
// SIG undefined FUN_149207048(void)

undefined8 FUN_149207048(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_144756208(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492070be FUN_1492070be body=59 status=ok
// SIG undefined FUN_1492070be(void)

undefined8 FUN_1492070be(longlong *param_1)

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



// FUNCTION 149207104 FUN_149207104 body=48 status=ok
// SIG undefined FUN_149207104(void)

void FUN_149207104(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14bb8dcd0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 149207182 FUN_149207182 body=57 status=ok
// SIG undefined FUN_149207182(void)

undefined8 * FUN_149207182(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb8dcd0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492071bc FUN_1492071bc body=38 status=ok
// SIG undefined FUN_1492071bc(void)

void FUN_1492071bc(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_1400f4d04(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 1492072b2 FUN_1492072b2 body=59 status=ok
// SIG undefined FUN_1492072b2(void)

undefined8 FUN_1492072b2(longlong *param_1)

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



// FUNCTION 149207352 FUN_149207352 body=29 status=ok
// SIG undefined FUN_149207352(void)

undefined8 FUN_149207352(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149207370 FUN_149207370 body=38 status=ok
// SIG undefined FUN_149207370(void)

void FUN_149207370(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_1408ef3d7(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 1492073fe FUN_1492073fe body=78 status=ok
// SIG undefined FUN_1492073fe(void)

undefined8 FUN_1492073fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_14479f9aa(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149207474 FUN_149207474 body=59 status=ok
// SIG undefined FUN_149207474(void)

undefined8 FUN_149207474(longlong *param_1)

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



// FUNCTION 1492074ba FUN_1492074ba body=48 status=ok
// SIG undefined FUN_1492074ba(void)

void FUN_1492074ba(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14bb8dfd0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 149207538 FUN_149207538 body=57 status=ok
// SIG undefined FUN_149207538(void)

undefined8 * FUN_149207538(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb8dfd0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149207572 FUN_149207572 body=38 status=ok
// SIG undefined FUN_149207572(void)

void FUN_149207572(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_14908946a(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 149207666 FUN_149207666 body=59 status=ok
// SIG undefined FUN_149207666(void)

undefined8 FUN_149207666(longlong *param_1)

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



// FUNCTION 149207706 FUN_149207706 body=29 status=ok
// SIG undefined FUN_149207706(void)

undefined8 FUN_149207706(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149207724 FUN_149207724 body=38 status=ok
// SIG undefined FUN_149207724(void)

void FUN_149207724(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_140f872f2(param_1 + 0x20,param_2);
  return;
}



// FUNCTION 1492077b2 FUN_1492077b2 body=78 status=ok
// SIG undefined FUN_1492077b2(void)

undefined8 FUN_1492077b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149207828 FUN_149207828 body=59 status=ok
// SIG undefined FUN_149207828(void)

undefined8 FUN_149207828(longlong *param_1)

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



// FUNCTION 14920786e FUN_14920786e body=48 status=ok
// SIG undefined FUN_14920786e(void)

void FUN_14920786e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14bb8e2d0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 1492078ec FUN_1492078ec body=57 status=ok
// SIG undefined FUN_1492078ec(void)

undefined8 * FUN_1492078ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb8e2d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149207926 FUN_149207926 body=38 status=ok
// SIG undefined FUN_149207926(void)

void FUN_149207926(longlong param_1,undefined8 param_2)

{
  FUN_1491f8308();
  FUN_14920a84c(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 14920794e FUN_14920794e body=132 status=ok
// SIG undefined FUN_14920794e(void)

void FUN_14920794e(undefined8 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined2 *)(param_2 + 0xc) = 0xffff;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  puVar5 = &DAT_14c846480;
  puVar6 = (undefined8 *)(param_2 + 0x20);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = &DAT_14c846480;
  puVar6 = (undefined8 *)(param_2 + 0x80);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined8 *)(param_2 + 0xf0) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 0xe0) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_2 + 0xe4) = uVar1;
  *(undefined4 *)(param_2 + 0xe8) = uVar2;
  *(undefined4 *)(param_2 + 0xec) = uVar3;
  FUN_1491da766(param_2 + 0xf8);
  *(undefined4 *)(param_2 + 0x104) = 0;
  return;
}



// FUNCTION 1492079d2 FUN_1492079d2 body=132 status=ok
// SIG undefined FUN_1492079d2(void)

void FUN_1492079d2(undefined8 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined2 *)(param_2 + 0xc) = 0xffff;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  puVar5 = &DAT_14c846480;
  puVar6 = (undefined8 *)(param_2 + 0x20);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = &DAT_14c846480;
  puVar6 = (undefined8 *)(param_2 + 0x80);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined8 *)(param_2 + 0xf0) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 0xe0) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_2 + 0xe4) = uVar1;
  *(undefined4 *)(param_2 + 0xe8) = uVar2;
  *(undefined4 *)(param_2 + 0xec) = uVar3;
  FUN_1491da766(param_2 + 0xf8);
  *(undefined4 *)(param_2 + 0x104) = 0;
  return;
}



// FUNCTION 149207a6e FUN_149207a6e body=68 status=ok
// SIG undefined FUN_149207a6e(void)

undefined8 FUN_149207a6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x108);
      lVar1 = lVar1 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149207ada FUN_149207ada body=59 status=ok
// SIG undefined FUN_149207ada(void)

undefined8 FUN_149207ada(longlong *param_1)

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



// FUNCTION 149207c1e FUN_149207c1e body=81 status=ok
// SIG undefined FUN_149207c1e(void)

undefined8 FUN_149207c1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491c4070(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    FUN_1459a7e20(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 149207c98 FUN_149207c98 body=59 status=ok
// SIG undefined FUN_149207c98(void)

undefined8 FUN_149207c98(longlong *param_1)

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



// FUNCTION 149207cde FUN_149207cde body=32 status=ok
// SIG undefined FUN_149207cde(void)

void FUN_149207cde(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1401f95f4(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149207d9a FUN_149207d9a body=78 status=ok
// SIG undefined FUN_149207d9a(void)

undefined8 FUN_149207d9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1444888de();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149207e10 FUN_149207e10 body=59 status=ok
// SIG undefined FUN_149207e10(void)

undefined8 FUN_149207e10(longlong *param_1)

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



// FUNCTION 149207e56 FUN_149207e56 body=38 status=ok
// SIG undefined FUN_149207e56(void)

void FUN_149207e56(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 149207f00 FUN_149207f00 body=54 status=ok
// SIG undefined FUN_149207f00(void)

undefined1 FUN_149207f00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1444888de(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 149207f5e FUN_149207f5e body=59 status=ok
// SIG undefined FUN_149207f5e(void)

undefined8 FUN_149207f5e(longlong *param_1)

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



// FUNCTION 149207fa4 FUN_149207fa4 body=37 status=ok
// SIG undefined FUN_149207fa4(void)

void FUN_149207fa4(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 149208098 FUN_149208098 body=83 status=ok
// SIG undefined FUN_149208098(void)

undefined8 FUN_149208098(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_149208320(param_2,param_3);
      FUN_1459a7e20(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149208114 FUN_149208114 body=59 status=ok
// SIG undefined FUN_149208114(void)

undefined8 FUN_149208114(longlong *param_1)

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



// FUNCTION 14920815a FUN_14920815a body=34 status=ok
// SIG undefined FUN_14920815a(void)

void FUN_14920815a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14919ec32(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 149208268 FUN_149208268 body=59 status=ok
// SIG undefined FUN_149208268(void)

undefined8 FUN_149208268(longlong *param_1)

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



// FUNCTION 1492082ae FUN_1492082ae body=34 status=ok
// SIG undefined FUN_1492082ae(void)

void FUN_1492082ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1456e45f0(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 149208320 FUN_149208320 body=95 status=ok
// SIG undefined FUN_149208320(void)

undefined8 * FUN_149208320(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1491c1aa8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491c19c0(param_1,iVar1);
      FUN_1491c1a22(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1492083e4 FUN_1492083e4 body=59 status=ok
// SIG undefined FUN_1492083e4(void)

undefined8 FUN_1492083e4(longlong *param_1)

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



// FUNCTION 1492084b2 FUN_1492084b2 body=47 status=ok
// SIG undefined FUN_1492084b2(void)

void FUN_1492084b2(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492084f8 FUN_1492084f8 body=67 status=ok
// SIG undefined FUN_1492084f8(void)

undefined1 FUN_1492084f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 149208564 FUN_149208564 body=59 status=ok
// SIG undefined FUN_149208564(void)

undefined8 FUN_149208564(longlong *param_1)

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



// FUNCTION 149208602 FUN_149208602 body=51 status=ok
// SIG undefined FUN_149208602(void)

void FUN_149208602(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 149208662 FUN_149208662 body=42 status=ok
// SIG undefined FUN_149208662(void)

void FUN_149208662(undefined8 param_1,longlong *param_2)

{
  FUN_149189aca(param_2 + 2);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492086a2 FUN_1492086a2 body=88 status=ok
// SIG undefined FUN_1492086a2(void)

undefined8 FUN_1492086a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined2 *)(param_2 + 0x20) = *(undefined2 *)(param_3 + 0x20);
    FUN_1491bf11c(param_2 + 0x28,param_3 + 0x28);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 149208722 FUN_149208722 body=59 status=ok
// SIG undefined FUN_149208722(void)

undefined8 FUN_149208722(longlong *param_1)

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



// FUNCTION 149208768 FUN_149208768 body=48 status=ok
// SIG undefined FUN_149208768(void)

void FUN_149208768(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[7] == '\x01') {
    FUN_149189aca(param_2 + 2);
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 1492087e8 FUN_1492087e8 body=70 status=ok
// SIG undefined FUN_1492087e8(void)

void FUN_1492087e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2 + 2,L"Module");
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}



// FUNCTION 14920882e FUN_14920882e body=70 status=ok
// SIG undefined FUN_14920882e(void)

void FUN_14920882e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2 + 2,L"Module");
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}



// FUNCTION 1492088ba FUN_1492088ba body=59 status=ok
// SIG undefined FUN_1492088ba(void)

undefined8 FUN_1492088ba(longlong *param_1)

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



// FUNCTION 149208906 FUN_149208906 body=40 status=ok
// SIG undefined FUN_149208906(void)

void FUN_149208906(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1456e4776(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14920897e FUN_14920897e body=84 status=ok
// SIG undefined FUN_14920897e(void)

void FUN_14920897e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  FUN_140056680((longlong)param_2 + 0x30,L"Module");
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  return;
}



// FUNCTION 1492089d2 FUN_1492089d2 body=84 status=ok
// SIG undefined FUN_1492089d2(void)

void FUN_1492089d2(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2 + 6,L"Module");
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  return;
}



// FUNCTION 149208a26 FUN_149208a26 body=43 status=ok
// SIG undefined FUN_149208a26(void)

void FUN_149208a26(undefined8 param_1,longlong param_2)

{
  FUN_1456e4776(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149208a68 FUN_149208a68 body=91 status=ok
// SIG undefined FUN_149208a68(void)

undefined1 FUN_149208a68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_145c13414(param_2,param_3);
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149208aec FUN_149208aec body=59 status=ok
// SIG undefined FUN_149208aec(void)

undefined8 FUN_149208aec(longlong *param_1)

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



// FUNCTION 149208b38 FUN_149208b38 body=55 status=ok
// SIG undefined FUN_149208b38(void)

void FUN_149208b38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1456e4776(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 149208bc0 FUN_149208bc0 body=80 status=ok
// SIG undefined FUN_149208bc0(void)

void FUN_149208bc0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *param_2 = &PTR_FUN_14bb8a6c0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149208c10 FUN_149208c10 body=80 status=ok
// SIG undefined FUN_149208c10(void)

void FUN_149208c10(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *param_2 = &PTR_FUN_14bb8a6c0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149208c84 FUN_149208c84 body=91 status=ok
// SIG undefined FUN_149208c84(void)

undefined8 FUN_149208c84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x18;
    do {
      *(undefined4 *)(param_2 + -8 + lVar1) = *(undefined4 *)(param_3 + -8 + lVar1);
      *(undefined8 *)(param_2 + -0x10 + lVar1) = *(undefined8 *)(param_3 + -0x10 + lVar1);
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xd8);
      lVar1 = lVar1 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149208d08 FUN_149208d08 body=59 status=ok
// SIG undefined FUN_149208d08(void)

undefined8 FUN_149208d08(longlong *param_1)

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



// FUNCTION 149208dea FUN_149208dea body=54 status=ok
// SIG undefined FUN_149208dea(void)

undefined1 FUN_149208dea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14920387c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 149208e48 FUN_149208e48 body=59 status=ok
// SIG undefined FUN_149208e48(void)

undefined8 FUN_149208e48(longlong *param_1)

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



// FUNCTION 149208e8e FUN_149208e8e body=37 status=ok
// SIG undefined FUN_149208e8e(void)

void FUN_149208e8e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 149208f04 FUN_149208f04 body=38 status=ok
// SIG undefined FUN_149208f04(void)

undefined8 FUN_149208f04(undefined8 param_1,int param_2)

{
  FUN_144a659aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149208f2a FUN_149208f2a body=55 status=ok
// SIG undefined FUN_149208f2a(void)

void FUN_149208f2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc080c0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc080c0 = FUN_140002ddd(FUN_1466d09c7,uVar1,L"AnimNode_ControlRigInputPose");
  }
  return;
}



// FUNCTION 149208f62 FUN_149208f62 body=190 status=ok
// SIG undefined FUN_149208f62(void)

void FUN_149208f62(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1478fec76(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 149209104 FUN_149209104 body=59 status=ok
// SIG undefined FUN_149209104(void)

undefined8 FUN_149209104(longlong *param_1)

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



// FUNCTION 14920914a FUN_14920914a body=32 status=ok
// SIG undefined FUN_14920914a(void)

void FUN_14920914a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1492091ee FUN_1492091ee body=63 status=ok
// SIG undefined FUN_1492091ee(void)

undefined1 FUN_1492091ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492093c6(param_2,param_3);
    param_3 = param_3 + 0x950;
    param_2 = param_2 + 0x950;
  }
  return 1;
}



// FUNCTION 149209256 FUN_149209256 body=59 status=ok
// SIG undefined FUN_149209256(void)

undefined8 FUN_149209256(longlong *param_1)

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



// FUNCTION 1492092a2 FUN_1492092a2 body=40 status=ok
// SIG undefined FUN_1492092a2(void)

void FUN_1492092a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x950) == '\x01') {
    FUN_145c5fea0(param_2);
    *(undefined1 *)(param_2 + 0x950) = 0;
  }
  return;
}



// FUNCTION 149209318 FUN_149209318 body=173 status=ok
// SIG undefined FUN_149209318(void)

undefined8 * FUN_149209318(undefined8 *param_1)

{
  FUN_140b4884c();
  *param_1 = &PTR_FUN_14bb86ac0;
  param_1[0x116] = 0;
  *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x8b9) = 0;
  param_1[0x115] = &PTR_FUN_14bb8f550;
  param_1[0x118] = 0;
  *(undefined4 *)(param_1 + 0x119) = 0xffffffff;
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *(undefined8 *)((longlong)param_1 + 0x924) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x92c) = 0;
  param_1[0x127] = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  param_1[0x129] = 0;
  return param_1;
}


