// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14861ccde FUN_14861ccde body=70 status=ok
// SIG undefined FUN_14861ccde(void)

undefined8 FUN_14861ccde(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140115bdc(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14861cd4c FUN_14861cd4c body=59 status=ok
// SIG undefined FUN_14861cd4c(void)

undefined8 FUN_14861cd4c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861cd92 FUN_14861cd92 body=34 status=ok
// SIG undefined FUN_14861cd92(void)

void FUN_14861cd92(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14861ae00(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14861ceae FUN_14861ceae body=134 status=ok
// SIG undefined FUN_14861ceae(void)

undefined8 FUN_14861ceae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      uVar9 = *(undefined8 *)(param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_3 + -0x30);
      *(undefined8 *)(param_2 + -0x28) = uVar9;
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      uVar5 = *(undefined4 *)(param_3 + 0x30);
      uVar6 = *(undefined4 *)(param_3 + 0x34);
      uVar7 = *(undefined4 *)(param_3 + 0x38);
      uVar8 = *(undefined4 *)(param_3 + 0x3c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar9;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      *(undefined4 *)(param_2 + 0x30) = uVar5;
      *(undefined4 *)(param_2 + 0x34) = uVar6;
      *(undefined4 *)(param_2 + 0x38) = uVar7;
      *(undefined4 *)(param_2 + 0x3c) = uVar8;
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14861cf5c FUN_14861cf5c body=59 status=ok
// SIG undefined FUN_14861cf5c(void)

undefined8 FUN_14861cf5c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861cfa8 FUN_14861cfa8 body=54 status=ok
// SIG undefined FUN_14861cfa8(void)

void FUN_14861cfa8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14afff010;
    if (param_2[7] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14861d02c FUN_14861d02c body=57 status=ok
// SIG undefined FUN_14861d02c(void)

undefined8 * FUN_14861d02c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afff010;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14861d066 FUN_14861d066 body=55 status=ok
// SIG undefined FUN_14861d066(void)

void FUN_14861d066(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54ee0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54ee0 = FUN_140002ddd(FUN_1464affd7,uVar1,L"AvatarMatDriverParam");
  }
  return;
}



// FUNCTION 14861d09e FUN_14861d09e body=46 status=ok
// SIG undefined FUN_14861d09e(void)

void FUN_14861d09e(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1487e35ae(param_2);
  *param_2 = &PTR_FUN_14affb0b0;
  return;
}



// FUNCTION 14861d0cc FUN_14861d0cc body=32 status=ok
// SIG undefined FUN_14861d0cc(void)

void FUN_14861d0cc(undefined8 param_1,undefined8 *param_2)

{
  FUN_1487e35ae(param_2);
  *param_2 = &PTR_FUN_14affb0b0;
  return;
}



// FUNCTION 14861d110 FUN_14861d110 body=70 status=ok
// SIG undefined FUN_14861d110(void)

undefined8 FUN_14861d110(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140115bdc(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14861d17e FUN_14861d17e body=59 status=ok
// SIG undefined FUN_14861d17e(void)

undefined8 FUN_14861d17e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861d1c4 FUN_14861d1c4 body=34 status=ok
// SIG undefined FUN_14861d1c4(void)

void FUN_14861d1c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14861ae00(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14861d234 FUN_14861d234 body=38 status=ok
// SIG undefined FUN_14861d234(void)

undefined8 FUN_14861d234(undefined8 param_1,int param_2)

{
  FUN_14861ae00();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14861d25a FUN_14861d25a body=55 status=ok
// SIG undefined FUN_14861d25a(void)

void FUN_14861d25a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54ef8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54ef8 = FUN_140002ddd(FUN_1464b006d,uVar1,L"AvatarMaterialGameData");
  }
  return;
}



// FUNCTION 14861d2c6 FUN_14861d2c6 body=147 status=ok
// SIG undefined FUN_14861d2c6(void)

undefined8 FUN_14861d2c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      *(undefined2 *)(param_2 + lVar1 + 0x18) = *(undefined2 *)(param_3 + lVar1 + 0x18);
      FUN_14861d43c(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      FUN_1401f3db8(param_2 + lVar1 + 0x30,param_3 + lVar1 + 0x30);
      *(undefined4 *)(param_2 + lVar1 + 0x48) = *(undefined4 *)(param_3 + lVar1 + 0x48);
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14861d382 FUN_14861d382 body=59 status=ok
// SIG undefined FUN_14861d382(void)

undefined8 FUN_14861d382(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861d3c8 FUN_14861d3c8 body=34 status=ok
// SIG undefined FUN_14861d3c8(void)

void FUN_14861d3c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14861d620(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14861d43c FUN_14861d43c body=95 status=ok
// SIG undefined FUN_14861d43c(void)

undefined8 * FUN_14861d43c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14861d49b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14861d4d4(param_1,iVar1);
      FUN_14861d536(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14861d49b FUN_14861d49b body=56 status=ok
// SIG undefined FUN_14861d49b(void)

void FUN_14861d49b(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14afff010;
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 14861d4d4 FUN_14861d4d4 body=98 status=ok
// SIG undefined FUN_14861d4d4(void)

void FUN_14861d4d4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861d536 FUN_14861d536 body=60 status=ok
// SIG undefined FUN_14861d536(void)

void FUN_14861d536(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14861d572(param_1,param_2);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 14861d572 FUN_14861d572 body=173 status=ok
// SIG undefined FUN_14861d572(void)

undefined8 * FUN_14861d572(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = &PTR_FUN_14afff010;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar5;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  _Src = *(void **)(param_2 + 0x38);
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  uVar9 = *(undefined8 *)(param_2 + 0x70);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  param_1[0xe] = uVar9;
  param_1[0xb] = uVar7;
  param_1[0xc] = uVar8;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  return param_1;
}



// FUNCTION 14861d620 FUN_14861d620 body=111 status=ok
// SIG undefined FUN_14861d620(void)

void FUN_14861d620(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14affe6e0;
  plVar3 = (longlong *)param_1[7];
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
  FUN_14861d49b(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14861d690 FUN_14861d690 body=38 status=ok
// SIG undefined FUN_14861d690(void)

undefined8 FUN_14861d690(undefined8 param_1,int param_2)

{
  FUN_14861d620();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14861d6b6 FUN_14861d6b6 body=55 status=ok
// SIG undefined FUN_14861d6b6(void)

void FUN_14861d6b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54f10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54f10 = FUN_140002ddd(FUN_1464b00cc,uVar1,L"AvatarMaterialDriverDef");
  }
  return;
}



// FUNCTION 14861d6ee FUN_14861d6ee body=104 status=ok
// SIG undefined FUN_14861d6ee(void)

undefined8 FUN_14861d6ee(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1487e3638(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861d758 FUN_14861d758 body=28 status=ok
// SIG undefined FUN_14861d758(void)

undefined8 FUN_14861d758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14861d7ba FUN_14861d7ba body=83 status=ok
// SIG undefined FUN_14861d7ba(void)

undefined8 FUN_14861d7ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      FUN_140115bdc(param_2 + -0x20,param_3 + -0x20);
      FUN_140115bdc(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14861d836 FUN_14861d836 body=59 status=ok
// SIG undefined FUN_14861d836(void)

undefined8 FUN_14861d836(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861d87c FUN_14861d87c body=34 status=ok
// SIG undefined FUN_14861d87c(void)

void FUN_14861d87c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14861d8fa(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14861d8fa FUN_14861d8fa body=144 status=ok
// SIG undefined FUN_14861d8fa(void)

void FUN_14861d8fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14affedd0;
  param_1[6] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_140115c12(param_1 + 8,0);
  }
  param_1[7] = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[2] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_140115c12(param_1 + 4,0);
  }
  param_1[3] = 0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14861d98a FUN_14861d98a body=38 status=ok
// SIG undefined FUN_14861d98a(void)

undefined8 FUN_14861d98a(undefined8 param_1,int param_2)

{
  FUN_14861d8fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14861d9b0 FUN_14861d9b0 body=55 status=ok
// SIG undefined FUN_14861d9b0(void)

void FUN_14861d9b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54f28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54f28 = FUN_140002ddd(FUN_1464b0163,uVar1,L"AvatarOptionFeatureDisplayTags");
  }
  return;
}



// FUNCTION 14861da84 FUN_14861da84 body=59 status=ok
// SIG undefined FUN_14861da84(void)

undefined8 FUN_14861da84(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861db66 FUN_14861db66 body=70 status=ok
// SIG undefined FUN_14861db66(void)

undefined8 FUN_14861db66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14861dc96(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14861dbd4 FUN_14861dbd4 body=59 status=ok
// SIG undefined FUN_14861dbd4(void)

undefined8 FUN_14861dbd4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861dc1a FUN_14861dc1a body=34 status=ok
// SIG undefined FUN_14861dc1a(void)

void FUN_14861dc1a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14861def6(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14861dc96 FUN_14861dc96 body=95 status=ok
// SIG undefined FUN_14861dc96(void)

undefined8 * FUN_14861dc96(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14861dcf5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14861dd1e(param_1,iVar1);
      FUN_14861dd90(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14861dcf5 FUN_14861dcf5 body=41 status=ok
// SIG undefined FUN_14861dcf5(void)

void FUN_14861dcf5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148617258(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 14861dd1e FUN_14861dd1e body=114 status=ok
// SIG undefined FUN_14861dd1e(void)

void FUN_14861dd1e(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xa8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xa8,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14861dd90 FUN_14861dd90 body=60 status=ok
// SIG undefined FUN_14861dd90(void)

void FUN_14861dd90(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14861ddcc(param_1,param_2);
    param_1 = param_1 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return;
}



// FUNCTION 14861ddcc FUN_14861ddcc body=225 status=ok
// SIG undefined FUN_14861ddcc(void)

undefined8 * FUN_14861ddcc(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14aff0bf0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  _Src = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  FUN_14861deae(param_1 + 8,param_2 + 0x40);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_141262aba(param_1 + 0xb,param_2 + 0x58);
  return param_1;
}



// FUNCTION 14861deae FUN_14861deae body=71 status=ok
// SIG undefined FUN_14861deae(void)

undefined8 * FUN_14861deae(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14861def6 FUN_14861def6 body=56 status=ok
// SIG undefined FUN_14861def6(void)

void FUN_14861def6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14affee00;
  FUN_14861dcf5(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14861df2e FUN_14861df2e body=38 status=ok
// SIG undefined FUN_14861df2e(void)

undefined8 FUN_14861df2e(undefined8 param_1,int param_2)

{
  FUN_14861def6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14861df54 FUN_14861df54 body=55 status=ok
// SIG undefined FUN_14861df54(void)

void FUN_14861df54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54f58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54f58 = FUN_140002ddd(FUN_1464b028f,uVar1,L"AvatarOptionFeatureMaterials");
  }
  return;
}



// FUNCTION 14861dfcc FUN_14861dfcc body=83 status=ok
// SIG undefined FUN_14861dfcc(void)

undefined8 FUN_14861dfcc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14861932a(param_2,param_3);
      FUN_14861938a(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14861e048 FUN_14861e048 body=59 status=ok
// SIG undefined FUN_14861e048(void)

undefined8 FUN_14861e048(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861e08e FUN_14861e08e body=34 status=ok
// SIG undefined FUN_14861e08e(void)

void FUN_14861e08e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14861e10c(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14861e10c FUN_14861e10c body=82 status=ok
// SIG undefined FUN_14861e10c(void)

void FUN_14861e10c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14affee30;
  FUN_145ca6c63(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca6c64(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14861e15e FUN_14861e15e body=38 status=ok
// SIG undefined FUN_14861e15e(void)

undefined8 FUN_14861e15e(undefined8 param_1,int param_2)

{
  FUN_14861e10c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14861e184 FUN_14861e184 body=55 status=ok
// SIG undefined FUN_14861e184(void)

void FUN_14861e184(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54f70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54f70 = FUN_140002ddd(FUN_1464b0325,uVar1,L"AvatarOptionFeatureParams");
  }
  return;
}



// FUNCTION 14861e1fc FUN_14861e1fc body=83 status=ok
// SIG undefined FUN_14861e1fc(void)

undefined8 FUN_14861e1fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14861e33a(param_2,param_3);
      FUN_14861e39a(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14861e278 FUN_14861e278 body=59 status=ok
// SIG undefined FUN_14861e278(void)

undefined8 FUN_14861e278(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861e2be FUN_14861e2be body=34 status=ok
// SIG undefined FUN_14861e2be(void)

void FUN_14861e2be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14861e648(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14861e33a FUN_14861e33a body=95 status=ok
// SIG undefined FUN_14861e33a(void)

undefined8 * FUN_14861e33a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14861e3f9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14861e420(param_1,iVar1);
      FUN_14861e48f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14861e39a FUN_14861e39a body=95 status=ok
// SIG undefined FUN_14861e39a(void)

undefined8 * FUN_14861e39a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14861e59c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14861e59e(param_1,iVar1);
      FUN_14861e600(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14861e3f9 FUN_14861e3f9 body=38 status=ok
// SIG undefined FUN_14861e3f9(void)

void FUN_14861e3f9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14861829e(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 14861e420 FUN_14861e420 body=111 status=ok
// SIG undefined FUN_14861e420(void)

void FUN_14861e420(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14861e48f FUN_14861e48f body=52 status=ok
// SIG undefined FUN_14861e48f(void)

void FUN_14861e48f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14861e4c4(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 14861e4c4 FUN_14861e4c4 body=216 status=ok
// SIG undefined FUN_14861e4c4(void)

undefined8 * FUN_14861e4c4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_14aff16c0;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar6;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  pvVar2 = *(void **)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  uVar4 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 10) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar5;
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  pvVar2 = *(void **)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14861e59c FUN_14861e59c body=1 status=ok
// SIG undefined FUN_14861e59c(void)

void FUN_14861e59c(void)

{
  return;
}



// FUNCTION 14861e59e FUN_14861e59e body=98 status=ok
// SIG undefined FUN_14861e59e(void)

void FUN_14861e59e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861e600 FUN_14861e600 body=71 status=ok
// SIG undefined FUN_14861e600(void)

void FUN_14861e600(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = 0;
    do {
      *(undefined ***)(param_1 + lVar8) = &PTR_FUN_14aff1830;
      puVar1 = (undefined8 *)(param_2 + 8 + lVar8);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x18 + lVar8);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_2 + 0x28 + lVar8);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 8 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x18 + lVar8);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(param_1 + 0x28 + lVar8);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(param_1 + 0x38 + lVar8) = *(undefined8 *)(param_2 + 0x38 + lVar8);
      lVar8 = lVar8 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14861e648 FUN_14861e648 body=82 status=ok
// SIG undefined FUN_14861e648(void)

void FUN_14861e648(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14affee60;
  FUN_14861e59c(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14861e3f9(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14861e69a FUN_14861e69a body=38 status=ok
// SIG undefined FUN_14861e69a(void)

undefined8 FUN_14861e69a(undefined8 param_1,int param_2)

{
  FUN_14861e648();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14861e6c0 FUN_14861e6c0 body=55 status=ok
// SIG undefined FUN_14861e6c0(void)

void FUN_14861e6c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54f88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54f88 = FUN_140002ddd(FUN_1464b03bb,uVar1,L"AvatarOptionFeaturePresets");
  }
  return;
}



// FUNCTION 14861e788 FUN_14861e788 body=59 status=ok
// SIG undefined FUN_14861e788(void)

undefined8 FUN_14861e788(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861e860 FUN_14861e860 body=63 status=ok
// SIG undefined FUN_14861e860(void)

undefined1 FUN_14861e860(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14861eb5a(param_2,param_3);
    param_3 = param_3 + 0x318;
    param_2 = param_2 + 0x318;
  }
  return 1;
}



// FUNCTION 14861e8c8 FUN_14861e8c8 body=59 status=ok
// SIG undefined FUN_14861e8c8(void)

undefined8 FUN_14861e8c8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861e914 FUN_14861e914 body=38 status=ok
// SIG undefined FUN_14861e914(void)

void FUN_14861e914(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x318) == '\x01') {
    FUN_143cc7ec0(param_2);
    *(undefined1 *)(param_2 + 0x318) = 0;
  }
  return;
}



// FUNCTION 14861e988 FUN_14861e988 body=408 status=ok
// SIG undefined FUN_14861e988(void)

undefined8 * FUN_14861e988(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14affee90;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_14485c47a(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  memset(param_1 + 0x2c,0,0xb0);
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 2;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  return param_1;
}



// FUNCTION 14861eb20 FUN_14861eb20 body=38 status=ok
// SIG undefined FUN_14861eb20(void)

undefined8 FUN_14861eb20(undefined8 param_1,int param_2)

{
  FUN_143cc7ec0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14861eb5a FUN_14861eb5a body=616 status=ok
// SIG undefined FUN_14861eb5a(void)

longlong FUN_14861eb5a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_14861edc2();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  FUN_14861f2f8(param_1 + 0x30,param_2 + 0x30);
  FUN_14861ee28(param_1 + 0x80,param_2 + 0x80);
  uVar6 = *(undefined4 *)(param_2 + 0x94);
  uVar7 = *(undefined4 *)(param_2 + 0x98);
  uVar8 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar6;
  *(undefined4 *)(param_1 + 0x98) = uVar7;
  *(undefined4 *)(param_1 + 0x9c) = uVar8;
  FUN_14861ee80(param_1 + 0xa0,param_2 + 0xa0);
  uVar6 = *(undefined4 *)(param_2 + 0xb4);
  uVar7 = *(undefined4 *)(param_2 + 0xb8);
  uVar8 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = uVar6;
  *(undefined4 *)(param_1 + 0xb8) = uVar7;
  *(undefined4 *)(param_1 + 0xbc) = uVar8;
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  FUN_14861eed8(param_1 + 200,param_2 + 200);
  FUN_1406fa324(param_1 + 0xd8,param_2 + 0xd8);
  uVar6 = *(undefined4 *)(param_2 + 0xec);
  uVar7 = *(undefined4 *)(param_2 + 0xf0);
  uVar8 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar6;
  *(undefined4 *)(param_1 + 0xf0) = uVar7;
  *(undefined4 *)(param_1 + 0xf4) = uVar8;
  FUN_14861ef30(param_1 + 0xf8,param_2 + 0xf8);
  FUN_14861f5f8(param_1 + 0x108,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
  FUN_14861ef88(param_1 + 0x160,param_2 + 0x160);
  FUN_14861ef88(param_1 + 0x170,param_2 + 0x170);
  FUN_14861efe8(param_1 + 0x180,param_2 + 0x180);
  FUN_14861f040(param_1 + 400,param_2 + 400);
  FUN_14861f098(param_1 + 0x1a0,param_2 + 0x1a0);
  FUN_14861f0f0(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_14861f148(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_14861f1a0(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_14861f1f8(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_14861f250(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_14861fb56(param_1 + 0x200,param_2 + 0x200);
  FUN_1486197a4(param_1 + 0x250,param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  uVar6 = *(undefined4 *)(param_2 + 0x2a4);
  uVar7 = *(undefined4 *)(param_2 + 0x2a8);
  uVar8 = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x2a4) = uVar6;
  *(undefined4 *)(param_1 + 0x2a8) = uVar7;
  *(undefined4 *)(param_1 + 0x2ac) = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0x2b8);
  lVar4 = *(longlong *)(param_2 + 0x2c0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar3;
  *(longlong *)(param_1 + 0x2c0) = lVar4;
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
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  if (param_2 != param_1) {
    FUN_14861fccc(param_1 + 0x2d0,param_2 + 0x2d0);
  }
  FUN_1457d258e(param_1 + 0x2e8,param_2 + 0x2e8);
  FUN_1402ae23a(param_1 + 0x2f8,param_2 + 0x2f8);
  FUN_14861f2a8(param_1 + 0x308,param_2 + 0x308);
  return param_1;
}



// FUNCTION 14861edc2 FUN_14861edc2 body=101 status=ok
// SIG undefined FUN_14861edc2(void)

longlong FUN_14861edc2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(longlong *)(param_1 + 0x18) = lVar4;
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
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  return param_1;
}



// FUNCTION 14861ee28 FUN_14861ee28 body=88 status=ok
// SIG undefined FUN_14861ee28(void)

undefined8 * FUN_14861ee28(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861f470(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861ee80 FUN_14861ee80 body=88 status=ok
// SIG undefined FUN_14861ee80(void)

undefined8 * FUN_14861ee80(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861f4d2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861eed8 FUN_14861eed8 body=88 status=ok
// SIG undefined FUN_14861eed8(void)

undefined8 * FUN_14861eed8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861f534(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861ef30 FUN_14861ef30 body=88 status=ok
// SIG undefined FUN_14861ef30(void)

undefined8 * FUN_14861ef30(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861f596(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861ef88 FUN_14861ef88 body=95 status=ok
// SIG undefined FUN_14861ef88(void)

undefined8 * FUN_14861ef88(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14861f76d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14861f7b6(param_1,iVar1);
      FUN_14861f818(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14861efe8 FUN_14861efe8 body=88 status=ok
// SIG undefined FUN_14861efe8(void)

undefined8 * FUN_14861efe8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861f846(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861f040 FUN_14861f040 body=88 status=ok
// SIG undefined FUN_14861f040(void)

undefined8 * FUN_14861f040(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861f8a8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861f098 FUN_14861f098 body=88 status=ok
// SIG undefined FUN_14861f098(void)

undefined8 * FUN_14861f098(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861f90a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861f0f0 FUN_14861f0f0 body=88 status=ok
// SIG undefined FUN_14861f0f0(void)

undefined8 * FUN_14861f0f0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861f96c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861f148 FUN_14861f148 body=88 status=ok
// SIG undefined FUN_14861f148(void)

undefined8 * FUN_14861f148(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861f9ce(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861f1a0 FUN_14861f1a0 body=88 status=ok
// SIG undefined FUN_14861f1a0(void)

undefined8 * FUN_14861f1a0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861fa30(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861f1f8 FUN_14861f1f8 body=88 status=ok
// SIG undefined FUN_14861f1f8(void)

undefined8 * FUN_14861f1f8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861fa92(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861f250 FUN_14861f250 body=88 status=ok
// SIG undefined FUN_14861f250(void)

undefined8 * FUN_14861f250(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861faf4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861f2a8 FUN_14861f2a8 body=79 status=ok
// SIG undefined FUN_14861f2a8(void)

undefined8 * FUN_14861f2a8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861fdfe(param_1,iVar1);
      FUN_14861fe60(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14861f2f8 FUN_14861f2f8 body=122 status=ok
// SIG undefined FUN_14861f2f8(void)

longlong FUN_14861f2f8(longlong param_1,longlong param_2)

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
    FUN_14861f372(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14861f372 FUN_14861f372 body=124 status=ok
// SIG undefined FUN_14861f372(void)

undefined8 * FUN_14861f372(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14861f3ee(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406245f8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x1c);
    }
  }
  return param_1;
}



// FUNCTION 14861f3ee FUN_14861f3ee body=128 status=ok
// SIG undefined FUN_14861f3ee(void)

void FUN_14861f3ee(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14861f470 FUN_14861f470 body=98 status=ok
// SIG undefined FUN_14861f470(void)

void FUN_14861f470(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861f4d2 FUN_14861f4d2 body=98 status=ok
// SIG undefined FUN_14861f4d2(void)

void FUN_14861f4d2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861f534 FUN_14861f534 body=98 status=ok
// SIG undefined FUN_14861f534(void)

void FUN_14861f534(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861f596 FUN_14861f596 body=98 status=ok
// SIG undefined FUN_14861f596(void)

void FUN_14861f596(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861f5f8 FUN_14861f5f8 body=122 status=ok
// SIG undefined FUN_14861f5f8(void)

longlong FUN_14861f5f8(longlong param_1,longlong param_2)

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
    FUN_14861f672(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14861f672 FUN_14861f672 body=121 status=ok
// SIG undefined FUN_14861f672(void)

undefined8 * FUN_14861f672(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14861f6ec(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 14861f6ec FUN_14861f6ec body=128 status=ok
// SIG undefined FUN_14861f6ec(void)

void FUN_14861f6ec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14861f76d FUN_14861f76d body=73 status=ok
// SIG undefined FUN_14861f76d(void)

void FUN_14861f76d(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14861f7b6 FUN_14861f7b6 body=98 status=ok
// SIG undefined FUN_14861f7b6(void)

void FUN_14861f7b6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861f818 FUN_14861f818 body=45 status=ok
// SIG undefined FUN_14861f818(void)

void FUN_14861f818(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14861f846 FUN_14861f846 body=98 status=ok
// SIG undefined FUN_14861f846(void)

void FUN_14861f846(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861f8a8 FUN_14861f8a8 body=98 status=ok
// SIG undefined FUN_14861f8a8(void)

void FUN_14861f8a8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861f90a FUN_14861f90a body=98 status=ok
// SIG undefined FUN_14861f90a(void)

void FUN_14861f90a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861f96c FUN_14861f96c body=98 status=ok
// SIG undefined FUN_14861f96c(void)

void FUN_14861f96c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861f9ce FUN_14861f9ce body=98 status=ok
// SIG undefined FUN_14861f9ce(void)

void FUN_14861f9ce(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861fa30 FUN_14861fa30 body=98 status=ok
// SIG undefined FUN_14861fa30(void)

void FUN_14861fa30(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861fa92 FUN_14861fa92 body=98 status=ok
// SIG undefined FUN_14861fa92(void)

void FUN_14861fa92(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861faf4 FUN_14861faf4 body=98 status=ok
// SIG undefined FUN_14861faf4(void)

void FUN_14861faf4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861fb56 FUN_14861fb56 body=122 status=ok
// SIG undefined FUN_14861fb56(void)

longlong FUN_14861fb56(longlong param_1,longlong param_2)

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
    FUN_14861fbd0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14861fbd0 FUN_14861fbd0 body=121 status=ok
// SIG undefined FUN_14861fbd0(void)

undefined8 * FUN_14861fbd0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14861fc4a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 14861fc4a FUN_14861fc4a body=128 status=ok
// SIG undefined FUN_14861fc4a(void)

void FUN_14861fc4a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14861fccc FUN_14861fccc body=304 status=ok
// SIG undefined FUN_14861fccc(void)

void FUN_14861fccc(undefined8 param_1,longlong *param_2)

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



// FUNCTION 14861fdfe FUN_14861fdfe body=98 status=ok
// SIG undefined FUN_14861fdfe(void)

void FUN_14861fdfe(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861fe60 FUN_14861fe60 body=82 status=ok
// SIG undefined FUN_14861fe60(void)

void FUN_14861fe60(longlong param_1,longlong param_2,int param_3)

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
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14861ff28 FUN_14861ff28 body=48 status=ok
// SIG undefined FUN_14861ff28(void)

void FUN_14861ff28(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14861ff6e FUN_14861ff6e body=54 status=ok
// SIG undefined FUN_14861ff6e(void)

undefined1 FUN_14861ff6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148620068(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 14861ffcc FUN_14861ffcc body=59 status=ok
// SIG undefined FUN_14861ffcc(void)

undefined8 FUN_14861ffcc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148620068 FUN_148620068 body=95 status=ok
// SIG undefined FUN_148620068(void)

undefined8 * FUN_148620068(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_2 != param_1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  FUN_147f6e0a0(param_1 + 7,param_2 + 7);
  uVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar4;
  return param_1;
}



// FUNCTION 1486200c8 FUN_1486200c8 body=52 status=ok
// SIG undefined FUN_1486200c8(void)

void FUN_1486200c8(longlong param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1486200fc FUN_1486200fc body=32 status=ok
// SIG undefined FUN_1486200fc(void)

void FUN_1486200fc(undefined8 param_1,longlong param_2)

{
  FUN_140f23ff6(param_2);
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  return;
}



// FUNCTION 148620156 FUN_148620156 body=59 status=ok
// SIG undefined FUN_148620156(void)

undefined8 FUN_148620156(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486201a2 FUN_1486201a2 body=38 status=ok
// SIG undefined FUN_1486201a2(void)

void FUN_1486201a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_1409dee82(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 14862022c FUN_14862022c body=120 status=ok
// SIG undefined FUN_14862022c(void)

void FUN_14862022c(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x58);
  if (*(longlong *)(lVar1 + 0x38 + (ulonglong)param_2 * 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x58),(longlong)iVar3 * 0x58);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1486202a4 FUN_1486202a4 body=111 status=ok
// SIG undefined FUN_1486202a4(void)

void FUN_1486202a4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148620313 FUN_148620313 body=52 status=ok
// SIG undefined FUN_148620313(void)

void FUN_148620313(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148620348(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 148620348 FUN_148620348 body=208 status=ok
// SIG undefined FUN_148620348(void)

undefined8 * FUN_148620348(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  pvVar2 = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  pvVar2 = *(void **)(param_2 + 0x38);
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_14004d600(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = uVar6;
  return param_1;
}



// FUNCTION 148620448 FUN_148620448 body=63 status=ok
// SIG undefined FUN_148620448(void)

undefined1 FUN_148620448(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148620570(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 1486204b0 FUN_1486204b0 body=59 status=ok
// SIG undefined FUN_1486204b0(void)

undefined8 FUN_1486204b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486204fc FUN_1486204fc body=38 status=ok
// SIG undefined FUN_1486204fc(void)

void FUN_1486204fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_14136963c(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 148620570 FUN_148620570 body=268 status=ok
// SIG undefined FUN_148620570(void)

undefined4 * FUN_148620570(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 6) == '\x01') {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 6) != '\x01') goto LAB_148620581;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 6) = uVar5;
  }
LAB_148620581:
  param_1[9] = param_2[9];
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 7);
  FUN_144881636(param_1 + 10,param_2 + 10);
  FUN_144881636(param_1 + 0x1e,param_2 + 0x1e);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  FUN_14862067c(param_1 + 0x34,param_2 + 0x34);
  if (param_2 == param_1) {
    *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(param_2 + 0x52);
    uVar1 = param_2[0x4f];
    uVar2 = param_2[0x50];
    uVar3 = param_2[0x51];
    param_1[0x4e] = param_2[0x4e];
    param_1[0x4f] = uVar1;
    param_1[0x50] = uVar2;
    param_1[0x51] = uVar3;
  }
  else {
    FUN_148620978(param_1 + 0x48,param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(param_2 + 0x52);
    uVar1 = param_2[0x4f];
    uVar2 = param_2[0x50];
    uVar3 = param_2[0x51];
    param_1[0x4e] = param_2[0x4e];
    param_1[0x4f] = uVar1;
    param_1[0x50] = uVar2;
    param_1[0x51] = uVar3;
    FUN_148620aaa(param_1 + 0x54,param_2 + 0x54);
  }
  FUN_148620bdc(param_1 + 0x5a,param_2 + 0x5a);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(param_2 + 0x6e);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  return param_1;
}



// FUNCTION 14862067c FUN_14862067c body=122 status=ok
// SIG undefined FUN_14862067c(void)

longlong FUN_14862067c(longlong param_1,longlong param_2)

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
    FUN_1486206f6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486206f6 FUN_1486206f6 body=255 status=ok
// SIG undefined FUN_1486206f6(void)

longlong * FUN_1486206f6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e74648(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_14021b4e8(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_1486207f6(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x40 + lVar6) = *(undefined8 *)(lVar2 + 0x40 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x48;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1486207f6 FUN_1486207f6 body=196 status=ok
// SIG undefined FUN_1486207f6(void)

undefined8 * FUN_1486207f6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  uVar3 = param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1486208ba(param_1 + 5,iVar1,0);
    FUN_148620929(param_1[5],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 1486208ba FUN_1486208ba body=111 status=ok
// SIG undefined FUN_1486208ba(void)

void FUN_1486208ba(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148620929 FUN_148620929 body=78 status=ok
// SIG undefined FUN_148620929(void)

void FUN_148620929(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_1447a97f4(param_1,param_2);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148620978 FUN_148620978 body=304 status=ok
// SIG undefined FUN_148620978(void)

void FUN_148620978(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148620aaa FUN_148620aaa body=304 status=ok
// SIG undefined FUN_148620aaa(void)

void FUN_148620aaa(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148620bdc FUN_148620bdc body=122 status=ok
// SIG undefined FUN_148620bdc(void)

longlong FUN_148620bdc(longlong param_1,longlong param_2)

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
    FUN_148620c56(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148620c56 FUN_148620c56 body=119 status=ok
// SIG undefined FUN_148620c56(void)

undefined8 * FUN_148620c56(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_143c34d56(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 148620d5a FUN_148620d5a body=54 status=ok
// SIG undefined FUN_148620d5a(void)

undefined1 FUN_148620d5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148620e92(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148620db8 FUN_148620db8 body=59 status=ok
// SIG undefined FUN_148620db8(void)

undefined8 FUN_148620db8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148620dfe FUN_148620dfe body=32 status=ok
// SIG undefined FUN_148620dfe(void)

void FUN_148620dfe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_14111b118(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148620e6c FUN_148620e6c body=38 status=ok
// SIG undefined FUN_148620e6c(void)

undefined8 FUN_148620e6c(undefined8 param_1,int param_2)

{
  FUN_14111b118();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148620e92 FUN_148620e92 body=188 status=ok
// SIG undefined FUN_148620e92(void)

longlong FUN_148620e92(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1 + 0x20,param_2 + 0x20);
  }
  FUN_1418444fa(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
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
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 148620f84 FUN_148620f84 body=54 status=ok
// SIG undefined FUN_148620f84(void)

undefined1 FUN_148620f84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148620fe2 FUN_148620fe2 body=59 status=ok
// SIG undefined FUN_148620fe2(void)

undefined8 FUN_148620fe2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148621028 FUN_148621028 body=37 status=ok
// SIG undefined FUN_148621028(void)

void FUN_148621028(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14862110e FUN_14862110e body=59 status=ok
// SIG undefined FUN_14862110e(void)

undefined8 FUN_14862110e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486211ae FUN_1486211ae body=29 status=ok
// SIG undefined FUN_1486211ae(void)

undefined8 FUN_1486211ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486211cc FUN_1486211cc body=55 status=ok
// SIG undefined FUN_1486211cc(void)

void FUN_1486211cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb550d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb550d0 = FUN_140002ddd(FUN_1464b091f,uVar1,L"AvatarRequirementsHandler");
  }
  return;
}



// FUNCTION 148621232 FUN_148621232 body=104 status=ok
// SIG undefined FUN_148621232(void)

undefined8 FUN_148621232(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      *(undefined8 *)(param_2 + -0x40) = *(undefined8 *)(param_3 + -0x40);
      FUN_140115bdc(param_2 + -0x38,param_3 + -0x38);
      *(undefined2 *)(param_2 + -0x18) = *(undefined2 *)(param_3 + -0x18);
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486212c2 FUN_1486212c2 body=59 status=ok
// SIG undefined FUN_1486212c2(void)

undefined8 FUN_1486212c2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148621308 FUN_148621308 body=34 status=ok
// SIG undefined FUN_148621308(void)

void FUN_148621308(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148621378(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148621378 FUN_148621378 body=134 status=ok
// SIG undefined FUN_148621378(void)

void FUN_148621378(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 8) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_140115c12(param_1 + 0x18,0);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148621434 FUN_148621434 body=87 status=ok
// SIG undefined FUN_148621434(void)

undefined1 FUN_148621434(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined1 *)(param_3 + 0x18);
    puVar1 = (undefined1 *)(param_2 + 0x18);
    do {
      FUN_141289ada(puVar1 + -0x10,puVar2 + -0x10);
      *puVar1 = *puVar2;
      FUN_148621562(puVar1 + 8,puVar2 + 8);
      puVar1[0x18] = puVar2[0x18];
      puVar2 = puVar2 + 0x38;
      puVar1 = puVar1 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486214b4 FUN_1486214b4 body=59 status=ok
// SIG undefined FUN_1486214b4(void)

undefined8 FUN_1486214b4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486214fa FUN_1486214fa body=34 status=ok
// SIG undefined FUN_1486214fa(void)

void FUN_1486214fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14862172a(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148621562 FUN_148621562 body=95 status=ok
// SIG undefined FUN_148621562(void)

undefined8 * FUN_148621562(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1486215c1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486215e8(param_1,iVar1);
      FUN_148621657(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486215c1 FUN_1486215c1 body=38 status=ok
// SIG undefined FUN_1486215c1(void)

void FUN_1486215c1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148621378(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 1486215e8 FUN_1486215e8 body=111 status=ok
// SIG undefined FUN_1486215e8(void)

void FUN_1486215e8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148621657 FUN_148621657 body=52 status=ok
// SIG undefined FUN_148621657(void)

void FUN_148621657(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14862168c(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 14862168c FUN_14862168c body=157 status=ok
// SIG undefined FUN_14862168c(void)

undefined8 * FUN_14862168c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  FUN_1406022be(param_1 + 1,param_2 + 1);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  _Src = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1401f3db8(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 14862172a FUN_14862172a body=71 status=ok
// SIG undefined FUN_14862172a(void)

void FUN_14862172a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14affe710;
  FUN_1486215c1(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148621772 FUN_148621772 body=38 status=ok
// SIG undefined FUN_148621772(void)

undefined8 FUN_148621772(undefined8 param_1,int param_2)

{
  FUN_14862172a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148621798 FUN_148621798 body=55 status=ok
// SIG undefined FUN_148621798(void)

void FUN_148621798(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55100 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55100 = FUN_140002ddd(FUN_1464b0a14,uVar1,L"AvatarRequirementsDef");
  }
  return;
}



// FUNCTION 1486217d0 FUN_1486217d0 body=104 status=ok
// SIG undefined FUN_1486217d0(void)

undefined8 FUN_1486217d0(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1487e5da0(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14862183a FUN_14862183a body=28 status=ok
// SIG undefined FUN_14862183a(void)

undefined8 FUN_14862183a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486218ac FUN_1486218ac body=75 status=ok
// SIG undefined FUN_1486218ac(void)

undefined8 FUN_1486218ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148621920 FUN_148621920 body=59 status=ok
// SIG undefined FUN_148621920(void)

undefined8 FUN_148621920(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148621966 FUN_148621966 body=38 status=ok
// SIG undefined FUN_148621966(void)

void FUN_148621966(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148621a34 FUN_148621a34 body=81 status=ok
// SIG undefined FUN_148621a34(void)

undefined1 FUN_148621a34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      FUN_1418444fa(param_2 + -0x18,param_3 + -0x18);
      FUN_148621b46(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148621aae FUN_148621aae body=59 status=ok
// SIG undefined FUN_148621aae(void)

undefined8 FUN_148621aae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148621b46 FUN_148621b46 body=93 status=ok
// SIG undefined FUN_148621b46(void)

undefined8 * FUN_148621b46(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14096d529(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148621ba4(param_1,iVar1);
      FUN_148621c17(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148621ba4 FUN_148621ba4 body=115 status=ok
// SIG undefined FUN_148621ba4(void)

void FUN_148621ba4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148621c17 FUN_148621c17 body=144 status=ok
// SIG undefined FUN_148621c17(void)

void FUN_148621c17(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148621ca8 FUN_148621ca8 body=60 status=ok
// SIG undefined FUN_148621ca8(void)

void FUN_148621ca8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 7) == '\x01') {
    *param_1 = &PTR_FUN_14affcd20;
    FUN_14096d529(param_1[5],*(undefined4 *)(param_1 + 6));
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 148621d18 FUN_148621d18 body=94 status=ok
// SIG undefined FUN_148621d18(void)

undefined8 FUN_148621d18(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148621d9e FUN_148621d9e body=59 status=ok
// SIG undefined FUN_148621d9e(void)

undefined8 FUN_148621d9e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148621de4 FUN_148621de4 body=48 status=ok
// SIG undefined FUN_148621de4(void)

void FUN_148621de4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14affef50;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148621e70 FUN_148621e70 body=57 status=ok
// SIG undefined FUN_148621e70(void)

undefined8 * FUN_148621e70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14affef50;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148621eaa FUN_148621eaa body=55 status=ok
// SIG undefined FUN_148621eaa(void)

void FUN_148621eaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55190 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55190 = FUN_140002ddd(FUN_1464b0d6b,uVar1,L"AvatarOptionFeatureSkelMesh");
  }
  return;
}



// FUNCTION 148621f26 FUN_148621f26 body=78 status=ok
// SIG undefined FUN_148621f26(void)

undefined8 FUN_148621f26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14862205e(param_2,param_3);
      *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148621f9c FUN_148621f9c body=59 status=ok
// SIG undefined FUN_148621f9c(void)

undefined8 FUN_148621f9c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148621fe2 FUN_148621fe2 body=34 status=ok
// SIG undefined FUN_148621fe2(void)

void FUN_148621fe2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1486221b6(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14862205e FUN_14862205e body=93 status=ok
// SIG undefined FUN_14862205e(void)

undefined8 * FUN_14862205e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140925a98(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486220bc(param_1,iVar1);
      FUN_14862212f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486220bc FUN_1486220bc body=115 status=ok
// SIG undefined FUN_1486220bc(void)

void FUN_1486220bc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14862212f FUN_14862212f body=134 status=ok
// SIG undefined FUN_14862212f(void)

void FUN_14862212f(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 1486221b6 FUN_1486221b6 body=56 status=ok
// SIG undefined FUN_1486221b6(void)

void FUN_1486221b6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14affef80;
  FUN_140925a98(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486221ee FUN_1486221ee body=38 status=ok
// SIG undefined FUN_1486221ee(void)

undefined8 FUN_1486221ee(undefined8 param_1,int param_2)

{
  FUN_1486221b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148622214 FUN_148622214 body=55 status=ok
// SIG undefined FUN_148622214(void)

void FUN_148622214(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb551a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb551a8 = FUN_140002ddd(FUN_1464b0e01,uVar1,L"AvatarOptionFeatureSkelMeshBundle");
  }
  return;
}



// FUNCTION 148622290 FUN_148622290 body=86 status=ok
// SIG undefined FUN_148622290(void)

undefined8 FUN_148622290(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
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



// FUNCTION 14862230e FUN_14862230e body=59 status=ok
// SIG undefined FUN_14862230e(void)

undefined8 FUN_14862230e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148622354 FUN_148622354 body=48 status=ok
// SIG undefined FUN_148622354(void)

void FUN_148622354(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14affefb0;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 1486223e0 FUN_1486223e0 body=57 status=ok
// SIG undefined FUN_1486223e0(void)

undefined8 * FUN_1486223e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14affefb0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862241a FUN_14862241a body=55 status=ok
// SIG undefined FUN_14862241a(void)

void FUN_14862241a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb551c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb551c0 = FUN_140002ddd(FUN_1464b0e97,uVar1,L"AvatarOptionFeatureAttachableBody");
  }
  return;
}



// FUNCTION 148622496 FUN_148622496 body=86 status=ok
// SIG undefined FUN_148622496(void)

undefined8 FUN_148622496(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1404215e2(param_2,param_3);
      param_3 = param_3 + 0x1f8;
      param_2 = param_2 + 0x1f8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148622514 FUN_148622514 body=59 status=ok
// SIG undefined FUN_148622514(void)

undefined8 FUN_148622514(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148622560 FUN_148622560 body=49 status=ok
// SIG undefined FUN_148622560(void)

void FUN_148622560(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3f) == '\x01') {
    *param_2 = &PTR_FUN_14affefe0;
    FUN_1403c4c0a(param_2 + 3);
    *(undefined1 *)(param_2 + 0x3f) = 0;
  }
  return;
}



// FUNCTION 1486225ee FUN_1486225ee body=52 status=ok
// SIG undefined FUN_1486225ee(void)

undefined8 * FUN_1486225ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14affefe0;
  FUN_1403c4c0a(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148622622 FUN_148622622 body=55 status=ok
// SIG undefined FUN_148622622(void)

void FUN_148622622(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb551d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb551d8 = FUN_140002ddd(FUN_1464b0f2d,uVar1,L"AvatarOptionFeatureForwardDynamics");
  }
  return;
}



// FUNCTION 1486226c4 FUN_1486226c4 body=59 status=ok
// SIG undefined FUN_1486226c4(void)

undefined8 FUN_1486226c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148622764 FUN_148622764 body=55 status=ok
// SIG undefined FUN_148622764(void)

void FUN_148622764(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55228 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55228 = FUN_140002ddd(FUN_1464b10c3,uVar1,L"BalancedActorContextResolver");
  }
  return;
}



// FUNCTION 148622858 FUN_148622858 body=59 status=ok
// SIG undefined FUN_148622858(void)

undefined8 FUN_148622858(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486228e8 FUN_1486228e8 body=55 status=ok
// SIG undefined FUN_1486228e8(void)

void FUN_1486228e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55240 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55240 = FUN_140002ddd(FUN_1464b1159,uVar1,L"BalancedActorData");
  }
  return;
}



// FUNCTION 148622950 FUN_148622950 body=86 status=ok
// SIG undefined FUN_148622950(void)

undefined8 FUN_148622950(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486229ce FUN_1486229ce body=59 status=ok
// SIG undefined FUN_1486229ce(void)

undefined8 FUN_1486229ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148622a14 FUN_148622a14 body=48 status=ok
// SIG undefined FUN_148622a14(void)

void FUN_148622a14(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14affd700;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 148622a94 FUN_148622a94 body=55 status=ok
// SIG undefined FUN_148622a94(void)

void FUN_148622a94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55258 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55258 = FUN_140002ddd(FUN_1464b11f1,uVar1,L"BalanceDataTableValueResolver");
  }
  return;
}



// FUNCTION 148622afa FUN_148622afa body=63 status=ok
// SIG undefined FUN_148622afa(void)

undefined1 FUN_148622afa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148622d38(param_2,param_3);
    param_3 = param_3 + 0x198;
    param_2 = param_2 + 0x198;
  }
  return 1;
}



// FUNCTION 148622b62 FUN_148622b62 body=59 status=ok
// SIG undefined FUN_148622b62(void)

undefined8 FUN_148622b62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148622cee FUN_148622cee body=57 status=ok
// SIG undefined FUN_148622cee(void)

void FUN_148622cee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55270 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55270 = FUN_140002ddd(FUN_1464b1287,uVar1,L"BalanceFormulaValueResolver");
  }
  return;
}



// FUNCTION 148622d38 FUN_148622d38 body=102 status=ok
// SIG undefined FUN_148622d38(void)

longlong FUN_148622d38(longlong param_1,longlong param_2)

{
  FUN_140d02432(param_1 + 8,param_2 + 8);
  FUN_140d02432(param_1 + 0x58,param_2 + 0x58);
  FUN_140d02432(param_1 + 0xa8,param_2 + 0xa8);
  FUN_140d02432(param_1 + 0xf8,param_2 + 0xf8);
  FUN_140d02432(param_1 + 0x148,param_2 + 0x148);
  return param_1;
}



// FUNCTION 148622e20 FUN_148622e20 body=59 status=ok
// SIG undefined FUN_148622e20(void)

undefined8 FUN_148622e20(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148622ec0 FUN_148622ec0 body=55 status=ok
// SIG undefined FUN_148622ec0(void)

void FUN_148622ec0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb552a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb552a0 = FUN_140002ddd(FUN_1464b134d,uVar1,L"BalanceStateValueResolver");
  }
  return;
}



// FUNCTION 148622f76 FUN_148622f76 body=123 status=ok
// SIG undefined FUN_148622f76(void)

undefined8 FUN_148622f76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_14862318e(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(param_2 + 0x25 + lVar6) = *(undefined8 *)(param_3 + 0x25 + lVar6);
      *(undefined4 *)(param_2 + 0x30 + lVar6) = *(undefined4 *)(param_3 + 0x30 + lVar6);
      *(undefined1 *)(param_2 + 0x34 + lVar6) = *(undefined1 *)(param_3 + 0x34 + lVar6);
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14862301a FUN_14862301a body=59 status=ok
// SIG undefined FUN_14862301a(void)

undefined8 FUN_14862301a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148623060 FUN_148623060 body=32 status=ok
// SIG undefined FUN_148623060(void)

void FUN_148623060(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1486230ce FUN_1486230ce body=38 status=ok
// SIG undefined FUN_1486230ce(void)

undefined8 FUN_1486230ce(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486230f4 FUN_1486230f4 body=55 status=ok
// SIG undefined FUN_1486230f4(void)

void FUN_1486230f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb552b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb552b8 = FUN_140002ddd(FUN_1464b13e3,uVar1,L"TimedTriggerBehaviorMod");
  }
  return;
}



// FUNCTION 148623132 FUN_148623132 body=38 status=ok
// SIG undefined FUN_148623132(void)

undefined8 FUN_148623132(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148623158 FUN_148623158 body=38 status=ok
// SIG undefined FUN_148623158(void)

undefined8 FUN_148623158(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14862318e FUN_14862318e body=93 status=ok
// SIG undefined FUN_14862318e(void)

undefined8 * FUN_14862318e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1403d9eef(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486231ec(param_1,iVar1);
      FUN_14862325f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486231ec FUN_1486231ec body=115 status=ok
// SIG undefined FUN_1486231ec(void)

void FUN_1486231ec(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14862325f FUN_14862325f body=52 status=ok
// SIG undefined FUN_14862325f(void)

void FUN_14862325f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148623294(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148623294 FUN_148623294 body=118 status=ok
// SIG undefined FUN_148623294(void)

undefined8 * FUN_148623294(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar3 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1407fb7e8(param_1 + 3,iVar1,0);
    FUN_1406b363d(param_1[3],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 14862330c FUN_14862330c body=37 status=ok
// SIG undefined FUN_14862330c(void)

void FUN_14862330c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd0);
  FUN_143c3505a(param_2);
  return;
}



// FUNCTION 14862335e FUN_14862335e body=63 status=ok
// SIG undefined FUN_14862335e(void)

undefined1 FUN_14862335e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486234e4(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 1486233c6 FUN_1486233c6 body=59 status=ok
// SIG undefined FUN_1486233c6(void)

undefined8 FUN_1486233c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148623412 FUN_148623412 body=38 status=ok
// SIG undefined FUN_148623412(void)

void FUN_148623412(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148623486 FUN_148623486 body=38 status=ok
// SIG undefined FUN_148623486(void)

undefined8 FUN_148623486(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486234ac FUN_1486234ac body=55 status=ok
// SIG undefined FUN_1486234ac(void)

void FUN_1486234ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb552d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb552d0 = FUN_140002ddd(FUN_1464b1479,uVar1,L"BinderBehaviorMod_AddChildActor");
  }
  return;
}



// FUNCTION 1486234e4 FUN_1486234e4 body=109 status=ok
// SIG undefined FUN_1486234e4(void)

longlong FUN_1486234e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
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
  puVar2 = (undefined8 *)(param_2 + 0x48);
  puVar3 = (undefined8 *)(param_1 + 0x48);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}



// FUNCTION 148623552 FUN_148623552 body=109 status=ok
// SIG undefined FUN_148623552(void)

void FUN_148623552(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x98);
  *param_2 = &PTR_FUN_14affe080;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0x3ff0000000000000;
  param_2[0xf] = 0x3ff0000000000000;
  param_2[0x10] = 0x3ff0000000000000;
  param_2[0x11] = 0;
  *(undefined4 *)((longlong)param_2 + 0x94) = 0;
  return;
}



// FUNCTION 14862363e FUN_14862363e body=109 status=ok
// SIG undefined FUN_14862363e(void)

undefined1 FUN_14862363e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_14862318e(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x18 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x18 + lVar2);
      for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar2 = lVar2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486236d4 FUN_1486236d4 body=59 status=ok
// SIG undefined FUN_1486236d4(void)

undefined8 FUN_1486236d4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148623720 FUN_148623720 body=38 status=ok
// SIG undefined FUN_148623720(void)

void FUN_148623720(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148623794 FUN_148623794 body=38 status=ok
// SIG undefined FUN_148623794(void)

undefined8 FUN_148623794(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486237ba FUN_1486237ba body=55 status=ok
// SIG undefined FUN_1486237ba(void)

void FUN_1486237ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb552e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb552e8 = FUN_140002ddd(FUN_1464b150f,uVar1,L"BinderBehaviorMod_AddSpawner");
  }
  return;
}



// FUNCTION 14862384c FUN_14862384c body=91 status=ok
// SIG undefined FUN_14862384c(void)

undefined8 FUN_14862384c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_14862318e(param_2 + -0x28,param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486238d0 FUN_1486238d0 body=59 status=ok
// SIG undefined FUN_1486238d0(void)

undefined8 FUN_1486238d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148623916 FUN_148623916 body=56 status=ok
// SIG undefined FUN_148623916(void)

void FUN_148623916(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14affe220;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14862399c FUN_14862399c body=55 status=ok
// SIG undefined FUN_14862399c(void)

void FUN_14862399c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55300 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55300 = FUN_140002ddd(FUN_1464b15a5,uVar1,L"BinderBehaviorMod_AttachBody");
  }
  return;
}



// FUNCTION 148623a30 FUN_148623a30 body=54 status=ok
// SIG undefined FUN_148623a30(void)

undefined1 FUN_148623a30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148623ba0(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148623a8e FUN_148623a8e body=59 status=ok
// SIG undefined FUN_148623a8e(void)

undefined8 FUN_148623a8e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148623ad4 FUN_148623ad4 body=32 status=ok
// SIG undefined FUN_148623ad4(void)

void FUN_148623ad4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_141844550(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148623b42 FUN_148623b42 body=38 status=ok
// SIG undefined FUN_148623b42(void)

undefined8 FUN_148623b42(undefined8 param_1,int param_2)

{
  FUN_141844550();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148623b68 FUN_148623b68 body=55 status=ok
// SIG undefined FUN_148623b68(void)

void FUN_148623b68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55318 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55318 = FUN_140002ddd(FUN_1464b163b,uVar1,L"BinderBehaviorMod_DeathListener");
  }
  return;
}


