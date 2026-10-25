// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148064b2f FUN_148064b2f body=52 status=ok
// SIG undefined FUN_148064b2f(void)

void FUN_148064b2f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148064b64(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148064b64 FUN_148064b64 body=178 status=ok
// SIG undefined FUN_148064b64(void)

undefined8 * FUN_148064b64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_14181d5f4(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_14181d5f4(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 0xc);
  }
  return param_1;
}



// FUNCTION 148064c16 FUN_148064c16 body=122 status=ok
// SIG undefined FUN_148064c16(void)

longlong FUN_148064c16(longlong param_1,longlong param_2)

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
    FUN_148064c90(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148064c90 FUN_148064c90 body=210 status=ok
// SIG undefined FUN_148064c90(void)

undefined8 * FUN_148064c90(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145bf5652(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
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
          FUN_148064d62(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148064d62 FUN_148064d62 body=155 status=ok
// SIG undefined FUN_148064d62(void)

undefined8 * FUN_148064d62(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1447a127e(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_14181d5f4(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0xc);
  }
  return param_1;
}



// FUNCTION 148064dfe FUN_148064dfe body=66 status=ok
// SIG undefined FUN_148064dfe(void)

void FUN_148064dfe(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x60) = 0;
  *(undefined1 *)((longlong)param_2 + 0x66) = 1;
  FUN_14043112a((longlong)param_2 + 0x70);
  return;
}



// FUNCTION 148064e86 FUN_148064e86 body=30 status=ok
// SIG undefined FUN_148064e86(void)

void FUN_148064e86(undefined8 param_1,longlong param_2)

{
  FUN_14017ae7a(param_2 + 0x70);
  FUN_145bf558a(param_2);
  return;
}



// FUNCTION 148064eba FUN_148064eba body=63 status=ok
// SIG undefined FUN_148064eba(void)

undefined1 FUN_148064eba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148064fee(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148064f22 FUN_148064f22 body=59 status=ok
// SIG undefined FUN_148064f22(void)

undefined8 FUN_148064f22(longlong *param_1)

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



// FUNCTION 148064f6e FUN_148064f6e body=49 status=ok
// SIG undefined FUN_148064f6e(void)

void FUN_148064f6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14017ae7a(param_2 + 0x70);
    FUN_145bf558a(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148064fee FUN_148064fee body=124 status=ok
// SIG undefined FUN_148064fee(void)

longlong FUN_148064fee(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_148064a5c();
  FUN_148064c16(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  FUN_14805ff7e(param_1 + 0x70,param_2 + 0x70);
  FUN_14806506a(param_1 + 0x80,param_2 + 0x80);
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  return param_1;
}



// FUNCTION 14806506a FUN_14806506a body=93 status=ok
// SIG undefined FUN_14806506a(void)

undefined8 * FUN_14806506a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14017aeb5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1480650c8(param_1,iVar1);
      FUN_14806512a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1480650c8 FUN_1480650c8 body=98 status=ok
// SIG undefined FUN_1480650c8(void)

void FUN_1480650c8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14806512a FUN_14806512a body=147 status=ok
// SIG undefined FUN_14806512a(void)

void FUN_14806512a(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    do {
      *(undefined2 *)((longlong)puVar2 + -0xc) = *(undefined2 *)(param_2 + 1);
      *(undefined4 *)(puVar2 + -2) = *param_2;
      *(undefined4 *)(puVar2 + -1) = param_2[2];
      *(undefined2 *)((longlong)puVar2 + -4) = *(undefined2 *)(param_2 + 3);
      *puVar2 = 0;
      iVar1 = param_2[6];
      _Src = *(void **)(param_2 + 4);
      *(int *)(puVar2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_1447bda9e(puVar2,iVar1,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar1 << 2);
      }
      param_2 = param_2 + 8;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1480651be FUN_1480651be body=43 status=ok
// SIG undefined FUN_1480651be(void)

void FUN_1480651be(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x1c,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar1;
  return;
}



// FUNCTION 1480651ea FUN_1480651ea body=43 status=ok
// SIG undefined FUN_1480651ea(void)

void FUN_1480651ea(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x1c,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar1;
  return;
}



// FUNCTION 14806523a FUN_14806523a body=62 status=ok
// SIG undefined FUN_14806523a(void)

undefined1 FUN_14806523a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447a122a(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1480652a0 FUN_1480652a0 body=59 status=ok
// SIG undefined FUN_1480652a0(void)

undefined8 FUN_1480652a0(longlong *param_1)

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



// FUNCTION 1480652e6 FUN_1480652e6 body=37 status=ok
// SIG undefined FUN_1480652e6(void)

void FUN_1480652e6(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148065378 FUN_148065378 body=46 status=ok
// SIG undefined FUN_148065378(void)

void FUN_148065378(undefined8 param_1,longlong param_2)

{
  FUN_1480654d2(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1480653bc FUN_1480653bc body=82 status=ok
// SIG undefined FUN_1480653bc(void)

undefined8 FUN_1480653bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1480654fe(param_2,param_3);
      *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
      *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_3 + 0x12);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148065436 FUN_148065436 body=59 status=ok
// SIG undefined FUN_148065436(void)

undefined8 FUN_148065436(longlong *param_1)

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



// FUNCTION 1480654d2 FUN_1480654d2 body=43 status=ok
// SIG undefined FUN_1480654d2(void)

void FUN_1480654d2(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1480654fe FUN_1480654fe body=95 status=ok
// SIG undefined FUN_1480654fe(void)

undefined8 * FUN_1480654fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1480654d2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14806555e(param_1,iVar1);
      FUN_1480655c0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14806555e FUN_14806555e body=98 status=ok
// SIG undefined FUN_14806555e(void)

void FUN_14806555e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1480655c0 FUN_1480655c0 body=123 status=ok
// SIG undefined FUN_1480655c0(void)

void FUN_1480655c0(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar5[-2];
      _Src = *(void **)(puVar5 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1447a127e(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      *(undefined4 *)(param_1 + 2) = *puVar5;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 3) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
      param_1 = param_1 + 4;
      puVar5 = puVar5 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14806563c FUN_14806563c body=52 status=ok
// SIG undefined FUN_14806563c(void)

void FUN_14806563c(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1480654d2(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1480656ac FUN_1480656ac body=92 status=ok
// SIG undefined FUN_1480656ac(void)

undefined8 FUN_1480656ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar3);
      lVar2 = param_2 + 0x10 + lVar3;
      *(undefined2 *)(lVar2 + -0xc) = *(undefined2 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -8) = puVar1[2];
      *(undefined2 *)(lVar2 + -4) = *(undefined2 *)(puVar1 + 3);
      FUN_1447bdc4c();
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148065730 FUN_148065730 body=59 status=ok
// SIG undefined FUN_148065730(void)

undefined8 FUN_148065730(longlong *param_1)

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



// FUNCTION 148065776 FUN_148065776 body=38 status=ok
// SIG undefined FUN_148065776(void)

void FUN_148065776(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14806581a FUN_14806581a body=89 status=ok
// SIG undefined FUN_14806581a(void)

undefined8 FUN_14806581a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14805ff7e(param_2,param_3);
    FUN_14806506a(param_2 + 0x10,param_3 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x2c);
    uVar4 = *(undefined4 *)(param_3 + 0x30);
    uVar5 = *(undefined4 *)(param_3 + 0x34);
    uVar6 = *(undefined4 *)(param_3 + 0x38);
    uVar7 = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    *(undefined4 *)(param_2 + 0x30) = uVar4;
    *(undefined4 *)(param_2 + 0x34) = uVar5;
    *(undefined4 *)(param_2 + 0x38) = uVar6;
    *(undefined4 *)(param_2 + 0x3c) = uVar7;
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 14806589c FUN_14806589c body=59 status=ok
// SIG undefined FUN_14806589c(void)

undefined8 FUN_14806589c(longlong *param_1)

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



// FUNCTION 1480658e2 FUN_1480658e2 body=32 status=ok
// SIG undefined FUN_1480658e2(void)

void FUN_1480658e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14017ae7a(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14806599a FUN_14806599a body=59 status=ok
// SIG undefined FUN_14806599a(void)

undefined8 FUN_14806599a(longlong *param_1)

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



// FUNCTION 148065a3c FUN_148065a3c body=47 status=ok
// SIG undefined FUN_148065a3c(void)

void FUN_148065a3c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}



// FUNCTION 148065a6c FUN_148065a6c body=40 status=ok
// SIG undefined FUN_148065a6c(void)

void FUN_148065a6c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}



// FUNCTION 148065af8 FUN_148065af8 body=59 status=ok
// SIG undefined FUN_148065af8(void)

undefined8 FUN_148065af8(longlong *param_1)

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



// FUNCTION 148065b9a FUN_148065b9a body=57 status=ok
// SIG undefined FUN_148065b9a(void)

void FUN_148065b9a(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



// FUNCTION 148065bd4 FUN_148065bd4 body=47 status=ok
// SIG undefined FUN_148065bd4(void)

void FUN_148065bd4(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



// FUNCTION 148065c28 FUN_148065c28 body=78 status=ok
// SIG undefined FUN_148065c28(void)

undefined8 FUN_148065c28(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1447a122a();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148065c9e FUN_148065c9e body=59 status=ok
// SIG undefined FUN_148065c9e(void)

undefined8 FUN_148065c9e(longlong *param_1)

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



// FUNCTION 148065ce4 FUN_148065ce4 body=38 status=ok
// SIG undefined FUN_148065ce4(void)

void FUN_148065ce4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148065de2 FUN_148065de2 body=59 status=ok
// SIG undefined FUN_148065de2(void)

undefined8 FUN_148065de2(longlong *param_1)

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



// FUNCTION 148065f4c FUN_148065f4c body=59 status=ok
// SIG undefined FUN_148065f4c(void)

undefined8 FUN_148065f4c(longlong *param_1)

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



// FUNCTION 14806603c FUN_14806603c body=42 status=ok
// SIG undefined FUN_14806603c(void)

void FUN_14806603c(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1480661a6(param_2);
  return;
}



// FUNCTION 14806607c FUN_14806607c body=54 status=ok
// SIG undefined FUN_14806607c(void)

undefined1 FUN_14806607c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14806635a(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1480660da FUN_1480660da body=59 status=ok
// SIG undefined FUN_1480660da(void)

undefined8 FUN_1480660da(longlong *param_1)

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



// FUNCTION 148066120 FUN_148066120 body=55 status=ok
// SIG undefined FUN_148066120(void)

void FUN_148066120(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1480661a6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1480661a6 FUN_1480661a6 body=54 status=ok
// SIG undefined FUN_1480661a6(void)

void FUN_1480661a6(longlong *param_1)

{
  FUN_1480661dc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1480661dc FUN_1480661dc body=379 status=ok
// SIG undefined FUN_1480661dc(void)

void FUN_1480661dc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      plVar2 = (longlong *)(*local_78 + (longlong)iStack_5c * 0xa0);
      FUN_14006c2ae(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14152de66(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar4 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14806635a FUN_14806635a body=122 status=ok
// SIG undefined FUN_14806635a(void)

longlong FUN_14806635a(longlong param_1,longlong param_2)

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
    FUN_1480663d4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1480663d4 FUN_1480663d4 body=221 status=ok
// SIG undefined FUN_1480663d4(void)

undefined8 * FUN_1480663d4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1480661dc(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1413d87fe(param_1);
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
          FUN_1480664b2(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x26) = *(undefined8 *)(puVar4 + 0x26);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x28;
        puVar6 = puVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1480664b2 FUN_1480664b2 body=105 status=ok
// SIG undefined FUN_1480664b2(void)

undefined8 * FUN_1480664b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
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
  FUN_1481cfe3c(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 148066564 FUN_148066564 body=59 status=ok
// SIG undefined FUN_148066564(void)

undefined8 FUN_148066564(longlong *param_1)

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



// FUNCTION 14806667e FUN_14806667e body=59 status=ok
// SIG undefined FUN_14806667e(void)

undefined8 FUN_14806667e(longlong *param_1)

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



// FUNCTION 148066720 FUN_148066720 body=50 status=ok
// SIG undefined FUN_148066720(void)

void FUN_148066720(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_144a5dc74(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_144a5dc74(param_2 + 5);
  *(undefined1 *)(param_2 + 7) = 1;
  return;
}



// FUNCTION 148066752 FUN_148066752 body=50 status=ok
// SIG undefined FUN_148066752(void)

void FUN_148066752(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_144a5dc74(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_144a5dc74(param_2 + 5);
  *(undefined1 *)(param_2 + 7) = 1;
  return;
}



// FUNCTION 1480667a2 FUN_1480667a2 body=54 status=ok
// SIG undefined FUN_1480667a2(void)

undefined1 FUN_1480667a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148066904(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148066800 FUN_148066800 body=59 status=ok
// SIG undefined FUN_148066800(void)

undefined8 FUN_148066800(longlong *param_1)

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



// FUNCTION 148066846 FUN_148066846 body=34 status=ok
// SIG undefined FUN_148066846(void)

void FUN_148066846(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1480668b6(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1480668b6 FUN_1480668b6 body=77 status=ok
// SIG undefined FUN_1480668b6(void)

void FUN_1480668b6(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  FUN_1401b9920(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480668f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148066904 FUN_148066904 body=145 status=ok
// SIG undefined FUN_148066904(void)

undefined8 * FUN_148066904(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  plVar1 = (longlong *)param_2[1];
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != plVar1) {
    param_1[1] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_1407b2780(param_1 + 3,param_2 + 3);
  plVar1 = (longlong *)param_2[5];
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != plVar1) {
    param_1[5] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 148066996 FUN_148066996 body=60 status=ok
// SIG undefined FUN_148066996(void)

void FUN_148066996(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  return;
}



// FUNCTION 1480669d2 FUN_1480669d2 body=58 status=ok
// SIG undefined FUN_1480669d2(void)

void FUN_1480669d2(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  return;
}



// FUNCTION 148066a78 FUN_148066a78 body=59 status=ok
// SIG undefined FUN_148066a78(void)

undefined8 FUN_148066a78(longlong *param_1)

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



// FUNCTION 148066b18 FUN_148066b18 body=29 status=ok
// SIG undefined FUN_148066b18(void)

undefined8 FUN_148066b18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148066b36 FUN_148066b36 body=61 status=ok
// SIG undefined FUN_148066b36(void)

void FUN_148066b36(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  param_2[5] = 0;
  *param_2 = 1;
  *(undefined8 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 3) = 0;
  uVar1 = FUN_144830b78(param_2 + 3,&DAT_14cb42160);
  param_2[3] = uVar1;
  *(undefined8 *)(param_2 + 4) = 0;
  return;
}



// FUNCTION 148066b74 FUN_148066b74 body=51 status=ok
// SIG undefined FUN_148066b74(void)

void FUN_148066b74(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 1;
  *(undefined8 *)(param_2 + 1) = 0;
  uVar1 = FUN_144830b78(param_2 + 3,&DAT_14cb42160);
  param_2[3] = uVar1;
  *(undefined8 *)(param_2 + 4) = 0;
  return;
}



// FUNCTION 148066c0e FUN_148066c0e body=59 status=ok
// SIG undefined FUN_148066c0e(void)

undefined8 FUN_148066c0e(longlong *param_1)

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



// FUNCTION 148066cb0 FUN_148066cb0 body=79 status=ok
// SIG undefined FUN_148066cb0(void)

void FUN_148066cb0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6ad70;
  param_2[3] = 0;
  return;
}



// FUNCTION 148066d00 FUN_148066d00 body=72 status=ok
// SIG undefined FUN_148066d00(void)

void FUN_148066d00(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6ad70;
  param_2[3] = 0;
  return;
}



// FUNCTION 148066dc2 FUN_148066dc2 body=59 status=ok
// SIG undefined FUN_148066dc2(void)

undefined8 FUN_148066dc2(longlong *param_1)

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



// FUNCTION 148066e62 FUN_148066e62 body=29 status=ok
// SIG undefined FUN_148066e62(void)

undefined8 FUN_148066e62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148066e80 FUN_148066e80 body=92 status=ok
// SIG undefined FUN_148066e80(void)

void FUN_148066e80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar2 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *param_2 = &PTR_FUN_14ad6aee0;
  uVar1 = DAT_14c84635c;
  param_2[3] = DAT_14c84635c;
  param_2[4] = uVar1;
  return;
}



// FUNCTION 148066edc FUN_148066edc body=83 status=ok
// SIG undefined FUN_148066edc(void)

void FUN_148066edc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar2 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *param_2 = &PTR_FUN_14ad6aee0;
  uVar1 = DAT_14c84635c;
  param_2[3] = DAT_14c84635c;
  param_2[4] = uVar1;
  return;
}



// FUNCTION 148066fa6 FUN_148066fa6 body=59 status=ok
// SIG undefined FUN_148066fa6(void)

undefined8 FUN_148066fa6(longlong *param_1)

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



// FUNCTION 148067046 FUN_148067046 body=29 status=ok
// SIG undefined FUN_148067046(void)

undefined8 FUN_148067046(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148067064 FUN_148067064 body=119 status=ok
// SIG undefined FUN_148067064(void)

void FUN_148067064(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6b060;
  param_2[3] = DAT_14c846330;
  *(undefined4 *)(param_2 + 4) = DAT_14c846338;
  *(undefined8 *)((longlong)param_2 + 0x24) = DAT_14c846330;
  *(undefined4 *)((longlong)param_2 + 0x2c) = DAT_14c846338;
  return;
}



// FUNCTION 1480670dc FUN_1480670dc body=108 status=ok
// SIG undefined FUN_1480670dc(void)

void FUN_1480670dc(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6b060;
  param_2[3] = DAT_14c846330;
  *(undefined4 *)(param_2 + 4) = DAT_14c846338;
  *(undefined8 *)((longlong)param_2 + 0x24) = DAT_14c846330;
  *(undefined4 *)((longlong)param_2 + 0x2c) = DAT_14c846338;
  return;
}



// FUNCTION 1480671cc FUN_1480671cc body=59 status=ok
// SIG undefined FUN_1480671cc(void)

undefined8 FUN_1480671cc(longlong *param_1)

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



// FUNCTION 14806726c FUN_14806726c body=29 status=ok
// SIG undefined FUN_14806726c(void)

undefined8 FUN_14806726c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14806728a FUN_14806728a body=96 status=ok
// SIG undefined FUN_14806728a(void)

void FUN_14806728a(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6b1d0;
  param_2[3] = &DAT_3f8000003f800000;
  param_2[4] = &DAT_3f8000003f800000;
  param_2[5] = &DAT_3f8000003f800000;
  param_2[6] = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 1480672ea FUN_1480672ea body=83 status=ok
// SIG undefined FUN_1480672ea(void)

void FUN_1480672ea(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6b1d0;
  param_2[3] = &DAT_3f8000003f800000;
  param_2[4] = &DAT_3f8000003f800000;
  param_2[5] = &DAT_3f8000003f800000;
  param_2[6] = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 1480673c0 FUN_1480673c0 body=59 status=ok
// SIG undefined FUN_1480673c0(void)

undefined8 FUN_1480673c0(longlong *param_1)

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



// FUNCTION 148067460 FUN_148067460 body=29 status=ok
// SIG undefined FUN_148067460(void)

undefined8 FUN_148067460(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14806747e FUN_14806747e body=107 status=ok
// SIG undefined FUN_14806747e(void)

void FUN_14806747e(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6b340;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f80000000000000;
  return;
}



// FUNCTION 1480674ea FUN_1480674ea body=89 status=ok
// SIG undefined FUN_1480674ea(void)

void FUN_1480674ea(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6b340;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f80000000000000;
  return;
}



// FUNCTION 148067568 FUN_148067568 body=78 status=ok
// SIG undefined FUN_148067568(void)

undefined8 FUN_148067568(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a67f5c(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1480675de FUN_1480675de body=59 status=ok
// SIG undefined FUN_1480675de(void)

undefined8 FUN_1480675de(longlong *param_1)

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



// FUNCTION 148067624 FUN_148067624 body=48 status=ok
// SIG undefined FUN_148067624(void)

void FUN_148067624(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14ad6b340;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 1480676a2 FUN_1480676a2 body=57 status=ok
// SIG undefined FUN_1480676a2(void)

undefined8 * FUN_1480676a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad6b340;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480676dc FUN_1480676dc body=107 status=ok
// SIG undefined FUN_1480676dc(void)

void FUN_1480676dc(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6b4b0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f80000000000000;
  return;
}



// FUNCTION 148067748 FUN_148067748 body=89 status=ok
// SIG undefined FUN_148067748(void)

void FUN_148067748(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6b4b0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f80000000000000;
  return;
}



// FUNCTION 1480677c6 FUN_1480677c6 body=78 status=ok
// SIG undefined FUN_1480677c6(void)

undefined8 FUN_1480677c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1401f7650(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14806783c FUN_14806783c body=59 status=ok
// SIG undefined FUN_14806783c(void)

undefined8 FUN_14806783c(longlong *param_1)

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



// FUNCTION 148067882 FUN_148067882 body=48 status=ok
// SIG undefined FUN_148067882(void)

void FUN_148067882(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14ad6b4b0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148067900 FUN_148067900 body=57 status=ok
// SIG undefined FUN_148067900(void)

undefined8 * FUN_148067900(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad6b4b0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14806793a FUN_14806793a body=107 status=ok
// SIG undefined FUN_14806793a(void)

void FUN_14806793a(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6b620;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f80000000000000;
  return;
}



// FUNCTION 1480679a6 FUN_1480679a6 body=89 status=ok
// SIG undefined FUN_1480679a6(void)

void FUN_1480679a6(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6b620;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f80000000000000;
  return;
}



// FUNCTION 148067a24 FUN_148067a24 body=78 status=ok
// SIG undefined FUN_148067a24(void)

undefined8 FUN_148067a24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_140de4b5e(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148067a9a FUN_148067a9a body=59 status=ok
// SIG undefined FUN_148067a9a(void)

undefined8 FUN_148067a9a(longlong *param_1)

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



// FUNCTION 148067ae0 FUN_148067ae0 body=48 status=ok
// SIG undefined FUN_148067ae0(void)

void FUN_148067ae0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14ad6b620;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148067b5e FUN_148067b5e body=57 status=ok
// SIG undefined FUN_148067b5e(void)

undefined8 * FUN_148067b5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad6b620;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148067b98 FUN_148067b98 body=107 status=ok
// SIG undefined FUN_148067b98(void)

void FUN_148067b98(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f80000000000000;
  *param_2 = &PTR_FUN_14ad6b790;
  return;
}



// FUNCTION 148067c04 FUN_148067c04 body=89 status=ok
// SIG undefined FUN_148067c04(void)

void FUN_148067c04(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f80000000000000;
  *param_2 = &PTR_FUN_14ad6b790;
  return;
}



// FUNCTION 148067c82 FUN_148067c82 body=78 status=ok
// SIG undefined FUN_148067c82(void)

undefined8 FUN_148067c82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_140de4b5e(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148067cf8 FUN_148067cf8 body=59 status=ok
// SIG undefined FUN_148067cf8(void)

undefined8 FUN_148067cf8(longlong *param_1)

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



// FUNCTION 148067d3e FUN_148067d3e body=48 status=ok
// SIG undefined FUN_148067d3e(void)

void FUN_148067d3e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14ad6b620;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148067dbc FUN_148067dbc body=57 status=ok
// SIG undefined FUN_148067dbc(void)

undefined8 * FUN_148067dbc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad6b620;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148067df6 FUN_148067df6 body=107 status=ok
// SIG undefined FUN_148067df6(void)

void FUN_148067df6(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6b910;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f80000000000000;
  return;
}



// FUNCTION 148067e62 FUN_148067e62 body=89 status=ok
// SIG undefined FUN_148067e62(void)

void FUN_148067e62(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *param_2 = &PTR_FUN_14ad6b910;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f80000000000000;
  return;
}



// FUNCTION 148067ee0 FUN_148067ee0 body=78 status=ok
// SIG undefined FUN_148067ee0(void)

undefined8 FUN_148067ee0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_14479f9aa(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148067f56 FUN_148067f56 body=59 status=ok
// SIG undefined FUN_148067f56(void)

undefined8 FUN_148067f56(longlong *param_1)

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



// FUNCTION 148067f9c FUN_148067f9c body=48 status=ok
// SIG undefined FUN_148067f9c(void)

void FUN_148067f9c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14ad6b910;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 14806801a FUN_14806801a body=57 status=ok
// SIG undefined FUN_14806801a(void)

undefined8 * FUN_14806801a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad6b910;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148068266 FUN_148068266 body=197 status=ok
// SIG undefined FUN_148068266(void)

void FUN_148068266(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    FUN_1481fc274(param_1 + 0x30,local_3c,&DAT_14c846330);
    lVar1 = FUN_14806bc5a(param_2);
    *(undefined4 *)(lVar1 + 0x58) = *(undefined4 *)(param_1 + 0x60);
    *(float *)(lVar1 + 0x60) = local_38 + *(float *)(lVar1 + 0x60);
    *(float *)(lVar1 + 100) = local_34 + *(float *)(lVar1 + 100);
    *(float *)(lVar1 + 0x68) = local_30 + *(float *)(lVar1 + 0x68);
    *(float *)(lVar1 + 0x6c) = local_2c + *(float *)(lVar1 + 0x6c);
    *(float *)(lVar1 + 0x70) = local_28 + *(float *)(lVar1 + 0x70);
    *(float *)(lVar1 + 0x74) = local_24 + *(float *)(lVar1 + 0x74);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806832c FUN_14806832c body=221 status=ok
// SIG undefined FUN_14806832c(void)

void FUN_14806832c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [36];
  undefined8 local_74;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1481fe77c();
  puVar4 = (undefined8 *)FUN_14806c4a6(param_2);
  uVar1 = FUN_1481fe784(param_2,lVar3);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  uVar2 = FUN_1481fe784(param_2,lVar3 + 0xd8);
  *(uint *)(puVar4 + 2) = uVar2;
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) &&
     ((uVar2 & *(uint *)((longlong)puVar4 + 0xc)) != 0xffffffff)) {
    FUN_14806c530(param_2,&local_74,param_1 + 0x30);
    *(undefined4 *)(puVar4 + 1) = local_6c;
    *puVar4 = local_74;
    local_58 = 0;
    local_48 = &PTR_LAB_14ad7a5c0;
    local_40 = FUN_14806c5da;
    local_68 = &LAB_14806c8d4;
    FUN_1481fe7cc(param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806840a FUN_14806840a body=34 status=ok
// SIG undefined FUN_14806840a(void)

void FUN_14806840a(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145f013c2();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 14806842c FUN_14806842c body=91 status=ok
// SIG undefined FUN_14806842c(void)

void FUN_14806842c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar2 = *(int *)(param_2 + 0x28) + 3U & 0xfffffffc;
  *(uint *)(param_2 + 0x28) = uVar2 + 0x14;
  lVar1 = *(longlong *)(param_2 + 0x18);
  uVar4 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  lVar3 = FUN_145f013c2();
  *(uint *)(param_2 + 0x38) = *(int *)(lVar3 + 0x3c) + uVar4;
  lVar3 = *(longlong *)(param_2 + 0x30);
  *(undefined4 *)(lVar3 + 8 + (ulonglong)uVar4) = *(undefined4 *)(lVar1 + 8 + (longlong)(int)uVar2);
  *(undefined8 *)(lVar3 + (ulonglong)uVar4) = *(undefined8 *)(lVar1 + (int)uVar2);
  return;
}



// FUNCTION 14806848e FUN_14806848e body=115 status=ok
// SIG undefined FUN_14806848e(void)

void FUN_14806848e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    lVar1 = FUN_14806bc5a(param_2);
    FUN_1481fc2bc(param_1 + 0x30,&local_2c,0x3f800000);
    *(undefined4 *)(lVar1 + 0x14) = local_24;
    *(undefined8 *)(lVar1 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148068502 FUN_148068502 body=417 status=ok
// SIG undefined FUN_148068502(void)

void FUN_148068502(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_94;
  uint local_8c;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar3 = (uint *)FUN_14806c926(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    puVar5 = puVar3 + 1;
    uVar9 = 0;
    local_a0 = param_1 + 0x290;
    local_a8 = param_1 + 0x1c8;
    local_b0 = param_1 + 0x100;
    do {
      iVar8 = (int)uVar9;
      iVar1 = FUN_14806c9c6(param_1,uVar9 & 0xffffffff);
      if (iVar1 != 0) {
        lVar4 = FUN_1481fe77c();
        uVar2 = FUN_1481fe784(param_2,lVar4 + (uVar9 & 0xffffffff) * 0xc + 0x18);
        puVar3[uVar9 + 0x31] = uVar2;
        if (uVar2 != 0xffffffff) {
          *puVar3 = *puVar3 | iVar1 << ((char)uVar9 * '\x04' & 0x1fU);
          lVar4 = 8;
          puVar7 = puVar5;
          do {
            lVar6 = local_a0;
            if (((iVar8 != 3) && (lVar6 = local_a8, iVar8 != 2)) &&
               (lVar6 = param_1 + 0x38, iVar8 == 1)) {
              lVar6 = local_b0;
            }
            FUN_14806c530(param_2,&local_94,lVar6 + lVar4);
            puVar7[2] = local_8c;
            *(undefined8 *)puVar7 = local_94;
            lVar4 = lVar4 + 0x30;
            puVar7 = puVar7 + 3;
          } while (lVar4 != 200);
        }
      }
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + 0xc;
    } while (uVar9 != 4);
    if (*puVar3 != 0) {
      local_78 = 0;
      local_68 = &PTR_LAB_14ad7a5c0;
      local_60 = FUN_14806ca18;
      local_88 = &LAB_14806c8d4;
      FUN_1481fe7cc(param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480686a4 FUN_1480686a4 body=34 status=ok
// SIG undefined FUN_1480686a4(void)

void FUN_1480686a4(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145ee7d08();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 1480686c6 FUN_1480686c6 body=476 status=ok
// SIG undefined FUN_1480686c6(void)

void FUN_1480686c6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = (longlong)(*(int *)(param_2 + 0x28) + 3) & 0xfffffffffffffffc;
  *(int *)(param_2 + 0x28) = (int)uVar3 + 0xd4;
  lVar1 = *(longlong *)(param_2 + 0x18);
  uVar4 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  uVar5 = (ulonglong)uVar4;
  lVar2 = FUN_145ee7d08();
  *(uint *)(param_2 + 0x38) = uVar4 + *(int *)(lVar2 + 0x3c);
  lVar2 = *(longlong *)(param_2 + 0x30);
  *(undefined4 *)(lVar2 + uVar5) = *(undefined4 *)(lVar1 + uVar3);
  *(undefined4 *)(lVar2 + 0x18 + uVar5) = *(undefined4 *)(lVar1 + 0xc + uVar3);
  *(undefined8 *)(lVar2 + 0x10 + uVar5) = *(undefined8 *)(lVar1 + 4 + uVar3);
  *(undefined4 *)(lVar2 + 0x28 + uVar5) = *(undefined4 *)(lVar1 + 0x18 + uVar3);
  *(undefined8 *)(lVar2 + 0x20 + uVar5) = *(undefined8 *)(lVar1 + 0x10 + uVar3);
  *(undefined4 *)(lVar2 + 0x38 + uVar5) = *(undefined4 *)(lVar1 + 0x24 + uVar3);
  *(undefined8 *)(lVar2 + 0x30 + uVar5) = *(undefined8 *)(lVar1 + 0x1c + uVar3);
  *(undefined4 *)(lVar2 + 0x48 + uVar5) = *(undefined4 *)(lVar1 + 0x30 + uVar3);
  *(undefined8 *)(lVar2 + 0x40 + uVar5) = *(undefined8 *)(lVar1 + 0x28 + uVar3);
  *(undefined4 *)(lVar2 + 0x58 + uVar5) = *(undefined4 *)(lVar1 + 0x3c + uVar3);
  *(undefined8 *)(lVar2 + 0x50 + uVar5) = *(undefined8 *)(lVar1 + 0x34 + uVar3);
  *(undefined4 *)(lVar2 + 0x68 + uVar5) = *(undefined4 *)(lVar1 + 0x48 + uVar3);
  *(undefined8 *)(lVar2 + 0x60 + uVar5) = *(undefined8 *)(lVar1 + 0x40 + uVar3);
  *(undefined4 *)(lVar2 + 0x78 + uVar5) = *(undefined4 *)(lVar1 + 0x54 + uVar3);
  *(undefined8 *)(lVar2 + 0x70 + uVar5) = *(undefined8 *)(lVar1 + 0x4c + uVar3);
  *(undefined4 *)(lVar2 + 0x88 + uVar5) = *(undefined4 *)(lVar1 + 0x60 + uVar3);
  *(undefined8 *)(lVar2 + 0x80 + uVar5) = *(undefined8 *)(lVar1 + 0x58 + uVar3);
  *(undefined4 *)(lVar2 + 0x98 + uVar5) = *(undefined4 *)(lVar1 + 0x6c + uVar3);
  *(undefined8 *)(lVar2 + 0x90 + uVar5) = *(undefined8 *)(lVar1 + 100 + uVar3);
  *(undefined4 *)(lVar2 + 0xa8 + uVar5) = *(undefined4 *)(lVar1 + 0x78 + uVar3);
  *(undefined8 *)(lVar2 + 0xa0 + uVar5) = *(undefined8 *)(lVar1 + 0x70 + uVar3);
  *(undefined4 *)(lVar2 + 0xb8 + uVar5) = *(undefined4 *)(lVar1 + 0x84 + uVar3);
  *(undefined8 *)(lVar2 + 0xb0 + uVar5) = *(undefined8 *)(lVar1 + 0x7c + uVar3);
  *(undefined4 *)(lVar2 + 200 + uVar5) = *(undefined4 *)(lVar1 + 0x90 + uVar3);
  *(undefined8 *)(lVar2 + 0xc0 + uVar5) = *(undefined8 *)(lVar1 + 0x88 + uVar3);
  *(undefined4 *)(lVar2 + 0xd8 + uVar5) = *(undefined4 *)(lVar1 + 0x9c + uVar3);
  *(undefined8 *)(lVar2 + 0xd0 + uVar5) = *(undefined8 *)(lVar1 + 0x94 + uVar3);
  *(undefined4 *)(lVar2 + 0xe8 + uVar5) = *(undefined4 *)(lVar1 + 0xa8 + uVar3);
  *(undefined8 *)(lVar2 + 0xe0 + uVar5) = *(undefined8 *)(lVar1 + 0xa0 + uVar3);
  *(undefined4 *)(lVar2 + 0xf8 + uVar5) = *(undefined4 *)(lVar1 + 0xb4 + uVar3);
  *(undefined8 *)(lVar2 + 0xf0 + uVar5) = *(undefined8 *)(lVar1 + 0xac + uVar3);
  *(undefined4 *)(lVar2 + 0x108 + uVar5) = *(undefined4 *)(lVar1 + 0xc0 + uVar3);
  *(undefined8 *)(lVar2 + 0x100 + uVar5) = *(undefined8 *)(lVar1 + 0xb8 + uVar3);
  return;
}



// FUNCTION 1480688a2 FUN_1480688a2 body=143 status=ok
// SIG undefined FUN_1480688a2(void)

void FUN_1480688a2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    local_40 = 0;
    local_38 = 0xc4750000;
    FUN_1481fc274(param_1 + 0x30,local_34);
    lVar1 = FUN_14806bc5a(param_2);
    *(undefined8 *)(lVar1 + 0x7c) = local_30;
    *(undefined4 *)(lVar1 + 0x84) = local_28;
    *(undefined8 *)(lVar1 + 0x88) = local_24;
    *(undefined4 *)(lVar1 + 0x90) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148068932 FUN_148068932 body=1210 status=ok
// SIG undefined FUN_148068932(void)

void FUN_148068932(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  local_68 = &PTR_LAB_14ad7a5c0;
  local_60 = FUN_14806cd50;
  local_88 = &LAB_14806c8d4;
  FUN_1481fe7cc(param_2);
  puVar3 = (uint *)FUN_14806d324(param_2);
  bVar8 = (*(uint *)(param_1 + 0xb0) & 0xfffffffd) == 1;
  *puVar3 = (uint)bVar8;
  *puVar3 = (uint)bVar8 + (uint)((*(uint *)(param_1 + 0xf8) & 0xfffffffd) == 1) * 2;
  FUN_14806d39c(param_2,&local_ac,param_1 + 0x148);
  puVar3[3] = uStack_a4;
  *(ulonglong *)(puVar3 + 1) = CONCAT44(uStack_a8,local_ac);
  FUN_1481fc2bc(param_1 + 0x30,&local_ac,0x3f800000);
  puVar3[6] = uStack_a4;
  *(ulonglong *)(puVar3 + 4) = CONCAT44(uStack_a8,local_ac);
  local_e8 = &DAT_3f8000003f800000;
  uStack_e0 = 0x3f800000;
  uStack_dc = 0x3f800000;
  local_c8 = &DAT_3f8000003f800000;
  puStack_c0 = &DAT_3f8000003f800000;
  local_d8._0_4_ = 0x3f800000;
  local_d8._4_4_ = 0x3f800000;
  uStack_d0 = &DAT_3f8000003f800000;
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar1 = FUN_1482029d2(param_2,param_1 + 0x5c);
  }
  else {
    FUN_148201e8c(param_1 + 0x50,&local_ac,&local_e8);
    local_c8 = (undefined1 *)CONCAT44(uStack_a4,uStack_a8);
    puStack_c0 = (undefined1 *)CONCAT44(uStack_9c,uStack_a0);
    local_d8._0_4_ = uStack_98;
    local_d8._4_4_ = uStack_94;
    uStack_d0 = puStack_90;
    uVar1 = local_ac;
  }
  puVar3[7] = uVar1;
  *(undefined1 **)(puVar3 + 8) = local_c8;
  *(undefined1 **)(puVar3 + 10) = puStack_c0;
  puVar3[0xc] = (uint)local_d8;
  puVar3[0xd] = local_d8._4_4_;
  puVar3[0xe] = (uint)uStack_d0;
  puVar3[0xf] = uStack_d0._4_4_;
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar2 = FUN_1482029d2(param_2,param_1 + 0x94);
    uVar1 = 0x3f800000;
    uVar9 = 0x3f800000;
  }
  else {
    FUN_1481fc2bc(param_1 + 0x88,&local_ac,0x3f800000);
    uVar1 = uStack_a8;
    uVar9 = uStack_a4;
    uVar2 = local_ac;
  }
  puVar3[0x10] = uVar2;
  puVar3[0x11] = uVar1;
  puVar3[0x12] = uVar9;
  local_c8 = (undefined1 *)0x4120000041200000;
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar6 = 0x4120000041200000;
    uVar1 = FUN_1482029d2(param_2,param_1 + 0xb4);
    uVar7 = uVar6;
  }
  else {
    FUN_148201e62(param_1 + 0xa8,&local_ac,&local_c8);
    uVar6 = CONCAT44(uStack_a4,uStack_a8);
    uVar7 = CONCAT44(uStack_9c,uStack_a0);
    uVar1 = local_ac;
  }
  puVar3[0x13] = uVar1;
  *(undefined8 *)(puVar3 + 0x14) = uVar6;
  *(undefined8 *)(puVar3 + 0x16) = uVar7;
  if (*(int *)(param_1 + 0xd8) == 0) {
    uVar2 = FUN_1482029d2(param_2,param_1 + 0xdc);
    uVar1 = 0;
    uVar9 = 0;
  }
  else {
    FUN_1481fc2bc(param_1 + 0xd0,&local_ac,0);
    uVar1 = uStack_a4;
    uVar9 = uStack_a8;
    uVar2 = local_ac;
  }
  puVar3[0x18] = uVar2;
  puVar3[0x19] = uVar9;
  puVar3[0x1a] = uVar1;
  uStack_e0 = DAT_14c846358;
  local_e8 = DAT_14c846350;
  local_c8 = DAT_14c846350;
  puStack_c0._0_4_ = DAT_14c846358;
  uStack_d0._0_4_ = DAT_14c846358;
  local_d8 = DAT_14c846350;
  if (*(int *)(param_1 + 0xf8) == 0) {
    uVar1 = FUN_1482029d2(param_2,param_1 + 0xfc);
  }
  else {
    FUN_1481fc274(param_1 + 0xf0,&local_ac,&local_e8);
    local_c8 = (undefined1 *)CONCAT44(uStack_a4,uStack_a8);
    puStack_c0._0_4_ = uStack_a0;
    local_d8 = (undefined1 *)CONCAT44(uStack_98,uStack_9c);
    uStack_d0._0_4_ = uStack_94;
    uVar1 = local_ac;
  }
  puVar3[0x1b] = uVar1;
  *(undefined1 **)(puVar3 + 0x1c) = local_c8;
  puVar3[0x1e] = (uint)puStack_c0;
  *(undefined1 **)(puVar3 + 0x1f) = local_d8;
  puVar3[0x21] = (uint)uStack_d0;
  if (*(int *)(param_1 + 0x130) == 0) {
    uVar2 = FUN_1482029d2(param_2,param_1 + 0x134);
    uVar1 = 0x41200000;
    uVar9 = 0x41200000;
  }
  else {
    FUN_1481fc2bc(param_1 + 0x128,&local_ac,0x41200000);
    uVar1 = uStack_a4;
    uVar9 = uStack_a8;
    uVar2 = local_ac;
  }
  puVar3[0x22] = uVar2;
  puVar3[0x23] = uVar9;
  puVar3[0x24] = uVar1;
  lVar4 = FUN_1481fe77c();
  uVar1 = FUN_1481fe784(param_2,lVar4 + 0x60);
  puVar3[0x25] = uVar1;
  uVar1 = FUN_1481fe784(param_2,lVar4 + 0xc);
  puVar3[0x26] = uVar1;
  uVar1 = FUN_1481fe784(param_2,lVar4 + 0x6c);
  puVar3[0x27] = uVar1;
  uVar1 = FUN_1481fe784(param_2,lVar4 + 0x9c);
  puVar3[0x28] = uVar1;
  uVar1 = FUN_1481fe784(param_2,lVar4 + 0xa8);
  puVar3[0x29] = uVar1;
  uVar1 = FUN_1481fe784(param_2,lVar4 + 0x78);
  puVar3[0x2a] = uVar1;
  uVar1 = FUN_1481fe784(param_2,lVar4 + 0xf0);
  puVar3[0x2b] = uVar1;
  uVar1 = FUN_1481fe784(param_2,lVar4 + 0xfc);
  puVar3[0x2c] = uVar1;
  uVar1 = FUN_1481fe784(param_2,lVar4 + 300);
  puVar3[0x2d] = uVar1;
  uVar1 = FUN_1481fe784(param_2,lVar4 + 0x138);
  puVar3[0x2e] = uVar1;
  uVar1 = FUN_1481fe784(param_2,lVar4 + 0x108);
  puVar3[0x2f] = uVar1;
  puVar5 = (undefined8 *)FUN_14806bc5a(param_2);
  FUN_1481fc2bc(param_1 + 0x88,&local_ac,0x3f800000);
  *(uint *)(puVar5 + 1) = uStack_a4;
  *puVar5 = CONCAT44(uStack_a8,local_ac);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148068dee FUN_148068dee body=34 status=ok
// SIG undefined FUN_148068dee(void)

void FUN_148068dee(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145d46df4();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 148068e10 FUN_148068e10 body=531 status=ok
// SIG undefined FUN_148068e10(void)

void FUN_148068e10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  uVar13 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  lVar10 = FUN_145d46df4();
  *(uint *)(param_2 + 0x38) = uVar13 + *(int *)(lVar10 + 0x3c);
  lVar10 = *(longlong *)(param_2 + 0x30) + (ulonglong)uVar13;
  uVar11 = (longlong)(*(int *)(param_2 + 0x28) + 3) & 0xfffffffffffffffc;
  *(int *)(param_2 + 0x28) = (int)uVar11 + 0xc0;
  lVar12 = *(longlong *)(param_2 + 0x18);
  puVar17 = (undefined4 *)(*(longlong *)(param_2 + 0x30) + 0x30 + (ulonglong)uVar13);
  puVar17[-0xc] = *(undefined4 *)(lVar12 + uVar11);
  *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(lVar12 + 4 + uVar11);
  puVar17[-6] = *(undefined4 *)(lVar12 + 0xc + uVar11);
  fVar3 = *(float *)(lVar12 + 0x3c + uVar11);
  fVar4 = *(float *)(lVar12 + 0x2c + uVar11);
  lVar1 = lVar12 + uVar11;
  fVar5 = *(float *)(lVar12 + 0x38 + uVar11);
  fVar6 = *(float *)(lVar12 + 0x28 + uVar11);
  fVar7 = *(float *)(lVar12 + 0x34 + uVar11);
  fVar8 = *(float *)(lVar12 + 0x24 + uVar11);
  puVar17[-4] = *(float *)(lVar12 + 0x30 + uVar11) - *(float *)(lVar12 + 0x20 + uVar11);
  puVar17[-3] = fVar7 - fVar8;
  puVar17[-2] = fVar5 - fVar6;
  puVar17[-1] = fVar3 - fVar4;
  iVar9 = *(int *)(lVar12 + 0x1c + uVar11);
  if (iVar9 == -1) {
    lVar12 = uVar11 + lVar12;
    uVar18 = *(undefined4 *)(lVar12 + 0x20);
    uVar19 = *(undefined4 *)(lVar12 + 0x24);
    uVar20 = *(undefined4 *)(lVar12 + 0x28);
    uVar21 = *(undefined4 *)(lVar12 + 0x2c);
  }
  else {
    puVar2 = (undefined4 *)(*(longlong *)(param_2 + 8) + (longlong)(iVar9 << 2));
    uVar18 = *puVar2;
    uVar19 = puVar2[1];
    uVar20 = puVar2[2];
    uVar21 = puVar2[3];
  }
  *puVar17 = uVar18;
  puVar17[1] = uVar19;
  puVar17[2] = uVar20;
  puVar17[3] = uVar21;
  fVar3 = *(float *)(lVar1 + 0x5c);
  fVar4 = *(float *)(lVar1 + 0x54);
  *(float *)(lVar10 + 0x40) = *(float *)(lVar1 + 0x58) - *(float *)(lVar1 + 0x50);
  *(float *)(lVar10 + 0x44) = fVar3 - fVar4;
  puVar14 = (undefined8 *)((longlong)(*(int *)(lVar1 + 0x4c) * 4) + *(longlong *)(param_2 + 8));
  if (*(int *)(lVar1 + 0x4c) == -1) {
    puVar14 = (undefined8 *)(lVar1 + 0x50);
  }
  *(undefined8 *)(lVar10 + 0x48) = *puVar14;
  *(float *)(lVar10 + 0x50) = *(float *)(lVar1 + 0x68) - *(float *)(lVar1 + 100);
  puVar17 = (undefined4 *)((longlong)(*(int *)(lVar1 + 0x60) * 4) + *(longlong *)(param_2 + 8));
  if (*(int *)(lVar1 + 0x60) == -1) {
    puVar17 = (undefined4 *)(lVar1 + 100);
  }
  *(undefined4 *)(lVar10 + 0x54) = *puVar17;
  fVar3 = *(float *)(lVar1 + 0x84);
  fVar4 = *(float *)(lVar1 + 0x78);
  fVar5 = *(float *)(lVar1 + 0x80);
  fVar6 = *(float *)(lVar1 + 0x74);
  *(float *)(lVar10 + 0x60) = *(float *)(lVar1 + 0x7c) - *(float *)(lVar1 + 0x70);
  *(float *)(lVar10 + 100) = fVar5 - fVar6;
  *(float *)(lVar10 + 0x68) = fVar3 - fVar4;
  if (*(int *)(lVar1 + 0x6c) == -1) {
    *(undefined4 *)(lVar10 + 0x78) = *(undefined4 *)(lVar1 + 0x78);
    uVar16 = *(undefined8 *)(lVar1 + 0x70);
  }
  else {
    lVar12 = *(longlong *)(param_2 + 8);
    lVar15 = (longlong)(*(int *)(lVar1 + 0x6c) << 2);
    *(undefined4 *)(lVar10 + 0x78) = *(undefined4 *)(lVar12 + 8 + lVar15);
    uVar16 = *(undefined8 *)(lVar12 + lVar15);
  }
  *(undefined8 *)(lVar10 + 0x70) = uVar16;
  *(float *)(lVar10 + 0x7c) = *(float *)(lVar1 + 0x90) - *(float *)(lVar1 + 0x8c);
  puVar17 = (undefined4 *)((longlong)(*(int *)(lVar1 + 0x88) * 4) + *(longlong *)(param_2 + 8));
  if (*(int *)(lVar1 + 0x88) == -1) {
    puVar17 = (undefined4 *)(lVar1 + 0x8c);
  }
  *(undefined4 *)(lVar10 + 0x80) = *puVar17;
  return;
}



// FUNCTION 148069024 FUN_148069024 body=455 status=ok
// SIG undefined FUN_148069024(void)

void FUN_148069024(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar3 = (undefined1 *)FUN_14806d972(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    lVar4 = FUN_1481fe77c();
    uVar1 = FUN_1481fe784(param_2,lVar4 + 0x54);
    *(undefined4 *)(puVar3 + 0x20) = uVar1;
    uVar2 = FUN_1481fe784(param_2,lVar4 + 0xe4);
    *(uint *)(puVar3 + 0x24) = uVar2;
    if ((uVar2 & *(uint *)(puVar3 + 0x20)) != 0xffffffff) {
      *puVar3 = 1;
      local_90 = DAT_14c846330;
      local_88 = DAT_14c846338;
      local_98 = DAT_14c846338;
      local_a0 = DAT_14c846330;
      if (*(int *)(param_1 + 0x38) == 0) {
        local_84 = FUN_1482029d2(param_2,param_1 + 0x3c);
      }
      else {
        FUN_1481fc274(param_1 + 0x30,&local_84,&DAT_14c846330);
        local_90 = local_80;
        local_88 = local_78;
        local_a0 = local_74;
        local_98 = local_6c;
      }
      *(undefined4 *)(puVar3 + 4) = local_84;
      *(undefined8 *)(puVar3 + 8) = local_90;
      *(undefined4 *)(puVar3 + 0x10) = local_88;
      *(undefined8 *)(puVar3 + 0x14) = local_a0;
      *(undefined4 *)(puVar3 + 0x1c) = local_98;
      *(float *)(puVar3 + 8) = *(float *)(puVar3 + 8) * 0.0027777778;
      *(float *)(puVar3 + 0xc) = *(float *)(puVar3 + 0xc) * 0.0027777778;
      *(float *)(puVar3 + 0x10) = *(float *)(puVar3 + 0x10) * 0.0027777778;
      *(float *)(puVar3 + 0x14) = *(float *)(puVar3 + 0x14) * 0.0027777778;
      *(float *)(puVar3 + 0x18) = *(float *)(puVar3 + 0x18) * 0.0027777778;
      *(float *)(puVar3 + 0x1c) = *(float *)(puVar3 + 0x1c) * 0.0027777778;
      local_58 = 0;
      local_48 = &PTR_LAB_14ad7a5c0;
      local_40 = FUN_14806d9fc;
      local_68 = &LAB_14806c8d4;
      FUN_1481fe7cc(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480691ec FUN_1480691ec body=34 status=ok
// SIG undefined FUN_1480691ec(void)

void FUN_1480691ec(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145dfec56();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 14806920e FUN_14806920e body=186 status=ok
// SIG undefined FUN_14806920e(void)

void FUN_14806920e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar11 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  lVar7 = FUN_145dfec56();
  *(uint *)(param_2 + 0x38) = uVar11 + *(int *)(lVar7 + 0x3c);
  uVar8 = (longlong)(*(int *)(param_2 + 0x28) + 3) & 0xfffffffffffffffc;
  *(int *)(param_2 + 0x28) = (int)uVar8 + 0x28;
  lVar7 = *(longlong *)(param_2 + 0x18);
  puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x20 + (ulonglong)uVar11);
  *(uint *)(puVar1 + -4) = (uint)*(byte *)(lVar7 + uVar8);
  fVar2 = *(float *)(lVar7 + 0x1c + uVar8);
  fVar3 = *(float *)(lVar7 + 0x10 + uVar8);
  fVar4 = *(float *)(lVar7 + 0x18 + uVar8);
  fVar5 = *(float *)(lVar7 + 0xc + uVar8);
  *(float *)(puVar1 + -2) = *(float *)(lVar7 + 0x14 + uVar8) - *(float *)(lVar7 + 8 + uVar8);
  *(float *)((longlong)puVar1 + -0xc) = fVar4 - fVar5;
  *(float *)(puVar1 + -1) = fVar2 - fVar3;
  iVar6 = *(int *)(lVar7 + 4 + uVar8);
  if (iVar6 == -1) {
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(uVar8 + lVar7 + 0x10);
    uVar9 = *(undefined8 *)(uVar8 + lVar7 + 8);
  }
  else {
    lVar7 = *(longlong *)(param_2 + 8);
    lVar10 = (longlong)(iVar6 << 2);
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar7 + 8 + lVar10);
    uVar9 = *(undefined8 *)(lVar7 + lVar10);
  }
  *puVar1 = uVar9;
  return;
}



// FUNCTION 1480692ce FUN_1480692ce body=34 status=ok
// SIG undefined FUN_1480692ce(void)

void FUN_1480692ce(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145dff37e();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 1480692f0 FUN_1480692f0 body=157 status=ok
// SIG undefined FUN_1480692f0(void)

void FUN_1480692f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  
  uVar2 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  lVar1 = FUN_145dff37e();
  *(uint *)(param_2 + 0x38) = *(int *)(lVar1 + 0x3c) + uVar2;
  pfVar3 = (float *)((ulonglong)uVar2 + *(longlong *)(param_2 + 0x30));
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    pfVar3[0] = 0.0;
    pfVar3[1] = 0.0;
    pfVar3[2] = 0.0;
    pfVar3[3] = 0.0;
    pfVar3[4] = 0.0;
    fVar4 = 0.0;
  }
  else {
    *pfVar3 = (*(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x30)) * 0.017453292;
    pfVar3[1] = *(float *)(param_1 + 0x30) * 0.017453292;
    pfVar3[2] = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x38);
    pfVar3[3] = *(float *)(param_1 + 0x38);
    pfVar3[4] = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x40);
    fVar4 = *(float *)(param_1 + 0x40);
  }
  pfVar3[5] = fVar4;
  return;
}



// FUNCTION 14806938e FUN_14806938e body=195 status=ok
// SIG undefined FUN_14806938e(void)

void FUN_14806938e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_98 [36];
  undefined8 local_74;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar2 = (undefined8 *)FUN_14806e336(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    lVar3 = FUN_1481fe77c();
    iVar1 = FUN_1481fe784(param_2,lVar3 + 0xc);
    *(int *)((longlong)puVar2 + 0xc) = iVar1;
    if (iVar1 != -1) {
      FUN_14806e3b6(param_2,&local_74,param_1 + 0x30);
      *(undefined4 *)(puVar2 + 1) = local_6c;
      *puVar2 = local_74;
      local_58 = 0;
      local_48 = &PTR_LAB_14ad7a5c0;
      local_40 = FUN_14806e460;
      local_68 = &LAB_14806c8d4;
      FUN_1481fe7cc(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148069452 FUN_148069452 body=34 status=ok
// SIG undefined FUN_148069452(void)

void FUN_148069452(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145d87270();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 148069474 FUN_148069474 body=91 status=ok
// SIG undefined FUN_148069474(void)

void FUN_148069474(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar2 = *(int *)(param_2 + 0x28) + 3U & 0xfffffffc;
  *(uint *)(param_2 + 0x28) = uVar2 + 0x10;
  lVar1 = *(longlong *)(param_2 + 0x18);
  uVar4 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  lVar3 = FUN_145d87270();
  *(uint *)(param_2 + 0x38) = *(int *)(lVar3 + 0x3c) + uVar4;
  lVar3 = *(longlong *)(param_2 + 0x30);
  *(undefined4 *)(lVar3 + 8 + (ulonglong)uVar4) = *(undefined4 *)(lVar1 + 8 + (longlong)(int)uVar2);
  *(undefined8 *)(lVar3 + (ulonglong)uVar4) = *(undefined8 *)(lVar1 + (int)uVar2);
  return;
}



// FUNCTION 1480694d0 FUN_1480694d0 body=265 status=ok
// SIG undefined FUN_1480694d0(void)

void FUN_1480694d0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_98 [36];
  undefined8 local_74;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = (undefined8 *)FUN_14806e9ec(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    lVar4 = FUN_1481fe77c();
    uVar1 = FUN_1481fe784(param_2,lVar4 + 0x78);
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar1;
    uVar2 = FUN_1481fe784(param_2,lVar4 + 0x108);
    *(uint *)(puVar3 + 4) = uVar2;
    if ((uVar2 & *(uint *)((longlong)puVar3 + 0x1c)) != 0xffffffff) {
      FUN_14806ea9e(param_2,&local_74,param_1 + 0x30);
      *(undefined4 *)(puVar3 + 1) = local_6c;
      *puVar3 = local_74;
      if (*(int *)(param_1 + 0x38) - 5U < 2) {
        uVar1 = FUN_1482029d2(param_2,param_1 + 0x60);
        *(undefined4 *)(puVar3 + 3) = uVar1;
        uVar1 = *(undefined4 *)(*(undefined8 **)(param_1 + 0x70) + 1);
        *(undefined8 *)((longlong)puVar3 + 0xc) = **(undefined8 **)(param_1 + 0x70);
        *(undefined4 *)((longlong)puVar3 + 0x14) = uVar1;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14ad7a5c0;
      local_40 = FUN_14806eb48;
      local_68 = &LAB_14806c8d4;
      FUN_1481fe7cc(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480695da FUN_1480695da body=34 status=ok
// SIG undefined FUN_1480695da(void)

void FUN_1480695da(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145dfe52e();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 1480695fc FUN_1480695fc body=120 status=ok
// SIG undefined FUN_1480695fc(void)

void FUN_1480695fc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = (longlong)(*(int *)(param_2 + 0x28) + 3) & 0xfffffffffffffffc;
  *(int *)(param_2 + 0x28) = (int)uVar3 + 0x24;
  lVar1 = *(longlong *)(param_2 + 0x18);
  uVar4 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  uVar5 = (ulonglong)uVar4;
  lVar2 = FUN_145dfe52e();
  *(uint *)(param_2 + 0x38) = uVar4 + *(int *)(lVar2 + 0x3c);
  lVar2 = *(longlong *)(param_2 + 0x30);
  *(undefined8 *)(lVar2 + uVar5) = *(undefined8 *)(lVar1 + uVar3);
  *(undefined4 *)(lVar2 + 8 + uVar5) = *(undefined4 *)(lVar1 + 8 + uVar3);
  *(undefined8 *)(lVar2 + 0x10 + uVar5) = *(undefined8 *)(lVar1 + 0xc + uVar3);
  *(undefined4 *)(lVar2 + 0x18 + uVar5) = *(undefined4 *)(lVar1 + 0x14 + uVar3);
  *(undefined4 *)(lVar2 + 0x1c + uVar5) = *(undefined4 *)(lVar1 + 0x18 + uVar3);
  return;
}



// FUNCTION 148069674 FUN_148069674 body=262 status=ok
// SIG undefined FUN_148069674(void)

void FUN_148069674(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_98 [36];
  undefined8 local_74;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = (undefined8 *)FUN_14806ef1a(param_2);
  lVar4 = FUN_1481fe77c();
  uVar1 = FUN_1481fe784(param_2,lVar4 + 0x9c);
  *(undefined4 *)(puVar3 + 3) = uVar1;
  uVar2 = FUN_1481fe784(param_2,lVar4 + 300);
  *(uint *)((longlong)puVar3 + 0x1c) = uVar2;
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) && ((uVar2 & *(uint *)(puVar3 + 3)) != 0xffffffff)) {
    FUN_14806efc2(param_2,&local_74,param_1 + 0x30);
    *(undefined4 *)(puVar3 + 1) = local_6c;
    *puVar3 = local_74;
    if (*(int *)(param_1 + 0x38) - 5U < 2) {
      uVar1 = FUN_1482029d2(param_2,param_1 + 0x60);
      *(undefined4 *)((longlong)puVar3 + 0x14) = uVar1;
      *(undefined8 *)((longlong)puVar3 + 0xc) = **(undefined8 **)(param_1 + 0x70);
    }
    local_58 = 0;
    local_48 = &PTR_LAB_14ad7a5c0;
    local_40 = FUN_14806f06c;
    local_68 = &LAB_14806c8d4;
    FUN_1481fe7cc(param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806977c FUN_14806977c body=34 status=ok
// SIG undefined FUN_14806977c(void)

void FUN_14806977c(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145d4d608();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 14806979e FUN_14806979e body=132 status=ok
// SIG undefined FUN_14806979e(void)

void FUN_14806979e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar4 = (longlong)(*(int *)(param_2 + 0x28) + 3) & 0xfffffffffffffffc;
  *(int *)(param_2 + 0x28) = (int)uVar4 + 0x20;
  lVar2 = *(longlong *)(param_2 + 0x18);
  uVar6 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  uVar7 = (ulonglong)uVar6;
  lVar3 = FUN_145d4d608();
  *(uint *)(param_2 + 0x38) = uVar6 + *(int *)(lVar3 + 0x3c);
  lVar3 = *(longlong *)(param_2 + 0x30);
  puVar1 = (undefined8 *)(lVar2 + uVar4);
  *(undefined8 *)(lVar3 + uVar7) = *puVar1;
  *(undefined4 *)(lVar3 + 8 + uVar7) = *(undefined4 *)(puVar1 + 1);
  puVar5 = (undefined8 *)
           ((longlong)(*(int *)((longlong)puVar1 + 0x14) * 4) + *(longlong *)(param_2 + 8));
  if (*(int *)((longlong)puVar1 + 0x14) == -1) {
    puVar5 = (undefined8 *)((longlong)puVar1 + 0xc);
  }
  *(undefined8 *)(lVar3 + 0x10 + uVar7) = *puVar5;
  return;
}



// FUNCTION 148069822 FUN_148069822 body=306 status=ok
// SIG undefined FUN_148069822(void)

void FUN_148069822(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  void *_Src;
  void *_Dst;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _Src = (void *)FUN_14806bc5a(param_2);
  _Dst = (void *)FUN_14806f5b6(param_2);
  memcpy(_Dst,_Src,0x110);
  fVar4 = *(float *)((longlong)_Src + 0x10);
  if (fVar4 <= 0.01) {
    fVar4 = 0.01;
  }
  *(float *)((longlong)_Dst + 0x10) = fVar4;
  fVar4 = *(float *)((longlong)_Src + 0x14);
  if (fVar4 <= 0.01) {
    fVar4 = 0.01;
  }
  *(float *)((longlong)_Dst + 0x14) = fVar4;
  lVar3 = FUN_1481fe77c();
  uVar1 = FUN_1481fe784(param_2,lVar3 + 0x60);
  *(undefined4 *)((longlong)_Dst + 0x110) = uVar1;
  uVar1 = FUN_1481fe784(param_2,lVar3 + 0xcc);
  *(undefined4 *)((longlong)_Dst + 0x114) = uVar1;
  uVar1 = FUN_1481fe784(param_2,lVar3 + 0xf0);
  *(undefined4 *)((longlong)_Dst + 0x118) = uVar1;
  uVar2 = FUN_1481fe784(param_2,lVar3 + 0x144);
  *(uint *)((longlong)_Dst + 0x11c) = uVar2;
  if (((*(int *)((longlong)_Dst + 0x110) != -1) || (*(int *)((longlong)_Dst + 0x114) != -1)) ||
     ((uVar2 & *(uint *)((longlong)_Dst + 0x118)) != 0xffffffff)) {
    local_58 = 0;
    local_48 = &PTR_LAB_14ad7a5c0;
    local_40 = FUN_14806f644;
    local_68 = &LAB_14806c8d4;
    FUN_1481fe7cc(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148069956 FUN_148069956 body=34 status=ok
// SIG undefined FUN_148069956(void)

void FUN_148069956(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145de160c();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 148069978 FUN_148069978 body=288 status=ok
// SIG undefined FUN_148069978(void)

void FUN_148069978(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = (undefined8 *)FUN_148070496(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    lVar3 = FUN_1481fe77c();
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar1 = FUN_1481fe784(param_2,lVar3 + 0x90);
      *(undefined4 *)(puVar2 + 3) = uVar1;
      uVar1 = FUN_1481fe784(param_2,lVar3 + 0x120);
      *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar1;
    }
    if (*(char *)(param_1 + 0x31) == '\x01') {
      uVar1 = FUN_1481fe784(param_2,lVar3 + 0x84);
      *(undefined4 *)(puVar2 + 4) = uVar1;
      uVar1 = FUN_1481fe784(param_2,lVar3 + 0x114);
      *(undefined4 *)((longlong)puVar2 + 0x24) = uVar1;
    }
    if ((((*(int *)(puVar2 + 3) != -1) || (*(int *)((longlong)puVar2 + 0x1c) != -1)) ||
        (*(int *)(puVar2 + 4) != -1)) || (*(int *)((longlong)puVar2 + 0x24) != -1)) {
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 0x3c);
      *puVar2 = *(undefined8 *)(param_1 + 0x34);
      *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)(param_1 + 0x40);
      *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x48);
      local_58 = 0;
      local_48 = &PTR_LAB_14ad7a5c0;
      local_40 = FUN_148070530;
      local_68 = &LAB_14806c8d4;
      FUN_1481fe7cc(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148069a9a FUN_148069a9a body=34 status=ok
// SIG undefined FUN_148069a9a(void)

void FUN_148069a9a(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145e3414c();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 148069abc FUN_148069abc body=102 status=ok
// SIG undefined FUN_148069abc(void)

void FUN_148069abc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  uVar5 = (ulonglong)uVar4;
  lVar2 = FUN_145e3414c();
  *(uint *)(param_2 + 0x38) = *(int *)(lVar2 + 0x3c) + uVar4;
  lVar2 = *(longlong *)(param_2 + 0x30);
  uVar4 = *(int *)(param_2 + 0x28) + 3U & 0xfffffffc;
  lVar3 = (longlong)(int)uVar4;
  *(uint *)(param_2 + 0x28) = uVar4 + 0x28;
  lVar1 = *(longlong *)(param_2 + 0x18);
  *(undefined8 *)(lVar2 + uVar5) = *(undefined8 *)(lVar1 + lVar3);
  *(undefined4 *)(lVar2 + 8 + uVar5) = *(undefined4 *)(lVar1 + 8 + lVar3);
  *(undefined4 *)(lVar2 + 0x18 + uVar5) = *(undefined4 *)(lVar1 + 0x14 + lVar3);
  *(undefined8 *)(lVar2 + 0x10 + uVar5) = *(undefined8 *)(lVar1 + 0xc + lVar3);
  return;
}



// FUNCTION 148069b22 FUN_148069b22 body=274 status=ok
// SIG undefined FUN_148069b22(void)

void FUN_148069b22(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = (undefined4 *)FUN_1480705ba(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    lVar4 = FUN_1481fe77c();
    uVar1 = FUN_1481fe784(param_2,lVar4 + 0xa8);
    puVar3[3] = uVar1;
    uVar2 = FUN_1481fe784(param_2,lVar4 + 0x138);
    puVar3[4] = uVar2;
    if ((uVar2 & puVar3[3]) != 0xffffffff) {
      if (*(int *)(param_1 + 0x38) == 0) {
        local_74 = FUN_1482029d2(param_2,param_1 + 0x3c);
        local_70 = 0;
        local_6c = 0;
      }
      else {
        FUN_1481fc2bc(param_1 + 0x30,&local_74,0);
      }
      *puVar3 = local_74;
      puVar3[1] = local_70;
      puVar3[2] = local_6c;
      local_58 = 0;
      local_48 = &PTR_LAB_14ad7a5c0;
      local_40 = FUN_148070630;
      local_68 = &LAB_14806c8d4;
      FUN_1481fe7cc(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148069c36 FUN_148069c36 body=34 status=ok
// SIG undefined FUN_148069c36(void)

void FUN_148069c36(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145e33e42();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 148069c58 FUN_148069c58 body=118 status=ok
// SIG undefined FUN_148069c58(void)

void FUN_148069c58(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int *piVar3;
  uint uVar4;
  float *pfVar5;
  
  uVar4 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  lVar1 = FUN_145e33e42();
  *(uint *)(param_2 + 0x38) = uVar4 + *(int *)(lVar1 + 0x3c);
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = (longlong)(*(int *)(param_2 + 0x28) + 3) & 0xfffffffffffffffc;
  *(int *)(param_2 + 0x28) = (int)uVar2 + 0x14;
  piVar3 = (int *)(uVar2 + *(longlong *)(param_2 + 0x18));
  *(float *)(lVar1 + (ulonglong)uVar4) = (float)piVar3[2] - (float)piVar3[1];
  pfVar5 = (float *)((longlong)(*piVar3 * 4) + *(longlong *)(param_2 + 8));
  if (*piVar3 == -1) {
    pfVar5 = (float *)(piVar3 + 1);
  }
  *(float *)(lVar1 + 4 + (ulonglong)uVar4) = *pfVar5;
  return;
}



// FUNCTION 148069cce FUN_148069cce body=438 status=ok
// SIG undefined FUN_148069cce(void)

void FUN_148069cce(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = (undefined4 *)FUN_1480707a8(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) goto LAB_148069e66;
  lVar3 = FUN_1481fe77c();
  iVar1 = FUN_1481fe784(param_2,lVar3 + 0xb4);
  puVar2[8] = iVar1;
  if (iVar1 == -1) goto LAB_148069e66;
  fVar4 = 0.0;
  if (*(char *)(param_1 + 0x34) == '\x01') {
    fVar4 = (float)*(int *)(param_1 + 0x38) / (float)(*(int *)(param_1 + 0x30) + -1);
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  if (*(char *)(param_1 + 0x35) == '\x01') {
    fVar6 = (float)*(int *)(param_1 + 0x3c) / (float)(*(int *)(param_1 + 0x30) + -1);
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
  }
  else {
    fVar6 = 1.0;
  }
  *puVar2 = *(undefined4 *)(param_1 + 0x40);
  puVar2[1] = (float)*(int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 2) {
    puVar2[2] = fVar6 - fVar4;
    puVar2[3] = fVar4;
    uVar5 = 0;
    puVar2[4] = -(uint)(0.0 < *(float *)(param_1 + 0x48)) & (uint)(1.0 / *(float *)(param_1 + 0x48))
    ;
    *(undefined8 *)(puVar2 + 5) = 0;
LAB_148069e2c:
    puVar2[7] = uVar5;
  }
  else {
    if (iVar1 == 1) {
      *(undefined8 *)(puVar2 + 2) = 0;
      puVar2[4] = 0;
      puVar2[5] = fVar4;
      puVar2[6] = fVar6 - fVar4;
      uVar5 = 0x3f800000;
      goto LAB_148069e2c;
    }
    if (iVar1 == 0) {
      *(undefined8 *)(puVar2 + 2) = 0;
      puVar2[4] = 0;
      puVar2[5] = fVar4;
      puVar2[6] = fVar6 - fVar4;
      uVar5 = *(undefined4 *)(param_1 + 0x44);
      goto LAB_148069e2c;
    }
  }
  local_58 = 0;
  local_48 = &PTR_LAB_14ad7a5c0;
  local_40 = FUN_148070820;
  local_68 = &LAB_14806c8d4;
  FUN_1481fe7cc(param_2);
LAB_148069e66:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148069e86 FUN_148069e86 body=34 status=ok
// SIG undefined FUN_148069e86(void)

void FUN_148069e86(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145e0325c();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 148069ea8 FUN_148069ea8 body=157 status=ok
// SIG undefined FUN_148069ea8(void)

void FUN_148069ea8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  uVar5 = (ulonglong)uVar4;
  lVar2 = FUN_145e0325c();
  *(uint *)(param_2 + 0x38) = uVar4 + *(int *)(lVar2 + 0x3c);
  lVar2 = *(longlong *)(param_2 + 0x30);
  uVar3 = (longlong)(*(int *)(param_2 + 0x28) + 3) & 0xfffffffffffffffc;
  *(int *)(param_2 + 0x28) = (int)uVar3 + 0x24;
  lVar1 = *(longlong *)(param_2 + 0x18);
  *(undefined4 *)(lVar2 + uVar5) = *(undefined4 *)(lVar1 + uVar3);
  *(undefined4 *)(lVar2 + 4 + uVar5) = *(undefined4 *)(lVar1 + 4 + uVar3);
  *(undefined4 *)(lVar2 + 8 + uVar5) = *(undefined4 *)(lVar1 + 8 + uVar3);
  *(undefined4 *)(lVar2 + 0xc + uVar5) = *(undefined4 *)(lVar1 + 0xc + uVar3);
  *(undefined4 *)(lVar2 + 0x10 + uVar5) = *(undefined4 *)(lVar1 + 0x10 + uVar3);
  *(undefined4 *)(lVar2 + 0x14 + uVar5) = *(undefined4 *)(lVar1 + 0x14 + uVar3);
  *(undefined4 *)(lVar2 + 0x18 + uVar5) = *(undefined4 *)(lVar1 + 0x18 + uVar3);
  *(undefined4 *)(lVar2 + 0x1c + uVar5) = *(undefined4 *)(lVar1 + 0x1c + uVar3);
  return;
}



// FUNCTION 148069f46 FUN_148069f46 body=37 status=ok
// SIG undefined FUN_148069f46(void)

void FUN_148069f46(undefined8 param_1,void *param_2)

{
  memset(param_2,0,200);
  FUN_14590b218(param_2);
  return;
}



// FUNCTION 148069f92 FUN_148069f92 body=63 status=ok
// SIG undefined FUN_148069f92(void)

undefined1 FUN_148069f92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14806a0bc(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148069ffa FUN_148069ffa body=59 status=ok
// SIG undefined FUN_148069ffa(void)

undefined8 FUN_148069ffa(longlong *param_1)

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



// FUNCTION 14806a046 FUN_14806a046 body=40 status=ok
// SIG undefined FUN_14806a046(void)

void FUN_14806a046(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_1459d6caa(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 14806a0bc FUN_14806a0bc body=168 status=ok
// SIG undefined FUN_14806a0bc(void)

undefined1 * FUN_14806a0bc(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a67f5c(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  FUN_144a67f5c(param_1 + 0x50,param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined4 *)(param_2 + 0x74);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  FUN_144a67f5c(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  FUN_144a67f5c(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 14806a232 FUN_14806a232 body=59 status=ok
// SIG undefined FUN_14806a232(void)

undefined8 FUN_14806a232(longlong *param_1)

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



// FUNCTION 14806a2d2 FUN_14806a2d2 body=210 status=ok
// SIG undefined FUN_14806a2d2(void)

undefined8 * FUN_14806a2d2(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x14,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  param_1[3] = 0;
  FUN_145a9d278(param_1 + 1,1);
  param_1[4] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x34,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  param_1[4] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[7] = 0x4270000042700000;
  *(byte *)(param_1 + 8) = (*(byte *)(param_1 + 8) & 0xfc) + 1;
  param_1[9] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 10) = 1;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x5c,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  param_1[9] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 10) = 1;
  param_1[0xc] = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 14806a464 FUN_14806a464 body=59 status=ok
// SIG undefined FUN_14806a464(void)

undefined8 FUN_14806a464(longlong *param_1)

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



// FUNCTION 14806a5d8 FUN_14806a5d8 body=59 status=ok
// SIG undefined FUN_14806a5d8(void)

undefined8 FUN_14806a5d8(longlong *param_1)

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



// FUNCTION 14806a69a FUN_14806a69a body=46 status=ok
// SIG undefined FUN_14806a69a(void)

void FUN_14806a69a(undefined8 param_1,longlong param_2)

{
  FUN_1447a1747(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14806a6de FUN_14806a6de body=75 status=ok
// SIG undefined FUN_14806a6de(void)

undefined8 FUN_14806a6de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_140bee9ec();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14806a752 FUN_14806a752 body=59 status=ok
// SIG undefined FUN_14806a752(void)

undefined8 FUN_14806a752(longlong *param_1)

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



// FUNCTION 14806a7f0 FUN_14806a7f0 body=50 status=ok
// SIG undefined FUN_14806a7f0(void)

void FUN_14806a7f0(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14806a86e FUN_14806a86e body=126 status=ok
// SIG undefined FUN_14806a86e(void)

undefined1 FUN_14806a86e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar8) = *(undefined8 *)(param_3 + lVar8);
      lVar7 = *(longlong *)(param_3 + 8 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + 8 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar8;
      *(longlong *)(lVar1 + 8) = lVar7;
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(lVar1 + 0x10) = *puVar2;
      *(undefined4 *)(lVar1 + 0x14) = uVar3;
      *(undefined4 *)(lVar1 + 0x18) = uVar4;
      *(undefined4 *)(lVar1 + 0x1c) = uVar5;
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_3 + 0x20 + lVar8);
      lVar8 = lVar8 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14806a914 FUN_14806a914 body=59 status=ok
// SIG undefined FUN_14806a914(void)

undefined8 FUN_14806a914(longlong *param_1)

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



// FUNCTION 14806a9b6 FUN_14806a9b6 body=52 status=ok
// SIG undefined FUN_14806a9b6(void)

void FUN_14806a9b6(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_144a5dc74(param_2 + 1);
  FUN_144a5dc74(param_2 + 3);
  return;
}



// FUNCTION 14806a9ea FUN_14806a9ea body=40 status=ok
// SIG undefined FUN_14806a9ea(void)

void FUN_14806a9ea(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  FUN_144a5dc74(param_2 + 2);
  FUN_144a5dc74(param_2 + 6);
  return;
}



// FUNCTION 14806aa12 FUN_14806aa12 body=51 status=ok
// SIG undefined FUN_14806aa12(void)

void FUN_14806aa12(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))();
  }
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014806aa3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14806aa5c FUN_14806aa5c body=54 status=ok
// SIG undefined FUN_14806aa5c(void)

undefined1 FUN_14806aa5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14806ab84(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 14806aaba FUN_14806aaba body=59 status=ok
// SIG undefined FUN_14806aaba(void)

undefined8 FUN_14806aaba(longlong *param_1)

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



// FUNCTION 14806ab00 FUN_14806ab00 body=54 status=ok
// SIG undefined FUN_14806ab00(void)

void FUN_14806ab00(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))();
    }
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14806ab84 FUN_14806ab84 body=128 status=ok
// SIG undefined FUN_14806ab84(void)

undefined4 * FUN_14806ab84(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  plVar1 = *(longlong **)(param_2 + 2);
  plVar2 = *(longlong **)(param_1 + 2);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 2) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[4] = param_2[4];
  plVar1 = *(longlong **)(param_2 + 6);
  plVar2 = *(longlong **)(param_1 + 6);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 6) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[8] = param_2[8];
  return param_1;
}



// FUNCTION 14806ac06 FUN_14806ac06 body=41 status=ok
// SIG undefined FUN_14806ac06(void)

void FUN_14806ac06(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a5dc74(param_2 + 1);
  param_2[3] = 0;
  return;
}



// FUNCTION 14806ac30 FUN_14806ac30 body=41 status=ok
// SIG undefined FUN_14806ac30(void)

void FUN_14806ac30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  FUN_144a5dc74(param_2 + 2);
  *(undefined8 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 14806ac82 FUN_14806ac82 body=54 status=ok
// SIG undefined FUN_14806ac82(void)

undefined1 FUN_14806ac82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14806ad9c(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14806ace0 FUN_14806ace0 body=59 status=ok
// SIG undefined FUN_14806ace0(void)

undefined8 FUN_14806ace0(longlong *param_1)

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



// FUNCTION 14806ad26 FUN_14806ad26 body=39 status=ok
// SIG undefined FUN_14806ad26(void)

void FUN_14806ad26(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14806ad9c FUN_14806ad9c body=117 status=ok
// SIG undefined FUN_14806ad9c(void)

undefined4 * FUN_14806ad9c(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  plVar1 = *(longlong **)(param_2 + 2);
  plVar2 = *(longlong **)(param_1 + 2);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 2) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[4] = param_2[4];
  lVar3 = *(longlong *)(param_2 + 6);
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 6);
    }
  }
  *(longlong *)(param_1 + 6) = lVar3;
  return param_1;
}



// FUNCTION 14806ae12 FUN_14806ae12 body=40 status=ok
// SIG undefined FUN_14806ae12(void)

void FUN_14806ae12(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a5dc74(param_2);
  FUN_144a5dc74(param_2 + 2);
  return;
}



// FUNCTION 14806ae3a FUN_14806ae3a body=33 status=ok
// SIG undefined FUN_14806ae3a(void)

void FUN_14806ae3a(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  FUN_144a5dc74(param_2 + 0x10);
  return;
}



// FUNCTION 14806ae5c FUN_14806ae5c body=50 status=ok
// SIG undefined FUN_14806ae5c(void)

void FUN_14806ae5c(undefined8 param_1,longlong *param_2)

{
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[2] + 0x10))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014806ae83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14806aea4 FUN_14806aea4 body=54 status=ok
// SIG undefined FUN_14806aea4(void)

undefined1 FUN_14806aea4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14806afcc(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14806af02 FUN_14806af02 body=59 status=ok
// SIG undefined FUN_14806af02(void)

undefined8 FUN_14806af02(longlong *param_1)

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



// FUNCTION 14806af48 FUN_14806af48 body=53 status=ok
// SIG undefined FUN_14806af48(void)

void FUN_14806af48(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[2] + 0x10))();
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14806afcc FUN_14806afcc body=117 status=ok
// SIG undefined FUN_14806afcc(void)

longlong * FUN_14806afcc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  return param_1;
}



// FUNCTION 14806b0d0 FUN_14806b0d0 body=158 status=ok
// SIG undefined FUN_14806b0d0(void)

undefined8 FUN_14806b0d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_14806b2b0();
      FUN_14806b30e(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      *(undefined4 *)(param_2 + lVar6 + 0x38) = *(undefined4 *)(param_3 + lVar6 + 0x38);
      FUN_14806b36c(param_2 + lVar6 + 0x40,param_3 + lVar6 + 0x40);
      *(undefined1 *)(param_2 + lVar6 + 0x50) = *(undefined1 *)(param_3 + lVar6 + 0x50);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14806b196 FUN_14806b196 body=59 status=ok
// SIG undefined FUN_14806b196(void)

undefined8 FUN_14806b196(longlong *param_1)

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



// FUNCTION 14806b1dc FUN_14806b1dc body=32 status=ok
// SIG undefined FUN_14806b1dc(void)

void FUN_14806b1dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14806b24a(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14806b24a FUN_14806b24a body=101 status=ok
// SIG undefined FUN_14806b24a(void)

void FUN_14806b24a(longlong param_1)

{
  FUN_140ed52b6(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140ed52e8(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_140ed5329(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14806b2b0 FUN_14806b2b0 body=93 status=ok
// SIG undefined FUN_14806b2b0(void)

undefined8 * FUN_14806b2b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ed5329(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14806b3ca(param_1,iVar1);
      FUN_14806b43d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14806b30e FUN_14806b30e body=93 status=ok
// SIG undefined FUN_14806b30e(void)

undefined8 * FUN_14806b30e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ed52e8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14806b4b4(param_1,iVar1);
      FUN_14806b516(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14806b36c FUN_14806b36c body=93 status=ok
// SIG undefined FUN_14806b36c(void)

undefined8 * FUN_14806b36c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ed52b6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14806b57e(param_1,iVar1);
      FUN_14806b5e0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14806b3ca FUN_14806b3ca body=115 status=ok
// SIG undefined FUN_14806b3ca(void)

void FUN_14806b3ca(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14806b43d FUN_14806b43d body=118 status=ok
// SIG undefined FUN_14806b43d(void)

void FUN_14806b43d(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
      plVar1 = *(longlong **)(param_2 + 8 + lVar2);
      *(longlong **)(param_1 + 8 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x10 + lVar2) = *(undefined4 *)(param_2 + 0x10 + lVar2);
      plVar1 = *(longlong **)(param_2 + 0x18 + lVar2);
      *(longlong **)(param_1 + 0x18 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x20 + lVar2) = *(undefined4 *)(param_2 + 0x20 + lVar2);
      lVar2 = lVar2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14806b4b4 FUN_14806b4b4 body=98 status=ok
// SIG undefined FUN_14806b4b4(void)

void FUN_14806b4b4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14806b516 FUN_14806b516 body=104 status=ok
// SIG undefined FUN_14806b516(void)

void FUN_14806b516(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_2 + lVar2);
      *(longlong **)(param_1 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      plVar1 = *(longlong **)(param_2 + 0x10 + lVar2);
      *(longlong **)(param_1 + 0x10 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x18 + lVar2) = *(undefined4 *)(param_2 + 0x18 + lVar2);
      lVar2 = lVar2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14806b57e FUN_14806b57e body=98 status=ok
// SIG undefined FUN_14806b57e(void)

void FUN_14806b57e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14806b5e0 FUN_14806b5e0 body=52 status=ok
// SIG undefined FUN_14806b5e0(void)

void FUN_14806b5e0(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14806b614(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 14806b614 FUN_14806b614 body=86 status=ok
// SIG undefined FUN_14806b614(void)

undefined4 * FUN_14806b614(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  plVar1 = *(longlong **)(param_2 + 2);
  *(longlong **)(param_1 + 2) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[4] = param_2[4];
  lVar2 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  return param_1;
}



// FUNCTION 14806b6a8 FUN_14806b6a8 body=54 status=ok
// SIG undefined FUN_14806b6a8(void)

undefined1 FUN_14806b6a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14806b7a6(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 14806b706 FUN_14806b706 body=59 status=ok
// SIG undefined FUN_14806b706(void)

undefined8 FUN_14806b706(longlong *param_1)

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



// FUNCTION 14806b7a6 FUN_14806b7a6 body=106 status=ok
// SIG undefined FUN_14806b7a6(void)

undefined4 * FUN_14806b7a6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar5 = *(longlong *)(param_2 + 6);
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 6);
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 6) = lVar5;
  lVar5 = *(longlong *)(param_2 + 8);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar5;
  return param_1;
}



// FUNCTION 14806b840 FUN_14806b840 body=63 status=ok
// SIG undefined FUN_14806b840(void)

undefined1 FUN_14806b840(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14806b968(param_2,param_3);
    param_3 = param_3 + 0x198;
    param_2 = param_2 + 0x198;
  }
  return 1;
}



// FUNCTION 14806b8a8 FUN_14806b8a8 body=59 status=ok
// SIG undefined FUN_14806b8a8(void)

undefined8 FUN_14806b8a8(longlong *param_1)

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



// FUNCTION 14806b8f4 FUN_14806b8f4 body=38 status=ok
// SIG undefined FUN_14806b8f4(void)

void FUN_14806b8f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_140ed5154(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 14806b968 FUN_14806b968 body=446 status=ok
// SIG undefined FUN_14806b968(void)

longlong * FUN_14806b968(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar7 = param_2[3];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar8 = param_2[4];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar9 = param_2[5];
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(int *)(param_1 + 3) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(int *)(param_1 + 4) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  *(int *)(param_1 + 5) = (int)lVar9;
  FUN_14806bb26(param_1 + 6,param_2 + 6);
  *(char *)(param_1 + 8) = (char)param_2[8];
  FUN_14806b7a6(param_1 + 9,param_2 + 9);
  *(char *)(param_1 + 0xe) = (char)param_2[0xe];
  param_1[0xf] = param_2[0xf];
  FUN_140bee9ec(param_1 + 0x10,param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  FUN_140bee9ec(param_1 + 0x13,param_2 + 0x13);
  FUN_140bb2e20(param_1 + 0x15,param_2 + 0x15);
  FUN_1406fa324(param_1 + 0x1f,param_2 + 0x1f);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x10c);
  lVar7 = param_2[0x22];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x114);
  *(int *)(param_1 + 0x21) = (int)param_2[0x21];
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
  *(int *)(param_1 + 0x22) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar4;
  param_1[0x23] = param_2[0x23];
  FUN_14806b2b0(param_1 + 0x24,param_2 + 0x24);
  FUN_14806b30e(param_1 + 0x26,param_2 + 0x26);
  *(int *)(param_1 + 0x28) = (int)param_2[0x28];
  FUN_14806b36c(param_1 + 0x29,param_2 + 0x29);
  *(char *)(param_1 + 0x2b) = (char)param_2[0x2b];
  param_1[0x2e] = param_2[0x2e];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x164);
  lVar7 = param_2[0x2d];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x16c);
  *(int *)(param_1 + 0x2c) = (int)param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar3;
  *(int *)(param_1 + 0x2d) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar4;
  plVar1 = (longlong *)param_2[0x2f];
  plVar2 = (longlong *)param_1[0x2f];
  if (plVar2 != plVar1) {
    param_1[0x2f] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x30) = (int)param_2[0x30];
  param_1[0x31] = param_2[0x31];
  *(int *)(param_1 + 0x32) = (int)param_2[0x32];
  return param_1;
}



// FUNCTION 14806bb26 FUN_14806bb26 body=79 status=ok
// SIG undefined FUN_14806bb26(void)

undefined8 * FUN_14806bb26(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14806bb76(param_1,iVar1);
      FUN_14806bbe9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14806bb76 FUN_14806bb76 body=115 status=ok
// SIG undefined FUN_14806bb76(void)

void FUN_14806bb76(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14806bbe9 FUN_14806bbe9 body=112 status=ok
// SIG undefined FUN_14806bbe9(void)

void FUN_14806bbe9(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = 0;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
      lVar2 = *(longlong *)(param_2 + 8 + lVar7);
      *(longlong *)(param_1 + 8 + lVar7) = lVar2;
      if (((bVar6 & 1) != 0) && (lVar2 != 0)) {
        FUN_14689c22e();
        bVar6 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar7;
      lVar1 = param_2 + lVar7;
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
      uVar3 = *(undefined4 *)(lVar1 + 0x14);
      uVar4 = *(undefined4 *)(lVar1 + 0x18);
      uVar5 = *(undefined4 *)(lVar1 + 0x1c);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      lVar7 = lVar7 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14806bc5a FUN_14806bc5a body=233 status=ok
// SIG undefined FUN_14806bc5a(void)

void FUN_14806bc5a(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  int iStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(local_28,"FPhysicsBuildData",1);
  iVar2 = FUN_144a788f7();
  plVar3 = (longlong *)FUN_14806bd44(param_1 + 0x38,iStack_24 + iVar2,local_28);
  plVar5 = (longlong *)*plVar3;
  if ((longlong *)*plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_14001cc68(0x120);
    *plVar4 = (longlong)&PTR_FUN_14ad7a5a8;
    memset(plVar4 + 2,0,0x110);
    FUN_14806c322(plVar4 + 2);
    plVar1 = (longlong *)*plVar3;
    plVar5 = plVar1;
    if ((plVar1 != plVar4) &&
       (*plVar3 = (longlong)plVar4, plVar5 = plVar4, plVar1 != (longlong *)0x0)) {
      (**(code **)*plVar1)(plVar1,1);
      plVar5 = (longlong *)*plVar3;
    }
  }
  (**(code **)(*plVar5 + 8))(plVar5);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14806bd44 FUN_14806bd44 body=189 status=ok
// SIG undefined FUN_14806bd44(void)

longlong * FUN_14806bd44(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_14806bde4;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_14806be02(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_14806bde4:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14806be02 FUN_14806be02 body=302 status=ok
// SIG undefined FUN_14806be02(void)

undefined4 *
FUN_14806be02(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14806bf32(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  *(undefined4 *)(local_50 + 2) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_14806c018(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14806c15a(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806bf32 FUN_14806bf32 body=230 status=ok
// SIG undefined FUN_14806bf32(void)

int * FUN_14806bf32(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14806c018 FUN_14806c018 body=183 status=ok
// SIG undefined FUN_14806c018(void)

void FUN_14806c018(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          puVar1 = (undefined8 *)plVar6[1];
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)*param_3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar2;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar3;
          FUN_14806c0d0(param_1,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_14806c08a;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_14806c08a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 14806c0d0 FUN_14806c0d0 body=138 status=ok
// SIG undefined FUN_14806c0d0(void)

void FUN_14806c0d0(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14806c15a FUN_14806c15a body=455 status=ok
// SIG undefined FUN_14806c15a(void)

void FUN_14806c15a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar4 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar10 * 0x18);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14806c322 FUN_14806c322 body=352 status=ok
// SIG undefined FUN_14806c322(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14806c322(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &DAT_3f800000ffffffff;
  param_1[1] = 0xffffffff3f800000;
  param_1[2] = 0;
  param_1[3] = 0xffffffff00000002;
  param_1[4] = DAT_14c846330;
  *(undefined4 *)(param_1 + 5) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0x2c) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x34) = DAT_14c846338;
  param_1[7] = 0xffffffff00000002;
  *(undefined4 *)(param_1 + 9) = DAT_14c846338;
  param_1[8] = DAT_14c846330;
  *(undefined8 *)((longlong)param_1 + 0x4c) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x54) = DAT_14c846338;
  param_1[0xb] = 0xffffffff00000002;
  *(undefined4 *)(param_1 + 0xd) = DAT_14c846338;
  param_1[0xc] = DAT_14c846330;
  *(undefined8 *)((longlong)param_1 + 0x6c) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x74) = DAT_14c846338;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0x7c) = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x12) = DAT_14c846338;
  param_1[0x11] = DAT_14c846330;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 2;
  uVar1 = _DAT_14c846348;
  param_1[0x14] = ram0x00014c846340;
  param_1[0x15] = uVar1;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000002;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1d) = DAT_14c846338;
  param_1[0x1c] = DAT_14c846330;
  *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return;
}



// FUNCTION 14806c482 FUN_14806c482 body=29 status=ok
// SIG undefined FUN_14806c482(void)

undefined8 FUN_14806c482(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14806c4a0 FUN_14806c4a0 body=5 status=ok
// SIG undefined FUN_14806c4a0(void)

longlong FUN_14806c4a0(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 14806c4a6 FUN_14806c4a6 body=137 status=ok
// SIG undefined FUN_14806c4a6(void)

longlong FUN_14806c4a6(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  iVar1 = (int)plVar2[1];
  uVar6 = (longlong)(iVar1 + 3) & 0xfffffffffffffffc;
  iVar4 = (int)uVar6 + 0x14;
  *(int *)(plVar2 + 1) = iVar4;
  uVar5 = iVar4 - iVar1;
  if ((uint)(*(int *)((longlong)plVar2 + 0xc) - iVar1) < uVar5) {
    FUN_1447403be(plVar2);
  }
  memset((void *)((longlong)iVar1 + *plVar2),0,(longlong)(int)uVar5);
  lVar3 = **(longlong **)(param_1 + 0x10);
  *(undefined4 *)(lVar3 + 0x10 + uVar6) = 0;
  *(undefined8 *)(lVar3 + uVar6) = DAT_14cb331a0;
  *(undefined4 *)(lVar3 + 8 + uVar6) = DAT_14cb331a8;
  *(undefined8 *)(lVar3 + 0xc + uVar6) = 0xffffffffffffffff;
  return lVar3 + uVar6;
}



// FUNCTION 14806c530 FUN_14806c530 body=169 status=ok
// SIG undefined FUN_14806c530(void)

uint * FUN_14806c530(undefined8 param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[2] = DAT_14cb331a8;
  *(undefined8 *)param_2 = DAT_14cb331a0;
  if (*(int *)(param_3 + 8) == 0) {
    uVar1 = FUN_1482029d2(param_1,param_3 + 0xc);
    if (-1 < (int)uVar1) {
      *param_2 = uVar1 | *param_2 & 0xc0000000 | 0x20000000;
      param_2[1] = 0;
      param_2[2] = 0x3f800000;
    }
  }
  else {
    local_28 = param_3 + 0x28;
    local_20 = *(undefined8 *)(param_3 + 0x18);
    local_18 = *(undefined4 *)(param_3 + 0x20);
    FUN_14806c714(param_1,param_2,*(int *)(param_3 + 8));
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806c5da FUN_14806c5da body=312 status=ok
// SIG undefined FUN_14806c5da(void)

void FUN_14806c5da(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = *(int *)(param_1 + 0x108) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x108) = uVar4 + 0x14;
  if (*(int *)(param_1 + 8) != 0) {
    puVar7 = (ulonglong *)((longlong)(int)uVar4 + *(longlong *)(param_1 + 0xf8));
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar3 = *(longlong *)(param_1 + 0x58);
    uVar6 = 0;
    do {
      local_70 = *puVar7;
      local_68 = (undefined4)puVar7[1];
      local_64 = 0;
      if ((local_70 & 0x40000000) != 0) {
        local_64 = FUN_148204758(param_1,uVar6 & 0xffffffff,0);
      }
      uVar8 = FUN_14806c804(&local_70,param_1,*(undefined4 *)(lVar3 + uVar6 * 4));
      iVar1 = *(int *)((longlong)puVar7 + 0xc);
      if (-1 < (longlong)iVar1) {
        uVar9 = FUN_14806c804(&local_70,param_1,*(undefined4 *)(lVar2 + uVar6 * 4));
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = param_1 + 0x68;
        }
        *(undefined4 *)(*(longlong *)(lVar5 + (longlong)iVar1 * 8) + (longlong)(int)uVar6 * 4) =
             uVar9;
      }
      if (-1 < (longlong)(int)puVar7[2]) {
        lVar5 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar5 = param_1 + 0x68;
        }
        *(undefined4 *)
         (*(longlong *)(lVar5 + (longlong)(int)puVar7[2] * 8) + (longlong)(int)uVar6 * 4) = uVar8;
      }
      uVar6 = uVar6 + 1;
    } while ((uint)uVar6 < *(uint *)(param_1 + 8));
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14806c714 FUN_14806c714 body=238 status=ok
// SIG undefined FUN_14806c714(void)

uint * FUN_14806c714(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 *param_4,
                    float *param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = DAT_14cb331a8;
  *(undefined8 *)param_2 = DAT_14cb331a0;
  iVar3 = param_4[2];
  if (0 < iVar3) {
    uVar4 = *param_2;
    switch(param_3) {
    case 1:
    case 3:
      uVar4 = uVar4 | 0xc0000000;
      break;
    case 2:
    case 4:
      uVar4 = uVar4 | 0x40000000;
      break;
    case 5:
      uVar4 = uVar4 | 0x80000000;
    }
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    uVar2 = FUN_1481fe0ce();
    iVar3 = iVar3 + -1;
    *param_2 = iVar3 * 0x100000 | uVar2 & 0xe00fffff | uVar4 & 0xe0000000;
    fVar1 = *param_5;
    fVar5 = param_5[1];
    param_2[1] = (uint)fVar1;
    uVar4 = 0;
    if (iVar3 != 0) {
      fVar5 = fVar5 - fVar1;
      uVar4 = -(uint)(0.0 < fVar5) & (uint)((float)iVar3 / fVar5);
    }
    param_2[2] = uVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14806c804 FUN_14806c804 body=207 status=ok
// SIG undefined FUN_14806c804(void)

float FUN_14806c804(uint *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  uVar2 = uVar1 & 0xfffff;
  uVar3 = (ulonglong)uVar2;
  if ((uVar1 >> 0x1d & 1) != 0) {
    return *(float *)(*(longlong *)(param_2 + 0x130) + uVar3 * 4);
  }
  if ((uVar1 >> 0x1e & 1) == 0) {
    fVar4 = (float)(uVar1 >> 0x14 & 0x1ff);
    fVar6 = ((float)param_3 - (float)param_1[1]) * (float)param_1[2];
    if (fVar4 <= fVar6) {
      fVar6 = fVar4;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar4 = *(float *)(*(longlong *)(param_2 + 0x120) +
                      (longlong)(int)(((int)ROUND(fVar6 + fVar6 + -0.5) >> 1) + uVar2) * 4);
    auVar5._4_4_ = (int)((ulonglong)param_3 >> 0x20);
    auVar5._0_4_ = fVar6;
    auVar5._8_4_ = in_XMM2_Dc;
    auVar5._12_4_ = in_XMM2_Dd;
    auVar5 = roundss(ZEXT816(0),auVar5,0xb);
    return (*(float *)(*(longlong *)(param_2 + 0x120) +
                      (longlong)(int)(uVar2 - ((int)ROUND(-0.5 - (fVar6 + fVar6)) >> 1)) * 4) -
           fVar4) * (fVar6 - auVar5._0_4_) + fVar4;
  }
  fVar6 = *(float *)(*(longlong *)(param_2 + 0x120) + uVar3 * 4);
  return (*(float *)(*(longlong *)(param_2 + 0x120) + 4 + uVar3 * 4) - fVar6) * (float)param_1[3] +
         fVar6;
}



// FUNCTION 14806c908 FUN_14806c908 body=29 status=ok
// SIG undefined FUN_14806c908(void)

undefined8 FUN_14806c908(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14806c926 FUN_14806c926 body=159 status=ok
// SIG undefined FUN_14806c926(void)

void FUN_14806c926(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar2 = (int)plVar3[1];
  uVar7 = (longlong)(iVar2 + 3) & 0xfffffffffffffffc;
  iVar5 = (int)uVar7 + 0xd4;
  *(int *)(plVar3 + 1) = iVar5;
  uVar6 = iVar5 - iVar2;
  if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar2) < uVar6) {
    FUN_1447403be(plVar3);
  }
  memset((void *)((longlong)iVar2 + *plVar3),0,(longlong)(int)uVar6);
  lVar1 = **(longlong **)(param_1 + 0x10) + uVar7;
  *(undefined4 *)(**(longlong **)(param_1 + 0x10) + uVar7) = 0;
  lVar4 = 4;
  do {
    *(undefined4 *)(lVar1 + 8 + lVar4) = DAT_14cb331a8;
    *(undefined8 *)(lVar1 + lVar4) = DAT_14cb331a0;
    lVar4 = lVar4 + 0xc;
  } while (lVar4 != 0xc4);
  *(undefined4 *)(lVar1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(lVar1 + 200) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0xcc) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0xd0) = 0xffffffff;
  return;
}



// FUNCTION 14806c9c6 FUN_14806c9c6 body=82 status=ok
// SIG undefined FUN_14806c9c6(void)

uint FUN_14806c9c6(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  switch(param_2) {
  case 0:
    lVar3 = 0x38;
    bVar1 = *(byte *)(param_1 + 0x30) & 1;
    break;
  case 1:
    lVar3 = 0x100;
    bVar1 = *(byte *)(param_1 + 0x30) & 2;
    break;
  case 2:
    lVar3 = 0x1c8;
    bVar1 = *(byte *)(param_1 + 0x30) & 4;
    goto joined_r0x00014806ca07;
  case 3:
    lVar3 = 0x290;
    bVar1 = *(byte *)(param_1 + 0x30) & 8;
joined_r0x00014806ca07:
    if (bVar1 == 0) {
      return 0;
    }
    goto LAB_14806c9f7;
  default:
    goto switchD_14806c9dd_default;
  }
  uVar2 = 0;
  if (bVar1 != 0) {
LAB_14806c9f7:
    uVar2 = *(uint *)(param_1 + lVar3) & 0xf;
  }
switchD_14806c9dd_default:
  return uVar2;
}



// FUNCTION 14806ca18 FUN_14806ca18 body=668 status=ok
// SIG undefined FUN_14806ca18(void)

void FUN_14806ca18(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  ulonglong local_e0;
  uint local_d8;
  undefined4 local_d4;
  ulonglong local_d0;
  uint local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  uint local_b8;
  undefined4 local_b4;
  ulonglong local_b0;
  uint local_a8;
  undefined4 local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar4 = *(int *)(param_1 + 0x108) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x108) = uVar4 + 0xd4;
  if (*(int *)(param_1 + 8) != 0) {
    puVar8 = (uint *)((longlong)(int)uVar4 + *(longlong *)(param_1 + 0xf8));
    lVar2 = *(longlong *)(param_1 + 0x48);
    uVar6 = 0;
    do {
      lVar7 = 10;
      uVar5 = 0;
      do {
        uVar4 = *puVar8 >> ((byte)uVar5 & 0x1f);
        if ((uVar4 & 0xf) != 0) {
          local_b0 = *(ulonglong *)(puVar8 + lVar7 + -9);
          local_a8 = puVar8[lVar7 + -7];
          local_a4 = 0;
          if ((local_b0 & 0x40000000) != 0) {
            local_a4 = FUN_148204758(param_1,uVar6 & 0xffffffff,uVar5 & 0xffffffff);
          }
          local_c0 = *(ulonglong *)(puVar8 + lVar7 + -6);
          local_b8 = puVar8[lVar7 + -4];
          local_b4 = 0;
          iVar3 = (int)uVar5;
          if ((local_c0 & 0x40000000) != 0) {
            local_b4 = FUN_148204758(param_1,uVar6 & 0xffffffff,iVar3 + 1);
          }
          local_d0 = *(ulonglong *)(puVar8 + lVar7 + -3);
          local_c8 = puVar8[lVar7 + -1];
          local_c4 = 0;
          if ((local_d0 & 0x40000000) != 0) {
            local_c4 = FUN_148204758(param_1,uVar6 & 0xffffffff,iVar3 + 2);
          }
          local_e0 = *(ulonglong *)(puVar8 + lVar7);
          local_d8 = puVar8[lVar7 + 2];
          local_d4 = 0;
          if ((local_e0 & 0x40000000) != 0) {
            local_d4 = FUN_148204758(param_1,uVar6 & 0xffffffff,iVar3 + 3);
          }
          uVar1 = *(undefined4 *)(lVar2 + uVar6 * 4);
          uVar9 = 0;
          uVar10 = 0;
          if ((uVar4 & 8) != 0) {
            uVar10 = FUN_14806c804(&local_e0,param_1,uVar1);
          }
          if ((uVar4 & 4) != 0) {
            uVar9 = FUN_14806c804(&local_d0,param_1,uVar1);
          }
          uVar11 = 0;
          uVar12 = 0;
          if ((uVar4 & 2) != 0) {
            uVar12 = FUN_14806c804(&local_c0,param_1,uVar1);
          }
          if ((uVar4 & 1) != 0) {
            uVar11 = FUN_14806c804(&local_b0,param_1,uVar1);
          }
          local_f8 = uVar11;
          local_f4 = uVar12;
          local_f0 = uVar9;
          local_ec = uVar10;
          FUN_14806ccb6(param_1,*(undefined4 *)((longlong)puVar8 + uVar5 + 0xc4),uVar6 & 0xffffffff,
                        &local_f8);
        }
        uVar5 = uVar5 + 4;
        lVar7 = lVar7 + 0xc;
      } while (uVar5 != 0x10);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  if ((local_a0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806ccb6 FUN_14806ccb6 body=153 status=ok
// SIG undefined FUN_14806ccb6(void)

void FUN_14806ccb6(longlong param_1,uint param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (-1 < (int)param_2) {
    lVar1 = param_1 + 0x68;
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    uVar2 = (ulonglong)param_2;
    lVar3 = (longlong)param_3;
    *(undefined4 *)(*(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4) = *param_4;
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    *(undefined4 *)
     ((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4) =
         param_4[1];
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    *(undefined4 *)
     ((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) + *(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4
     ) = param_4[2];
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    *(undefined4 *)
     ((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 3) + *(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4
     ) = param_4[3];
  }
  return;
}



// FUNCTION 14806cd50 FUN_14806cd50 body=1490 status=ok
// SIG undefined FUN_14806cd50(void)

void FUN_14806cd50(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_178 [32];
  longlong local_158;
  float local_14c;
  longlong local_148;
  longlong local_140;
  undefined1 local_134 [16];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  ulonglong local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar9 = (longlong)(*(int *)(param_1 + 0x108) + 3) & 0xfffffffffffffffc;
  *(int *)(param_1 + 0x108) = (int)uVar9 + 0xc0;
  lVar4 = *(longlong *)(param_1 + 0xf8);
  uVar8 = *(int *)(param_1 + 0x118) + 0xfU & 0xfffffff0;
  lVar5 = FUN_145d46df4();
  *(uint *)(param_1 + 0x118) = *(int *)(lVar5 + 0x3c) + uVar8;
  if (*(int *)(param_1 + 8) != 0) {
    lVar5 = lVar4 + uVar9;
    uVar3 = *(uint *)(lVar4 + uVar9);
    lVar4 = *(longlong *)(param_1 + 0x110);
    uVar9 = (ulonglong)uVar8;
    lVar1 = lVar4 + uVar9;
    local_140 = lVar4 + 0x30 + uVar9;
    local_148 = lVar4 + uVar9 + 0x20;
    lVar4 = param_1 + 0x68;
    uVar8 = 0;
    do {
      local_110 = *(undefined4 *)(lVar5 + 0xc);
      local_118 = *(ulonglong *)(lVar5 + 4);
      local_104 = 0;
      local_10c = 0;
      if ((local_118 & 0x40000000) != 0) {
        FUN_148200430(param_1,&local_10c,uVar8,0);
      }
      FUN_14806d446(&local_118,&local_124,param_1,0);
      local_158 = local_140;
      FUN_14806d612(param_1,local_134,uVar8,local_148);
      fVar14 = *(float *)(lVar1 + 0x7c);
      fVar13 = *(float *)(lVar1 + 0x80);
      fVar11 = (float)FUN_148204758(param_1,uVar8,2);
      FUN_1482047de(param_1,&local_fc,uVar8,3);
      fVar16 = local_fc * *(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0x48);
      fVar17 = fVar16;
      if ((uVar3 & 1) == 0) {
        fVar17 = local_f8 * *(float *)(lVar1 + 0x44) + *(float *)(lVar1 + 0x4c);
      }
      fVar2 = *(float *)(lVar1 + 0x50);
      local_14c = *(float *)(lVar1 + 0x54);
      fVar12 = (float)FUN_148204758(param_1,uVar8,4);
      FUN_148200430(param_1,&local_fc,uVar8,5);
      fVar18 = local_fc * *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x70);
      fVar15 = fVar18;
      fVar19 = fVar18;
      if ((uVar3 & 2) == 0) {
        fVar15 = local_f4 * *(float *)(lVar1 + 0x68) + *(float *)(lVar1 + 0x78);
        fVar19 = local_f8 * *(float *)(lVar1 + 100) + *(float *)(lVar1 + 0x74);
      }
      lVar6 = (longlong)*(int *)(lVar5 + 0x94);
      lVar10 = (longlong)(int)uVar8;
      if (-1 < lVar6) {
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(undefined4 *)(*(longlong *)(lVar7 + lVar6 * 8) + lVar10 * 4) = local_124;
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(undefined4 *)
         ((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar7 + lVar6 * 8) + lVar10 * 4) =
             local_120;
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(undefined4 *)
         ((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) + *(longlong *)(lVar7 + lVar6 * 8) +
         lVar10 * 4) = local_11c;
      }
      fVar13 = fVar11 * fVar14 + fVar13;
      FUN_14806d768(param_1,*(undefined4 *)(lVar5 + 0x98),uVar8);
      if (-1 < (longlong)*(int *)(lVar5 + 0x9c)) {
        lVar6 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar6 = lVar4;
        }
        *(float *)(*(longlong *)(lVar6 + (longlong)*(int *)(lVar5 + 0x9c) * 8) + lVar10 * 4) =
             fVar13;
      }
      lVar6 = (longlong)*(int *)(lVar5 + 0xa0);
      if (-1 < lVar6) {
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(float *)(*(longlong *)(lVar7 + lVar6 * 8) + lVar10 * 4) = fVar16;
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar7 + lVar6 * 8) +
                  lVar10 * 4) = fVar17;
      }
      fVar14 = fVar12 * fVar2 + local_14c;
      if (-1 < (longlong)*(int *)(lVar5 + 0xa4)) {
        lVar6 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar6 = lVar4;
        }
        *(float *)(*(longlong *)(lVar6 + (longlong)*(int *)(lVar5 + 0xa4) * 8) + lVar10 * 4) =
             fVar14;
      }
      lVar6 = (longlong)*(int *)(lVar5 + 0xa8);
      if (-1 < lVar6) {
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(float *)(*(longlong *)(lVar7 + lVar6 * 8) + lVar10 * 4) = fVar18;
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar7 + lVar6 * 8) +
                  lVar10 * 4) = fVar19;
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(float *)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) +
                   *(longlong *)(lVar7 + lVar6 * 8) + lVar10 * 4) = fVar15;
      }
      lVar6 = (longlong)*(int *)(lVar5 + 0xac);
      if (-1 < lVar6) {
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(undefined4 *)(*(longlong *)(lVar7 + lVar6 * 8) + lVar10 * 4) = local_124;
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(undefined4 *)
         ((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar7 + lVar6 * 8) + lVar10 * 4) =
             local_120;
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(undefined4 *)
         ((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) + *(longlong *)(lVar7 + lVar6 * 8) +
         lVar10 * 4) = local_11c;
      }
      if (-1 < (longlong)*(int *)(lVar5 + 0xb0)) {
        lVar6 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar6 = lVar4;
        }
        *(float *)(*(longlong *)(lVar6 + (longlong)*(int *)(lVar5 + 0xb0) * 8) + lVar10 * 4) =
             fVar13;
      }
      lVar6 = (longlong)*(int *)(lVar5 + 0xb4);
      if (-1 < lVar6) {
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(float *)(*(longlong *)(lVar7 + lVar6 * 8) + lVar10 * 4) = fVar16;
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar7 + lVar6 * 8) +
                  lVar10 * 4) = fVar17;
      }
      if (-1 < (longlong)*(int *)(lVar5 + 0xb8)) {
        lVar6 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar6 = lVar4;
        }
        *(float *)(*(longlong *)(lVar6 + (longlong)*(int *)(lVar5 + 0xb8) * 8) + lVar10 * 4) =
             fVar14;
      }
      lVar6 = (longlong)*(int *)(lVar5 + 0xbc);
      if (-1 < lVar6) {
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(float *)(*(longlong *)(lVar7 + lVar6 * 8) + lVar10 * 4) = fVar18;
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(float *)((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar7 + lVar6 * 8) +
                  lVar10 * 4) = fVar19;
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar7 = lVar4;
        }
        *(float *)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) +
                   *(longlong *)(lVar7 + lVar6 * 8) + lVar10 * 4) = fVar15;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 8));
  }
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14806d324 FUN_14806d324 body=120 status=ok
// SIG undefined FUN_14806d324(void)

void FUN_14806d324(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  void *_Dst;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar2 = (int)plVar3[1];
  uVar5 = iVar2 + 3U & 0xfffffffc;
  iVar1 = uVar5 + 0xc0;
  *(int *)(plVar3 + 1) = iVar1;
  uVar4 = iVar1 - iVar2;
  if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar2) < uVar4) {
    FUN_1447403be(plVar3);
  }
  memset((void *)((longlong)iVar2 + *plVar3),0,(longlong)(int)uVar4);
  _Dst = (void *)((longlong)(int)uVar5 + **(longlong **)(param_1 + 0x10));
  memset(_Dst,0,0xc0);
  FUN_14806d802(_Dst);
  return;
}



// FUNCTION 14806d39c FUN_14806d39c body=169 status=ok
// SIG undefined FUN_14806d39c(void)

uint * FUN_14806d39c(undefined8 param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[2] = DAT_14cb331a8;
  *(undefined8 *)param_2 = DAT_14cb331a0;
  if (*(int *)(param_3 + 8) == 0) {
    uVar1 = FUN_1482029d2(param_1,param_3 + 0xc);
    if (-1 < (int)uVar1) {
      *param_2 = uVar1 | *param_2 & 0xc0000000 | 0x20000000;
      param_2[1] = 0;
      param_2[2] = 0x3f800000;
    }
  }
  else {
    local_28 = param_3 + 0x28;
    local_20 = *(undefined8 *)(param_3 + 0x18);
    local_18 = *(undefined4 *)(param_3 + 0x20);
    FUN_14806d882(param_1,param_2,*(int *)(param_3 + 8));
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806d446 FUN_14806d446 body=459 status=ok
// SIG undefined FUN_14806d446(void)

void FUN_14806d446(uint *param_1,float *param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 auVar14 [16];
  ulonglong uVar9;
  
  uVar6 = *param_1;
  uVar8 = uVar6 & 0xfffff;
  uVar9 = (ulonglong)uVar8;
  if ((uVar6 >> 0x1d & 1) == 0) {
    if ((uVar6 >> 0x1e & 1) == 0) {
      fVar12 = (float)(uVar6 >> 0x14 & 0x1ff);
      fVar13 = ((float)param_4 - (float)param_1[1]) * (float)param_1[2];
      if (fVar12 <= fVar13) {
        fVar13 = fVar12;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      iVar10 = ((int)ROUND(fVar13 + fVar13 + -0.5) >> 1) * 3;
      lVar7 = *(longlong *)(param_3 + 0x120);
      fVar12 = *(float *)(lVar7 + (longlong)(int)(uVar8 + iVar10 + 2) * 4);
      fVar1 = *(float *)(lVar7 + (longlong)(int)(uVar8 + iVar10 + 1) * 4);
      fVar2 = *(float *)(lVar7 + (longlong)(int)(iVar10 + uVar8) * 4);
      iVar10 = (int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1;
      iVar11 = uVar8 + iVar10 * -3;
      fVar3 = *(float *)(lVar7 + (longlong)(iVar11 + 2) * 4);
      fVar4 = *(float *)(lVar7 + (longlong)(int)(iVar10 * -3 + uVar8 + 1) * 4);
      auVar14._4_4_ = (int)((ulonglong)param_4 >> 0x20);
      auVar14._0_4_ = fVar13;
      auVar14._8_4_ = in_XMM3_Dc;
      auVar14._12_4_ = in_XMM3_Dd;
      auVar14 = roundss(ZEXT816(0),auVar14,0xb);
      fVar13 = fVar13 - auVar14._0_4_;
      *param_2 = (*(float *)(lVar7 + (longlong)iVar11 * 4) - fVar2) * fVar13 + fVar2;
      param_2[1] = (fVar4 - fVar1) * fVar13 + fVar1;
      param_2[2] = (fVar3 - fVar12) * fVar13 + fVar12;
    }
    else {
      lVar7 = *(longlong *)(param_3 + 0x120);
      fVar13 = *(float *)(lVar7 + uVar9 * 4);
      fVar13 = (*(float *)(lVar7 + 0xc + uVar9 * 4) - fVar13) * (float)param_1[3] + fVar13;
      if ((int)uVar6 < 0) {
        *param_2 = fVar13;
        param_2[1] = fVar13;
        param_2[2] = fVar13;
      }
      else {
        fVar12 = *(float *)(lVar7 + 8 + uVar9 * 4);
        fVar1 = *(float *)(lVar7 + 4 + uVar9 * 4);
        fVar2 = *(float *)(lVar7 + 0x14 + uVar9 * 4);
        fVar3 = *(float *)(lVar7 + 0x10 + uVar9 * 4);
        fVar4 = (float)param_1[4];
        fVar5 = (float)param_1[5];
        *param_2 = fVar13;
        param_2[1] = (fVar3 - fVar1) * fVar4 + fVar1;
        param_2[2] = (fVar2 - fVar12) * fVar5 + fVar12;
      }
    }
  }
  else {
    lVar7 = *(longlong *)(param_3 + 0x130);
    param_2[2] = *(float *)(lVar7 + 8 + uVar9 * 4);
    *(undefined8 *)param_2 = *(undefined8 *)(lVar7 + uVar9 * 4);
  }
  return;
}



// FUNCTION 14806d612 FUN_14806d612 body=228 status=ok
// SIG undefined FUN_14806d612(void)

float * FUN_14806d612(undefined8 param_1,float *param_2,undefined4 param_3,float *param_4,
                     float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1482004ec(param_1,&local_58,param_3,1);
  local_3c = param_4[3] * local_4c;
  local_40 = param_4[2] * local_50;
  local_44 = param_4[1] * local_54;
  local_48 = *param_4 * local_58;
  FUN_1414dd342(&local_38);
  fVar1 = param_5[3];
  fVar2 = param_5[2];
  fVar3 = param_5[1];
  *param_2 = *param_5 + local_38;
  param_2[1] = fVar3 + local_34;
  param_2[2] = fVar2 + local_30;
  param_2[3] = fVar1 + local_2c;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806d6f8 FUN_14806d6f8 body=112 status=ok
// SIG undefined FUN_14806d6f8(void)

void FUN_14806d6f8(longlong param_1,uint param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (-1 < (int)param_2) {
    lVar1 = param_1 + 0x68;
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    uVar2 = (ulonglong)param_2;
    lVar3 = (longlong)param_3;
    *(undefined4 *)(*(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4) = *param_4;
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    *(undefined4 *)
     ((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4) =
         param_4[1];
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    *(undefined4 *)
     ((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) + *(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4
     ) = param_4[2];
  }
  return;
}



// FUNCTION 14806d768 FUN_14806d768 body=153 status=ok
// SIG undefined FUN_14806d768(void)

void FUN_14806d768(longlong param_1,uint param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (-1 < (int)param_2) {
    lVar1 = param_1 + 0x68;
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    uVar2 = (ulonglong)param_2;
    lVar3 = (longlong)param_3;
    *(undefined4 *)(*(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4) = *param_4;
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    *(undefined4 *)
     ((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4) =
         param_4[1];
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    *(undefined4 *)
     ((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) + *(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4
     ) = param_4[2];
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    *(undefined4 *)
     ((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 3) + *(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4
     ) = param_4[3];
  }
  return;
}



// FUNCTION 14806d802 FUN_14806d802 body=127 status=ok
// SIG undefined FUN_14806d802(void)

void FUN_14806d802(undefined4 *param_1)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = DAT_14cb331a0;
  param_1[3] = DAT_14cb331a8;
  auVar1 = pmovsxbd(in_XMM0,0xff0000ff);
  *(undefined1 (*) [16])(param_1 + 4) = auVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar1;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar1;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x23) = 0;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0xffffffff;
  return;
}



// FUNCTION 14806d882 FUN_14806d882 body=238 status=ok
// SIG undefined FUN_14806d882(void)

uint * FUN_14806d882(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 *param_4,
                    float *param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = DAT_14cb331a8;
  *(undefined8 *)param_2 = DAT_14cb331a0;
  iVar3 = param_4[2];
  if (0 < iVar3) {
    uVar4 = *param_2;
    switch(param_3) {
    case 1:
    case 3:
      uVar4 = uVar4 | 0xc0000000;
      break;
    case 2:
    case 4:
      uVar4 = uVar4 | 0x40000000;
      break;
    case 5:
      uVar4 = uVar4 | 0x80000000;
    }
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    uVar2 = FUN_148202942();
    iVar3 = iVar3 + -1;
    *param_2 = iVar3 * 0x100000 | uVar2 & 0xe00fffff | uVar4 & 0xe0000000;
    fVar1 = *param_5;
    fVar5 = param_5[1];
    param_2[1] = (uint)fVar1;
    uVar4 = 0;
    if (iVar3 != 0) {
      fVar5 = fVar5 - fVar1;
      uVar4 = -(uint)(0.0 < fVar5) & (uint)((float)iVar3 / fVar5);
    }
    param_2[2] = uVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14806d972 FUN_14806d972 body=138 status=ok
// SIG undefined FUN_14806d972(void)

longlong FUN_14806d972(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar2 = (int)plVar3[1];
  uVar7 = (longlong)(iVar2 + 3) & 0xfffffffffffffffc;
  iVar5 = (int)uVar7 + 0x28;
  *(int *)(plVar3 + 1) = iVar5;
  uVar6 = iVar5 - iVar2;
  if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar2) < uVar6) {
    FUN_1447403be(plVar3);
  }
  memset((void *)((longlong)iVar2 + *plVar3),0,(longlong)(int)uVar6);
  lVar4 = **(longlong **)(param_1 + 0x10);
  *(undefined8 *)(lVar4 + uVar7) = 0xffffffff00000000;
  puVar1 = (undefined8 *)(lVar4 + 8 + uVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x18 + uVar7) = 0;
  *(undefined8 *)(lVar4 + 0x20 + uVar7) = 0xffffffffffffffff;
  return lVar4 + uVar7;
}



// FUNCTION 14806d9fc FUN_14806d9fc body=1000 status=ok
// SIG undefined FUN_14806d9fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14806d9fc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  longlong local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  ulonglong uVar9;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar5 = (longlong)(*(int *)(param_1 + 0x108) + 3) & 0xfffffffffffffffc;
  *(int *)(param_1 + 0x108) = (int)uVar5 + 0x28;
  lVar1 = *(longlong *)(param_1 + 0xf8);
  uVar8 = *(int *)(param_1 + 0x118) + 0xfU & 0xfffffff0;
  uVar9 = (ulonglong)uVar8;
  lVar2 = FUN_145dfec56();
  *(uint *)(param_1 + 0x118) = *(int *)(lVar2 + 0x3c) + uVar8;
  if (*(int *)(param_1 + 8) != 0) {
    local_118 = *(longlong *)(param_1 + 0x40);
    local_120 = *(longlong *)(param_1 + 0x50);
    lVar2 = *(longlong *)(param_1 + 0x110);
    local_128 = param_1 + 0x68;
    uVar7 = 0;
    do {
      iVar6 = (int)uVar7;
      FUN_148200430(param_1,&local_d8,uVar7 & 0xffffffff,0);
      fVar15 = (float)uStack_d0 * *(float *)(lVar2 + 0x18 + uVar9) +
               *(float *)(lVar2 + 0x28 + uVar9);
      fVar16 = local_d8._4_4_ * *(float *)(lVar2 + 0x14 + uVar9) + *(float *)(lVar2 + 0x24 + uVar9);
      fVar17 = (float)local_d8 * *(float *)(lVar2 + 0x10 + uVar9) + *(float *)(lVar2 + 0x20 + uVar9)
      ;
      local_104 = *(float *)(local_118 + uVar7 * 4);
      fVar11 = *(float *)(local_120 + uVar7 * 4);
      lVar3 = (longlong)*(int *)(lVar1 + 0x20 + uVar5);
      if (lVar3 < 0) {
        local_d8 = ram0x00014c846340;
        uStack_d0 = _DAT_14c846348;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar4 = local_128;
        }
        lVar4 = *(longlong *)(lVar4 + lVar3 * 8);
        uVar8 = *(uint *)(param_1 + 0x1c);
        lVar3 = lVar4 + (longlong)iVar6 * 4;
        local_d8 = CONCAT44(*(undefined4 *)((ulonglong)uVar8 + lVar3),
                            *(undefined4 *)(lVar4 + (longlong)iVar6 * 4));
        uStack_d0 = CONCAT44(*(undefined4 *)((ulonglong)(uVar8 * 3) + lVar3),
                             *(undefined4 *)((ulonglong)(uVar8 * 2) + lVar3));
      }
      lVar3 = (longlong)*(int *)(lVar1 + 0x24 + uVar5);
      if (lVar3 < 0) {
        local_e8 = ram0x00014c846340;
        uStack_e0 = _DAT_14c846348;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar4 = local_128;
        }
        lVar4 = *(longlong *)(lVar4 + lVar3 * 8);
        uVar8 = *(uint *)(param_1 + 0x1c);
        lVar3 = lVar4 + (longlong)iVar6 * 4;
        local_e8 = CONCAT44(*(undefined4 *)((ulonglong)uVar8 + lVar3),
                            *(undefined4 *)(lVar4 + (longlong)iVar6 * 4));
        uStack_e0 = CONCAT44(*(undefined4 *)((ulonglong)(uVar8 * 3) + lVar3),
                             *(undefined4 *)((ulonglong)(uVar8 * 2) + lVar3));
      }
      local_fc = fVar15 * local_104;
      local_100 = fVar16 * local_104;
      local_104 = local_104 * fVar17;
      FUN_14806dde6(&local_f8,&local_104);
      fVar13 = (float)local_d8 * fStack_f4;
      fVar14 = (float)local_d8 * local_f8;
      fVar10 = local_d8._4_4_ * local_f8;
      fVar12 = local_d8._4_4_ * fStack_f4;
      local_d8 = CONCAT44((float)uStack_d0 * local_f8 * 1.0 +
                          local_d8._4_4_ * fStack_ec * 1.0 +
                          (float)local_d8 * fStack_f0 * -1.0 + uStack_d0._4_4_ * fStack_f4,
                          (float)uStack_d0 * fStack_f4 * -1.0 +
                          local_d8._4_4_ * fStack_f0 * 1.0 +
                          (float)local_d8 * fStack_ec * 1.0 + uStack_d0._4_4_ * local_f8);
      uStack_d0 = CONCAT44((float)uStack_d0 * fStack_f0 * -1.0 +
                           fVar12 * -1.0 + fVar14 * -1.0 + uStack_d0._4_4_ * fStack_ec,
                           (float)uStack_d0 * fStack_ec * 1.0 +
                           fVar10 * -1.0 + fVar13 * 1.0 + uStack_d0._4_4_ * fStack_f0);
      local_108 = fVar15 * fVar11;
      local_10c = fVar16 * fVar11;
      local_110 = fVar17 * fVar11;
      FUN_14806dde6(&local_f8,&local_110);
      fVar16 = (float)local_e8 * fStack_f4;
      fVar17 = (float)local_e8 * local_f8;
      fVar11 = local_e8._4_4_ * local_f8;
      fVar15 = local_e8._4_4_ * fStack_f4;
      local_e8 = CONCAT44((float)uStack_e0 * local_f8 * 1.0 +
                          local_e8._4_4_ * fStack_ec * 1.0 +
                          (float)local_e8 * fStack_f0 * -1.0 + uStack_e0._4_4_ * fStack_f4,
                          (float)uStack_e0 * fStack_f4 * -1.0 +
                          local_e8._4_4_ * fStack_f0 * 1.0 +
                          (float)local_e8 * fStack_ec * 1.0 + uStack_e0._4_4_ * local_f8);
      uStack_e0 = CONCAT44((float)uStack_e0 * fStack_f0 * -1.0 +
                           fVar15 * -1.0 + fVar17 * -1.0 + uStack_e0._4_4_ * fStack_ec,
                           (float)uStack_e0 * fStack_ec * 1.0 +
                           fVar11 * -1.0 + fVar16 * 1.0 + uStack_e0._4_4_ * fStack_f0);
      FUN_14806e29c(param_1,*(undefined4 *)(lVar1 + 0x20 + uVar5),uVar7 & 0xffffffff,&local_d8);
      FUN_14806e29c(param_1,*(undefined4 *)(lVar1 + 0x24 + uVar5),uVar7 & 0xffffffff);
      uVar7 = uVar7 + 1;
    } while ((uint)uVar7 < *(uint *)(param_1 + 8));
  }
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806dde6 FUN_14806dde6 body=1206 status=ok
// SIG undefined FUN_14806dde6(void)

void FUN_14806dde6(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 in_XMM1 [16];
  undefined1 auVar3 [16];
  undefined1 in_XMM2 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_ac;
  
  auVar3 = roundss(in_XMM1,ZEXT416((uint)*param_2),0xb);
  fVar1 = (*param_2 - auVar3._0_4_) * 3.1415927;
  *param_2 = fVar1;
  auVar3 = roundss(in_XMM2,ZEXT416((uint)param_2[1]),0xb);
  fVar2 = (param_2[1] - auVar3._0_4_) * 3.1415927;
  param_2[1] = fVar2;
  fVar6 = *(float *)(&DAT_14a184448 + (ulonglong)(fVar1 < 0.0) * 4);
  auVar3 = roundss(ZEXT816(0),ZEXT416((uint)param_2[2]),0xb);
  fVar4 = (param_2[2] - auVar3._0_4_) * 3.1415927;
  param_2[2] = fVar4;
  fVar1 = (float)(longlong)(fVar1 * 0.15915494 + fVar6) * -6.2831855 + fVar1;
  if (fVar1 <= 1.5707964) {
    if (fVar1 < -1.5707964) {
      fVar6 = -3.1415927;
      goto LAB_14806ded3;
    }
    fVar6 = 1.0;
  }
  else {
    fVar6 = 3.1415927;
LAB_14806ded3:
    fVar1 = fVar6 - fVar1;
    fVar6 = -1.0;
  }
  fVar2 = (float)(longlong)
                 (fVar2 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar2 < 0.0) * 4)) *
          -6.2831855 + fVar2;
  if (fVar2 <= 1.5707964) {
    if (-1.5707964 <= fVar2) {
      fVar8 = 1.0;
      goto LAB_14806df39;
    }
    fVar8 = -3.1415927;
  }
  else {
    fVar8 = 3.1415927;
  }
  fVar2 = fVar8 - fVar2;
  fVar8 = -1.0;
LAB_14806df39:
  fVar4 = (float)(longlong)
                 (fVar4 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar4 < 0.0) * 4)) *
          -6.2831855 + fVar4;
  if (fVar4 <= 1.5707964) {
    if (-1.5707964 <= fVar4) {
      local_ac = 1.0;
    }
    else {
      fVar4 = -3.1415927 - fVar4;
      local_ac = -1.0;
    }
  }
  else {
    fVar4 = 3.1415927 - fVar4;
    local_ac = -1.0;
  }
  fVar7 = fVar2 * fVar2;
  fVar8 = fVar8 * (((((fVar7 * -2.6051615e-07 + 2.4760495e-05) * fVar7 + -0.0013888378) * fVar7 +
                    0.041666638) * fVar7 + -0.5) * fVar7 + 1.0);
  fVar2 = (((((fVar7 * -2.3889859e-08 + 2.7525562e-06) * fVar7 + -0.00019840874) * fVar7 +
            0.008333331) * fVar7 + -0.16666667) * fVar7 + 1.0) * fVar2;
  fVar7 = fVar1 * fVar1;
  fVar6 = fVar6 * (((((fVar7 * -2.6051615e-07 + 2.4760495e-05) * fVar7 + -0.0013888378) * fVar7 +
                    0.041666638) * fVar7 + -0.5) * fVar7 + 1.0);
  fVar1 = (((((fVar7 * -2.3889859e-08 + 2.7525562e-06) * fVar7 + -0.00019840874) * fVar7 +
            0.008333331) * fVar7 + -0.16666667) * fVar7 + 1.0) * fVar1;
  fVar7 = fVar4 * fVar4;
  fVar4 = (((((fVar7 * -2.3889859e-08 + 2.7525562e-06) * fVar7 + -0.00019840874) * fVar7 +
            0.008333331) * fVar7 + -0.16666667) * fVar7 + 1.0) * fVar4;
  local_ac = (((((fVar7 * -2.6051615e-07 + 2.4760495e-05) * fVar7 + -0.0013888378) * fVar7 +
               0.041666638) * fVar7 + -0.5) * fVar7 + 1.0) * local_ac;
  fVar7 = fVar6 * fVar8;
  fVar5 = fVar1 * fVar2;
  fVar8 = -fVar1 * fVar8;
  fVar6 = fVar6 * fVar2;
  *param_1 = fVar6 * fVar4 + fVar8 * local_ac;
  param_1[1] = fVar8 * fVar4 - fVar6 * local_ac;
  param_1[2] = fVar7 * fVar4 - local_ac * fVar5;
  param_1[3] = fVar7 * local_ac + fVar5 * fVar4;
  return;
}



// FUNCTION 14806e29c FUN_14806e29c body=153 status=ok
// SIG undefined FUN_14806e29c(void)

void FUN_14806e29c(longlong param_1,uint param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (-1 < (int)param_2) {
    lVar1 = param_1 + 0x68;
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    uVar2 = (ulonglong)param_2;
    lVar3 = (longlong)param_3;
    *(undefined4 *)(*(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4) = *param_4;
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    *(undefined4 *)
     ((ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4) =
         param_4[1];
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    *(undefined4 *)
     ((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 2) + *(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4
     ) = param_4[2];
    lVar4 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar4 = lVar1;
    }
    *(undefined4 *)
     ((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * 3) + *(longlong *)(lVar4 + uVar2 * 8) + lVar3 * 4
     ) = param_4[3];
  }
  return;
}



// FUNCTION 14806e336 FUN_14806e336 body=128 status=ok
// SIG undefined FUN_14806e336(void)

longlong FUN_14806e336(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  iVar1 = (int)plVar2[1];
  uVar6 = (longlong)(iVar1 + 3) & 0xfffffffffffffffc;
  iVar4 = (int)uVar6 + 0x10;
  *(int *)(plVar2 + 1) = iVar4;
  uVar5 = iVar4 - iVar1;
  if ((uint)(*(int *)((longlong)plVar2 + 0xc) - iVar1) < uVar5) {
    FUN_1447403be(plVar2);
  }
  memset((void *)((longlong)iVar1 + *plVar2),0,(longlong)(int)uVar5);
  lVar3 = **(longlong **)(param_1 + 0x10);
  *(undefined4 *)(lVar3 + 8 + uVar6) = DAT_14cb331a8;
  *(undefined8 *)(lVar3 + uVar6) = DAT_14cb331a0;
  *(undefined4 *)(lVar3 + 0xc + uVar6) = 0xffffffff;
  return lVar3 + uVar6;
}



// FUNCTION 14806e3b6 FUN_14806e3b6 body=169 status=ok
// SIG undefined FUN_14806e3b6(void)

uint * FUN_14806e3b6(undefined8 param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[2] = DAT_14cb331a8;
  *(undefined8 *)param_2 = DAT_14cb331a0;
  if (*(int *)(param_3 + 8) == 0) {
    uVar1 = FUN_1482029d2(param_1,param_3 + 0xc);
    if (-1 < (int)uVar1) {
      *param_2 = uVar1 | *param_2 & 0xc0000000 | 0x20000000;
      param_2[1] = 0;
      param_2[2] = 0x3f800000;
    }
  }
  else {
    local_28 = param_3 + 0x28;
    local_20 = *(undefined8 *)(param_3 + 0x18);
    local_18 = *(undefined4 *)(param_3 + 0x20);
    FUN_14806e616(param_1,param_2,*(int *)(param_3 + 8));
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806e460 FUN_14806e460 body=436 status=ok
// SIG undefined FUN_14806e460(void)

void FUN_14806e460(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_108 [44];
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_bc [28];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar3 = *(int *)(param_1 + 0x108) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x108) = uVar3 + 0x10;
  if (*(int *)(param_1 + 8) != 0) {
    lVar6 = (longlong)(int)uVar3 + *(longlong *)(param_1 + 0xf8);
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar5 = 0;
    do {
      FUN_14806e706(local_bc,param_1,lVar6,uVar5 & 0xffffffff);
      fVar7 = 1.0;
      fVar8 = 1.0;
      fVar9 = 1.0;
      fVar10 = 1.0;
      if (-1 < (longlong)*(int *)(lVar6 + 0xc)) {
        lVar4 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar4 = param_1 + 0x68;
        }
        lVar2 = *(longlong *)(lVar4 + (longlong)*(int *)(lVar6 + 0xc) * 8);
        uVar3 = *(uint *)(param_1 + 0x1c);
        lVar4 = lVar2 + (longlong)(int)uVar5 * 4;
        fVar7 = *(float *)((ulonglong)(uVar3 * 3) + lVar4);
        fVar8 = *(float *)((ulonglong)(uVar3 * 2) + lVar4);
        fVar9 = *(float *)((ulonglong)uVar3 + lVar4);
        fVar10 = *(float *)(lVar2 + (longlong)(int)uVar5 * 4);
      }
      FUN_14806e790(local_bc,&local_dc,param_1,*(undefined4 *)(lVar1 + uVar5 * 4));
      local_cc = fVar10 * local_dc;
      local_c8 = fVar9 * local_d8;
      local_c4 = fVar8 * local_d4;
      local_c0 = fVar7 * local_d0;
      FUN_14806d768(param_1,*(undefined4 *)(lVar6 + 0xc),uVar5 & 0xffffffff,&local_cc);
      uVar5 = uVar5 + 1;
    } while ((uint)uVar5 < *(uint *)(param_1 + 8));
  }
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806e616 FUN_14806e616 body=238 status=ok
// SIG undefined FUN_14806e616(void)

uint * FUN_14806e616(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 *param_4,
                    float *param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = DAT_14cb331a8;
  *(undefined8 *)param_2 = DAT_14cb331a0;
  iVar3 = param_4[2];
  if (0 < iVar3) {
    uVar4 = *param_2;
    switch(param_3) {
    case 1:
    case 3:
      uVar4 = uVar4 | 0xc0000000;
      break;
    case 2:
    case 4:
      uVar4 = uVar4 | 0x40000000;
      break;
    case 5:
      uVar4 = uVar4 | 0x80000000;
    }
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    uVar2 = FUN_14820298a();
    iVar3 = iVar3 + -1;
    *param_2 = iVar3 * 0x100000 | uVar2 & 0xe00fffff | uVar4 & 0xe0000000;
    fVar1 = *param_5;
    fVar5 = param_5[1];
    param_2[1] = (uint)fVar1;
    uVar4 = 0;
    if (iVar3 != 0) {
      fVar5 = fVar5 - fVar1;
      uVar4 = -(uint)(0.0 < fVar5) & (uint)((float)iVar3 / fVar5);
    }
    param_2[2] = uVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14806e706 FUN_14806e706 body=137 status=ok
// SIG undefined FUN_14806e706(void)

undefined8 *
FUN_14806e706(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  if ((*(byte *)((longlong)param_1 + 3) & 0x40) != 0) {
    FUN_1482004ec(param_2,local_38,param_4,0);
    FUN_1414dd342(&local_48,local_38);
    *(undefined4 *)((longlong)param_1 + 0xc) = local_48;
    *(undefined4 *)(param_1 + 2) = uStack_44;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_40;
    *(undefined4 *)(param_1 + 3) = uStack_3c;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14806e790 FUN_14806e790 body=602 status=ok
// SIG undefined FUN_14806e790(void)

float * FUN_14806e790(uint *param_1,float *param_2,longlong param_3,undefined8 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_88 [32];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  ulonglong local_50;
  ulonglong uVar10;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar11 = *param_1;
  uVar9 = uVar11 & 0xfffff;
  uVar10 = (ulonglong)uVar9;
  if ((uVar11 >> 0x1d & 1) != 0) {
    pfVar1 = (float *)(*(longlong *)(param_3 + 0x130) + uVar10 * 4);
    fVar14 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar2 = pfVar1[3];
    *param_2 = *pfVar1;
    param_2[1] = fVar14;
    param_2[2] = fVar13;
    param_2[3] = fVar2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
  }
  if ((uVar11 >> 0x1e & 1) == 0) {
    fVar13 = (float)(uVar11 >> 0x14 & 0x1ff);
    fVar14 = ((float)param_4 - (float)param_1[1]) * (float)param_1[2];
    if (fVar13 <= fVar14) {
      fVar14 = fVar13;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    uVar11 = (int)ROUND(fVar14 + fVar14 + -0.5) & 0xfffffffe;
    lVar8 = *(longlong *)(param_3 + 0x120);
    fVar13 = *(float *)(lVar8 + (longlong)(int)(uVar9 + uVar11 * 2 + 3) * 4);
    fVar2 = *(float *)(lVar8 + (longlong)(int)(uVar9 + 2 + uVar11 * 2) * 4);
    fVar3 = *(float *)(lVar8 + (longlong)(int)(uVar9 + 1 + uVar11 * 2) * 4);
    fVar4 = *(float *)(lVar8 + (longlong)(int)(uVar9 + uVar11 * 2) * 4);
    uVar11 = (int)ROUND(-0.5 - (fVar14 + fVar14)) * 2 & 0xfffffffc;
    iVar12 = uVar9 - uVar11;
    fVar5 = *(float *)(lVar8 + (longlong)(int)((uVar9 - uVar11) + 3) * 4);
    fVar6 = *(float *)(lVar8 + (longlong)(iVar12 + 2) * 4);
    fVar7 = *(float *)(lVar8 + (longlong)(iVar12 + 1) * 4);
    auVar15._4_4_ = (int)((ulonglong)param_4 >> 0x20);
    auVar15._0_4_ = fVar14;
    auVar15._8_4_ = in_XMM3_Dc;
    auVar15._12_4_ = in_XMM3_Dd;
    auVar15 = roundss(unaff_XMM9,auVar15,0xb);
    fVar14 = fVar14 - auVar15._0_4_;
    *param_2 = (*(float *)(lVar8 + (longlong)iVar12 * 4) - fVar4) * fVar14 + fVar4;
    param_2[1] = (fVar7 - fVar3) * fVar14 + fVar3;
    param_2[2] = (fVar6 - fVar2) * fVar14 + fVar2;
    param_2[3] = (fVar5 - fVar13) * fVar14 + fVar13;
  }
  else {
    lVar8 = *(longlong *)(param_3 + 0x120);
    local_68 = *(float *)(lVar8 + uVar10 * 4);
    local_68 = (*(float *)(lVar8 + 0x10 + uVar10 * 4) - local_68) * (float)param_1[3] + local_68;
    local_5c = local_68;
    local_60 = local_68;
    local_64 = local_68;
    if (-1 < (int)uVar11) {
      local_5c = *(float *)(lVar8 + 0xc + uVar10 * 4);
      local_60 = *(float *)(lVar8 + 8 + uVar10 * 4);
      local_64 = *(float *)(lVar8 + 4 + uVar10 * 4);
      local_64 = (*(float *)(lVar8 + 0x14 + uVar10 * 4) - local_64) * (float)param_1[4] + local_64;
      local_60 = (*(float *)(lVar8 + 0x18 + uVar10 * 4) - local_60) * (float)param_1[5] + local_60;
      local_5c = (*(float *)(lVar8 + 0x1c + uVar10 * 4) - local_5c) * (float)param_1[6] + local_5c;
    }
    FUN_1414dd342(param_2);
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}


