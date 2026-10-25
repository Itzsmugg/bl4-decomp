// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1479315fc FUN_1479315fc body=55 status=ok
// SIG undefined FUN_1479315fc(void)

void FUN_1479315fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacc870 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacc870 = FUN_140002ddd(FUN_1463a7a6b,uVar1,L"AnimNode_SingleNode");
  }
  return;
}



// FUNCTION 14793170a FUN_14793170a body=59 status=ok
// SIG undefined FUN_14793170a(void)

undefined8 FUN_14793170a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479317e0 FUN_1479317e0 body=63 status=ok
// SIG undefined FUN_1479317e0(void)

undefined1 FUN_1479317e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1479319d2(param_2,param_3);
    param_3 = param_3 + 0x9b0;
    param_2 = param_2 + 0x9b0;
  }
  return 1;
}



// FUNCTION 147931848 FUN_147931848 body=59 status=ok
// SIG undefined FUN_147931848(void)

undefined8 FUN_147931848(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147931894 FUN_147931894 body=38 status=ok
// SIG undefined FUN_147931894(void)

void FUN_147931894(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x9b0) == '\x01') {
    FUN_140c078e4(param_2);
    *(undefined1 *)(param_2 + 0x9b0) = 0;
  }
  return;
}



// FUNCTION 147931908 FUN_147931908 body=202 status=ok
// SIG undefined FUN_147931908(void)

undefined8 * FUN_147931908(undefined8 *param_1)

{
  FUN_140b4884c();
  *param_1 = &PTR_FUN_14a7c7bb0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8dc) = 0;
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  param_1[0x122] = 0;
  *(byte *)(param_1 + 0x123) = *(byte *)(param_1 + 0x123) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x919) = 0;
  param_1[0x121] = &PTR_FUN_14a7cc610;
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0xffffffff;
  param_1[0x126] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x974) = 0;
  *(undefined8 *)((longlong)param_1 + 0x97c) = 0;
  *(undefined1 *)(param_1 + 0x132) = 0;
  param_1[0x131] = 0;
  *(undefined4 *)((longlong)param_1 + 0x994) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x99c) = 0xfffffffe;
  return param_1;
}



// FUNCTION 1479319d2 FUN_1479319d2 body=230 status=ok
// SIG undefined FUN_1479319d2(void)

longlong FUN_1479319d2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_1411a1ca6();
  FUN_140d188f2(param_1 + 0x8a8,param_2 + 0x8a8);
  uVar5 = *(undefined8 *)(param_2 + 0x900);
  *(undefined8 *)(param_1 + 0x8f8) = *(undefined8 *)(param_2 + 0x8f8);
  *(undefined8 *)(param_1 + 0x900) = uVar5;
  *(undefined2 *)(param_1 + 0x918) = *(undefined2 *)(param_2 + 0x918);
  *(undefined8 *)(param_1 + 0x910) = *(undefined8 *)(param_2 + 0x910);
  uVar5 = *(undefined8 *)(param_2 + 0x928);
  uVar1 = *(undefined4 *)(param_2 + 0x930);
  uVar2 = *(undefined4 *)(param_2 + 0x934);
  uVar3 = *(undefined4 *)(param_2 + 0x938);
  uVar4 = *(undefined4 *)(param_2 + 0x93c);
  *(undefined8 *)(param_1 + 0x920) = *(undefined8 *)(param_2 + 0x920);
  *(undefined8 *)(param_1 + 0x928) = uVar5;
  *(undefined4 *)(param_1 + 0x930) = uVar1;
  *(undefined4 *)(param_1 + 0x934) = uVar2;
  *(undefined4 *)(param_1 + 0x938) = uVar3;
  *(undefined4 *)(param_1 + 0x93c) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x944);
  uVar2 = *(undefined4 *)(param_2 + 0x948);
  uVar3 = *(undefined4 *)(param_2 + 0x94c);
  *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(param_2 + 0x940);
  *(undefined4 *)(param_1 + 0x944) = uVar1;
  *(undefined4 *)(param_1 + 0x948) = uVar2;
  *(undefined4 *)(param_1 + 0x94c) = uVar3;
  *(undefined8 *)(param_1 + 0x950) = *(undefined8 *)(param_2 + 0x950);
  FUN_140472cde(param_1 + 0x958,param_2 + 0x958);
  FUN_140472d3c(param_1 + 0x968,param_2 + 0x968);
  uVar5 = *(undefined8 *)(param_2 + 0x980);
  uVar6 = *(undefined8 *)(param_2 + 0x988);
  uVar7 = *(undefined8 *)(param_2 + 0x990);
  uVar8 = *(undefined8 *)(param_2 + 0x998);
  uVar9 = *(undefined8 *)(param_2 + 0x9a0);
  *(undefined8 *)(param_1 + 0x978) = *(undefined8 *)(param_2 + 0x978);
  *(undefined8 *)(param_1 + 0x980) = uVar5;
  *(undefined8 *)(param_1 + 0x988) = uVar6;
  *(undefined8 *)(param_1 + 0x990) = uVar7;
  *(undefined8 *)(param_1 + 0x998) = uVar8;
  *(undefined8 *)(param_1 + 0x9a0) = uVar9;
  *(undefined4 *)(param_1 + 0x9a7) = *(undefined4 *)(param_2 + 0x9a7);
  return param_1;
}



// FUNCTION 147931b3e FUN_147931b3e body=59 status=ok
// SIG undefined FUN_147931b3e(void)

undefined8 FUN_147931b3e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147931c4c FUN_147931c4c body=59 status=ok
// SIG undefined FUN_147931c4c(void)

undefined8 FUN_147931c4c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147931d46 FUN_147931d46 body=78 status=ok
// SIG undefined FUN_147931d46(void)

undefined8 FUN_147931d46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_147931e76(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147931dbc FUN_147931dbc body=59 status=ok
// SIG undefined FUN_147931dbc(void)

undefined8 FUN_147931dbc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147931e02 FUN_147931e02 body=38 status=ok
// SIG undefined FUN_147931e02(void)

void FUN_147931e02(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147931e76 FUN_147931e76 body=88 status=ok
// SIG undefined FUN_147931e76(void)

undefined8 * FUN_147931e76(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147931ece(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 147931ece FUN_147931ece body=98 status=ok
// SIG undefined FUN_147931ece(void)

void FUN_147931ece(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147931f72 FUN_147931f72 body=54 status=ok
// SIG undefined FUN_147931f72(void)

undefined1 FUN_147931f72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147932070(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147931fd0 FUN_147931fd0 body=59 status=ok
// SIG undefined FUN_147931fd0(void)

undefined8 FUN_147931fd0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147932070 FUN_147932070 body=124 status=ok
// SIG undefined FUN_147932070(void)

undefined8 * FUN_147932070(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x15);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x19);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1d);
  *(undefined4 *)((longlong)param_1 + 0x11) = *(undefined4 *)((longlong)param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x15) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x19) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1d) = uVar7;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  lVar9 = param_2[5];
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = param_2[5];
    }
  }
  bVar8 = DAT_14c950c29;
  param_1[5] = lVar9;
  lVar9 = param_2[6];
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = param_2[6];
    }
  }
  param_1[6] = lVar9;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 14793213e FUN_14793213e body=83 status=ok
// SIG undefined FUN_14793213e(void)

undefined1 FUN_14793213e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      puVar2 = (undefined4 *)(param_2 + lVar10);
      puVar2[3] = puVar1[3];
      puVar2[4] = uVar7;
      puVar2[5] = uVar8;
      puVar2[6] = uVar9;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_14054c6c4();
      lVar10 = lVar10 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479321ba FUN_1479321ba body=59 status=ok
// SIG undefined FUN_1479321ba(void)

undefined8 FUN_1479321ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147932200 FUN_147932200 body=38 status=ok
// SIG undefined FUN_147932200(void)

