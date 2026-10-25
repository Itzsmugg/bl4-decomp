// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148711504 FUN_148711504 body=95 status=ok
// SIG undefined FUN_148711504(void)

undefined8 * FUN_148711504(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1487114cc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148711564(param_1,iVar1);
      FUN_1487115c6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148711564 FUN_148711564 body=98 status=ok
// SIG undefined FUN_148711564(void)

void FUN_148711564(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487115c6 FUN_1487115c6 body=52 status=ok
// SIG undefined FUN_1487115c6(void)

void FUN_1487115c6(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1487115fa(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 1487115fa FUN_1487115fa body=149 status=ok
// SIG undefined FUN_1487115fa(void)

undefined8 * FUN_1487115fa(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b23dd30;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar2;
  *param_1 = &PTR_FUN_14b24af30;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 148711690 FUN_148711690 body=94 status=ok
// SIG undefined FUN_148711690(void)

void FUN_148711690(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x98);
  FUN_145c43014(param_2);
  *param_2 = &PTR_FUN_14b2431f0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  return;
}



// FUNCTION 1487116ee FUN_1487116ee body=74 status=ok
// SIG undefined FUN_1487116ee(void)

void FUN_1487116ee(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c43014(param_2);
  *param_2 = &PTR_FUN_14b2431f0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  return;
}



// FUNCTION 14871175c FUN_14871175c body=81 status=ok
// SIG undefined FUN_14871175c(void)

undefined1 FUN_14871175c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148704de0(param_2,param_3);
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_3 + 0x50);
    FUN_1487089fc(param_2 + 0x58,param_3 + 0x58);
    param_2 = param_2 + 0x98;
    param_3 = param_3 + 0x98;
  }
  return 1;
}



// FUNCTION 1487117d6 FUN_1487117d6 body=59 status=ok
// SIG undefined FUN_1487117d6(void)

undefined8 FUN_1487117d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148711822 FUN_148711822 body=57 status=ok
// SIG undefined FUN_148711822(void)

void FUN_148711822(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b2431f0;
    FUN_141069212(param_2 + 0xb);
    FUN_140d8c2c6(param_2);
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 1487118ac FUN_1487118ac body=101 status=ok
// SIG undefined FUN_1487118ac(void)

void FUN_1487118ac(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xa8);
  FUN_145c43014(param_2);
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *param_2 = &PTR_FUN_14b243170;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 148711912 FUN_148711912 body=81 status=ok
// SIG undefined FUN_148711912(void)

void FUN_148711912(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c43014(param_2);
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *param_2 = &PTR_FUN_14b243170;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 148711988 FUN_148711988 body=104 status=ok
// SIG undefined FUN_148711988(void)

undefined1 FUN_148711988(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148704de0(param_2,param_3);
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_3 + 0x50);
    FUN_1487089fc(param_2 + 0x58,param_3 + 0x58);
    FUN_148709f4a(param_2 + 0x98,param_3 + 0x98);
    param_2 = param_2 + 0xa8;
    param_3 = param_3 + 0xa8;
  }
  return 1;
}



// FUNCTION 148711a18 FUN_148711a18 body=59 status=ok
// SIG undefined FUN_148711a18(void)

undefined8 FUN_148711a18(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148711a64 FUN_148711a64 body=40 status=ok
// SIG undefined FUN_148711a64(void)

void FUN_148711a64(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_145c3a550(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148711b34 FUN_148711b34 body=83 status=ok
// SIG undefined FUN_148711b34(void)

undefined1 FUN_148711b34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_144a787a6(param_2 + -0x20,param_3 + -0x20);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_148707dde(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148711bb0 FUN_148711bb0 body=59 status=ok
// SIG undefined FUN_148711bb0(void)

undefined8 FUN_148711bb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148711bf6 FUN_148711bf6 body=34 status=ok
// SIG undefined FUN_148711bf6(void)

void FUN_148711bf6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1457f72cc(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148711c68 FUN_148711c68 body=154 status=ok
// SIG undefined FUN_148711c68(void)

void FUN_148711c68(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b240690;
  param_2[10] = 0;
  param_2[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148711d04 FUN_148711d04 body=142 status=ok
// SIG undefined FUN_148711d04(void)

void FUN_148711d04(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b240690;
  param_2[10] = 0;
  param_2[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148711db8 FUN_148711db8 body=141 status=ok
// SIG undefined FUN_148711db8(void)

undefined1 FUN_148711db8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_146130eee(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(undefined4 *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x24) = uVar3;
      *(undefined4 *)(lVar1 + 0x28) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c) = uVar5;
      *(undefined1 *)(lVar1 + 0x30) = *(undefined1 *)(lVar2 + 0x30);
      FUN_145c43818(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      FUN_148707dde(param_2 + lVar6 + 0x50,param_3 + lVar6 + 0x50);
      lVar6 = lVar6 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148711e6e FUN_148711e6e body=59 status=ok
// SIG undefined FUN_148711e6e(void)

undefined8 FUN_148711e6e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148711eb4 FUN_148711eb4 body=34 status=ok
// SIG undefined FUN_148711eb4(void)

void FUN_148711eb4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1457f7294(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148711f26 FUN_148711f26 body=80 status=ok
// SIG undefined FUN_148711f26(void)

void FUN_148711f26(undefined8 param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b24d660;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined8 *)((longlong)param_2 + 0x59) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  return;
}



// FUNCTION 148711f76 FUN_148711f76 body=43 status=ok
// SIG undefined FUN_148711f76(void)

void FUN_148711f76(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b24d660;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined8 *)((longlong)param_2 + 0x59) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  return;
}



// FUNCTION 148711fc6 FUN_148711fc6 body=54 status=ok
// SIG undefined FUN_148711fc6(void)

undefined1 FUN_148711fc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14870ff88(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148712024 FUN_148712024 body=59 status=ok
// SIG undefined FUN_148712024(void)

undefined8 FUN_148712024(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871206a FUN_14871206a body=34 status=ok
// SIG undefined FUN_14871206a(void)

void FUN_14871206a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1458a09d4(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148712144 FUN_148712144 body=59 status=ok
// SIG undefined FUN_148712144(void)

undefined8 FUN_148712144(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487121e4 FUN_1487121e4 body=34 status=ok
// SIG undefined FUN_1487121e4(void)

undefined8 FUN_1487121e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148712206 FUN_148712206 body=55 status=ok
// SIG undefined FUN_148712206(void)

void FUN_148712206(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64d78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64d78 = FUN_140002ddd(FUN_146506a6b,uVar1,L"GbxSkillComponentData_TimerExtension");
  }
  return;
}



// FUNCTION 14871223e FUN_14871223e body=54 status=ok
// SIG undefined FUN_14871223e(void)

undefined8 * FUN_14871223e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/Components/Timer/GbxSkillComponent_Timer.h"
                ,99,L"Pure virtual not implemented (%s)",
                L"FGbxSkillComponentData_TimerExtension::SpawnExtension");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1487122a2 FUN_1487122a2 body=63 status=ok
// SIG undefined FUN_1487122a2(void)

undefined1 FUN_1487122a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148712550(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 14871230a FUN_14871230a body=59 status=ok
// SIG undefined FUN_14871230a(void)

undefined8 FUN_14871230a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148712356 FUN_148712356 body=38 status=ok
// SIG undefined FUN_148712356(void)

void FUN_148712356(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_1487124c4(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 148712460 FUN_148712460 body=43 status=ok
// SIG undefined FUN_148712460(void)

undefined8 FUN_148712460(undefined8 param_1,int param_2)

{
  FUN_1487124c4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 14871248c FUN_14871248c body=55 status=ok
// SIG undefined FUN_14871248c(void)

void FUN_14871248c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64d90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64d90 = FUN_140002ddd(FUN_146506b01,uVar1,L"GbxSkillComponentData_TimerItemEx");
  }
  return;
}



// FUNCTION 1487124c4 FUN_1487124c4 body=140 status=ok
// SIG undefined FUN_1487124c4(void)

void FUN_1487124c4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b24bb60;
  plVar3 = (longlong *)param_1[0x1f];
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
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148712550 FUN_148712550 body=130 status=ok
// SIG undefined FUN_148712550(void)

longlong FUN_148712550(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_140d02432(param_1 + 0x28,param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_2 + 0x78);
  FUN_140d02432(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  FUN_1401f3db8(param_1 + 0xd8,param_2 + 0xd8);
  FUN_1401f3db8(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



// FUNCTION 1487125d4 FUN_1487125d4 body=138 status=ok
// SIG undefined FUN_1487125d4(void)

void FUN_1487125d4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b24bcd0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148712684 FUN_148712684 body=133 status=ok
// SIG undefined FUN_148712684(void)

undefined1 FUN_148712684(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_146130eee(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(undefined4 *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x24) = uVar3;
      *(undefined4 *)(lVar1 + 0x28) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c) = uVar5;
      FUN_148712848(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      FUN_1401f3db8(param_2 + lVar6 + 0x40,param_3 + lVar6 + 0x40);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148712732 FUN_148712732 body=59 status=ok
// SIG undefined FUN_148712732(void)

undefined8 FUN_148712732(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148712778 FUN_148712778 body=32 status=ok
// SIG undefined FUN_148712778(void)

void FUN_148712778(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1487127e6(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1487127e6 FUN_1487127e6 body=97 status=ok
// SIG undefined FUN_1487127e6(void)

void FUN_1487127e6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b24bcd0;
  plVar3 = (longlong *)param_1[9];
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
  FUN_141283c50(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148712848 FUN_148712848 body=93 status=ok
// SIG undefined FUN_148712848(void)

undefined8 * FUN_148712848(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141283c50(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487128a6(param_1,iVar1);
      FUN_14871291c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487128a6 FUN_1487128a6 body=118 status=ok
// SIG undefined FUN_1487128a6(void)

void FUN_1487128a6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x108,8);
    iVar2 = (int)(uVar1 / 0x108);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x108,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14871291c FUN_14871291c body=60 status=ok
// SIG undefined FUN_14871291c(void)

void FUN_14871291c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148712958(param_1,param_2);
    param_1 = param_1 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return;
}



// FUNCTION 148712958 FUN_148712958 body=389 status=ok
// SIG undefined FUN_148712958(void)

undefined8 * FUN_148712958(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b23dd30;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar2;
  *param_1 = &PTR_FUN_14b24bb60;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  FUN_144a7f96e(param_1 + 6,param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = uVar2;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  FUN_144a7f96e(param_1 + 0x11,param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = uVar2;
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0xd0);
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_1401f3db8(param_1 + 0x1b,param_2 + 0xd8);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_1401f3db8(param_1 + 0x1e,param_2 + 0xf0);
  return param_1;
}



// FUNCTION 148712ade FUN_148712ade body=72 status=ok
// SIG undefined FUN_148712ade(void)

void FUN_148712ade(undefined8 param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b24d540;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 148712b26 FUN_148712b26 body=39 status=ok
// SIG undefined FUN_148712b26(void)

void FUN_148712b26(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b24d540;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 148712b72 FUN_148712b72 body=87 status=ok
// SIG undefined FUN_148712b72(void)

undefined1 FUN_148712b72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148704de0(param_2,param_3);
    FUN_148712cd4(param_2 + 0x50,param_3 + 0x50);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148712bf2 FUN_148712bf2 body=59 status=ok
// SIG undefined FUN_148712bf2(void)

undefined8 FUN_148712bf2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148712c38 FUN_148712c38 body=34 status=ok
// SIG undefined FUN_148712c38(void)

void FUN_148712c38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1457ee204(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148712ca8 FUN_148712ca8 body=43 status=ok
// SIG undefined FUN_148712ca8(void)

undefined8 FUN_148712ca8(undefined8 param_1,int param_2)

{
  FUN_1457ee204();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 148712cd4 FUN_148712cd4 body=93 status=ok
// SIG undefined FUN_148712cd4(void)

undefined8 * FUN_148712cd4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14108399b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148712d32(param_1,iVar1);
      FUN_148712d94(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148712d32 FUN_148712d32 body=98 status=ok
// SIG undefined FUN_148712d32(void)

void FUN_148712d32(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148712d94 FUN_148712d94 body=45 status=ok
// SIG undefined FUN_148712d94(void)

void FUN_148712d94(longlong param_1,longlong param_2,int param_3)

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
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148712e4a FUN_148712e4a body=59 status=ok
// SIG undefined FUN_148712e4a(void)

undefined8 FUN_148712e4a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148712f44 FUN_148712f44 body=294 status=ok
// SIG undefined FUN_148712f44(void)

undefined8 FUN_148712f44(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_4 != 0) {
    do {
      if (param_2 != param_3) {
        uStack_b0 = CONCAT71(uStack_b0._1_7_,*(byte *)(param_3 + 7));
        (*(code *)(&PTR_caseD_4_14b103c40)[*(byte *)(param_3 + 7)])(&local_e8,param_3);
        local_78 = (undefined4)local_b8;
        uStack_74 = local_b8._4_4_;
        uStack_70 = (undefined4)uStack_b0;
        uStack_6c = uStack_b0._4_4_;
        local_88 = (undefined4)local_c8;
        uStack_84 = local_c8._4_4_;
        uStack_80 = (undefined4)uStack_c0;
        uStack_7c = uStack_c0._4_4_;
        local_98 = (undefined4)local_d8;
        uStack_94 = local_d8._4_4_;
        uStack_90 = (undefined4)uStack_d0;
        uStack_8c = uStack_d0._4_4_;
        local_a8 = (undefined4)local_e8;
        uStack_a4 = local_e8._4_4_;
        uStack_a0 = (undefined4)uStack_e0;
        uStack_9c = uStack_e0._4_4_;
        uVar1 = *param_2;
        uVar2 = param_2[1];
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        uVar5 = param_2[4];
        uVar6 = param_2[5];
        uVar7 = param_2[6];
        uVar8 = param_2[7];
        *(undefined4 *)(param_2 + 6) = (undefined4)local_b8;
        *(undefined4 *)((longlong)param_2 + 0x34) = local_b8._4_4_;
        *(undefined4 *)(param_2 + 7) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_b0._4_4_;
        *(undefined4 *)(param_2 + 4) = (undefined4)local_c8;
        *(undefined4 *)((longlong)param_2 + 0x24) = local_c8._4_4_;
        *(undefined4 *)(param_2 + 5) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_c0._4_4_;
        *(undefined4 *)(param_2 + 2) = (undefined4)local_d8;
        *(undefined4 *)((longlong)param_2 + 0x14) = local_d8._4_4_;
        *(undefined4 *)(param_2 + 3) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_d0._4_4_;
        *(undefined4 *)param_2 = (undefined4)local_e8;
        *(undefined4 *)((longlong)param_2 + 4) = local_e8._4_4_;
        *(undefined4 *)(param_2 + 1) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_e0._4_4_;
        local_e8 = uVar1;
        uStack_e0 = uVar2;
        local_d8 = uVar3;
        uStack_d0 = uVar4;
        local_c8 = uVar5;
        uStack_c0 = uVar6;
        local_b8 = uVar7;
        uStack_b0 = uVar8;
        (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[uVar8 & 0xff])(&local_e8);
      }
      param_3 = param_3 + 8;
      param_2 = param_2 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871306c FUN_14871306c body=31 status=ok
// SIG undefined FUN_14871306c(void)

undefined1
FUN_14871306c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_148971ff8(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14871308c FUN_14871308c body=317 status=ok
// SIG undefined FUN_14871308c(void)

undefined4
FUN_14871308c(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_4 != 0) {
    local_b0 = param_7;
    local_b8 = param_6;
    FUN_148972520(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_d8);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_a8);
  if ((local_9c & 2) == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
  }
  local_b0 = param_7;
  local_b8 = param_6;
  uVar1 = FUN_148972520(param_3,param_2,&local_98,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_a8);
  if ((local_9c & 4) != 0) {
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[uStack_60 & 0xff])();
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1487131ca FUN_1487131ca body=39 status=ok
// SIG undefined FUN_1487131ca(void)

void FUN_1487131ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_148972050(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 148713206 FUN_148713206 body=59 status=ok
// SIG undefined FUN_148713206(void)

undefined8 FUN_148713206(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871324c FUN_14871324c body=41 status=ok
// SIG undefined FUN_14871324c(void)

void FUN_14871324c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_2 + 0x38)])(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148713354 FUN_148713354 body=59 status=ok
// SIG undefined FUN_148713354(void)

undefined8 FUN_148713354(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487133f4 FUN_1487133f4 body=34 status=ok
// SIG undefined FUN_1487133f4(void)

undefined8 FUN_1487133f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148713416 FUN_148713416 body=55 status=ok
// SIG undefined FUN_148713416(void)

void FUN_148713416(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64e80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64e80 = FUN_140002ddd(FUN_146506f4d,uVar1,L"GbxSkillConditionData");
  }
  return;
}



// FUNCTION 14871344e FUN_14871344e body=54 status=ok
// SIG undefined FUN_14871344e(void)

undefined8 * FUN_14871344e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/GbxSkillConditionData.h"
                ,0x1a,L"Pure virtual not implemented (%s)",L"DoCreateCondition");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1487134b4 FUN_1487134b4 body=62 status=ok
// SIG undefined FUN_1487134b4(void)

undefined1 FUN_1487134b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141289ada(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871351a FUN_14871351a body=59 status=ok
// SIG undefined FUN_14871351a(void)

undefined8 FUN_14871351a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148713560 FUN_148713560 body=43 status=ok
// SIG undefined FUN_148713560(void)

void FUN_148713560(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14871360e FUN_14871360e body=68 status=ok
// SIG undefined FUN_14871360e(void)

undefined1 FUN_14871360e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871367a FUN_14871367a body=59 status=ok
// SIG undefined FUN_14871367a(void)

undefined8 FUN_14871367a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487136c0 FUN_1487136c0 body=32 status=ok
// SIG undefined FUN_1487136c0(void)

void FUN_1487136c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_14871375a(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148713722 FUN_148713722 body=55 status=ok
// SIG undefined FUN_148713722(void)

void FUN_148713722(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64eb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64eb0 = FUN_140002ddd(FUN_146507045,uVar1,L"GbxSkillConditionData_StateCondition");
  }
  return;
}



// FUNCTION 14871375a FUN_14871375a body=65 status=ok
// SIG undefined FUN_14871375a(void)

void FUN_14871375a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b24c860;
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000148713797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487137d0 FUN_1487137d0 body=63 status=ok
// SIG undefined FUN_1487137d0(void)

undefined1 FUN_1487137d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487138f8(param_2,param_3);
    param_3 = param_3 + 0x210;
    param_2 = param_2 + 0x210;
  }
  return 1;
}



// FUNCTION 148713838 FUN_148713838 body=59 status=ok
// SIG undefined FUN_148713838(void)

undefined8 FUN_148713838(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148713884 FUN_148713884 body=38 status=ok
// SIG undefined FUN_148713884(void)

void FUN_148713884(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_140c2206c(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 1487138f8 FUN_1487138f8 body=268 status=ok
// SIG undefined FUN_1487138f8(void)

longlong FUN_1487138f8(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_2 != param_1) {
    FUN_148713b2a(param_1 + 8,param_2 + 8);
  }
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x20);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x20) = lVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x30);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x30);
    }
  }
  *(longlong *)(param_1 + 0x30) = lVar2;
  FUN_148713a04(param_1 + 0x38,param_2 + 0x38);
  FUN_148713a04(param_1 + 0x48,param_2 + 0x48);
  FUN_143c680b2(param_1 + 0x58,param_2 + 0x58);
  FUN_148713cec(param_1 + 0xa8,param_2 + 0xa8);
  FUN_148713fce(param_1 + 0xf8,param_2 + 0xf8);
  FUN_14871417c(param_1 + 0x148,param_2 + 0x148);
  FUN_148713a54(param_1 + 0x198,param_2 + 0x198);
  FUN_148713ab2(param_1 + 0x1a8,param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x20c) = *(undefined1 *)(param_2 + 0x20c);
  return param_1;
}



// FUNCTION 148713a04 FUN_148713a04 body=79 status=ok
// SIG undefined FUN_148713a04(void)

undefined8 * FUN_148713a04(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140cfce10(param_1,iVar1);
      FUN_140cfc8da(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148713a54 FUN_148713a54 body=93 status=ok
// SIG undefined FUN_148713a54(void)

undefined8 * FUN_148713a54(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c2234f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487142e8(param_1,iVar1);
      FUN_14871434a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148713ab2 FUN_148713ab2 body=119 status=ok
// SIG undefined FUN_148713ab2(void)

longlong FUN_148713ab2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == param_1) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(param_2 + 0x25);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    FUN_148714378(param_1 + 0x30,param_2 + 0x30);
  }
  else {
    FUN_1401b31d8(param_1 + 8,param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(param_2 + 0x25);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    FUN_148714378(param_1 + 0x30,param_2 + 0x30);
    FUN_1487144ae(param_1 + 0x40,param_2 + 0x40);
  }
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  return param_1;
}



// FUNCTION 148713b2a FUN_148713b2a body=304 status=ok
// SIG undefined FUN_148713b2a(void)

void FUN_148713b2a(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148713c5c FUN_148713c5c body=144 status=ok
// SIG undefined FUN_148713c5c(void)

longlong * FUN_148713c5c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = 0;
  iVar1 = (int)param_2[2];
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  lVar2 = param_2[3];
  lVar3 = param_2[4];
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x2a);
  *(undefined8 *)((longlong)param_1 + 0x22) = *(undefined8 *)((longlong)param_2 + 0x22);
  *(undefined8 *)((longlong)param_1 + 0x2a) = uVar4;
  param_1[3] = lVar2;
  param_1[4] = lVar3;
  return param_1;
}



// FUNCTION 148713cec FUN_148713cec body=122 status=ok
// SIG undefined FUN_148713cec(void)

longlong FUN_148713cec(longlong param_1,longlong param_2)

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
    FUN_148713d66(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148713d66 FUN_148713d66 body=309 status=ok
// SIG undefined FUN_148713d66(void)

longlong * FUN_148713d66(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_140c2239c(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar3 + lVar7);
          puVar1 = (undefined8 *)(lVar4 + 8 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + 0x18 + lVar7) = 2;
          if (lVar3 != lVar4) {
            FUN_148713e9c(lVar4 + 8 + lVar7,lVar3 + 8 + lVar7);
          }
          *(undefined8 *)(lVar4 + 0x20 + lVar7) = *(undefined8 *)(lVar3 + 0x20 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x28;
      } while (uVar2 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 148713e9c FUN_148713e9c body=304 status=ok
// SIG undefined FUN_148713e9c(void)

void FUN_148713e9c(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148713fce FUN_148713fce body=122 status=ok
// SIG undefined FUN_148713fce(void)

longlong FUN_148713fce(longlong param_1,longlong param_2)

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
    FUN_148714048(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148714048 FUN_148714048 body=307 status=ok
// SIG undefined FUN_148714048(void)

longlong * FUN_148714048(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_140c2253c(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar3 + lVar7);
          puVar1 = (undefined8 *)(lVar4 + 8 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + 0x18 + lVar7) = 2;
          if (lVar3 != lVar4) {
            FUN_1401b31d8(lVar4 + 8 + lVar7,lVar3 + 8 + lVar7);
          }
          *(undefined8 *)(lVar4 + 0x20 + lVar7) = *(undefined8 *)(lVar3 + 0x20 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x28;
      } while (uVar2 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 14871417c FUN_14871417c body=122 status=ok
// SIG undefined FUN_14871417c(void)

longlong FUN_14871417c(longlong param_1,longlong param_2)

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
    FUN_1487141f6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1487141f6 FUN_1487141f6 body=241 status=ok
// SIG undefined FUN_1487141f6(void)

longlong * FUN_1487141f6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140c226de(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar5 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar5 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          uVar4 = ((undefined8 *)(lVar2 + lVar6))[1];
          *(undefined8 *)(lVar5 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          ((undefined8 *)(lVar5 + lVar6))[1] = uVar4;
          *(undefined8 *)(lVar5 + 0x10 + lVar6) = *(undefined8 *)(lVar2 + 0x10 + lVar6);
          lVar3 = *(longlong *)(lVar2 + 0x18 + lVar6);
          *(longlong *)(lVar5 + 0x18 + lVar6) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar5 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 1487142e8 FUN_1487142e8 body=98 status=ok
// SIG undefined FUN_1487142e8(void)

void FUN_1487142e8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14871434a FUN_14871434a body=45 status=ok
// SIG undefined FUN_14871434a(void)

void FUN_14871434a(longlong param_1,longlong param_2,int param_3)

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
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148714378 FUN_148714378 body=93 status=ok
// SIG undefined FUN_148714378(void)

undefined8 * FUN_148714378(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c22249(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487143d6(param_1,iVar1);
      FUN_148714438(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487143d6 FUN_1487143d6 body=98 status=ok
// SIG undefined FUN_1487143d6(void)

void FUN_1487143d6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,8);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148714438 FUN_148714438 body=74 status=ok
// SIG undefined FUN_148714438(void)

void FUN_148714438(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486f8188(param_1,param_2);
    *param_1 = &PTR_FUN_14b24d648;
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 148714482 FUN_148714482 body=43 status=ok
// SIG undefined FUN_148714482(void)

undefined8 FUN_148714482(undefined8 param_1,int param_2)

{
  FUN_140e0f188();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1487144ae FUN_1487144ae body=304 status=ok
// SIG undefined FUN_1487144ae(void)

void FUN_1487144ae(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1487145e0 FUN_1487145e0 body=121 status=ok
// SIG undefined FUN_1487145e0(void)

void FUN_1487145e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b24d600;
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140c22249(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b224350;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14871465a FUN_14871465a body=43 status=ok
// SIG undefined FUN_14871465a(void)

undefined8 FUN_14871465a(undefined8 param_1,int param_2)

{
  FUN_140c2206c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 148714686 FUN_148714686 body=43 status=ok
// SIG undefined FUN_148714686(void)

undefined8 FUN_148714686(undefined8 param_1,int param_2)

{
  FUN_1487145e0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1487146ba FUN_1487146ba body=176 status=ok
// SIG undefined FUN_1487146ba(void)

void FUN_1487146ba(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar7 = (longlong)*(int *)(param_1 + 0x38) << 7;
    iVar6 = 0;
    do {
      cVar2 = FUN_144a76f74(lVar5 + 8,1,0);
      if (cVar2 == '\0') {
        pcVar1 = (code *)*param_2;
        plVar4 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar4 = param_2 + 4;
        }
        local_4c = iVar6;
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar3,lVar5);
      }
      else {
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x80;
      lVar7 = lVar7 + -0x80;
    } while (lVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871476c FUN_14871476c body=93 status=ok
// SIG undefined FUN_14871476c(void)

void FUN_14871476c(longlong param_1)

{
  int iVar1;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    iVar1 = FUN_1487147e2(param_1 + 0x30,&local_11);
    *(undefined1 *)(param_1 + 0x58) = 0;
    if (0 < iVar1) {
      FUN_1447f69b6(param_1 + 8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487147e2 FUN_1487147e2 body=294 status=ok
// SIG undefined FUN_1487147e2(void)

int FUN_1487147e2(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar8 = (int)param_1[1];
  lVar9 = (longlong)iVar8;
  if (lVar9 == 0) {
    iVar8 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar2 = FUN_144a76f74(lVar1 + 8,1,0);
    iVar10 = 0;
    iVar5 = 0;
    do {
      lVar4 = (longlong)iVar5;
      iVar12 = iVar5 + 1;
      if (iVar5 + 1 < iVar8) {
        iVar12 = iVar8;
      }
      lVar11 = lVar4 * 0x80;
      lVar13 = lVar1 + 0x88 + lVar11;
      iVar6 = iVar5;
      do {
        lVar4 = lVar4 + 1;
        iVar7 = iVar12;
        if (lVar9 <= lVar4) break;
        bVar3 = FUN_144a76f74(lVar13,1,0);
        iVar6 = iVar6 + 1;
        lVar13 = lVar13 + 0x80;
        iVar7 = iVar6;
      } while ((bVar2 & 1) == bVar3);
      iVar12 = iVar7 - iVar5;
      if ((bVar2 & 1) == 0) {
        if (iVar10 != iVar5) {
          memmove((void *)((longlong)iVar10 * 0x80 + lVar1),(void *)(lVar11 + lVar1),
                  (longlong)iVar12 << 7);
        }
        iVar10 = iVar10 + iVar12;
      }
      else {
        FUN_140c22249(lVar11 + lVar1,iVar12);
      }
      iVar5 = iVar7;
      bVar2 = bVar2 ^ 1;
    } while (lVar4 < lVar9);
    *(int *)(param_1 + 1) = iVar10;
    iVar8 = iVar8 - iVar10;
  }
  return iVar8;
}



// FUNCTION 148714938 FUN_148714938 body=62 status=ok
// SIG undefined FUN_148714938(void)

undefined1 FUN_148714938(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_145c56af0(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871499e FUN_14871499e body=59 status=ok
// SIG undefined FUN_14871499e(void)

undefined8 FUN_14871499e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148714a32 FUN_148714a32 body=55 status=ok
// SIG undefined FUN_148714a32(void)

void FUN_148714a32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64ee0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64ee0 = FUN_140002ddd(FUN_146507173,uVar1,L"GbxSkillContextResolver");
  }
  return;
}



// FUNCTION 148714a8c FUN_148714a8c body=70 status=ok
// SIG undefined FUN_148714a8c(void)

undefined8 FUN_148714a8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148714afa FUN_148714afa body=59 status=ok
// SIG undefined FUN_148714afa(void)

undefined8 FUN_148714afa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148714b40 FUN_148714b40 body=64 status=ok
// SIG undefined FUN_148714b40(void)

void FUN_148714b40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148714bea FUN_148714bea body=87 status=ok
// SIG undefined FUN_148714bea(void)

undefined1 FUN_148714bea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148687156(param_2,param_3);
    FUN_1401f3db8(param_2 + 0x18,param_3 + 0x18);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148714c6a FUN_148714c6a body=59 status=ok
// SIG undefined FUN_148714c6a(void)

undefined8 FUN_148714c6a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148714cb0 FUN_148714cb0 body=64 status=ok
// SIG undefined FUN_148714cb0(void)

void FUN_148714cb0(undefined8 param_1,longlong param_2)

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



// FUNCTION 148714d52 FUN_148714d52 body=63 status=ok
// SIG undefined FUN_148714d52(void)

undefined1 FUN_148714d52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148714e66(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 148714dba FUN_148714dba body=59 status=ok
// SIG undefined FUN_148714dba(void)

undefined8 FUN_148714dba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148714e06 FUN_148714e06 body=38 status=ok
// SIG undefined FUN_148714e06(void)

void FUN_148714e06(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_140a0144c(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 148714e66 FUN_148714e66 body=170 status=ok
// SIG undefined FUN_148714e66(void)

longlong FUN_148714e66(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_148714f10(param_1 + 0x18,param_2 + 0x18);
  FUN_148714f6e(param_1 + 0x28,param_2 + 0x28);
  FUN_148714fcc(param_1 + 0x38,param_2 + 0x38);
  FUN_148715368(param_1 + 0x48,param_2 + 0x48);
  FUN_14871502a(param_1 + 0x98,param_2 + 0x98);
  FUN_14871507e(param_1 + 0xb0,param_2 + 0xb0);
  FUN_1487150ce(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  FUN_1487156ba(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 148714f10 FUN_148714f10 body=93 status=ok
// SIG undefined FUN_148714f10(void)

undefined8 * FUN_148714f10(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a016e8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14871512c(param_1,iVar1);
      FUN_14871518e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148714f6e FUN_148714f6e body=93 status=ok
// SIG undefined FUN_148714f6e(void)

undefined8 * FUN_148714f6e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a015c8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146507962(param_1,iVar1);
      FUN_1487151ea(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148714fcc FUN_148714fcc body=93 status=ok
// SIG undefined FUN_148714fcc(void)

undefined8 * FUN_148714fcc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a015fb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14871526e(param_1,iVar1);
      FUN_1487152e1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14871502a FUN_14871502a body=84 status=ok
// SIG undefined FUN_14871502a(void)

longlong * FUN_14871502a(longlong *param_1,longlong *param_2)

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



// FUNCTION 14871507e FUN_14871507e body=79 status=ok
// SIG undefined FUN_14871507e(void)

undefined8 * FUN_14871507e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1487154fa(param_1,iVar1);
      FUN_14871556d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487150ce FUN_1487150ce body=93 status=ok
// SIG undefined FUN_1487150ce(void)

undefined8 * FUN_1487150ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a0169d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487155ea(param_1,iVar1);
      FUN_14871565d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14871512c FUN_14871512c body=98 status=ok
// SIG undefined FUN_14871512c(void)

void FUN_14871512c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14871518e FUN_14871518e body=92 status=ok
// SIG undefined FUN_14871518e(void)

void FUN_14871518e(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    param_2 = param_2 + 8;
    do {
      puVar1[-1] = *(undefined8 *)(param_2 + -8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      FUN_1401f3db8(puVar1,param_2);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1487151ea FUN_1487151ea body=132 status=ok
// SIG undefined FUN_1487151ea(void)

void FUN_1487151ea(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 14871526e FUN_14871526e body=115 status=ok
// SIG undefined FUN_14871526e(void)

void FUN_14871526e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487152e1 FUN_1487152e1 body=134 status=ok
// SIG undefined FUN_1487152e1(void)

void FUN_1487152e1(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 148715368 FUN_148715368 body=122 status=ok
// SIG undefined FUN_148715368(void)

longlong FUN_148715368(longlong param_1,longlong param_2)

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
    FUN_1487153e2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1487153e2 FUN_1487153e2 body=279 status=ok
// SIG undefined FUN_1487153e2(void)

longlong * FUN_1487153e2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140a01734(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1406cd6a8(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_2 + 0x20;
      puVar5 = (undefined8 *)(*param_1 + 0x20);
      uVar3 = 0;
      do {
        plVar2 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar2 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar2 + (uVar3 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar3 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(lVar4 + -0x20);
          *(undefined4 *)((longlong)puVar5 + -0x1c) = *(undefined4 *)(lVar4 + -0x1c);
        }
        else {
          puVar5[-4] = *(undefined8 *)(lVar4 + -0x20);
          *(undefined4 *)(puVar5 + -3) = *(undefined4 *)(lVar4 + -0x18);
          puVar5[-2] = 0;
          *(undefined1 *)(puVar5 + -1) = *(undefined1 *)(lVar4 + -8);
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          FUN_1401f3db8(puVar5,lVar4);
          puVar5[3] = *(undefined8 *)(lVar4 + 0x18);
        }
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x40;
        puVar5 = puVar5 + 8;
      } while (uVar1 != uVar3);
    }
  }
  return param_1;
}



// FUNCTION 1487154fa FUN_1487154fa body=115 status=ok
// SIG undefined FUN_1487154fa(void)

void FUN_1487154fa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14871556d FUN_14871556d body=52 status=ok
// SIG undefined FUN_14871556d(void)

void FUN_14871556d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1487155a2(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1487155a2 FUN_1487155a2 body=71 status=ok
// SIG undefined FUN_1487155a2(void)

undefined8 * FUN_1487155a2(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1487155ea FUN_1487155ea body=115 status=ok
// SIG undefined FUN_1487155ea(void)

void FUN_1487155ea(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14871565d FUN_14871565d body=93 status=ok
// SIG undefined FUN_14871565d(void)

void FUN_14871565d(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    do {
      FUN_1486f6272(puVar1 + -3,param_2);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      FUN_1401f3db8(puVar1,param_2 + 0x18);
      param_2 = param_2 + 0x30;
      puVar1 = puVar1 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1487156ba FUN_1487156ba body=122 status=ok
// SIG undefined FUN_1487156ba(void)

longlong FUN_1487156ba(longlong param_1,longlong param_2)

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
    FUN_148715734(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148715734 FUN_148715734 body=251 status=ok
// SIG undefined FUN_148715734(void)

undefined8 * FUN_148715734(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140a0194e(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
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
          FUN_148715830(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 6) = 0;
          *(undefined8 *)(puVar6 + 8) = 0;
          *(undefined8 *)(puVar6 + 10) = 0;
          FUN_1401f3db8(puVar6 + 6,puVar4 + 6);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148715830 FUN_148715830 body=71 status=ok
// SIG undefined FUN_148715830(void)

undefined8 * FUN_148715830(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1487158d2 FUN_1487158d2 body=230 status=ok
// SIG undefined FUN_1487158d2(void)

void FUN_1487158d2(undefined8 param_1,longlong param_2)

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
  FUN_1489880e0(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487159ba FUN_1487159ba body=371 status=ok
// SIG undefined FUN_1487159ba(void)

void FUN_1487159ba(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  local_50 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  FUN_148987f00(local_18,local_20,&local_50);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148715b31 FUN_148715b31 body=106 status=ok
// SIG undefined FUN_148715b31(void)

void FUN_148715b31(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148715b9c FUN_148715b9c body=230 status=ok
// SIG undefined FUN_148715b9c(void)

void FUN_148715b9c(undefined8 param_1,longlong param_2)

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
  FUN_14898848e(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148715c84 FUN_148715c84 body=460 status=ok
// SIG undefined FUN_148715c84(void)

void FUN_148715c84(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  FUN_1446f4b16();
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
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_48;
  uVar1 = FUN_14477b664(uStack_40);
  local_58 = FUN_14477b664(uVar1);
  local_50 = local_38;
  FUN_1489880f8(local_18,local_20,local_28,&local_60);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148715e52 FUN_148715e52 body=371 status=ok
// SIG undefined FUN_148715e52(void)

void FUN_148715e52(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  local_50 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  FUN_1489882ae(local_18,local_20,&local_50);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148715fee FUN_148715fee body=71 status=ok
// SIG undefined FUN_148715fee(void)

undefined8 * FUN_148715fee(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148716036 FUN_148716036 body=216 status=ok
// SIG undefined FUN_148716036(void)

void FUN_148716036(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_50 = local_38;
  uVar2 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar2);
  local_40 = local_28;
  uVar1 = FUN_148986172(param_1,&local_50);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148716116 FUN_148716116 body=401 status=ok
// SIG undefined FUN_148716116(void)

void FUN_148716116(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RBP;
  bool bVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_4c;
  bVar2 = local_50 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  uVar1 = FUN_14477b664(uStack_40);
  local_60 = FUN_14477b664(uVar1);
  local_58 = local_38;
  uVar3 = FUN_14898620e(param_1,&local_68,uVar3,
                        CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar2) & 0xffffffff);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487162a8 FUN_1487162a8 body=38 status=ok
// SIG undefined FUN_1487162a8(void)

void FUN_1487162a8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14898615e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1487162d4 FUN_1487162d4 body=216 status=ok
// SIG undefined FUN_1487162d4(void)

void FUN_1487162d4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_50 = local_38;
  uVar2 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar2);
  local_40 = local_28;
  uVar1 = FUN_14598b572(param_1,&local_50);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487163b4 FUN_1487163b4 body=216 status=ok
// SIG undefined FUN_1487163b4(void)

void FUN_1487163b4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_50 = local_38;
  uVar2 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar2);
  local_40 = local_28;
  uVar1 = FUN_1489862e0(param_1,&local_50);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148716494 FUN_148716494 body=209 status=ok
// SIG undefined FUN_148716494(void)

void FUN_148716494(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_50 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  FUN_14898638c(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871656a FUN_14871656a body=37 status=ok
// SIG undefined FUN_14871656a(void)

void FUN_14871656a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1489862c8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148716596 FUN_148716596 body=216 status=ok
// SIG undefined FUN_148716596(void)

void FUN_148716596(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_50 = local_38;
  uVar2 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar2);
  local_40 = local_28;
  uVar1 = FUN_148986436(param_1,&local_50);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148716674 FUN_148716674 body=37 status=ok
// SIG undefined FUN_148716674(void)

void FUN_148716674(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14898643a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14871669a FUN_14871669a body=209 status=ok
// SIG undefined FUN_14871669a(void)

void FUN_14871669a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_50 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  FUN_1489862f0(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871679c FUN_14871679c body=38 status=ok
// SIG undefined FUN_14871679c(void)

undefined8 FUN_14871679c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"EditorDef",1);
  return param_2;
}



// FUNCTION 1487167ea FUN_1487167ea body=45 status=ok
// SIG undefined FUN_1487167ea(void)

longlong FUN_1487167ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487168a6 FUN_1487168a6 body=59 status=ok
// SIG undefined FUN_1487168a6(void)

undefined8 FUN_1487168a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148716946 FUN_148716946 body=34 status=ok
// SIG undefined FUN_148716946(void)

undefined8 FUN_148716946(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148716968 FUN_148716968 body=55 status=ok
// SIG undefined FUN_148716968(void)

void FUN_148716968(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64f58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64f58 = FUN_140002ddd(FUN_146507a3b,uVar1,L"GbxSkillDelegateDamageFilter");
  }
  return;
}



// FUNCTION 1487169a0 FUN_1487169a0 body=42 status=ok
// SIG undefined FUN_1487169a0(void)

undefined8 FUN_1487169a0(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/Components/Delegates/Damage/GbxSkillDelegateDamageFilter.h"
                ,0x1b,L"Pure virtual not implemented (%s)",L"FGbxSkillDelegateDamageFilter::DoEval")
  ;
  return 0;
}



// FUNCTION 148716a36 FUN_148716a36 body=59 status=ok
// SIG undefined FUN_148716a36(void)

undefined8 FUN_148716a36(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148716b18 FUN_148716b18 body=68 status=ok
// SIG undefined FUN_148716b18(void)

undefined1 FUN_148716b18(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148716c3e(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148716b84 FUN_148716b84 body=59 status=ok
// SIG undefined FUN_148716b84(void)

undefined8 FUN_148716b84(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148716bca FUN_148716bca body=38 status=ok
// SIG undefined FUN_148716bca(void)

void FUN_148716bca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148716c3e FUN_148716c3e body=79 status=ok
// SIG undefined FUN_148716c3e(void)

undefined8 * FUN_148716c3e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148716c8e(param_1,iVar1);
      FUN_148716d01(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148716c8e FUN_148716c8e body=115 status=ok
// SIG undefined FUN_148716c8e(void)

void FUN_148716c8e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148716d01 FUN_148716d01 body=44 status=ok
// SIG undefined FUN_148716d01(void)

void FUN_148716d01(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148716d2e FUN_148716d2e body=73 status=ok
// SIG undefined FUN_148716d2e(void)

void FUN_148716d2e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined4 *)((longlong)param_2 + 0x38) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined4 *)((longlong)param_2 + 0x88) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x98) = 0x3f800000;
  return;
}



// FUNCTION 148716dde FUN_148716dde body=75 status=ok
// SIG undefined FUN_148716dde(void)

undefined1 FUN_148716dde(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140d02432(param_2,param_3);
    FUN_140d02432(param_2 + 0x50,param_3 + 0x50);
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + 0xa0;
  }
  return 1;
}



// FUNCTION 148716e52 FUN_148716e52 body=59 status=ok
// SIG undefined FUN_148716e52(void)

undefined8 FUN_148716e52(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148716f2c FUN_148716f2c body=63 status=ok
// SIG undefined FUN_148716f2c(void)

undefined1 FUN_148716f2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14871718c(param_2,param_3);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 148716f94 FUN_148716f94 body=59 status=ok
// SIG undefined FUN_148716f94(void)

undefined8 FUN_148716f94(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148716fe0 FUN_148716fe0 body=38 status=ok
// SIG undefined FUN_148716fe0(void)

void FUN_148716fe0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x178) == '\x01') {
    FUN_14871712c(param_2);
    *(undefined1 *)(param_2 + 0x178) = 0;
  }
  return;
}



// FUNCTION 14871712c FUN_14871712c body=95 status=ok
// SIG undefined FUN_14871712c(void)

void FUN_14871712c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b254bd0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14871718c FUN_14871718c body=327 status=ok
// SIG undefined FUN_14871718c(void)

longlong FUN_14871718c(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  if ((*(longlong *)(param_1 + 0x10) != *(longlong *)(param_2 + 0x10)) ||
     (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18))) {
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if ((*(longlong *)(param_1 + 0x28) != *(longlong *)(param_2 + 0x28)) ||
     (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30))) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  FUN_148716c3e(param_1 + 0x50,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  FUN_148716c3e(param_1 + 0x70,param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  FUN_145fced18(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  FUN_148633d58(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(param_2 + 0xd2);
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_2 + 0xd0);
  FUN_140d02432(param_1 + 0xd8,param_2 + 0xd8);
  FUN_140d02432(param_1 + 0x128,param_2 + 0x128);
  return param_1;
}



// FUNCTION 14871733a FUN_14871733a body=84 status=ok
// SIG undefined FUN_14871733a(void)

undefined8 FUN_14871733a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487173b6 FUN_1487173b6 body=59 status=ok
// SIG undefined FUN_1487173b6(void)

undefined8 FUN_1487173b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487173fc FUN_1487173fc body=48 status=ok
// SIG undefined FUN_1487173fc(void)

void FUN_1487173fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14b254d50;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 14871747a FUN_14871747a body=66 status=ok
// SIG undefined FUN_14871747a(void)

undefined8 * FUN_14871747a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b254d50;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1487174bc FUN_1487174bc body=57 status=ok
// SIG undefined FUN_1487174bc(void)

void FUN_1487174bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64fe8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64fe8 = FUN_140002ddd(FUN_146507d5d,uVar1,L"GbxSkillDelegateDamageFilter_StatusEffect");
  }
  return;
}



// FUNCTION 148717566 FUN_148717566 body=54 status=ok
// SIG undefined FUN_148717566(void)

undefined1 FUN_148717566(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487176fc(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1487175c4 FUN_1487175c4 body=59 status=ok
// SIG undefined FUN_1487175c4(void)

undefined8 FUN_1487175c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871760a FUN_14871760a body=34 status=ok
// SIG undefined FUN_14871760a(void)

void FUN_14871760a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_145901c78(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14871767a FUN_14871767a body=43 status=ok
// SIG undefined FUN_14871767a(void)

undefined8 FUN_14871767a(undefined8 param_1,int param_2)

{
  FUN_145901c78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1487176aa FUN_1487176aa body=69 status=ok
// SIG undefined FUN_1487176aa(void)

undefined8 * FUN_1487176aa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b258290;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1487176fc FUN_1487176fc body=95 status=ok
// SIG undefined FUN_1487176fc(void)

longlong FUN_1487176fc(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  FUN_14871775c(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 14871775c FUN_14871775c body=95 status=ok
// SIG undefined FUN_14871775c(void)

undefined8 * FUN_14871775c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145901cd1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487177bc(param_1,iVar1);
      FUN_14871782b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487177bc FUN_1487177bc body=111 status=ok
// SIG undefined FUN_1487177bc(void)

void FUN_1487177bc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14871782b FUN_14871782b body=52 status=ok
// SIG undefined FUN_14871782b(void)

void FUN_14871782b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_141858546(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 1487178ee FUN_1487178ee body=59 status=ok
// SIG undefined FUN_1487178ee(void)

undefined8 FUN_1487178ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871798e FUN_14871798e body=34 status=ok
// SIG undefined FUN_14871798e(void)

undefined8 FUN_14871798e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1487179b0 FUN_1487179b0 body=55 status=ok
// SIG undefined FUN_1487179b0(void)

void FUN_1487179b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65018 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65018 = FUN_140002ddd(FUN_146507e53,uVar1,L"GbxSkillDelegateHitActorFilter");
  }
  return;
}



// FUNCTION 1487179e8 FUN_1487179e8 body=42 status=ok
// SIG undefined FUN_1487179e8(void)

undefined8 FUN_1487179e8(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/Components/Delegates/Collision/GbxSkillDelegateHitActorFilter.h"
                ,0x1c,L"Pure virtual not implemented (%s)",
                L"FGbxSkillDelegateHitActorFilter::DoEval");
  return 0;
}



// FUNCTION 148717a68 FUN_148717a68 body=68 status=ok
// SIG undefined FUN_148717a68(void)

undefined1 FUN_148717a68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148717c70(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148717ad4 FUN_148717ad4 body=59 status=ok
// SIG undefined FUN_148717ad4(void)

undefined8 FUN_148717ad4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148717b1a FUN_148717b1a body=34 status=ok
// SIG undefined FUN_148717b1a(void)

void FUN_148717b1a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_148717bee(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148717b8a FUN_148717b8a body=43 status=ok
// SIG undefined FUN_148717b8a(void)

undefined8 FUN_148717b8a(undefined8 param_1,int param_2)

{
  FUN_148717bee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 148717bb6 FUN_148717bb6 body=55 status=ok
// SIG undefined FUN_148717bb6(void)

void FUN_148717bb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65030 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65030 = FUN_140002ddd(FUN_146507eeb,uVar1,L"GbxSkillDelegateHitActorFilter_And");
  }
  return;
}



// FUNCTION 148717bee FUN_148717bee body=56 status=ok
// SIG undefined FUN_148717bee(void)

void FUN_148717bee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b255270;
  FUN_148717c26(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148717c26 FUN_148717c26 body=73 status=ok
// SIG undefined FUN_148717c26(void)

void FUN_148717c26(longlong param_1,int param_2)

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



// FUNCTION 148717c70 FUN_148717c70 body=95 status=ok
// SIG undefined FUN_148717c70(void)

undefined8 * FUN_148717c70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148717c26(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148717cd0(param_1,iVar1);
      FUN_148717d43(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148717cd0 FUN_148717cd0 body=115 status=ok
// SIG undefined FUN_148717cd0(void)

void FUN_148717cd0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148717d43 FUN_148717d43 body=52 status=ok
// SIG undefined FUN_148717d43(void)

void FUN_148717d43(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148717dcc FUN_148717dcc body=68 status=ok
// SIG undefined FUN_148717dcc(void)

undefined1 FUN_148717dcc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148717c70(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148717e38 FUN_148717e38 body=59 status=ok
// SIG undefined FUN_148717e38(void)

undefined8 FUN_148717e38(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148717e7e FUN_148717e7e body=34 status=ok
// SIG undefined FUN_148717e7e(void)

void FUN_148717e7e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_148717f52(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148717eee FUN_148717eee body=43 status=ok
// SIG undefined FUN_148717eee(void)

undefined8 FUN_148717eee(undefined8 param_1,int param_2)

{
  FUN_148717f52();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 148717f1a FUN_148717f1a body=55 status=ok
// SIG undefined FUN_148717f1a(void)

void FUN_148717f1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65048 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65048 = FUN_140002ddd(FUN_146507f81,uVar1,L"GbxSkillDelegateHitActorFilter_Or");
  }
  return;
}



// FUNCTION 148717f52 FUN_148717f52 body=56 status=ok
// SIG undefined FUN_148717f52(void)

void FUN_148717f52(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2553f0;
  FUN_148717c26(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148718032 FUN_148718032 body=59 status=ok
// SIG undefined FUN_148718032(void)

undefined8 FUN_148718032(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487180d2 FUN_1487180d2 body=34 status=ok
// SIG undefined FUN_1487180d2(void)

undefined8 FUN_1487180d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1487180f4 FUN_1487180f4 body=55 status=ok
// SIG undefined FUN_1487180f4(void)

void FUN_1487180f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65060 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65060 = FUN_140002ddd(FUN_146508017,uVar1,L"GbxSkillDelegateHitActorFilter_Cooldown");
  }
  return;
}



// FUNCTION 1487181ba FUN_1487181ba body=59 status=ok
// SIG undefined FUN_1487181ba(void)

undefined8 FUN_1487181ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871825a FUN_14871825a body=34 status=ok
// SIG undefined FUN_14871825a(void)

undefined8 FUN_14871825a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14871827c FUN_14871827c body=55 status=ok
// SIG undefined FUN_14871827c(void)

void FUN_14871827c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65078 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65078 = FUN_140002ddd(FUN_1465080ad,uVar1,L"GbxSkillDelegateHitActorFilter_HitWorld");
  }
  return;
}



// FUNCTION 148718354 FUN_148718354 body=59 status=ok
// SIG undefined FUN_148718354(void)

undefined8 FUN_148718354(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487183f4 FUN_1487183f4 body=34 status=ok
// SIG undefined FUN_1487183f4(void)

undefined8 FUN_1487183f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 148718416 FUN_148718416 body=55 status=ok
// SIG undefined FUN_148718416(void)

void FUN_148718416(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65090 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65090 =
         FUN_140002ddd(FUN_146508143,uVar1,L"GbxSkillDelegateHitActorFilter_HitCharacter");
  }
  return;
}



// FUNCTION 14871845e FUN_14871845e body=44 status=ok
// SIG undefined FUN_14871845e(void)

void FUN_14871845e(undefined8 param_1,longlong *param_2)

{
  FUN_140e0ef0a(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487184a0 FUN_1487184a0 body=54 status=ok
// SIG undefined FUN_1487184a0(void)

undefined1 FUN_1487184a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14871859a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1487184fe FUN_1487184fe body=59 status=ok
// SIG undefined FUN_1487184fe(void)

undefined8 FUN_1487184fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871859a FUN_14871859a body=93 status=ok
// SIG undefined FUN_14871859a(void)

undefined8 * FUN_14871859a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e0ef0a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487185f8(param_1,iVar1);
      FUN_14871866a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487185f8 FUN_1487185f8 body=114 status=ok
// SIG undefined FUN_1487185f8(void)

void FUN_1487185f8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,8);
    iVar2 = (int)(uVar1 / 0xb0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14871866a FUN_14871866a body=60 status=ok
// SIG undefined FUN_14871866a(void)

void FUN_14871866a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1487186a6(param_1,param_2);
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return;
}



// FUNCTION 1487186a6 FUN_1487186a6 body=321 status=ok
// SIG undefined FUN_1487186a6(void)

undefined8 * FUN_1487186a6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  if (param_2 != param_1) {
    FUN_140f86ba4(param_1 + 1,param_2 + 1);
  }
  FUN_1407b7224(param_1 + 4,param_2 + 4);
  FUN_1407b7224(param_1 + 6,param_2 + 6);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 9);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  puVar5 = (undefined8 *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 2;
  }
  else {
    puVar6 = param_2 + 10;
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = puVar5;
    }
    FUN_140204e64(param_1 + 10,iVar1,0);
    puVar5 = (undefined8 *)param_1[0xb];
    if ((undefined8 *)param_1[0xb] == (undefined8 *)0x0) {
      puVar5 = param_1 + 10;
    }
    memcpy(puVar5,puVar6,(longlong)iVar1 << 2);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  puVar5 = (undefined8 *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 2;
  }
  else {
    puVar6 = param_2 + 0xd;
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = puVar5;
    }
    FUN_140204e64(param_1 + 0xd,iVar1,0);
    puVar5 = (undefined8 *)param_1[0xe];
    if ((undefined8 *)param_1[0xe] == (undefined8 *)0x0) {
      puVar5 = param_1 + 0xd;
    }
    memcpy(puVar5,puVar6,(longlong)iVar1 << 2);
  }
  FUN_1487187e8(param_1 + 0x10,param_2 + 0x10);
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xfe | *(byte *)(param_2 + 0x15) & 1;
  return param_1;
}



// FUNCTION 1487187e8 FUN_1487187e8 body=119 status=ok
// SIG undefined FUN_1487187e8(void)

undefined1 * FUN_1487187e8(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  puVar2 = *(undefined1 **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
  else {
    _Src = param_2 + 8;
    if (puVar2 != (undefined1 *)0x0) {
      _Src = puVar2;
    }
    FUN_140b1783e(param_1 + 8,iVar1,0);
    puVar2 = *(undefined1 **)(param_1 + 0x18);
    if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
      puVar2 = param_1 + 8;
    }
    memcpy(puVar2,_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 148718860 FUN_148718860 body=48 status=ok
// SIG undefined FUN_148718860(void)

void FUN_148718860(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140e0ef0a(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1487188ca FUN_1487188ca body=88 status=ok
// SIG undefined FUN_1487188ca(void)

undefined1 FUN_1487188ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_141289ada(param_2 + -0x28,param_3 + -0x28);
      FUN_1486fe934(param_2 + -0x18,param_3 + -0x18);
      FUN_148718a28(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871894a FUN_14871894a body=59 status=ok
// SIG undefined FUN_14871894a(void)

undefined8 FUN_14871894a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148718990 FUN_148718990 body=32 status=ok
// SIG undefined FUN_148718990(void)

void FUN_148718990(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1487189ea(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1487189ea FUN_1487189ea body=61 status=ok
// SIG undefined FUN_1487189ea(void)

void FUN_1487189ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b257cb0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148718a28 FUN_148718a28 body=79 status=ok
// SIG undefined FUN_148718a28(void)

undefined8 * FUN_148718a28(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148718a78(param_1,iVar1);
      FUN_148718aeb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148718a78 FUN_148718a78 body=115 status=ok
// SIG undefined FUN_148718a78(void)

void FUN_148718a78(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148718aeb FUN_148718aeb body=52 status=ok
// SIG undefined FUN_148718aeb(void)

void FUN_148718aeb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148715fee(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148718b20 FUN_148718b20 body=28 status=ok
// SIG undefined FUN_148718b20(void)

undefined8 FUN_148718b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148718b7c FUN_148718b7c body=62 status=ok
// SIG undefined FUN_148718b7c(void)

undefined1 FUN_148718b7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141289ada(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148718be2 FUN_148718be2 body=59 status=ok
// SIG undefined FUN_148718be2(void)

undefined8 FUN_148718be2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148718c28 FUN_148718c28 body=43 status=ok
// SIG undefined FUN_148718c28(void)

void FUN_148718c28(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148718cea FUN_148718cea body=59 status=ok
// SIG undefined FUN_148718cea(void)

undefined8 FUN_148718cea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148718df4 FUN_148718df4 body=59 status=ok
// SIG undefined FUN_148718df4(void)

undefined8 FUN_148718df4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148718e94 FUN_148718e94 body=34 status=ok
// SIG undefined FUN_148718e94(void)

undefined8 FUN_148718e94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148718eb6 FUN_148718eb6 body=55 status=ok
// SIG undefined FUN_148718eb6(void)

void FUN_148718eb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65120 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65120 = FUN_140002ddd(FUN_1465083fd,uVar1,L"GbxSkillLatentAction");
  }
  return;
}



// FUNCTION 148718eee FUN_148718eee body=54 status=ok
// SIG undefined FUN_148718eee(void)

undefined8 * FUN_148718eee(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/GbxSkillLatentAction.h"
                ,0x53,L"Pure virtual not implemented (%s)",L"FGbxSkillLatentAction::Spawn");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148718f26 FUN_148718f26 body=79 status=ok
// SIG undefined FUN_148718f26(void)

void FUN_148718f26(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x288);
  *param_2 = &PTR_FUN_14b2561d0;
  param_2[1] = 0;
  FUN_14112fbd2(param_2 + 2);
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  return;
}



// FUNCTION 148718f76 FUN_148718f76 body=58 status=ok
// SIG undefined FUN_148718f76(void)

void FUN_148718f76(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b2561d0;
  param_2[1] = 0;
  FUN_14112fbd2(param_2 + 2);
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  return;
}



// FUNCTION 148718fd4 FUN_148718fd4 body=97 status=ok
// SIG undefined FUN_148718fd4(void)

undefined8 FUN_148718fd4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
    do {
      FUN_14054d68c(param_2 + -0x278,param_3 + -0x278);
      FUN_140862116(param_2,param_3);
      param_3 = param_3 + 0x298;
      param_2 = param_2 + 0x298;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871905e FUN_14871905e body=59 status=ok
// SIG undefined FUN_14871905e(void)

undefined8 FUN_14871905e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487190aa FUN_1487190aa body=49 status=ok
// SIG undefined FUN_1487190aa(void)

void FUN_1487190aa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x53) == '\x01') {
    *param_2 = &PTR_FUN_14b2561d0;
    FUN_14076ba26(param_2 + 1);
    *(undefined1 *)(param_2 + 0x53) = 0;
  }
  return;
}



// FUNCTION 14871912a FUN_14871912a body=57 status=ok
// SIG undefined FUN_14871912a(void)

undefined8 * FUN_14871912a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2561d0;
  FUN_14076ba26(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x298);
  }
  return param_1;
}


