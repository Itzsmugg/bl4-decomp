// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147cd67e7 FUN_147cd67e7 body=127 status=ok
// SIG undefined FUN_147cd67e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147cd67e7(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb003c8) {
    FUN_144b3d300(&DAT_14cb003c8);
    if (DAT_14cb003c8 == -1) {
      DAT_14cb003b0 = 0;
      uRam000000014cb003b8 = 0;
      _DAT_14cb003a8 = &PTR_FUN_14aa68d10;
      DAT_14cb003c0 = 0;
      atexit((_func_5014 *)&LAB_14367fce0);
      _Init_thread_footer(&DAT_14cb003c8);
    }
  }
  return &DAT_14cb003a8;
}



// FUNCTION 147cd6866 FUN_147cd6866 body=98 status=ok
// SIG undefined FUN_147cd6866(void)

void FUN_147cd6866(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_144a7f90c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147cd68c8 FUN_147cd68c8 body=147 status=ok
// SIG undefined FUN_147cd68c8(void)

void FUN_147cd68c8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cd695c FUN_147cd695c body=111 status=ok
// SIG undefined FUN_147cd695c(void)

void FUN_147cd695c(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = param_1 + 0x10;
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 < param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 < (int)param_2) {
      FUN_14056566e(lVar1,param_2);
      uVar3 = *(uint *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x1c);
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (iVar2 - uVar3 < param_2 - uVar3) {
      FUN_147cd6a62(lVar1);
      return;
    }
  }
  else if (param_2 < uVar3) {
    *(uint *)(param_1 + 0x18) = param_2;
    FUN_147cd6ae8(lVar1);
    return;
  }
  return;
}



// FUNCTION 147cd69cc FUN_147cd69cc body=60 status=ok
// SIG undefined FUN_147cd69cc(void)