void FUN_147932200(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1479322cc FUN_1479322cc body=54 status=ok
// SIG undefined FUN_1479322cc(void)

undefined1 FUN_1479322cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14793244a(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 14793232a FUN_14793232a body=59 status=ok
// SIG undefined FUN_14793232a(void)

undefined8 FUN_14793232a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147932370 FUN_147932370 body=32 status=ok
// SIG undefined FUN_147932370(void)

void FUN_147932370(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1479323de(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1479323de FUN_1479323de body=108 status=ok
// SIG undefined FUN_1479323de(void)

void FUN_1479323de(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_140e6d4a0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14793244a FUN_14793244a body=118 status=ok
// SIG undefined FUN_14793244a(void)

undefined8 * FUN_14793244a(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  FUN_1479324c0(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  param_1[5] = param_2[5];
  FUN_14054c6c4(param_1 + 6,param_2 + 6);
  FUN_14054c6c4(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  FUN_14112f30a(param_1 + 0xb,param_2 + 0xb);
  FUN_14054c6c4(param_1 + 0xd,param_2 + 0xd);
  return param_1;
}



// FUNCTION 1479324c0 FUN_1479324c0 body=93 status=ok
// SIG undefined FUN_1479324c0(void)

undefined8 * FUN_1479324c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e6d4a0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14793251e(param_1,iVar1);
      FUN_147932591(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14793251e FUN_14793251e body=115 status=ok
// SIG undefined FUN_14793251e(void)

void FUN_14793251e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147932591 FUN_147932591 body=135 status=ok
// SIG undefined FUN_147932591(void)

void FUN_147932591(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  
  if (param_3 != 0) {
    puVar9 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[6];
      *(undefined4 *)((longlong)puVar9 + -0x14) = param_2[3];
      *(undefined4 *)(puVar9 + -2) = uVar6;
      *(undefined4 *)((longlong)puVar9 + -0xc) = uVar7;
      *(undefined4 *)(puVar9 + -1) = uVar8;
      *(undefined4 *)(puVar9 + -4) = uVar2;
      *(undefined4 *)((longlong)puVar9 + -0x1c) = uVar3;
      *(undefined4 *)(puVar9 + -3) = uVar4;
      *(undefined4 *)((longlong)puVar9 + -0x14) = uVar5;
      *puVar9 = 0;
      iVar1 = param_2[10];
      _Src = *(void **)(param_2 + 8);
      *(int *)(puVar9 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(puVar9,iVar1,0);
        memcpy((void *)*puVar9,_Src,(longlong)iVar1 << 2);
      }
      param_2 = param_2 + 0xc;
      puVar9 = puVar9 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14793265a FUN_14793265a body=101 status=ok
// SIG undefined FUN_14793265a(void)

undefined8 FUN_14793265a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_14793279c(param_2,param_3);
      FUN_1479327fa(param_2 + 0x10,param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      *(undefined1 *)(param_2 + 0x24) = *(undefined1 *)(param_3 + 0x24);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479326e8 FUN_1479326e8 body=59 status=ok
// SIG undefined FUN_1479326e8(void)

undefined8 FUN_1479326e8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793272e FUN_14793272e body=32 status=ok
// SIG undefined FUN_14793272e(void)

void FUN_14793272e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1417b6fb2(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14793279c FUN_14793279c body=93 status=ok
// SIG undefined FUN_14793279c(void)

undefined8 * FUN_14793279c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e6d428(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14793284a(param_1,iVar1);
      FUN_1479328b9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1479327fa FUN_1479327fa body=79 status=ok
// SIG undefined FUN_1479327fa(void)

undefined8 * FUN_1479327fa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147932a8e(param_1,iVar1);
      FUN_147932af0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14793284a FUN_14793284a body=111 status=ok
// SIG undefined FUN_14793284a(void)

void FUN_14793284a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1479328b9 FUN_1479328b9 body=52 status=ok
// SIG undefined FUN_1479328b9(void)

void FUN_1479328b9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1479328ee(param_1,param_2);
    param_1 = param_1 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return;
}



// FUNCTION 1479328ee FUN_1479328ee body=416 status=ok
// SIG undefined FUN_1479328ee(void)

undefined8 * FUN_1479328ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_14793251e(param_1 + 1,iVar1,0);
    FUN_147932591(param_1[1],uVar2,iVar1);
  }
  param_1[5] = param_2[5];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar3 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar3,(longlong)iVar1 << 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar3 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar3,(longlong)iVar1 << 2);
  }
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_14580e690(param_1 + 0xb,iVar1,0);
    FUN_14580e635(param_1[0xb],uVar2,iVar1);
  }
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  pvVar3 = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar3,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 147932a8e FUN_147932a8e body=98 status=ok
// SIG undefined FUN_147932a8e(void)

void FUN_147932a8e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147932af0 FUN_147932af0 body=52 status=ok
// SIG undefined FUN_147932af0(void)

void FUN_147932af0(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147932b24(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 147932b24 FUN_147932b24 body=120 status=ok
// SIG undefined FUN_147932b24(void)

undefined8 * FUN_147932b24(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x15);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x19);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x1d);
  *(undefined4 *)((longlong)param_1 + 0x11) = *(undefined4 *)((longlong)param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x15) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x19) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x1d) = uVar8;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  lVar1 = param_2[5];
  param_1[5] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar9 = DAT_14c950c29;
  lVar1 = param_2[6];
  param_1[6] = lVar1;
  if ((lVar1 != 0 & bVar9) == 1) {
    FUN_1456cec3c();
  }
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 147932b9e FUN_147932b9e body=60 status=ok
// SIG undefined FUN_147932b9e(void)

void FUN_147932b9e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1402d524c(lVar1);
    FUN_1400020a8(lVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  FUN_14102a02c(param_1 + 0x18);
  return;
}



// FUNCTION 147932c2a FUN_147932c2a body=59 status=ok
// SIG undefined FUN_147932c2a(void)

undefined8 FUN_147932c2a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147932c70 FUN_147932c70 body=48 status=ok
// SIG undefined FUN_147932c70(void)

void FUN_147932c70(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a7cd7d0;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147932cf0 FUN_147932cf0 body=81 status=ok
// SIG undefined FUN_147932cf0(void)

void FUN_147932cf0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 3,0,0x90);
  *param_2 = &PTR_FUN_14a7cd970;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0xffffffff00000080;
  param_2[0xf] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0xffffffff00000080;
  return;
}



// FUNCTION 147932dc2 FUN_147932dc2 body=83 status=ok
// SIG undefined FUN_147932dc2(void)

undefined1 FUN_147932dc2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
    do {
      FUN_1479330f8(param_2 + -0x50,param_3 + -0x50);
      FUN_1479331ec(param_2,param_3);
      param_3 = param_3 + 0xa8;
      param_2 = param_2 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147932e3e FUN_147932e3e body=59 status=ok
// SIG undefined FUN_147932e3e(void)

undefined8 FUN_147932e3e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147932e8a FUN_147932e8a body=40 status=ok
// SIG undefined FUN_147932e8a(void)

void FUN_147932e8a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_147932f26(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 147932f00 FUN_147932f00 body=38 status=ok
// SIG undefined FUN_147932f00(void)

undefined8 FUN_147932f00(undefined8 param_1,int param_2)

{
  FUN_147932f26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147932f26 FUN_147932f26 body=97 status=ok
// SIG undefined FUN_147932f26(void)

void FUN_147932f26(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7cd970;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_147932f88(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_147933040(param_1 + 1);
  return;
}



// FUNCTION 147932f88 FUN_147932f88 body=54 status=ok
// SIG undefined FUN_147932f88(void)

void FUN_147932f88(longlong *param_1)

{
  FUN_147932fbe(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147932fbe FUN_147932fbe body=128 status=ok
// SIG undefined FUN_147932fbe(void)

void FUN_147932fbe(longlong param_1,int param_2)

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



// FUNCTION 147933040 FUN_147933040 body=54 status=ok
// SIG undefined FUN_147933040(void)

void FUN_147933040(longlong *param_1)

{
  FUN_147933076(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147933076 FUN_147933076 body=128 status=ok
// SIG undefined FUN_147933076(void)

void FUN_147933076(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 1479330f8 FUN_1479330f8 body=122 status=ok
// SIG undefined FUN_1479330f8(void)

longlong FUN_1479330f8(longlong param_1,longlong param_2)

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
    FUN_147933172(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147933172 FUN_147933172 body=121 status=ok
// SIG undefined FUN_147933172(void)

undefined8 * FUN_147933172(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147933076(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x28);
    }
  }
  return param_1;
}



// FUNCTION 1479331ec FUN_1479331ec body=122 status=ok
// SIG undefined FUN_1479331ec(void)

longlong FUN_1479331ec(longlong param_1,longlong param_2)

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
    FUN_147933266(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147933266 FUN_147933266 body=121 status=ok
// SIG undefined FUN_147933266(void)

undefined8 * FUN_147933266(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147932fbe(param_1,uVar1);
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



// FUNCTION 14793334c FUN_14793334c body=59 status=ok
// SIG undefined FUN_14793334c(void)

undefined8 FUN_14793334c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147933398 FUN_147933398 body=49 status=ok
// SIG undefined FUN_147933398(void)

void FUN_147933398(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14a7cdc50;
    FUN_140b3ac2a(param_2 + 1);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14793347a FUN_14793347a body=46 status=ok
// SIG undefined FUN_14793347a(void)

void FUN_14793347a(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_147933fd6(param_2 + 8);
  return;
}



// FUNCTION 1479334be FUN_1479334be body=54 status=ok
// SIG undefined FUN_1479334be(void)

undefined1 FUN_1479334be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1479335e8(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 14793351c FUN_14793351c body=59 status=ok
// SIG undefined FUN_14793351c(void)

undefined8 FUN_14793351c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147933562 FUN_147933562 body=56 status=ok
// SIG undefined FUN_147933562(void)

void FUN_147933562(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    *(undefined4 *)(param_2 + 0x50) = 0;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    FUN_147933fd6(param_2 + 8);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1479335e8 FUN_1479335e8 body=73 status=ok
// SIG undefined FUN_1479335e8(void)

longlong * FUN_1479335e8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_147933632(param_1 + 1,param_2 + 1);
  *(char *)(param_1 + 0xb) = (char)param_2[0xb];
  return param_1;
}



// FUNCTION 147933632 FUN_147933632 body=122 status=ok
// SIG undefined FUN_147933632(void)

longlong FUN_147933632(longlong param_1,longlong param_2)

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
    FUN_1479336ac(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1479336ac FUN_1479336ac body=121 status=ok
// SIG undefined FUN_1479336ac(void)

undefined8 * FUN_1479336ac(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147933726(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
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



// FUNCTION 147933726 FUN_147933726 body=128 status=ok
// SIG undefined FUN_147933726(void)

void FUN_147933726(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 1479337c8 FUN_1479337c8 body=46 status=ok
// SIG undefined FUN_1479337c8(void)

void FUN_1479337c8(undefined8 param_1,longlong param_2)

{
  FUN_1479339af(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14793380c FUN_14793380c body=54 status=ok
// SIG undefined FUN_14793380c(void)

undefined1 FUN_14793380c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147933906(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14793386a FUN_14793386a body=59 status=ok
// SIG undefined FUN_14793386a(void)

undefined8 FUN_14793386a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147933906 FUN_147933906 body=73 status=ok
// SIG undefined FUN_147933906(void)

longlong * FUN_147933906(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_147933950(param_1 + 1,param_2 + 1);
  *(char *)(param_1 + 3) = (char)param_2[3];
  return param_1;
}



// FUNCTION 147933950 FUN_147933950 body=95 status=ok
// SIG undefined FUN_147933950(void)

undefined8 * FUN_147933950(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1479339af(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1479339ee(param_1,iVar1);
      FUN_147933a61(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1479339af FUN_1479339af body=63 status=ok
// SIG undefined FUN_1479339af(void)

void FUN_1479339af(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_147933fd6(puVar1 + -0x12);
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1479339ee FUN_1479339ee body=115 status=ok
// SIG undefined FUN_1479339ee(void)

void FUN_1479339ee(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147933a61 FUN_147933a61 body=52 status=ok
// SIG undefined FUN_147933a61(void)

void FUN_147933a61(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147933a96(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 147933a96 FUN_147933a96 body=108 status=ok
// SIG undefined FUN_147933a96(void)

longlong * FUN_147933a96(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_147933632(param_1 + 1,param_2 + 1);
  *(char *)(param_1 + 0xb) = (char)param_2[0xb];
  return param_1;
}



// FUNCTION 147933b04 FUN_147933b04 body=52 status=ok
// SIG undefined FUN_147933b04(void)

void FUN_147933b04(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1479339af(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147933b88 FUN_147933b88 body=75 status=ok
// SIG undefined FUN_147933b88(void)

undefined1 FUN_147933b88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_147933d58(param_2 + -0x10,param_3 + -0x10);
      FUN_147933db8(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147933bfc FUN_147933bfc body=59 status=ok
// SIG undefined FUN_147933bfc(void)

undefined8 FUN_147933bfc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147933c42 FUN_147933c42 body=34 status=ok
// SIG undefined FUN_147933c42(void)

void FUN_147933c42(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_147933cd8(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147933cb2 FUN_147933cb2 body=38 status=ok
// SIG undefined FUN_147933cb2(void)

undefined8 FUN_147933cb2(undefined8 param_1,int param_2)

{
  FUN_147933cd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147933cd8 FUN_147933cd8 body=70 status=ok
// SIG undefined FUN_147933cd8(void)

void FUN_147933cd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7ce0b0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_147933d1e(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147933d1e FUN_147933d1e body=58 status=ok
// SIG undefined FUN_147933d1e(void)

void FUN_147933d1e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_1479339af(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147933d58 FUN_147933d58 body=95 status=ok
// SIG undefined FUN_147933d58(void)

undefined8 * FUN_147933d58(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147933d1e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147933e08(param_1,iVar1);
      FUN_147933e6a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147933db8 FUN_147933db8 body=79 status=ok
// SIG undefined FUN_147933db8(void)

undefined8 * FUN_147933db8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147933f20(param_1,iVar1);
      FUN_147933f82(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147933e08 FUN_147933e08 body=98 status=ok
// SIG undefined FUN_147933e08(void)

void FUN_147933e08(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147933e6a FUN_147933e6a body=52 status=ok
// SIG undefined FUN_147933e6a(void)

void FUN_147933e6a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147933e9e(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 147933e9e FUN_147933e9e body=129 status=ok
// SIG undefined FUN_147933e9e(void)

longlong * FUN_147933e9e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = 0;
  iVar1 = (int)param_2[2];
  lVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1479339ee(param_1 + 1,iVar1,0);
    FUN_147933a61(param_1[1],lVar2,iVar1);
  }
  *(char *)(param_1 + 3) = (char)param_2[3];
  return param_1;
}



// FUNCTION 147933f20 FUN_147933f20 body=98 status=ok
// SIG undefined FUN_147933f20(void)

void FUN_147933f20(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147933f82 FUN_147933f82 body=82 status=ok
// SIG undefined FUN_147933f82(void)

void FUN_147933f82(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 147933fd6 FUN_147933fd6 body=54 status=ok
// SIG undefined FUN_147933fd6(void)

void FUN_147933fd6(longlong *param_1)

{
  FUN_147933726(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479340a0 FUN_1479340a0 body=85 status=ok
// SIG undefined FUN_1479340a0(void)

undefined8 FUN_1479340a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140816cc4(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x58 + lVar1) = *(undefined8 *)(param_3 + 0x58 + lVar1);
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14793411e FUN_14793411e body=59 status=ok
// SIG undefined FUN_14793411e(void)

undefined8 FUN_14793411e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479341ba FUN_1479341ba body=73 status=ok
// SIG undefined FUN_1479341ba(void)

undefined8 * FUN_1479341ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7ce230;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147934204 FUN_147934204 body=64 status=ok
// SIG undefined FUN_147934204(void)

void FUN_147934204(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *param_1 = &PTR_FUN_14a7ce230;
    *(undefined4 *)(param_1 + 10) = 0;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(param_1 + 1);
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14793426c FUN_14793426c body=54 status=ok
// SIG undefined FUN_14793426c(void)

undefined1 FUN_14793426c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14793436a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1479342ca FUN_1479342ca body=59 status=ok
// SIG undefined FUN_1479342ca(void)

undefined8 FUN_1479342ca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793436a FUN_14793436a body=91 status=ok
// SIG undefined FUN_14793436a(void)

longlong * FUN_14793436a(longlong *param_1,longlong *param_2)

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
  return param_1;
}



// FUNCTION 1479343c6 FUN_1479343c6 body=132 status=ok
// SIG undefined FUN_1479343c6(void)

void FUN_1479343c6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14793444c FUN_14793444c body=116 status=ok
// SIG undefined FUN_14793444c(void)

void FUN_14793444c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x88)) {
      uVar2 = uVar1 / 0x88 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x88,8);
  }
  return;
}



// FUNCTION 1479344c0 FUN_1479344c0 body=333 status=ok
// SIG undefined FUN_1479344c0(void)

undefined4 * FUN_1479344c0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14793460e(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_58 = 0;
  cVar3 = FUN_1479346f4(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1479347f4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793460e FUN_14793460e body=230 status=ok
// SIG undefined FUN_14793460e(void)

int * FUN_14793460e(longlong *param_1,int *param_2)

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



// FUNCTION 1479346f4 FUN_1479346f4 body=142 status=ok
// SIG undefined FUN_1479346f4(void)

void FUN_1479346f4(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
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
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_147934782((int)lVar3,*param_4);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_14793475e;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_14793475e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 147934782 FUN_147934782 body=114 status=ok
// SIG undefined FUN_147934782(void)

void FUN_147934782(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1479347f4 FUN_1479347f4 body=474 status=ok
// SIG undefined FUN_1479347f4(void)

void FUN_1479347f4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479349d0 FUN_1479349d0 body=181 status=ok
// SIG undefined FUN_1479349d0(void)

longlong FUN_1479349d0(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147934a68;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147934a86(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147934a68:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147934a86 FUN_147934a86 body=286 status=ok
// SIG undefined FUN_147934a86(void)

undefined4 * FUN_147934a86(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147934ba6(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_1448262fc(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147934c8c(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147934dac(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147934ba6 FUN_147934ba6 body=229 status=ok
// SIG undefined FUN_147934ba6(void)

int * FUN_147934ba6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 147934c8c FUN_147934c8c body=174 status=ok
// SIG undefined FUN_147934c8c(void)

undefined8 FUN_147934c8c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1448262fc(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_147934d3a(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147934d3a FUN_147934d3a body=114 status=ok
// SIG undefined FUN_147934d3a(void)

void FUN_147934d3a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147934dac FUN_147934dac body=476 status=ok
// SIG undefined FUN_147934dac(void)

void FUN_147934dac(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147934f8a FUN_147934f8a body=322 status=ok
// SIG undefined FUN_147934f8a(void)

void FUN_147934f8a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479350ce FUN_1479350ce body=307 status=ok
// SIG undefined FUN_1479350ce(void)

void FUN_1479350ce(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x20;
      FUN_1448262fc(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
      if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147935202 FUN_147935202 body=322 status=ok
// SIG undefined FUN_147935202(void)

void FUN_147935202(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147935346 FUN_147935346 body=338 status=ok
// SIG undefined FUN_147935346(void)

undefined4 *
FUN_147935346(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14793460e(param_1,local_50);
  puVar1 = (undefined1 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_48 = uVar6;
  *(undefined1 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_68 = param_4;
  cVar3 = FUN_1479346f4(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1479347f4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793549a FUN_14793549a body=147 status=ok
// SIG undefined FUN_14793549a(void)

void FUN_14793549a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14793552e FUN_14793552e body=132 status=ok
// SIG undefined FUN_14793552e(void)

void FUN_14793552e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479355b4 FUN_1479355b4 body=147 status=ok
// SIG undefined FUN_1479355b4(void)

void FUN_1479355b4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x90,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147935648 FUN_147935648 body=57 status=ok
// SIG undefined FUN_147935648(void)

void FUN_147935648(undefined8 *param_1,int param_2)

{
  FUN_145c12a97(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147935682(param_1,param_2);
  return;
}



// FUNCTION 147935682 FUN_147935682 body=95 status=ok
// SIG undefined FUN_147935682(void)

void FUN_147935682(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1479356e1 FUN_1479356e1 body=573 status=ok
// SIG undefined FUN_1479356e1(void)

void FUN_1479356e1(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar8;
joined_r0x000147935715:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (fVar5 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0xc + 8),
           pfVar4 = (float *)((longlong)param_1 + (longlong)iVar11 * 0xc + 8),
           fVar5 < *pfVar4 || fVar5 == *pfVar4)) {
          iVar10 = iVar11;
        }
        fVar5 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0xc + 8);
        pfVar4 = (float *)((longlong)param_1 + (longlong)iVar8 * 0xc + 8);
        if (*pfVar4 <= fVar5 && fVar5 != *pfVar4) {
          puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar8 * 0xc);
          puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar10 * 0xc);
          local_18 = *(undefined4 *)(puVar2 + 1);
          local_20 = *puVar2;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar3 + 1) = local_18;
          *puVar3 = local_20;
          iVar8 = iVar10;
          goto joined_r0x000147935715;
        }
      }
      bVar13 = iVar12 != 0;
      iVar8 = iVar12 + -1;
      iVar12 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_18 = *(undefined4 *)(param_1 + 1);
      local_20 = *param_1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar9 * 0xc + 8);
      *param_1 = *(undefined8 *)((longlong)param_1 + uVar9 * 0xc);
      *(undefined4 *)((longlong)param_1 + uVar9 * 0xc + 8) = local_18;
      *(undefined8 *)((longlong)param_1 + uVar9 * 0xc) = local_20;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar11 = iVar10;
            if (((longlong)iVar8 < (longlong)uVar9) &&
               (fVar5 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0xc + 8),
               pfVar4 = (float *)((longlong)param_1 + (longlong)iVar8 * 0xc + 8),
               fVar5 < *pfVar4 || fVar5 == *pfVar4)) {
              iVar11 = iVar8;
            }
            fVar5 = *(float *)((longlong)param_1 + (longlong)iVar11 * 0xc + 8);
            pfVar4 = (float *)((longlong)param_1 + (longlong)iVar12 * 0xc + 8);
            if (fVar5 < *pfVar4 || fVar5 == *pfVar4) break;
            puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar12 * 0xc);
            puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar11 * 0xc);
            uVar6 = *(undefined4 *)(puVar2 + 1);
            uVar7 = *puVar2;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
            *puVar2 = *puVar3;
            *(undefined4 *)(puVar3 + 1) = uVar6;
            *puVar3 = uVar7;
            iVar8 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_18 = *(undefined4 *)(param_1 + 1);
          local_20 = *param_1;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8);
          *param_1 = *(undefined8 *)((longlong)param_1 + uVar1 * 0xc);
          *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8) = local_18;
          *(undefined8 *)((longlong)param_1 + uVar1 * 0xc) = local_20;
          bVar13 = 2 < uVar9;
          uVar9 = uVar1;
        } while (bVar13);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147935920 FUN_147935920 body=242 status=ok
// SIG undefined FUN_147935920(void)

undefined4 FUN_147935920(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_1[7];
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uVar4 = FUN_147935a14(param_1 + 6,&local_48);
  if ((int)lVar3 < (int)param_1[7]) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_140bfc2d4(param_1,iVar2);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
      FUN_147935b4e(param_1 + 2,iVar2);
    }
    puVar1 = (undefined8 *)(param_1[2] + (longlong)iVar2 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = (int)param_1[5];
    *(uint *)(param_1 + 5) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x2c) < iVar2 + 1U) {
      FUN_14791fa40(param_1 + 4,iVar2);
    }
    puVar1 = (undefined8 *)(param_1[4] + (longlong)iVar2 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147935a14 FUN_147935a14 body=125 status=ok
// SIG undefined FUN_147935a14(void)

int FUN_147935a14(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    iVar2 = 0;
    do {
      cVar1 = FUN_147935a92(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar2 != 1) {
          return -iVar2;
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_147935ac8(param_1,iVar2);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *param_2;
  return iVar2;
}



// FUNCTION 147935a92 FUN_147935a92 body=53 status=ok
// SIG undefined FUN_147935a92(void)

ulonglong FUN_147935a92(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147935ac8 FUN_147935ac8 body=132 status=ok
// SIG undefined FUN_147935ac8(void)

void FUN_147935ac8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147935b4e FUN_147935b4e body=132 status=ok
// SIG undefined FUN_147935b4e(void)

void FUN_147935b4e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147935bd4 FUN_147935bd4 body=147 status=ok
// SIG undefined FUN_147935bd4(void)

void FUN_147935bd4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147935c68 FUN_147935c68 body=1082 status=ok
// SIG undefined FUN_147935c68(void)

void FUN_147935c68(void *param_1,uint param_2)

{
  void *pvVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_168 [40];
  ulonglong local_140;
  undefined1 local_138 [184];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 != 0) {
    uVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      local_140 = (ulonglong)uVar4;
      uVar13 = local_140;
      while (uVar3 = uVar4 * 2 + 1, (int)uVar3 < (int)param_2) {
        uVar12 = uVar4 * 2 + 2;
        uVar4 = uVar3;
        if ((int)uVar12 < (int)param_2) {
          lVar10 = (longlong)(int)uVar12 * 0xb8;
          lVar5 = (longlong)(int)uVar3 * 0xb8;
          fVar14 = (float)FUN_144b1ffa4((void *)((longlong)param_1 + lVar10),0);
          fVar14 = fVar14 + *(float *)((longlong)param_1 + lVar10 + 0x30);
          fVar15 = (float)FUN_144b1ffa4((void *)((longlong)param_1 + lVar5),0);
          fVar15 = fVar15 + *(float *)((longlong)param_1 + lVar5 + 0x30);
          bVar2 = fVar14 < fVar15;
          if (ABS(fVar14 - fVar15) <= 1e-08) {
            bVar2 = *(int *)((longlong)param_1 + lVar10 + 0xa4) <
                    *(int *)((longlong)param_1 + lVar5 + 0xa4);
          }
          if (!bVar2) {
            uVar4 = uVar12;
          }
        }
        lVar5 = (longlong)(int)uVar13 * 0xb8;
        pvVar6 = (void *)((longlong)param_1 + lVar5);
        lVar10 = (longlong)(int)uVar4 * 0xb8;
        pvVar1 = (void *)((longlong)param_1 + lVar10);
        fVar14 = (float)FUN_144b1ffa4(pvVar6,0);
        fVar14 = fVar14 + *(float *)((longlong)param_1 + lVar5 + 0x30);
        fVar15 = (float)FUN_144b1ffa4(pvVar1,0);
        fVar15 = fVar15 + *(float *)((longlong)param_1 + lVar10 + 0x30);
        bVar2 = fVar14 < fVar15;
        if (ABS(fVar14 - fVar15) <= 1e-08) {
          bVar2 = *(int *)((longlong)param_1 + lVar5 + 0xa4) <
                  *(int *)((longlong)param_1 + lVar10 + 0xa4);
        }
        if (!bVar2) break;
        memcpy(local_138,pvVar6,0xb8);
        memcpy(pvVar6,pvVar1,0xb8);
        memcpy(pvVar1,local_138,0xb8);
        uVar13 = (ulonglong)uVar4;
      }
      uVar4 = (int)local_140 - 1;
    } while ((int)local_140 != 0);
    if (1 < (int)param_2) {
      pvVar6 = (void *)(((ulonglong)param_2 - 1) * 0xb8 + (longlong)param_1);
      memcpy(local_138,param_1,0xb8);
      memcpy(param_1,pvVar6,0xb8);
      memcpy(pvVar6,local_138,0xb8);
      uVar13 = (ulonglong)param_2 - 1;
      if (param_2 != 2) {
        do {
          iVar8 = 1;
          iVar9 = 0;
          iVar11 = 0;
          do {
            iVar9 = iVar9 + 2;
            iVar7 = iVar8;
            if ((longlong)iVar9 < (longlong)uVar13) {
              lVar10 = (longlong)iVar9 * 0xb8;
              lVar5 = (longlong)iVar8 * 0xb8;
              fVar14 = (float)FUN_144b1ffa4((void *)((longlong)param_1 + lVar10),0);
              fVar14 = fVar14 + *(float *)((longlong)param_1 + lVar10 + 0x30);
              fVar15 = (float)FUN_144b1ffa4((void *)((longlong)param_1 + lVar5),0);
              fVar15 = fVar15 + *(float *)((longlong)param_1 + lVar5 + 0x30);
              bVar2 = fVar14 < fVar15;
              if (ABS(fVar14 - fVar15) <= 1e-08) {
                bVar2 = *(int *)((longlong)param_1 + lVar10 + 0xa4) <
                        *(int *)((longlong)param_1 + lVar5 + 0xa4);
              }
              if (!bVar2) {
                iVar7 = iVar9;
              }
            }
            lVar5 = (longlong)iVar11 * 0xb8;
            pvVar6 = (void *)((longlong)param_1 + lVar5);
            lVar10 = (longlong)iVar7 * 0xb8;
            pvVar1 = (void *)((longlong)param_1 + lVar10);
            fVar14 = (float)FUN_144b1ffa4(pvVar6,0);
            fVar14 = fVar14 + *(float *)((longlong)param_1 + lVar5 + 0x30);
            fVar15 = (float)FUN_144b1ffa4(pvVar1,0);
            fVar15 = fVar15 + *(float *)((longlong)param_1 + lVar10 + 0x30);
            bVar2 = fVar14 < fVar15;
            if (ABS(fVar14 - fVar15) <= 1e-08) {
              bVar2 = *(int *)((longlong)param_1 + lVar5 + 0xa4) <
                      *(int *)((longlong)param_1 + lVar10 + 0xa4);
            }
            if (!bVar2) break;
            memcpy(local_138,pvVar6,0xb8);
            memcpy(pvVar6,pvVar1,0xb8);
            memcpy(pvVar1,local_138,0xb8);
            iVar9 = iVar7 * 2;
            iVar8 = iVar7 * 2 + 1;
            iVar11 = iVar7;
          } while ((longlong)iVar8 < (longlong)uVar13);
          pvVar6 = (void *)((uVar13 - 1) * 0xb8 + (longlong)param_1);
          memcpy(local_138,param_1,0xb8);
          memcpy(param_1,pvVar6,0xb8);
          memcpy(pvVar6,local_138,0xb8);
          bVar2 = 2 < uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar2);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479360a4 FUN_1479360a4 body=132 status=ok
// SIG undefined FUN_1479360a4(void)

void FUN_1479360a4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14793612a FUN_14793612a body=132 status=ok
// SIG undefined FUN_14793612a(void)

void FUN_14793612a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479361af FUN_1479361af body=70 status=ok
// SIG undefined FUN_1479361af(void)

void FUN_1479361af(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[5] = 0;
    *(undefined8 *)((longlong)param_1 + 0x21) = 0;
    *(undefined4 *)((longlong)param_1 + 0x25) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x29) = 0xff;
    param_1[6] = DAT_14c845dbc;
    *(undefined4 *)(param_1 + 7) = DAT_14c845dc4;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 1479361f6 FUN_1479361f6 body=132 status=ok
// SIG undefined FUN_1479361f6(void)

void FUN_1479361f6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14793627c FUN_14793627c body=48 status=ok
// SIG undefined FUN_14793627c(void)

void FUN_14793627c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1479362ac FUN_1479362ac body=67 status=ok
// SIG undefined FUN_1479362ac(void)

void FUN_1479362ac(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_147933076(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147936434(param_1);
    return;
  }
  FUN_1479362f0(param_1);
  FUN_147933076(param_1,0);
  return;
}



// FUNCTION 1479362f0 FUN_1479362f0 body=322 status=ok
// SIG undefined FUN_1479362f0(void)

void FUN_1479362f0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147936434 FUN_147936434 body=474 status=ok
// SIG undefined FUN_147936434(void)

void FUN_147936434(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x28);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x24 + lVar5 * 0x28) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147936610 FUN_147936610 body=180 status=ok
// SIG undefined FUN_147936610(void)

longlong * FUN_147936610(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1479366a7;
          break;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1479366c6(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x28);
LAB_1479366a7:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1479366c6 FUN_1479366c6 body=294 status=ok
// SIG undefined FUN_1479366c6(void)

undefined4 * FUN_1479366c6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1479367ee(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0xffffffffffffffff;
  *(undefined2 *)(local_40 + 2) = 0xffff;
  *(undefined8 *)((longlong)local_40 + 0x12) = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar1 = FUN_1479368d4(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147936434(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479367ee FUN_1479367ee body=230 status=ok
// SIG undefined FUN_1479367ee(void)

int * FUN_1479367ee(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1479368d4 FUN_1479368d4 body=138 status=ok
// SIG undefined FUN_1479368d4(void)

undefined8 FUN_1479368d4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_14793695e((int)lVar5,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14793695e FUN_14793695e body=114 status=ok
// SIG undefined FUN_14793695e(void)

void FUN_14793695e(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1479369d0 FUN_1479369d0 body=180 status=ok
// SIG undefined FUN_1479369d0(void)

longlong * FUN_1479369d0(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
          if (plVar2 != (longlong *)0x0) goto LAB_147936a67;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147936a86(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_147936a67:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 147936a86 FUN_147936a86 body=277 status=ok
// SIG undefined FUN_147936a86(void)

undefined4 * FUN_147936a86(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147936b9c(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_147936c82(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147936d74(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147936b9c FUN_147936b9c body=230 status=ok
// SIG undefined FUN_147936b9c(void)

int * FUN_147936b9c(longlong *param_1,int *param_2)

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



// FUNCTION 147936c82 FUN_147936c82 body=128 status=ok
// SIG undefined FUN_147936c82(void)

undefined8 FUN_147936c82(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147936d02((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147936d02 FUN_147936d02 body=114 status=ok
// SIG undefined FUN_147936d02(void)

void FUN_147936d02(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147936d74 FUN_147936d74 body=474 status=ok
// SIG undefined FUN_147936d74(void)

void FUN_147936d74(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147936f50 FUN_147936f50 body=335 status=ok
// SIG undefined FUN_147936f50(void)

undefined4 * FUN_147936f50(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1479370a0(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_147937186(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147937278(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479370a0 FUN_1479370a0 body=230 status=ok
// SIG undefined FUN_1479370a0(void)

int * FUN_1479370a0(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 147937186 FUN_147937186 body=128 status=ok
// SIG undefined FUN_147937186(void)

undefined8 FUN_147937186(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147937206((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147937206 FUN_147937206 body=114 status=ok
// SIG undefined FUN_147937206(void)

void FUN_147937206(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147937278 FUN_147937278 body=473 status=ok
// SIG undefined FUN_147937278(void)

void FUN_147937278(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147937452 FUN_147937452 body=132 status=ok
// SIG undefined FUN_147937452(void)

void FUN_147937452(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_1479374d6(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1479374d6 FUN_1479374d6 body=87 status=ok
// SIG undefined FUN_1479374d6(void)

void FUN_1479374d6(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147937206();
  return;
}



// FUNCTION 14793752e FUN_14793752e body=68 status=ok
// SIG undefined FUN_14793752e(void)

longlong * FUN_14793752e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147937606(param_1 + 1,param_2 + 1);
  *(char *)(param_1 + 0xb) = (char)param_2[0xb];
  return param_1;
}



// FUNCTION 147937572 FUN_147937572 body=147 status=ok
// SIG undefined FUN_147937572(void)

void FUN_147937572(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147937606 FUN_147937606 body=123 status=ok
// SIG undefined FUN_147937606(void)

undefined8 * FUN_147937606(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147937682();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 147937682 FUN_147937682 body=146 status=ok
// SIG undefined FUN_147937682(void)

longlong * FUN_147937682(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 147937714 FUN_147937714 body=110 status=ok
// SIG undefined FUN_147937714(void)

void FUN_147937714(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x60;
  _Dst = (void *)(lVar1 + lVar3);
  *(undefined4 *)(lVar1 + 0x50 + lVar3) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar3) != 0) {
    FUN_1400020a8();
  }
  FUN_147933fd6((longlong)_Dst + 8);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x60),(longlong)(int)(~param_2 + iVar2) * 0x60);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147937782 FUN_147937782 body=62 status=ok
// SIG undefined FUN_147937782(void)

void FUN_147937782(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479377c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 1479377c0 FUN_1479377c0 body=112 status=ok
// SIG undefined FUN_1479377c0(void)

ulonglong FUN_1479377c0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1479377fa;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x60,8);
      param_2 = param_2 / 0x60;
    }
  }
LAB_1479377fa:
  return param_2 & 0xffffffff;
}



// FUNCTION 147937830 FUN_147937830 body=96 status=ok
// SIG undefined FUN_147937830(void)

void FUN_147937830(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147937890 FUN_147937890 body=95 status=ok
// SIG undefined FUN_147937890(void)

void FUN_147937890(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1479378f0 FUN_1479378f0 body=132 status=ok
// SIG undefined FUN_1479378f0(void)

void FUN_1479378f0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147937976 FUN_147937976 body=103 status=ok
// SIG undefined FUN_147937976(void)

void FUN_147937976(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x20;
  FUN_1479339af(*(undefined8 *)(lVar1 + 8 + lVar3),*(undefined4 *)(lVar1 + 0x10 + lVar3));
  if (*(longlong *)(lVar1 + 8 + lVar3) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(lVar1 + lVar3),(void *)(lVar1 + lVar3 + 0x20),
            (longlong)(int)(~param_2 + iVar2) << 5);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1479379de FUN_1479379de body=62 status=ok
// SIG undefined FUN_1479379de(void)

void FUN_1479379de(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147937a1c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 147937a1c FUN_147937a1c body=93 status=ok
// SIG undefined FUN_147937a1c(void)

ulonglong FUN_147937a1c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 147937a7a FUN_147937a7a body=128 status=ok
// SIG undefined FUN_147937a7a(void)

void FUN_147937a7a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x88) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147937afa FUN_147937afa body=147 status=ok
// SIG undefined FUN_147937afa(void)

void FUN_147937afa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147937b8e FUN_147937b8e body=62 status=ok
// SIG undefined FUN_147937b8e(void)

void FUN_147937b8e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147937bcc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147937bcc FUN_147937bcc body=112 status=ok
// SIG undefined FUN_147937bcc(void)

ulonglong FUN_147937bcc(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147937c06;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_147937c06:
  return param_2 & 0xffffffff;
}



// FUNCTION 147937c3c FUN_147937c3c body=147 status=ok
// SIG undefined FUN_147937c3c(void)

void FUN_147937c3c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147937cd6 FUN_147937cd6 body=248 status=ok
// SIG undefined FUN_147937cd6(void)

void FUN_147937cd6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  longlong lStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  lStack_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar2 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar3 = false;
  if (((*plVar2 != 0) && (plVar2[1] != 0)) && ((int)plVar2[2] != -1)) {
    plVar2 = local_58;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    bVar3 = plVar2[3] != 0;
  }
  *param_3 = bVar3;
  if (lStack_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147937dd2 FUN_147937dd2 body=72 status=ok
// SIG undefined FUN_147937dd2(void)

void FUN_147937dd2(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14793ed5c(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147937e1a FUN_147937e1a body=264 status=ok
// SIG undefined FUN_147937e1a(void)

undefined8 FUN_147937e1a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar6 = 0;
    lVar7 = 0;
    while (cVar2 = FUN_1400063ec(lVar4 + uVar6,param_2), cVar2 == '\0') {
      lVar7 = lVar7 + 0x100000000;
      uVar6 = uVar6 + 8;
      if ((longlong)iVar3 * 8 == uVar6) {
        return 0;
      }
    }
    if ((int)(~uVar6 >> 3) != 0) {
      lVar7 = (lVar7 >> 0x20) * 0x10;
      lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar7);
      if (lVar4 != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar7);
        lVar5 = 0;
        while (((*(int *)(lVar1 + 0x10 + lVar5) != (int)param_3[2] ||
                (*(longlong *)(lVar1 + 8 + lVar5) != param_3[1])) ||
               (*(longlong *)(lVar1 + lVar5) != *param_3))) {
          lVar5 = lVar5 + 0x14;
          if (lVar4 * 0x14 == lVar5) {
            return 0;
          }
        }
        iVar3 = (int)(lVar5 >> 2) * -0x33333333;
        if (iVar3 != -1) {
          return *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar7) + (longlong)iVar3 * 0x10);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 147937f22 FUN_147937f22 body=264 status=ok
// SIG undefined FUN_147937f22(void)

undefined8 FUN_147937f22(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar6 = 0;
    lVar7 = 0;
    while (cVar2 = FUN_1400063ec(lVar4 + uVar6,param_2), cVar2 == '\0') {
      lVar7 = lVar7 + 0x100000000;
      uVar6 = uVar6 + 8;
      if ((longlong)iVar3 * 8 == uVar6) {
        return 0;
      }
    }
    if ((int)(~uVar6 >> 3) != 0) {
      lVar7 = (lVar7 >> 0x20) * 0x10;
      lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar7);
      if (lVar4 != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar7);
        lVar5 = 0;
        while (((*(int *)(lVar1 + 0x10 + lVar5) != (int)param_3[2] ||
                (*(longlong *)(lVar1 + 8 + lVar5) != param_3[1])) ||
               (*(longlong *)(lVar1 + lVar5) != *param_3))) {
          lVar5 = lVar5 + 0x14;
          if (lVar4 * 0x14 == lVar5) {
            return 0;
          }
        }
        iVar3 = (int)(lVar5 >> 2) * -0x33333333;
        if (iVar3 != -1) {
          return *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar7) + (longlong)iVar3 * 0x10);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14793802a FUN_14793802a body=404 status=ok
// SIG undefined FUN_14793802a(void)

/* WARNING: Removing unreachable block (ram,0x000147938152) */

undefined8 FUN_14793802a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = FUN_147944cec();
  lVar2 = param_1[2];
  lVar9 = (longlong)iVar5 * 0x10;
  lVar8 = *(longlong *)(lVar2 + lVar9);
  iVar5 = *(int *)(lVar2 + 8 + lVar9);
  lVar11 = (longlong)iVar5;
  if (lVar11 != 0) {
    uVar7 = 0;
    do {
      if (((*(int *)(lVar8 + 0x10 + uVar7) == (int)param_3[2]) &&
          (*(longlong *)(lVar8 + 8 + uVar7) == param_3[1])) &&
         (*(longlong *)(lVar8 + uVar7) == *param_3)) {
        if ((int)(uVar7 >> 2) * -0x33333333 != -1) {
          uVar6 = 0;
          goto LAB_14793818b;
        }
        break;
      }
      uVar7 = uVar7 + 0x14;
    } while (lVar11 * 0x14 != uVar7);
  }
  plVar10 = (longlong *)(lVar2 + lVar9);
  *(uint *)(plVar10 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar10 + 0xc) < iVar5 + 1U) {
    FUN_147935bd4(plVar10,iVar5);
    lVar8 = *plVar10;
  }
  *(int *)(lVar8 + 0x10 + lVar11 * 0x14) = (int)param_3[2];
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar2 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  puVar1 = (undefined4 *)(lVar8 + lVar11 * 0x14);
  *puVar1 = (int)*param_3;
  puVar1[1] = uVar3;
  puVar1[2] = (int)lVar2;
  puVar1[3] = uVar4;
  local_48 = CONCAT44(local_48._4_4_,(int)param_3[2]);
  FUN_144aa221c(*param_1 + lVar9);
  lVar2 = param_1[4];
  plVar10 = (longlong *)(lVar2 + lVar9);
  FUN_1474d8648(&local_48,param_2);
  iVar5 = *(int *)(lVar2 + 8 + lVar9);
  *(uint *)(lVar2 + 8 + lVar9) = iVar5 + 1U;
  if (*(uint *)(lVar2 + 0xc + lVar9) < iVar5 + 1U) {
    FUN_1474d877e(plVar10,iVar5);
  }
  lVar2 = *plVar10;
  lVar8 = (longlong)iVar5 * 0x10;
  *(undefined8 *)(lVar2 + lVar8) = 0;
  *(undefined8 *)(lVar2 + lVar8) = local_48;
  *(undefined4 *)(lVar2 + 8 + lVar8) = (undefined4)local_40;
  *(undefined4 *)(lVar2 + 0xc + lVar8) = local_40._4_4_;
  local_40 = 0;
  local_48 = 0;
  lVar2 = *plVar10;
  (**(code **)(*param_2 + 0x2e8))(param_2,*(undefined8 *)(lVar2 + lVar8),1);
  uVar6 = *(undefined8 *)(lVar2 + lVar8);
LAB_14793818b:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1479381c0 FUN_1479381c0 body=338 status=ok
// SIG undefined FUN_1479381c0(void)

ulonglong FUN_1479381c0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14143f0c0();
  lVar6 = *(longlong *)(lVar2 + 0x110);
  if (lVar6 == 0) {
    FUN_140aa6c08(lVar2);
    lVar6 = *(longlong *)(lVar2 + 0x110);
  }
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  FUN_147938314((longlong *)(lVar6 + 0xb0),&local_38);
  if ((longlong)(int)uStack_30 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = (longlong)(int)uStack_30 << 3;
    plVar7 = local_38;
    do {
      if (*plVar7 == lVar2) {
        if (plVar7 != (longlong *)0x0) {
          if (*(int *)(lVar6 + 0xb8) == *(int *)(lVar6 + 0xe4)) goto LAB_14793828d;
          uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
          uVar4 = (uint)lVar2 & 0xffff;
          lVar3 = lVar6 + 0xe8;
          if (*(longlong *)(lVar6 + 0xf0) != 0) {
            lVar3 = *(longlong *)(lVar6 + 0xf0);
          }
          iVar5 = *(int *)(lVar3 + (ulonglong)
                                   (*(int *)(lVar6 + 0xf8) - 1U &
                                   (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                                   (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
          if (iVar5 == -1) goto LAB_14793828d;
          goto LAB_1479382f4;
        }
        break;
      }
      plVar7 = plVar7 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  plVar7 = (longlong *)(lVar6 + 0x100);
  goto LAB_147938248;
  while (iVar5 = *(int *)((longlong)plVar7 + 0xc), iVar5 != -1) {
LAB_1479382f4:
    plVar7 = (longlong *)(*(longlong *)(lVar6 + 0xb0) + (longlong)iVar5 * 0x14);
    if (*plVar7 == lVar2) goto LAB_147938290;
  }
LAB_14793828d:
  plVar7 = (longlong *)0x0;
LAB_147938290:
  plVar7 = plVar7 + 1;
LAB_147938248:
  lVar6 = *plVar7;
  if (local_38 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)&local_38 >> 8),(char)lVar6) & 0xffffffff;
}



// FUNCTION 147938314 FUN_147938314 body=314 status=ok
// SIG undefined FUN_147938314(void)

void FUN_147938314(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_1402191ca(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x14 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147938450 FUN_147938450 body=293 status=ok
// SIG undefined FUN_147938450(void)

void FUN_147938450(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    if ((longlong)(int)DAT_14cacd6d0 != 0) {
      lVar4 = (longlong)(int)DAT_14cacd6d0 << 3;
      lVar5 = DAT_14cacd6c8;
      do {
        cVar2 = FUN_14793ed9a(lVar5,param_1);
        if (cVar2 != '\0') goto LAB_147938566;
        lVar5 = lVar5 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    local_28 = 0;
    FUN_14485c47a(&local_28,param_1);
    iVar1 = DAT_14cacd6d0;
    lVar5 = (longlong)(int)DAT_14cacd6d0;
    DAT_14cacd6d0 = DAT_14cacd6d0 + 1;
    if (DAT_14cacd6d4 < DAT_14cacd6d0) {
      FUN_145cd0772(&DAT_14cacd6c8,iVar1);
    }
    *(undefined8 *)(DAT_14cacd6c8 + lVar5 * 8) = local_28;
    puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar3 = &PTR_FUN_14a7df7b0;
    puVar3[1] = 0;
    FUN_14485c47a(puVar3 + 1,param_1);
    iVar1 = DAT_14cacd6e0;
    lVar5 = (longlong)(int)DAT_14cacd6e0;
    DAT_14cacd6e0 = DAT_14cacd6e0 + 1;
    if (DAT_14cacd6e4 < DAT_14cacd6e0) {
      FUN_145cd0830(iVar1);
    }
    *(undefined8 **)(DAT_14cacd6d8 + lVar5 * 8) = puVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
LAB_147938566:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147938618 FUN_147938618 body=370 status=ok
// SIG undefined FUN_147938618(void)

void FUN_147938618(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar10 = *(uint *)(param_3 + 8);
  FUN_14005ea14(param_2,(ulonglong)uVar10);
  lVar7 = param_2[1];
  *(uint *)(param_2 + 1) = (int)lVar7 + uVar10;
  if ((uint)(*(int *)((longlong)param_2 + 0xc) - (int)lVar7) < uVar10) {
    FUN_14475e4ac(param_2);
  }
  if (0 < (int)uVar10) {
    uVar5 = 0;
    do {
      *(undefined4 *)(*param_2 + uVar5 * 4) = 0x3f800000;
      uVar5 = uVar5 + 1;
    } while (uVar10 != uVar5);
  }
  uVar2 = DAT_14cacd528;
  uVar6 = FUN_14479d2ce(param_3 + 0x40);
  lVar7 = FUN_14481774e(uVar2,*(undefined8 *)(param_1 + 0x30),uVar6);
  cVar3 = FUN_144729dda(lVar7);
  if ((cVar3 == '\0') || (cVar3 = FUN_144729dda(lVar7 + 8), cVar3 == '\0')) {
    iVar4 = *(int *)(param_1 + 0x40);
    if (0 < iVar4) {
      lVar7 = 0x10;
      lVar8 = 0;
      do {
        uVar10 = *(int *)(*(longlong *)(param_1 + 0x38) + -8 + lVar7) * 2 >> 1;
        if (((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_3 + 0x88))) &&
           (lVar9 = (longlong)*(int *)(*(longlong *)(param_3 + 0x80) + (ulonglong)uVar10 * 4),
           lVar9 != -1)) {
          *(undefined4 *)(*param_2 + lVar9 * 4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar7);
          iVar4 = *(int *)(param_1 + 0x40);
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x14;
      } while (lVar8 < iVar4);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x40);
    if (0 < iVar4) {
      lVar8 = 0x10;
      lVar9 = 0;
      do {
        uVar10 = *(int *)(*(longlong *)(param_1 + 0x38) + -8 + lVar8) * 2 >> 1;
        if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(lVar7 + 0x18))) {
          iVar1 = *(int *)(*(longlong *)(lVar7 + 0x10) + (ulonglong)uVar10 * 4);
          if ((-1 < (longlong)iVar1) &&
             ((iVar1 < *(int *)(param_3 + 0x88) &&
              (lVar11 = (longlong)*(int *)(*(longlong *)(param_3 + 0x80) + (longlong)iVar1 * 4),
              lVar11 != -1)))) {
            *(undefined4 *)(*param_2 + lVar11 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar8);
            iVar4 = *(int *)(param_1 + 0x40);
          }
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x14;
      } while (lVar9 < iVar4);
    }
  }
  return;
}



// FUNCTION 14793878a FUN_14793878a body=794 status=ok
// SIG undefined FUN_14793878a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14793878a(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_1 + 0x30);
  }
  auVar17 = in_XMM2;
  lVar7 = FUN_14481774e(DAT_14cacd528,*(longlong *)(param_1 + 0x30),param_4);
  auVar5 = _DAT_149931e80;
  if ((longlong)(int)param_2[1] != 0) {
    lVar12 = *param_2;
    uVar8 = (longlong)(int)param_2[1] + 0x3fffffffffffffff;
    uVar9 = uVar8 & 0x3fffffffffffffff;
    auVar15._8_4_ = (int)uVar9;
    auVar15._0_8_ = uVar9;
    auVar15._12_4_ = (int)(uVar9 >> 0x20);
    uVar10 = 0;
    auVar16 = pmovsxbq(in_XMM1,0x302);
    auVar17 = pmovsxbq(auVar17,0x100);
    auVar15 = auVar15 | _DAT_149931e80;
    lVar11 = auVar15._0_8_;
    do {
      lVar14 = auVar15._8_8_;
      uVar2 = in_XMM2._0_4_;
      if ((bool)(~(lVar11 < (longlong)(uVar10 ^ auVar5._0_8_)) & 1)) {
        *(undefined4 *)(lVar12 + uVar10 * 4) = uVar2;
      }
      auVar18._8_4_ = (int)uVar10;
      auVar18._0_8_ = uVar10;
      auVar18._12_4_ = (int)(uVar10 >> 0x20);
      if ((longlong)((auVar18._8_8_ | auVar17._8_8_) ^ auVar5._8_8_) <= lVar14) {
        *(undefined4 *)(lVar12 + 4 + uVar10 * 4) = uVar2;
      }
      auVar18 = (auVar18 | auVar16) ^ auVar5;
      if (auVar18._0_8_ <= lVar11) {
        *(undefined4 *)(lVar12 + 8 + uVar10 * 4) = uVar2;
      }
      if (auVar18._8_8_ <= lVar14) {
        *(undefined4 *)(lVar12 + 0xc + uVar10 * 4) = uVar2;
      }
      uVar10 = uVar10 + 4;
    } while ((uVar9 - ((uint)uVar8 & 3)) + 4 != uVar10);
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    cVar6 = FUN_144729dda(lVar7);
    if ((cVar6 == '\0') || (cVar6 = FUN_144729dda(lVar7 + 8), cVar6 == '\0')) {
      iVar3 = *(int *)(param_1 + 0x40);
      if ((longlong)iVar3 != 0) {
        lVar7 = *(longlong *)(param_1 + 0x38);
        lVar12 = 0;
        do {
          fVar1 = *(float *)(lVar7 + 0x10 + lVar12);
          if ((1e-08 < fVar1) && (iVar4 = *(int *)(lVar7 + 8 + lVar12) * 2, iVar4 != -2)) {
            lVar11 = (longlong)(iVar4 >> 1);
            *(float *)(*param_2 + lVar11 * 4) = *(float *)(*param_2 + lVar11 * 4) / fVar1;
          }
          lVar12 = lVar12 + 0x14;
        } while ((longlong)iVar3 * 0x14 != lVar12);
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x40);
      if ((longlong)iVar3 != 0) {
        lVar12 = *(longlong *)(param_1 + 0x38);
        lVar11 = 0;
        do {
          uVar13 = *(int *)(lVar12 + 8 + lVar11) * 2 >> 1;
          if ((((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(lVar7 + 0x18))) &&
              (fVar1 = *(float *)(lVar12 + 0x10 + lVar11), 1e-08 < fVar1)) &&
             (iVar4 = *(int *)(*(longlong *)(lVar7 + 0x10) + (ulonglong)uVar13 * 4), iVar4 != -1)) {
            *(float *)(*param_2 + (longlong)iVar4 * 4) =
                 *(float *)(*param_2 + (longlong)iVar4 * 4) / fVar1;
          }
          lVar11 = lVar11 + 0x14;
        } while ((longlong)iVar3 * 0x14 != lVar11);
      }
    }
  }
  else if (*(char *)(param_1 + 0x48) == '\0') {
    cVar6 = FUN_144729dda(lVar7);
    if ((cVar6 == '\0') || (cVar6 = FUN_144729dda(lVar7 + 8), cVar6 == '\0')) {
      iVar3 = *(int *)(param_1 + 0x40);
      if ((longlong)iVar3 != 0) {
        lVar7 = *(longlong *)(param_1 + 0x38);
        lVar12 = 0;
        do {
          iVar4 = *(int *)(lVar7 + 8 + lVar12) * 2;
          if (iVar4 != -2) {
            lVar11 = (longlong)(iVar4 >> 1);
            *(float *)(*param_2 + lVar11 * 4) =
                 *(float *)(lVar7 + 0x10 + lVar12) * *(float *)(*param_2 + lVar11 * 4);
          }
          lVar12 = lVar12 + 0x14;
        } while ((longlong)iVar3 * 0x14 != lVar12);
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x40);
      if ((longlong)iVar3 != 0) {
        lVar12 = *(longlong *)(param_1 + 0x38);
        lVar11 = 0;
        do {
          uVar13 = *(int *)(lVar12 + 8 + lVar11) * 2 >> 1;
          if (((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(lVar7 + 0x18))) &&
             (lVar14 = (longlong)*(int *)(*(longlong *)(lVar7 + 0x10) + (ulonglong)uVar13 * 4),
             lVar14 != -1)) {
            *(float *)(*param_2 + lVar14 * 4) =
                 *(float *)(lVar12 + 0x10 + lVar11) * *(float *)(*param_2 + lVar14 * 4);
          }
          lVar11 = lVar11 + 0x14;
        } while ((longlong)iVar3 * 0x14 != lVar11);
      }
    }
  }
  return;
}



// FUNCTION 147938aa4 FUN_147938aa4 body=387 status=ok
// SIG undefined FUN_147938aa4(void)

float FUN_147938aa4(float param_1,char param_2,undefined8 *param_3,float param_4,float param_5,
                   char param_6)

{
  float fVar1;
  
  if (param_2 == '\x01') {
    if (param_6 == '\0') {
      param_5 = param_1 * param_5;
      if (param_5 <= 1e-05) {
        param_5 = 1e-05;
      }
    }
    else {
      param_5 = (float)(~-(uint)(1e-05 < param_1) & 0x3f800000 |
                       (uint)(param_5 / param_1) & -(uint)(1e-05 < param_1));
      if (param_5 <= 1e-05) {
        param_5 = 1e-05;
      }
    }
  }
  else if (param_2 == '\0') {
    if (param_1 < 0.99999) {
      if (1.0 <= param_1) {
        param_1 = 1.0;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      if (param_1 <= 1e-05) {
        param_1 = 1.0;
        param_5 = (float)FUN_14002c5a6(0x3f800000,*(undefined1 *)((longlong)param_3 + 0x24),*param_3
                                      );
      }
      else {
        param_4 = param_4 / param_1;
        if (1.0 <= param_4) {
          param_4 = 1.0;
        }
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        param_5 = (float)FUN_14002c5a6(param_4,*(undefined1 *)((longlong)param_3 + 0x24),*param_3);
        param_1 = *(float *)((longlong)param_3 + 0xc) / param_1;
        if (1.0 <= param_1) {
          param_1 = 1.0;
        }
        if (param_1 <= 0.0) {
          param_1 = 0.0;
        }
      }
      fVar1 = (float)FUN_14002c5a6(param_1,*(undefined1 *)((longlong)param_3 + 0x24),*param_3);
      param_5 = (*(float *)(param_3 + 4) - param_5) * fVar1 + param_5;
      if (1.0 <= param_5) {
        param_5 = 1.0;
      }
      if (param_5 <= 1e-05) {
        param_5 = 1e-05;
      }
    }
    if (param_6 != '\0') {
      param_5 = 1.0 - param_5;
    }
  }
  return param_5;
}



// FUNCTION 147938c28 FUN_147938c28 body=180 status=ok
// SIG undefined FUN_147938c28(void)

void FUN_147938c28(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  ulonglong unaff_RBP;
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar2 = 4;
    lVar1 = 0;
    do {
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),(char)param_1[9]);
      if (lVar1 < (int)param_1[8]) {
        uVar3 = *(undefined4 *)(param_1[7] + lVar2 * 4);
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x2a0))(param_1);
      }
      uVar3 = FUN_147938aa4(uVar3,unaff_RBP & 0xffffffff,param_3,param_4,param_5,param_6);
      *(undefined4 *)(*(longlong *)(param_2 + 0x40) + lVar1 * 4) = uVar3;
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 5;
    } while (lVar1 < *(int *)(param_2 + 0x48));
  }
  return;
}



// FUNCTION 147938cdc FUN_147938cdc body=140 status=ok
// SIG undefined FUN_147938cdc(void)

void FUN_147938cdc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  switchD_143c3d4dc::caseD_38();
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x11c) * 0x28);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 300) * 0x18);
  lVar1 = FUN_14636f3fc();
  FUN_14484255c(param_2,(longlong)
                        (int)(-*(int *)(lVar1 + 0x5c) &
                             (*(int *)(lVar1 + 0x58) + *(int *)(lVar1 + 0x5c)) - 1U));
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x13c) << 4);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x14c) * 0xb8);
  return;
}



// FUNCTION 147938d68 FUN_147938d68 body=223 status=ok
// SIG undefined FUN_147938d68(void)

void FUN_147938d68(longlong param_1,longlong *param_2,uint param_3,longlong param_4,char param_5,
                  undefined1 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (0 < (int)param_2[1]) {
    lVar3 = 0x1c;
    uVar4 = 0;
    do {
      if (param_3 != uVar4) {
        lVar1 = *param_2;
        lVar2 = *(longlong *)(param_1 + 0x110);
        if (param_5 != '\0') {
          *(undefined4 *)(lVar1 + 0x14 + lVar3) = 0xfffffffe;
          *(undefined4 *)(lVar1 + 0x1c + lVar3) = 0xfffffffe;
        }
        lVar2 = *(longlong *)((longlong)*(int *)(lVar1 + -0x1c + lVar3) * 0x28 + lVar2);
        if (0 < *(int *)(lVar2 + 0x188)) {
          FUN_1433e77e4(lVar2,lVar1 + 0x14 + lVar3,param_4 + 0x78,lVar1 + lVar3 + -4,lVar1 + lVar3,
                        *(undefined4 *)(param_4 + 0xbc),param_6,param_7);
        }
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x60;
    } while ((longlong)uVar4 < (longlong)(int)param_2[1]);
  }
  return;
}



// FUNCTION 147938e48 FUN_147938e48 body=1888 status=ok
// SIG undefined FUN_147938e48(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_147938e48(longlong param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong lVar4;
  PVOID pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  char cVar14;
  uint uVar15;
  undefined8 uVar16;
  RTL_SRWLOCK *pRVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  int iVar30;
  longlong *plVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  bool bVar35;
  float fVar36;
  undefined1 auStack_3b8 [40];
  undefined8 *local_390;
  undefined8 *local_388;
  longlong local_380;
  RTL_SRWLOCK local_378;
  longlong local_370;
  undefined8 auStack_368 [3];
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_344;
  undefined4 local_33c;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f4;
  undefined4 local_2ec;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  uVar16 = *(undefined8 *)(param_1 + -0x48);
  local_388 = param_2;
  memset(&local_378,0,0xa8);
  InitializeSRWLock(&local_378);
  local_350 = 0;
  local_348 = 0;
  local_370 = 0;
  auStack_368[0] = 0;
  local_344 = 0xffffffff00000080;
  local_33c = 0;
  local_330 = 0;
  local_328 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_320 = 0;
  uStack_318 = 0;
  local_2f4 = 0xffffffff00000080;
  local_2ec = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  uVar16 = FUN_14481774e(DAT_14cacd528,uVar16,param_3);
  FUN_145983aba(&local_378);
  local_390 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *local_390 = &PTR_FUN_14a7daaa0;
  local_390[1] = uVar16;
  local_390[2] = 0;
  local_390[3] = 0;
  plVar31 = local_390 + 2;
  FUN_1479395aa(plVar31);
  if (*(int *)(param_1 + 0x78) != 0) {
    local_380 = param_3 + 0x50;
    lVar23 = 0;
    lVar21 = 0;
    uVar24 = 0;
    do {
      lVar4 = *plVar31;
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x70) + lVar23);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(undefined4 *)(lVar4 + 0x10 + lVar21) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x10 + lVar23);
      puVar2 = (undefined4 *)(lVar4 + lVar21);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      *(int *)(lVar4 + 0x14 + lVar21) = (int)uVar24;
      cVar14 = (**(code **)(*(longlong *)(param_1 + -0x88) + 0x1c0))(param_1 + -0x88);
      if (cVar14 == '\0') {
        lVar4 = *plVar31;
        if ((param_3 == 0) || (*(longlong *)(lVar21 + lVar4) == 0)) {
          puVar3 = (uint *)(lVar4 + 8 + lVar21);
          *puVar3 = *puVar3 | 0x7fffffff;
        }
        else {
          uVar15 = FUN_144a750a0(local_380);
          *(uint *)(lVar4 + 8 + lVar21) = uVar15 | 0x80000000;
        }
        *(undefined4 *)(lVar4 + 0xc + lVar21) = 0xffffffff;
      }
      uVar24 = uVar24 + 1;
      lVar21 = lVar21 + 0x18;
      lVar23 = lVar23 + 0x14;
    } while (uVar24 != *(uint *)(param_1 + 0x78));
  }
  iVar27 = *(int *)(local_390 + 3);
  if (1 < (longlong)iVar27) {
    pvVar5 = (PVOID)*plVar31;
    memset(auStack_368,0,0x2f0);
    local_370 = (longlong)pvVar5 + (longlong)iVar27 * 0x18 + -0x18;
    local_378.Ptr = pvVar5;
    fVar36 = logf((float)iVar27);
    auStack_368[0] = CONCAT44(auStack_368[0]._4_4_,(int)(longlong)(fVar36 + fVar36));
    pRVar17 = &local_378;
    do {
      puVar20 = pRVar17->Ptr;
      puVar25 = pRVar17[1].Ptr;
      iVar27 = *(int *)&pRVar17[2].Ptr;
      iVar22 = (int)((ulonglong)((longlong)puVar25 - (longlong)puVar20) >> 3) * -0x55555555;
      uVar15 = iVar22 + 1;
      puVar18 = puVar25;
      puVar33 = puVar20;
      if (iVar27 != 0) {
LAB_147939073:
        if (8 < (int)uVar15) {
          uVar24 = (ulonglong)(uVar15 >> 1);
          uVar16 = puVar20[uVar24 * 3 + 2];
          uVar10 = puVar20[uVar24 * 3];
          uVar11 = (puVar20 + uVar24 * 3)[1];
          puVar20[uVar24 * 3 + 2] = puVar20[2];
          uVar12 = puVar20[1];
          puVar20[uVar24 * 3] = *puVar20;
          (puVar20 + uVar24 * 3)[1] = uVar12;
          puVar20[2] = uVar16;
          *puVar20 = uVar10;
          puVar20[1] = uVar11;
          puVar29 = puVar25 + 3;
          puVar19 = puVar20;
          do {
            puVar13 = puVar19 + 3;
            puVar26 = puVar19 + 3;
            do {
              puVar19 = puVar26;
              puVar34 = puVar13;
              if (puVar25 < puVar19) break;
              puVar13 = puVar34 + 3;
              puVar26 = puVar19 + 3;
            } while (*(int *)(puVar20 + 1) * 2 <= *(int *)(puVar19 + 1) * 2);
            puVar13 = puVar29 + -6;
            do {
              puVar26 = puVar29;
              puVar32 = puVar13;
              puVar29 = puVar26 + -3;
              if (puVar29 <= puVar20) break;
              puVar13 = puVar32 + -3;
            } while (*(int *)(puVar26 + -2) * 2 <= *(int *)(puVar20 + 1) * 2);
            if (puVar29 < puVar19) goto LAB_14793916c;
            uVar16 = puVar19[2];
            uVar10 = *puVar19;
            uVar11 = puVar19[1];
            puVar19[2] = puVar26[-1];
            uVar12 = puVar26[-2];
            *puVar19 = *puVar29;
            puVar19[1] = uVar12;
            puVar26[-1] = uVar16;
            *puVar29 = uVar10;
            puVar26[-2] = uVar11;
          } while( true );
        }
        for (; puVar33 = puVar20, puVar18 = puVar20, puVar20 < puVar25;
            puVar25 = (undefined8 *)((longlong)puVar25 + 0xffffffffffffffe8)) {
          while (puVar29 = puVar33, puVar18 = puVar18 + 3, puVar18 <= puVar25) {
            puVar33 = puVar18;
            if (*(int *)(puVar29 + 1) * 2 <= *(int *)(puVar18 + 1) * 2) {
              puVar33 = puVar29;
            }
          }
          local_68 = puVar29[2];
          local_78 = *puVar29;
          uStack_70 = puVar29[1];
          uVar10 = local_78;
          uVar11 = uStack_70;
          puVar29[2] = *(undefined8 *)((longlong)puVar25 + 0x10);
          uVar16 = *(undefined8 *)((longlong)puVar25 + 8);
          *puVar29 = *puVar25;
          puVar29[1] = uVar16;
          *(undefined8 *)((longlong)puVar25 + 0x10) = local_68;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          *(undefined4 *)puVar25 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar25 + 4) = local_78._4_4_;
          *(undefined4 *)((longlong)puVar25 + 8) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_70._4_4_;
          local_78 = uVar10;
          uStack_70 = uVar11;
        }
        goto LAB_147939527;
      }
LAB_14793923b:
      if (uVar15 != 0) {
        iVar27 = (iVar22 - (iVar22 + -1 >> 0x1f)) + -1 >> 1;
        iVar22 = iVar27;
joined_r0x00014793925c:
        do {
          iVar28 = iVar27 * 2 + 1;
          if (iVar28 < (int)uVar15) {
            iVar30 = iVar27 * 2 + 2;
            if ((iVar30 < (int)uVar15) &&
               (*(int *)(puVar20 + (longlong)iVar30 * 3 + 1) * 2 <=
                *(int *)(puVar20 + (longlong)iVar28 * 3 + 1) * 2)) {
              iVar28 = iVar30;
            }
            if (*(int *)(puVar20 + (longlong)iVar28 * 3 + 1) * 2 <
                *(int *)(puVar20 + (longlong)iVar27 * 3 + 1) * 2) {
              puVar25 = puVar20 + (longlong)iVar27 * 3;
              puVar18 = puVar20 + (longlong)iVar28 * 3;
              local_68 = puVar25[2];
              local_78 = *puVar25;
              uStack_70 = puVar25[1];
              uVar10 = local_78;
              uVar11 = uStack_70;
              puVar25[2] = puVar18[2];
              uVar16 = puVar18[1];
              *puVar25 = *puVar18;
              puVar25[1] = uVar16;
              puVar18[2] = local_68;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              *(undefined4 *)puVar18 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar18 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_70._4_4_;
              iVar27 = iVar28;
              local_78 = uVar10;
              uStack_70 = uVar11;
              goto joined_r0x00014793925c;
            }
          }
          bVar35 = iVar22 != 0;
          iVar27 = iVar22 + -1;
          iVar22 = iVar27;
        } while (bVar35);
        if (1 < (int)uVar15) {
          uVar24 = (ulonglong)uVar15 - 1;
          local_68 = puVar20[2];
          local_78 = *puVar20;
          uStack_70 = puVar20[1];
          uVar10 = local_78;
          uVar11 = uStack_70;
          puVar20[2] = puVar20[uVar24 * 3 + 2];
          uVar16 = (puVar20 + uVar24 * 3)[1];
          *puVar20 = puVar20[uVar24 * 3];
          puVar20[1] = uVar16;
          puVar20[uVar24 * 3 + 2] = local_68;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          puVar25 = puVar20 + uVar24 * 3;
          *(undefined4 *)puVar25 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar25 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_70._4_4_;
          local_78 = uVar10;
          uStack_70 = uVar11;
          if (uVar15 != 2) {
            do {
              iVar27 = 0;
              iVar28 = 1;
              iVar22 = 0;
              do {
                iVar27 = iVar27 + 2;
                iVar30 = iVar28;
                if (((longlong)iVar27 < (longlong)uVar24) &&
                   (*(int *)(puVar20 + (longlong)iVar27 * 3 + 1) * 2 <=
                    *(int *)(puVar20 + (longlong)iVar28 * 3 + 1) * 2)) {
                  iVar30 = iVar27;
                }
                if (*(int *)(puVar20 + (longlong)iVar22 * 3 + 1) * 2 <=
                    *(int *)(puVar20 + (longlong)iVar30 * 3 + 1) * 2) break;
                puVar25 = puVar20 + (longlong)iVar22 * 3;
                puVar18 = puVar20 + (longlong)iVar30 * 3;
                uVar16 = puVar25[2];
                uVar10 = *puVar25;
                uVar11 = puVar25[1];
                puVar25[2] = puVar18[2];
                uVar12 = puVar18[1];
                *puVar25 = *puVar18;
                puVar25[1] = uVar12;
                puVar18[2] = uVar16;
                *puVar18 = uVar10;
                puVar18[1] = uVar11;
                iVar27 = iVar30 * 2;
                iVar28 = iVar30 * 2 + 1;
                iVar22 = iVar30;
              } while ((longlong)iVar28 < (longlong)uVar24);
              uVar1 = uVar24 - 1;
              local_68 = puVar20[2];
              local_78 = *puVar20;
              uStack_70 = puVar20[1];
              uVar10 = local_78;
              uVar11 = uStack_70;
              puVar20[2] = puVar20[uVar1 * 3 + 2];
              uVar16 = (puVar20 + uVar1 * 3)[1];
              *puVar20 = puVar20[uVar1 * 3];
              puVar20[1] = uVar16;
              puVar20[uVar1 * 3 + 2] = local_68;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              puVar25 = puVar20 + uVar1 * 3;
              *(undefined4 *)puVar25 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar25 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_70._4_4_;
              bVar35 = 2 < uVar24;
              uVar24 = uVar1;
              local_78 = uVar10;
              uStack_70 = uVar11;
            } while (bVar35);
          }
        }
      }
LAB_147939527:
      pRVar17 = pRVar17 + -3;
    } while (&local_378 <= pRVar17);
  }
  puVar20 = local_388;
  puVar25 = local_390;
  *local_388 = local_390;
  puVar18 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar18[1] = &DAT_100000001;
  *puVar18 = &PTR_LAB_14a7df800;
  puVar18[2] = puVar25;
  puVar20[1] = puVar18;
  if ((local_60 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar20;
LAB_14793916c:
  local_68 = puVar20[2];
  local_78 = *puVar20;
  uStack_70 = puVar20[1];
  uVar10 = local_78;
  uVar11 = uStack_70;
  puVar20[2] = puVar26[-1];
  uVar16 = puVar26[-2];
  *puVar20 = *puVar29;
  puVar20[1] = uVar16;
  puVar26[-1] = local_68;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  *(undefined4 *)puVar29 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar26 + -0x14) = local_78._4_4_;
  *(undefined4 *)(puVar26 + -2) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar26 + -0xc) = uStack_70._4_4_;
  iVar27 = iVar27 + -1;
  puVar26 = puVar26 + -6;
  local_78 = uVar10;
  uStack_70 = uVar11;
  if ((longlong)puVar32 - (longlong)puVar33 < (longlong)puVar18 - (longlong)puVar34) {
    if (puVar19 < puVar25) {
      pRVar17->Ptr = puVar19;
      pRVar17[1].Ptr = puVar25;
      *(int *)&pRVar17[2].Ptr = iVar27;
      pRVar17 = pRVar17 + 3;
    }
    puVar34 = puVar20;
    if (puVar29 <= puVar20 + 3) goto LAB_147939527;
  }
  else {
    if (puVar20 + 3 < puVar29) {
      pRVar17->Ptr = puVar20;
      pRVar17[1].Ptr = puVar26;
      *(int *)&pRVar17[2].Ptr = iVar27;
      pRVar17 = pRVar17 + 3;
    }
    puVar20 = puVar19;
    puVar26 = puVar25;
    puVar32 = puVar25;
    if (puVar25 <= puVar19) goto LAB_147939527;
  }
  iVar22 = (int)((ulonglong)((longlong)puVar32 - (longlong)puVar34) >> 3) * -0x55555555;
  uVar15 = iVar22 + 1;
  puVar25 = puVar26;
  puVar18 = puVar32;
  puVar33 = puVar34;
  if (iVar27 == 0) goto LAB_14793923b;
  goto LAB_147939073;
}



// FUNCTION 1479395aa FUN_1479395aa body=71 status=ok
// SIG undefined FUN_1479395aa(void)

void FUN_1479395aa(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14794ac90();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_14794ad24();
      return;
    }
  }
  return;
}



// FUNCTION 1479395f2 FUN_1479395f2 body=360 status=ok
// SIG undefined FUN_1479395f2(void)

undefined4 FUN_1479395f2(undefined8 param_1,int *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = 0xffffffff;
  if ((param_4 != 0) && (0 < *(int *)(param_4 + 0x18))) {
    lVar2 = *(longlong *)(param_4 + 8);
    local_58 = lVar2 + 8;
    lVar8 = 0x14;
    lVar7 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_4 + 0x10) + -0xc + lVar8);
      iVar3 = iVar1 * 2;
      uVar9 = 0xffffffff;
      uVar10 = uVar9;
      if ((((iVar3 != -2) && (uVar5 = iVar3 >> 1, uVar10 = uVar5, -1 < iVar1)) &&
          (uVar10 = uVar9, -1 < (int)uVar5)) && ((int)uVar5 < *(int *)(param_3 + 0x68))) {
        uVar10 = *(uint *)(*(longlong *)(param_3 + 0x60) + (ulonglong)uVar5 * 4);
      }
      uVar6 = *(undefined4 *)(*(longlong *)(param_4 + 0x10) + lVar8);
      cVar4 = FUN_144729dda(lVar2);
      if ((cVar4 == '\0') || (cVar4 = FUN_144729dda(local_58), cVar4 == '\0')) {
LAB_1479396a0:
        local_4c = -1;
        if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_3 + 0x88))) {
          local_4c = *(int *)(*(longlong *)(param_3 + 0x80) + (ulonglong)uVar10 * 4);
        }
      }
      else {
        if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(lVar2 + 0x18))) {
          uVar10 = *(uint *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)uVar10 * 4);
          goto LAB_1479396a0;
        }
        local_4c = -1;
      }
      if ((local_4c == *param_2) ||
         ((local_4c != -1 && (cVar4 = FUN_14798322c(param_3,param_2,&local_4c), cVar4 != '\0'))))
      goto LAB_147939731;
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar7 < *(int *)(param_4 + 0x18));
    uVar6 = 0xffffffff;
  }
LAB_147939731:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14793975c FUN_14793975c body=262 status=ok
// SIG undefined FUN_14793975c(void)

undefined4 FUN_14793975c(undefined8 param_1,uint param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  if ((param_2 != 0xffffffff && param_4 != 0) &&
     (iVar1 = *(int *)(param_4 + 0x18), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(param_4 + 8);
    lVar4 = *(longlong *)(param_4 + 0x10);
    lVar10 = 0;
    do {
      iVar2 = *(int *)(lVar4 + 8 + lVar10);
      iVar5 = iVar2 * 2;
      uVar8 = 0xffffffff;
      uVar9 = uVar8;
      if ((((iVar5 != -2) && (uVar7 = iVar5 >> 1, uVar9 = uVar7, -1 < iVar2)) &&
          (uVar9 = uVar8, -1 < (int)uVar7)) && ((int)uVar7 < DAT_14caccc28)) {
        uVar9 = *(uint *)(DAT_14caccc20 + (ulonglong)uVar7 * 4);
      }
      cVar6 = FUN_144729dda(lVar3);
      uVar8 = uVar9;
      if (((cVar6 != '\0') && (cVar6 = FUN_144729dda(lVar3 + 8), cVar6 != '\0')) &&
         ((uVar8 = 0xffffffff, -1 < (int)uVar9 && ((int)uVar9 < *(int *)(lVar3 + 0x18))))) {
        uVar8 = *(uint *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)uVar9 * 4);
      }
      if ((uVar8 == param_2) ||
         ((uVar8 != 0xffffffff && (cVar6 = FUN_1404183aa(param_3 + 0x50,param_2), cVar6 != '\0'))))
      {
        return *(undefined4 *)(lVar4 + 0x14 + lVar10);
      }
      lVar10 = lVar10 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar10);
  }
  return 0xffffffff;
}



// FUNCTION 14793986a FUN_14793986a body=54 status=ok
// SIG undefined FUN_14793986a(void)

void FUN_14793986a(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c0))();
  if (cVar1 != '\0') {
    FUN_142400d60(*param_2,*(undefined4 *)(param_2 + 1));
    return;
  }
  FUN_1448859f0(param_2,param_2[2]);
  return;
}



// FUNCTION 1479398b0 FUN_1479398b0 body=56 status=ok
// SIG undefined FUN_1479398b0(void)

void FUN_1479398b0(longlong param_1,uint *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 8) * 2;
  uVar2 = 0xffffffff;
  uVar3 = uVar2;
  if ((((iVar1 != -2) && (uVar4 = iVar1 >> 1, uVar3 = uVar4, *(int *)(param_1 + 8) < 0)) &&
      (uVar3 = uVar2, -1 < (int)uVar4)) && ((int)uVar4 < *(int *)(param_3 + 0x58))) {
    uVar3 = *(uint *)(*(longlong *)(param_3 + 0x50) + (ulonglong)uVar4 * 4);
  }
  *param_2 = uVar3;
  return;
}



// FUNCTION 1479398e8 FUN_1479398e8 body=26 status=ok
// SIG undefined FUN_1479398e8(void)

longlong * FUN_1479398e8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x160))();
  return param_1;
}



// FUNCTION 147939906 FUN_147939906 body=67 status=ok
// SIG undefined FUN_147939906(void)

void FUN_147939906(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if ((ulonglong)uVar1 != 0xffffffff) {
    uVar3 = 0xffffffff;
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_2 + 0x68))) {
      iVar2 = *(int *)(*(longlong *)(param_2 + 0x60) + (ulonglong)uVar1 * 4);
      if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_2 + 0x88))) {
        uVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0x80) + (longlong)iVar2 * 4);
      }
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
  }
  return;
}



// FUNCTION 14793994a FUN_14793994a body=74 status=ok
// SIG undefined FUN_14793994a(void)

undefined8 FUN_14793994a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  float fVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  
  cVar1 = FUN_1433ede92();
  fVar2 = 0.0;
  uVar4 = 0;
  if (cVar1 != '\0') {
    fVar2 = (float)FUN_1478ee8f2(0,*(undefined4 *)(param_1 + 0x10));
    uVar3 = FUN_1478eea60(param_2,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar2 = (float)uVar3 * fVar2;
  }
  return CONCAT44(uVar4,fVar2);
}



// FUNCTION 147939994 FUN_147939994 body=134 status=ok
// SIG undefined FUN_147939994(void)

float FUN_147939994(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  cVar1 = FUN_1433edf40();
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    if ((longlong)(int)param_1[1] != 0) {
      lVar2 = *param_1;
      lVar3 = (longlong)(int)param_1[1] * 0x1c;
      do {
        cVar1 = FUN_1433ede92(lVar2,param_2);
        fVar4 = 0.0;
        if (cVar1 != '\0') {
          fVar4 = (float)FUN_1478eea60(param_2,*(undefined4 *)(lVar2 + 0x10),
                                       *(undefined4 *)(lVar2 + 0x14));
        }
        fVar5 = fVar5 + fVar4;
        lVar2 = lVar2 + 0x1c;
        lVar3 = lVar3 + -0x1c;
      } while (lVar3 != 0);
    }
    if ((*(char *)((longlong)param_1 + 0x12) == '\0') && (1.0 <= fVar5)) {
      fVar5 = 1.0;
    }
  }
  return fVar5;
}



// FUNCTION 147939a1a FUN_147939a1a body=709 status=ok
// SIG undefined FUN_147939a1a(void)

bool FUN_147939a1a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  float extraout_XMM0_Da;
  float fVar12;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)((longlong)param_1 + 0x12) == '\x01') {
    cVar4 = FUN_1433edf40(param_1);
    if (cVar4 != '\0') {
      iVar8 = 0;
      local_78 = 0;
      local_70 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      if ((longlong)*(int *)(param_1 + 1) == 0) {
        local_b0 = local_88;
        local_b8 = 0x100000000;
        local_a8 = 0xffffffff;
        local_a0 = 0;
      }
      else {
        puVar9 = (undefined8 *)*param_1;
        lVar11 = (longlong)*(int *)(param_1 + 1) * 0x1c;
        do {
          cVar4 = FUN_1433ede92(puVar9,param_2);
          fVar12 = 0.0;
          if (cVar4 != '\0') {
            fVar12 = (float)FUN_1478eea60(param_2,*(undefined4 *)(puVar9 + 2),
                                          *(undefined4 *)((longlong)puVar9 + 0x14));
          }
          uVar1 = *puVar9;
          uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
          uVar10 = (uint)uVar1 & 0xffff;
          pfVar7 = (float *)FUN_1478fc374(local_98,((uint)uVar1 << 0x10 | uVar10) +
                                                   (int)((ulonglong)uVar1 >> 0x20) +
                                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4),
                                          puVar9);
          *pfVar7 = fVar12 + *pfVar7;
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x1c);
          lVar11 = lVar11 + -0x1c;
        } while (lVar11 != 0);
        local_b0 = local_88;
        local_b8 = 0x100000000;
        local_a8 = 0xffffffff;
        local_a0 = 0;
        if (local_70 == 0) {
          iVar8 = 0;
        }
        else {
          FUN_1449c0562(&local_b8);
          iVar8 = local_70;
        }
      }
      local_c8 = local_a8;
      uVar1 = local_c8;
      local_c0 = local_a0;
      local_bc = local_9c;
      local_d8 = local_b8;
      local_d0 = local_b0;
      local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      local_e0 = local_98;
      local_c8 = uVar1;
      if ((local_c8._4_4_ == iVar8) && (local_b0 == local_88)) {
        bVar2 = false;
      }
      else {
        iVar6 = local_c8._4_4_;
        do {
          bVar2 = 0.99999 <= *(float *)(*local_e0 + 8 + (longlong)iVar6 * 0x14);
          if (bVar2) break;
          local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
          FUN_1449c0562(&local_d8);
          iVar6 = local_c8._4_4_;
        } while (local_e0 != local_98 || (local_d0 != local_88 || local_c8._4_4_ != iVar8));
      }
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_14064e7da(local_98);
      bVar5 = true;
      if (bVar2) goto LAB_147939bf4;
    }
    bVar5 = false;
  }
  else {
    FUN_147939994(param_1,param_2);
    bVar5 = 0.99999 <= extraout_XMM0_Da;
  }
LAB_147939bf4:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 147939ce0 FUN_147939ce0 body=122 status=ok
// SIG undefined FUN_147939ce0(void)

undefined8 FUN_147939ce0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float extraout_XMM0_Da;
  
  cVar1 = FUN_1433edf40();
  if ((cVar1 != '\0') && ((longlong)(int)param_1[1] != 0)) {
    lVar3 = *param_1;
    lVar2 = (longlong)(int)param_1[1] * 0x1c;
    do {
      cVar1 = FUN_1433ede92(lVar3,param_2);
      if ((cVar1 != '\0') &&
         (FUN_1478eea60(param_2,*(undefined4 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x14)),
         1e-05 < extraout_XMM0_Da)) {
        return 1;
      }
      lVar3 = lVar3 + 0x1c;
      lVar2 = lVar2 + -0x1c;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 147939d5a FUN_147939d5a body=59 status=ok
// SIG undefined FUN_147939d5a(void)

undefined8 FUN_147939d5a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1433ee068();
  if ((*(int *)(param_1 + 0x10) != -1) && (*(int *)(param_1 + 0x14) != -1)) {
    uVar1 = FUN_1478f01c6(param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 147939d96 FUN_147939d96 body=59 status=ok
// SIG undefined FUN_147939d96(void)

undefined8 FUN_147939d96(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1433ee068();
  if ((*(int *)(param_1 + 0x10) != -1) && (*(int *)(param_1 + 0x14) != -1)) {
    uVar1 = FUN_14066a91c(param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 147939dd2 FUN_147939dd2 body=59 status=ok
// SIG undefined FUN_147939dd2(void)

undefined8 FUN_147939dd2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1433ee068();
  if ((*(int *)(param_1 + 0x10) != -1) && (*(int *)(param_1 + 0x14) != -1)) {
    uVar1 = FUN_1478f04b6(param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 147939e0e FUN_147939e0e body=59 status=ok
// SIG undefined FUN_147939e0e(void)

undefined8 FUN_147939e0e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1433ee0f0();
  if ((*(int *)(param_1 + 0x18) != -1) && (*(int *)(param_1 + 0x1c) != -1)) {
    uVar1 = FUN_1478eebd8(param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 147939e4a FUN_147939e4a body=285 status=ok
// SIG undefined FUN_147939e4a(void)

void FUN_147939e4a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xffffffffffffffff;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = 0;
  if (local_20 != 0) {
    puVar1 = &local_48;
    if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_2 + 0x38);
    }
    uVar2 = FUN_147939e0e(puVar1);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147939f68 FUN_147939f68 body=276 status=ok
// SIG undefined FUN_147939f68(void)

void FUN_147939f68(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffffffffffff;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = 0;
  if (local_20 != 0) {
    puVar1 = &local_48;
    if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_2 + 0x38);
    }
    uVar2 = FUN_14793994a(puVar1);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793a07e FUN_14793a07e body=330 status=ok
// SIG undefined FUN_14793a07e(void)

void FUN_14793a07e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffffffffffff;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  lVar2 = local_48;
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = 0;
  if (local_48 != 0) {
    puVar4 = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = &local_68;
    }
    cVar3 = FUN_1433ede92(puVar4,local_48);
    if (cVar3 != '\0') {
      puVar4 = &local_68;
      if (puVar1 != (undefined8 *)0x0) {
        puVar4 = puVar1;
      }
      uVar5 = FUN_1478eea60(lVar2,*(undefined4 *)(puVar4 + 2),
                            *(undefined4 *)((longlong)puVar4 + 0x14));
    }
  }
  *param_3 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793a1ca FUN_14793a1ca body=276 status=ok
// SIG undefined FUN_14793a1ca(void)

void FUN_14793a1ca(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffffffffffff;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = 0;
  if (local_20 != 0) {
    puVar1 = &local_48;
    if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_2 + 0x38);
    }
    uVar2 = FUN_147939d5a(puVar1);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793a2e0 FUN_14793a2e0 body=276 status=ok
// SIG undefined FUN_14793a2e0(void)

void FUN_14793a2e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffffffffffff;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = 0;
  if (local_20 != 0) {
    puVar1 = &local_48;
    if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_2 + 0x38);
    }
    uVar2 = FUN_147939d96(puVar1);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793a3f6 FUN_14793a3f6 body=276 status=ok
// SIG undefined FUN_14793a3f6(void)

void FUN_14793a3f6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffffffffffff;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = 0;
  if (local_20 != 0) {
    puVar1 = &local_48;
    if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_2 + 0x38);
    }
    uVar2 = FUN_147939dd2(puVar1);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793a50c FUN_14793a50c body=296 status=ok
// SIG undefined FUN_14793a50c(void)

void FUN_14793a50c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined2 local_28;
  undefined1 local_26;
  longlong local_20;
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
  local_28 = 0x100;
  local_26 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = 0;
  if (local_20 != 0) {
    plVar1 = local_38;
    if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_2 + 0x38);
    }
    uVar2 = FUN_147939994(plVar1);
  }
  *param_3 = uVar2;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793a63c FUN_14793a63c body=293 status=ok
// SIG undefined FUN_14793a63c(void)

void FUN_14793a63c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined2 local_28;
  undefined1 local_26;
  longlong local_20;
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
  local_28 = 0x100;
  local_26 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 == 0) {
    uVar1 = 0;
  }
  else {
    plVar2 = local_38;
    if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_2 + 0x38);
    }
    uVar1 = FUN_147939a1a(plVar2);
  }
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793a768 FUN_14793a768 body=293 status=ok
// SIG undefined FUN_14793a768(void)

void FUN_14793a768(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined2 local_28;
  undefined1 local_26;
  longlong local_20;
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
  local_28 = 0x100;
  local_26 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 == 0) {
    uVar1 = 0;
  }
  else {
    plVar2 = local_38;
    if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_2 + 0x38);
    }
    uVar1 = FUN_147939ce0(plVar2);
  }
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793a894 FUN_14793a894 body=254 status=ok
// SIG undefined FUN_14793a894(void)

void FUN_14793a894(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffffffffffff;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14793a994(local_20,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793a994 FUN_14793a994 body=68 status=ok
// SIG undefined FUN_14793a994(void)

bool FUN_14793a994(longlong param_1,longlong param_2)

{
  char cVar1;
  float extraout_XMM0_Da;
  
  if ((param_1 != 0) && (cVar1 = FUN_1433ede92(param_2,param_1), cVar1 != '\0')) {
    FUN_1478eea60(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
    return 1e-05 < extraout_XMM0_Da;
  }
  return false;
}



// FUNCTION 14793a9dc FUN_14793a9dc body=179 status=ok
// SIG undefined FUN_14793a9dc(void)

void FUN_14793a9dc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0x303;
  local_1e = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *puVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793aa90 FUN_14793aa90 body=178 status=ok
// SIG undefined FUN_14793aa90(void)

void FUN_14793aa90(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0x303;
  local_1e = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *param_3 = *(undefined1 *)(puVar1 + 1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793ab4a FUN_14793ab4a body=191 status=ok
// SIG undefined FUN_14793ab4a(void)

void FUN_14793ab4a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined2 local_20;
  undefined1 local_1e;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0x303;
  local_1e = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = (char)plVar1[1] != '\x03' && *plVar1 != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793ac0e FUN_14793ac0e body=155 status=ok
// SIG undefined FUN_14793ac0e(void)

undefined8 * FUN_14793ac0e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  lVar1 = FUN_14171b860(param_2,DAT_14caccf98);
  if (lVar1 == 0) {
    uVar2 = FUN_1459e924a();
    plVar3 = (longlong *)FUN_1468ff240(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_20);
    }
  }
  else {
    (**(code **)(*param_2 + 0x248))(param_2,lVar1,&local_20);
  }
  *param_1 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793acaa FUN_14793acaa body=89 status=ok
// SIG undefined FUN_14793acaa(void)

void FUN_14793acaa(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x10))(param_1,&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793ad04 FUN_14793ad04 body=252 status=ok
// SIG undefined FUN_14793ad04(void)

void FUN_14793ad04(longlong *param_1,void **param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  lVar2 = FUN_14171b860(0,DAT_14caccfa8);
  if (lVar2 == 0) {
    uVar3 = FUN_1459e924a();
    puVar4 = (undefined8 *)FUN_1468ff240(param_1,uVar3);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,param_2);
    }
  }
  else {
    FUN_14793ae02(&local_38,param_2);
    (**(code **)(*param_1 + 0x248))(param_1,lVar2,&local_38);
    _Src = local_38;
    if (&local_38 != param_2) {
      iVar1 = (int)uStack_30;
      lVar2 = (longlong)(int)uStack_30;
      *(int *)(param_2 + 1) = (int)uStack_30;
      if ((int)uStack_30 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_14794b126(param_2,uStack_30 & 0xffffffff);
        if (iVar1 != 0) {
          memcpy(*param_2,_Src,lVar2 * 0xc);
        }
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793ae02 FUN_14793ae02 body=89 status=ok
// SIG undefined FUN_14793ae02(void)

undefined8 * FUN_14793ae02(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14794b126(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 14793ae5c FUN_14793ae5c body=180 status=ok
// SIG undefined FUN_14793ae5c(void)

void FUN_14793ae5c(undefined8 *param_1,longlong param_2)

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
  (**(code **)*param_1)(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793af12 FUN_14793af12 body=166 status=ok
// SIG undefined FUN_14793af12(void)

void FUN_14793af12(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793afea FUN_14793afea body=244 status=ok
// SIG undefined FUN_14793afea(void)

void FUN_14793afea(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined4 **local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(**(longlong **)(*param_2 + 0x130) + 0x248))
              (*(longlong **)(*param_2 + 0x130),*(longlong *)(param_1 + 8),0);
  }
  if ((0 < (int)*(uint *)(param_1 + 0x20)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    uVar1 = *(undefined8 *)(*param_2 + 0x130);
    local_4c = 0;
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x20) << 3;
    do {
      if ((*(char *)((longlong)puVar2 + 5) != '\x01') || ((char)param_2[2] == '\x01')) {
        local_58 = &local_68;
        local_60 = &LAB_1433f507a;
        local_78 = &local_60;
        local_68 = puVar2;
        FUN_14477ddc7(uVar1,*(undefined8 *)(param_1 + 0x28),&local_4c,*puVar2);
      }
      puVar2 = puVar2 + 2;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14793b110 FUN_14793b110 body=587 status=ok
// SIG undefined FUN_14793b110(void)

void FUN_14793b110(undefined8 *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  puVar6 = (undefined8 *)param_1[5];
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[4];
    if (puVar6 != (undefined8 *)0x0) {
      param_1[4] = 0;
LAB_14793b184:
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      goto LAB_14793b194;
    }
    puVar4 = (undefined8 *)param_1[3];
    if (puVar4 != (undefined8 *)0x0) {
      param_1[3] = 0;
      goto LAB_14793b1b5;
    }
    puVar6 = (undefined8 *)param_1[2];
    if (puVar6 != (undefined8 *)0x0) {
      param_1[2] = 0;
      goto LAB_14793b1e7;
    }
  }
  else {
    param_1[5] = 0;
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    puVar6 = (undefined8 *)param_1[4];
    puVar4 = (undefined8 *)param_1[5];
    if (puVar6 != puVar4) {
      param_1[4] = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
      }
      if (puVar6 != (undefined8 *)0x0) goto LAB_14793b184;
LAB_14793b194:
      puVar6 = (undefined8 *)param_1[4];
    }
    puVar4 = (undefined8 *)param_1[3];
    if (puVar4 != puVar6) {
      param_1[3] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
      }
      if (puVar4 != (undefined8 *)0x0) {
LAB_14793b1b5:
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      puVar4 = (undefined8 *)param_1[3];
    }
    puVar6 = (undefined8 *)param_1[2];
    if (puVar6 != puVar4) {
      param_1[2] = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
      }
      if (puVar6 != (undefined8 *)0x0) {
LAB_14793b1e7:
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
    }
  }
  lVar7 = param_1[9];
  if (lVar7 == 0) {
    lVar7 = param_1[8];
    if (lVar7 != 0) {
      param_1[8] = 0;
LAB_14793b25d:
      LOCK();
      puVar2 = (uint *)(lVar7 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      goto LAB_14793b276;
    }
    lVar5 = param_1[7];
    if (lVar5 == 0) {
      lVar7 = param_1[6];
      if (lVar7 == 0) {
        return;
      }
      param_1[6] = 0;
      goto LAB_14793b2d6;
    }
    param_1[7] = 0;
LAB_14793b297:
    LOCK();
    puVar2 = (uint *)(lVar5 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar5);
    }
LAB_14793b2b4:
    lVar5 = param_1[7];
  }
  else {
    param_1[9] = 0;
    LOCK();
    puVar2 = (uint *)(lVar7 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    lVar7 = param_1[8];
    lVar5 = param_1[9];
    if (lVar7 != lVar5) {
      param_1[8] = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      if (lVar7 != 0) goto LAB_14793b25d;
LAB_14793b276:
      lVar7 = param_1[8];
    }
    lVar5 = param_1[7];
    if (lVar5 != lVar7) {
      param_1[7] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      if (lVar5 != 0) goto LAB_14793b297;
      goto LAB_14793b2b4;
    }
  }
  lVar7 = param_1[6];
  if (lVar7 == lVar5) {
    return;
  }
  param_1[6] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (lVar7 == 0) {
    return;
  }
LAB_14793b2d6:
  LOCK();
  puVar2 = (uint *)(lVar7 + 8);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if ((uVar3 & 0x3fffffff) != 1) {
    return;
  }
  FUN_144a54812();
  return;
}



// FUNCTION 14793b368 FUN_14793b368 body=544 status=ok
// SIG undefined FUN_14793b368(void)

undefined8 FUN_14793b368(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  uVar7 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = uVar7;
  if (param_1 != param_2) {
    uVar9 = 0;
    uVar8 = 0;
    if (*(int *)(param_1 + 0x1a8) - *(int *)(param_1 + 0x1d4) !=
        *(int *)(param_2 + 0x1a8) - *(int *)(param_2 + 0x1d4)) goto LAB_14793b44b;
    plVar1 = (longlong *)(param_1 + 0x1a0);
    lVar2 = param_1 + 0x1b0;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = lVar2;
    if (*(int *)(param_1 + 0x1c8) != 0) {
      FUN_1449c0562(&local_58);
      uVar9 = *(uint *)(param_1 + 0x1c8);
    }
    local_68 = local_48;
    uVar8 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
    uVar7 = (ulonglong)local_68._4_4_;
    local_80 = plVar1;
    local_68 = uVar8;
    if ((local_68._4_4_ != uVar9) || (local_50 != lVar2)) {
      do {
        if (*(int *)(param_2 + 0x1a8) == *(int *)(param_2 + 0x1d4)) {
LAB_14793b582:
          uVar8 = 0;
          goto LAB_14793b44b;
        }
        lVar5 = *(longlong *)(*local_80 + (longlong)(int)uVar7 * 0x18);
        uVar6 = (uint)((ulonglong)lVar5 >> 0x10);
        uVar11 = (uint)lVar5 & 0xffff;
        lVar10 = *(longlong *)(param_2 + 0x1e0);
        if (*(longlong *)(param_2 + 0x1e0) == 0) {
          lVar10 = param_2 + 0x1d8;
        }
        iVar4 = *(int *)(lVar10 + (ulonglong)
                                  (*(int *)(param_2 + 0x1e8) - 1U &
                                  (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar11) +
                                  (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar4 == -1) goto LAB_14793b582;
        while (plVar3 = (longlong *)(*(longlong *)(param_2 + 0x1a0) + (longlong)iVar4 * 0x18),
              *plVar3 != lVar5) {
          iVar4 = (int)plVar3[2];
          if (iVar4 == -1) goto LAB_14793b582;
        }
        uVar8 = 0;
        if ((plVar3 == (longlong *)0x0) || (plVar3 + 1 == (longlong *)0x0)) goto LAB_14793b44b;
        if (plVar3[1] != *(longlong *)(*local_80 + (longlong)(int)uVar7 * 0x18 + 8))
        goto LAB_14793b582;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        uVar7 = (ulonglong)local_68._4_4_;
      } while (local_80 != plVar1 || (local_70 != lVar2 || local_68._4_4_ != uVar9));
    }
  }
  uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
LAB_14793b44b:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14793b58e FUN_14793b58e body=348 status=ok
// SIG undefined FUN_14793b58e(void)

void FUN_14793b58e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14574b114(param_2);
  local_68 = (longlong *)(param_1 + 200);
  local_38 = param_1 + 0xd8;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      uVar1 = *(undefined8 *)(*local_68 + (longlong)iStack_4c * 0x18 + 8);
      uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
      uVar4 = (uint)uVar1 & 0xffff;
      puVar3 = (undefined8 *)
               FUN_140a3272e(param_2,((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20)
                                     + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4));
      *puVar3 = *(undefined8 *)(*local_68 + (longlong)iStack_4c * 0x18);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793b6fc FUN_14793b6fc body=109 status=ok
// SIG undefined FUN_14793b6fc(void)

void FUN_14793b6fc(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cbd8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cbe8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cbb8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc08);
  FUN_140191baa(param_1,plVar1);
  return;
}



// FUNCTION 14793b770 FUN_14793b770 body=68 status=ok
// SIG undefined FUN_14793b770(void)

void FUN_14793b770(undefined8 param_1,longlong *param_2)

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



// FUNCTION 14793b7bc FUN_14793b7bc body=199 status=ok
// SIG undefined FUN_14793b7bc(void)

void FUN_14793b7bc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1427dc336(local_38);
  switchD_143c3d4dc::caseD_3d(param_1,local_38);
  local_68 = 0;
  uStack_60 = 0;
  FUN_144a83b10(&local_68,*(undefined4 *)(param_1 + 0xe0));
  FUN_1446ddc76(&local_70,"Poses",1);
  local_58 = local_70;
  local_50 = (undefined4)local_68;
  uStack_4c = local_68._4_4_;
  uStack_48 = (undefined4)uStack_60;
  uStack_44 = uStack_60._4_4_;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 2;
  FUN_1407c67d8(param_2);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793b888 FUN_14793b888 body=81 status=ok
// SIG undefined FUN_14793b888(void)

void FUN_14793b888(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  (**(code **)(*param_1 + 0x10))(0,param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793b8de FUN_14793b8de body=401 status=ok
// SIG undefined FUN_14793b8de(void)

void FUN_14793b8de(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_140824bde(param_2,0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_147937830(param_3,0);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar5 = 0x28;
    lVar4 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x10);
      lVar8 = lVar6 + lVar5 + -0x28;
      lVar2 = FUN_14793ba70(lVar8);
      if (lVar2 != 0) {
        uVar3 = FUN_140655cde(lVar8);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14023b962(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar3;
        lVar6 = lVar6 + lVar5;
        lVar2 = FUN_14793baae(lVar6);
        if (lVar2 == 0) {
LAB_14793b98f:
          lVar7 = 0;
        }
        else {
          lVar2 = FUN_14793baec(lVar6);
          lVar6 = *(longlong *)(lVar2 + 0x30);
          if (((lVar6 == 0) || (lVar8 = FUN_1446f8646(), lVar8 == 0)) ||
             (*(int *)(lVar6 + 0x38) < *(int *)(lVar8 + 0x38))) goto LAB_14793b98f;
          lVar7 = 0;
          if (((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30) && (lVar6 = *(longlong *)(lVar2 + 0x30), lVar6 != 0)) &&
             (lVar7 = lVar6, DAT_14c950c29 == '\x01')) {
            FUN_1456cec3c(lVar6);
          }
        }
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_14794b296(param_3,iVar1);
        }
        *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar7;
        if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar7);
        }
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x50;
    } while (lVar4 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 14793ba70 FUN_14793ba70 body=61 status=ok
// SIG undefined FUN_14793ba70(void)

longlong FUN_14793ba70(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a85a6c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14793baae FUN_14793baae body=61 status=ok
// SIG undefined FUN_14793baae(void)

longlong FUN_14793baae(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_1459e950e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14793baec FUN_14793baec body=197 status=ok
// SIG undefined FUN_14793baec(void)

longlong FUN_14793baec(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1459e950e();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 14793bbb2 FUN_14793bbb2 body=162 status=ok
// SIG undefined FUN_14793bbb2(void)

longlong FUN_14793bbb2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)*(int *)(param_1 + 0x88) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x88) < 2) {
    lVar1 = 0;
  }
  lVar2 = (longlong)*(int *)(param_1 + 0xd8) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0xd8) < 2) {
    lVar2 = 0;
  }
  return ((longlong)*(int *)(param_1 + 0x3c) + (longlong)*(int *)(param_1 + 0x1c)) * 0x60 +
         ((longlong)*(int *)(param_1 + 0x2c) + (longlong)*(int *)(param_1 + 0xc)) * 0xc +
         (ulonglong)(*(int *)(param_1 + 0x6c) + 0x1fU >> 5) * 4 + lVar1 +
         ((longlong)*(int *)(param_1 + 0x9c) + (longlong)*(int *)(param_1 + 0x4c)) * 0x14 +
         (ulonglong)(*(int *)(param_1 + 0xbc) + 0x1fU >> 5) * 4 + lVar2;
}



// FUNCTION 14793bc54 FUN_14793bc54 body=236 status=ok
// SIG undefined FUN_14793bc54(void)

int FUN_14793bc54(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar3 = -1;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x110))) {
    uVar7 = (ulonglong)param_2;
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x108) + uVar7 * 4);
    if (iVar3 == -2) {
      iVar3 = *(int *)(param_1 + 8);
      if ((param_2 == 0) || (uVar1 = param_2 + 1, iVar3 <= (int)uVar1)) {
        uVar5 = iVar3 - 1;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x28);
        iVar6 = -1;
        iVar8 = -1;
        if ((int)param_2 < iVar2) {
          iVar8 = *(int *)(*(longlong *)(param_1 + 0x20) + 8 + uVar7 * 0xc);
        }
        if ((int)uVar1 < iVar2) {
          iVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)uVar1 * 0xc);
        }
        uVar5 = 0xfffffffe;
        if (iVar8 < iVar6) {
          lVar4 = (ulonglong)uVar1 * 0xc + 0x14;
          do {
            uVar5 = iVar3 - 1;
            if (iVar3 <= (int)(param_2 + 2)) break;
            uVar5 = param_2 + 1;
            iVar6 = -1;
            if ((int)(param_2 + 2) < iVar2 && -2 < (int)uVar5) {
              iVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar4);
            }
            lVar4 = lVar4 + 0xc;
            param_2 = uVar5;
          } while (iVar8 < iVar6);
        }
      }
      *(uint *)(*(longlong *)(param_1 + 0x108) + uVar7 * 4) = uVar5;
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x108) + uVar7 * 4);
    }
  }
  return iVar3;
}



// FUNCTION 14793bd40 FUN_14793bd40 body=100 status=ok
// SIG undefined FUN_14793bd40(void)

void FUN_14793bd40(undefined8 param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_14793bc54();
  if (param_2 < iVar2 && iVar2 != -1) {
    do {
      param_2 = param_2 + 1;
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_3,iVar1);
      }
      *(int *)(*param_3 + (longlong)iVar1 * 4) = param_2;
    } while (param_2 != iVar2);
  }
  return;
}



// FUNCTION 14793be18 FUN_14793be18 body=420 status=ok
// SIG undefined FUN_14793be18(void)

void FUN_14793be18(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacd390) {
    FUN_144b3d300(&DAT_14cacd390);
    if (DAT_14cacd390 == -1) {
      FUN_1446f470e(&DAT_14cacd388,L"ReplicatedMesh",1);
      _Init_thread_footer(&DAT_14cacd390);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacd39c) {
    FUN_144b3d300(&DAT_14cacd39c);
    if (DAT_14cacd39c == -1) {
      FUN_1446f470e(&DAT_14cacd394,L"ReplicatedPhysAsset",1);
      _Init_thread_footer(&DAT_14cacd39c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacd3a8) {
    FUN_144b3d300(&DAT_14cacd3a8);
    if (DAT_14cacd3a8 == -1) {
      FUN_1446f470e(&DAT_14cacd3a0,L"ReplicatedMaterial0",1);
      _Init_thread_footer(&DAT_14cacd3a8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacd3b4) {
    FUN_144b3d300(&DAT_14cacd3b4);
    if (DAT_14cacd3b4 == -1) {
      FUN_1446f470e(&DAT_14cacd3ac,L"ReplicatedMaterial1",1);
      _Init_thread_footer(&DAT_14cacd3b4);
      return;
    }
  }
  return;
}



// FUNCTION 14793bfbc FUN_14793bfbc body=372 status=ok
// SIG undefined FUN_14793bfbc(void)

void FUN_14793bfbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"ReplicatedMesh",1);
  uVar1 = FUN_1414199c4();
  FUN_1414199c4();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ReplicatedPhysAsset",1);
  uVar1 = FUN_1414199c4();
  FUN_1414199c4();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ReplicatedMaterial0",1);
  uVar1 = FUN_1414199c4();
  FUN_1414199c4();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ReplicatedMaterial1",1);
  uVar1 = FUN_1414199c4();
  FUN_1414199c4();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793c132 FUN_14793c132 body=173 status=ok
// SIG undefined FUN_14793c132(void)

longlong * FUN_14793c132(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = *(longlong **)(param_1 + 0x398);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_28);
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_14020fad6(param_2,L"No_SkeletalMeshComponent");
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14793c26a FUN_14793c26a body=151 status=ok
// SIG undefined FUN_14793c26a(void)

longlong FUN_14793c26a(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) +
                    ((int)param_2 << 0x10 | (uint)(ushort)param_2) + (uVar1 << 0x13 | uVar1) +
                    (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar2 == param_2) {
          if (plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
            return plVar2[1];
          }
          return 0;
        }
        iVar3 = (int)plVar2[2];
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14793c302 FUN_14793c302 body=283 status=ok
// SIG undefined FUN_14793c302(void)

int FUN_14793c302(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  iVar4 = 0;
  iVar3 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_1[5];
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if ((iStack_3c != iVar3) || (local_48 != plVar1)) {
    iVar4 = 0;
    do {
      iVar2 = FUN_147ccda62(*(undefined8 *)(*local_78 + 8 + (longlong)iStack_5c * 0x18));
      iVar4 = iVar4 + iVar2;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 || (local_68 != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793c41e FUN_14793c41e body=156 status=ok
// SIG undefined FUN_14793c41e(void)

void FUN_14793c41e(undefined8 param_1,longlong param_2)

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
  FUN_14793c4bc(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793c4bc FUN_14793c4bc body=273 status=ok
// SIG undefined FUN_14793c4bc(void)

void FUN_14793c4bc(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  if (param_2 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  else {
    FUN_1400bbfc4(&local_40);
    uStack_60 = CONCAT44(uStack_3c,local_40);
    local_58 = CONCAT44(uStack_34,uStack_38);
    if (uStack_50 != 0) {
      FUN_1400020a8();
    }
    uStack_50 = CONCAT44(uStack_2c,local_30);
    local_48 = CONCAT44(uStack_24,uStack_28);
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) != 0) {
        local_68 = 0;
        goto LAB_14793c505;
      }
    }
    FUN_14485c47a(&local_68,param_2);
  }
LAB_14793c505:
  FUN_14794ba40(param_1 + 0x198,&local_68);
  if (uStack_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793c5ce FUN_14793c5ce body=202 status=ok
// SIG undefined FUN_14793c5ce(void)

void FUN_14793c5ce(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  lStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14794bb06(param_1 + 0x198,puVar1);
  if (lStack_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793c69a FUN_14793c69a body=177 status=ok
// SIG undefined FUN_14793c69a(void)

void FUN_14793c69a(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_14793c74c(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793c74c FUN_14793c74c body=251 status=ok
// SIG undefined FUN_14793c74c(void)

longlong FUN_14793c74c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_2;
  if ((longlong)*(int *)(param_1 + 0x270) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x268);
    lVar2 = (longlong)*(int *)(param_1 + 0x270) << 3;
    do {
      local_58 = *(longlong *)(*plVar3 + 0x18);
      FUN_1400021e4(&local_58,&local_48);
      FUN_1400021e4(&local_60,&local_58);
      if (local_40 == local_50) {
        bVar4 = true;
        if (1 < local_40) {
          iVar1 = FUN_144a80a00(local_48,local_58);
          bVar4 = iVar1 == 0;
        }
      }
      else {
        bVar4 = local_50 + local_40 == 1;
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (bVar4) {
        if (plVar3 != (longlong *)0x0) {
          lVar2 = *plVar3;
          goto LAB_14793c81a;
        }
        break;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  lVar2 = 0;
LAB_14793c81a:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14793c858 FUN_14793c858 body=313 status=ok
// SIG undefined FUN_14793c858(void)

void FUN_14793c858(char param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == '\x03') {
    plVar5 = (longlong *)FUN_1468ca22c(param_2 + 0x10);
    plVar1 = plVar5 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)plVar5[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)plVar5[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar3 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = plVar5;
    if ((local_60._4_4_ != iVar7) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar3;
        lVar2 = *(longlong *)(*local_78 + 8 + (longlong)iVar4 * 0x18);
        if (lVar2 != 0) {
          lVar6 = FUN_140f5e1c2();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            FUN_14793ce04(lVar2);
          }
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_78 != plVar5 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14793c992 FUN_14793c992 body=87 status=ok
// SIG undefined FUN_14793c992(void)

void FUN_14793c992(longlong param_1,char param_2)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    local_28.Data1 = 0;
    local_28.Data2 = 0;
    local_28.Data3 = 0;
    local_28.Data4[0] = '\0';
    local_28.Data4[1] = '\0';
    local_28.Data4[2] = '\0';
    local_28.Data4[3] = '\0';
    local_28.Data4[4] = '\0';
    local_28.Data4[5] = '\0';
    local_28.Data4[6] = '\0';
    local_28.Data4[7] = '\0';
    CoCreateGuid(&local_28);
    *(ulong *)(param_1 + 0x168) = local_28.Data1;
    *(undefined4 *)(param_1 + 0x16c) = local_28._4_4_;
    *(undefined4 *)(param_1 + 0x170) = local_28.Data4._0_4_;
    *(undefined4 *)(param_1 + 0x174) = local_28.Data4._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14793c9ea FUN_14793c9ea body=101 status=ok
// SIG undefined FUN_14793c9ea(void)

void FUN_14793c9ea(longlong param_1,undefined4 param_2)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x4e0));
  FUN_14794caa0(param_1 + 0x4e8,param_2);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x4e0));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f0));
  FUN_1478c4da6(param_1 + 0x490,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014793ca48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f0));
  return;
}



// FUNCTION 14793ca50 FUN_14793ca50 body=234 status=ok
// SIG undefined FUN_14793ca50(void)

void FUN_14793ca50(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_1 + 0x50;
  local_50 = param_1;
  local_48 = param_1;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar2 = (**(code **)(*param_2 + 0x308))(param_2);
      local_60 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar7);
      iVar1 = FUN_144b20870(uVar2,&local_60);
      if (iVar1 != -1) {
        lVar3 = (**(code **)(*param_2 + 0x308))(param_2);
        puVar5 = (undefined8 *)((longlong)iVar1 * 0x60 + *(longlong *)(lVar3 + 0x30));
        puVar6 = (undefined8 *)(lVar7 * 8 + *(longlong *)(param_1 + 0x60));
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while (lVar8 < *(int *)(param_1 + 0x58));
  }
  FUN_14282b7b8(param_1);
  FUN_140817336(&local_58);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


