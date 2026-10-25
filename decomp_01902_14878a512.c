// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14878a512 FUN_14878a512 body=154 status=ok
// SIG undefined FUN_14878a512(void)

longlong FUN_14878a512(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_148780cc6(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_14878a5ac(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  FUN_1486465c6(param_1 + 0x78,param_2 + 0x78);
  FUN_1486465c6(param_1 + 0x88,param_2 + 0x88);
  FUN_1486465c6(param_1 + 0x98,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  FUN_140115bdc(param_1 + 0xb0,param_2 + 0xb0);
  return param_1;
}



// FUNCTION 14878a5ac FUN_14878a5ac body=88 status=ok
// SIG undefined FUN_14878a5ac(void)

undefined8 * FUN_14878a5ac(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14878a604(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14878a604 FUN_14878a604 body=98 status=ok
// SIG undefined FUN_14878a604(void)

void FUN_14878a604(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14878a668 FUN_14878a668 body=38 status=ok
// SIG undefined FUN_14878a668(void)

undefined8 FUN_14878a668(undefined8 param_1,int param_2)

{
  FUN_140d50f72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14878a68e FUN_14878a68e body=104 status=ok
// SIG undefined FUN_14878a68e(void)

undefined8 FUN_14878a68e(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14189db1a(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878a6f8 FUN_14878a6f8 body=28 status=ok
// SIG undefined FUN_14878a6f8(void)

undefined8 FUN_14878a6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14878a754 FUN_14878a754 body=54 status=ok
// SIG undefined FUN_14878a754(void)

undefined1 FUN_14878a754(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14878a8c6(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 14878a7b2 FUN_14878a7b2 body=59 status=ok
// SIG undefined FUN_14878a7b2(void)

undefined8 FUN_14878a7b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878a7f8 FUN_14878a7f8 body=34 status=ok
// SIG undefined FUN_14878a7f8(void)

void FUN_14878a7f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14878a868(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14878a868 FUN_14878a868 body=93 status=ok
// SIG undefined FUN_14878a868(void)

void FUN_14878a868(longlong param_1)

{
  *(undefined2 **)(param_1 + 0x18) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_140115c12(param_1 + 0x28,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14878a8c6 FUN_14878a8c6 body=100 status=ok
// SIG undefined FUN_14878a8c6(void)

undefined4 * FUN_14878a8c6(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_148785874(param_1 + 2,param_2 + 2);
  FUN_140115bdc(param_1 + 6,param_2 + 6);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  if ((*(longlong *)(param_1 + 0x10) != *(longlong *)(param_2 + 0x10)) ||
     (param_1[0x12] != param_2[0x12])) {
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_2 + 0x10);
    param_1[0x12] = param_2[0x12];
    *(undefined8 *)(param_1 + 0x14) = 0;
  }
  return param_1;
}



// FUNCTION 14878a92c FUN_14878a92c body=102 status=ok
// SIG undefined FUN_14878a92c(void)

void FUN_14878a92c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa0);
  *param_2 = &PTR_FUN_14b364b10;
  FUN_140c13428(param_2 + 3);
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 14878a992 FUN_14878a992 body=97 status=ok
// SIG undefined FUN_14878a992(void)

void FUN_14878a992(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b364b10;
  FUN_140c13428(param_2 + 3);
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 14878aa18 FUN_14878aa18 body=63 status=ok
// SIG undefined FUN_14878aa18(void)

undefined1 FUN_14878aa18(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14878acfe(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 14878aa80 FUN_14878aa80 body=59 status=ok
// SIG undefined FUN_14878aa80(void)

undefined8 FUN_14878aa80(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878aacc FUN_14878aacc body=40 status=ok
// SIG undefined FUN_14878aacc(void)

void FUN_14878aacc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_14878abb0(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14878ab52 FUN_14878ab52 body=38 status=ok
// SIG undefined FUN_14878ab52(void)

undefined8 FUN_14878ab52(undefined8 param_1,int param_2)

{
  FUN_14878abb0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14878ab78 FUN_14878ab78 body=55 status=ok
// SIG undefined FUN_14878ab78(void)

void FUN_14878ab78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c9a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c9a8 = FUN_140002ddd(FUN_146532f2c,uVar1,L"MissionSourceDef");
  }
  return;
}



// FUNCTION 14878abb0 FUN_14878abb0 body=222 status=ok
// SIG undefined FUN_14878abb0(void)

void FUN_14878abb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b364b10;
  FUN_14878ac8e(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14878ac8e(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14878acb4(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_140115c12(param_1 + 5,0);
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14878ac8e FUN_14878ac8e body=38 status=ok
// SIG undefined FUN_14878ac8e(void)

void FUN_14878ac8e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14878a868(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 14878acb4 FUN_14878acb4 body=73 status=ok
// SIG undefined FUN_14878acb4(void)

void FUN_14878acb4(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14878acfe FUN_14878acfe body=154 status=ok
// SIG undefined FUN_14878acfe(void)

longlong FUN_14878acfe(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_140115bdc(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  FUN_14878ad98(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  FUN_14878adf8(param_1 + 0x58,param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  FUN_14878ae58(param_1 + 0x70,param_2 + 0x70);
  FUN_14878ae58(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  FUN_14878adf8(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 14878ad98 FUN_14878ad98 body=95 status=ok
// SIG undefined FUN_14878ad98(void)

undefined8 * FUN_14878ad98(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14878acb4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14878aeb2(param_1,iVar1);
      FUN_14878af25(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14878adf8 FUN_14878adf8 body=95 status=ok
// SIG undefined FUN_14878adf8(void)

undefined8 * FUN_14878adf8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14878ac8e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14878af72(param_1,iVar1);
      FUN_14878afe1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14878ae58 FUN_14878ae58 body=89 status=ok
// SIG undefined FUN_14878ae58(void)

undefined8 * FUN_14878ae58(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14878b0a8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 14878aeb2 FUN_14878aeb2 body=115 status=ok
// SIG undefined FUN_14878aeb2(void)

void FUN_14878aeb2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14878af25 FUN_14878af25 body=76 status=ok
// SIG undefined FUN_14878af25(void)

void FUN_14878af25(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14878af72 FUN_14878af72 body=111 status=ok
// SIG undefined FUN_14878af72(void)

void FUN_14878af72(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14878afe1 FUN_14878afe1 body=52 status=ok
// SIG undefined FUN_14878afe1(void)

void FUN_14878afe1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14878b016(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 14878b016 FUN_14878b016 body=145 status=ok
// SIG undefined FUN_14878b016(void)

undefined4 * FUN_14878b016(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  uVar2 = *(undefined8 *)(param_2 + 2);
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1487858c4(param_1 + 2,iVar1,0);
    FUN_148785937(*(undefined8 *)(param_1 + 2),uVar2,iVar1);
  }
  FUN_1406022be(param_1 + 6,param_2 + 6);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 14878b0a8 FUN_14878b0a8 body=115 status=ok
// SIG undefined FUN_14878b0a8(void)

void FUN_14878b0a8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14878b11c FUN_14878b11c body=104 status=ok
// SIG undefined FUN_14878b11c(void)

undefined8 FUN_14878b11c(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1488e9014(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878b186 FUN_14878b186 body=28 status=ok
// SIG undefined FUN_14878b186(void)

undefined8 FUN_14878b186(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14878b256 FUN_14878b256 body=59 status=ok
// SIG undefined FUN_14878b256(void)

undefined8 FUN_14878b256(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878b2f8 FUN_14878b2f8 body=80 status=ok
// SIG undefined FUN_14878b2f8(void)

void FUN_14878b2f8(undefined8 param_1,undefined8 *param_2)

{
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
  *param_2 = &PTR_FUN_14b364ef0;
  param_2[1] = 0;
  FUN_144928b90(param_2 + 3,0);
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 14878b348 FUN_14878b348 body=57 status=ok
// SIG undefined FUN_14878b348(void)

void FUN_14878b348(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b364ef0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_144928b90(param_2 + 3,0);
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 14878b3a6 FUN_14878b3a6 body=103 status=ok
// SIG undefined FUN_14878b3a6(void)

undefined8 FUN_14878b3a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1447715ec(param_2,param_3);
      FUN_14878ae58(param_2 + 0x28,param_3 + 0x28);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878b436 FUN_14878b436 body=59 status=ok
// SIG undefined FUN_14878b436(void)

undefined8 FUN_14878b436(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878b47c FUN_14878b47c body=34 status=ok
// SIG undefined FUN_14878b47c(void)

void FUN_14878b47c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14878bab0(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14878b4ec FUN_14878b4ec body=38 status=ok
// SIG undefined FUN_14878b4ec(void)

undefined8 FUN_14878b4ec(undefined8 param_1,int param_2)

{
  FUN_14878bab0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14878b512 FUN_14878b512 body=55 status=ok
// SIG undefined FUN_14878b512(void)

void FUN_14878b512(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ca88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ca88 = FUN_140002ddd(FUN_1465332a5,uVar1,L"MissionSourceTimer");
  }
  return;
}



// FUNCTION 14878b550 FUN_14878b550 body=98 status=ok
// SIG undefined FUN_14878b550(void)

void FUN_14878b550(undefined8 param_1,undefined8 *param_2)

{
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
  *param_2 = &PTR_FUN_14b364ef0;
  param_2[1] = 0;
  FUN_144928b90(param_2 + 3,0);
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b365070;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 14878b5b2 FUN_14878b5b2 body=71 status=ok
// SIG undefined FUN_14878b5b2(void)

void FUN_14878b5b2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b364ef0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_144928b90(param_2 + 3,0);
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b365070;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 14878b61e FUN_14878b61e body=111 status=ok
// SIG undefined FUN_14878b61e(void)

undefined8 FUN_14878b61e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
    do {
      *(undefined4 *)(param_2 + -0x40) = *(undefined4 *)(param_3 + -0x40);
      *(undefined8 *)(param_2 + -0x48) = *(undefined8 *)(param_3 + -0x48);
      *(undefined8 *)(param_2 + -0x38) = *(undefined8 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      FUN_1447715ec(param_2 + -0x28,param_3 + -0x28);
      FUN_14878ae58(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878b6b6 FUN_14878b6b6 body=59 status=ok
// SIG undefined FUN_14878b6b6(void)

undefined8 FUN_14878b6b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878b6fc FUN_14878b6fc body=34 status=ok
// SIG undefined FUN_14878b6fc(void)

void FUN_14878b6fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_14878bab0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14878b76c FUN_14878b76c body=38 status=ok
// SIG undefined FUN_14878b76c(void)

undefined8 FUN_14878b76c(undefined8 param_1,int param_2)

{
  FUN_14878bab0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14878b792 FUN_14878b792 body=55 status=ok
// SIG undefined FUN_14878b792(void)

void FUN_14878b792(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6caa0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6caa0 = FUN_140002ddd(FUN_146533533,uVar1,L"MissionSourceTimerRegular");
  }
  return;
}



// FUNCTION 14878b7ca FUN_14878b7ca body=104 status=ok
// SIG undefined FUN_14878b7ca(void)

void FUN_14878b7ca(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x6c);
  local_20 = 0;
  FUN_1458c54da(&local_18,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                *(undefined4 *)(param_1 + 0x68));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(CONCAT44((int)((ulonglong)((double)local_18 / 10000000.0) >> 0x20),
                         (float)((double)local_18 / 10000000.0)));
}



// FUNCTION 14878b834 FUN_14878b834 body=99 status=ok
// SIG undefined FUN_14878b834(void)

void FUN_14878b834(undefined8 param_1,undefined8 *param_2)

{
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
  param_2[0xc] = 0;
  *param_2 = &PTR_FUN_14b364ef0;
  param_2[1] = 0;
  FUN_144928b90(param_2 + 3,0);
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b3651f0;
  *(undefined4 *)(param_2 + 0xc) = 0x18;
  return;
}



// FUNCTION 14878b898 FUN_14878b898 body=74 status=ok
// SIG undefined FUN_14878b898(void)

void FUN_14878b898(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b364ef0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_144928b90(param_2 + 3,0);
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b3651f0;
  *(undefined4 *)(param_2 + 0xc) = 0x18;
  return;
}



// FUNCTION 14878b906 FUN_14878b906 body=109 status=ok
// SIG undefined FUN_14878b906(void)

undefined8 FUN_14878b906(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
    do {
      *(undefined4 *)(param_2 + -0x40) = *(undefined4 *)(param_3 + -0x40);
      *(undefined8 *)(param_2 + -0x48) = *(undefined8 *)(param_3 + -0x48);
      *(undefined8 *)(param_2 + -0x38) = *(undefined8 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      FUN_1447715ec(param_2 + -0x28,param_3 + -0x28);
      FUN_14878ae58(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878b99c FUN_14878b99c body=59 status=ok
// SIG undefined FUN_14878b99c(void)

undefined8 FUN_14878b99c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878b9e2 FUN_14878b9e2 body=34 status=ok
// SIG undefined FUN_14878b9e2(void)

void FUN_14878b9e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14878bab0(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14878ba52 FUN_14878ba52 body=38 status=ok
// SIG undefined FUN_14878ba52(void)

undefined8 FUN_14878ba52(undefined8 param_1,int param_2)

{
  FUN_14878bab0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14878ba78 FUN_14878ba78 body=55 status=ok
// SIG undefined FUN_14878ba78(void)

void FUN_14878ba78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cab8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cab8 = FUN_140002ddd(FUN_1465335c9,uVar1,L"MissionSourceTimerDaily");
  }
  return;
}



// FUNCTION 14878bab0 FUN_14878bab0 body=57 status=ok
// SIG undefined FUN_14878bab0(void)

void FUN_14878bab0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b364ef0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14878bb4a FUN_14878bb4a body=125 status=ok
// SIG undefined FUN_14878bb4a(void)

undefined8 FUN_14878bb4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(param_3 + lVar2);
      *(undefined8 *)(param_2 + lVar2 + 5) = *(undefined8 *)(param_3 + lVar2 + 5);
      *(undefined8 *)(param_2 + lVar2) = uVar1;
      FUN_1400fce78();
      FUN_1406b39e6(param_2 + lVar2 + 0x28,param_3 + lVar2 + 0x28);
      FUN_1406b3a44(param_2 + lVar2 + 0x38,param_3 + lVar2 + 0x38);
      lVar2 = lVar2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878bbf0 FUN_14878bbf0 body=59 status=ok
// SIG undefined FUN_14878bbf0(void)

undefined8 FUN_14878bbf0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878bc36 FUN_14878bc36 body=34 status=ok
// SIG undefined FUN_14878bc36(void)

void FUN_14878bc36(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14878bca6(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14878bca6 FUN_14878bca6 body=55 status=ok
// SIG undefined FUN_14878bca6(void)

void FUN_14878bca6(longlong param_1)

{
  FUN_140170ace(param_1 + 0x20);
  FUN_1447cd778(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14878bd82 FUN_14878bd82 body=63 status=ok
// SIG undefined FUN_14878bd82(void)

undefined1 FUN_14878bd82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14878be9e(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 14878bdea FUN_14878bdea body=59 status=ok
// SIG undefined FUN_14878bdea(void)

undefined8 FUN_14878bdea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878be36 FUN_14878be36 body=38 status=ok
// SIG undefined FUN_14878be36(void)

void FUN_14878be36(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_1409c6338(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 14878be9e FUN_14878be9e body=245 status=ok
// SIG undefined FUN_14878be9e(void)

longlong FUN_14878be9e(longlong param_1,longlong param_2)

{
  FUN_1406b39e6(param_1 + 8,param_2 + 8);
  FUN_1406b3a44(param_1 + 0x18,param_2 + 0x18);
  FUN_1406b39e6(param_1 + 0x30,param_2 + 0x30);
  FUN_1406b3a44(param_1 + 0x40,param_2 + 0x40);
  FUN_1406b39e6(param_1 + 0x58,param_2 + 0x58);
  FUN_1406b3a44(param_1 + 0x68,param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_1406b39e6(param_1 + 0x88,param_2 + 0x88);
  FUN_1406b3a44(param_1 + 0x98,param_2 + 0x98);
  FUN_1406b39e6(param_1 + 0xb0,param_2 + 0xb0);
  FUN_1406b3a44(param_1 + 0xc0,param_2 + 0xc0);
  FUN_1406b39e6(param_1 + 0xd8,param_2 + 0xd8);
  FUN_1406b3a44(param_1 + 0xe8,param_2 + 0xe8);
  FUN_1406b39e6(param_1 + 0x100,param_2 + 0x100);
  FUN_1406b3a44(param_1 + 0x110,param_2 + 0x110);
  return param_1;
}



// FUNCTION 14878bfba FUN_14878bfba body=54 status=ok
// SIG undefined FUN_14878bfba(void)

undefined1 FUN_14878bfba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1401f3db8(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14878c018 FUN_14878c018 body=59 status=ok
// SIG undefined FUN_14878c018(void)

undefined8 FUN_14878c018(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878c05e FUN_14878c05e body=64 status=ok
// SIG undefined FUN_14878c05e(void)

void FUN_14878c05e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
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
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14878c164 FUN_14878c164 body=76 status=ok
// SIG undefined FUN_14878c164(void)

undefined8 FUN_14878c164(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1458df92a(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878c1d8 FUN_14878c1d8 body=59 status=ok
// SIG undefined FUN_14878c1d8(void)

undefined8 FUN_14878c1d8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878c21e FUN_14878c21e body=32 status=ok
// SIG undefined FUN_14878c21e(void)

void FUN_14878c21e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14125a92a(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14878c29e FUN_14878c29e body=38 status=ok
// SIG undefined FUN_14878c29e(void)

undefined8 FUN_14878c29e(undefined8 param_1,int param_2)

{
  FUN_14125a92a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14878c2c4 FUN_14878c2c4 body=55 status=ok
// SIG undefined FUN_14878c2c4(void)

void FUN_14878c2c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cb48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cb48 = FUN_140002ddd(FUN_146533842,uVar1,L"MissionSubAlias");
  }
  return;
}



// FUNCTION 14878c34c FUN_14878c34c body=59 status=ok
// SIG undefined FUN_14878c34c(void)

undefined8 FUN_14878c34c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878c398 FUN_14878c398 body=38 status=ok
// SIG undefined FUN_14878c398(void)

void FUN_14878c398(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_14125a92a(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 14878c456 FUN_14878c456 body=57 status=ok
// SIG undefined FUN_14878c456(void)

void FUN_14878c456(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cb60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cb60 = FUN_140002ddd(FUN_14653390b,uVar1,L"MissionSubAlias_AINodeChainActor");
  }
  return;
}



// FUNCTION 14878c4b4 FUN_14878c4b4 body=63 status=ok
// SIG undefined FUN_14878c4b4(void)

undefined1 FUN_14878c4b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14878c6ac(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 14878c51c FUN_14878c51c body=59 status=ok
// SIG undefined FUN_14878c51c(void)

undefined8 FUN_14878c51c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878c568 FUN_14878c568 body=38 status=ok
// SIG undefined FUN_14878c568(void)

void FUN_14878c568(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_14125a92a(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 14878c672 FUN_14878c672 body=57 status=ok
// SIG undefined FUN_14878c672(void)

void FUN_14878c672(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cb78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cb78 = FUN_140002ddd(FUN_1465339a1,uVar1,L"MissionSubAlias_ChildActor");
  }
  return;
}



// FUNCTION 14878c6ac FUN_14878c6ac body=200 status=ok
// SIG undefined FUN_14878c6ac(void)

longlong FUN_14878c6ac(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1458df92a(param_1 + 0x20,param_2 + 0x20);
  puVar5 = (undefined8 *)(param_2 + 0x30);
  puVar6 = (undefined8 *)(param_1 + 0x30);
  for (lVar4 = 0xf; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  if ((*(longlong *)(param_1 + 0xb0) != *(longlong *)(param_2 + 0xb0)) ||
     (*(int *)(param_1 + 0xb8) != *(int *)(param_2 + 0xb8))) {
    *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  return param_1;
}



// FUNCTION 14878c7c2 FUN_14878c7c2 body=59 status=ok
// SIG undefined FUN_14878c7c2(void)

undefined8 FUN_14878c7c2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878c80e FUN_14878c80e body=38 status=ok
// SIG undefined FUN_14878c80e(void)

void FUN_14878c80e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x458) == '\x01') {
    FUN_14878c952(param_2);
    *(undefined1 *)(param_2 + 0x458) = 0;
  }
  return;
}



// FUNCTION 14878c874 FUN_14878c874 body=163 status=ok
// SIG undefined FUN_14878c874(void)

undefined8 * FUN_14878c874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b366bf0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = DAT_14cb86b60;
  *param_1 = &PTR_FUN_14b365c10;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_140901aaa(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  FUN_140803772(param_1 + 0x1c);
  return param_1;
}



// FUNCTION 14878c918 FUN_14878c918 body=57 status=ok
// SIG undefined FUN_14878c918(void)

void FUN_14878c918(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cb90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cb90 = FUN_140002ddd(FUN_146533a37,uVar1,L"MissionSubAlias_SpawnedActor");
  }
  return;
}



// FUNCTION 14878c952 FUN_14878c952 body=164 status=ok
// SIG undefined FUN_14878c952(void)

void FUN_14878c952(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b365c10;
  FUN_14494dff0(param_1 + 0x66);
  FUN_14494dff0(param_1 + 0x42);
  FUN_14494dff0(param_1 + 0x1e);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x10];
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
  *param_1 = &PTR_FUN_14b366bf0;
  FUN_14029b636(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14878ca2a FUN_14878ca2a body=112 status=ok
// SIG undefined FUN_14878ca2a(void)

undefined8 FUN_14878ca2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1458df92a(param_2,param_3);
      puVar5 = (undefined8 *)(param_3 + 0x10);
      puVar6 = (undefined8 *)(param_2 + 0x10);
      for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878cac2 FUN_14878cac2 body=59 status=ok
// SIG undefined FUN_14878cac2(void)

undefined8 FUN_14878cac2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878cb0e FUN_14878cb0e body=38 status=ok
// SIG undefined FUN_14878cb0e(void)

void FUN_14878cb0e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_14125a92a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14878cbf6 FUN_14878cbf6 body=59 status=ok
// SIG undefined FUN_14878cbf6(void)

undefined8 FUN_14878cbf6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878ccd6 FUN_14878ccd6 body=63 status=ok
// SIG undefined FUN_14878ccd6(void)

undefined1 FUN_14878ccd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14878ce00(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14878cd3e FUN_14878cd3e body=59 status=ok
// SIG undefined FUN_14878cd3e(void)

undefined8 FUN_14878cd3e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878cd8a FUN_14878cd8a body=40 status=ok
// SIG undefined FUN_14878cd8a(void)

void FUN_14878cd8a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_14596e2a6(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14878ce00 FUN_14878ce00 body=126 status=ok
// SIG undefined FUN_14878ce00(void)

undefined4 * FUN_14878ce00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_14878ce7e(param_1 + 4,param_2 + 4);
  FUN_14878ce7e(param_1 + 8,param_2 + 8);
  FUN_14878ce7e(param_1 + 0xc,param_2 + 0xc);
  FUN_14878ce7e(param_1 + 0x10,param_2 + 0x10);
  FUN_14878ce7e(param_1 + 0x14,param_2 + 0x14);
  FUN_14878ce7e(param_1 + 0x18,param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar4;
  param_1[0x20] = param_2[0x20];
  return param_1;
}



// FUNCTION 14878ce7e FUN_14878ce7e body=89 status=ok
// SIG undefined FUN_14878ce7e(void)

undefined8 * FUN_14878ce7e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14878ced8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 14878ced8 FUN_14878ced8 body=115 status=ok
// SIG undefined FUN_14878ced8(void)

void FUN_14878ced8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14878cf8c FUN_14878cf8c body=54 status=ok
// SIG undefined FUN_14878cf8c(void)

undefined1 FUN_14878cf8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140115bdc(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14878cfc2 FUN_14878cfc2 body=31 status=ok
// SIG undefined FUN_14878cfc2(void)

undefined1
FUN_14878cfc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144b082da(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14878cfe2 FUN_14878cfe2 body=262 status=ok
// SIG undefined FUN_14878cfe2(void)

undefined4
FUN_14878cfe2(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  byte local_6c;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != 0) {
    local_80 = param_7;
    local_88 = param_6;
    (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  (**(code **)(*param_1 + 8))(0,local_78);
  if ((local_6c & 2) == 0) {
    FUN_1488eba18(local_68);
  }
  local_80 = param_7;
  local_88 = param_6;
  uVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2,local_68,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_6c & 4) != 0) {
    (**(code **)(local_68[0] + 0x58))(local_68,0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14878d0ea FUN_14878d0ea body=41 status=ok
// SIG undefined FUN_14878d0ea(void)

void FUN_14878d0ea(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14878d128 FUN_14878d128 body=59 status=ok
// SIG undefined FUN_14878d128(void)

undefined8 FUN_14878d128(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878d1dc FUN_14878d1dc body=82 status=ok
// SIG undefined FUN_14878d1dc(void)

void FUN_14878d1dc(undefined8 *param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    *param_1 = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      FUN_140115c12(param_1 + 2,0);
    }
    param_1[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14878d296 FUN_14878d296 body=59 status=ok
// SIG undefined FUN_14878d296(void)

undefined8 FUN_14878d296(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878d336 FUN_14878d336 body=29 status=ok
// SIG undefined FUN_14878d336(void)

undefined8 FUN_14878d336(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14878d354 FUN_14878d354 body=55 status=ok
// SIG undefined FUN_14878d354(void)

void FUN_14878d354(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cc78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cc78 = FUN_140002ddd(FUN_146533f1f,uVar1,L"MissionTaskTypeDef");
  }
  return;
}



// FUNCTION 14878d3e2 FUN_14878d3e2 body=63 status=ok
// SIG undefined FUN_14878d3e2(void)

undefined1 FUN_14878d3e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487843ae(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14878d44a FUN_14878d44a body=59 status=ok
// SIG undefined FUN_14878d44a(void)

undefined8 FUN_14878d44a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878d496 FUN_14878d496 body=40 status=ok
// SIG undefined FUN_14878d496(void)

void FUN_14878d496(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1487842ba(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14878d512 FUN_14878d512 body=104 status=ok
// SIG undefined FUN_14878d512(void)

undefined8 FUN_14878d512(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1488ebb10(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878d57c FUN_14878d57c body=28 status=ok
// SIG undefined FUN_14878d57c(void)

undefined8 FUN_14878d57c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14878d6b2 FUN_14878d6b2 body=48 status=ok
// SIG undefined FUN_14878d6b2(void)

longlong FUN_14878d6b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_1458c55b0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14878d6e2 FUN_14878d6e2 body=48 status=ok
// SIG undefined FUN_14878d6e2(void)

longlong FUN_14878d6e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_140aeebc2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14878d712 FUN_14878d712 body=48 status=ok
// SIG undefined FUN_14878d712(void)

longlong FUN_14878d712(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_140c3fa18(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14878d772 FUN_14878d772 body=45 status=ok
// SIG undefined FUN_14878d772(void)

void FUN_14878d772(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/LevelStreaming/NexusConfigLevelSubType.h"
                ,0x14,L"Pure virtual not implemented (%s)",L"GetDefScriptStruct");
  FUN_14053bbb8();
  return;
}



// FUNCTION 14878d7a0 FUN_14878d7a0 body=41 status=ok
// SIG undefined FUN_14878d7a0(void)

void FUN_14878d7a0(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/LevelStreaming/NexusConfigLevelSubType.h"
                ,0x33,L"Pure virtual not implemented (%s)",L"RelativizeSubdef_Internal");
  return;
}



// FUNCTION 14878d7ca FUN_14878d7ca body=32 status=ok
// SIG undefined FUN_14878d7ca(void)

undefined8 FUN_14878d7ca(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x390);
  return param_2;
}



// FUNCTION 14878d7ea FUN_14878d7ea body=32 status=ok
// SIG undefined FUN_14878d7ea(void)

undefined8 FUN_14878d7ea(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x390);
  return param_2;
}



// FUNCTION 14878d80a FUN_14878d80a body=32 status=ok
// SIG undefined FUN_14878d80a(void)

undefined8 FUN_14878d80a(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x340);
  return param_2;
}



// FUNCTION 14878d82a FUN_14878d82a body=32 status=ok
// SIG undefined FUN_14878d82a(void)

undefined8 FUN_14878d82a(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x390);
  return param_2;
}



// FUNCTION 14878d84a FUN_14878d84a body=32 status=ok
// SIG undefined FUN_14878d84a(void)

undefined8 FUN_14878d84a(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x390);
  return param_2;
}



// FUNCTION 14878d86a FUN_14878d86a body=32 status=ok
// SIG undefined FUN_14878d86a(void)

undefined8 FUN_14878d86a(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x340);
  return param_2;
}



// FUNCTION 14878d88a FUN_14878d88a body=32 status=ok
// SIG undefined FUN_14878d88a(void)

undefined8 FUN_14878d88a(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x390);
  return param_2;
}



// FUNCTION 14878d8aa FUN_14878d8aa body=32 status=ok
// SIG undefined FUN_14878d8aa(void)

undefined8 FUN_14878d8aa(longlong param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,param_1 + 0x390);
  return param_2;
}



// FUNCTION 14878d922 FUN_14878d922 body=85 status=ok
// SIG undefined FUN_14878d922(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14878d922(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 1:
    return;
  case 2:
    param_1[1] = switchD_1458da17c::caseD_0;
    param_1[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 1) = 0x4053b5c6;
    return;
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14878d9b8 FUN_14878d9b8 body=54 status=ok
// SIG undefined FUN_14878d9b8(void)

undefined1 FUN_14878d9b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140115bdc(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14878d9ee FUN_14878d9ee body=31 status=ok
// SIG undefined FUN_14878d9ee(void)

undefined1
FUN_14878d9ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144b082da(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14878da0e FUN_14878da0e body=262 status=ok
// SIG undefined FUN_14878da0e(void)

undefined4
FUN_14878da0e(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  byte local_6c;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != 0) {
    local_80 = param_7;
    local_88 = param_6;
    (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  (**(code **)(*param_1 + 8))(0,local_78);
  if ((local_6c & 2) == 0) {
    FUN_14052b590(local_68);
  }
  local_80 = param_7;
  local_88 = param_6;
  uVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2,local_68,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_6c & 4) != 0) {
    (**(code **)(local_68[0] + 0x58))(local_68,0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14878db16 FUN_14878db16 body=41 status=ok
// SIG undefined FUN_14878db16(void)

void FUN_14878db16(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14878db54 FUN_14878db54 body=59 status=ok
// SIG undefined FUN_14878db54(void)

undefined8 FUN_14878db54(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878dc08 FUN_14878dc08 body=82 status=ok
// SIG undefined FUN_14878dc08(void)

void FUN_14878dc08(undefined8 *param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    *param_1 = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      FUN_140115c12(param_1 + 2,0);
    }
    param_1[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14878dc5a FUN_14878dc5a body=29 status=ok
// SIG undefined FUN_14878dc5a(void)

void FUN_14878dc5a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140938dea();
  *param_2 = uVar1;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  return;
}



// FUNCTION 14878dc9a FUN_14878dc9a body=54 status=ok
// SIG undefined FUN_14878dc9a(void)

undefined1 FUN_14878dc9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_142b16128(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14878dcd0 FUN_14878dcd0 body=31 status=ok
// SIG undefined FUN_14878dcd0(void)

undefined1
FUN_14878dcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142b16154(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14878dcf0 FUN_14878dcf0 body=39 status=ok
// SIG undefined FUN_14878dcf0(void)

void FUN_14878dcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_147091d32(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14878dd36 FUN_14878dd36 body=32 status=ok
// SIG undefined FUN_14878dd36(void)

void FUN_14878dd36(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_141022d94(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14878de08 FUN_14878de08 body=59 status=ok
// SIG undefined FUN_14878de08(void)

undefined8 FUN_14878de08(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878dea8 FUN_14878dea8 body=29 status=ok
// SIG undefined FUN_14878dea8(void)

undefined8 FUN_14878dea8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14878dec6 FUN_14878dec6 body=55 status=ok
// SIG undefined FUN_14878dec6(void)

void FUN_14878dec6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cd38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cd38 = FUN_140002ddd(FUN_14653469f,uVar1,L"MissionFilterOptions");
  }
  return;
}



// FUNCTION 14878df62 FUN_14878df62 body=63 status=ok
// SIG undefined FUN_14878df62(void)

undefined1 FUN_14878df62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14878e118(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14878dfca FUN_14878dfca body=59 status=ok
// SIG undefined FUN_14878dfca(void)

undefined8 FUN_14878dfca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878e016 FUN_14878e016 body=38 status=ok
// SIG undefined FUN_14878e016(void)

void FUN_14878e016(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_14878e0c2(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14878e08a FUN_14878e08a body=55 status=ok
// SIG undefined FUN_14878e08a(void)

void FUN_14878e08a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cd88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cd88 =
         FUN_140002ddd(FUN_146534793,uVar1,L"MovieSceneCoordinatedMaterialParameterTemplate");
  }
  return;
}



// FUNCTION 14878e0c2 FUN_14878e0c2 body=86 status=ok
// SIG undefined FUN_14878e0c2(void)

void FUN_14878e0c2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b378f10;
  FUN_140aeec64(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140aeec37(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14878e118 FUN_14878e118 body=134 status=ok
// SIG undefined FUN_14878e118(void)

longlong FUN_14878e118(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  FUN_14150acc4(param_1 + 0x50,param_2 + 0x50);
  FUN_14878e19e(param_1 + 0x68,param_2 + 0x68);
  FUN_14878e1fc(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 14878e19e FUN_14878e19e body=93 status=ok
// SIG undefined FUN_14878e19e(void)

undefined8 * FUN_14878e19e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140aeec37(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14878e25a(param_1,iVar1);
      FUN_14878e2cd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14878e1fc FUN_14878e1fc body=93 status=ok
// SIG undefined FUN_14878e1fc(void)

undefined8 * FUN_14878e1fc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140aeec64(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14878e31a(param_1,iVar1);
      FUN_14878e38c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14878e25a FUN_14878e25a body=115 status=ok
// SIG undefined FUN_14878e25a(void)

void FUN_14878e25a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x120,8);
    iVar2 = (int)(uVar1 / 0x120);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x120,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14878e2cd FUN_14878e2cd body=76 status=ok
// SIG undefined FUN_14878e2cd(void)

void FUN_14878e2cd(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      uVar1 = *(undefined4 *)(param_2 + -0xc);
      uVar2 = *(undefined4 *)(param_2 + -8);
      uVar3 = *(undefined4 *)(param_2 + -4);
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + -0xc) = uVar1;
      *(undefined4 *)(param_1 + -8) = uVar2;
      *(undefined4 *)(param_1 + -4) = uVar3;
      FUN_140737604(param_1,param_2);
      param_1 = param_1 + 0x120;
      param_2 = param_2 + 0x120;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14878e31a FUN_14878e31a body=114 status=ok
// SIG undefined FUN_14878e31a(void)

void FUN_14878e31a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x450,8);
    iVar2 = (int)(uVar1 / 0x450);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x450,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14878e38c FUN_14878e38c body=60 status=ok
// SIG undefined FUN_14878e38c(void)

void FUN_14878e38c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14878e3c8(param_1,param_2);
    param_1 = param_1 + 0x450;
    param_2 = param_2 + 0x450;
  }
  return;
}



// FUNCTION 14878e3c8 FUN_14878e3c8 body=95 status=ok
// SIG undefined FUN_14878e3c8(void)

undefined4 * FUN_14878e3c8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_140737604(param_1 + 4,param_2 + 4);
  FUN_140737604(param_1 + 0x48,param_2 + 0x48);
  FUN_140737604(param_1 + 0x8c,param_2 + 0x8c);
  FUN_140737604(param_1 + 0xd0,param_2 + 0xd0);
  return param_1;
}



// FUNCTION 14878e482 FUN_14878e482 body=54 status=ok
// SIG undefined FUN_14878e482(void)

undefined1 FUN_14878e482(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14878e5f6(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 14878e4e0 FUN_14878e4e0 body=59 status=ok
// SIG undefined FUN_14878e4e0(void)

undefined8 FUN_14878e4e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878e526 FUN_14878e526 body=74 status=ok
// SIG undefined FUN_14878e526(void)

void FUN_14878e526(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b379650;
    plVar3 = (longlong *)param_2[5];
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
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 14878e5be FUN_14878e5be body=55 status=ok
// SIG undefined FUN_14878e5be(void)

void FUN_14878e5be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cdf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cdf8 = FUN_140002ddd(FUN_1465348b7,uVar1,L"MovieSceneCoordinatedMaterialTemplate");
  }
  return;
}



// FUNCTION 14878e5f6 FUN_14878e5f6 body=107 status=ok
// SIG undefined FUN_14878e5f6(void)

longlong FUN_14878e5f6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_1401f3db8(param_1 + 0x20,param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  if ((*(longlong *)(param_1 + 0x48) != *(longlong *)(param_2 + 0x48)) ||
     (*(int *)(param_1 + 0x50) != *(int *)(param_2 + 0x50))) {
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return param_1;
}



// FUNCTION 14878e704 FUN_14878e704 body=132 status=ok
// SIG undefined FUN_14878e704(void)

undefined8 FUN_14878e704(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(param_2 + 8 + lVar6) = *(undefined1 *)(param_3 + 8 + lVar6);
      *(undefined8 *)(param_2 + 0x10 + lVar6) = *(undefined8 *)(param_3 + 0x10 + lVar6);
      *(undefined4 *)(param_2 + 0x18 + lVar6) = *(undefined4 *)(param_3 + 0x18 + lVar6);
      FUN_148631fb0(param_2 + 0x20 + lVar6,param_3 + 0x20 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0xc0 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0xc0 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878e7b0 FUN_14878e7b0 body=59 status=ok
// SIG undefined FUN_14878e7b0(void)

undefined8 FUN_14878e7b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878e7fc FUN_14878e7fc body=57 status=ok
// SIG undefined FUN_14878e7fc(void)

void FUN_14878e7fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1a) == '\x01') {
    *param_2 = &PTR_FUN_14b379d90;
    if (param_2[0x15] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x1a) = 0;
  }
  return;
}



// FUNCTION 14878e884 FUN_14878e884 body=55 status=ok
// SIG undefined FUN_14878e884(void)

void FUN_14878e884(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ce40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ce40 = FUN_140002ddd(FUN_1465349ab,uVar1,L"MovieSceneCoordinatedParticleTemplate");
  }
  return;
}



// FUNCTION 14878e904 FUN_14878e904 body=59 status=ok
// SIG undefined FUN_14878e904(void)

undefined8 FUN_14878e904(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878e9a6 FUN_14878e9a6 body=58 status=ok
// SIG undefined FUN_14878e9a6(void)

void FUN_14878e9a6(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_145cc57d5(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 14878e9e0 FUN_14878e9e0 body=58 status=ok
// SIG undefined FUN_14878e9e0(void)

void FUN_14878e9e0(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_145cc57d5(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 14878ea6e FUN_14878ea6e body=428 status=ok
// SIG undefined FUN_14878ea6e(void)

void FUN_14878ea6e(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68 [3];
  undefined8 uStack_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_68[2] = 0;
  uStack_50 = 0;
  local_38 = 0;
  FUN_1446f8bcc(&pvStack_40,0);
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  _Src = pvStack_40;
  plVar2 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_68[2];
  local_88 = (undefined4)uStack_50;
  uStack_84 = uStack_50._4_4_;
  uStack_80 = (undefined4)local_48;
  uStack_7c = local_48._4_4_;
  local_78 = (void *)0x0;
  lVar1 = (longlong)(int)local_38;
  local_70 = (int)local_38;
  if (lVar1 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_38 & 0xffffffff,0);
    memcpy(local_78,_Src,lVar1 * 2);
  }
  FUN_1488d77b4(&local_90,plVar2);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878ec1c FUN_14878ec1c body=172 status=ok
// SIG undefined FUN_14878ec1c(void)

void FUN_14878ec1c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488d73c4(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878ecca FUN_14878ecca body=184 status=ok
// SIG undefined FUN_14878ecca(void)

void FUN_14878ecca(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488d73c6(&local_40,local_38);
  *param_3 = local_40;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878ed84 FUN_14878ed84 body=172 status=ok
// SIG undefined FUN_14878ed84(void)

void FUN_14878ed84(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488d6f12(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878ee32 FUN_14878ee32 body=172 status=ok
// SIG undefined FUN_14878ee32(void)

void FUN_14878ee32(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488d73d2(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878eee0 FUN_14878eee0 body=172 status=ok
// SIG undefined FUN_14878eee0(void)

void FUN_14878eee0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488d6b24(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878efb0 FUN_14878efb0 body=172 status=ok
// SIG undefined FUN_14878efb0(void)

void FUN_14878efb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488d7a96(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878f064 FUN_14878f064 body=545 status=ok
// SIG undefined FUN_14878f064(void)

void FUN_14878f064(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_8c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_98 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  uVar2 = local_8c;
  uVar1 = local_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_88;
  puVar5 = local_f8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_1488d0cfe(local_20,local_f8,uVar2,uVar1);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878f384 FUN_14878f384 body=153 status=ok
// SIG undefined FUN_14878f384(void)

undefined8 FUN_14878f384(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_141289ada(param_2 + -0x20,param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1447715ec(param_2,param_3);
      puVar2 = (undefined8 *)(param_3 + 0x28);
      puVar3 = (undefined8 *)(param_2 + 0x28);
      for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_3 + 0x98);
      *(undefined2 *)(param_2 + 0x9c) = *(undefined2 *)(param_3 + 0x9c);
      param_3 = param_3 + 0xd0;
      param_2 = param_2 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878f446 FUN_14878f446 body=59 status=ok
// SIG undefined FUN_14878f446(void)

undefined8 FUN_14878f446(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878f4de FUN_14878f4de body=75 status=ok
// SIG undefined FUN_14878f4de(void)

void FUN_14878f4de(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    *param_1 = &PTR_FUN_14b392a10;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_1 + 1);
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  return;
}



// FUNCTION 14878f57c FUN_14878f57c body=121 status=ok
// SIG undefined FUN_14878f57c(void)

undefined8 FUN_14878f57c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1447715ec();
      FUN_140115bdc(param_2 + lVar2 + 0x38,param_3 + lVar2 + 0x38);
      *(undefined8 *)(param_2 + lVar2 + 0x58) = *(undefined8 *)(param_3 + lVar2 + 0x58);
      lVar2 = lVar2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878f61e FUN_14878f61e body=59 status=ok
// SIG undefined FUN_14878f61e(void)

undefined8 FUN_14878f61e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878f664 FUN_14878f664 body=32 status=ok
// SIG undefined FUN_14878f664(void)

void FUN_14878f664(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14878f6c6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14878f6c6 FUN_14878f6c6 body=94 status=ok
// SIG undefined FUN_14878f6c6(void)

void FUN_14878f6c6(longlong param_1)

{
  *(undefined2 **)(param_1 + 0x38) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_140115c12(param_1 + 0x48,0);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14878f744 FUN_14878f744 body=63 status=ok
// SIG undefined FUN_14878f744(void)

undefined1 FUN_14878f744(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14878f858(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 14878f7ac FUN_14878f7ac body=59 status=ok
// SIG undefined FUN_14878f7ac(void)

undefined8 FUN_14878f7ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878f7f8 FUN_14878f7f8 body=38 status=ok
// SIG undefined FUN_14878f7f8(void)

void FUN_14878f7f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_14087c1e6(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 14878f858 FUN_14878f858 body=148 status=ok
// SIG undefined FUN_14878f858(void)

longlong FUN_14878f858(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_1447715ec(param_1 + 0x28,param_2 + 0x28);
  FUN_140115bdc(param_1 + 0x50,param_2 + 0x50);
  FUN_140115bdc(param_1 + 0x70,param_2 + 0x70);
  puVar2 = (undefined8 *)(param_2 + 0x90);
  puVar3 = (undefined8 *)(param_1 + 0x90);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  FUN_14878f8ec(param_1 + 0xf8,param_2 + 0xf8);
  return param_1;
}



// FUNCTION 14878f8ec FUN_14878f8ec body=93 status=ok
// SIG undefined FUN_14878f8ec(void)

undefined8 * FUN_14878f8ec(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14087c323(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14878f94a(param_1,iVar1);
      FUN_14878f9bd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14878f94a FUN_14878f94a body=115 status=ok
// SIG undefined FUN_14878f94a(void)

void FUN_14878f94a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14878f9bd FUN_14878f9bd body=121 status=ok
// SIG undefined FUN_14878f9bd(void)

void FUN_14878f9bd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1400750e6(param_1,param_2);
    *(undefined2 **)(param_1 + 0x38) = &DAT_14a171d50;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    FUN_1406022fe(param_1 + 0x48,param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 14878fa38 FUN_14878fa38 body=28 status=ok
// SIG undefined FUN_14878fa38(void)

undefined8 FUN_14878fa38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14878fac0 FUN_14878fac0 body=102 status=ok
// SIG undefined FUN_14878fac0(void)

undefined8 FUN_14878fac0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 0x10 + lVar3;
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)(lVar2 + -0x10) = *puVar1;
      FUN_1447715ec(lVar2,puVar1 + 2);
      *(undefined8 *)(lVar2 + 0x28) = puVar1[7];
      lVar3 = lVar3 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878fb4e FUN_14878fb4e body=70 status=ok
// SIG undefined FUN_14878fb4e(void)

void FUN_14878fb4e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_14878fc17(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878fba0 FUN_14878fba0 body=40 status=ok
// SIG undefined FUN_14878fba0(void)

void FUN_14878fba0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14878fc17 FUN_14878fc17 body=457 status=ok
// SIG undefined FUN_14878fc17(void)

undefined4 FUN_14878fc17(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined4 local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_1 == '\x01') {
    FUN_1447a97f4(local_70,param_1 + 0x10);
    iVar2 = FUN_144aff4ae(local_70);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        FUN_144a7c8fe(local_70,local_7c,iVar2,1);
        cVar1 = FUN_144aff4be(local_7c,&DAT_14cb7beb0);
        if (cVar1 == '\0') {
          FUN_144a7c8fe(local_70,local_88,iVar2,1);
          cVar1 = FUN_144aff4be(local_88,&DAT_14cb7bec8);
          if (cVar1 != '\0') goto LAB_14878fd77;
          FUN_144a7c8fe(local_70,local_94,iVar2,1);
          cVar1 = FUN_144aff4be(local_94,&DAT_14cb7bee0);
          if (cVar1 != '\0') goto LAB_14878fd77;
          FUN_144a7c8fe(local_70,local_a0,iVar2,1);
          cVar1 = FUN_144aff4be(local_a0,&DAT_14cb7bef8);
          if (cVar1 != '\0') goto LAB_14878fd77;
          FUN_144a7c8fe(local_70,local_ac,iVar2,1);
          cVar1 = FUN_144aff4be(local_ac,&DAT_14cb7bf10);
          if (cVar1 != '\0') goto LAB_14878fd77;
        }
        else {
LAB_14878fd77:
          FUN_1402b5374(local_70,iVar2,0);
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_144aff4ae(local_70);
      } while (iVar2 < iVar3);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_70[0] = *(undefined4 *)(param_1 + 0x10);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return local_70[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878fec4 FUN_14878fec4 body=177 status=ok
// SIG undefined FUN_14878fec4(void)

undefined8 FUN_14878fec4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_141289ada(lVar1 + 8,lVar2 + 8);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      lVar2 = param_2 + 0x28 + lVar10;
      lVar1 = param_3 + lVar10;
      FUN_1447715ec(lVar2,lVar1 + 0x28);
      uVar3 = *(undefined4 *)(lVar1 + 0x54);
      uVar4 = *(undefined4 *)(lVar1 + 0x58);
      uVar5 = *(undefined4 *)(lVar1 + 0x5c);
      uVar6 = *(undefined4 *)(lVar1 + 0x60);
      uVar7 = *(undefined4 *)(lVar1 + 100);
      uVar8 = *(undefined4 *)(lVar1 + 0x68);
      uVar9 = *(undefined4 *)(lVar1 + 0x6c);
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar1 + 0x50);
      *(undefined4 *)(lVar2 + 0x2c) = uVar3;
      *(undefined4 *)(lVar2 + 0x30) = uVar4;
      *(undefined4 *)(lVar2 + 0x34) = uVar5;
      *(undefined4 *)(lVar2 + 0x38) = uVar6;
      *(undefined4 *)(lVar2 + 0x3c) = uVar7;
      *(undefined4 *)(lVar2 + 0x40) = uVar8;
      *(undefined4 *)(lVar2 + 0x44) = uVar9;
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar1 + 0x70);
      FUN_148790158(param_2 + lVar10 + 0x78,param_3 + lVar10 + 0x78);
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878ff9e FUN_14878ff9e body=70 status=ok
// SIG undefined FUN_14878ff9e(void)

void FUN_14878ff9e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_148790257(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878fff6 FUN_14878fff6 body=40 status=ok
// SIG undefined FUN_14878fff6(void)

void FUN_14878fff6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1487900ca(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14879006c FUN_14879006c body=38 status=ok
// SIG undefined FUN_14879006c(void)

undefined8 FUN_14879006c(undefined8 param_1,int param_2)

{
  FUN_1487900ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148790092 FUN_148790092 body=55 status=ok
// SIG undefined FUN_148790092(void)

void FUN_148790092(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6da20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6da20 = FUN_140002ddd(FUN_146536f2b,uVar1,L"RefreshAreaDef");
  }
  return;
}



// FUNCTION 1487900ca FUN_1487900ca body=90 status=ok
// SIG undefined FUN_1487900ca(void)

void FUN_1487900ca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b391310;
  FUN_148790124(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148790124 FUN_148790124 body=51 status=ok
// SIG undefined FUN_148790124(void)

void FUN_148790124(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148790158 FUN_148790158 body=95 status=ok
// SIG undefined FUN_148790158(void)

undefined8 * FUN_148790158(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148790124(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487901b8(param_1,iVar1);
      FUN_14879021a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487901b8 FUN_1487901b8 body=98 status=ok
// SIG undefined FUN_1487901b8(void)

void FUN_1487901b8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14879021a FUN_14879021a body=60 status=ok
// SIG undefined FUN_14879021a(void)

void FUN_14879021a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1400750e6(param_1,param_2);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 148790257 FUN_148790257 body=458 status=ok
// SIG undefined FUN_148790257(void)

undefined4 FUN_148790257(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined4 local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1447a97f4(local_70,param_1 + 0x28);
    iVar2 = FUN_144aff4ae(local_70);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        FUN_144a7c8fe(local_70,local_7c,iVar2,1);
        cVar1 = FUN_144aff4be(local_7c,&DAT_14cb7beb0);
        if (cVar1 == '\0') {
          FUN_144a7c8fe(local_70,local_88,iVar2,1);
          cVar1 = FUN_144aff4be(local_88,&DAT_14cb7bec8);
          if (cVar1 != '\0') goto LAB_1487903b8;
          FUN_144a7c8fe(local_70,local_94,iVar2,1);
          cVar1 = FUN_144aff4be(local_94,&DAT_14cb7bee0);
          if (cVar1 != '\0') goto LAB_1487903b8;
          FUN_144a7c8fe(local_70,local_a0,iVar2,1);
          cVar1 = FUN_144aff4be(local_a0,&DAT_14cb7bef8);
          if (cVar1 != '\0') goto LAB_1487903b8;
          FUN_144a7c8fe(local_70,local_ac,iVar2,1);
          cVar1 = FUN_144aff4be(local_ac,&DAT_14cb7bf10);
          if (cVar1 != '\0') goto LAB_1487903b8;
        }
        else {
LAB_1487903b8:
          FUN_1402b5374(local_70,iVar2,0);
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_144aff4ae(local_70);
      } while (iVar2 < iVar3);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_70[0] = *(undefined4 *)(param_1 + 0x28);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return local_70[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148790422 FUN_148790422 body=57 status=ok
// SIG undefined FUN_148790422(void)

void FUN_148790422(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b3914a0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 148790472 FUN_148790472 body=105 status=ok
// SIG undefined FUN_148790472(void)

undefined8 FUN_148790472(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      memcpy((void *)(param_2 + 0x18 + lVar1),(void *)(param_3 + 0x18 + lVar1),0x88);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148790504 FUN_148790504 body=59 status=ok
// SIG undefined FUN_148790504(void)

undefined8 FUN_148790504(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148790550 FUN_148790550 body=49 status=ok
// SIG undefined FUN_148790550(void)

void FUN_148790550(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 148790708 FUN_148790708 body=59 status=ok
// SIG undefined FUN_148790708(void)

undefined8 FUN_148790708(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148790754 FUN_148790754 body=38 status=ok
// SIG undefined FUN_148790754(void)

void FUN_148790754(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1447805d2(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1487907bc FUN_1487907bc body=146 status=ok
// SIG undefined FUN_1487907bc(void)

undefined8 * FUN_1487907bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b023b40;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_14b00be70;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xf00000d0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xf00000d0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xf00000d0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 6;
  param_1[0x11] = 0;
  FUN_144a5dc74(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 1487908d2 FUN_1487908d2 body=59 status=ok
// SIG undefined FUN_1487908d2(void)

undefined8 FUN_1487908d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487909f0 FUN_1487909f0 body=59 status=ok
// SIG undefined FUN_1487909f0(void)

undefined8 FUN_1487909f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148790ab4 FUN_148790ab4 body=78 status=ok
// SIG undefined FUN_148790ab4(void)

undefined8 FUN_148790ab4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1400fce78();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148790b2a FUN_148790b2a body=59 status=ok
// SIG undefined FUN_148790b2a(void)

undefined8 FUN_148790b2a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148790bbc FUN_148790bbc body=50 status=ok
// SIG undefined FUN_148790bbc(void)

void FUN_148790bbc(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1447cd778(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148790c2a FUN_148790c2a body=78 status=ok
// SIG undefined FUN_148790c2a(void)

undefined8 FUN_148790c2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_14185ee86(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148790ca0 FUN_148790ca0 body=59 status=ok
// SIG undefined FUN_148790ca0(void)

undefined8 FUN_148790ca0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148790d30 FUN_148790d30 body=115 status=ok
// SIG undefined FUN_148790d30(void)

void FUN_148790d30(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148790da3 FUN_148790da3 body=74 status=ok
// SIG undefined FUN_148790da3(void)

void FUN_148790da3(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1407fb742(param_1,param_2);
    *param_1 = &PTR_FUN_14b39b7f0;
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1 = param_1 + 6;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148790dee FUN_148790dee body=55 status=ok
// SIG undefined FUN_148790dee(void)

void FUN_148790dee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dbc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dbc0 = FUN_140002ddd(FUN_146537e7d,uVar1,L"MissionActionSequenceDef_ObjectiveUpdated");
  }
  return;
}



// FUNCTION 148790e26 FUN_148790e26 body=60 status=ok
// SIG undefined FUN_148790e26(void)

void FUN_148790e26(undefined8 *param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    *param_1 = &PTR_FUN_14b398ea0;
    FUN_1403d9976(param_1[4],*(undefined4 *)(param_1 + 5));
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 148790e62 FUN_148790e62 body=77 status=ok
// SIG undefined FUN_148790e62(void)

void FUN_148790e62(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x240);
  FUN_143c8664e(param_2);
  *param_2 = &PTR_FUN_14b39b7e0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  return;
}



// FUNCTION 148790eb0 FUN_148790eb0 body=60 status=ok
// SIG undefined FUN_148790eb0(void)

void FUN_148790eb0(undefined8 param_1,undefined8 *param_2)

{
  FUN_143c8664e(param_2);
  *param_2 = &PTR_FUN_14b39b7e0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  return;
}



// FUNCTION 148790f10 FUN_148790f10 body=108 status=ok
// SIG undefined FUN_148790f10(void)

undefined1 FUN_148790f10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406b37d6(param_2,param_3);
    FUN_1401f3db8(param_2 + 0x248,param_3 + 0x248);
    FUN_14185ee86(param_2 + 0x260,param_3 + 0x260);
    param_2 = param_2 + 0x270;
    param_3 = param_3 + 0x270;
  }
  return 1;
}



// FUNCTION 148790fa4 FUN_148790fa4 body=59 status=ok
// SIG undefined FUN_148790fa4(void)

undefined8 FUN_148790fa4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148790ff0 FUN_148790ff0 body=40 status=ok
// SIG undefined FUN_148790ff0(void)

void FUN_148790ff0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_14879108c(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 148791066 FUN_148791066 body=38 status=ok
// SIG undefined FUN_148791066(void)

undefined8 FUN_148791066(undefined8 param_1,int param_2)

{
  FUN_14879108c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879108c FUN_14879108c body=109 status=ok
// SIG undefined FUN_14879108c(void)

void FUN_14879108c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39b7e0;
  FUN_1403d9976(param_1[0x4c],*(undefined4 *)(param_1 + 0x4d));
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x4a];
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
  FUN_1403da20a(param_1);
  return;
}



// FUNCTION 148791132 FUN_148791132 body=83 status=ok
// SIG undefined FUN_148791132(void)

undefined8 FUN_148791132(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_1406b39e6(param_2 + -0x10,param_3 + -0x10);
      FUN_1406b3a44(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487911ae FUN_1487911ae body=59 status=ok
// SIG undefined FUN_1487911ae(void)

undefined8 FUN_1487911ae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487911f4 FUN_1487911f4 body=32 status=ok
// SIG undefined FUN_1487911f4(void)

void FUN_1487911f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_140170ace(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148791278 FUN_148791278 body=56 status=ok
// SIG undefined FUN_148791278(void)

void FUN_148791278(undefined8 param_1,longlong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001487912a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487912c6 FUN_1487912c6 body=54 status=ok
// SIG undefined FUN_1487912c6(void)

undefined1 FUN_1487912c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1401f3db8(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148791324 FUN_148791324 body=59 status=ok
// SIG undefined FUN_148791324(void)

undefined8 FUN_148791324(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879136a FUN_14879136a body=64 status=ok
// SIG undefined FUN_14879136a(void)

void FUN_14879136a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
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
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1487913fe FUN_1487913fe body=37 status=ok
// SIG undefined FUN_1487913fe(void)

void FUN_1487913fe(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x248);
  FUN_143c8664e(param_2);
  return;
}



// FUNCTION 148791450 FUN_148791450 body=63 status=ok
// SIG undefined FUN_148791450(void)

undefined1 FUN_148791450(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406b37d6(param_2,param_3);
    param_3 = param_3 + 0x248;
    param_2 = param_2 + 0x248;
  }
  return 1;
}



// FUNCTION 1487914b8 FUN_1487914b8 body=59 status=ok
// SIG undefined FUN_1487914b8(void)

undefined8 FUN_1487914b8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148791504 FUN_148791504 body=38 status=ok
// SIG undefined FUN_148791504(void)

void FUN_148791504(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x248) == '\x01') {
    FUN_1403da20a(param_2);
    *(undefined1 *)(param_2 + 0x248) = 0;
  }
  return;
}



// FUNCTION 1487915a0 FUN_1487915a0 body=78 status=ok
// SIG undefined FUN_1487915a0(void)

undefined8 FUN_1487915a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148791616 FUN_148791616 body=59 status=ok
// SIG undefined FUN_148791616(void)

undefined8 FUN_148791616(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879165c FUN_14879165c body=64 status=ok
// SIG undefined FUN_14879165c(void)

void FUN_14879165c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x20);
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
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1487917d2 FUN_1487917d2 body=59 status=ok
// SIG undefined FUN_1487917d2(void)

undefined8 FUN_1487917d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148791818 FUN_148791818 body=32 status=ok
// SIG undefined FUN_148791818(void)

void FUN_148791818(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148791890 FUN_148791890 body=38 status=ok
// SIG undefined FUN_148791890(void)

undefined8 FUN_148791890(undefined8 param_1,int param_2)

{
  FUN_1401bee6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487918b6 FUN_1487918b6 body=55 status=ok
// SIG undefined FUN_1487918b6(void)

void FUN_1487918b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dc50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dc50 = FUN_140002ddd(FUN_14185ede7,uVar1,L"ObjectiveTypeSettingsBase");
  }
  return;
}



// FUNCTION 14879198c FUN_14879198c body=59 status=ok
// SIG undefined FUN_14879198c(void)

undefined8 FUN_14879198c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487919d8 FUN_1487919d8 body=38 status=ok
// SIG undefined FUN_1487919d8(void)

void FUN_1487919d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148791ac6 FUN_148791ac6 body=59 status=ok
// SIG undefined FUN_148791ac6(void)

undefined8 FUN_148791ac6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148791b0c FUN_148791b0c body=32 status=ok
// SIG undefined FUN_148791b0c(void)

void FUN_148791b0c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148791ba0 FUN_148791ba0 body=96 status=ok
// SIG undefined FUN_148791ba0(void)

undefined8 FUN_148791ba0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1406b39e6();
      FUN_1406b3a44(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148791c28 FUN_148791c28 body=59 status=ok
// SIG undefined FUN_148791c28(void)

undefined8 FUN_148791c28(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


