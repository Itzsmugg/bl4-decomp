// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14785d6b2 FUN_14785d6b2 body=70 status=ok
// SIG undefined FUN_14785d6b2(void)

undefined8 FUN_14785d6b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined8 *)(param_3 + 0x16);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x16) = uVar1;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 14785d720 FUN_14785d720 body=59 status=ok
// SIG undefined FUN_14785d720(void)

undefined8 FUN_14785d720(longlong *param_1)

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



// FUNCTION 14785d766 FUN_14785d766 body=37 status=ok
// SIG undefined FUN_14785d766(void)

void FUN_14785d766(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14785d806 FUN_14785d806 body=113 status=ok
// SIG undefined FUN_14785d806(void)

undefined1 FUN_14785d806(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      lVar12 = *(longlong *)(param_3 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_14689c22e();
          lVar12 = *(longlong *)(param_3 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar13);
      *plVar1 = lVar12;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x14 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar7;
      *(undefined4 *)(plVar1 + 3) = uVar8;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar9;
      *(undefined4 *)(plVar1 + 4) = uVar10;
      lVar13 = lVar13 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14785d8a0 FUN_14785d8a0 body=59 status=ok
// SIG undefined FUN_14785d8a0(void)

undefined8 FUN_14785d8a0(longlong *param_1)

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



// FUNCTION 14785d9ae FUN_14785d9ae body=59 status=ok
// SIG undefined FUN_14785d9ae(void)

undefined8 FUN_14785d9ae(longlong *param_1)

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



// FUNCTION 14785dafe FUN_14785dafe body=59 status=ok
// SIG undefined FUN_14785dafe(void)

undefined8 FUN_14785dafe(longlong *param_1)

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



// FUNCTION 14785dbfc FUN_14785dbfc body=68 status=ok
// SIG undefined FUN_14785dbfc(void)

undefined8 FUN_14785dbfc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xb8);
      lVar1 = lVar1 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14785dc68 FUN_14785dc68 body=59 status=ok
// SIG undefined FUN_14785dc68(void)

undefined8 FUN_14785dc68(longlong *param_1)

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



// FUNCTION 14785dd86 FUN_14785dd86 body=59 status=ok
// SIG undefined FUN_14785dd86(void)

undefined8 FUN_14785dd86(longlong *param_1)

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



// FUNCTION 14785de40 FUN_14785de40 body=47 status=ok
// SIG undefined FUN_14785de40(void)

void FUN_14785de40(undefined8 param_1,longlong *param_2)

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



// FUNCTION 14785de86 FUN_14785de86 body=87 status=ok
// SIG undefined FUN_14785de86(void)

undefined1 FUN_14785de86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14785dfa2(param_2,param_3);
    FUN_14785dffa(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14785df06 FUN_14785df06 body=59 status=ok
// SIG undefined FUN_14785df06(void)

undefined8 FUN_14785df06(longlong *param_1)

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



// FUNCTION 14785dfa2 FUN_14785dfa2 body=88 status=ok
// SIG undefined FUN_14785dfa2(void)

undefined8 * FUN_14785dfa2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14785e052(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14785dffa FUN_14785dffa body=88 status=ok
// SIG undefined FUN_14785dffa(void)

undefined8 * FUN_14785dffa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14785e0b4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xb8);
      }
    }
  }
  return param_1;
}



// FUNCTION 14785e052 FUN_14785e052 body=98 status=ok
// SIG undefined FUN_14785e052(void)

void FUN_14785e052(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14785e0b4 FUN_14785e0b4 body=117 status=ok
// SIG undefined FUN_14785e0b4(void)

void FUN_14785e0b4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14785e12a FUN_14785e12a body=51 status=ok
// SIG undefined FUN_14785e12a(void)

void FUN_14785e12a(longlong *param_1)

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



// FUNCTION 14785e1e2 FUN_14785e1e2 body=59 status=ok
// SIG undefined FUN_14785e1e2(void)

undefined8 FUN_14785e1e2(longlong *param_1)

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



// FUNCTION 14785e318 FUN_14785e318 body=59 status=ok
// SIG undefined FUN_14785e318(void)

undefined8 FUN_14785e318(longlong *param_1)

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



// FUNCTION 14785e45c FUN_14785e45c body=59 status=ok
// SIG undefined FUN_14785e45c(void)

undefined8 FUN_14785e45c(longlong *param_1)

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



// FUNCTION 14785e4fe FUN_14785e4fe body=55 status=ok
// SIG undefined FUN_14785e4fe(void)

void FUN_14785e4fe(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140416388(param_2 + 5,0x3e4ccccd);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}



// FUNCTION 14785e536 FUN_14785e536 body=55 status=ok
// SIG undefined FUN_14785e536(void)

void FUN_14785e536(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140416388(param_2 + 5,0x3e4ccccd);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}



// FUNCTION 14785e58c FUN_14785e58c body=63 status=ok
// SIG undefined FUN_14785e58c(void)

undefined1 FUN_14785e58c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14785e6b4(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14785e5f4 FUN_14785e5f4 body=59 status=ok
// SIG undefined FUN_14785e5f4(void)

undefined8 FUN_14785e5f4(longlong *param_1)

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



// FUNCTION 14785e640 FUN_14785e640 body=38 status=ok
// SIG undefined FUN_14785e640(void)

void FUN_14785e640(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1417ac9a0(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14785e6b4 FUN_14785e6b4 body=179 status=ok
// SIG undefined FUN_14785e6b4(void)

undefined8 * FUN_14785e6b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  
  *param_1 = *param_2;
  lVar9 = param_2[1];
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = param_2[1];
    }
  }
  bVar8 = DAT_14c950c29;
  param_1[1] = lVar9;
  param_1[4] = param_2[4];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  lVar9 = param_2[5];
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = param_2[5];
    }
  }
  param_1[5] = lVar9;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 9);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 9) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  FUN_140472d3c(param_1 + 0xc,param_2 + 0xc);
  FUN_140472cde(param_1 + 0xe,param_2 + 0xe);
  return param_1;
}



// FUNCTION 14785e7cc FUN_14785e7cc body=59 status=ok
// SIG undefined FUN_14785e7cc(void)

undefined8 FUN_14785e7cc(longlong *param_1)

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



// FUNCTION 14785e8b2 FUN_14785e8b2 body=75 status=ok
// SIG undefined FUN_14785e8b2(void)

undefined8 FUN_14785e8b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a787a6();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14785e926 FUN_14785e926 body=59 status=ok
// SIG undefined FUN_14785e926(void)

undefined8 FUN_14785e926(longlong *param_1)

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



// FUNCTION 14785e96c FUN_14785e96c body=38 status=ok
// SIG undefined FUN_14785e96c(void)

void FUN_14785e96c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14785ea10 FUN_14785ea10 body=63 status=ok
// SIG undefined FUN_14785ea10(void)

undefined1 FUN_14785ea10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14785eba2(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 14785ea78 FUN_14785ea78 body=59 status=ok
// SIG undefined FUN_14785ea78(void)

undefined8 FUN_14785ea78(longlong *param_1)

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



// FUNCTION 14785eac4 FUN_14785eac4 body=40 status=ok
// SIG undefined FUN_14785eac4(void)

void FUN_14785eac4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_14785eb3a(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 14785eb3a FUN_14785eb3a body=104 status=ok
// SIG undefined FUN_14785eb3a(void)

void FUN_14785eb3a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_1400d0e10(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14785eba2 FUN_14785eba2 body=268 status=ok
// SIG undefined FUN_14785eba2(void)

undefined8 * FUN_14785eba2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  param_1[2] = param_2[2];
  uVar10 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  param_1[5] = param_2[5];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  lVar11 = param_2[6];
  if (DAT_14c950c29 == '\x01') {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_14689c22e();
      lVar11 = param_2[6];
    }
  }
  param_1[6] = lVar11;
  uVar10 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar10;
  param_1[9] = param_2[9];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_2 + 0xb);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  uVar7 = *(undefined4 *)((longlong)param_2 + 100);
  uVar8 = *(undefined4 *)(param_2 + 0xd);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0xb) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar5;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  *(undefined4 *)((longlong)param_1 + 100) = uVar7;
  *(undefined4 *)(param_1 + 0xd) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar9;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  FUN_144a787a6(param_1 + 0xf,param_2 + 0xf);
  plVar1 = (longlong *)param_2[0x11];
  plVar2 = (longlong *)param_1[0x11];
  if (plVar2 != plVar1) {
    param_1[0x11] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x9c);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar5;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  FUN_14785ecae(param_1 + 0x16,param_2 + 0x16);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  return param_1;
}



