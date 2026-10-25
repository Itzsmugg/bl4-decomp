// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14863e437 FUN_14863e437 body=52 status=ok
// SIG undefined FUN_14863e437(void)

void FUN_14863e437(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1418474da(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14863e46c FUN_14863e46c body=115 status=ok
// SIG undefined FUN_14863e46c(void)

void FUN_14863e46c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14863e4df FUN_14863e4df body=134 status=ok
// SIG undefined FUN_14863e4df(void)

void FUN_14863e4df(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 14863e566 FUN_14863e566 body=98 status=ok
// SIG undefined FUN_14863e566(void)

void FUN_14863e566(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14863e642 FUN_14863e642 body=59 status=ok
// SIG undefined FUN_14863e642(void)

undefined8 FUN_14863e642(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863e744 FUN_14863e744 body=54 status=ok
// SIG undefined FUN_14863e744(void)

undefined1 FUN_14863e744(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1457b9864(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14863e7a2 FUN_14863e7a2 body=59 status=ok
// SIG undefined FUN_14863e7a2(void)

undefined8 FUN_14863e7a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863e7e8 FUN_14863e7e8 body=53 status=ok
// SIG undefined FUN_14863e7e8(void)

void FUN_14863e7e8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1406f0462(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14863e8a2 FUN_14863e8a2 body=87 status=ok
// SIG undefined FUN_14863e8a2(void)

undefined8 FUN_14863e8a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined2 *)(param_2 + 0x18 + lVar1) = *(undefined2 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14863e922 FUN_14863e922 body=59 status=ok
// SIG undefined FUN_14863e922(void)

undefined8 FUN_14863e922(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863e968 FUN_14863e968 body=43 status=ok
// SIG undefined FUN_14863e968(void)

void FUN_14863e968(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14863ea08 FUN_14863ea08 body=31 status=ok
// SIG undefined FUN_14863ea08(void)

undefined1
FUN_14863ea08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_140490cd4(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14863ea28 FUN_14863ea28 body=317 status=ok
// SIG undefined FUN_14863ea28(void)

undefined4
FUN_14863ea28(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
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
    FUN_14887b4ce(param_3,param_2,param_4,param_5);
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
  uVar1 = FUN_14887b4ce(param_3,param_2,&local_98,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_a8);
  if ((local_9c & 4) != 0) {
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uStack_60 & 0xff])();
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14863eb66 FUN_14863eb66 body=39 status=ok
// SIG undefined FUN_14863eb66(void)

void FUN_14863eb66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_14887b11c(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14863eb9a FUN_14863eb9a body=59 status=ok
// SIG undefined FUN_14863eb9a(void)

undefined8 FUN_14863eb9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863ebe0 FUN_14863ebe0 body=41 status=ok
// SIG undefined FUN_14863ebe0(void)

void FUN_14863ebe0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_2 + 0x38)])(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14863ec84 FUN_14863ec84 body=54 status=ok
// SIG undefined FUN_14863ec84(void)

undefined1 FUN_14863ec84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14863ed82(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14863ece2 FUN_14863ece2 body=59 status=ok
// SIG undefined FUN_14863ece2(void)

undefined8 FUN_14863ece2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863ed82 FUN_14863ed82 body=84 status=ok
// SIG undefined FUN_14863ed82(void)

longlong * FUN_14863ed82(longlong *param_1,longlong *param_2)

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



// FUNCTION 14863ee44 FUN_14863ee44 body=59 status=ok
// SIG undefined FUN_14863ee44(void)

undefined8 FUN_14863ee44(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863eee6 FUN_14863eee6 body=41 status=ok
// SIG undefined FUN_14863eee6(void)

void FUN_14863eee6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined4 *)((longlong)param_2 + 0x78) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x7e) = 1;
  return;
}



// FUNCTION 14863ef60 FUN_14863ef60 body=63 status=ok
// SIG undefined FUN_14863ef60(void)

undefined1 FUN_14863ef60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1408d8320(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14863efc8 FUN_14863efc8 body=59 status=ok
// SIG undefined FUN_14863efc8(void)

undefined8 FUN_14863efc8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863f0c0 FUN_14863f0c0 body=61 status=ok
// SIG undefined FUN_14863f0c0(void)

void FUN_14863f0c0(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863f13c FUN_14863f13c body=410 status=ok
// SIG undefined FUN_14863f13c(void)

void FUN_14863f13c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
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
  iVar1 = local_2c;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148830c54(local_20,local_28,iVar1 != 0,local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863f2de FUN_14863f2de body=402 status=ok
// SIG undefined FUN_14863f2de(void)

void FUN_14863f2de(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined4 local_20;
  undefined1 local_19;
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
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a64e42();
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
  FUN_148830ad2(local_18,local_19,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863f478 FUN_14863f478 body=419 status=ok
// SIG undefined FUN_14863f478(void)

void FUN_14863f478(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar3 = local_58;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140806284(local_28,puVar2,puVar3,local_60);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863f61c FUN_14863f61c body=410 status=ok
// SIG undefined FUN_14863f61c(void)

void FUN_14863f61c(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  undefined1 local_38 [24];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140c3abd4(local_20,puVar2,local_40,local_44);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863f7b8 FUN_14863f7b8 body=513 status=ok
// SIG undefined FUN_14863f7b8(void)

void FUN_14863f7b8(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar3 = local_60;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_68;
  FUN_148830708(local_28,local_30,puVar2,puVar3);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863f9da FUN_14863f9da body=45 status=ok
// SIG undefined FUN_14863f9da(void)

longlong FUN_14863f9da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145a287a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14863fac0 FUN_14863fac0 body=59 status=ok
// SIG undefined FUN_14863fac0(void)

undefined8 FUN_14863fac0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863fb06 FUN_14863fb06 body=43 status=ok
// SIG undefined FUN_14863fb06(void)

void FUN_14863fb06(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 14863fb6e FUN_14863fb6e body=28 status=ok
// SIG undefined FUN_14863fb6e(void)

undefined8 FUN_14863fb6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14863fc12 FUN_14863fc12 body=59 status=ok
// SIG undefined FUN_14863fc12(void)

undefined8 FUN_14863fc12(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863fcc6 FUN_14863fcc6 body=54 status=ok
// SIG undefined FUN_14863fcc6(void)

undefined1 FUN_14863fcc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14863fdcc(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 14863fd24 FUN_14863fd24 body=59 status=ok
// SIG undefined FUN_14863fd24(void)

undefined8 FUN_14863fd24(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863fd6a FUN_14863fd6a body=32 status=ok
// SIG undefined FUN_14863fd6a(void)

void FUN_14863fd6a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14008f4f0(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14863fdcc FUN_14863fdcc body=141 status=ok
// SIG undefined FUN_14863fdcc(void)

longlong FUN_14863fdcc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
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
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  FUN_144a7bb84(param_1 + 0x40,param_2 + 0x40);
  FUN_144a82394(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 14863fe9a FUN_14863fe9a body=54 status=ok
// SIG undefined FUN_14863fe9a(void)

undefined1 FUN_14863fe9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14863ff96(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14863fef8 FUN_14863fef8 body=59 status=ok
// SIG undefined FUN_14863fef8(void)

undefined8 FUN_14863fef8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14863ff3e FUN_14863ff3e body=32 status=ok
// SIG undefined FUN_14863ff3e(void)

void FUN_14863ff3e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_140166b46(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14863ff96 FUN_14863ff96 body=126 status=ok
// SIG undefined FUN_14863ff96(void)

longlong FUN_14863ff96(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_148640014(param_1 + 0x18,param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  return param_1;
}



// FUNCTION 148640014 FUN_148640014 body=93 status=ok
// SIG undefined FUN_148640014(void)

undefined8 * FUN_148640014(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140166c09(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148640072(param_1,iVar1);
      FUN_1486400e5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148640072 FUN_148640072 body=115 status=ok
// SIG undefined FUN_148640072(void)

void FUN_148640072(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486400e5 FUN_1486400e5 body=130 status=ok
// SIG undefined FUN_1486400e5(void)

void FUN_1486400e5(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined ***)(param_1 + -0x30) = &PTR_FUN_14b056c00;
      *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(param_2 + -0x28);
      *(undefined4 *)(param_1 + -0x20) = *(undefined4 *)(param_2 + -0x20);
      plVar1 = *(longlong **)(param_2 + -0x18);
      *(longlong **)(param_1 + -0x18) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(param_2 + -0x10);
      *(undefined1 *)(param_1 + -4) = *(undefined1 *)(param_2 + -4);
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_1412bd664(param_1,param_2);
      param_1 = param_1 + 0x60;
      param_2 = param_2 + 0x60;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148640168 FUN_148640168 body=28 status=ok
// SIG undefined FUN_148640168(void)

undefined8 FUN_148640168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486401b6 FUN_1486401b6 body=67 status=ok
// SIG undefined FUN_1486401b6(void)

undefined1 FUN_1486401b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140e7790a(param_2,param_3);
    FUN_14132837e(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148640222 FUN_148640222 body=59 status=ok
// SIG undefined FUN_148640222(void)

undefined8 FUN_148640222(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486402d6 FUN_1486402d6 body=63 status=ok
// SIG undefined FUN_1486402d6(void)

undefined1 FUN_1486402d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486403e6(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 14864033e FUN_14864033e body=59 status=ok
// SIG undefined FUN_14864033e(void)

undefined8 FUN_14864033e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864038a FUN_14864038a body=38 status=ok
// SIG undefined FUN_14864038a(void)

void FUN_14864038a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_14099a8ba(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1486403e6 FUN_1486403e6 body=204 status=ok
// SIG undefined FUN_1486403e6(void)

longlong FUN_1486403e6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_1418473b6(param_1 + 0x28,param_2 + 0x28);
  FUN_14863d6ee(param_1 + 0x40,param_2 + 0x40);
  FUN_1486404b2(param_1 + 0x58,param_2 + 0x58);
  FUN_140c62a0e(param_1 + 0x68,param_2 + 0x68);
  FUN_140c62aa8(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  uVar1 = *(undefined4 *)(param_2 + 0x114);
  uVar2 = *(undefined4 *)(param_2 + 0x118);
  uVar3 = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x114) = uVar1;
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  *(undefined4 *)(param_1 + 0x11c) = uVar3;
  FUN_144a787a6(param_1 + 0x120,param_2 + 0x120);
  FUN_14863e270(param_1 + 0x130,param_2 + 0x130);
  FUN_148640502(param_1 + 0x140,param_2 + 0x140);
  return param_1;
}



// FUNCTION 1486404b2 FUN_1486404b2 body=79 status=ok
// SIG undefined FUN_1486404b2(void)

undefined8 * FUN_1486404b2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148640560(param_1,iVar1);
      FUN_1486405d3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148640502 FUN_148640502 body=93 status=ok
// SIG undefined FUN_148640502(void)

undefined8 * FUN_148640502(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_143c3e2a3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148640614(param_1,iVar1);
      FUN_148640687(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148640560 FUN_148640560 body=115 status=ok
// SIG undefined FUN_148640560(void)

void FUN_148640560(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486405d3 FUN_1486405d3 body=65 status=ok
// SIG undefined FUN_1486405d3(void)

void FUN_1486405d3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140f746b6(param_1,param_2);
    FUN_140862250(param_1 + 0x18,param_2 + 0x18);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148640614 FUN_148640614 body=115 status=ok
// SIG undefined FUN_148640614(void)

void FUN_148640614(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148640687 FUN_148640687 body=134 status=ok
// SIG undefined FUN_148640687(void)

void FUN_148640687(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 14864070e FUN_14864070e body=28 status=ok
// SIG undefined FUN_14864070e(void)

undefined8 FUN_14864070e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148640798 FUN_148640798 body=102 status=ok
// SIG undefined FUN_148640798(void)

undefined8 FUN_148640798(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      if (*(char *)(param_3 + -0x30) == '\0') {
        *(undefined1 *)(param_2 + -0x30) = 0;
        *(undefined8 *)(param_2 + -0x38) = *(undefined8 *)(param_3 + -0x38);
      }
      *(undefined4 *)(param_2 + -9) = *(undefined4 *)(param_3 + -9);
      uVar1 = *(undefined4 *)(param_3 + -0x28);
      uVar2 = *(undefined4 *)(param_3 + -0x24);
      uVar3 = *(undefined4 *)(param_3 + -0x20);
      uVar4 = *(undefined4 *)(param_3 + -0x1c);
      uVar5 = *(undefined4 *)(param_3 + -0x14);
      uVar6 = *(undefined4 *)(param_3 + -0x10);
      uVar7 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar5;
      *(undefined4 *)(param_2 + -0x10) = uVar6;
      *(undefined4 *)(param_2 + -0xc) = uVar7;
      *(undefined4 *)(param_2 + -0x28) = uVar1;
      *(undefined4 *)(param_2 + -0x24) = uVar2;
      *(undefined4 *)(param_2 + -0x20) = uVar3;
      *(undefined4 *)(param_2 + -0x1c) = uVar4;
      FUN_1418473b6(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148640826 FUN_148640826 body=59 status=ok
// SIG undefined FUN_148640826(void)

undefined8 FUN_148640826(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864086c FUN_14864086c body=43 status=ok
// SIG undefined FUN_14864086c(void)

void FUN_14864086c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 1486408e0 FUN_1486408e0 body=38 status=ok
// SIG undefined FUN_1486408e0(void)

undefined8 FUN_1486408e0(undefined8 param_1,int param_2)

{
  FUN_145a28a06();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148640906 FUN_148640906 body=32 status=ok
// SIG undefined FUN_148640906(void)

undefined8 FUN_148640906(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxDialogDelayedEventManager");
  return param_2;
}



// FUNCTION 148640926 FUN_148640926 body=51 status=ok
// SIG undefined FUN_148640926(void)

void FUN_148640926(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x118);
  FUN_1414f1cb4((longlong)param_2 + 0x58);
  *(undefined1 *)((longlong)param_2 + 0x110) = 0;
  return;
}



// FUNCTION 14864095a FUN_14864095a body=66 status=ok
// SIG undefined FUN_14864095a(void)

void FUN_14864095a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  FUN_1414f1cb4(param_2 + 0xb);
  *(undefined1 *)(param_2 + 0x22) = 0;
  return;
}



// FUNCTION 1486409ba FUN_1486409ba body=63 status=ok
// SIG undefined FUN_1486409ba(void)

undefined1 FUN_1486409ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1418480c2(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 148640a22 FUN_148640a22 body=59 status=ok
// SIG undefined FUN_148640a22(void)

undefined8 FUN_148640a22(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148640a6e FUN_148640a6e body=38 status=ok
// SIG undefined FUN_148640a6e(void)

void FUN_148640a6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_140d4a904(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 148640af4 FUN_148640af4 body=45 status=ok
// SIG undefined FUN_148640af4(void)

void FUN_148640af4(undefined8 param_1,longlong param_2)

{
  FUN_144a2da94(param_2 + 0x150);
  FUN_144a2da94(param_2 + 0x118);
  FUN_140d4a904(param_2);
  return;
}



// FUNCTION 148640b38 FUN_148640b38 body=157 status=ok
// SIG undefined FUN_148640b38(void)

undefined8 FUN_148640b38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      lVar1 = param_3 + lVar8;
      lVar2 = param_2 + lVar8;
      FUN_1418480c2(lVar2,lVar1);
      FUN_144983130(lVar2 + 0x118,lVar1 + 0x118);
      FUN_144983130(lVar2 + 0x150,lVar1 + 0x150);
      puVar3 = (undefined4 *)(param_3 + 0x188 + lVar8);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x188 + lVar8);
      *puVar4 = *puVar3;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar4[3] = uVar7;
      *(undefined8 *)(param_2 + 0x195 + lVar8) = *(undefined8 *)(param_3 + 0x195 + lVar8);
      lVar8 = lVar8 + 0x1a0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148640bfe FUN_148640bfe body=59 status=ok
// SIG undefined FUN_148640bfe(void)

undefined8 FUN_148640bfe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148640ca2 FUN_148640ca2 body=62 status=ok
// SIG undefined FUN_148640ca2(void)

void FUN_148640ca2(longlong param_1)

{
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    FUN_144a2da94(param_1 + 0x150);
    FUN_144a2da94(param_1 + 0x118);
    FUN_140d4a904(param_1);
    *(undefined1 *)(param_1 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 148640d3c FUN_148640d3c body=54 status=ok
// SIG undefined FUN_148640d3c(void)

undefined1 FUN_148640d3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143c3e3c4(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148640d9a FUN_148640d9a body=59 status=ok
// SIG undefined FUN_148640d9a(void)

undefined8 FUN_148640d9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148640e3c FUN_148640e3c body=37 status=ok
// SIG undefined FUN_148640e3c(void)

void FUN_148640e3c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x910);
  FUN_140ca15b8(param_2);
  return;
}



// FUNCTION 148640e88 FUN_148640e88 body=63 status=ok
// SIG undefined FUN_148640e88(void)

undefined1 FUN_148640e88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148640fb0(param_2,param_3);
    param_3 = param_3 + 0x910;
    param_2 = param_2 + 0x910;
  }
  return 1;
}



// FUNCTION 148640ef0 FUN_148640ef0 body=59 status=ok
// SIG undefined FUN_148640ef0(void)

undefined8 FUN_148640ef0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148640f3c FUN_148640f3c body=38 status=ok
// SIG undefined FUN_148640f3c(void)

void FUN_148640f3c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x910) == '\x01') {
    FUN_140d4a462(param_2);
    *(undefined1 *)(param_2 + 0x910) = 0;
  }
  return;
}



// FUNCTION 148640fb0 FUN_148640fb0 body=789 status=ok
// SIG undefined FUN_148640fb0(void)

undefined1 * FUN_148640fb0(undefined1 *param_1,undefined1 *param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte bVar16;
  longlong lVar17;
  
  *param_1 = *param_2;
  FUN_140b177d4(param_1 + 8,param_2 + 8);
  param_1[0x28] = param_2[0x28];
  lVar17 = *(longlong *)(param_2 + 0x30);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x30);
    }
  }
  bVar16 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x30) = lVar17;
  lVar17 = *(longlong *)(param_2 + 0x38);
  if ((bVar16 & 1) != 0) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar17;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  FUN_1486412c6(param_1 + 0x70,param_2 + 0x70);
  lVar17 = *(longlong *)(param_2 + 0xc0);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0xc0);
    }
  }
  *(longlong *)(param_1 + 0xc0) = lVar17;
  FUN_1418480c2(param_1 + 200,param_2 + 200);
  FUN_144983130(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_144983130(param_1 + 0x218,param_2 + 0x218);
  uVar1 = *(undefined4 *)(param_2 + 0x254);
  uVar2 = *(undefined4 *)(param_2 + 600);
  uVar3 = *(undefined4 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x254) = uVar1;
  *(undefined4 *)(param_1 + 600) = uVar2;
  *(undefined4 *)(param_1 + 0x25c) = uVar3;
  *(undefined8 *)(param_1 + 0x25d) = *(undefined8 *)(param_2 + 0x25d);
  FUN_1418480c2(param_1 + 0x268,param_2 + 0x268);
  FUN_144983130(param_1 + 0x380,param_2 + 0x380);
  FUN_144983130(param_1 + 0x3b8,param_2 + 0x3b8);
  uVar1 = *(undefined4 *)(param_2 + 0x3f4);
  uVar2 = *(undefined4 *)(param_2 + 0x3f8);
  uVar3 = *(undefined4 *)(param_2 + 0x3fc);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined4 *)(param_1 + 0x3f4) = uVar1;
  *(undefined4 *)(param_1 + 0x3f8) = uVar2;
  *(undefined4 *)(param_1 + 0x3fc) = uVar3;
  *(undefined8 *)(param_1 + 0x3fd) = *(undefined8 *)(param_2 + 0x3fd);
  FUN_1418480c2(param_1 + 0x408,param_2 + 0x408);
  FUN_1418480c2(param_1 + 0x520,param_2 + 0x520);
  FUN_144983130(param_1 + 0x638,param_2 + 0x638);
  FUN_144983130(param_1 + 0x670,param_2 + 0x670);
  uVar1 = *(undefined4 *)(param_2 + 0x6ac);
  uVar2 = *(undefined4 *)(param_2 + 0x6b0);
  uVar3 = *(undefined4 *)(param_2 + 0x6b4);
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_2 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6ac) = uVar1;
  *(undefined4 *)(param_1 + 0x6b0) = uVar2;
  *(undefined4 *)(param_1 + 0x6b4) = uVar3;
  *(undefined8 *)(param_1 + 0x6b5) = *(undefined8 *)(param_2 + 0x6b5);
  FUN_144983130(param_1 + 0x6c0,param_2 + 0x6c0);
  FUN_144983130(param_1 + 0x6f8,param_2 + 0x6f8);
  FUN_144983130(param_1 + 0x730,param_2 + 0x730);
  FUN_140311eb6(param_1 + 0x768,param_2 + 0x768);
  FUN_143c3e3c4(param_1 + 0x778,param_2 + 0x778);
  FUN_143c3e3c4(param_1 + 0x7a8,param_2 + 0x7a8);
  *(undefined8 *)(param_1 + 0x7f8) = *(undefined8 *)(param_2 + 0x7f8);
  uVar1 = *(undefined4 *)(param_2 + 0x7d8);
  uVar2 = *(undefined4 *)(param_2 + 0x7dc);
  uVar3 = *(undefined4 *)(param_2 + 0x7e0);
  uVar4 = *(undefined4 *)(param_2 + 0x7e4);
  uVar5 = *(undefined4 *)(param_2 + 0x7ec);
  uVar6 = *(undefined4 *)(param_2 + 0x7f0);
  uVar7 = *(undefined4 *)(param_2 + 0x7f4);
  *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_2 + 0x7e8);
  *(undefined4 *)(param_1 + 0x7ec) = uVar5;
  *(undefined4 *)(param_1 + 0x7f0) = uVar6;
  *(undefined4 *)(param_1 + 0x7f4) = uVar7;
  *(undefined4 *)(param_1 + 0x7d8) = uVar1;
  *(undefined4 *)(param_1 + 0x7dc) = uVar2;
  *(undefined4 *)(param_1 + 0x7e0) = uVar3;
  *(undefined4 *)(param_1 + 0x7e4) = uVar4;
  lVar17 = *(longlong *)(param_2 + 0x800);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x800);
    }
  }
  bVar16 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x800) = lVar17;
  uVar1 = *(undefined4 *)(param_2 + 0x808);
  uVar2 = *(undefined4 *)(param_2 + 0x80c);
  uVar3 = *(undefined4 *)(param_2 + 0x810);
  uVar4 = *(undefined4 *)(param_2 + 0x814);
  uVar5 = *(undefined4 *)(param_2 + 0x818);
  uVar6 = *(undefined4 *)(param_2 + 0x81c);
  uVar7 = *(undefined4 *)(param_2 + 0x820);
  uVar8 = *(undefined4 *)(param_2 + 0x824);
  uVar9 = *(undefined4 *)(param_2 + 0x828);
  uVar10 = *(undefined4 *)(param_2 + 0x82c);
  uVar11 = *(undefined4 *)(param_2 + 0x830);
  uVar12 = *(undefined4 *)(param_2 + 0x834);
  uVar13 = *(undefined4 *)(param_2 + 0x83c);
  uVar14 = *(undefined4 *)(param_2 + 0x840);
  uVar15 = *(undefined4 *)(param_2 + 0x844);
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_2 + 0x838);
  *(undefined4 *)(param_1 + 0x83c) = uVar13;
  *(undefined4 *)(param_1 + 0x840) = uVar14;
  *(undefined4 *)(param_1 + 0x844) = uVar15;
  *(undefined4 *)(param_1 + 0x828) = uVar9;
  *(undefined4 *)(param_1 + 0x82c) = uVar10;
  *(undefined4 *)(param_1 + 0x830) = uVar11;
  *(undefined4 *)(param_1 + 0x834) = uVar12;
  *(undefined4 *)(param_1 + 0x818) = uVar5;
  *(undefined4 *)(param_1 + 0x81c) = uVar6;
  *(undefined4 *)(param_1 + 0x820) = uVar7;
  *(undefined4 *)(param_1 + 0x824) = uVar8;
  *(undefined4 *)(param_1 + 0x808) = uVar1;
  *(undefined4 *)(param_1 + 0x80c) = uVar2;
  *(undefined4 *)(param_1 + 0x810) = uVar3;
  *(undefined4 *)(param_1 + 0x814) = uVar4;
  lVar17 = *(longlong *)(param_2 + 0x848);
  if ((bVar16 & 1) != 0) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x848);
    }
  }
  *(longlong *)(param_1 + 0x848) = lVar17;
  if (param_2 != param_1) {
    if (param_2[0x908] == '\x01') {
      FUN_145cc3246(param_1 + 0x850,param_2 + 0x850);
    }
    else {
      FUN_140cfa276();
    }
  }
  return param_1;
}



// FUNCTION 1486412c6 FUN_1486412c6 body=104 status=ok
// SIG undefined FUN_1486412c6(void)

void * FUN_1486412c6(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x48);
    *(int *)((longlong)param_1 + 0x48) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
    }
    else {
      FUN_14864132e(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x40);
        if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14864132e FUN_14864132e body=101 status=ok
// SIG undefined FUN_14864132e(void)

void FUN_14864132e(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148641394(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 148641394 FUN_148641394 body=133 status=ok
// SIG undefined FUN_148641394(void)

void FUN_148641394(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 1486414b0 FUN_1486414b0 body=54 status=ok
// SIG undefined FUN_1486414b0(void)

undefined1 FUN_1486414b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486415c4(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 14864150e FUN_14864150e body=59 status=ok
// SIG undefined FUN_14864150e(void)

undefined8 FUN_14864150e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148641554 FUN_148641554 body=34 status=ok
// SIG undefined FUN_148641554(void)

void FUN_148641554(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_145d3d06e(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1486415c4 FUN_1486415c4 body=143 status=ok
// SIG undefined FUN_1486415c4(void)

undefined4 * FUN_1486415c4(undefined4 *param_1,undefined4 *param_2)

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
  longlong lVar11;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  param_1[3] = param_2[3];
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  param_1[6] = uVar10;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  FUN_1407f1ff6(param_1 + 8,param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  lVar11 = *(longlong *)(param_2 + 0xe);
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(longlong *)(param_1 + 0xe) = lVar11;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1479d4a52(param_1 + 0x10,param_2 + 0x10);
  lVar11 = *(longlong *)(param_2 + 0x14);
  if (DAT_14c950c29 == '\x01') {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x14);
    }
  }
  *(longlong *)(param_1 + 0x14) = lVar11;
  return param_1;
}



// FUNCTION 148641654 FUN_148641654 body=67 status=ok
// SIG undefined FUN_148641654(void)

void FUN_148641654(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,400);
  *param_2 = &PTR_FUN_14b057db0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0x10;
  FUN_14070e804(param_2 + 7);
  return;
}



// FUNCTION 1486416f4 FUN_1486416f4 body=83 status=ok
// SIG undefined FUN_1486416f4(void)

undefined1 FUN_1486416f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_14862318e(param_2 + -0x10,param_3 + -0x10);
      FUN_14070e270(param_2,param_3);
      param_3 = param_3 + 0x198;
      param_2 = param_2 + 0x198;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148641770 FUN_148641770 body=59 status=ok
// SIG undefined FUN_148641770(void)

undefined8 FUN_148641770(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486417bc FUN_1486417bc body=38 status=ok
// SIG undefined FUN_1486417bc(void)

void FUN_1486417bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_140d97ce8(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 148641830 FUN_148641830 body=38 status=ok
// SIG undefined FUN_148641830(void)

undefined8 FUN_148641830(undefined8 param_1,int param_2)

{
  FUN_140d97ce8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148641856 FUN_148641856 body=55 status=ok
// SIG undefined FUN_148641856(void)

void FUN_148641856(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb573f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb573f8 = FUN_140002ddd(FUN_1464bc3c1,uVar1,L"DynamicUsabilityBehaviorMod");
  }
  return;
}



// FUNCTION 1486418ca FUN_1486418ca body=63 status=ok
// SIG undefined FUN_1486418ca(void)

undefined1 FUN_1486418ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14070e270(param_2,param_3);
    param_3 = param_3 + 0x180;
    param_2 = param_2 + 0x180;
  }
  return 1;
}



// FUNCTION 148641932 FUN_148641932 body=59 status=ok
// SIG undefined FUN_148641932(void)

undefined8 FUN_148641932(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486419ca FUN_1486419ca body=70 status=ok
// SIG undefined FUN_1486419ca(void)

void FUN_1486419ca(longlong param_1)

{
  if (*(char *)(param_1 + 0x180) == '\x01') {
    *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14b023b20;
    FUN_1447805d2(param_1 + 0x38);
    *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x180) = 0;
  }
  return;
}



// FUNCTION 148641a10 FUN_148641a10 body=83 status=ok
// SIG undefined FUN_148641a10(void)

void FUN_148641a10(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1a8);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0x10;
  FUN_14070e804((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_2 + 0x198) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x180) = 0;
  *(undefined8 *)((longlong)param_2 + 0x188) = 0;
  *(undefined4 *)((longlong)param_2 + 400) = 0;
  return;
}



// FUNCTION 148641a64 FUN_148641a64 body=79 status=ok
// SIG undefined FUN_148641a64(void)

void FUN_148641a64(undefined8 param_1,undefined2 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0x10;
  *(undefined8 *)(param_2 + 0xc) = 0;
  FUN_14070e804(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0xcc) = 0;
  *(undefined4 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 200) = 0;
  return;
}



// FUNCTION 148641ad2 FUN_148641ad2 body=111 status=ok
// SIG undefined FUN_148641ad2(void)

undefined8 FUN_148641ad2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14070e270(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x184);
    uVar2 = *(undefined4 *)(param_3 + 0x188);
    uVar3 = *(undefined4 *)(param_3 + 0x18c);
    *(undefined4 *)(param_2 + 0x180) = *(undefined4 *)(param_3 + 0x180);
    *(undefined4 *)(param_2 + 0x184) = uVar1;
    *(undefined4 *)(param_2 + 0x188) = uVar2;
    *(undefined4 *)(param_2 + 0x18c) = uVar3;
    *(undefined4 *)(param_2 + 400) = *(undefined4 *)(param_3 + 400);
    FUN_14007b0d4(param_2 + 0x198,param_3 + 0x198);
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 148641b6a FUN_148641b6a body=59 status=ok
// SIG undefined FUN_148641b6a(void)

undefined8 FUN_148641b6a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148641bb6 FUN_148641bb6 body=38 status=ok
// SIG undefined FUN_148641bb6(void)

void FUN_148641bb6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_1404967de(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 148641c2c FUN_148641c2c body=89 status=ok
// SIG undefined FUN_148641c2c(void)

void FUN_148641c2c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  *(undefined2 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[6] = 0x10;
  *(undefined8 *)(param_2 + 8) = 0;
  FUN_14070e804(param_2 + 10);
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_2[0x6a] = 0;
  *(undefined1 *)(param_2 + 0x6c) = 0;
  *(undefined8 *)(param_2 + 0x62) = 0;
  *(undefined8 *)(param_2 + 100) = 0;
  param_2[0x66] = 0;
  return;
}



// FUNCTION 148641c9c FUN_148641c9c body=176 status=ok
// SIG undefined FUN_148641c9c(void)

undefined8 FUN_148641c9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + 8 + lVar6;
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      FUN_14070e270(lVar2,puVar1 + 2);
      uVar3 = puVar1[99];
      uVar4 = puVar1[100];
      uVar5 = puVar1[0x65];
      *(undefined4 *)(lVar2 + 0x180) = puVar1[0x62];
      *(undefined4 *)(lVar2 + 0x184) = uVar3;
      *(undefined4 *)(lVar2 + 0x188) = uVar4;
      *(undefined4 *)(lVar2 + 0x18c) = uVar5;
      *(undefined4 *)(lVar2 + 400) = puVar1[0x66];
      FUN_14007b0d4(param_2 + lVar6 + 0x1a0,param_3 + lVar6 + 0x1a0);
      *(undefined1 *)(lVar2 + 0x1a8) = *(undefined1 *)(puVar1 + 0x6c);
      lVar6 = lVar6 + 0x1b8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148641d74 FUN_148641d74 body=59 status=ok
// SIG undefined FUN_148641d74(void)

undefined8 FUN_148641d74(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148641dc0 FUN_148641dc0 body=39 status=ok
// SIG undefined FUN_148641dc0(void)

void FUN_148641dc0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_1404967de(param_2 + 8);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 148641e60 FUN_148641e60 body=39 status=ok
// SIG undefined FUN_148641e60(void)

undefined8 FUN_148641e60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148641eb0 FUN_148641eb0 body=59 status=ok
// SIG undefined FUN_148641eb0(void)

undefined8 FUN_148641eb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148641ff4 FUN_148641ff4 body=59 status=ok
// SIG undefined FUN_148641ff4(void)

undefined8 FUN_148641ff4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864203a FUN_14864203a body=43 status=ok
// SIG undefined FUN_14864203a(void)

void FUN_14864203a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1486420ac FUN_1486420ac body=52 status=ok
// SIG undefined FUN_1486420ac(void)

undefined8 * FUN_1486420ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486420e0 FUN_1486420e0 body=55 status=ok
// SIG undefined FUN_1486420e0(void)

void FUN_1486420e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb574d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb574d0 = FUN_140002ddd(FUN_1464bc75f,uVar1,L"EffectCollectionDef");
  }
  return;
}



// FUNCTION 148642120 FUN_148642120 body=104 status=ok
// SIG undefined FUN_148642120(void)

undefined8 FUN_148642120(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14187fce8(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864218a FUN_14864218a body=28 status=ok
// SIG undefined FUN_14864218a(void)

undefined8 FUN_14864218a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148642200 FUN_148642200 body=59 status=ok
// SIG undefined FUN_148642200(void)

undefined8 FUN_148642200(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486422ee FUN_1486422ee body=40 status=ok
// SIG undefined FUN_1486422ee(void)

void FUN_1486422ee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14864238a FUN_14864238a body=51 status=ok
// SIG undefined FUN_14864238a(void)

undefined1 FUN_14864238a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140427366(param_3,param_2);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1486423ea FUN_1486423ea body=59 status=ok
// SIG undefined FUN_1486423ea(void)

undefined8 FUN_1486423ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148642430 FUN_148642430 body=51 status=ok
// SIG undefined FUN_148642430(void)

void FUN_148642430(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar1 = *(longlong *)(param_2 + 0x28);
    if (lVar1 != 0) {
      FUN_144a2da94(lVar1);
      FUN_1400020a8(lVar1);
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486424ec FUN_1486424ec body=123 status=ok
// SIG undefined FUN_1486424ec(void)

undefined8 FUN_1486424ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(lVar2 + 0x28) = *(undefined1 *)(puVar1 + 7);
      FUN_140427366(param_3 + lVar3 + 0x40,param_2 + lVar3 + 0x40);
      lVar3 = lVar3 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148642590 FUN_148642590 body=59 status=ok
// SIG undefined FUN_148642590(void)

undefined8 FUN_148642590(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486425d6 FUN_1486425d6 body=32 status=ok
// SIG undefined FUN_1486425d6(void)

void FUN_1486425d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_141638c42(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14864264c FUN_14864264c body=676 status=ok
// SIG undefined FUN_14864264c(void)

void FUN_14864264c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong local_78 [3];
  undefined8 local_60;
  undefined8 uStack_58;
  longlong lStack_50;
  longlong local_48 [6];
  
  local_48[5] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48[4] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar2 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_60 = 0xffffffffffffffff;
  uStack_58 = 0;
  lStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar1 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = (undefined4)local_60;
  uStack_94 = local_60._4_4_;
  uStack_90 = (undefined4)uStack_58;
  uStack_8c = uStack_58._4_4_;
  local_88 = lStack_50;
  if ((lStack_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_a8 = plVar1;
  FUN_143d271a0(local_48[4],plVar2,local_48,&local_98);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[5] ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486428f8 FUN_1486428f8 body=308 status=ok
// SIG undefined FUN_1486428f8(void)

void FUN_1486428f8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined2 local_60 [2];
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[0] = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined2 **)(param_2 + 0x38);
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = local_60;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14883be98(puVar2,local_68);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148642a34 FUN_148642a34 body=237 status=ok
// SIG undefined FUN_148642a34(void)

void FUN_148642a34(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_14883be40(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148642b28 FUN_148642b28 body=307 status=ok
// SIG undefined FUN_148642b28(void)

void FUN_148642b28(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_34 = 0;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_48[0] = 0;
  local_44 = 0;
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_38;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_1403218c0(puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148642c5c FUN_148642c5c body=292 status=ok
// SIG undefined FUN_148642c5c(void)

void FUN_148642c5c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14883ba46(local_50,local_68[2],local_68);
  FUN_1411b8130(param_3,local_50);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148642d82 FUN_148642d82 body=338 status=ok
// SIG undefined FUN_148642d82(void)

void FUN_148642d82(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [3];
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
  FUN_14883bae8(&local_48,local_20,local_38);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148642edc FUN_148642edc body=157 status=ok
// SIG undefined FUN_148642edc(void)

void FUN_148642edc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_14883bd14(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148642f7a FUN_148642f7a body=221 status=ok
// SIG undefined FUN_148642f7a(void)

void FUN_148642f7a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14883bdbe(&local_30,local_20);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864305e FUN_14864305e body=181 status=ok
// SIG undefined FUN_14864305e(void)

void FUN_14864305e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar2 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14883bed8(puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148643114 FUN_148643114 body=181 status=ok
// SIG undefined FUN_148643114(void)

void FUN_148643114(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar2 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14883bf14(puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486431ca FUN_1486431ca body=193 status=ok
// SIG undefined FUN_1486431ca(void)

void FUN_1486431ca(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14883beea(&local_30,puVar1);
  *param_3 = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864328c FUN_14864328c body=165 status=ok
// SIG undefined FUN_14864328c(void)

void FUN_14864328c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14883bf6c(&local_2c,local_1c);
  *param_3 = local_2c;
  param_3[1] = uStack_28;
  param_3[2] = uStack_24;
  param_3[3] = uStack_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148643332 FUN_148643332 body=317 status=ok
// SIG undefined FUN_148643332(void)

void FUN_148643332(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [40];
  longlong local_68;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_c8 = CONCAT44(uStack_54,CONCAT22(uStack_56,local_58));
  local_c0 = uStack_50;
  FUN_1447715ec(&local_b8,&local_48);
  FUN_14883ba1a(local_90,&local_c8);
  FUN_1411b8130(param_3,local_90);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148643470 FUN_148643470 body=180 status=ok
// SIG undefined FUN_148643470(void)

void FUN_148643470(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14883bf40(&local_30,puVar1);
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864352c FUN_14864352c body=308 status=ok
// SIG undefined FUN_14864352c(void)

void FUN_14864352c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined2 local_60 [2];
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[0] = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined2 **)(param_2 + 0x38);
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = local_60;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14883beb2(puVar2,local_68);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148643668 FUN_148643668 body=237 status=ok
// SIG undefined FUN_148643668(void)

void FUN_148643668(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_14883be6c(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864375c FUN_14864375c body=307 status=ok
// SIG undefined FUN_14864375c(void)

void FUN_14864375c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_34 = 0;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_48[0] = 0;
  local_44 = 0;
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_38;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14883bf84(puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148643896 FUN_148643896 body=559 status=ok
// SIG undefined FUN_148643896(void)

void FUN_148643896(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_55;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_54 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  puVar1 = &local_54;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  local_55 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_55);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_55);
  }
  local_68 = &local_55;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_68 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14883bf94(local_30,local_48,puVar2,puVar1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148643acc FUN_148643acc body=559 status=ok
// SIG undefined FUN_148643acc(void)

void FUN_148643acc(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_55;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_54 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  puVar1 = &local_54;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  local_55 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_55);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_55);
  }
  local_68 = &local_55;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_68 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14883c21a(local_30,local_48,puVar2,puVar1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148643cfc FUN_148643cfc body=537 status=ok
// SIG undefined FUN_148643cfc(void)

void FUN_148643cfc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong lStack_40;
  longlong local_38 [3];
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
  local_50 = 0xffffffffffffffff;
  uStack_48 = 0;
  lStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  plVar1 = &local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (undefined4)local_50;
  uStack_74 = local_50._4_4_;
  uStack_70 = (undefined4)uStack_48;
  uStack_6c = uStack_48._4_4_;
  local_68 = lStack_40;
  if ((lStack_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_143d270e6(local_20,local_38,&local_78,plVar1);
  if ((DAT_14c950c29 == 1) && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148643f16 FUN_148643f16 body=260 status=ok
// SIG undefined FUN_148643f16(void)

void FUN_148643f16(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined8 local_24;
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
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143d27350(local_18,puVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148644022 FUN_148644022 body=232 status=ok
// SIG undefined FUN_148644022(void)

void FUN_148644022(undefined8 param_1,longlong param_2)

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
  FUN_143d2735a(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864410c FUN_14864410c body=247 status=ok
// SIG undefined FUN_14864410c(void)

void FUN_14864410c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143d273c2(local_18,puVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864420a FUN_14864420a body=506 status=ok
// SIG undefined FUN_14864420a(void)

void FUN_14864420a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38 != 0;
  FUN_14883c0fa(local_28[2],local_28,local_30,local_34);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864440c FUN_14864440c body=506 status=ok
// SIG undefined FUN_14864440c(void)

void FUN_14864440c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38 != 0;
  FUN_14883c40c(local_28[2],local_28,local_30,local_34);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148644608 FUN_148644608 body=683 status=ok
// SIG undefined FUN_148644608(void)

void FUN_148644608(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined4 local_3c;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  local_48[0] = 0;
  local_44 = 0;
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_60 = 0xffffffffffffffff;
  uStack_58 = 0;
  lStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  plVar1 = &local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (undefined4)local_60;
  uStack_84 = local_60._4_4_;
  uStack_80 = (undefined4)uStack_58;
  uStack_7c = uStack_58._4_4_;
  local_78 = lStack_50;
  if ((lStack_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_98 = plVar1;
  FUN_143d27274(local_38[2],local_38,puVar2,&local_88);
  if ((DAT_14c950c29 == 1) && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148644934 FUN_148644934 body=59 status=ok
// SIG undefined FUN_148644934(void)

undefined8 FUN_148644934(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486449d4 FUN_1486449d4 body=34 status=ok
// SIG undefined FUN_1486449d4(void)

undefined8 FUN_1486449d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1486449f6 FUN_1486449f6 body=55 status=ok
// SIG undefined FUN_1486449f6(void)

void FUN_1486449f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57650 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57650 = FUN_140002ddd(FUN_1464bcf71,uVar1,L"FactEvaluator");
  }
  return;
}



// FUNCTION 148644a96 FUN_148644a96 body=59 status=ok
// SIG undefined FUN_148644a96(void)

undefined8 FUN_148644a96(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148644adc FUN_148644adc body=32 status=ok
// SIG undefined FUN_148644adc(void)

void FUN_148644adc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148644b7e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148644b46 FUN_148644b46 body=55 status=ok
// SIG undefined FUN_148644b46(void)

void FUN_148644b46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57668 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57668 = FUN_140002ddd(FUN_1464bd009,uVar1,L"FactEvaluator_Attribute");
  }
  return;
}



// FUNCTION 148644b7e FUN_148644b7e body=65 status=ok
// SIG undefined FUN_148644b7e(void)

void FUN_148644b7e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b05e750;
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
                    /* WARNING: Could not recover jumptable at 0x000148644bbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148644c14 FUN_148644c14 body=59 status=ok
// SIG undefined FUN_148644c14(void)

undefined8 FUN_148644c14(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148644cca FUN_148644cca body=54 status=ok
// SIG undefined FUN_148644cca(void)

undefined1 FUN_148644cca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1400fce78(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148644d00 FUN_148644d00 body=276 status=ok
// SIG undefined FUN_148644d00(void)

undefined4
FUN_148644d00(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  byte local_6c;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != 0) {
    local_80 = param_7;
    local_88 = param_6;
    FUN_14883b368(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
  }
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_6c & 2) == 0) {
    local_68 = 0;
    uStack_60 = 0;
  }
  local_80 = param_7;
  local_88 = param_6;
  uVar1 = FUN_14883b368(param_3,param_2,&local_68,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_6c & 4) != 0) {
    FUN_1447cd778(local_68,uStack_60 & 0xffffffff);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 148644e16 FUN_148644e16 body=39 status=ok
// SIG undefined FUN_148644e16(void)

void FUN_148644e16(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_14883b36c(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 148644e56 FUN_148644e56 body=59 status=ok
// SIG undefined FUN_148644e56(void)

undefined8 FUN_148644e56(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148644eee FUN_148644eee body=48 status=ok
// SIG undefined FUN_148644eee(void)

void FUN_148644eee(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1447cd778(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148644f66 FUN_148644f66 body=62 status=ok
// SIG undefined FUN_148644f66(void)

undefined1 FUN_148644f66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14862318e(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148644fcc FUN_148644fcc body=59 status=ok
// SIG undefined FUN_148644fcc(void)

undefined8 FUN_148644fcc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148645012 FUN_148645012 body=32 status=ok
// SIG undefined FUN_148645012(void)

void FUN_148645012(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1486450ea FUN_1486450ea body=59 status=ok
// SIG undefined FUN_1486450ea(void)

undefined8 FUN_1486450ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148645194 FUN_148645194 body=34 status=ok
// SIG undefined FUN_148645194(void)

undefined8 FUN_148645194(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1486451b6 FUN_1486451b6 body=55 status=ok
// SIG undefined FUN_1486451b6(void)

void FUN_1486451b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57718 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57718 = FUN_140002ddd(FUN_1464bd27d,uVar1,L"FactsBinderEventFilter");
  }
  return;
}



// FUNCTION 148645276 FUN_148645276 body=59 status=ok
// SIG undefined FUN_148645276(void)

undefined8 FUN_148645276(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486453c4 FUN_1486453c4 body=59 status=ok
// SIG undefined FUN_1486453c4(void)

undefined8 FUN_1486453c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148645410 FUN_148645410 body=38 status=ok
// SIG undefined FUN_148645410(void)

void FUN_148645410(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14028f4a8(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148645484 FUN_148645484 body=106 status=ok
// SIG undefined FUN_148645484(void)

void FUN_148645484(longlong param_1)

{
  FUN_1407e878c(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_1447cd778(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1486454ee FUN_1486454ee body=114 status=ok
// SIG undefined FUN_1486454ee(void)

void FUN_1486454ee(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148645560 FUN_148645560 body=60 status=ok
// SIG undefined FUN_148645560(void)

void FUN_148645560(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14864559c(param_1,param_2);
    param_1 = param_1 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return;
}



// FUNCTION 14864559c FUN_14864559c body=323 status=ok
// SIG undefined FUN_14864559c(void)

undefined1 * FUN_14864559c(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  pvVar2 = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_1447715ec(param_1 + 0x48,param_2 + 0x48);
  FUN_14055304a(param_1 + 0x70,param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar1 = *(int *)(param_2 + 0x88);
  pvVar2 = *(void **)(param_2 + 0x80);
  *(int *)(param_1 + 0x88) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    FUN_1486456e0(param_1 + 0x80,iVar1,0);
    memcpy(*(void **)(param_1 + 0x80),pvVar2,(longlong)iVar1 * 0x28);
  }
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  FUN_148844d4a(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 1486456e0 FUN_1486456e0 body=115 status=ok
// SIG undefined FUN_1486456e0(void)

void FUN_1486456e0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148645754 FUN_148645754 body=98 status=ok
// SIG undefined FUN_148645754(void)

void FUN_148645754(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486457b6 FUN_1486457b6 body=93 status=ok
// SIG undefined FUN_1486457b6(void)

void FUN_1486457b6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_1447a97f4(param_1,param_2);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      lVar1 = *(longlong *)(param_2 + 0x30);
      *(longlong *)(param_1 + 0x30) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      param_1 = param_1 + 0x40;
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148645894 FUN_148645894 body=59 status=ok
// SIG undefined FUN_148645894(void)

undefined8 FUN_148645894(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864596c FUN_14864596c body=87 status=ok
// SIG undefined FUN_14864596c(void)

undefined1 FUN_14864596c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148645b0c(param_2,param_3);
    FUN_148645b66(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1486459ec FUN_1486459ec body=59 status=ok
// SIG undefined FUN_1486459ec(void)

undefined8 FUN_1486459ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148645a32 FUN_148645a32 body=34 status=ok
// SIG undefined FUN_148645a32(void)

void FUN_148645a32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_148645aa2(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148645aa2 FUN_148645aa2 body=59 status=ok
// SIG undefined FUN_148645aa2(void)

void FUN_148645aa2(longlong *param_1)

{
  FUN_148645add(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148645add FUN_148645add body=47 status=ok
// SIG undefined FUN_148645add(void)

void FUN_148645add(longlong param_1,int param_2)

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



// FUNCTION 148645b0c FUN_148645b0c body=89 status=ok
// SIG undefined FUN_148645b0c(void)

undefined8 * FUN_148645b0c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148645bc6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 148645b66 FUN_148645b66 body=95 status=ok
// SIG undefined FUN_148645b66(void)

undefined8 * FUN_148645b66(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148645add(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148645c3a(param_1,iVar1);
      FUN_148645cad(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148645bc6 FUN_148645bc6 body=115 status=ok
// SIG undefined FUN_148645bc6(void)

void FUN_148645bc6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148645c3a FUN_148645c3a body=115 status=ok
// SIG undefined FUN_148645c3a(void)

void FUN_148645c3a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148645cad FUN_148645cad body=134 status=ok
// SIG undefined FUN_148645cad(void)

void FUN_148645cad(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 148645d5c FUN_148645d5c body=30 status=ok
// SIG undefined FUN_148645d5c(void)

void FUN_148645d5c(undefined8 param_1,longlong param_2)

{
  FUN_148645aa2(param_2 + 0x20);
  FUN_148645aa2(param_2);
  return;
}



// FUNCTION 148645d90 FUN_148645d90 body=54 status=ok
// SIG undefined FUN_148645d90(void)

undefined1 FUN_148645d90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148645eae(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148645dee FUN_148645dee body=59 status=ok
// SIG undefined FUN_148645dee(void)

undefined8 FUN_148645dee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148645e34 FUN_148645e34 body=43 status=ok
// SIG undefined FUN_148645e34(void)

void FUN_148645e34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148645aa2(param_2 + 0x20);
    FUN_148645aa2(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148645eae FUN_148645eae body=69 status=ok
// SIG undefined FUN_148645eae(void)

longlong FUN_148645eae(longlong param_1,longlong param_2)

{
  FUN_148645b0c();
  FUN_148645b66(param_1 + 0x10,param_2 + 0x10);
  FUN_148645b0c(param_1 + 0x20,param_2 + 0x20);
  FUN_148645b66(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 148645f7c FUN_148645f7c body=59 status=ok
// SIG undefined FUN_148645f7c(void)

undefined8 FUN_148645f7c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148646084 FUN_148646084 body=63 status=ok
// SIG undefined FUN_148646084(void)

undefined1 FUN_148646084(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486461ac(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 1486460ec FUN_1486460ec body=59 status=ok
// SIG undefined FUN_1486460ec(void)

undefined8 FUN_1486460ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148646138 FUN_148646138 body=38 status=ok
// SIG undefined FUN_148646138(void)

void FUN_148646138(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_148645484(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1486461ac FUN_1486461ac body=154 status=ok
// SIG undefined FUN_1486461ac(void)

undefined1 * FUN_1486461ac(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_1447715ec(param_1 + 0x48,param_2 + 0x48);
  FUN_1400fce78(param_1 + 0x70,param_2 + 0x70);
  FUN_148646246(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  FUN_1459855b4(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 148646246 FUN_148646246 body=89 status=ok
// SIG undefined FUN_148646246(void)

undefined8 * FUN_148646246(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486456e0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486462c8 FUN_1486462c8 body=46 status=ok
// SIG undefined FUN_1486462c8(void)

void FUN_1486462c8(undefined8 param_1,longlong param_2)

{
  FUN_1447cd778(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14864630c FUN_14864630c body=54 status=ok
// SIG undefined FUN_14864630c(void)

undefined1 FUN_14864630c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148646402(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 14864636a FUN_14864636a body=59 status=ok
// SIG undefined FUN_14864636a(void)

undefined8 FUN_14864636a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148646402 FUN_148646402 body=75 status=ok
// SIG undefined FUN_148646402(void)

undefined1 * FUN_148646402(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_1400fce78(param_1 + 8,param_2 + 8);
  if ((*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) ||
     (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20))) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return param_1;
}



// FUNCTION 14864644e FUN_14864644e body=50 status=ok
// SIG undefined FUN_14864644e(void)

void FUN_14864644e(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1447cd778(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148646490 FUN_148646490 body=44 status=ok
// SIG undefined FUN_148646490(void)

void FUN_148646490(undefined8 param_1,longlong *param_2)

{
  FUN_1403d9938(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486464d2 FUN_1486464d2 body=54 status=ok
// SIG undefined FUN_1486464d2(void)

undefined1 FUN_1486464d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486465c6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148646530 FUN_148646530 body=59 status=ok
// SIG undefined FUN_148646530(void)

undefined8 FUN_148646530(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486465c6 FUN_1486465c6 body=93 status=ok
// SIG undefined FUN_1486465c6(void)

undefined8 * FUN_1486465c6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1403d9938(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148646624(param_1,iVar1);
      FUN_140fe5d4d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148646624 FUN_148646624 body=115 status=ok
// SIG undefined FUN_148646624(void)

void FUN_148646624(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148646698 FUN_148646698 body=48 status=ok
// SIG undefined FUN_148646698(void)

void FUN_148646698(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1403d9938(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148646746 FUN_148646746 body=59 status=ok
// SIG undefined FUN_148646746(void)

undefined8 FUN_148646746(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148646814 FUN_148646814 body=104 status=ok
// SIG undefined FUN_148646814(void)

undefined8 FUN_148646814(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + 0x10 + lVar6;
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(puVar1 + 1);
      *(undefined8 *)(lVar2 + -0x10) = *puVar1;
      FUN_1406fa324(lVar2,puVar1 + 2);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
      uVar4 = *(undefined4 *)(puVar1 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486468a4 FUN_1486468a4 body=59 status=ok
// SIG undefined FUN_1486468a4(void)

undefined8 FUN_1486468a4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486468ea FUN_1486468ea body=38 status=ok
// SIG undefined FUN_1486468ea(void)

void FUN_1486468ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148646992 FUN_148646992 body=96 status=ok
// SIG undefined FUN_148646992(void)

undefined1 FUN_148646992(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_147f3153e(param_2 + -0x10,param_3 + -0x10);
      FUN_148646b26(param_2,param_3);
      FUN_148646b76(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148646a1a FUN_148646a1a body=59 status=ok
// SIG undefined FUN_148646a1a(void)

undefined8 FUN_148646a1a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148646a60 FUN_148646a60 body=32 status=ok
// SIG undefined FUN_148646a60(void)

void FUN_148646a60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148646ace(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148646ace FUN_148646ace body=87 status=ok
// SIG undefined FUN_148646ace(void)

void FUN_148646ace(longlong param_1)

{
  FUN_1411c12bc(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_140b86e6c(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148646b26 FUN_148646b26 body=79 status=ok
// SIG undefined FUN_148646b26(void)

undefined8 * FUN_148646b26(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148646bd4(param_1,iVar1);
      FUN_148646c47(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148646b76 FUN_148646b76 body=93 status=ok
// SIG undefined FUN_148646b76(void)

undefined8 * FUN_148646b76(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1411c12bc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148646c7c(param_1,iVar1);
      FUN_148646cef(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148646bd4 FUN_148646bd4 body=115 status=ok
// SIG undefined FUN_148646bd4(void)

void FUN_148646bd4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148646c47 FUN_148646c47 body=52 status=ok
// SIG undefined FUN_148646c47(void)

void FUN_148646c47(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14151bf7c(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148646c7c FUN_148646c7c body=115 status=ok
// SIG undefined FUN_148646c7c(void)

void FUN_148646c7c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148646cef FUN_148646cef body=141 status=ok
// SIG undefined FUN_148646cef(void)

void FUN_148646cef(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x10);
    do {
      *(undefined1 *)(puVar5 + -1) = *(undefined1 *)(param_2 + 1);
      puVar5[-2] = *param_2;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 3);
      _Src = (void *)param_2[2];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1401b309e(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 << 3);
      }
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar3 = *(undefined4 *)(param_2 + 5);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
      *(undefined4 *)(puVar5 + 3) = uVar3;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
      param_2 = param_2 + 6;
      puVar5 = puVar5 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148646dd6 FUN_148646dd6 body=122 status=ok
// SIG undefined FUN_148646dd6(void)

undefined8 FUN_148646dd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar7);
      lVar2 = param_2 + 0x30 + lVar7;
      *(undefined1 *)(lVar2 + -0x20) = *(undefined1 *)(puVar1 + 2);
      uVar6 = puVar1[1];
      *(undefined8 *)(lVar2 + -0x30) = *puVar1;
      *(undefined8 *)(lVar2 + -0x28) = uVar6;
      *(undefined8 *)(lVar2 + -0x18) = puVar1[3];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
      uVar4 = *(undefined4 *)(puVar1 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 6);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(puVar1 + 8);
      lVar7 = lVar7 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148646e78 FUN_148646e78 body=59 status=ok
// SIG undefined FUN_148646e78(void)

undefined8 FUN_148646e78(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148646ebe FUN_148646ebe body=38 status=ok
// SIG undefined FUN_148646ebe(void)

void FUN_148646ebe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148646fa2 FUN_148646fa2 body=59 status=ok
// SIG undefined FUN_148646fa2(void)

undefined8 FUN_148646fa2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486470a9 FUN_1486470a9 body=101 status=ok
// SIG undefined FUN_1486470a9(void)

void FUN_1486470a9(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_24);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864710f FUN_14864710f body=55 status=ok
// SIG undefined FUN_14864710f(void)

void FUN_14864710f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57bf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57bf8 = FUN_14171c317(FUN_1464bec0f,uVar1,L"EGameResourcePoolState");
  }
  return;
}



// FUNCTION 14864716e FUN_14864716e body=430 status=ok
// SIG undefined FUN_14864716e(void)

void FUN_14864716e(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_60 = 0;
  local_58 = 0xb;
  local_50 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  uVar1 = local_64;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_60;
  local_78 = local_58;
  local_70 = 0;
  local_90 = local_48;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_88 = uStack_40;
  FUN_143d4d8c8(&local_90,&local_80,uVar1);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864731e FUN_14864731e body=527 status=ok
// SIG undefined FUN_14864731e(void)

void FUN_14864731e(undefined8 param_1,longlong param_2)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_51;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0;
  local_48 = 0xb;
  local_40 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (undefined4)local_68;
  uStack_74 = local_68._4_4_;
  uStack_70 = (undefined4)uStack_60;
  uStack_6c = uStack_60._4_4_;
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_51);
  local_90 = local_50;
  local_88 = local_48;
  local_80 = 0;
  local_a0 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_98 = uStack_30;
  FUN_143d4e3e0(&local_a0,&local_90,uVar1 & 0xffffffff,&local_78);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864752e FUN_14864752e body=527 status=ok
// SIG undefined FUN_14864752e(void)

void FUN_14864752e(undefined8 param_1,longlong param_2)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_51;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0;
  local_48 = 0xb;
  local_40 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (undefined4)local_68;
  uStack_74 = local_68._4_4_;
  uStack_70 = (undefined4)uStack_60;
  uStack_6c = uStack_60._4_4_;
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_51);
  local_90 = local_50;
  local_88 = local_48;
  local_80 = 0;
  local_a0 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_98 = uStack_30;
  FUN_14156752a(&local_a0,&local_90,uVar1 & 0xffffffff,&local_78);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864773e FUN_14864773e body=316 status=ok
// SIG undefined FUN_14864773e(void)

void FUN_14864773e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0xb;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_50 = local_38;
  local_48 = 0;
  local_68 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_60 = uStack_20;
  FUN_143d4da1e(&local_68,&local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864787c FUN_14864787c body=316 status=ok
// SIG undefined FUN_14864787c(void)

void FUN_14864787c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 10;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_50 = local_38;
  local_48 = 0;
  local_68 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_60 = uStack_20;
  FUN_143d4d62c(&local_68,&local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486479ba FUN_1486479ba body=316 status=ok
// SIG undefined FUN_1486479ba(void)

void FUN_1486479ba(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0xb;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_50 = local_38;
  local_48 = 0;
  local_68 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_60 = uStack_20;
  FUN_143d4d80c(&local_68,&local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148647afe FUN_148647afe body=517 status=ok
// SIG undefined FUN_148647afe(void)

void FUN_148647afe(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_60 = 0;
  local_58 = 0xb;
  local_50 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar2 = local_64;
  iVar1 = local_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_60;
  local_78 = local_58;
  local_70 = 0;
  local_90 = local_48;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_88 = uStack_40;
  FUN_143d4df24(&local_90,&local_80,uVar2,iVar1 != 0);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148647d04 FUN_148647d04 body=331 status=ok
// SIG undefined FUN_148647d04(void)

void FUN_148647d04(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0;
  local_48 = 0xb;
  local_40 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_60 = local_48;
  local_58 = 0;
  local_78 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_70 = uStack_30;
  uVar1 = FUN_143d4d6a8(&local_78,&local_68);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148647e56 FUN_148647e56 body=416 status=ok
// SIG undefined FUN_148647e56(void)

void FUN_148647e56(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_51;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0;
  local_48 = 0xb;
  local_40 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  uVar1 = local_51;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_50;
  local_68 = local_48;
  local_60 = 0;
  local_80 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_78 = uStack_30;
  uVar1 = FUN_143d4dc8c(&local_80,&local_70,uVar1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148647ffe FUN_148647ffe body=517 status=ok
// SIG undefined FUN_148647ffe(void)

void FUN_148647ffe(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_60 = 0;
  local_58 = 0xb;
  local_50 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar2 = local_64;
  iVar1 = local_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_60;
  local_78 = local_58;
  local_70 = 0;
  local_90 = local_48;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_88 = uStack_40;
  FUN_143d4ddd6(&local_90,&local_80,uVar2,iVar1 != 0);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148648204 FUN_148648204 body=316 status=ok
// SIG undefined FUN_148648204(void)

void FUN_148648204(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0xb;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_50 = local_38;
  local_48 = 0;
  local_68 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_60 = uStack_20;
  FUN_143d4db5e(&local_68,&local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148648342 FUN_148648342 body=527 status=ok
// SIG undefined FUN_148648342(void)

void FUN_148648342(undefined8 param_1,longlong param_2)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_51;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0;
  local_48 = 0xb;
  local_40 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (undefined4)local_68;
  uStack_74 = local_68._4_4_;
  uStack_70 = (undefined4)uStack_60;
  uStack_6c = uStack_60._4_4_;
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_51);
  local_90 = local_50;
  local_88 = local_48;
  local_80 = 0;
  local_a0 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_98 = uStack_30;
  FUN_143d4e86e(&local_a0,&local_90,uVar1 & 0xffffffff,&local_78);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148648552 FUN_148648552 body=527 status=ok
// SIG undefined FUN_148648552(void)

void FUN_148648552(undefined8 param_1,longlong param_2)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_51;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0;
  local_48 = 0xb;
  local_40 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (undefined4)local_68;
  uStack_74 = local_68._4_4_;
  uStack_70 = (undefined4)uStack_60;
  uStack_6c = uStack_60._4_4_;
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_51);
  local_90 = local_50;
  local_88 = local_48;
  local_80 = 0;
  local_a0 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_98 = uStack_30;
  FUN_143d4e072(&local_a0,&local_90,uVar1 & 0xffffffff,&local_78);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148648770 FUN_148648770 body=37 status=ok
// SIG undefined FUN_148648770(void)

void FUN_148648770(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  FUN_148648924(param_2);
  return;
}



// FUNCTION 1486487c2 FUN_1486487c2 body=119 status=ok
// SIG undefined FUN_1486487c2(void)

undefined8 FUN_1486487c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
    do {
      *(undefined1 *)(param_2 + -0x60) = *(undefined1 *)(param_3 + -0x60);
      *(undefined8 *)(param_2 + -0x58) = *(undefined8 *)(param_3 + -0x58);
      *(undefined4 *)(param_2 + -0x50) = *(undefined4 *)(param_3 + -0x50);
      FUN_1447715ec(param_2 + -0x48,param_3 + -0x48);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x10);
      uVar6 = *(undefined4 *)(param_3 + -0xc);
      uVar7 = *(undefined4 *)(param_3 + -8);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined4 *)(param_2 + -0x10) = uVar5;
      *(undefined4 *)(param_2 + -0xc) = uVar6;
      *(undefined4 *)(param_2 + -8) = uVar7;
      FUN_148648a6c(param_2,param_3);
      param_3 = param_3 + 0xb8;
      param_2 = param_2 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148648862 FUN_148648862 body=59 status=ok
// SIG undefined FUN_148648862(void)

undefined8 FUN_148648862(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486488ae FUN_1486488ae body=40 status=ok
// SIG undefined FUN_1486488ae(void)

void FUN_1486488ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_148648a1c(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148648924 FUN_148648924 body=122 status=ok
// SIG undefined FUN_148648924(void)

undefined8 * FUN_148648924(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b067060;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_144928b90(param_1 + 2,0);
  FUN_144a7a8f6(param_1 + 9);
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 14864899e FUN_14864899e body=38 status=ok
// SIG undefined FUN_14864899e(void)

undefined8 FUN_14864899e(undefined8 param_1,int param_2)

{
  FUN_148648a1c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486489c4 FUN_1486489c4 body=55 status=ok
// SIG undefined FUN_1486489c4(void)

void FUN_1486489c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57a90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57a90 = FUN_140002ddd(FUN_1464be619,uVar1,L"FactTimeValueResolver");
  }
  return;
}



// FUNCTION 148648a1c FUN_148648a1c body=79 status=ok
// SIG undefined FUN_148648a1c(void)

void FUN_148648a1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b067060;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14118ae8e(param_1 + 0xd);
  if (param_1[7] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


