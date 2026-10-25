// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14689ced0 FUN_14689ced0 body=42 status=ok
// SIG undefined FUN_14689ced0(void)

void FUN_14689ced0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_2);
  return;
}



// FUNCTION 14689cf10 FUN_14689cf10 body=54 status=ok
// SIG undefined FUN_14689cf10(void)

undefined1 FUN_14689cf10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bb2e20(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14689cf6e FUN_14689cf6e body=59 status=ok
// SIG undefined FUN_14689cf6e(void)

undefined8 FUN_14689cf6e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689cfb4 FUN_14689cfb4 body=53 status=ok
// SIG undefined FUN_14689cfb4(void)

void FUN_14689cfb4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140bb2a1a(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14689d088 FUN_14689d088 body=42 status=ok
// SIG undefined FUN_14689d088(void)

void FUN_14689d088(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_2);
  return;
}



// FUNCTION 14689d0c8 FUN_14689d0c8 body=54 status=ok
// SIG undefined FUN_14689d0c8(void)

undefined1 FUN_14689d0c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bb2e20(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14689d126 FUN_14689d126 body=59 status=ok
// SIG undefined FUN_14689d126(void)

undefined8 FUN_14689d126(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689d16c FUN_14689d16c body=53 status=ok
// SIG undefined FUN_14689d16c(void)

void FUN_14689d16c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140bb2a1a(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14689d1f2 FUN_14689d1f2 body=63 status=ok
// SIG undefined FUN_14689d1f2(void)

void FUN_14689d1f2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xffffffff00000080;
  return;
}



// FUNCTION 14689d29a FUN_14689d29a body=97 status=ok
// SIG undefined FUN_14689d29a(void)

undefined1 FUN_14689d29a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bb2e20(param_2,param_3);
    FUN_14689d3e6(param_2 + 0x50,param_3 + 0x50);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 14689d324 FUN_14689d324 body=59 status=ok
// SIG undefined FUN_14689d324(void)

undefined8 FUN_14689d324(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689d370 FUN_14689d370 body=40 status=ok
// SIG undefined FUN_14689d370(void)

void FUN_14689d370(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_145caebfe(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14689d3e6 FUN_14689d3e6 body=122 status=ok
// SIG undefined FUN_14689d3e6(void)

longlong FUN_14689d3e6(longlong param_1,longlong param_2)

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
    FUN_14689d460(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14689d460 FUN_14689d460 body=328 status=ok
// SIG undefined FUN_14689d460(void)

longlong * FUN_14689d460(longlong *param_1,longlong *param_2)

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
    FUN_145caecc4(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_14488f93c(param_1);
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
          *(undefined8 *)(lVar4 + 0x28 + lVar7) = 0;
          *(undefined4 *)(lVar4 + 0x30 + lVar7) = 0;
          puVar1 = (undefined8 *)(lVar4 + 8 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + 0x34 + lVar7) = 0xffffffff00000080;
          *(undefined4 *)(lVar4 + 0x3c + lVar7) = 0;
          *(undefined8 *)(lVar4 + 0x48 + lVar7) = 0;
          *(undefined4 *)(lVar4 + 0x50 + lVar7) = 0;
          FUN_140bb2e20(lVar4 + 8 + lVar7,lVar3 + 8 + lVar7);
          *(undefined8 *)(lVar4 + 0x58 + lVar7) = *(undefined8 *)(lVar3 + 0x58 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x60;
      } while (uVar2 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 14689d5aa FUN_14689d5aa body=283 status=ok
// SIG undefined FUN_14689d5aa(void)

ulonglong FUN_14689d5aa(longlong param_1,longlong *param_2,byte param_3,byte param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  longlong *unaff_RSI;
  ulonglong uVar4;
  undefined7 uVar5;
  int iVar6;
  undefined1 auStack_478 [32];
  longlong local_458;
  undefined1 *local_450;
  undefined1 *local_448;
  undefined1 *local_440;
  char local_438;
  undefined1 local_430 [1035];
  undefined1 local_25 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_478;
  iVar3 = (int)(param_2[1] - *param_2);
  if ((param_1 == 0) || (unaff_RSI = param_2, (param_2[1] - *param_2 & 0xffffffffU) == 0)) {
    uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if ((param_1 == 0) != (iVar3 == 0)) {
      if ((param_1 != 0 | param_3) == 1) {
        uVar4 = CONCAT71(uVar5,iVar3 != 0 | param_4);
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    local_450 = local_430;
    local_438 = '\0';
    local_440 = local_25;
    local_458 = param_1;
    local_448 = local_450;
    FUN_14001b87a(&local_458,&local_450);
    puVar1 = local_450;
    iVar2 = (int)local_448 - (int)local_450;
    iVar3 = (int)param_2[1] - (int)*param_2;
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    uVar4 = 0;
    iVar6 = 0;
    if (0 < iVar3) {
      iVar6 = iVar3;
    }
    if (((iVar6 == iVar2) && (uVar4 = 1, iVar2 != 0)) && (0 < iVar3)) {
      iVar3 = FUN_14018695a(local_450,*param_2,(longlong)iVar2);
      uVar4 = (ulonglong)(iVar3 == 0);
    }
    if (local_438 == '\x01') {
      FUN_1400020a8(puVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689d6c6 FUN_14689d6c6 body=236 status=ok
// SIG undefined FUN_14689d6c6(void)

ulonglong FUN_14689d6c6(longlong param_1,longlong *param_2,byte param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  longlong *unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_488 [40];
  undefined1 *local_460;
  int local_458;
  longlong local_450;
  undefined1 *local_448;
  undefined1 *local_440;
  undefined1 *local_438;
  char local_430;
  undefined1 local_428 [1035];
  undefined1 local_1d [5];
  ulonglong local_18;
  undefined7 uVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_488;
  iVar1 = (int)(param_2[1] - *param_2);
  if ((param_1 == 0) || (unaff_RSI = param_2, (param_2[1] - *param_2 & 0xffffffffU) == 0)) {
    uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar3 = CONCAT71(uVar4,1);
    if ((param_1 == 0) != (iVar1 == 0)) {
      if ((param_1 != 0 | param_3) == 1) {
        uVar3 = CONCAT71(uVar4,iVar1 != 0 | param_4);
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    local_448 = local_428;
    local_430 = '\0';
    local_438 = local_1d;
    local_450 = param_1;
    local_440 = local_448;
    FUN_14001b87a(&local_450,&local_448);
    local_460 = local_448;
    local_458 = (int)local_440 - (int)local_448;
    uVar2 = FUN_14689d7b4(param_2);
    uVar3 = (ulonglong)uVar2;
    if (local_430 == '\x01') {
      FUN_1400020a8(local_448);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689d7b4 FUN_14689d7b4 body=131 status=ok
// SIG undefined FUN_14689d7b4(void)

bool FUN_14689d7b4(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  uint local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = (int)param_1[1] - (int)*param_1;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  uVar2 = uVar3;
  if ((int)uStack_20 < (int)uVar3) {
    uVar2 = uStack_20;
  }
  bVar4 = false;
  if ((int)uVar2 < 1) {
    uVar2 = 0;
  }
  if (uStack_20 == uVar2) {
    local_18 = (*param_1 + (longlong)(int)uVar3) - (ulonglong)uStack_20;
    local_10 = uStack_20;
    iVar1 = FUN_14682d80c(&local_28,&local_18,1);
    bVar4 = iVar1 == 0;
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689d838 FUN_14689d838 body=29 status=ok
// SIG undefined FUN_14689d838(void)

undefined8 FUN_14689d838(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14689d856 FUN_14689d856 body=32 status=ok
// SIG undefined FUN_14689d856(void)

undefined8 FUN_14689d856(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 14689d876 FUN_14689d876 body=64 status=ok
// SIG undefined FUN_14689d876(void)

void FUN_14689d876(void)

{
  if (DAT_14c9498bc != 0) {
    DAT_14c9498bc = 0;
    FUN_1446f8d3c(&DAT_14c9498b0,DAT_14c9498b8,0,8,8);
  }
  return;
}



// FUNCTION 14689d8b6 FUN_14689d8b6 body=62 status=ok
// SIG undefined FUN_14689d8b6(void)

void FUN_14689d8b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar1 = param_1;
  }
  FUN_14689d8f4(lVar1,*(undefined4 *)(param_1 + 0xc08));
  if (*(longlong *)(param_1 + 0xc00) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14689d8f4 FUN_14689d8f4 body=63 status=ok
// SIG undefined FUN_14689d8f4(void)

void FUN_14689d8f4(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x58);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(puVar1 + -0x12);
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14689d934 FUN_14689d934 body=31 status=ok
// SIG undefined FUN_14689d934(void)

void FUN_14689d934(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x44) = 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14689d954 FUN_14689d954 body=31 status=ok
// SIG undefined FUN_14689d954(void)

void FUN_14689d954(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14689d974 FUN_14689d974 body=107 status=ok
// SIG undefined FUN_14689d974(void)

void FUN_14689d974(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14c949e08;
  if (param_1 <= (int)DAT_14c949e08) {
    iVar2 = 0x20;
    if (0x20 < DAT_14c949e08) {
      lVar5 = (longlong)(int)DAT_14c949e08;
      if (0x20 < DAT_14c949e0c) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 5,0);
      iVar3 = (int)(uVar4 >> 5);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14c949e0c = iVar2;
    FUN_14689d9e0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14c949e08);
}



// FUNCTION 14689d9e0 FUN_14689d9e0 body=142 status=ok
// SIG undefined FUN_14689d9e0(void)

void FUN_14689d9e0(int param_1,uint param_2)

{
  if (param_2 < 0x21) {
    if (DAT_14c949e00 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14c949a00,DAT_14c949e00,(longlong)param_1 << 5);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14c949e00 == (void *)0x0) {
    FUN_1446efa72(&DAT_14c949e00,0,param_2,0x20);
    memmove(DAT_14c949e00,&DAT_14c949a00,(longlong)param_1 << 5);
    return;
  }
  FUN_1446efa72(&DAT_14c949e00,param_1,param_2,0x20);
  return;
}



// FUNCTION 14689da6e FUN_14689da6e body=69 status=ok
// SIG undefined FUN_14689da6e(void)

void FUN_14689da6e(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_14c949a00;
  if (DAT_14c949e00 != (undefined4 *)0x0) {
    puVar1 = DAT_14c949e00;
  }
  FUN_1411d9733(puVar1,DAT_14c949e08);
  DAT_14c949e08 = 0;
  if (DAT_14c949e0c == 0) {
    return;
  }
  FUN_14689dab4();
  return;
}



// FUNCTION 14689dab4 FUN_14689dab4 body=91 status=ok
// SIG undefined FUN_14689dab4(void)

void FUN_14689dab4(void)

{
  if (DAT_14c949e0c != 0) {
    DAT_14c949e0c = 0;
    if (DAT_14c949e00 != (void *)0x0) {
      memmove(&DAT_14c949a00,DAT_14c949e00,(longlong)DAT_14c949e08 << 5);
      FUN_1446efa72(&DAT_14c949e00,0,0,0x20);
      return;
    }
  }
  return;
}



// FUNCTION 14689db10 FUN_14689db10 body=38 status=ok
// SIG undefined FUN_14689db10(void)

undefined8 FUN_14689db10(undefined8 param_1,int param_2)

{
  FUN_145acc160();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14689db36 FUN_14689db36 body=123 status=ok
// SIG undefined FUN_14689db36(void)

void FUN_14689db36(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = param_1[0xef1];
  if (lVar2 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0xef2);
    uVar1 = (&DAT_14c949f00)[lVar4 * 0x50];
    if ((ulonglong)uVar1 < 0x20) {
      (&DAT_14c949f00)[lVar4 * 0x50] = uVar1 + 1;
      *(longlong *)(&DAT_14c949f08 + (ulonglong)uVar1 * 8 + lVar4 * 0x140) = lVar2;
    }
    else {
      FUN_1400020a8();
    }
  }
  *param_1 = &PTR_LAB_149eb0140;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014689dbae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1);
  return;
}



// FUNCTION 14689dbb2 FUN_14689dbb2 body=319 status=ok
// SIG undefined FUN_14689dbb2(void)

undefined8 * FUN_14689dbb2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = DAT_14c846240;
  param_1[1] = DAT_14c846240;
  uVar2 = DAT_14c846248;
  param_1[2] = DAT_14c846248;
  param_1[3] = param_3;
  param_1[8] = param_2;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x11,0,0x100);
  *(undefined4 *)(param_1 + 0x38) = 0;
  memset(param_1 + 0x39,0,0x200);
  *(undefined4 *)(param_1 + 0x80) = 0;
  memset(param_1 + 0x81,0,0x100);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  memset(param_1 + 0xa9,0,0x4400);
  param_1[0x930] = param_2;
  param_1[0x931] = uVar1;
  param_1[0x932] = uVar2;
  *(undefined4 *)(param_1 + 0x938) = 0;
  memset(param_1 + 0x939,0,0x100);
  *(undefined4 *)(param_1 + 0x960) = 0;
  memset(param_1 + 0x961,0,0x200);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  memset(param_1 + 0x9a9,0,0x100);
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  memset(param_1 + 0x9d1,0,0x2200);
  FUN_141716662(param_1 + 0xe18,param_2);
  return param_1;
}



// FUNCTION 14689dcf2 FUN_14689dcf2 body=38 status=ok
// SIG undefined FUN_14689dcf2(void)

undefined8 FUN_14689dcf2(undefined8 param_1,int param_2)

{
  FUN_14689db36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14689deac FUN_14689deac body=565 status=ok
// SIG undefined FUN_14689deac(void)

void FUN_14689deac(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if ((*(char *)(param_1 + 0x11) == '\x01') && (*(char *)(param_1 + 0x10) != '\0')) {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar3 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar3 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_14689e3f8(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar4 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar4;
        if (iVar5 == 0x20) {
          FUN_14689e7d8(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14689e0e2 FUN_14689e0e2 body=565 status=ok
// SIG undefined FUN_14689e0e2(void)

void FUN_14689e0e2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if ((*(char *)(param_1 + 0x11) == '\x01') && (*(char *)(param_1 + 0x10) != '\0')) {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar3 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar3 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_14689e3f8(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar4 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar4;
        if (iVar5 == 0x20) {
          FUN_14689e7d8(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14689e328 FUN_14689e328 body=90 status=ok
// SIG undefined FUN_14689e328(void)

undefined8 FUN_14689e328(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar3 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x58);
  lVar4 = (longlong)iVar1;
  *(uint *)(lVar2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x5c) < iVar1 + 1U) {
    FUN_140fefdba((longlong *)(lVar2 + 0x50),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + lVar4 * 0x18) = uVar3;
  *(undefined8 **)(lVar2 + 8 + lVar4 * 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x18) = param_3;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 14689e3aa FUN_14689e3aa body=78 status=ok
// SIG undefined FUN_14689e3aa(void)

void FUN_14689e3aa(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    cVar1 = *(char *)(param_1 + 0x11);
    bVar2 = *(byte *)(param_1 + 0x10);
    lVar3 = (longlong)param_3 << 3;
    do {
      FUN_14689eff2(param_1 + 0x40,param_2,cVar1 == '\x01' & bVar2);
      param_2 = param_2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14689e3f8 FUN_14689e3f8 body=324 status=ok
// SIG undefined FUN_14689e3f8(void)

void FUN_14689e3f8(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar6 = 0;
  uVar4 = 0;
  do {
    uVar4 = uVar4 | (ulonglong)
                    (*(ulonglong *)(param_1 + 0x10) <=
                    (ulonglong)
                    (**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) - *(longlong *)(param_1 + 8))) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  lVar6 = 0;
  uVar7 = 0;
  do {
    uVar7 = uVar7 | (ulonglong)(**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) != 0) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  uVar7 = uVar7 & uVar4;
  uVar4 = POPCOUNT(uVar7);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar9 = 0x400 - uVar3;
  uVar8 = 0;
  uVar5 = (uint)uVar4;
  if (uVar9 <= uVar5) {
    uVar8 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar9;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar7 >> uVar2 & 1) != 0)) {
        uVar2 = uVar8 & 0x3f;
        puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 0x10) = *puVar1;
        *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar5 * 0x10) = puVar1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_14689e53c(param_1);
      uVar5 = (int)uVar4 - uVar9;
      uVar4 = (ulonglong)uVar5;
      uVar9 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  if (uVar3 < uVar5) {
    do {
      puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
      *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 0x10) = *puVar1;
      *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar3 * 0x10) = puVar1;
      uVar3 = uVar3 + ((uVar7 >> (uVar8 & 0x3f) & 1) != 0);
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (uVar3 < uVar5);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 14689e53c FUN_14689e53c body=667 status=ok
// SIG undefined FUN_14689e53c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14689e53c(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [446];
  undefined4 auStack_127a [144];
  undefined1 auStack_103a [4098];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0x508;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x908);
  lVar5 = 0x242;
  do {
    *(undefined4 *)((longlong)auStack_127a + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)param_1 + lVar5 * 4 + -0x400) + 0xc);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1242);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    if ((uVar2 >> 0x15 & 1) == 0) {
      lVar6 = alStack_5430[lVar5 * 2];
      lVar7 = param_1[lVar5 * 2 + 0xa1];
      lVar3 = *param_1;
      if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_14689e6f5:
        uVar4 = *(uint *)(lVar6 + 0xc);
        if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
          lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          do {
            uVar2 = *(uint *)(lVar6 + 8);
            if ((uVar2 >> 0x17 & 1) != 0) goto LAB_14689e6e0;
            LOCK();
            bVar10 = uVar2 == *(uint *)(lVar6 + 8);
            if (bVar10) {
              *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
            }
            uVar2 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar10);
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
            uVar8 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar9 = *(uint *)(lVar7 + 8);
              bVar10 = uVar4 == uVar9;
              if (bVar10) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar8;
                uVar9 = uVar4;
              }
              uVar4 = uVar9;
              UNLOCK();
            } while (!bVar10);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar2) != 0) {
              uVar2 = *(uint *)(lVar7 + 0xc);
              goto LAB_14689e797;
            }
          }
        }
      }
      else {
        uVar9 = ~DAT_14c75ec9c;
        uVar8 = *(uint *)(lVar6 + 8);
        do {
          LOCK();
          uVar1 = *(uint *)(lVar6 + 8);
          bVar10 = uVar8 == uVar1;
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar8 & uVar9;
            uVar1 = uVar8;
          }
          uVar8 = uVar1;
          UNLOCK();
        } while (!bVar10);
        LOCK();
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar8 & uVar4) == 0) goto LAB_14689e6f5;
        if ((uVar2 >> 0x18 & 1) == 0) {
          **(longlong **)(lVar3 + 0x18) = lVar7;
          lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
          *(longlong *)(lVar3 + 0x18) = lVar6;
          if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
            FUN_141715f94();
          }
          goto LAB_14689e6e0;
        }
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_14689e797:
        local_5440 = lVar3 + 0x18;
        FUN_1427e7a4b(~uVar2,&local_5440);
      }
    }
    else {
      *(undefined8 *)param_1[lVar5 * 2 + 0xa2] = 0;
    }
LAB_14689e6e0:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_38 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 14689e7d8 FUN_14689e7d8 body=500 status=ok
// SIG undefined FUN_14689e7d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14689e7d8(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lVar17;
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lVar22;
  longlong lVar25;
  longlong lVar29;
  
  lVar6 = *(longlong *)(param_1 + 8);
  auVar16._8_4_ = (int)lVar6;
  auVar16._0_8_ = lVar6;
  auVar16._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar7;
  auVar21._8_4_ = (int)uVar7;
  auVar21._0_8_ = uVar7;
  auVar21._12_4_ = (int)(uVar7 >> 0x20);
  auVar13 = (undefined1  [16])0x0;
  auVar18 = pmovsxbq(in_XMM5,0x100);
  lVar4 = 0x79;
  auVar11 = pmovsxbq(auVar11,0x101);
  auVar12 = pmovsxbq(in_XMM1,0x202);
  do {
    plVar1 = (longlong *)(param_1 + lVar4 * 8);
    auVar23._0_8_ = *plVar1 - lVar6;
    auVar23._8_8_ = plVar1[1] - auVar16._8_8_;
    auVar26._0_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,0) < SUB168(auVar21 ^ _DAT_149931e80,0));
    auVar26._8_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,8) < SUB168(auVar21 ^ _DAT_149931e80,8));
    lVar22 = auVar18._8_8_;
    lVar25 = SUB168(~auVar26 & auVar11,0);
    lVar29 = SUB168(~auVar26 & auVar11,8);
    auVar28._0_8_ = lVar25 << lVar22;
    auVar28._8_8_ = lVar29 << lVar22;
    lVar17 = auVar18._0_8_;
    auVar27._0_8_ = lVar25 << lVar17;
    auVar27._8_8_ = lVar29 << lVar17;
    auVar18 = pblendw(auVar27,auVar28,0xf0);
    auVar13 = auVar13 | auVar18;
    auVar18._0_8_ = lVar17 + auVar12._0_8_;
    auVar18._8_8_ = lVar22 + auVar12._8_8_;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0x99);
  auVar14._0_8_ = auVar13._8_8_;
  auVar14._8_4_ = auVar13._8_4_;
  auVar14._12_4_ = auVar13._12_4_;
  auVar15 = pmovsxbq(auVar14 | auVar13,0x100);
  lVar6 = 0x79;
  auVar16 = (undefined1  [16])0x0;
  do {
    plVar1 = (longlong *)(param_1 + lVar6 * 8);
    auVar19._0_8_ = -(ulonglong)(*plVar1 == 0);
    auVar19._8_8_ = -(ulonglong)(plVar1[1] == 0);
    lVar17 = auVar15._8_8_;
    lVar22 = SUB168(~auVar19 & auVar11,0);
    lVar25 = SUB168(~auVar19 & auVar11,8);
    auVar24._0_8_ = lVar22 << lVar17;
    auVar24._8_8_ = lVar25 << lVar17;
    lVar4 = auVar15._0_8_;
    auVar20._0_8_ = lVar22 << lVar4;
    auVar20._8_8_ = lVar25 << lVar4;
    auVar21 = pblendw(auVar20,auVar24,0xf0);
    auVar16 = auVar16 | auVar21;
    auVar15._0_8_ = lVar4 + auVar12._0_8_;
    auVar15._8_8_ = lVar17 + auVar12._8_8_;
    lVar6 = lVar6 + 2;
  } while (lVar6 != 0x99);
  uVar8 = (auVar16._8_8_ | auVar16._0_8_) & SUB168(auVar14 | auVar13,0);
  uVar7 = POPCOUNT(uVar8);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar10 = 0x400 - uVar3;
  uVar9 = 0;
  uVar5 = (uint)uVar7;
  if (uVar10 <= uVar5) {
    uVar9 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar10;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar8 >> uVar2 & 1) != 0)) {
        uVar2 = uVar9 & 0x3f;
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 8) =
             *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_14689e9cc(param_1);
      uVar5 = (int)uVar7 - uVar10;
      uVar7 = (ulonglong)uVar5;
      uVar10 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  for (; uVar3 < uVar5; uVar3 = uVar3 + ((uVar8 >> uVar7 & 1) != 0)) {
    uVar7 = uVar9 & 0x3f;
    *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 8) =
         *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
    uVar9 = (ulonglong)((int)uVar9 + 1);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 14689e9cc FUN_14689e9cc body=632 status=ok
// SIG undefined FUN_14689e9cc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14689e9cc(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [124];
  undefined4 auStack_13bc [224];
  undefined1 auStack_103a [4106];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0xa1;
  do {
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xe1);
  lVar5 = 0xe1;
  do {
    auStack_13bc[lVar5] = *(undefined4 *)(param_1[lVar5 + -0x40] + 0xc);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x4e1);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    lVar6 = alStack_5430[lVar5 * 2];
    lVar7 = param_1[lVar5 + 0xa1];
    lVar3 = *param_1;
    if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_14689eb53:
      uVar4 = *(uint *)(lVar6 + 0xc);
      if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
        lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        do {
          uVar2 = *(uint *)(lVar6 + 8);
          if ((uVar2 >> 0x17 & 1) != 0) goto LAB_14689eb69;
          LOCK();
          bVar10 = uVar2 == *(uint *)(lVar6 + 8);
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
          }
          uVar2 = DAT_14c75ec9c;
          UNLOCK();
        } while (!bVar10);
        if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
          uVar8 = ~DAT_14c75ec9c;
          uVar4 = *(uint *)(lVar7 + 8);
          do {
            LOCK();
            uVar9 = *(uint *)(lVar7 + 8);
            bVar10 = uVar4 == uVar9;
            if (bVar10) {
              *(uint *)(lVar7 + 8) = uVar4 & uVar8;
              uVar9 = uVar4;
            }
            uVar4 = uVar9;
            UNLOCK();
          } while (!bVar10);
          LOCK();
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar4 & uVar2) != 0) {
            uVar2 = *(uint *)(lVar7 + 0xc);
            goto LAB_14689ec06;
          }
        }
      }
    }
    else {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar6 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar6 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar6 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar4) == 0) goto LAB_14689eb53;
      if ((uVar2 >> 0x18 & 1) == 0) {
        **(longlong **)(lVar3 + 0x18) = lVar7;
        lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
        *(longlong *)(lVar3 + 0x18) = lVar6;
        if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
          FUN_141715f94();
        }
      }
      else {
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_14689ec06:
        local_5440 = lVar3 + 0x18;
        FUN_1427e7a4b(~uVar2,&local_5440);
      }
    }
LAB_14689eb69:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_30 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 14689ec46 FUN_14689ec46 body=657 status=ok
// SIG undefined FUN_14689ec46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14689ec46(longlong param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar21 [16];
  
  auVar1 = _DAT_149931e80;
  lVar3 = 0x48;
  do {
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x148);
  lVar3 = 0x48;
  auVar20 = pmovsxbq(unaff_XMM6,0x800);
  auVar21 = pmovsxbq(unaff_XMM7,0x100);
  do {
    uVar11 = *(uint *)(*(longlong **)(param_1 + lVar3) + 1);
    uVar12 = (ulonglong)(int)uVar11;
    if (uVar12 != 0) {
      lVar10 = **(longlong **)(param_1 + lVar3);
      uVar5 = *(uint *)(param_1 + 0x3c0);
      uVar2 = 0x20 - uVar5;
      if (uVar11 < uVar2) {
        lVar4 = lVar10 + uVar12 * 8;
LAB_14689eced:
        uVar12 = (lVar4 - lVar10) - 8;
        auVar13._8_4_ = (int)uVar12;
        auVar13._0_8_ = uVar12;
        auVar13._12_4_ = (int)(uVar12 >> 0x20);
        auVar14._0_8_ = uVar12 >> 3;
        auVar14._8_8_ = auVar13._8_8_ >> 3;
        lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
        uVar6 = 0;
        do {
          auVar16._8_4_ = (int)lVar10;
          auVar16._0_8_ = lVar10;
          auVar16._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
          if ((bool)(~(SUB168(auVar14 | auVar1,0) < (longlong)(uVar6 ^ auVar1._0_8_)) & 1)) {
            *(longlong *)(lVar4 + -8 + uVar6 * 8) = lVar10 + auVar20._0_8_;
          }
          auVar18._8_4_ = (int)uVar6;
          auVar18._0_8_ = uVar6;
          auVar18._12_4_ = (int)(uVar6 >> 0x20);
          if ((longlong)((auVar18._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
              SUB168(auVar14 | auVar1,8)) {
            *(longlong *)(lVar4 + uVar6 * 8) = auVar16._8_8_ + auVar20._8_8_;
          }
          uVar6 = uVar6 + 2;
          lVar10 = lVar10 + 0x10;
        } while (((uVar12 >> 3) + 2 & 0xfffffffffffffffe) != uVar6);
        uVar5 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar5 = *(uint *)(param_1 + 0x3c0);
          if (uVar2 != 0) {
            uVar6 = (longlong)(int)uVar2 + 0x1fffffffffffffff;
            uVar7 = uVar6 & 0x1fffffffffffffff;
            auVar15._8_4_ = (int)uVar7;
            auVar15._0_8_ = uVar7;
            auVar15._12_4_ = (int)(uVar7 >> 0x20);
            lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
            uVar9 = 0;
            lVar8 = lVar10;
            do {
              auVar17._8_4_ = (int)lVar8;
              auVar17._0_8_ = lVar8;
              auVar17._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
              if ((bool)(~(SUB168(auVar15 | auVar1,0) < (longlong)(uVar9 ^ auVar1._0_8_)) & 1)) {
                *(longlong *)(lVar4 + -8 + uVar9 * 8) = lVar8 + auVar20._0_8_;
              }
              auVar19._8_4_ = (int)uVar9;
              auVar19._0_8_ = uVar9;
              auVar19._12_4_ = (int)(uVar9 >> 0x20);
              if ((longlong)((auVar19._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
                  SUB168(auVar15 | auVar1,8)) {
                *(longlong *)(lVar4 + uVar9 * 8) = auVar17._8_8_ + auVar20._8_8_;
              }
              uVar9 = uVar9 + 2;
              lVar8 = lVar8 + 0x10;
            } while ((uVar7 - ((uint)uVar6 & 1)) + 2 != uVar9);
            uVar5 = *(uint *)(param_1 + 0x3c0);
          }
          uVar11 = (int)uVar12 - uVar2;
          uVar12 = (ulonglong)uVar11;
          lVar10 = lVar10 + (longlong)(int)uVar2 * 8;
          *(uint *)(param_1 + 0x3c0) = uVar5 + uVar2;
          FUN_14689e3f8(param_1);
          uVar2 = 0x20;
        } while (0x1f < uVar11);
        uVar5 = *(uint *)(param_1 + 0x3c0);
        if (uVar11 != 0) {
          lVar4 = lVar10 + (ulonglong)uVar11 * 8;
          goto LAB_14689eced;
        }
        uVar11 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar11 + uVar5;
    }
    lVar3 = lVar3 + 8;
    if (lVar3 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 14689eed8 FUN_14689eed8 body=282 status=ok
// SIG undefined FUN_14689eed8(void)

void FUN_14689eed8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  lVar2 = 0x48;
  do {
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x148);
  lVar2 = 0x48;
  do {
    uVar7 = *(uint *)(*(longlong **)(param_1 + lVar2) + 1);
    uVar8 = (ulonglong)(int)uVar7;
    if (uVar8 != 0) {
      puVar9 = (undefined8 *)**(longlong **)(param_1 + lVar2);
      uVar1 = *(uint *)(param_1 + 0x3c0);
      uVar4 = 0x20 - uVar1;
      if (uVar7 < uVar4) {
        puVar5 = puVar9 + uVar8;
LAB_14689ef33:
        puVar3 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8);
        do {
          *puVar3 = *puVar9;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar5);
        uVar1 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar1 = *(uint *)(param_1 + 0x3c0);
          if (uVar4 != 0) {
            lVar6 = 0;
            do {
              *(undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8 + lVar6) =
                   *(undefined8 *)((longlong)puVar9 + lVar6);
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uVar4 * 8 - lVar6 != 0);
            uVar1 = *(uint *)(param_1 + 0x3c0);
          }
          uVar7 = (int)uVar8 - uVar4;
          uVar8 = (ulonglong)uVar7;
          puVar9 = puVar9 + (int)uVar4;
          *(uint *)(param_1 + 0x3c0) = uVar1 + uVar4;
          FUN_14689e7d8(param_1);
          uVar4 = 0x20;
        } while (0x1f < uVar7);
        uVar1 = *(uint *)(param_1 + 0x3c0);
        if (uVar7 != 0) {
          puVar5 = puVar9 + uVar7;
          goto LAB_14689ef33;
        }
        uVar7 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar7 + uVar1;
    }
    lVar2 = lVar2 + 8;
    if (lVar2 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 14689eff2 FUN_14689eff2 body=669 status=ok
// SIG undefined FUN_14689eff2(void)

void FUN_14689eff2(longlong *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  uVar6 = DAT_14c75ec9c;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar5 = *param_2;
  lVar2 = *param_1;
  bVar10 = (ulonglong)(lVar5 - param_1[1]) < (ulonglong)param_1[2];
  if (param_3 == 0) {
    if (lVar5 == 0 || bVar10) goto LAB_14689f171;
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8) +
            (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff) * 0x18;
    uVar4 = *(uint *)(lVar3 + 8);
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) == 0) {
LAB_14689f18e:
      uVar6 = *(uint *)(lVar3 + 0xc);
      if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_14689f171;
      lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      do {
        uVar6 = *(uint *)(lVar3 + 8);
        if ((uVar6 >> 0x17 & 1) != 0) goto LAB_14689f171;
        LOCK();
        bVar10 = uVar6 == *(uint *)(lVar3 + 8);
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
        }
        uVar6 = DAT_14c75ec9c;
        UNLOCK();
      } while (!bVar10);
      if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_14689f171;
      uVar8 = ~DAT_14c75ec9c;
      uVar4 = *(uint *)(lVar5 + 8);
      do {
        LOCK();
        uVar9 = *(uint *)(lVar5 + 8);
        bVar10 = uVar4 == uVar9;
        if (bVar10) {
          *(uint *)(lVar5 + 8) = uVar4 & uVar8;
          uVar9 = uVar4;
        }
        uVar4 = uVar9;
        UNLOCK();
      } while (!bVar10);
      goto LAB_14689f273;
    }
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar3 + 8);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar3 + 8);
      bVar10 = uVar8 == uVar1;
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar8 & uVar9;
        uVar1 = uVar8;
      }
      uVar8 = uVar1;
      UNLOCK();
    } while (!bVar10);
    LOCK();
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar8 & uVar6) == 0) goto LAB_14689f18e;
joined_r0x00014689f129:
    if ((uVar4 >> 0x18 & 1) == 0) {
      **(longlong **)(lVar2 + 0x18) = lVar5;
      lVar5 = *(longlong *)(lVar2 + 0x18) + 8;
      *(longlong *)(lVar2 + 0x18) = lVar5;
      if (lVar5 == *(longlong *)(lVar2 + 0x20) + 0xf80) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
      }
      goto LAB_14689f171;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
  }
  else {
    if (lVar5 == 0 || bVar10) goto LAB_14689f171;
    uVar7 = (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff);
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8);
    uVar4 = *(uint *)(lVar3 + 8 + uVar7 * 0x18);
    if ((uVar4 >> 0x15 & 1) != 0) {
      *param_2 = 0;
      goto LAB_14689f171;
    }
    lVar3 = lVar3 + uVar7 * 0x18;
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) != 0) {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar3 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar3 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar6) != 0) goto joined_r0x00014689f129;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
    if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_14689f171;
    lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    do {
      uVar6 = *(uint *)(lVar3 + 8);
      if ((uVar6 >> 0x17 & 1) != 0) goto LAB_14689f171;
      LOCK();
      bVar10 = uVar6 == *(uint *)(lVar3 + 8);
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
      }
      uVar6 = DAT_14c75ec9c;
      UNLOCK();
    } while (!bVar10);
    if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_14689f171;
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar5 + 8);
    do {
      LOCK();
      uVar4 = *(uint *)(lVar5 + 8);
      bVar10 = uVar8 == uVar4;
      if (bVar10) {
        *(uint *)(lVar5 + 8) = uVar8 & uVar9;
        uVar4 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar4;
    } while (!bVar10);
LAB_14689f273:
    LOCK();
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar4 & uVar6) == 0) goto LAB_14689f171;
    uVar6 = *(uint *)(lVar5 + 0xc);
  }
  local_18 = lVar2 + 0x18;
  FUN_1427e7a4b(~uVar6);
LAB_14689f171:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689f29e FUN_14689f29e body=403 status=ok
// SIG undefined FUN_14689f29e(void)

void FUN_14689f29e(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lStack_3da;
  uint auStack_3d2 [88];
  undefined *puStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  uint auStack_240 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar4 = 0x192;
  do {
    plVar7 = *(longlong **)(param_1 + -10 + lVar4);
    uVar1 = *(ushort *)(param_1 + lVar4);
    lVar10 = plVar7[1];
    *(ulonglong *)((longlong)&lStack_3da + lVar4) =
         (ulonglong)*(ushort *)(param_1 + -2 + lVar4) * 8 + *plVar7;
    *(int *)((longlong)auStack_3d2 + lVar4) = (int)lVar10;
    *(uint *)((longlong)auStack_3d2 + lVar4 + 4) = (uint)uVar1;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x392);
  lVar4 = 0;
  do {
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  lVar4 = 0;
  do {
    uVar8 = *(uint *)((longlong)auStack_240 + lVar4);
    if (uVar8 != 0) {
      uVar2 = *(uint *)((longlong)auStack_240 + lVar4 + 4);
      lVar10 = *(longlong *)((longlong)&lStack_248 + lVar4);
      uVar6 = *(uint *)(param_1 + 0x3c0);
      uVar3 = 0x20 - uVar6;
      if (uVar3 <= uVar8) {
        do {
          uVar5 = uVar3 * uVar2;
          uVar6 = *(uint *)(param_1 + 0x3c0);
          if (uVar5 != 0) {
            plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
            lVar9 = 0;
            do {
              *plVar7 = lVar10 + lVar9;
              plVar7 = plVar7 + 1;
              lVar9 = lVar9 + (ulonglong)uVar2 * 8;
            } while ((ulonglong)uVar5 * 8 - lVar9 != 0);
            uVar6 = *(uint *)(param_1 + 0x3c0);
          }
          lVar10 = lVar10 + (ulonglong)uVar5 * 8;
          uVar8 = uVar8 - uVar3;
          *(uint *)(param_1 + 0x3c0) = uVar6 + uVar3;
          puStack_270 = (undefined *)0x14689f3a0;
          FUN_14689e3f8(param_1);
          uVar3 = 0x20;
        } while (0x1f < uVar8);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      if (uVar2 * uVar8 != 0) {
        plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
        lVar9 = 0;
        do {
          *plVar7 = lVar10 + lVar9;
          plVar7 = plVar7 + 1;
          lVar9 = lVar9 + (ulonglong)uVar2 * 8;
        } while ((ulonglong)(uVar2 * uVar8) << 3 != lVar9);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      *(uint *)(param_1 + 0x3c0) = uVar6 + uVar8;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_270 = &UNK_14689f431;
  FUN_144d8e3a0();
}



// FUNCTION 14689f432 FUN_14689f432 body=403 status=ok
// SIG undefined FUN_14689f432(void)

void FUN_14689f432(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lStack_3da;
  uint auStack_3d2 [88];
  undefined *puStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  uint auStack_240 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar5 = 0x192;
  do {
    plVar3 = *(longlong **)(param_1 + -10 + lVar5);
    uVar1 = *(ushort *)(param_1 + lVar5);
    lVar11 = plVar3[1];
    *(ulonglong *)((longlong)&lStack_3da + lVar5) =
         (ulonglong)*(ushort *)(param_1 + -2 + lVar5) * 8 + *plVar3;
    *(int *)((longlong)auStack_3d2 + lVar5) = (int)lVar11;
    *(uint *)((longlong)auStack_3d2 + lVar5 + 4) = (uint)uVar1;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x392);
  lVar5 = 0;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x200);
  lVar5 = 0;
  do {
    uVar9 = *(uint *)((longlong)auStack_240 + lVar5);
    if (uVar9 != 0) {
      uVar2 = *(uint *)((longlong)auStack_240 + lVar5 + 4);
      lVar11 = *(longlong *)((longlong)&lStack_248 + lVar5);
      uVar7 = *(uint *)(param_1 + 0x3c0);
      uVar4 = 0x20 - uVar7;
      if (uVar4 <= uVar9) {
        do {
          uVar6 = uVar4 * uVar2;
          uVar7 = *(uint *)(param_1 + 0x3c0);
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar7 * 8);
            lVar10 = 0;
            do {
              *puVar8 = *(undefined8 *)(lVar11 + lVar10);
              puVar8 = puVar8 + 1;
              lVar10 = lVar10 + (ulonglong)uVar2 * 8;
            } while ((ulonglong)uVar6 * 8 - lVar10 != 0);
            uVar7 = *(uint *)(param_1 + 0x3c0);
          }
          lVar11 = lVar11 + (ulonglong)uVar6 * 8;
          uVar9 = uVar9 - uVar4;
          *(uint *)(param_1 + 0x3c0) = uVar7 + uVar4;
          puStack_270 = (undefined *)0x14689f534;
          FUN_14689e7d8(param_1);
          uVar4 = 0x20;
        } while (0x1f < uVar9);
        uVar7 = *(uint *)(param_1 + 0x3c0);
      }
      if (uVar2 * uVar9 != 0) {
        puVar8 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar7 * 8);
        lVar10 = 0;
        do {
          *puVar8 = *(undefined8 *)(lVar11 + lVar10);
          puVar8 = puVar8 + 1;
          lVar10 = lVar10 + (ulonglong)uVar2 * 8;
        } while ((ulonglong)(uVar2 * uVar9) << 3 != lVar10);
        uVar7 = *(uint *)(param_1 + 0x3c0);
      }
      *(uint *)(param_1 + 0x3c0) = uVar7 + uVar9;
    }
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x200);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_270 = &UNK_14689f5c5;
  FUN_144d8e3a0();
}



// FUNCTION 14689f5c6 FUN_14689f5c6 body=908 status=ok
// SIG undefined FUN_14689f5c6(void)

undefined4 FUN_14689f5c6(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  ulonglong *puVar26;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x70c0) != 0) {
    puVar24 = (undefined8 *)(param_1 + (longlong)*(int *)(param_1 + 0x70c0) * 0x18 + 0x70c8);
    puVar22 = (undefined8 *)(param_1 + 0x70c8);
    local_e0 = puVar24;
    do {
      iVar19 = *(int *)(puVar22 + 2);
      if (iVar19 != 0) {
        uVar17 = *puVar22;
        plVar7 = (longlong *)puVar22[1];
        uVar3 = *(uint *)((longlong)puVar22 + 0x14);
        lVar13 = *plVar7;
        if (*(int *)((longlong)plVar7 + 0x34) == 0) {
          puVar8 = *(undefined8 **)(param_1 + 0x7740);
          *puVar8 = uVar17;
          puVar8[1] = lVar13;
          *(int *)(puVar8 + 2) = iVar19;
          *(uint *)((longlong)puVar8 + 0x14) = uVar3;
LAB_14689f758:
          lVar13 = *(longlong *)(param_1 + 0x7748);
          lVar12 = *(longlong *)(param_1 + 0x7740) + 0x18;
          *(longlong *)(param_1 + 0x7740) = lVar12;
          if (lVar12 == lVar13 + 0xfc0) {
            lVar12 = FUN_1400305d2(&DAT_14c949ec0);
            *(longlong *)(local_e8 + 0x7748) = lVar12;
            *(longlong *)(lVar12 + 0xff0) = lVar13;
            *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
            param_1 = local_e8;
          }
        }
        else {
          uVar4 = *(uint *)(plVar7 + 1);
          if (uVar4 != 0) {
            uVar20 = 0;
            iVar19 = 0;
            local_d8 = puVar22;
            local_d0 = uVar17;
            do {
              plVar10 = (longlong *)plVar7[4];
              if ((longlong *)plVar7[4] == (longlong *)0x0) {
                plVar10 = plVar7 + 2;
              }
              uVar15 = uVar20 + 0x1f;
              if (-1 < (int)uVar20) {
                uVar15 = uVar20;
              }
              if ((*(uint *)((longlong)plVar10 + (longlong)((int)uVar15 >> 5) * 4) >>
                   (uVar20 & 0x1f) & 1) == 0) {
                if (0 < iVar19) {
                  puVar22 = *(undefined8 **)(param_1 + 0x7740);
                  *puVar22 = uVar17;
                  puVar22[1] = lVar13;
                  *(int *)(puVar22 + 2) = iVar19;
                  *(uint *)((longlong)puVar22 + 0x14) = uVar3;
                  lVar12 = *(longlong *)(param_1 + 0x7748);
                  lVar11 = *(longlong *)(param_1 + 0x7740) + 0x18;
                  *(longlong *)(param_1 + 0x7740) = lVar11;
                  if (lVar11 == lVar12 + 0xfc0) {
                    lVar11 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(param_1 + 0x7750));
                    *(longlong *)(local_e8 + 0x7748) = lVar11;
                    *(longlong *)(lVar11 + 0xff0) = lVar12;
                    *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
                    uVar17 = local_d0;
                    param_1 = local_e8;
                  }
                  lVar13 = lVar13 + (ulonglong)(iVar19 * uVar3);
                  iVar19 = 0;
                }
                lVar13 = lVar13 + (ulonglong)uVar3;
              }
              else {
                iVar19 = iVar19 + 1;
              }
              uVar20 = uVar20 + 1;
            } while (uVar4 != uVar20);
            puVar22 = local_d8;
            puVar24 = local_e0;
            if (0 < iVar19) {
              puVar8 = *(undefined8 **)(param_1 + 0x7740);
              *puVar8 = uVar17;
              puVar8[1] = lVar13;
              *(int *)(puVar8 + 2) = iVar19;
              *(uint *)((longlong)puVar8 + 0x14) = uVar3;
              goto LAB_14689f758;
            }
          }
        }
      }
      puVar22 = puVar22 + 3;
    } while (puVar22 != puVar24);
    *(undefined4 *)(param_1 + 0x70c0) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x7400);
  lVar13 = param_1;
  if ((ulonglong)uVar3 != 0) {
    piVar16 = (int *)(param_1 + 0x7418);
    puVar25 = local_c8;
    uVar18 = 0;
    do {
      iVar19 = *piVar16;
      *puVar25 = (uint)uVar18;
      puVar25 = puVar25 + (0 < iVar19);
      uVar18 = uVar18 + 1;
      piVar16 = piVar16 + 6;
    } while (uVar3 != uVar18);
    puVar21 = local_c8;
    if (puVar21 != puVar25) {
      do {
        puVar26 = *(ulonglong **)(lVar13 + 0x7740);
        lVar12 = *(longlong *)(lVar13 + 0x7748);
        puVar1 = (ulonglong *)(lVar12 + 0xfc0);
        puVar2 = puVar21 + (int)((ulonglong)((longlong)puVar1 - (longlong)puVar26) >> 3) *
                           -0x55555555;
        puVar23 = puVar25;
        if (puVar2 < puVar25) {
          puVar23 = puVar2;
        }
        *(ulonglong **)(lVar13 + 0x7740) =
             puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3;
        if (puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3
            == puVar1) {
          lVar13 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(lVar13 + 0x7750));
          *(longlong *)(local_e8 + 0x7748) = lVar13;
          *(longlong *)(lVar13 + 0xff0) = lVar12;
          *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
          lVar13 = local_e8;
        }
        do {
          uVar14 = (ulonglong)*puVar21;
          puVar21 = puVar21 + 1;
          uVar18 = *(ulonglong *)(param_1 + 0x7408 + uVar14 * 0x18);
          uVar9 = *(ulonglong *)(param_1 + 0x7410 + uVar14 * 0x18);
          uVar5 = *(undefined4 *)(param_1 + 0x7418 + uVar14 * 0x18);
          uVar6 = *(undefined4 *)((uVar18 & 0xfffffffffffffffe) - 8);
          *puVar26 = uVar18;
          puVar26[1] = uVar9;
          *(undefined4 *)(puVar26 + 2) = uVar5;
          *(undefined4 *)((longlong)puVar26 + 0x14) = uVar6;
          puVar26 = puVar26 + 3;
        } while (puVar21 != puVar23);
        puVar21 = puVar2;
      } while (puVar2 < puVar25);
    }
    *(undefined4 *)(lVar13 + 0x7400) = 0;
  }
  iVar19 = (int)((ulonglong)(*(longlong *)(lVar13 + 0x7740) - *(longlong *)(lVar13 + 0x7748)) >> 3)
           * -0x55555555;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)iVar19 >> 8),
                  *(longlong *)(*(longlong *)(lVar13 + 0x7748) + 0xff0) != 0 || 0 < iVar19);
}



// FUNCTION 14689f954 FUN_14689f954 body=3931 status=ok
// SIG undefined FUN_14689f954(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14689f954(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint *puVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_54c8 [32];
  longlong *local_54a8;
  longlong local_54a0;
  uint local_5498 [2];
  undefined8 local_5490;
  undefined1 local_1498 [768];
  undefined4 auStack_1198 [64];
  uint auStack_1098 [1026];
  ulonglong local_90;
  
  auVar3 = _DAT_149931e80;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_54c8;
  local_54a8 = (longlong *)(param_1 + 0x40);
  lVar7 = (longlong)*(int *)(param_1 + 0x80);
  if (lVar7 != 0) {
    plVar12 = (longlong *)(param_1 + 0x88);
    lVar11 = 0;
    do {
      lVar11 = lVar11 + 8;
    } while (lVar7 * 8 != lVar11);
    auVar32 = pmovsxbq(unaff_XMM6,0x800);
    auVar33 = pmovsxbq(unaff_XMM7,0x100);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        lVar11 = *(longlong *)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x400);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          lVar8 = uVar22 * 8 + lVar11;
LAB_14689fa51:
          uVar22 = (lVar8 - lVar11) - 8;
          auVar25._8_4_ = (int)uVar22;
          auVar25._0_8_ = uVar22;
          auVar25._12_4_ = (int)(uVar22 >> 0x20);
          auVar26._0_8_ = uVar22 >> 3;
          auVar26._8_8_ = auVar25._8_8_ >> 3;
          lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
          uVar17 = 0;
          do {
            auVar28._8_4_ = (int)lVar11;
            auVar28._0_8_ = lVar11;
            auVar28._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
            if ((bool)(~(SUB168(auVar26 | auVar3,0) < (longlong)(uVar17 ^ auVar3._0_8_)) & 1)) {
              *(longlong *)(lVar8 + -8 + uVar17 * 8) = lVar11 + auVar32._0_8_;
            }
            auVar30._8_4_ = (int)uVar17;
            auVar30._0_8_ = uVar17;
            auVar30._12_4_ = (int)(uVar17 >> 0x20);
            if ((longlong)((auVar30._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                SUB168(auVar26 | auVar3,8)) {
              *(longlong *)(lVar8 + uVar17 * 8) = auVar28._8_8_ + auVar32._8_8_;
            }
            uVar17 = uVar17 + 2;
            lVar11 = lVar11 + 0x10;
          } while (((uVar22 >> 3) + 2 & 0xfffffffffffffffe) != uVar17);
          uVar19 = *(uint *)(param_1 + 0x400);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x400);
            if (uVar4 != 0) {
              uVar17 = (longlong)(int)uVar4 + 0x1fffffffffffffff;
              uVar13 = uVar17 & 0x1fffffffffffffff;
              auVar27._8_4_ = (int)uVar13;
              auVar27._0_8_ = uVar13;
              auVar27._12_4_ = (int)(uVar13 >> 0x20);
              lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
              uVar18 = 0;
              lVar20 = lVar11;
              do {
                auVar29._8_4_ = (int)lVar20;
                auVar29._0_8_ = lVar20;
                auVar29._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
                if ((bool)(~(SUB168(auVar27 | auVar3,0) < (longlong)(uVar18 ^ auVar3._0_8_)) & 1)) {
                  *(longlong *)(lVar8 + -8 + uVar18 * 8) = lVar20 + auVar32._0_8_;
                }
                auVar31._8_4_ = (int)uVar18;
                auVar31._0_8_ = uVar18;
                auVar31._12_4_ = (int)(uVar18 >> 0x20);
                if ((longlong)((auVar31._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                    SUB168(auVar27 | auVar3,8)) {
                  *(longlong *)(lVar8 + uVar18 * 8) = auVar29._8_8_ + auVar32._8_8_;
                }
                uVar18 = uVar18 + 2;
                lVar20 = lVar20 + 0x10;
              } while ((uVar13 - ((uint)uVar17 & 1)) + 2 != uVar18);
              uVar19 = *(uint *)(param_1 + 0x400);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            lVar11 = lVar11 + (longlong)(int)uVar4 * 8;
            *(uint *)(param_1 + 0x400) = uVar19 + uVar4;
            FUN_14689e3f8(local_54a8);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x400);
          if (uVar6 != 0) {
            lVar8 = (ulonglong)uVar6 * 8 + lVar11;
            goto LAB_14689fa51;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x400) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar7 * 8 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  uVar6 = *(uint *)(param_1 + 0x1c0);
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x1c8 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x1d2 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x1d0 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x400);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x400);
            if (uVar10 != 0) {
              plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *plVar12 = lVar11 + lVar7;
                plVar12 = plVar12 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x400);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x400) = uVar21 + uVar5;
            FUN_14689e3f8(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        if (uVar4 * uVar19 != 0) {
          plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *plVar12 = lVar11 + lVar7;
            plVar12 = plVar12 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        *(uint *)(param_1 + 0x400) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x400);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x50) <=
                        (ulonglong)
                        (**(longlong **)(param_1 + 0x408 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x48))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(**(longlong **)(param_1 + 0x408 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x540);
  uVar4 = 0x400 - uVar6;
  uVar19 = (uint)uVar22;
  if (uVar4 <= uVar19) {
    uVar17 = 0;
    do {
      uVar19 = *(uint *)(param_1 + 0x540);
      uVar6 = uVar19 + uVar4;
      for (; uVar19 < uVar6; uVar19 = uVar19 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
        *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar19 * 0x10) = *puVar16;
        *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar19 * 0x10) = puVar16;
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x540) = uVar6;
      FUN_14689e53c();
      uVar19 = (int)uVar22 - uVar4;
      uVar22 = (ulonglong)uVar19;
      uVar4 = 0x400;
    } while (0x3ff < uVar19);
    uVar6 = *(uint *)(param_1 + 0x540);
  }
  uVar19 = uVar19 + uVar6;
  if (uVar6 < uVar19) {
    do {
      puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
      *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar6 * 0x10) = *puVar16;
      *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar6 * 0x10) = puVar16;
      uVar6 = uVar6 + ((uVar13 >> (uVar17 & 0x3f) & 1) != 0);
      uVar17 = (ulonglong)((int)uVar17 + 1);
    } while (uVar6 < uVar19);
  }
  *(uint *)(param_1 + 0x540) = uVar19;
  *(undefined4 *)(param_1 + 0x400) = 0;
  if (uVar19 < 0x41) {
    if (uVar19 != 0) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while ((ulonglong)uVar19 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)auStack_1098 + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x548 + lVar7 * 4) + 0xc);
        lVar7 = lVar7 + 4;
      } while ((ulonglong)uVar19 << 2 != lVar7);
      goto LAB_14689ff64;
    }
  }
  else {
    plVar12 = (longlong *)(param_1 + 0x548);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x400);
    lVar7 = 0x40;
    do {
      auStack_1198[lVar7] = *(undefined4 *)(*plVar12 + 0xc);
      lVar11 = lVar7 - (ulonglong)uVar19;
      lVar7 = lVar7 + 1;
      plVar12 = plVar12 + 2;
    } while (lVar11 != 0x3f);
LAB_14689ff64:
    if (uVar19 != 0) {
      uVar22 = (ulonglong)uVar19;
      lVar7 = 0;
      do {
        *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
             (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
             *(longlong *)
              (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
        lVar7 = lVar7 + 4;
      } while (uVar22 * 4 - lVar7 != 0);
      if (uVar19 < 0x41) {
        lVar7 = 0;
        do {
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
        lVar7 = 0;
        do {
          *(undefined4 *)((longlong)local_5498 + lVar7) =
               *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
      }
      else {
        lVar7 = 0;
        memset(local_1498,0,0x400);
        do {
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != 0x400);
        lVar7 = 0x40;
        plVar12 = &local_5490;
        do {
          *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
          lVar11 = lVar7 - uVar22;
          lVar7 = lVar7 + 1;
          plVar12 = plVar12 + 2;
        } while (lVar11 != 0x3f);
      }
      uVar17 = 0;
      do {
        uVar19 = DAT_14c75ec9c;
        uVar6 = local_5498[uVar17 * 4];
        if ((uVar6 >> 0x15 & 1) == 0) {
          lVar7 = (&local_5490)[uVar17 * 2];
          uVar2 = *(undefined8 *)(param_1 + 0x548 + uVar17 * 0x10);
          lVar11 = *local_54a8;
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a011a:
            uVar19 = *(uint *)(lVar7 + 0xc);
            if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
              lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
              do {
                uVar6 = *(uint *)(lVar7 + 8);
                if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a0109;
                LOCK();
                bVar24 = uVar6 == *(uint *)(lVar7 + 8);
                if (bVar24) {
                  *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
                }
                uVar6 = DAT_14c75ec9c;
                UNLOCK();
              } while (!bVar24);
              if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
                uVar4 = ~DAT_14c75ec9c;
                uVar19 = *(uint *)(lVar8 + 8);
                do {
                  LOCK();
                  uVar21 = *(uint *)(lVar8 + 8);
                  bVar24 = uVar19 == uVar21;
                  if (bVar24) {
                    *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                    uVar21 = uVar19;
                  }
                  uVar19 = uVar21;
                  UNLOCK();
                } while (!bVar24);
                LOCK();
                *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
                UNLOCK();
                if ((uVar19 & uVar6) != 0) goto LAB_1468a01bc;
              }
            }
          }
          else {
            uVar21 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar5 = *(uint *)(lVar7 + 8);
              bVar24 = uVar4 == uVar5;
              if (bVar24) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar21;
                uVar5 = uVar4;
              }
              uVar4 = uVar5;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar19) == 0) goto LAB_1468a011a;
            if ((uVar6 >> 0x18 & 1) == 0) {
              **(undefined8 **)(lVar11 + 0x18) = uVar2;
              lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
              *(longlong *)(lVar11 + 0x18) = lVar7;
              if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
                FUN_141715f94();
              }
              goto LAB_1468a0109;
            }
LAB_1468a01bc:
            local_54a0 = lVar11 + 0x18;
            FUN_1427e7a4b();
          }
        }
        else {
          **(undefined8 **)(uVar17 * 0x10 + param_1 + 0x548 + 8) = 0;
        }
LAB_1468a0109:
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar22);
    }
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  lVar7 = param_1 + 0x4980;
  lVar11 = (longlong)*(int *)(param_1 + 0x49c0);
  if (lVar11 != 0) {
    plVar12 = (longlong *)(param_1 + 0x49c8);
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 8;
    } while (lVar11 * 8 != lVar8);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        puVar16 = *(undefined8 **)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x4d40);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          puVar15 = puVar16 + uVar22;
LAB_1468a0248:
          puVar9 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8);
          do {
            *puVar9 = *puVar16;
            puVar9 = puVar9 + 1;
            puVar16 = puVar16 + 1;
          } while (puVar16 != puVar15);
          uVar19 = *(uint *)(param_1 + 0x4d40);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x4d40);
            if (uVar4 != 0) {
              lVar8 = 0;
              do {
                *(undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8 + lVar8) =
                     *(undefined8 *)((longlong)puVar16 + lVar8);
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)uVar4 * 8 - lVar8 != 0);
              uVar19 = *(uint *)(param_1 + 0x4d40);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            puVar16 = puVar16 + (int)uVar4;
            *(uint *)(param_1 + 0x4d40) = uVar19 + uVar4;
            FUN_14689e7d8(lVar7);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x4d40);
          if (uVar6 != 0) {
            puVar15 = puVar16 + uVar6;
            goto LAB_1468a0248;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x4d40) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar11 * 8 + 0x49c8));
  }
  *(undefined4 *)(param_1 + 0x49c0) = 0;
  uVar6 = *(uint *)(param_1 + 0x4b00);
  local_54a8 = (longlong *)lVar7;
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x4b08 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x4b12 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x4b10 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x4d40);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x4d40);
            if (uVar10 != 0) {
              puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *puVar16 = *(undefined8 *)(lVar7 + lVar11);
                puVar16 = puVar16 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x4d40);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x4d40) = uVar21 + uVar5;
            FUN_14689e7d8(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        if (uVar4 * uVar19 != 0) {
          puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *puVar16 = *(undefined8 *)(lVar7 + lVar11);
            puVar16 = puVar16 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        *(uint *)(param_1 + 0x4d40) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x4b00) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x4d40);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x4990) <=
                        (ulonglong)
                        (*(longlong *)(param_1 + 0x4d48 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x4988))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(*(longlong *)(param_1 + 0x4d48 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x4e80);
  uVar19 = 0x400 - uVar6;
  uVar4 = (uint)uVar22;
  if (uVar19 <= uVar4) {
    uVar17 = 0;
    do {
      uVar4 = *(uint *)(param_1 + 0x4e80);
      uVar6 = uVar4 + uVar19;
      for (; uVar4 < uVar6; uVar4 = uVar4 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar4 * 8) =
             *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x4e80) = uVar6;
      FUN_14689e9cc();
      uVar4 = (int)uVar22 - uVar19;
      uVar22 = (ulonglong)uVar4;
      uVar19 = 0x400;
    } while (0x3ff < uVar4);
    uVar6 = *(uint *)(param_1 + 0x4e80);
  }
  uVar4 = uVar4 + uVar6;
  for (; uVar6 < uVar4; uVar6 = uVar6 + ((uVar13 >> uVar22 & 1) != 0)) {
    uVar22 = uVar17 & 0x3f;
    *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar6 * 8) =
         *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
    uVar17 = (ulonglong)((int)uVar17 + 1);
  }
  *(uint *)(param_1 + 0x4e80) = uVar4;
  *(undefined4 *)(param_1 + 0x4d40) = 0;
  if (uVar4 < 0x41) {
    if (uVar4 == 0) goto LAB_1468a0856;
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  else {
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x40);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  if (uVar4 != 0) {
    uVar22 = (ulonglong)uVar4;
    lVar7 = 0;
    do {
      *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
           (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
           *(longlong *)
            (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
      lVar7 = lVar7 + 4;
    } while (uVar22 * 4 - lVar7 != 0);
    if (uVar4 < 0x41) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)local_5498 + lVar7) =
             *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
    }
    else {
      lVar7 = 0;
      memset(local_1498,0,0x400);
      do {
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x400);
      lVar7 = 0x40;
      plVar12 = &local_5490;
      do {
        *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
        lVar11 = lVar7 - uVar22;
        lVar7 = lVar7 + 1;
        plVar12 = plVar12 + 2;
      } while (lVar11 != 0x3f);
    }
    uVar17 = 0;
    do {
      uVar19 = DAT_14c75ec9c;
      uVar6 = local_5498[uVar17 * 4];
      lVar7 = (&local_5490)[uVar17 * 2];
      uVar2 = *(undefined8 *)(param_1 + 0x4e88 + uVar17 * 8);
      lVar11 = *(longlong *)(param_1 + 0x4980);
      if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a079a:
        uVar19 = *(uint *)(lVar7 + 0xc);
        if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
          lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
          do {
            uVar6 = *(uint *)(lVar7 + 8);
            if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a07b0;
            LOCK();
            bVar24 = uVar6 == *(uint *)(lVar7 + 8);
            if (bVar24) {
              *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
            }
            uVar6 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar24);
          if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
            uVar4 = ~DAT_14c75ec9c;
            uVar19 = *(uint *)(lVar8 + 8);
            do {
              LOCK();
              uVar21 = *(uint *)(lVar8 + 8);
              bVar24 = uVar19 == uVar21;
              if (bVar24) {
                *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                uVar21 = uVar19;
              }
              uVar19 = uVar21;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar19 & uVar6) != 0) {
              uVar6 = *(uint *)(lVar8 + 0xc);
              goto LAB_1468a0849;
            }
          }
        }
      }
      else {
        uVar21 = ~DAT_14c75ec9c;
        uVar4 = *(uint *)(lVar7 + 8);
        do {
          LOCK();
          uVar5 = *(uint *)(lVar7 + 8);
          bVar24 = uVar4 == uVar5;
          if (bVar24) {
            *(uint *)(lVar7 + 8) = uVar4 & uVar21;
            uVar5 = uVar4;
          }
          uVar4 = uVar5;
          UNLOCK();
        } while (!bVar24);
        LOCK();
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar4 & uVar19) == 0) goto LAB_1468a079a;
        if ((uVar6 >> 0x18 & 1) == 0) {
          **(undefined8 **)(lVar11 + 0x18) = uVar2;
          lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
          *(longlong *)(lVar11 + 0x18) = lVar7;
          if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
            FUN_141715f94();
          }
        }
        else {
          uVar6 = *(uint *)(lVar7 + 0xc);
LAB_1468a0849:
          local_54a0 = lVar11 + 0x18;
          FUN_1427e7a4b(~uVar6,&local_54a0);
        }
      }
LAB_1468a07b0:
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar22);
  }
LAB_1468a0856:
  *(undefined4 *)(param_1 + 0x4e80) = 0;
  if ((local_90 ^ (ulonglong)auStack_54c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a08b0 FUN_1468a08b0 body=901 status=ok
// SIG undefined FUN_1468a08b0(void)

undefined8 * FUN_1468a08b0(int *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int *piVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  ulonglong *puVar19;
  int *piVar20;
  uint *puVar21;
  int iVar22;
  uint *puVar23;
  undefined1 auStack_118 [40];
  int *local_f0;
  undefined8 *local_e8;
  int *local_e0;
  int *local_d8;
  undefined8 local_d0;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = param_1;
  local_e8 = param_2;
  if ((longlong)*param_1 != 0) {
    piVar14 = param_1 + (longlong)*param_1 * 6 + 2;
    piVar20 = param_1 + 2;
    local_e0 = piVar14;
    do {
      iVar22 = piVar20[4];
      if (iVar22 != 0) {
        uVar15 = *(undefined8 *)piVar20;
        plVar6 = *(longlong **)(piVar20 + 2);
        uVar3 = piVar20[5];
        lVar10 = *plVar6;
        if (*(int *)((longlong)plVar6 + 0x34) == 0) {
          puVar8 = *(undefined8 **)(param_1 + 0x1a0);
          *puVar8 = uVar15;
          puVar8[1] = lVar10;
          *(int *)(puVar8 + 2) = iVar22;
          *(uint *)((longlong)puVar8 + 0x14) = uVar3;
LAB_1468a0a3f:
          lVar10 = *(longlong *)(param_1 + 0x1a0);
          lVar11 = *(longlong *)(param_1 + 0x1a2);
          *(longlong *)(param_1 + 0x1a0) = lVar10 + 0x18;
          if (lVar10 + 0x18 == lVar11 + 0xfc0) {
            lVar10 = FUN_1400305d2(&DAT_14c949ec0,param_1[0x1a4]);
            *(longlong *)(local_f0 + 0x1a2) = lVar10;
            *(longlong *)(lVar10 + 0xff0) = lVar11;
            *(undefined8 *)(local_f0 + 0x1a0) = *(undefined8 *)(local_f0 + 0x1a2);
            param_1 = local_f0;
          }
        }
        else {
          uVar4 = *(uint *)(plVar6 + 1);
          if (uVar4 != 0) {
            uVar18 = 0;
            iVar22 = 0;
            local_d8 = piVar20;
            local_d0 = uVar15;
            do {
              plVar9 = (longlong *)plVar6[4];
              if ((longlong *)plVar6[4] == (longlong *)0x0) {
                plVar9 = plVar6 + 2;
              }
              uVar13 = uVar18 + 0x1f;
              if (-1 < (int)uVar18) {
                uVar13 = uVar18;
              }
              if ((*(uint *)((longlong)plVar9 + (longlong)((int)uVar13 >> 5) * 4) >> (uVar18 & 0x1f)
                  & 1) == 0) {
                if (0 < iVar22) {
                  puVar8 = *(undefined8 **)(param_1 + 0x1a0);
                  *puVar8 = uVar15;
                  puVar8[1] = lVar10;
                  *(int *)(puVar8 + 2) = iVar22;
                  *(uint *)((longlong)puVar8 + 0x14) = uVar3;
                  lVar11 = *(longlong *)(param_1 + 0x1a0);
                  lVar7 = *(longlong *)(param_1 + 0x1a2);
                  *(longlong *)(param_1 + 0x1a0) = lVar11 + 0x18;
                  if (lVar11 + 0x18 == lVar7 + 0xfc0) {
                    lVar11 = FUN_1400305d2(&DAT_14c949ec0,param_1[0x1a4]);
                    *(longlong *)(local_f0 + 0x1a2) = lVar11;
                    *(longlong *)(lVar11 + 0xff0) = lVar7;
                    *(undefined8 *)(local_f0 + 0x1a0) = *(undefined8 *)(local_f0 + 0x1a2);
                    uVar15 = local_d0;
                    param_1 = local_f0;
                  }
                  lVar10 = lVar10 + (ulonglong)(iVar22 * uVar3);
                  iVar22 = 0;
                }
                lVar10 = lVar10 + (ulonglong)uVar3;
              }
              else {
                iVar22 = iVar22 + 1;
              }
              uVar18 = uVar18 + 1;
            } while (uVar4 != uVar18);
            piVar14 = local_e0;
            piVar20 = local_d8;
            if (0 < iVar22) {
              puVar8 = *(undefined8 **)(param_1 + 0x1a0);
              *puVar8 = uVar15;
              puVar8[1] = lVar10;
              *(int *)(puVar8 + 2) = iVar22;
              *(uint *)((longlong)puVar8 + 0x14) = uVar3;
              goto LAB_1468a0a3f;
            }
          }
        }
      }
      piVar20 = piVar20 + 6;
    } while (piVar20 != piVar14);
    *param_1 = 0;
  }
  uVar3 = param_1[0xd0];
  piVar20 = param_1;
  if ((ulonglong)uVar3 != 0) {
    piVar14 = param_1 + 0xd6;
    puVar23 = local_c8;
    uVar16 = 0;
    do {
      iVar22 = *piVar14;
      *puVar23 = (uint)uVar16;
      puVar23 = puVar23 + (0 < iVar22);
      uVar16 = uVar16 + 1;
      piVar14 = piVar14 + 6;
    } while (uVar3 != uVar16);
    puVar17 = local_c8;
    if (puVar17 != puVar23) {
      do {
        puVar19 = *(ulonglong **)(piVar20 + 0x1a0);
        lVar10 = *(longlong *)(piVar20 + 0x1a2);
        puVar1 = (ulonglong *)(lVar10 + 0xfc0);
        puVar2 = puVar17 + (int)((ulonglong)((longlong)puVar1 - (longlong)puVar19) >> 3) *
                           -0x55555555;
        puVar21 = puVar23;
        if (puVar2 < puVar23) {
          puVar21 = puVar2;
        }
        *(ulonglong **)(piVar20 + 0x1a0) =
             puVar19 + (longlong)(int)((ulonglong)((longlong)puVar21 - (longlong)puVar17) >> 2) * 3;
        if (puVar19 + (longlong)(int)((ulonglong)((longlong)puVar21 - (longlong)puVar17) >> 2) * 3
            == puVar1) {
          lVar11 = FUN_1400305d2(&DAT_14c949ec0,piVar20[0x1a4]);
          *(longlong *)(local_f0 + 0x1a2) = lVar11;
          *(longlong *)(lVar11 + 0xff0) = lVar10;
          *(undefined8 *)(local_f0 + 0x1a0) = *(undefined8 *)(local_f0 + 0x1a2);
          piVar20 = local_f0;
        }
        do {
          uVar12 = (ulonglong)*puVar17;
          puVar17 = puVar17 + 1;
          uVar16 = *(ulonglong *)(param_1 + uVar12 * 6 + 0xd4);
          iVar22 = param_1[uVar12 * 6 + 0xd6];
          uVar5 = *(undefined4 *)
                   ((*(ulonglong *)(param_1 + uVar12 * 6 + 0xd2) & 0xfffffffffffffffe) - 8);
          *puVar19 = *(ulonglong *)(param_1 + uVar12 * 6 + 0xd2);
          puVar19[1] = uVar16;
          *(int *)(puVar19 + 2) = iVar22;
          *(undefined4 *)((longlong)puVar19 + 0x14) = uVar5;
          puVar19 = puVar19 + 3;
        } while (puVar17 != puVar21);
        puVar17 = puVar2;
      } while (puVar2 < puVar23);
    }
    piVar20[0xd0] = 0;
  }
  *local_e8 = *(undefined8 *)(piVar20 + 0x1a2);
  local_e8[1] = *(undefined8 *)(piVar20 + 0x1a0);
  piVar20[0x1a0] = 0;
  piVar20[0x1a1] = 0;
  piVar20[0x1a2] = 0;
  piVar20[0x1a3] = 0;
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_e8;
}



// FUNCTION 1468a0c3e FUN_1468a0c3e body=123 status=ok
// SIG undefined FUN_1468a0c3e(void)

void FUN_1468a0c3e(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = param_1[0xef1];
  if (lVar2 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0xef2);
    uVar1 = (&DAT_14c949f00)[lVar4 * 0x50];
    if ((ulonglong)uVar1 < 0x20) {
      (&DAT_14c949f00)[lVar4 * 0x50] = uVar1 + 1;
      *(longlong *)(&DAT_14c949f08 + (ulonglong)uVar1 * 8 + lVar4 * 0x140) = lVar2;
    }
    else {
      FUN_1400020a8();
    }
  }
  *param_1 = &PTR_LAB_149eb0140;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001468a0cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1);
  return;
}



// FUNCTION 1468a0cba FUN_1468a0cba body=319 status=ok
// SIG undefined FUN_1468a0cba(void)

undefined8 * FUN_1468a0cba(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = DAT_14c846240;
  param_1[1] = DAT_14c846240;
  uVar2 = DAT_14c846248;
  param_1[2] = DAT_14c846248;
  param_1[3] = param_3;
  param_1[8] = param_2;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x11,0,0x100);
  *(undefined4 *)(param_1 + 0x38) = 0;
  memset(param_1 + 0x39,0,0x200);
  *(undefined4 *)(param_1 + 0x80) = 0;
  memset(param_1 + 0x81,0,0x100);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  memset(param_1 + 0xa9,0,0x4400);
  param_1[0x930] = param_2;
  param_1[0x931] = uVar1;
  param_1[0x932] = uVar2;
  *(undefined4 *)(param_1 + 0x938) = 0;
  memset(param_1 + 0x939,0,0x100);
  *(undefined4 *)(param_1 + 0x960) = 0;
  memset(param_1 + 0x961,0,0x200);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  memset(param_1 + 0x9a9,0,0x100);
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  memset(param_1 + 0x9d1,0,0x2200);
  FUN_141716662(param_1 + 0xe18,param_2);
  return param_1;
}



// FUNCTION 1468a0dfa FUN_1468a0dfa body=38 status=ok
// SIG undefined FUN_1468a0dfa(void)

undefined8 FUN_1468a0dfa(undefined8 param_1,int param_2)

{
  FUN_1468a0c3e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468a0fb4 FUN_1468a0fb4 body=565 status=ok
// SIG undefined FUN_1468a0fb4(void)

void FUN_1468a0fb4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if ((*(char *)(param_1 + 0x11) == '\x01') && (*(char *)(param_1 + 0x10) != '\0')) {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar3 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar3 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_1468a1500(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar4 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar4;
        if (iVar5 == 0x20) {
          FUN_1468a18e0(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a11ea FUN_1468a11ea body=565 status=ok
// SIG undefined FUN_1468a11ea(void)

void FUN_1468a11ea(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if ((*(char *)(param_1 + 0x11) == '\x01') && (*(char *)(param_1 + 0x10) != '\0')) {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar3 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar3 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_1468a1500(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar4 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar4;
        if (iVar5 == 0x20) {
          FUN_1468a18e0(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a1430 FUN_1468a1430 body=90 status=ok
// SIG undefined FUN_1468a1430(void)

undefined8 FUN_1468a1430(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar3 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x58);
  lVar4 = (longlong)iVar1;
  *(uint *)(lVar2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x5c) < iVar1 + 1U) {
    FUN_140fefdba((longlong *)(lVar2 + 0x50),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + lVar4 * 0x18) = uVar3;
  *(undefined8 **)(lVar2 + 8 + lVar4 * 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x18) = param_3;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 1468a14b2 FUN_1468a14b2 body=78 status=ok
// SIG undefined FUN_1468a14b2(void)

void FUN_1468a14b2(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    cVar1 = *(char *)(param_1 + 0x11);
    bVar2 = *(byte *)(param_1 + 0x10);
    lVar3 = (longlong)param_3 << 3;
    do {
      FUN_1468a20fa(param_1 + 0x40,param_2,cVar1 == '\x01' & bVar2);
      param_2 = param_2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1468a1500 FUN_1468a1500 body=324 status=ok
// SIG undefined FUN_1468a1500(void)

void FUN_1468a1500(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar6 = 0;
  uVar4 = 0;
  do {
    uVar4 = uVar4 | (ulonglong)
                    (*(ulonglong *)(param_1 + 0x10) <=
                    (ulonglong)
                    (**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) - *(longlong *)(param_1 + 8))) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  lVar6 = 0;
  uVar7 = 0;
  do {
    uVar7 = uVar7 | (ulonglong)(**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) != 0) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  uVar7 = uVar7 & uVar4;
  uVar4 = POPCOUNT(uVar7);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar9 = 0x400 - uVar3;
  uVar8 = 0;
  uVar5 = (uint)uVar4;
  if (uVar9 <= uVar5) {
    uVar8 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar9;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar7 >> uVar2 & 1) != 0)) {
        uVar2 = uVar8 & 0x3f;
        puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 0x10) = *puVar1;
        *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar5 * 0x10) = puVar1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_1468a1644(param_1);
      uVar5 = (int)uVar4 - uVar9;
      uVar4 = (ulonglong)uVar5;
      uVar9 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  if (uVar3 < uVar5) {
    do {
      puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
      *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 0x10) = *puVar1;
      *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar3 * 0x10) = puVar1;
      uVar3 = uVar3 + ((uVar7 >> (uVar8 & 0x3f) & 1) != 0);
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (uVar3 < uVar5);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1468a1644 FUN_1468a1644 body=667 status=ok
// SIG undefined FUN_1468a1644(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468a1644(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [446];
  undefined4 auStack_127a [144];
  undefined1 auStack_103a [4098];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0x508;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x908);
  lVar5 = 0x242;
  do {
    *(undefined4 *)((longlong)auStack_127a + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)param_1 + lVar5 * 4 + -0x400) + 0xc);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1242);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    if ((uVar2 >> 0x15 & 1) == 0) {
      lVar6 = alStack_5430[lVar5 * 2];
      lVar7 = param_1[lVar5 * 2 + 0xa1];
      lVar3 = *param_1;
      if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a17fd:
        uVar4 = *(uint *)(lVar6 + 0xc);
        if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
          lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          do {
            uVar2 = *(uint *)(lVar6 + 8);
            if ((uVar2 >> 0x17 & 1) != 0) goto LAB_1468a17e8;
            LOCK();
            bVar10 = uVar2 == *(uint *)(lVar6 + 8);
            if (bVar10) {
              *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
            }
            uVar2 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar10);
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
            uVar8 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar9 = *(uint *)(lVar7 + 8);
              bVar10 = uVar4 == uVar9;
              if (bVar10) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar8;
                uVar9 = uVar4;
              }
              uVar4 = uVar9;
              UNLOCK();
            } while (!bVar10);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar2) != 0) {
              uVar2 = *(uint *)(lVar7 + 0xc);
              goto LAB_1468a189f;
            }
          }
        }
      }
      else {
        uVar9 = ~DAT_14c75ec9c;
        uVar8 = *(uint *)(lVar6 + 8);
        do {
          LOCK();
          uVar1 = *(uint *)(lVar6 + 8);
          bVar10 = uVar8 == uVar1;
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar8 & uVar9;
            uVar1 = uVar8;
          }
          uVar8 = uVar1;
          UNLOCK();
        } while (!bVar10);
        LOCK();
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar8 & uVar4) == 0) goto LAB_1468a17fd;
        if ((uVar2 >> 0x18 & 1) == 0) {
          **(longlong **)(lVar3 + 0x18) = lVar7;
          lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
          *(longlong *)(lVar3 + 0x18) = lVar6;
          if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
            FUN_1400318c8();
          }
          goto LAB_1468a17e8;
        }
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_1468a189f:
        local_5440 = lVar3 + 0x18;
        FUN_1427e97a8(~uVar2,&local_5440);
      }
    }
    else {
      *(undefined8 *)param_1[lVar5 * 2 + 0xa2] = 0;
    }
LAB_1468a17e8:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_38 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1468a18e0 FUN_1468a18e0 body=500 status=ok
// SIG undefined FUN_1468a18e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468a18e0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lVar17;
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lVar22;
  longlong lVar25;
  longlong lVar29;
  
  lVar6 = *(longlong *)(param_1 + 8);
  auVar16._8_4_ = (int)lVar6;
  auVar16._0_8_ = lVar6;
  auVar16._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar7;
  auVar21._8_4_ = (int)uVar7;
  auVar21._0_8_ = uVar7;
  auVar21._12_4_ = (int)(uVar7 >> 0x20);
  auVar13 = (undefined1  [16])0x0;
  auVar18 = pmovsxbq(in_XMM5,0x100);
  lVar4 = 0x79;
  auVar11 = pmovsxbq(auVar11,0x101);
  auVar12 = pmovsxbq(in_XMM1,0x202);
  do {
    plVar1 = (longlong *)(param_1 + lVar4 * 8);
    auVar23._0_8_ = *plVar1 - lVar6;
    auVar23._8_8_ = plVar1[1] - auVar16._8_8_;
    auVar26._0_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,0) < SUB168(auVar21 ^ _DAT_149931e80,0));
    auVar26._8_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,8) < SUB168(auVar21 ^ _DAT_149931e80,8));
    lVar22 = auVar18._8_8_;
    lVar25 = SUB168(~auVar26 & auVar11,0);
    lVar29 = SUB168(~auVar26 & auVar11,8);
    auVar28._0_8_ = lVar25 << lVar22;
    auVar28._8_8_ = lVar29 << lVar22;
    lVar17 = auVar18._0_8_;
    auVar27._0_8_ = lVar25 << lVar17;
    auVar27._8_8_ = lVar29 << lVar17;
    auVar18 = pblendw(auVar27,auVar28,0xf0);
    auVar13 = auVar13 | auVar18;
    auVar18._0_8_ = lVar17 + auVar12._0_8_;
    auVar18._8_8_ = lVar22 + auVar12._8_8_;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0x99);
  auVar14._0_8_ = auVar13._8_8_;
  auVar14._8_4_ = auVar13._8_4_;
  auVar14._12_4_ = auVar13._12_4_;
  auVar15 = pmovsxbq(auVar14 | auVar13,0x100);
  lVar6 = 0x79;
  auVar16 = (undefined1  [16])0x0;
  do {
    plVar1 = (longlong *)(param_1 + lVar6 * 8);
    auVar19._0_8_ = -(ulonglong)(*plVar1 == 0);
    auVar19._8_8_ = -(ulonglong)(plVar1[1] == 0);
    lVar17 = auVar15._8_8_;
    lVar22 = SUB168(~auVar19 & auVar11,0);
    lVar25 = SUB168(~auVar19 & auVar11,8);
    auVar24._0_8_ = lVar22 << lVar17;
    auVar24._8_8_ = lVar25 << lVar17;
    lVar4 = auVar15._0_8_;
    auVar20._0_8_ = lVar22 << lVar4;
    auVar20._8_8_ = lVar25 << lVar4;
    auVar21 = pblendw(auVar20,auVar24,0xf0);
    auVar16 = auVar16 | auVar21;
    auVar15._0_8_ = lVar4 + auVar12._0_8_;
    auVar15._8_8_ = lVar17 + auVar12._8_8_;
    lVar6 = lVar6 + 2;
  } while (lVar6 != 0x99);
  uVar8 = (auVar16._8_8_ | auVar16._0_8_) & SUB168(auVar14 | auVar13,0);
  uVar7 = POPCOUNT(uVar8);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar10 = 0x400 - uVar3;
  uVar9 = 0;
  uVar5 = (uint)uVar7;
  if (uVar10 <= uVar5) {
    uVar9 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar10;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar8 >> uVar2 & 1) != 0)) {
        uVar2 = uVar9 & 0x3f;
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 8) =
             *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_1468a1ad4(param_1);
      uVar5 = (int)uVar7 - uVar10;
      uVar7 = (ulonglong)uVar5;
      uVar10 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  for (; uVar3 < uVar5; uVar3 = uVar3 + ((uVar8 >> uVar7 & 1) != 0)) {
    uVar7 = uVar9 & 0x3f;
    *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 8) =
         *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
    uVar9 = (ulonglong)((int)uVar9 + 1);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1468a1ad4 FUN_1468a1ad4 body=632 status=ok
// SIG undefined FUN_1468a1ad4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468a1ad4(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [124];
  undefined4 auStack_13bc [224];
  undefined1 auStack_103a [4106];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0xa1;
  do {
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xe1);
  lVar5 = 0xe1;
  do {
    auStack_13bc[lVar5] = *(undefined4 *)(param_1[lVar5 + -0x40] + 0xc);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x4e1);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    lVar6 = alStack_5430[lVar5 * 2];
    lVar7 = param_1[lVar5 + 0xa1];
    lVar3 = *param_1;
    if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a1c5b:
      uVar4 = *(uint *)(lVar6 + 0xc);
      if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
        lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        do {
          uVar2 = *(uint *)(lVar6 + 8);
          if ((uVar2 >> 0x17 & 1) != 0) goto LAB_1468a1c71;
          LOCK();
          bVar10 = uVar2 == *(uint *)(lVar6 + 8);
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
          }
          uVar2 = DAT_14c75ec9c;
          UNLOCK();
        } while (!bVar10);
        if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
          uVar8 = ~DAT_14c75ec9c;
          uVar4 = *(uint *)(lVar7 + 8);
          do {
            LOCK();
            uVar9 = *(uint *)(lVar7 + 8);
            bVar10 = uVar4 == uVar9;
            if (bVar10) {
              *(uint *)(lVar7 + 8) = uVar4 & uVar8;
              uVar9 = uVar4;
            }
            uVar4 = uVar9;
            UNLOCK();
          } while (!bVar10);
          LOCK();
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar4 & uVar2) != 0) {
            uVar2 = *(uint *)(lVar7 + 0xc);
            goto LAB_1468a1d0e;
          }
        }
      }
    }
    else {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar6 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar6 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar6 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar4) == 0) goto LAB_1468a1c5b;
      if ((uVar2 >> 0x18 & 1) == 0) {
        **(longlong **)(lVar3 + 0x18) = lVar7;
        lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
        *(longlong *)(lVar3 + 0x18) = lVar6;
        if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
          FUN_1400318c8();
        }
      }
      else {
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_1468a1d0e:
        local_5440 = lVar3 + 0x18;
        FUN_1427e97a8(~uVar2,&local_5440);
      }
    }
LAB_1468a1c71:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_30 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1468a1d4e FUN_1468a1d4e body=657 status=ok
// SIG undefined FUN_1468a1d4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468a1d4e(longlong param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar21 [16];
  
  auVar1 = _DAT_149931e80;
  lVar3 = 0x48;
  do {
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x148);
  lVar3 = 0x48;
  auVar20 = pmovsxbq(unaff_XMM6,0x800);
  auVar21 = pmovsxbq(unaff_XMM7,0x100);
  do {
    uVar11 = *(uint *)(*(longlong **)(param_1 + lVar3) + 1);
    uVar12 = (ulonglong)(int)uVar11;
    if (uVar12 != 0) {
      lVar10 = **(longlong **)(param_1 + lVar3);
      uVar5 = *(uint *)(param_1 + 0x3c0);
      uVar2 = 0x20 - uVar5;
      if (uVar11 < uVar2) {
        lVar4 = lVar10 + uVar12 * 8;
LAB_1468a1df5:
        uVar12 = (lVar4 - lVar10) - 8;
        auVar13._8_4_ = (int)uVar12;
        auVar13._0_8_ = uVar12;
        auVar13._12_4_ = (int)(uVar12 >> 0x20);
        auVar14._0_8_ = uVar12 >> 3;
        auVar14._8_8_ = auVar13._8_8_ >> 3;
        lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
        uVar6 = 0;
        do {
          auVar16._8_4_ = (int)lVar10;
          auVar16._0_8_ = lVar10;
          auVar16._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
          if ((bool)(~(SUB168(auVar14 | auVar1,0) < (longlong)(uVar6 ^ auVar1._0_8_)) & 1)) {
            *(longlong *)(lVar4 + -8 + uVar6 * 8) = lVar10 + auVar20._0_8_;
          }
          auVar18._8_4_ = (int)uVar6;
          auVar18._0_8_ = uVar6;
          auVar18._12_4_ = (int)(uVar6 >> 0x20);
          if ((longlong)((auVar18._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
              SUB168(auVar14 | auVar1,8)) {
            *(longlong *)(lVar4 + uVar6 * 8) = auVar16._8_8_ + auVar20._8_8_;
          }
          uVar6 = uVar6 + 2;
          lVar10 = lVar10 + 0x10;
        } while (((uVar12 >> 3) + 2 & 0xfffffffffffffffe) != uVar6);
        uVar5 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar5 = *(uint *)(param_1 + 0x3c0);
          if (uVar2 != 0) {
            uVar6 = (longlong)(int)uVar2 + 0x1fffffffffffffff;
            uVar7 = uVar6 & 0x1fffffffffffffff;
            auVar15._8_4_ = (int)uVar7;
            auVar15._0_8_ = uVar7;
            auVar15._12_4_ = (int)(uVar7 >> 0x20);
            lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
            uVar9 = 0;
            lVar8 = lVar10;
            do {
              auVar17._8_4_ = (int)lVar8;
              auVar17._0_8_ = lVar8;
              auVar17._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
              if ((bool)(~(SUB168(auVar15 | auVar1,0) < (longlong)(uVar9 ^ auVar1._0_8_)) & 1)) {
                *(longlong *)(lVar4 + -8 + uVar9 * 8) = lVar8 + auVar20._0_8_;
              }
              auVar19._8_4_ = (int)uVar9;
              auVar19._0_8_ = uVar9;
              auVar19._12_4_ = (int)(uVar9 >> 0x20);
              if ((longlong)((auVar19._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
                  SUB168(auVar15 | auVar1,8)) {
                *(longlong *)(lVar4 + uVar9 * 8) = auVar17._8_8_ + auVar20._8_8_;
              }
              uVar9 = uVar9 + 2;
              lVar8 = lVar8 + 0x10;
            } while ((uVar7 - ((uint)uVar6 & 1)) + 2 != uVar9);
            uVar5 = *(uint *)(param_1 + 0x3c0);
          }
          uVar11 = (int)uVar12 - uVar2;
          uVar12 = (ulonglong)uVar11;
          lVar10 = lVar10 + (longlong)(int)uVar2 * 8;
          *(uint *)(param_1 + 0x3c0) = uVar5 + uVar2;
          FUN_1468a1500(param_1);
          uVar2 = 0x20;
        } while (0x1f < uVar11);
        uVar5 = *(uint *)(param_1 + 0x3c0);
        if (uVar11 != 0) {
          lVar4 = lVar10 + (ulonglong)uVar11 * 8;
          goto LAB_1468a1df5;
        }
        uVar11 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar11 + uVar5;
    }
    lVar3 = lVar3 + 8;
    if (lVar3 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468a1fe0 FUN_1468a1fe0 body=282 status=ok
// SIG undefined FUN_1468a1fe0(void)

void FUN_1468a1fe0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  lVar2 = 0x48;
  do {
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x148);
  lVar2 = 0x48;
  do {
    uVar7 = *(uint *)(*(longlong **)(param_1 + lVar2) + 1);
    uVar8 = (ulonglong)(int)uVar7;
    if (uVar8 != 0) {
      puVar9 = (undefined8 *)**(longlong **)(param_1 + lVar2);
      uVar1 = *(uint *)(param_1 + 0x3c0);
      uVar4 = 0x20 - uVar1;
      if (uVar7 < uVar4) {
        puVar5 = puVar9 + uVar8;
LAB_1468a203b:
        puVar3 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8);
        do {
          *puVar3 = *puVar9;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar5);
        uVar1 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar1 = *(uint *)(param_1 + 0x3c0);
          if (uVar4 != 0) {
            lVar6 = 0;
            do {
              *(undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8 + lVar6) =
                   *(undefined8 *)((longlong)puVar9 + lVar6);
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uVar4 * 8 - lVar6 != 0);
            uVar1 = *(uint *)(param_1 + 0x3c0);
          }
          uVar7 = (int)uVar8 - uVar4;
          uVar8 = (ulonglong)uVar7;
          puVar9 = puVar9 + (int)uVar4;
          *(uint *)(param_1 + 0x3c0) = uVar1 + uVar4;
          FUN_1468a18e0(param_1);
          uVar4 = 0x20;
        } while (0x1f < uVar7);
        uVar1 = *(uint *)(param_1 + 0x3c0);
        if (uVar7 != 0) {
          puVar5 = puVar9 + uVar7;
          goto LAB_1468a203b;
        }
        uVar7 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar7 + uVar1;
    }
    lVar2 = lVar2 + 8;
    if (lVar2 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468a20fa FUN_1468a20fa body=669 status=ok
// SIG undefined FUN_1468a20fa(void)

void FUN_1468a20fa(longlong *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  uVar6 = DAT_14c75ec9c;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar5 = *param_2;
  lVar2 = *param_1;
  bVar10 = (ulonglong)(lVar5 - param_1[1]) < (ulonglong)param_1[2];
  if (param_3 == 0) {
    if (lVar5 == 0 || bVar10) goto LAB_1468a2279;
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8) +
            (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff) * 0x18;
    uVar4 = *(uint *)(lVar3 + 8);
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a2296:
      uVar6 = *(uint *)(lVar3 + 0xc);
      if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_1468a2279;
      lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      do {
        uVar6 = *(uint *)(lVar3 + 8);
        if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a2279;
        LOCK();
        bVar10 = uVar6 == *(uint *)(lVar3 + 8);
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
        }
        uVar6 = DAT_14c75ec9c;
        UNLOCK();
      } while (!bVar10);
      if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_1468a2279;
      uVar8 = ~DAT_14c75ec9c;
      uVar4 = *(uint *)(lVar5 + 8);
      do {
        LOCK();
        uVar9 = *(uint *)(lVar5 + 8);
        bVar10 = uVar4 == uVar9;
        if (bVar10) {
          *(uint *)(lVar5 + 8) = uVar4 & uVar8;
          uVar9 = uVar4;
        }
        uVar4 = uVar9;
        UNLOCK();
      } while (!bVar10);
      goto LAB_1468a237b;
    }
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar3 + 8);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar3 + 8);
      bVar10 = uVar8 == uVar1;
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar8 & uVar9;
        uVar1 = uVar8;
      }
      uVar8 = uVar1;
      UNLOCK();
    } while (!bVar10);
    LOCK();
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar8 & uVar6) == 0) goto LAB_1468a2296;
joined_r0x0001468a2231:
    if ((uVar4 >> 0x18 & 1) == 0) {
      **(longlong **)(lVar2 + 0x18) = lVar5;
      lVar5 = *(longlong *)(lVar2 + 0x18) + 8;
      *(longlong *)(lVar2 + 0x18) = lVar5;
      if (lVar5 == *(longlong *)(lVar2 + 0x20) + 0xf80) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
      }
      goto LAB_1468a2279;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
  }
  else {
    if (lVar5 == 0 || bVar10) goto LAB_1468a2279;
    uVar7 = (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff);
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8);
    uVar4 = *(uint *)(lVar3 + 8 + uVar7 * 0x18);
    if ((uVar4 >> 0x15 & 1) != 0) {
      *param_2 = 0;
      goto LAB_1468a2279;
    }
    lVar3 = lVar3 + uVar7 * 0x18;
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) != 0) {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar3 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar3 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar6) != 0) goto joined_r0x0001468a2231;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
    if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_1468a2279;
    lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    do {
      uVar6 = *(uint *)(lVar3 + 8);
      if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a2279;
      LOCK();
      bVar10 = uVar6 == *(uint *)(lVar3 + 8);
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
      }
      uVar6 = DAT_14c75ec9c;
      UNLOCK();
    } while (!bVar10);
    if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_1468a2279;
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar5 + 8);
    do {
      LOCK();
      uVar4 = *(uint *)(lVar5 + 8);
      bVar10 = uVar8 == uVar4;
      if (bVar10) {
        *(uint *)(lVar5 + 8) = uVar8 & uVar9;
        uVar4 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar4;
    } while (!bVar10);
LAB_1468a237b:
    LOCK();
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar4 & uVar6) == 0) goto LAB_1468a2279;
    uVar6 = *(uint *)(lVar5 + 0xc);
  }
  local_18 = lVar2 + 0x18;
  FUN_1427e97a8(~uVar6);
LAB_1468a2279:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468a23a6 FUN_1468a23a6 body=403 status=ok
// SIG undefined FUN_1468a23a6(void)

void FUN_1468a23a6(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lStack_3da;
  uint auStack_3d2 [88];
  undefined *puStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  uint auStack_240 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar4 = 0x192;
  do {
    plVar7 = *(longlong **)(param_1 + -10 + lVar4);
    uVar1 = *(ushort *)(param_1 + lVar4);
    lVar10 = plVar7[1];
    *(ulonglong *)((longlong)&lStack_3da + lVar4) =
         (ulonglong)*(ushort *)(param_1 + -2 + lVar4) * 8 + *plVar7;
    *(int *)((longlong)auStack_3d2 + lVar4) = (int)lVar10;
    *(uint *)((longlong)auStack_3d2 + lVar4 + 4) = (uint)uVar1;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x392);
  lVar4 = 0;
  do {
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  lVar4 = 0;
  do {
    uVar8 = *(uint *)((longlong)auStack_240 + lVar4);
    if (uVar8 != 0) {
      uVar2 = *(uint *)((longlong)auStack_240 + lVar4 + 4);
      lVar10 = *(longlong *)((longlong)&lStack_248 + lVar4);
      uVar6 = *(uint *)(param_1 + 0x3c0);
      uVar3 = 0x20 - uVar6;
      if (uVar3 <= uVar8) {
        do {
          uVar5 = uVar3 * uVar2;
          uVar6 = *(uint *)(param_1 + 0x3c0);
          if (uVar5 != 0) {
            plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
            lVar9 = 0;
            do {
              *plVar7 = lVar10 + lVar9;
              plVar7 = plVar7 + 1;
              lVar9 = lVar9 + (ulonglong)uVar2 * 8;
            } while ((ulonglong)uVar5 * 8 - lVar9 != 0);
            uVar6 = *(uint *)(param_1 + 0x3c0);
          }
          lVar10 = lVar10 + (ulonglong)uVar5 * 8;
          uVar8 = uVar8 - uVar3;
          *(uint *)(param_1 + 0x3c0) = uVar6 + uVar3;
          puStack_270 = (undefined *)0x1468a24a8;
          FUN_1468a1500(param_1);
          uVar3 = 0x20;
        } while (0x1f < uVar8);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      if (uVar2 * uVar8 != 0) {
        plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
        lVar9 = 0;
        do {
          *plVar7 = lVar10 + lVar9;
          plVar7 = plVar7 + 1;
          lVar9 = lVar9 + (ulonglong)uVar2 * 8;
        } while ((ulonglong)(uVar2 * uVar8) << 3 != lVar9);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      *(uint *)(param_1 + 0x3c0) = uVar6 + uVar8;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_270 = &UNK_1468a2539;
  FUN_144d8e3a0();
}



// FUNCTION 1468a253a FUN_1468a253a body=403 status=ok
// SIG undefined FUN_1468a253a(void)

void FUN_1468a253a(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lStack_3da;
  uint auStack_3d2 [88];
  undefined *puStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  uint auStack_240 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar5 = 0x192;
  do {
    plVar3 = *(longlong **)(param_1 + -10 + lVar5);
    uVar1 = *(ushort *)(param_1 + lVar5);
    lVar11 = plVar3[1];
    *(ulonglong *)((longlong)&lStack_3da + lVar5) =
         (ulonglong)*(ushort *)(param_1 + -2 + lVar5) * 8 + *plVar3;
    *(int *)((longlong)auStack_3d2 + lVar5) = (int)lVar11;
    *(uint *)((longlong)auStack_3d2 + lVar5 + 4) = (uint)uVar1;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x392);
  lVar5 = 0;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x200);
  lVar5 = 0;
  do {
    uVar9 = *(uint *)((longlong)auStack_240 + lVar5);
    if (uVar9 != 0) {
      uVar2 = *(uint *)((longlong)auStack_240 + lVar5 + 4);
      lVar11 = *(longlong *)((longlong)&lStack_248 + lVar5);
      uVar7 = *(uint *)(param_1 + 0x3c0);
      uVar4 = 0x20 - uVar7;
      if (uVar4 <= uVar9) {
        do {
          uVar6 = uVar4 * uVar2;
          uVar7 = *(uint *)(param_1 + 0x3c0);
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar7 * 8);
            lVar10 = 0;
            do {
              *puVar8 = *(undefined8 *)(lVar11 + lVar10);
              puVar8 = puVar8 + 1;
              lVar10 = lVar10 + (ulonglong)uVar2 * 8;
            } while ((ulonglong)uVar6 * 8 - lVar10 != 0);
            uVar7 = *(uint *)(param_1 + 0x3c0);
          }
          lVar11 = lVar11 + (ulonglong)uVar6 * 8;
          uVar9 = uVar9 - uVar4;
          *(uint *)(param_1 + 0x3c0) = uVar7 + uVar4;
          puStack_270 = (undefined *)0x1468a263c;
          FUN_1468a18e0(param_1);
          uVar4 = 0x20;
        } while (0x1f < uVar9);
        uVar7 = *(uint *)(param_1 + 0x3c0);
      }
      if (uVar2 * uVar9 != 0) {
        puVar8 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar7 * 8);
        lVar10 = 0;
        do {
          *puVar8 = *(undefined8 *)(lVar11 + lVar10);
          puVar8 = puVar8 + 1;
          lVar10 = lVar10 + (ulonglong)uVar2 * 8;
        } while ((ulonglong)(uVar2 * uVar9) << 3 != lVar10);
        uVar7 = *(uint *)(param_1 + 0x3c0);
      }
      *(uint *)(param_1 + 0x3c0) = uVar7 + uVar9;
    }
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x200);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_270 = &UNK_1468a26cd;
  FUN_144d8e3a0();
}



// FUNCTION 1468a26ce FUN_1468a26ce body=908 status=ok
// SIG undefined FUN_1468a26ce(void)

undefined4 FUN_1468a26ce(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  ulonglong *puVar26;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x70c0) != 0) {
    puVar24 = (undefined8 *)(param_1 + (longlong)*(int *)(param_1 + 0x70c0) * 0x18 + 0x70c8);
    puVar22 = (undefined8 *)(param_1 + 0x70c8);
    local_e0 = puVar24;
    do {
      iVar19 = *(int *)(puVar22 + 2);
      if (iVar19 != 0) {
        uVar17 = *puVar22;
        plVar7 = (longlong *)puVar22[1];
        uVar3 = *(uint *)((longlong)puVar22 + 0x14);
        lVar13 = *plVar7;
        if (*(int *)((longlong)plVar7 + 0x34) == 0) {
          puVar8 = *(undefined8 **)(param_1 + 0x7740);
          *puVar8 = uVar17;
          puVar8[1] = lVar13;
          *(int *)(puVar8 + 2) = iVar19;
          *(uint *)((longlong)puVar8 + 0x14) = uVar3;
LAB_1468a2860:
          lVar13 = *(longlong *)(param_1 + 0x7748);
          lVar12 = *(longlong *)(param_1 + 0x7740) + 0x18;
          *(longlong *)(param_1 + 0x7740) = lVar12;
          if (lVar12 == lVar13 + 0xfc0) {
            lVar12 = FUN_1400305d2(&DAT_14c949ec0);
            *(longlong *)(local_e8 + 0x7748) = lVar12;
            *(longlong *)(lVar12 + 0xff0) = lVar13;
            *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
            param_1 = local_e8;
          }
        }
        else {
          uVar4 = *(uint *)(plVar7 + 1);
          if (uVar4 != 0) {
            uVar20 = 0;
            iVar19 = 0;
            local_d8 = puVar22;
            local_d0 = uVar17;
            do {
              plVar10 = (longlong *)plVar7[4];
              if ((longlong *)plVar7[4] == (longlong *)0x0) {
                plVar10 = plVar7 + 2;
              }
              uVar15 = uVar20 + 0x1f;
              if (-1 < (int)uVar20) {
                uVar15 = uVar20;
              }
              if ((*(uint *)((longlong)plVar10 + (longlong)((int)uVar15 >> 5) * 4) >>
                   (uVar20 & 0x1f) & 1) == 0) {
                if (0 < iVar19) {
                  puVar22 = *(undefined8 **)(param_1 + 0x7740);
                  *puVar22 = uVar17;
                  puVar22[1] = lVar13;
                  *(int *)(puVar22 + 2) = iVar19;
                  *(uint *)((longlong)puVar22 + 0x14) = uVar3;
                  lVar12 = *(longlong *)(param_1 + 0x7748);
                  lVar11 = *(longlong *)(param_1 + 0x7740) + 0x18;
                  *(longlong *)(param_1 + 0x7740) = lVar11;
                  if (lVar11 == lVar12 + 0xfc0) {
                    lVar11 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(param_1 + 0x7750));
                    *(longlong *)(local_e8 + 0x7748) = lVar11;
                    *(longlong *)(lVar11 + 0xff0) = lVar12;
                    *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
                    uVar17 = local_d0;
                    param_1 = local_e8;
                  }
                  lVar13 = lVar13 + (ulonglong)(iVar19 * uVar3);
                  iVar19 = 0;
                }
                lVar13 = lVar13 + (ulonglong)uVar3;
              }
              else {
                iVar19 = iVar19 + 1;
              }
              uVar20 = uVar20 + 1;
            } while (uVar4 != uVar20);
            puVar22 = local_d8;
            puVar24 = local_e0;
            if (0 < iVar19) {
              puVar8 = *(undefined8 **)(param_1 + 0x7740);
              *puVar8 = uVar17;
              puVar8[1] = lVar13;
              *(int *)(puVar8 + 2) = iVar19;
              *(uint *)((longlong)puVar8 + 0x14) = uVar3;
              goto LAB_1468a2860;
            }
          }
        }
      }
      puVar22 = puVar22 + 3;
    } while (puVar22 != puVar24);
    *(undefined4 *)(param_1 + 0x70c0) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x7400);
  lVar13 = param_1;
  if ((ulonglong)uVar3 != 0) {
    piVar16 = (int *)(param_1 + 0x7418);
    puVar25 = local_c8;
    uVar18 = 0;
    do {
      iVar19 = *piVar16;
      *puVar25 = (uint)uVar18;
      puVar25 = puVar25 + (0 < iVar19);
      uVar18 = uVar18 + 1;
      piVar16 = piVar16 + 6;
    } while (uVar3 != uVar18);
    puVar21 = local_c8;
    if (puVar21 != puVar25) {
      do {
        puVar26 = *(ulonglong **)(lVar13 + 0x7740);
        lVar12 = *(longlong *)(lVar13 + 0x7748);
        puVar1 = (ulonglong *)(lVar12 + 0xfc0);
        puVar2 = puVar21 + (int)((ulonglong)((longlong)puVar1 - (longlong)puVar26) >> 3) *
                           -0x55555555;
        puVar23 = puVar25;
        if (puVar2 < puVar25) {
          puVar23 = puVar2;
        }
        *(ulonglong **)(lVar13 + 0x7740) =
             puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3;
        if (puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3
            == puVar1) {
          lVar13 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(lVar13 + 0x7750));
          *(longlong *)(local_e8 + 0x7748) = lVar13;
          *(longlong *)(lVar13 + 0xff0) = lVar12;
          *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
          lVar13 = local_e8;
        }
        do {
          uVar14 = (ulonglong)*puVar21;
          puVar21 = puVar21 + 1;
          uVar18 = *(ulonglong *)(param_1 + 0x7408 + uVar14 * 0x18);
          uVar9 = *(ulonglong *)(param_1 + 0x7410 + uVar14 * 0x18);
          uVar5 = *(undefined4 *)(param_1 + 0x7418 + uVar14 * 0x18);
          uVar6 = *(undefined4 *)((uVar18 & 0xfffffffffffffffe) - 8);
          *puVar26 = uVar18;
          puVar26[1] = uVar9;
          *(undefined4 *)(puVar26 + 2) = uVar5;
          *(undefined4 *)((longlong)puVar26 + 0x14) = uVar6;
          puVar26 = puVar26 + 3;
        } while (puVar21 != puVar23);
        puVar21 = puVar2;
      } while (puVar2 < puVar25);
    }
    *(undefined4 *)(lVar13 + 0x7400) = 0;
  }
  iVar19 = (int)((ulonglong)(*(longlong *)(lVar13 + 0x7740) - *(longlong *)(lVar13 + 0x7748)) >> 3)
           * -0x55555555;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)iVar19 >> 8),
                  *(longlong *)(*(longlong *)(lVar13 + 0x7748) + 0xff0) != 0 || 0 < iVar19);
}



// FUNCTION 1468a2a5c FUN_1468a2a5c body=3931 status=ok
// SIG undefined FUN_1468a2a5c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468a2a5c(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint *puVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_54c8 [32];
  longlong *local_54a8;
  longlong local_54a0;
  uint local_5498 [2];
  undefined8 local_5490;
  undefined1 local_1498 [768];
  undefined4 auStack_1198 [64];
  uint auStack_1098 [1026];
  ulonglong local_90;
  
  auVar3 = _DAT_149931e80;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_54c8;
  local_54a8 = (longlong *)(param_1 + 0x40);
  lVar7 = (longlong)*(int *)(param_1 + 0x80);
  if (lVar7 != 0) {
    plVar12 = (longlong *)(param_1 + 0x88);
    lVar11 = 0;
    do {
      lVar11 = lVar11 + 8;
    } while (lVar7 * 8 != lVar11);
    auVar32 = pmovsxbq(unaff_XMM6,0x800);
    auVar33 = pmovsxbq(unaff_XMM7,0x100);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        lVar11 = *(longlong *)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x400);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          lVar8 = uVar22 * 8 + lVar11;
LAB_1468a2b59:
          uVar22 = (lVar8 - lVar11) - 8;
          auVar25._8_4_ = (int)uVar22;
          auVar25._0_8_ = uVar22;
          auVar25._12_4_ = (int)(uVar22 >> 0x20);
          auVar26._0_8_ = uVar22 >> 3;
          auVar26._8_8_ = auVar25._8_8_ >> 3;
          lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
          uVar17 = 0;
          do {
            auVar28._8_4_ = (int)lVar11;
            auVar28._0_8_ = lVar11;
            auVar28._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
            if ((bool)(~(SUB168(auVar26 | auVar3,0) < (longlong)(uVar17 ^ auVar3._0_8_)) & 1)) {
              *(longlong *)(lVar8 + -8 + uVar17 * 8) = lVar11 + auVar32._0_8_;
            }
            auVar30._8_4_ = (int)uVar17;
            auVar30._0_8_ = uVar17;
            auVar30._12_4_ = (int)(uVar17 >> 0x20);
            if ((longlong)((auVar30._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                SUB168(auVar26 | auVar3,8)) {
              *(longlong *)(lVar8 + uVar17 * 8) = auVar28._8_8_ + auVar32._8_8_;
            }
            uVar17 = uVar17 + 2;
            lVar11 = lVar11 + 0x10;
          } while (((uVar22 >> 3) + 2 & 0xfffffffffffffffe) != uVar17);
          uVar19 = *(uint *)(param_1 + 0x400);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x400);
            if (uVar4 != 0) {
              uVar17 = (longlong)(int)uVar4 + 0x1fffffffffffffff;
              uVar13 = uVar17 & 0x1fffffffffffffff;
              auVar27._8_4_ = (int)uVar13;
              auVar27._0_8_ = uVar13;
              auVar27._12_4_ = (int)(uVar13 >> 0x20);
              lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
              uVar18 = 0;
              lVar20 = lVar11;
              do {
                auVar29._8_4_ = (int)lVar20;
                auVar29._0_8_ = lVar20;
                auVar29._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
                if ((bool)(~(SUB168(auVar27 | auVar3,0) < (longlong)(uVar18 ^ auVar3._0_8_)) & 1)) {
                  *(longlong *)(lVar8 + -8 + uVar18 * 8) = lVar20 + auVar32._0_8_;
                }
                auVar31._8_4_ = (int)uVar18;
                auVar31._0_8_ = uVar18;
                auVar31._12_4_ = (int)(uVar18 >> 0x20);
                if ((longlong)((auVar31._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                    SUB168(auVar27 | auVar3,8)) {
                  *(longlong *)(lVar8 + uVar18 * 8) = auVar29._8_8_ + auVar32._8_8_;
                }
                uVar18 = uVar18 + 2;
                lVar20 = lVar20 + 0x10;
              } while ((uVar13 - ((uint)uVar17 & 1)) + 2 != uVar18);
              uVar19 = *(uint *)(param_1 + 0x400);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            lVar11 = lVar11 + (longlong)(int)uVar4 * 8;
            *(uint *)(param_1 + 0x400) = uVar19 + uVar4;
            FUN_1468a1500(local_54a8);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x400);
          if (uVar6 != 0) {
            lVar8 = (ulonglong)uVar6 * 8 + lVar11;
            goto LAB_1468a2b59;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x400) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar7 * 8 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  uVar6 = *(uint *)(param_1 + 0x1c0);
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x1c8 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x1d2 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x1d0 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x400);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x400);
            if (uVar10 != 0) {
              plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *plVar12 = lVar11 + lVar7;
                plVar12 = plVar12 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x400);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x400) = uVar21 + uVar5;
            FUN_1468a1500(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        if (uVar4 * uVar19 != 0) {
          plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *plVar12 = lVar11 + lVar7;
            plVar12 = plVar12 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        *(uint *)(param_1 + 0x400) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x400);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x50) <=
                        (ulonglong)
                        (**(longlong **)(param_1 + 0x408 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x48))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(**(longlong **)(param_1 + 0x408 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x540);
  uVar4 = 0x400 - uVar6;
  uVar19 = (uint)uVar22;
  if (uVar4 <= uVar19) {
    uVar17 = 0;
    do {
      uVar19 = *(uint *)(param_1 + 0x540);
      uVar6 = uVar19 + uVar4;
      for (; uVar19 < uVar6; uVar19 = uVar19 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
        *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar19 * 0x10) = *puVar16;
        *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar19 * 0x10) = puVar16;
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x540) = uVar6;
      FUN_1468a1644();
      uVar19 = (int)uVar22 - uVar4;
      uVar22 = (ulonglong)uVar19;
      uVar4 = 0x400;
    } while (0x3ff < uVar19);
    uVar6 = *(uint *)(param_1 + 0x540);
  }
  uVar19 = uVar19 + uVar6;
  if (uVar6 < uVar19) {
    do {
      puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
      *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar6 * 0x10) = *puVar16;
      *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar6 * 0x10) = puVar16;
      uVar6 = uVar6 + ((uVar13 >> (uVar17 & 0x3f) & 1) != 0);
      uVar17 = (ulonglong)((int)uVar17 + 1);
    } while (uVar6 < uVar19);
  }
  *(uint *)(param_1 + 0x540) = uVar19;
  *(undefined4 *)(param_1 + 0x400) = 0;
  if (uVar19 < 0x41) {
    if (uVar19 != 0) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while ((ulonglong)uVar19 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)auStack_1098 + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x548 + lVar7 * 4) + 0xc);
        lVar7 = lVar7 + 4;
      } while ((ulonglong)uVar19 << 2 != lVar7);
      goto LAB_1468a306c;
    }
  }
  else {
    plVar12 = (longlong *)(param_1 + 0x548);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x400);
    lVar7 = 0x40;
    do {
      auStack_1198[lVar7] = *(undefined4 *)(*plVar12 + 0xc);
      lVar11 = lVar7 - (ulonglong)uVar19;
      lVar7 = lVar7 + 1;
      plVar12 = plVar12 + 2;
    } while (lVar11 != 0x3f);
LAB_1468a306c:
    if (uVar19 != 0) {
      uVar22 = (ulonglong)uVar19;
      lVar7 = 0;
      do {
        *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
             (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
             *(longlong *)
              (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
        lVar7 = lVar7 + 4;
      } while (uVar22 * 4 - lVar7 != 0);
      if (uVar19 < 0x41) {
        lVar7 = 0;
        do {
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
        lVar7 = 0;
        do {
          *(undefined4 *)((longlong)local_5498 + lVar7) =
               *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
      }
      else {
        lVar7 = 0;
        memset(local_1498,0,0x400);
        do {
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != 0x400);
        lVar7 = 0x40;
        plVar12 = &local_5490;
        do {
          *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
          lVar11 = lVar7 - uVar22;
          lVar7 = lVar7 + 1;
          plVar12 = plVar12 + 2;
        } while (lVar11 != 0x3f);
      }
      uVar17 = 0;
      do {
        uVar19 = DAT_14c75ec9c;
        uVar6 = local_5498[uVar17 * 4];
        if ((uVar6 >> 0x15 & 1) == 0) {
          lVar7 = (&local_5490)[uVar17 * 2];
          uVar2 = *(undefined8 *)(param_1 + 0x548 + uVar17 * 0x10);
          lVar11 = *local_54a8;
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a3222:
            uVar19 = *(uint *)(lVar7 + 0xc);
            if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
              lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
              do {
                uVar6 = *(uint *)(lVar7 + 8);
                if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a3211;
                LOCK();
                bVar24 = uVar6 == *(uint *)(lVar7 + 8);
                if (bVar24) {
                  *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
                }
                uVar6 = DAT_14c75ec9c;
                UNLOCK();
              } while (!bVar24);
              if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
                uVar4 = ~DAT_14c75ec9c;
                uVar19 = *(uint *)(lVar8 + 8);
                do {
                  LOCK();
                  uVar21 = *(uint *)(lVar8 + 8);
                  bVar24 = uVar19 == uVar21;
                  if (bVar24) {
                    *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                    uVar21 = uVar19;
                  }
                  uVar19 = uVar21;
                  UNLOCK();
                } while (!bVar24);
                LOCK();
                *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
                UNLOCK();
                if ((uVar19 & uVar6) != 0) goto LAB_1468a32c4;
              }
            }
          }
          else {
            uVar21 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar5 = *(uint *)(lVar7 + 8);
              bVar24 = uVar4 == uVar5;
              if (bVar24) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar21;
                uVar5 = uVar4;
              }
              uVar4 = uVar5;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar19) == 0) goto LAB_1468a3222;
            if ((uVar6 >> 0x18 & 1) == 0) {
              **(undefined8 **)(lVar11 + 0x18) = uVar2;
              lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
              *(longlong *)(lVar11 + 0x18) = lVar7;
              if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
                FUN_1400318c8();
              }
              goto LAB_1468a3211;
            }
LAB_1468a32c4:
            local_54a0 = lVar11 + 0x18;
            FUN_1427e97a8();
          }
        }
        else {
          **(undefined8 **)(uVar17 * 0x10 + param_1 + 0x548 + 8) = 0;
        }
LAB_1468a3211:
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar22);
    }
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  lVar7 = param_1 + 0x4980;
  lVar11 = (longlong)*(int *)(param_1 + 0x49c0);
  if (lVar11 != 0) {
    plVar12 = (longlong *)(param_1 + 0x49c8);
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 8;
    } while (lVar11 * 8 != lVar8);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        puVar16 = *(undefined8 **)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x4d40);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          puVar15 = puVar16 + uVar22;
LAB_1468a3350:
          puVar9 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8);
          do {
            *puVar9 = *puVar16;
            puVar9 = puVar9 + 1;
            puVar16 = puVar16 + 1;
          } while (puVar16 != puVar15);
          uVar19 = *(uint *)(param_1 + 0x4d40);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x4d40);
            if (uVar4 != 0) {
              lVar8 = 0;
              do {
                *(undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8 + lVar8) =
                     *(undefined8 *)((longlong)puVar16 + lVar8);
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)uVar4 * 8 - lVar8 != 0);
              uVar19 = *(uint *)(param_1 + 0x4d40);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            puVar16 = puVar16 + (int)uVar4;
            *(uint *)(param_1 + 0x4d40) = uVar19 + uVar4;
            FUN_1468a18e0(lVar7);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x4d40);
          if (uVar6 != 0) {
            puVar15 = puVar16 + uVar6;
            goto LAB_1468a3350;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x4d40) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar11 * 8 + 0x49c8));
  }
  *(undefined4 *)(param_1 + 0x49c0) = 0;
  uVar6 = *(uint *)(param_1 + 0x4b00);
  local_54a8 = (longlong *)lVar7;
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x4b08 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x4b12 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x4b10 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x4d40);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x4d40);
            if (uVar10 != 0) {
              puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *puVar16 = *(undefined8 *)(lVar7 + lVar11);
                puVar16 = puVar16 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x4d40);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x4d40) = uVar21 + uVar5;
            FUN_1468a18e0(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        if (uVar4 * uVar19 != 0) {
          puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *puVar16 = *(undefined8 *)(lVar7 + lVar11);
            puVar16 = puVar16 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        *(uint *)(param_1 + 0x4d40) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x4b00) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x4d40);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x4990) <=
                        (ulonglong)
                        (*(longlong *)(param_1 + 0x4d48 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x4988))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(*(longlong *)(param_1 + 0x4d48 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x4e80);
  uVar19 = 0x400 - uVar6;
  uVar4 = (uint)uVar22;
  if (uVar19 <= uVar4) {
    uVar17 = 0;
    do {
      uVar4 = *(uint *)(param_1 + 0x4e80);
      uVar6 = uVar4 + uVar19;
      for (; uVar4 < uVar6; uVar4 = uVar4 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar4 * 8) =
             *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x4e80) = uVar6;
      FUN_1468a1ad4();
      uVar4 = (int)uVar22 - uVar19;
      uVar22 = (ulonglong)uVar4;
      uVar19 = 0x400;
    } while (0x3ff < uVar4);
    uVar6 = *(uint *)(param_1 + 0x4e80);
  }
  uVar4 = uVar4 + uVar6;
  for (; uVar6 < uVar4; uVar6 = uVar6 + ((uVar13 >> uVar22 & 1) != 0)) {
    uVar22 = uVar17 & 0x3f;
    *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar6 * 8) =
         *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
    uVar17 = (ulonglong)((int)uVar17 + 1);
  }
  *(uint *)(param_1 + 0x4e80) = uVar4;
  *(undefined4 *)(param_1 + 0x4d40) = 0;
  if (uVar4 < 0x41) {
    if (uVar4 == 0) goto LAB_1468a395e;
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  else {
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x40);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  if (uVar4 != 0) {
    uVar22 = (ulonglong)uVar4;
    lVar7 = 0;
    do {
      *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
           (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
           *(longlong *)
            (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
      lVar7 = lVar7 + 4;
    } while (uVar22 * 4 - lVar7 != 0);
    if (uVar4 < 0x41) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)local_5498 + lVar7) =
             *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
    }
    else {
      lVar7 = 0;
      memset(local_1498,0,0x400);
      do {
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x400);
      lVar7 = 0x40;
      plVar12 = &local_5490;
      do {
        *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
        lVar11 = lVar7 - uVar22;
        lVar7 = lVar7 + 1;
        plVar12 = plVar12 + 2;
      } while (lVar11 != 0x3f);
    }
    uVar17 = 0;
    do {
      uVar19 = DAT_14c75ec9c;
      uVar6 = local_5498[uVar17 * 4];
      lVar7 = (&local_5490)[uVar17 * 2];
      uVar2 = *(undefined8 *)(param_1 + 0x4e88 + uVar17 * 8);
      lVar11 = *(longlong *)(param_1 + 0x4980);
      if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a38a2:
        uVar19 = *(uint *)(lVar7 + 0xc);
        if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
          lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
          do {
            uVar6 = *(uint *)(lVar7 + 8);
            if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a38b8;
            LOCK();
            bVar24 = uVar6 == *(uint *)(lVar7 + 8);
            if (bVar24) {
              *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
            }
            uVar6 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar24);
          if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
            uVar4 = ~DAT_14c75ec9c;
            uVar19 = *(uint *)(lVar8 + 8);
            do {
              LOCK();
              uVar21 = *(uint *)(lVar8 + 8);
              bVar24 = uVar19 == uVar21;
              if (bVar24) {
                *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                uVar21 = uVar19;
              }
              uVar19 = uVar21;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar19 & uVar6) != 0) {
              uVar6 = *(uint *)(lVar8 + 0xc);
              goto LAB_1468a3951;
            }
          }
        }
      }
      else {
        uVar21 = ~DAT_14c75ec9c;
        uVar4 = *(uint *)(lVar7 + 8);
        do {
          LOCK();
          uVar5 = *(uint *)(lVar7 + 8);
          bVar24 = uVar4 == uVar5;
          if (bVar24) {
            *(uint *)(lVar7 + 8) = uVar4 & uVar21;
            uVar5 = uVar4;
          }
          uVar4 = uVar5;
          UNLOCK();
        } while (!bVar24);
        LOCK();
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar4 & uVar19) == 0) goto LAB_1468a38a2;
        if ((uVar6 >> 0x18 & 1) == 0) {
          **(undefined8 **)(lVar11 + 0x18) = uVar2;
          lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
          *(longlong *)(lVar11 + 0x18) = lVar7;
          if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
            FUN_1400318c8();
          }
        }
        else {
          uVar6 = *(uint *)(lVar7 + 0xc);
LAB_1468a3951:
          local_54a0 = lVar11 + 0x18;
          FUN_1427e97a8(~uVar6,&local_54a0);
        }
      }
LAB_1468a38b8:
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar22);
  }
LAB_1468a395e:
  *(undefined4 *)(param_1 + 0x4e80) = 0;
  if ((local_90 ^ (ulonglong)auStack_54c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a39b8 FUN_1468a39b8 body=123 status=ok
// SIG undefined FUN_1468a39b8(void)

void FUN_1468a39b8(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = param_1[0xef1];
  if (lVar2 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0xef2);
    uVar1 = (&DAT_14c949f00)[lVar4 * 0x50];
    if ((ulonglong)uVar1 < 0x20) {
      (&DAT_14c949f00)[lVar4 * 0x50] = uVar1 + 1;
      *(longlong *)(&DAT_14c949f08 + (ulonglong)uVar1 * 8 + lVar4 * 0x140) = lVar2;
    }
    else {
      FUN_1400020a8();
    }
  }
  *param_1 = &PTR_LAB_149eb0140;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001468a3a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1);
  return;
}



// FUNCTION 1468a3a34 FUN_1468a3a34 body=319 status=ok
// SIG undefined FUN_1468a3a34(void)

undefined8 * FUN_1468a3a34(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = DAT_14c846240;
  param_1[1] = DAT_14c846240;
  uVar2 = DAT_14c846248;
  param_1[2] = DAT_14c846248;
  param_1[3] = param_3;
  param_1[8] = param_2;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x11,0,0x100);
  *(undefined4 *)(param_1 + 0x38) = 0;
  memset(param_1 + 0x39,0,0x200);
  *(undefined4 *)(param_1 + 0x80) = 0;
  memset(param_1 + 0x81,0,0x100);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  memset(param_1 + 0xa9,0,0x4400);
  param_1[0x930] = param_2;
  param_1[0x931] = uVar1;
  param_1[0x932] = uVar2;
  *(undefined4 *)(param_1 + 0x938) = 0;
  memset(param_1 + 0x939,0,0x100);
  *(undefined4 *)(param_1 + 0x960) = 0;
  memset(param_1 + 0x961,0,0x200);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  memset(param_1 + 0x9a9,0,0x100);
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  memset(param_1 + 0x9d1,0,0x2200);
  FUN_141716662(param_1 + 0xe18,param_2);
  return param_1;
}



// FUNCTION 1468a3b74 FUN_1468a3b74 body=38 status=ok
// SIG undefined FUN_1468a3b74(void)

undefined8 FUN_1468a3b74(undefined8 param_1,int param_2)

{
  FUN_1468a39b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468a3d16 FUN_1468a3d16 body=566 status=ok
// SIG undefined FUN_1468a3d16(void)

void FUN_1468a3d16(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    iStack_64 = iStack_44;
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar3 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar3;
        if (iVar5 == 0x20) {
          FUN_1468a4630(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar4 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar4 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_1468a4250(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a3f4e FUN_1468a3f4e body=566 status=ok
// SIG undefined FUN_1468a3f4e(void)

void FUN_1468a3f4e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    iStack_64 = iStack_44;
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar3 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar3;
        if (iVar5 == 0x20) {
          FUN_1468a4630(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar4 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar4 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_1468a4250(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a4196 FUN_1468a4196 body=90 status=ok
// SIG undefined FUN_1468a4196(void)

undefined8 FUN_1468a4196(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar3 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x58);
  lVar4 = (longlong)iVar1;
  *(uint *)(lVar2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x5c) < iVar1 + 1U) {
    FUN_140fefdba((longlong *)(lVar2 + 0x50),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + lVar4 * 0x18) = uVar3;
  *(undefined8 **)(lVar2 + 8 + lVar4 * 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x18) = param_3;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 1468a420a FUN_1468a420a body=69 status=ok
// SIG undefined FUN_1468a420a(void)

void FUN_1468a420a(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x10);
    lVar2 = (longlong)param_3 << 3;
    do {
      FUN_1468a4e4a(param_1 + 0x40,param_2,uVar1);
      param_2 = param_2 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1468a4250 FUN_1468a4250 body=324 status=ok
// SIG undefined FUN_1468a4250(void)

void FUN_1468a4250(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar6 = 0;
  uVar4 = 0;
  do {
    uVar4 = uVar4 | (ulonglong)
                    (*(ulonglong *)(param_1 + 0x10) <=
                    (ulonglong)
                    (**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) - *(longlong *)(param_1 + 8))) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  lVar6 = 0;
  uVar7 = 0;
  do {
    uVar7 = uVar7 | (ulonglong)(**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) != 0) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  uVar7 = uVar7 & uVar4;
  uVar4 = POPCOUNT(uVar7);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar9 = 0x400 - uVar3;
  uVar8 = 0;
  uVar5 = (uint)uVar4;
  if (uVar9 <= uVar5) {
    uVar8 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar9;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar7 >> uVar2 & 1) != 0)) {
        uVar2 = uVar8 & 0x3f;
        puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 0x10) = *puVar1;
        *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar5 * 0x10) = puVar1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_1468a4394(param_1);
      uVar5 = (int)uVar4 - uVar9;
      uVar4 = (ulonglong)uVar5;
      uVar9 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  if (uVar3 < uVar5) {
    do {
      puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
      *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 0x10) = *puVar1;
      *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar3 * 0x10) = puVar1;
      uVar3 = uVar3 + ((uVar7 >> (uVar8 & 0x3f) & 1) != 0);
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (uVar3 < uVar5);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1468a4394 FUN_1468a4394 body=667 status=ok
// SIG undefined FUN_1468a4394(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468a4394(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [446];
  undefined4 auStack_127a [144];
  undefined1 auStack_103a [4098];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0x508;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x908);
  lVar5 = 0x242;
  do {
    *(undefined4 *)((longlong)auStack_127a + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)param_1 + lVar5 * 4 + -0x400) + 0xc);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1242);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    if ((uVar2 >> 0x15 & 1) == 0) {
      lVar6 = alStack_5430[lVar5 * 2];
      lVar7 = param_1[lVar5 * 2 + 0xa1];
      lVar3 = *param_1;
      if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a454d:
        uVar4 = *(uint *)(lVar6 + 0xc);
        if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
          lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          do {
            uVar2 = *(uint *)(lVar6 + 8);
            if ((uVar2 >> 0x17 & 1) != 0) goto LAB_1468a4538;
            LOCK();
            bVar10 = uVar2 == *(uint *)(lVar6 + 8);
            if (bVar10) {
              *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
            }
            uVar2 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar10);
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
            uVar8 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar9 = *(uint *)(lVar7 + 8);
              bVar10 = uVar4 == uVar9;
              if (bVar10) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar8;
                uVar9 = uVar4;
              }
              uVar4 = uVar9;
              UNLOCK();
            } while (!bVar10);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar2) != 0) {
              uVar2 = *(uint *)(lVar7 + 0xc);
              goto LAB_1468a45ef;
            }
          }
        }
      }
      else {
        uVar9 = ~DAT_14c75ec9c;
        uVar8 = *(uint *)(lVar6 + 8);
        do {
          LOCK();
          uVar1 = *(uint *)(lVar6 + 8);
          bVar10 = uVar8 == uVar1;
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar8 & uVar9;
            uVar1 = uVar8;
          }
          uVar8 = uVar1;
          UNLOCK();
        } while (!bVar10);
        LOCK();
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar8 & uVar4) == 0) goto LAB_1468a454d;
        if ((uVar2 >> 0x18 & 1) == 0) {
          **(longlong **)(lVar3 + 0x18) = lVar7;
          lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
          *(longlong *)(lVar3 + 0x18) = lVar6;
          if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
            FUN_141715f94();
          }
          goto LAB_1468a4538;
        }
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_1468a45ef:
        local_5440 = lVar3 + 0x18;
        FUN_1427ea699(~uVar2,&local_5440);
      }
    }
    else {
      *(undefined8 *)param_1[lVar5 * 2 + 0xa2] = 0;
    }
LAB_1468a4538:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_38 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1468a4630 FUN_1468a4630 body=500 status=ok
// SIG undefined FUN_1468a4630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468a4630(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lVar17;
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lVar22;
  longlong lVar25;
  longlong lVar29;
  
  lVar6 = *(longlong *)(param_1 + 8);
  auVar16._8_4_ = (int)lVar6;
  auVar16._0_8_ = lVar6;
  auVar16._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar7;
  auVar21._8_4_ = (int)uVar7;
  auVar21._0_8_ = uVar7;
  auVar21._12_4_ = (int)(uVar7 >> 0x20);
  auVar13 = (undefined1  [16])0x0;
  auVar18 = pmovsxbq(in_XMM5,0x100);
  lVar4 = 0x79;
  auVar11 = pmovsxbq(auVar11,0x101);
  auVar12 = pmovsxbq(in_XMM1,0x202);
  do {
    plVar1 = (longlong *)(param_1 + lVar4 * 8);
    auVar23._0_8_ = *plVar1 - lVar6;
    auVar23._8_8_ = plVar1[1] - auVar16._8_8_;
    auVar26._0_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,0) < SUB168(auVar21 ^ _DAT_149931e80,0));
    auVar26._8_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,8) < SUB168(auVar21 ^ _DAT_149931e80,8));
    lVar22 = auVar18._8_8_;
    lVar25 = SUB168(~auVar26 & auVar11,0);
    lVar29 = SUB168(~auVar26 & auVar11,8);
    auVar28._0_8_ = lVar25 << lVar22;
    auVar28._8_8_ = lVar29 << lVar22;
    lVar17 = auVar18._0_8_;
    auVar27._0_8_ = lVar25 << lVar17;
    auVar27._8_8_ = lVar29 << lVar17;
    auVar18 = pblendw(auVar27,auVar28,0xf0);
    auVar13 = auVar13 | auVar18;
    auVar18._0_8_ = lVar17 + auVar12._0_8_;
    auVar18._8_8_ = lVar22 + auVar12._8_8_;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0x99);
  auVar14._0_8_ = auVar13._8_8_;
  auVar14._8_4_ = auVar13._8_4_;
  auVar14._12_4_ = auVar13._12_4_;
  auVar15 = pmovsxbq(auVar14 | auVar13,0x100);
  lVar6 = 0x79;
  auVar16 = (undefined1  [16])0x0;
  do {
    plVar1 = (longlong *)(param_1 + lVar6 * 8);
    auVar19._0_8_ = -(ulonglong)(*plVar1 == 0);
    auVar19._8_8_ = -(ulonglong)(plVar1[1] == 0);
    lVar17 = auVar15._8_8_;
    lVar22 = SUB168(~auVar19 & auVar11,0);
    lVar25 = SUB168(~auVar19 & auVar11,8);
    auVar24._0_8_ = lVar22 << lVar17;
    auVar24._8_8_ = lVar25 << lVar17;
    lVar4 = auVar15._0_8_;
    auVar20._0_8_ = lVar22 << lVar4;
    auVar20._8_8_ = lVar25 << lVar4;
    auVar21 = pblendw(auVar20,auVar24,0xf0);
    auVar16 = auVar16 | auVar21;
    auVar15._0_8_ = lVar4 + auVar12._0_8_;
    auVar15._8_8_ = lVar17 + auVar12._8_8_;
    lVar6 = lVar6 + 2;
  } while (lVar6 != 0x99);
  uVar8 = (auVar16._8_8_ | auVar16._0_8_) & SUB168(auVar14 | auVar13,0);
  uVar7 = POPCOUNT(uVar8);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar10 = 0x400 - uVar3;
  uVar9 = 0;
  uVar5 = (uint)uVar7;
  if (uVar10 <= uVar5) {
    uVar9 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar10;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar8 >> uVar2 & 1) != 0)) {
        uVar2 = uVar9 & 0x3f;
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 8) =
             *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_1468a4824(param_1);
      uVar5 = (int)uVar7 - uVar10;
      uVar7 = (ulonglong)uVar5;
      uVar10 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  for (; uVar3 < uVar5; uVar3 = uVar3 + ((uVar8 >> uVar7 & 1) != 0)) {
    uVar7 = uVar9 & 0x3f;
    *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 8) =
         *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
    uVar9 = (ulonglong)((int)uVar9 + 1);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1468a4824 FUN_1468a4824 body=632 status=ok
// SIG undefined FUN_1468a4824(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468a4824(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [124];
  undefined4 auStack_13bc [224];
  undefined1 auStack_103a [4106];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0xa1;
  do {
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xe1);
  lVar5 = 0xe1;
  do {
    auStack_13bc[lVar5] = *(undefined4 *)(param_1[lVar5 + -0x40] + 0xc);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x4e1);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    lVar6 = alStack_5430[lVar5 * 2];
    lVar7 = param_1[lVar5 + 0xa1];
    lVar3 = *param_1;
    if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a49ab:
      uVar4 = *(uint *)(lVar6 + 0xc);
      if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
        lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        do {
          uVar2 = *(uint *)(lVar6 + 8);
          if ((uVar2 >> 0x17 & 1) != 0) goto LAB_1468a49c1;
          LOCK();
          bVar10 = uVar2 == *(uint *)(lVar6 + 8);
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
          }
          uVar2 = DAT_14c75ec9c;
          UNLOCK();
        } while (!bVar10);
        if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
          uVar8 = ~DAT_14c75ec9c;
          uVar4 = *(uint *)(lVar7 + 8);
          do {
            LOCK();
            uVar9 = *(uint *)(lVar7 + 8);
            bVar10 = uVar4 == uVar9;
            if (bVar10) {
              *(uint *)(lVar7 + 8) = uVar4 & uVar8;
              uVar9 = uVar4;
            }
            uVar4 = uVar9;
            UNLOCK();
          } while (!bVar10);
          LOCK();
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar4 & uVar2) != 0) {
            uVar2 = *(uint *)(lVar7 + 0xc);
            goto LAB_1468a4a5e;
          }
        }
      }
    }
    else {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar6 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar6 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar6 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar4) == 0) goto LAB_1468a49ab;
      if ((uVar2 >> 0x18 & 1) == 0) {
        **(longlong **)(lVar3 + 0x18) = lVar7;
        lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
        *(longlong *)(lVar3 + 0x18) = lVar6;
        if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
          FUN_141715f94();
        }
      }
      else {
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_1468a4a5e:
        local_5440 = lVar3 + 0x18;
        FUN_1427ea699(~uVar2,&local_5440);
      }
    }
LAB_1468a49c1:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_30 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1468a4a9e FUN_1468a4a9e body=657 status=ok
// SIG undefined FUN_1468a4a9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468a4a9e(longlong param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar21 [16];
  
  auVar1 = _DAT_149931e80;
  lVar3 = 0x48;
  do {
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x148);
  lVar3 = 0x48;
  auVar20 = pmovsxbq(unaff_XMM6,0x800);
  auVar21 = pmovsxbq(unaff_XMM7,0x100);
  do {
    uVar11 = *(uint *)(*(longlong **)(param_1 + lVar3) + 1);
    uVar12 = (ulonglong)(int)uVar11;
    if (uVar12 != 0) {
      lVar10 = **(longlong **)(param_1 + lVar3);
      uVar5 = *(uint *)(param_1 + 0x3c0);
      uVar2 = 0x20 - uVar5;
      if (uVar11 < uVar2) {
        lVar4 = lVar10 + uVar12 * 8;
LAB_1468a4b45:
        uVar12 = (lVar4 - lVar10) - 8;
        auVar13._8_4_ = (int)uVar12;
        auVar13._0_8_ = uVar12;
        auVar13._12_4_ = (int)(uVar12 >> 0x20);
        auVar14._0_8_ = uVar12 >> 3;
        auVar14._8_8_ = auVar13._8_8_ >> 3;
        lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
        uVar6 = 0;
        do {
          auVar16._8_4_ = (int)lVar10;
          auVar16._0_8_ = lVar10;
          auVar16._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
          if ((bool)(~(SUB168(auVar14 | auVar1,0) < (longlong)(uVar6 ^ auVar1._0_8_)) & 1)) {
            *(longlong *)(lVar4 + -8 + uVar6 * 8) = lVar10 + auVar20._0_8_;
          }
          auVar18._8_4_ = (int)uVar6;
          auVar18._0_8_ = uVar6;
          auVar18._12_4_ = (int)(uVar6 >> 0x20);
          if ((longlong)((auVar18._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
              SUB168(auVar14 | auVar1,8)) {
            *(longlong *)(lVar4 + uVar6 * 8) = auVar16._8_8_ + auVar20._8_8_;
          }
          uVar6 = uVar6 + 2;
          lVar10 = lVar10 + 0x10;
        } while (((uVar12 >> 3) + 2 & 0xfffffffffffffffe) != uVar6);
        uVar5 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar5 = *(uint *)(param_1 + 0x3c0);
          if (uVar2 != 0) {
            uVar6 = (longlong)(int)uVar2 + 0x1fffffffffffffff;
            uVar7 = uVar6 & 0x1fffffffffffffff;
            auVar15._8_4_ = (int)uVar7;
            auVar15._0_8_ = uVar7;
            auVar15._12_4_ = (int)(uVar7 >> 0x20);
            lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
            uVar9 = 0;
            lVar8 = lVar10;
            do {
              auVar17._8_4_ = (int)lVar8;
              auVar17._0_8_ = lVar8;
              auVar17._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
              if ((bool)(~(SUB168(auVar15 | auVar1,0) < (longlong)(uVar9 ^ auVar1._0_8_)) & 1)) {
                *(longlong *)(lVar4 + -8 + uVar9 * 8) = lVar8 + auVar20._0_8_;
              }
              auVar19._8_4_ = (int)uVar9;
              auVar19._0_8_ = uVar9;
              auVar19._12_4_ = (int)(uVar9 >> 0x20);
              if ((longlong)((auVar19._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
                  SUB168(auVar15 | auVar1,8)) {
                *(longlong *)(lVar4 + uVar9 * 8) = auVar17._8_8_ + auVar20._8_8_;
              }
              uVar9 = uVar9 + 2;
              lVar8 = lVar8 + 0x10;
            } while ((uVar7 - ((uint)uVar6 & 1)) + 2 != uVar9);
            uVar5 = *(uint *)(param_1 + 0x3c0);
          }
          uVar11 = (int)uVar12 - uVar2;
          uVar12 = (ulonglong)uVar11;
          lVar10 = lVar10 + (longlong)(int)uVar2 * 8;
          *(uint *)(param_1 + 0x3c0) = uVar5 + uVar2;
          FUN_1468a4250(param_1);
          uVar2 = 0x20;
        } while (0x1f < uVar11);
        uVar5 = *(uint *)(param_1 + 0x3c0);
        if (uVar11 != 0) {
          lVar4 = lVar10 + (ulonglong)uVar11 * 8;
          goto LAB_1468a4b45;
        }
        uVar11 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar11 + uVar5;
    }
    lVar3 = lVar3 + 8;
    if (lVar3 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468a4d30 FUN_1468a4d30 body=282 status=ok
// SIG undefined FUN_1468a4d30(void)

void FUN_1468a4d30(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  lVar2 = 0x48;
  do {
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x148);
  lVar2 = 0x48;
  do {
    uVar7 = *(uint *)(*(longlong **)(param_1 + lVar2) + 1);
    uVar8 = (ulonglong)(int)uVar7;
    if (uVar8 != 0) {
      puVar9 = (undefined8 *)**(longlong **)(param_1 + lVar2);
      uVar1 = *(uint *)(param_1 + 0x3c0);
      uVar4 = 0x20 - uVar1;
      if (uVar7 < uVar4) {
        puVar5 = puVar9 + uVar8;
LAB_1468a4d8b:
        puVar3 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8);
        do {
          *puVar3 = *puVar9;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar5);
        uVar1 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar1 = *(uint *)(param_1 + 0x3c0);
          if (uVar4 != 0) {
            lVar6 = 0;
            do {
              *(undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8 + lVar6) =
                   *(undefined8 *)((longlong)puVar9 + lVar6);
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uVar4 * 8 - lVar6 != 0);
            uVar1 = *(uint *)(param_1 + 0x3c0);
          }
          uVar7 = (int)uVar8 - uVar4;
          uVar8 = (ulonglong)uVar7;
          puVar9 = puVar9 + (int)uVar4;
          *(uint *)(param_1 + 0x3c0) = uVar1 + uVar4;
          FUN_1468a4630(param_1);
          uVar4 = 0x20;
        } while (0x1f < uVar7);
        uVar1 = *(uint *)(param_1 + 0x3c0);
        if (uVar7 != 0) {
          puVar5 = puVar9 + uVar7;
          goto LAB_1468a4d8b;
        }
        uVar7 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar7 + uVar1;
    }
    lVar2 = lVar2 + 8;
    if (lVar2 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468a4e4a FUN_1468a4e4a body=669 status=ok
// SIG undefined FUN_1468a4e4a(void)

void FUN_1468a4e4a(longlong *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  uVar6 = DAT_14c75ec9c;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar5 = *param_2;
  lVar2 = *param_1;
  bVar10 = (ulonglong)(lVar5 - param_1[1]) < (ulonglong)param_1[2];
  if (param_3 == 0) {
    if (lVar5 == 0 || bVar10) goto LAB_1468a4fc9;
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8) +
            (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff) * 0x18;
    uVar4 = *(uint *)(lVar3 + 8);
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a4fe6:
      uVar6 = *(uint *)(lVar3 + 0xc);
      if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_1468a4fc9;
      lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      do {
        uVar6 = *(uint *)(lVar3 + 8);
        if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a4fc9;
        LOCK();
        bVar10 = uVar6 == *(uint *)(lVar3 + 8);
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
        }
        uVar6 = DAT_14c75ec9c;
        UNLOCK();
      } while (!bVar10);
      if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_1468a4fc9;
      uVar8 = ~DAT_14c75ec9c;
      uVar4 = *(uint *)(lVar5 + 8);
      do {
        LOCK();
        uVar9 = *(uint *)(lVar5 + 8);
        bVar10 = uVar4 == uVar9;
        if (bVar10) {
          *(uint *)(lVar5 + 8) = uVar4 & uVar8;
          uVar9 = uVar4;
        }
        uVar4 = uVar9;
        UNLOCK();
      } while (!bVar10);
      goto LAB_1468a50cb;
    }
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar3 + 8);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar3 + 8);
      bVar10 = uVar8 == uVar1;
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar8 & uVar9;
        uVar1 = uVar8;
      }
      uVar8 = uVar1;
      UNLOCK();
    } while (!bVar10);
    LOCK();
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar8 & uVar6) == 0) goto LAB_1468a4fe6;
joined_r0x0001468a4f81:
    if ((uVar4 >> 0x18 & 1) == 0) {
      **(longlong **)(lVar2 + 0x18) = lVar5;
      lVar5 = *(longlong *)(lVar2 + 0x18) + 8;
      *(longlong *)(lVar2 + 0x18) = lVar5;
      if (lVar5 == *(longlong *)(lVar2 + 0x20) + 0xf80) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
      }
      goto LAB_1468a4fc9;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
  }
  else {
    if (lVar5 == 0 || bVar10) goto LAB_1468a4fc9;
    uVar7 = (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff);
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8);
    uVar4 = *(uint *)(lVar3 + 8 + uVar7 * 0x18);
    if ((uVar4 >> 0x15 & 1) != 0) {
      *param_2 = 0;
      goto LAB_1468a4fc9;
    }
    lVar3 = lVar3 + uVar7 * 0x18;
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) != 0) {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar3 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar3 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar6) != 0) goto joined_r0x0001468a4f81;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
    if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_1468a4fc9;
    lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    do {
      uVar6 = *(uint *)(lVar3 + 8);
      if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a4fc9;
      LOCK();
      bVar10 = uVar6 == *(uint *)(lVar3 + 8);
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
      }
      uVar6 = DAT_14c75ec9c;
      UNLOCK();
    } while (!bVar10);
    if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_1468a4fc9;
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar5 + 8);
    do {
      LOCK();
      uVar4 = *(uint *)(lVar5 + 8);
      bVar10 = uVar8 == uVar4;
      if (bVar10) {
        *(uint *)(lVar5 + 8) = uVar8 & uVar9;
        uVar4 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar4;
    } while (!bVar10);
LAB_1468a50cb:
    LOCK();
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar4 & uVar6) == 0) goto LAB_1468a4fc9;
    uVar6 = *(uint *)(lVar5 + 0xc);
  }
  local_18 = lVar2 + 0x18;
  FUN_1427ea699(~uVar6);
LAB_1468a4fc9:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468a50f6 FUN_1468a50f6 body=403 status=ok
// SIG undefined FUN_1468a50f6(void)

void FUN_1468a50f6(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lStack_3da;
  uint auStack_3d2 [88];
  undefined *puStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  uint auStack_240 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar4 = 0x192;
  do {
    plVar7 = *(longlong **)(param_1 + -10 + lVar4);
    uVar1 = *(ushort *)(param_1 + lVar4);
    lVar10 = plVar7[1];
    *(ulonglong *)((longlong)&lStack_3da + lVar4) =
         (ulonglong)*(ushort *)(param_1 + -2 + lVar4) * 8 + *plVar7;
    *(int *)((longlong)auStack_3d2 + lVar4) = (int)lVar10;
    *(uint *)((longlong)auStack_3d2 + lVar4 + 4) = (uint)uVar1;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x392);
  lVar4 = 0;
  do {
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  lVar4 = 0;
  do {
    uVar8 = *(uint *)((longlong)auStack_240 + lVar4);
    if (uVar8 != 0) {
      uVar2 = *(uint *)((longlong)auStack_240 + lVar4 + 4);
      lVar10 = *(longlong *)((longlong)&lStack_248 + lVar4);
      uVar6 = *(uint *)(param_1 + 0x3c0);
      uVar3 = 0x20 - uVar6;
      if (uVar3 <= uVar8) {
        do {
          uVar5 = uVar3 * uVar2;
          uVar6 = *(uint *)(param_1 + 0x3c0);
          if (uVar5 != 0) {
            plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
            lVar9 = 0;
            do {
              *plVar7 = lVar10 + lVar9;
              plVar7 = plVar7 + 1;
              lVar9 = lVar9 + (ulonglong)uVar2 * 8;
            } while ((ulonglong)uVar5 * 8 - lVar9 != 0);
            uVar6 = *(uint *)(param_1 + 0x3c0);
          }
          lVar10 = lVar10 + (ulonglong)uVar5 * 8;
          uVar8 = uVar8 - uVar3;
          *(uint *)(param_1 + 0x3c0) = uVar6 + uVar3;
          puStack_270 = (undefined *)0x1468a51f8;
          FUN_1468a4250(param_1);
          uVar3 = 0x20;
        } while (0x1f < uVar8);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      if (uVar2 * uVar8 != 0) {
        plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
        lVar9 = 0;
        do {
          *plVar7 = lVar10 + lVar9;
          plVar7 = plVar7 + 1;
          lVar9 = lVar9 + (ulonglong)uVar2 * 8;
        } while ((ulonglong)(uVar2 * uVar8) << 3 != lVar9);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      *(uint *)(param_1 + 0x3c0) = uVar6 + uVar8;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_270 = &UNK_1468a5289;
  FUN_144d8e3a0();
}



// FUNCTION 1468a528a FUN_1468a528a body=908 status=ok
// SIG undefined FUN_1468a528a(void)

undefined4 FUN_1468a528a(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  ulonglong *puVar26;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x70c0) != 0) {
    puVar24 = (undefined8 *)(param_1 + (longlong)*(int *)(param_1 + 0x70c0) * 0x18 + 0x70c8);
    puVar22 = (undefined8 *)(param_1 + 0x70c8);
    local_e0 = puVar24;
    do {
      iVar19 = *(int *)(puVar22 + 2);
      if (iVar19 != 0) {
        uVar17 = *puVar22;
        plVar7 = (longlong *)puVar22[1];
        uVar3 = *(uint *)((longlong)puVar22 + 0x14);
        lVar13 = *plVar7;
        if (*(int *)((longlong)plVar7 + 0x34) == 0) {
          puVar8 = *(undefined8 **)(param_1 + 0x7740);
          *puVar8 = uVar17;
          puVar8[1] = lVar13;
          *(int *)(puVar8 + 2) = iVar19;
          *(uint *)((longlong)puVar8 + 0x14) = uVar3;
LAB_1468a541c:
          lVar13 = *(longlong *)(param_1 + 0x7748);
          lVar12 = *(longlong *)(param_1 + 0x7740) + 0x18;
          *(longlong *)(param_1 + 0x7740) = lVar12;
          if (lVar12 == lVar13 + 0xfc0) {
            lVar12 = FUN_1400305d2(&DAT_14c949ec0);
            *(longlong *)(local_e8 + 0x7748) = lVar12;
            *(longlong *)(lVar12 + 0xff0) = lVar13;
            *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
            param_1 = local_e8;
          }
        }
        else {
          uVar4 = *(uint *)(plVar7 + 1);
          if (uVar4 != 0) {
            uVar20 = 0;
            iVar19 = 0;
            local_d8 = puVar22;
            local_d0 = uVar17;
            do {
              plVar10 = (longlong *)plVar7[4];
              if ((longlong *)plVar7[4] == (longlong *)0x0) {
                plVar10 = plVar7 + 2;
              }
              uVar15 = uVar20 + 0x1f;
              if (-1 < (int)uVar20) {
                uVar15 = uVar20;
              }
              if ((*(uint *)((longlong)plVar10 + (longlong)((int)uVar15 >> 5) * 4) >>
                   (uVar20 & 0x1f) & 1) == 0) {
                if (0 < iVar19) {
                  puVar22 = *(undefined8 **)(param_1 + 0x7740);
                  *puVar22 = uVar17;
                  puVar22[1] = lVar13;
                  *(int *)(puVar22 + 2) = iVar19;
                  *(uint *)((longlong)puVar22 + 0x14) = uVar3;
                  lVar12 = *(longlong *)(param_1 + 0x7748);
                  lVar11 = *(longlong *)(param_1 + 0x7740) + 0x18;
                  *(longlong *)(param_1 + 0x7740) = lVar11;
                  if (lVar11 == lVar12 + 0xfc0) {
                    lVar11 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(param_1 + 0x7750));
                    *(longlong *)(local_e8 + 0x7748) = lVar11;
                    *(longlong *)(lVar11 + 0xff0) = lVar12;
                    *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
                    uVar17 = local_d0;
                    param_1 = local_e8;
                  }
                  lVar13 = lVar13 + (ulonglong)(iVar19 * uVar3);
                  iVar19 = 0;
                }
                lVar13 = lVar13 + (ulonglong)uVar3;
              }
              else {
                iVar19 = iVar19 + 1;
              }
              uVar20 = uVar20 + 1;
            } while (uVar4 != uVar20);
            puVar22 = local_d8;
            puVar24 = local_e0;
            if (0 < iVar19) {
              puVar8 = *(undefined8 **)(param_1 + 0x7740);
              *puVar8 = uVar17;
              puVar8[1] = lVar13;
              *(int *)(puVar8 + 2) = iVar19;
              *(uint *)((longlong)puVar8 + 0x14) = uVar3;
              goto LAB_1468a541c;
            }
          }
        }
      }
      puVar22 = puVar22 + 3;
    } while (puVar22 != puVar24);
    *(undefined4 *)(param_1 + 0x70c0) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x7400);
  lVar13 = param_1;
  if ((ulonglong)uVar3 != 0) {
    piVar16 = (int *)(param_1 + 0x7418);
    puVar25 = local_c8;
    uVar18 = 0;
    do {
      iVar19 = *piVar16;
      *puVar25 = (uint)uVar18;
      puVar25 = puVar25 + (0 < iVar19);
      uVar18 = uVar18 + 1;
      piVar16 = piVar16 + 6;
    } while (uVar3 != uVar18);
    puVar21 = local_c8;
    if (puVar21 != puVar25) {
      do {
        puVar26 = *(ulonglong **)(lVar13 + 0x7740);
        lVar12 = *(longlong *)(lVar13 + 0x7748);
        puVar1 = (ulonglong *)(lVar12 + 0xfc0);
        puVar2 = puVar21 + (int)((ulonglong)((longlong)puVar1 - (longlong)puVar26) >> 3) *
                           -0x55555555;
        puVar23 = puVar25;
        if (puVar2 < puVar25) {
          puVar23 = puVar2;
        }
        *(ulonglong **)(lVar13 + 0x7740) =
             puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3;
        if (puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3
            == puVar1) {
          lVar13 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(lVar13 + 0x7750));
          *(longlong *)(local_e8 + 0x7748) = lVar13;
          *(longlong *)(lVar13 + 0xff0) = lVar12;
          *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
          lVar13 = local_e8;
        }
        do {
          uVar14 = (ulonglong)*puVar21;
          puVar21 = puVar21 + 1;
          uVar18 = *(ulonglong *)(param_1 + 0x7408 + uVar14 * 0x18);
          uVar9 = *(ulonglong *)(param_1 + 0x7410 + uVar14 * 0x18);
          uVar5 = *(undefined4 *)(param_1 + 0x7418 + uVar14 * 0x18);
          uVar6 = *(undefined4 *)((uVar18 & 0xfffffffffffffffe) - 8);
          *puVar26 = uVar18;
          puVar26[1] = uVar9;
          *(undefined4 *)(puVar26 + 2) = uVar5;
          *(undefined4 *)((longlong)puVar26 + 0x14) = uVar6;
          puVar26 = puVar26 + 3;
        } while (puVar21 != puVar23);
        puVar21 = puVar2;
      } while (puVar2 < puVar25);
    }
    *(undefined4 *)(lVar13 + 0x7400) = 0;
  }
  iVar19 = (int)((ulonglong)(*(longlong *)(lVar13 + 0x7740) - *(longlong *)(lVar13 + 0x7748)) >> 3)
           * -0x55555555;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)iVar19 >> 8),
                  *(longlong *)(*(longlong *)(lVar13 + 0x7748) + 0xff0) != 0 || 0 < iVar19);
}



// FUNCTION 1468a5618 FUN_1468a5618 body=3931 status=ok
// SIG undefined FUN_1468a5618(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468a5618(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint *puVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_54c8 [32];
  longlong *local_54a8;
  longlong local_54a0;
  uint local_5498 [2];
  undefined8 local_5490;
  undefined1 local_1498 [768];
  undefined4 auStack_1198 [64];
  uint auStack_1098 [1026];
  ulonglong local_90;
  
  auVar3 = _DAT_149931e80;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_54c8;
  local_54a8 = (longlong *)(param_1 + 0x40);
  lVar7 = (longlong)*(int *)(param_1 + 0x80);
  if (lVar7 != 0) {
    plVar12 = (longlong *)(param_1 + 0x88);
    lVar11 = 0;
    do {
      lVar11 = lVar11 + 8;
    } while (lVar7 * 8 != lVar11);
    auVar32 = pmovsxbq(unaff_XMM6,0x800);
    auVar33 = pmovsxbq(unaff_XMM7,0x100);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        lVar11 = *(longlong *)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x400);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          lVar8 = uVar22 * 8 + lVar11;
LAB_1468a5715:
          uVar22 = (lVar8 - lVar11) - 8;
          auVar25._8_4_ = (int)uVar22;
          auVar25._0_8_ = uVar22;
          auVar25._12_4_ = (int)(uVar22 >> 0x20);
          auVar26._0_8_ = uVar22 >> 3;
          auVar26._8_8_ = auVar25._8_8_ >> 3;
          lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
          uVar17 = 0;
          do {
            auVar28._8_4_ = (int)lVar11;
            auVar28._0_8_ = lVar11;
            auVar28._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
            if ((bool)(~(SUB168(auVar26 | auVar3,0) < (longlong)(uVar17 ^ auVar3._0_8_)) & 1)) {
              *(longlong *)(lVar8 + -8 + uVar17 * 8) = lVar11 + auVar32._0_8_;
            }
            auVar30._8_4_ = (int)uVar17;
            auVar30._0_8_ = uVar17;
            auVar30._12_4_ = (int)(uVar17 >> 0x20);
            if ((longlong)((auVar30._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                SUB168(auVar26 | auVar3,8)) {
              *(longlong *)(lVar8 + uVar17 * 8) = auVar28._8_8_ + auVar32._8_8_;
            }
            uVar17 = uVar17 + 2;
            lVar11 = lVar11 + 0x10;
          } while (((uVar22 >> 3) + 2 & 0xfffffffffffffffe) != uVar17);
          uVar19 = *(uint *)(param_1 + 0x400);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x400);
            if (uVar4 != 0) {
              uVar17 = (longlong)(int)uVar4 + 0x1fffffffffffffff;
              uVar13 = uVar17 & 0x1fffffffffffffff;
              auVar27._8_4_ = (int)uVar13;
              auVar27._0_8_ = uVar13;
              auVar27._12_4_ = (int)(uVar13 >> 0x20);
              lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
              uVar18 = 0;
              lVar20 = lVar11;
              do {
                auVar29._8_4_ = (int)lVar20;
                auVar29._0_8_ = lVar20;
                auVar29._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
                if ((bool)(~(SUB168(auVar27 | auVar3,0) < (longlong)(uVar18 ^ auVar3._0_8_)) & 1)) {
                  *(longlong *)(lVar8 + -8 + uVar18 * 8) = lVar20 + auVar32._0_8_;
                }
                auVar31._8_4_ = (int)uVar18;
                auVar31._0_8_ = uVar18;
                auVar31._12_4_ = (int)(uVar18 >> 0x20);
                if ((longlong)((auVar31._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                    SUB168(auVar27 | auVar3,8)) {
                  *(longlong *)(lVar8 + uVar18 * 8) = auVar29._8_8_ + auVar32._8_8_;
                }
                uVar18 = uVar18 + 2;
                lVar20 = lVar20 + 0x10;
              } while ((uVar13 - ((uint)uVar17 & 1)) + 2 != uVar18);
              uVar19 = *(uint *)(param_1 + 0x400);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            lVar11 = lVar11 + (longlong)(int)uVar4 * 8;
            *(uint *)(param_1 + 0x400) = uVar19 + uVar4;
            FUN_1468a4250(local_54a8);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x400);
          if (uVar6 != 0) {
            lVar8 = (ulonglong)uVar6 * 8 + lVar11;
            goto LAB_1468a5715;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x400) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar7 * 8 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  uVar6 = *(uint *)(param_1 + 0x1c0);
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x1c8 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x1d2 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x1d0 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x400);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x400);
            if (uVar10 != 0) {
              plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *plVar12 = lVar11 + lVar7;
                plVar12 = plVar12 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x400);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x400) = uVar21 + uVar5;
            FUN_1468a4250(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        if (uVar4 * uVar19 != 0) {
          plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *plVar12 = lVar11 + lVar7;
            plVar12 = plVar12 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        *(uint *)(param_1 + 0x400) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x400);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x50) <=
                        (ulonglong)
                        (**(longlong **)(param_1 + 0x408 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x48))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(**(longlong **)(param_1 + 0x408 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x540);
  uVar4 = 0x400 - uVar6;
  uVar19 = (uint)uVar22;
  if (uVar4 <= uVar19) {
    uVar17 = 0;
    do {
      uVar19 = *(uint *)(param_1 + 0x540);
      uVar6 = uVar19 + uVar4;
      for (; uVar19 < uVar6; uVar19 = uVar19 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
        *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar19 * 0x10) = *puVar16;
        *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar19 * 0x10) = puVar16;
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x540) = uVar6;
      FUN_1468a4394();
      uVar19 = (int)uVar22 - uVar4;
      uVar22 = (ulonglong)uVar19;
      uVar4 = 0x400;
    } while (0x3ff < uVar19);
    uVar6 = *(uint *)(param_1 + 0x540);
  }
  uVar19 = uVar19 + uVar6;
  if (uVar6 < uVar19) {
    do {
      puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
      *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar6 * 0x10) = *puVar16;
      *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar6 * 0x10) = puVar16;
      uVar6 = uVar6 + ((uVar13 >> (uVar17 & 0x3f) & 1) != 0);
      uVar17 = (ulonglong)((int)uVar17 + 1);
    } while (uVar6 < uVar19);
  }
  *(uint *)(param_1 + 0x540) = uVar19;
  *(undefined4 *)(param_1 + 0x400) = 0;
  if (uVar19 < 0x41) {
    if (uVar19 != 0) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while ((ulonglong)uVar19 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)auStack_1098 + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x548 + lVar7 * 4) + 0xc);
        lVar7 = lVar7 + 4;
      } while ((ulonglong)uVar19 << 2 != lVar7);
      goto LAB_1468a5c28;
    }
  }
  else {
    plVar12 = (longlong *)(param_1 + 0x548);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x400);
    lVar7 = 0x40;
    do {
      auStack_1198[lVar7] = *(undefined4 *)(*plVar12 + 0xc);
      lVar11 = lVar7 - (ulonglong)uVar19;
      lVar7 = lVar7 + 1;
      plVar12 = plVar12 + 2;
    } while (lVar11 != 0x3f);
LAB_1468a5c28:
    if (uVar19 != 0) {
      uVar22 = (ulonglong)uVar19;
      lVar7 = 0;
      do {
        *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
             (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
             *(longlong *)
              (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
        lVar7 = lVar7 + 4;
      } while (uVar22 * 4 - lVar7 != 0);
      if (uVar19 < 0x41) {
        lVar7 = 0;
        do {
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
        lVar7 = 0;
        do {
          *(undefined4 *)((longlong)local_5498 + lVar7) =
               *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
      }
      else {
        lVar7 = 0;
        memset(local_1498,0,0x400);
        do {
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != 0x400);
        lVar7 = 0x40;
        plVar12 = &local_5490;
        do {
          *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
          lVar11 = lVar7 - uVar22;
          lVar7 = lVar7 + 1;
          plVar12 = plVar12 + 2;
        } while (lVar11 != 0x3f);
      }
      uVar17 = 0;
      do {
        uVar19 = DAT_14c75ec9c;
        uVar6 = local_5498[uVar17 * 4];
        if ((uVar6 >> 0x15 & 1) == 0) {
          lVar7 = (&local_5490)[uVar17 * 2];
          uVar2 = *(undefined8 *)(param_1 + 0x548 + uVar17 * 0x10);
          lVar11 = *local_54a8;
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a5dde:
            uVar19 = *(uint *)(lVar7 + 0xc);
            if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
              lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
              do {
                uVar6 = *(uint *)(lVar7 + 8);
                if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a5dcd;
                LOCK();
                bVar24 = uVar6 == *(uint *)(lVar7 + 8);
                if (bVar24) {
                  *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
                }
                uVar6 = DAT_14c75ec9c;
                UNLOCK();
              } while (!bVar24);
              if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
                uVar4 = ~DAT_14c75ec9c;
                uVar19 = *(uint *)(lVar8 + 8);
                do {
                  LOCK();
                  uVar21 = *(uint *)(lVar8 + 8);
                  bVar24 = uVar19 == uVar21;
                  if (bVar24) {
                    *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                    uVar21 = uVar19;
                  }
                  uVar19 = uVar21;
                  UNLOCK();
                } while (!bVar24);
                LOCK();
                *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
                UNLOCK();
                if ((uVar19 & uVar6) != 0) goto LAB_1468a5e80;
              }
            }
          }
          else {
            uVar21 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar5 = *(uint *)(lVar7 + 8);
              bVar24 = uVar4 == uVar5;
              if (bVar24) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar21;
                uVar5 = uVar4;
              }
              uVar4 = uVar5;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar19) == 0) goto LAB_1468a5dde;
            if ((uVar6 >> 0x18 & 1) == 0) {
              **(undefined8 **)(lVar11 + 0x18) = uVar2;
              lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
              *(longlong *)(lVar11 + 0x18) = lVar7;
              if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
                FUN_141715f94();
              }
              goto LAB_1468a5dcd;
            }
LAB_1468a5e80:
            local_54a0 = lVar11 + 0x18;
            FUN_1427ea699();
          }
        }
        else {
          **(undefined8 **)(uVar17 * 0x10 + param_1 + 0x548 + 8) = 0;
        }
LAB_1468a5dcd:
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar22);
    }
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  lVar7 = param_1 + 0x4980;
  lVar11 = (longlong)*(int *)(param_1 + 0x49c0);
  if (lVar11 != 0) {
    plVar12 = (longlong *)(param_1 + 0x49c8);
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 8;
    } while (lVar11 * 8 != lVar8);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        puVar16 = *(undefined8 **)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x4d40);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          puVar15 = puVar16 + uVar22;
LAB_1468a5f0c:
          puVar9 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8);
          do {
            *puVar9 = *puVar16;
            puVar9 = puVar9 + 1;
            puVar16 = puVar16 + 1;
          } while (puVar16 != puVar15);
          uVar19 = *(uint *)(param_1 + 0x4d40);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x4d40);
            if (uVar4 != 0) {
              lVar8 = 0;
              do {
                *(undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8 + lVar8) =
                     *(undefined8 *)((longlong)puVar16 + lVar8);
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)uVar4 * 8 - lVar8 != 0);
              uVar19 = *(uint *)(param_1 + 0x4d40);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            puVar16 = puVar16 + (int)uVar4;
            *(uint *)(param_1 + 0x4d40) = uVar19 + uVar4;
            FUN_1468a4630(lVar7);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x4d40);
          if (uVar6 != 0) {
            puVar15 = puVar16 + uVar6;
            goto LAB_1468a5f0c;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x4d40) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar11 * 8 + 0x49c8));
  }
  *(undefined4 *)(param_1 + 0x49c0) = 0;
  uVar6 = *(uint *)(param_1 + 0x4b00);
  local_54a8 = (longlong *)lVar7;
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x4b08 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x4b12 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x4b10 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x4d40);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x4d40);
            if (uVar10 != 0) {
              puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *puVar16 = *(undefined8 *)(lVar7 + lVar11);
                puVar16 = puVar16 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x4d40);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x4d40) = uVar21 + uVar5;
            FUN_1468a4630(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        if (uVar4 * uVar19 != 0) {
          puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *puVar16 = *(undefined8 *)(lVar7 + lVar11);
            puVar16 = puVar16 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        *(uint *)(param_1 + 0x4d40) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x4b00) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x4d40);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x4990) <=
                        (ulonglong)
                        (*(longlong *)(param_1 + 0x4d48 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x4988))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(*(longlong *)(param_1 + 0x4d48 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x4e80);
  uVar19 = 0x400 - uVar6;
  uVar4 = (uint)uVar22;
  if (uVar19 <= uVar4) {
    uVar17 = 0;
    do {
      uVar4 = *(uint *)(param_1 + 0x4e80);
      uVar6 = uVar4 + uVar19;
      for (; uVar4 < uVar6; uVar4 = uVar4 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar4 * 8) =
             *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x4e80) = uVar6;
      FUN_1468a4824();
      uVar4 = (int)uVar22 - uVar19;
      uVar22 = (ulonglong)uVar4;
      uVar19 = 0x400;
    } while (0x3ff < uVar4);
    uVar6 = *(uint *)(param_1 + 0x4e80);
  }
  uVar4 = uVar4 + uVar6;
  for (; uVar6 < uVar4; uVar6 = uVar6 + ((uVar13 >> uVar22 & 1) != 0)) {
    uVar22 = uVar17 & 0x3f;
    *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar6 * 8) =
         *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
    uVar17 = (ulonglong)((int)uVar17 + 1);
  }
  *(uint *)(param_1 + 0x4e80) = uVar4;
  *(undefined4 *)(param_1 + 0x4d40) = 0;
  if (uVar4 < 0x41) {
    if (uVar4 == 0) goto LAB_1468a651a;
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  else {
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x40);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  if (uVar4 != 0) {
    uVar22 = (ulonglong)uVar4;
    lVar7 = 0;
    do {
      *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
           (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
           *(longlong *)
            (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
      lVar7 = lVar7 + 4;
    } while (uVar22 * 4 - lVar7 != 0);
    if (uVar4 < 0x41) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)local_5498 + lVar7) =
             *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
    }
    else {
      lVar7 = 0;
      memset(local_1498,0,0x400);
      do {
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x400);
      lVar7 = 0x40;
      plVar12 = &local_5490;
      do {
        *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
        lVar11 = lVar7 - uVar22;
        lVar7 = lVar7 + 1;
        plVar12 = plVar12 + 2;
      } while (lVar11 != 0x3f);
    }
    uVar17 = 0;
    do {
      uVar19 = DAT_14c75ec9c;
      uVar6 = local_5498[uVar17 * 4];
      lVar7 = (&local_5490)[uVar17 * 2];
      uVar2 = *(undefined8 *)(param_1 + 0x4e88 + uVar17 * 8);
      lVar11 = *(longlong *)(param_1 + 0x4980);
      if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a645e:
        uVar19 = *(uint *)(lVar7 + 0xc);
        if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
          lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
          do {
            uVar6 = *(uint *)(lVar7 + 8);
            if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a6474;
            LOCK();
            bVar24 = uVar6 == *(uint *)(lVar7 + 8);
            if (bVar24) {
              *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
            }
            uVar6 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar24);
          if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
            uVar4 = ~DAT_14c75ec9c;
            uVar19 = *(uint *)(lVar8 + 8);
            do {
              LOCK();
              uVar21 = *(uint *)(lVar8 + 8);
              bVar24 = uVar19 == uVar21;
              if (bVar24) {
                *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                uVar21 = uVar19;
              }
              uVar19 = uVar21;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar19 & uVar6) != 0) {
              uVar6 = *(uint *)(lVar8 + 0xc);
              goto LAB_1468a650d;
            }
          }
        }
      }
      else {
        uVar21 = ~DAT_14c75ec9c;
        uVar4 = *(uint *)(lVar7 + 8);
        do {
          LOCK();
          uVar5 = *(uint *)(lVar7 + 8);
          bVar24 = uVar4 == uVar5;
          if (bVar24) {
            *(uint *)(lVar7 + 8) = uVar4 & uVar21;
            uVar5 = uVar4;
          }
          uVar4 = uVar5;
          UNLOCK();
        } while (!bVar24);
        LOCK();
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar4 & uVar19) == 0) goto LAB_1468a645e;
        if ((uVar6 >> 0x18 & 1) == 0) {
          **(undefined8 **)(lVar11 + 0x18) = uVar2;
          lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
          *(longlong *)(lVar11 + 0x18) = lVar7;
          if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
            FUN_141715f94();
          }
        }
        else {
          uVar6 = *(uint *)(lVar7 + 0xc);
LAB_1468a650d:
          local_54a0 = lVar11 + 0x18;
          FUN_1427ea699(~uVar6,&local_54a0);
        }
      }
LAB_1468a6474:
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar22);
  }
LAB_1468a651a:
  *(undefined4 *)(param_1 + 0x4e80) = 0;
  if ((local_90 ^ (ulonglong)auStack_54c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a6574 FUN_1468a6574 body=38 status=ok
// SIG undefined FUN_1468a6574(void)

undefined8 FUN_1468a6574(undefined8 param_1,int param_2)

{
  FUN_1417167c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468a6658 FUN_1468a6658 body=549 status=ok
// SIG undefined FUN_1468a6658(void)

void FUN_1468a6658(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    iStack_64 = iStack_44;
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar4 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar4;
        if (iVar5 == 0x20) {
          FUN_1447111de(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar3 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar3 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_144710aee(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a6882 FUN_1468a6882 body=84 status=ok
// SIG undefined FUN_1468a6882(void)

void FUN_1468a6882(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x10);
    lVar2 = (longlong)param_3 << 3;
    do {
      FUN_144710830(param_1 + 0x40,param_4,param_2,0x20000000,uVar1);
      param_2 = param_2 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1468a68d6 FUN_1468a68d6 body=282 status=ok
// SIG undefined FUN_1468a68d6(void)

void FUN_1468a68d6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  lVar2 = 0x48;
  do {
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x148);
  lVar2 = 0x48;
  do {
    uVar7 = *(uint *)(*(longlong **)(param_1 + lVar2) + 1);
    uVar8 = (ulonglong)(int)uVar7;
    if (uVar8 != 0) {
      puVar9 = (undefined8 *)**(longlong **)(param_1 + lVar2);
      uVar1 = *(uint *)(param_1 + 0x3c0);
      uVar4 = 0x20 - uVar1;
      if (uVar7 < uVar4) {
        puVar5 = puVar9 + uVar8;
LAB_1468a6931:
        puVar3 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8);
        do {
          *puVar3 = *puVar9;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar5);
        uVar1 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar1 = *(uint *)(param_1 + 0x3c0);
          if (uVar4 != 0) {
            lVar6 = 0;
            do {
              *(undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8 + lVar6) =
                   *(undefined8 *)((longlong)puVar9 + lVar6);
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uVar4 * 8 - lVar6 != 0);
            uVar1 = *(uint *)(param_1 + 0x3c0);
          }
          uVar7 = (int)uVar8 - uVar4;
          uVar8 = (ulonglong)uVar7;
          puVar9 = puVar9 + (int)uVar4;
          *(uint *)(param_1 + 0x3c0) = uVar1 + uVar4;
          FUN_1447111de(param_1);
          uVar4 = 0x20;
        } while (0x1f < uVar7);
        uVar1 = *(uint *)(param_1 + 0x3c0);
        if (uVar7 != 0) {
          puVar5 = puVar9 + uVar7;
          goto LAB_1468a6931;
        }
        uVar7 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar7 + uVar1;
    }
    lVar2 = lVar2 + 8;
    if (lVar2 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468a69f0 FUN_1468a69f0 body=123 status=ok
// SIG undefined FUN_1468a69f0(void)

void FUN_1468a69f0(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = param_1[0xef1];
  if (lVar2 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0xef2);
    uVar1 = (&DAT_14c949f00)[lVar4 * 0x50];
    if ((ulonglong)uVar1 < 0x20) {
      (&DAT_14c949f00)[lVar4 * 0x50] = uVar1 + 1;
      *(longlong *)(&DAT_14c949f08 + (ulonglong)uVar1 * 8 + lVar4 * 0x140) = lVar2;
    }
    else {
      FUN_1400020a8();
    }
  }
  *param_1 = &PTR_LAB_149eb0140;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001468a6a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1);
  return;
}



// FUNCTION 1468a6a6c FUN_1468a6a6c body=319 status=ok
// SIG undefined FUN_1468a6a6c(void)

undefined8 * FUN_1468a6a6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = DAT_14c846240;
  param_1[1] = DAT_14c846240;
  uVar2 = DAT_14c846248;
  param_1[2] = DAT_14c846248;
  param_1[3] = param_3;
  param_1[8] = param_2;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x11,0,0x100);
  *(undefined4 *)(param_1 + 0x38) = 0;
  memset(param_1 + 0x39,0,0x200);
  *(undefined4 *)(param_1 + 0x80) = 0;
  memset(param_1 + 0x81,0,0x100);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  memset(param_1 + 0xa9,0,0x4400);
  param_1[0x930] = param_2;
  param_1[0x931] = uVar1;
  param_1[0x932] = uVar2;
  *(undefined4 *)(param_1 + 0x938) = 0;
  memset(param_1 + 0x939,0,0x100);
  *(undefined4 *)(param_1 + 0x960) = 0;
  memset(param_1 + 0x961,0,0x200);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  memset(param_1 + 0x9a9,0,0x100);
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  memset(param_1 + 0x9d1,0,0x2200);
  FUN_141716662(param_1 + 0xe18,param_2);
  return param_1;
}



// FUNCTION 1468a6bac FUN_1468a6bac body=38 status=ok
// SIG undefined FUN_1468a6bac(void)

undefined8 FUN_1468a6bac(undefined8 param_1,int param_2)

{
  FUN_1468a69f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468a6d66 FUN_1468a6d66 body=565 status=ok
// SIG undefined FUN_1468a6d66(void)

void FUN_1468a6d66(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if ((*(char *)(param_1 + 0x11) == '\x01') && (*(char *)(param_1 + 0x10) != '\0')) {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar3 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar3 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_1468a72b2(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar4 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar4;
        if (iVar5 == 0x20) {
          FUN_1468a7692(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a6f9c FUN_1468a6f9c body=565 status=ok
// SIG undefined FUN_1468a6f9c(void)

void FUN_1468a6f9c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if ((*(char *)(param_1 + 0x11) == '\x01') && (*(char *)(param_1 + 0x10) != '\0')) {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar3 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar3 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_1468a72b2(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar4 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar4;
        if (iVar5 == 0x20) {
          FUN_1468a7692(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a71e2 FUN_1468a71e2 body=90 status=ok
// SIG undefined FUN_1468a71e2(void)

undefined8 FUN_1468a71e2(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar3 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x58);
  lVar4 = (longlong)iVar1;
  *(uint *)(lVar2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x5c) < iVar1 + 1U) {
    FUN_140fefdba((longlong *)(lVar2 + 0x50),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + lVar4 * 0x18) = uVar3;
  *(undefined8 **)(lVar2 + 8 + lVar4 * 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x18) = param_3;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 1468a7264 FUN_1468a7264 body=78 status=ok
// SIG undefined FUN_1468a7264(void)

void FUN_1468a7264(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    cVar1 = *(char *)(param_1 + 0x11);
    bVar2 = *(byte *)(param_1 + 0x10);
    lVar3 = (longlong)param_3 << 3;
    do {
      FUN_1468a7eac(param_1 + 0x40,param_2,cVar1 == '\x01' & bVar2);
      param_2 = param_2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1468a72b2 FUN_1468a72b2 body=324 status=ok
// SIG undefined FUN_1468a72b2(void)

void FUN_1468a72b2(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar6 = 0;
  uVar4 = 0;
  do {
    uVar4 = uVar4 | (ulonglong)
                    (*(ulonglong *)(param_1 + 0x10) <=
                    (ulonglong)
                    (**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) - *(longlong *)(param_1 + 8))) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  lVar6 = 0;
  uVar7 = 0;
  do {
    uVar7 = uVar7 | (ulonglong)(**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) != 0) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  uVar7 = uVar7 & uVar4;
  uVar4 = POPCOUNT(uVar7);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar9 = 0x400 - uVar3;
  uVar8 = 0;
  uVar5 = (uint)uVar4;
  if (uVar9 <= uVar5) {
    uVar8 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar9;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar7 >> uVar2 & 1) != 0)) {
        uVar2 = uVar8 & 0x3f;
        puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 0x10) = *puVar1;
        *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar5 * 0x10) = puVar1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_1468a73f6(param_1);
      uVar5 = (int)uVar4 - uVar9;
      uVar4 = (ulonglong)uVar5;
      uVar9 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  if (uVar3 < uVar5) {
    do {
      puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
      *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 0x10) = *puVar1;
      *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar3 * 0x10) = puVar1;
      uVar3 = uVar3 + ((uVar7 >> (uVar8 & 0x3f) & 1) != 0);
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (uVar3 < uVar5);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1468a73f6 FUN_1468a73f6 body=667 status=ok
// SIG undefined FUN_1468a73f6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468a73f6(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [446];
  undefined4 auStack_127a [144];
  undefined1 auStack_103a [4098];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0x508;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x908);
  lVar5 = 0x242;
  do {
    *(undefined4 *)((longlong)auStack_127a + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)param_1 + lVar5 * 4 + -0x400) + 0xc);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1242);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    if ((uVar2 >> 0x15 & 1) == 0) {
      lVar6 = alStack_5430[lVar5 * 2];
      lVar7 = param_1[lVar5 * 2 + 0xa1];
      lVar3 = *param_1;
      if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a75af:
        uVar4 = *(uint *)(lVar6 + 0xc);
        if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
          lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          do {
            uVar2 = *(uint *)(lVar6 + 8);
            if ((uVar2 >> 0x17 & 1) != 0) goto LAB_1468a759a;
            LOCK();
            bVar10 = uVar2 == *(uint *)(lVar6 + 8);
            if (bVar10) {
              *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
            }
            uVar2 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar10);
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
            uVar8 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar9 = *(uint *)(lVar7 + 8);
              bVar10 = uVar4 == uVar9;
              if (bVar10) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar8;
                uVar9 = uVar4;
              }
              uVar4 = uVar9;
              UNLOCK();
            } while (!bVar10);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar2) != 0) {
              uVar2 = *(uint *)(lVar7 + 0xc);
              goto LAB_1468a7651;
            }
          }
        }
      }
      else {
        uVar9 = ~DAT_14c75ec9c;
        uVar8 = *(uint *)(lVar6 + 8);
        do {
          LOCK();
          uVar1 = *(uint *)(lVar6 + 8);
          bVar10 = uVar8 == uVar1;
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar8 & uVar9;
            uVar1 = uVar8;
          }
          uVar8 = uVar1;
          UNLOCK();
        } while (!bVar10);
        LOCK();
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar8 & uVar4) == 0) goto LAB_1468a75af;
        if ((uVar2 >> 0x18 & 1) == 0) {
          **(longlong **)(lVar3 + 0x18) = lVar7;
          lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
          *(longlong *)(lVar3 + 0x18) = lVar6;
          if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
            FUN_141715f94();
          }
          goto LAB_1468a759a;
        }
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_1468a7651:
        local_5440 = lVar3 + 0x18;
        FUN_1427eb319(~uVar2,&local_5440);
      }
    }
    else {
      *(undefined8 *)param_1[lVar5 * 2 + 0xa2] = 0;
    }
LAB_1468a759a:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_38 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1468a7692 FUN_1468a7692 body=500 status=ok
// SIG undefined FUN_1468a7692(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468a7692(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lVar17;
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lVar22;
  longlong lVar25;
  longlong lVar29;
  
  lVar6 = *(longlong *)(param_1 + 8);
  auVar16._8_4_ = (int)lVar6;
  auVar16._0_8_ = lVar6;
  auVar16._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar7;
  auVar21._8_4_ = (int)uVar7;
  auVar21._0_8_ = uVar7;
  auVar21._12_4_ = (int)(uVar7 >> 0x20);
  auVar13 = (undefined1  [16])0x0;
  auVar18 = pmovsxbq(in_XMM5,0x100);
  lVar4 = 0x79;
  auVar11 = pmovsxbq(auVar11,0x101);
  auVar12 = pmovsxbq(in_XMM1,0x202);
  do {
    plVar1 = (longlong *)(param_1 + lVar4 * 8);
    auVar23._0_8_ = *plVar1 - lVar6;
    auVar23._8_8_ = plVar1[1] - auVar16._8_8_;
    auVar26._0_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,0) < SUB168(auVar21 ^ _DAT_149931e80,0));
    auVar26._8_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,8) < SUB168(auVar21 ^ _DAT_149931e80,8));
    lVar22 = auVar18._8_8_;
    lVar25 = SUB168(~auVar26 & auVar11,0);
    lVar29 = SUB168(~auVar26 & auVar11,8);
    auVar28._0_8_ = lVar25 << lVar22;
    auVar28._8_8_ = lVar29 << lVar22;
    lVar17 = auVar18._0_8_;
    auVar27._0_8_ = lVar25 << lVar17;
    auVar27._8_8_ = lVar29 << lVar17;
    auVar18 = pblendw(auVar27,auVar28,0xf0);
    auVar13 = auVar13 | auVar18;
    auVar18._0_8_ = lVar17 + auVar12._0_8_;
    auVar18._8_8_ = lVar22 + auVar12._8_8_;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0x99);
  auVar14._0_8_ = auVar13._8_8_;
  auVar14._8_4_ = auVar13._8_4_;
  auVar14._12_4_ = auVar13._12_4_;
  auVar15 = pmovsxbq(auVar14 | auVar13,0x100);
  lVar6 = 0x79;
  auVar16 = (undefined1  [16])0x0;
  do {
    plVar1 = (longlong *)(param_1 + lVar6 * 8);
    auVar19._0_8_ = -(ulonglong)(*plVar1 == 0);
    auVar19._8_8_ = -(ulonglong)(plVar1[1] == 0);
    lVar17 = auVar15._8_8_;
    lVar22 = SUB168(~auVar19 & auVar11,0);
    lVar25 = SUB168(~auVar19 & auVar11,8);
    auVar24._0_8_ = lVar22 << lVar17;
    auVar24._8_8_ = lVar25 << lVar17;
    lVar4 = auVar15._0_8_;
    auVar20._0_8_ = lVar22 << lVar4;
    auVar20._8_8_ = lVar25 << lVar4;
    auVar21 = pblendw(auVar20,auVar24,0xf0);
    auVar16 = auVar16 | auVar21;
    auVar15._0_8_ = lVar4 + auVar12._0_8_;
    auVar15._8_8_ = lVar17 + auVar12._8_8_;
    lVar6 = lVar6 + 2;
  } while (lVar6 != 0x99);
  uVar8 = (auVar16._8_8_ | auVar16._0_8_) & SUB168(auVar14 | auVar13,0);
  uVar7 = POPCOUNT(uVar8);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar10 = 0x400 - uVar3;
  uVar9 = 0;
  uVar5 = (uint)uVar7;
  if (uVar10 <= uVar5) {
    uVar9 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar10;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar8 >> uVar2 & 1) != 0)) {
        uVar2 = uVar9 & 0x3f;
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 8) =
             *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_1468a7886(param_1);
      uVar5 = (int)uVar7 - uVar10;
      uVar7 = (ulonglong)uVar5;
      uVar10 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  for (; uVar3 < uVar5; uVar3 = uVar3 + ((uVar8 >> uVar7 & 1) != 0)) {
    uVar7 = uVar9 & 0x3f;
    *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 8) =
         *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
    uVar9 = (ulonglong)((int)uVar9 + 1);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1468a7886 FUN_1468a7886 body=632 status=ok
// SIG undefined FUN_1468a7886(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468a7886(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [124];
  undefined4 auStack_13bc [224];
  undefined1 auStack_103a [4106];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0xa1;
  do {
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xe1);
  lVar5 = 0xe1;
  do {
    auStack_13bc[lVar5] = *(undefined4 *)(param_1[lVar5 + -0x40] + 0xc);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x4e1);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    lVar6 = alStack_5430[lVar5 * 2];
    lVar7 = param_1[lVar5 + 0xa1];
    lVar3 = *param_1;
    if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a7a0d:
      uVar4 = *(uint *)(lVar6 + 0xc);
      if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
        lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        do {
          uVar2 = *(uint *)(lVar6 + 8);
          if ((uVar2 >> 0x17 & 1) != 0) goto LAB_1468a7a23;
          LOCK();
          bVar10 = uVar2 == *(uint *)(lVar6 + 8);
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
          }
          uVar2 = DAT_14c75ec9c;
          UNLOCK();
        } while (!bVar10);
        if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
          uVar8 = ~DAT_14c75ec9c;
          uVar4 = *(uint *)(lVar7 + 8);
          do {
            LOCK();
            uVar9 = *(uint *)(lVar7 + 8);
            bVar10 = uVar4 == uVar9;
            if (bVar10) {
              *(uint *)(lVar7 + 8) = uVar4 & uVar8;
              uVar9 = uVar4;
            }
            uVar4 = uVar9;
            UNLOCK();
          } while (!bVar10);
          LOCK();
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar4 & uVar2) != 0) {
            uVar2 = *(uint *)(lVar7 + 0xc);
            goto LAB_1468a7ac0;
          }
        }
      }
    }
    else {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar6 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar6 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar6 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar4) == 0) goto LAB_1468a7a0d;
      if ((uVar2 >> 0x18 & 1) == 0) {
        **(longlong **)(lVar3 + 0x18) = lVar7;
        lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
        *(longlong *)(lVar3 + 0x18) = lVar6;
        if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
          FUN_141715f94();
        }
      }
      else {
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_1468a7ac0:
        local_5440 = lVar3 + 0x18;
        FUN_1427eb319(~uVar2,&local_5440);
      }
    }
LAB_1468a7a23:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_30 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1468a7b00 FUN_1468a7b00 body=657 status=ok
// SIG undefined FUN_1468a7b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468a7b00(longlong param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar21 [16];
  
  auVar1 = _DAT_149931e80;
  lVar3 = 0x48;
  do {
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x148);
  lVar3 = 0x48;
  auVar20 = pmovsxbq(unaff_XMM6,0x800);
  auVar21 = pmovsxbq(unaff_XMM7,0x100);
  do {
    uVar11 = *(uint *)(*(longlong **)(param_1 + lVar3) + 1);
    uVar12 = (ulonglong)(int)uVar11;
    if (uVar12 != 0) {
      lVar10 = **(longlong **)(param_1 + lVar3);
      uVar5 = *(uint *)(param_1 + 0x3c0);
      uVar2 = 0x20 - uVar5;
      if (uVar11 < uVar2) {
        lVar4 = lVar10 + uVar12 * 8;
LAB_1468a7ba7:
        uVar12 = (lVar4 - lVar10) - 8;
        auVar13._8_4_ = (int)uVar12;
        auVar13._0_8_ = uVar12;
        auVar13._12_4_ = (int)(uVar12 >> 0x20);
        auVar14._0_8_ = uVar12 >> 3;
        auVar14._8_8_ = auVar13._8_8_ >> 3;
        lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
        uVar6 = 0;
        do {
          auVar16._8_4_ = (int)lVar10;
          auVar16._0_8_ = lVar10;
          auVar16._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
          if ((bool)(~(SUB168(auVar14 | auVar1,0) < (longlong)(uVar6 ^ auVar1._0_8_)) & 1)) {
            *(longlong *)(lVar4 + -8 + uVar6 * 8) = lVar10 + auVar20._0_8_;
          }
          auVar18._8_4_ = (int)uVar6;
          auVar18._0_8_ = uVar6;
          auVar18._12_4_ = (int)(uVar6 >> 0x20);
          if ((longlong)((auVar18._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
              SUB168(auVar14 | auVar1,8)) {
            *(longlong *)(lVar4 + uVar6 * 8) = auVar16._8_8_ + auVar20._8_8_;
          }
          uVar6 = uVar6 + 2;
          lVar10 = lVar10 + 0x10;
        } while (((uVar12 >> 3) + 2 & 0xfffffffffffffffe) != uVar6);
        uVar5 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar5 = *(uint *)(param_1 + 0x3c0);
          if (uVar2 != 0) {
            uVar6 = (longlong)(int)uVar2 + 0x1fffffffffffffff;
            uVar7 = uVar6 & 0x1fffffffffffffff;
            auVar15._8_4_ = (int)uVar7;
            auVar15._0_8_ = uVar7;
            auVar15._12_4_ = (int)(uVar7 >> 0x20);
            lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
            uVar9 = 0;
            lVar8 = lVar10;
            do {
              auVar17._8_4_ = (int)lVar8;
              auVar17._0_8_ = lVar8;
              auVar17._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
              if ((bool)(~(SUB168(auVar15 | auVar1,0) < (longlong)(uVar9 ^ auVar1._0_8_)) & 1)) {
                *(longlong *)(lVar4 + -8 + uVar9 * 8) = lVar8 + auVar20._0_8_;
              }
              auVar19._8_4_ = (int)uVar9;
              auVar19._0_8_ = uVar9;
              auVar19._12_4_ = (int)(uVar9 >> 0x20);
              if ((longlong)((auVar19._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
                  SUB168(auVar15 | auVar1,8)) {
                *(longlong *)(lVar4 + uVar9 * 8) = auVar17._8_8_ + auVar20._8_8_;
              }
              uVar9 = uVar9 + 2;
              lVar8 = lVar8 + 0x10;
            } while ((uVar7 - ((uint)uVar6 & 1)) + 2 != uVar9);
            uVar5 = *(uint *)(param_1 + 0x3c0);
          }
          uVar11 = (int)uVar12 - uVar2;
          uVar12 = (ulonglong)uVar11;
          lVar10 = lVar10 + (longlong)(int)uVar2 * 8;
          *(uint *)(param_1 + 0x3c0) = uVar5 + uVar2;
          FUN_1468a72b2(param_1);
          uVar2 = 0x20;
        } while (0x1f < uVar11);
        uVar5 = *(uint *)(param_1 + 0x3c0);
        if (uVar11 != 0) {
          lVar4 = lVar10 + (ulonglong)uVar11 * 8;
          goto LAB_1468a7ba7;
        }
        uVar11 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar11 + uVar5;
    }
    lVar3 = lVar3 + 8;
    if (lVar3 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468a7d92 FUN_1468a7d92 body=282 status=ok
// SIG undefined FUN_1468a7d92(void)

void FUN_1468a7d92(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  lVar2 = 0x48;
  do {
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x148);
  lVar2 = 0x48;
  do {
    uVar7 = *(uint *)(*(longlong **)(param_1 + lVar2) + 1);
    uVar8 = (ulonglong)(int)uVar7;
    if (uVar8 != 0) {
      puVar9 = (undefined8 *)**(longlong **)(param_1 + lVar2);
      uVar1 = *(uint *)(param_1 + 0x3c0);
      uVar4 = 0x20 - uVar1;
      if (uVar7 < uVar4) {
        puVar5 = puVar9 + uVar8;
LAB_1468a7ded:
        puVar3 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8);
        do {
          *puVar3 = *puVar9;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar5);
        uVar1 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar1 = *(uint *)(param_1 + 0x3c0);
          if (uVar4 != 0) {
            lVar6 = 0;
            do {
              *(undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8 + lVar6) =
                   *(undefined8 *)((longlong)puVar9 + lVar6);
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uVar4 * 8 - lVar6 != 0);
            uVar1 = *(uint *)(param_1 + 0x3c0);
          }
          uVar7 = (int)uVar8 - uVar4;
          uVar8 = (ulonglong)uVar7;
          puVar9 = puVar9 + (int)uVar4;
          *(uint *)(param_1 + 0x3c0) = uVar1 + uVar4;
          FUN_1468a7692(param_1);
          uVar4 = 0x20;
        } while (0x1f < uVar7);
        uVar1 = *(uint *)(param_1 + 0x3c0);
        if (uVar7 != 0) {
          puVar5 = puVar9 + uVar7;
          goto LAB_1468a7ded;
        }
        uVar7 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar7 + uVar1;
    }
    lVar2 = lVar2 + 8;
    if (lVar2 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468a7eac FUN_1468a7eac body=669 status=ok
// SIG undefined FUN_1468a7eac(void)

void FUN_1468a7eac(longlong *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  uVar6 = DAT_14c75ec9c;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar5 = *param_2;
  lVar2 = *param_1;
  bVar10 = (ulonglong)(lVar5 - param_1[1]) < (ulonglong)param_1[2];
  if (param_3 == 0) {
    if (lVar5 == 0 || bVar10) goto LAB_1468a802b;
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8) +
            (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff) * 0x18;
    uVar4 = *(uint *)(lVar3 + 8);
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a8048:
      uVar6 = *(uint *)(lVar3 + 0xc);
      if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_1468a802b;
      lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      do {
        uVar6 = *(uint *)(lVar3 + 8);
        if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a802b;
        LOCK();
        bVar10 = uVar6 == *(uint *)(lVar3 + 8);
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
        }
        uVar6 = DAT_14c75ec9c;
        UNLOCK();
      } while (!bVar10);
      if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_1468a802b;
      uVar8 = ~DAT_14c75ec9c;
      uVar4 = *(uint *)(lVar5 + 8);
      do {
        LOCK();
        uVar9 = *(uint *)(lVar5 + 8);
        bVar10 = uVar4 == uVar9;
        if (bVar10) {
          *(uint *)(lVar5 + 8) = uVar4 & uVar8;
          uVar9 = uVar4;
        }
        uVar4 = uVar9;
        UNLOCK();
      } while (!bVar10);
      goto LAB_1468a812d;
    }
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar3 + 8);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar3 + 8);
      bVar10 = uVar8 == uVar1;
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar8 & uVar9;
        uVar1 = uVar8;
      }
      uVar8 = uVar1;
      UNLOCK();
    } while (!bVar10);
    LOCK();
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar8 & uVar6) == 0) goto LAB_1468a8048;
joined_r0x0001468a7fe3:
    if ((uVar4 >> 0x18 & 1) == 0) {
      **(longlong **)(lVar2 + 0x18) = lVar5;
      lVar5 = *(longlong *)(lVar2 + 0x18) + 8;
      *(longlong *)(lVar2 + 0x18) = lVar5;
      if (lVar5 == *(longlong *)(lVar2 + 0x20) + 0xf80) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
      }
      goto LAB_1468a802b;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
  }
  else {
    if (lVar5 == 0 || bVar10) goto LAB_1468a802b;
    uVar7 = (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff);
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8);
    uVar4 = *(uint *)(lVar3 + 8 + uVar7 * 0x18);
    if ((uVar4 >> 0x15 & 1) != 0) {
      *param_2 = 0;
      goto LAB_1468a802b;
    }
    lVar3 = lVar3 + uVar7 * 0x18;
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) != 0) {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar3 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar3 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar6) != 0) goto joined_r0x0001468a7fe3;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
    if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_1468a802b;
    lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    do {
      uVar6 = *(uint *)(lVar3 + 8);
      if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a802b;
      LOCK();
      bVar10 = uVar6 == *(uint *)(lVar3 + 8);
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
      }
      uVar6 = DAT_14c75ec9c;
      UNLOCK();
    } while (!bVar10);
    if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_1468a802b;
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar5 + 8);
    do {
      LOCK();
      uVar4 = *(uint *)(lVar5 + 8);
      bVar10 = uVar8 == uVar4;
      if (bVar10) {
        *(uint *)(lVar5 + 8) = uVar8 & uVar9;
        uVar4 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar4;
    } while (!bVar10);
LAB_1468a812d:
    LOCK();
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar4 & uVar6) == 0) goto LAB_1468a802b;
    uVar6 = *(uint *)(lVar5 + 0xc);
  }
  local_18 = lVar2 + 0x18;
  FUN_1427eb319(~uVar6);
LAB_1468a802b:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468a8158 FUN_1468a8158 body=403 status=ok
// SIG undefined FUN_1468a8158(void)

void FUN_1468a8158(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lStack_3da;
  uint auStack_3d2 [88];
  undefined *puStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  uint auStack_240 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar4 = 0x192;
  do {
    plVar7 = *(longlong **)(param_1 + -10 + lVar4);
    uVar1 = *(ushort *)(param_1 + lVar4);
    lVar10 = plVar7[1];
    *(ulonglong *)((longlong)&lStack_3da + lVar4) =
         (ulonglong)*(ushort *)(param_1 + -2 + lVar4) * 8 + *plVar7;
    *(int *)((longlong)auStack_3d2 + lVar4) = (int)lVar10;
    *(uint *)((longlong)auStack_3d2 + lVar4 + 4) = (uint)uVar1;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x392);
  lVar4 = 0;
  do {
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  lVar4 = 0;
  do {
    uVar8 = *(uint *)((longlong)auStack_240 + lVar4);
    if (uVar8 != 0) {
      uVar2 = *(uint *)((longlong)auStack_240 + lVar4 + 4);
      lVar10 = *(longlong *)((longlong)&lStack_248 + lVar4);
      uVar6 = *(uint *)(param_1 + 0x3c0);
      uVar3 = 0x20 - uVar6;
      if (uVar3 <= uVar8) {
        do {
          uVar5 = uVar3 * uVar2;
          uVar6 = *(uint *)(param_1 + 0x3c0);
          if (uVar5 != 0) {
            plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
            lVar9 = 0;
            do {
              *plVar7 = lVar10 + lVar9;
              plVar7 = plVar7 + 1;
              lVar9 = lVar9 + (ulonglong)uVar2 * 8;
            } while ((ulonglong)uVar5 * 8 - lVar9 != 0);
            uVar6 = *(uint *)(param_1 + 0x3c0);
          }
          lVar10 = lVar10 + (ulonglong)uVar5 * 8;
          uVar8 = uVar8 - uVar3;
          *(uint *)(param_1 + 0x3c0) = uVar6 + uVar3;
          puStack_270 = (undefined *)0x1468a825a;
          FUN_1468a72b2(param_1);
          uVar3 = 0x20;
        } while (0x1f < uVar8);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      if (uVar2 * uVar8 != 0) {
        plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
        lVar9 = 0;
        do {
          *plVar7 = lVar10 + lVar9;
          plVar7 = plVar7 + 1;
          lVar9 = lVar9 + (ulonglong)uVar2 * 8;
        } while ((ulonglong)(uVar2 * uVar8) << 3 != lVar9);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      *(uint *)(param_1 + 0x3c0) = uVar6 + uVar8;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_270 = &UNK_1468a82eb;
  FUN_144d8e3a0();
}



// FUNCTION 1468a82ec FUN_1468a82ec body=403 status=ok
// SIG undefined FUN_1468a82ec(void)

void FUN_1468a82ec(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lStack_3da;
  uint auStack_3d2 [88];
  undefined *puStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  uint auStack_240 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar5 = 0x192;
  do {
    plVar3 = *(longlong **)(param_1 + -10 + lVar5);
    uVar1 = *(ushort *)(param_1 + lVar5);
    lVar11 = plVar3[1];
    *(ulonglong *)((longlong)&lStack_3da + lVar5) =
         (ulonglong)*(ushort *)(param_1 + -2 + lVar5) * 8 + *plVar3;
    *(int *)((longlong)auStack_3d2 + lVar5) = (int)lVar11;
    *(uint *)((longlong)auStack_3d2 + lVar5 + 4) = (uint)uVar1;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x392);
  lVar5 = 0;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x200);
  lVar5 = 0;
  do {
    uVar9 = *(uint *)((longlong)auStack_240 + lVar5);
    if (uVar9 != 0) {
      uVar2 = *(uint *)((longlong)auStack_240 + lVar5 + 4);
      lVar11 = *(longlong *)((longlong)&lStack_248 + lVar5);
      uVar7 = *(uint *)(param_1 + 0x3c0);
      uVar4 = 0x20 - uVar7;
      if (uVar4 <= uVar9) {
        do {
          uVar6 = uVar4 * uVar2;
          uVar7 = *(uint *)(param_1 + 0x3c0);
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar7 * 8);
            lVar10 = 0;
            do {
              *puVar8 = *(undefined8 *)(lVar11 + lVar10);
              puVar8 = puVar8 + 1;
              lVar10 = lVar10 + (ulonglong)uVar2 * 8;
            } while ((ulonglong)uVar6 * 8 - lVar10 != 0);
            uVar7 = *(uint *)(param_1 + 0x3c0);
          }
          lVar11 = lVar11 + (ulonglong)uVar6 * 8;
          uVar9 = uVar9 - uVar4;
          *(uint *)(param_1 + 0x3c0) = uVar7 + uVar4;
          puStack_270 = (undefined *)0x1468a83ee;
          FUN_1468a7692(param_1);
          uVar4 = 0x20;
        } while (0x1f < uVar9);
        uVar7 = *(uint *)(param_1 + 0x3c0);
      }
      if (uVar2 * uVar9 != 0) {
        puVar8 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar7 * 8);
        lVar10 = 0;
        do {
          *puVar8 = *(undefined8 *)(lVar11 + lVar10);
          puVar8 = puVar8 + 1;
          lVar10 = lVar10 + (ulonglong)uVar2 * 8;
        } while ((ulonglong)(uVar2 * uVar9) << 3 != lVar10);
        uVar7 = *(uint *)(param_1 + 0x3c0);
      }
      *(uint *)(param_1 + 0x3c0) = uVar7 + uVar9;
    }
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x200);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_270 = &UNK_1468a847f;
  FUN_144d8e3a0();
}



// FUNCTION 1468a8480 FUN_1468a8480 body=908 status=ok
// SIG undefined FUN_1468a8480(void)

undefined4 FUN_1468a8480(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  ulonglong *puVar26;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x70c0) != 0) {
    puVar24 = (undefined8 *)(param_1 + (longlong)*(int *)(param_1 + 0x70c0) * 0x18 + 0x70c8);
    puVar22 = (undefined8 *)(param_1 + 0x70c8);
    local_e0 = puVar24;
    do {
      iVar19 = *(int *)(puVar22 + 2);
      if (iVar19 != 0) {
        uVar17 = *puVar22;
        plVar7 = (longlong *)puVar22[1];
        uVar3 = *(uint *)((longlong)puVar22 + 0x14);
        lVar13 = *plVar7;
        if (*(int *)((longlong)plVar7 + 0x34) == 0) {
          puVar8 = *(undefined8 **)(param_1 + 0x7740);
          *puVar8 = uVar17;
          puVar8[1] = lVar13;
          *(int *)(puVar8 + 2) = iVar19;
          *(uint *)((longlong)puVar8 + 0x14) = uVar3;
LAB_1468a8612:
          lVar13 = *(longlong *)(param_1 + 0x7748);
          lVar12 = *(longlong *)(param_1 + 0x7740) + 0x18;
          *(longlong *)(param_1 + 0x7740) = lVar12;
          if (lVar12 == lVar13 + 0xfc0) {
            lVar12 = FUN_1400305d2(&DAT_14c949ec0);
            *(longlong *)(local_e8 + 0x7748) = lVar12;
            *(longlong *)(lVar12 + 0xff0) = lVar13;
            *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
            param_1 = local_e8;
          }
        }
        else {
          uVar4 = *(uint *)(plVar7 + 1);
          if (uVar4 != 0) {
            uVar20 = 0;
            iVar19 = 0;
            local_d8 = puVar22;
            local_d0 = uVar17;
            do {
              plVar10 = (longlong *)plVar7[4];
              if ((longlong *)plVar7[4] == (longlong *)0x0) {
                plVar10 = plVar7 + 2;
              }
              uVar15 = uVar20 + 0x1f;
              if (-1 < (int)uVar20) {
                uVar15 = uVar20;
              }
              if ((*(uint *)((longlong)plVar10 + (longlong)((int)uVar15 >> 5) * 4) >>
                   (uVar20 & 0x1f) & 1) == 0) {
                if (0 < iVar19) {
                  puVar22 = *(undefined8 **)(param_1 + 0x7740);
                  *puVar22 = uVar17;
                  puVar22[1] = lVar13;
                  *(int *)(puVar22 + 2) = iVar19;
                  *(uint *)((longlong)puVar22 + 0x14) = uVar3;
                  lVar12 = *(longlong *)(param_1 + 0x7748);
                  lVar11 = *(longlong *)(param_1 + 0x7740) + 0x18;
                  *(longlong *)(param_1 + 0x7740) = lVar11;
                  if (lVar11 == lVar12 + 0xfc0) {
                    lVar11 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(param_1 + 0x7750));
                    *(longlong *)(local_e8 + 0x7748) = lVar11;
                    *(longlong *)(lVar11 + 0xff0) = lVar12;
                    *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
                    uVar17 = local_d0;
                    param_1 = local_e8;
                  }
                  lVar13 = lVar13 + (ulonglong)(iVar19 * uVar3);
                  iVar19 = 0;
                }
                lVar13 = lVar13 + (ulonglong)uVar3;
              }
              else {
                iVar19 = iVar19 + 1;
              }
              uVar20 = uVar20 + 1;
            } while (uVar4 != uVar20);
            puVar22 = local_d8;
            puVar24 = local_e0;
            if (0 < iVar19) {
              puVar8 = *(undefined8 **)(param_1 + 0x7740);
              *puVar8 = uVar17;
              puVar8[1] = lVar13;
              *(int *)(puVar8 + 2) = iVar19;
              *(uint *)((longlong)puVar8 + 0x14) = uVar3;
              goto LAB_1468a8612;
            }
          }
        }
      }
      puVar22 = puVar22 + 3;
    } while (puVar22 != puVar24);
    *(undefined4 *)(param_1 + 0x70c0) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x7400);
  lVar13 = param_1;
  if ((ulonglong)uVar3 != 0) {
    piVar16 = (int *)(param_1 + 0x7418);
    puVar25 = local_c8;
    uVar18 = 0;
    do {
      iVar19 = *piVar16;
      *puVar25 = (uint)uVar18;
      puVar25 = puVar25 + (0 < iVar19);
      uVar18 = uVar18 + 1;
      piVar16 = piVar16 + 6;
    } while (uVar3 != uVar18);
    puVar21 = local_c8;
    if (puVar21 != puVar25) {
      do {
        puVar26 = *(ulonglong **)(lVar13 + 0x7740);
        lVar12 = *(longlong *)(lVar13 + 0x7748);
        puVar1 = (ulonglong *)(lVar12 + 0xfc0);
        puVar2 = puVar21 + (int)((ulonglong)((longlong)puVar1 - (longlong)puVar26) >> 3) *
                           -0x55555555;
        puVar23 = puVar25;
        if (puVar2 < puVar25) {
          puVar23 = puVar2;
        }
        *(ulonglong **)(lVar13 + 0x7740) =
             puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3;
        if (puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3
            == puVar1) {
          lVar13 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(lVar13 + 0x7750));
          *(longlong *)(local_e8 + 0x7748) = lVar13;
          *(longlong *)(lVar13 + 0xff0) = lVar12;
          *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
          lVar13 = local_e8;
        }
        do {
          uVar14 = (ulonglong)*puVar21;
          puVar21 = puVar21 + 1;
          uVar18 = *(ulonglong *)(param_1 + 0x7408 + uVar14 * 0x18);
          uVar9 = *(ulonglong *)(param_1 + 0x7410 + uVar14 * 0x18);
          uVar5 = *(undefined4 *)(param_1 + 0x7418 + uVar14 * 0x18);
          uVar6 = *(undefined4 *)((uVar18 & 0xfffffffffffffffe) - 8);
          *puVar26 = uVar18;
          puVar26[1] = uVar9;
          *(undefined4 *)(puVar26 + 2) = uVar5;
          *(undefined4 *)((longlong)puVar26 + 0x14) = uVar6;
          puVar26 = puVar26 + 3;
        } while (puVar21 != puVar23);
        puVar21 = puVar2;
      } while (puVar2 < puVar25);
    }
    *(undefined4 *)(lVar13 + 0x7400) = 0;
  }
  iVar19 = (int)((ulonglong)(*(longlong *)(lVar13 + 0x7740) - *(longlong *)(lVar13 + 0x7748)) >> 3)
           * -0x55555555;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)iVar19 >> 8),
                  *(longlong *)(*(longlong *)(lVar13 + 0x7748) + 0xff0) != 0 || 0 < iVar19);
}



// FUNCTION 1468a880e FUN_1468a880e body=3931 status=ok
// SIG undefined FUN_1468a880e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468a880e(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint *puVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_54c8 [32];
  longlong *local_54a8;
  longlong local_54a0;
  uint local_5498 [2];
  undefined8 local_5490;
  undefined1 local_1498 [768];
  undefined4 auStack_1198 [64];
  uint auStack_1098 [1026];
  ulonglong local_90;
  
  auVar3 = _DAT_149931e80;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_54c8;
  local_54a8 = (longlong *)(param_1 + 0x40);
  lVar7 = (longlong)*(int *)(param_1 + 0x80);
  if (lVar7 != 0) {
    plVar12 = (longlong *)(param_1 + 0x88);
    lVar11 = 0;
    do {
      lVar11 = lVar11 + 8;
    } while (lVar7 * 8 != lVar11);
    auVar32 = pmovsxbq(unaff_XMM6,0x800);
    auVar33 = pmovsxbq(unaff_XMM7,0x100);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        lVar11 = *(longlong *)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x400);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          lVar8 = uVar22 * 8 + lVar11;
LAB_1468a890b:
          uVar22 = (lVar8 - lVar11) - 8;
          auVar25._8_4_ = (int)uVar22;
          auVar25._0_8_ = uVar22;
          auVar25._12_4_ = (int)(uVar22 >> 0x20);
          auVar26._0_8_ = uVar22 >> 3;
          auVar26._8_8_ = auVar25._8_8_ >> 3;
          lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
          uVar17 = 0;
          do {
            auVar28._8_4_ = (int)lVar11;
            auVar28._0_8_ = lVar11;
            auVar28._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
            if ((bool)(~(SUB168(auVar26 | auVar3,0) < (longlong)(uVar17 ^ auVar3._0_8_)) & 1)) {
              *(longlong *)(lVar8 + -8 + uVar17 * 8) = lVar11 + auVar32._0_8_;
            }
            auVar30._8_4_ = (int)uVar17;
            auVar30._0_8_ = uVar17;
            auVar30._12_4_ = (int)(uVar17 >> 0x20);
            if ((longlong)((auVar30._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                SUB168(auVar26 | auVar3,8)) {
              *(longlong *)(lVar8 + uVar17 * 8) = auVar28._8_8_ + auVar32._8_8_;
            }
            uVar17 = uVar17 + 2;
            lVar11 = lVar11 + 0x10;
          } while (((uVar22 >> 3) + 2 & 0xfffffffffffffffe) != uVar17);
          uVar19 = *(uint *)(param_1 + 0x400);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x400);
            if (uVar4 != 0) {
              uVar17 = (longlong)(int)uVar4 + 0x1fffffffffffffff;
              uVar13 = uVar17 & 0x1fffffffffffffff;
              auVar27._8_4_ = (int)uVar13;
              auVar27._0_8_ = uVar13;
              auVar27._12_4_ = (int)(uVar13 >> 0x20);
              lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
              uVar18 = 0;
              lVar20 = lVar11;
              do {
                auVar29._8_4_ = (int)lVar20;
                auVar29._0_8_ = lVar20;
                auVar29._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
                if ((bool)(~(SUB168(auVar27 | auVar3,0) < (longlong)(uVar18 ^ auVar3._0_8_)) & 1)) {
                  *(longlong *)(lVar8 + -8 + uVar18 * 8) = lVar20 + auVar32._0_8_;
                }
                auVar31._8_4_ = (int)uVar18;
                auVar31._0_8_ = uVar18;
                auVar31._12_4_ = (int)(uVar18 >> 0x20);
                if ((longlong)((auVar31._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                    SUB168(auVar27 | auVar3,8)) {
                  *(longlong *)(lVar8 + uVar18 * 8) = auVar29._8_8_ + auVar32._8_8_;
                }
                uVar18 = uVar18 + 2;
                lVar20 = lVar20 + 0x10;
              } while ((uVar13 - ((uint)uVar17 & 1)) + 2 != uVar18);
              uVar19 = *(uint *)(param_1 + 0x400);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            lVar11 = lVar11 + (longlong)(int)uVar4 * 8;
            *(uint *)(param_1 + 0x400) = uVar19 + uVar4;
            FUN_1468a72b2(local_54a8);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x400);
          if (uVar6 != 0) {
            lVar8 = (ulonglong)uVar6 * 8 + lVar11;
            goto LAB_1468a890b;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x400) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar7 * 8 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  uVar6 = *(uint *)(param_1 + 0x1c0);
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x1c8 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x1d2 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x1d0 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x400);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x400);
            if (uVar10 != 0) {
              plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *plVar12 = lVar11 + lVar7;
                plVar12 = plVar12 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x400);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x400) = uVar21 + uVar5;
            FUN_1468a72b2(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        if (uVar4 * uVar19 != 0) {
          plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *plVar12 = lVar11 + lVar7;
            plVar12 = plVar12 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        *(uint *)(param_1 + 0x400) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x400);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x50) <=
                        (ulonglong)
                        (**(longlong **)(param_1 + 0x408 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x48))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(**(longlong **)(param_1 + 0x408 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x540);
  uVar4 = 0x400 - uVar6;
  uVar19 = (uint)uVar22;
  if (uVar4 <= uVar19) {
    uVar17 = 0;
    do {
      uVar19 = *(uint *)(param_1 + 0x540);
      uVar6 = uVar19 + uVar4;
      for (; uVar19 < uVar6; uVar19 = uVar19 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
        *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar19 * 0x10) = *puVar16;
        *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar19 * 0x10) = puVar16;
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x540) = uVar6;
      FUN_1468a73f6();
      uVar19 = (int)uVar22 - uVar4;
      uVar22 = (ulonglong)uVar19;
      uVar4 = 0x400;
    } while (0x3ff < uVar19);
    uVar6 = *(uint *)(param_1 + 0x540);
  }
  uVar19 = uVar19 + uVar6;
  if (uVar6 < uVar19) {
    do {
      puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
      *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar6 * 0x10) = *puVar16;
      *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar6 * 0x10) = puVar16;
      uVar6 = uVar6 + ((uVar13 >> (uVar17 & 0x3f) & 1) != 0);
      uVar17 = (ulonglong)((int)uVar17 + 1);
    } while (uVar6 < uVar19);
  }
  *(uint *)(param_1 + 0x540) = uVar19;
  *(undefined4 *)(param_1 + 0x400) = 0;
  if (uVar19 < 0x41) {
    if (uVar19 != 0) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while ((ulonglong)uVar19 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)auStack_1098 + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x548 + lVar7 * 4) + 0xc);
        lVar7 = lVar7 + 4;
      } while ((ulonglong)uVar19 << 2 != lVar7);
      goto LAB_1468a8e1e;
    }
  }
  else {
    plVar12 = (longlong *)(param_1 + 0x548);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x400);
    lVar7 = 0x40;
    do {
      auStack_1198[lVar7] = *(undefined4 *)(*plVar12 + 0xc);
      lVar11 = lVar7 - (ulonglong)uVar19;
      lVar7 = lVar7 + 1;
      plVar12 = plVar12 + 2;
    } while (lVar11 != 0x3f);
LAB_1468a8e1e:
    if (uVar19 != 0) {
      uVar22 = (ulonglong)uVar19;
      lVar7 = 0;
      do {
        *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
             (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
             *(longlong *)
              (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
        lVar7 = lVar7 + 4;
      } while (uVar22 * 4 - lVar7 != 0);
      if (uVar19 < 0x41) {
        lVar7 = 0;
        do {
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
        lVar7 = 0;
        do {
          *(undefined4 *)((longlong)local_5498 + lVar7) =
               *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
      }
      else {
        lVar7 = 0;
        memset(local_1498,0,0x400);
        do {
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != 0x400);
        lVar7 = 0x40;
        plVar12 = &local_5490;
        do {
          *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
          lVar11 = lVar7 - uVar22;
          lVar7 = lVar7 + 1;
          plVar12 = plVar12 + 2;
        } while (lVar11 != 0x3f);
      }
      uVar17 = 0;
      do {
        uVar19 = DAT_14c75ec9c;
        uVar6 = local_5498[uVar17 * 4];
        if ((uVar6 >> 0x15 & 1) == 0) {
          lVar7 = (&local_5490)[uVar17 * 2];
          uVar2 = *(undefined8 *)(param_1 + 0x548 + uVar17 * 0x10);
          lVar11 = *local_54a8;
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a8fd4:
            uVar19 = *(uint *)(lVar7 + 0xc);
            if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
              lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
              do {
                uVar6 = *(uint *)(lVar7 + 8);
                if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a8fc3;
                LOCK();
                bVar24 = uVar6 == *(uint *)(lVar7 + 8);
                if (bVar24) {
                  *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
                }
                uVar6 = DAT_14c75ec9c;
                UNLOCK();
              } while (!bVar24);
              if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
                uVar4 = ~DAT_14c75ec9c;
                uVar19 = *(uint *)(lVar8 + 8);
                do {
                  LOCK();
                  uVar21 = *(uint *)(lVar8 + 8);
                  bVar24 = uVar19 == uVar21;
                  if (bVar24) {
                    *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                    uVar21 = uVar19;
                  }
                  uVar19 = uVar21;
                  UNLOCK();
                } while (!bVar24);
                LOCK();
                *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
                UNLOCK();
                if ((uVar19 & uVar6) != 0) goto LAB_1468a9076;
              }
            }
          }
          else {
            uVar21 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar5 = *(uint *)(lVar7 + 8);
              bVar24 = uVar4 == uVar5;
              if (bVar24) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar21;
                uVar5 = uVar4;
              }
              uVar4 = uVar5;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar19) == 0) goto LAB_1468a8fd4;
            if ((uVar6 >> 0x18 & 1) == 0) {
              **(undefined8 **)(lVar11 + 0x18) = uVar2;
              lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
              *(longlong *)(lVar11 + 0x18) = lVar7;
              if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
                FUN_141715f94();
              }
              goto LAB_1468a8fc3;
            }
LAB_1468a9076:
            local_54a0 = lVar11 + 0x18;
            FUN_1427eb319();
          }
        }
        else {
          **(undefined8 **)(uVar17 * 0x10 + param_1 + 0x548 + 8) = 0;
        }
LAB_1468a8fc3:
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar22);
    }
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  lVar7 = param_1 + 0x4980;
  lVar11 = (longlong)*(int *)(param_1 + 0x49c0);
  if (lVar11 != 0) {
    plVar12 = (longlong *)(param_1 + 0x49c8);
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 8;
    } while (lVar11 * 8 != lVar8);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        puVar16 = *(undefined8 **)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x4d40);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          puVar15 = puVar16 + uVar22;
LAB_1468a9102:
          puVar9 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8);
          do {
            *puVar9 = *puVar16;
            puVar9 = puVar9 + 1;
            puVar16 = puVar16 + 1;
          } while (puVar16 != puVar15);
          uVar19 = *(uint *)(param_1 + 0x4d40);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x4d40);
            if (uVar4 != 0) {
              lVar8 = 0;
              do {
                *(undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8 + lVar8) =
                     *(undefined8 *)((longlong)puVar16 + lVar8);
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)uVar4 * 8 - lVar8 != 0);
              uVar19 = *(uint *)(param_1 + 0x4d40);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            puVar16 = puVar16 + (int)uVar4;
            *(uint *)(param_1 + 0x4d40) = uVar19 + uVar4;
            FUN_1468a7692(lVar7);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x4d40);
          if (uVar6 != 0) {
            puVar15 = puVar16 + uVar6;
            goto LAB_1468a9102;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x4d40) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar11 * 8 + 0x49c8));
  }
  *(undefined4 *)(param_1 + 0x49c0) = 0;
  uVar6 = *(uint *)(param_1 + 0x4b00);
  local_54a8 = (longlong *)lVar7;
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x4b08 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x4b12 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x4b10 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x4d40);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x4d40);
            if (uVar10 != 0) {
              puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *puVar16 = *(undefined8 *)(lVar7 + lVar11);
                puVar16 = puVar16 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x4d40);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x4d40) = uVar21 + uVar5;
            FUN_1468a7692(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        if (uVar4 * uVar19 != 0) {
          puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *puVar16 = *(undefined8 *)(lVar7 + lVar11);
            puVar16 = puVar16 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        *(uint *)(param_1 + 0x4d40) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x4b00) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x4d40);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x4990) <=
                        (ulonglong)
                        (*(longlong *)(param_1 + 0x4d48 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x4988))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(*(longlong *)(param_1 + 0x4d48 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x4e80);
  uVar19 = 0x400 - uVar6;
  uVar4 = (uint)uVar22;
  if (uVar19 <= uVar4) {
    uVar17 = 0;
    do {
      uVar4 = *(uint *)(param_1 + 0x4e80);
      uVar6 = uVar4 + uVar19;
      for (; uVar4 < uVar6; uVar4 = uVar4 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar4 * 8) =
             *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x4e80) = uVar6;
      FUN_1468a7886();
      uVar4 = (int)uVar22 - uVar19;
      uVar22 = (ulonglong)uVar4;
      uVar19 = 0x400;
    } while (0x3ff < uVar4);
    uVar6 = *(uint *)(param_1 + 0x4e80);
  }
  uVar4 = uVar4 + uVar6;
  for (; uVar6 < uVar4; uVar6 = uVar6 + ((uVar13 >> uVar22 & 1) != 0)) {
    uVar22 = uVar17 & 0x3f;
    *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar6 * 8) =
         *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
    uVar17 = (ulonglong)((int)uVar17 + 1);
  }
  *(uint *)(param_1 + 0x4e80) = uVar4;
  *(undefined4 *)(param_1 + 0x4d40) = 0;
  if (uVar4 < 0x41) {
    if (uVar4 == 0) goto LAB_1468a9710;
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  else {
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x40);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  if (uVar4 != 0) {
    uVar22 = (ulonglong)uVar4;
    lVar7 = 0;
    do {
      *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
           (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
           *(longlong *)
            (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
      lVar7 = lVar7 + 4;
    } while (uVar22 * 4 - lVar7 != 0);
    if (uVar4 < 0x41) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)local_5498 + lVar7) =
             *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
    }
    else {
      lVar7 = 0;
      memset(local_1498,0,0x400);
      do {
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x400);
      lVar7 = 0x40;
      plVar12 = &local_5490;
      do {
        *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
        lVar11 = lVar7 - uVar22;
        lVar7 = lVar7 + 1;
        plVar12 = plVar12 + 2;
      } while (lVar11 != 0x3f);
    }
    uVar17 = 0;
    do {
      uVar19 = DAT_14c75ec9c;
      uVar6 = local_5498[uVar17 * 4];
      lVar7 = (&local_5490)[uVar17 * 2];
      uVar2 = *(undefined8 *)(param_1 + 0x4e88 + uVar17 * 8);
      lVar11 = *(longlong *)(param_1 + 0x4980);
      if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468a9654:
        uVar19 = *(uint *)(lVar7 + 0xc);
        if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
          lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
          do {
            uVar6 = *(uint *)(lVar7 + 8);
            if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468a966a;
            LOCK();
            bVar24 = uVar6 == *(uint *)(lVar7 + 8);
            if (bVar24) {
              *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
            }
            uVar6 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar24);
          if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
            uVar4 = ~DAT_14c75ec9c;
            uVar19 = *(uint *)(lVar8 + 8);
            do {
              LOCK();
              uVar21 = *(uint *)(lVar8 + 8);
              bVar24 = uVar19 == uVar21;
              if (bVar24) {
                *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                uVar21 = uVar19;
              }
              uVar19 = uVar21;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar19 & uVar6) != 0) {
              uVar6 = *(uint *)(lVar8 + 0xc);
              goto LAB_1468a9703;
            }
          }
        }
      }
      else {
        uVar21 = ~DAT_14c75ec9c;
        uVar4 = *(uint *)(lVar7 + 8);
        do {
          LOCK();
          uVar5 = *(uint *)(lVar7 + 8);
          bVar24 = uVar4 == uVar5;
          if (bVar24) {
            *(uint *)(lVar7 + 8) = uVar4 & uVar21;
            uVar5 = uVar4;
          }
          uVar4 = uVar5;
          UNLOCK();
        } while (!bVar24);
        LOCK();
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar4 & uVar19) == 0) goto LAB_1468a9654;
        if ((uVar6 >> 0x18 & 1) == 0) {
          **(undefined8 **)(lVar11 + 0x18) = uVar2;
          lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
          *(longlong *)(lVar11 + 0x18) = lVar7;
          if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
            FUN_141715f94();
          }
        }
        else {
          uVar6 = *(uint *)(lVar7 + 0xc);
LAB_1468a9703:
          local_54a0 = lVar11 + 0x18;
          FUN_1427eb319(~uVar6,&local_54a0);
        }
      }
LAB_1468a966a:
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar22);
  }
LAB_1468a9710:
  *(undefined4 *)(param_1 + 0x4e80) = 0;
  if ((local_90 ^ (ulonglong)auStack_54c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a9772 FUN_1468a9772 body=123 status=ok
// SIG undefined FUN_1468a9772(void)

void FUN_1468a9772(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = param_1[0xef1];
  if (lVar2 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0xef2);
    uVar1 = (&DAT_14c949f00)[lVar4 * 0x50];
    if ((ulonglong)uVar1 < 0x20) {
      (&DAT_14c949f00)[lVar4 * 0x50] = uVar1 + 1;
      *(longlong *)(&DAT_14c949f08 + (ulonglong)uVar1 * 8 + lVar4 * 0x140) = lVar2;
    }
    else {
      FUN_1400020a8();
    }
  }
  *param_1 = &PTR_LAB_149eb0140;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001468a97ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1);
  return;
}



// FUNCTION 1468a97ee FUN_1468a97ee body=319 status=ok
// SIG undefined FUN_1468a97ee(void)

undefined8 * FUN_1468a97ee(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = DAT_14c846240;
  param_1[1] = DAT_14c846240;
  uVar2 = DAT_14c846248;
  param_1[2] = DAT_14c846248;
  param_1[3] = param_3;
  param_1[8] = param_2;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x11,0,0x100);
  *(undefined4 *)(param_1 + 0x38) = 0;
  memset(param_1 + 0x39,0,0x200);
  *(undefined4 *)(param_1 + 0x80) = 0;
  memset(param_1 + 0x81,0,0x100);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  memset(param_1 + 0xa9,0,0x4400);
  param_1[0x930] = param_2;
  param_1[0x931] = uVar1;
  param_1[0x932] = uVar2;
  *(undefined4 *)(param_1 + 0x938) = 0;
  memset(param_1 + 0x939,0,0x100);
  *(undefined4 *)(param_1 + 0x960) = 0;
  memset(param_1 + 0x961,0,0x200);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  memset(param_1 + 0x9a9,0,0x100);
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  memset(param_1 + 0x9d1,0,0x2200);
  FUN_141716662(param_1 + 0xe18,param_2);
  return param_1;
}



// FUNCTION 1468a992e FUN_1468a992e body=38 status=ok
// SIG undefined FUN_1468a992e(void)

undefined8 FUN_1468a992e(undefined8 param_1,int param_2)

{
  FUN_1468a9772();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468a9ae8 FUN_1468a9ae8 body=565 status=ok
// SIG undefined FUN_1468a9ae8(void)

void FUN_1468a9ae8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if ((*(char *)(param_1 + 0x11) == '\x01') && (*(char *)(param_1 + 0x10) != '\0')) {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar3 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar3 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_1468aa034(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar4 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar4;
        if (iVar5 == 0x20) {
          FUN_1468aa414(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a9d1e FUN_1468a9d1e body=565 status=ok
// SIG undefined FUN_1468a9d1e(void)

void FUN_1468a9d1e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if ((*(char *)(param_1 + 0x11) == '\x01') && (*(char *)(param_1 + 0x10) != '\0')) {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar3 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar3 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_1468aa034(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar4 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar4;
        if (iVar5 == 0x20) {
          FUN_1468aa414(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468a9f64 FUN_1468a9f64 body=90 status=ok
// SIG undefined FUN_1468a9f64(void)

undefined8 FUN_1468a9f64(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar3 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x58);
  lVar4 = (longlong)iVar1;
  *(uint *)(lVar2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x5c) < iVar1 + 1U) {
    FUN_140fefdba((longlong *)(lVar2 + 0x50),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + lVar4 * 0x18) = uVar3;
  *(undefined8 **)(lVar2 + 8 + lVar4 * 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x18) = param_3;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 1468a9fe6 FUN_1468a9fe6 body=78 status=ok
// SIG undefined FUN_1468a9fe6(void)

void FUN_1468a9fe6(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    cVar1 = *(char *)(param_1 + 0x11);
    bVar2 = *(byte *)(param_1 + 0x10);
    lVar3 = (longlong)param_3 << 3;
    do {
      FUN_1468aac2e(param_1 + 0x40,param_2,cVar1 == '\x01' & bVar2);
      param_2 = param_2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1468aa034 FUN_1468aa034 body=324 status=ok
// SIG undefined FUN_1468aa034(void)

void FUN_1468aa034(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar6 = 0;
  uVar4 = 0;
  do {
    uVar4 = uVar4 | (ulonglong)
                    (*(ulonglong *)(param_1 + 0x10) <=
                    (ulonglong)
                    (**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) - *(longlong *)(param_1 + 8))) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  lVar6 = 0;
  uVar7 = 0;
  do {
    uVar7 = uVar7 | (ulonglong)(**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) != 0) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  uVar7 = uVar7 & uVar4;
  uVar4 = POPCOUNT(uVar7);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar9 = 0x400 - uVar3;
  uVar8 = 0;
  uVar5 = (uint)uVar4;
  if (uVar9 <= uVar5) {
    uVar8 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar9;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar7 >> uVar2 & 1) != 0)) {
        uVar2 = uVar8 & 0x3f;
        puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 0x10) = *puVar1;
        *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar5 * 0x10) = puVar1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_1468aa178(param_1);
      uVar5 = (int)uVar4 - uVar9;
      uVar4 = (ulonglong)uVar5;
      uVar9 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  if (uVar3 < uVar5) {
    do {
      puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
      *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 0x10) = *puVar1;
      *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar3 * 0x10) = puVar1;
      uVar3 = uVar3 + ((uVar7 >> (uVar8 & 0x3f) & 1) != 0);
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (uVar3 < uVar5);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1468aa178 FUN_1468aa178 body=667 status=ok
// SIG undefined FUN_1468aa178(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468aa178(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [446];
  undefined4 auStack_127a [144];
  undefined1 auStack_103a [4098];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0x508;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x908);
  lVar5 = 0x242;
  do {
    *(undefined4 *)((longlong)auStack_127a + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)param_1 + lVar5 * 4 + -0x400) + 0xc);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1242);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    if ((uVar2 >> 0x15 & 1) == 0) {
      lVar6 = alStack_5430[lVar5 * 2];
      lVar7 = param_1[lVar5 * 2 + 0xa1];
      lVar3 = *param_1;
      if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468aa331:
        uVar4 = *(uint *)(lVar6 + 0xc);
        if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
          lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          do {
            uVar2 = *(uint *)(lVar6 + 8);
            if ((uVar2 >> 0x17 & 1) != 0) goto LAB_1468aa31c;
            LOCK();
            bVar10 = uVar2 == *(uint *)(lVar6 + 8);
            if (bVar10) {
              *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
            }
            uVar2 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar10);
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
            uVar8 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar9 = *(uint *)(lVar7 + 8);
              bVar10 = uVar4 == uVar9;
              if (bVar10) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar8;
                uVar9 = uVar4;
              }
              uVar4 = uVar9;
              UNLOCK();
            } while (!bVar10);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar2) != 0) {
              uVar2 = *(uint *)(lVar7 + 0xc);
              goto LAB_1468aa3d3;
            }
          }
        }
      }
      else {
        uVar9 = ~DAT_14c75ec9c;
        uVar8 = *(uint *)(lVar6 + 8);
        do {
          LOCK();
          uVar1 = *(uint *)(lVar6 + 8);
          bVar10 = uVar8 == uVar1;
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar8 & uVar9;
            uVar1 = uVar8;
          }
          uVar8 = uVar1;
          UNLOCK();
        } while (!bVar10);
        LOCK();
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar8 & uVar4) == 0) goto LAB_1468aa331;
        if ((uVar2 >> 0x18 & 1) == 0) {
          **(longlong **)(lVar3 + 0x18) = lVar7;
          lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
          *(longlong *)(lVar3 + 0x18) = lVar6;
          if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
            FUN_1400318c8();
          }
          goto LAB_1468aa31c;
        }
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_1468aa3d3:
        local_5440 = lVar3 + 0x18;
        FUN_1427ed0f8(~uVar2,&local_5440);
      }
    }
    else {
      *(undefined8 *)param_1[lVar5 * 2 + 0xa2] = 0;
    }
LAB_1468aa31c:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_38 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1468aa414 FUN_1468aa414 body=500 status=ok
// SIG undefined FUN_1468aa414(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468aa414(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lVar17;
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lVar22;
  longlong lVar25;
  longlong lVar29;
  
  lVar6 = *(longlong *)(param_1 + 8);
  auVar16._8_4_ = (int)lVar6;
  auVar16._0_8_ = lVar6;
  auVar16._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar7;
  auVar21._8_4_ = (int)uVar7;
  auVar21._0_8_ = uVar7;
  auVar21._12_4_ = (int)(uVar7 >> 0x20);
  auVar13 = (undefined1  [16])0x0;
  auVar18 = pmovsxbq(in_XMM5,0x100);
  lVar4 = 0x79;
  auVar11 = pmovsxbq(auVar11,0x101);
  auVar12 = pmovsxbq(in_XMM1,0x202);
  do {
    plVar1 = (longlong *)(param_1 + lVar4 * 8);
    auVar23._0_8_ = *plVar1 - lVar6;
    auVar23._8_8_ = plVar1[1] - auVar16._8_8_;
    auVar26._0_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,0) < SUB168(auVar21 ^ _DAT_149931e80,0));
    auVar26._8_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,8) < SUB168(auVar21 ^ _DAT_149931e80,8));
    lVar22 = auVar18._8_8_;
    lVar25 = SUB168(~auVar26 & auVar11,0);
    lVar29 = SUB168(~auVar26 & auVar11,8);
    auVar28._0_8_ = lVar25 << lVar22;
    auVar28._8_8_ = lVar29 << lVar22;
    lVar17 = auVar18._0_8_;
    auVar27._0_8_ = lVar25 << lVar17;
    auVar27._8_8_ = lVar29 << lVar17;
    auVar18 = pblendw(auVar27,auVar28,0xf0);
    auVar13 = auVar13 | auVar18;
    auVar18._0_8_ = lVar17 + auVar12._0_8_;
    auVar18._8_8_ = lVar22 + auVar12._8_8_;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0x99);
  auVar14._0_8_ = auVar13._8_8_;
  auVar14._8_4_ = auVar13._8_4_;
  auVar14._12_4_ = auVar13._12_4_;
  auVar15 = pmovsxbq(auVar14 | auVar13,0x100);
  lVar6 = 0x79;
  auVar16 = (undefined1  [16])0x0;
  do {
    plVar1 = (longlong *)(param_1 + lVar6 * 8);
    auVar19._0_8_ = -(ulonglong)(*plVar1 == 0);
    auVar19._8_8_ = -(ulonglong)(plVar1[1] == 0);
    lVar17 = auVar15._8_8_;
    lVar22 = SUB168(~auVar19 & auVar11,0);
    lVar25 = SUB168(~auVar19 & auVar11,8);
    auVar24._0_8_ = lVar22 << lVar17;
    auVar24._8_8_ = lVar25 << lVar17;
    lVar4 = auVar15._0_8_;
    auVar20._0_8_ = lVar22 << lVar4;
    auVar20._8_8_ = lVar25 << lVar4;
    auVar21 = pblendw(auVar20,auVar24,0xf0);
    auVar16 = auVar16 | auVar21;
    auVar15._0_8_ = lVar4 + auVar12._0_8_;
    auVar15._8_8_ = lVar17 + auVar12._8_8_;
    lVar6 = lVar6 + 2;
  } while (lVar6 != 0x99);
  uVar8 = (auVar16._8_8_ | auVar16._0_8_) & SUB168(auVar14 | auVar13,0);
  uVar7 = POPCOUNT(uVar8);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar10 = 0x400 - uVar3;
  uVar9 = 0;
  uVar5 = (uint)uVar7;
  if (uVar10 <= uVar5) {
    uVar9 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar10;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar8 >> uVar2 & 1) != 0)) {
        uVar2 = uVar9 & 0x3f;
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 8) =
             *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_1468aa608(param_1);
      uVar5 = (int)uVar7 - uVar10;
      uVar7 = (ulonglong)uVar5;
      uVar10 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  for (; uVar3 < uVar5; uVar3 = uVar3 + ((uVar8 >> uVar7 & 1) != 0)) {
    uVar7 = uVar9 & 0x3f;
    *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 8) =
         *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
    uVar9 = (ulonglong)((int)uVar9 + 1);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1468aa608 FUN_1468aa608 body=632 status=ok
// SIG undefined FUN_1468aa608(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468aa608(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [124];
  undefined4 auStack_13bc [224];
  undefined1 auStack_103a [4106];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0xa1;
  do {
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xe1);
  lVar5 = 0xe1;
  do {
    auStack_13bc[lVar5] = *(undefined4 *)(param_1[lVar5 + -0x40] + 0xc);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x4e1);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    lVar6 = alStack_5430[lVar5 * 2];
    lVar7 = param_1[lVar5 + 0xa1];
    lVar3 = *param_1;
    if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468aa78f:
      uVar4 = *(uint *)(lVar6 + 0xc);
      if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
        lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        do {
          uVar2 = *(uint *)(lVar6 + 8);
          if ((uVar2 >> 0x17 & 1) != 0) goto LAB_1468aa7a5;
          LOCK();
          bVar10 = uVar2 == *(uint *)(lVar6 + 8);
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
          }
          uVar2 = DAT_14c75ec9c;
          UNLOCK();
        } while (!bVar10);
        if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
          uVar8 = ~DAT_14c75ec9c;
          uVar4 = *(uint *)(lVar7 + 8);
          do {
            LOCK();
            uVar9 = *(uint *)(lVar7 + 8);
            bVar10 = uVar4 == uVar9;
            if (bVar10) {
              *(uint *)(lVar7 + 8) = uVar4 & uVar8;
              uVar9 = uVar4;
            }
            uVar4 = uVar9;
            UNLOCK();
          } while (!bVar10);
          LOCK();
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar4 & uVar2) != 0) {
            uVar2 = *(uint *)(lVar7 + 0xc);
            goto LAB_1468aa842;
          }
        }
      }
    }
    else {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar6 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar6 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar6 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar4) == 0) goto LAB_1468aa78f;
      if ((uVar2 >> 0x18 & 1) == 0) {
        **(longlong **)(lVar3 + 0x18) = lVar7;
        lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
        *(longlong *)(lVar3 + 0x18) = lVar6;
        if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
          FUN_1400318c8();
        }
      }
      else {
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_1468aa842:
        local_5440 = lVar3 + 0x18;
        FUN_1427ed0f8(~uVar2,&local_5440);
      }
    }
LAB_1468aa7a5:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_30 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1468aa882 FUN_1468aa882 body=657 status=ok
// SIG undefined FUN_1468aa882(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468aa882(longlong param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar21 [16];
  
  auVar1 = _DAT_149931e80;
  lVar3 = 0x48;
  do {
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x148);
  lVar3 = 0x48;
  auVar20 = pmovsxbq(unaff_XMM6,0x800);
  auVar21 = pmovsxbq(unaff_XMM7,0x100);
  do {
    uVar11 = *(uint *)(*(longlong **)(param_1 + lVar3) + 1);
    uVar12 = (ulonglong)(int)uVar11;
    if (uVar12 != 0) {
      lVar10 = **(longlong **)(param_1 + lVar3);
      uVar5 = *(uint *)(param_1 + 0x3c0);
      uVar2 = 0x20 - uVar5;
      if (uVar11 < uVar2) {
        lVar4 = lVar10 + uVar12 * 8;
LAB_1468aa929:
        uVar12 = (lVar4 - lVar10) - 8;
        auVar13._8_4_ = (int)uVar12;
        auVar13._0_8_ = uVar12;
        auVar13._12_4_ = (int)(uVar12 >> 0x20);
        auVar14._0_8_ = uVar12 >> 3;
        auVar14._8_8_ = auVar13._8_8_ >> 3;
        lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
        uVar6 = 0;
        do {
          auVar16._8_4_ = (int)lVar10;
          auVar16._0_8_ = lVar10;
          auVar16._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
          if ((bool)(~(SUB168(auVar14 | auVar1,0) < (longlong)(uVar6 ^ auVar1._0_8_)) & 1)) {
            *(longlong *)(lVar4 + -8 + uVar6 * 8) = lVar10 + auVar20._0_8_;
          }
          auVar18._8_4_ = (int)uVar6;
          auVar18._0_8_ = uVar6;
          auVar18._12_4_ = (int)(uVar6 >> 0x20);
          if ((longlong)((auVar18._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
              SUB168(auVar14 | auVar1,8)) {
            *(longlong *)(lVar4 + uVar6 * 8) = auVar16._8_8_ + auVar20._8_8_;
          }
          uVar6 = uVar6 + 2;
          lVar10 = lVar10 + 0x10;
        } while (((uVar12 >> 3) + 2 & 0xfffffffffffffffe) != uVar6);
        uVar5 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar5 = *(uint *)(param_1 + 0x3c0);
          if (uVar2 != 0) {
            uVar6 = (longlong)(int)uVar2 + 0x1fffffffffffffff;
            uVar7 = uVar6 & 0x1fffffffffffffff;
            auVar15._8_4_ = (int)uVar7;
            auVar15._0_8_ = uVar7;
            auVar15._12_4_ = (int)(uVar7 >> 0x20);
            lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
            uVar9 = 0;
            lVar8 = lVar10;
            do {
              auVar17._8_4_ = (int)lVar8;
              auVar17._0_8_ = lVar8;
              auVar17._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
              if ((bool)(~(SUB168(auVar15 | auVar1,0) < (longlong)(uVar9 ^ auVar1._0_8_)) & 1)) {
                *(longlong *)(lVar4 + -8 + uVar9 * 8) = lVar8 + auVar20._0_8_;
              }
              auVar19._8_4_ = (int)uVar9;
              auVar19._0_8_ = uVar9;
              auVar19._12_4_ = (int)(uVar9 >> 0x20);
              if ((longlong)((auVar19._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
                  SUB168(auVar15 | auVar1,8)) {
                *(longlong *)(lVar4 + uVar9 * 8) = auVar17._8_8_ + auVar20._8_8_;
              }
              uVar9 = uVar9 + 2;
              lVar8 = lVar8 + 0x10;
            } while ((uVar7 - ((uint)uVar6 & 1)) + 2 != uVar9);
            uVar5 = *(uint *)(param_1 + 0x3c0);
          }
          uVar11 = (int)uVar12 - uVar2;
          uVar12 = (ulonglong)uVar11;
          lVar10 = lVar10 + (longlong)(int)uVar2 * 8;
          *(uint *)(param_1 + 0x3c0) = uVar5 + uVar2;
          FUN_1468aa034(param_1);
          uVar2 = 0x20;
        } while (0x1f < uVar11);
        uVar5 = *(uint *)(param_1 + 0x3c0);
        if (uVar11 != 0) {
          lVar4 = lVar10 + (ulonglong)uVar11 * 8;
          goto LAB_1468aa929;
        }
        uVar11 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar11 + uVar5;
    }
    lVar3 = lVar3 + 8;
    if (lVar3 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468aab14 FUN_1468aab14 body=282 status=ok
// SIG undefined FUN_1468aab14(void)

void FUN_1468aab14(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  lVar2 = 0x48;
  do {
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x148);
  lVar2 = 0x48;
  do {
    uVar7 = *(uint *)(*(longlong **)(param_1 + lVar2) + 1);
    uVar8 = (ulonglong)(int)uVar7;
    if (uVar8 != 0) {
      puVar9 = (undefined8 *)**(longlong **)(param_1 + lVar2);
      uVar1 = *(uint *)(param_1 + 0x3c0);
      uVar4 = 0x20 - uVar1;
      if (uVar7 < uVar4) {
        puVar5 = puVar9 + uVar8;
LAB_1468aab6f:
        puVar3 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8);
        do {
          *puVar3 = *puVar9;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar5);
        uVar1 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar1 = *(uint *)(param_1 + 0x3c0);
          if (uVar4 != 0) {
            lVar6 = 0;
            do {
              *(undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8 + lVar6) =
                   *(undefined8 *)((longlong)puVar9 + lVar6);
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uVar4 * 8 - lVar6 != 0);
            uVar1 = *(uint *)(param_1 + 0x3c0);
          }
          uVar7 = (int)uVar8 - uVar4;
          uVar8 = (ulonglong)uVar7;
          puVar9 = puVar9 + (int)uVar4;
          *(uint *)(param_1 + 0x3c0) = uVar1 + uVar4;
          FUN_1468aa414(param_1);
          uVar4 = 0x20;
        } while (0x1f < uVar7);
        uVar1 = *(uint *)(param_1 + 0x3c0);
        if (uVar7 != 0) {
          puVar5 = puVar9 + uVar7;
          goto LAB_1468aab6f;
        }
        uVar7 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar7 + uVar1;
    }
    lVar2 = lVar2 + 8;
    if (lVar2 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468aac2e FUN_1468aac2e body=669 status=ok
// SIG undefined FUN_1468aac2e(void)

void FUN_1468aac2e(longlong *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  uVar6 = DAT_14c75ec9c;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar5 = *param_2;
  lVar2 = *param_1;
  bVar10 = (ulonglong)(lVar5 - param_1[1]) < (ulonglong)param_1[2];
  if (param_3 == 0) {
    if (lVar5 == 0 || bVar10) goto LAB_1468aadad;
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8) +
            (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff) * 0x18;
    uVar4 = *(uint *)(lVar3 + 8);
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468aadca:
      uVar6 = *(uint *)(lVar3 + 0xc);
      if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_1468aadad;
      lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      do {
        uVar6 = *(uint *)(lVar3 + 8);
        if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468aadad;
        LOCK();
        bVar10 = uVar6 == *(uint *)(lVar3 + 8);
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
        }
        uVar6 = DAT_14c75ec9c;
        UNLOCK();
      } while (!bVar10);
      if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_1468aadad;
      uVar8 = ~DAT_14c75ec9c;
      uVar4 = *(uint *)(lVar5 + 8);
      do {
        LOCK();
        uVar9 = *(uint *)(lVar5 + 8);
        bVar10 = uVar4 == uVar9;
        if (bVar10) {
          *(uint *)(lVar5 + 8) = uVar4 & uVar8;
          uVar9 = uVar4;
        }
        uVar4 = uVar9;
        UNLOCK();
      } while (!bVar10);
      goto LAB_1468aaeaf;
    }
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar3 + 8);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar3 + 8);
      bVar10 = uVar8 == uVar1;
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar8 & uVar9;
        uVar1 = uVar8;
      }
      uVar8 = uVar1;
      UNLOCK();
    } while (!bVar10);
    LOCK();
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar8 & uVar6) == 0) goto LAB_1468aadca;
joined_r0x0001468aad65:
    if ((uVar4 >> 0x18 & 1) == 0) {
      **(longlong **)(lVar2 + 0x18) = lVar5;
      lVar5 = *(longlong *)(lVar2 + 0x18) + 8;
      *(longlong *)(lVar2 + 0x18) = lVar5;
      if (lVar5 == *(longlong *)(lVar2 + 0x20) + 0xf80) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
      }
      goto LAB_1468aadad;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
  }
  else {
    if (lVar5 == 0 || bVar10) goto LAB_1468aadad;
    uVar7 = (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff);
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8);
    uVar4 = *(uint *)(lVar3 + 8 + uVar7 * 0x18);
    if ((uVar4 >> 0x15 & 1) != 0) {
      *param_2 = 0;
      goto LAB_1468aadad;
    }
    lVar3 = lVar3 + uVar7 * 0x18;
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) != 0) {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar3 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar3 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar6) != 0) goto joined_r0x0001468aad65;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
    if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_1468aadad;
    lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    do {
      uVar6 = *(uint *)(lVar3 + 8);
      if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468aadad;
      LOCK();
      bVar10 = uVar6 == *(uint *)(lVar3 + 8);
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
      }
      uVar6 = DAT_14c75ec9c;
      UNLOCK();
    } while (!bVar10);
    if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_1468aadad;
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar5 + 8);
    do {
      LOCK();
      uVar4 = *(uint *)(lVar5 + 8);
      bVar10 = uVar8 == uVar4;
      if (bVar10) {
        *(uint *)(lVar5 + 8) = uVar8 & uVar9;
        uVar4 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar4;
    } while (!bVar10);
LAB_1468aaeaf:
    LOCK();
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar4 & uVar6) == 0) goto LAB_1468aadad;
    uVar6 = *(uint *)(lVar5 + 0xc);
  }
  local_18 = lVar2 + 0x18;
  FUN_1427ed0f8(~uVar6);
LAB_1468aadad:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468aaeda FUN_1468aaeda body=403 status=ok
// SIG undefined FUN_1468aaeda(void)

void FUN_1468aaeda(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lStack_3da;
  uint auStack_3d2 [88];
  undefined *puStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  uint auStack_240 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar4 = 0x192;
  do {
    plVar7 = *(longlong **)(param_1 + -10 + lVar4);
    uVar1 = *(ushort *)(param_1 + lVar4);
    lVar10 = plVar7[1];
    *(ulonglong *)((longlong)&lStack_3da + lVar4) =
         (ulonglong)*(ushort *)(param_1 + -2 + lVar4) * 8 + *plVar7;
    *(int *)((longlong)auStack_3d2 + lVar4) = (int)lVar10;
    *(uint *)((longlong)auStack_3d2 + lVar4 + 4) = (uint)uVar1;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x392);
  lVar4 = 0;
  do {
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  lVar4 = 0;
  do {
    uVar8 = *(uint *)((longlong)auStack_240 + lVar4);
    if (uVar8 != 0) {
      uVar2 = *(uint *)((longlong)auStack_240 + lVar4 + 4);
      lVar10 = *(longlong *)((longlong)&lStack_248 + lVar4);
      uVar6 = *(uint *)(param_1 + 0x3c0);
      uVar3 = 0x20 - uVar6;
      if (uVar3 <= uVar8) {
        do {
          uVar5 = uVar3 * uVar2;
          uVar6 = *(uint *)(param_1 + 0x3c0);
          if (uVar5 != 0) {
            plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
            lVar9 = 0;
            do {
              *plVar7 = lVar10 + lVar9;
              plVar7 = plVar7 + 1;
              lVar9 = lVar9 + (ulonglong)uVar2 * 8;
            } while ((ulonglong)uVar5 * 8 - lVar9 != 0);
            uVar6 = *(uint *)(param_1 + 0x3c0);
          }
          lVar10 = lVar10 + (ulonglong)uVar5 * 8;
          uVar8 = uVar8 - uVar3;
          *(uint *)(param_1 + 0x3c0) = uVar6 + uVar3;
          puStack_270 = (undefined *)0x1468aafdc;
          FUN_1468aa034(param_1);
          uVar3 = 0x20;
        } while (0x1f < uVar8);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      if (uVar2 * uVar8 != 0) {
        plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
        lVar9 = 0;
        do {
          *plVar7 = lVar10 + lVar9;
          plVar7 = plVar7 + 1;
          lVar9 = lVar9 + (ulonglong)uVar2 * 8;
        } while ((ulonglong)(uVar2 * uVar8) << 3 != lVar9);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      *(uint *)(param_1 + 0x3c0) = uVar6 + uVar8;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_270 = &UNK_1468ab06d;
  FUN_144d8e3a0();
}



// FUNCTION 1468ab06e FUN_1468ab06e body=403 status=ok
// SIG undefined FUN_1468ab06e(void)

void FUN_1468ab06e(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lStack_3da;
  uint auStack_3d2 [88];
  undefined *puStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  uint auStack_240 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar5 = 0x192;
  do {
    plVar3 = *(longlong **)(param_1 + -10 + lVar5);
    uVar1 = *(ushort *)(param_1 + lVar5);
    lVar11 = plVar3[1];
    *(ulonglong *)((longlong)&lStack_3da + lVar5) =
         (ulonglong)*(ushort *)(param_1 + -2 + lVar5) * 8 + *plVar3;
    *(int *)((longlong)auStack_3d2 + lVar5) = (int)lVar11;
    *(uint *)((longlong)auStack_3d2 + lVar5 + 4) = (uint)uVar1;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x392);
  lVar5 = 0;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x200);
  lVar5 = 0;
  do {
    uVar9 = *(uint *)((longlong)auStack_240 + lVar5);
    if (uVar9 != 0) {
      uVar2 = *(uint *)((longlong)auStack_240 + lVar5 + 4);
      lVar11 = *(longlong *)((longlong)&lStack_248 + lVar5);
      uVar7 = *(uint *)(param_1 + 0x3c0);
      uVar4 = 0x20 - uVar7;
      if (uVar4 <= uVar9) {
        do {
          uVar6 = uVar4 * uVar2;
          uVar7 = *(uint *)(param_1 + 0x3c0);
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar7 * 8);
            lVar10 = 0;
            do {
              *puVar8 = *(undefined8 *)(lVar11 + lVar10);
              puVar8 = puVar8 + 1;
              lVar10 = lVar10 + (ulonglong)uVar2 * 8;
            } while ((ulonglong)uVar6 * 8 - lVar10 != 0);
            uVar7 = *(uint *)(param_1 + 0x3c0);
          }
          lVar11 = lVar11 + (ulonglong)uVar6 * 8;
          uVar9 = uVar9 - uVar4;
          *(uint *)(param_1 + 0x3c0) = uVar7 + uVar4;
          puStack_270 = (undefined *)0x1468ab170;
          FUN_1468aa414(param_1);
          uVar4 = 0x20;
        } while (0x1f < uVar9);
        uVar7 = *(uint *)(param_1 + 0x3c0);
      }
      if (uVar2 * uVar9 != 0) {
        puVar8 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar7 * 8);
        lVar10 = 0;
        do {
          *puVar8 = *(undefined8 *)(lVar11 + lVar10);
          puVar8 = puVar8 + 1;
          lVar10 = lVar10 + (ulonglong)uVar2 * 8;
        } while ((ulonglong)(uVar2 * uVar9) << 3 != lVar10);
        uVar7 = *(uint *)(param_1 + 0x3c0);
      }
      *(uint *)(param_1 + 0x3c0) = uVar7 + uVar9;
    }
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x200);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_270 = &UNK_1468ab201;
  FUN_144d8e3a0();
}



// FUNCTION 1468ab202 FUN_1468ab202 body=908 status=ok
// SIG undefined FUN_1468ab202(void)

undefined4 FUN_1468ab202(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  ulonglong *puVar26;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x70c0) != 0) {
    puVar24 = (undefined8 *)(param_1 + (longlong)*(int *)(param_1 + 0x70c0) * 0x18 + 0x70c8);
    puVar22 = (undefined8 *)(param_1 + 0x70c8);
    local_e0 = puVar24;
    do {
      iVar19 = *(int *)(puVar22 + 2);
      if (iVar19 != 0) {
        uVar17 = *puVar22;
        plVar7 = (longlong *)puVar22[1];
        uVar3 = *(uint *)((longlong)puVar22 + 0x14);
        lVar13 = *plVar7;
        if (*(int *)((longlong)plVar7 + 0x34) == 0) {
          puVar8 = *(undefined8 **)(param_1 + 0x7740);
          *puVar8 = uVar17;
          puVar8[1] = lVar13;
          *(int *)(puVar8 + 2) = iVar19;
          *(uint *)((longlong)puVar8 + 0x14) = uVar3;
LAB_1468ab394:
          lVar13 = *(longlong *)(param_1 + 0x7748);
          lVar12 = *(longlong *)(param_1 + 0x7740) + 0x18;
          *(longlong *)(param_1 + 0x7740) = lVar12;
          if (lVar12 == lVar13 + 0xfc0) {
            lVar12 = FUN_1400305d2(&DAT_14c949ec0);
            *(longlong *)(local_e8 + 0x7748) = lVar12;
            *(longlong *)(lVar12 + 0xff0) = lVar13;
            *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
            param_1 = local_e8;
          }
        }
        else {
          uVar4 = *(uint *)(plVar7 + 1);
          if (uVar4 != 0) {
            uVar20 = 0;
            iVar19 = 0;
            local_d8 = puVar22;
            local_d0 = uVar17;
            do {
              plVar10 = (longlong *)plVar7[4];
              if ((longlong *)plVar7[4] == (longlong *)0x0) {
                plVar10 = plVar7 + 2;
              }
              uVar15 = uVar20 + 0x1f;
              if (-1 < (int)uVar20) {
                uVar15 = uVar20;
              }
              if ((*(uint *)((longlong)plVar10 + (longlong)((int)uVar15 >> 5) * 4) >>
                   (uVar20 & 0x1f) & 1) == 0) {
                if (0 < iVar19) {
                  puVar22 = *(undefined8 **)(param_1 + 0x7740);
                  *puVar22 = uVar17;
                  puVar22[1] = lVar13;
                  *(int *)(puVar22 + 2) = iVar19;
                  *(uint *)((longlong)puVar22 + 0x14) = uVar3;
                  lVar12 = *(longlong *)(param_1 + 0x7748);
                  lVar11 = *(longlong *)(param_1 + 0x7740) + 0x18;
                  *(longlong *)(param_1 + 0x7740) = lVar11;
                  if (lVar11 == lVar12 + 0xfc0) {
                    lVar11 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(param_1 + 0x7750));
                    *(longlong *)(local_e8 + 0x7748) = lVar11;
                    *(longlong *)(lVar11 + 0xff0) = lVar12;
                    *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
                    uVar17 = local_d0;
                    param_1 = local_e8;
                  }
                  lVar13 = lVar13 + (ulonglong)(iVar19 * uVar3);
                  iVar19 = 0;
                }
                lVar13 = lVar13 + (ulonglong)uVar3;
              }
              else {
                iVar19 = iVar19 + 1;
              }
              uVar20 = uVar20 + 1;
            } while (uVar4 != uVar20);
            puVar22 = local_d8;
            puVar24 = local_e0;
            if (0 < iVar19) {
              puVar8 = *(undefined8 **)(param_1 + 0x7740);
              *puVar8 = uVar17;
              puVar8[1] = lVar13;
              *(int *)(puVar8 + 2) = iVar19;
              *(uint *)((longlong)puVar8 + 0x14) = uVar3;
              goto LAB_1468ab394;
            }
          }
        }
      }
      puVar22 = puVar22 + 3;
    } while (puVar22 != puVar24);
    *(undefined4 *)(param_1 + 0x70c0) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x7400);
  lVar13 = param_1;
  if ((ulonglong)uVar3 != 0) {
    piVar16 = (int *)(param_1 + 0x7418);
    puVar25 = local_c8;
    uVar18 = 0;
    do {
      iVar19 = *piVar16;
      *puVar25 = (uint)uVar18;
      puVar25 = puVar25 + (0 < iVar19);
      uVar18 = uVar18 + 1;
      piVar16 = piVar16 + 6;
    } while (uVar3 != uVar18);
    puVar21 = local_c8;
    if (puVar21 != puVar25) {
      do {
        puVar26 = *(ulonglong **)(lVar13 + 0x7740);
        lVar12 = *(longlong *)(lVar13 + 0x7748);
        puVar1 = (ulonglong *)(lVar12 + 0xfc0);
        puVar2 = puVar21 + (int)((ulonglong)((longlong)puVar1 - (longlong)puVar26) >> 3) *
                           -0x55555555;
        puVar23 = puVar25;
        if (puVar2 < puVar25) {
          puVar23 = puVar2;
        }
        *(ulonglong **)(lVar13 + 0x7740) =
             puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3;
        if (puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3
            == puVar1) {
          lVar13 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(lVar13 + 0x7750));
          *(longlong *)(local_e8 + 0x7748) = lVar13;
          *(longlong *)(lVar13 + 0xff0) = lVar12;
          *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
          lVar13 = local_e8;
        }
        do {
          uVar14 = (ulonglong)*puVar21;
          puVar21 = puVar21 + 1;
          uVar18 = *(ulonglong *)(param_1 + 0x7408 + uVar14 * 0x18);
          uVar9 = *(ulonglong *)(param_1 + 0x7410 + uVar14 * 0x18);
          uVar5 = *(undefined4 *)(param_1 + 0x7418 + uVar14 * 0x18);
          uVar6 = *(undefined4 *)((uVar18 & 0xfffffffffffffffe) - 8);
          *puVar26 = uVar18;
          puVar26[1] = uVar9;
          *(undefined4 *)(puVar26 + 2) = uVar5;
          *(undefined4 *)((longlong)puVar26 + 0x14) = uVar6;
          puVar26 = puVar26 + 3;
        } while (puVar21 != puVar23);
        puVar21 = puVar2;
      } while (puVar2 < puVar25);
    }
    *(undefined4 *)(lVar13 + 0x7400) = 0;
  }
  iVar19 = (int)((ulonglong)(*(longlong *)(lVar13 + 0x7740) - *(longlong *)(lVar13 + 0x7748)) >> 3)
           * -0x55555555;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)iVar19 >> 8),
                  *(longlong *)(*(longlong *)(lVar13 + 0x7748) + 0xff0) != 0 || 0 < iVar19);
}



// FUNCTION 1468ab590 FUN_1468ab590 body=3931 status=ok
// SIG undefined FUN_1468ab590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468ab590(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint *puVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_54c8 [32];
  longlong *local_54a8;
  longlong local_54a0;
  uint local_5498 [2];
  undefined8 local_5490;
  undefined1 local_1498 [768];
  undefined4 auStack_1198 [64];
  uint auStack_1098 [1026];
  ulonglong local_90;
  
  auVar3 = _DAT_149931e80;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_54c8;
  local_54a8 = (longlong *)(param_1 + 0x40);
  lVar7 = (longlong)*(int *)(param_1 + 0x80);
  if (lVar7 != 0) {
    plVar12 = (longlong *)(param_1 + 0x88);
    lVar11 = 0;
    do {
      lVar11 = lVar11 + 8;
    } while (lVar7 * 8 != lVar11);
    auVar32 = pmovsxbq(unaff_XMM6,0x800);
    auVar33 = pmovsxbq(unaff_XMM7,0x100);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        lVar11 = *(longlong *)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x400);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          lVar8 = uVar22 * 8 + lVar11;
LAB_1468ab68d:
          uVar22 = (lVar8 - lVar11) - 8;
          auVar25._8_4_ = (int)uVar22;
          auVar25._0_8_ = uVar22;
          auVar25._12_4_ = (int)(uVar22 >> 0x20);
          auVar26._0_8_ = uVar22 >> 3;
          auVar26._8_8_ = auVar25._8_8_ >> 3;
          lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
          uVar17 = 0;
          do {
            auVar28._8_4_ = (int)lVar11;
            auVar28._0_8_ = lVar11;
            auVar28._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
            if ((bool)(~(SUB168(auVar26 | auVar3,0) < (longlong)(uVar17 ^ auVar3._0_8_)) & 1)) {
              *(longlong *)(lVar8 + -8 + uVar17 * 8) = lVar11 + auVar32._0_8_;
            }
            auVar30._8_4_ = (int)uVar17;
            auVar30._0_8_ = uVar17;
            auVar30._12_4_ = (int)(uVar17 >> 0x20);
            if ((longlong)((auVar30._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                SUB168(auVar26 | auVar3,8)) {
              *(longlong *)(lVar8 + uVar17 * 8) = auVar28._8_8_ + auVar32._8_8_;
            }
            uVar17 = uVar17 + 2;
            lVar11 = lVar11 + 0x10;
          } while (((uVar22 >> 3) + 2 & 0xfffffffffffffffe) != uVar17);
          uVar19 = *(uint *)(param_1 + 0x400);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x400);
            if (uVar4 != 0) {
              uVar17 = (longlong)(int)uVar4 + 0x1fffffffffffffff;
              uVar13 = uVar17 & 0x1fffffffffffffff;
              auVar27._8_4_ = (int)uVar13;
              auVar27._0_8_ = uVar13;
              auVar27._12_4_ = (int)(uVar13 >> 0x20);
              lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
              uVar18 = 0;
              lVar20 = lVar11;
              do {
                auVar29._8_4_ = (int)lVar20;
                auVar29._0_8_ = lVar20;
                auVar29._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
                if ((bool)(~(SUB168(auVar27 | auVar3,0) < (longlong)(uVar18 ^ auVar3._0_8_)) & 1)) {
                  *(longlong *)(lVar8 + -8 + uVar18 * 8) = lVar20 + auVar32._0_8_;
                }
                auVar31._8_4_ = (int)uVar18;
                auVar31._0_8_ = uVar18;
                auVar31._12_4_ = (int)(uVar18 >> 0x20);
                if ((longlong)((auVar31._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                    SUB168(auVar27 | auVar3,8)) {
                  *(longlong *)(lVar8 + uVar18 * 8) = auVar29._8_8_ + auVar32._8_8_;
                }
                uVar18 = uVar18 + 2;
                lVar20 = lVar20 + 0x10;
              } while ((uVar13 - ((uint)uVar17 & 1)) + 2 != uVar18);
              uVar19 = *(uint *)(param_1 + 0x400);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            lVar11 = lVar11 + (longlong)(int)uVar4 * 8;
            *(uint *)(param_1 + 0x400) = uVar19 + uVar4;
            FUN_1468aa034(local_54a8);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x400);
          if (uVar6 != 0) {
            lVar8 = (ulonglong)uVar6 * 8 + lVar11;
            goto LAB_1468ab68d;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x400) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar7 * 8 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  uVar6 = *(uint *)(param_1 + 0x1c0);
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x1c8 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x1d2 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x1d0 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x400);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x400);
            if (uVar10 != 0) {
              plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *plVar12 = lVar11 + lVar7;
                plVar12 = plVar12 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x400);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x400) = uVar21 + uVar5;
            FUN_1468aa034(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        if (uVar4 * uVar19 != 0) {
          plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *plVar12 = lVar11 + lVar7;
            plVar12 = plVar12 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        *(uint *)(param_1 + 0x400) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x400);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x50) <=
                        (ulonglong)
                        (**(longlong **)(param_1 + 0x408 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x48))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(**(longlong **)(param_1 + 0x408 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x540);
  uVar4 = 0x400 - uVar6;
  uVar19 = (uint)uVar22;
  if (uVar4 <= uVar19) {
    uVar17 = 0;
    do {
      uVar19 = *(uint *)(param_1 + 0x540);
      uVar6 = uVar19 + uVar4;
      for (; uVar19 < uVar6; uVar19 = uVar19 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
        *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar19 * 0x10) = *puVar16;
        *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar19 * 0x10) = puVar16;
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x540) = uVar6;
      FUN_1468aa178();
      uVar19 = (int)uVar22 - uVar4;
      uVar22 = (ulonglong)uVar19;
      uVar4 = 0x400;
    } while (0x3ff < uVar19);
    uVar6 = *(uint *)(param_1 + 0x540);
  }
  uVar19 = uVar19 + uVar6;
  if (uVar6 < uVar19) {
    do {
      puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
      *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar6 * 0x10) = *puVar16;
      *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar6 * 0x10) = puVar16;
      uVar6 = uVar6 + ((uVar13 >> (uVar17 & 0x3f) & 1) != 0);
      uVar17 = (ulonglong)((int)uVar17 + 1);
    } while (uVar6 < uVar19);
  }
  *(uint *)(param_1 + 0x540) = uVar19;
  *(undefined4 *)(param_1 + 0x400) = 0;
  if (uVar19 < 0x41) {
    if (uVar19 != 0) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while ((ulonglong)uVar19 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)auStack_1098 + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x548 + lVar7 * 4) + 0xc);
        lVar7 = lVar7 + 4;
      } while ((ulonglong)uVar19 << 2 != lVar7);
      goto LAB_1468abba0;
    }
  }
  else {
    plVar12 = (longlong *)(param_1 + 0x548);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x400);
    lVar7 = 0x40;
    do {
      auStack_1198[lVar7] = *(undefined4 *)(*plVar12 + 0xc);
      lVar11 = lVar7 - (ulonglong)uVar19;
      lVar7 = lVar7 + 1;
      plVar12 = plVar12 + 2;
    } while (lVar11 != 0x3f);
LAB_1468abba0:
    if (uVar19 != 0) {
      uVar22 = (ulonglong)uVar19;
      lVar7 = 0;
      do {
        *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
             (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
             *(longlong *)
              (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
        lVar7 = lVar7 + 4;
      } while (uVar22 * 4 - lVar7 != 0);
      if (uVar19 < 0x41) {
        lVar7 = 0;
        do {
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
        lVar7 = 0;
        do {
          *(undefined4 *)((longlong)local_5498 + lVar7) =
               *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
      }
      else {
        lVar7 = 0;
        memset(local_1498,0,0x400);
        do {
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != 0x400);
        lVar7 = 0x40;
        plVar12 = &local_5490;
        do {
          *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
          lVar11 = lVar7 - uVar22;
          lVar7 = lVar7 + 1;
          plVar12 = plVar12 + 2;
        } while (lVar11 != 0x3f);
      }
      uVar17 = 0;
      do {
        uVar19 = DAT_14c75ec9c;
        uVar6 = local_5498[uVar17 * 4];
        if ((uVar6 >> 0x15 & 1) == 0) {
          lVar7 = (&local_5490)[uVar17 * 2];
          uVar2 = *(undefined8 *)(param_1 + 0x548 + uVar17 * 0x10);
          lVar11 = *local_54a8;
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468abd56:
            uVar19 = *(uint *)(lVar7 + 0xc);
            if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
              lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
              do {
                uVar6 = *(uint *)(lVar7 + 8);
                if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468abd45;
                LOCK();
                bVar24 = uVar6 == *(uint *)(lVar7 + 8);
                if (bVar24) {
                  *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
                }
                uVar6 = DAT_14c75ec9c;
                UNLOCK();
              } while (!bVar24);
              if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
                uVar4 = ~DAT_14c75ec9c;
                uVar19 = *(uint *)(lVar8 + 8);
                do {
                  LOCK();
                  uVar21 = *(uint *)(lVar8 + 8);
                  bVar24 = uVar19 == uVar21;
                  if (bVar24) {
                    *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                    uVar21 = uVar19;
                  }
                  uVar19 = uVar21;
                  UNLOCK();
                } while (!bVar24);
                LOCK();
                *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
                UNLOCK();
                if ((uVar19 & uVar6) != 0) goto LAB_1468abdf8;
              }
            }
          }
          else {
            uVar21 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar5 = *(uint *)(lVar7 + 8);
              bVar24 = uVar4 == uVar5;
              if (bVar24) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar21;
                uVar5 = uVar4;
              }
              uVar4 = uVar5;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar19) == 0) goto LAB_1468abd56;
            if ((uVar6 >> 0x18 & 1) == 0) {
              **(undefined8 **)(lVar11 + 0x18) = uVar2;
              lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
              *(longlong *)(lVar11 + 0x18) = lVar7;
              if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
                FUN_1400318c8();
              }
              goto LAB_1468abd45;
            }
LAB_1468abdf8:
            local_54a0 = lVar11 + 0x18;
            FUN_1427ed0f8();
          }
        }
        else {
          **(undefined8 **)(uVar17 * 0x10 + param_1 + 0x548 + 8) = 0;
        }
LAB_1468abd45:
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar22);
    }
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  lVar7 = param_1 + 0x4980;
  lVar11 = (longlong)*(int *)(param_1 + 0x49c0);
  if (lVar11 != 0) {
    plVar12 = (longlong *)(param_1 + 0x49c8);
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 8;
    } while (lVar11 * 8 != lVar8);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        puVar16 = *(undefined8 **)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x4d40);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          puVar15 = puVar16 + uVar22;
LAB_1468abe84:
          puVar9 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8);
          do {
            *puVar9 = *puVar16;
            puVar9 = puVar9 + 1;
            puVar16 = puVar16 + 1;
          } while (puVar16 != puVar15);
          uVar19 = *(uint *)(param_1 + 0x4d40);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x4d40);
            if (uVar4 != 0) {
              lVar8 = 0;
              do {
                *(undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8 + lVar8) =
                     *(undefined8 *)((longlong)puVar16 + lVar8);
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)uVar4 * 8 - lVar8 != 0);
              uVar19 = *(uint *)(param_1 + 0x4d40);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            puVar16 = puVar16 + (int)uVar4;
            *(uint *)(param_1 + 0x4d40) = uVar19 + uVar4;
            FUN_1468aa414(lVar7);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x4d40);
          if (uVar6 != 0) {
            puVar15 = puVar16 + uVar6;
            goto LAB_1468abe84;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x4d40) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar11 * 8 + 0x49c8));
  }
  *(undefined4 *)(param_1 + 0x49c0) = 0;
  uVar6 = *(uint *)(param_1 + 0x4b00);
  local_54a8 = (longlong *)lVar7;
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x4b08 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x4b12 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x4b10 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x4d40);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x4d40);
            if (uVar10 != 0) {
              puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *puVar16 = *(undefined8 *)(lVar7 + lVar11);
                puVar16 = puVar16 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x4d40);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x4d40) = uVar21 + uVar5;
            FUN_1468aa414(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        if (uVar4 * uVar19 != 0) {
          puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *puVar16 = *(undefined8 *)(lVar7 + lVar11);
            puVar16 = puVar16 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        *(uint *)(param_1 + 0x4d40) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x4b00) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x4d40);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x4990) <=
                        (ulonglong)
                        (*(longlong *)(param_1 + 0x4d48 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x4988))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(*(longlong *)(param_1 + 0x4d48 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x4e80);
  uVar19 = 0x400 - uVar6;
  uVar4 = (uint)uVar22;
  if (uVar19 <= uVar4) {
    uVar17 = 0;
    do {
      uVar4 = *(uint *)(param_1 + 0x4e80);
      uVar6 = uVar4 + uVar19;
      for (; uVar4 < uVar6; uVar4 = uVar4 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar4 * 8) =
             *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x4e80) = uVar6;
      FUN_1468aa608();
      uVar4 = (int)uVar22 - uVar19;
      uVar22 = (ulonglong)uVar4;
      uVar19 = 0x400;
    } while (0x3ff < uVar4);
    uVar6 = *(uint *)(param_1 + 0x4e80);
  }
  uVar4 = uVar4 + uVar6;
  for (; uVar6 < uVar4; uVar6 = uVar6 + ((uVar13 >> uVar22 & 1) != 0)) {
    uVar22 = uVar17 & 0x3f;
    *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar6 * 8) =
         *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
    uVar17 = (ulonglong)((int)uVar17 + 1);
  }
  *(uint *)(param_1 + 0x4e80) = uVar4;
  *(undefined4 *)(param_1 + 0x4d40) = 0;
  if (uVar4 < 0x41) {
    if (uVar4 == 0) goto LAB_1468ac492;
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  else {
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x40);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  if (uVar4 != 0) {
    uVar22 = (ulonglong)uVar4;
    lVar7 = 0;
    do {
      *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
           (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
           *(longlong *)
            (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
      lVar7 = lVar7 + 4;
    } while (uVar22 * 4 - lVar7 != 0);
    if (uVar4 < 0x41) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)local_5498 + lVar7) =
             *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
    }
    else {
      lVar7 = 0;
      memset(local_1498,0,0x400);
      do {
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x400);
      lVar7 = 0x40;
      plVar12 = &local_5490;
      do {
        *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
        lVar11 = lVar7 - uVar22;
        lVar7 = lVar7 + 1;
        plVar12 = plVar12 + 2;
      } while (lVar11 != 0x3f);
    }
    uVar17 = 0;
    do {
      uVar19 = DAT_14c75ec9c;
      uVar6 = local_5498[uVar17 * 4];
      lVar7 = (&local_5490)[uVar17 * 2];
      uVar2 = *(undefined8 *)(param_1 + 0x4e88 + uVar17 * 8);
      lVar11 = *(longlong *)(param_1 + 0x4980);
      if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468ac3d6:
        uVar19 = *(uint *)(lVar7 + 0xc);
        if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
          lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
          do {
            uVar6 = *(uint *)(lVar7 + 8);
            if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468ac3ec;
            LOCK();
            bVar24 = uVar6 == *(uint *)(lVar7 + 8);
            if (bVar24) {
              *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
            }
            uVar6 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar24);
          if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
            uVar4 = ~DAT_14c75ec9c;
            uVar19 = *(uint *)(lVar8 + 8);
            do {
              LOCK();
              uVar21 = *(uint *)(lVar8 + 8);
              bVar24 = uVar19 == uVar21;
              if (bVar24) {
                *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                uVar21 = uVar19;
              }
              uVar19 = uVar21;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar19 & uVar6) != 0) {
              uVar6 = *(uint *)(lVar8 + 0xc);
              goto LAB_1468ac485;
            }
          }
        }
      }
      else {
        uVar21 = ~DAT_14c75ec9c;
        uVar4 = *(uint *)(lVar7 + 8);
        do {
          LOCK();
          uVar5 = *(uint *)(lVar7 + 8);
          bVar24 = uVar4 == uVar5;
          if (bVar24) {
            *(uint *)(lVar7 + 8) = uVar4 & uVar21;
            uVar5 = uVar4;
          }
          uVar4 = uVar5;
          UNLOCK();
        } while (!bVar24);
        LOCK();
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar4 & uVar19) == 0) goto LAB_1468ac3d6;
        if ((uVar6 >> 0x18 & 1) == 0) {
          **(undefined8 **)(lVar11 + 0x18) = uVar2;
          lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
          *(longlong *)(lVar11 + 0x18) = lVar7;
          if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
            FUN_1400318c8();
          }
        }
        else {
          uVar6 = *(uint *)(lVar7 + 0xc);
LAB_1468ac485:
          local_54a0 = lVar11 + 0x18;
          FUN_1427ed0f8(~uVar6,&local_54a0);
        }
      }
LAB_1468ac3ec:
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar22);
  }
LAB_1468ac492:
  *(undefined4 *)(param_1 + 0x4e80) = 0;
  if ((local_90 ^ (ulonglong)auStack_54c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468ac4ec FUN_1468ac4ec body=123 status=ok
// SIG undefined FUN_1468ac4ec(void)

void FUN_1468ac4ec(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = param_1[0xef1];
  if (lVar2 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0xef2);
    uVar1 = (&DAT_14c949f00)[lVar4 * 0x50];
    if ((ulonglong)uVar1 < 0x20) {
      (&DAT_14c949f00)[lVar4 * 0x50] = uVar1 + 1;
      *(longlong *)(&DAT_14c949f08 + (ulonglong)uVar1 * 8 + lVar4 * 0x140) = lVar2;
    }
    else {
      FUN_1400020a8();
    }
  }
  *param_1 = &PTR_LAB_149eb0140;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001468ac564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1);
  return;
}



// FUNCTION 1468ac568 FUN_1468ac568 body=319 status=ok
// SIG undefined FUN_1468ac568(void)

undefined8 * FUN_1468ac568(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = DAT_14c846240;
  param_1[1] = DAT_14c846240;
  uVar2 = DAT_14c846248;
  param_1[2] = DAT_14c846248;
  param_1[3] = param_3;
  param_1[8] = param_2;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x11,0,0x100);
  *(undefined4 *)(param_1 + 0x38) = 0;
  memset(param_1 + 0x39,0,0x200);
  *(undefined4 *)(param_1 + 0x80) = 0;
  memset(param_1 + 0x81,0,0x100);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  memset(param_1 + 0xa9,0,0x4400);
  param_1[0x930] = param_2;
  param_1[0x931] = uVar1;
  param_1[0x932] = uVar2;
  *(undefined4 *)(param_1 + 0x938) = 0;
  memset(param_1 + 0x939,0,0x100);
  *(undefined4 *)(param_1 + 0x960) = 0;
  memset(param_1 + 0x961,0,0x200);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  memset(param_1 + 0x9a9,0,0x100);
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  memset(param_1 + 0x9d1,0,0x2200);
  FUN_141716662(param_1 + 0xe18,param_2);
  return param_1;
}



// FUNCTION 1468ac6a8 FUN_1468ac6a8 body=38 status=ok
// SIG undefined FUN_1468ac6a8(void)

undefined8 FUN_1468ac6a8(undefined8 param_1,int param_2)

{
  FUN_1468ac4ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468ac84a FUN_1468ac84a body=566 status=ok
// SIG undefined FUN_1468ac84a(void)

void FUN_1468ac84a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    iStack_64 = iStack_44;
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar3 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar3;
        if (iVar5 == 0x20) {
          FUN_1468ad164(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar4 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar4 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_1468acd84(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468aca82 FUN_1468aca82 body=566 status=ok
// SIG undefined FUN_1468aca82(void)

void FUN_1468aca82(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    iStack_64 = iStack_44;
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar3 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar3;
        if (iVar5 == 0x20) {
          FUN_1468ad164(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar4 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar4 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_1468acd84(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468accca FUN_1468accca body=90 status=ok
// SIG undefined FUN_1468accca(void)

undefined8 FUN_1468accca(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar3 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x58);
  lVar4 = (longlong)iVar1;
  *(uint *)(lVar2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x5c) < iVar1 + 1U) {
    FUN_140fefdba((longlong *)(lVar2 + 0x50),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + lVar4 * 0x18) = uVar3;
  *(undefined8 **)(lVar2 + 8 + lVar4 * 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x18) = param_3;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 1468acd3e FUN_1468acd3e body=69 status=ok
// SIG undefined FUN_1468acd3e(void)

void FUN_1468acd3e(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x10);
    lVar2 = (longlong)param_3 << 3;
    do {
      FUN_1468ad97e(param_1 + 0x40,param_2,uVar1);
      param_2 = param_2 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1468acd84 FUN_1468acd84 body=324 status=ok
// SIG undefined FUN_1468acd84(void)

void FUN_1468acd84(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar6 = 0;
  uVar4 = 0;
  do {
    uVar4 = uVar4 | (ulonglong)
                    (*(ulonglong *)(param_1 + 0x10) <=
                    (ulonglong)
                    (**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) - *(longlong *)(param_1 + 8))) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  lVar6 = 0;
  uVar7 = 0;
  do {
    uVar7 = uVar7 | (ulonglong)(**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) != 0) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  uVar7 = uVar7 & uVar4;
  uVar4 = POPCOUNT(uVar7);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar9 = 0x400 - uVar3;
  uVar8 = 0;
  uVar5 = (uint)uVar4;
  if (uVar9 <= uVar5) {
    uVar8 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar9;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar7 >> uVar2 & 1) != 0)) {
        uVar2 = uVar8 & 0x3f;
        puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 0x10) = *puVar1;
        *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar5 * 0x10) = puVar1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_1468acec8(param_1);
      uVar5 = (int)uVar4 - uVar9;
      uVar4 = (ulonglong)uVar5;
      uVar9 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  if (uVar3 < uVar5) {
    do {
      puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
      *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 0x10) = *puVar1;
      *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar3 * 0x10) = puVar1;
      uVar3 = uVar3 + ((uVar7 >> (uVar8 & 0x3f) & 1) != 0);
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (uVar3 < uVar5);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1468acec8 FUN_1468acec8 body=667 status=ok
// SIG undefined FUN_1468acec8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468acec8(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [446];
  undefined4 auStack_127a [144];
  undefined1 auStack_103a [4098];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0x508;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x908);
  lVar5 = 0x242;
  do {
    *(undefined4 *)((longlong)auStack_127a + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)param_1 + lVar5 * 4 + -0x400) + 0xc);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1242);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    if ((uVar2 >> 0x15 & 1) == 0) {
      lVar6 = alStack_5430[lVar5 * 2];
      lVar7 = param_1[lVar5 * 2 + 0xa1];
      lVar3 = *param_1;
      if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468ad081:
        uVar4 = *(uint *)(lVar6 + 0xc);
        if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
          lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          do {
            uVar2 = *(uint *)(lVar6 + 8);
            if ((uVar2 >> 0x17 & 1) != 0) goto LAB_1468ad06c;
            LOCK();
            bVar10 = uVar2 == *(uint *)(lVar6 + 8);
            if (bVar10) {
              *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
            }
            uVar2 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar10);
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
            uVar8 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar9 = *(uint *)(lVar7 + 8);
              bVar10 = uVar4 == uVar9;
              if (bVar10) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar8;
                uVar9 = uVar4;
              }
              uVar4 = uVar9;
              UNLOCK();
            } while (!bVar10);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar2) != 0) {
              uVar2 = *(uint *)(lVar7 + 0xc);
              goto LAB_1468ad123;
            }
          }
        }
      }
      else {
        uVar9 = ~DAT_14c75ec9c;
        uVar8 = *(uint *)(lVar6 + 8);
        do {
          LOCK();
          uVar1 = *(uint *)(lVar6 + 8);
          bVar10 = uVar8 == uVar1;
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar8 & uVar9;
            uVar1 = uVar8;
          }
          uVar8 = uVar1;
          UNLOCK();
        } while (!bVar10);
        LOCK();
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar8 & uVar4) == 0) goto LAB_1468ad081;
        if ((uVar2 >> 0x18 & 1) == 0) {
          **(longlong **)(lVar3 + 0x18) = lVar7;
          lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
          *(longlong *)(lVar3 + 0x18) = lVar6;
          if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
            FUN_141715f94();
          }
          goto LAB_1468ad06c;
        }
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_1468ad123:
        local_5440 = lVar3 + 0x18;
        FUN_1427edfe9(~uVar2,&local_5440);
      }
    }
    else {
      *(undefined8 *)param_1[lVar5 * 2 + 0xa2] = 0;
    }
LAB_1468ad06c:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_38 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1468ad164 FUN_1468ad164 body=500 status=ok
// SIG undefined FUN_1468ad164(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468ad164(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lVar17;
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lVar22;
  longlong lVar25;
  longlong lVar29;
  
  lVar6 = *(longlong *)(param_1 + 8);
  auVar16._8_4_ = (int)lVar6;
  auVar16._0_8_ = lVar6;
  auVar16._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar7;
  auVar21._8_4_ = (int)uVar7;
  auVar21._0_8_ = uVar7;
  auVar21._12_4_ = (int)(uVar7 >> 0x20);
  auVar13 = (undefined1  [16])0x0;
  auVar18 = pmovsxbq(in_XMM5,0x100);
  lVar4 = 0x79;
  auVar11 = pmovsxbq(auVar11,0x101);
  auVar12 = pmovsxbq(in_XMM1,0x202);
  do {
    plVar1 = (longlong *)(param_1 + lVar4 * 8);
    auVar23._0_8_ = *plVar1 - lVar6;
    auVar23._8_8_ = plVar1[1] - auVar16._8_8_;
    auVar26._0_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,0) < SUB168(auVar21 ^ _DAT_149931e80,0));
    auVar26._8_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,8) < SUB168(auVar21 ^ _DAT_149931e80,8));
    lVar22 = auVar18._8_8_;
    lVar25 = SUB168(~auVar26 & auVar11,0);
    lVar29 = SUB168(~auVar26 & auVar11,8);
    auVar28._0_8_ = lVar25 << lVar22;
    auVar28._8_8_ = lVar29 << lVar22;
    lVar17 = auVar18._0_8_;
    auVar27._0_8_ = lVar25 << lVar17;
    auVar27._8_8_ = lVar29 << lVar17;
    auVar18 = pblendw(auVar27,auVar28,0xf0);
    auVar13 = auVar13 | auVar18;
    auVar18._0_8_ = lVar17 + auVar12._0_8_;
    auVar18._8_8_ = lVar22 + auVar12._8_8_;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0x99);
  auVar14._0_8_ = auVar13._8_8_;
  auVar14._8_4_ = auVar13._8_4_;
  auVar14._12_4_ = auVar13._12_4_;
  auVar15 = pmovsxbq(auVar14 | auVar13,0x100);
  lVar6 = 0x79;
  auVar16 = (undefined1  [16])0x0;
  do {
    plVar1 = (longlong *)(param_1 + lVar6 * 8);
    auVar19._0_8_ = -(ulonglong)(*plVar1 == 0);
    auVar19._8_8_ = -(ulonglong)(plVar1[1] == 0);
    lVar17 = auVar15._8_8_;
    lVar22 = SUB168(~auVar19 & auVar11,0);
    lVar25 = SUB168(~auVar19 & auVar11,8);
    auVar24._0_8_ = lVar22 << lVar17;
    auVar24._8_8_ = lVar25 << lVar17;
    lVar4 = auVar15._0_8_;
    auVar20._0_8_ = lVar22 << lVar4;
    auVar20._8_8_ = lVar25 << lVar4;
    auVar21 = pblendw(auVar20,auVar24,0xf0);
    auVar16 = auVar16 | auVar21;
    auVar15._0_8_ = lVar4 + auVar12._0_8_;
    auVar15._8_8_ = lVar17 + auVar12._8_8_;
    lVar6 = lVar6 + 2;
  } while (lVar6 != 0x99);
  uVar8 = (auVar16._8_8_ | auVar16._0_8_) & SUB168(auVar14 | auVar13,0);
  uVar7 = POPCOUNT(uVar8);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar10 = 0x400 - uVar3;
  uVar9 = 0;
  uVar5 = (uint)uVar7;
  if (uVar10 <= uVar5) {
    uVar9 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar10;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar8 >> uVar2 & 1) != 0)) {
        uVar2 = uVar9 & 0x3f;
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 8) =
             *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_1468ad358(param_1);
      uVar5 = (int)uVar7 - uVar10;
      uVar7 = (ulonglong)uVar5;
      uVar10 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  for (; uVar3 < uVar5; uVar3 = uVar3 + ((uVar8 >> uVar7 & 1) != 0)) {
    uVar7 = uVar9 & 0x3f;
    *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 8) =
         *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
    uVar9 = (ulonglong)((int)uVar9 + 1);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1468ad358 FUN_1468ad358 body=632 status=ok
// SIG undefined FUN_1468ad358(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468ad358(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [124];
  undefined4 auStack_13bc [224];
  undefined1 auStack_103a [4106];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0xa1;
  do {
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xe1);
  lVar5 = 0xe1;
  do {
    auStack_13bc[lVar5] = *(undefined4 *)(param_1[lVar5 + -0x40] + 0xc);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x4e1);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    lVar6 = alStack_5430[lVar5 * 2];
    lVar7 = param_1[lVar5 + 0xa1];
    lVar3 = *param_1;
    if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468ad4df:
      uVar4 = *(uint *)(lVar6 + 0xc);
      if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
        lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        do {
          uVar2 = *(uint *)(lVar6 + 8);
          if ((uVar2 >> 0x17 & 1) != 0) goto LAB_1468ad4f5;
          LOCK();
          bVar10 = uVar2 == *(uint *)(lVar6 + 8);
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
          }
          uVar2 = DAT_14c75ec9c;
          UNLOCK();
        } while (!bVar10);
        if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
          uVar8 = ~DAT_14c75ec9c;
          uVar4 = *(uint *)(lVar7 + 8);
          do {
            LOCK();
            uVar9 = *(uint *)(lVar7 + 8);
            bVar10 = uVar4 == uVar9;
            if (bVar10) {
              *(uint *)(lVar7 + 8) = uVar4 & uVar8;
              uVar9 = uVar4;
            }
            uVar4 = uVar9;
            UNLOCK();
          } while (!bVar10);
          LOCK();
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar4 & uVar2) != 0) {
            uVar2 = *(uint *)(lVar7 + 0xc);
            goto LAB_1468ad592;
          }
        }
      }
    }
    else {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar6 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar6 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar6 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar4) == 0) goto LAB_1468ad4df;
      if ((uVar2 >> 0x18 & 1) == 0) {
        **(longlong **)(lVar3 + 0x18) = lVar7;
        lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
        *(longlong *)(lVar3 + 0x18) = lVar6;
        if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
          FUN_141715f94();
        }
      }
      else {
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_1468ad592:
        local_5440 = lVar3 + 0x18;
        FUN_1427edfe9(~uVar2,&local_5440);
      }
    }
LAB_1468ad4f5:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_30 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1468ad5d2 FUN_1468ad5d2 body=657 status=ok
// SIG undefined FUN_1468ad5d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468ad5d2(longlong param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar21 [16];
  
  auVar1 = _DAT_149931e80;
  lVar3 = 0x48;
  do {
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x148);
  lVar3 = 0x48;
  auVar20 = pmovsxbq(unaff_XMM6,0x800);
  auVar21 = pmovsxbq(unaff_XMM7,0x100);
  do {
    uVar11 = *(uint *)(*(longlong **)(param_1 + lVar3) + 1);
    uVar12 = (ulonglong)(int)uVar11;
    if (uVar12 != 0) {
      lVar10 = **(longlong **)(param_1 + lVar3);
      uVar5 = *(uint *)(param_1 + 0x3c0);
      uVar2 = 0x20 - uVar5;
      if (uVar11 < uVar2) {
        lVar4 = lVar10 + uVar12 * 8;
LAB_1468ad679:
        uVar12 = (lVar4 - lVar10) - 8;
        auVar13._8_4_ = (int)uVar12;
        auVar13._0_8_ = uVar12;
        auVar13._12_4_ = (int)(uVar12 >> 0x20);
        auVar14._0_8_ = uVar12 >> 3;
        auVar14._8_8_ = auVar13._8_8_ >> 3;
        lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
        uVar6 = 0;
        do {
          auVar16._8_4_ = (int)lVar10;
          auVar16._0_8_ = lVar10;
          auVar16._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
          if ((bool)(~(SUB168(auVar14 | auVar1,0) < (longlong)(uVar6 ^ auVar1._0_8_)) & 1)) {
            *(longlong *)(lVar4 + -8 + uVar6 * 8) = lVar10 + auVar20._0_8_;
          }
          auVar18._8_4_ = (int)uVar6;
          auVar18._0_8_ = uVar6;
          auVar18._12_4_ = (int)(uVar6 >> 0x20);
          if ((longlong)((auVar18._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
              SUB168(auVar14 | auVar1,8)) {
            *(longlong *)(lVar4 + uVar6 * 8) = auVar16._8_8_ + auVar20._8_8_;
          }
          uVar6 = uVar6 + 2;
          lVar10 = lVar10 + 0x10;
        } while (((uVar12 >> 3) + 2 & 0xfffffffffffffffe) != uVar6);
        uVar5 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar5 = *(uint *)(param_1 + 0x3c0);
          if (uVar2 != 0) {
            uVar6 = (longlong)(int)uVar2 + 0x1fffffffffffffff;
            uVar7 = uVar6 & 0x1fffffffffffffff;
            auVar15._8_4_ = (int)uVar7;
            auVar15._0_8_ = uVar7;
            auVar15._12_4_ = (int)(uVar7 >> 0x20);
            lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
            uVar9 = 0;
            lVar8 = lVar10;
            do {
              auVar17._8_4_ = (int)lVar8;
              auVar17._0_8_ = lVar8;
              auVar17._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
              if ((bool)(~(SUB168(auVar15 | auVar1,0) < (longlong)(uVar9 ^ auVar1._0_8_)) & 1)) {
                *(longlong *)(lVar4 + -8 + uVar9 * 8) = lVar8 + auVar20._0_8_;
              }
              auVar19._8_4_ = (int)uVar9;
              auVar19._0_8_ = uVar9;
              auVar19._12_4_ = (int)(uVar9 >> 0x20);
              if ((longlong)((auVar19._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
                  SUB168(auVar15 | auVar1,8)) {
                *(longlong *)(lVar4 + uVar9 * 8) = auVar17._8_8_ + auVar20._8_8_;
              }
              uVar9 = uVar9 + 2;
              lVar8 = lVar8 + 0x10;
            } while ((uVar7 - ((uint)uVar6 & 1)) + 2 != uVar9);
            uVar5 = *(uint *)(param_1 + 0x3c0);
          }
          uVar11 = (int)uVar12 - uVar2;
          uVar12 = (ulonglong)uVar11;
          lVar10 = lVar10 + (longlong)(int)uVar2 * 8;
          *(uint *)(param_1 + 0x3c0) = uVar5 + uVar2;
          FUN_1468acd84(param_1);
          uVar2 = 0x20;
        } while (0x1f < uVar11);
        uVar5 = *(uint *)(param_1 + 0x3c0);
        if (uVar11 != 0) {
          lVar4 = lVar10 + (ulonglong)uVar11 * 8;
          goto LAB_1468ad679;
        }
        uVar11 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar11 + uVar5;
    }
    lVar3 = lVar3 + 8;
    if (lVar3 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468ad864 FUN_1468ad864 body=282 status=ok
// SIG undefined FUN_1468ad864(void)

void FUN_1468ad864(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  lVar2 = 0x48;
  do {
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x148);
  lVar2 = 0x48;
  do {
    uVar7 = *(uint *)(*(longlong **)(param_1 + lVar2) + 1);
    uVar8 = (ulonglong)(int)uVar7;
    if (uVar8 != 0) {
      puVar9 = (undefined8 *)**(longlong **)(param_1 + lVar2);
      uVar1 = *(uint *)(param_1 + 0x3c0);
      uVar4 = 0x20 - uVar1;
      if (uVar7 < uVar4) {
        puVar5 = puVar9 + uVar8;
LAB_1468ad8bf:
        puVar3 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8);
        do {
          *puVar3 = *puVar9;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar5);
        uVar1 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar1 = *(uint *)(param_1 + 0x3c0);
          if (uVar4 != 0) {
            lVar6 = 0;
            do {
              *(undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8 + lVar6) =
                   *(undefined8 *)((longlong)puVar9 + lVar6);
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uVar4 * 8 - lVar6 != 0);
            uVar1 = *(uint *)(param_1 + 0x3c0);
          }
          uVar7 = (int)uVar8 - uVar4;
          uVar8 = (ulonglong)uVar7;
          puVar9 = puVar9 + (int)uVar4;
          *(uint *)(param_1 + 0x3c0) = uVar1 + uVar4;
          FUN_1468ad164(param_1);
          uVar4 = 0x20;
        } while (0x1f < uVar7);
        uVar1 = *(uint *)(param_1 + 0x3c0);
        if (uVar7 != 0) {
          puVar5 = puVar9 + uVar7;
          goto LAB_1468ad8bf;
        }
        uVar7 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar7 + uVar1;
    }
    lVar2 = lVar2 + 8;
    if (lVar2 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468ad97e FUN_1468ad97e body=669 status=ok
// SIG undefined FUN_1468ad97e(void)

void FUN_1468ad97e(longlong *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  uVar6 = DAT_14c75ec9c;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar5 = *param_2;
  lVar2 = *param_1;
  bVar10 = (ulonglong)(lVar5 - param_1[1]) < (ulonglong)param_1[2];
  if (param_3 == 0) {
    if (lVar5 == 0 || bVar10) goto LAB_1468adafd;
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8) +
            (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff) * 0x18;
    uVar4 = *(uint *)(lVar3 + 8);
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468adb1a:
      uVar6 = *(uint *)(lVar3 + 0xc);
      if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_1468adafd;
      lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      do {
        uVar6 = *(uint *)(lVar3 + 8);
        if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468adafd;
        LOCK();
        bVar10 = uVar6 == *(uint *)(lVar3 + 8);
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
        }
        uVar6 = DAT_14c75ec9c;
        UNLOCK();
      } while (!bVar10);
      if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_1468adafd;
      uVar8 = ~DAT_14c75ec9c;
      uVar4 = *(uint *)(lVar5 + 8);
      do {
        LOCK();
        uVar9 = *(uint *)(lVar5 + 8);
        bVar10 = uVar4 == uVar9;
        if (bVar10) {
          *(uint *)(lVar5 + 8) = uVar4 & uVar8;
          uVar9 = uVar4;
        }
        uVar4 = uVar9;
        UNLOCK();
      } while (!bVar10);
      goto LAB_1468adbff;
    }
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar3 + 8);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar3 + 8);
      bVar10 = uVar8 == uVar1;
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar8 & uVar9;
        uVar1 = uVar8;
      }
      uVar8 = uVar1;
      UNLOCK();
    } while (!bVar10);
    LOCK();
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar8 & uVar6) == 0) goto LAB_1468adb1a;
joined_r0x0001468adab5:
    if ((uVar4 >> 0x18 & 1) == 0) {
      **(longlong **)(lVar2 + 0x18) = lVar5;
      lVar5 = *(longlong *)(lVar2 + 0x18) + 8;
      *(longlong *)(lVar2 + 0x18) = lVar5;
      if (lVar5 == *(longlong *)(lVar2 + 0x20) + 0xf80) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
      }
      goto LAB_1468adafd;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
  }
  else {
    if (lVar5 == 0 || bVar10) goto LAB_1468adafd;
    uVar7 = (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff);
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8);
    uVar4 = *(uint *)(lVar3 + 8 + uVar7 * 0x18);
    if ((uVar4 >> 0x15 & 1) != 0) {
      *param_2 = 0;
      goto LAB_1468adafd;
    }
    lVar3 = lVar3 + uVar7 * 0x18;
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) != 0) {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar3 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar3 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar6) != 0) goto joined_r0x0001468adab5;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
    if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_1468adafd;
    lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    do {
      uVar6 = *(uint *)(lVar3 + 8);
      if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468adafd;
      LOCK();
      bVar10 = uVar6 == *(uint *)(lVar3 + 8);
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
      }
      uVar6 = DAT_14c75ec9c;
      UNLOCK();
    } while (!bVar10);
    if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_1468adafd;
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar5 + 8);
    do {
      LOCK();
      uVar4 = *(uint *)(lVar5 + 8);
      bVar10 = uVar8 == uVar4;
      if (bVar10) {
        *(uint *)(lVar5 + 8) = uVar8 & uVar9;
        uVar4 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar4;
    } while (!bVar10);
LAB_1468adbff:
    LOCK();
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar4 & uVar6) == 0) goto LAB_1468adafd;
    uVar6 = *(uint *)(lVar5 + 0xc);
  }
  local_18 = lVar2 + 0x18;
  FUN_1427edfe9(~uVar6);
LAB_1468adafd:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468adc2a FUN_1468adc2a body=403 status=ok
// SIG undefined FUN_1468adc2a(void)

void FUN_1468adc2a(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lStack_3da;
  uint auStack_3d2 [88];
  undefined *puStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  uint auStack_240 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar4 = 0x192;
  do {
    plVar7 = *(longlong **)(param_1 + -10 + lVar4);
    uVar1 = *(ushort *)(param_1 + lVar4);
    lVar10 = plVar7[1];
    *(ulonglong *)((longlong)&lStack_3da + lVar4) =
         (ulonglong)*(ushort *)(param_1 + -2 + lVar4) * 8 + *plVar7;
    *(int *)((longlong)auStack_3d2 + lVar4) = (int)lVar10;
    *(uint *)((longlong)auStack_3d2 + lVar4 + 4) = (uint)uVar1;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x392);
  lVar4 = 0;
  do {
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  lVar4 = 0;
  do {
    uVar8 = *(uint *)((longlong)auStack_240 + lVar4);
    if (uVar8 != 0) {
      uVar2 = *(uint *)((longlong)auStack_240 + lVar4 + 4);
      lVar10 = *(longlong *)((longlong)&lStack_248 + lVar4);
      uVar6 = *(uint *)(param_1 + 0x3c0);
      uVar3 = 0x20 - uVar6;
      if (uVar3 <= uVar8) {
        do {
          uVar5 = uVar3 * uVar2;
          uVar6 = *(uint *)(param_1 + 0x3c0);
          if (uVar5 != 0) {
            plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
            lVar9 = 0;
            do {
              *plVar7 = lVar10 + lVar9;
              plVar7 = plVar7 + 1;
              lVar9 = lVar9 + (ulonglong)uVar2 * 8;
            } while ((ulonglong)uVar5 * 8 - lVar9 != 0);
            uVar6 = *(uint *)(param_1 + 0x3c0);
          }
          lVar10 = lVar10 + (ulonglong)uVar5 * 8;
          uVar8 = uVar8 - uVar3;
          *(uint *)(param_1 + 0x3c0) = uVar6 + uVar3;
          puStack_270 = (undefined *)0x1468add2c;
          FUN_1468acd84(param_1);
          uVar3 = 0x20;
        } while (0x1f < uVar8);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      if (uVar2 * uVar8 != 0) {
        plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
        lVar9 = 0;
        do {
          *plVar7 = lVar10 + lVar9;
          plVar7 = plVar7 + 1;
          lVar9 = lVar9 + (ulonglong)uVar2 * 8;
        } while ((ulonglong)(uVar2 * uVar8) << 3 != lVar9);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      *(uint *)(param_1 + 0x3c0) = uVar6 + uVar8;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_270 = &UNK_1468addbd;
  FUN_144d8e3a0();
}



// FUNCTION 1468addbe FUN_1468addbe body=908 status=ok
// SIG undefined FUN_1468addbe(void)

undefined4 FUN_1468addbe(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  ulonglong *puVar26;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x70c0) != 0) {
    puVar24 = (undefined8 *)(param_1 + (longlong)*(int *)(param_1 + 0x70c0) * 0x18 + 0x70c8);
    puVar22 = (undefined8 *)(param_1 + 0x70c8);
    local_e0 = puVar24;
    do {
      iVar19 = *(int *)(puVar22 + 2);
      if (iVar19 != 0) {
        uVar17 = *puVar22;
        plVar7 = (longlong *)puVar22[1];
        uVar3 = *(uint *)((longlong)puVar22 + 0x14);
        lVar13 = *plVar7;
        if (*(int *)((longlong)plVar7 + 0x34) == 0) {
          puVar8 = *(undefined8 **)(param_1 + 0x7740);
          *puVar8 = uVar17;
          puVar8[1] = lVar13;
          *(int *)(puVar8 + 2) = iVar19;
          *(uint *)((longlong)puVar8 + 0x14) = uVar3;
LAB_1468adf50:
          lVar13 = *(longlong *)(param_1 + 0x7748);
          lVar12 = *(longlong *)(param_1 + 0x7740) + 0x18;
          *(longlong *)(param_1 + 0x7740) = lVar12;
          if (lVar12 == lVar13 + 0xfc0) {
            lVar12 = FUN_1400305d2(&DAT_14c949ec0);
            *(longlong *)(local_e8 + 0x7748) = lVar12;
            *(longlong *)(lVar12 + 0xff0) = lVar13;
            *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
            param_1 = local_e8;
          }
        }
        else {
          uVar4 = *(uint *)(plVar7 + 1);
          if (uVar4 != 0) {
            uVar20 = 0;
            iVar19 = 0;
            local_d8 = puVar22;
            local_d0 = uVar17;
            do {
              plVar10 = (longlong *)plVar7[4];
              if ((longlong *)plVar7[4] == (longlong *)0x0) {
                plVar10 = plVar7 + 2;
              }
              uVar15 = uVar20 + 0x1f;
              if (-1 < (int)uVar20) {
                uVar15 = uVar20;
              }
              if ((*(uint *)((longlong)plVar10 + (longlong)((int)uVar15 >> 5) * 4) >>
                   (uVar20 & 0x1f) & 1) == 0) {
                if (0 < iVar19) {
                  puVar22 = *(undefined8 **)(param_1 + 0x7740);
                  *puVar22 = uVar17;
                  puVar22[1] = lVar13;
                  *(int *)(puVar22 + 2) = iVar19;
                  *(uint *)((longlong)puVar22 + 0x14) = uVar3;
                  lVar12 = *(longlong *)(param_1 + 0x7748);
                  lVar11 = *(longlong *)(param_1 + 0x7740) + 0x18;
                  *(longlong *)(param_1 + 0x7740) = lVar11;
                  if (lVar11 == lVar12 + 0xfc0) {
                    lVar11 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(param_1 + 0x7750));
                    *(longlong *)(local_e8 + 0x7748) = lVar11;
                    *(longlong *)(lVar11 + 0xff0) = lVar12;
                    *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
                    uVar17 = local_d0;
                    param_1 = local_e8;
                  }
                  lVar13 = lVar13 + (ulonglong)(iVar19 * uVar3);
                  iVar19 = 0;
                }
                lVar13 = lVar13 + (ulonglong)uVar3;
              }
              else {
                iVar19 = iVar19 + 1;
              }
              uVar20 = uVar20 + 1;
            } while (uVar4 != uVar20);
            puVar22 = local_d8;
            puVar24 = local_e0;
            if (0 < iVar19) {
              puVar8 = *(undefined8 **)(param_1 + 0x7740);
              *puVar8 = uVar17;
              puVar8[1] = lVar13;
              *(int *)(puVar8 + 2) = iVar19;
              *(uint *)((longlong)puVar8 + 0x14) = uVar3;
              goto LAB_1468adf50;
            }
          }
        }
      }
      puVar22 = puVar22 + 3;
    } while (puVar22 != puVar24);
    *(undefined4 *)(param_1 + 0x70c0) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x7400);
  lVar13 = param_1;
  if ((ulonglong)uVar3 != 0) {
    piVar16 = (int *)(param_1 + 0x7418);
    puVar25 = local_c8;
    uVar18 = 0;
    do {
      iVar19 = *piVar16;
      *puVar25 = (uint)uVar18;
      puVar25 = puVar25 + (0 < iVar19);
      uVar18 = uVar18 + 1;
      piVar16 = piVar16 + 6;
    } while (uVar3 != uVar18);
    puVar21 = local_c8;
    if (puVar21 != puVar25) {
      do {
        puVar26 = *(ulonglong **)(lVar13 + 0x7740);
        lVar12 = *(longlong *)(lVar13 + 0x7748);
        puVar1 = (ulonglong *)(lVar12 + 0xfc0);
        puVar2 = puVar21 + (int)((ulonglong)((longlong)puVar1 - (longlong)puVar26) >> 3) *
                           -0x55555555;
        puVar23 = puVar25;
        if (puVar2 < puVar25) {
          puVar23 = puVar2;
        }
        *(ulonglong **)(lVar13 + 0x7740) =
             puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3;
        if (puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3
            == puVar1) {
          lVar13 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(lVar13 + 0x7750));
          *(longlong *)(local_e8 + 0x7748) = lVar13;
          *(longlong *)(lVar13 + 0xff0) = lVar12;
          *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
          lVar13 = local_e8;
        }
        do {
          uVar14 = (ulonglong)*puVar21;
          puVar21 = puVar21 + 1;
          uVar18 = *(ulonglong *)(param_1 + 0x7408 + uVar14 * 0x18);
          uVar9 = *(ulonglong *)(param_1 + 0x7410 + uVar14 * 0x18);
          uVar5 = *(undefined4 *)(param_1 + 0x7418 + uVar14 * 0x18);
          uVar6 = *(undefined4 *)((uVar18 & 0xfffffffffffffffe) - 8);
          *puVar26 = uVar18;
          puVar26[1] = uVar9;
          *(undefined4 *)(puVar26 + 2) = uVar5;
          *(undefined4 *)((longlong)puVar26 + 0x14) = uVar6;
          puVar26 = puVar26 + 3;
        } while (puVar21 != puVar23);
        puVar21 = puVar2;
      } while (puVar2 < puVar25);
    }
    *(undefined4 *)(lVar13 + 0x7400) = 0;
  }
  iVar19 = (int)((ulonglong)(*(longlong *)(lVar13 + 0x7740) - *(longlong *)(lVar13 + 0x7748)) >> 3)
           * -0x55555555;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)iVar19 >> 8),
                  *(longlong *)(*(longlong *)(lVar13 + 0x7748) + 0xff0) != 0 || 0 < iVar19);
}



// FUNCTION 1468ae14c FUN_1468ae14c body=3931 status=ok
// SIG undefined FUN_1468ae14c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468ae14c(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint *puVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_54c8 [32];
  longlong *local_54a8;
  longlong local_54a0;
  uint local_5498 [2];
  undefined8 local_5490;
  undefined1 local_1498 [768];
  undefined4 auStack_1198 [64];
  uint auStack_1098 [1026];
  ulonglong local_90;
  
  auVar3 = _DAT_149931e80;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_54c8;
  local_54a8 = (longlong *)(param_1 + 0x40);
  lVar7 = (longlong)*(int *)(param_1 + 0x80);
  if (lVar7 != 0) {
    plVar12 = (longlong *)(param_1 + 0x88);
    lVar11 = 0;
    do {
      lVar11 = lVar11 + 8;
    } while (lVar7 * 8 != lVar11);
    auVar32 = pmovsxbq(unaff_XMM6,0x800);
    auVar33 = pmovsxbq(unaff_XMM7,0x100);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        lVar11 = *(longlong *)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x400);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          lVar8 = uVar22 * 8 + lVar11;
LAB_1468ae249:
          uVar22 = (lVar8 - lVar11) - 8;
          auVar25._8_4_ = (int)uVar22;
          auVar25._0_8_ = uVar22;
          auVar25._12_4_ = (int)(uVar22 >> 0x20);
          auVar26._0_8_ = uVar22 >> 3;
          auVar26._8_8_ = auVar25._8_8_ >> 3;
          lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
          uVar17 = 0;
          do {
            auVar28._8_4_ = (int)lVar11;
            auVar28._0_8_ = lVar11;
            auVar28._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
            if ((bool)(~(SUB168(auVar26 | auVar3,0) < (longlong)(uVar17 ^ auVar3._0_8_)) & 1)) {
              *(longlong *)(lVar8 + -8 + uVar17 * 8) = lVar11 + auVar32._0_8_;
            }
            auVar30._8_4_ = (int)uVar17;
            auVar30._0_8_ = uVar17;
            auVar30._12_4_ = (int)(uVar17 >> 0x20);
            if ((longlong)((auVar30._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                SUB168(auVar26 | auVar3,8)) {
              *(longlong *)(lVar8 + uVar17 * 8) = auVar28._8_8_ + auVar32._8_8_;
            }
            uVar17 = uVar17 + 2;
            lVar11 = lVar11 + 0x10;
          } while (((uVar22 >> 3) + 2 & 0xfffffffffffffffe) != uVar17);
          uVar19 = *(uint *)(param_1 + 0x400);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x400);
            if (uVar4 != 0) {
              uVar17 = (longlong)(int)uVar4 + 0x1fffffffffffffff;
              uVar13 = uVar17 & 0x1fffffffffffffff;
              auVar27._8_4_ = (int)uVar13;
              auVar27._0_8_ = uVar13;
              auVar27._12_4_ = (int)(uVar13 >> 0x20);
              lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
              uVar18 = 0;
              lVar20 = lVar11;
              do {
                auVar29._8_4_ = (int)lVar20;
                auVar29._0_8_ = lVar20;
                auVar29._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
                if ((bool)(~(SUB168(auVar27 | auVar3,0) < (longlong)(uVar18 ^ auVar3._0_8_)) & 1)) {
                  *(longlong *)(lVar8 + -8 + uVar18 * 8) = lVar20 + auVar32._0_8_;
                }
                auVar31._8_4_ = (int)uVar18;
                auVar31._0_8_ = uVar18;
                auVar31._12_4_ = (int)(uVar18 >> 0x20);
                if ((longlong)((auVar31._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                    SUB168(auVar27 | auVar3,8)) {
                  *(longlong *)(lVar8 + uVar18 * 8) = auVar29._8_8_ + auVar32._8_8_;
                }
                uVar18 = uVar18 + 2;
                lVar20 = lVar20 + 0x10;
              } while ((uVar13 - ((uint)uVar17 & 1)) + 2 != uVar18);
              uVar19 = *(uint *)(param_1 + 0x400);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            lVar11 = lVar11 + (longlong)(int)uVar4 * 8;
            *(uint *)(param_1 + 0x400) = uVar19 + uVar4;
            FUN_1468acd84(local_54a8);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x400);
          if (uVar6 != 0) {
            lVar8 = (ulonglong)uVar6 * 8 + lVar11;
            goto LAB_1468ae249;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x400) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar7 * 8 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  uVar6 = *(uint *)(param_1 + 0x1c0);
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x1c8 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x1d2 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x1d0 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x400);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x400);
            if (uVar10 != 0) {
              plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *plVar12 = lVar11 + lVar7;
                plVar12 = plVar12 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x400);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x400) = uVar21 + uVar5;
            FUN_1468acd84(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        if (uVar4 * uVar19 != 0) {
          plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *plVar12 = lVar11 + lVar7;
            plVar12 = plVar12 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        *(uint *)(param_1 + 0x400) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x400);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x50) <=
                        (ulonglong)
                        (**(longlong **)(param_1 + 0x408 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x48))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(**(longlong **)(param_1 + 0x408 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x540);
  uVar4 = 0x400 - uVar6;
  uVar19 = (uint)uVar22;
  if (uVar4 <= uVar19) {
    uVar17 = 0;
    do {
      uVar19 = *(uint *)(param_1 + 0x540);
      uVar6 = uVar19 + uVar4;
      for (; uVar19 < uVar6; uVar19 = uVar19 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
        *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar19 * 0x10) = *puVar16;
        *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar19 * 0x10) = puVar16;
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x540) = uVar6;
      FUN_1468acec8();
      uVar19 = (int)uVar22 - uVar4;
      uVar22 = (ulonglong)uVar19;
      uVar4 = 0x400;
    } while (0x3ff < uVar19);
    uVar6 = *(uint *)(param_1 + 0x540);
  }
  uVar19 = uVar19 + uVar6;
  if (uVar6 < uVar19) {
    do {
      puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
      *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar6 * 0x10) = *puVar16;
      *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar6 * 0x10) = puVar16;
      uVar6 = uVar6 + ((uVar13 >> (uVar17 & 0x3f) & 1) != 0);
      uVar17 = (ulonglong)((int)uVar17 + 1);
    } while (uVar6 < uVar19);
  }
  *(uint *)(param_1 + 0x540) = uVar19;
  *(undefined4 *)(param_1 + 0x400) = 0;
  if (uVar19 < 0x41) {
    if (uVar19 != 0) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while ((ulonglong)uVar19 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)auStack_1098 + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x548 + lVar7 * 4) + 0xc);
        lVar7 = lVar7 + 4;
      } while ((ulonglong)uVar19 << 2 != lVar7);
      goto LAB_1468ae75c;
    }
  }
  else {
    plVar12 = (longlong *)(param_1 + 0x548);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x400);
    lVar7 = 0x40;
    do {
      auStack_1198[lVar7] = *(undefined4 *)(*plVar12 + 0xc);
      lVar11 = lVar7 - (ulonglong)uVar19;
      lVar7 = lVar7 + 1;
      plVar12 = plVar12 + 2;
    } while (lVar11 != 0x3f);
LAB_1468ae75c:
    if (uVar19 != 0) {
      uVar22 = (ulonglong)uVar19;
      lVar7 = 0;
      do {
        *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
             (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
             *(longlong *)
              (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
        lVar7 = lVar7 + 4;
      } while (uVar22 * 4 - lVar7 != 0);
      if (uVar19 < 0x41) {
        lVar7 = 0;
        do {
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
        lVar7 = 0;
        do {
          *(undefined4 *)((longlong)local_5498 + lVar7) =
               *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
      }
      else {
        lVar7 = 0;
        memset(local_1498,0,0x400);
        do {
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != 0x400);
        lVar7 = 0x40;
        plVar12 = &local_5490;
        do {
          *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
          lVar11 = lVar7 - uVar22;
          lVar7 = lVar7 + 1;
          plVar12 = plVar12 + 2;
        } while (lVar11 != 0x3f);
      }
      uVar17 = 0;
      do {
        uVar19 = DAT_14c75ec9c;
        uVar6 = local_5498[uVar17 * 4];
        if ((uVar6 >> 0x15 & 1) == 0) {
          lVar7 = (&local_5490)[uVar17 * 2];
          uVar2 = *(undefined8 *)(param_1 + 0x548 + uVar17 * 0x10);
          lVar11 = *local_54a8;
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468ae912:
            uVar19 = *(uint *)(lVar7 + 0xc);
            if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
              lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
              do {
                uVar6 = *(uint *)(lVar7 + 8);
                if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468ae901;
                LOCK();
                bVar24 = uVar6 == *(uint *)(lVar7 + 8);
                if (bVar24) {
                  *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
                }
                uVar6 = DAT_14c75ec9c;
                UNLOCK();
              } while (!bVar24);
              if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
                uVar4 = ~DAT_14c75ec9c;
                uVar19 = *(uint *)(lVar8 + 8);
                do {
                  LOCK();
                  uVar21 = *(uint *)(lVar8 + 8);
                  bVar24 = uVar19 == uVar21;
                  if (bVar24) {
                    *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                    uVar21 = uVar19;
                  }
                  uVar19 = uVar21;
                  UNLOCK();
                } while (!bVar24);
                LOCK();
                *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
                UNLOCK();
                if ((uVar19 & uVar6) != 0) goto LAB_1468ae9b4;
              }
            }
          }
          else {
            uVar21 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar5 = *(uint *)(lVar7 + 8);
              bVar24 = uVar4 == uVar5;
              if (bVar24) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar21;
                uVar5 = uVar4;
              }
              uVar4 = uVar5;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar19) == 0) goto LAB_1468ae912;
            if ((uVar6 >> 0x18 & 1) == 0) {
              **(undefined8 **)(lVar11 + 0x18) = uVar2;
              lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
              *(longlong *)(lVar11 + 0x18) = lVar7;
              if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
                FUN_141715f94();
              }
              goto LAB_1468ae901;
            }
LAB_1468ae9b4:
            local_54a0 = lVar11 + 0x18;
            FUN_1427edfe9();
          }
        }
        else {
          **(undefined8 **)(uVar17 * 0x10 + param_1 + 0x548 + 8) = 0;
        }
LAB_1468ae901:
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar22);
    }
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  lVar7 = param_1 + 0x4980;
  lVar11 = (longlong)*(int *)(param_1 + 0x49c0);
  if (lVar11 != 0) {
    plVar12 = (longlong *)(param_1 + 0x49c8);
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 8;
    } while (lVar11 * 8 != lVar8);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        puVar16 = *(undefined8 **)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x4d40);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          puVar15 = puVar16 + uVar22;
LAB_1468aea40:
          puVar9 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8);
          do {
            *puVar9 = *puVar16;
            puVar9 = puVar9 + 1;
            puVar16 = puVar16 + 1;
          } while (puVar16 != puVar15);
          uVar19 = *(uint *)(param_1 + 0x4d40);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x4d40);
            if (uVar4 != 0) {
              lVar8 = 0;
              do {
                *(undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8 + lVar8) =
                     *(undefined8 *)((longlong)puVar16 + lVar8);
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)uVar4 * 8 - lVar8 != 0);
              uVar19 = *(uint *)(param_1 + 0x4d40);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            puVar16 = puVar16 + (int)uVar4;
            *(uint *)(param_1 + 0x4d40) = uVar19 + uVar4;
            FUN_1468ad164(lVar7);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x4d40);
          if (uVar6 != 0) {
            puVar15 = puVar16 + uVar6;
            goto LAB_1468aea40;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x4d40) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar11 * 8 + 0x49c8));
  }
  *(undefined4 *)(param_1 + 0x49c0) = 0;
  uVar6 = *(uint *)(param_1 + 0x4b00);
  local_54a8 = (longlong *)lVar7;
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x4b08 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x4b12 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x4b10 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x4d40);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x4d40);
            if (uVar10 != 0) {
              puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *puVar16 = *(undefined8 *)(lVar7 + lVar11);
                puVar16 = puVar16 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x4d40);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x4d40) = uVar21 + uVar5;
            FUN_1468ad164(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        if (uVar4 * uVar19 != 0) {
          puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *puVar16 = *(undefined8 *)(lVar7 + lVar11);
            puVar16 = puVar16 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        *(uint *)(param_1 + 0x4d40) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x4b00) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x4d40);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x4990) <=
                        (ulonglong)
                        (*(longlong *)(param_1 + 0x4d48 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x4988))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(*(longlong *)(param_1 + 0x4d48 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x4e80);
  uVar19 = 0x400 - uVar6;
  uVar4 = (uint)uVar22;
  if (uVar19 <= uVar4) {
    uVar17 = 0;
    do {
      uVar4 = *(uint *)(param_1 + 0x4e80);
      uVar6 = uVar4 + uVar19;
      for (; uVar4 < uVar6; uVar4 = uVar4 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar4 * 8) =
             *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x4e80) = uVar6;
      FUN_1468ad358();
      uVar4 = (int)uVar22 - uVar19;
      uVar22 = (ulonglong)uVar4;
      uVar19 = 0x400;
    } while (0x3ff < uVar4);
    uVar6 = *(uint *)(param_1 + 0x4e80);
  }
  uVar4 = uVar4 + uVar6;
  for (; uVar6 < uVar4; uVar6 = uVar6 + ((uVar13 >> uVar22 & 1) != 0)) {
    uVar22 = uVar17 & 0x3f;
    *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar6 * 8) =
         *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
    uVar17 = (ulonglong)((int)uVar17 + 1);
  }
  *(uint *)(param_1 + 0x4e80) = uVar4;
  *(undefined4 *)(param_1 + 0x4d40) = 0;
  if (uVar4 < 0x41) {
    if (uVar4 == 0) goto LAB_1468af04e;
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  else {
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x40);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  if (uVar4 != 0) {
    uVar22 = (ulonglong)uVar4;
    lVar7 = 0;
    do {
      *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
           (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
           *(longlong *)
            (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
      lVar7 = lVar7 + 4;
    } while (uVar22 * 4 - lVar7 != 0);
    if (uVar4 < 0x41) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)local_5498 + lVar7) =
             *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
    }
    else {
      lVar7 = 0;
      memset(local_1498,0,0x400);
      do {
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x400);
      lVar7 = 0x40;
      plVar12 = &local_5490;
      do {
        *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
        lVar11 = lVar7 - uVar22;
        lVar7 = lVar7 + 1;
        plVar12 = plVar12 + 2;
      } while (lVar11 != 0x3f);
    }
    uVar17 = 0;
    do {
      uVar19 = DAT_14c75ec9c;
      uVar6 = local_5498[uVar17 * 4];
      lVar7 = (&local_5490)[uVar17 * 2];
      uVar2 = *(undefined8 *)(param_1 + 0x4e88 + uVar17 * 8);
      lVar11 = *(longlong *)(param_1 + 0x4980);
      if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468aef92:
        uVar19 = *(uint *)(lVar7 + 0xc);
        if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
          lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
          do {
            uVar6 = *(uint *)(lVar7 + 8);
            if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468aefa8;
            LOCK();
            bVar24 = uVar6 == *(uint *)(lVar7 + 8);
            if (bVar24) {
              *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
            }
            uVar6 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar24);
          if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
            uVar4 = ~DAT_14c75ec9c;
            uVar19 = *(uint *)(lVar8 + 8);
            do {
              LOCK();
              uVar21 = *(uint *)(lVar8 + 8);
              bVar24 = uVar19 == uVar21;
              if (bVar24) {
                *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                uVar21 = uVar19;
              }
              uVar19 = uVar21;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar19 & uVar6) != 0) {
              uVar6 = *(uint *)(lVar8 + 0xc);
              goto LAB_1468af041;
            }
          }
        }
      }
      else {
        uVar21 = ~DAT_14c75ec9c;
        uVar4 = *(uint *)(lVar7 + 8);
        do {
          LOCK();
          uVar5 = *(uint *)(lVar7 + 8);
          bVar24 = uVar4 == uVar5;
          if (bVar24) {
            *(uint *)(lVar7 + 8) = uVar4 & uVar21;
            uVar5 = uVar4;
          }
          uVar4 = uVar5;
          UNLOCK();
        } while (!bVar24);
        LOCK();
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar4 & uVar19) == 0) goto LAB_1468aef92;
        if ((uVar6 >> 0x18 & 1) == 0) {
          **(undefined8 **)(lVar11 + 0x18) = uVar2;
          lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
          *(longlong *)(lVar11 + 0x18) = lVar7;
          if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
            FUN_141715f94();
          }
        }
        else {
          uVar6 = *(uint *)(lVar7 + 0xc);
LAB_1468af041:
          local_54a0 = lVar11 + 0x18;
          FUN_1427edfe9(~uVar6,&local_54a0);
        }
      }
LAB_1468aefa8:
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar22);
  }
LAB_1468af04e:
  *(undefined4 *)(param_1 + 0x4e80) = 0;
  if ((local_90 ^ (ulonglong)auStack_54c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468af0b0 FUN_1468af0b0 body=123 status=ok
// SIG undefined FUN_1468af0b0(void)

void FUN_1468af0b0(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = param_1[0xef1];
  if (lVar2 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0xef2);
    uVar1 = (&DAT_14c949f00)[lVar4 * 0x50];
    if ((ulonglong)uVar1 < 0x20) {
      (&DAT_14c949f00)[lVar4 * 0x50] = uVar1 + 1;
      *(longlong *)(&DAT_14c949f08 + (ulonglong)uVar1 * 8 + lVar4 * 0x140) = lVar2;
    }
    else {
      FUN_1400020a8();
    }
  }
  *param_1 = &PTR_LAB_149eb0140;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001468af128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1);
  return;
}



// FUNCTION 1468af12c FUN_1468af12c body=319 status=ok
// SIG undefined FUN_1468af12c(void)

undefined8 * FUN_1468af12c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = DAT_14c846240;
  param_1[1] = DAT_14c846240;
  uVar2 = DAT_14c846248;
  param_1[2] = DAT_14c846248;
  param_1[3] = param_3;
  param_1[8] = param_2;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x11,0,0x100);
  *(undefined4 *)(param_1 + 0x38) = 0;
  memset(param_1 + 0x39,0,0x200);
  *(undefined4 *)(param_1 + 0x80) = 0;
  memset(param_1 + 0x81,0,0x100);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  memset(param_1 + 0xa9,0,0x4400);
  param_1[0x930] = param_2;
  param_1[0x931] = uVar1;
  param_1[0x932] = uVar2;
  *(undefined4 *)(param_1 + 0x938) = 0;
  memset(param_1 + 0x939,0,0x100);
  *(undefined4 *)(param_1 + 0x960) = 0;
  memset(param_1 + 0x961,0,0x200);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  memset(param_1 + 0x9a9,0,0x100);
  *(undefined4 *)(param_1 + 0x9d0) = 0;
  memset(param_1 + 0x9d1,0,0x2200);
  FUN_141716662(param_1 + 0xe18,param_2);
  return param_1;
}



// FUNCTION 1468af26c FUN_1468af26c body=38 status=ok
// SIG undefined FUN_1468af26c(void)

undefined8 FUN_1468af26c(undefined8 param_1,int param_2)

{
  FUN_1468af0b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468af40e FUN_1468af40e body=566 status=ok
// SIG undefined FUN_1468af40e(void)

void FUN_1468af40e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    iStack_64 = iStack_44;
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar3 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar3;
        if (iVar5 == 0x20) {
          FUN_1468afd28(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar4 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar4 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_1468af948(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468af646 FUN_1468af646 body=566 status=ok
// SIG undefined FUN_1468af646(void)

void FUN_1468af646(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_80 = param_2;
  uStack_50 = plVar1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    iStack_64 = iStack_44;
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        uVar3 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar2 = *(uint *)(param_1 + 0x4d80);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x4d80) = iVar5;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar2 * 8) = uVar3;
        if (iVar5 == 0x20) {
          FUN_1468afd28(param_1 + 0x49c0);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_2[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar6) || (uStack_50 != plVar1)) {
      do {
        lVar4 = *local_80;
        uVar2 = *(uint *)(param_1 + 0x440);
        iVar5 = uVar2 + 1;
        *(int *)(param_1 + 0x440) = iVar5;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar2 * 8) = lVar4 + (longlong)iStack_64 * 0x10;
        if (iVar5 == 0x20) {
          FUN_1468af948(param_1 + 0x80);
        }
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_2 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468af88e FUN_1468af88e body=90 status=ok
// SIG undefined FUN_1468af88e(void)

undefined8 FUN_1468af88e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar3 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x58);
  lVar4 = (longlong)iVar1;
  *(uint *)(lVar2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x5c) < iVar1 + 1U) {
    FUN_140fefdba((longlong *)(lVar2 + 0x50),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + lVar4 * 0x18) = uVar3;
  *(undefined8 **)(lVar2 + 8 + lVar4 * 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x18) = param_3;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 1468af902 FUN_1468af902 body=69 status=ok
// SIG undefined FUN_1468af902(void)

void FUN_1468af902(longlong param_1,longlong param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x10);
    lVar2 = (longlong)param_3 << 3;
    do {
      FUN_1468b0542(param_1 + 0x40,param_2,uVar1);
      param_2 = param_2 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1468af948 FUN_1468af948 body=324 status=ok
// SIG undefined FUN_1468af948(void)

void FUN_1468af948(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar6 = 0;
  uVar4 = 0;
  do {
    uVar4 = uVar4 | (ulonglong)
                    (*(ulonglong *)(param_1 + 0x10) <=
                    (ulonglong)
                    (**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) - *(longlong *)(param_1 + 8))) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  lVar6 = 0;
  uVar7 = 0;
  do {
    uVar7 = uVar7 | (ulonglong)(**(longlong **)(param_1 + 0x3c8 + lVar6 * 8) != 0) <<
                    ((byte)lVar6 & 0x3f);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  uVar7 = uVar7 & uVar4;
  uVar4 = POPCOUNT(uVar7);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar9 = 0x400 - uVar3;
  uVar8 = 0;
  uVar5 = (uint)uVar4;
  if (uVar9 <= uVar5) {
    uVar8 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar9;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar7 >> uVar2 & 1) != 0)) {
        uVar2 = uVar8 & 0x3f;
        puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 0x10) = *puVar1;
        *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar5 * 0x10) = puVar1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_1468afa8c(param_1);
      uVar5 = (int)uVar4 - uVar9;
      uVar4 = (ulonglong)uVar5;
      uVar9 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  if (uVar3 < uVar5) {
    do {
      puVar1 = *(undefined8 **)(param_1 + 0x3c8 + uVar8 * 8);
      *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 0x10) = *puVar1;
      *(undefined8 **)(param_1 + 0x510 + (ulonglong)uVar3 * 0x10) = puVar1;
      uVar3 = uVar3 + ((uVar7 >> (uVar8 & 0x3f) & 1) != 0);
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (uVar3 < uVar5);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1468afa8c FUN_1468afa8c body=667 status=ok
// SIG undefined FUN_1468afa8c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468afa8c(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [446];
  undefined4 auStack_127a [144];
  undefined1 auStack_103a [4098];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0x508;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x908);
  lVar5 = 0x242;
  do {
    *(undefined4 *)((longlong)auStack_127a + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)param_1 + lVar5 * 4 + -0x400) + 0xc);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1242);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    if ((uVar2 >> 0x15 & 1) == 0) {
      lVar6 = alStack_5430[lVar5 * 2];
      lVar7 = param_1[lVar5 * 2 + 0xa1];
      lVar3 = *param_1;
      if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468afc45:
        uVar4 = *(uint *)(lVar6 + 0xc);
        if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
          lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          do {
            uVar2 = *(uint *)(lVar6 + 8);
            if ((uVar2 >> 0x17 & 1) != 0) goto LAB_1468afc30;
            LOCK();
            bVar10 = uVar2 == *(uint *)(lVar6 + 8);
            if (bVar10) {
              *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
            }
            uVar2 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar10);
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
            uVar8 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar9 = *(uint *)(lVar7 + 8);
              bVar10 = uVar4 == uVar9;
              if (bVar10) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar8;
                uVar9 = uVar4;
              }
              uVar4 = uVar9;
              UNLOCK();
            } while (!bVar10);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar2) != 0) {
              uVar2 = *(uint *)(lVar7 + 0xc);
              goto LAB_1468afce7;
            }
          }
        }
      }
      else {
        uVar9 = ~DAT_14c75ec9c;
        uVar8 = *(uint *)(lVar6 + 8);
        do {
          LOCK();
          uVar1 = *(uint *)(lVar6 + 8);
          bVar10 = uVar8 == uVar1;
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar8 & uVar9;
            uVar1 = uVar8;
          }
          uVar8 = uVar1;
          UNLOCK();
        } while (!bVar10);
        LOCK();
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar8 & uVar4) == 0) goto LAB_1468afc45;
        if ((uVar2 >> 0x18 & 1) == 0) {
          **(longlong **)(lVar3 + 0x18) = lVar7;
          lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
          *(longlong *)(lVar3 + 0x18) = lVar6;
          if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
            FUN_1400318c8();
          }
          goto LAB_1468afc30;
        }
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_1468afce7:
        local_5440 = lVar3 + 0x18;
        FUN_1427ef942(~uVar2,&local_5440);
      }
    }
    else {
      *(undefined8 *)param_1[lVar5 * 2 + 0xa2] = 0;
    }
LAB_1468afc30:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_38 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1468afd28 FUN_1468afd28 body=500 status=ok
// SIG undefined FUN_1468afd28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468afd28(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lVar17;
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lVar22;
  longlong lVar25;
  longlong lVar29;
  
  lVar6 = *(longlong *)(param_1 + 8);
  auVar16._8_4_ = (int)lVar6;
  auVar16._0_8_ = lVar6;
  auVar16._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar7;
  auVar21._8_4_ = (int)uVar7;
  auVar21._0_8_ = uVar7;
  auVar21._12_4_ = (int)(uVar7 >> 0x20);
  auVar13 = (undefined1  [16])0x0;
  auVar18 = pmovsxbq(in_XMM5,0x100);
  lVar4 = 0x79;
  auVar11 = pmovsxbq(auVar11,0x101);
  auVar12 = pmovsxbq(in_XMM1,0x202);
  do {
    plVar1 = (longlong *)(param_1 + lVar4 * 8);
    auVar23._0_8_ = *plVar1 - lVar6;
    auVar23._8_8_ = plVar1[1] - auVar16._8_8_;
    auVar26._0_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,0) < SUB168(auVar21 ^ _DAT_149931e80,0));
    auVar26._8_8_ =
         -(ulonglong)(SUB168(auVar23 ^ _DAT_149931e80,8) < SUB168(auVar21 ^ _DAT_149931e80,8));
    lVar22 = auVar18._8_8_;
    lVar25 = SUB168(~auVar26 & auVar11,0);
    lVar29 = SUB168(~auVar26 & auVar11,8);
    auVar28._0_8_ = lVar25 << lVar22;
    auVar28._8_8_ = lVar29 << lVar22;
    lVar17 = auVar18._0_8_;
    auVar27._0_8_ = lVar25 << lVar17;
    auVar27._8_8_ = lVar29 << lVar17;
    auVar18 = pblendw(auVar27,auVar28,0xf0);
    auVar13 = auVar13 | auVar18;
    auVar18._0_8_ = lVar17 + auVar12._0_8_;
    auVar18._8_8_ = lVar22 + auVar12._8_8_;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0x99);
  auVar14._0_8_ = auVar13._8_8_;
  auVar14._8_4_ = auVar13._8_4_;
  auVar14._12_4_ = auVar13._12_4_;
  auVar15 = pmovsxbq(auVar14 | auVar13,0x100);
  lVar6 = 0x79;
  auVar16 = (undefined1  [16])0x0;
  do {
    plVar1 = (longlong *)(param_1 + lVar6 * 8);
    auVar19._0_8_ = -(ulonglong)(*plVar1 == 0);
    auVar19._8_8_ = -(ulonglong)(plVar1[1] == 0);
    lVar17 = auVar15._8_8_;
    lVar22 = SUB168(~auVar19 & auVar11,0);
    lVar25 = SUB168(~auVar19 & auVar11,8);
    auVar24._0_8_ = lVar22 << lVar17;
    auVar24._8_8_ = lVar25 << lVar17;
    lVar4 = auVar15._0_8_;
    auVar20._0_8_ = lVar22 << lVar4;
    auVar20._8_8_ = lVar25 << lVar4;
    auVar21 = pblendw(auVar20,auVar24,0xf0);
    auVar16 = auVar16 | auVar21;
    auVar15._0_8_ = lVar4 + auVar12._0_8_;
    auVar15._8_8_ = lVar17 + auVar12._8_8_;
    lVar6 = lVar6 + 2;
  } while (lVar6 != 0x99);
  uVar8 = (auVar16._8_8_ | auVar16._0_8_) & SUB168(auVar14 | auVar13,0);
  uVar7 = POPCOUNT(uVar8);
  uVar3 = *(uint *)(param_1 + 0x500);
  uVar10 = 0x400 - uVar3;
  uVar9 = 0;
  uVar5 = (uint)uVar7;
  if (uVar10 <= uVar5) {
    uVar9 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x500);
      uVar3 = uVar5 + uVar10;
      for (; uVar5 < uVar3; uVar5 = uVar5 + ((uVar8 >> uVar2 & 1) != 0)) {
        uVar2 = uVar9 & 0x3f;
        *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar5 * 8) =
             *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      *(uint *)(param_1 + 0x500) = uVar3;
      FUN_1468aff1c(param_1);
      uVar5 = (int)uVar7 - uVar10;
      uVar7 = (ulonglong)uVar5;
      uVar10 = 0x400;
    } while (0x3ff < uVar5);
    uVar3 = *(uint *)(param_1 + 0x500);
  }
  uVar5 = uVar5 + uVar3;
  for (; uVar3 < uVar5; uVar3 = uVar3 + ((uVar8 >> uVar7 & 1) != 0)) {
    uVar7 = uVar9 & 0x3f;
    *(undefined8 *)(param_1 + 0x508 + (ulonglong)uVar3 * 8) =
         *(undefined8 *)(param_1 + 0x3c8 + uVar9 * 8);
    uVar9 = (ulonglong)((int)uVar9 + 1);
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1468aff1c FUN_1468aff1c body=632 status=ok
// SIG undefined FUN_1468aff1c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468aff1c(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_5468 [40];
  longlong local_5440;
  uint auStack_5438 [2];
  longlong alStack_5430 [2047];
  undefined1 local_1438 [124];
  undefined4 auStack_13bc [224];
  undefined1 auStack_103a [4106];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_5468;
  lVar5 = 0xa1;
  do {
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xe1);
  lVar5 = 0xe1;
  do {
    auStack_13bc[lVar5] = *(undefined4 *)(param_1[lVar5 + -0x40] + 0xc);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x4e1);
  lVar5 = 2;
  do {
    *(ulonglong *)(auStack_5438 + lVar5) =
         (ulonglong)((*(uint *)(auStack_103a + lVar5) & 0xffff) * 0x18) +
         *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(auStack_103a + lVar5) >> 0x10) * 8);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x1002);
  memset(local_1438,0,0x400);
  lVar5 = 8;
  do {
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x408);
  lVar5 = 0;
  do {
    *(undefined4 *)((longlong)auStack_5438 + lVar5) =
         *(undefined4 *)(*(longlong *)((longlong)alStack_5430 + lVar5) + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x4000);
  lVar5 = 0;
  do {
    uVar4 = DAT_14c75ec9c;
    uVar2 = auStack_5438[lVar5 * 4];
    lVar6 = alStack_5430[lVar5 * 2];
    lVar7 = param_1[lVar5 + 0xa1];
    lVar3 = *param_1;
    if ((*(uint *)(lVar6 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468b00a3:
      uVar4 = *(uint *)(lVar6 + 0xc);
      if ((uVar2 >> 0x17 & 1) == 0 && 0 < (int)uVar4) {
        lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        do {
          uVar2 = *(uint *)(lVar6 + 8);
          if ((uVar2 >> 0x17 & 1) != 0) goto LAB_1468b00b9;
          LOCK();
          bVar10 = uVar2 == *(uint *)(lVar6 + 8);
          if (bVar10) {
            *(uint *)(lVar6 + 8) = uVar2 | 0x800000;
          }
          uVar2 = DAT_14c75ec9c;
          UNLOCK();
        } while (!bVar10);
        if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) != 0) {
          uVar8 = ~DAT_14c75ec9c;
          uVar4 = *(uint *)(lVar7 + 8);
          do {
            LOCK();
            uVar9 = *(uint *)(lVar7 + 8);
            bVar10 = uVar4 == uVar9;
            if (bVar10) {
              *(uint *)(lVar7 + 8) = uVar4 & uVar8;
              uVar9 = uVar4;
            }
            uVar4 = uVar9;
            UNLOCK();
          } while (!bVar10);
          LOCK();
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
          UNLOCK();
          if ((uVar4 & uVar2) != 0) {
            uVar2 = *(uint *)(lVar7 + 0xc);
            goto LAB_1468b0156;
          }
        }
      }
    }
    else {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar6 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar6 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar6 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar4) == 0) goto LAB_1468b00a3;
      if ((uVar2 >> 0x18 & 1) == 0) {
        **(longlong **)(lVar3 + 0x18) = lVar7;
        lVar6 = *(longlong *)(lVar3 + 0x18) + 8;
        *(longlong *)(lVar3 + 0x18) = lVar6;
        if (lVar6 == *(longlong *)(lVar3 + 0x20) + 0xf80) {
          FUN_1400318c8();
        }
      }
      else {
        uVar2 = *(uint *)(lVar6 + 0xc);
LAB_1468b0156:
        local_5440 = lVar3 + 0x18;
        FUN_1427ef942(~uVar2,&local_5440);
      }
    }
LAB_1468b00b9:
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x400) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((local_30 ^ (ulonglong)auStack_5468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1468b0196 FUN_1468b0196 body=657 status=ok
// SIG undefined FUN_1468b0196(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468b0196(longlong param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar21 [16];
  
  auVar1 = _DAT_149931e80;
  lVar3 = 0x48;
  do {
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x148);
  lVar3 = 0x48;
  auVar20 = pmovsxbq(unaff_XMM6,0x800);
  auVar21 = pmovsxbq(unaff_XMM7,0x100);
  do {
    uVar11 = *(uint *)(*(longlong **)(param_1 + lVar3) + 1);
    uVar12 = (ulonglong)(int)uVar11;
    if (uVar12 != 0) {
      lVar10 = **(longlong **)(param_1 + lVar3);
      uVar5 = *(uint *)(param_1 + 0x3c0);
      uVar2 = 0x20 - uVar5;
      if (uVar11 < uVar2) {
        lVar4 = lVar10 + uVar12 * 8;
LAB_1468b023d:
        uVar12 = (lVar4 - lVar10) - 8;
        auVar13._8_4_ = (int)uVar12;
        auVar13._0_8_ = uVar12;
        auVar13._12_4_ = (int)(uVar12 >> 0x20);
        auVar14._0_8_ = uVar12 >> 3;
        auVar14._8_8_ = auVar13._8_8_ >> 3;
        lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
        uVar6 = 0;
        do {
          auVar16._8_4_ = (int)lVar10;
          auVar16._0_8_ = lVar10;
          auVar16._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
          if ((bool)(~(SUB168(auVar14 | auVar1,0) < (longlong)(uVar6 ^ auVar1._0_8_)) & 1)) {
            *(longlong *)(lVar4 + -8 + uVar6 * 8) = lVar10 + auVar20._0_8_;
          }
          auVar18._8_4_ = (int)uVar6;
          auVar18._0_8_ = uVar6;
          auVar18._12_4_ = (int)(uVar6 >> 0x20);
          if ((longlong)((auVar18._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
              SUB168(auVar14 | auVar1,8)) {
            *(longlong *)(lVar4 + uVar6 * 8) = auVar16._8_8_ + auVar20._8_8_;
          }
          uVar6 = uVar6 + 2;
          lVar10 = lVar10 + 0x10;
        } while (((uVar12 >> 3) + 2 & 0xfffffffffffffffe) != uVar6);
        uVar5 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar5 = *(uint *)(param_1 + 0x3c0);
          if (uVar2 != 0) {
            uVar6 = (longlong)(int)uVar2 + 0x1fffffffffffffff;
            uVar7 = uVar6 & 0x1fffffffffffffff;
            auVar15._8_4_ = (int)uVar7;
            auVar15._0_8_ = uVar7;
            auVar15._12_4_ = (int)(uVar7 >> 0x20);
            lVar4 = param_1 + 0x3d0 + (ulonglong)uVar5 * 8;
            uVar9 = 0;
            lVar8 = lVar10;
            do {
              auVar17._8_4_ = (int)lVar8;
              auVar17._0_8_ = lVar8;
              auVar17._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
              if ((bool)(~(SUB168(auVar15 | auVar1,0) < (longlong)(uVar9 ^ auVar1._0_8_)) & 1)) {
                *(longlong *)(lVar4 + -8 + uVar9 * 8) = lVar8 + auVar20._0_8_;
              }
              auVar19._8_4_ = (int)uVar9;
              auVar19._0_8_ = uVar9;
              auVar19._12_4_ = (int)(uVar9 >> 0x20);
              if ((longlong)((auVar19._8_8_ | auVar21._8_8_) ^ auVar1._8_8_) <=
                  SUB168(auVar15 | auVar1,8)) {
                *(longlong *)(lVar4 + uVar9 * 8) = auVar17._8_8_ + auVar20._8_8_;
              }
              uVar9 = uVar9 + 2;
              lVar8 = lVar8 + 0x10;
            } while ((uVar7 - ((uint)uVar6 & 1)) + 2 != uVar9);
            uVar5 = *(uint *)(param_1 + 0x3c0);
          }
          uVar11 = (int)uVar12 - uVar2;
          uVar12 = (ulonglong)uVar11;
          lVar10 = lVar10 + (longlong)(int)uVar2 * 8;
          *(uint *)(param_1 + 0x3c0) = uVar5 + uVar2;
          FUN_1468af948(param_1);
          uVar2 = 0x20;
        } while (0x1f < uVar11);
        uVar5 = *(uint *)(param_1 + 0x3c0);
        if (uVar11 != 0) {
          lVar4 = lVar10 + (ulonglong)uVar11 * 8;
          goto LAB_1468b023d;
        }
        uVar11 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar11 + uVar5;
    }
    lVar3 = lVar3 + 8;
    if (lVar3 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468b0428 FUN_1468b0428 body=282 status=ok
// SIG undefined FUN_1468b0428(void)

void FUN_1468b0428(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  lVar2 = 0x48;
  do {
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x148);
  lVar2 = 0x48;
  do {
    uVar7 = *(uint *)(*(longlong **)(param_1 + lVar2) + 1);
    uVar8 = (ulonglong)(int)uVar7;
    if (uVar8 != 0) {
      puVar9 = (undefined8 *)**(longlong **)(param_1 + lVar2);
      uVar1 = *(uint *)(param_1 + 0x3c0);
      uVar4 = 0x20 - uVar1;
      if (uVar7 < uVar4) {
        puVar5 = puVar9 + uVar8;
LAB_1468b0483:
        puVar3 = (undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8);
        do {
          *puVar3 = *puVar9;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar5);
        uVar1 = *(uint *)(param_1 + 0x3c0);
      }
      else {
        do {
          uVar1 = *(uint *)(param_1 + 0x3c0);
          if (uVar4 != 0) {
            lVar6 = 0;
            do {
              *(undefined8 *)(param_1 + 0x3c8 + (ulonglong)uVar1 * 8 + lVar6) =
                   *(undefined8 *)((longlong)puVar9 + lVar6);
              lVar6 = lVar6 + 8;
            } while ((longlong)(int)uVar4 * 8 - lVar6 != 0);
            uVar1 = *(uint *)(param_1 + 0x3c0);
          }
          uVar7 = (int)uVar8 - uVar4;
          uVar8 = (ulonglong)uVar7;
          puVar9 = puVar9 + (int)uVar4;
          *(uint *)(param_1 + 0x3c0) = uVar1 + uVar4;
          FUN_1468afd28(param_1);
          uVar4 = 0x20;
        } while (0x1f < uVar7);
        uVar1 = *(uint *)(param_1 + 0x3c0);
        if (uVar7 != 0) {
          puVar5 = puVar9 + uVar7;
          goto LAB_1468b0483;
        }
        uVar7 = 0;
      }
      *(uint *)(param_1 + 0x3c0) = uVar7 + uVar1;
    }
    lVar2 = lVar2 + 8;
    if (lVar2 == 0x148) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 1468b0542 FUN_1468b0542 body=669 status=ok
// SIG undefined FUN_1468b0542(void)

void FUN_1468b0542(longlong *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  uVar6 = DAT_14c75ec9c;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar5 = *param_2;
  lVar2 = *param_1;
  bVar10 = (ulonglong)(lVar5 - param_1[1]) < (ulonglong)param_1[2];
  if (param_3 == 0) {
    if (lVar5 == 0 || bVar10) goto LAB_1468b06c1;
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8) +
            (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff) * 0x18;
    uVar4 = *(uint *)(lVar3 + 8);
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468b06de:
      uVar6 = *(uint *)(lVar3 + 0xc);
      if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_1468b06c1;
      lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      do {
        uVar6 = *(uint *)(lVar3 + 8);
        if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468b06c1;
        LOCK();
        bVar10 = uVar6 == *(uint *)(lVar3 + 8);
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
        }
        uVar6 = DAT_14c75ec9c;
        UNLOCK();
      } while (!bVar10);
      if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_1468b06c1;
      uVar8 = ~DAT_14c75ec9c;
      uVar4 = *(uint *)(lVar5 + 8);
      do {
        LOCK();
        uVar9 = *(uint *)(lVar5 + 8);
        bVar10 = uVar4 == uVar9;
        if (bVar10) {
          *(uint *)(lVar5 + 8) = uVar4 & uVar8;
          uVar9 = uVar4;
        }
        uVar4 = uVar9;
        UNLOCK();
      } while (!bVar10);
      goto LAB_1468b07c3;
    }
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar3 + 8);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar3 + 8);
      bVar10 = uVar8 == uVar1;
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar8 & uVar9;
        uVar1 = uVar8;
      }
      uVar8 = uVar1;
      UNLOCK();
    } while (!bVar10);
    LOCK();
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar8 & uVar6) == 0) goto LAB_1468b06de;
joined_r0x0001468b0679:
    if ((uVar4 >> 0x18 & 1) == 0) {
      **(longlong **)(lVar2 + 0x18) = lVar5;
      lVar5 = *(longlong *)(lVar2 + 0x18) + 8;
      *(longlong *)(lVar2 + 0x18) = lVar5;
      if (lVar5 == *(longlong *)(lVar2 + 0x20) + 0xf80) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
      }
      goto LAB_1468b06c1;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
  }
  else {
    if (lVar5 == 0 || bVar10) goto LAB_1468b06c1;
    uVar7 = (ulonglong)(*(uint *)(lVar5 + 0xc) & 0xffff);
    lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + 0xc) >> 0x10) * 8);
    uVar4 = *(uint *)(lVar3 + 8 + uVar7 * 0x18);
    if ((uVar4 >> 0x15 & 1) != 0) {
      *param_2 = 0;
      goto LAB_1468b06c1;
    }
    lVar3 = lVar3 + uVar7 * 0x18;
    if ((*(uint *)(lVar3 + 8) & DAT_14c75ec9c) != 0) {
      uVar9 = ~DAT_14c75ec9c;
      uVar8 = *(uint *)(lVar3 + 8);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar3 + 8);
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          *(uint *)(lVar3 + 8) = uVar8 & uVar9;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | DAT_14c75ec98;
      UNLOCK();
      if ((uVar8 & uVar6) != 0) goto joined_r0x0001468b0679;
    }
    uVar6 = *(uint *)(lVar3 + 0xc);
    if ((uVar4 >> 0x17 & 1) != 0 || (int)uVar6 < 1) goto LAB_1468b06c1;
    lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    do {
      uVar6 = *(uint *)(lVar3 + 8);
      if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468b06c1;
      LOCK();
      bVar10 = uVar6 == *(uint *)(lVar3 + 8);
      if (bVar10) {
        *(uint *)(lVar3 + 8) = uVar6 | 0x800000;
      }
      uVar6 = DAT_14c75ec9c;
      UNLOCK();
    } while (!bVar10);
    if ((*(uint *)(lVar5 + 8) & DAT_14c75ec9c) == 0) goto LAB_1468b06c1;
    uVar9 = ~DAT_14c75ec9c;
    uVar8 = *(uint *)(lVar5 + 8);
    do {
      LOCK();
      uVar4 = *(uint *)(lVar5 + 8);
      bVar10 = uVar8 == uVar4;
      if (bVar10) {
        *(uint *)(lVar5 + 8) = uVar8 & uVar9;
        uVar4 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar4;
    } while (!bVar10);
LAB_1468b07c3:
    LOCK();
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | DAT_14c75ec98;
    UNLOCK();
    if ((uVar4 & uVar6) == 0) goto LAB_1468b06c1;
    uVar6 = *(uint *)(lVar5 + 0xc);
  }
  local_18 = lVar2 + 0x18;
  FUN_1427ef942(~uVar6);
LAB_1468b06c1:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b07ee FUN_1468b07ee body=403 status=ok
// SIG undefined FUN_1468b07ee(void)

void FUN_1468b07ee(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lStack_3da;
  uint auStack_3d2 [88];
  undefined *puStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  uint auStack_240 [128];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar4 = 0x192;
  do {
    plVar7 = *(longlong **)(param_1 + -10 + lVar4);
    uVar1 = *(ushort *)(param_1 + lVar4);
    lVar10 = plVar7[1];
    *(ulonglong *)((longlong)&lStack_3da + lVar4) =
         (ulonglong)*(ushort *)(param_1 + -2 + lVar4) * 8 + *plVar7;
    *(int *)((longlong)auStack_3d2 + lVar4) = (int)lVar10;
    *(uint *)((longlong)auStack_3d2 + lVar4 + 4) = (uint)uVar1;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x392);
  lVar4 = 0;
  do {
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  lVar4 = 0;
  do {
    uVar8 = *(uint *)((longlong)auStack_240 + lVar4);
    if (uVar8 != 0) {
      uVar2 = *(uint *)((longlong)auStack_240 + lVar4 + 4);
      lVar10 = *(longlong *)((longlong)&lStack_248 + lVar4);
      uVar6 = *(uint *)(param_1 + 0x3c0);
      uVar3 = 0x20 - uVar6;
      if (uVar3 <= uVar8) {
        do {
          uVar5 = uVar3 * uVar2;
          uVar6 = *(uint *)(param_1 + 0x3c0);
          if (uVar5 != 0) {
            plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
            lVar9 = 0;
            do {
              *plVar7 = lVar10 + lVar9;
              plVar7 = plVar7 + 1;
              lVar9 = lVar9 + (ulonglong)uVar2 * 8;
            } while ((ulonglong)uVar5 * 8 - lVar9 != 0);
            uVar6 = *(uint *)(param_1 + 0x3c0);
          }
          lVar10 = lVar10 + (ulonglong)uVar5 * 8;
          uVar8 = uVar8 - uVar3;
          *(uint *)(param_1 + 0x3c0) = uVar6 + uVar3;
          puStack_270 = (undefined *)0x1468b08f0;
          FUN_1468af948(param_1);
          uVar3 = 0x20;
        } while (0x1f < uVar8);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      if (uVar2 * uVar8 != 0) {
        plVar7 = (longlong *)(param_1 + 0x3c8 + (ulonglong)uVar6 * 8);
        lVar9 = 0;
        do {
          *plVar7 = lVar10 + lVar9;
          plVar7 = plVar7 + 1;
          lVar9 = lVar9 + (ulonglong)uVar2 * 8;
        } while ((ulonglong)(uVar2 * uVar8) << 3 != lVar9);
        uVar6 = *(uint *)(param_1 + 0x3c0);
      }
      *(uint *)(param_1 + 0x3c0) = uVar6 + uVar8;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x200);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_270 = &UNK_1468b0981;
  FUN_144d8e3a0();
}



// FUNCTION 1468b0982 FUN_1468b0982 body=908 status=ok
// SIG undefined FUN_1468b0982(void)

undefined4 FUN_1468b0982(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  ulonglong *puVar26;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x70c0) != 0) {
    puVar24 = (undefined8 *)(param_1 + (longlong)*(int *)(param_1 + 0x70c0) * 0x18 + 0x70c8);
    puVar22 = (undefined8 *)(param_1 + 0x70c8);
    local_e0 = puVar24;
    do {
      iVar19 = *(int *)(puVar22 + 2);
      if (iVar19 != 0) {
        uVar17 = *puVar22;
        plVar7 = (longlong *)puVar22[1];
        uVar3 = *(uint *)((longlong)puVar22 + 0x14);
        lVar13 = *plVar7;
        if (*(int *)((longlong)plVar7 + 0x34) == 0) {
          puVar8 = *(undefined8 **)(param_1 + 0x7740);
          *puVar8 = uVar17;
          puVar8[1] = lVar13;
          *(int *)(puVar8 + 2) = iVar19;
          *(uint *)((longlong)puVar8 + 0x14) = uVar3;
LAB_1468b0b14:
          lVar13 = *(longlong *)(param_1 + 0x7748);
          lVar12 = *(longlong *)(param_1 + 0x7740) + 0x18;
          *(longlong *)(param_1 + 0x7740) = lVar12;
          if (lVar12 == lVar13 + 0xfc0) {
            lVar12 = FUN_1400305d2(&DAT_14c949ec0);
            *(longlong *)(local_e8 + 0x7748) = lVar12;
            *(longlong *)(lVar12 + 0xff0) = lVar13;
            *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
            param_1 = local_e8;
          }
        }
        else {
          uVar4 = *(uint *)(plVar7 + 1);
          if (uVar4 != 0) {
            uVar20 = 0;
            iVar19 = 0;
            local_d8 = puVar22;
            local_d0 = uVar17;
            do {
              plVar10 = (longlong *)plVar7[4];
              if ((longlong *)plVar7[4] == (longlong *)0x0) {
                plVar10 = plVar7 + 2;
              }
              uVar15 = uVar20 + 0x1f;
              if (-1 < (int)uVar20) {
                uVar15 = uVar20;
              }
              if ((*(uint *)((longlong)plVar10 + (longlong)((int)uVar15 >> 5) * 4) >>
                   (uVar20 & 0x1f) & 1) == 0) {
                if (0 < iVar19) {
                  puVar22 = *(undefined8 **)(param_1 + 0x7740);
                  *puVar22 = uVar17;
                  puVar22[1] = lVar13;
                  *(int *)(puVar22 + 2) = iVar19;
                  *(uint *)((longlong)puVar22 + 0x14) = uVar3;
                  lVar12 = *(longlong *)(param_1 + 0x7748);
                  lVar11 = *(longlong *)(param_1 + 0x7740) + 0x18;
                  *(longlong *)(param_1 + 0x7740) = lVar11;
                  if (lVar11 == lVar12 + 0xfc0) {
                    lVar11 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(param_1 + 0x7750));
                    *(longlong *)(local_e8 + 0x7748) = lVar11;
                    *(longlong *)(lVar11 + 0xff0) = lVar12;
                    *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
                    uVar17 = local_d0;
                    param_1 = local_e8;
                  }
                  lVar13 = lVar13 + (ulonglong)(iVar19 * uVar3);
                  iVar19 = 0;
                }
                lVar13 = lVar13 + (ulonglong)uVar3;
              }
              else {
                iVar19 = iVar19 + 1;
              }
              uVar20 = uVar20 + 1;
            } while (uVar4 != uVar20);
            puVar22 = local_d8;
            puVar24 = local_e0;
            if (0 < iVar19) {
              puVar8 = *(undefined8 **)(param_1 + 0x7740);
              *puVar8 = uVar17;
              puVar8[1] = lVar13;
              *(int *)(puVar8 + 2) = iVar19;
              *(uint *)((longlong)puVar8 + 0x14) = uVar3;
              goto LAB_1468b0b14;
            }
          }
        }
      }
      puVar22 = puVar22 + 3;
    } while (puVar22 != puVar24);
    *(undefined4 *)(param_1 + 0x70c0) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x7400);
  lVar13 = param_1;
  if ((ulonglong)uVar3 != 0) {
    piVar16 = (int *)(param_1 + 0x7418);
    puVar25 = local_c8;
    uVar18 = 0;
    do {
      iVar19 = *piVar16;
      *puVar25 = (uint)uVar18;
      puVar25 = puVar25 + (0 < iVar19);
      uVar18 = uVar18 + 1;
      piVar16 = piVar16 + 6;
    } while (uVar3 != uVar18);
    puVar21 = local_c8;
    if (puVar21 != puVar25) {
      do {
        puVar26 = *(ulonglong **)(lVar13 + 0x7740);
        lVar12 = *(longlong *)(lVar13 + 0x7748);
        puVar1 = (ulonglong *)(lVar12 + 0xfc0);
        puVar2 = puVar21 + (int)((ulonglong)((longlong)puVar1 - (longlong)puVar26) >> 3) *
                           -0x55555555;
        puVar23 = puVar25;
        if (puVar2 < puVar25) {
          puVar23 = puVar2;
        }
        *(ulonglong **)(lVar13 + 0x7740) =
             puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3;
        if (puVar26 + (longlong)(int)((ulonglong)((longlong)puVar23 - (longlong)puVar21) >> 2) * 3
            == puVar1) {
          lVar13 = FUN_1400305d2(&DAT_14c949ec0,*(undefined4 *)(lVar13 + 0x7750));
          *(longlong *)(local_e8 + 0x7748) = lVar13;
          *(longlong *)(lVar13 + 0xff0) = lVar12;
          *(undefined8 *)(local_e8 + 0x7740) = *(undefined8 *)(local_e8 + 0x7748);
          lVar13 = local_e8;
        }
        do {
          uVar14 = (ulonglong)*puVar21;
          puVar21 = puVar21 + 1;
          uVar18 = *(ulonglong *)(param_1 + 0x7408 + uVar14 * 0x18);
          uVar9 = *(ulonglong *)(param_1 + 0x7410 + uVar14 * 0x18);
          uVar5 = *(undefined4 *)(param_1 + 0x7418 + uVar14 * 0x18);
          uVar6 = *(undefined4 *)((uVar18 & 0xfffffffffffffffe) - 8);
          *puVar26 = uVar18;
          puVar26[1] = uVar9;
          *(undefined4 *)(puVar26 + 2) = uVar5;
          *(undefined4 *)((longlong)puVar26 + 0x14) = uVar6;
          puVar26 = puVar26 + 3;
        } while (puVar21 != puVar23);
        puVar21 = puVar2;
      } while (puVar2 < puVar25);
    }
    *(undefined4 *)(lVar13 + 0x7400) = 0;
  }
  iVar19 = (int)((ulonglong)(*(longlong *)(lVar13 + 0x7740) - *(longlong *)(lVar13 + 0x7748)) >> 3)
           * -0x55555555;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)iVar19 >> 8),
                  *(longlong *)(*(longlong *)(lVar13 + 0x7748) + 0xff0) != 0 || 0 < iVar19);
}



// FUNCTION 1468b0d10 FUN_1468b0d10 body=3931 status=ok
// SIG undefined FUN_1468b0d10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1468b0d10(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint *puVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_54c8 [32];
  longlong *local_54a8;
  longlong local_54a0;
  uint local_5498 [2];
  undefined8 local_5490;
  undefined1 local_1498 [768];
  undefined4 auStack_1198 [64];
  uint auStack_1098 [1026];
  ulonglong local_90;
  
  auVar3 = _DAT_149931e80;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_54c8;
  local_54a8 = (longlong *)(param_1 + 0x40);
  lVar7 = (longlong)*(int *)(param_1 + 0x80);
  if (lVar7 != 0) {
    plVar12 = (longlong *)(param_1 + 0x88);
    lVar11 = 0;
    do {
      lVar11 = lVar11 + 8;
    } while (lVar7 * 8 != lVar11);
    auVar32 = pmovsxbq(unaff_XMM6,0x800);
    auVar33 = pmovsxbq(unaff_XMM7,0x100);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        lVar11 = *(longlong *)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x400);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          lVar8 = uVar22 * 8 + lVar11;
LAB_1468b0e0d:
          uVar22 = (lVar8 - lVar11) - 8;
          auVar25._8_4_ = (int)uVar22;
          auVar25._0_8_ = uVar22;
          auVar25._12_4_ = (int)(uVar22 >> 0x20);
          auVar26._0_8_ = uVar22 >> 3;
          auVar26._8_8_ = auVar25._8_8_ >> 3;
          lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
          uVar17 = 0;
          do {
            auVar28._8_4_ = (int)lVar11;
            auVar28._0_8_ = lVar11;
            auVar28._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
            if ((bool)(~(SUB168(auVar26 | auVar3,0) < (longlong)(uVar17 ^ auVar3._0_8_)) & 1)) {
              *(longlong *)(lVar8 + -8 + uVar17 * 8) = lVar11 + auVar32._0_8_;
            }
            auVar30._8_4_ = (int)uVar17;
            auVar30._0_8_ = uVar17;
            auVar30._12_4_ = (int)(uVar17 >> 0x20);
            if ((longlong)((auVar30._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                SUB168(auVar26 | auVar3,8)) {
              *(longlong *)(lVar8 + uVar17 * 8) = auVar28._8_8_ + auVar32._8_8_;
            }
            uVar17 = uVar17 + 2;
            lVar11 = lVar11 + 0x10;
          } while (((uVar22 >> 3) + 2 & 0xfffffffffffffffe) != uVar17);
          uVar19 = *(uint *)(param_1 + 0x400);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x400);
            if (uVar4 != 0) {
              uVar17 = (longlong)(int)uVar4 + 0x1fffffffffffffff;
              uVar13 = uVar17 & 0x1fffffffffffffff;
              auVar27._8_4_ = (int)uVar13;
              auVar27._0_8_ = uVar13;
              auVar27._12_4_ = (int)(uVar13 >> 0x20);
              lVar8 = param_1 + 0x410 + (ulonglong)uVar19 * 8;
              uVar18 = 0;
              lVar20 = lVar11;
              do {
                auVar29._8_4_ = (int)lVar20;
                auVar29._0_8_ = lVar20;
                auVar29._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
                if ((bool)(~(SUB168(auVar27 | auVar3,0) < (longlong)(uVar18 ^ auVar3._0_8_)) & 1)) {
                  *(longlong *)(lVar8 + -8 + uVar18 * 8) = lVar20 + auVar32._0_8_;
                }
                auVar31._8_4_ = (int)uVar18;
                auVar31._0_8_ = uVar18;
                auVar31._12_4_ = (int)(uVar18 >> 0x20);
                if ((longlong)((auVar31._8_8_ | auVar33._8_8_) ^ auVar3._8_8_) <=
                    SUB168(auVar27 | auVar3,8)) {
                  *(longlong *)(lVar8 + uVar18 * 8) = auVar29._8_8_ + auVar32._8_8_;
                }
                uVar18 = uVar18 + 2;
                lVar20 = lVar20 + 0x10;
              } while ((uVar13 - ((uint)uVar17 & 1)) + 2 != uVar18);
              uVar19 = *(uint *)(param_1 + 0x400);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            lVar11 = lVar11 + (longlong)(int)uVar4 * 8;
            *(uint *)(param_1 + 0x400) = uVar19 + uVar4;
            FUN_1468af948(local_54a8);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x400);
          if (uVar6 != 0) {
            lVar8 = (ulonglong)uVar6 * 8 + lVar11;
            goto LAB_1468b0e0d;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x400) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar7 * 8 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  uVar6 = *(uint *)(param_1 + 0x1c0);
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x1c8 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x1d2 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x1d0 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x400);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x400);
            if (uVar10 != 0) {
              plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *plVar12 = lVar11 + lVar7;
                plVar12 = plVar12 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x400);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x400) = uVar21 + uVar5;
            FUN_1468af948(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        if (uVar4 * uVar19 != 0) {
          plVar12 = (longlong *)(param_1 + 0x408 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *plVar12 = lVar11 + lVar7;
            plVar12 = plVar12 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x400);
        }
        *(uint *)(param_1 + 0x400) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x400);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x50) <=
                        (ulonglong)
                        (**(longlong **)(param_1 + 0x408 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x48))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(**(longlong **)(param_1 + 0x408 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x540);
  uVar4 = 0x400 - uVar6;
  uVar19 = (uint)uVar22;
  if (uVar4 <= uVar19) {
    uVar17 = 0;
    do {
      uVar19 = *(uint *)(param_1 + 0x540);
      uVar6 = uVar19 + uVar4;
      for (; uVar19 < uVar6; uVar19 = uVar19 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
        *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar19 * 0x10) = *puVar16;
        *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar19 * 0x10) = puVar16;
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x540) = uVar6;
      FUN_1468afa8c();
      uVar19 = (int)uVar22 - uVar4;
      uVar22 = (ulonglong)uVar19;
      uVar4 = 0x400;
    } while (0x3ff < uVar19);
    uVar6 = *(uint *)(param_1 + 0x540);
  }
  uVar19 = uVar19 + uVar6;
  if (uVar6 < uVar19) {
    do {
      puVar16 = *(undefined8 **)(param_1 + 0x408 + uVar17 * 8);
      *(undefined8 *)(param_1 + 0x548 + (ulonglong)uVar6 * 0x10) = *puVar16;
      *(undefined8 **)(param_1 + 0x550 + (ulonglong)uVar6 * 0x10) = puVar16;
      uVar6 = uVar6 + ((uVar13 >> (uVar17 & 0x3f) & 1) != 0);
      uVar17 = (ulonglong)((int)uVar17 + 1);
    } while (uVar6 < uVar19);
  }
  *(uint *)(param_1 + 0x540) = uVar19;
  *(undefined4 *)(param_1 + 0x400) = 0;
  if (uVar19 < 0x41) {
    if (uVar19 != 0) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while ((ulonglong)uVar19 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)auStack_1098 + lVar7) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x548 + lVar7 * 4) + 0xc);
        lVar7 = lVar7 + 4;
      } while ((ulonglong)uVar19 << 2 != lVar7);
      goto LAB_1468b1320;
    }
  }
  else {
    plVar12 = (longlong *)(param_1 + 0x548);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x400);
    lVar7 = 0x40;
    do {
      auStack_1198[lVar7] = *(undefined4 *)(*plVar12 + 0xc);
      lVar11 = lVar7 - (ulonglong)uVar19;
      lVar7 = lVar7 + 1;
      plVar12 = plVar12 + 2;
    } while (lVar11 != 0x3f);
LAB_1468b1320:
    if (uVar19 != 0) {
      uVar22 = (ulonglong)uVar19;
      lVar7 = 0;
      do {
        *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
             (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
             *(longlong *)
              (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
        lVar7 = lVar7 + 4;
      } while (uVar22 * 4 - lVar7 != 0);
      if (uVar19 < 0x41) {
        lVar7 = 0;
        do {
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
        lVar7 = 0;
        do {
          *(undefined4 *)((longlong)local_5498 + lVar7) =
               *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
          lVar7 = lVar7 + 0x10;
        } while (uVar22 << 4 != lVar7);
      }
      else {
        lVar7 = 0;
        memset(local_1498,0,0x400);
        do {
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != 0x400);
        lVar7 = 0x40;
        plVar12 = &local_5490;
        do {
          *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
          lVar11 = lVar7 - uVar22;
          lVar7 = lVar7 + 1;
          plVar12 = plVar12 + 2;
        } while (lVar11 != 0x3f);
      }
      uVar17 = 0;
      do {
        uVar19 = DAT_14c75ec9c;
        uVar6 = local_5498[uVar17 * 4];
        if ((uVar6 >> 0x15 & 1) == 0) {
          lVar7 = (&local_5490)[uVar17 * 2];
          uVar2 = *(undefined8 *)(param_1 + 0x548 + uVar17 * 0x10);
          lVar11 = *local_54a8;
          if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468b14d6:
            uVar19 = *(uint *)(lVar7 + 0xc);
            if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
              lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
              do {
                uVar6 = *(uint *)(lVar7 + 8);
                if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468b14c5;
                LOCK();
                bVar24 = uVar6 == *(uint *)(lVar7 + 8);
                if (bVar24) {
                  *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
                }
                uVar6 = DAT_14c75ec9c;
                UNLOCK();
              } while (!bVar24);
              if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
                uVar4 = ~DAT_14c75ec9c;
                uVar19 = *(uint *)(lVar8 + 8);
                do {
                  LOCK();
                  uVar21 = *(uint *)(lVar8 + 8);
                  bVar24 = uVar19 == uVar21;
                  if (bVar24) {
                    *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                    uVar21 = uVar19;
                  }
                  uVar19 = uVar21;
                  UNLOCK();
                } while (!bVar24);
                LOCK();
                *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
                UNLOCK();
                if ((uVar19 & uVar6) != 0) goto LAB_1468b1578;
              }
            }
          }
          else {
            uVar21 = ~DAT_14c75ec9c;
            uVar4 = *(uint *)(lVar7 + 8);
            do {
              LOCK();
              uVar5 = *(uint *)(lVar7 + 8);
              bVar24 = uVar4 == uVar5;
              if (bVar24) {
                *(uint *)(lVar7 + 8) = uVar4 & uVar21;
                uVar5 = uVar4;
              }
              uVar4 = uVar5;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar4 & uVar19) == 0) goto LAB_1468b14d6;
            if ((uVar6 >> 0x18 & 1) == 0) {
              **(undefined8 **)(lVar11 + 0x18) = uVar2;
              lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
              *(longlong *)(lVar11 + 0x18) = lVar7;
              if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
                FUN_1400318c8();
              }
              goto LAB_1468b14c5;
            }
LAB_1468b1578:
            local_54a0 = lVar11 + 0x18;
            FUN_1427ef942();
          }
        }
        else {
          **(undefined8 **)(uVar17 * 0x10 + param_1 + 0x548 + 8) = 0;
        }
LAB_1468b14c5:
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar22);
    }
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  lVar7 = param_1 + 0x4980;
  lVar11 = (longlong)*(int *)(param_1 + 0x49c0);
  if (lVar11 != 0) {
    plVar12 = (longlong *)(param_1 + 0x49c8);
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 8;
    } while (lVar11 * 8 != lVar8);
    do {
      uVar6 = *(uint *)((longlong *)*plVar12 + 1);
      uVar22 = (ulonglong)(int)uVar6;
      if (uVar22 != 0) {
        puVar16 = *(undefined8 **)*plVar12;
        uVar19 = *(uint *)(param_1 + 0x4d40);
        uVar4 = 0x20 - uVar19;
        if (uVar6 < uVar4) {
          puVar15 = puVar16 + uVar22;
LAB_1468b1604:
          puVar9 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8);
          do {
            *puVar9 = *puVar16;
            puVar9 = puVar9 + 1;
            puVar16 = puVar16 + 1;
          } while (puVar16 != puVar15);
          uVar19 = *(uint *)(param_1 + 0x4d40);
        }
        else {
          do {
            uVar19 = *(uint *)(param_1 + 0x4d40);
            if (uVar4 != 0) {
              lVar8 = 0;
              do {
                *(undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar19 * 8 + lVar8) =
                     *(undefined8 *)((longlong)puVar16 + lVar8);
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)uVar4 * 8 - lVar8 != 0);
              uVar19 = *(uint *)(param_1 + 0x4d40);
            }
            uVar6 = (int)uVar22 - uVar4;
            uVar22 = (ulonglong)uVar6;
            puVar16 = puVar16 + (int)uVar4;
            *(uint *)(param_1 + 0x4d40) = uVar19 + uVar4;
            FUN_1468afd28(lVar7);
            uVar4 = 0x20;
          } while (0x1f < uVar6);
          uVar19 = *(uint *)(param_1 + 0x4d40);
          if (uVar6 != 0) {
            puVar15 = puVar16 + uVar6;
            goto LAB_1468b1604;
          }
          uVar6 = 0;
        }
        *(uint *)(param_1 + 0x4d40) = uVar6 + uVar19;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (longlong *)(param_1 + lVar11 * 8 + 0x49c8));
  }
  *(undefined4 *)(param_1 + 0x49c0) = 0;
  uVar6 = *(uint *)(param_1 + 0x4b00);
  local_54a8 = (longlong *)lVar7;
  if ((ulonglong)uVar6 != 0) {
    lVar7 = 0;
    do {
      plVar12 = *(longlong **)(param_1 + 0x4b08 + lVar7);
      uVar1 = *(ushort *)(param_1 + 0x4b12 + lVar7);
      lVar11 = plVar12[1];
      *(ulonglong *)((longlong)local_5498 + lVar7) =
           (ulonglong)*(ushort *)(param_1 + 0x4b10 + lVar7) * 8 + *plVar12;
      *(int *)((longlong)&local_5490 + lVar7) = (int)lVar11;
      *(uint *)((longlong)&local_5490 + lVar7 + 4) = (uint)uVar1;
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar6 << 4 != lVar7);
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)uVar6 * 0x10 != lVar7);
    puVar23 = local_5498;
    do {
      uVar19 = puVar23[2];
      if (uVar19 != 0) {
        uVar4 = puVar23[3];
        lVar7 = *(longlong *)puVar23;
        uVar21 = *(uint *)(param_1 + 0x4d40);
        uVar5 = 0x20 - uVar21;
        if (uVar5 <= uVar19) {
          do {
            uVar10 = uVar5 * uVar4;
            uVar21 = *(uint *)(param_1 + 0x4d40);
            if (uVar10 != 0) {
              puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
              lVar11 = 0;
              do {
                *puVar16 = *(undefined8 *)(lVar7 + lVar11);
                puVar16 = puVar16 + 1;
                lVar11 = lVar11 + (ulonglong)uVar4 * 8;
              } while ((ulonglong)uVar10 * 8 - lVar11 != 0);
              uVar21 = *(uint *)(param_1 + 0x4d40);
            }
            lVar7 = lVar7 + (ulonglong)uVar10 * 8;
            uVar19 = uVar19 - uVar5;
            *(uint *)(param_1 + 0x4d40) = uVar21 + uVar5;
            FUN_1468afd28(local_54a8);
            uVar5 = 0x20;
          } while (0x1f < uVar19);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        if (uVar4 * uVar19 != 0) {
          puVar16 = (undefined8 *)(param_1 + 0x4d48 + (ulonglong)uVar21 * 8);
          lVar11 = 0;
          do {
            *puVar16 = *(undefined8 *)(lVar7 + lVar11);
            puVar16 = puVar16 + 1;
            lVar11 = lVar11 + (ulonglong)uVar4 * 8;
          } while ((ulonglong)(uVar4 * uVar19) << 3 != lVar11);
          uVar21 = *(uint *)(param_1 + 0x4d40);
        }
        *(uint *)(param_1 + 0x4d40) = uVar21 + uVar19;
      }
      puVar23 = puVar23 + 4;
    } while (puVar23 != local_5498 + (longlong)(int)uVar6 * 4);
  }
  *(undefined4 *)(param_1 + 0x4b00) = 0;
  uVar22 = (ulonglong)*(uint *)(param_1 + 0x4d40);
  uVar17 = 0;
  if (uVar22 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 | (ulonglong)
                        (*(ulonglong *)(param_1 + 0x4990) <=
                        (ulonglong)
                        (*(longlong *)(param_1 + 0x4d48 + uVar13 * 8) -
                        *(longlong *)(param_1 + 0x4988))) << ((byte)uVar13 & 0x3f);
      uVar13 = uVar13 + 1;
    } while (uVar22 != uVar13);
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar13 = uVar13 | (ulonglong)(*(longlong *)(param_1 + 0x4d48 + uVar14 * 8) != 0) <<
                        ((byte)uVar14 & 0x3f);
      uVar14 = uVar14 + 1;
    } while (uVar22 != uVar14);
    uVar13 = uVar13 & uVar18;
  }
  uVar22 = POPCOUNT(uVar13);
  uVar6 = *(uint *)(param_1 + 0x4e80);
  uVar19 = 0x400 - uVar6;
  uVar4 = (uint)uVar22;
  if (uVar19 <= uVar4) {
    uVar17 = 0;
    do {
      uVar4 = *(uint *)(param_1 + 0x4e80);
      uVar6 = uVar4 + uVar19;
      for (; uVar4 < uVar6; uVar4 = uVar4 + ((uVar13 >> uVar18 & 1) != 0)) {
        uVar18 = uVar17 & 0x3f;
        *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar4 * 8) =
             *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      *(uint *)(param_1 + 0x4e80) = uVar6;
      FUN_1468aff1c();
      uVar4 = (int)uVar22 - uVar19;
      uVar22 = (ulonglong)uVar4;
      uVar19 = 0x400;
    } while (0x3ff < uVar4);
    uVar6 = *(uint *)(param_1 + 0x4e80);
  }
  uVar4 = uVar4 + uVar6;
  for (; uVar6 < uVar4; uVar6 = uVar6 + ((uVar13 >> uVar22 & 1) != 0)) {
    uVar22 = uVar17 & 0x3f;
    *(undefined8 *)(param_1 + 0x4e88 + (ulonglong)uVar6 * 8) =
         *(undefined8 *)(param_1 + 0x4d48 + uVar17 * 8);
    uVar17 = (ulonglong)((int)uVar17 + 1);
  }
  *(uint *)(param_1 + 0x4e80) = uVar4;
  *(undefined4 *)(param_1 + 0x4d40) = 0;
  if (uVar4 < 0x41) {
    if (uVar4 == 0) goto LAB_1468b1c12;
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  else {
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x40);
    uVar22 = 0;
    do {
      auStack_1098[uVar22] = *(uint *)(*(longlong *)(param_1 + 0x4e88 + uVar22 * 8) + 0xc);
      uVar22 = uVar22 + 1;
    } while (uVar4 != uVar22);
  }
  if (uVar4 != 0) {
    uVar22 = (ulonglong)uVar4;
    lVar7 = 0;
    do {
      *(ulonglong *)((longlong)&local_5490 + lVar7 * 4) =
           (ulonglong)((*(uint *)((longlong)auStack_1098 + lVar7) & 0xffff) * 0x18) +
           *(longlong *)
            (DAT_14c9647c8 + (ulonglong)(*(uint *)((longlong)auStack_1098 + lVar7) >> 0x10) * 8);
      lVar7 = lVar7 + 4;
    } while (uVar22 * 4 - lVar7 != 0);
    if (uVar4 < 0x41) {
      lVar7 = 0;
      do {
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)local_5498 + lVar7) =
             *(undefined4 *)(*(longlong *)((longlong)&local_5490 + lVar7) + 8);
        lVar7 = lVar7 + 0x10;
      } while (uVar22 << 4 != lVar7);
    }
    else {
      lVar7 = 0;
      memset(local_1498,0,0x400);
      do {
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x400);
      lVar7 = 0x40;
      plVar12 = &local_5490;
      do {
        *(undefined4 *)(plVar12 + -1) = *(undefined4 *)(*plVar12 + 8);
        lVar11 = lVar7 - uVar22;
        lVar7 = lVar7 + 1;
        plVar12 = plVar12 + 2;
      } while (lVar11 != 0x3f);
    }
    uVar17 = 0;
    do {
      uVar19 = DAT_14c75ec9c;
      uVar6 = local_5498[uVar17 * 4];
      lVar7 = (&local_5490)[uVar17 * 2];
      uVar2 = *(undefined8 *)(param_1 + 0x4e88 + uVar17 * 8);
      lVar11 = *(longlong *)(param_1 + 0x4980);
      if ((*(uint *)(lVar7 + 8) & DAT_14c75ec9c) == 0) {
LAB_1468b1b56:
        uVar19 = *(uint *)(lVar7 + 0xc);
        if ((uVar6 >> 0x17 & 1) == 0 && 0 < (int)uVar19) {
          lVar8 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
          do {
            uVar6 = *(uint *)(lVar7 + 8);
            if ((uVar6 >> 0x17 & 1) != 0) goto LAB_1468b1b6c;
            LOCK();
            bVar24 = uVar6 == *(uint *)(lVar7 + 8);
            if (bVar24) {
              *(uint *)(lVar7 + 8) = uVar6 | 0x800000;
            }
            uVar6 = DAT_14c75ec9c;
            UNLOCK();
          } while (!bVar24);
          if ((*(uint *)(lVar8 + 8) & DAT_14c75ec9c) != 0) {
            uVar4 = ~DAT_14c75ec9c;
            uVar19 = *(uint *)(lVar8 + 8);
            do {
              LOCK();
              uVar21 = *(uint *)(lVar8 + 8);
              bVar24 = uVar19 == uVar21;
              if (bVar24) {
                *(uint *)(lVar8 + 8) = uVar19 & uVar4;
                uVar21 = uVar19;
              }
              uVar19 = uVar21;
              UNLOCK();
            } while (!bVar24);
            LOCK();
            *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | DAT_14c75ec98;
            UNLOCK();
            if ((uVar19 & uVar6) != 0) {
              uVar6 = *(uint *)(lVar8 + 0xc);
              goto LAB_1468b1c05;
            }
          }
        }
      }
      else {
        uVar21 = ~DAT_14c75ec9c;
        uVar4 = *(uint *)(lVar7 + 8);
        do {
          LOCK();
          uVar5 = *(uint *)(lVar7 + 8);
          bVar24 = uVar4 == uVar5;
          if (bVar24) {
            *(uint *)(lVar7 + 8) = uVar4 & uVar21;
            uVar5 = uVar4;
          }
          uVar4 = uVar5;
          UNLOCK();
        } while (!bVar24);
        LOCK();
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | DAT_14c75ec98;
        UNLOCK();
        if ((uVar4 & uVar19) == 0) goto LAB_1468b1b56;
        if ((uVar6 >> 0x18 & 1) == 0) {
          **(undefined8 **)(lVar11 + 0x18) = uVar2;
          lVar7 = *(longlong *)(lVar11 + 0x18) + 8;
          *(longlong *)(lVar11 + 0x18) = lVar7;
          if (lVar7 == *(longlong *)(lVar11 + 0x20) + 0xf80) {
            FUN_1400318c8();
          }
        }
        else {
          uVar6 = *(uint *)(lVar7 + 0xc);
LAB_1468b1c05:
          local_54a0 = lVar11 + 0x18;
          FUN_1427ef942(~uVar6,&local_54a0);
        }
      }
LAB_1468b1b6c:
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar22);
  }
LAB_1468b1c12:
  *(undefined4 *)(param_1 + 0x4e80) = 0;
  if ((local_90 ^ (ulonglong)auStack_54c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468b1c6c FUN_1468b1c6c body=48 status=ok
// SIG undefined FUN_1468b1c6c(void)

void FUN_1468b1c6c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1468b1c9c FUN_1468b1c9c body=38 status=ok
// SIG undefined FUN_1468b1c9c(void)

undefined8 FUN_1468b1c9c(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468b1cc2 FUN_1468b1cc2 body=136 status=ok
// SIG undefined FUN_1468b1cc2(void)

void FUN_1468b1cc2(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x608);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x60c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x30,0);
      iVar4 = (int)(uVar3 / 0x30);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x60c) = iVar5;
    FUN_1468b1d4c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1468b1d4c FUN_1468b1d4c body=149 status=ok
// SIG undefined FUN_1468b1d4c(void)

void FUN_1468b1d4c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x600);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x30);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x600,0,param_3,0x30);
    memmove(*(void **)((longlong)param_1 + 0x600),param_1,(longlong)param_2 * 0x30);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x600,param_2,param_3,0x30);
  return;
}



// FUNCTION 1468b1de2 FUN_1468b1de2 body=111 status=ok
// SIG undefined FUN_1468b1de2(void)

longlong * FUN_1468b1de2(longlong *param_1,longlong *param_2)

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



// FUNCTION 1468b1e52 FUN_1468b1e52 body=71 status=ok
// SIG undefined FUN_1468b1e52(void)

void FUN_1468b1e52(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x600);
  if (*(longlong *)(param_1 + 0x600) == 0) {
    lVar1 = param_1;
  }
  FUN_1411c9fdd(lVar1,*(undefined4 *)(param_1 + 0x608));
  *(undefined4 *)(param_1 + 0x608) = 0;
  if (*(int *)(param_1 + 0x60c) == 0) {
    return;
  }
  FUN_1468b1e9a(param_1);
  return;
}



// FUNCTION 1468b1e9a FUN_1468b1e9a body=94 status=ok
// SIG undefined FUN_1468b1e9a(void)

void FUN_1468b1e9a(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x60c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x60c) = 0;
    if (*(void **)((longlong)param_1 + 0x600) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x600),
              (longlong)*(int *)((longlong)param_1 + 0x608) * 0x30);
      FUN_1446efa72((longlong)param_1 + 0x600,0,0,0x30);
      return;
    }
  }
  return;
}



// FUNCTION 1468b1ef8 FUN_1468b1ef8 body=119 status=ok
// SIG undefined FUN_1468b1ef8(void)

void FUN_1468b1ef8(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x40c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_1468b1f70(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1468b1f70 FUN_1468b1f70 body=141 status=ok
// SIG undefined FUN_1468b1f70(void)

void FUN_1468b1f70(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,0x20);
  return;
}



// FUNCTION 1468b2006 FUN_1468b2006 body=71 status=ok
// SIG undefined FUN_1468b2006(void)

void FUN_1468b2006(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x400) == 0) {
    lVar1 = param_1;
  }
  FUN_140fba4ef(lVar1,*(undefined4 *)(param_1 + 0x408));
  *(undefined4 *)(param_1 + 0x408) = 0;
  if (*(int *)(param_1 + 0x40c) == 0) {
    return;
  }
  FUN_1468b204e(param_1);
  return;
}



// FUNCTION 1468b204e FUN_1468b204e body=90 status=ok
// SIG undefined FUN_1468b204e(void)

void FUN_1468b204e(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x40c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
    if (*(void **)((longlong)param_1 + 0x400) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x400),
              (longlong)*(int *)((longlong)param_1 + 0x408) << 5);
      FUN_1446efa72((longlong)param_1 + 0x400,0,0,0x20);
      return;
    }
  }
  return;
}



// FUNCTION 1468b20a8 FUN_1468b20a8 body=76 status=ok
// SIG undefined FUN_1468b20a8(void)

void FUN_1468b20a8(void)

{
  int iVar1;
  
  iVar1 = FUN_1468b20f4(DAT_14c950058,DAT_14c95005c);
  if (iVar1 != DAT_14c95005c) {
    DAT_14c95005c = iVar1;
    FUN_1446f8d3c(&DAT_14c950050,DAT_14c950058,iVar1,0x80,0x40);
  }
  return;
}



// FUNCTION 1468b20f4 FUN_1468b20f4 body=93 status=ok
// SIG undefined FUN_1468b20f4(void)

ulonglong FUN_1468b20f4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff80U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 7,0x40);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 1468b2152 FUN_1468b2152 body=64 status=ok
// SIG undefined FUN_1468b2152(void)

void FUN_1468b2152(void)

{
  if (DAT_14c95005c != 0) {
    DAT_14c95005c = 0;
    FUN_1446f8d3c(&DAT_14c950050,DAT_14c950058,0,0x80,0x40);
  }
  return;
}



// FUNCTION 1468b2192 FUN_1468b2192 body=112 status=ok
// SIG undefined FUN_1468b2192(void)

ulonglong FUN_1468b2192(ulonglong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = FUN_1446ddbd2();
  uVar1 = *param_1;
  if (uVar1 != 0 && (uVar1 & 1) == 0) {
    lVar3 = *(longlong *)(uVar1 + 8);
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar4) {
        return uVar1;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1468b2202 FUN_1468b2202 body=182 status=ok
// SIG undefined FUN_1468b2202(void)

void FUN_1468b2202(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
LAB_1468b2216:
    for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
      uVar1 = *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0xd8);
      if ((((uint)uVar1 >> 0x13 & 1) != 0) &&
         (((-1 < (short)uVar1 || (*(char *)((longlong)param_1 + 0x15) != '\0')) ||
          ((*(byte *)(lVar5 + 0x3b) & 0x20) == 0)))) goto LAB_1468b227e;
    }
    if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
      lVar5 = (longlong)(int)param_1[2] + 1;
      iVar4 = (int)lVar5;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 < (int)plVar3[0x3c]) {
        lVar2 = *(longlong *)(plVar3[0x3b] + lVar5 * 0x10);
        lVar5 = 0;
        if (lVar2 != 0) {
          lVar5 = *(longlong *)(lVar2 + 0x48);
        }
        goto LAB_1468b2216;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b0))();
      if (plVar3 != (longlong *)0x0) {
        lVar5 = plVar3[9];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_1468b2216;
      }
      plVar3 = (longlong *)0x0;
    }
    lVar5 = 0;
  }
LAB_1468b227e:
  *param_1 = (longlong)plVar3;
  param_1[1] = lVar5;
  return;
}



// FUNCTION 1468b22b8 FUN_1468b22b8 body=368 status=ok
// SIG undefined FUN_1468b22b8(void)

undefined4 * FUN_1468b22b8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468b242a(param_1,local_48);
  lVar7 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_140d69258(local_40 + 1,lVar7);
  FUN_1468b25bc(local_40 + 0xb,lVar7 + 0x50);
  *(undefined4 *)(local_40 + 0x15) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_1468b2518(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0xac) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x15) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1468b285c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b242a FUN_1468b242a body=237 status=ok
// SIG undefined FUN_1468b242a(void)

int * FUN_1468b242a(longlong *param_1,int *param_2)

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
      FUN_14573f9e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xb0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xb0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xb0 + *param_1;
  return param_2;
}



// FUNCTION 1468b2518 FUN_1468b2518 body=164 status=ok
// SIG undefined FUN_1468b2518(void)

undefined8 FUN_1468b2518(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xb0);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xb0) == *param_3) {
          FUN_145caebfe((longlong)_Dst + 8);
          memmove(_Dst,param_3,0xa8);
          FUN_1468b27e2(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xa8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468b25bc FUN_1468b25bc body=123 status=ok
// SIG undefined FUN_1468b25bc(void)

undefined8 * FUN_1468b25bc(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1468b2638();
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



// FUNCTION 1468b2638 FUN_1468b2638 body=425 status=ok
// SIG undefined FUN_1468b2638(void)

longlong * FUN_1468b2638(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    uVar5 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, uStack_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x60;
        *(undefined4 *)(lVar2 + 0x50 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x48 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_140bb2a1a(lVar2 + lVar8 + 8);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != param_1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b27e2 FUN_1468b27e2 body=122 status=ok
// SIG undefined FUN_1468b27e2(void)

void FUN_1468b27e2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xb0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb0 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1468b285c FUN_1468b285c body=482 status=ok
// SIG undefined FUN_1468b285c(void)

void FUN_1468b285c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xb0;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xac + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xa8 + lVar7) =
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



// FUNCTION 1468b2a40 FUN_1468b2a40 body=31 status=ok
// SIG undefined FUN_1468b2a40(void)

undefined8 FUN_1468b2a40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468b2a7c FUN_1468b2a7c body=93 status=ok
// SIG undefined FUN_1468b2a7c(void)

void FUN_1468b2a7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e892d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1468b2ada FUN_1468b2ada body=126 status=ok
// SIG undefined FUN_1468b2ada(void)

void FUN_1468b2ada(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e892d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468b2b49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1468b2b58 FUN_1468b2b58 body=21 status=ok
// SIG undefined FUN_1468b2b58(void)

undefined8 FUN_1468b2b58(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1468b2b6e FUN_1468b2b6e body=114 status=ok
// SIG undefined FUN_1468b2b6e(void)

void FUN_1468b2b6e(longlong *param_1,int param_2)

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



// FUNCTION 1468b2be0 FUN_1468b2be0 body=114 status=ok
// SIG undefined FUN_1468b2be0(void)

void FUN_1468b2be0(longlong *param_1,int param_2)

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



// FUNCTION 1468b2c52 FUN_1468b2c52 body=114 status=ok
// SIG undefined FUN_1468b2c52(void)

void FUN_1468b2c52(longlong *param_1,int param_2)

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



// FUNCTION 1468b2cc4 FUN_1468b2cc4 body=79 status=ok
// SIG undefined FUN_1468b2cc4(void)

void FUN_1468b2cc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14c951640;
  uVar1 = FUN_14598598a();
  uVar2 = FUN_140010cf7(uVar1,uVar2,0,0x510,0,0,0,0);
  FUN_1468b2d14(uVar2,param_1);
  return;
}



// FUNCTION 1468b2d14 FUN_1468b2d14 body=125 status=ok
// SIG undefined FUN_1468b2d14(void)

undefined8 * FUN_1468b2d14(undefined8 *param_1)

{
  FUN_1468be472();
  *param_1 = &PTR_FUN_149e73a90;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 1468b2d94 FUN_1468b2d94 body=230 status=ok
// SIG undefined FUN_1468b2d94(void)

int * FUN_1468b2d94(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 1468b2e7a FUN_1468b2e7a body=176 status=ok
// SIG undefined FUN_1468b2e7a(void)

void FUN_1468b2e7a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
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
  undefined4 uVar16;
  undefined1 uVar17;
  int iVar18;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar18 = FUN_14587a5e6();
    if (iVar18 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar18 * 0x48);
      if (*(longlong *)(puVar1 + 0xc) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + 4) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      uVar10 = param_3[8];
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      uVar14 = param_3[0xd];
      uVar15 = param_3[0xe];
      uVar16 = param_3[0xf];
      puVar1[0xc] = param_3[0xc];
      puVar1[0xd] = uVar14;
      puVar1[0xe] = uVar15;
      puVar1[0xf] = uVar16;
      puVar1[8] = uVar10;
      puVar1[9] = uVar11;
      puVar1[10] = uVar12;
      puVar1[0xb] = uVar13;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1468b2f2a(param_1,*param_4,1);
      *param_4 = iVar18;
      uVar17 = 1;
      goto LAB_1468b2e9b;
    }
  }
  uVar17 = 0;
LAB_1468b2e9b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar17;
  }
  return;
}



// FUNCTION 1468b2f2a FUN_1468b2f2a body=138 status=ok
// SIG undefined FUN_1468b2f2a(void)

void FUN_1468b2f2a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x48 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x48) = param_2;
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
      puVar7 = puVar7 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1468b2fb4 FUN_1468b2fb4 body=629 status=ok
// SIG undefined FUN_1468b2fb4(void)

void FUN_1468b2fb4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
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
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar15 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar13 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar13 = plVar1;
        }
        *(undefined4 *)((longlong)plVar13 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar15) * 4)
             = 0xffffffff;
        uVar15 = uVar15 + 1;
      } while (uVar2 != uVar15);
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
    bVar6 = local_78._4_4_ < (int)local_60[3];
    iVar18 = local_78._4_4_;
    local_90 = param_1;
    local_78 = uVar4;
    if (bVar6) {
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar18;
        uVar4 = *(undefined8 *)(lVar3 + lVar11 * 0x48);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar11 * 0x48);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar17 = (uint)uVar5 & 0xffff;
        uVar15 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar16 = (uint)uVar4 & 0xffff;
        uVar15 = ((uint)uVar4 << 0x10 | uVar16) + (int)((ulonglong)uVar4 >> 0x20) +
                 (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar16 >> 4);
        uVar8 = FUN_144a78877(0,(uVar15 >> 2) +
                                ((uint)uVar5 << 0x10 | uVar17) + (int)((ulonglong)uVar5 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar17 >> 4) + uVar15 * 0x40 +
                                0x9e3779b9 ^ uVar15);
        iVar10 = *(int *)(lVar3 + 0x18 + lVar11 * 0x48);
        puVar14 = &DAT_149dfb77a;
        if (iVar10 != 0) {
          puVar14 = *(undefined2 **)(lVar3 + 0x10 + lVar11 * 0x48);
        }
        iVar7 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar7 = 0;
        }
        uVar9 = FUN_144a49b4a(iVar7,puVar14);
        iVar10 = FUN_144a78877(uVar8,uVar9);
        uVar12 = (longlong)iVar10 & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar12;
        *(int *)(lVar3 + 0x44 + lVar11 * 0x48) = iVar10;
        plVar13 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar13 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x40 + lVar11 * 0x48) =
             *(undefined4 *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & uVar12) * 4);
        plVar13 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar13 = plVar1;
        }
        *(int *)((longlong)plVar13 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar18;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        bVar6 = local_78._4_4_ < (int)local_80[3];
        iVar18 = local_78._4_4_;
      } while (bVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468b322a FUN_1468b322a body=336 status=ok
// SIG undefined FUN_1468b322a(void)

longlong * FUN_1468b322a(longlong *param_1,longlong *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar3 != 0) {
    FUN_1468b337c(param_2);
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
        FUN_146272134(param_2,iVar3);
      }
      FUN_14058ae9c((longlong)iVar3 * 0x20 + *param_2,lVar2 * 0x28 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468b337c FUN_1468b337c body=96 status=ok
// SIG undefined FUN_1468b337c(void)

void FUN_1468b337c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1468b33dc FUN_1468b33dc body=128 status=ok
// SIG undefined FUN_1468b33dc(void)

void FUN_1468b33dc(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c9495a8;
  if (DAT_14c9495dc != 0) {
    *(int *)(DAT_14c9495a8 + (longlong)DAT_14c9495d8 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9495dc) {
    iVar4 = DAT_14c9495d8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14c9495dc = DAT_14c9495dc + 1;
  puVar3 = &DAT_14c9495b8;
  if (DAT_14c9495c8 != (undefined *)0x0) {
    puVar3 = DAT_14c9495c8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c9495d8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1468b345c FUN_1468b345c body=128 status=ok
// SIG undefined FUN_1468b345c(void)

void FUN_1468b345c(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c949558;
  if (DAT_14c94958c != 0) {
    *(int *)(DAT_14c949558 + (longlong)DAT_14c949588 * 0x14) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x14) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c94958c) {
    iVar4 = DAT_14c949588;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x14) = iVar4;
  DAT_14c94958c = DAT_14c94958c + 1;
  puVar3 = &DAT_14c949568;
  if (DAT_14c949578 != (undefined *)0x0) {
    puVar3 = DAT_14c949578;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c949588 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1468b34dc FUN_1468b34dc body=63 status=ok
// SIG undefined FUN_1468b34dc(void)

void FUN_1468b34dc(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1407a3850(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_141716c12(param_1);
    return;
  }
  FUN_1468b351c(param_1);
  FUN_1407a3850(param_1);
  return;
}



// FUNCTION 1468b351c FUN_1468b351c body=322 status=ok
// SIG undefined FUN_1468b351c(void)

void FUN_1468b351c(longlong *param_1)

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



// FUNCTION 1468b3660 FUN_1468b3660 body=114 status=ok
// SIG undefined FUN_1468b3660(void)

void FUN_1468b3660(longlong *param_1,int param_2)

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



// FUNCTION 1468b36d2 FUN_1468b36d2 body=119 status=ok
// SIG undefined FUN_1468b36d2(void)

void FUN_1468b36d2(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0xa0;
  _Dst = (void *)(lVar1 + lVar3);
  *(undefined4 *)(lVar1 + 0x98 + lVar3) = 0;
  if (*(longlong *)(lVar1 + 0x90 + lVar3) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68((longlong)_Dst + 0x50);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xa0),(longlong)(int)(~param_2 + iVar2) * 0xa0);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1468b374a FUN_1468b374a body=62 status=ok
// SIG undefined FUN_1468b374a(void)

void FUN_1468b374a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468b3788(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xa0,8);
  }
  return;
}



// FUNCTION 1468b3788 FUN_1468b3788 body=112 status=ok
// SIG undefined FUN_1468b3788(void)

ulonglong FUN_1468b3788(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xa0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1468b37c2;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xa0,8);
      param_2 = param_2 / 0xa0;
    }
  }
LAB_1468b37c2:
  return param_2 & 0xffffffff;
}



// FUNCTION 1468b37f8 FUN_1468b37f8 body=535 status=ok
// SIG undefined FUN_1468b37f8(void)

longlong * FUN_1468b37f8(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1468b3a50(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar6 = 8;
    lVar7 = 0;
    do {
      puVar4 = (undefined1 *)(*param_2 + lVar6);
      (**(code **)(*param_1 + 0x160))(param_1,*param_2 + lVar6 + -8);
      puVar3 = *(undefined1 **)param_1[1];
      if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar4,1);
      }
      else {
        *puVar4 = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0xc;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_3c) ||
       (FUN_1468b3a50(param_2), 0 < (int)local_3c)) {
      iVar5 = 0;
      do {
        lVar6 = FUN_1468b3a10(param_2);
        (**(code **)(*param_1 + 0x160))(param_1,lVar6);
        puVar3 = *(undefined1 **)param_1[1];
        if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(lVar6 + 8),1);
        }
        else {
          *(undefined1 *)(lVar6 + 8) = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468b3a10 FUN_1468b3a10 body=63 status=ok
// SIG undefined FUN_1468b3a10(void)

longlong FUN_1468b3a10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14614c84a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_1468b3ac0(lVar2);
  return lVar2;
}



// FUNCTION 1468b3a50 FUN_1468b3a50 body=112 status=ok
// SIG undefined FUN_1468b3a50(void)

void FUN_1468b3a50(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 1468b3ac0 FUN_1468b3ac0 body=12 status=ok
// SIG undefined FUN_1468b3ac0(void)

void FUN_1468b3ac0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 1468b3acc FUN_1468b3acc body=122 status=ok
// SIG undefined FUN_1468b3acc(void)

undefined8 * FUN_1468b3acc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_140851d9a();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  *puVar3 = &PTR_FUN_149e74340;
  *(undefined8 *)((longlong)puVar3 + 0x54) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  return puVar3;
}



// FUNCTION 1468b3b46 FUN_1468b3b46 body=114 status=ok
// SIG undefined FUN_1468b3b46(void)

void FUN_1468b3b46(longlong *param_1,int param_2)

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



// FUNCTION 1468b3bb8 FUN_1468b3bb8 body=125 status=ok
// SIG undefined FUN_1468b3bb8(void)

void FUN_1468b3bb8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x10;
    if (0x10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_1468b3c36(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1468b3c36 FUN_1468b3c36 body=142 status=ok
// SIG undefined FUN_1468b3c36(void)

void FUN_1468b3c36(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 1468b3cc4 FUN_1468b3cc4 body=145 status=ok
// SIG undefined FUN_1468b3cc4(void)

void FUN_1468b3cc4(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0xc08);
  *(uint *)(param_1 + 0xc08) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0xc0c) - iVar1) < param_2) {
    FUN_1468b3d56(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar2 = param_1;
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x60 + lVar2 + 0x58);
  do {
    *(undefined8 *)(puVar3 + -10) = 0;
    puVar3[-8] = 0;
    *(undefined8 *)(puVar3 + -0x16) = 0;
    *(undefined8 *)(puVar3 + -0x14) = 0;
    *(undefined8 *)(puVar3 + -0x12) = 0;
    *(undefined8 *)(puVar3 + -0x10) = 0;
    *(undefined8 *)(puVar3 + -7) = 0xffffffff00000080;
    puVar3[-5] = 0;
    *(undefined8 *)(puVar3 + -2) = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 0x18;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1468b3d56 FUN_1468b3d56 body=136 status=ok
// SIG undefined FUN_1468b3d56(void)

void FUN_1468b3d56(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xc08);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0xc0c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x60,0);
      iVar4 = (int)(uVar3 / 0x60);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xc0c) = iVar5;
    FUN_1468b3de0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1468b3de0 FUN_1468b3de0 body=149 status=ok
// SIG undefined FUN_1468b3de0(void)

void FUN_1468b3de0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc00);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x60);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc00,0,param_3,0x60);
    memmove(*(void **)((longlong)param_1 + 0xc00),param_1,(longlong)param_2 * 0x60);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc00,param_2,param_3,0x60);
  return;
}



// FUNCTION 1468b3e76 FUN_1468b3e76 body=175 status=ok
// SIG undefined FUN_1468b3e76(void)

bool FUN_1468b3e76(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar2 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0xc08) == 0) {
    iVar5 = 0;
  }
  else {
    lVar3 = 0;
    iVar5 = 0;
    do {
      iVar5 = (iVar5 + *(int *)(lVar2 + 0x18 + lVar3)) - *(int *)(lVar2 + 0x44 + lVar3);
      lVar3 = lVar3 + 0x60;
    } while ((longlong)*(int *)(param_1 + 0xc08) * 0x60 != lVar3);
  }
  uVar4 = (DAT_14c949e20 - DAT_14c949e4c) + iVar5;
  if ((uint)(DAT_14c949e20 - DAT_14c949e4c) < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1400bac10(&DAT_14c949e18,uVar4);
    iVar1 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((DAT_14c949e60 == 0) || (DAT_14c949e60 < iVar1)) {
      DAT_14c949e60 = iVar1;
      FUN_144a56d22(&DAT_14c949e18);
    }
  }
  return 0 < iVar5;
}



// FUNCTION 1468b3f26 FUN_1468b3f26 body=71 status=ok
// SIG undefined FUN_1468b3f26(void)

void FUN_1468b3f26(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0xc0c) < 0) {
    FUN_1468b40ce(param_1);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar1 = param_1;
  }
  FUN_14689d8f4(lVar1,*(undefined4 *)(param_1 + 0xc08));
  *(undefined4 *)(param_1 + 0xc08) = 0;
  return;
}



// FUNCTION 1468b3f6e FUN_1468b3f6e body=350 status=ok
// SIG undefined FUN_1468b3f6e(void)

void FUN_1468b3f6e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1400bac10(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_144a56d22(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_1447cbafe(param_1,&local_50,(longlong)iStack_5c * 0xc + *local_78,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b40ce FUN_1468b40ce body=71 status=ok
// SIG undefined FUN_1468b40ce(void)

void FUN_1468b40ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar1 = param_1;
  }
  FUN_14689d8f4(lVar1,*(undefined4 *)(param_1 + 0xc08));
  *(undefined4 *)(param_1 + 0xc08) = 0;
  if (*(int *)(param_1 + 0xc0c) == 0) {
    return;
  }
  FUN_1468b4116(param_1);
  return;
}



// FUNCTION 1468b4116 FUN_1468b4116 body=94 status=ok
// SIG undefined FUN_1468b4116(void)

void FUN_1468b4116(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xc0c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xc0c) = 0;
    if (*(void **)((longlong)param_1 + 0xc00) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xc00),
              (longlong)*(int *)((longlong)param_1 + 0xc08) * 0x60);
      FUN_1446efa72((longlong)param_1 + 0xc00,0,0,0x60);
      return;
    }
  }
  return;
}



// FUNCTION 1468b4174 FUN_1468b4174 body=119 status=ok
// SIG undefined FUN_1468b4174(void)

void FUN_1468b4174(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x40c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_1468b41ec(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1468b41ec FUN_1468b41ec body=141 status=ok
// SIG undefined FUN_1468b41ec(void)

void FUN_1468b41ec(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,0x20);
  return;
}



// FUNCTION 1468b427a FUN_1468b427a body=71 status=ok
// SIG undefined FUN_1468b427a(void)

void FUN_1468b427a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x400) == 0) {
    lVar1 = param_1;
  }
  FUN_14118ffe0(lVar1,*(undefined4 *)(param_1 + 0x408));
  *(undefined4 *)(param_1 + 0x408) = 0;
  if (*(int *)(param_1 + 0x40c) == 0) {
    return;
  }
  FUN_1468b42c2(param_1);
  return;
}



// FUNCTION 1468b42c2 FUN_1468b42c2 body=90 status=ok
// SIG undefined FUN_1468b42c2(void)

void FUN_1468b42c2(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x40c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
    if (*(void **)((longlong)param_1 + 0x400) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x400),
              (longlong)*(int *)((longlong)param_1 + 0x408) << 5);
      FUN_1446efa72((longlong)param_1 + 0x400,0,0,0x20);
      return;
    }
  }
  return;
}



// FUNCTION 1468b431c FUN_1468b431c body=48 status=ok
// SIG undefined FUN_1468b431c(void)

void FUN_1468b431c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1468b434c FUN_1468b434c body=64 status=ok
// SIG undefined FUN_1468b434c(void)

undefined8 * FUN_1468b434c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_149eb0140;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468b43fc FUN_1468b43fc body=249 status=ok
// SIG undefined FUN_1468b43fc(void)

/* WARNING: Removing unreachable block (ram,0x0001468b441f) */
/* WARNING: Removing unreachable block (ram,0x0001468b4489) */

void FUN_1468b43fc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *_Dst;
  
  lVar2 = (longlong)DAT_14c949988;
  LOCK();
  UNLOCK();
  if ((DAT_14c949980 & 1) != 0) {
    do {
    } while( true );
  }
  if (DAT_14c949988 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)DAT_14c949988 + 8);
    if ((longlong)iVar1 < 0x40) {
      *(int *)((longlong)DAT_14c949988 + 8) = iVar1 + 1;
      *(longlong *)(lVar2 + 0x10 + (longlong)iVar1 * 8) = param_1;
      DAT_14c949980 = 0;
      return;
    }
  }
  DAT_14c949980 = 0;
  _Dst = (longlong *)FUN_14001cc68(0x210);
  memset(_Dst,0,0x210);
  lVar3 = (longlong)DAT_14c949988;
  LOCK();
  UNLOCK();
  if ((DAT_14c949980 & 1) == 0) {
    if ((longlong *)lVar2 != DAT_14c949988 && DAT_14c949988 != (longlong *)0x0) {
      iVar1 = *(int *)((longlong)DAT_14c949988 + 8);
      if ((longlong)iVar1 < 0x40) {
        *(int *)((longlong)DAT_14c949988 + 8) = iVar1 + 1;
        *(longlong *)(lVar3 + 0x10 + (longlong)iVar1 * 8) = param_1;
        DAT_14c949980 = 0;
        FUN_1400020a8(_Dst);
        return;
      }
    }
    *_Dst = (longlong)DAT_14c949988;
    lVar2 = _Dst[1];
    DAT_14c949988 = _Dst;
    *(int *)(_Dst + 1) = (int)lVar2 + 1;
    _Dst[(longlong)(int)lVar2 + 2] = param_1;
    DAT_14c949980 = 0;
    return;
  }
  do {
  } while( true );
}



// FUNCTION 1468b44f6 FUN_1468b44f6 body=249 status=ok
// SIG undefined FUN_1468b44f6(void)

/* WARNING: Removing unreachable block (ram,0x0001468b4519) */
/* WARNING: Removing unreachable block (ram,0x0001468b4583) */

void FUN_1468b44f6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *_Dst;
  
  lVar2 = (longlong)DAT_14c9499c8;
  LOCK();
  UNLOCK();
  if ((DAT_14c9499c0 & 1) != 0) {
    do {
    } while( true );
  }
  if (DAT_14c9499c8 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)DAT_14c9499c8 + 8);
    if ((longlong)iVar1 < 0x40) {
      *(int *)((longlong)DAT_14c9499c8 + 8) = iVar1 + 1;
      *(longlong *)(lVar2 + 0x10 + (longlong)iVar1 * 8) = param_1;
      DAT_14c9499c0 = 0;
      return;
    }
  }
  DAT_14c9499c0 = 0;
  _Dst = (longlong *)FUN_14001cc68(0x210);
  memset(_Dst,0,0x210);
  lVar3 = (longlong)DAT_14c9499c8;
  LOCK();
  UNLOCK();
  if ((DAT_14c9499c0 & 1) == 0) {
    if ((longlong *)lVar2 != DAT_14c9499c8 && DAT_14c9499c8 != (longlong *)0x0) {
      iVar1 = *(int *)((longlong)DAT_14c9499c8 + 8);
      if ((longlong)iVar1 < 0x40) {
        *(int *)((longlong)DAT_14c9499c8 + 8) = iVar1 + 1;
        *(longlong *)(lVar3 + 0x10 + (longlong)iVar1 * 8) = param_1;
        DAT_14c9499c0 = 0;
        FUN_1400020a8(_Dst);
        return;
      }
    }
    *_Dst = (longlong)DAT_14c9499c8;
    lVar2 = _Dst[1];
    DAT_14c9499c8 = _Dst;
    *(int *)(_Dst + 1) = (int)lVar2 + 1;
    _Dst[(longlong)(int)lVar2 + 2] = param_1;
    DAT_14c9499c0 = 0;
    return;
  }
  do {
  } while( true );
}



// FUNCTION 1468b45f0 FUN_1468b45f0 body=63 status=ok
// SIG undefined FUN_1468b45f0(void)

void FUN_1468b45f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468b4630(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1468b4630 FUN_1468b4630 body=97 status=ok
// SIG undefined FUN_1468b4630(void)

ulonglong FUN_1468b4630(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1468b4692 FUN_1468b4692 body=132 status=ok
// SIG undefined FUN_1468b4692(void)

void FUN_1468b4692(longlong param_1,int param_2)

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



// FUNCTION 1468b4718 FUN_1468b4718 body=38 status=ok
// SIG undefined FUN_1468b4718(void)

undefined8 FUN_1468b4718(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468b473e FUN_1468b473e body=918 status=ok
// SIG undefined FUN_1468b473e(void)

ulonglong FUN_1468b473e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  size_t sVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 unaff_R13;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  int local_b0;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  wchar_t local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = param_2;
  FUN_1400021e4(&local_58,&local_68);
  if ((longlong)local_60 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    iVar8 = 1;
    lVar6 = 0;
    do {
      puVar7 = local_68;
      if (*(short *)((longlong)local_68 + lVar6) == 0x2e) {
        if (iVar8 != 0) {
          uVar11 = 0;
          uVar9 = local_60 - 1;
          if (local_60 == 0) {
            uVar9 = 0;
          }
          if ((int)(iVar8 - 1U) < (int)uVar9) {
            uVar9 = iVar8 - 1U;
          }
          uVar10 = (ulonglong)uVar9;
          if ((int)uVar9 < 1) {
            uVar10 = uVar11;
          }
          FUN_14006620a(&local_80,local_68,uVar10);
          if (iStack_78 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          else {
            puVar7 = (undefined2 *)CONCAT44(uStack_7c,local_80);
          }
          FUN_1446f470e(&local_88,puVar7,1);
          plVar3 = (longlong *)FUN_144a87586(param_1,local_88);
          if (plVar3 == (longlong *)0x0) goto LAB_1468b4abd;
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_140001000(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
          local_4c[0] = L'.';
          local_4c[1] = L'\0';
          goto LAB_1468b48f7;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 2;
    } while ((longlong)local_60 * 2 != lVar6);
  }
  FUN_1446f470e(&local_70,puVar7,1);
  lVar6 = FUN_144a87586(param_1,local_70);
  if (lVar6 == 0) {
    uVar11 = 0;
  }
  else {
    iVar8 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
      FUN_140001000(param_3,iVar8);
    }
    *(longlong *)(*param_3 + (longlong)iVar8 * 8) = lVar6;
    uVar11 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  }
  goto LAB_1468b4806;
  while( true ) {
    iVar1 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
      FUN_140001000(param_3,iVar1);
    }
    *(longlong **)(*param_3 + (longlong)iVar1 * 8) = plVar3;
    if (iVar2 < 0) break;
LAB_1468b48f7:
    sVar4 = wcslen(local_4c);
    local_b8 = 0;
    local_b0 = iVar8;
    iVar2 = FUN_1447ee042(&local_68,local_4c,sVar4 & 0xffffffff,0);
    FUN_144a63a7c(&local_68,&local_98,iVar8);
    if (CONCAT44(uStack_7c,local_80) != 0) {
      FUN_1400020a8();
    }
    local_80 = local_98;
    uStack_7c = uStack_94;
    iStack_78 = iStack_90;
    uStack_74 = uStack_8c;
    lVar6 = plVar3[1];
    lVar5 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar12 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar12) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar12 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
      if (!bVar12) goto LAB_1468b4a2b;
LAB_1468b4985:
      puVar7 = &DAT_149dfb77a;
      if (iStack_78 != 0) {
        puVar7 = (undefined2 *)CONCAT44(uStack_7c,local_80);
      }
      lVar6 = plVar3[0xe];
      FUN_1446f470e(&local_a0,puVar7,1);
      plVar3 = (longlong *)FUN_144a87586(lVar6,local_a0);
    }
    else {
      if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1468b4985;
LAB_1468b4a2b:
      puVar7 = &DAT_149dfb77a;
      if (iStack_78 != 0) {
        puVar7 = (undefined2 *)CONCAT44(uStack_7c,local_80);
      }
      FUN_1446f470e(&local_98,puVar7,1);
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3,&local_98);
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        lVar6 = plVar3[1];
        lVar5 = FUN_1446ddbd2();
        if (*(ulonglong *)(lVar5 + 8) == 0) {
          bVar12 = lVar6 != 0;
          if (lVar6 != lVar5 && bVar12) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar12 = lVar6 != 0;
              if (lVar6 == lVar5) break;
            } while (lVar6 != 0);
          }
        }
        else {
          bVar12 = (*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
        }
        if (!bVar12) {
          plVar3 = (longlong *)0x0;
        }
      }
    }
    uVar11 = CONCAT71((int7)((ulonglong)&local_68 >> 8),plVar3 != (longlong *)0x0);
    if (plVar3 == (longlong *)0x0) break;
  }
LAB_1468b4abd:
  if (CONCAT44(uStack_7c,local_80) != 0) {
    FUN_1400020a8();
  }
LAB_1468b4806:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b4ad5 FUN_1468b4ad5 body=174 status=ok
// SIG undefined FUN_1468b4ad5(void)

void FUN_1468b4ad5(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0x32;
  while( true ) {
    if ((DAT_14c9647d8 - DAT_14c9647dc) + DAT_14c964818 < 0x10000) {
      return;
    }
    lVar3 = FUN_1468b88d0(DAT_14c951640);
    if (lVar3 == 0) break;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1468b9618(param_1,iVar1);
    }
    *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar3;
    uVar2 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    FUN_1447f71cc(lVar4,0x40000000);
    FUN_1427f2241(0xd,lVar3);
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      return;
    }
  }
  return;
}



// FUNCTION 1468b4b83 FUN_1468b4b83 body=95 status=ok
// SIG undefined FUN_1468b4b83(void)

void FUN_1468b4b83(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(lVar2 + lVar5) + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_14482b126(lVar4,0x40000000);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1468b4bea FUN_1468b4bea body=165 status=ok
// SIG undefined FUN_1468b4bea(void)

undefined8 FUN_1468b4bea(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((undefined8 *)param_1[1] == param_1) {
    uVar2 = FUN_144a797b2();
    return uVar2;
  }
  if (param_1[2] == 0) {
    uVar2 = *param_1;
    lVar1 = FUN_1446f8646();
    lVar3 = 0;
    uVar4 = 0;
LAB_1468b4c20:
    uVar2 = FUN_140be85e0(lVar1,lVar3,uVar2,uVar4,0,0);
  }
  else {
    lVar1 = FUN_1468b4bea();
    if (lVar1 != 0) {
      lVar3 = FUN_144a797b2();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar3 = FUN_1468b4bea();
        if (lVar3 != 0) {
          uVar2 = *param_1;
          uVar4 = 1;
          goto LAB_1468b4c20;
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1468b4c90 FUN_1468b4c90 body=287 status=ok
// SIG undefined FUN_1468b4c90(void)

void FUN_1468b4c90(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1468b4c90(*(longlong *)(param_1 + 0x10),param_2);
      uVar1 = **(ulonglong **)(*(longlong *)(param_1 + 0x10) + 8);
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      if ((uVar1 == DAT_14c892e7c) ||
         (**(ulonglong **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 8) !=
          (ulonglong)DAT_14c892e7c)) {
        puVar3 = *(undefined2 **)(param_2 + 8);
        if (*(undefined2 **)(param_2 + 0x10) <= puVar3 + 1) {
          FUN_140213274(param_2,1);
          puVar3 = *(undefined2 **)(param_2 + 8);
        }
        *(undefined2 **)(param_2 + 8) = puVar3 + 1;
        *puVar3 = 0x2e;
      }
      else {
        puVar3 = *(undefined2 **)(param_2 + 8);
        if (*(undefined2 **)(param_2 + 0x10) <= puVar3 + 1) {
          FUN_140213274(param_2,1);
          puVar3 = *(undefined2 **)(param_2 + 8);
        }
        *(undefined2 **)(param_2 + 8) = puVar3 + 1;
        *puVar3 = 0x3a;
      }
    }
    FUN_14005eb5c(param_1,param_2);
    return;
  }
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (*(undefined8 **)(param_2 + 0x10) <= puVar2 + 1) {
    FUN_140213274(param_2,4);
    puVar2 = *(undefined8 **)(param_2 + 8);
  }
  *puVar2 = 0x65006e006f004e;
  *(undefined8 **)(param_2 + 8) = puVar2 + 1;
  return;
}



// FUNCTION 1468b4db0 FUN_1468b4db0 body=148 status=ok
// SIG undefined FUN_1468b4db0(void)

undefined8 FUN_1468b4db0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_258 [32];
  undefined2 *local_238;
  undefined2 *local_230;
  ulonglong *local_228;
  char local_220;
  undefined2 local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_238 = local_218;
  local_220 = '\0';
  local_228 = &local_18;
  local_230 = local_238;
  FUN_1468b4c90(param_1,&local_238);
  *local_230 = 0;
  FUN_140056680(param_2,local_238);
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b4e46 FUN_1468b4e46 body=179 status=ok
// SIG undefined FUN_1468b4e46(void)

undefined8 FUN_1468b4e46(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1468b4db0(param_1,&local_38);
  puVar2 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  FUN_1400021e4(*(undefined8 *)(param_1 + 8),&local_48);
  puVar1 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar1 = local_48;
  }
  FUN_140002266(param_2,L"%s %s",puVar1,puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b4efa FUN_1468b4efa body=319 status=ok
// SIG undefined FUN_1468b4efa(void)

ulonglong FUN_1468b4efa(ulonglong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  ulonglong *local_40;
  ulonglong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_1;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[8];
    }
    iVar7 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_2[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_2 + (longlong)iVar7 * 0x18);
        if (*puVar1 == param_1) {
          if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
            uVar4 = puVar1[1];
            goto LAB_1468b5007;
          }
          break;
        }
        iVar7 = (int)puVar1[2];
      } while (iVar7 != -1);
    }
  }
  uVar4 = FUN_14001cc68(0x30,0x10);
  FUN_1468b503a(uVar4,param_1);
  local_38 = &local_50;
  local_40 = &local_48;
  uVar6 = 0;
  local_50 = uVar4;
  FUN_1468b970c(param_2,local_2c,&local_40,0);
  uVar5 = FUN_1468b4efa(*(undefined8 *)(local_48 + 0x10),param_2);
  *(undefined8 *)(local_50 + 8) = uVar5;
  if (*(longlong *)(local_48 + 0x20) != 0) {
    uVar6 = FUN_1468b4efa(*(longlong *)(local_48 + 0x20),param_2);
  }
  *(undefined8 *)(local_50 + 0x10) = uVar6;
  uVar4 = local_50;
LAB_1468b5007:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b503a FUN_1468b503a body=180 status=ok
// SIG undefined FUN_1468b503a(void)

void FUN_1468b503a(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 8);
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(lVar2 + 8);
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar2 + 0xc);
  *(bool *)((longlong)param_1 + 0x24) = *(int *)(param_2 + 0xc) <= DAT_14c9647bc;
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar2 + 0x14);
  return;
}



// FUNCTION 1468b50f6 FUN_1468b50f6 body=294 status=ok
// SIG undefined FUN_1468b50f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1468b50f6(undefined4 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c950de8);
  if (DAT_14c950e10 != param_2) {
    DAT_14c950e10 = param_2;
    if (DAT_14c950da0 != DAT_14c950dcc) {
      uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      puVar4 = &DAT_14c950dd0;
      if (DAT_14c950dd8 != (undefined *)0x0) {
        puVar4 = DAT_14c950dd8;
      }
      iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14c950de0 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      while (iVar2 != -1) {
        lVar1 = DAT_14c950d98 + (longlong)iVar2 * 0x20;
        if (*(ulonglong *)(DAT_14c950d98 + (longlong)iVar2 * 0x20) == param_2) {
          if ((undefined4 *)(lVar1 + 8) != (undefined4 *)0x0 && lVar1 != 0) {
            _DAT_14c950e18 = *(undefined4 *)(lVar1 + 8);
            uRam000000014c950e1c = *(undefined4 *)(lVar1 + 0xc);
            _DAT_14c950e20 = *(undefined4 *)(lVar1 + 0x10);
            uRam000000014c950e24 = *(undefined4 *)(lVar1 + 0x14);
            goto LAB_1468b5146;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x18);
      }
    }
    _DAT_14c950e18 = 0;
    uRam000000014c950e1c = 0;
    _DAT_14c950e20 = 0;
    uRam000000014c950e24 = 0;
  }
LAB_1468b5146:
  local_28 = _DAT_14c950e18;
  uStack_24 = uRam000000014c950e1c;
  uStack_20 = _DAT_14c950e20;
  uStack_1c = uRam000000014c950e24;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c950de8);
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b521e FUN_1468b521e body=73 status=ok
// SIG undefined FUN_1468b521e(void)

undefined8 FUN_1468b521e(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1427f244c(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b5268 thunk_FUN_140971090 body=5 status=ok
// SIG undefined thunk_FUN_140971090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 thunk_FUN_140971090(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c950e78);
  uVar2 = param_1[1];
  uVar5 = *param_1 + 0x9ae16a3b2f90404f;
  uVar5 = ((uVar5 << 0x27 | uVar5 >> 0x19) + uVar2) * -0x651e95c4d06fbf91;
  uVar2 = (*param_1 + (uVar2 << 0x1b | uVar2 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
          uVar5) * -0x651e95c4d06fbf91;
  lVar3 = (uVar2 >> 0x2f ^ uVar5 ^ uVar2) * -0x651e95c4d06fbf91;
  iVar1 = FUN_140971140(&DAT_14c950e28,((uint)((ulonglong)lVar3 >> 0x2f) ^ (uint)lVar3) * 0x2f90406f
                        ,param_1);
  if ((iVar1 == -1) || (lVar3 = (longlong)iVar1 * 0x20 + _DAT_14c950e28, lVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c950e78);
  return uVar4;
}



// FUNCTION 1468b526e FUN_1468b526e body=131 status=ok
// SIG undefined FUN_1468b526e(void)

ulong * FUN_1468b526e(ulong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  GUID local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1468b50f6();
  if (((param_1[1] == 0 && *param_1 == 0) && param_1[2] == 0) && param_1[3] == 0) {
    local_38.Data1 = 0;
    local_38.Data2 = 0;
    local_38.Data3 = 0;
    local_38.Data4[0] = '\0';
    local_38.Data4[1] = '\0';
    local_38.Data4[2] = '\0';
    local_38.Data4[3] = '\0';
    local_38.Data4[4] = '\0';
    local_38.Data4[5] = '\0';
    local_38.Data4[6] = '\0';
    local_38.Data4[7] = '\0';
    CoCreateGuid(&local_38);
    *param_1 = local_38.Data1;
    param_1[1] = local_38._4_4_;
    param_1[2] = local_38.Data4._0_4_;
    param_1[3] = local_38.Data4._4_4_;
    FUN_140cf1fd6(&DAT_14c950d90,param_2,param_1);
    FUN_14282b7b8(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468b52f2 FUN_1468b52f2 body=384 status=ok
// SIG undefined FUN_1468b52f2(void)

void FUN_1468b52f2(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  local_78 = 0;
  uStack_70 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(ulonglong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar8 = iVar2;
  iVar9 = iVar2;
  if (iVar2 != iVar3) {
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                             4);
    iVar8 = iVar3;
    if (iVar4 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar7 = (longlong)iVar4 * 0x20;
        if (*(ulonglong *)(lVar6 + lVar7) == param_2) {
          puVar1 = (undefined8 *)(lVar6 + 8 + lVar7);
          local_78 = *puVar1;
          uStack_70 = puVar1[1];
          FUN_140b3a1ec();
          iVar8 = *(int *)(param_1 + 0x3c);
          iVar9 = *(int *)(param_1 + 0x10);
          break;
        }
        iVar4 = *(int *)(lVar7 + lVar6 + 0x18);
      } while (iVar4 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((iVar3 < iVar2) && (iVar9 == iVar8)) {
    FUN_140f93338(&DAT_14c9647b8,param_1);
  }
  if (((local_78._4_4_ != 0 || (int)local_78 != 0) || (int)uStack_70 != 0) || uStack_70._4_4_ != 0)
  {
    FUN_140cf28c0(param_1 + 0x98,&local_78);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468b5474 FUN_1468b5474 body=38 status=ok
// SIG undefined FUN_1468b5474(void)

void FUN_1468b5474(void)

{
  int iVar1;
  
  iVar1 = FUN_140d25081();
  FUN_1468b9c84(&DAT_14c950ea0 + (longlong)iVar1 * 0x50);
  return;
}



// FUNCTION 1468b549a FUN_1468b549a body=10 status=ok
// SIG undefined FUN_1468b549a(void)

undefined8 * FUN_1468b549a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1468b54a4 FUN_1468b54a4 body=65 status=ok
// SIG undefined FUN_1468b54a4(void)

void FUN_1468b54a4(undefined8 *param_1,longlong param_2)

{
  FUN_144aa02de(*param_1);
  FUN_144aa02de(*param_1,param_2 + 4);
  FUN_144aa02de(*param_1,param_2 + 8);
  FUN_144aa02de(*param_1,param_2 + 0xc);
  return;
}



// FUNCTION 1468b54e6 FUN_1468b54e6 body=44 status=ok
// SIG undefined FUN_1468b54e6(void)

void FUN_1468b54e6(longlong param_1,undefined8 *param_2)

{
  FUN_144aa02de(*param_2,param_1);
  FUN_144aa02de(*param_2,param_1 + 4);
  return;
}



// FUNCTION 1468b5512 FUN_1468b5512 body=338 status=ok
// SIG undefined FUN_1468b5512(void)

void FUN_1468b5512(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 4) != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_58 = &local_59;
    local_88 = &local_58;
    FUN_1468b9e0c(plVar1);
    FUN_1468b9e3a(plVar1);
    lVar2 = param_1 + 0x50;
    local_58 = (undefined1 *)0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    iVar5 = 0;
    uStack_50 = lVar2;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_58);
      iVar5 = *(int *)(param_1 + 0x68);
    }
    local_80 = (undefined4)local_58;
    uStack_7c = local_58._4_4_;
    uStack_78 = (undefined4)uStack_50;
    uStack_74 = uStack_50._4_4_;
    uStack_68 = CONCAT44(uStack_3c,uStack_40);
    local_70 = local_48;
    uVar3 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar4 = local_70._4_4_;
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar5) || (local_70 = local_48, uStack_50 != lVar2)) {
      do {
        local_70 = uVar3;
        FUN_14063460b(*(undefined8 *)(*local_88 + 8 + (longlong)iVar4 * 0x20),
                      *(undefined4 *)(*local_88 + 0x10 + (longlong)iVar4 * 0x20));
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar4 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_88 != plVar1 ||
               (CONCAT44(uStack_74,uStack_78) != lVar2 || local_70._4_4_ != iVar5));
    }
  }
  FUN_1468ba68e(param_2,param_1 + 0x40);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