// FUNCTION 14785ecae FUN_14785ecae body=93 status=ok
// SIG undefined FUN_14785ecae(void)

undefined8 * FUN_14785ecae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400d0e10(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14785ed0c(param_1,iVar1);
      FUN_14785ed7f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14785ed0c FUN_14785ed0c body=115 status=ok
// SIG undefined FUN_14785ed0c(void)

void FUN_14785ed0c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14785ed7f FUN_14785ed7f body=144 status=ok
// SIG undefined FUN_14785ed7f(void)

void FUN_14785ed7f(longlong param_1,longlong param_2,int param_3)

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
        FUN_1446dd670(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 * 2);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14785ee54 FUN_14785ee54 body=97 status=ok
// SIG undefined FUN_14785ee54(void)

undefined1 FUN_14785ee54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      lVar1 = *(longlong *)(param_3 + -8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_14689c22e();
          lVar1 = *(longlong *)(param_3 + -8);
        }
      }
      *(longlong *)(param_2 + -8) = lVar1;
      FUN_14785ef98(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14785eede FUN_14785eede body=59 status=ok
// SIG undefined FUN_14785eede(void)

undefined8 FUN_14785eede(longlong *param_1)

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



// FUNCTION 14785ef24 FUN_14785ef24 body=38 status=ok
// SIG undefined FUN_14785ef24(void)

void FUN_14785ef24(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14785ef98 FUN_14785ef98 body=79 status=ok
// SIG undefined FUN_14785ef98(void)

undefined8 * FUN_14785ef98(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14785efe8(param_1,iVar1);
      FUN_14785f04a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14785efe8 FUN_14785efe8 body=98 status=ok
// SIG undefined FUN_14785efe8(void)

void FUN_14785efe8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14785f04a FUN_14785f04a body=78 status=ok
// SIG undefined FUN_14785f04a(void)

void FUN_14785f04a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14785f100 FUN_14785f100 body=54 status=ok
// SIG undefined FUN_14785f100(void)

undefined1 FUN_14785f100(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14785f358(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 14785f15e FUN_14785f15e body=59 status=ok
// SIG undefined FUN_14785f15e(void)

undefined8 FUN_14785f15e(longlong *param_1)

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



// FUNCTION 14785f1a4 FUN_14785f1a4 body=38 status=ok
// SIG undefined FUN_14785f1a4(void)

void FUN_14785f1a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14785f218 FUN_14785f218 body=162 status=ok
// SIG undefined FUN_14785f218(void)

void FUN_14785f218(undefined4 *param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(longlong *)(param_1 + 0xe) != 0)) {
    FUN_14785f2bc(&local_40,param_1 + 0xe);
    *param_1 = local_40;
    param_1[1] = uStack_3c;
    param_1[2] = uStack_38;
    param_1[3] = uStack_34;
    if (&local_40 == param_1) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 4) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 4) = local_30;
      param_1[6] = local_28;
      param_1[7] = local_24;
    }
    *(undefined8 *)(param_1 + 0xe) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14785f2bc FUN_14785f2bc body=155 status=ok
// SIG undefined FUN_14785f2bc(void)

undefined8 * FUN_14785f2bc(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 == 0) {
    FUN_140056680(&local_30,&DAT_149e01fe8);
  }
  else {
    FUN_1468bee18(&local_30,*param_2,0);
  }
  local_20 = local_30;
  local_18 = local_28 + -1;
  if (local_28 == 0) {
    local_18 = 0;
  }
  FUN_14475bf92(param_1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14785f358 FUN_14785f358 body=90 status=ok
// SIG undefined FUN_14785f358(void)

undefined4 * FUN_14785f358(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  lVar4 = *(longlong *)(param_2 + 0xe);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = *(longlong *)(param_2 + 0xe);
    }
  }
  *(longlong *)(param_1 + 0xe) = lVar4;
  return param_1;
}



// FUNCTION 14785f408 FUN_14785f408 body=133 status=ok
// SIG undefined FUN_14785f408(void)

undefined8 FUN_14785f408(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar12);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x10 + lVar12);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar12);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar1 = (undefined4 *)(param_2 + lVar12);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      plVar3 = *(longlong **)(param_3 + 0x20 + lVar12);
      plVar4 = *(longlong **)(param_2 + 0x20 + lVar12);
      if (plVar4 != plVar3) {
        *(longlong **)(param_2 + 0x20 + lVar12) = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      *(undefined4 *)(param_2 + 0x28 + lVar12) = *(undefined4 *)(param_3 + lVar12 + 0x28);
      lVar12 = lVar12 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14785f4b6 FUN_14785f4b6 body=59 status=ok
// SIG undefined FUN_14785f4b6(void)

undefined8 FUN_14785f4b6(longlong *param_1)

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



// FUNCTION 14785f4fc FUN_14785f4fc body=39 status=ok
// SIG undefined FUN_14785f4fc(void)

void FUN_14785f4fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x20) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14785f5bc FUN_14785f5bc body=59 status=ok
// SIG undefined FUN_14785f5bc(void)

undefined8 FUN_14785f5bc(longlong *param_1)

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



// FUNCTION 14785f6a6 FUN_14785f6a6 body=59 status=ok
// SIG undefined FUN_14785f6a6(void)

undefined8 FUN_14785f6a6(longlong *param_1)

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



// FUNCTION 14785f880 FUN_14785f880 body=59 status=ok
// SIG undefined FUN_14785f880(void)

undefined8 FUN_14785f880(longlong *param_1)

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



// FUNCTION 14785f8c6 FUN_14785f8c6 body=32 status=ok
// SIG undefined FUN_14785f8c6(void)

void FUN_14785f8c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410dc120(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14785f9aa FUN_14785f9aa body=59 status=ok
// SIG undefined FUN_14785f9aa(void)

undefined8 FUN_14785f9aa(longlong *param_1)

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



// FUNCTION 14785fab8 FUN_14785fab8 body=59 status=ok
// SIG undefined FUN_14785fab8(void)

undefined8 FUN_14785fab8(longlong *param_1)

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



// FUNCTION 14785fbc6 FUN_14785fbc6 body=59 status=ok
// SIG undefined FUN_14785fbc6(void)

undefined8 FUN_14785fbc6(longlong *param_1)

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



// FUNCTION 14785fc9c FUN_14785fc9c body=54 status=ok
// SIG undefined FUN_14785fc9c(void)

undefined1 FUN_14785fc9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14785fcfa FUN_14785fcfa body=94 status=ok
// SIG undefined FUN_14785fcfa(void)

void FUN_14785fcfa(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  FUN_144a49b4a(iVar2,puVar3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14785fd64 FUN_14785fd64 body=37 status=ok
// SIG undefined FUN_14785fd64(void)

void FUN_14785fd64(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14785fe5a FUN_14785fe5a body=39 status=ok
// SIG undefined FUN_14785fe5a(void)

undefined8 FUN_14785fe5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14785feaa FUN_14785feaa body=59 status=ok
// SIG undefined FUN_14785feaa(void)

undefined8 FUN_14785feaa(longlong *param_1)

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



// FUNCTION 14785ffec FUN_14785ffec body=59 status=ok
// SIG undefined FUN_14785ffec(void)

undefined8 FUN_14785ffec(longlong *param_1)

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



// FUNCTION 14786012c FUN_14786012c body=59 status=ok
// SIG undefined FUN_14786012c(void)

undefined8 FUN_14786012c(longlong *param_1)

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



// FUNCTION 14786026c FUN_14786026c body=59 status=ok
// SIG undefined FUN_14786026c(void)

undefined8 FUN_14786026c(longlong *param_1)

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



// FUNCTION 1478603ae FUN_1478603ae body=59 status=ok
// SIG undefined FUN_1478603ae(void)

undefined8 FUN_1478603ae(longlong *param_1)

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



// FUNCTION 1478604d0 FUN_1478604d0 body=39 status=ok
// SIG undefined FUN_1478604d0(void)

undefined8 FUN_1478604d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147860520 FUN_147860520 body=59 status=ok
// SIG undefined FUN_147860520(void)

undefined8 FUN_147860520(longlong *param_1)

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



// FUNCTION 14786062e FUN_14786062e body=59 status=ok
// SIG undefined FUN_14786062e(void)

undefined8 FUN_14786062e(longlong *param_1)

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



// FUNCTION 14786073c FUN_14786073c body=59 status=ok
// SIG undefined FUN_14786073c(void)

undefined8 FUN_14786073c(longlong *param_1)

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



// FUNCTION 14786080c FUN_14786080c body=63 status=ok
// SIG undefined FUN_14786080c(void)

undefined1 FUN_14786080c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447ff17a(param_2,param_3);
    param_3 = param_3 + 0xa30;
    param_2 = param_2 + 0xa30;
  }
  return 1;
}



// FUNCTION 147860874 FUN_147860874 body=59 status=ok
// SIG undefined FUN_147860874(void)

undefined8 FUN_147860874(longlong *param_1)

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



// FUNCTION 1478608c0 FUN_1478608c0 body=38 status=ok
// SIG undefined FUN_1478608c0(void)

void FUN_1478608c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa30) == '\x01') {
    FUN_1412b8054(param_2);
    *(undefined1 *)(param_2 + 0xa30) = 0;
  }
  return;
}