longlong FUN_147cd69cc(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 147cd6a08 FUN_147cd6a08 body=21 status=ok
// SIG undefined FUN_147cd6a08(void)

undefined * FUN_147cd6a08(void)

{
  FUN_147cd6d5a();
  return &DAT_14cb00460;
}



// FUNCTION 147cd6a2a FUN_147cd6a2a body=56 status=ok
// SIG undefined FUN_147cd6a2a(void)

longlong FUN_147cd6a2a(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cd6a62 FUN_147cd6a62 body=132 status=ok
// SIG undefined FUN_147cd6a62(void)

void FUN_147cd6a62(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cd6ae8 FUN_147cd6ae8 body=62 status=ok
// SIG undefined FUN_147cd6ae8(void)

void FUN_147cd6ae8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147cd6b26(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 147cd6b26 FUN_147cd6b26 body=93 status=ok
// SIG undefined FUN_147cd6b26(void)

ulonglong FUN_147cd6b26(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 147cd6b84 FUN_147cd6b84 body=383 status=ok
// SIG undefined FUN_147cd6b84(void)

longlong * FUN_147cd6b84(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = (uint)param_2[1];
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
      FUN_14056566e(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x40000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = *param_2;
      uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
      if ((uVar3 & 1) == 0) {
        uVar5 = uVar3;
      }
      FUN_1400d0370(param_1,uVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x40;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14056566e(param_2), 0 < (int)local_2c)) {
      iVar6 = 0;
      do {
        uVar4 = FUN_147cd6d04(param_2);
        FUN_1400d0370(param_1,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147cd6d04 FUN_147cd6d04 body=85 status=ok
// SIG undefined FUN_147cd6d04(void)

longlong FUN_147cd6d04(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147cd6a62(param_1,iVar1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  lVar4 = (longlong)iVar1 * 0x40 + uVar3;
  FUN_1400d034a(lVar4,1);
  return lVar4;
}



// FUNCTION 147cd6d5a FUN_147cd6d5a body=205 status=ok
// SIG undefined FUN_147cd6d5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd6d5a(void)

{
  if ((DAT_14cb004c7 & 2) != 0) {
    return;
  }
  DAT_14cb004c7 = DAT_14cb004c7 | 2;
  _DAT_14cb00468 = L"TResourceArray";
  _DAT_14cb00480 = FUN_146826540;
  _DAT_14cb00488 = FUN_146825d77;
  _DAT_14cb00490 = FUN_146825fd6;
  _DAT_14cb00498 = FUN_1407e02ea;
  _DAT_14cb004a0 = FUN_146826273;
  _DAT_14cb00478 = FUN_147cd6e28;
  _DAT_14cb004b8 = 0xffffffff00000020;
  _DAT_14cb004c0 = 8;
  DAT_14cb004c4 = 1;
  _DAT_14cb004a8 = FUN_147cd6e54;
  FUN_147cd6e6a();
  FUN_147cd6f78();
  FUN_1407e00cc(&DAT_14cb00460);
  return;
}



// FUNCTION 147cd6e28 FUN_147cd6e28 body=43 status=ok
// SIG undefined FUN_147cd6e28(void)

void FUN_147cd6e28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cd6e54 FUN_147cd6e54 body=21 status=ok
// SIG undefined FUN_147cd6e54(void)

undefined * FUN_147cd6e54(void)

{
  FUN_147cd7151();
  return &DAT_14cb004c8;
}



// FUNCTION 147cd6e6a FUN_147cd6e6a body=270 status=ok
// SIG undefined FUN_147cd6e6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd6e6a(void)

{
  _DAT_14cb004f0 = L"bNeedsCPUAccess";
  DAT_14cb0051a = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cb004f8 = &DAT_14c9cfcf0;
  _DAT_14cb00508 = &LAB_14682652b;
  _DAT_14cb00510 = &DAT_100000018;
  _DAT_14cb00518 = 0;
  _DAT_14cb00500 = DAT_14cb00470;
  DAT_14cb00470 = &DAT_14cb004f0;
  return;
}



// FUNCTION 147cd6f78 FUN_147cd6f78 body=473 status=ok
// SIG undefined FUN_147cd6f78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd6f78(void)

{
  _DAT_14cb00520 = L"BASE";
  DAT_14cb0054a = 4;
  if ((DAT_14cb005b7 & 2) == 0) {
    DAT_14cb005b7 = DAT_14cb005b7 | 3;
    _DAT_14cb00558 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb00570 = FUN_147cd71cc;
    _DAT_14cb00578 = &LAB_147cd722c;
    _DAT_14cb00580 = &LAB_147cd723a;
    _DAT_14cb00588 = &LAB_147cd7248;
    _DAT_14cb00590 = &DAT_147cd7256;
    _DAT_14cb00568 = FUN_147cd7258;
    _DAT_14cb005a8 = 0x1000000010;
    _DAT_14cb005b0 = 8;
    DAT_14cb005b4 = '\0';
  }
  else if (DAT_14cb005b4 != '\0') {
    DAT_14cb004c6 = DAT_14cb004c6 + '\x01';
  }
  _DAT_14cb00530 = DAT_14cb00470;
  _DAT_14cb00540 = &DAT_100000008;
  _DAT_14cb00538 = &LAB_14682652b;
  _DAT_14cb00528 = &DAT_14cb00550;
  DAT_14cb004c5 = DAT_14cb004c5 + '\x01';
  DAT_14cb00470 = &DAT_14cb00520;
  _DAT_14cb005b8 = L"BASE";
  DAT_14cb005e2 = 4;
  _DAT_14cb005c0 = FUN_146268212();
  _DAT_14cb005c8 = DAT_14cb00470;
  _DAT_14cb005d0 = &LAB_14682652b;
  DAT_14cb00470 = &DAT_14cb005b8;
  DAT_14cb004c5 = DAT_14cb004c5 + '\x01';
  _DAT_14cb005d8 = 0x100000000;
  if (*(char *)(_DAT_14cb005c0 + 100) != '\0') {
    DAT_14cb004c6 = DAT_14cb004c6 + '\x01';
  }
  return;
}



// FUNCTION 147cd7151 FUN_147cd7151 body=122 status=ok
// SIG undefined FUN_147cd7151(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd7151(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb004e8) {
    FUN_144b3d300(&DAT_14cb004e8);
    if (DAT_14cb004e8 == -1) {
      DAT_14cb004d0 = 0;
      uRam000000014cb004d8 = 0;
      _DAT_14cb004c8 = &PTR_FUN_14aa68dd0;
      DAT_14cb004e0 = 0;
      atexit((_func_5014 *)&LAB_14367fd6e);
      _Init_thread_footer(&DAT_14cb004e8);
      return;
    }
  }
  return;
}



// FUNCTION 147cd71cc FUN_147cd71cc body=95 status=ok
// SIG undefined FUN_147cd71cc(void)

void FUN_147cd71cc(void)

{
  undefined1 auStack_48 [32];
  ulonglong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146826a6c(0,local_28,0x10);
  if (local_28[0] != 0 && (local_28[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cd7258 FUN_147cd7258 body=51 status=ok
// SIG undefined FUN_147cd7258(void)

void FUN_147cd7258(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cd728c FUN_147cd728c body=121 status=ok
// SIG undefined FUN_147cd728c(void)

void FUN_147cd728c(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_14024fde8(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_14042c7ac(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_14738c64c(lVar1);
    return;
  }
  return;
}



// FUNCTION 147cd7356 FUN_147cd7356 body=66 status=ok
// SIG undefined FUN_147cd7356(void)

undefined8 * FUN_147cd7356(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa68ed0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cd7398 FUN_147cd7398 body=123 status=ok
// SIG undefined FUN_147cd7398(void)

void FUN_147cd7398(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_147cd75ba(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_147cd7b5c(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147cd7bf0(lVar1);
    return;
  }
  return;
}



// FUNCTION 147cd7432 FUN_147cd7432 body=4 status=ok
// SIG undefined FUN_147cd7432(void)

undefined4 FUN_147cd7432(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 147cd7436 FUN_147cd7436 body=24 status=ok
// SIG undefined FUN_147cd7436(void)

ulonglong FUN_147cd7436(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar2 = param_1 + 0x10 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



// FUNCTION 147cd744e FUN_147cd744e body=5 status=ok
// SIG undefined FUN_147cd744e(void)

longlong FUN_147cd744e(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 147cd7454 FUN_147cd7454 body=9 status=ok
// SIG undefined FUN_147cd7454(void)

void FUN_147cd7454(longlong param_1)

{
  FUN_147cd7c9e(param_1 + 0x10);
  return;
}



// FUNCTION 147cd7478 FUN_147cd7478 body=66 status=ok
// SIG undefined FUN_147cd7478(void)

undefined8 * FUN_147cd7478(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa68ed0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cd74ba FUN_147cd74ba body=56 status=ok
// SIG undefined FUN_147cd74ba(void)

longlong FUN_147cd74ba(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cd750a FUN_147cd750a body=59 status=ok
// SIG undefined FUN_147cd750a(void)

int FUN_147cd750a(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0xaaaaaab) {
    iVar1 = *(uint *)(param_1 + 0x10) * 0x18;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0x18);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 147cd756e FUN_147cd756e body=21 status=ok
// SIG undefined FUN_147cd756e(void)

undefined * FUN_147cd756e(void)

{
  FUN_147cd762a();
  return &DAT_14cb005e8;
}



// FUNCTION 147cd7590 FUN_147cd7590 body=41 status=ok
// SIG undefined FUN_147cd7590(void)

void FUN_147cd7590(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147cd75ba();
  return;
}



// FUNCTION 147cd75ba FUN_147cd75ba body=112 status=ok
// SIG undefined FUN_147cd75ba(void)

void FUN_147cd75ba(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,2);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,2);
  }
  return;
}



// FUNCTION 147cd762a FUN_147cd762a body=205 status=ok
// SIG undefined FUN_147cd762a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd762a(void)

{
  if ((DAT_14cb0064f & 2) != 0) {
    return;
  }
  DAT_14cb0064f = DAT_14cb0064f | 2;
  _DAT_14cb005f0 = L"TResourceArray";
  _DAT_14cb00608 = FUN_146826540;
  _DAT_14cb00610 = FUN_146825d77;
  _DAT_14cb00618 = FUN_146825fd6;
  _DAT_14cb00620 = FUN_1407e02ea;
  _DAT_14cb00628 = FUN_146826273;
  _DAT_14cb00600 = FUN_147cd76f8;
  _DAT_14cb00640 = 0xffffffff00000020;
  _DAT_14cb00648 = 8;
  DAT_14cb0064c = 1;
  _DAT_14cb00630 = FUN_147cd7724;
  FUN_147cd773a();
  FUN_147cd7848();
  FUN_1407e00cc(&DAT_14cb005e8);
  return;
}



// FUNCTION 147cd76f8 FUN_147cd76f8 body=43 status=ok
// SIG undefined FUN_147cd76f8(void)

void FUN_147cd76f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cd7724 FUN_147cd7724 body=21 status=ok
// SIG undefined FUN_147cd7724(void)

undefined * FUN_147cd7724(void)

{
  FUN_147cd7a21();
  return &DAT_14cb00650;
}



// FUNCTION 147cd773a FUN_147cd773a body=270 status=ok
// SIG undefined FUN_147cd773a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd773a(void)

{
  _DAT_14cb00678 = L"bNeedsCPUAccess";
  DAT_14cb006a2 = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cb00680 = &DAT_14c9cfcf0;
  _DAT_14cb00690 = &LAB_14682652b;
  _DAT_14cb00698 = &DAT_100000018;
  _DAT_14cb006a0 = 0;
  _DAT_14cb00688 = DAT_14cb005f8;
  DAT_14cb005f8 = &DAT_14cb00678;
  return;
}



// FUNCTION 147cd7848 FUN_147cd7848 body=473 status=ok
// SIG undefined FUN_147cd7848(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd7848(void)

{
  _DAT_14cb006a8 = L"BASE";
  DAT_14cb006d2 = 4;
  if ((DAT_14cb0073f & 2) == 0) {
    DAT_14cb0073f = DAT_14cb0073f | 3;
    _DAT_14cb006e0 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb006f8 = FUN_147cd7a9c;
    _DAT_14cb00700 = &LAB_147cd7afc;
    _DAT_14cb00708 = &LAB_147cd7b0a;
    _DAT_14cb00710 = &LAB_147cd7b18;
    _DAT_14cb00718 = &DAT_147cd7b26;
    _DAT_14cb006f0 = FUN_147cd7b28;
    _DAT_14cb00730 = 0x1000000010;
    _DAT_14cb00738 = 8;
    DAT_14cb0073c = '\0';
  }
  else if (DAT_14cb0073c != '\0') {
    DAT_14cb0064e = DAT_14cb0064e + '\x01';
  }
  _DAT_14cb006b8 = DAT_14cb005f8;
  _DAT_14cb006c8 = &DAT_100000008;
  _DAT_14cb006c0 = &LAB_14682652b;
  _DAT_14cb006b0 = &DAT_14cb006d8;
  DAT_14cb0064d = DAT_14cb0064d + '\x01';
  DAT_14cb005f8 = &DAT_14cb006a8;
  _DAT_14cb00740 = L"BASE";
  DAT_14cb0076a = 4;
  _DAT_14cb00748 = FUN_146268212();
  _DAT_14cb00750 = DAT_14cb005f8;
  _DAT_14cb00758 = &LAB_14682652b;
  DAT_14cb005f8 = &DAT_14cb00740;
  DAT_14cb0064d = DAT_14cb0064d + '\x01';
  _DAT_14cb00760 = 0x100000000;
  if (*(char *)(_DAT_14cb00748 + 100) != '\0') {
    DAT_14cb0064e = DAT_14cb0064e + '\x01';
  }
  return;
}



// FUNCTION 147cd7a21 FUN_147cd7a21 body=122 status=ok
// SIG undefined FUN_147cd7a21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd7a21(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb00670) {
    FUN_144b3d300(&DAT_14cb00670);
    if (DAT_14cb00670 == -1) {
      DAT_14cb00658 = 0;
      uRam000000014cb00660 = 0;
      _DAT_14cb00650 = &PTR_FUN_14aa68f30;
      DAT_14cb00668 = 0;
      atexit((_func_5014 *)&LAB_14367fd8b);
      _Init_thread_footer(&DAT_14cb00670);
      return;
    }
  }
  return;
}



// FUNCTION 147cd7a9c FUN_147cd7a9c body=95 status=ok
// SIG undefined FUN_147cd7a9c(void)

void FUN_147cd7a9c(void)

{
  undefined1 auStack_48 [32];
  ulonglong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146826a6c(0,local_28,0x10);
  if (local_28[0] != 0 && (local_28[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cd7b28 FUN_147cd7b28 body=51 status=ok
// SIG undefined FUN_147cd7b28(void)

void FUN_147cd7b28(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cd7b5c FUN_147cd7b5c body=147 status=ok
// SIG undefined FUN_147cd7b5c(void)

void FUN_147cd7b5c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0x18,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cd7bf0 FUN_147cd7bf0 body=62 status=ok
// SIG undefined FUN_147cd7bf0(void)

void FUN_147cd7bf0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147cd7c2e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,2);
  }
  return;
}



// FUNCTION 147cd7c2e FUN_147cd7c2e body=112 status=ok
// SIG undefined FUN_147cd7c2e(void)

ulonglong FUN_147cd7c2e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147cd7c68;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,2);
      param_2 = param_2 / 0x18;
    }
  }
LAB_147cd7c68:
  return param_2 & 0xffffffff;
}



// FUNCTION 147cd7c9e FUN_147cd7c9e body=556 status=ok
// SIG undefined FUN_147cd7c9e(void)

void FUN_147cd7c9e(ulonglong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0x18;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_147cd7ecc(param_2,param_1);
    goto LAB_147cd7ddf;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[1] * 0x18,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0x18);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_147cd7ddf;
    local_28 = (uint)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_147cd7db8:
    uVar4 = *param_1;
    uVar5 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
    if ((uVar4 & 1) == 0) {
      uVar5 = uVar4;
    }
    (**(code **)(*param_2 + 0x170))(param_2,uVar5,(longlong)(int)local_28 * 0x18);
  }
  else {
    if (local_24 == 0x18) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x5555556) {
        FUN_147cd7590(param_1);
        uVar4 = param_1[1];
        *(uint *)(param_1 + 1) = (int)uVar4 + local_28;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)uVar4) < local_28) {
          FUN_147cd7b5c(param_1);
        }
        goto LAB_147cd7db8;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_147cd7ddf:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cd7ecc FUN_147cd7ecc body=387 status=ok
// SIG undefined FUN_147cd7ecc(void)

longlong * FUN_147cd7ecc(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = (uint)param_2[1];
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
      FUN_147cd75ba(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = *param_2;
      uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
      if ((uVar3 & 1) == 0) {
        uVar5 = uVar3;
      }
      FUN_147cd8050(param_1,uVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    FUN_147cd7590(param_2);
    if (0 < (int)local_2c) {
      iVar6 = 0;
      do {
        uVar4 = FUN_147cd81a2(param_2);
        FUN_147cd8050(param_1,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147cd8050 FUN_147cd8050 body=336 status=ok
// SIG undefined FUN_147cd8050(void)

longlong * FUN_147cd8050(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  ulonglong *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  byte bVar7;
  longlong lVar8;
  undefined1 auStack_58 [39];
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e39130);
  lVar8 = 0;
  do {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_147cd80d2:
      puVar4 = *(undefined2 **)param_1[1];
      if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,(undefined2 *)(param_2 + lVar8),2);
        }
        else {
          thunk_FUN_1457251a8(param_1);
        }
      }
      else {
        *(undefined2 *)(param_2 + lVar8) = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
      }
    }
    else {
      iVar6 = FUN_1448332aa(param_1,&DAT_149e39130);
      if (3 < iVar6) goto LAB_147cd80d2;
      local_31 = 0;
      puVar3 = (ulonglong *)param_1[1];
      pbVar1 = (byte *)*puVar3 + 1;
      if ((byte *)puVar3[1] < pbVar1) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_31,1);
        bVar7 = local_31;
      }
      else {
        bVar7 = *(byte *)*puVar3;
        *puVar3 = (ulonglong)pbVar1;
      }
      *(ushort *)(param_2 + lVar8) = (ushort)bVar7;
    }
    lVar8 = lVar8 + 2;
    if (lVar8 == 0x10) {
      lVar8 = 0;
      do {
        puVar2 = (undefined1 *)(param_2 + 0x10 + lVar8);
        puVar5 = *(undefined1 **)param_1[1];
        if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar2,1);
        }
        else {
          *puVar2 = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 8);
      if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 147cd81a2 FUN_147cd81a2 body=70 status=ok
// SIG undefined FUN_147cd81a2(void)

longlong FUN_147cd81a2(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147cd7b5c(param_1,iVar1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  return uVar3 + (longlong)iVar1 * 0x18;
}



// FUNCTION 147cd81e8 FUN_147cd81e8 body=66 status=ok
// SIG undefined FUN_147cd81e8(void)

undefined8 * FUN_147cd81e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa68fd0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cd822a FUN_147cd822a body=123 status=ok
// SIG undefined FUN_147cd822a(void)

void FUN_147cd822a(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_147cd8444(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_147cd89d6(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147cd8a5c(lVar1);
    return;
  }
  return;
}



// FUNCTION 147cd8306 FUN_147cd8306 body=66 status=ok
// SIG undefined FUN_147cd8306(void)

undefined8 * FUN_147cd8306(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa68fd0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cd8348 FUN_147cd8348 body=56 status=ok
// SIG undefined FUN_147cd8348(void)

longlong FUN_147cd8348(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cd8398 FUN_147cd8398 body=56 status=ok
// SIG undefined FUN_147cd8398(void)

int FUN_147cd8398(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x10000000) {
    iVar1 = *(uint *)(param_1 + 0x10) << 4;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0x10);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 147cd83f8 FUN_147cd83f8 body=21 status=ok
// SIG undefined FUN_147cd83f8(void)

undefined * FUN_147cd83f8(void)

{
  FUN_147cd84a4();
  return &DAT_14cb00770;
}



// FUNCTION 147cd841a FUN_147cd841a body=41 status=ok
// SIG undefined FUN_147cd841a(void)

void FUN_147cd841a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147cd8444();
  return;
}



// FUNCTION 147cd8444 FUN_147cd8444 body=95 status=ok
// SIG undefined FUN_147cd8444(void)

void FUN_147cd8444(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,1);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,1);
  }
  return;
}



// FUNCTION 147cd84a4 FUN_147cd84a4 body=205 status=ok
// SIG undefined FUN_147cd84a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd84a4(void)

{
  if ((DAT_14cb007d7 & 2) != 0) {
    return;
  }
  DAT_14cb007d7 = DAT_14cb007d7 | 2;
  _DAT_14cb00778 = L"TResourceArray";
  _DAT_14cb00790 = FUN_146826540;
  _DAT_14cb00798 = FUN_146825d77;
  _DAT_14cb007a0 = FUN_146825fd6;
  _DAT_14cb007a8 = FUN_1407e02ea;
  _DAT_14cb007b0 = FUN_146826273;
  _DAT_14cb00788 = FUN_147cd8572;
  _DAT_14cb007c8 = 0xffffffff00000020;
  _DAT_14cb007d0 = 8;
  DAT_14cb007d4 = 1;
  _DAT_14cb007b8 = FUN_147cd859e;
  FUN_147cd85b4();
  FUN_147cd86c2();
  FUN_1407e00cc(&DAT_14cb00770);
  return;
}



// FUNCTION 147cd8572 FUN_147cd8572 body=43 status=ok
// SIG undefined FUN_147cd8572(void)

void FUN_147cd8572(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cd859e FUN_147cd859e body=21 status=ok
// SIG undefined FUN_147cd859e(void)

undefined * FUN_147cd859e(void)

{
  FUN_147cd889b();
  return &DAT_14cb007d8;
}



// FUNCTION 147cd85b4 FUN_147cd85b4 body=270 status=ok
// SIG undefined FUN_147cd85b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd85b4(void)

{
  _DAT_14cb00800 = L"bNeedsCPUAccess";
  DAT_14cb0082a = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cb00808 = &DAT_14c9cfcf0;
  _DAT_14cb00818 = &LAB_14682652b;
  _DAT_14cb00820 = &DAT_100000018;
  _DAT_14cb00828 = 0;
  _DAT_14cb00810 = DAT_14cb00780;
  DAT_14cb00780 = &DAT_14cb00800;
  return;
}



// FUNCTION 147cd86c2 FUN_147cd86c2 body=473 status=ok
// SIG undefined FUN_147cd86c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd86c2(void)

{
  _DAT_14cb00830 = L"BASE";
  DAT_14cb0085a = 4;
  if ((DAT_14cb008c7 & 2) == 0) {
    DAT_14cb008c7 = DAT_14cb008c7 | 3;
    _DAT_14cb00868 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb00880 = FUN_147cd8916;
    _DAT_14cb00888 = &LAB_147cd8976;
    _DAT_14cb00890 = &LAB_147cd8984;
    _DAT_14cb00898 = &LAB_147cd8992;
    _DAT_14cb008a0 = &DAT_147cd89a0;
    _DAT_14cb00878 = FUN_147cd89a2;
    _DAT_14cb008b8 = 0x1000000010;
    _DAT_14cb008c0 = 8;
    DAT_14cb008c4 = '\0';
  }
  else if (DAT_14cb008c4 != '\0') {
    DAT_14cb007d6 = DAT_14cb007d6 + '\x01';
  }
  _DAT_14cb00840 = DAT_14cb00780;
  _DAT_14cb00850 = &DAT_100000008;
  _DAT_14cb00848 = &LAB_14682652b;
  _DAT_14cb00838 = &DAT_14cb00860;
  DAT_14cb007d5 = DAT_14cb007d5 + '\x01';
  DAT_14cb00780 = &DAT_14cb00830;
  _DAT_14cb008c8 = L"BASE";
  DAT_14cb008f2 = 4;
  _DAT_14cb008d0 = FUN_146268212();
  _DAT_14cb008d8 = DAT_14cb00780;
  _DAT_14cb008e0 = &LAB_14682652b;
  DAT_14cb00780 = &DAT_14cb008c8;
  DAT_14cb007d5 = DAT_14cb007d5 + '\x01';
  _DAT_14cb008e8 = 0x100000000;
  if (*(char *)(_DAT_14cb008d0 + 100) != '\0') {
    DAT_14cb007d6 = DAT_14cb007d6 + '\x01';
  }
  return;
}



// FUNCTION 147cd889b FUN_147cd889b body=122 status=ok
// SIG undefined FUN_147cd889b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd889b(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb007f8) {
    FUN_144b3d300(&DAT_14cb007f8);
    if (DAT_14cb007f8 == -1) {
      DAT_14cb007e0 = 0;
      uRam000000014cb007e8 = 0;
      _DAT_14cb007d8 = &PTR_FUN_14aa69030;
      DAT_14cb007f0 = 0;
      atexit((_func_5014 *)&LAB_14367fda3);
      _Init_thread_footer(&DAT_14cb007f8);
      return;
    }
  }
  return;
}



// FUNCTION 147cd8916 FUN_147cd8916 body=95 status=ok
// SIG undefined FUN_147cd8916(void)

void FUN_147cd8916(void)

{
  undefined1 auStack_48 [32];
  ulonglong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146826a6c(0,local_28,0x10);
  if (local_28[0] != 0 && (local_28[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cd89a2 FUN_147cd89a2 body=51 status=ok
// SIG undefined FUN_147cd89a2(void)

void FUN_147cd89a2(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cd89d6 FUN_147cd89d6 body=132 status=ok
// SIG undefined FUN_147cd89d6(void)

void FUN_147cd89d6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,1);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0x10,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cd8a5c FUN_147cd8a5c body=62 status=ok
// SIG undefined FUN_147cd8a5c(void)

void FUN_147cd8a5c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147cd8a9a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,1);
  }
  return;
}



// FUNCTION 147cd8a9a FUN_147cd8a9a body=93 status=ok
// SIG undefined FUN_147cd8a9a(void)

ulonglong FUN_147cd8a9a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,1);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147cd8af8 FUN_147cd8af8 body=537 status=ok
// SIG undefined FUN_147cd8af8(void)

void FUN_147cd8af8(ulonglong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0x10;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_147cd8d12(param_2,param_1);
    goto LAB_147cd8c25;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[1] << 4,(longlong)*(int *)((longlong)param_1 + 0xc) << 4
            );
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_147cd8c25;
    local_28 = (uint)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_147cd8c02:
    uVar4 = *param_1;
    uVar5 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
    if ((uVar4 & 1) == 0) {
      uVar5 = uVar4;
    }
    (**(code **)(*param_2 + 0x170))(param_2,uVar5,(longlong)(int)local_28 << 4);
  }
  else {
    if (local_24 == 0x10) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x8000000) {
        FUN_147cd841a(param_1);
        uVar4 = param_1[1];
        *(uint *)(param_1 + 1) = (int)uVar4 + local_28;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)uVar4) < local_28) {
          FUN_147cd89d6(param_1);
        }
        goto LAB_147cd8c02;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_147cd8c25:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cd8d12 FUN_147cd8d12 body=379 status=ok
// SIG undefined FUN_147cd8d12(void)

longlong * FUN_147cd8d12(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = (uint)param_2[1];
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
      FUN_147cd8444(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = *param_2;
      uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
      if ((uVar3 & 1) == 0) {
        uVar5 = uVar3;
      }
      FUN_147cd8e8e(param_1,uVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    FUN_147cd841a(param_2);
    if (0 < (int)local_2c) {
      iVar6 = 0;
      do {
        uVar4 = FUN_147cd8fc8(param_2);
        FUN_147cd8e8e(param_1,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147cd8e8e FUN_147cd8e8e body=312 status=ok
// SIG undefined FUN_147cd8e8e(void)

longlong * FUN_147cd8e8e(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e39130);
  lVar6 = 0;
  do {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_147cd8f10:
      puVar1 = *(undefined1 **)param_1[1];
      if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + lVar6),1);
      }
      else {
        *(undefined1 *)(param_2 + lVar6) = *puVar1;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
      }
    }
    else {
      iVar4 = FUN_1448332aa(param_1,&DAT_149e39130);
      if (3 < iVar4) goto LAB_147cd8f10;
      local_31 = 0;
      puVar2 = (ulonglong *)param_1[1];
      puVar1 = (undefined1 *)*puVar2 + 1;
      if ((undefined1 *)puVar2[1] < puVar1) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_31,1);
        uVar5 = local_31;
      }
      else {
        uVar5 = *(undefined1 *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      *(undefined1 *)(param_2 + lVar6) = uVar5;
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 8) {
      lVar6 = 0;
      do {
        puVar1 = (undefined1 *)(param_2 + 8 + lVar6);
        puVar3 = *(undefined1 **)param_1[1];
        if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar1,1);
        }
        else {
          *puVar1 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 8);
      if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 147cd8fc8 FUN_147cd8fc8 body=72 status=ok
// SIG undefined FUN_147cd8fc8(void)

longlong FUN_147cd8fc8(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147cd89d6(param_1,iVar1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  return (longlong)iVar1 * 0x10 + uVar3;
}



// FUNCTION 147cd9010 FUN_147cd9010 body=66 status=ok
// SIG undefined FUN_147cd9010(void)

undefined8 * FUN_147cd9010(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa690d0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cd9052 FUN_147cd9052 body=123 status=ok
// SIG undefined FUN_147cd9052(void)

void FUN_147cd9052(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_147cd9274(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_147cd9816(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147cd98aa(lVar1);
    return;
  }
  return;
}



// FUNCTION 147cd9132 FUN_147cd9132 body=66 status=ok
// SIG undefined FUN_147cd9132(void)

undefined8 * FUN_147cd9132(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa690d0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cd9174 FUN_147cd9174 body=56 status=ok
// SIG undefined FUN_147cd9174(void)

longlong FUN_147cd9174(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cd91c4 FUN_147cd91c4 body=59 status=ok
// SIG undefined FUN_147cd91c4(void)

int FUN_147cd91c4(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x15555556) {
    iVar1 = *(uint *)(param_1 + 0x10) * 0xc;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0xc);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 147cd9228 FUN_147cd9228 body=21 status=ok
// SIG undefined FUN_147cd9228(void)

undefined * FUN_147cd9228(void)

{
  FUN_147cd92e4();
  return &DAT_14cb008f8;
}



// FUNCTION 147cd924a FUN_147cd924a body=41 status=ok
// SIG undefined FUN_147cd924a(void)

void FUN_147cd924a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147cd9274();
  return;
}



// FUNCTION 147cd9274 FUN_147cd9274 body=112 status=ok
// SIG undefined FUN_147cd9274(void)

void FUN_147cd9274(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,2);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,2);
  }
  return;
}



// FUNCTION 147cd92e4 FUN_147cd92e4 body=205 status=ok
// SIG undefined FUN_147cd92e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd92e4(void)

{
  if ((DAT_14cb0095f & 2) != 0) {
    return;
  }
  DAT_14cb0095f = DAT_14cb0095f | 2;
  _DAT_14cb00900 = L"TResourceArray";
  _DAT_14cb00918 = FUN_146826540;
  _DAT_14cb00920 = FUN_146825d77;
  _DAT_14cb00928 = FUN_146825fd6;
  _DAT_14cb00930 = FUN_1407e02ea;
  _DAT_14cb00938 = FUN_146826273;
  _DAT_14cb00910 = FUN_147cd93b2;
  _DAT_14cb00950 = 0xffffffff00000020;
  _DAT_14cb00958 = 8;
  DAT_14cb0095c = 1;
  _DAT_14cb00940 = FUN_147cd93de;
  FUN_147cd93f4();
  FUN_147cd9502();
  FUN_1407e00cc(&DAT_14cb008f8);
  return;
}



// FUNCTION 147cd93b2 FUN_147cd93b2 body=43 status=ok
// SIG undefined FUN_147cd93b2(void)

void FUN_147cd93b2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cd93de FUN_147cd93de body=21 status=ok
// SIG undefined FUN_147cd93de(void)

undefined * FUN_147cd93de(void)

{
  FUN_147cd96db();
  return &DAT_14cb00960;
}



// FUNCTION 147cd93f4 FUN_147cd93f4 body=270 status=ok
// SIG undefined FUN_147cd93f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd93f4(void)

{
  _DAT_14cb00988 = L"bNeedsCPUAccess";
  DAT_14cb009b2 = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cb00990 = &DAT_14c9cfcf0;
  _DAT_14cb009a0 = &LAB_14682652b;
  _DAT_14cb009a8 = &DAT_100000018;
  _DAT_14cb009b0 = 0;
  _DAT_14cb00998 = DAT_14cb00908;
  DAT_14cb00908 = &DAT_14cb00988;
  return;
}



// FUNCTION 147cd9502 FUN_147cd9502 body=473 status=ok
// SIG undefined FUN_147cd9502(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd9502(void)

{
  _DAT_14cb009b8 = L"BASE";
  DAT_14cb009e2 = 4;
  if ((DAT_14cb00a4f & 2) == 0) {
    DAT_14cb00a4f = DAT_14cb00a4f | 3;
    _DAT_14cb009f0 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb00a08 = FUN_147cd9756;
    _DAT_14cb00a10 = &LAB_147cd97b6;
    _DAT_14cb00a18 = &LAB_147cd97c4;
    _DAT_14cb00a20 = &LAB_147cd97d2;
    _DAT_14cb00a28 = &DAT_147cd97e0;
    _DAT_14cb00a00 = FUN_147cd97e2;
    _DAT_14cb00a40 = 0x1000000010;
    _DAT_14cb00a48 = 8;
    DAT_14cb00a4c = '\0';
  }
  else if (DAT_14cb00a4c != '\0') {
    DAT_14cb0095e = DAT_14cb0095e + '\x01';
  }
  _DAT_14cb009c8 = DAT_14cb00908;
  _DAT_14cb009d8 = &DAT_100000008;
  _DAT_14cb009d0 = &LAB_14682652b;
  _DAT_14cb009c0 = &DAT_14cb009e8;
  DAT_14cb0095d = DAT_14cb0095d + '\x01';
  DAT_14cb00908 = &DAT_14cb009b8;
  _DAT_14cb00a50 = L"BASE";
  DAT_14cb00a7a = 4;
  _DAT_14cb00a58 = FUN_146268212();
  _DAT_14cb00a60 = DAT_14cb00908;
  _DAT_14cb00a68 = &LAB_14682652b;
  DAT_14cb00908 = &DAT_14cb00a50;
  DAT_14cb0095d = DAT_14cb0095d + '\x01';
  _DAT_14cb00a70 = 0x100000000;
  if (*(char *)(_DAT_14cb00a58 + 100) != '\0') {
    DAT_14cb0095e = DAT_14cb0095e + '\x01';
  }
  return;
}



// FUNCTION 147cd96db FUN_147cd96db body=122 status=ok
// SIG undefined FUN_147cd96db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cd96db(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb00980) {
    FUN_144b3d300(&DAT_14cb00980);
    if (DAT_14cb00980 == -1) {
      DAT_14cb00968 = 0;
      uRam000000014cb00970 = 0;
      _DAT_14cb00960 = &PTR_FUN_14aa69130;
      DAT_14cb00978 = 0;
      atexit((_func_5014 *)&LAB_14367fdbb);
      _Init_thread_footer(&DAT_14cb00980);
      return;
    }
  }
  return;
}



// FUNCTION 147cd9756 FUN_147cd9756 body=95 status=ok
// SIG undefined FUN_147cd9756(void)

void FUN_147cd9756(void)

{
  undefined1 auStack_48 [32];
  ulonglong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146826a6c(0,local_28,0x10);
  if (local_28[0] != 0 && (local_28[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cd97e2 FUN_147cd97e2 body=51 status=ok
// SIG undefined FUN_147cd97e2(void)

void FUN_147cd97e2(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cd9816 FUN_147cd9816 body=147 status=ok
// SIG undefined FUN_147cd9816(void)

void FUN_147cd9816(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0xc,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cd98aa FUN_147cd98aa body=62 status=ok
// SIG undefined FUN_147cd98aa(void)

void FUN_147cd98aa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147cd98e8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,2);
  }
  return;
}



// FUNCTION 147cd98e8 FUN_147cd98e8 body=112 status=ok
// SIG undefined FUN_147cd98e8(void)

ulonglong FUN_147cd98e8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147cd9922;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,2);
      param_2 = param_2 / 0xc;
    }
  }
LAB_147cd9922:
  return param_2 & 0xffffffff;
}



// FUNCTION 147cd9958 FUN_147cd9958 body=556 status=ok
// SIG undefined FUN_147cd9958(void)

void FUN_147cd9958(ulonglong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xc;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_147cd9b86(param_2,param_1);
    goto LAB_147cd9a99;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[1] * 0xc,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0xc);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_147cd9a99;
    local_28 = (uint)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_147cd9a72:
    uVar4 = *param_1;
    uVar5 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
    if ((uVar4 & 1) == 0) {
      uVar5 = uVar4;
    }
    (**(code **)(*param_2 + 0x170))(param_2,uVar5,(longlong)(int)local_28 * 0xc);
  }
  else {
    if (local_24 == 0xc) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0xaaaaaab) {
        FUN_147cd924a(param_1);
        uVar4 = param_1[1];
        *(uint *)(param_1 + 1) = (int)uVar4 + local_28;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)uVar4) < local_28) {
          FUN_147cd9816(param_1);
        }
        goto LAB_147cd9a72;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_147cd9a99:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cd9b86 FUN_147cd9b86 body=387 status=ok
// SIG undefined FUN_147cd9b86(void)

longlong * FUN_147cd9b86(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = (uint)param_2[1];
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
      FUN_147cd9274(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = *param_2;
      uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
      if ((uVar3 & 1) == 0) {
        uVar5 = uVar3;
      }
      FUN_147cd9d0a(param_1,uVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    FUN_147cd924a(param_2);
    if (0 < (int)local_2c) {
      iVar6 = 0;
      do {
        uVar4 = FUN_147cd9e5c(param_2);
        FUN_147cd9d0a(param_1,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147cd9d0a FUN_147cd9d0a body=336 status=ok
// SIG undefined FUN_147cd9d0a(void)

longlong * FUN_147cd9d0a(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  ulonglong *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  byte bVar7;
  longlong lVar8;
  undefined1 auStack_58 [39];
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e39130);
  lVar8 = 0;
  do {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_147cd9d8c:
      puVar4 = *(undefined2 **)param_1[1];
      if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,(undefined2 *)(param_2 + lVar8),2);
        }
        else {
          thunk_FUN_1457251a8(param_1);
        }
      }
      else {
        *(undefined2 *)(param_2 + lVar8) = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
      }
    }
    else {
      iVar6 = FUN_1448332aa(param_1,&DAT_149e39130);
      if (3 < iVar6) goto LAB_147cd9d8c;
      local_31 = 0;
      puVar3 = (ulonglong *)param_1[1];
      pbVar1 = (byte *)*puVar3 + 1;
      if ((byte *)puVar3[1] < pbVar1) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_31,1);
        bVar7 = local_31;
      }
      else {
        bVar7 = *(byte *)*puVar3;
        *puVar3 = (ulonglong)pbVar1;
      }
      *(ushort *)(param_2 + lVar8) = (ushort)bVar7;
    }
    lVar8 = lVar8 + 2;
    if (lVar8 == 8) {
      lVar8 = 0;
      do {
        puVar2 = (undefined1 *)(param_2 + 8 + lVar8);
        puVar5 = *(undefined1 **)param_1[1];
        if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar2,1);
        }
        else {
          *puVar2 = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 147cd9e5c FUN_147cd9e5c body=70 status=ok
// SIG undefined FUN_147cd9e5c(void)

longlong FUN_147cd9e5c(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147cd9816(param_1,iVar1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  return uVar3 + (longlong)iVar1 * 0xc;
}



// FUNCTION 147cd9ea2 FUN_147cd9ea2 body=66 status=ok
// SIG undefined FUN_147cd9ea2(void)

undefined8 * FUN_147cd9ea2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa691d0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cd9ee4 FUN_147cd9ee4 body=123 status=ok
// SIG undefined FUN_147cd9ee4(void)

void FUN_147cd9ee4(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_147cda0fe(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_147cda690(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147cda716(lVar1);
    return;
  }
  return;
}



// FUNCTION 147cd9fc0 FUN_147cd9fc0 body=66 status=ok
// SIG undefined FUN_147cd9fc0(void)

undefined8 * FUN_147cd9fc0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa691d0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cda002 FUN_147cda002 body=56 status=ok
// SIG undefined FUN_147cda002(void)

longlong FUN_147cda002(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cda052 FUN_147cda052 body=56 status=ok
// SIG undefined FUN_147cda052(void)

int FUN_147cda052(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x20000000) {
    iVar1 = *(uint *)(param_1 + 0x10) << 3;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,8);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 147cda0b2 FUN_147cda0b2 body=21 status=ok
// SIG undefined FUN_147cda0b2(void)

undefined * FUN_147cda0b2(void)

{
  FUN_147cda15e();
  return &DAT_14cb00a80;
}



// FUNCTION 147cda0d4 FUN_147cda0d4 body=41 status=ok
// SIG undefined FUN_147cda0d4(void)

void FUN_147cda0d4(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147cda0fe();
  return;
}



// FUNCTION 147cda0fe FUN_147cda0fe body=95 status=ok
// SIG undefined FUN_147cda0fe(void)

void FUN_147cda0fe(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,1);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,1);
  }
  return;
}



// FUNCTION 147cda15e FUN_147cda15e body=205 status=ok
// SIG undefined FUN_147cda15e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cda15e(void)

{
  if ((DAT_14cb00ae7 & 2) != 0) {
    return;
  }
  DAT_14cb00ae7 = DAT_14cb00ae7 | 2;
  _DAT_14cb00a88 = L"TResourceArray";
  _DAT_14cb00aa0 = FUN_146826540;
  _DAT_14cb00aa8 = FUN_146825d77;
  _DAT_14cb00ab0 = FUN_146825fd6;
  _DAT_14cb00ab8 = FUN_1407e02ea;
  _DAT_14cb00ac0 = FUN_146826273;
  _DAT_14cb00a98 = FUN_147cda22c;
  _DAT_14cb00ad8 = 0xffffffff00000020;
  _DAT_14cb00ae0 = 8;
  DAT_14cb00ae4 = 1;
  _DAT_14cb00ac8 = FUN_147cda258;
  FUN_147cda26e();
  FUN_147cda37c();
  FUN_1407e00cc(&DAT_14cb00a80);
  return;
}



// FUNCTION 147cda22c FUN_147cda22c body=43 status=ok
// SIG undefined FUN_147cda22c(void)

void FUN_147cda22c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cda258 FUN_147cda258 body=21 status=ok
// SIG undefined FUN_147cda258(void)

undefined * FUN_147cda258(void)

{
  FUN_147cda555();
  return &DAT_14cb00ae8;
}



// FUNCTION 147cda26e FUN_147cda26e body=270 status=ok
// SIG undefined FUN_147cda26e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cda26e(void)

{
  _DAT_14cb00b10 = L"bNeedsCPUAccess";
  DAT_14cb00b3a = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cb00b18 = &DAT_14c9cfcf0;
  _DAT_14cb00b28 = &LAB_14682652b;
  _DAT_14cb00b30 = &DAT_100000018;
  _DAT_14cb00b38 = 0;
  _DAT_14cb00b20 = DAT_14cb00a90;
  DAT_14cb00a90 = &DAT_14cb00b10;
  return;
}



// FUNCTION 147cda37c FUN_147cda37c body=473 status=ok
// SIG undefined FUN_147cda37c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cda37c(void)

{
  _DAT_14cb00b40 = L"BASE";
  DAT_14cb00b6a = 4;
  if ((DAT_14cb00bd7 & 2) == 0) {
    DAT_14cb00bd7 = DAT_14cb00bd7 | 3;
    _DAT_14cb00b78 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb00b90 = FUN_147cda5d0;
    _DAT_14cb00b98 = &LAB_147cda630;
    _DAT_14cb00ba0 = &LAB_147cda63e;
    _DAT_14cb00ba8 = &LAB_147cda64c;
    _DAT_14cb00bb0 = &DAT_147cda65a;
    _DAT_14cb00b88 = FUN_147cda65c;
    _DAT_14cb00bc8 = 0x1000000010;
    _DAT_14cb00bd0 = 8;
    DAT_14cb00bd4 = '\0';
  }
  else if (DAT_14cb00bd4 != '\0') {
    DAT_14cb00ae6 = DAT_14cb00ae6 + '\x01';
  }
  _DAT_14cb00b50 = DAT_14cb00a90;
  _DAT_14cb00b60 = &DAT_100000008;
  _DAT_14cb00b58 = &LAB_14682652b;
  _DAT_14cb00b48 = &DAT_14cb00b70;
  DAT_14cb00ae5 = DAT_14cb00ae5 + '\x01';
  DAT_14cb00a90 = &DAT_14cb00b40;
  _DAT_14cb00bd8 = L"BASE";
  DAT_14cb00c02 = 4;
  _DAT_14cb00be0 = FUN_146268212();
  _DAT_14cb00be8 = DAT_14cb00a90;
  _DAT_14cb00bf0 = &LAB_14682652b;
  DAT_14cb00a90 = &DAT_14cb00bd8;
  DAT_14cb00ae5 = DAT_14cb00ae5 + '\x01';
  _DAT_14cb00bf8 = 0x100000000;
  if (*(char *)(_DAT_14cb00be0 + 100) != '\0') {
    DAT_14cb00ae6 = DAT_14cb00ae6 + '\x01';
  }
  return;
}



// FUNCTION 147cda555 FUN_147cda555 body=122 status=ok
// SIG undefined FUN_147cda555(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cda555(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb00b08) {
    FUN_144b3d300(&DAT_14cb00b08);
    if (DAT_14cb00b08 == -1) {
      DAT_14cb00af0 = 0;
      uRam000000014cb00af8 = 0;
      _DAT_14cb00ae8 = &PTR_FUN_14aa69230;
      DAT_14cb00b00 = 0;
      atexit((_func_5014 *)&LAB_14367fdd3);
      _Init_thread_footer(&DAT_14cb00b08);
      return;
    }
  }
  return;
}



// FUNCTION 147cda5d0 FUN_147cda5d0 body=95 status=ok
// SIG undefined FUN_147cda5d0(void)

void FUN_147cda5d0(void)

{
  undefined1 auStack_48 [32];
  ulonglong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146826a6c(0,local_28,0x10);
  if (local_28[0] != 0 && (local_28[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cda65c FUN_147cda65c body=51 status=ok
// SIG undefined FUN_147cda65c(void)

void FUN_147cda65c(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cda690 FUN_147cda690 body=132 status=ok
// SIG undefined FUN_147cda690(void)

void FUN_147cda690(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,1);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,8,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cda716 FUN_147cda716 body=62 status=ok
// SIG undefined FUN_147cda716(void)

void FUN_147cda716(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147cda754(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,1);
  }
  return;
}



// FUNCTION 147cda754 FUN_147cda754 body=93 status=ok
// SIG undefined FUN_147cda754(void)

ulonglong FUN_147cda754(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,1);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147cda7b2 FUN_147cda7b2 body=537 status=ok
// SIG undefined FUN_147cda7b2(void)

void FUN_147cda7b2(ulonglong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 8;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_147cda9cc(param_2,param_1);
    goto LAB_147cda8df;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[1] << 3,(longlong)*(int *)((longlong)param_1 + 0xc) << 3
            );
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_147cda8df;
    local_28 = (uint)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_147cda8bc:
    uVar4 = *param_1;
    uVar5 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
    if ((uVar4 & 1) == 0) {
      uVar5 = uVar4;
    }
    (**(code **)(*param_2 + 0x170))(param_2,uVar5,(longlong)(int)local_28 << 3);
  }
  else {
    if (local_24 == 8) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x10000000) {
        FUN_147cda0d4(param_1);
        uVar4 = param_1[1];
        *(uint *)(param_1 + 1) = (int)uVar4 + local_28;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)uVar4) < local_28) {
          FUN_147cda690(param_1);
        }
        goto LAB_147cda8bc;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_147cda8df:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cda9cc FUN_147cda9cc body=379 status=ok
// SIG undefined FUN_147cda9cc(void)

longlong * FUN_147cda9cc(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = (uint)param_2[1];
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
      FUN_147cda0fe(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = *param_2;
      uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
      if ((uVar3 & 1) == 0) {
        uVar5 = uVar3;
      }
      FUN_147cdab48(param_1,uVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    FUN_147cda0d4(param_2);
    if (0 < (int)local_2c) {
      iVar6 = 0;
      do {
        uVar4 = FUN_147cdac82(param_2);
        FUN_147cdab48(param_1,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147cdab48 FUN_147cdab48 body=312 status=ok
// SIG undefined FUN_147cdab48(void)

longlong * FUN_147cdab48(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e39130);
  lVar6 = 0;
  do {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_147cdabca:
      puVar1 = *(undefined1 **)param_1[1];
      if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + lVar6),1);
      }
      else {
        *(undefined1 *)(param_2 + lVar6) = *puVar1;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
      }
    }
    else {
      iVar4 = FUN_1448332aa(param_1,&DAT_149e39130);
      if (3 < iVar4) goto LAB_147cdabca;
      local_31 = 0;
      puVar2 = (ulonglong *)param_1[1];
      puVar1 = (undefined1 *)*puVar2 + 1;
      if ((undefined1 *)puVar2[1] < puVar1) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_31,1);
        uVar5 = local_31;
      }
      else {
        uVar5 = *(undefined1 *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      *(undefined1 *)(param_2 + lVar6) = uVar5;
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 4) {
      lVar6 = 0;
      do {
        puVar1 = (undefined1 *)(param_2 + 4 + lVar6);
        puVar3 = *(undefined1 **)param_1[1];
        if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar1,1);
        }
        else {
          *puVar1 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 4);
      if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 147cdac82 FUN_147cdac82 body=66 status=ok
// SIG undefined FUN_147cdac82(void)

longlong FUN_147cdac82(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147cda690(param_1,iVar1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  return uVar3 + (longlong)iVar1 * 8;
}



// FUNCTION 147cdacc4 FUN_147cdacc4 body=121 status=ok
// SIG undefined FUN_147cdacc4(void)

void FUN_147cdacc4(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_140397e0a(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_14746fa8e(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_14746fb0c(lVar1);
    return;
  }
  return;
}



// FUNCTION 147cdad72 FUN_147cdad72 body=66 status=ok
// SIG undefined FUN_147cdad72(void)

undefined8 * FUN_147cdad72(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa692d0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cdadb4 FUN_147cdadb4 body=296 status=ok
// SIG undefined FUN_147cdadb4(void)

void FUN_147cdadb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa62160;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_147cdaf10(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_147cdaf9e(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_147cdaf9e(param_1 + 0x22);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_147cdaedc(param_1 + 0x15);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_147cdb02c(param_1 + 9);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 147cdaedc FUN_147cdaedc body=52 status=ok
// SIG undefined FUN_147cdaedc(void)

void FUN_147cdaedc(longlong *param_1)

{
  FUN_147cdafd2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147cdaf10 FUN_147cdaf10 body=52 status=ok
// SIG undefined FUN_147cdaf10(void)

void FUN_147cdaf10(longlong *param_1)

{
  FUN_147cdaf44();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147cdaf44 FUN_147cdaf44 body=89 status=ok
// SIG undefined FUN_147cdaf44(void)

void FUN_147cdaf44(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147cdaf9e FUN_147cdaf9e body=52 status=ok
// SIG undefined FUN_147cdaf9e(void)

void FUN_147cdaf9e(longlong *param_1)

{
  FUN_147cd37cc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147cdafd2 FUN_147cdafd2 body=89 status=ok
// SIG undefined FUN_147cdafd2(void)

void FUN_147cdafd2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147cdb02c FUN_147cdb02c body=54 status=ok
// SIG undefined FUN_147cdb02c(void)

void FUN_147cdb02c(longlong *param_1)

{
  FUN_147cd40c6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147cdb066 FUN_147cdb066 body=42 status=ok
// SIG undefined FUN_147cdb066(void)

void FUN_147cdb066(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147cdb0b0 FUN_147cdb0b0 body=96 status=ok
// SIG undefined FUN_147cdb0b0(void)

undefined8 FUN_147cdb0b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e9b168();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb01e20,1);
  return uVar3;
}



// FUNCTION 147cdb110 FUN_147cdb110 body=52 status=ok
// SIG undefined FUN_147cdb110(void)

void FUN_147cdb110(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147cdb144 FUN_147cdb144 body=42 status=ok
// SIG undefined FUN_147cdb144(void)

void FUN_147cdb144(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147cdb18e FUN_147cdb18e body=96 status=ok
// SIG undefined FUN_147cdb18e(void)

undefined8 FUN_147cdb18e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f0cf68();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb01ea8,1);
  return uVar3;
}



// FUNCTION 147cdb1ee FUN_147cdb1ee body=52 status=ok
// SIG undefined FUN_147cdb1ee(void)

void FUN_147cdb1ee(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147cdb222 FUN_147cdb222 body=231 status=ok
// SIG undefined FUN_147cdb222(void)

ulonglong FUN_147cdb222(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_8a8 [32];
  undefined8 local_888;
  undefined1 local_878 [1056];
  undefined1 local_458 [1056];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  if (1 < (longlong)*(int *)(param_1 + 0x18)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x860);
    uVar3 = 1;
    do {
      if (*plVar2 == param_2) {
        FUN_147bc57d6(local_458,param_4);
        FUN_147cdb30a(param_1,uVar3 & 0xffffffff,local_458,param_5);
        goto LAB_147cdb2ae;
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 0x88;
    } while ((longlong)*(int *)(param_1 + 0x18) != uVar3);
  }
  FUN_147bc57d6(local_878,param_4);
  local_888 = param_5;
  uVar1 = FUN_147cdb374(param_1,param_2,param_3,local_878);
  uVar3 = (ulonglong)uVar1;
LAB_147cdb2ae:
  FUN_14599ed1e(param_4);
  if ((local_38 ^ (ulonglong)auStack_8a8) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdb30a FUN_147cdb30a body=106 status=ok
// SIG undefined FUN_147cdb30a(void)

void FUN_147cdb30a(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (param_2 != -1) {
    FUN_147bbe85c(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 0x440,param_3);
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x428 + (longlong)param_2 * 0x440) = param_4;
    plVar1 = DAT_14cb016e8;
    if (DAT_14cb016e8 != (longlong *)0x0) {
      DAT_14cb016e8 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  FUN_14599ed1e(param_3);
  return;
}



// FUNCTION 147cdb374 FUN_147cdb374 body=476 status=ok
// SIG undefined FUN_147cdb374(void)

ulonglong FUN_147cdb374(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_4b8 [32];
  longlong local_498 [3];
  longlong local_480;
  int local_478;
  longlong local_470;
  undefined1 local_468 [1056];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  uVar1 = *(uint *)(param_1 + 0x18);
  if (1 < (longlong)(int)uVar1) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x860);
    uVar5 = 1;
    do {
      if (*plVar4 == 0) {
        *plVar4 = param_2;
        local_498[0] = 0;
        local_498[1] = 0;
        FUN_1407c869a(param_3,local_498,0);
        FUN_140ba7826(&local_480,L"__SpecularProfile",local_498);
        iVar3 = local_478 + -1;
        if (local_478 == 0) {
          iVar3 = 0;
        }
        FUN_1446f82e2(&local_470,iVar3,local_480,1);
        plVar4[3] = local_470;
        if (local_480 != 0) {
          FUN_1400020a8();
        }
        if (local_498[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_147cdb470;
      }
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 0x88;
    } while ((longlong)(int)uVar1 != uVar5);
  }
  lVar2 = FUN_14599edca();
  *(longlong *)(lVar2 + 0x420) = param_2;
  local_498[0] = 0;
  local_498[1] = 0;
  FUN_1407c869a(param_3,local_498,0);
  FUN_140ba7826(&local_480,L"__SpecularProfile",local_498);
  iVar3 = local_478 + -1;
  if (local_478 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_470,iVar3,local_480,1);
  *(longlong *)(lVar2 + 0x438) = local_470;
  if (local_480 != 0) {
    FUN_1400020a8();
  }
  if (local_498[0] != 0) {
    FUN_1400020a8();
  }
  uVar5 = (ulonglong)uVar1;
LAB_147cdb470:
  FUN_147bc57d6(local_468,param_4);
  FUN_147cdb30a(param_1,uVar5 & 0xffffffff,local_468,param_5);
  FUN_14599ed1e(param_4);
  if ((local_48 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdb552 FUN_147cdb552 body=210 status=ok
// SIG undefined FUN_147cdb552(void)

void FUN_147cdb552(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_468 [32];
  undefined1 local_448 [1056];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if (1 < (int)DAT_14cb016e0) {
    lVar1 = 0x440;
    do {
      if (*(longlong *)(DAT_14cb016d8 + 0x420 + lVar1) == param_1) {
        *(undefined8 *)(DAT_14cb016d8 + 0x420 + lVar1) = 0;
        lVar2 = DAT_14cb016d8 + lVar1;
        FUN_145c3271e(local_448);
        FUN_14599ee3e(lVar2,local_448);
        FUN_14599ed1e(local_448);
        *(undefined8 *)(DAT_14cb016d8 + 0x428 + lVar1) = 0;
        *(undefined8 *)(DAT_14cb016d8 + 0x438 + lVar1) = 0;
        break;
      }
      lVar1 = lVar1 + 0x440;
    } while ((ulonglong)DAT_14cb016e0 * 0x440 - lVar1 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cdb626 FUN_147cdb626 body=172 status=ok
// SIG undefined FUN_147cdb626(void)

void FUN_147cdb626(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_468 [40];
  undefined1 local_440 [1056];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_468;
  FUN_147bc57d6(local_440);
  uVar2 = 0xffffffff;
  if (1 < (longlong)DAT_14cb016e0) {
    plVar1 = (longlong *)(DAT_14cb016d8 + 0x860);
    uVar3 = 1;
    do {
      if (*plVar1 == param_1) {
        uVar2 = uVar3 & 0xffffffff;
        break;
      }
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 0x88;
    } while ((longlong)DAT_14cb016e0 != uVar3);
  }
  FUN_147cdb30a(&DAT_14cb016c8,uVar2,local_440,param_3);
  FUN_14599ed1e(param_2);
  if ((local_20 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cdb6d3 FUN_147cdb6d3 body=177 status=ok
// SIG undefined FUN_147cdb6d3(void)

void FUN_147cdb6d3(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e9b168();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb01e20,param_4);
  local_78 = &DAT_14cb01e20;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147ce474e(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdb785 FUN_147cdb785 body=177 status=ok
// SIG undefined FUN_147cdb785(void)

void FUN_147cdb785(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f0cf68();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb01ea8,param_4);
  local_78 = &DAT_14cb01ea8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147ce4b06(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdb858 FUN_147cdb858 body=98 status=ok
// SIG undefined FUN_147cdb858(void)

void FUN_147cdb858(longlong *param_1,int param_2)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
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
  *(ulong *)(param_1 + 0x89) = local_28.Data1;
  *(undefined4 *)((longlong)param_1 + 0x44c) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0x8a) = local_28.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x454) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdb8bb FUN_147cdb8bb body=114 status=ok
// SIG undefined FUN_147cdb8bb(void)

undefined8 FUN_147cdb8bb(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  float fVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    uVar1 = 0;
LAB_147cdb907:
    uVar4 = 0;
    fVar3 = (float)(int)uVar1;
    if (*(char *)(DAT_14cb016d8 + (uVar1 & 0xffffffff) * 0x440) == '\x01') {
      uVar4 = 0x80000000;
      fVar3 = -fVar3;
    }
  }
  else {
    fVar3 = -1.0;
    uVar4 = 0;
    if (1 < (longlong)DAT_14cb016e0) {
      plVar2 = (longlong *)(DAT_14cb016d8 + 0x860);
      uVar1 = 1;
      do {
        if (*plVar2 == param_1) goto LAB_147cdb907;
        uVar1 = uVar1 + 1;
        plVar2 = plVar2 + 0x88;
      } while ((longlong)DAT_14cb016e0 != uVar1);
    }
  }
  return CONCAT44(uVar4,fVar3 / 255.0);
}



// FUNCTION 147cdb92d FUN_147cdb92d body=138 status=ok
// SIG undefined FUN_147cdb92d(void)

undefined4
FUN_147cdb92d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_478 [32];
  undefined8 local_458;
  undefined1 local_450 [1056];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_478;
  FUN_147bc57d6(local_450,param_3);
  local_458 = param_4;
  uVar1 = FUN_147cdb222(&DAT_14cb016c8,param_1,param_2,local_450);
  FUN_14599ed1e(param_3);
  if ((local_30 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdb9b8 FUN_147cdb9b8 body=125 status=ok
// SIG undefined FUN_147cdb9b8(void)

void FUN_147cdb9b8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [144];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = *param_2;
  local_b8 = *(undefined4 *)(param_2 + 1);
  FUN_147cab27d(local_b0,&local_c0);
  FUN_147cdba36(param_1,local_b0,param_4);
  FUN_147cab400(local_b0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdba36 FUN_147cdba36 body=2132 status=ok
// SIG undefined FUN_147cdba36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cdba36(longlong param_1,longlong param_2,undefined1 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 uVar9;
  undefined2 uVar10;
  int iVar11;
  undefined2 uVar12;
  uint uVar13;
  float fVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  ushort uVar23;
  float fVar24;
  longlong lVar25;
  double dVar26;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1408e36f6(param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x78),*param_3);
  auVar8 = _DAT_1499319a0;
  if (0 < *(int *)(param_2 + 0xc)) {
    lVar18 = 0;
    lVar21 = 0;
    lVar25 = 0;
    do {
      lVar22 = *(longlong *)(param_2 + 0x30);
      lVar15 = *(int *)(param_2 + 0x38) * lVar25;
      fVar24 = *(float *)(lVar22 + lVar15);
      fVar14 = *(float *)(lVar22 + 4 + lVar15);
      fVar1 = *(float *)(lVar22 + 8 + lVar15);
      lVar22 = *(longlong *)(param_2 + 0x10);
      lVar15 = *(longlong *)(param_2 + 0x20);
      lVar17 = *(int *)(param_2 + 0x28) * lVar25;
      fVar2 = *(float *)(lVar15 + lVar17);
      fVar3 = *(float *)(lVar15 + 4 + lVar17);
      fVar4 = *(float *)(lVar15 + 8 + lVar17);
      lVar15 = *(int *)(param_2 + 0x18) * lVar25;
      fVar5 = *(float *)(lVar22 + lVar15);
      fVar6 = *(float *)(lVar22 + 4 + lVar15);
      fVar7 = *(float *)(lVar22 + 8 + lVar15);
      lVar22 = *(longlong *)(param_1 + 0x60);
      local_188 = lVar21;
      local_180 = lVar18;
      if (*(char *)(param_1 + 0x81) == '\x01') {
        lVar21 = lVar25 * 0x10;
        iVar11 = (int)ROUND(fVar5 * 32767.0 + fVar5 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        uVar10 = (undefined2)iVar11;
        if (iVar11 < -0x7fff) {
          uVar10 = 0x8000;
        }
        iVar11 = (int)ROUND(fVar6 * 32767.0 + fVar6 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        uVar12 = (undefined2)iVar11;
        if (iVar11 < -0x7fff) {
          uVar12 = 0x8000;
        }
        *(undefined2 *)(lVar22 + lVar21) = uVar10;
        *(undefined2 *)(lVar22 + 2 + lVar21) = uVar12;
        iVar11 = (int)ROUND(fVar7 * 32767.0 + fVar7 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        uVar10 = (undefined2)iVar11;
        if (iVar11 < -0x7fff) {
          uVar10 = 0x8000;
        }
        *(undefined2 *)(lVar22 + 4 + lVar21) = uVar10;
        *(undefined2 *)(lVar22 + 6 + lVar21) = 0x7fff;
        local_128 = (double)fVar1;
        local_130 = (double)fVar14;
        local_138 = (double)fVar24;
        local_148 = (double)fVar4;
        local_150 = (double)fVar3;
        local_158 = (double)fVar2;
        local_168 = (double)fVar7;
        local_170 = (double)fVar6;
        local_178 = (double)fVar5;
        local_160 = 0;
        local_140 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_100 = 0x3ff0000000000000;
        dVar26 = (double)FUN_144a91046(&local_178);
        iVar11 = (int)ROUND(fVar24 * 32767.0 + fVar24 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        uVar10 = (undefined2)iVar11;
        if (iVar11 < -0x7fff) {
          uVar10 = 0x8000;
        }
        *(undefined2 *)(lVar22 + 8 + lVar21) = uVar10;
        iVar11 = (int)ROUND(fVar14 * 32767.0 + fVar14 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        if (iVar11 < -0x7fff) {
          iVar11 = -0x8000;
        }
        iVar16 = (int)ROUND(fVar1 * 32767.0 + fVar1 * 32767.0 + 0.5) >> 1;
        if (0x7ffe < iVar16) {
          iVar16 = 0x7fff;
        }
        *(short *)(lVar22 + 10 + lVar21) = (short)iVar11;
        if (iVar16 < -0x7fff) {
          iVar16 = -0x8000;
        }
        *(short *)(lVar22 + 0xc + lVar21) = (short)iVar16;
        iVar11 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar26 < 0.0) * 4)) >> 1;
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        uVar10 = (undefined2)iVar11;
        if (iVar11 < -0x7fff) {
          uVar10 = 0x8000;
        }
        *(undefined2 *)(lVar22 + 0xe + lVar21) = uVar10;
      }
      else {
        iVar11 = (int)ROUND(fVar5 * 127.0 + fVar5 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar11) {
          iVar11 = 0x7f;
        }
        uVar9 = (undefined1)iVar11;
        if (iVar11 < -0x7f) {
          uVar9 = 0x80;
        }
        iVar11 = (int)ROUND(fVar6 * 127.0 + fVar6 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar11) {
          iVar11 = 0x7f;
        }
        if (iVar11 < -0x7f) {
          iVar11 = -0x80;
        }
        *(undefined1 *)(lVar22 + lVar25 * 8) = uVar9;
        *(char *)(lVar22 + 1 + lVar25 * 8) = (char)iVar11;
        iVar11 = (int)ROUND(fVar7 * 127.0 + fVar7 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar11) {
          iVar11 = 0x7f;
        }
        uVar9 = (undefined1)iVar11;
        if (iVar11 < -0x7f) {
          uVar9 = 0x80;
        }
        *(undefined1 *)(lVar22 + 2 + lVar25 * 8) = uVar9;
        *(undefined1 *)(lVar22 + 3 + lVar25 * 8) = 0x7f;
        local_128 = (double)fVar1;
        local_130 = (double)fVar14;
        local_138 = (double)fVar24;
        local_148 = (double)fVar4;
        local_150 = (double)fVar3;
        local_158 = (double)fVar2;
        local_168 = (double)fVar7;
        local_170 = (double)fVar6;
        local_178 = (double)fVar5;
        local_160 = 0;
        local_140 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_100 = 0x3ff0000000000000;
        dVar26 = (double)FUN_144a91046(&local_178);
        iVar11 = (int)ROUND(fVar24 * 127.0 + fVar24 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar11) {
          iVar11 = 0x7f;
        }
        uVar9 = (undefined1)iVar11;
        if (iVar11 < -0x7f) {
          uVar9 = 0x80;
        }
        *(undefined1 *)(lVar22 + 4 + lVar25 * 8) = uVar9;
        iVar11 = (int)ROUND(fVar14 * 127.0 + fVar14 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar11) {
          iVar11 = 0x7f;
        }
        if (iVar11 < -0x7f) {
          iVar11 = -0x80;
        }
        iVar16 = (int)ROUND(fVar1 * 127.0 + fVar1 * 127.0 + 0.5) >> 1;
        if (0x7e < iVar16) {
          iVar16 = 0x7f;
        }
        *(char *)(lVar22 + 5 + lVar25 * 8) = (char)iVar11;
        if (iVar16 < -0x7f) {
          iVar16 = -0x80;
        }
        *(char *)(lVar22 + 6 + lVar25 * 8) = (char)iVar16;
        iVar11 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(dVar26 < 0.0) * 4)) >> 1;
        if (0x7e < iVar11) {
          iVar11 = 0x7f;
        }
        uVar9 = (undefined1)iVar11;
        if (iVar11 < -0x7f) {
          uVar9 = 0x80;
        }
        *(undefined1 *)(lVar22 + 7 + lVar25 * 8) = uVar9;
      }
      if (0 < *(int *)(param_2 + 0x78)) {
        lVar21 = 8;
        lVar18 = 0;
        do {
          lVar22 = *(longlong *)(param_2 + 0x70);
          if (*(longlong *)(param_2 + 0x70) == 0) {
            lVar22 = param_2 + 0x60;
          }
          lVar15 = *(longlong *)(lVar22 + -8 + lVar21);
          lVar22 = *(int *)(lVar22 + lVar21) * lVar25;
          if (*(char *)(param_1 + 0x80) == '\x01') {
            *(undefined8 *)
             ((ulonglong)*(uint *)(param_1 + 0x78) * local_180 + *(longlong *)(param_1 + 0x68) +
             lVar18 * 8) = *(undefined8 *)(lVar15 + lVar22);
          }
          else {
            lVar17 = (ulonglong)*(uint *)(param_1 + 0x78) * local_188 +
                     *(longlong *)(param_1 + 0x68);
            if (param_3[1] == '\x01') {
              uVar20 = *(uint *)(lVar15 + lVar22);
              uVar23 = (ushort)(uVar20 >> 0x10) & 0x8000;
              uVar19 = uVar20 >> 0x17;
              uVar13 = uVar19 & 0xff;
              if (uVar13 < 0x71) {
                if (0x65 < uVar13) {
                  uVar20 = uVar20 & 0x7fffff | 0x800000;
                  uVar23 = uVar23 + (short)(uVar20 >> (0x7eU - (char)uVar19 & 0x1f)) +
                           (ushort)((uVar20 >> ((byte)(0x7d - (char)uVar19) & 0x1f) & 1) != 0);
                }
              }
              else if (uVar13 < 0x8f) {
                uVar23 = (uVar23 | (ushort)(uVar20 >> 0xd) & 0x3ff | (ushort)((uVar19 & 0x1f) << 10)
                         ) ^ 0x4000;
              }
              else {
                uVar23 = uVar23 | 0x7bff;
              }
              uVar20 = *(uint *)(lVar15 + 4 + lVar22);
              *(ushort *)(lVar17 + lVar18 * 4) = uVar23;
              uVar23 = (ushort)(uVar20 >> 0x10) & 0x8000;
              uVar19 = uVar20 >> 0x17;
              uVar13 = uVar19 & 0xff;
              if (uVar13 < 0x71) {
                if (0x65 < uVar13) {
                  uVar20 = uVar20 & 0x7fffff | 0x800000;
                  uVar23 = uVar23 + (short)(uVar20 >> (0x7eU - (char)uVar19 & 0x1f)) +
                           (ushort)((uVar20 >> ((byte)(0x7d - (char)uVar19) & 0x1f) & 1) != 0);
                }
              }
              else if (uVar13 < 0x8f) {
                uVar23 = (uVar23 | (ushort)(uVar20 >> 0xd) & 0x3ff | (ushort)((uVar19 & 0x1f) << 10)
                         ) ^ 0x4000;
              }
              else {
                uVar23 = uVar23 | 0x7bff;
              }
            }
            else {
              fVar24 = (float)(*(uint *)(lVar15 + lVar22) & auVar8._0_4_);
              if ((uint)fVar24 < 0x47800000) {
                if ((uint)fVar24 < 0x38800000) {
                  fVar14 = fVar24 + 0.5;
                }
                else {
                  fVar24 = (float)((int)fVar24 + 0x8000fff + (uint)(((uint)fVar24 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar14 = fVar24;
                }
              }
              else {
                fVar14 = (float)((0x7f800000 < (uint)fVar24 | 0x3e) << 9);
              }
              iVar11 = movmskps(fVar24,ZEXT416(*(uint *)(lVar15 + lVar22)));
              *(ushort *)(lVar17 + lVar18 * 4) = (ushort)(iVar11 << 0xf) | SUB42(fVar14,0);
              uVar20 = *(uint *)(lVar15 + 4 + lVar22);
              fVar24 = (float)(uVar20 & auVar8._0_4_);
              if ((uint)fVar24 < 0x47800000) {
                if ((uint)fVar24 < 0x38800000) {
                  fVar14 = fVar24 + 0.5;
                }
                else {
                  fVar24 = (float)((int)fVar24 + 0x8000fff + (uint)(((uint)fVar24 >> 0xd & 1) != 0)
                                  >> 0xd);
                  fVar14 = fVar24;
                }
              }
              else {
                fVar14 = (float)((0x7f800000 < (uint)fVar24 | 0x3e) << 9);
              }
              iVar11 = movmskps(fVar24,ZEXT416(uVar20));
              uVar23 = (ushort)(iVar11 << 0xf) | SUB42(fVar14,0);
            }
            *(ushort *)(lVar17 + 2 + lVar18 * 4) = uVar23;
          }
          lVar18 = lVar18 + 1;
          lVar21 = lVar21 + 0x10;
        } while (lVar18 < *(int *)(param_2 + 0x78));
      }
      lVar25 = lVar25 + 1;
      lVar21 = local_188 + 4;
      lVar18 = local_180 + 8;
    } while (lVar25 < *(int *)(param_2 + 0xc));
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cdc28c FUN_147cdc28c body=32 status=ok
// SIG undefined FUN_147cdc28c(void)

int FUN_147cdc28c(longlong param_1)

{
  *(uint *)(param_1 + 0x70) = (uint)*(byte *)(param_1 + 0x81) * 8 + 8;
  return *(int *)(param_1 + 0x7c) << (*(byte *)(param_1 + 0x81) + 3 & 0x1f);
}



// FUNCTION 147cdc2ac FUN_147cdc2ac body=35 status=ok
// SIG undefined FUN_147cdc2ac(void)

int FUN_147cdc2ac(longlong param_1)

{
  *(uint *)(param_1 + 0x74) = (uint)*(byte *)(param_1 + 0x80) * 4 + 4;
  return (*(int *)(param_1 + 0x78) << (*(byte *)(param_1 + 0x80) + 2 & 0x1f)) *
         *(int *)(param_1 + 0x7c);
}



// FUNCTION 147cdc2d0 FUN_147cdc2d0 body=286 status=ok
// SIG undefined FUN_147cdc2d0(void)

void FUN_147cdc2d0(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar1 = param_3 + 0x30;
  *(undefined4 *)(param_3 + 0x70) = 0;
  if (*(int *)(param_3 + 0x74) != 0) {
    FUN_14472d7c8(lVar1,0);
  }
  *(undefined1 *)(param_3 + 0xbd) = *(undefined1 *)(param_1 + 0x78);
  *(undefined8 *)(param_3 + 0xa8) = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(uint *)(param_1 + 0x78);
  uVar7 = 4;
  if (uVar3 < 4) {
    uVar7 = uVar3;
  }
  if (param_4 < 0) {
    uVar7 = uVar3;
  }
  if (uVar7 != 0) {
    bVar2 = *(byte *)(param_1 + 0x80);
    uVar6 = 0xc;
    if (bVar2 != 0) {
      uVar6 = 2;
    }
    uVar5 = 0;
    do {
      iVar4 = *(int *)(param_3 + 0x70);
      *(uint *)(param_3 + 0x70) = iVar4 + 1U;
      if (*(uint *)(param_3 + 0x74) < iVar4 + 1U) {
        FUN_14472d7dc(lVar1,iVar4);
      }
      lVar8 = (longlong)iVar4 * 0x10;
      *(longlong *)(lVar1 + lVar8) = param_1 + 0x28;
      *(undefined4 *)(param_3 + 0x38 + lVar8) = 0;
      *(char *)(param_3 + 0x3c + lVar8) = (char)(uVar5 << (bVar2 & 0x1f | 2));
      *(char *)(param_3 + 0x3d + lVar8) = (char)(uVar3 << (bVar2 & 0x1f | 2));
      *(undefined1 *)(param_3 + 0x3e + lVar8) = uVar6;
      *(undefined1 *)(param_3 + 0x3f + lVar8) = 4;
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
  }
  return;
}



// FUNCTION 147cdc3fe FUN_147cdc3fe body=75 status=ok
// SIG undefined FUN_147cdc3fe(void)

void FUN_147cdc3fe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1463fd1d0(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdc44a FUN_147cdc44a body=42 status=ok
// SIG undefined FUN_147cdc44a(void)

void FUN_147cdc44a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147cdc494 FUN_147cdc494 body=96 status=ok
// SIG undefined FUN_147cdc494(void)

undefined8 FUN_147cdc494(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f0d556();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb01f30,1);
  return uVar3;
}



// FUNCTION 147cdc4f4 FUN_147cdc4f4 body=52 status=ok
// SIG undefined FUN_147cdc4f4(void)

void FUN_147cdc4f4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147cdc528 FUN_147cdc528 body=230 status=ok
// SIG undefined FUN_147cdc528(void)

void FUN_147cdc528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145f0d556();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14cb01f30,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145f0d556();
  FUN_147ce72d4(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdc610 FUN_147cdc610 body=72 status=ok
// SIG undefined FUN_147cdc610(void)

void FUN_147cdc610(void)

{
  longlong *plVar1;
  
  plVar1 = DAT_14cb01860;
  if (DAT_14cb01860 != (longlong *)0x0) {
    DAT_14cb01860 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = DAT_14cb01868;
  if (DAT_14cb01868 == (longlong *)0x0) {
    return;
  }
  DAT_14cb01868 = (longlong *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000147cdc654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))();
  return;
}



// FUNCTION 147cdc658 FUN_147cdc658 body=861 status=ok
// SIG undefined FUN_147cdc658(void)

bool FUN_147cdc658(longlong param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_1a8 [32];
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 < uVar1) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = (longlong)(int)param_2 * 0xa8;
    if (param_2 < 10) {
      uVar4 = param_2 | 0x30;
    }
    else {
      uVar4 = 0x3f;
      if (param_2 - 10 < 0x1a) {
        uVar4 = param_2 + 0x37;
      }
    }
    if (*(char *)(lVar2 + 0x28 + lVar3) == '\0') {
      local_100 = 0;
    }
    else {
      local_100 = 0x3ff0000000000000;
    }
    local_108 = (double)*(float *)(lVar2 + 0x94 + lVar3);
    local_110 = (double)*(float *)(lVar2 + 0x90 + lVar3);
    local_118 = (double)*(float *)(lVar2 + 0x8c + lVar3);
    local_120 = (double)*(float *)(lVar2 + 0x68 + lVar3);
    local_128 = (double)*(float *)(lVar2 + 100 + lVar3);
    local_130 = (double)*(float *)(lVar2 + 0x60 + lVar3);
    local_138 = (double)*(float *)(lVar2 + 0x34 + lVar3);
    local_140 = (double)*(float *)(lVar2 + 0x30 + lVar3);
    local_148 = (double)*(float *)(lVar2 + 0x2c + lVar3);
    local_150 = (double)*(float *)(lVar2 + 0x24 + lVar3);
    local_158 = (double)*(float *)(lVar2 + 0x20 + lVar3);
    local_160 = (double)*(float *)(lVar2 + 0x18 + lVar3);
    local_168 = (double)*(float *)(lVar2 + 0x14 + lVar3);
    local_170 = (double)*(float *)(lVar2 + 0x10 + lVar3);
    local_178 = (double)*(float *)(lVar2 + 8 + lVar3);
    local_180 = (double)*(float *)(lVar2 + 4 + lVar3);
    local_188 = (double)*(float *)(lVar2 + lVar3);
    local_f8 = local_178;
    local_f0 = local_188;
    local_e8 = local_100;
    FUN_140002266(&local_e0,
                  L" %c. %p SurfaceAlbedo=%.1f %.1f %.1f, MeanFreePathColor=%.1f %.1f %.1f, MeanFreePathDistance=%.1f, WorldUnitScale=%.1f,\t\t\t\t\t\t\t\tTint=%.1f %.1f %.1f, BoundaryColorBleeding=%.1f %.1f %.1f, TransmissionTintColor=%.1f %.1f %.1f, EnableBurley=%.1f"
                  ,uVar4,*(undefined8 *)(lVar2 + 0xa0 + lVar3));
    if (&local_e0 == param_3) {
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_e0;
      *(undefined4 *)(param_3 + 1) = local_d8;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_d4;
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2 < uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdc9b6 FUN_147cdc9b6 body=98 status=ok
// SIG undefined FUN_147cdc9b6(void)

void FUN_147cdc9b6(longlong *param_1,int param_2)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
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
  *(ulong *)((longlong)param_1 + 0xc4) = local_28.Data1;
  *(undefined4 *)(param_1 + 0x19) = local_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0xcc) = local_28.Data4._0_4_;
  *(undefined4 *)(param_1 + 0x1a) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdca48 FUN_147cdca48 body=247 status=ok
// SIG undefined FUN_147cdca48(void)

void FUN_147cdca48(longlong param_1,int param_2)

{
  int iVar1;
  void *_Src;
  size_t _Size;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 < param_2) {
    lVar4 = 0;
    lVar3 = (longlong)iVar1;
    do {
      lVar4 = lVar4 + *(longlong *)(param_1 + 0x80 + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while (param_2 != lVar3);
  }
  else {
    lVar4 = 0;
  }
  if (*(longlong *)(param_1 + 0x80 + (longlong)iVar1 * 8) < lVar4) {
    pvVar2 = (void *)FUN_14001cc68(lVar4,0x10);
    lVar3 = (longlong)*(int *)(param_1 + 0xf8);
    if (*(int *)(param_1 + 0xf8) < param_2) {
      _Dst = pvVar2;
      do {
        _Src = *(void **)(param_1 + 8 + lVar3 * 8);
        _Size = *(size_t *)(param_1 + 0x80 + lVar3 * 8);
        if (_Src != (void *)0x0) {
          memcpy(_Dst,_Src,_Size);
        }
        _Dst = (void *)((longlong)_Dst + _Size);
        lVar3 = lVar3 + 1;
      } while (param_2 != lVar3);
    }
    lVar3 = -0x78;
    do {
      if (*(longlong *)(param_1 + 0x80 + lVar3) != 0) {
        FUN_1400020a8();
        *(undefined8 *)(param_1 + 0x80 + lVar3) = 0;
      }
      *(undefined8 *)(param_1 + 0xf8 + lVar3) = 0;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0);
    *(void **)(param_1 + 8 + (longlong)*(int *)(param_1 + 0xf8) * 8) = pvVar2;
    *(longlong *)(param_1 + 0x80 + (longlong)*(int *)(param_1 + 0xf8) * 8) = lVar4;
  }
  return;
}



// FUNCTION 147cdcb6e FUN_147cdcb6e body=647 status=ok
// SIG undefined FUN_147cdcb6e(void)

undefined8 * FUN_147cdcb6e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 **ppuVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t *_Str;
  double dVar10;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1 + 0xc0;
  FUN_1405f35b2(lVar2,param_3);
  uVar6 = FUN_14045d4ce(lVar2,L"ReplayStreamerOverride=",0);
  FUN_1446ddc76(&local_48,"NetworkReplayStreaming",1);
  puVar5 = local_48;
  uVar7 = FUN_144a52528();
  plVar8 = (longlong *)FUN_14493e38c(uVar7,puVar5);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x40))(plVar8,uVar6);
  (**(code **)(*plVar8 + 0x40))(plVar8,&local_48);
  plVar8 = local_40;
  ppuVar3 = (undefined8 **)(param_1 + 0x138);
  if (ppuVar3 != &local_48) {
    *(undefined8 **)(param_1 + 0x138) = local_48;
    local_48 = (undefined8 *)0x0;
    plVar4 = *(longlong **)(param_1 + 0x140);
    if (local_40 != plVar4) {
      local_40 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x140) = plVar8;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  plVar8 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = *ppuVar3;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x1a8))(plVar8,param_1 + 0xa40);
    lVar9 = FUN_14045d4ce(lVar2,L"ReplayStreamerDemoPath=",0);
    if (lVar9 != 0) {
      plVar8 = *ppuVar3;
      FUN_140056680(&local_48,lVar9);
      (**(code **)(*plVar8 + 0x198))(plVar8,&local_48);
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  local_48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  local_48[1] = 0;
  *local_48 = &PTR_FUN_14aa6e7a0;
  local_48[2] = param_1;
  FUN_146efc324(param_1 + 0x8a0,&local_48,0);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  FUN_147cdcdf6(&DAT_14cb10a90,&local_48,param_1,FUN_147cdcedc);
  FUN_147cdcdf6(&DAT_14cb10a78,&local_48,param_1,FUN_143684b94);
  lVar9 = FUN_14045d4ce(lVar2,L"CheckpointSaveMaxMSPerFrame",0);
  if (lVar9 != 0) {
    _Str = (wchar_t *)FUN_14045d4ce(lVar2,L"CheckpointSaveMaxMSPerFrame=",0);
    dVar10 = _wtof(_Str);
    *(float *)(param_1 + 0x184) = (float)dVar10;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x138);
  lVar2 = *(longlong *)(param_1 + 0x140);
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdcdf6 FUN_147cdcdf6 body=228 status=ok
// SIG undefined FUN_147cdcdf6(void)

undefined8
FUN_147cdcdf6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1ca6c0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14aa6e7c0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1411df00c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdcedc FUN_147cdcedc body=345 status=ok
// SIG undefined FUN_147cdcedc(void)

void FUN_147cdcedc(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((param_2 != 0) && ((*(byte *)(param_2 + 0x242) & 1) == 0)) &&
      (cVar1 = FUN_1447ffd82(param_1 + 0x148,param_3), cVar1 != '\0')) &&
     ((*(longlong *)(param_3 + 0x108) != 0 && (cVar1 = FUN_147a5faf8(), cVar1 != '\0')))) {
    if (*(char *)(param_1 + 0x17f) == '\x01') {
      FUN_147cded98(&local_38,param_2);
      puVar5 = local_38;
      if (local_30 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      iVar3 = local_30 + -1;
      if (local_30 == 0) {
        iVar3 = 0;
      }
      uVar2 = FUN_144a49b4a(iVar3,puVar5);
      iVar3 = FUN_144a7df4c(param_1 + 0x738,uVar2,&local_38);
      if (iVar3 != -1) {
        lVar4 = FUN_147a61e24(param_1,&local_38);
        *(undefined1 *)(lVar4 + 0x14) = 0;
        FUN_147cdfc46(param_1 + 0x840,param_2);
        local_40 = 0;
        FUN_14485c47a(&local_40,param_2);
        FUN_147cdfcca(param_1 + 0x6b8,local_40);
      }
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar4 = FUN_144a79778(param_2);
    FUN_147cea8a4(param_1 + 0x7d8,*(undefined8 *)(lVar4 + 0x18));
  }
  FUN_147cea980(param_1 + 0x788,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cdd036 FUN_147cdd036 body=236 status=ok
// SIG undefined FUN_147cdd036(void)

void FUN_147cdd036(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + 0x1a0;
  local_38 = DAT_14c8733f4;
  uStack_34 = DAT_14c8733f8;
  uStack_30 = DAT_14c8733fc;
  uStack_2c = DAT_14c873400;
  lVar2 = FUN_144afef82(lVar1);
  uVar4 = 0;
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined4 *)(lVar2 + 0x10);
  }
  (**(code **)(*param_2 + 0x110))(param_2,uVar3);
  local_38 = DAT_14c8733e4;
  uStack_34 = DAT_14c8733e8;
  uStack_30 = DAT_14c8733ec;
  uStack_2c = DAT_14c8733f0;
  lVar2 = FUN_144afef82(lVar1);
  if (lVar2 != 0) {
    uVar4 = *(undefined4 *)(lVar2 + 0x10);
  }
  (**(code **)(*param_2 + 0x118))(param_2,uVar4);
  (**(code **)(*param_2 + 0xf8))(param_2,*(undefined8 *)(param_1 + 0x230));
  (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(param_1 + 0x238));
  (**(code **)(*param_2 + 0x108))(param_2,param_1 + 0x1e8);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147cdd11a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x60))(param_2,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdd124 FUN_147cdd124 body=78 status=ok
// SIG undefined FUN_147cdd124(void)

undefined4 FUN_147cdd124(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar2 = FUN_144afef82(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdd174 FUN_147cdd174 body=123 status=ok
// SIG undefined FUN_147cdd174(void)

void FUN_147cdd174(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_147bcd6c4(param_2,param_1 + 0x1a0);
    *(undefined8 *)(param_2 + 0x14b0) = *(undefined8 *)(param_1 + 0x230);
    *(undefined4 *)(param_2 + 0x14b8) = *(undefined4 *)(param_1 + 0x238);
    *(undefined8 *)(param_2 + 0x14c0) = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined4 *)(param_2 + 0x14c8) = *(undefined4 *)(param_1 + 0x1f0);
    FUN_144a787a6(param_2 + 0x14d0,param_1 + 0x1f8);
    return;
  }
  return;
}



// FUNCTION 147cdd1f0 FUN_147cdd1f0 body=1364 status=ok
// SIG undefined FUN_147cdd1f0(void)

void FUN_147cdd1f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  int iStack_d8;
  longlong *local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 == (longlong *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)(*param_2 + 0x180))(param_2);
  }
  lVar13 = param_1 + 0x148;
  FUN_14485c47a(lVar13,uVar11);
  lVar9 = DAT_14cad6e20;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar8 + 0xc60) == 0x40000002) {
    uVar7 = 0;
  }
  else {
    bVar5 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar5 ^ 1);
  }
  piVar1 = (int *)(lVar8 + 0xc60);
  bVar16 = true;
  if (*(int *)(lVar9 + uVar7 * 4) == 0) {
    lVar8 = FUN_14479d2ce(lVar13);
    if ((*(longlong *)(lVar8 + 0x30) == 0) ||
       (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x2b0), lVar8 == 0)) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x3f0);
    }
    bVar16 = lVar8 != 0;
  }
  *(bool *)(param_1 + 0x17f) = bVar16;
  lVar8 = DAT_14cad6e38;
  if (*piVar1 == 0x40000002) {
    uVar7 = 0;
  }
  else {
    bVar5 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar5 ^ 1);
  }
  if (*(int *)(lVar8 + uVar7 * 4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x48))
                      (*(longlong **)(param_1 + 0x138),1);
  }
  *(undefined1 *)(param_1 + 0x180) = uVar4;
  lVar8 = DAT_14cad6e50;
  if (*piVar1 == 0x40000002) {
    uVar7 = 0;
  }
  else {
    bVar5 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar5 ^ 1);
  }
  *(bool *)(param_1 + 0x181) = *(int *)(lVar8 + uVar7 * 4) != 0;
  lVar8 = param_1 + 0xc0;
  lVar9 = FUN_14045d4ce(lVar8,L"DemoFriendlyName=",0);
  lVar10 = FUN_14045d4ce(lVar8,L"RecordMapChanges",0);
  *(bool *)(param_1 + 0x183) = lVar10 != 0;
  local_68 = 0;
  uStack_60 = 0;
  uVar11 = FUN_14479d2ce(lVar13);
  FUN_14375df50(DAT_14cb0d2b0,&local_c8,uVar11);
  if (-1 < (longlong)(int)uStack_c0) {
    uVar14 = uStack_c0 & 0xffffffff;
    uVar7 = (longlong)(int)uStack_c0;
    if ((int)uStack_c0 < (int)local_c8[1]) {
      do {
        if (*(longlong *)(*local_c8 + uVar7 * 8) != 0) {
          uVar14 = uVar7 & 0xffffffff;
          break;
        }
        uVar14 = uVar7 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)uVar7 + 1);
        uVar7 = uVar14;
      } while ((int)uVar14 < (int)local_c8[1]);
      if ((int)uVar14 < 0) goto LAB_147cdd455;
    }
    plVar12 = local_c8;
    while (uVar7 = uStack_60, (int)uVar14 < (int)plVar12[1]) {
      lVar10 = *(longlong *)(*plVar12 + (uVar14 & 0xffffffff) * 8);
      uVar15 = uVar14;
      if (lVar10 != 0) {
        uVar2 = *(undefined4 *)(lVar10 + 0xe0);
        lVar10 = (longlong)(int)uStack_60;
        uVar6 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar6);
        if (uStack_60._4_4_ < uVar6) {
          FUN_1446f48e2(&local_68,uVar7 & 0xffffffff);
        }
        *(undefined4 *)(local_68 + lVar10 * 4) = uVar2;
        uVar14 = uStack_c0 & 0xffffffff;
        uVar15 = uVar14;
        plVar12 = local_c8;
      }
      do {
        iVar3 = (int)uVar14;
        uVar6 = iVar3 + 1;
        uVar14 = (ulonglong)uVar6;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
        if ((int)uVar15 < -1) goto LAB_147cdd455;
      } while (((int)uVar6 < (int)plVar12[1]) &&
              (*(longlong *)(*plVar12 + (ulonglong)uVar6 * 8) == 0));
      if (iVar3 < -1) break;
    }
  }
LAB_147cdd455:
  *(undefined1 *)(param_1 + 0x17d) = 1;
  iVar3 = *(int *)(param_1 + 0xf0) + -1;
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(param_1 + 0x128,*(undefined8 *)(param_1 + 0xe8),iVar3);
  if (*(char *)(param_1 + 0x180) != '\0') {
    FUN_143685028(param_2);
  }
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  local_78 = 0;
  iVar3 = *(int *)(param_1 + 0xf0) + -1;
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(&local_c8,*(undefined8 *)(param_1 + 0xe8),iVar3);
  if (lVar9 == 0) {
    uVar11 = FUN_14479d2ce(lVar13);
    FUN_1410908dc(uVar11,&local_e0,0);
  }
  else {
    FUN_140056680(&local_e0,lVar9);
  }
  iVar3 = iStack_d8 + -1;
  if (iStack_d8 == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(&local_b8,local_e0,iVar3);
  if (local_e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_141641396(lVar8,&local_e0,0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_98 = local_68;
  uStack_90 = uStack_60;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 1;
  FUN_146815e66(&local_e0);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_88 = local_e0;
  uVar11 = FUN_14479d2ce(lVar13);
  FUN_14107e8f0(&DAT_14cb0f1b8,uVar11);
  plVar12 = *(longlong **)(param_1 + 0x138);
  local_e0 = (undefined8 *)0x0;
  iStack_d8 = 0;
  FUN_1446efa72(&local_e0,0,3,0x10);
  iStack_d8 = 3;
  *local_e0 = &PTR_LAB_14a8bcf80;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_e0[2] = lVar9;
  *local_e0 = &PTR_FUN_14aa6e830;
  local_e0[3] = param_1;
  local_e0[4] = FUN_143684f10;
  (**(code **)(*plVar12 + 8))(plVar12,&local_c8,&local_e0);
  FUN_1449db362(&local_e0);
  lVar13 = FUN_14479d2ce(lVar13);
  if (*(longlong *)(lVar13 + 0x20) == 0) {
    FUN_140056680(&local_e0,&DAT_149e01fe8);
  }
  else {
    local_50 = *(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0x18);
    FUN_1400021e4(&local_50,&local_e0);
  }
  FUN_147cdd746(param_1,&local_e0);
  if (local_e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1436851fc(param_1,param_2);
  FUN_147835db2(&local_c8);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cdd746 FUN_147cdd746 body=321 status=ok
// SIG undefined FUN_147cdd746(void)

/* WARNING: Removing unreachable block (ram,0x000147cdd835) */

void FUN_147cdd746(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  void *_Src;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  void *local_58;
  uint local_50;
  void *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x60))();
  FUN_14094a6a4(&local_58,param_2,0);
  _Src = local_58;
  local_48 = (void *)0x0;
  local_40 = CONCAT44(local_40._4_4_,local_50);
  if ((longlong)(int)local_50 == 0) {
    local_40 = (ulonglong)local_50;
  }
  else {
    FUN_1446dd670(&local_48,local_50,0);
    memcpy(local_48,_Src,(longlong)(int)local_50 * 2);
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x158);
  uVar3 = *(int *)(param_1 + 0x158) + 1;
  *(uint *)(param_1 + 0x158) = uVar3;
  local_38 = uVar2;
  if (*(uint *)(param_1 + 0x15c) < uVar3) {
    FUN_147ce7ada((longlong *)(param_1 + 0x150));
  }
  lVar1 = *(longlong *)(param_1 + 0x150);
  *(undefined8 *)(lVar1 + lVar4 * 0x18) = 0;
  *(void **)(lVar1 + lVar4 * 0x18) = local_48;
  *(undefined4 *)(lVar1 + 8 + lVar4 * 0x18) = (undefined4)local_40;
  *(undefined4 *)(lVar1 + 0xc + lVar4 * 0x18) = local_40._4_4_;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = local_38;
  local_40 = 0;
  local_48 = (void *)0x0;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cdd888 FUN_147cdd888 body=73 status=ok
// SIG undefined FUN_147cdd888(void)

void FUN_147cdd888(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x148);
  FUN_14107e8f0(&DAT_14cb0f1d0,uVar1);
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
  }
  FUN_144a7e010(param_1 + 0x128);
  return;
}



// FUNCTION 147cdd8d2 FUN_147cdd8d2 body=149 status=ok
// SIG undefined FUN_147cdd8d2(void)

void FUN_147cdd8d2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_1415d1120(1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = FUN_146815d4a();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_146815da6();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar2 = FUN_145946db2();
  FUN_140670b3c(param_1 + 0x18,uVar2);
  FUN_1446f470e(&local_20,L"Replay",1);
  FUN_1459476e6(param_1 + 0x18,&DAT_14aa6b530,0x13,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdd968 FUN_147cdd968 body=225 status=ok
// SIG undefined FUN_147cdd968(void)

undefined4 * FUN_147cdd968(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *(undefined4 *)(param_2 + 4);
  param_1[1] = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1401254a2(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 0x28);
  }
  param_1[10] = *(undefined4 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  pvVar2 = *(void **)(param_2 + 0x70);
  param_1[0xe] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy(*(void **)(param_1 + 0xc),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x12] = *(undefined4 *)(param_2 + 0xb0);
  return param_1;
}



// FUNCTION 147cdda4a FUN_147cdda4a body=108 status=ok
// SIG undefined FUN_147cdda4a(void)

void FUN_147cdda4a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x148);
  if (lVar1 == param_2) {
    *(undefined1 *)(param_1 + 0x182) = 1;
    FUN_147cdd746(param_1,param_3);
    FUN_1436851fc(param_1,param_4);
    if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147cddaaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x138) + 0xe8))();
      return;
    }
  }
  return;
}



// FUNCTION 147cddab6 FUN_147cddab6 body=324 status=ok
// SIG undefined FUN_147cddab6(void)

undefined4 * FUN_147cddab6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if (param_1 == param_2) {
    uVar1 = param_2[10];
    uVar2 = param_2[0xb];
    uVar3 = param_2[0xc];
    uVar4 = param_2[0xd];
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar4;
    *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
    param_1[0x1a] = param_2[0x1a];
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  else {
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
    uVar1 = param_2[10];
    uVar2 = param_2[0xb];
    uVar3 = param_2[0xc];
    uVar4 = param_2[0xd];
    uVar5 = param_2[0xf];
    uVar6 = param_2[0x10];
    uVar7 = param_2[0x11];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar5;
    param_1[0x10] = uVar6;
    param_1[0x11] = uVar7;
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar4;
    if (*(longlong *)(param_1 + 0x12) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_2 + 0x12) = 0;
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    param_1[0x1a] = param_2[0x1a];
    if (*(longlong *)(param_1 + 0x1c) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_2 + 0x1c) = 0;
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    *(undefined8 *)(param_2 + 0x1e) = 0;
  }
  param_1[0x20] = param_2[0x20];
  FUN_147ce3fb4(param_1 + 0x22,param_2 + 0x22);
  FUN_1410e5bda(param_1 + 0x26,param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  param_1[0x2c] = param_2[0x2c];
  return param_1;
}



// FUNCTION 147cddbfa FUN_147cddbfa body=107 status=ok
// SIG undefined FUN_147cddbfa(void)

undefined8 FUN_147cddbfa(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar5;
  undefined7 uVar4;
  
  lVar1 = DAT_14cad6ee0;
  uVar2 = *(ulonglong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(uVar2 + 0xc60) == 0x40000002) {
    uVar5 = 0;
  }
  else {
    uVar2 = FUN_144a61b4f();
    uVar2 = uVar2 ^ 1;
    uVar5 = uVar2 & 0xff;
  }
  uVar4 = (undefined7)(uVar2 >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (*(char *)(param_1 + 0x890) == '\0') {
    uVar3 = CONCAT71(uVar4,(double)*(float *)(lVar1 + uVar5 * 4) <
                           (double)*(float *)(param_1 + 0x168) - *(double *)(param_1 + 0x170));
  }
  return uVar3;
}



// FUNCTION 147cddc66 FUN_147cddc66 body=70 status=ok
// SIG undefined FUN_147cddc66(void)

longlong FUN_147cddc66(longlong param_1,longlong param_2)

{
  FUN_1410e5bda();
  FUN_146b3e088(param_1 + 0x10,param_2 + 0x10);
  FUN_14173352c(param_1 + 0x60,param_2 + 0x60);
  FUN_147ce4004(param_1 + 0xb0,param_2 + 0xb0);
  return param_1;
}



// FUNCTION 147cddcac FUN_147cddcac body=415 status=ok
// SIG undefined FUN_147cddcac(void)

ulonglong FUN_147cddcac(longlong param_1,undefined8 param_2,double *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      local_38.QuadPart = 0;
      FUN_14485c47a(&local_38,param_1);
      lVar2 = FUN_144b238ce(param_2,&local_38);
      if (lVar2 == 0) {
        if (*(byte *)(param_1 + 0x179) < 2) goto LAB_147cdddd4;
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        local_38.s.HighPart = 0;
        local_38.s.LowPart = DAT_14c892cd8;
        plVar3 = (longlong *)FUN_141364a4a(param_2,&local_38,2,0xffffffff);
        if (plVar3 == (longlong *)0x0) goto LAB_147cdddd4;
        lVar2 = FUN_1414cbbb6();
        if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30)) goto LAB_147cdddd4;
        uVar5 = FUN_1434aa0b0(plVar3,param_1,2);
        cVar1 = FUN_14368a3f6(uVar5,param_1,param_2,0);
        *(uint *)(plVar3 + 6) = *(uint *)(plVar3 + 6) & 0xfffffe7b | 4;
        if (cVar1 != '\0') {
          (**(code **)(*plVar3 + 0x2b8))(plVar3,1);
        }
        FUN_140cef0f4(plVar3,0,1);
      }
      else {
        FUN_14368a3f6(extraout_XMM0_Qa,param_1,param_2,0);
      }
      QueryPerformanceCounter(&local_38);
      if ((0.0 < param_3[1]) &&
         (param_3[1] < ((double)local_38.QuadPart * DAT_14c83f420 + 16777216.0) - *param_3)) {
        uVar4 = 0;
      }
    }
  }
LAB_147cdddd4:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdde4c FUN_147cdde4c body=534 status=ok
// SIG undefined FUN_147cdde4c(void)

ulonglong FUN_147cdde4c(longlong param_1,undefined8 param_2,double *param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  void *_Src;
  ulonglong *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER local_98;
  int local_90;
  undefined4 local_8c;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = 0x4f8;
  if (*(char *)(param_1 + 0x180) != '\0') {
    lVar7 = 0x3c8;
  }
  if (*(int *)(param_1 + 0x4e8) == 0) {
    local_98.s.LowPart = *(undefined4 *)(param_1 + 8 + lVar7);
    puVar3 = (ulonglong *)param_4[1];
    if (puVar3[1] < *puVar3 + 4) {
      if ((*(byte *)((longlong)param_4 + 0x2a) & 2) == 0) {
        (**(code **)(*param_4 + 0x170))(param_4,&local_98,4);
      }
      else {
        FUN_14572512c(param_4,&local_98);
      }
    }
    else {
      *puVar3 = *puVar3 + 4;
    }
  }
  QueryPerformanceCounter(&local_98);
  dVar1 = *param_3;
  dVar2 = param_3[1];
  do {
    iVar5 = *(int *)(param_1 + 0x4e8);
    iVar6 = *(int *)(param_1 + 8 + lVar7);
    if (iVar6 <= iVar5) goto LAB_147cddfc3;
    local_98.QuadPart = 0;
    local_90 = *(int *)(*(longlong *)(param_1 + lVar7) + 8 + (longlong)iVar5 * 0x10);
    lVar8 = (longlong)local_90;
    _Src = *(void **)(*(longlong *)(param_1 + lVar7) + (longlong)iVar5 * 0x10);
    if (lVar8 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,local_90,0);
      memcpy((void *)local_98,_Src,lVar8 * 2);
    }
    (**(code **)(*DAT_14cb0d2b0 + 0x480))(DAT_14cb0d2b0,param_2,&local_98,0);
    FUN_14021219d(param_4,&local_98);
    *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + 1;
    if (param_3[1] <= 0.0) {
LAB_147cddf8a:
      bVar4 = true;
    }
    else {
      QueryPerformanceCounter(&local_88);
      if ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0 < dVar1 + dVar2)
      goto LAB_147cddf8a;
      bVar4 = false;
    }
    if ((void *)local_98.QuadPart != (void *)0x0) {
      FUN_1400020a8();
    }
  } while (bVar4);
  iVar5 = *(int *)(param_1 + 0x4e8);
  iVar6 = *(int *)(param_1 + 8 + lVar7);
LAB_147cddfc3:
  QueryPerformanceCounter(&local_98);
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)param_3 >> 8),iVar5 == iVar6) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cde064 FUN_147cde064 body=436 status=ok
// SIG undefined FUN_147cde064(void)

ulonglong FUN_147cde064(longlong param_1,double *param_2,longlong *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  ulonglong *puVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int local_7c;
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x45c);
  if (*(int *)(param_1 + 0x4e8) == 0) {
    puVar4 = (ulonglong *)param_3[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_7c,4);
      }
      else {
        FUN_14572512c(param_3,&local_7c);
      }
    }
    else {
      local_7c = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
  }
  QueryPerformanceCounter(&local_78);
  iVar5 = *(int *)(param_1 + 0x4e8);
  if (iVar5 < local_7c) {
    dVar2 = *param_2;
    dVar3 = param_2[1];
    do {
      local_88 = *(undefined8 *)(*(longlong *)(param_1 + 0x428) + (longlong)iVar5 * 0x10);
      (**(code **)(*param_3 + 400))(param_3,&local_88);
      iVar5 = *(int *)(param_1 + 0x4e8) + 1;
      *(int *)(param_1 + 0x4e8) = iVar5;
      if (0.0 < param_2[1]) {
        QueryPerformanceCounter(&local_78);
        if (dVar2 + dVar3 <= (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0) {
          iVar5 = *(int *)(param_1 + 0x4e8);
          break;
        }
        iVar5 = *(int *)(param_1 + 0x4e8);
      }
    } while (iVar5 < local_7c);
  }
  bVar6 = iVar5 == local_7c;
  QueryPerformanceCounter(&local_78);
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)param_2 >> 8),bVar6) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cde21a FUN_147cde21a body=314 status=ok
// SIG undefined FUN_147cde21a(void)

void FUN_147cde21a(longlong *param_1,longlong *param_2)

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
    FUN_1417c3e4a(param_2);
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
        FUN_140b3b51e(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x18 + lVar1);
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



// FUNCTION 147cde356 FUN_147cde356 body=619 status=ok
// SIG undefined FUN_147cde356(void)

ulonglong FUN_147cde356(longlong param_1,double *param_2,longlong *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  ulonglong *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_c8 [47];
  undefined1 local_99;
  longlong local_98;
  int local_8c;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_8c = *(int *)(param_1 + 0x4d0);
  if (*(int *)(param_1 + 0x4e8) == 0) {
    puVar5 = (ulonglong *)param_3[1];
    piVar2 = (int *)*puVar5 + 1;
    if ((int *)puVar5[1] < piVar2) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_8c,4);
      }
      else {
        FUN_14572512c(param_3);
      }
    }
    else {
      local_8c = *(int *)*puVar5;
      *puVar5 = (ulonglong)piVar2;
    }
  }
  QueryPerformanceCounter(&local_88);
  iVar6 = *(int *)(param_1 + 0x4e8);
  if (iVar6 < local_8c) {
    dVar3 = *param_2;
    dVar4 = param_2[1];
    do {
      local_98 = *(longlong *)(*(longlong *)(param_1 + 0x4c8) + (longlong)iVar6 * 8);
      if (*(int *)(param_1 + 0x480) != *(int *)(param_1 + 0x4ac)) {
        lVar8 = *(longlong *)(param_1 + 0x4b8);
        if (*(longlong *)(param_1 + 0x4b8) == 0) {
          lVar8 = param_1 + 0x4b0;
        }
        iVar6 = *(int *)(lVar8 + (ulonglong)
                                 (*(int *)(param_1 + 0x4c0) - 1U &
                                 (int)local_98 + (int)((ulonglong)local_98 >> 0x20) * 0x17) * 4);
        if (iVar6 != -1) {
          do {
            plVar7 = (longlong *)(*(longlong *)(param_1 + 0x478) + (longlong)iVar6 * 0x18);
            if (*plVar7 == local_98) goto LAB_147cde41d;
            iVar6 = (int)plVar7[2];
          } while (iVar6 != -1);
        }
      }
      plVar7 = (longlong *)0x0;
LAB_147cde41d:
      local_99 = (undefined1)plVar7[1];
      (**(code **)(*param_3 + 400))(param_3,&local_98);
      puVar5 = (ulonglong *)param_3[1];
      puVar1 = (undefined1 *)*puVar5 + 1;
      if ((undefined1 *)puVar5[1] < puVar1) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_99,1);
      }
      else {
        local_99 = *(undefined1 *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      iVar6 = *(int *)(param_1 + 0x4e8) + 1;
      *(int *)(param_1 + 0x4e8) = iVar6;
      if (0.0 < param_2[1]) {
        QueryPerformanceCounter(&local_88);
        if (dVar3 + dVar4 <= (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) {
          iVar6 = *(int *)(param_1 + 0x4e8);
          break;
        }
        iVar6 = *(int *)(param_1 + 0x4e8);
      }
    } while (iVar6 < local_8c);
  }
  bVar9 = iVar6 == local_8c;
  QueryPerformanceCounter(&local_88);
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)param_2 >> 8),bVar9) & 0xffffffff;
}



// FUNCTION 147cde5c2 FUN_147cde5c2 body=1194 status=ok
// SIG undefined FUN_147cde5c2(void)

ulonglong FUN_147cde5c2(longlong param_1,undefined8 param_2,double *param_3,longlong *param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  ulonglong *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  char cVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  int local_b4;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined1 local_99;
  LARGE_INTEGER local_98;
  int *local_90;
  undefined1 local_84 [4];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  piVar2 = (int *)(param_1 + 0x4e8);
  local_c0 = param_2;
  if (*(int *)(param_1 + 0x4e8) == 0) {
    uVar12 = (**(code **)(*param_4 + 0x28))(param_4);
    *(undefined8 *)(param_1 + 0x4f0) = uVar12;
    piVar7 = *(int **)param_4[1];
    if ((int *)((undefined8 *)param_4[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)param_4 + 0x2a) & 2) == 0) {
        (**(code **)(*param_4 + 0x170))(param_4,piVar2,4);
      }
      else {
        FUN_14572512c(param_4,piVar2);
      }
    }
    else {
      *piVar2 = *piVar7;
      *(longlong *)param_4[1] = *(longlong *)param_4[1] + 4;
    }
  }
  QueryPerformanceCounter(&local_98);
  iVar17 = *(int *)(param_1 + 0x4e0);
  iVar16 = *(int *)(param_1 + 0x4e8);
  if (iVar16 < iVar17) {
    dVar3 = *param_3;
    dVar4 = param_3[1];
    local_d0 = (longlong *)(param_1 + 0x508);
    local_c8 = param_1 + 0x540;
    do {
      lVar5 = *(longlong *)(param_1 + 0x4d8);
      plVar11 = (longlong *)FUN_14479d2ce(lVar5 + (longlong)iVar16 * 0x38 + 8);
      if ((plVar11 != (longlong *)0x0) &&
         ((pbVar18 = (byte *)(lVar5 + (longlong)iVar16 * 0x38), (*pbVar18 & 1) != 0 ||
          (cVar10 = (**(code **)(*plVar11 + 0x1f8))(plVar11), cVar10 != '\0')))) {
        (**(code **)(*param_4 + 400))(param_4,pbVar18);
        (**(code **)(*param_4 + 400))(param_4,pbVar18 + 0x10);
        if (*(int *)(param_1 + 0x510) != *(int *)(param_1 + 0x53c)) {
          lVar5 = *(longlong *)(pbVar18 + 0x18);
          uVar9 = (uint)((ulonglong)lVar5 >> 0x10);
          uVar14 = (uint)lVar5 & 0xffff;
          lVar13 = *(longlong *)(param_1 + 0x548);
          if (*(longlong *)(param_1 + 0x548) == 0) {
            lVar13 = local_c8;
          }
          iVar17 = *(int *)(lVar13 + (ulonglong)
                                     (*(int *)(param_1 + 0x550) - 1U &
                                     (int)((ulonglong)lVar5 >> 0x20) +
                                     ((uint)lVar5 << 0x10 | uVar14) +
                                     (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar14 >> 4)) * 4);
          if (iVar17 != -1) {
            do {
              plVar11 = (longlong *)(*local_d0 + (longlong)iVar17 * 0x14);
              if (*plVar11 == lVar5) {
                if (plVar11 + 1 != (longlong *)0x0 && plVar11 != (longlong *)0x0) {
                  local_b0 = 0;
                  puVar6 = (ulonglong *)param_4[1];
                  puVar1 = (undefined1 *)*puVar6 + 1;
                  if ((undefined1 *)puVar6[1] < puVar1) {
                    (**(code **)(*param_4 + 0x170))(param_4,&local_b0,1);
                  }
                  else {
                    local_b0 = *(undefined1 *)*puVar6;
                    *puVar6 = (ulonglong)puVar1;
                  }
                  local_98.s.LowPart = (int)plVar11[1];
                  (**(code **)(*param_4 + 0x188))(param_4,&local_98);
                  goto LAB_147cde824;
                }
                break;
              }
              iVar17 = *(int *)((longlong)plVar11 + 0xc);
            } while (iVar17 != -1);
          }
        }
        local_99 = 1;
        puVar6 = (ulonglong *)param_4[1];
        puVar1 = (undefined1 *)*puVar6 + 1;
        if ((undefined1 *)puVar6[1] < puVar1) {
          (**(code **)(*param_4 + 0x170))(param_4,&local_99,1);
        }
        else {
          local_99 = *(undefined1 *)*puVar6;
          *puVar6 = (ulonglong)puVar1;
        }
        FUN_1400021e4((longlong)pbVar18 + 0x18,&local_b0);
        (**(code **)(*DAT_14cb0d2b0 + 0x480))(DAT_14cb0d2b0,local_c0,&local_b0,0);
        FUN_14021219d(param_4,&local_b0);
        local_b4 = *(int *)(param_1 + 0x510) - *(int *)(param_1 + 0x53c);
        local_90 = &local_b4;
        local_98.QuadPart = (longlong)pbVar18 + 0x18;
        FUN_140283432(local_d0,local_84,&local_98);
        if (CONCAT71(uStack_af,local_b0) != 0) {
          FUN_1400020a8();
        }
LAB_147cde824:
        local_98.QuadPart =
             CONCAT71((int7)((ulonglong)local_98 >> 8),pbVar18[0x30]) & 0xffffffffffffff03;
        puVar6 = (ulonglong *)param_4[1];
        if (puVar6[1] < *puVar6 + 1) {
          (**(code **)(*param_4 + 0x170))(param_4,&local_98,1);
        }
        else {
          *puVar6 = *puVar6 + 1;
        }
        *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4ec) + 1;
      }
      iVar16 = *piVar2 + 1;
      *piVar2 = iVar16;
      if (0.0 < param_3[1]) {
        QueryPerformanceCounter(&local_98);
        iVar16 = *piVar2;
        if (dVar3 + dVar4 <= (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0) {
          iVar17 = *(int *)(param_1 + 0x4e0);
          break;
        }
      }
      iVar17 = *(int *)(param_1 + 0x4e0);
    } while (iVar16 < iVar17);
  }
  if (iVar16 == iVar17) {
    param_3 = (double *)(**(code **)(*param_4 + 0x28))(param_4);
    (**(code **)(*param_4 + 0x1a0))(param_4,*(undefined8 *)(param_1 + 0x4f0));
    puVar15 = (undefined4 *)(param_1 + 0x4ec);
    puVar8 = *(undefined4 **)param_4[1];
    if ((undefined4 *)((undefined8 *)param_4[1])[1] < puVar8 + 1) {
      if ((*(byte *)((longlong)param_4 + 0x2a) & 2) == 0) {
        (**(code **)(*param_4 + 0x170))(param_4,puVar15,4);
      }
      else {
        FUN_14572512c(param_4,puVar15);
      }
    }
    else {
      *puVar15 = *puVar8;
      *(longlong *)param_4[1] = *(longlong *)param_4[1] + 4;
    }
    (**(code **)(*param_4 + 0x1a0))(param_4,param_3);
  }
  QueryPerformanceCounter(&local_98);
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)param_3 >> 8),iVar16 == iVar17) & 0xffffffff;
}



// FUNCTION 147cdea6e FUN_147cdea6e body=149 status=ok
// SIG undefined FUN_147cdea6e(void)

void FUN_147cdea6e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_147a60b6e();
  lVar4 = FUN_14479d2ce(param_1 + 0x148);
  lVar4 = FUN_147a6176e(param_1,*(undefined8 *)(lVar4 + 0x30));
  *(undefined1 *)(lVar4 + 0x14) = 1;
  lVar4 = FUN_14479d2ce(param_1 + 0x148);
  iVar1 = *(int *)(lVar4 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x88);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      if ((lVar2 != 0) && (cVar3 = FUN_147b980c8(lVar2), cVar3 != '\0')) {
        lVar2 = FUN_147a6176e(param_1,*(undefined8 *)(lVar2 + 0x178));
        *(undefined1 *)(lVar2 + 0x14) = 1;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 147cdeb04 FUN_147cdeb04 body=12 status=ok
// SIG undefined FUN_147cdeb04(void)

void FUN_147cdeb04(longlong param_1)

{
  FUN_147ce8550(param_1 + 0x7d8);
  return;
}



// FUNCTION 147cdeb10 FUN_147cdeb10 body=367 status=ok
// SIG undefined FUN_147cdeb10(void)

void FUN_147cdeb10(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x7d8;
  FUN_147ce8550(lVar1);
  param_1 = param_1 + 0x148;
  lVar4 = FUN_14479d2ce(param_1);
  lVar4 = *(longlong *)(lVar4 + 0x30);
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  local_68 = 0;
  FUN_14485c47a(&local_68,lVar4);
  lVar4 = FUN_14479d2ce(param_1);
  lVar4 = FUN_144a79778(*(undefined8 *)(lVar4 + 0x30));
  local_70 = *(undefined8 *)(lVar4 + 0x18);
  local_60 = &local_70;
  local_58 = &local_68;
  FUN_147ce86d8(lVar1,local_4c,&local_60,0);
  lVar4 = FUN_14479d2ce(param_1);
  iVar2 = *(int *)(lVar4 + 0x90);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x88);
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar6);
      if (((lVar5 != 0) && (cVar3 = FUN_147b980c8(lVar5), cVar3 != '\0')) &&
         (lVar5 = *(longlong *)(lVar5 + 0x178), lVar5 != 0)) {
        local_68 = 0;
        FUN_14485c47a(&local_68,lVar5);
        lVar5 = FUN_144a79778(lVar5);
        local_70 = *(undefined8 *)(lVar5 + 0x18);
        local_60 = &local_70;
        local_58 = &local_68;
        FUN_147ce86d8(lVar1,local_4c,&local_60,0);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cdec80 FUN_147cdec80 body=124 status=ok
// SIG undefined FUN_147cdec80(void)

void FUN_147cdec80(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  local_28 = (lVar1 - param_1[1]) + -8;
  (**(code **)(*(longlong *)*param_1 + 0x1a0))();
  FUN_1408383eb(*param_1,&local_28);
  (**(code **)(*(longlong *)*param_1 + 0x1a0))((longlong *)*param_1,lVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdecfe FUN_147cdecfe body=153 status=ok
// SIG undefined FUN_147cdecfe(void)

void FUN_147cdecfe(longlong *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    local_1c = param_3;
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  (**(code **)(*param_1 + 0x170))(param_1,param_2,(longlong)local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cded98 FUN_147cded98 body=116 status=ok
// SIG undefined FUN_147cded98(void)

undefined8 FUN_147cded98(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_144a79778(param_2);
  local_30 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_30,local_28);
  FUN_14094a6a4(param_1,local_28,0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdee0e FUN_147cdee0e body=388 status=ok
// SIG undefined FUN_147cdee0e(void)

void FUN_147cdee0e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_147be8ad8(param_1 + 8);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x100) * 0xc,
             (longlong)*(int *)(param_1 + 0x104) * 0xc);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x110) * 0x14,
             (longlong)*(int *)(param_1 + 0x114) * 0x14);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x130) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x134) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x150) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  FUN_147cdef92(param_1 + 0x188,param_2);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x290) << 3,
             (longlong)*(int *)(param_1 + 0x294) << 3);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x2a0) * 0x38,
             (longlong)*(int *)(param_1 + 0x2a4) * 0x38);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x2c0) << 4,
             (longlong)*(int *)(param_1 + 0x2c4) << 4);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x2d0) * 0x14,
             (longlong)*(int *)(param_1 + 0x2d4) * 0x14);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x2f0) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x2f4) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x310) << 2;
                    /* WARNING: Could not recover jumptable at 0x000147cdef8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  return;
}



// FUNCTION 147cdef92 FUN_147cdef92 body=333 status=ok
// SIG undefined FUN_147cdef92(void)

void FUN_147cdef92(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 8) << 4,(longlong)*(int *)(param_1 + 0xc) << 4);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x18) * 0x18,
             (longlong)*(int *)(param_1 + 0x1c) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x38) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x3c) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x58) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x68) << 4,(longlong)*(int *)(param_1 + 0x6c) << 4
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x88) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x8c) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0xa8) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xb8) * 0x18,
             (longlong)*(int *)(param_1 + 0xbc) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0xd8) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0xdc) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0xf8) << 2;
                    /* WARNING: Could not recover jumptable at 0x000147cdf0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  return;
}



// FUNCTION 147cdf0e0 FUN_147cdf0e0 body=2437 status=ok
// SIG undefined FUN_147cdf0e0(void)

void FUN_147cdf0e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x670) << 4,
               (longlong)*(int *)(param_1 + 0x674) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x690) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x694) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x6b0) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x6c0) << 4,
               (longlong)*(int *)(param_1 + 0x6c4) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x6e0) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x6e4) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x700) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    FUN_147cdfa66(param_1 + 0x188,param_2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x158) * 0x18,
               (longlong)*(int *)(param_1 + 0x15c) * 0x18);
    iVar5 = *(int *)(param_1 + 0x158);
    if ((longlong)iVar5 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x150);
      lVar7 = 0;
      do {
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(lVar4 + 8 + lVar7) * 2,
                   (longlong)*(int *)(lVar4 + 0xc + lVar7) * 2);
        lVar7 = lVar7 + 0x18;
      } while ((longlong)iVar5 * 0x18 != lVar7);
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x730) * 0x18,
               (longlong)*(int *)(param_1 + 0x734) * 0x18);
    iVar5 = *(int *)(param_1 + 0x730);
    if ((longlong)iVar5 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x728);
      lVar7 = 0;
      do {
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(lVar4 + 8 + lVar7) * 2,
                   (longlong)*(int *)(lVar4 + 0xc + lVar7) * 2);
        lVar7 = lVar7 + 0x18;
      } while ((longlong)iVar5 * 0x18 != lVar7);
    }
    plVar1 = (longlong *)(param_1 + 0x738);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x740) << 5,
               (longlong)*(int *)(param_1 + 0x744) << 5);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x760) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x764) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x780) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    lVar4 = param_1 + 0x748;
    local_68 = 0x100000000;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    iVar5 = 0;
    lStack_60 = lVar4;
    if (*(int *)(param_1 + 0x760) != 0) {
      FUN_1449c0562(&local_68);
      iVar5 = *(int *)(param_1 + 0x760);
    }
    local_78._0_4_ = (uint)local_58;
    local_78._4_4_ = local_58._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_88 = local_68;
    lStack_80 = lStack_60;
    local_90 = plVar1;
    if ((local_58._4_4_ != iVar5) || (lStack_60 != lVar4)) {
      do {
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(*local_90 + 8 + (longlong)local_78._4_4_ * 0x20) * 2,
                   (longlong)*(int *)(*local_90 + 0xc + (longlong)local_78._4_4_ * 0x20) * 2);
        local_78._0_4_ = (uint)local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 || (lStack_80 != lVar4 || local_78._4_4_ != iVar5));
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x790) * 0x18,
               (longlong)*(int *)(param_1 + 0x794) * 0x18);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x7b0) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x7b4) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 2000) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x830) << 2,
               (longlong)*(int *)(param_1 + 0x834) << 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x848) << 4,
               (longlong)*(int *)(param_1 + 0x84c) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x868) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x86c) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x888) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x28) * 0x18,
               (longlong)*(int *)(param_1 + 0x2c) * 0x18);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x48) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x4c) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x68) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x78) * 0x30,
               (longlong)*(int *)(param_1 + 0x7c) * 0x30);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x98) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x9c) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0xb8) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    FUN_147cdee0e(param_1 + 0x240,param_2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x710) * 0x28,
               (longlong)*(int *)(param_1 + 0x714) * 0x28);
    iVar5 = *(int *)(param_1 + 0x710);
    if ((longlong)iVar5 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x708);
      lVar7 = 0;
      do {
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(lVar4 + 8 + lVar7),
                   (longlong)*(int *)(lVar4 + 0xc + lVar7));
        lVar7 = lVar7 + 0x28;
      } while ((longlong)iVar5 * 0x28 != lVar7);
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x720) * 0x28,
               (longlong)*(int *)(param_1 + 0x724) * 0x28);
    iVar5 = *(int *)(param_1 + 0x720);
    if ((longlong)iVar5 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x718);
      lVar7 = 0;
      do {
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(lVar4 + 8 + lVar7),
                   (longlong)*(int *)(lVar4 + 0xc + lVar7));
        lVar7 = lVar7 + 0x28;
      } while ((longlong)iVar5 * 0x28 != lVar7);
    }
    plVar1 = (longlong *)(param_1 + 0x940);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x948) << 5,
               (longlong)*(int *)(param_1 + 0x94c) << 5);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x968) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x96c) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x988) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    lVar4 = param_1 + 0x950;
    local_68 = 0x100000000;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    lStack_60 = lVar4;
    if (*(int *)(param_1 + 0x968) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar5 = *(int *)(param_1 + 0x968);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78._0_4_ = (uint)local_58;
    local_78._4_4_ = local_58._4_4_;
    local_88._0_4_ = (undefined4)local_68;
    local_88._4_4_ = local_68._4_4_;
    lStack_80 = lStack_60;
    local_90 = plVar1;
    if ((local_58._4_4_ != iVar5) || (lStack_60 != lVar4)) {
      do {
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(*local_90 + 0x10 + (longlong)local_78._4_4_ * 0x20) <<
                           3,
                   (longlong)*(int *)(*local_90 + 0x14 + (longlong)local_78._4_4_ * 0x20) << 3);
        local_78._0_4_ = (uint)local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 || (lStack_80 != lVar4 || local_78._4_4_ != iVar5));
    }
    plVar1 = (longlong *)(param_1 + 0x990);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x998) * 0x60,
               (longlong)*(int *)(param_1 + 0x99c) * 0x60);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x9b8) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x9bc) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x9d8) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
    lVar4 = param_1 + 0x9a0;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    lStack_60 = lVar4;
    if (*(int *)(param_1 + 0x9b8) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar5 = *(int *)(param_1 + 0x9b8);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar2 = local_78;
    local_88 = local_68;
    lStack_80 = lStack_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar3 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar5) || (local_78 = uVar2, lStack_60 != lVar4)) {
      do {
        local_78 = uVar2;
        lVar7 = *local_90;
        lVar6 = (longlong)iVar3 * 0x60;
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(lVar7 + 0x10 + lVar6) * 0x28,
                   (longlong)*(int *)(lVar7 + 0x14 + lVar6) * 0x28);
        (**(code **)(*param_2 + 0x10))
                  (param_2,*(int *)(lVar7 + 0x30 + lVar6) + 0x1fU >> 3 & 0xfffffffc,
                   *(int *)(lVar7 + 0x34 + lVar6) + 0x1fU >> 3 & 0xfffffffc);
        lVar7 = (longlong)*(int *)(lVar7 + 0x50 + lVar6) << 2;
        (**(code **)(*param_2 + 0x10))(param_2,lVar7,lVar7);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar3 = local_78._4_4_;
        uVar2 = local_78;
      } while (local_90 != plVar1 || (lStack_80 != lVar4 || local_78._4_4_ != iVar5));
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x9e8) << 4,
               (longlong)*(int *)(param_1 + 0x9ec) << 4);
    if ((longlong)*(int *)(param_1 + 0x9e8) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x9e0);
      lVar7 = (longlong)*(int *)(param_1 + 0x9e8) << 4;
      do {
        FUN_14021219d(param_2,lVar4);
        lVar4 = lVar4 + 0x10;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
      lVar4 = (longlong)*(int *)(param_1 + 0x9e8) << 4;
    }
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,(longlong)*(int *)(param_1 + 0x9ec) << 4);
    if ((longlong)*(int *)(param_1 + 0x9e8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x9e0);
      lVar7 = (longlong)*(int *)(param_1 + 0x9e8) << 4;
      do {
        FUN_14021219d(param_2,lVar4);
        lVar4 = lVar4 + 0x10;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x7e0) * 0x18,
               (longlong)*(int *)(param_1 + 0x7e4) * 0x18);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x800) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x804) + 0x1fU >> 3 & 0xfffffffc);
    lVar4 = (longlong)*(int *)(param_1 + 0x820) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdfa66 FUN_147cdfa66 body=223 status=ok
// SIG undefined FUN_147cdfa66(void)

void FUN_147cdfa66(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x90) * 0x18,
             (longlong)*(int *)(param_1 + 0x94) * 0x18);
  iVar1 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    lVar3 = 0;
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar2 + 8 + lVar3) * 2,
                 (longlong)*(int *)(lVar2 + 0xc + lVar3) * 2);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xa0) << 4,(longlong)*(int *)(param_1 + 0xa4) << 4
            );
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar3 = 0;
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar2 + 8 + lVar3) * 2,
                 (longlong)*(int *)(lVar2 + 0xc + lVar3) * 2);
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 147cdfb45 FUN_147cdfb45 body=174 status=ok
// SIG undefined FUN_147cdfb45(void)

undefined8 FUN_147cdfb45(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14129ec24();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdfbf4 FUN_147cdfbf4 body=81 status=ok
// SIG undefined FUN_147cdfbf4(void)

void FUN_147cdfbf4(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x17e) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  FUN_147a73894(param_1 + 0x940,0);
  FUN_147a71870(param_1 + 0x990,0);
  FUN_147a60b6e(param_1);
  return;
}



// FUNCTION 147cdfc46 FUN_147cdfc46 body=132 status=ok
// SIG undefined FUN_147cdfc46(void)

void FUN_147cdfc46(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_147cea7e4(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147cdfcca FUN_147cdfcca body=276 status=ok
// SIG undefined FUN_147cdfcca(void)

undefined8 FUN_147cdfcca(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar5 = (longlong)*(int *)((longlong)plVar7 + uVar8 * 4);
    if (lVar5 != -1) {
      lVar4 = *param_1;
      lVar5 = lVar5 * 0x10;
      local_48 = *(undefined8 *)(lVar4 + lVar5);
      local_50 = param_2;
      cVar2 = FUN_14472ecf8();
      if (cVar2 == '\0') {
        lVar5 = lVar4 + lVar5;
        do {
          lVar4 = lVar5;
          lVar5 = (longlong)*(int *)(lVar4 + 8);
          if (lVar5 == -1) goto LAB_147cdfcf2;
          lVar1 = *param_1;
          lVar5 = lVar5 * 0x10;
          local_48 = *(undefined8 *)(lVar1 + lVar5);
          local_50 = param_2;
          cVar2 = FUN_14472ecf8(&local_48,&local_50);
          lVar5 = lVar1 + lVar5;
        } while (cVar2 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 8);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      }
      FUN_147cea844(param_1,*puVar6);
      uVar3 = 1;
    }
  }
LAB_147cdfcf2:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdfde0 FUN_147cdfde0 body=287 status=ok
// SIG undefined FUN_147cdfde0(void)

void FUN_147cdfde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1405d0c38(param_3,&local_48);
  uVar3 = (uint)uStack_40;
  if ((uint)(*(int *)(param_4 + 8) - *(int *)(param_4 + 0x34)) < (uint)uStack_40) {
    if ((int)(uint)uStack_40 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)(uint)uStack_40);
    }
    FUN_140e83416(param_4,uStack_40 & 0xffffffff);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_4 + 0x48) == 0) || (*(int *)(param_4 + 0x48) < iVar1)) {
      *(int *)(param_4 + 0x48) = iVar1;
      FUN_14482b9e8(param_4);
    }
  }
  if ((longlong)(int)(uint)uStack_40 == 0) {
    uVar2 = 0;
  }
  else {
    lVar5 = (longlong)(int)(uint)uStack_40 << 4;
    lVar4 = local_48;
    do {
      (**(code **)(*DAT_14cb0d2b0 + 0x480))(DAT_14cb0d2b0,param_2,lVar4,1);
      FUN_140e830ae(param_4,local_4c,lVar4,0);
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
    uVar2 = uStack_40 & 0xffffffff;
  }
  FUN_1447a1747(local_48,uVar2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cdff02 FUN_147cdff02 body=163 status=ok
// SIG undefined FUN_147cdff02(void)

void FUN_147cdff02(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xa48);
  *(undefined8 *)(param_1 + 0xa40) = uVar3;
  *(longlong *)(param_1 + 0xa48) = lVar4;
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
  plVar5 = *(longlong **)(param_1 + 0x138);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x1a8))(plVar5,param_2);
  }
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000147cdff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147cdffa6 FUN_147cdffa6 body=8 status=ok
// SIG undefined FUN_147cdffa6(void)

void FUN_147cdffa6(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x890) = 1;
  return;
}



// FUNCTION 147cdffb2 FUN_147cdffb2 body=106 status=ok
// SIG undefined FUN_147cdffb2(void)

void FUN_147cdffb2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_144aff0e0();
  FUN_14358620a(param_1,lVar1);
  if ((*(byte *)(lVar1 + 0x2b) & 8) != 0) {
    FUN_147cdf0e0(param_1 + 0x1df0,lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce001e FUN_147ce001e body=54 status=ok
// SIG undefined FUN_147ce001e(void)

void FUN_147ce001e(longlong param_1,longlong param_2)

{
  FUN_14358620a();
  if ((*(byte *)(param_2 + 0x2b) & 8) == 0) {
    return;
  }
  FUN_147cdf0e0(param_1 + 0x1df0,param_2);
  return;
}



// FUNCTION 147ce0054 FUN_147ce0054 body=212 status=ok
// SIG undefined FUN_147ce0054(void)

void FUN_147ce0054(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,int param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_5;
  local_40 = 0;
  FUN_147bcbe6e(param_1);
  iVar3 = 0x800;
  if (param_6 < 0x800) {
    iVar3 = param_6;
  }
  if (param_6 == 0) {
    iVar3 = 0x800;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  *(undefined1 *)(param_1 + 0x3a9) = 1;
  *(byte *)((longlong)param_1 + 0xa4) = *(byte *)((longlong)param_1 + 0xa4) | 0x17;
  (**(code **)(*param_1 + 0x2e8))(param_1);
  FUN_147cdcb6e(param_1 + 0x3be,local_30,param_4);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x508) = 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce012a FUN_147ce012a body=85 status=ok
// SIG undefined FUN_147ce012a(void)

void FUN_147ce012a(longlong param_1)

{
  FUN_14156e4a4();
  FUN_147cdd888(param_1 + 0x1df0);
  if (*(longlong *)(param_1 + 0x2858) != 0) {
    FUN_14480f766(&DAT_14cb10a90);
  }
  if (*(longlong *)(param_1 + 0x2860) != 0) {
    FUN_14480f766(&DAT_14cb10a78);
    return;
  }
  return;
}



// FUNCTION 147ce0180 FUN_147ce0180 body=368 status=ok
// SIG undefined FUN_147ce0180(void)

void FUN_147ce0180(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  code *local_60;
  code *local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0x90), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x88);
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4);
      if ((((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x178), lVar2 != 0)) &&
          ((*(byte *)(lVar2 + 0x240) & 0x20) != 0)) && ((*(byte *)(lVar2 + 0x242) & 1) == 0)) {
        FUN_14049cadc(&local_58,lVar2,1,0);
        FUN_147ce02f2(param_1,&local_60,local_58);
        local_58 = local_60;
        FUN_140e32956(param_1,&local_58);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  local_58 = FUN_147ce0498;
  local_50 = 0;
  FUN_147ce0398(&DAT_14cb10a90,&local_60,param_1,&local_58);
  param_1[0x50b] = (longlong)local_60;
  local_58 = FUN_147ce0532;
  local_50 = 0;
  FUN_147ce0398(&DAT_14cb10a78,&local_60,param_1,&local_58);
  param_1[0x50c] = (longlong)local_60;
  FUN_147cdd1f0(param_1 + 0x3be,param_1);
  FUN_143685fee(param_1 + 0x3be,param_1);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ce02f2 FUN_147ce02f2 body=164 status=ok
// SIG undefined FUN_147ce02f2(void)

undefined8
FUN_147ce02f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_3;
  FUN_1400021e4(&local_30,&local_40);
  (**(code **)(*DAT_14cb0d2b0 + 0x480))(DAT_14cb0d2b0,param_1,&local_40,param_4);
  puVar1 = local_40;
  if (local_38 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_2,puVar1,1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ce0398 FUN_147ce0398 body=254 status=ok
// SIG undefined FUN_147ce0398(void)

undefined8
FUN_147ce0398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a1ca6c0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14aa6e8a0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1411df00c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce0498 FUN_147ce0498 body=152 status=ok
// SIG undefined FUN_147ce0498(void)

void FUN_147ce0498(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (((param_2 != 0) && (lVar1 == param_3)) && ((*(byte *)(param_2 + 0x242) & 1) == 0)) {
    FUN_14049cadc(local_38,param_2,0,0);
    FUN_147ce02f2(param_1,&local_40,local_38[0],0);
    local_38[0] = local_40;
    FUN_140e32956(param_1,local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce0532 FUN_147ce0532 body=152 status=ok
// SIG undefined FUN_147ce0532(void)

void FUN_147ce0532(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (((param_2 != 0) && (lVar1 == param_3)) && ((*(byte *)(param_2 + 0x242) & 1) == 0)) {
    FUN_14049cadc(local_38,param_2,1,0);
    FUN_147ce02f2(param_1,&local_40,local_38[0],0);
    local_38[0] = local_40;
    FUN_140e32956(param_1,local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce05cc FUN_147ce05cc body=55 status=ok
// SIG undefined FUN_147ce05cc(void)

void FUN_147ce05cc(longlong param_1,undefined4 param_2)

{
  FUN_14358caf8();
  *(int *)(param_1 + 0x2850) = *(int *)(param_1 + 0x2850) + 1;
  FUN_143686c9c(param_1 + 0x1df0,param_2,param_1);
  return;
}



// FUNCTION 147ce0604 FUN_147ce0604 body=32 status=ok
// SIG undefined FUN_147ce0604(void)

undefined8 FUN_147ce0604(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"UReplayNetConnection");
  return param_2;
}



// FUNCTION 147ce0624 FUN_147ce0624 body=32 status=ok
// SIG undefined FUN_147ce0624(void)

undefined8 FUN_147ce0624(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Replay recording connection");
  return param_2;
}



// FUNCTION 147ce068a FUN_147ce068a body=60 status=ok
// SIG undefined FUN_147ce068a(void)

void FUN_147ce068a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if ((char)param_3 == '\0') {
    FUN_14368bf72(param_1 + 0x1df0,param_1,param_2);
  }
  FUN_1403cbb8c(param_1,param_2,param_3);
  return;
}



// FUNCTION 147ce06c6 FUN_147ce06c6 body=132 status=ok
// SIG undefined FUN_147ce06c6(void)

void FUN_147ce06c6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_147cdff02(param_1 + 0x1df0,&local_20);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce074c FUN_147ce074c body=141 status=ok
// SIG undefined FUN_147ce074c(void)

void FUN_147ce074c(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined1 auStack_58 [39];
  undefined1 local_31;
  longlong local_30;
  undefined1 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = param_3;
  FUN_14358f27e();
  if ((((*(char *)(param_1 + 0x1f70) == '\x01') && (param_2 != 0)) &&
      (*(int *)(param_1 + 0x2030) == 0)) && ((*(byte *)(param_2 + 0x31) & 0x20) != 0)) {
    local_30 = param_2 + 0x70;
    local_28 = &local_31;
    FUN_147a74578(param_1 + 0x23f8,local_1c,&local_30,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce07da FUN_147ce07da body=552 status=ok
// SIG undefined FUN_147ce07da(void)

void FUN_147ce07da(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined ***local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong lStack_f8;
  longlong local_f0;
  undefined **local_e8 [5];
  byte local_bd;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = param_2;
  FUN_144869430(local_e8);
  local_e8[0] = &PTR_FUN_149e8ed80;
  local_bd = local_bd & 0xd7 | 8;
  local_140 = (longlong)*(int *)((longlong)param_1 + 0xc);
  local_58 = (longlong)*(int *)(param_1 + 1);
  local_130 = *param_1;
  lVar2 = param_1[2];
  local_110 = lVar2 + 0x38;
  plVar1 = (longlong *)(lVar2 + 0x28);
  local_100 = 0;
  lStack_f8 = 0;
  local_f0 = 0;
  local_128 = local_e8;
  local_120 = local_130;
  local_118 = plVar1;
  local_108 = local_140;
  local_50 = local_140;
  if ((local_58 < 1) || (*(int *)(lVar2 + 0x30) < 1)) {
    local_148 = 0;
    lVar10 = 0;
    local_150 = 0;
  }
  else {
    lVar8 = 0;
    lVar9 = 0;
    lVar7 = 0;
    local_148 = 0;
    local_150 = 0;
    lVar10 = 0;
    do {
      lVar4 = local_50;
      lVar3 = *plVar1;
      FUN_143697aea(&local_128,*(undefined2 *)(lVar3 + 0x1c + lVar8),
                    *(undefined2 *)(lVar3 + 0x1e + lVar8),local_130);
      iVar5 = *(int *)(lVar3 + 0x28 + lVar8);
      if ((iVar5 < 1) && (iVar5 != 0 || *(int *)(lVar3 + 0x24 + lVar8) != 0)) {
        iVar5 = *(int *)(lVar2 + 0x30);
        lVar6 = local_140;
        if (lVar9 < (longlong)iVar5 + -1) {
          lVar6 = (longlong)*(int *)(*plVar1 + 0x48 + lVar8);
        }
        local_148 = local_148 + (local_50 - lVar4);
        local_150 = local_150 + (lVar6 - lVar7);
        lStack_f8 = local_148;
        local_f0 = local_150;
      }
      else {
        lVar10 = lVar10 + (local_50 - lVar4);
        iVar5 = *(int *)(lVar2 + 0x30);
        local_100 = lVar10;
      }
      lVar7 = (longlong)*(int *)(lVar3 + 0x18 + lVar8);
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x30;
    } while (lVar9 < iVar5);
  }
  plVar1 = local_138;
  (**(code **)(*local_138 + 0x10))(local_138,local_140,local_140);
  (**(code **)(*plVar1 + 0x10))(plVar1,local_150,local_150);
  (**(code **)(*plVar1 + 0x10))(plVar1,lVar10,lVar10);
  (**(code **)(*plVar1 + 0x10))(plVar1,local_148,local_148);
  FUN_144a7fc42(local_e8);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ce0a04 FUN_147ce0a04 body=191 status=ok
// SIG undefined FUN_147ce0a04(void)

void FUN_147ce0a04(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x10 + lVar2) * 2,
               (longlong)*(int *)(param_1 + 0x14 + lVar2) * 2);
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x800);
  FUN_147ce07da(param_1 + 0x818,param_2);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x840) * 0x28,
             (longlong)*(int *)(param_1 + 0x844) * 0x28);
  plVar1 = *(longlong **)(param_1 + 0x848);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x268))(plVar1,param_2);
  }
  if (*(longlong *)(param_1 + 0x800) == 0) {
    return;
  }
  (**(code **)(*param_2 + 0x10))(param_2,0x18,0x18);
  FUN_147ce0ac4(*(undefined8 *)(param_1 + 0x800),param_2);
  return;
}



// FUNCTION 147ce0ac4 FUN_147ce0ac4 body=102 status=ok
// SIG undefined FUN_147ce0ac4(void)

void FUN_147ce0ac4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x10) * 0x90,
             (longlong)*(int *)(param_1 + 0x14) * 0x90);
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = (longlong)*(int *)(param_1 + 0x10) * 0x90;
    do {
      FUN_147ce40f4(lVar2,param_2);
      lVar2 = lVar2 + 0x90;
      lVar1 = lVar1 + -0x90;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 147ce0b2a FUN_147ce0b2a body=9 status=ok
// SIG undefined FUN_147ce0b2a(void)

void FUN_147ce0b2a(longlong param_1)

{
  FUN_147ce0a04(param_1 + 8);
  return;
}



// FUNCTION 147ce0b34 FUN_147ce0b34 body=256 status=ok
// SIG undefined FUN_147ce0b34(void)

void FUN_147ce0b34(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  int local_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 1) {
    FUN_1448759c8(param_4,1);
  }
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
    local_88 = &local_38;
    local_30 = 0;
    local_80 = param_1 + 0x38;
    local_60 = *(int *)(param_1 + 0x40) + -1;
    local_78 = param_1 + 0x48;
    local_48 = *(undefined8 *)(param_1 + 0x60);
    local_70 = *(undefined4 *)(param_1 + 0x50);
    local_6c = 0x100000000;
    local_64 = 0;
    local_40 = 0xffffffff;
    local_38 = param_3;
    FUN_14496e61c(param_1,&local_88,param_2,param_4);
  }
  iVar1 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
    FUN_14488eebe(param_4,iVar1);
  }
  *(undefined2 *)(*param_4 + (longlong)iVar1 * 2) = 0;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce0c36 FUN_147ce0c36 body=710 status=ok
// SIG undefined FUN_147ce0c36(void)

void FUN_147ce0c36(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined2 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  int local_80;
  undefined2 local_7c;
  int local_78;
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = &local_58;
  local_50 = 0;
  plVar1 = (longlong *)(param_1 + 0x38);
  local_80 = *(int *)(param_1 + 0x40) + -1;
  local_98 = param_1 + 0x48;
  local_68 = *(undefined8 *)(param_1 + 0x60);
  local_90 = *(undefined4 *)(param_1 + 0x50);
  local_8c = 0x100000000;
  local_84 = 0;
  local_60 = 0xffffffff;
  *(undefined4 *)(param_4 + 1) = 0;
  local_a0 = plVar1;
  local_58 = param_2;
  if (*(int *)((longlong)param_4 + 0xc) != 1) {
    FUN_1448759c8(param_4,1);
  }
  cVar6 = FUN_14368e05e(&local_a8);
  uVar5 = local_7c;
  do {
    if (cVar6 == '\0') {
      iVar4 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
        FUN_14488eebe(param_4,iVar4);
      }
      *(undefined2 *)(*param_4 + (longlong)iVar4 * 2) = 0;
      if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    lVar8 = *plVar1 + (longlong)local_78 * 0x20;
    uVar2 = *(ushort *)(*plVar1 + 0x16 + (longlong)local_78 * 0x20);
    lVar7 = *(longlong *)(param_3 + 0x10);
    if (*(longlong *)(param_3 + 0x10) == 0) {
      lVar7 = param_3;
    }
    local_7c = uVar5;
    if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0) {
      iVar4 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
        FUN_14488eebe(param_4,iVar4);
      }
      *(undefined2 *)(*param_4 + (longlong)iVar4 * 2) = uVar5;
      if (*(char *)(lVar8 + 0x1c) == '\0') {
        uVar2 = *(ushort *)(*local_58 + (longlong)local_50 * 2);
        iVar4 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
          FUN_14488eebe(param_4,iVar4);
        }
        *(ushort *)(*param_4 + (longlong)iVar4 * 2) = uVar2;
        if (uVar2 != 0) {
          uVar10 = 1;
          do {
            iVar9 = local_50 + uVar10;
            lVar8 = *local_58;
            iVar4 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
              FUN_14488eebe(param_4,iVar4);
            }
            *(undefined2 *)(*param_4 + (longlong)iVar4 * 2) =
                 *(undefined2 *)(lVar8 + (longlong)iVar9 * 2);
            bVar11 = uVar10 != uVar2;
            uVar10 = uVar10 + 1;
          } while (bVar11);
        }
        iVar4 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
          FUN_14488eebe(param_4,iVar4);
        }
        *(undefined2 *)(*param_4 + (longlong)iVar4 * 2) = 0;
        iVar4 = *(int *)(local_a8 + 1);
        *(int *)(local_a8 + 1) = iVar4 + 1;
        lVar8 = (longlong)iVar4 + (ulonglong)*(ushort *)(**local_a8 + (longlong)iVar4 * 2) + 1;
        *(int *)(local_a8 + 1) = (int)lVar8;
        sVar3 = *(short *)(**local_a8 + lVar8 * 2);
        goto joined_r0x000147ce0e6b;
      }
    }
    else if (*(char *)(lVar8 + 0x1c) == '\0') {
      iVar4 = *(int *)(local_a8 + 1);
      *(int *)(local_a8 + 1) = iVar4 + 1;
      lVar8 = (longlong)iVar4 + (ulonglong)*(ushort *)(**local_a8 + (longlong)iVar4 * 2) + 1;
      *(int *)(local_a8 + 1) = (int)lVar8;
      sVar3 = *(short *)(**local_a8 + lVar8 * 2);
joined_r0x000147ce0e6b:
      if (sVar3 == 0) {
        *(int *)(local_a8 + 1) = (int)lVar8 + 1;
      }
    }
    cVar6 = FUN_14368e05e(&local_a8);
    uVar5 = local_7c;
  } while( true );
}



// FUNCTION 147ce0efe FUN_147ce0efe body=598 status=ok
// SIG undefined FUN_147ce0efe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ce0efe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_70 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb01b68) && (FUN_144b3d300(&DAT_14cb01b68), DAT_14cb01b68 == -1)) {
    _DAT_14cb01b50 = 0;
    _DAT_14cb01b58 = 0x400000000;
    _DAT_14cb01b28 = 0;
    uRam000000014cb01b30 = 0;
    _DAT_14cb01b38 = 0;
    DAT_14cb01b60 = 0;
    atexit((_func_5014 *)&LAB_14368e051);
    _Init_thread_footer(&DAT_14cb01b68);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar5 = 0;
    do {
      lVar3 = lVar5 * 0x30;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar3);
      if (lVar6 == 0) {
        lVar6 = 0;
LAB_147ce0fe1:
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar6 + 8);
        lVar1 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar1 + 8) == 0) {
          bVar7 = lVar4 != 0;
          if (lVar4 != lVar1 && bVar7) {
            do {
              lVar4 = *(longlong *)(lVar4 + 0x30);
              bVar7 = lVar4 != 0;
              if (lVar4 == lVar1) break;
            } while (lVar4 != 0);
          }
        }
        else {
          bVar7 = (*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0;
        }
        if (!bVar7) {
          lVar6 = 0;
        }
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar3);
        if (lVar4 == 0) goto LAB_147ce0fe1;
        lVar1 = *(longlong *)(lVar4 + 8);
        lVar2 = FUN_144a810c6();
        if (*(ulonglong *)(lVar2 + 8) == 0) {
          bVar7 = lVar1 != 0;
          if (lVar1 != lVar2 && bVar7) {
            do {
              lVar1 = *(longlong *)(lVar1 + 0x30);
              bVar7 = lVar1 != 0;
              if (lVar1 == lVar2) break;
            } while (lVar1 != 0);
          }
        }
        else {
          bVar7 = (*(ulonglong *)(lVar1 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
        }
        if (!bVar7) {
          lVar4 = 0;
        }
      }
      if (lVar6 == 0 && lVar4 == 0) {
        local_61 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_90 = &DAT_14cb01b28;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = &local_61;
        local_b8 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x28) + 0x1e + lVar3);
        local_b0 = param_2;
        FUN_1404e55aa(param_1,local_70,0,
                      *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x1c + lVar3));
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x30));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ce1156 FUN_147ce1156 body=369 status=ok
// SIG undefined FUN_147ce1156(void)

longlong * FUN_147ce1156(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *(undefined1 *)(puVar4 + 5) = 1;
  *param_2 = (longlong)puVar4;
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_FUN_14a3e1d90;
  puVar5[2] = puVar4;
  param_2[1] = (longlong)puVar5;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1401031ac(*(undefined8 *)(param_1 + 0x60),0,&local_58);
  plVar2 = (longlong *)*param_2;
  if (plVar2 == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    *plVar2 = local_58;
    local_58 = 0;
    *(undefined4 *)(plVar2 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)plVar2 + 0xc) = uStack_50._4_4_;
  }
  FUN_14747c286(plVar2 + 3,*(undefined4 *)(param_1 + 0x40),1);
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar6 = 0x12;
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar7);
      if (lVar3 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(lVar3 + 0x20);
      }
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x18 + lVar7);
      lVar3 = plVar2[3];
      *(int *)(lVar3 + -0x12 + lVar6) = (int)lVar8;
      *(undefined4 *)(lVar3 + -0xe + lVar6) = uVar1;
      *(undefined8 *)(lVar3 + -10 + lVar6) = uVar9;
      *(undefined2 *)(lVar3 + -2 + lVar6) = 0x100;
      *(undefined1 *)(lVar3 + lVar6) = 0;
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x14;
      lVar7 = lVar7 + 0x20;
    } while (lVar8 < *(int *)(param_1 + 0x40));
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ce12c8 FUN_147ce12c8 body=405 status=ok
// SIG undefined FUN_147ce12c8(void)

undefined4
FUN_147ce12c8(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             longlong param_5,undefined1 *param_6,char param_7,undefined8 param_8,undefined8 param_9
             )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(byte *)(param_5 + 0x29) & 2) == 0) {
    if (*(longlong *)(param_5 + 0xa8) < *(longlong *)(param_5 + 0xa0)) {
      *(longlong *)(param_5 + 0xa8) = *(longlong *)(param_5 + 0xa8) + 1;
    }
    else {
      FUN_1405d09b8(param_5,1);
    }
  }
  *param_6 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  uVar4 = 0;
  FUN_1401031ac(*(undefined8 *)(param_1 + 0x60),0,local_58);
  FUN_147be7a80(*(undefined8 *)(param_2 + 0x68),&local_68,local_58);
  if (param_7 == '\x01' && param_3 != (undefined8 *)0x0) {
    uVar4 = *param_3;
  }
  local_90 = param_3 + 4;
  if (param_3 == (undefined8 *)0x0) {
    local_90 = (undefined8 *)0x0;
  }
  local_b0 = *(int *)(param_1 + 0x40) + -1;
  local_78 = param_9;
  local_80 = param_8;
  local_88 = param_6;
  local_b8 = 0;
  local_a8 = uVar4;
  local_a0 = param_4;
  local_98 = param_4;
  uVar3 = FUN_14369015a(param_1,param_3,local_68,param_5);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce145e FUN_147ce145e body=299 status=ok
// SIG undefined FUN_147ce145e(void)

longlong * FUN_147ce145e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x138,0x10);
  FUN_14001f26a(lVar2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14aa6e9a0;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if ((lVar2 == 0) ||
     (((*(longlong *)(lVar2 + 0x10) != 0 && (*(longlong *)(lVar2 + 0x18) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 8))))) goto LAB_147ce14cb;
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 0x10) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x18);
    if (plVar4 == (longlong *)0x0) goto LAB_147ce14cb;
LAB_147ce151d:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(lVar2 + 0x18) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_147ce14cb;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 0x10) = lVar2;
    if (*(longlong **)(lVar2 + 0x18) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(lVar2 + 0x18);
      if (plVar4 != (longlong *)0x0) goto LAB_147ce151d;
      *(longlong **)(lVar2 + 0x18) = plVar3;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_147ce14cb:
  FUN_147ce158a(*param_1,param_2,param_3,param_4);
  return param_1;
}



// FUNCTION 147ce158a FUN_147ce158a body=897 status=ok
// SIG undefined FUN_147ce158a(void)

void FUN_147ce158a(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_118 [44];
  uint local_ec;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong local_a8;
  longlong local_a0;
  uint local_98;
  longlong local_90;
  undefined2 local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = *(longlong *)(param_2 + 0x50);
  }
  local_68 = 0xffffffff;
  local_64 = 0x101;
  local_62 = 0;
  local_ec = param_4;
  local_e8 = param_3;
  local_e0 = param_2;
  local_78 = param_2;
  FUN_144a2daf0(&local_78);
  if (local_70 != 0) {
    local_d8 = param_1 + 0x38;
    uVar4 = 0;
    do {
      if (((*(byte *)(local_70 + 0x3b) & 0x80) == 0) && (0 < *(int *)(local_70 + 0x30))) {
        iVar9 = 0;
        do {
          lVar7 = local_70;
          uVar3 = *(uint *)(param_1 + 0x30);
          *(uint *)(param_1 + 0x30) = uVar3 + 1;
          if (*(uint *)(param_1 + 0x34) < uVar3 + 1) {
            FUN_14001f33a((longlong *)(param_1 + 0x28));
          }
          lVar5 = *(longlong *)(param_1 + 0x28);
          *(longlong *)(lVar5 + (longlong)(int)uVar3 * 0x30) = lVar7;
          if (lVar7 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)(lVar7 + 0x20);
          }
          lVar5 = lVar5 + (longlong)(int)uVar3 * 0x30;
          *(undefined8 *)(lVar5 + 8) = uVar8;
          *(int *)(lVar5 + 0x10) = iVar9;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          *(undefined8 *)(lVar5 + 0x20) = 0;
          *(undefined8 *)(lVar5 + 0x28) = 0xffffffff;
          local_98 = uVar3 & 0xffff;
          local_a8 = local_d8;
          local_a0 = local_e8;
          lVar7 = (ulonglong)(local_98 << 4) * 3;
          local_90 = *(longlong *)(param_1 + 0x28) + lVar7;
          local_88 = 0;
          local_80 = 0;
          local_c8 = *(int *)(local_70 + 0x34) * iVar9;
          *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x1c + lVar7) =
               *(undefined2 *)(param_1 + 0x40);
          local_d0 = local_70;
          local_c0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          local_c4 = uVar4;
          local_bc = iVar9;
          uVar4 = FUN_1436923fc(&local_a8);
          *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x1e + lVar7) =
               *(undefined2 *)(param_1 + 0x40);
          *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar7) =
               *(undefined4 *)(local_70 + 0x44);
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + lVar7);
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar7);
          if (lVar7 != 0) {
            lVar5 = *(longlong *)(lVar7 + 8);
            lVar6 = FUN_1446dcc8c();
            if (*(ulonglong *)(lVar6 + 8) == 0) {
              bVar10 = lVar5 != 0;
              if (lVar5 != lVar6 && bVar10) {
                do {
                  lVar5 = *(longlong *)(lVar5 + 0x30);
                  bVar10 = lVar5 != 0;
                  if (lVar5 == lVar6) break;
                } while (lVar5 != 0);
              }
              if (bVar10) goto LAB_147ce17a2;
            }
            else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) {
LAB_147ce17a2:
              lVar7 = *(longlong *)(lVar7 + 0x70);
              uVar3 = *(uint *)((longlong)plVar1 + 0x2c);
              *(uint *)((longlong)plVar1 + 0x2c) = uVar3 | 0x20;
              if ((*(byte *)(lVar7 + 0xb1) & 4) != 0) {
                *(uint *)((longlong)plVar1 + 0x2c) = uVar3 | 0x30;
              }
            }
          }
          if ((*(byte *)(*plVar1 + 0x39) & 2) != 0) {
            *(byte *)((longlong)plVar1 + 0x2c) = *(byte *)((longlong)plVar1 + 0x2c) | 0x40;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(local_70 + 0x30));
      }
      local_70 = *(longlong *)(local_70 + 0x18);
      FUN_144a2daf0(&local_78);
    } while (local_70 != 0);
  }
  iVar9 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar9 + 1U) {
    FUN_14001faa0((longlong *)(param_1 + 0x38),iVar9);
  }
  lVar7 = *(longlong *)(param_1 + 0x38);
  lVar5 = (longlong)iVar9 * 0x20;
  puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar7 + lVar5) = 0;
  ((undefined8 *)(lVar7 + lVar5))[1] = 0;
  *(undefined1 *)(lVar7 + 0x1c + lVar5) = 1;
  if ((local_ec & 1) != 0 || local_e8 == 0) {
    FUN_14001f8bc(param_1,0,*(int *)(param_1 + 0x40) + -1,param_1 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(local_e0 + 0x58);
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar7 = 0;
    lVar5 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x18 + lVar7) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar7) + 0x44);
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x30;
    } while (lVar5 < *(int *)(param_1 + 0x30));
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar7 = 0x10;
    lVar5 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar7) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x38) + -4 + lVar7);
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar5 < *(int *)(param_1 + 0x40));
  }
  *(longlong *)(param_1 + 0x60) = local_e0;
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ce190c FUN_147ce190c body=155 status=ok
// SIG undefined FUN_147ce190c(void)

void FUN_147ce190c(longlong param_1,uint param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x1d + (ulonglong)param_2 * 0x20) & 4) == 0) {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (ulonglong)param_2 * 0x20);
    iVar1 = (int)param_3[1];
    cVar3 = FUN_1414dfa45(iVar1,*puVar5);
    if ((cVar3 != '\0') && (0 < iVar1)) {
      lVar2 = *param_3;
      iVar4 = 0;
      do {
        FUN_140c377fe(param_1,param_2 + 1,*(ushort *)(puVar5 + 1) - 1,
                      (ulonglong)((uint)*(ushort *)((longlong)puVar5 + 10) * iVar4) + lVar2,iVar4,
                      param_4,param_5);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
  }
  return;
}



// FUNCTION 147ce19a8 FUN_147ce19a8 body=327 status=ok
// SIG undefined FUN_147ce19a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ce19a8(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb01c58) && (FUN_144b3d300(&DAT_14cb01c58), DAT_14cb01c58 == -1)) {
    _DAT_14cb01c40 = 0;
    _DAT_14cb01c48 = 0x400000000;
    _DAT_14cb01c18 = 0;
    uRam000000014cb01c20 = 0;
    _DAT_14cb01c28 = 0;
    DAT_14cb01c50 = 0;
    atexit((_func_5014 *)&LAB_143692bec);
    _Init_thread_footer(&DAT_14cb01c58);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar1 = 0x1e;
    lVar2 = 0;
    do {
      FUN_1404e55aa(param_1,param_3,param_4,
                    *(undefined2 *)(*(longlong *)(param_1 + 0x28) + -2 + lVar1),
                    *(undefined2 *)(*(longlong *)(param_1 + 0x28) + lVar1),param_5,param_6,0,0,
                    &DAT_14cb01c18,0,param_7);
      if ((*(byte *)(param_3 + 0x29) & 2) != 0) {
        return;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x30;
    } while (lVar2 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 147ce1af0 FUN_147ce1af0 body=32 status=ok
// SIG undefined FUN_147ce1af0(void)

undefined8 FUN_147ce1af0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FRepLayout");
  return param_2;
}



// FUNCTION 147ce1b10 FUN_147ce1b10 body=636 status=ok
// SIG undefined FUN_147ce1b10(void)

void FUN_147ce1b10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
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
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x30) * 0x30,
             (longlong)*(int *)(param_1 + 0x34) * 0x30);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x40) << 5,(longlong)*(int *)(param_1 + 0x44) << 5
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x50) << 4,(longlong)*(int *)(param_1 + 0x54) << 4
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x70) * 0x28,
             (longlong)*(int *)(param_1 + 0x74) * 0x28);
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x268))(plVar1,param_2);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0xc0) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0xc4) + 0x1fU >> 3 & 0xfffffffc);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2,0x28,0x28);
    lVar2 = *(longlong *)(param_1 + 0x58);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(lVar2 + 8) * 0x18,(longlong)*(int *)(lVar2 + 0xc) * 0x18);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(lVar2 + 0x18) * 2,(longlong)*(int *)(lVar2 + 0x1c) * 2);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xf0) << 5,(longlong)*(int *)(param_1 + 0xf4) << 5
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x110) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x114) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 0x130) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  local_38 = param_1 + 0xf8;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = (longlong *)(param_1 + 0xe8);
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20) << 5,
                 (longlong)*(int *)(*local_68 + 0x14 + (longlong)iStack_4c * 0x20) << 5);
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



// FUNCTION 147ce1d8e FUN_147ce1d8e body=692 status=ok
// SIG undefined FUN_147ce1d8e(void)

void FUN_147ce1d8e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147ce07da();
  plVar1 = (longlong *)(param_1 + 0x20);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x28) * 0xe0,
             (longlong)*(int *)(param_1 + 0x2c) * 0xe0);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x48) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x4c) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 0x68) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  lVar2 = param_1 + 0x30;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0x48);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      FUN_147ce2044(*local_88 + (longlong)iStack_6c * 0xe0 + 8,param_2);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x78) << 3,(longlong)*(int *)(param_1 + 0x7c) << 3
            );
  plVar1 = (longlong *)(param_1 + 0x80);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x88) << 5,(longlong)*(int *)(param_1 + 0x8c) << 5
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0xa8) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0xac) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)*(int *)(param_1 + 200) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  lVar2 = param_1 + 0x90;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0xa8) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(param_1 + 0xa8);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20),
                 (longlong)*(int *)(*local_88 + 0x14 + (longlong)iStack_6c * 0x20));
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce2044 FUN_147ce2044 body=568 status=ok
// SIG undefined FUN_147ce2044(void)

void FUN_147ce2044(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
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
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x18) << 4,(longlong)*(int *)(param_1 + 0x1c) << 4
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x38) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x3c) + 0x1fU >> 3 & 0xfffffffc);
  lVar5 = (longlong)*(int *)(param_1 + 0x58) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar5,lVar5);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x68) << 4,(longlong)*(int *)(param_1 + 0x6c) << 4
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x88) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x8c) + 0x1fU >> 3 & 0xfffffffc);
  lVar5 = (longlong)*(int *)(param_1 + 0xa8) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar5,lVar5);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0xb8),(longlong)*(int *)(param_1 + 0xbc));
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (lVar5 != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(lVar5 + 8) * 0xe0,(longlong)*(int *)(lVar5 + 0xc) * 0xe0);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(lVar5 + 0x28) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(lVar5 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
    lVar5 = (longlong)*(int *)(lVar5 + 0x48) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar5,lVar5);
    plVar2 = *(longlong **)(param_1 + 0xc0);
    plVar1 = plVar2 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)plVar2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)plVar2[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar3 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = plVar2;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar3, uStack_48 != plVar1)) {
      do {
        local_60 = uVar3;
        FUN_147ce2044(*local_78 + (longlong)iVar4 * 0xe0 + 8,param_2);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_78 != plVar2 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce227e FUN_147ce227e body=552 status=ok
// SIG undefined FUN_147ce227e(void)

void FUN_147ce227e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  do {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x40 + lVar3) * 2,
               (longlong)*(int *)(param_1 + 0x44 + lVar3) * 2);
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x400);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x448) << 5,
             (longlong)*(int *)(param_1 + 0x44c) << 5);
  iVar1 = *(int *)(param_1 + 0x448);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x440);
    lVar4 = 0;
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar3 + 0x10 + lVar4) * 2,
                 (longlong)*(int *)(lVar3 + 0x14 + lVar4) * 2);
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar4);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x458) * 2,(longlong)*(int *)(param_1 + 0x45c) * 2
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x468) * 2,(longlong)*(int *)(param_1 + 0x46c) * 2
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x488) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x48c) + 0x1fU >> 3 & 0xfffffffc);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x438) * 0x28,
             (longlong)*(int *)(param_1 + 0x43c) * 0x28);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x498) << 4,
             (longlong)*(int *)(param_1 + 0x49c) << 4);
  iVar1 = *(int *)(param_1 + 0x498);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x490);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x4a8) << 4,
             (longlong)*(int *)(param_1 + 0x4ac) << 4);
  iVar1 = *(int *)(param_1 + 0x4a8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x4a0);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x4b8) << 4,
             (longlong)*(int *)(param_1 + 0x4bc) << 4);
  iVar1 = *(int *)(param_1 + 0x4b8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x4b0);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 147ce24a6 FUN_147ce24a6 body=109 status=ok
// SIG undefined FUN_147ce24a6(void)

void FUN_147ce24a6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2,0xd0,0xd0);
    FUN_147ce1d8e(lVar1,param_2);
  }
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    return;
  }
  (**(code **)(*param_2 + 0x10))(param_2,0x4c0,0x4c0);
  FUN_147ce227e(lVar1,param_2);
  return;
}



// FUNCTION 147ce2514 FUN_147ce2514 body=158 status=ok
// SIG undefined FUN_147ce2514(void)

undefined8
FUN_147ce2514(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
             )

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  short local_36;
  int local_30;
  uint local_2c;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
    local_30 = (param_5 & 2) + 1;
    local_2c = param_5;
    local_20 = param_1 + 0x28;
    local_18 = param_1 + 0x38;
    local_10 = param_1 + 0xe8;
    local_38 = 0;
    local_36 = (short)*(undefined4 *)(param_1 + 0x40) + -1;
    local_48 = param_3;
    local_40 = param_4;
    local_28 = param_2;
    uVar1 = FUN_143693408(&local_30);
  }
  else {
    uVar1 = 0;
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce25b4 FUN_147ce25b4 body=128 status=ok
// SIG undefined FUN_147ce25b4(void)

void FUN_147ce25b4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x28;
  local_18 = param_1 + 0x38;
  local_10 = param_1 + 0xe8;
  local_40 = param_5;
  local_38 = 0;
  local_34 = *(int *)(param_1 + 0x40) + -1;
  local_48 = param_4;
  local_30 = param_2;
  local_28 = param_3;
  FUN_143693a4b(&local_30);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce2636 FUN_147ce2636 body=158 status=ok
// SIG undefined FUN_147ce2636(void)

undefined8
FUN_147ce2636(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
             )

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  short local_36;
  int local_30;
  uint local_2c;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
    local_30 = (param_5 & 2) + 1;
    local_2c = param_5;
    local_20 = param_1 + 0x28;
    local_18 = param_1 + 0x38;
    local_10 = param_1 + 0xe8;
    local_38 = 0;
    local_36 = (short)*(undefined4 *)(param_1 + 0x40) + -1;
    local_48 = param_3;
    local_40 = param_4;
    local_28 = param_2;
    uVar1 = FUN_1436946be(&local_30);
  }
  else {
    uVar1 = 0;
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce26d6 FUN_147ce26d6 body=128 status=ok
// SIG undefined FUN_147ce26d6(void)

void FUN_147ce26d6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x28;
  local_18 = param_1 + 0x38;
  local_10 = param_1 + 0xe8;
  local_40 = param_5;
  local_38 = 0;
  local_34 = *(int *)(param_1 + 0x40) + -1;
  local_48 = param_4;
  local_30 = param_2;
  local_28 = param_3;
  FUN_143694d08(&local_30);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce2758 FUN_147ce2758 body=158 status=ok
// SIG undefined FUN_147ce2758(void)

undefined8
FUN_147ce2758(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
             )

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  short local_36;
  int local_30;
  uint local_2c;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
    local_30 = (param_5 & 2) + 1;
    local_2c = param_5;
    local_20 = param_1 + 0x28;
    local_18 = param_1 + 0x38;
    local_10 = param_1 + 0xe8;
    local_38 = 0;
    local_36 = (short)*(undefined4 *)(param_1 + 0x40) + -1;
    local_48 = param_3;
    local_40 = param_4;
    local_28 = param_2;
    uVar1 = FUN_14369597b(&local_30);
  }
  else {
    uVar1 = 0;
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce27f8 FUN_147ce27f8 body=139 status=ok
// SIG undefined FUN_147ce27f8(void)

void FUN_147ce27f8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ce2884(param_1,&local_28);
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



// FUNCTION 147ce2884 FUN_147ce2884 body=166 status=ok
// SIG undefined FUN_147ce2884(void)

undefined8 * FUN_147ce2884(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x108), lVar2 == 0)) {
    lVar2 = FUN_14479d2ce((longlong)param_1 + 0x34);
    if (lVar2 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0x1f20);
    _Src = *(void **)(lVar2 + 0x1f18);
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0xc70);
    _Src = *(void **)(lVar2 + 0xc68);
  }
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147ce292a FUN_147ce292a body=105 status=ok
// SIG undefined FUN_147ce292a(void)

void FUN_147ce292a(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x108) == 0)) {
    lVar1 = FUN_14479d2ce((longlong)param_1 + 0x34);
    if (lVar1 == 0) {
      uVar3 = 0;
      goto LAB_147ce2983;
    }
    puVar2 = (undefined4 *)(lVar1 + 0x1f58);
  }
  else {
    puVar2 = (undefined4 *)(*(longlong *)(lVar1 + 0x108) + 0xca8);
  }
  uVar3 = *puVar2;
LAB_147ce2983:
  *param_3 = uVar3;
  return;
}



// FUNCTION 147ce2998 FUN_147ce2998 body=67 status=ok
// SIG undefined FUN_147ce2998(void)

void FUN_147ce2998(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x108) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_147a5faf8();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ce29e0 FUN_147ce29e0 body=37 status=ok
// SIG undefined FUN_147ce29e0(void)

void FUN_147ce29e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ce2a06();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ce2a06 FUN_147ce2a06 body=68 status=ok
// SIG undefined FUN_147ce2a06(void)

undefined1 FUN_147ce2a06(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x108) != 0)) {
    uVar1 = FUN_147a5fad0();
    return uVar1;
  }
  lVar2 = FUN_14479d2ce((longlong)param_1 + 0x34);
  return lVar2 != 0;
}



// FUNCTION 147ce2a60 FUN_147ce2a60 body=74 status=ok
// SIG undefined FUN_147ce2a60(void)

void FUN_147ce2a60(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x108) != 0)) {
    FUN_147a639e4();
    return;
  }
  lVar1 = FUN_14479d2ce((longlong)param_1 + 0x34);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x2680) = 1;
  }
  return;
}



// FUNCTION 147ce2ab3 FUN_147ce2ab3 body=148 status=ok
// SIG undefined FUN_147ce2ab3(void)

undefined8 FUN_147ce2ab3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b598ec();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce2bde FUN_147ce2bde body=639 status=ok
// SIG undefined FUN_147ce2bde(void)

void FUN_147ce2bde(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_128 [32];
  undefined *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [8];
  undefined1 local_78 [32];
  int local_58;
  int local_54;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)(param_2 + 0x18);
  memset(local_e0,0,0x98);
  uVar2 = *(byte *)(lVar1 + 0x78) & 3;
  local_58 = *(int *)(lVar1 + 0x7c);
  local_54 = *(int *)(lVar1 + 0x80);
  uVar4 = (*(byte *)(lVar1 + 0x86) & 1) << 8 | (*(byte *)(lVar1 + 0x85) & 3) << 4 |
          (*(byte *)(lVar1 + 0x78) & 4) << 7 |
          uVar2 + (uint)(0 < local_58) * 4 + (uint)(local_54 != -1) * 8 |
          (uint)(byte)(*(char *)(lVar1 + 0x84) << 6);
  local_50 = (ushort)uVar4;
  if (1 < (byte)uVar2) {
    uVar3 = (ulonglong)(*(byte *)(lVar1 + 0x85) & 3);
    local_108 = (&PTR_DAT_14aa6d870)[uVar3];
    uStack_100 = *(undefined4 *)(param_2 + 8);
    uStack_fc = *(undefined4 *)(param_2 + 0xc);
    local_f8 = *(undefined8 *)(param_2 + 0x10);
    local_f0 = lVar1 + 0x18;
    local_e8 = local_e0;
    (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar3 * 8) + 0x28))(param_1);
    uVar4 = (uint)local_50;
  }
  uVar3 = (ulonglong)((uVar4 >> 4 & 3) << 3);
  local_108 = *(undefined **)((longlong)&PTR_DAT_14aa6d870 + uVar3);
  uStack_100 = *(undefined4 *)(param_2 + 8);
  uStack_fc = *(undefined4 *)(param_2 + 0xc);
  local_f8 = *(undefined8 *)(param_2 + 0x10);
  local_e8 = local_c0;
  local_f0 = lVar1;
  (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar3) + 0x28))(param_1,&local_108);
  uVar3 = (ulonglong)(local_50 >> 3 & 0x18);
  local_108 = *(undefined **)((longlong)&PTR_DAT_14aa6d870 + uVar3);
  uStack_100 = *(undefined4 *)(param_2 + 8);
  uStack_fc = *(undefined4 *)(param_2 + 0xc);
  local_f8 = *(undefined8 *)(param_2 + 0x10);
  local_f0 = lVar1 + 0x30;
  local_e8 = local_a0;
  (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar3) + 0x28))(param_1,&local_108);
  uVar3 = (ulonglong)((local_50._1_1_ & 1) << 3);
  local_108 = *(undefined **)((longlong)&PTR_DAT_14aa6d890 + uVar3);
  uStack_100 = *(undefined4 *)(param_2 + 8);
  uStack_fc = *(undefined4 *)(param_2 + 0xc);
  local_f8 = *(undefined8 *)(param_2 + 0x10);
  local_f0 = lVar1 + 0x48;
  local_e8 = local_80;
  (**(code **)(*(longlong *)((longlong)&DAT_14cb01e10 + uVar3) + 0x28))(param_1,&local_108);
  if ((local_50 >> 9 & 1) != 0) {
    uVar3 = (ulonglong)(local_50 >> 1 & 0x18);
    local_108 = *(undefined **)((longlong)&PTR_DAT_14aa6d870 + uVar3);
    uStack_100 = *(undefined4 *)(param_2 + 8);
    uStack_fc = *(undefined4 *)(param_2 + 0xc);
    local_f8 = *(undefined8 *)(param_2 + 0x10);
    local_f0 = lVar1 + 0x60;
    local_e8 = local_78;
    (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar3) + 0x28))(param_1);
  }
  memcpy(*(void **)(param_2 + 0x20),local_e0,0x98);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce2e5e FUN_147ce2e5e body=639 status=ok
// SIG undefined FUN_147ce2e5e(void)

void FUN_147ce2e5e(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_2 + 0x18);
  lVar4 = *(longlong *)(param_2 + 0x20);
  bVar6 = *(byte *)(lVar3 + 0x90) & 1;
  bVar1 = *(byte *)(lVar4 + 0x78);
  *(byte *)(lVar4 + 0x78) = bVar1 & 0xfe | bVar6;
  bVar7 = *(byte *)(lVar3 + 0x90) & 2;
  *(byte *)(lVar4 + 0x78) = bVar1 & 0xfc | bVar6 | bVar7;
  uVar8 = 0;
  if ((*(byte *)(lVar3 + 0x90) & 4) != 0) {
    uVar8 = *(undefined4 *)(lVar3 + 0x88);
  }
  *(undefined4 *)(lVar4 + 0x7c) = uVar8;
  uVar8 = 0xffffffff;
  if ((*(byte *)(lVar3 + 0x90) & 8) != 0) {
    uVar8 = *(undefined4 *)(lVar3 + 0x8c);
  }
  *(undefined4 *)(lVar4 + 0x80) = uVar8;
  *(byte *)(lVar4 + 0x84) = *(byte *)(lVar3 + 0x90) >> 6;
  *(byte *)(lVar4 + 0x85) = *(byte *)(lVar3 + 0x90) >> 4 & 3;
  *(byte *)(lVar4 + 0x86) = *(byte *)(lVar3 + 0x91) & 1;
  *(byte *)(lVar4 + 0x78) =
       bVar1 & 0xf8 | bVar6 | bVar7 | (byte)(*(ushort *)(lVar3 + 0x90) >> 7) & 4;
  uVar2 = *(ushort *)(lVar3 + 0x90);
  if ((uVar2 & 2) != 0) {
    uVar5 = (ulonglong)(uVar2 >> 1 & 0x18);
    local_68 = *(undefined8 *)((longlong)&PTR_DAT_14aa6d870 + uVar5);
    uStack_60 = *(undefined4 *)(param_2 + 8);
    uStack_5c = *(undefined4 *)(param_2 + 0xc);
    local_58 = *(undefined8 *)(param_2 + 0x10);
    local_48 = lVar4 + 0x18;
    local_50 = lVar3;
    (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar5) + 0x30))(param_1);
    uVar2 = *(ushort *)(lVar3 + 0x90);
  }
  uVar5 = (ulonglong)((uVar2 >> 4 & 3) << 3);
  local_68 = *(undefined8 *)((longlong)&PTR_DAT_14aa6d870 + uVar5);
  uStack_60 = *(undefined4 *)(param_2 + 8);
  uStack_5c = *(undefined4 *)(param_2 + 0xc);
  local_58 = *(undefined8 *)(param_2 + 0x10);
  local_50 = lVar3 + 0x20;
  local_48 = lVar4;
  (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar5) + 0x30))(param_1,&local_68);
  uVar5 = (ulonglong)(*(ushort *)(lVar3 + 0x90) >> 3 & 0x18);
  local_68 = *(undefined8 *)((longlong)&PTR_DAT_14aa6d870 + uVar5);
  uStack_60 = *(undefined4 *)(param_2 + 8);
  uStack_5c = *(undefined4 *)(param_2 + 0xc);
  local_58 = *(undefined8 *)(param_2 + 0x10);
  local_50 = lVar3 + 0x40;
  local_48 = lVar4 + 0x30;
  (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar5) + 0x30))(param_1,&local_68);
  uVar5 = (ulonglong)((*(byte *)(lVar3 + 0x91) & 1) << 3);
  local_68 = *(undefined8 *)((longlong)&PTR_DAT_14aa6d890 + uVar5);
  uStack_60 = *(undefined4 *)(param_2 + 8);
  uStack_5c = *(undefined4 *)(param_2 + 0xc);
  local_58 = *(undefined8 *)(param_2 + 0x10);
  local_50 = lVar3 + 0x60;
  local_48 = lVar4 + 0x48;
  (**(code **)(*(longlong *)((longlong)&DAT_14cb01e10 + uVar5) + 0x30))(param_1,&local_68);
  if ((*(ushort *)(lVar3 + 0x90) >> 9 & 1) != 0) {
    uVar5 = (ulonglong)(*(ushort *)(lVar3 + 0x90) >> 1 & 0x18);
    local_68 = *(undefined8 *)((longlong)&PTR_DAT_14aa6d870 + uVar5);
    uStack_60 = *(undefined4 *)(param_2 + 8);
    uStack_5c = *(undefined4 *)(param_2 + 0xc);
    local_58 = *(undefined8 *)(param_2 + 0x10);
    local_50 = lVar3 + 0x68;
    local_48 = lVar4 + 0x60;
    (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar5) + 0x30))(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce30de FUN_147ce30de body=243 status=ok
// SIG undefined FUN_147ce30de(void)

undefined8 FUN_147ce30de(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined1 *_Dst;
  undefined1 *_Dst_00;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined1 local_160 [152];
  undefined1 local_c8 [152];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(char *)(param_2 + 5) == '\x01') {
    _Dst = (undefined1 *)param_2[3];
    _Dst_00 = (undefined1 *)param_2[4];
  }
  else {
    _Dst = local_c8;
    memset(_Dst,0,0x98);
    _Dst_00 = local_160;
    memset(_Dst_00,0,0x98);
    local_178 = 0;
    local_180 = 0;
    local_188 = *param_2;
    local_170 = param_2[3];
    local_168 = _Dst;
    FUN_147ce2bde(param_1,&local_188);
    local_170 = param_2[4];
    local_168 = _Dst_00;
    FUN_147ce2bde(param_1,&local_188);
  }
  iVar1 = memcmp(_Dst,_Dst_00,0x98);
  if ((local_30 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce31d2 FUN_147ce31d2 body=204 status=ok
// SIG undefined FUN_147ce31d2(void)

undefined8 FUN_147ce31d2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_2 + 0x18);
  uVar3 = 0;
  if (((2 < *(byte *)(lVar1 + 0x85)) || (2 < *(byte *)(lVar1 + 0x84))) ||
     (1 < *(byte *)(lVar1 + 0x86))) goto LAB_147ce3239;
  if ((*(byte *)(lVar1 + 0x78) & 2) == 0) {
LAB_147ce321e:
    cVar2 = FUN_144afe924(lVar1);
    if (cVar2 == '\0') {
      cVar2 = FUN_144afe924(lVar1 + 0x30);
      if (cVar2 == '\0') {
        if ((*(byte *)(lVar1 + 0x78) & 4) != 0) {
          cVar2 = FUN_144afe924(lVar1 + 0x60);
          if (cVar2 != '\0') goto LAB_147ce3237;
        }
        local_28 = 0;
        local_30 = 0;
        local_38 = &DAT_14cb01d20;
        local_20 = lVar1 + 0x48;
        uVar3 = (**(code **)(DAT_14cb01e10 + 0x40))(param_1);
        goto LAB_147ce3239;
      }
    }
  }
  else {
    cVar2 = FUN_144afe924(lVar1 + 0x18);
    if (cVar2 == '\0') goto LAB_147ce321e;
  }
LAB_147ce3237:
  uVar3 = 0;
LAB_147ce3239:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ce3356 FUN_147ce3356 body=154 status=ok
// SIG undefined FUN_147ce3356(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ce3356(void)

{
  longlong lVar1;
  
  if ((((DAT_14c99b168 < 0x21) && (DAT_14c99b16a < 9)) && (DAT_14c99b4e0 < 9)) &&
     (DAT_14c99b4e2 < 3)) {
    lVar1 = FUN_1463c7aa8();
    if (*(int *)(lVar1 + 0x58) == 0x88) {
      _DAT_14cb01df0 = &DAT_14c99aff8;
      _DAT_14cb01df8 = &DAT_14c99b078;
      _DAT_14cb01e00 = &DAT_14c99b0f8;
      DAT_14cb01e10 = &DAT_14c99b3e0;
      _DAT_14cb01e18 = &DAT_14c99b470;
      FUN_147ce33f0();
      FUN_146f09d18(&DAT_14cb01fb8);
      return;
    }
  }
  return;
}



// FUNCTION 147ce33f0 FUN_147ce33f0 body=132 status=ok
// SIG undefined FUN_147ce33f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ce33f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb01fd8) {
    FUN_144b3d300(&DAT_14cb01fd8);
    if (DAT_14cb01fd8 == -1) {
      _DAT_14cb01fc8 = &DAT_14cb01d68;
      _DAT_14cb01fb8 = &PTR_LAB_149f970a0;
      _DAT_14cb01fd0 = 0;
      _DAT_14cb01fc0 = DAT_14cb01d40;
      _Init_thread_footer(&DAT_14cb01fd8);
      return;
    }
  }
  return;
}



// FUNCTION 147ce3474 FUN_147ce3474 body=38 status=ok
// SIG undefined FUN_147ce3474(void)

undefined8 FUN_147ce3474(undefined8 param_1,int param_2)

{
  FUN_145c38bae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ce349a FUN_147ce349a body=38 status=ok
// SIG undefined FUN_147ce349a(void)

undefined8 FUN_147ce349a(undefined8 param_1,int param_2)

{
  FUN_140296d44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ce34c0 FUN_147ce34c0 body=32 status=ok
// SIG undefined FUN_147ce34c0(void)

undefined8 FUN_147ce34c0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Static-mesh vertices");
  return param_2;
}