// FUNCTION 14786097e FUN_14786097e body=132 status=ok
// SIG undefined FUN_14786097e(void)

undefined1 FUN_14786097e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0;
    bVar13 = DAT_14c950c29;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar15);
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x10 + lVar15);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x10 + lVar15);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      puVar3 = (undefined4 *)(param_2 + lVar15);
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      lVar14 = *(longlong *)(param_3 + 0x20 + lVar15);
      if ((bVar13 & 1) != 0) {
        if (lVar14 == 0) {
          lVar14 = 0;
        }
        else {
          FUN_14689c22e();
          lVar14 = *(longlong *)(param_3 + 0x20 + lVar15);
          bVar13 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar15;
      *(longlong *)(lVar1 + 0x20) = lVar14;
      puVar2 = (undefined8 *)(param_3 + 0x28 + lVar15);
      uVar12 = puVar2[1];
      *(undefined8 *)(lVar1 + 0x28) = *puVar2;
      *(undefined8 *)(lVar1 + 0x30) = uVar12;
      lVar15 = lVar15 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147860a2a FUN_147860a2a body=59 status=ok
// SIG undefined FUN_147860a2a(void)

undefined8 FUN_147860a2a(longlong *param_1)

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



// FUNCTION 147860b08 FUN_147860b08 body=62 status=ok
// SIG undefined FUN_147860b08(void)

undefined1 FUN_147860b08(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
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



// FUNCTION 147860b6e FUN_147860b6e body=59 status=ok
// SIG undefined FUN_147860b6e(void)

undefined8 FUN_147860b6e(longlong *param_1)

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



// FUNCTION 147860bb4 FUN_147860bb4 body=37 status=ok
// SIG undefined FUN_147860bb4(void)

void FUN_147860bb4(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 147860c2e FUN_147860c2e body=75 status=ok
// SIG undefined FUN_147860c2e(void)

void FUN_147860c2e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147a475c4(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147860c7a FUN_147860c7a body=156 status=ok
// SIG undefined FUN_147860c7a(void)

void FUN_147860c7a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_147c683fa(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147860d1a FUN_147860d1a body=96 status=ok
// SIG undefined FUN_147860d1a(void)

void FUN_147860d1a(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_147860d7c(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147860d7c FUN_147860d7c body=79 status=ok
// SIG undefined FUN_147860d7c(void)

undefined8 * FUN_147860d7c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478639d6(param_1,iVar1);
      FUN_147863a48(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147860dcb FUN_147860dcb body=96 status=ok
// SIG undefined FUN_147860dcb(void)

void FUN_147860dcb(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_147860e2c(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147860e2c FUN_147860e2c body=79 status=ok
// SIG undefined FUN_147860e2c(void)

undefined8 * FUN_147860e2c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147863b80(param_1,iVar1);
      FUN_147863bef(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147860e7b FUN_147860e7b body=96 status=ok
// SIG undefined FUN_147860e7b(void)

void FUN_147860e7b(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_147860edc(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147860edc FUN_147860edc body=79 status=ok
// SIG undefined FUN_147860edc(void)

undefined8 * FUN_147860edc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147863c6c(param_1,iVar1);
      FUN_147863cdf(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147860f2b FUN_147860f2b body=107 status=ok
// SIG undefined FUN_147860f2b(void)

void FUN_147860f2b(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_147860f98(&local_28);
  FUN_1447cd2ec(param_1,&local_28);
  FUN_14748d10a(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147860f98 FUN_147860f98 body=95 status=ok
// SIG undefined FUN_147860f98(void)

undefined8 * FUN_147860f98(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14748d10a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147863d4e(param_1,iVar1);
      FUN_147863dc1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14786101a FUN_14786101a body=163 status=ok
// SIG undefined FUN_14786101a(void)

void FUN_14786101a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  uVar1 = FUN_14379840e(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478610be FUN_1478610be body=164 status=ok
// SIG undefined FUN_1478610be(void)

void FUN_1478610be(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  uVar1 = FUN_1417fad74(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147861164 FUN_147861164 body=177 status=ok
// SIG undefined FUN_147861164(void)

void FUN_147861164(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_147db4664(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147861216 FUN_147861216 body=163 status=ok
// SIG undefined FUN_147861216(void)

void FUN_147861216(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  uVar1 = FUN_14379838e(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478612ba FUN_1478612ba body=139 status=ok
// SIG undefined FUN_1478612ba(void)

void FUN_1478612ba(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147db4600(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147861352 FUN_147861352 body=335 status=ok
// SIG undefined FUN_147861352(void)

void FUN_147861352(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1411ad1d2(param_1,local_28,local_29,local_30 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478614ae FUN_1478614ae body=335 status=ok
// SIG undefined FUN_1478614ae(void)

void FUN_1478614ae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147db47a8(param_1,local_28,local_29,local_30 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147861620 FUN_147861620 body=75 status=ok
// SIG undefined FUN_147861620(void)

void FUN_147861620(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  thunk_FUN_14358620a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147861690 FUN_147861690 body=115 status=ok
// SIG undefined FUN_147861690(void)

void FUN_147861690(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  switchD_143c3d4dc::caseD_20(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147861732 FUN_147861732 body=115 status=ok
// SIG undefined FUN_147861732(void)

void FUN_147861732(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  switchD_143c3d4dc::caseD_20(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147861820 FUN_147861820 body=75 status=ok
// SIG undefined FUN_147861820(void)

void FUN_147861820(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147a7e53c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147861894 FUN_147861894 body=41 status=ok
// SIG undefined FUN_147861894(void)

void FUN_147861894(void)

{
  FUN_140033559(".\\Runtime/Engine/Classes/Engine/Channel.h",0x75,
                L"Pure virtual not implemented (%s)",L"UChannel::ReceivedBunch");
  return;
}



// FUNCTION 1478618d2 FUN_1478618d2 body=45 status=ok
// SIG undefined FUN_1478618d2(void)

longlong FUN_1478618d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147861908 FUN_147861908 body=33 status=ok
// SIG undefined FUN_147861908(void)

undefined8 FUN_147861908(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1de8) + 0x2c0))();
  return param_2;
}



// FUNCTION 14786192a FUN_14786192a body=33 status=ok
// SIG undefined FUN_14786192a(void)

undefined8 FUN_14786192a(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1de8) + 0x2c8))();
  return param_2;
}



// FUNCTION 147861986 FUN_147861986 body=35 status=ok
// SIG undefined FUN_147861986(void)

void FUN_147861986(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143587a6a(*(undefined8 *)(param_1 + 0x1de8));
  FUN_147bcbe66(param_1,uVar1);
  return;
}



// FUNCTION 147861a0c FUN_147861a0c body=61 status=ok
// SIG undefined FUN_147861a0c(void)

undefined8 FUN_147861a0c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 == (longlong *)0x0) {
    FUN_140056680(param_2,L"Invalid");
  }
  else {
    (**(code **)(*plVar1 + 0x80))(plVar1,param_2,1);
  }
  return param_2;
}



// FUNCTION 147861a4c FUN_147861a4c body=45 status=ok
// SIG undefined FUN_147861a4c(void)

longlong FUN_147861a4c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141462d4a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147861a84 FUN_147861a84 body=32 status=ok
// SIG undefined FUN_147861a84(void)

undefined8 FUN_147861a84(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Demo");
  return param_2;
}



// FUNCTION 147861aa4 FUN_147861aa4 body=45 status=ok
// SIG undefined FUN_147861aa4(void)

longlong FUN_147861aa4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c0b39e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147861af4 FUN_147861af4 body=45 status=ok
// SIG undefined FUN_147861af4(void)

longlong FUN_147861af4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ca5e4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147861c9e FUN_147861c9e body=63 status=ok
// SIG undefined FUN_147861c9e(void)

undefined1 FUN_147861c9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140160740(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 147861d06 FUN_147861d06 body=59 status=ok
// SIG undefined FUN_147861d06(void)

undefined8 FUN_147861d06(longlong *param_1)

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



// FUNCTION 147861d52 FUN_147861d52 body=38 status=ok
// SIG undefined FUN_147861d52(void)

void FUN_147861d52(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_1417accd6(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 147861e58 FUN_147861e58 body=59 status=ok
// SIG undefined FUN_147861e58(void)

undefined8 FUN_147861e58(longlong *param_1)

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



// FUNCTION 147861ea4 FUN_147861ea4 body=38 status=ok
// SIG undefined FUN_147861ea4(void)

void FUN_147861ea4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_1417accd6(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 147861faa FUN_147861faa body=59 status=ok
// SIG undefined FUN_147861faa(void)

undefined8 FUN_147861faa(longlong *param_1)

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



// FUNCTION 147861ff6 FUN_147861ff6 body=38 status=ok
// SIG undefined FUN_147861ff6(void)

void FUN_147861ff6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_1417accd6(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 14786206c FUN_14786206c body=108 status=ok
// SIG undefined FUN_14786206c(void)

void FUN_14786206c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  param_2[2] = 0x300000000;
  *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 1;
  *(undefined1 *)((longlong)param_2 + 0x19) = 3;
  *(undefined4 *)(param_2 + 4) = 6;
  param_2[5] = param_2;
  *param_2 = &PTR_FUN_14aa0f410;
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
  *(undefined1 *)(param_2 + 0x10) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 1478620fc FUN_1478620fc body=63 status=ok
// SIG undefined FUN_1478620fc(void)

undefined1 FUN_1478620fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147c49a60(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 147862164 FUN_147862164 body=59 status=ok
// SIG undefined FUN_147862164(void)

undefined8 FUN_147862164(longlong *param_1)

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



// FUNCTION 1478621b0 FUN_1478621b0 body=38 status=ok
// SIG undefined FUN_1478621b0(void)

void FUN_1478621b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_1400d7e72(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 14786223e FUN_14786223e body=47 status=ok
// SIG undefined FUN_14786223e(void)

void FUN_14786223e(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147862284 FUN_147862284 body=67 status=ok
// SIG undefined FUN_147862284(void)

undefined1 FUN_147862284(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1478622f0 FUN_1478622f0 body=59 status=ok
// SIG undefined FUN_1478622f0(void)

undefined8 FUN_1478622f0(longlong *param_1)

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



// FUNCTION 14786238e FUN_14786238e body=51 status=ok
// SIG undefined FUN_14786238e(void)

void FUN_14786238e(longlong *param_1)

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



// FUNCTION 14786246e FUN_14786246e body=59 status=ok
// SIG undefined FUN_14786246e(void)

undefined8 FUN_14786246e(longlong *param_1)

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



// FUNCTION 147862558 FUN_147862558 body=59 status=ok
// SIG undefined FUN_147862558(void)

undefined8 FUN_147862558(longlong *param_1)

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



// FUNCTION 147862642 FUN_147862642 body=59 status=ok
// SIG undefined FUN_147862642(void)

undefined8 FUN_147862642(longlong *param_1)

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



// FUNCTION 14786272c FUN_14786272c body=59 status=ok
// SIG undefined FUN_14786272c(void)

undefined8 FUN_14786272c(longlong *param_1)

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



// FUNCTION 147862816 FUN_147862816 body=59 status=ok
// SIG undefined FUN_147862816(void)

undefined8 FUN_147862816(longlong *param_1)

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



// FUNCTION 147862900 FUN_147862900 body=59 status=ok
// SIG undefined FUN_147862900(void)

undefined8 FUN_147862900(longlong *param_1)

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



// FUNCTION 1478629ea FUN_1478629ea body=59 status=ok
// SIG undefined FUN_1478629ea(void)

undefined8 FUN_1478629ea(longlong *param_1)

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



// FUNCTION 147862ac8 FUN_147862ac8 body=73 status=ok
// SIG undefined FUN_147862ac8(void)

undefined1 FUN_147862ac8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_1406fa324();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147862b3a FUN_147862b3a body=59 status=ok
// SIG undefined FUN_147862b3a(void)

undefined8 FUN_147862b3a(longlong *param_1)

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



// FUNCTION 147862b80 FUN_147862b80 body=38 status=ok
// SIG undefined FUN_147862b80(void)

void FUN_147862b80(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147862c36 FUN_147862c36 body=54 status=ok
// SIG undefined FUN_147862c36(void)

undefined1 FUN_147862c36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147862d34(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147862c94 FUN_147862c94 body=59 status=ok
// SIG undefined FUN_147862c94(void)

undefined8 FUN_147862c94(longlong *param_1)

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



// FUNCTION 147862d34 FUN_147862d34 body=105 status=ok
// SIG undefined FUN_147862d34(void)

longlong * FUN_147862d34(longlong *param_1,longlong *param_2)

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
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  *(char *)(param_1 + 3) = (char)param_2[3];
  return param_1;
}



// FUNCTION 147862e26 FUN_147862e26 body=63 status=ok
// SIG undefined FUN_147862e26(void)

undefined1 FUN_147862e26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147862f54(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 147862e8e FUN_147862e8e body=59 status=ok
// SIG undefined FUN_147862e8e(void)

undefined8 FUN_147862e8e(longlong *param_1)

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



// FUNCTION 147862eda FUN_147862eda body=44 status=ok
// SIG undefined FUN_147862eda(void)

void FUN_147862eda(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 147862f54 FUN_147862f54 body=160 status=ok
// SIG undefined FUN_147862f54(void)

longlong * FUN_147862f54(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *param_2;
    }
  }
  *param_1 = lVar11;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar11 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar7 = param_2[3];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar8 = param_2[4];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar9 = param_2[5];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar10 = param_2[6];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar11;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(int *)(param_1 + 3) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(int *)(param_1 + 4) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(int *)(param_1 + 5) = (int)lVar9;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(int *)(param_1 + 6) = (int)lVar10;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
  FUN_144a787a6(param_1 + 7,param_2 + 7);
  param_1[0xd] = param_2[0xd];
  lVar11 = param_2[9];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x4c);
  lVar7 = param_2[10];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
  lVar8 = param_2[0xc];
  uVar4 = *(undefined4 *)((longlong)param_2 + 100);
  *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar3;
  *(int *)(param_1 + 0xc) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 100) = uVar4;
  *(int *)(param_1 + 9) = (int)lVar11;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
  *(int *)(param_1 + 10) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
  lVar11 = param_2[0xe];
  if (DAT_14c950c29 == '\x01') {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = param_2[0xe];
    }
  }
  param_1[0xe] = lVar11;
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  return param_1;
}



// FUNCTION 14786303a FUN_14786303a body=54 status=ok
// SIG undefined FUN_14786303a(void)

undefined1 FUN_14786303a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147863152(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147863098 FUN_147863098 body=59 status=ok
// SIG undefined FUN_147863098(void)

undefined8 FUN_147863098(longlong *param_1)

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



// FUNCTION 1478630de FUN_1478630de body=38 status=ok
// SIG undefined FUN_1478630de(void)

void FUN_1478630de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147863152 FUN_147863152 body=96 status=ok
// SIG undefined FUN_147863152(void)

undefined8 * FUN_147863152(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  FUN_144a67f5c(param_1 + 1,param_2 + 1);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  param_1[4] = param_2[4];
  lVar1 = param_2[5];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[5];
    }
  }
  param_1[5] = lVar1;
  return param_1;
}



// FUNCTION 14786325c FUN_14786325c body=54 status=ok
// SIG undefined FUN_14786325c(void)

undefined1 FUN_14786325c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147863374(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1478632ba FUN_1478632ba body=59 status=ok
// SIG undefined FUN_1478632ba(void)

undefined8 FUN_1478632ba(longlong *param_1)

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



// FUNCTION 147863300 FUN_147863300 body=38 status=ok
// SIG undefined FUN_147863300(void)

void FUN_147863300(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147863374 FUN_147863374 body=120 status=ok
// SIG undefined FUN_147863374(void)

undefined8 * FUN_147863374(undefined8 *param_1,undefined8 *param_2)

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
  longlong lVar12;
  
  *param_1 = *param_2;
  FUN_144a67f5c(param_1 + 1,param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[10] = param_2[10];
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 6);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 7);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar10 = *(undefined4 *)(param_2 + 9);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar9;
  *(undefined4 *)(param_1 + 9) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar11;
  *(undefined4 *)(param_1 + 6) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 7) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar8;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  lVar12 = param_2[0xb];
  if (DAT_14c950c29 == '\x01') {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = param_2[0xb];
    }
  }
  param_1[0xb] = lVar12;
  return param_1;
}



// FUNCTION 1478633ee FUN_1478633ee body=49 status=ok
// SIG undefined FUN_1478633ee(void)

void FUN_1478633ee(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_14485c47a(param_2 + 2,0);
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1a) = 0;
  return;
}



// FUNCTION 147863420 FUN_147863420 body=49 status=ok
// SIG undefined FUN_147863420(void)

void FUN_147863420(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_14485c47a(param_2 + 2,0);
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1a) = 0;
  return;
}



// FUNCTION 1478634ba FUN_1478634ba body=59 status=ok
// SIG undefined FUN_1478634ba(void)

undefined8 FUN_1478634ba(longlong *param_1)

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



// FUNCTION 14786358c FUN_14786358c body=112 status=ok
// SIG undefined FUN_14786358c(void)

undefined1 FUN_14786358c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
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
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      plVar1[3] = *(longlong *)(param_3 + 0x18 + lVar8);
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147863624 FUN_147863624 body=59 status=ok
// SIG undefined FUN_147863624(void)

undefined8 FUN_147863624(longlong *param_1)

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



// FUNCTION 1478636f8 FUN_1478636f8 body=171 status=ok
// SIG undefined FUN_1478636f8(void)

undefined1 FUN_1478636f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    bVar10 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + 0x10 + lVar12) = *(undefined8 *)(param_3 + 0x10 + lVar12);
      puVar3 = (undefined4 *)(param_3 + lVar12);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      puVar1 = (undefined4 *)(param_2 + lVar12);
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar11 = *(longlong *)(param_3 + 0x18 + lVar12);
      if ((bVar10 & 1) != 0) {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar11 = *(longlong *)(param_3 + 0x18 + lVar12);
          bVar10 = DAT_14c950c29;
        }
      }
      lVar2 = param_2 + lVar12;
      *(longlong *)(lVar2 + 0x18) = lVar11;
      puVar4 = (undefined8 *)(param_3 + 0x20 + lVar12);
      uVar9 = puVar4[1];
      *(undefined8 *)(lVar2 + 0x20) = *puVar4;
      *(undefined8 *)(lVar2 + 0x28) = uVar9;
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_3 + 0x30 + lVar12);
      puVar4 = (undefined8 *)(param_3 + 0x38 + lVar12);
      uVar9 = puVar4[1];
      puVar1 = (undefined4 *)(param_3 + 0x48 + lVar12);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      *(undefined8 *)(lVar2 + 0x38) = *puVar4;
      *(undefined8 *)(lVar2 + 0x40) = uVar9;
      *(undefined4 *)(lVar2 + 0x48) = uVar5;
      *(undefined4 *)(lVar2 + 0x4c) = uVar6;
      *(undefined4 *)(lVar2 + 0x50) = uVar7;
      *(undefined4 *)(lVar2 + 0x54) = uVar8;
      *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(param_3 + 0x58 + lVar12);
      lVar12 = lVar12 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478637cc FUN_1478637cc body=59 status=ok
// SIG undefined FUN_1478637cc(void)

undefined8 FUN_1478637cc(longlong *param_1)

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



// FUNCTION 14786386e FUN_14786386e body=38 status=ok
// SIG undefined FUN_14786386e(void)

void FUN_14786386e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14485c47a(param_2,0);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 147863894 FUN_147863894 body=38 status=ok
// SIG undefined FUN_147863894(void)

void FUN_147863894(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14485c47a(param_2,0);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 147863920 FUN_147863920 body=79 status=ok
// SIG undefined FUN_147863920(void)

void FUN_147863920(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1447addd0(param_2 + 8,0x10);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478639d6 FUN_1478639d6 body=114 status=ok
// SIG undefined FUN_1478639d6(void)

void FUN_1478639d6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x130,8);
    iVar2 = (int)(uVar1 / 0x130);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x130,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147863a48 FUN_147863a48 body=60 status=ok
// SIG undefined FUN_147863a48(void)

void FUN_147863a48(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147863a84(param_1,param_2);
    param_1 = param_1 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return;
}



// FUNCTION 147863a84 FUN_147863a84 body=252 status=ok
// SIG undefined FUN_147863a84(void)

undefined8 * FUN_147863a84(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar7 = param_2;
  puVar8 = param_1;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  puVar7 = param_2 + 10;
  puVar8 = param_1 + 10;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  lVar6 = param_2[0x14];
  param_1[0x14] = lVar6;
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar5 = DAT_14c950c29;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar2 = *(undefined4 *)(param_2 + 0x16);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0x16) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar3;
  puVar7 = param_2 + 0x18;
  puVar8 = param_1 + 0x18;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  lVar6 = param_2[0x22];
  param_1[0x22] = lVar6;
  if ((lVar6 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  uVar4 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar4;
  return param_1;
}



// FUNCTION 147863b80 FUN_147863b80 body=111 status=ok
// SIG undefined FUN_147863b80(void)

void FUN_147863b80(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x78,8);
    iVar2 = (int)(uVar1 / 0x78);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x78,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147863bef FUN_147863bef body=125 status=ok
// SIG undefined FUN_147863bef(void)

void FUN_147863bef(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + lVar5);
      *(longlong *)(param_1 + lVar5) = lVar2;
      if ((lVar2 != 0 & bVar1) == 1) {
        FUN_1456cec3c();
        bVar1 = DAT_14c950c29;
      }
      lVar2 = 0xd;
      puVar3 = (undefined8 *)(param_2 + lVar5);
      puVar4 = (undefined8 *)(param_1 + lVar5);
      while( true ) {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        *puVar4 = *puVar3;
      }
      *(undefined1 *)((undefined8 *)(param_1 + lVar5) + 0xe) =
           *(undefined1 *)((undefined8 *)(param_2 + lVar5) + 0xe);
      lVar5 = lVar5 + 0x78;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147863c6c FUN_147863c6c body=115 status=ok
// SIG undefined FUN_147863c6c(void)

void FUN_147863c6c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147863cdf FUN_147863cdf body=110 status=ok
// SIG undefined FUN_147863cdf(void)

void FUN_147863cdf(longlong param_1,longlong param_2,int param_3)

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
  byte bVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = 0;
    bVar10 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + lVar11);
      *(longlong *)(param_1 + lVar11) = lVar2;
      if ((lVar2 != 0 & bVar10) == 1) {
        FUN_1456cec3c();
        bVar10 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar11;
      lVar1 = param_2 + lVar11;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x18);
      uVar8 = *(undefined4 *)(lVar1 + 0x1c);
      uVar9 = *(undefined4 *)(lVar1 + 0x20);
      *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
      *(undefined4 *)(lVar2 + 0x18) = uVar7;
      *(undefined4 *)(lVar2 + 0x1c) = uVar8;
      *(undefined4 *)(lVar2 + 0x20) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      lVar11 = lVar11 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147863d4e FUN_147863d4e body=115 status=ok
// SIG undefined FUN_147863d4e(void)

void FUN_147863d4e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc0,0x10);
    iVar2 = (int)(uVar1 / 0xc0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147863dc1 FUN_147863dc1 body=60 status=ok
// SIG undefined FUN_147863dc1(void)

void FUN_147863dc1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147863dfe(param_1,param_2);
    param_1 = param_1 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return;
}



// FUNCTION 147863dfe FUN_147863dfe body=162 status=ok
// SIG undefined FUN_147863dfe(void)

longlong * FUN_147863dfe(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  memcpy(param_1 + 1,param_2 + 1,0xa8);
  param_1[0x16] = 0;
  iVar1 = (int)param_2[0x17];
  _Src = (void *)param_2[0x16];
  *(int *)(param_1 + 0x17) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x16,iVar1,0);
    memcpy((void *)param_1[0x16],_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 147863faa FUN_147863faa body=75 status=ok
// SIG undefined FUN_147863faa(void)

void FUN_147863faa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147d7f8e0(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147863ff6 FUN_147863ff6 body=55 status=ok
// SIG undefined FUN_147863ff6(void)

void FUN_147863ff6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0198 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0198 = FUN_14171c317(FUN_146373ca6,uVar1,L"EMouseCaptureMode");
  }
  return;
}



// FUNCTION 14786402d FUN_14786402d body=57 status=ok
// SIG undefined FUN_14786402d(void)

void FUN_14786402d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac01c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac01c8 = FUN_14171c317(FUN_146373d08,uVar1,L"ETickingGroup");
  }
  return;
}



// FUNCTION 14786408c FUN_14786408c body=37 status=ok
// SIG undefined FUN_14786408c(void)

undefined8 FUN_14786408c(undefined8 param_1,undefined8 param_2)

{
  FUN_14786771a(param_2,1,L"Not implemented by this schema");
  return param_2;
}



// FUNCTION 1478640b2 FUN_1478640b2 body=37 status=ok
// SIG undefined FUN_1478640b2(void)

undefined8 FUN_1478640b2(undefined8 param_1,undefined8 param_2)

{
  FUN_14786771a(param_2,1,L"Not implemented by this schema");
  return param_2;
}



// FUNCTION 1478640d8 FUN_1478640d8 body=32 status=ok
// SIG undefined FUN_1478640d8(void)

undefined8 FUN_1478640d8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Not implemented by this schema");
  return param_2;
}



// FUNCTION 147864110 FUN_147864110 body=32 status=ok
// SIG undefined FUN_147864110(void)

undefined8 FUN_147864110(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return 1;
}



// FUNCTION 147864130 FUN_147864130 body=32 status=ok
// SIG undefined FUN_147864130(void)

undefined8 FUN_147864130(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return 1;
}



// FUNCTION 1478641a8 FUN_1478641a8 body=51 status=ok
// SIG undefined FUN_1478641a8(void)

undefined8 FUN_1478641a8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  return 0;
}



// FUNCTION 1478641e6 FUN_1478641e6 body=109 status=ok
// SIG undefined FUN_1478641e6(void)

undefined1 * FUN_1478641e6(undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  plVar3 = *(longlong **)(param_3 + 8);
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
  return param_2;
}



// FUNCTION 147864254 FUN_147864254 body=109 status=ok
// SIG undefined FUN_147864254(void)

undefined1 * FUN_147864254(undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  plVar3 = *(longlong **)(param_3 + 8);
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
  return param_2;
}



// FUNCTION 1478642c2 FUN_1478642c2 body=25 status=ok
// SIG undefined FUN_1478642c2(void)

undefined8 FUN_1478642c2(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 1478642dc FUN_1478642dc body=69 status=ok
// SIG undefined FUN_1478642dc(void)

undefined1 * FUN_1478642dc(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 147864328 FUN_147864328 body=43 status=ok
// SIG undefined FUN_147864328(void)

void FUN_147864328(void)

{
  longlong *in_R9;
  undefined1 *in_stack_00000028;
  
  if (*in_R9 != 0) {
    FUN_1400020a8();
  }
  *in_R9 = 0;
  in_R9[1] = 0;
  *in_stack_00000028 = 0;
  return;
}



// FUNCTION 147864354 FUN_147864354 body=43 status=ok
// SIG undefined FUN_147864354(void)

void FUN_147864354(void)

{
  longlong *in_R9;
  undefined1 *in_stack_00000028;
  
  if (*in_R9 != 0) {
    FUN_1400020a8();
  }
  *in_R9 = 0;
  in_R9[1] = 0;
  *in_stack_00000028 = 0;
  return;
}



// FUNCTION 147864380 FUN_147864380 body=43 status=ok
// SIG undefined FUN_147864380(void)

void FUN_147864380(void)

{
  longlong *in_R9;
  undefined1 *in_stack_00000028;
  
  if (*in_R9 != 0) {
    FUN_1400020a8();
  }
  *in_R9 = 0;
  in_R9[1] = 0;
  *in_stack_00000028 = 0;
  return;
}



// FUNCTION 1478643de FUN_1478643de body=58 status=ok
// SIG undefined FUN_1478643de(void)

longlong * FUN_1478643de(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  *(undefined1 *)(param_2 + 2) = 0;
  *(byte *)((longlong)param_2 + 0x11) = *(byte *)((longlong)param_2 + 0x11) & 0xfe;
  return param_2;
}



// FUNCTION 147864442 FUN_147864442 body=65 status=ok
// SIG undefined FUN_147864442(void)

void FUN_147864442(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14786448c FUN_14786448c body=41 status=ok
// SIG undefined FUN_14786448c(void)

void FUN_14786448c(void)

{
  FUN_140033559(".\\Runtime/Engine/Classes/Engine/Engine.h",0x97b,
                L"Pure virtual not implemented (%s)",L"UEngine::Tick");
  return;
}



// FUNCTION 14786452c FUN_14786452c body=45 status=ok
// SIG undefined FUN_14786452c(void)

longlong FUN_14786452c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141613188(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147864590 FUN_147864590 body=63 status=ok
// SIG undefined FUN_147864590(void)

undefined1 FUN_147864590(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14786494c(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 1478645f8 FUN_1478645f8 body=59 status=ok
// SIG undefined FUN_1478645f8(void)

undefined8 FUN_1478645f8(longlong *param_1)

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



// FUNCTION 147864644 FUN_147864644 body=40 status=ok
// SIG undefined FUN_147864644(void)

void FUN_147864644(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_147864d50(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 1478646ba FUN_1478646ba body=80 status=ok
// SIG undefined FUN_1478646ba(void)

undefined8 * FUN_1478646ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5f5a00;
  FUN_144a5dc74(param_1 + 1);
  FUN_144a5dc74(param_1 + 3);
  FUN_144a5dc74(param_1 + 5);
  FUN_144a5dc74(param_1 + 7);
  memset(param_1 + 9,0,0x98);
  return param_1;
}



// FUNCTION 14786470a FUN_14786470a body=25 status=ok
// SIG undefined FUN_14786470a(void)

undefined8 FUN_14786470a(undefined8 param_1,undefined8 param_2)

{
  FUN_1478648d4(param_2);
  return param_2;
}



// FUNCTION 147864724 FUN_147864724 body=43 status=ok
// SIG undefined FUN_147864724(void)

undefined8 FUN_147864724(undefined8 param_1,int param_2)

{
  FUN_147864d50();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 147864754 FUN_147864754 body=115 status=ok
// SIG undefined FUN_147864754(void)

void FUN_147864754(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_3 + 1) < 1) {
    uVar3 = *param_4;
    uStack_24 = param_4[1];
    uStack_20 = param_4[2];
    uStack_1c = param_4[3];
    lVar2 = *param_1;
    uVar1 = 0;
    local_28 = uVar3;
  }
  else {
    uVar3 = *param_4;
    uStack_14 = param_4[1];
    uStack_10 = param_4[2];
    uStack_c = param_4[3];
    uVar1 = *(undefined8 *)*param_3;
    lVar2 = *param_1;
    local_18 = uVar3;
  }
  local_38 = param_5;
  (**(code **)(lVar2 + 0x20))(uVar3,param_2,uVar1);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478647cc FUN_1478647cc body=69 status=ok
// SIG undefined FUN_1478647cc(void)

undefined1 * FUN_1478647cc(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14786481c FUN_14786481c body=51 status=ok
// SIG undefined FUN_14786481c(void)

undefined8 FUN_14786481c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  return 0;
}



// FUNCTION 14786485e FUN_14786485e body=75 status=ok
// SIG undefined FUN_14786485e(void)

undefined8 FUN_14786485e(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)*param_1)(param_1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)*param_2 >> 8),*param_2 == local_20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478648ba FUN_1478648ba body=25 status=ok
// SIG undefined FUN_1478648ba(void)

undefined8 FUN_1478648ba(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 1478648d4 FUN_1478648d4 body=120 status=ok
// SIG undefined FUN_1478648d4(void)

undefined8 * FUN_1478648d4(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac0318) {
    FUN_144b3d300(&DAT_14cac0318);
    if (DAT_14cac0318 == -1) {
      FUN_1446ddc76(&DAT_14cac0310,"FEdGraphSchemaAction",1);
      _Init_thread_footer(&DAT_14cac0318);
    }
  }
  *param_1 = DAT_14cac0310;
  return param_1;
}



// FUNCTION 14786494c FUN_14786494c body=368 status=ok
// SIG undefined FUN_14786494c(void)

longlong FUN_14786494c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 8);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
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
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x38) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  FUN_140bee9ec(param_1 + 0x50,param_2 + 0x50);
  FUN_140bee9ec(param_1 + 0x60,param_2 + 0x60);
  FUN_140bee9ec(param_1 + 0x70,param_2 + 0x70);
  FUN_140bee9ec(param_1 + 0x80,param_2 + 0x80);
  FUN_140bee9ec(param_1 + 0x90,param_2 + 0x90);
  FUN_140bee9ec(param_1 + 0xa0,param_2 + 0xa0);
  FUN_140bee9ec(param_1 + 0xb0,param_2 + 0xb0);
  FUN_140bee9ec(param_1 + 0xc0,param_2 + 0xc0);
  FUN_144a787a6(param_1 + 0xd0,param_2 + 0xd0);
  return param_1;
}



// FUNCTION 147864abe FUN_147864abe body=43 status=ok
// SIG undefined FUN_147864abe(void)

void FUN_147864abe(undefined8 param_1,undefined8 *param_2)

{
  FUN_1478646ba(param_2);
  *param_2 = &PTR_FUN_14a5f5c00;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 147864aea FUN_147864aea body=43 status=ok
// SIG undefined FUN_147864aea(void)

void FUN_147864aea(undefined8 param_1,undefined8 *param_2)

{
  FUN_1478646ba(param_2);
  *param_2 = &PTR_FUN_14a5f5c00;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 147864b3c FUN_147864b3c body=108 status=ok
// SIG undefined FUN_147864b3c(void)

undefined1 FUN_147864b3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14786494c(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0xe0);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_14689c22e();
        lVar1 = *(longlong *)(param_3 + 0xe0);
      }
    }
    param_3 = param_3 + 0xe8;
    *(longlong *)(param_2 + 0xe0) = lVar1;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 147864bd0 FUN_147864bd0 body=59 status=ok
// SIG undefined FUN_147864bd0(void)

undefined8 FUN_147864bd0(longlong *param_1)

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



// FUNCTION 147864c1c FUN_147864c1c body=40 status=ok
// SIG undefined FUN_147864c1c(void)

void FUN_147864c1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_147864d50(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 147864c92 FUN_147864c92 body=25 status=ok
// SIG undefined FUN_147864c92(void)

undefined8 FUN_147864c92(undefined8 param_1,undefined8 param_2)

{
  FUN_147864cd8(param_2);
  return param_2;
}



// FUNCTION 147864cac FUN_147864cac body=43 status=ok
// SIG undefined FUN_147864cac(void)

undefined8 FUN_147864cac(undefined8 param_1,int param_2)

{
  FUN_147864d50();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 147864cd8 FUN_147864cd8 body=120 status=ok
// SIG undefined FUN_147864cd8(void)

undefined8 * FUN_147864cd8(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac0328) {
    FUN_144b3d300(&DAT_14cac0328);
    if (DAT_14cac0328 == -1) {
      FUN_1446ddc76(&DAT_14cac0320,"FEdGraphSchemaAction_NewNode",1);
      _Init_thread_footer(&DAT_14cac0328);
    }
  }
  *param_1 = DAT_14cac0320;
  return param_1;
}



// FUNCTION 147864d50 FUN_147864d50 body=361 status=ok
// SIG undefined FUN_147864d50(void)

void FUN_147864d50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5f5a00;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147864eae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 147864f00 FUN_147864f00 body=115 status=ok
// SIG undefined FUN_147864f00(void)

undefined1 FUN_147864f00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_144a787a6();
      FUN_1406fa324(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_1402ae23a(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      lVar1 = lVar1 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147864f9c FUN_147864f9c body=59 status=ok
// SIG undefined FUN_147864f9c(void)

undefined8 FUN_147864f9c(longlong *param_1)

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



// FUNCTION 147864fe2 FUN_147864fe2 body=34 status=ok
// SIG undefined FUN_147864fe2(void)

void FUN_147864fe2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_147865052(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147865052 FUN_147865052 body=62 status=ok
// SIG undefined FUN_147865052(void)

void FUN_147865052(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14786511a FUN_14786511a body=59 status=ok
// SIG undefined FUN_14786511a(void)

undefined8 FUN_14786511a(longlong *param_1)

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



// FUNCTION 14786523a FUN_14786523a body=59 status=ok
// SIG undefined FUN_14786523a(void)

undefined8 FUN_14786523a(longlong *param_1)

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



// FUNCTION 14786534c FUN_14786534c body=59 status=ok
// SIG undefined FUN_14786534c(void)

undefined8 FUN_14786534c(longlong *param_1)

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



// FUNCTION 147865392 FUN_147865392 body=38 status=ok
// SIG undefined FUN_147865392(void)

void FUN_147865392(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147865430 FUN_147865430 body=100 status=ok
// SIG undefined FUN_147865430(void)

undefined1 FUN_147865430(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478654bc FUN_1478654bc body=59 status=ok
// SIG undefined FUN_1478654bc(void)

undefined8 FUN_1478654bc(longlong *param_1)

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



// FUNCTION 14786558c FUN_14786558c body=63 status=ok
// SIG undefined FUN_14786558c(void)

undefined1 FUN_14786558c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478656b6(param_2,param_3);
    param_3 = param_3 + 0x368;
    param_2 = param_2 + 0x368;
  }
  return 1;
}



// FUNCTION 1478655f4 FUN_1478655f4 body=59 status=ok
// SIG undefined FUN_1478655f4(void)

undefined8 FUN_1478655f4(longlong *param_1)

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



// FUNCTION 147865640 FUN_147865640 body=40 status=ok
// SIG undefined FUN_147865640(void)

void FUN_147865640(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x368) == '\x01') {
    FUN_14584f11e(param_2);
    *(undefined1 *)(param_2 + 0x368) = 0;
  }
  return;
}



// FUNCTION 1478656b6 FUN_1478656b6 body=559 status=ok
// SIG undefined FUN_1478656b6(void)

undefined1 * FUN_1478656b6(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  FUN_1478658e6(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  FUN_144a787a6(param_1 + 0x148,param_2 + 0x148);
  param_1[0x158] = param_2[0x158];
  FUN_1405f35b2(param_1 + 0x160,param_2 + 0x160);
  FUN_1405f35b2(param_1 + 0x1c8,param_2 + 0x1c8);
  lVar2 = *(longlong *)(param_2 + 0x230);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x230);
    }
  }
  *(longlong *)(param_1 + 0x230) = lVar2;
  FUN_1478659da(param_1 + 0x238,param_2 + 0x238);
  FUN_1406fa324(param_1 + 0x248,param_2 + 0x248);
  FUN_147865a3a(param_1 + 600,param_2 + 600);
  FUN_144a787a6(param_1 + 0x268,param_2 + 0x268);
  *(uint *)(param_1 + 0x278) =
       *(uint *)(param_1 + 0x278) & 0xfffffffe | *(uint *)(param_2 + 0x278) & 1;
  FUN_147865a8a(param_1 + 0x280,param_2 + 0x280);
  FUN_147865ada(param_1 + 0x290,param_2 + 0x290);
  lVar2 = *(longlong *)(param_2 + 0x2a0);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x2a0);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x2a0) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x2a8);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x2a8);
    }
  }
  *(longlong *)(param_1 + 0x2a8) = lVar2;
  FUN_147865b32(param_1 + 0x2b0,param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  FUN_144a787a6(param_1 + 0x2c8,param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  FUN_144a787a6(param_1 + 0x2e8,param_2 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  FUN_147865b92(param_1 + 0x300,param_2 + 0x300);
  FUN_147865c0c(param_1 + 0x350,param_2 + 0x350);
  lVar2 = *(longlong *)(param_2 + 0x360);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x360);
    }
  }
  *(longlong *)(param_1 + 0x360) = lVar2;
  return param_1;
}



// FUNCTION 1478658e6 FUN_1478658e6 body=243 status=ok
// SIG undefined FUN_1478658e6(void)

longlong FUN_1478658e6(longlong param_1,longlong param_2)

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
  
  FUN_1405f35b2();
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  uVar6 = *(undefined4 *)(param_2 + 0x68);
  uVar7 = *(undefined4 *)(param_2 + 0x6c);
  uVar8 = *(undefined4 *)(param_2 + 0x70);
  uVar9 = *(undefined4 *)(param_2 + 0x74);
  uVar10 = *(undefined4 *)(param_2 + 0x78);
  uVar11 = *(undefined4 *)(param_2 + 0x7c);
  uVar12 = *(undefined4 *)(param_2 + 0x80);
  uVar13 = *(undefined4 *)(param_2 + 0x84);
  uVar14 = *(undefined4 *)(param_2 + 0x8c);
  uVar15 = *(undefined4 *)(param_2 + 0x90);
  uVar16 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar14;
  *(undefined4 *)(param_1 + 0x90) = uVar15;
  *(undefined4 *)(param_1 + 0x94) = uVar16;
  *(undefined4 *)(param_1 + 0x78) = uVar10;
  *(undefined4 *)(param_1 + 0x7c) = uVar11;
  *(undefined4 *)(param_1 + 0x80) = uVar12;
  *(undefined4 *)(param_1 + 0x84) = uVar13;
  *(undefined4 *)(param_1 + 0x68) = uVar6;
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  *(undefined4 *)(param_1 + 0x70) = uVar8;
  *(undefined4 *)(param_1 + 0x74) = uVar9;
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  lVar4 = *(longlong *)(param_2 + 0xa8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(longlong *)(param_1 + 0xa8) = lVar4;
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
  FUN_1457246e8(param_1 + 0xb0,param_2 + 0xb0);
  FUN_147865c64(param_1 + 0xc0,param_2 + 0xc0);
  FUN_147865cc2(param_1 + 0xd0,param_2 + 0xd0);
  FUN_147865d1a(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined2 *)(param_1 + 0x130) = *(undefined2 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x132) = *(undefined1 *)(param_2 + 0x132);
  return param_1;
}



// FUNCTION 1478659da FUN_1478659da body=95 status=ok
// SIG undefined FUN_1478659da(void)

undefined8 * FUN_1478659da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14584f2c7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147865f1a(param_1,iVar1);
      FUN_147865f89(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147865a3a FUN_147865a3a body=79 status=ok
// SIG undefined FUN_147865a3a(void)

undefined8 * FUN_147865a3a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478660ae(param_1,iVar1);
      FUN_147866110(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147865a8a FUN_147865a8a body=79 status=ok
// SIG undefined FUN_147865a8a(void)

undefined8 * FUN_147865a8a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14786615e(param_1,iVar1);
      FUN_1478661c0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147865ada FUN_147865ada body=88 status=ok
// SIG undefined FUN_147865ada(void)

undefined8 * FUN_147865ada(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14786620e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 147865b32 FUN_147865b32 body=95 status=ok
// SIG undefined FUN_147865b32(void)

undefined8 * FUN_147865b32(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14584f2c6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147866270(param_1,iVar1);
      FUN_1478662d2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147865b92 FUN_147865b92 body=122 status=ok
// SIG undefined FUN_147865b92(void)

longlong FUN_147865b92(longlong param_1,longlong param_2)

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
    FUN_14786632e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147865c0c FUN_147865c0c body=88 status=ok
// SIG undefined FUN_147865c0c(void)

undefined8 * FUN_147865c0c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478663a4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147865c64 FUN_147865c64 body=93 status=ok
// SIG undefined FUN_147865c64(void)

undefined8 * FUN_147865c64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140113f01(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147865d94(param_1,iVar1);
      FUN_147865df6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147865cc2 FUN_147865cc2 body=88 status=ok
// SIG undefined FUN_147865cc2(void)

undefined8 * FUN_147865cc2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147865e44(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147865d1a FUN_147865d1a body=122 status=ok
// SIG undefined FUN_147865d1a(void)

longlong FUN_147865d1a(longlong param_1,longlong param_2)

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
    FUN_147865ea6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147865d94 FUN_147865d94 body=98 status=ok
// SIG undefined FUN_147865d94(void)

void FUN_147865d94(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147865df6 FUN_147865df6 body=77 status=ok
// SIG undefined FUN_147865df6(void)

void FUN_147865df6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2 * 8) = 0;
      lVar1 = *(longlong *)(param_2 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_1401924dc(lVar1);
        *(longlong *)(param_1 + lVar2 * 8) = lVar1;
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != (int)lVar2);
  }
  return;
}



// FUNCTION 147865e44 FUN_147865e44 body=98 status=ok
// SIG undefined FUN_147865e44(void)

void FUN_147865e44(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147865ea6 FUN_147865ea6 body=115 status=ok
// SIG undefined FUN_147865ea6(void)

undefined8 * FUN_147865ea6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140d0a85e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 147865f1a FUN_147865f1a body=111 status=ok
// SIG undefined FUN_147865f1a(void)

void FUN_147865f1a(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147865f89 FUN_147865f89 body=52 status=ok
// SIG undefined FUN_147865f89(void)

void FUN_147865f89(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147865fbe(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 147865fbe FUN_147865fbe body=240 status=ok
// SIG undefined FUN_147865fbe(void)

undefined1 * FUN_147865fbe(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0x18,iVar1,0);
    memcpy(*(void **)(param_1 + 0x18),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 0x30) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_1402ae8a8(param_1 + 0x28,iVar1,0);
    FUN_140160884(*(undefined8 *)(param_1 + 0x28),uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 1478660ae FUN_1478660ae body=98 status=ok
// SIG undefined FUN_1478660ae(void)

void FUN_1478660ae(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147866110 FUN_147866110 body=78 status=ok
// SIG undefined FUN_147866110(void)

void FUN_147866110(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14786615e FUN_14786615e body=98 status=ok
// SIG undefined FUN_14786615e(void)

void FUN_14786615e(longlong param_1,int param_2,int param_3)

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


