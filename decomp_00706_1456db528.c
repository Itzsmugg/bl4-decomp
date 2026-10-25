// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1456db528 FUN_1456db528 body=172 status=ok
// SIG undefined FUN_1456db528(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456db528(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2a28) {
    FUN_144b3d300(&DAT_14c9a2a28);
    if (DAT_14c9a2a28 == -1) {
      FUN_1456dc292();
      FUN_1401dc3e8();
      _DAT_14c9a2a08 = 3;
      _DAT_14c9a2a10 = 0;
      uRam000000014c9a2a18 = 0;
      _DAT_14c9a2a20 = 0;
      FUN_1401db408(&DAT_14c9a2a10,&DAT_14c9a2940);
      FUN_1401db408(&DAT_14c9a2a10,&DAT_14c9a2828);
      atexit((_func_5014 *)&LAB_142b2b1e4);
      _Init_thread_footer(&DAT_14c9a2a28);
      return;
    }
  }
  return;
}



// FUNCTION 1456db5d4 FUN_1456db5d4 body=294 status=ok
// SIG undefined FUN_1456db5d4(void)

void FUN_1456db5d4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_b8 [40];
  undefined8 **local_90 [2];
  undefined8 local_80;
  ulonglong local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  FUN_1401d825c(lVar1);
  uVar2 = *(undefined8 *)
           (*(longlong *)(lVar1 + 0x78) +
           (*(longlong *)(lVar1 + 0x80) - 1U & *(ulonglong *)(lVar1 + 0x88)) * 8);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    FUN_1456db6fc(local_70,uVar2);
    FUN_1456db880(local_70,local_90,param_1[1]);
    FUN_1401d7e14(param_2,local_90);
  }
  else {
    FUN_1456db6fc(local_70,uVar2);
    FUN_1456db880(local_70,local_90,param_1[1]);
    pppuVar3 = local_90;
    if (0xf < local_78) {
      pppuVar3 = (undefined8 ***)local_90[0];
    }
    FUN_144a6594a(param_2,pppuVar3,local_80);
  }
  FUN_1401d9a90(local_90);
  FUN_1401d9a90(local_48);
  FUN_1401d9a90(local_68);
  lVar1 = *param_1;
  FUN_1401d825c(lVar1);
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    FUN_1401d76f6(lVar1 + 0x70);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456db6fc FUN_1456db6fc body=117 status=ok
// SIG undefined FUN_1456db6fc(void)

int * FUN_1456db6fc(int *param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x50);
  *param_1 = iVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xf;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xf;
  param_1[0x11] = 0;
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      FUN_1401d7e14(param_1 + 2,param_2 + 0x18);
      param_2 = *(longlong *)(param_2 + 0x38);
      goto LAB_1456db738;
    }
    if ((iVar1 != 2) && (iVar1 != 0)) {
      return param_1;
    }
  }
  param_2 = param_2 + 0x18;
LAB_1456db738:
  FUN_1401d7e14(param_1 + 10,param_2);
  return param_1;
}



// FUNCTION 1456db772 FUN_1456db772 body=66 status=ok
// SIG undefined FUN_1456db772(void)

void FUN_1456db772(ulonglong param_1)

{
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x200) {
    FUN_14001cc68(param_1 * 8 + (ulonglong)(param_1 * 8 == 0),0x10);
    return;
  }
  FUN_140c1ca1d();
  return;
}



// FUNCTION 1456db7b4 FUN_1456db7b4 body=66 status=ok
// SIG undefined FUN_1456db7b4(void)

void FUN_1456db7b4(ulonglong param_1)

{
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x200) {
    FUN_14001cc68(param_1 * 8 + (ulonglong)(param_1 * 8 == 0),0x10);
    return;
  }
  FUN_140c1ca1d();
  return;
}



// FUNCTION 1456db7f6 FUN_1456db7f6 body=66 status=ok
// SIG undefined FUN_1456db7f6(void)

void FUN_1456db7f6(ulonglong param_1)

{
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_1 < 0x200) {
    FUN_14001cc68(param_1 * 8 + (ulonglong)(param_1 * 8 == 0),0x10);
    return;
  }
  FUN_140c1ca1d();
  return;
}



// FUNCTION 1456db838 FUN_1456db838 body=71 status=ok
// SIG undefined FUN_1456db838(void)

undefined8 FUN_1456db838(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_2 < 0x200) {
    if (param_2 != 0) {
      uVar1 = FUN_14001cc68(param_2 * 8,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_2 * 8);
  return uVar1;
}



// FUNCTION 1456db880 FUN_1456db880 body=480 status=ok
// SIG undefined FUN_1456db880(void)

undefined8 * FUN_1456db880(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [4];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_1 == 1) {
    local_68 = 1;
    local_78 = 0x21;
LAB_1456db8da:
    uStack_60 = 0xf;
    uStack_70 = 0;
    puVar4 = &local_78;
    puVar2 = local_58;
    FUN_1456dbac8(param_3,puVar2,puVar4);
    FUN_1456dba66(param_2,puVar2,param_1 + 10);
  }
  else {
    switch(*param_1) {
    case 0:
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      if (*(ulonglong *)(param_1 + 0x10) < 0x10) {
        piVar3 = param_1 + 10;
      }
      else {
        piVar3 = *(int **)(param_1 + 10);
      }
      FUN_1401d9f72(param_2,piVar3,*(undefined8 *)(param_1 + 0xe));
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
    default:
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 1;
      param_2[3] = 0xf;
      *(undefined1 *)param_2 = 0x21;
      goto LAB_1456db90b;
    case 2:
      local_68 = 2;
      local_78 = 0x2121;
      goto LAB_1456db8da;
    case 3:
      puVar4 = local_98;
      FUN_1470a8a01(puVar4,L"!../../../Engine/",param_1 + 2);
      puVar1 = (undefined8 *)FUN_144a6594a(puVar4,L"!../../../Engine/",1);
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      local_68 = puVar1[2];
      uStack_60 = puVar1[3];
      puVar2 = &local_78;
      puVar1[2] = 0;
      puVar1[3] = 0xf;
      *(undefined1 *)puVar1 = 0;
      FUN_1456dbac8(param_3,local_58,puVar2);
      FUN_1456dba66(param_2,local_58,param_1 + 10);
      FUN_1401d9a90(local_58);
    }
  }
  FUN_1401d9a90(puVar2);
  FUN_1401d9a90(puVar4);
LAB_1456db90b:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456dba66 FUN_1456dba66 body=97 status=ok
// SIG undefined FUN_1456dba66(void)

undefined8 FUN_1456dba66(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_3 + 2;
  if (*puVar1 <= (param_2[2] ^ 0x7fffffffffffffff)) {
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_1456dbc04(param_1,param_2,param_2,puVar2,param_2[2],param_3,*puVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 1456dbac8 FUN_1456dbac8 body=216 status=ok
// SIG undefined FUN_1456dbac8(void)

undefined8 * FUN_1456dbac8(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_1456dbba0(param_1 + 0x10,param_3);
  if (lVar2 == *(longlong *)(param_1 + 0x10)) {
    cVar1 = FUN_1401d7ca6(param_3,&DAT_14a179913);
    if (cVar1 != '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0xf;
      pcVar3 = (char *)FUN_14001cc68(0x20,0x10);
      *param_2 = pcVar3;
      param_2[2] = 0x12;
      param_2[3] = 0x1f;
      builtin_strncpy(pcVar3,"tag:yaml.org,2002:",0x13);
      return param_2;
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    uVar4 = param_3[2];
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
  }
  else {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    uVar4 = *(undefined8 *)(lVar2 + 0x50);
    if (*(ulonglong *)(lVar2 + 0x58) < 0x10) {
      param_3 = (undefined8 *)(lVar2 + 0x40);
    }
    else {
      param_3 = *(undefined8 **)(lVar2 + 0x40);
    }
  }
  FUN_1401d9f72(param_2,param_3,uVar4);
  return param_2;
}



// FUNCTION 1456dbba0 FUN_1456dbba0 body=99 status=ok
// SIG undefined FUN_1456dbba0(void)

longlong FUN_1456dbba0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  for (lVar4 = *(longlong *)(lVar3 + 8); *(char *)(lVar4 + 0x19) == '\0';
      lVar4 = *(longlong *)(lVar4 + (ulonglong)(uVar1 >> 0x1b & 0xfffffff0))) {
    uVar1 = FUN_1470ab644(lVar4 + 0x20,param_2);
    if (-1 < (int)uVar1) {
      lVar3 = lVar4;
    }
  }
  if ((*(char *)(lVar3 + 0x19) != '\0') || (iVar2 = FUN_1470ab644(param_2,lVar3 + 0x20), iVar2 < 0))
  {
    lVar3 = *param_1;
  }
  return lVar3;
}



// FUNCTION 1456dbc04 FUN_1456dbc04 body=223 status=ok
// SIG undefined FUN_1456dbc04(void)

undefined8 *
FUN_1456dbc04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,void *param_4,size_t param_5
             ,void *param_6,size_t param_7)

{
  ulonglong uVar1;
  undefined8 *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = param_7 + param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 0xf;
  _Dst = param_1;
  if (0xf < uVar1) {
    uVar2 = 0x16;
    if (0x16 < (uVar1 | 0xf)) {
      uVar2 = uVar1 | 0xf;
    }
    uVar3 = 0x7fffffffffffffff;
    if (-1 < (longlong)uVar1) {
      uVar3 = uVar2;
    }
    uVar2 = uVar3 + 1;
    if (uVar2 < 0x1000) {
      if (uVar2 == 0) {
        _Dst = (undefined8 *)0x0;
      }
      else {
        _Dst = (undefined8 *)FUN_14001cc68(uVar2,0x10);
      }
    }
    else {
      _Dst = (undefined8 *)FUN_140c1ca1d();
    }
    *param_1 = _Dst;
  }
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  memcpy(_Dst,param_4,param_5);
  memcpy((void *)(param_5 + (longlong)_Dst),param_6,param_7);
  *(undefined1 *)((longlong)_Dst + uVar1) = 0;
  return param_1;
}



// FUNCTION 1456dbce4 FUN_1456dbce4 body=524 status=ok
// SIG undefined FUN_1456dbce4(void)

void FUN_1456dbce4(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_e8 [47];
  char local_b9;
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1401da236();
  *(undefined2 *)(param_1 + 0x9a) = 0;
  lVar1 = param_1 + 0x18;
  local_88 = *(undefined4 *)(param_1 + 0x28);
  local_90 = *(undefined8 *)(param_1 + 0x20);
  local_98 = 0x1000000000;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0xf;
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_1401dc22e(lVar1);
  cVar2 = FUN_1401dc1d0(lVar1);
  if (((cVar2 == '\0') || (*(longlong *)(param_1 + 0x50) == 0)) ||
     (*(char *)(*(longlong *)
                 (*(longlong *)(param_1 + 0x38) +
                 (*(longlong *)(param_1 + 0x40) + 0xfffffffffffffffU &
                 *(ulonglong *)(param_1 + 0x48) >> 4) * 8) +
               (ulonglong)((uint)*(ulonglong *)(param_1 + 0x48) & 0xf)) != '<')) {
    FUN_1401dd81f(local_b8,lVar1,&local_b9);
    FUN_1401d7e14(&local_80,local_b8);
    FUN_1401d9a90(local_b8);
    iVar3 = (local_70 == 0) + 1;
    iVar4 = 4;
    if (local_70 != 0) {
      iVar4 = iVar3;
    }
    if (local_b9 != '\0') {
      iVar4 = iVar3;
    }
    uStack_4c = CONCAT44(iVar4,(undefined4)uStack_4c);
    if (((local_b9 == '\x01') && (*(longlong *)(param_1 + 0x50) != 0)) &&
       (*(char *)(*(longlong *)
                   (*(longlong *)(param_1 + 0x38) +
                   (*(longlong *)(param_1 + 0x40) + 0xfffffffffffffffU &
                   *(ulonglong *)(param_1 + 0x48) >> 4) * 8) +
                 (ulonglong)((uint)*(ulonglong *)(param_1 + 0x48) & 0xf)) == '!')) {
      FUN_1401dc22e(lVar1);
      FUN_1470a7bc1(local_b8,lVar1);
      FUN_1470a9b2e(&local_60,local_b8);
      FUN_1401d9a90(local_b8);
      uStack_4c = CONCAT44(3,(undefined4)uStack_4c);
    }
  }
  else {
    FUN_1470a7af6(local_b8,lVar1);
    FUN_1401d7e14(&local_80,local_b8);
    uStack_4c = uStack_4c & 0xffffffff;
    FUN_1401d9a90(local_b8);
  }
  FUN_1401d9e78(param_1 + 0x70,&local_98);
  FUN_1401d7744(&local_60);
  FUN_1401d9a90(&local_80);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456dbef2 FUN_1456dbef2 body=108 status=ok
// SIG undefined FUN_1456dbef2(void)

undefined8 FUN_1456dbef2(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  local_18 = param_2;
  if (*(longlong *)(param_2 + 0x38) == 0) {
    cVar1 = FUN_1448d56de(param_2,0);
    uVar2 = 0xffffffff;
    if (cVar1 == '\0') goto LAB_1456dbf2b;
  }
  uVar2 = FUN_1448d545a(param_1,&local_20);
LAB_1456dbf2b:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1456dbf5f FUN_1456dbf5f body=559 status=ok
// SIG undefined FUN_1456dbf5f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456dbf5f(void)

{
  undefined1 auStack_148 [40];
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [24];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a26b8) {
    FUN_144b3d300(&DAT_14c9a26b8);
    if (DAT_14c9a26b8 == -1) {
      FUN_1456dc6dd();
      local_70 = 0xf;
      local_68 = 0xf;
      local_80 = 0x26403a3f2f3b23;
      uStack_79 = 0x3d;
      uStack_78 = 0x272a7e2e5f242b;
      local_71 = 0;
      FUN_1401ddb30(local_c0,&local_80,3);
      local_a0[0] = 3;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      FUN_1401db408(&local_98,&DAT_14c9a2990);
      FUN_1401db408(&local_98,local_c0);
      FUN_1456dc3ef();
      FUN_1456dc3ef();
      local_120 = 1;
      local_11c = 0x25;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      local_100[0] = 6;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      FUN_1401db408(&local_f8,&local_120);
      FUN_1401db408(&local_f8,&DAT_14c9a2670);
      local_e0[0] = 6;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      FUN_1401db408(&local_d8,local_100);
      FUN_1401db408(&local_d8,&DAT_14c9a2670);
      _DAT_14c9a2698 = 3;
      _DAT_14c9a26a0 = 0;
      uRam000000014c9a26a8 = 0;
      _DAT_14c9a26b0 = 0;
      FUN_1401db408(&DAT_14c9a26a0,local_a0);
      FUN_1401db408(&DAT_14c9a26a0,local_e0);
      FUN_1401d9b52(&local_d8);
      FUN_1401d9b52(&local_f8);
      FUN_1401d9b52(&local_118);
      FUN_1401d9b52(&local_98);
      FUN_1401d9b52(local_b8);
      FUN_1401d9a90(&local_80);
      atexit((_func_5014 *)&LAB_142b2b0dc);
      _Init_thread_footer(&DAT_14c9a26b8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456dc18f FUN_1456dc18f body=129 status=ok
// SIG undefined FUN_1456dc18f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456dc18f(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a27f8) {
    FUN_144b3d300(&DAT_14c9a27f8);
    if (DAT_14c9a27f8 == -1) {
      _DAT_14c9a27d8 = 1;
      DAT_14c9a27dc = 9;
      _DAT_14c9a27e0 = 0;
      uRam000000014c9a27e8 = 0;
      _DAT_14c9a27f0 = 0;
      atexit((_func_5014 *)&LAB_142b2b13c);
      _Init_thread_footer(&DAT_14c9a27f8);
      return;
    }
  }
  return;
}



// FUNCTION 1456dc210 FUN_1456dc210 body=130 status=ok
// SIG undefined FUN_1456dc210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456dc210(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2988) {
    FUN_144b3d300(&DAT_14c9a2988);
    if (DAT_14c9a2988 == -1) {
      _DAT_14c9a2968 = 1;
      DAT_14c9a296c = 0x20;
      _DAT_14c9a2970 = 0;
      uRam000000014c9a2978 = 0;
      _DAT_14c9a2980 = 0;
      atexit((_func_5014 *)&LAB_142b2b1b4);
      _Init_thread_footer(&DAT_14c9a2988);
      return;
    }
  }
  return;
}



// FUNCTION 1456dc292 FUN_1456dc292 body=172 status=ok
// SIG undefined FUN_1456dc292(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456dc292(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2960) {
    FUN_144b3d300(&DAT_14c9a2960);
    if (DAT_14c9a2960 == -1) {
      FUN_1456dc210();
      FUN_1456dc18f();
      _DAT_14c9a2940 = 3;
      _DAT_14c9a2948 = 0;
      uRam000000014c9a2950 = 0;
      _DAT_14c9a2958 = 0;
      FUN_1401db408(&DAT_14c9a2948,&DAT_14c9a2968);
      FUN_1401db408(&DAT_14c9a2948,&DAT_14c9a27d8);
      atexit((_func_5014 *)&LAB_142b2b1a8);
      _Init_thread_footer(&DAT_14c9a2960);
      return;
    }
  }
  return;
}



// FUNCTION 1456dc33e FUN_1456dc33e body=177 status=ok
// SIG undefined FUN_1456dc33e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456dc33e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a29d8) {
    FUN_144b3d300(&DAT_14c9a29d8);
    if (DAT_14c9a29d8 == -1) {
      FUN_1456dc7d8();
      FUN_1456dc584();
      _DAT_14c9a29b8 = 3;
      _DAT_14c9a29c0 = 0;
      uRam000000014c9a29c8 = 0;
      _DAT_14c9a29d0 = 0;
      FUN_1401db408(&DAT_14c9a29c0,&DAT_14c9a29e0);
      FUN_1401db408(&DAT_14c9a29c0,&DAT_14c9a2af8);
      atexit((_func_5014 *)&LAB_142b2b1cc);
      _Init_thread_footer(&DAT_14c9a29d8);
      return;
    }
  }
  return;
}



// FUNCTION 1456dc3ef FUN_1456dc3ef body=373 status=ok
// SIG undefined FUN_1456dc3ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456dc3ef(void)

{
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined2 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2690) {
    FUN_144b3d300(&DAT_14c9a2690);
    if (DAT_14c9a2690 == -1) {
      FUN_1456dc584();
      local_90 = 2;
      local_8c = 0x4641;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70[0] = 3;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      FUN_1401db408(&local_68,&DAT_14c9a2af8);
      FUN_1401db408(&local_68,&local_90);
      local_b0 = 2;
      local_ac = 0x6661;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      _DAT_14c9a2670 = 3;
      _DAT_14c9a2678 = 0;
      uRam000000014c9a2680 = 0;
      _DAT_14c9a2688 = 0;
      FUN_1401db408(&DAT_14c9a2678,local_70);
      FUN_1401db408(&DAT_14c9a2678,&local_b0);
      FUN_1401d9b52(&local_a8);
      FUN_1401d9b52(&local_68);
      FUN_1401d9b52(&local_88);
      atexit((_func_5014 *)&LAB_142b2b0d0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_d8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456dc584 FUN_1456dc584 body=132 status=ok
// SIG undefined FUN_1456dc584(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456dc584(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2b18) {
    FUN_144b3d300(&DAT_14c9a2b18);
    if (DAT_14c9a2b18 == -1) {
      DAT_14c9a2af8 = 2;
      _DAT_14c9a2afc = 0x3930;
      _DAT_14c9a2b00 = 0;
      uRam000000014c9a2b08 = 0;
      _DAT_14c9a2b10 = 0;
      atexit((_func_5014 *)&LAB_142b2b22c);
      _Init_thread_footer(&DAT_14c9a2b18);
      return;
    }
  }
  return;
}



// FUNCTION 1456dc608 FUN_1456dc608 body=213 status=ok
// SIG undefined FUN_1456dc608(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1456dc608(undefined4 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2820) {
    FUN_144b3d300(&DAT_14c9a2820);
    if (DAT_14c9a2820 == -1) {
      DAT_14c9a2800 = 1;
      DAT_14c9a2804 = CONCAT11(DAT_14c9a2804._1_1_,0x23);
      _DAT_14c9a2808 = 0;
      DAT_14c9a2810 = 0;
      _DAT_14c9a2818 = 0;
      atexit((_func_5014 *)&LAB_142b2b148);
      _Init_thread_footer(&DAT_14c9a2820);
    }
  }
  *(undefined2 *)(param_1 + 1) = DAT_14c9a2804;
  *param_1 = DAT_14c9a2800;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_1401d9af0(param_1 + 2,DAT_14c9a2810 - _DAT_14c9a2808 >> 5,&DAT_14c9a2808,&DAT_14c9a2810);
  return param_1;
}



// FUNCTION 1456dc6dd FUN_1456dc6dd body=236 status=ok
// SIG undefined FUN_1456dc6dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456dc6dd(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a29b0) {
    FUN_144b3d300(&DAT_14c9a29b0);
    if (DAT_14c9a29b0 == -1) {
      FUN_1456dc33e();
      local_38 = 1;
      local_34 = 0x2d;
      local_30 = 0;
      uStack_28 = 0;
      local_20 = 0;
      _DAT_14c9a2990 = 3;
      _DAT_14c9a2998 = 0;
      uRam000000014c9a29a0 = 0;
      _DAT_14c9a29a8 = 0;
      FUN_1401db408(&DAT_14c9a2998,&DAT_14c9a29b8);
      FUN_1401db408(&DAT_14c9a2998,&local_38);
      FUN_1401d9b52(&local_30);
      atexit((_func_5014 *)&LAB_142b2b1c0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456dc7d8 FUN_1456dc7d8 body=271 status=ok
// SIG undefined FUN_1456dc7d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456dc7d8(void)

{
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2a00) {
    FUN_144b3d300();
    if (DAT_14c9a2a00 == -1) {
      local_40 = 2;
      local_3c = 0x7a61;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      local_60 = 2;
      local_5c = 0x5a41;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      _DAT_14c9a29e0 = 3;
      _DAT_14c9a29e8 = 0;
      uRam000000014c9a29f0 = 0;
      _DAT_14c9a29f8 = 0;
      FUN_1401db408(&DAT_14c9a29e8,&local_40);
      FUN_1401db408(&DAT_14c9a29e8,&local_60);
      FUN_1401d9b52(&local_58);
      FUN_1401d9b52(&local_38);
      atexit((_func_5014 *)&LAB_142b2b1d8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456dc8f7 FUN_1456dc8f7 body=362 status=ok
// SIG undefined FUN_1456dc8f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456dc8f7(void)

{
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2640) {
    FUN_144b3d300(&DAT_14c9a2640);
    if (DAT_14c9a2640 == -1) {
      FUN_1456db528();
      local_80[0] = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60[0] = 3;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      FUN_1401db408(&local_58,&DAT_14c9a2a08);
      FUN_1401db408(&local_58,local_80);
      local_a0 = 1;
      local_9c = 0x3a;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      _DAT_14c9a2620 = 6;
      _DAT_14c9a2628 = 0;
      uRam000000014c9a2630 = 0;
      _DAT_14c9a2638 = 0;
      FUN_1401db408(&DAT_14c9a2628,&local_a0);
      FUN_1401db408(&DAT_14c9a2628,local_60);
      FUN_1401d9b52(&local_98);
      FUN_1401d9b52(&local_58);
      FUN_1401d9b52(&local_78);
      atexit((_func_5014 *)&LAB_142b2b0b8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456dca7e FUN_1456dca7e body=7499 status=ok
// SIG undefined FUN_1456dca7e(void)

longlong * FUN_1456dca7e(longlong *param_1,undefined8 param_2)

{
  PSRWLOCK pRVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a5ce0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x10));
  *param_1 = (longlong)(puVar2 + 2);
  param_1[1] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a5d00;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 6));
  param_1[2] = (longlong)(puVar2 + 2);
  param_1[3] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a5d20;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 7));
  param_1[4] = (longlong)(puVar2 + 2);
  param_1[5] = (longlong)puVar2;
  lVar3 = FUN_14001cc68(0x58,0x10);
  FUN_1456df80c(lVar3);
  param_1[6] = lVar3 + 0x10;
  param_1[7] = lVar3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a5d60;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 7));
  param_1[8] = (longlong)(puVar2 + 2);
  param_1[9] = (longlong)puVar2;
  puVar4 = (undefined8 *)FUN_14001cc68(0x218);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a5d80;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x208);
  FUN_1456df114(puVar2);
  *(undefined4 *)(puVar4 + 0x41) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x42));
  param_1[10] = (longlong)puVar2;
  param_1[0xb] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(200);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a5da0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0xb8);
  FUN_1456dfe4e(puVar2);
  *(undefined4 *)(puVar4 + 0x17) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x18));
  param_1[0xc] = (longlong)puVar2;
  param_1[0xd] = (longlong)puVar4;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a5dc0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 6));
  param_1[0xe] = (longlong)(puVar2 + 2);
  param_1[0xf] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a5de0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 7));
  param_1[0x10] = (longlong)(puVar2 + 2);
  param_1[0x11] = (longlong)puVar2;
  puVar4 = (undefined8 *)FUN_14001cc68(0x128);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a5e00;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x118);
  FUN_1456df5a6(puVar2);
  *(undefined4 *)(puVar4 + 0x23) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x24));
  param_1[0x12] = (longlong)puVar2;
  param_1[0x13] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0xe0);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a5e20;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0xd0);
  FUN_1456dee56(puVar2);
  *(undefined4 *)(puVar4 + 0x1a) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x1b));
  param_1[0x14] = (longlong)puVar2;
  param_1[0x15] = (longlong)puVar4;
  puVar2 = (undefined8 *)FUN_14001cc68(0xa0);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a5e40;
  memset(puVar2 + 2,0,0x90);
  *(undefined4 *)((longlong)puVar2 + 0x44) = 1;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x61) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x69) = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x87) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x13));
  param_1[0x16] = (longlong)(puVar2 + 2);
  param_1[0x17] = (longlong)puVar2;
  lVar3 = FUN_1456debfd();
  param_1[0x18] = lVar3 + 0x10;
  param_1[0x19] = lVar3;
  lVar3 = FUN_14001cc68(0x238,0x10);
  FUN_1456df45c(lVar3,param_2);
  param_1[0x1a] = lVar3 + 0x10;
  param_1[0x1b] = lVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x650);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a5ea0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x640);
  FUN_1456e051c(puVar2);
  *(undefined4 *)(puVar4 + 200) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0xc9));
  param_1[0x1c] = (longlong)puVar2;
  param_1[0x1d] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x650);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a5ea0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x640);
  FUN_1456e051c(puVar2);
  *(undefined4 *)(puVar4 + 200) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0xc9));
  param_1[0x1e] = (longlong)puVar2;
  param_1[0x1f] = (longlong)puVar4;
  lVar5 = 0x70;
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a5ee0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  FUN_1456df3c6(puVar2 + 2);
  param_1[0x20] = (longlong)(puVar2 + 2);
  param_1[0x21] = (longlong)puVar2;
  puVar4 = (undefined8 *)FUN_14001cc68(0x118);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a5f00;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x108);
  FUN_1456df736(puVar2);
  *(undefined4 *)(puVar4 + 0x21) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x22));
  param_1[0x22] = (longlong)puVar2;
  param_1[0x23] = (longlong)puVar4;
  puVar2 = (undefined8 *)FUN_14001cc68(0x118);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a5f20;
  memset(puVar2 + 2,0,0x108);
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x22));
  param_1[0x24] = (longlong)(puVar2 + 2);
  param_1[0x25] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a5f40;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *(undefined1 *)(puVar2 + 0xb) = 1;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0xe));
  param_1[0x26] = (longlong)(puVar2 + 2);
  param_1[0x27] = (longlong)puVar2;
  lVar3 = FUN_1456deec6();
  param_1[0x28] = lVar3 + 0x10;
  param_1[0x29] = lVar3;
  lVar3 = FUN_1456de985();
  param_1[0x2a] = lVar3 + 0x10;
  param_1[0x2b] = lVar3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a5fa0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 6));
  param_1[0x2c] = (longlong)(puVar2 + 2);
  param_1[0x2d] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a5fc0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0x3f800000;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 5));
  param_1[0x2e] = (longlong)(puVar2 + 2);
  param_1[0x2f] = (longlong)puVar2;
  puVar4 = (undefined8 *)FUN_14001cc68(0x150);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a5fe0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x140);
  FUN_1456e0820(puVar2);
  *(undefined4 *)(puVar4 + 0x28) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x29));
  param_1[0x30] = (longlong)puVar2;
  param_1[0x31] = (longlong)puVar4;
  lVar3 = FUN_1401dfd3e();
  param_1[0x32] = lVar3 + 0x10;
  param_1[0x33] = lVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0xd8);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a6020;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,200);
  FUN_1456dfc6c(puVar2);
  *(undefined4 *)(puVar4 + 0x19) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x1a));
  param_1[0x34] = (longlong)puVar2;
  param_1[0x35] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x1d8);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a6040;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x1c8);
  FUN_1456dfa9e(puVar2);
  *(undefined4 *)(puVar4 + 0x39) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x3a));
  param_1[0x36] = (longlong)puVar2;
  param_1[0x37] = (longlong)puVar4;
  lVar3 = FUN_1456def38();
  param_1[0x38] = lVar3 + 0x10;
  param_1[0x39] = lVar3;
  lVar3 = FUN_1456de831();
  param_1[0x3a] = lVar3 + 0x10;
  param_1[0x3b] = lVar3;
  lVar3 = FUN_1456de9de();
  param_1[0x3c] = lVar3 + 0x10;
  param_1[0x3d] = lVar3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x1490);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a60c0;
  memset(puVar2 + 2,0,0x1480);
  do {
    puVar4 = (undefined8 *)((longlong)puVar2 + lVar5 + -0x20);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined8 *)((longlong)puVar2 + lVar5 + -0x30);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined8 *)((longlong)puVar2 + lVar5 + -0x40);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined8 *)((longlong)puVar2 + lVar5 + -0x50);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined8 *)((longlong)puVar2 + lVar5 + -0x60);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined8 *)((longlong)puVar2 + lVar5 + -0x10) = 0;
    *(undefined8 *)((longlong)puVar2 + lVar5 + -8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + lVar5) = 0;
    lVar5 = lVar5 + 0x68;
  } while (lVar5 != 0x14c0);
  *(undefined8 *)((longlong)puVar2 + 0x146c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1474) = 0;
  puVar2[0x28c] = 0;
  puVar2[0x28d] = 0;
  *(undefined4 *)(puVar2 + 0x290) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x291));
  param_1[0x3e] = (longlong)(puVar2 + 2);
  param_1[0x3f] = (longlong)puVar2;
  puVar4 = (undefined8 *)FUN_14001cc68(200);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_FUN_14b9a60e0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0xb8);
  FUN_1456dec5e(puVar2);
  *(undefined4 *)(puVar4 + 0x17) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x18));
  param_1[0x40] = (longlong)puVar2;
  param_1[0x41] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x208);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a6100;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x1f8);
  FUN_1456e03b6(puVar2);
  *(undefined4 *)(puVar4 + 0x3f) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x40));
  param_1[0x42] = (longlong)puVar2;
  param_1[0x43] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x1d0);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a6120;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x1c0);
  FUN_1456e09ac(puVar2);
  *(undefined4 *)(puVar4 + 0x38) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x39));
  param_1[0x44] = (longlong)puVar2;
  param_1[0x45] = (longlong)puVar4;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a6140;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 6));
  param_1[0x46] = (longlong)(puVar2 + 2);
  param_1[0x47] = (longlong)puVar2;
  puVar4 = (undefined8 *)FUN_14001cc68(0xb8);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a6160;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0xa8);
  FUN_1456df4f6(puVar2);
  *(undefined4 *)(puVar4 + 0x15) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x16));
  param_1[0x48] = (longlong)puVar2;
  param_1[0x49] = (longlong)puVar4;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a6180;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 6));
  param_1[0x4a] = (longlong)(puVar2 + 2);
  param_1[0x4b] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0xa8);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a61a0;
  memset(puVar2 + 2,0,0x98);
  *(undefined8 *)((longlong)puVar2 + 0x6c) = 0xffffffff00000080;
  *(undefined1 *)(puVar2 + 0x12) = 1;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x14));
  param_1[0x4c] = (longlong)(puVar2 + 2);
  param_1[0x4d] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0xb0);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a61c0;
  memset(puVar2 + 2,0,0xa0);
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x15));
  param_1[0x4e] = (longlong)(puVar2 + 2);
  param_1[0x4f] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a61e0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 6));
  param_1[0x50] = (longlong)(puVar2 + 2);
  param_1[0x51] = (longlong)puVar2;
  lVar3 = FUN_1456de886();
  param_1[0x52] = lVar3 + 0x10;
  param_1[0x53] = lVar3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a6220;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0xf));
  param_1[0x54] = (longlong)(puVar2 + 2);
  param_1[0x55] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a6240;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 6));
  param_1[0x56] = (longlong)(puVar2 + 2);
  param_1[0x57] = (longlong)puVar2;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a6260;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1456df334(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0x58] = (longlong)puVar2;
  param_1[0x59] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x248);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a6280;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x238);
  FUN_1456decc0(puVar2);
  *(undefined4 *)(puVar4 + 0x47) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x48));
  param_1[0x5a] = (longlong)puVar2;
  param_1[0x5b] = (longlong)puVar4;
  lVar3 = FUN_1456dea37();
  param_1[0x5c] = lVar3 + 0x10;
  param_1[0x5d] = lVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0xd8);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a62c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,200);
  FUN_1456defaa(puVar2);
  param_1[0x5e] = (longlong)puVar2;
  param_1[0x5f] = (longlong)puVar4;
  lVar3 = FUN_1401dfd93();
  param_1[0x60] = lVar3 + 0x10;
  param_1[0x61] = lVar3;
  lVar3 = FUN_14001cc68(0x68,0x10);
  FUN_1456df098(lVar3);
  param_1[0x62] = lVar3 + 0x10;
  param_1[99] = lVar3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a6320;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 7));
  param_1[100] = (longlong)(puVar2 + 2);
  param_1[0x65] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a6320;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 7));
  param_1[0x66] = (longlong)(puVar2 + 2);
  param_1[0x67] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a6320;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 7));
  param_1[0x68] = (longlong)(puVar2 + 2);
  param_1[0x69] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b9a6320;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 7));
  param_1[0x6a] = (longlong)(puVar2 + 2);
  param_1[0x6b] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a6340;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 6));
  param_1[0x6c] = (longlong)(puVar2 + 2);
  param_1[0x6d] = (longlong)puVar2;
  lVar3 = FUN_1456dea90();
  param_1[0x6e] = lVar3 + 0x10;
  param_1[0x6f] = lVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x6f8);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a6380;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x6e8);
  FUN_1456df9be(puVar2);
  *(undefined4 *)(puVar4 + 0xdd) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0xde));
  param_1[0x70] = (longlong)puVar2;
  param_1[0x71] = (longlong)puVar4;
  lVar3 = FUN_1456deb42();
  param_1[0x72] = lVar3 + 0x10;
  param_1[0x73] = lVar3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a63c0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 5));
  param_1[0x74] = (longlong)(puVar2 + 2);
  param_1[0x75] = (longlong)puVar2;
  lVar3 = FUN_14001cc68(0xf0,0x10);
  FUN_1456df198(lVar3);
  param_1[0x76] = lVar3 + 0x10;
  param_1[0x77] = lVar3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a6400;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0xf));
  param_1[0x78] = (longlong)(puVar2 + 2);
  param_1[0x79] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a6420;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 6));
  param_1[0x7a] = (longlong)(puVar2 + 2);
  param_1[0x7b] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0xd8);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9a6440;
  memset(puVar2 + 2,0,200);
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x1a));
  param_1[0x7c] = (longlong)(puVar2 + 2);
  param_1[0x7d] = (longlong)puVar2;
  lVar3 = FUN_1456deae9();
  param_1[0x7e] = lVar3 + 0x10;
  param_1[0x7f] = lVar3;
  lVar3 = FUN_1456deded();
  param_1[0x80] = lVar3 + 0x10;
  param_1[0x81] = lVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x1c8);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14b9a64a0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x1b8);
  FUN_1456df8e4(puVar2);
  *(undefined4 *)(puVar4 + 0x37) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x38));
  param_1[0x82] = (longlong)puVar2;
  param_1[0x83] = (longlong)puVar4;
  puVar2 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_LAB_14b9a64c0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0x80;
  *(undefined4 *)(puVar2 + 10) = 0xffffffff;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x11));
  param_1[0x84] = (longlong)(puVar2 + 2);
  param_1[0x85] = (longlong)puVar2;
  puVar4 = (undefined8 *)FUN_14001cc68(0x108);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_LAB_14b9a64e0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0xf8);
  FUN_1456dff44(puVar2);
  *(undefined4 *)(puVar4 + 0x1f) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x20));
  param_1[0x86] = (longlong)puVar2;
  param_1[0x87] = (longlong)puVar4;
  lVar3 = FUN_1456de8db();
  param_1[0x88] = lVar3 + 0x10;
  param_1[0x89] = lVar3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_LAB_14b9a6520;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 4));
  param_1[0x8a] = (longlong)(puVar2 + 2);
  param_1[0x8b] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_LAB_14b9a6540;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0xd));
  param_1[0x8c] = (longlong)(puVar2 + 2);
  param_1[0x8d] = (longlong)puVar2;
  puVar4 = (undefined8 *)FUN_14001cc68(0xb0);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a6560;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0xa0);
  FUN_1401dffec(puVar2);
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x15));
  param_1[0x8e] = (longlong)puVar2;
  param_1[0x8f] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0xd8);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_LAB_14b9a6580;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,200);
  FUN_1456dfd5a(puVar2);
  *(undefined4 *)(puVar4 + 0x19) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x1a));
  param_1[0x90] = (longlong)puVar2;
  param_1[0x91] = (longlong)puVar4;
  lVar3 = FUN_1456de930();
  param_1[0x92] = lVar3 + 0x10;
  param_1[0x93] = lVar3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x98);
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_FUN_14b9a65c0;
  memset(puVar2 + 2,0,0x88);
  *(undefined4 *)((longlong)puVar2 + 0x54) = 0x80;
  *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  *(undefined4 *)(puVar2 + 0x11) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x12));
  param_1[0x94] = (longlong)(puVar2 + 2);
  param_1[0x95] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0xa0);
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_LAB_14b9a65e0;
  memset(puVar2 + 2,0,0x90);
  puVar2[3] = &PTR_FUN_14b895f80;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x13));
  param_1[0x96] = (longlong)(puVar2 + 2);
  param_1[0x97] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0xa0);
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_LAB_14b9a6600;
  memset(puVar2 + 2,0,0x90);
  *(undefined1 *)(puVar2 + 0xd) = 1;
  *(undefined8 *)((longlong)puVar2 + 0x74) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x84) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x13));
  param_1[0x98] = (longlong)(puVar2 + 2);
  param_1[0x99] = (longlong)puVar2;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_LAB_14b9a6620;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1456dfb82(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0x9a] = (longlong)puVar2;
  param_1[0x9b] = (longlong)puVar4;
  lVar3 = FUN_1456df020();
  param_1[0x9c] = lVar3 + 0x10;
  param_1[0x9d] = lVar3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_FUN_14b9a6660;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 8));
  param_1[0x9e] = (longlong)(puVar2 + 2);
  param_1[0x9f] = (longlong)puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_FUN_14b9a6680;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 6));
  param_1[0xa0] = (longlong)(puVar2 + 2);
  param_1[0xa1] = (longlong)puVar2;
  lVar3 = FUN_1456df21b();
  param_1[0xa2] = lVar3 + 0x10;
  param_1[0xa3] = lVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xa4] = (longlong)puVar2;
  param_1[0xa5] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xa6] = (longlong)puVar2;
  param_1[0xa7] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xa8] = (longlong)puVar2;
  param_1[0xa9] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xaa] = (longlong)puVar2;
  param_1[0xab] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xac] = (longlong)puVar2;
  param_1[0xad] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xae] = (longlong)puVar2;
  param_1[0xaf] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xb0] = (longlong)puVar2;
  param_1[0xb1] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xb2] = (longlong)puVar2;
  param_1[0xb3] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xb4] = (longlong)puVar2;
  param_1[0xb5] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xb6] = (longlong)puVar2;
  param_1[0xb7] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xb8] = (longlong)puVar2;
  param_1[0xb9] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xba] = (longlong)puVar2;
  param_1[0xbb] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xbc] = (longlong)puVar2;
  param_1[0xbd] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x180);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_FUN_14b9a66c0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x170);
  FUN_1401dfc84(puVar2);
  *(undefined4 *)(puVar4 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x2f));
  param_1[0xbe] = (longlong)puVar2;
  param_1[0xbf] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0xb8);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_LAB_14b9a66e0;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0xa8);
  FUN_1456deb9e(puVar2);
  *(undefined4 *)(puVar4 + 0x15) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x16));
  param_1[0xc0] = (longlong)puVar2;
  param_1[0xc1] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0xa40);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_LAB_14b9a6700;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0xa30);
  FUN_1456e12ce(puVar2);
  *(undefined4 *)(puVar4 + 0x146) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar4 + 0x147));
  param_1[0xc2] = (longlong)puVar2;
  param_1[0xc3] = (longlong)puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x158);
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_LAB_14b9a6720;
  puVar2 = puVar4 + 2;
  memset(puVar2,0,0x148);
  FUN_1456df666(puVar2);
  param_1[0xc4] = (longlong)puVar2;
  param_1[0xc5] = (longlong)puVar4;
  lVar3 = FUN_1456de7c9();
  param_1[0xc6] = lVar3 + 0x10;
  param_1[199] = lVar3;
  lVar3 = FUN_1456de7c9();
  param_1[200] = lVar3 + 0x10;
  param_1[0xc9] = lVar3;
  lVar3 = FUN_14001cc68(0x148,0x10);
  FUN_1456df2a4(lVar3);
  param_1[0xca] = lVar3 + 0x10;
  param_1[0xcb] = lVar3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_LAB_14b9a6780;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 4));
  param_1[0xcc] = (longlong)(puVar2 + 2);
  param_1[0xcd] = (longlong)puVar2;
  lVar3 = param_1[0xc6];
  pRVar1 = (PSRWLOCK)(lVar3 + 0x28);
  AcquireSRWLockExclusive(pRVar1);
  FUN_14020fad6(lVar3 + 0x10,L"character");
  ReleaseSRWLockExclusive(pRVar1);
  lVar3 = param_1[200];
  pRVar1 = (PSRWLOCK)(lVar3 + 0x28);
  AcquireSRWLockExclusive(pRVar1);
  FUN_14020fad6(lVar3 + 0x10,L"profile");
  ReleaseSRWLockExclusive(pRVar1);
  return param_1;
}



// FUNCTION 1456de7c9 FUN_1456de7c9 body=104 status=ok
// SIG undefined FUN_1456de7c9(void)

undefined8 * FUN_1456de7c9(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a6740;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  FUN_1400b22c2(puVar1 + 4,&DAT_149e02088);
  *(undefined4 *)(puVar1 + 6) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 7));
  return puVar1;
}



// FUNCTION 1456de831 FUN_1456de831 body=85 status=ok
// SIG undefined FUN_1456de831(void)

undefined8 * FUN_1456de831(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b9a6080;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 9));
  return puVar1;
}



// FUNCTION 1456de886 FUN_1456de886 body=85 status=ok
// SIG undefined FUN_1456de886(void)

undefined8 * FUN_1456de886(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a6200;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 9));
  return puVar1;
}



// FUNCTION 1456de8db FUN_1456de8db body=85 status=ok
// SIG undefined FUN_1456de8db(void)

undefined8 * FUN_1456de8db(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a6500;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 9));
  return puVar1;
}



// FUNCTION 1456de930 FUN_1456de930 body=85 status=ok
// SIG undefined FUN_1456de930(void)

undefined8 * FUN_1456de930(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a65a0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 9));
  return puVar1;
}



// FUNCTION 1456de985 FUN_1456de985 body=89 status=ok
// SIG undefined FUN_1456de985(void)

undefined8 * FUN_1456de985(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a5f80;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 0xb));
  return puVar1;
}



// FUNCTION 1456de9de FUN_1456de9de body=89 status=ok
// SIG undefined FUN_1456de9de(void)

undefined8 * FUN_1456de9de(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b9a60a0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 8));
  return puVar1;
}



// FUNCTION 1456dea37 FUN_1456dea37 body=89 status=ok
// SIG undefined FUN_1456dea37(void)

undefined8 * FUN_1456dea37(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b9a62a0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 8));
  return puVar1;
}



// FUNCTION 1456dea90 FUN_1456dea90 body=89 status=ok
// SIG undefined FUN_1456dea90(void)

undefined8 * FUN_1456dea90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a6360;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 0xb));
  return puVar1;
}



// FUNCTION 1456deae9 FUN_1456deae9 body=89 status=ok
// SIG undefined FUN_1456deae9(void)

undefined8 * FUN_1456deae9(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b9a6460;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 8));
  return puVar1;
}



// FUNCTION 1456deb42 FUN_1456deb42 body=92 status=ok
// SIG undefined FUN_1456deb42(void)

undefined8 * FUN_1456deb42(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a63a0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)(puVar1 + 5) = 1;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 7));
  return puVar1;
}



// FUNCTION 1456deb9e FUN_1456deb9e body=95 status=ok
// SIG undefined FUN_1456deb9e(void)

void FUN_1456deb9e(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  return;
}



// FUNCTION 1456debfd FUN_1456debfd body=97 status=ok
// SIG undefined FUN_1456debfd(void)

undefined8 * FUN_1456debfd(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a5e60;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 0xc));
  return puVar1;
}



// FUNCTION 1456dec5e FUN_1456dec5e body=97 status=ok
// SIG undefined FUN_1456dec5e(void)

void FUN_1456dec5e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  return;
}



// FUNCTION 1456decc0 FUN_1456decc0 body=176 status=ok
// SIG undefined FUN_1456decc0(void)

undefined8 * FUN_1456decc0(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b827680;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  FUN_1456ded70(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x216) = 0;
  return param_1;
}



// FUNCTION 1456ded70 FUN_1456ded70 body=125 status=ok
// SIG undefined FUN_1456ded70(void)

undefined8 * FUN_1456ded70(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_144a5dc74(param_1 + 8);
  FUN_144a5dc74(param_1 + 10);
  FUN_144a5dc74(param_1 + 0xc);
  FUN_144a5dc74(param_1 + 0xe);
  FUN_144a5dc74(param_1 + 0x10);
  FUN_144a5dc74(param_1 + 0x12);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 1456deded FUN_1456deded body=104 status=ok
// SIG undefined FUN_1456deded(void)

undefined8 * FUN_1456deded(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a6480;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x4c) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 1;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 0xd));
  return puVar1;
}



// FUNCTION 1456dee56 FUN_1456dee56 body=112 status=ok
// SIG undefined FUN_1456dee56(void)

void FUN_1456dee56(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x17] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  return;
}



// FUNCTION 1456deec6 FUN_1456deec6 body=114 status=ok
// SIG undefined FUN_1456deec6(void)

undefined8 * FUN_1456deec6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b9a5f60;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 0xd));
  return puVar1;
}



// FUNCTION 1456def38 FUN_1456def38 body=114 status=ok
// SIG undefined FUN_1456def38(void)

undefined8 * FUN_1456def38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b9a6060;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 0xd));
  return puVar1;
}



// FUNCTION 1456defaa FUN_1456defaa body=118 status=ok
// SIG undefined FUN_1456defaa(void)

void * FUN_1456defaa(void *param_1)

{
  memset(param_1,0,0xb8);
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = DAT_14c948618;
  *(undefined4 *)((longlong)param_1 + 0xb0) = DAT_14c948620;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0;
  InitializeSRWLock((PSRWLOCK)((longlong)param_1 + 0xc0));
  return param_1;
}



// FUNCTION 1456df020 FUN_1456df020 body=119 status=ok
// SIG undefined FUN_1456df020(void)

undefined8 * FUN_1456df020(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a6640;
  puVar1[10] = 0;
  puVar1[2] = 0x3f704dba3e67bf62;
  puVar1[3] = 0x3f8000003eec63ae;
  puVar1[4] = 0x3f80000000000000;
  puVar1[5] = 0x3e2b47843e11c715;
  puVar1[6] = 0x3f800000;
  puVar1[7] = &DAT_3f8000003f800000;
  puVar1[8] = &DAT_3f8000003f800000;
  puVar1[9] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 10));
  return puVar1;
}



// FUNCTION 1456df098 FUN_1456df098 body=124 status=ok
// SIG undefined FUN_1456df098(void)

undefined8 * FUN_1456df098(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b9a6300;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_144a5dc74(param_1 + 2);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xc));
  return param_1;
}



// FUNCTION 1456df114 FUN_1456df114 body=131 status=ok
// SIG undefined FUN_1456df114(void)

undefined8 * FUN_1456df114(undefined8 *param_1)

{
  memset(param_1 + 0xf,0,0xb8);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_1401dfe00(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0x26) = 0;
  memset(param_1 + 0x27,0,0xb8);
  FUN_1401dfe00(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  return param_1;
}



// FUNCTION 1456df198 FUN_1456df198 body=131 status=ok
// SIG undefined FUN_1456df198(void)

undefined8 * FUN_1456df198(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b9a63e0;
  memset(param_1 + 2,0,0xe0);
  FUN_1408f3f9e(param_1 + 2);
  param_1[2] = &PTR_FUN_14b819040;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x1d));
  return param_1;
}



// FUNCTION 1456df21b FUN_1456df21b body=136 status=ok
// SIG undefined FUN_1456df21b(void)

undefined8 * FUN_1456df21b(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a66a0;
  memset(puVar1 + 2,0,0xd8);
  FUN_1408f3f9e(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14b819e50;
  *(undefined4 *)(puVar1 + 0x1b) = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  InitializeSRWLock((PSRWLOCK)(puVar1 + 0x1c));
  return puVar1;
}



// FUNCTION 1456df2a4 FUN_1456df2a4 body=144 status=ok
// SIG undefined FUN_1456df2a4(void)

undefined8 * FUN_1456df2a4(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b9a6760;
  memset(param_1 + 2,0,0x138);
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0xf;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x28));
  return param_1;
}



// FUNCTION 1456df334 FUN_1456df334 body=145 status=ok
// SIG undefined FUN_1456df334(void)

undefined8 * FUN_1456df334(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  FUN_141355620(param_1 + 0xd);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x29] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x2a) = (int)plVar2[1];
  *(undefined2 *)(param_1 + 0x2b) = 0;
  return param_1;
}



// FUNCTION 1456df3c6 FUN_1456df3c6 body=149 status=ok
// SIG undefined FUN_1456df3c6(void)

undefined8 * FUN_1456df3c6(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1400b22c2(&local_40,&DAT_149e02088);
  param_1[5] = local_40;
  *(undefined4 *)(param_1 + 6) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_34;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xb));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456df45c FUN_1456df45c body=153 status=ok
// SIG undefined FUN_1456df45c(void)

undefined8 * FUN_1456df45c(undefined8 *param_1)

{
  undefined1 auStack_258 [32];
  undefined1 local_238 [536];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_258;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b9a5e80;
  FUN_1456e013e(local_238);
  FUN_1456e0b84(param_1 + 2,local_238);
  *(undefined4 *)(param_1 + 0x45) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x46));
  FUN_1401dfe9e(local_238);
  if ((local_20 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456df4f6 FUN_1456df4f6 body=174 status=ok
// SIG undefined FUN_1456df4f6(void)

undefined8 * FUN_1456df4f6(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  FUN_1400b22c2(&local_30,&DAT_149e02088);
  param_1[1] = local_30;
  *(undefined4 *)(param_1 + 2) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_24;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456df5a6 FUN_1456df5a6 body=191 status=ok
// SIG undefined FUN_1456df5a6(void)

void FUN_1456df5a6(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = DAT_14c948618;
  *(undefined4 *)(param_1 + 0xb) = DAT_14c948620;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = DAT_14c948618;
  *(undefined4 *)(param_1 + 0xd) = DAT_14c948620;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = DAT_14c948618;
  *(undefined4 *)(param_1 + 0xf) = DAT_14c948620;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}



// FUNCTION 1456df666 FUN_1456df666 body=207 status=ok
// SIG undefined FUN_1456df666(void)

void * FUN_1456df666(void *param_1)

{
  memset(param_1,0,0x138);
  FUN_144a5dc74((longlong)param_1 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0xf;
  *(undefined2 *)((longlong)param_1 + 0x118) = 1;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 *)((longlong)param_1 + 0x130) = 1;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  InitializeSRWLock((PSRWLOCK)((longlong)param_1 + 0x140));
  return param_1;
}



// FUNCTION 1456df736 FUN_1456df736 body=214 status=ok
// SIG undefined FUN_1456df736(void)

undefined8 * FUN_1456df736(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  iVar1 = DAT_14cbd5558;
  _Src = DAT_14cbd5550;
  lVar2 = (longlong)DAT_14cbd5558;
  *(int *)(param_1 + 0x1d) = DAT_14cbd5558;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1c,iVar1,0);
    memcpy((void *)param_1[0x1c],_Src,lVar2 * 2);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 1456df80c FUN_1456df80c body=215 status=ok
// SIG undefined FUN_1456df80c(void)

undefined8 * FUN_1456df80c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b9a5d40;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  param_1[2] = local_38;
  *(undefined4 *)(param_1 + 3) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x1c) = local_2c;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  param_1[5] = local_38;
  *(undefined4 *)(param_1 + 6) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_2c;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 10));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456df8e4 FUN_1456df8e4 body=217 status=ok
// SIG undefined FUN_1456df8e4(void)

void FUN_1456df8e4(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x129) = 0;
  *(undefined8 *)((longlong)param_1 + 0x131) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  return;
}



// FUNCTION 1456df9be FUN_1456df9be body=223 status=ok
// SIG undefined FUN_1456df9be(void)

undefined1 * FUN_1456df9be(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x28] = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x30] = 1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x40] = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x78] = 0;
  memset(param_1 + 0xb8,0,0x308);
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  FUN_141563852(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  memset(param_1 + 0x3c8,0,0x308);
  FUN_141563852(param_1 + 0x3c8);
  *(undefined4 *)(param_1 + 0x6d0) = 0;
  return param_1;
}



// FUNCTION 1456dfa9e FUN_1456dfa9e body=227 status=ok
// SIG undefined FUN_1456dfa9e(void)

void FUN_1456dfa9e(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0xf;
  *(undefined2 *)(param_1 + 0x1a0) = 1;
  *(undefined8 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x1ac) = 0;
  return;
}



// FUNCTION 1456dfb82 FUN_1456dfb82 body=233 status=ok
// SIG undefined FUN_1456dfb82(void)

undefined8 * FUN_1456dfb82(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1403de7ba(param_1 + 2,&DAT_14caa8558);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x27] = 0xf;
  *(undefined2 *)(param_1 + 0x28) = 1;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 1;
  return param_1;
}



// FUNCTION 1456dfc6c FUN_1456dfc6c body=237 status=ok
// SIG undefined FUN_1456dfc6c(void)

undefined8 * FUN_1456dfc6c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  param_1[0x11] = local_38;
  *(undefined4 *)(param_1 + 0x12) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x94) = local_2c;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  param_1[0x14] = local_38;
  *(undefined4 *)(param_1 + 0x15) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xac) = local_2c;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456dfd5a FUN_1456dfd5a body=242 status=ok
// SIG undefined FUN_1456dfd5a(void)

undefined1 * FUN_1456dfd5a(undefined1 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x28) = local_38;
  *(undefined4 *)(param_1 + 0x30) = local_30;
  *(undefined4 *)(param_1 + 0x34) = local_2c;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x40) = local_38;
  *(undefined4 *)(param_1 + 0x48) = local_30;
  *(undefined4 *)(param_1 + 0x4c) = local_2c;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456dfe4e FUN_1456dfe4e body=244 status=ok
// SIG undefined FUN_1456dfe4e(void)

undefined8 * FUN_1456dfe4e(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0x3fe0000000000000;
  param_1[0xc] = 0x3fe0000000000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  param_1[0xe] = local_38;
  *(undefined4 *)(param_1 + 0xf) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x7c) = local_2c;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  param_1[0x11] = local_38;
  *(undefined4 *)(param_1 + 0x12) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x94) = local_2c;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456dff44 FUN_1456dff44 body=249 status=ok
// SIG undefined FUN_1456dff44(void)

undefined8 * FUN_1456dff44(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  *param_1 = local_40;
  *(undefined4 *)(param_1 + 1) = local_38;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_34;
  *(undefined4 *)(param_1 + 2) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[3] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 4) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_1456e003e(param_1 + 9);
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e003e FUN_1456e003e body=254 status=ok
// SIG undefined FUN_1456e003e(void)

undefined8 * FUN_1456e003e(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  param_1[2] = local_38;
  *(undefined4 *)(param_1 + 3) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x1c) = local_2c;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_144a5dc74(&local_38);
  FUN_14023423e(param_1 + 5,&local_38);
  *(undefined4 *)(param_1 + 7) = 0;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  FUN_144a5dc74(&local_38);
  FUN_14023423e(param_1 + 8,&local_38);
  *(undefined4 *)(param_1 + 10) = 0;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  FUN_140056680(&local_38,&DAT_149dfb77a);
  param_1[0xb] = local_38;
  *(undefined4 *)(param_1 + 0xc) = local_30;
  *(undefined4 *)((longlong)param_1 + 100) = local_2c;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e013e FUN_1456e013e body=266 status=ok
// SIG undefined FUN_1456e013e(void)

undefined8 * FUN_1456e013e(undefined8 *param_1)

{
  FUN_1456e031e();
  *param_1 = &PTR_FUN_14b8183a0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_1456e02b0(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_1456e0248(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_1400b22c2(param_1 + 0x40,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0x42) = 1;
  return param_1;
}



// FUNCTION 1456e0248 FUN_1456e0248 body=103 status=ok
// SIG undefined FUN_1456e0248(void)

longlong * FUN_1456e0248(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[2] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 3) = (int)plVar2[1];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xc0 | 0x38;
  return param_1;
}



// FUNCTION 1456e02b0 FUN_1456e02b0 body=109 status=ok
// SIG undefined FUN_1456e02b0(void)

longlong FUN_1456e02b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x10) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x20) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x28) = (int)plVar2[1];
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}



// FUNCTION 1456e031e FUN_1456e031e body=151 status=ok
// SIG undefined FUN_1456e031e(void)

undefined8 * FUN_1456e031e(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = &PTR_FUN_14b473650;
  FUN_1400b22c2(param_1 + 1,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 3,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 5,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 7,&DAT_149e02088);
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xe) = *param_2;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 1456e03b6 FUN_1456e03b6 body=357 status=ok
// SIG undefined FUN_1456e03b6(void)

longlong * FUN_1456e03b6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 2) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[3] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 4) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(undefined8 *)((longlong)param_1 + 0x91) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x38] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x39] = 0xf;
  *(undefined2 *)(param_1 + 0x3a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  return param_1;
}



// FUNCTION 1456e051c FUN_1456e051c body=771 status=ok
// SIG undefined FUN_1456e051c(void)

undefined8 * FUN_1456e051c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140d8e6ac();
  *param_1 = &PTR_FUN_14b9a5ec0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x88) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x444) = uVar1;
  *(undefined4 *)(param_1 + 0x89) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44c) = uVar3;
  param_1[0x8a] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x8d] = local_50;
  *(undefined4 *)(param_1 + 0x8e) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x474) = local_44;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  FUN_140056680(&local_50,&DAT_149e25dfc);
  param_1[0x90] = local_50;
  *(undefined4 *)(param_1 + 0x91) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x48c) = local_44;
  *(undefined4 *)(param_1 + 0x92) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x93] = local_50;
  *(undefined4 *)(param_1 + 0x94) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = local_44;
  *(undefined4 *)(param_1 + 0x95) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x96] = local_50;
  *(undefined4 *)(param_1 + 0x97) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = local_44;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x52c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0xaa] = local_50;
  *(undefined4 *)(param_1 + 0xab) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x55c) = local_44;
  *(undefined4 *)(param_1 + 0xac) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0xad] = local_50;
  *(undefined4 *)(param_1 + 0xae) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x574) = local_44;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xbe] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  FUN_1446f470e(&local_50,&DAT_149dfb77a,1);
  param_1[0xc4] = local_50;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e0820 FUN_1456e0820 body=394 status=ok
// SIG undefined FUN_1456e0820(void)

undefined8 * FUN_1456e0820(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1458ba15e(param_1 + 3);
  plVar5 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar5;
  param_1[0x10] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x11) = (int)plVar5[1];
  *(undefined4 *)(param_1 + 0x12) = 0;
  uVar4 = DAT_14c846328._4_4_;
  uVar3 = (undefined4)DAT_14c846328;
  uVar2 = DAT_14c846320._4_4_;
  *(undefined4 *)(param_1 + 0x13) = (undefined4)DAT_14c846320;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar4;
  *(undefined4 *)(param_1 + 0x15) = 0;
  FUN_1400b22c2(&local_38,"#FFFFFF");
  param_1[0x16] = local_38;
  *(undefined4 *)(param_1 + 0x17) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xbc) = local_2c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  FUN_1400b22c2(&local_38,"#FFFFFF");
  param_1[0x1a] = local_38;
  *(undefined4 *)(param_1 + 0x1b) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xdc) = local_2c;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  FUN_1400b22c2(&local_38,"#000000");
  param_1[0x1e] = local_38;
  *(undefined4 *)(param_1 + 0x1f) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xfc) = local_2c;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e09ac FUN_1456e09ac body=471 status=ok
// SIG undefined FUN_1456e09ac(void)

undefined1 * FUN_1456e09ac(undefined1 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x28] = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x80] = 0;
  *(undefined8 *)(param_1 + 0x84) = 0x100000000;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0x99) = 0;
  *(undefined8 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  param_1[0xc0] = 0xff;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  FUN_1400b22c2(&local_40,&DAT_149e02088);
  *(undefined8 *)(param_1 + 0x158) = local_40;
  *(undefined4 *)(param_1 + 0x160) = local_38;
  *(undefined4 *)(param_1 + 0x164) = local_34;
  *(undefined4 *)(param_1 + 0x168) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x170) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x178) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 0x180) = 0;
  param_1[0x1a0] = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e0b84 FUN_1456e0b84 body=541 status=ok
// SIG undefined FUN_1456e0b84(void)

undefined8 * FUN_1456e0b84(undefined8 *param_1,longlong param_2)

{
  FUN_1456e1024();
  *param_1 = &PTR_FUN_14b8183a0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  FUN_1456e0e8a(param_1 + 0x17,param_2 + 0xb8);
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_1456e02b0(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_1456e0ee4(param_1 + 0x1b,param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x120);
  FUN_1456e0248(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  FUN_1456e0da2(param_1 + 0x25,param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x170);
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x178);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  FUN_1456e0fa6(param_1 + 0x30,param_2 + 0x180);
  param_1[0x3a] = 0;
  param_1[0x3a] = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_2 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined8 *)(param_2 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x1e0);
  param_1[0x3d] = 0;
  param_1[0x3d] = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined8 *)(param_2 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)(param_2 + 500);
  *(undefined8 *)(param_2 + 0x1f0) = 0;
  param_1[0x3f] = *(undefined8 *)(param_2 + 0x1f8);
  param_1[0x40] = 0;
  param_1[0x40] = *(undefined8 *)(param_2 + 0x200);
  *(undefined8 *)(param_2 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)((longlong)param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined8 *)(param_2 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x210);
  return param_1;
}



// FUNCTION 1456e0da2 FUN_1456e0da2 body=72 status=ok
// SIG undefined FUN_1456e0da2(void)

longlong FUN_1456e0da2(longlong param_1,longlong param_2)

{
  FUN_140008f88();
  FUN_140008f88(param_1 + 0x10,param_2 + 0x10);
  FUN_1456e0dea(param_1 + 0x20,param_2 + 0x20);
  FUN_1456e0e3a(param_1 + 0x30,param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 1456e0dea FUN_1456e0dea body=80 status=ok
// SIG undefined FUN_1456e0dea(void)

longlong * FUN_1456e0dea(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1407ddd8e(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1456e0e3a FUN_1456e0e3a body=80 status=ok
// SIG undefined FUN_1456e0e3a(void)

longlong * FUN_1456e0e3a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14594221d(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1456e0e8a FUN_1456e0e8a body=90 status=ok
// SIG undefined FUN_1456e0e8a(void)

undefined8 * FUN_1456e0e8a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148c4f7a4(param_1,iVar1,0);
    FUN_148c4f813(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1456e0ee4 FUN_1456e0ee4 body=114 status=ok
// SIG undefined FUN_1456e0ee4(void)

longlong * FUN_1456e0ee4(longlong *param_1,longlong *param_2)

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
  }
  FUN_140008f88(param_1 + 2,param_2 + 2);
  FUN_140008f88(param_1 + 4,param_2 + 4);
  FUN_1456e0f56(param_1 + 6,param_2 + 6);
  *(int *)(param_1 + 8) = (int)param_2[8];
  return param_1;
}



// FUNCTION 1456e0f56 FUN_1456e0f56 body=80 status=ok
// SIG undefined FUN_1456e0f56(void)

longlong * FUN_1456e0f56(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1407ddd26(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1456e0fa6 FUN_1456e0fa6 body=125 status=ok
// SIG undefined FUN_1456e0fa6(void)

undefined8 * FUN_1456e0fa6(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1456e111c();
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



// FUNCTION 1456e1024 FUN_1456e1024 body=247 status=ok
// SIG undefined FUN_1456e1024(void)

void FUN_1456e1024(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_14b473650;
  param_1[1] = 0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[3] = 0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x20) = 0;
  param_1[5] = 0;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_2 + 0x30) = 0;
  param_1[7] = 0;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = uVar1;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  uVar7 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = uVar7;
  param_1[0x12] = uVar5;
  param_1[0x13] = uVar6;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar4;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar2;
  return;
}



// FUNCTION 1456e111c FUN_1456e111c body=433 status=ok
// SIG undefined FUN_1456e111c(void)

longlong * FUN_1456e111c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar5;
          FUN_1467c0730((longlong)iVar6 * 0x28 + *local_78);
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar6 = local_60._4_4_;
          uVar5 = local_60;
        } while (local_60._4_4_ != iVar7);
      } while ((local_68 != plVar1) || (local_78 != param_1));
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
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1456e12ce FUN_1456e12ce body=995 status=ok
// SIG undefined FUN_1456e12ce(void)

undefined8 * FUN_1456e12ce(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  longlong *local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  memset(param_1,0,0xb0);
  FUN_1408f3f9e(param_1);
  *param_1 = &PTR_FUN_14b8276b0;
  FUN_1413526be(param_1 + 0x16);
  *(undefined4 *)(param_1 + 99) = 0;
  FUN_1413526be(param_1 + 100);
  *(undefined4 *)(param_1 + 0xb1) = 0;
  FUN_1413526be(param_1 + 0xb2);
  *(undefined4 *)(param_1 + 0xff) = 0;
  FUN_1456e1756(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x10d) = 0;
  puVar1 = param_1 + 0x10e;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  FUN_1456e16b2(puVar1);
  *(undefined4 *)(param_1 + 0x117) = 0;
  puVar2 = param_1 + 0x118;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  FUN_1456e16b2(puVar2);
  *(undefined4 *)(param_1 + 0x121) = 0;
  FUN_1456e170c(param_1 + 0x122);
  *(undefined4 *)(param_1 + 299) = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  *(undefined4 *)(param_1 + 0x12e) = 0;
  FUN_144a5dc74(param_1 + 0x12f);
  *(undefined4 *)(param_1 + 0x131) = 0;
  FUN_144a5dc74(param_1 + 0x132);
  *(undefined4 *)(param_1 + 0x134) = 0;
  FUN_144a5dc74(param_1 + 0x135);
  *(undefined4 *)(param_1 + 0x137) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c4) = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9cc) = 0;
  *(undefined1 *)(param_1 + 0x13a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9d4) = 0;
  *(undefined1 *)(param_1 + 0x13b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9dc) = 0;
  *(undefined1 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9e4) = 0;
  *(undefined1 *)(param_1 + 0x13d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ec) = 0xffffffff00000000;
  *(undefined8 *)((longlong)param_1 + 0x9f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa04) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0c) = 0;
  *(undefined2 *)(param_1 + 0x143) = 1;
  *(int *)(param_1 + 99) = *(int *)(param_1 + 99) + 1;
  FUN_1401e0130(param_1 + 0x16);
  *(int *)(param_1 + 0xb1) = *(int *)(param_1 + 0xb1) + 1;
  FUN_1401e0130(param_1 + 100);
  *(int *)(param_1 + 0xff) = *(int *)(param_1 + 0xff) + 1;
  FUN_1401e0130(param_1 + 0xb2);
  *(int *)(param_1 + 0x117) = *(int *)(param_1 + 0x117) + 1;
  FUN_14020fad6(puVar1,&DAT_14ae66bec);
  *(int *)(param_1 + 0x117) = *(int *)(param_1 + 0x117) + 1;
  FUN_1456e1820(puVar1,0);
  *(int *)(param_1 + 0x121) = *(int *)(param_1 + 0x121) + 1;
  FUN_14020fad6(puVar2,L"eridium");
  *(int *)(param_1 + 0x121) = *(int *)(param_1 + 0x121) + 1;
  FUN_1456e1820(puVar2,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"FirmwareTransferTitle",0);
  FUN_1410d1eba(local_98,&local_88);
  uVar3 = FUN_1447a1f4a(local_98);
  *(int *)(param_1 + 299) = *(int *)(param_1 + 299) + 1;
  FUN_144a787a6(param_1 + 0x122,uVar3);
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  *(int *)(param_1 + 299) = *(int *)(param_1 + 299) + 1;
  *(byte *)(param_1 + 0x12a) = *(byte *)(param_1 + 0x12a) | 2;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"TransferInfoBodyTitle",0);
  FUN_1410d1eba(local_98,&local_88);
  uVar3 = FUN_1447a1f4a(local_98);
  *(int *)(param_1 + 299) = *(int *)(param_1 + 299) + 1;
  FUN_144a787a6(param_1 + 0x126,uVar3);
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"FirmwareTransferInfoBody",0);
  FUN_1410d1eba(local_98,&local_88);
  uVar3 = FUN_1447a1f4a(local_98);
  *(int *)(param_1 + 299) = *(int *)(param_1 + 299) + 1;
  FUN_144a787a6(param_1 + 0x128,uVar3);
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e16b2 FUN_1456e16b2 body=89 status=ok
// SIG undefined FUN_1456e16b2(void)

longlong FUN_1456e16b2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x10,&DAT_149dfb77a);
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x20) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x28) = (int)plVar2[1];
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return param_1;
}



// FUNCTION 1456e170c FUN_1456e170c body=74 status=ok
// SIG undefined FUN_1456e170c(void)

longlong FUN_1456e170c(longlong param_1)

{
  FUN_140056680(param_1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x10,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x20,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x30,&DAT_149dfb77a);
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xf0;
  return param_1;
}



// FUNCTION 1456e1756 FUN_1456e1756 body=201 status=ok
// SIG undefined FUN_1456e1756(void)

longlong FUN_1456e1756(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(param_1,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400b22c2(local_30,"InvalidName");
  FUN_140233b1a(param_1 + 0x30,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_30,"InvalidRank");
  FUN_140233b1a(param_1 + 0x40,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(param_1 + 0x50,&DAT_149dfb77a);
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfc;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e1820 FUN_1456e1820 body=241 status=ok
// SIG undefined FUN_1456e1820(void)

void FUN_1456e1820(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) && (*(char *)(param_1 + 8) != '\0')) {
    pwVar5 = L"inactive";
  }
  else {
    if (param_2 <= (longlong)param_1[7]) {
      iVar3 = *(int *)(param_1 + 1) + -1;
      if (*(int *)(param_1 + 1) == 0) {
        iVar3 = 0;
      }
      FUN_1402980a2(param_1 + 2,*param_1,iVar3);
      goto LAB_1456e186f;
    }
    pwVar5 = L"locked";
  }
  FUN_14020fad6(param_1 + 2,pwVar5);
LAB_1456e186f:
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1456e1912(local_30,param_2,0);
  FUN_140008f88(param_1 + 4,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  param_1[6] = param_2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e1912 FUN_1456e1912 body=22 status=ok
// SIG undefined FUN_1456e1912(void)

undefined8 FUN_1456e1912(undefined8 param_1)

{
  FUN_1456e1928();
  return param_1;
}



// FUNCTION 1456e1928 FUN_1456e1928 body=378 status=ok
// SIG undefined FUN_1456e1928(void)

longlong * FUN_1456e1928(longlong *param_1,ulonglong param_2,undefined4 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_78 [3];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_145c56324();
  puVar7 = (undefined8 *)*param_4;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  }
  lVar4 = (**(code **)(*(longlong *)*puVar7 + 0x80))();
  puVar5 = (undefined4 *)(lVar4 + 0x8c);
  if (param_3 != (undefined4 *)0x0) {
    puVar5 = param_3;
  }
  local_88 = local_78;
  local_78[0] = 0;
  local_78[1] = 0;
  local_48 = *(undefined8 *)(puVar5 + 4);
  local_58 = *puVar5;
  uStack_54 = puVar5[1];
  uStack_50 = *(ulonglong *)(puVar5 + 2);
  uVar6 = -param_2;
  if ((longlong)-param_2 < 0) {
    uVar6 = param_2;
  }
  FUN_14010d0dd(param_2 >> 0x3f,uVar6,lVar4);
  lVar4 = FUN_14001cc68(0x70,0x10);
  local_78[2] = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_88 = local_78 + 2;
  uStack_50 = param_2;
  FUN_1402349c6(lVar4,local_78,&local_58,param_3);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e1aa4 FUN_1456e1aa4 body=132 status=ok
// SIG undefined FUN_1456e1aa4(void)

void FUN_1456e1aa4(longlong param_1,int param_2)

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



// FUNCTION 1456e1b2a FUN_1456e1b2a body=234 status=ok
// SIG undefined FUN_1456e1b2a(void)

undefined4 * FUN_1456e1b2a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
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
  
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 2);
  *(longlong *)(param_1 + 2) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  uVar8 = param_2[8];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  uVar12 = param_2[0xd];
  uVar13 = param_2[0xe];
  uVar14 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar12;
  param_1[0xe] = uVar13;
  param_1[0xf] = uVar14;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = param_2[0x12];
  pvVar3 = *(void **)(param_2 + 0x10);
  param_1[0x12] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x13] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0x10,iVar1,0);
    memcpy(*(void **)(param_1 + 0x10),pvVar3,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar1 = param_2[0x16];
  pvVar3 = *(void **)(param_2 + 0x14);
  param_1[0x16] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x17] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0x14,iVar1,0);
    memcpy(*(void **)(param_1 + 0x14),pvVar3,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1456e1c14 FUN_1456e1c14 body=133 status=ok
// SIG undefined FUN_1456e1c14(void)

void FUN_1456e1c14(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x7c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x1c,0);
      iVar4 = (int)(uVar3 / 0x1c);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x7c) = iVar5;
    FUN_14794ae5a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1456e1c9a FUN_1456e1c9a body=1317 status=ok
// SIG undefined FUN_1456e1c9a(void)

void FUN_1456e1c9a(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_1a8 [40];
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  longlong *local_178 [2];
  undefined8 local_168;
  longlong *local_160;
  longlong local_158 [2];
  longlong *local_148 [2];
  longlong *local_138 [2];
  longlong *local_128 [2];
  undefined1 local_118 [8];
  undefined1 local_110 [48];
  undefined8 local_e0;
  longlong *local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  wchar_t **local_b0;
  ulonglong *local_a8;
  wchar_t *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  wchar_t *local_90;
  longlong *local_88;
  longlong *local_80 [2];
  ulonglong local_70 [6];
  
  local_70[0] = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *param_3 = 0;
  if (*(char *)(param_1 + 0x1c4) == '\0') goto switchD_1456e1d6b_caseD_3;
  switch(*(char *)(param_1 + 0x1c4)) {
  case '\x01':
  case '\x03':
switchD_1456e1d6b_caseD_3:
    break;
  case '\x02':
    break;
  case '\x04':
    fVar5 = 1.0;
    if ((0 < *(int *)(param_1 + 0x274)) && (0 < *(int *)(param_1 + 0x278))) {
      fVar6 = (float)(int)((ulonglong)param_2 >> 0x20) / (float)*(int *)(param_1 + 0x278);
      fVar5 = (float)(int)param_2 / (float)*(int *)(param_1 + 0x274);
      if (fVar6 <= fVar5) {
        fVar5 = fVar6;
      }
    }
LAB_1456e1db9:
    if ((local_70[0] ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar5);
  case '\x05':
    plVar3 = *(longlong **)(param_1 + 0x290);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_147d8a970(param_1 + 0x1c8);
      if ((plVar3 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
        *(longlong **)(param_1 + 0x290) = plVar3;
        if (plVar3 == (longlong *)0x0) {
          FUN_1446ddc76(local_118,"MapCheck",1);
          FUN_14276766e(local_110,local_118);
          FUN_144a5dc74(local_128);
          FUN_142767974(local_110,&local_e0,local_128);
          FUN_14475cc44(param_1 + 0x1c8,local_158);
          FUN_140233b1a(local_148,local_158);
          local_90 = L"CustomScalingRule_NotFound";
          local_88._0_4_ = 0x1a;
          FUN_1446e940c(local_17c,&local_90);
          local_90 = L"Engine";
          local_88 = (longlong *)CONCAT44(local_88._4_4_,6);
          FUN_1446e940c(local_180,&local_90);
          FUN_140208bae(local_178,local_180,local_17c,
                        L"Project Settings - User Interface Custom Scaling Rule \'{0}\' could not be found."
                       );
          FUN_14023409e(&local_168,local_178,1);
          local_90 = (wchar_t *)CONCAT44(local_90._4_4_,4);
          FUN_14023423e(local_80,local_148);
          local_a8 = local_70;
          local_b0 = &local_90;
          FUN_14010d304(&local_a0);
          local_c0 = local_168;
          local_b8 = local_160;
          if (local_160 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_160 + 1) = (int)local_160[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_138,&local_c0,&local_a0);
          FUN_14007f2db(local_a0,local_98);
          if (local_a0 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (local_80[0] != (longlong *)0x0) {
            (**(code **)(*local_80[0] + 0x10))();
          }
          if (local_160 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_160 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_160)(local_160);
              LOCK();
              piVar1 = (int *)((longlong)local_160 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_160 + 0x10))(local_160);
              }
            }
          }
          if (local_148[0] != (longlong *)0x0) {
            (**(code **)(*local_148[0] + 0x10))();
          }
          FUN_1467eb2e4(&local_a0,local_138,1);
          local_88 = (longlong *)CONCAT44(uStack_94,local_98);
          local_90 = local_a0;
          if (local_88 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_88 + 1) = (int)local_88[1] + 1;
            UNLOCK();
          }
          FUN_1467eb24e(local_e0,local_d0,&local_90);
          if (local_c8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_c8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_c8)(local_c8);
              LOCK();
              piVar1 = (int *)((longlong)local_c8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_c8 + 0x10))(local_c8);
              }
            }
          }
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_88 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar1 = (int *)((longlong)local_88 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_88 + 0x10))(local_88);
              }
            }
          }
          plVar3 = (longlong *)CONCAT44(uStack_94,local_98);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar3 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (local_138[0] != (longlong *)0x0) {
            (**(code **)(*local_138[0] + 0x10))();
          }
          if (local_178[0] != (longlong *)0x0) {
            (**(code **)(*local_178[0] + 0x10))();
          }
          if (local_158[0] != 0) {
            FUN_1400020a8();
          }
          if (local_d8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_d8 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_d8)(local_d8);
              LOCK();
              piVar1 = (int *)((longlong)local_d8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_d8 + 0x10))(local_d8);
              }
            }
          }
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
          FUN_1427678c0(local_110);
          *param_3 = 1;
          fVar5 = 1.0;
          goto LAB_1456e1db9;
        }
      }
      else {
        FUN_1456cec3c(plVar3);
        *(longlong **)(param_1 + 0x290) = plVar3;
      }
    }
    if (*(longlong *)(param_1 + 0x298) == 0) {
      lVar4 = plVar3[0x22];
      if (lVar4 == 0) {
        (**(code **)(*plVar3 + 1000))(plVar3);
        lVar4 = plVar3[0x22];
      }
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      *(longlong *)(param_1 + 0x298) = lVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70[0] ^ (ulonglong)auStack_1a8);
  }
  FUN_1401e2d36(param_1 + 0x1e8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70[0] ^ (ulonglong)auStack_1a8);
}



// FUNCTION 1456e2220 FUN_1456e2220 body=1359 status=ok
// SIG undefined FUN_1456e2220(void)

void FUN_1456e2220(longlong *param_1,longlong param_2,ushort *param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 uVar19;
  
  uVar6 = (uint)*param_3 & *(uint *)(param_2 + 0x10);
  if (uVar6 != 0) {
    dVar5 = (double)(float)DAT_14c866ff8;
    do {
      uVar4 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      uVar11 = (ulonglong)uVar4;
      lVar12 = *(longlong *)(param_4 + uVar11 * 8);
      lVar8 = *(longlong *)(param_2 + 0x58);
      lVar14 = *(longlong *)(lVar12 + 0x10);
      iVar16 = *(int *)(lVar12 + 0x18);
      if ((lVar8 != 0) && (uVar10 = (ulonglong)*(uint *)(lVar8 + uVar11 * 4), uVar10 != 0)) {
        puVar13 = (uint *)(lVar8 + uVar10 * 4);
        uVar7 = *puVar13;
        do {
          puVar13 = puVar13 + 1;
          uVar9 = uVar7 >> 8 & 0xffff;
          if ((int)uVar9 < iVar16) {
            plVar18 = *(longlong **)(lVar14 + (ulonglong)uVar9 * 8);
            if (((double)plVar18[0xb] != dVar5) || (NAN((double)plVar18[0xb]) || NAN(dVar5))) {
              plVar18[0xb] = (longlong)dVar5;
            }
            if (plVar18 == (longlong *)0x0) {
              uVar19 = 0;
            }
            else {
              uVar9 = *(uint *)(param_1 + 2);
              lVar8 = (**(code **)(*plVar18 + 8))(plVar18);
              if ((*(byte *)(lVar8 + 2) & 4) != 0) {
                plVar18 = (longlong *)**(longlong **)(plVar18[0x48] + 0xa0);
              }
              lVar8 = (**(code **)(*plVar18 + 0x30))(plVar18);
              if ((lVar8 == 0) ||
                 (lVar8 = *(longlong *)(lVar8 + 0x128 + (ulonglong)uVar9 * 8), lVar8 == 0)) {
                uVar19 = 0;
              }
              else {
                uVar19 = *(undefined8 *)(lVar8 + 0x168);
              }
            }
            if (*(char *)((longlong)param_1 + 0x15) == '\x01') {
              lVar8 = *param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x14) * 0x10;
              iVar3 = *(int *)(lVar8 + 0x3680);
              uVar7 = iVar3 + 1;
              *(uint *)(lVar8 + 0x3680) = uVar7;
              if (*(uint *)(lVar8 + 0x3684) < uVar7) {
                FUN_14736f572((longlong *)(lVar8 + 0x3678));
              }
              *(undefined8 *)(*(longlong *)(lVar8 + 0x3678) + (longlong)iVar3 * 8) = uVar19;
            }
            else {
              FUN_144b1b15c(*param_1 + 0x390,*(undefined1 *)((longlong)param_1 + 0x14),uVar19,
                            uVar7 & 0xff);
            }
          }
          uVar7 = *puVar13;
        } while (uVar7 >> 0x18 == uVar4);
        lVar14 = *(longlong *)(lVar12 + 0x10);
        iVar16 = *(int *)(lVar12 + 0x18);
      }
      lVar8 = *(longlong *)(param_2 + 0x18);
      if ((lVar8 != 0) && (uVar10 = (ulonglong)*(uint *)(lVar8 + uVar11 * 4), uVar10 != 0)) {
        puVar13 = (uint *)(lVar8 + uVar10 * 4);
        uVar7 = *puVar13;
        do {
          puVar13 = puVar13 + 1;
          uVar9 = uVar7 >> 8 & 0xffff;
          if ((int)uVar9 < iVar16) {
            lVar8 = *(longlong *)(lVar14 + (ulonglong)uVar9 * 8);
            if (lVar8 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = *(longlong *)(lVar8 + 200 + (ulonglong)*(uint *)(param_1 + 2) * 8);
            }
            if (*(char *)((longlong)param_1 + 0x15) == '\x01') {
              lVar15 = lVar8 + 0x28;
              if (lVar8 == 0) {
                lVar15 = 0;
              }
              lVar8 = *param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x14) * 0x10;
              iVar3 = *(int *)(lVar8 + 0x3680);
              uVar7 = iVar3 + 1;
              *(uint *)(lVar8 + 0x3680) = uVar7;
              if (*(uint *)(lVar8 + 0x3684) < uVar7) {
                FUN_14736f572((longlong *)(lVar8 + 0x3678));
              }
              *(longlong *)(*(longlong *)(lVar8 + 0x3678) + (longlong)iVar3 * 8) = lVar15;
            }
            else {
              lVar15 = lVar8 + 0x28;
              if (lVar8 == 0) {
                lVar15 = 0;
              }
              FUN_144b1b15c(*param_1 + 0x390,
                            CONCAT71((int7)((ulonglong)lVar8 >> 8),
                                     *(undefined1 *)((longlong)param_1 + 0x14)),lVar15,uVar7 & 0xff)
              ;
            }
          }
          uVar7 = *puVar13;
        } while (uVar7 >> 0x18 == uVar4);
        lVar14 = *(longlong *)(lVar12 + 0x10);
        iVar16 = *(int *)(lVar12 + 0x18);
      }
      lVar8 = *(longlong *)(param_2 + 0x68);
      if ((lVar8 != 0) && (uVar10 = (ulonglong)*(uint *)(lVar8 + uVar11 * 4), uVar10 != 0)) {
        puVar13 = (uint *)(lVar8 + uVar10 * 4);
        uVar7 = *puVar13;
        do {
          puVar13 = puVar13 + 1;
          uVar9 = uVar7 >> 8 & 0xffff;
          if ((int)uVar9 < iVar16) {
            FUN_1462628c0(param_1,*(undefined8 *)(lVar14 + (ulonglong)uVar9 * 8),uVar7 & 0xff);
          }
          uVar7 = *puVar13;
        } while (uVar7 >> 0x18 == uVar4);
        lVar14 = *(longlong *)(lVar12 + 0x10);
        iVar16 = *(int *)(lVar12 + 0x18);
      }
      lVar8 = *(longlong *)(param_2 + 0x28);
      if ((lVar8 != 0) && (uVar10 = (ulonglong)*(uint *)(lVar8 + uVar11 * 4), uVar10 != 0)) {
        puVar13 = (uint *)(lVar8 + uVar10 * 4);
        uVar7 = *puVar13;
        do {
          puVar13 = puVar13 + 1;
          uVar9 = uVar7 >> 8 & 0xffff;
          if ((int)uVar9 < iVar16) {
            lVar8 = *(longlong *)(lVar14 + (ulonglong)uVar9 * 8);
            if (lVar8 == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)*(uint *)(param_1 + 2) * 8);
            }
            if (*(char *)((longlong)param_1 + 0x16) == '\0') {
              lVar15 = *param_1;
              bVar2 = *(byte *)((longlong)param_1 + 0x14);
              lVar17 = (ulonglong)bVar2 * 0x100 + lVar15;
              if (*(longlong *)(lVar17 + 0x2ff8 + (ulonglong)(uVar7 & 0xff) * 8) != lVar8) {
                *(longlong *)(lVar17 + (ulonglong)(uVar7 & 0xff) * 8 + 0x2ff8) = lVar8;
                puVar1 = (uint *)(lVar15 + 0x2fe0 + (ulonglong)bVar2 * 4);
                *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
              }
            }
          }
          uVar7 = *puVar13;
        } while (uVar7 >> 0x18 == uVar4);
        lVar14 = *(longlong *)(lVar12 + 0x10);
        iVar16 = *(int *)(lVar12 + 0x18);
      }
      lVar12 = *(longlong *)(param_2 + 0x38);
      if ((lVar12 != 0) && (uVar11 = (ulonglong)*(uint *)(lVar12 + uVar11 * 4), uVar11 != 0)) {
        puVar13 = (uint *)(lVar12 + uVar11 * 4);
        uVar7 = *puVar13;
        do {
          puVar13 = puVar13 + 1;
          uVar9 = uVar7 >> 8 & 0xffff;
          if ((int)uVar9 < iVar16) {
            lVar12 = *(longlong *)(lVar14 + (ulonglong)uVar9 * 8);
            if (lVar12 == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = *(longlong *)(lVar12 + 200 + (ulonglong)*(uint *)(param_1 + 2) * 8);
            }
            if (*(char *)((longlong)param_1 + 0x15) == '\x01') {
              lVar8 = lVar12 + 0x28;
              if (lVar12 == 0) {
                lVar8 = 0;
              }
              lVar12 = *param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x14) * 0x10;
              iVar3 = *(int *)(lVar12 + 0x36e0);
              uVar7 = iVar3 + 1;
              *(uint *)(lVar12 + 0x36e0) = uVar7;
              if (*(uint *)(lVar12 + 0x36e4) < uVar7) {
                FUN_14736f5f8((longlong *)(lVar12 + 0x36d8));
              }
              *(longlong *)(*(longlong *)(lVar12 + 0x36d8) + (longlong)iVar3 * 8) = lVar8;
            }
            else {
              lVar8 = lVar12 + 0x28;
              if (lVar12 == 0) {
                lVar8 = 0;
              }
              FUN_1431714f6(*param_1 + 0x390,
                            CONCAT71((int7)((ulonglong)lVar12 >> 8),
                                     *(undefined1 *)((longlong)param_1 + 0x14)),uVar7 & 0xff,lVar8,
                            0xffffffff);
            }
          }
          uVar7 = *puVar13;
        } while (uVar7 >> 0x18 == uVar4);
      }
      uVar6 = uVar6 - 1 & uVar6;
    } while (uVar6 != 0);
  }
  *param_3 = 0;
  return;
}



// FUNCTION 1456e2770 FUN_1456e2770 body=250 status=ok
// SIG undefined FUN_1456e2770(void)

void FUN_1456e2770(longlong param_1,undefined4 *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x30) == 0) || (lVar2 = FUN_1447210f0(), lVar2 == 0)) {
    return;
  }
  dVar1 = *(double *)(lVar2 + 0x6d0);
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 == 0) {
LAB_1456e2838:
    *(undefined1 *)(param_2 + 7) = 1;
    *param_2 = param_2[4];
    param_2[1] = (float)dVar1;
    param_2[2] = 0;
    if (*(char *)((longlong)param_2 + 0x1d) == '\0') goto LAB_1456e281d;
  }
  else {
    lVar3 = FUN_144a2f878();
    if (((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         != lVar3 + 0x30)) || (lVar2 = FUN_1407afa82(lVar2), lVar2 == 0)) goto LAB_1456e2838;
    FUN_1456e286a(lVar2);
    *(undefined1 *)(param_2 + 7) = 1;
    *param_2 = param_2[4];
    param_2[1] = (float)dVar1;
    param_2[2] = 0;
    if (*(char *)((longlong)param_2 + 0x1d) == '\0') goto LAB_1456e281d;
    FUN_1456e2876(lVar2,0);
  }
  *(undefined1 *)((longlong)param_2 + 0x1d) = 0;
LAB_1456e281d:
  FUN_1447f69b6(param_1 + 0x128);
  return;
}



// FUNCTION 1456e286a FUN_1456e286a body=12 status=ok
// SIG undefined FUN_1456e286a(void)

void FUN_1456e286a(longlong param_1)

{
  FUN_1456e2a36(param_1,param_1 + 0xa50);
  return;
}



// FUNCTION 1456e2876 FUN_1456e2876 body=191 status=ok
// SIG undefined FUN_1456e2876(void)

void FUN_1456e2876(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < *(int *)(param_1 + 0x98c)) {
    iVar1 = *(int *)(param_1 + 0x98c) + -1;
    *(int *)(param_1 + 0x98c) = iVar1;
    FUN_1456e2948(param_1 + 0x910,iVar1,param_2);
    FUN_1456e298a(param_1 + 0x920,*(undefined4 *)(param_1 + 0x98c),param_2);
    if (((*(longlong *)(param_1 + 0xb20) != 0) &&
        (*(char *)(*(longlong *)(param_1 + 0xb20) + 0x178) == '\x03')) &&
       (*(int *)(param_1 + 0x98c) == 0)) {
      local_28 = 0;
      FUN_14485c47a(&local_28,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e2948 FUN_1456e2948 body=65 status=ok
// SIG undefined FUN_1456e2948(void)

void FUN_1456e2948(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_3;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e298a FUN_1456e298a body=171 status=ok
// SIG undefined FUN_1456e298a(void)

void FUN_1456e298a(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1456e2a1f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1456e2a1f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1456e2a36 FUN_1456e2a36 body=431 status=ok
// SIG undefined FUN_1456e2a36(void)

void FUN_1456e2a36(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong **)(param_1 + 0xb20) == (longlong *)0x0) goto LAB_1456e2b02;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x700))();
  if (cVar3 == '\0') {
    local_60[0] = *(longlong *)(param_2 + 0x28);
    FUN_1400021e4(local_60,&local_38);
    cVar3 = FUN_1456e2be6(param_2 + 0x48);
    if (cVar3 == '\0') {
      local_50 = 0;
    }
    else {
      FUN_1438a4f78(param_2 + 0x48,&local_50);
    }
    local_28 = *(undefined8 *)(param_2 + 0x58);
    FUN_1400021e4(&local_28,local_60);
    lVar4 = FUN_1456e2bea(*(undefined8 *)(param_1 + 0xb20));
    if (lVar4 != 0) {
      FUN_1456e2c36(lVar4,&local_38,local_60,local_50);
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    goto LAB_1456e2b02;
  }
  cVar3 = FUN_1404fa388(param_2 + 0x80);
  if (cVar3 == '\0') goto LAB_1456e2b02;
  if (*(char *)(param_2 + 0x79) == '\x01') {
    cVar3 = FUN_144a87d38(param_2 + 0x48);
    if (cVar3 == '\0') goto LAB_1456e2bcd;
    FUN_14026e798(&local_38,*(undefined8 *)(param_1 + 0xb20));
    if (local_38 == 0) {
      uVar5 = 0;
    }
    else {
      local_48 = local_38;
      local_40 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      uVar5 = FUN_140206ee8(param_2 + 0x48,&local_48);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  else {
LAB_1456e2bcd:
    uVar5 = 0;
  }
  FUN_140bd765a(param_2 + 0x80,uVar5,0);
LAB_1456e2b02:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e2be6 FUN_1456e2be6 body=3 status=ok
// SIG undefined FUN_1456e2be6(void)

undefined1 FUN_1456e2be6(undefined1 *param_1)

{
  return *param_1;
}



// FUNCTION 1456e2bea FUN_1456e2bea body=75 status=ok
// SIG undefined FUN_1456e2bea(void)

undefined8 FUN_1456e2bea(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x5d8))();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_140f98f3c(lVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1456e2c36 FUN_1456e2c36 body=309 status=ok
// SIG undefined FUN_1456e2c36(void)

void FUN_1456e2c36(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_2d8 [39];
  undefined1 local_2b1;
  longlong local_2b0;
  undefined1 local_2a8 [312];
  longlong local_170;
  ulonglong *local_168;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_2b0 = param_4;
  FUN_1413dbc9a(&local_170);
  FUN_140f9916c(param_1,local_2a8,5);
  FUN_140f991ea(&local_170,local_2a8);
  FUN_1449daebe(local_2a8);
  local_2b1 = param_4 != 0;
  puVar1 = (undefined1 *)*local_168 + 1;
  if ((undefined1 *)local_168[1] < puVar1) {
    (**(code **)(local_170 + 0x170))(&local_170,&local_2b1,1);
  }
  else {
    local_2b1 = *(undefined1 *)*local_168;
    *local_168 = (ulonglong)puVar1;
  }
  FUN_14021219d(&local_170,param_2);
  FUN_14021219d(&local_170,param_3);
  if (param_4 != 0) {
    FUN_1417154a0(&local_170,&local_2b0);
  }
  (**(code **)(*param_1 + 0x308))(param_1,local_2a8,&local_170,0);
  FUN_1449daebe(&local_170);
  if ((local_38 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e2d6c FUN_1456e2d6c body=226 status=ok
// SIG undefined FUN_1456e2d6c(void)

longlong * FUN_1456e2d6c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462be2ce;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e2e50 FUN_1456e2e50 body=130 status=ok
// SIG undefined FUN_1456e2e50(void)

undefined1 * FUN_1456e2e50(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DigistructDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471510a6;
}



// FUNCTION 1456e2ed2 FUN_1456e2ed2 body=138 status=ok
// SIG undefined FUN_1456e2ed2(void)

code * FUN_1456e2ed2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DigistructStencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456e2e50;
}



// FUNCTION 1456e2f5c FUN_1456e2f5c body=138 status=ok
// SIG undefined FUN_1456e2f5c(void)

code * FUN_1456e2f5c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DigistructDepthSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456e2ed2;
}



// FUNCTION 1456e2fe6 FUN_1456e2fe6 body=232 status=ok
// SIG undefined FUN_1456e2fe6(void)

longlong * FUN_1456e2fe6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar12 = FUN_1462c333e;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1456e30d3 FUN_1456e30d3 body=52 status=ok
// SIG undefined FUN_1456e30d3(void)

void FUN_1456e30d3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1456e3108(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1456e3108 FUN_1456e3108 body=109 status=ok
// SIG undefined FUN_1456e3108(void)

undefined8 * FUN_1456e3108(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  FUN_1401f3da4(param_1 + 1,param_2 + 1);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1456e31aa(param_1 + 4,iVar1,0);
    FUN_1456e3175(param_1[4],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1456e3175 FUN_1456e3175 body=52 status=ok
// SIG undefined FUN_1456e3175(void)

void FUN_1456e3175(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1456e31aa FUN_1456e31aa body=115 status=ok
// SIG undefined FUN_1456e31aa(void)

void FUN_1456e31aa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1456e321e FUN_1456e321e body=205 status=ok
// SIG undefined FUN_1456e321e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456e321e(void)

{
  if ((DAT_14c9ebeaf & 2) == 0) {
    DAT_14c9ebeaf = DAT_14c9ebeaf | 2;
    _DAT_14c9ebe50 = L"FDownsampleLightShaftsVertexShader";
    _DAT_14c9ebe68 = FUN_146826540;
    _DAT_14c9ebe70 = FUN_146825d77;
    _DAT_14c9ebe78 = FUN_146825fd6;
    _DAT_14c9ebe80 = FUN_1407e02ea;
    _DAT_14c9ebe88 = FUN_146826273;
    _DAT_14c9ebe60 = FUN_1471dbf04;
    _DAT_14c9ebea0 = 0xffffffff000000e0;
    _DAT_14c9ebea8 = 8;
    DAT_14c9ebeac = 0;
    _DAT_14c9ebe90 = &LAB_1471dbf2e;
    FUN_1456e32ec();
    FUN_1407e00cc(&DAT_14c9ebe48);
    return;
  }
  return;
}



// FUNCTION 1456e32ec FUN_1456e32ec body=123 status=ok
// SIG undefined FUN_1456e32ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456e32ec(void)

{
  _DAT_14c9f14c8 = L"BASE";
  DAT_14c9f14f2 = 4;
  _DAT_14c9f14d0 = FUN_140b35ae4();
  _DAT_14c9f14d8 = DAT_14c9ebe58;
  _DAT_14c9f14e0 = &LAB_14682652b;
  DAT_14c9ebe58 = &DAT_14c9f14c8;
  DAT_14c9ebead = DAT_14c9ebead + '\x01';
  _DAT_14c9f14e8 = 0x100000000;
  if (*(char *)(_DAT_14c9f14d0 + 100) != '\0') {
    DAT_14c9ebeae = DAT_14c9ebeae + '\x01';
  }
  return;
}



// FUNCTION 1456e3368 FUN_1456e3368 body=205 status=ok
// SIG undefined FUN_1456e3368(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456e3368(void)

{
  if ((DAT_14c9ebfd7 & 2) == 0) {
    DAT_14c9ebfd7 = DAT_14c9ebfd7 | 2;
    _DAT_14c9ebf78 = L"FDownsampleLightShaftsPixelShader";
    _DAT_14c9ebf90 = FUN_146826540;
    _DAT_14c9ebf98 = FUN_146825d77;
    _DAT_14c9ebfa0 = FUN_146825fd6;
    _DAT_14c9ebfa8 = FUN_1407e02ea;
    _DAT_14c9ebfb0 = FUN_146826273;
    _DAT_14c9ebf88 = FUN_1471dbfe2;
    _DAT_14c9ebfc8 = 0xffffffff000000e0;
    _DAT_14c9ebfd0 = 8;
    DAT_14c9ebfd4 = 0;
    _DAT_14c9ebfb8 = &LAB_1471dc00c;
    FUN_1456e3436();
    FUN_1407e00cc(&DAT_14c9ebf70);
    return;
  }
  return;
}



// FUNCTION 1456e3436 FUN_1456e3436 body=123 status=ok
// SIG undefined FUN_1456e3436(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456e3436(void)

{
  _DAT_14c9f14f8 = L"BASE";
  DAT_14c9f1522 = 4;
  _DAT_14c9f1500 = FUN_140b35ae4();
  _DAT_14c9f1508 = DAT_14c9ebf80;
  _DAT_14c9f1510 = &LAB_14682652b;
  DAT_14c9ebf80 = &DAT_14c9f14f8;
  DAT_14c9ebfd5 = DAT_14c9ebfd5 + '\x01';
  _DAT_14c9f1518 = 0x100000000;
  if (*(char *)(_DAT_14c9f1500 + 100) != '\0') {
    DAT_14c9ebfd6 = DAT_14c9ebfd6 + '\x01';
  }
  return;
}



// FUNCTION 1456e34b2 FUN_1456e34b2 body=205 status=ok
// SIG undefined FUN_1456e34b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456e34b2(void)

{
  if ((DAT_14c9ec0ff & 2) == 0) {
    DAT_14c9ec0ff = DAT_14c9ec0ff | 2;
    _DAT_14c9ec0a0 = L"FBlurLightShaftsPixelShader";
    _DAT_14c9ec0b8 = FUN_146826540;
    _DAT_14c9ec0c0 = FUN_146825d77;
    _DAT_14c9ec0c8 = FUN_146825fd6;
    _DAT_14c9ec0d0 = FUN_1407e02ea;
    _DAT_14c9ec0d8 = FUN_146826273;
    _DAT_14c9ec0b0 = FUN_1471dc0c0;
    _DAT_14c9ec0f0 = 0xffffffff000000e0;
    _DAT_14c9ec0f8 = 8;
    DAT_14c9ec0fc = 0;
    _DAT_14c9ec0e0 = &LAB_1471dc0ea;
    FUN_1456e3580();
    FUN_1407e00cc(&DAT_14c9ec098);
    return;
  }
  return;
}



// FUNCTION 1456e3580 FUN_1456e3580 body=123 status=ok
// SIG undefined FUN_1456e3580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456e3580(void)

{
  _DAT_14c9f1528 = L"BASE";
  DAT_14c9f1552 = 4;
  _DAT_14c9f1530 = FUN_140b35ae4();
  _DAT_14c9f1538 = DAT_14c9ec0a8;
  _DAT_14c9f1540 = &LAB_14682652b;
  DAT_14c9ec0a8 = &DAT_14c9f1528;
  DAT_14c9ec0fd = DAT_14c9ec0fd + '\x01';
  _DAT_14c9f1548 = 0x100000000;
  if (*(char *)(_DAT_14c9f1530 + 100) != '\0') {
    DAT_14c9ec0fe = DAT_14c9ec0fe + '\x01';
  }
  return;
}



// FUNCTION 1456e35fc FUN_1456e35fc body=226 status=ok
// SIG undefined FUN_1456e35fc(void)

longlong * FUN_1456e35fc(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d7492;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e36e4 FUN_1456e36e4 body=140 status=ok
// SIG undefined FUN_1456e36e4(void)

undefined1 * FUN_1456e36e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1456e3770();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightShafts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLightShaftPixelShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9efe78;
  return &LAB_1456e36e0;
}



// FUNCTION 1456e3770 FUN_1456e3770 body=258 status=ok
// SIG undefined FUN_1456e3770(void)

void FUN_1456e3770(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9efef8) {
    FUN_144b3d300(&DAT_14c9efef8);
    if (DAT_14c9efef8 == -1) {
      FUN_1456e3904(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLightShaftPixelShaderParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x88;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9efe78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d261bb);
      _Init_thread_footer(&DAT_14c9efef8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e3874 FUN_1456e3874 body=144 status=ok
// SIG undefined FUN_1456e3874(void)

code * FUN_1456e3874(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14482e3b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x60000000d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1456e36e4;
}



// FUNCTION 1456e3904 FUN_1456e3904 body=226 status=ok
// SIG undefined FUN_1456e3904(void)

longlong * FUN_1456e3904(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d751a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e39ec FUN_1456e39ec body=138 status=ok
// SIG undefined FUN_1456e39ec(void)

code * FUN_1456e39ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BloomTintAndThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000008d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e0cee;
}



// FUNCTION 1456e3a76 FUN_1456e3a76 body=138 status=ok
// SIG undefined FUN_1456e3a76(void)

code * FUN_1456e3a76(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSpaceBlurOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000008e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456e39ec;
}



// FUNCTION 1456e3b00 FUN_1456e3b00 body=226 status=ok
// SIG undefined FUN_1456e3b00(void)

longlong * FUN_1456e3b00(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d76b4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e3be8 FUN_1456e3be8 body=138 status=ok
// SIG undefined FUN_1456e3be8(void)

code * FUN_1456e3be8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456e3c72;
}



// FUNCTION 1456e3c72 FUN_1456e3c72 body=140 status=ok
// SIG undefined FUN_1456e3c72(void)

undefined1 * FUN_1456e3c72(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1456e3770();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightShafts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLightShaftPixelShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9efe78;
  return &LAB_1456e3be4;
}



// FUNCTION 1456e3cfe FUN_1456e3cfe body=63 status=ok
// SIG undefined FUN_1456e3cfe(void)

void FUN_1456e3cfe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1456e3d3e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1456e3d3e FUN_1456e3d3e body=83 status=ok
// SIG undefined FUN_1456e3d3e(void)

ulonglong FUN_1456e3d3e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1456e3d92 FUN_1456e3d92 body=97 status=ok
// SIG undefined FUN_1456e3d92(void)

void FUN_1456e3d92(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_1402bb87b(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1456e3df4 FUN_1456e3df4 body=132 status=ok
// SIG undefined FUN_1456e3df4(void)

void FUN_1456e3df4(longlong param_1,int param_2)

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



// FUNCTION 1456e3e7a FUN_1456e3e7a body=147 status=ok
// SIG undefined FUN_1456e3e7a(void)

void FUN_1456e3e7a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1456e3f0e FUN_1456e3f0e body=40 status=ok
// SIG undefined FUN_1456e3f0e(void)

undefined8 FUN_1456e3f0e(undefined8 param_1,int param_2)

{
  FUN_1456e3f36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456e3f36 FUN_1456e3f36 body=1180 status=ok
// SIG undefined FUN_1456e3f36(void)

void FUN_1456e3f36(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bb60420;
  param_1[5] = &PTR_FUN_14bb608a0;
  param_1[0x4f] = &PTR_FUN_14bb608e0;
  param_1[0x50] = &PTR_FUN_14bb60900;
  if (param_1[0x158] != 0) {
    FUN_1400020a8();
  }
  FUN_1456e4776(param_1 + 0x148);
  if (param_1[0x146] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (param_1[0x143] != 0) {
    FUN_1400020a8();
  }
  FUN_1456e449c(param_1 + 0x13b);
  *(undefined4 *)(param_1 + 0x13a) = 0;
  if (param_1[0x139] != 0) {
    FUN_1400020a8();
  }
  FUN_1456e44d2(param_1 + 0x131);
  FUN_1401f95f4(param_1 + 0x123);
  FUN_1401f95f4(param_1 + 0x115);
  if (param_1[0x112] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10e],*(undefined4 *)(param_1 + 0x10f));
  if (param_1[0x10e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10b],*(undefined4 *)(param_1 + 0x10c));
  if (param_1[0x10b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x108],*(undefined4 *)(param_1 + 0x109));
  if (param_1[0x108] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x105],*(undefined4 *)(param_1 + 0x106));
  if (param_1[0x105] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x102],*(undefined4 *)(param_1 + 0x103));
  if (param_1[0x102] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xfe] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0xf7);
  *(undefined4 *)(param_1 + 0xf6) = 0;
  if (param_1[0xf5] != 0) {
    FUN_1400020a8();
  }
  FUN_1456e4508(param_1 + 0xed);
  if (param_1[0xeb] != 0) {
    FUN_1400020a8();
  }
  FUN_1456e440c(param_1 + 0xd6);
  FUN_1456e45f0(param_1 + 0xca);
  FUN_144760e21(param_1[199],*(undefined4 *)(param_1 + 200));
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc4],*(undefined4 *)(param_1 + 0xc5));
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc1],*(undefined4 *)(param_1 + 0xc2));
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xbe],*(undefined4 *)(param_1 + 0xbf));
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xbb],*(undefined4 *)(param_1 + 0xbc));
  if (param_1[0xbb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb8],*(undefined4 *)(param_1 + 0xb9));
  if (param_1[0xb8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb5],*(undefined4 *)(param_1 + 0xb6));
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f96ee(param_1 + 0x6e);
  plVar3 = (longlong *)param_1[0x6d];
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
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x62);
  FUN_1456e43db(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_1456e453e(param_1 + 0x55);
  FUN_144760e21(param_1[0x51],*(undefined4 *)(param_1 + 0x52));
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_1456e4db8(param_1);
  return;
}



// FUNCTION 1456e43d2 FUN_1456e43d2 body=9 status=ok
// SIG undefined FUN_1456e43d2(void)

void FUN_1456e43d2(longlong param_1)

{
  FUN_1456e483a(param_1 + 0x10);
  return;
}



// FUNCTION 1456e43db FUN_1456e43db body=49 status=ok
// SIG undefined FUN_1456e43db(void)

void FUN_1456e43db(longlong param_1,int param_2)

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



// FUNCTION 1456e440c FUN_1456e440c body=87 status=ok
// SIG undefined FUN_1456e440c(void)

void FUN_1456e440c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14128f766(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1456e4464(param_1);
  return;
}



// FUNCTION 1456e4464 FUN_1456e4464 body=55 status=ok
// SIG undefined FUN_1456e4464(void)

void FUN_1456e4464(longlong *param_1)

{
  FUN_1456e4574(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456e449c FUN_1456e449c body=53 status=ok
// SIG undefined FUN_1456e449c(void)

void FUN_1456e449c(longlong *param_1)

{
  FUN_1456e46c2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456e44d2 FUN_1456e44d2 body=53 status=ok
// SIG undefined FUN_1456e44d2(void)

void FUN_1456e44d2(longlong *param_1)

{
  FUN_1456e466a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456e4508 FUN_1456e4508 body=53 status=ok
// SIG undefined FUN_1456e4508(void)

void FUN_1456e4508(longlong *param_1)

{
  FUN_1456e471c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456e453e FUN_1456e453e body=53 status=ok
// SIG undefined FUN_1456e453e(void)

void FUN_1456e453e(longlong *param_1)

{
  FUN_1456e4c44();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456e4574 FUN_1456e4574 body=123 status=ok
// SIG undefined FUN_1456e4574(void)

void FUN_1456e4574(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456e45f0 FUN_1456e45f0 body=81 status=ok
// SIG undefined FUN_1456e45f0(void)

void FUN_1456e45f0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 2);
  FUN_1456e4641(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456e4641 FUN_1456e4641 body=40 status=ok
// SIG undefined FUN_1456e4641(void)

void FUN_1456e4641(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14919ec32(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 1456e466a FUN_1456e466a body=88 status=ok
// SIG undefined FUN_1456e466a(void)

void FUN_1456e466a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1491c1920(param_1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456e46c2 FUN_1456e46c2 body=90 status=ok
// SIG undefined FUN_1456e46c2(void)

void FUN_1456e46c2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1407f13e6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456e471c FUN_1456e471c body=90 status=ok
// SIG undefined FUN_1456e471c(void)

void FUN_1456e471c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456e4776 FUN_1456e4776 body=138 status=ok
// SIG undefined FUN_1456e4776(void)

void FUN_1456e4776(longlong *param_1)

{
  FUN_1456e4800(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456e4800 FUN_1456e4800 body=58 status=ok
// SIG undefined FUN_1456e4800(void)

void FUN_1456e4800(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_149189aca(param_1);
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1456e483a FUN_1456e483a body=83 status=ok
// SIG undefined FUN_1456e483a(void)

void FUN_1456e483a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb6a9d0;
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456e488d FUN_1456e488d body=52 status=ok
// SIG undefined FUN_1456e488d(void)

void FUN_1456e488d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1456e4b9a(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 1456e48c1 FUN_1456e48c1 body=52 status=ok
// SIG undefined FUN_1456e48c1(void)

void FUN_1456e48c1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1456e4a88(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1456e48f6 FUN_1456e48f6 body=98 status=ok
// SIG undefined FUN_1456e48f6(void)

void FUN_1456e48f6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1456e4958 FUN_1456e4958 body=98 status=ok
// SIG undefined FUN_1456e4958(void)

void FUN_1456e4958(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1456e49ba FUN_1456e49ba body=90 status=ok
// SIG undefined FUN_1456e49ba(void)

void FUN_1456e49ba(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  FUN_1449e46ce();
  LOCK();
  piVar1 = (int *)(param_1 + 0xd0);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 != 0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0xc);
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  FUN_1447f71cc(lVar4,0x40000000);
  return;
}



// FUNCTION 1456e4a14 FUN_1456e4a14 body=115 status=ok
// SIG undefined FUN_1456e4a14(void)

void FUN_1456e4a14(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1456e4a88 FUN_1456e4a88 body=158 status=ok
// SIG undefined FUN_1456e4a88(void)

undefined8 * FUN_1456e4a88(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1456e4b26(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0x18);
  }
  return param_1;
}



// FUNCTION 1456e4b26 FUN_1456e4b26 body=115 status=ok
// SIG undefined FUN_1456e4b26(void)

void FUN_1456e4b26(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1456e4b9a FUN_1456e4b9a body=170 status=ok
// SIG undefined FUN_1456e4b9a(void)

undefined4 * FUN_1456e4b9a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1456e4c44 FUN_1456e4c44 body=371 status=ok
// SIG undefined FUN_1456e4c44(void)

void FUN_1456e4c44(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x20 + lVar3 * 0x38) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x38 + 0x10) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456e4db8 FUN_1456e4db8 body=564 status=ok
// SIG undefined FUN_1456e4db8(void)

void FUN_1456e4db8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bb39e40;
  param_1[5] = &PTR_FUN_14bb3a1c0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a));
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x35);
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2e] = &PTR_FUN_14bad5cb0;
  FUN_140ad45e1(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2b] = &PTR_FUN_14bad5cb0;
  FUN_140ad45e1(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbf0e(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_140ba05b6(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140ba05b6(param_1 + 0xc);
  plVar3 = (longlong *)param_1[8];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1456e4fec FUN_1456e4fec body=230 status=ok
// SIG undefined FUN_1456e4fec(void)

void FUN_1456e4fec(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x138);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        lVar5 = FUN_144a74fb4();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           (plVar4 = *(longlong **)(lVar3 + 0xe50), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x78))(plVar4,&local_78,0);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  (**(code **)(**(longlong **)(param_1 + 0xe50) + 0x68))(*(longlong **)(param_1 + 0xe50),&local_78);
  FUN_1400bc83e(&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456e50d4 FUN_1456e50d4 body=378 status=ok
// SIG undefined FUN_1456e50d4(void)

void FUN_1456e50d4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar1 == 0) goto LAB_1456e5207;
  lVar8 = *(longlong *)(param_1 + 0x138);
  lVar10 = 0;
  do {
    lVar2 = *(longlong *)(lVar8 + lVar10);
    if (lVar2 != 0) {
      lVar7 = FUN_144a74fb4();
      if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
         (*(longlong **)(lVar2 + 0xe50) != (longlong *)0x0)) {
        cVar5 = (**(code **)(**(longlong **)(lVar2 + 0xe50) + 0x38))();
        uVar4 = uStack_50;
        if (cVar5 != '\0') {
          lVar7 = (longlong)(int)uStack_50;
          uVar6 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
          if (uStack_50._4_4_ < uVar6) {
            FUN_14793612a(&local_58,uVar4 & 0xffffffff);
          }
          local_58[lVar7] = lVar2;
        }
      }
    }
    lVar10 = lVar10 + 8;
  } while ((longlong)iVar1 * 8 != lVar10);
  lVar8 = (longlong)(int)uStack_50;
  if (lVar8 == 0) goto LAB_1456e5207;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  plVar3 = *(longlong **)(param_1 + 0xe50);
  if (plVar3 == (longlong *)0x0) {
LAB_1456e51d3:
    plVar3 = local_58 + lVar8;
    plVar9 = local_58;
    do {
      (**(code **)(**(longlong **)(*plVar9 + 0xe50) + 0x68))
                (*(longlong **)(*plVar9 + 0xe50),&local_98);
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar3);
  }
  else {
    (**(code **)(*plVar3 + 0x78))(plVar3,&local_98,0);
    lVar8 = (longlong)(int)uStack_50;
    if (lVar8 != 0) goto LAB_1456e51d3;
  }
  FUN_1400bc83e(&local_98);
LAB_1456e5207:
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e5250 FUN_1456e5250 body=267 status=ok
// SIG undefined FUN_1456e5250(void)

void FUN_1456e5250(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong unaff_RBX;
  longlong lVar5;
  
  if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 8))();
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(undefined1 *)(lVar5 + 0x33));
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 8))();
    uVar2 = *(undefined4 *)(lVar5 + 0x28);
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 8))();
    lVar5 = FUN_140200626(*(undefined4 *)(lVar5 + 0x24),uVar2,unaff_RBX & 0xffffffff,1);
  }
  plVar3 = *(longlong **)(param_1 + 0x90);
  if ((plVar3 != (longlong *)0x0) && (plVar3 != *(longlong **)(param_1 + 0x98))) {
    lVar4 = (**(code **)(*plVar3 + 8))();
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(undefined1 *)(lVar4 + 0x33));
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 8))();
    uVar2 = *(undefined4 *)(lVar4 + 0x28);
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 8))();
    lVar4 = FUN_140200626(*(undefined4 *)(lVar4 + 0x24),uVar2,unaff_RBX & 0xffffffff,1);
    lVar5 = lVar5 + lVar4;
  }
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x98) + 8))();
    uVar1 = *(undefined1 *)(lVar4 + 0x33);
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x98) + 8))();
    uVar2 = *(undefined4 *)(lVar4 + 0x28);
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x98) + 8))();
    lVar4 = FUN_140200626(*(undefined4 *)(lVar4 + 0x24),uVar2,
                          CONCAT71((int7)(unaff_RBX >> 8),uVar1) & 0xffffffff,1);
    lVar5 = lVar5 + lVar4;
  }
  **(longlong **)(param_1 + 0xb0) = lVar5;
  return;
}



// FUNCTION 1456e535c FUN_1456e535c body=58 status=ok
// SIG undefined FUN_1456e535c(void)

void FUN_1456e535c(undefined8 *param_1,int param_2)

{
  FUN_14020094d(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1456e5396(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1456e5396 FUN_1456e5396 body=95 status=ok
// SIG undefined FUN_1456e5396(void)

void FUN_1456e5396(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1456e53f6 FUN_1456e53f6 body=115 status=ok
// SIG undefined FUN_1456e53f6(void)

void FUN_1456e53f6(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  int local_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140204954(&local_20,param_1);
  if (iStack_1c != 0 || local_20 != 0) {
    FUN_147bda7d8(local_28,1,(*(byte *)(param_1 + 0x158) & 2) >> 1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e546a FUN_1456e546a body=124 status=ok
// SIG undefined FUN_1456e546a(void)

void FUN_1456e546a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
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



// FUNCTION 1456e54e6 FUN_1456e54e6 body=96 status=ok
// SIG undefined FUN_1456e54e6(void)

undefined8 * FUN_1456e54e6(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14aa35ce0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = param_2;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    uVar1 = FUN_1456e5546();
    param_1[0xe] = uVar1;
  }
  return param_1;
}



// FUNCTION 1456e5546 FUN_1456e5546 body=175 status=ok
// SIG undefined FUN_1456e5546(void)

undefined8 * FUN_1456e5546(longlong param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x100);
  memset(_Dst,0,0x100);
  FUN_1456e55f6(_Dst);
  *_Dst = &PTR_FUN_14aa4cee0;
  _Dst[0x19] = 0;
  *(undefined4 *)(_Dst + 0x1a) = 0;
  _Dst[0x15] = 0;
  _Dst[0x16] = 0;
  *(undefined8 *)((longlong)_Dst + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0xdc) = 0;
  _Dst[0x1d] = 0;
  *(undefined4 *)(_Dst + 0x1e) = 0;
  *(undefined1 *)(_Dst + 0x1f) = 0;
  if ((*(byte *)((longlong)_Dst + 0x41) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1e8) = 1;
  }
  _Dst[3] = param_1;
  FUN_141300b68(param_1 + 0x70,_Dst);
  return _Dst;
}



// FUNCTION 1456e55f6 FUN_1456e55f6 body=166 status=ok
// SIG undefined FUN_1456e55f6(void)

undefined8 * FUN_1456e55f6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 8) = 0x401;
  *param_1 = &PTR_FUN_14aa4cfb0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xb] = puVar1;
  param_1[10] = puVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xf] = puVar1;
  param_1[0xe] = puVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0x13] = puVar1;
  param_1[0x12] = puVar1;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 1456e569c FUN_1456e569c body=499 status=ok
// SIG undefined FUN_1456e569c(void)

void FUN_1456e569c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0xa0;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x94 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x90 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1456e5890 FUN_1456e5890 body=132 status=ok
// SIG undefined FUN_1456e5890(void)

void FUN_1456e5890(longlong param_1,int param_2)

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



// FUNCTION 1456e5916 FUN_1456e5916 body=62 status=ok
// SIG undefined FUN_1456e5916(void)

void FUN_1456e5916(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14694f8a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1456e5954 FUN_1456e5954 body=60 status=ok
// SIG undefined FUN_1456e5954(void)

void FUN_1456e5954(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_140206818();
  uVar1 = FUN_1447210f0(param_1);
  cVar2 = FUN_14020697c(uVar1);
  if (cVar2 == '\0') {
    return;
  }
  FUN_147db738e(param_1);
  FUN_141651a7e(param_1);
  return;
}



// FUNCTION 1456e5990 FUN_1456e5990 body=114 status=ok
// SIG undefined FUN_1456e5990(void)

void FUN_1456e5990(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 1456e5a02 FUN_1456e5a02 body=95 status=ok
// SIG undefined FUN_1456e5a02(void)

void FUN_1456e5a02(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  ulonglong *puVar6;
  
  puVar1 = (ulonglong *)(param_3 + 8);
  puVar6 = param_1 + 2;
  if (param_3 != 0) {
    puVar6 = puVar1;
  }
  uVar3 = *puVar6;
  uVar4 = *param_1;
  if ((uVar3 < uVar4) || (param_1[1] - 2 < uVar3)) {
    uVar5 = 0;
  }
  else {
    uVar2 = uVar3 + 2;
    if ((param_3 != 0) && (*puVar1 < uVar2)) {
      *puVar1 = uVar2;
    }
    *param_2 = uVar3;
    param_2[1] = uVar2;
    *(undefined4 *)(param_2 + 2) = 0;
    *(int *)((longlong)param_2 + 0x14) = (int)(uVar3 - uVar4 >> 1);
    uVar5 = 1;
  }
  *(undefined1 *)(param_2 + 3) = uVar5;
  return;
}



// FUNCTION 1456e5a62 FUN_1456e5a62 body=80 status=ok
// SIG undefined FUN_1456e5a62(void)

void FUN_1456e5a62(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
                    /* WARNING: Could not recover jumptable at 0x0001456e5aab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 10),4000);
  return;
}



// FUNCTION 1456e5ab2 FUN_1456e5ab2 body=1005 status=ok
// SIG undefined FUN_1456e5ab2(void)

void FUN_1456e5ab2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  code ****ppppcVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_a0 [40];
  undefined4 local_78;
  code ***local_70;
  undefined4 local_68;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar11 = *(longlong *)(param_1 + 0x50);
  uVar7 = FUN_1405b657a(*param_2);
  local_a0[0] = 0;
  local_78 = 0;
  FUN_1456bb102(local_a0,uVar7);
  FUN_1448729ea(lVar11 + 0x18,&local_70,local_a0);
  uVar6 = FUN_1405d5f74(&local_70);
  *(undefined4 *)(param_1 + 0x90) = uVar6;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppcVar10 = &local_70;
    if (0x18 < local_58) {
      ppppcVar10 = (code ****)local_70;
    }
    (*pcVar4)(ppppcVar10);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70);
  }
  FUN_144a5ac3a(local_a0);
  lVar11 = *(longlong *)(param_1 + 0x50);
  uVar7 = FUN_1405b657a(*param_2);
  local_a0[0] = 0;
  local_78 = 0;
  FUN_1456bb102(local_a0,uVar7);
  FUN_1448729ea(lVar11 + 0x70,&local_70,local_a0);
  uVar6 = FUN_144a7ecd0(&local_70);
  *(undefined4 *)(param_1 + 0x94) = uVar6;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppcVar10 = &local_70;
    if (0x18 < local_58) {
      ppppcVar10 = (code ****)local_70;
    }
    (*pcVar4)(ppppcVar10);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70);
  }
  FUN_144a5ac3a();
  iVar8 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x110) == '\x01') {
    iVar8 = *(int *)(*param_2 + 0x44);
  }
  piVar1 = (int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x70) = iVar8 + *(int *)(param_1 + 0x90);
  FUN_140841e14(piVar1,CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x50) >> 8),1));
  fVar12 = 0.0;
  if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x110) == '\x01') {
    fVar12 = *(float *)(*param_2 + 0x50);
  }
  piVar2 = (int *)(param_1 + 0x74);
  FUN_14020a6c0(piVar2,*(float *)(param_1 + 0x94) + fVar12);
  lVar11 = *param_2;
  *(longlong *)(param_1 + 0x58) = lVar11;
  plVar5 = (longlong *)param_2[1];
  plVar9 = *(longlong **)(param_1 + 0x60);
  if (plVar9 != plVar5) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 0x60);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x60) = plVar5;
    lVar11 = *param_2;
  }
  local_70 = (code ***)&LAB_148de39fa;
  local_68 = 0;
  FUN_14020aa00(local_a0,param_1);
  local_a8 = local_a0;
  FUN_14020a92c(lVar11,&local_70,*(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x110),0);
  *(code ****)(param_1 + 0x80) = local_70;
  FUN_1449db362(local_a0);
  lVar11 = *param_2;
  local_70 = (code ***)&LAB_148de3a0e;
  local_68 = 0;
  FUN_14020aa00(local_a0,param_1,&local_70);
  local_a8 = local_a0;
  FUN_14020a92c(lVar11,&local_70,*(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x110),1);
  *(code ****)(param_1 + 0x88) = local_70;
  FUN_1449db362(local_a0);
  iVar8 = *(int *)(param_1 + 0x68);
  if (iVar8 == 0) {
    FUN_1402a453c(piVar1);
    iVar8 = *piVar1;
  }
  lVar11 = DAT_14c9a3d60 + (longlong)iVar8 * 0x88;
  local_70 = (code ***)FUN_148de3a2a;
  local_68 = 0;
  FUN_14020aa00(local_a0,param_1);
  FUN_140c67310(lVar11 + -0x18,&local_70,local_a0);
  FUN_1449db362(local_a0);
  iVar8 = *(int *)(param_1 + 0x74);
  if (iVar8 == 0) {
    FUN_1402a453c(piVar2);
    iVar8 = *piVar2;
  }
  lVar11 = DAT_14c9a3d60 + (longlong)iVar8 * 0x88;
  local_70 = (code ***)&DAT_148de3a5a;
  local_68 = 0;
  FUN_14020aa00(local_a0,param_1);
  FUN_140c67310(lVar11 + -0x18,&local_70,local_a0);
  FUN_1449db362(local_a0);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e5ea0 FUN_1456e5ea0 body=124 status=ok
// SIG undefined FUN_1456e5ea0(void)

void FUN_1456e5ea0(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e5f1e FUN_1456e5f1e body=118 status=ok
// SIG undefined FUN_1456e5f1e(void)

void FUN_1456e5f1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a0980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1456e5f94 FUN_1456e5f94 body=226 status=ok
// SIG undefined FUN_1456e5f94(void)

longlong * FUN_1456e5f94(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d1b32;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e6078 FUN_1456e6078 body=132 status=ok
// SIG undefined FUN_1456e6078(void)

undefined1 * FUN_1456e6078(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldToShadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 6;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471c095c;
}



// FUNCTION 1456e60fc FUN_1456e60fc body=136 status=ok
// SIG undefined FUN_1456e60fc(void)

code * FUN_1456e60fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bIsEmpty";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b0000001af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c0734;
}



// FUNCTION 1456e6184 FUN_1456e6184 body=138 status=ok
// SIG undefined FUN_1456e6184(void)

code * FUN_1456e6184(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumShadowMatrices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a8000001ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c07be;
}



// FUNCTION 1456e620e FUN_1456e620e body=226 status=ok
// SIG undefined FUN_1456e620e(void)

longlong * FUN_1456e620e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e91dc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e62f2 FUN_1456e62f2 body=138 status=ok
// SIG undefined FUN_1456e62f2(void)

code * FUN_1456e62f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceNormalAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722ac1e;
}



// FUNCTION 1456e637c FUN_1456e637c body=138 status=ok
// SIG undefined FUN_1456e637c(void)

code * FUN_1456e637c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWAtlasBlock2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722aca8;
}



// FUNCTION 1456e6406 FUN_1456e6406 body=138 status=ok
// SIG undefined FUN_1456e6406(void)

undefined1 * FUN_1456e6406(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x42;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14722ad32;
}



// FUNCTION 1456e6490 FUN_1456e6490 body=226 status=ok
// SIG undefined FUN_1456e6490(void)

longlong * FUN_1456e6490(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ec0d6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e6578 FUN_1456e6578 body=138 status=ok
// SIG undefined FUN_1456e6578(void)

undefined1 * FUN_1456e6578(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8b47e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FPixelShaderUtils::FRasterizeToRectsVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x67;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1456e6574;
}



// FUNCTION 1456e6602 FUN_1456e6602 body=146 status=ok
// SIG undefined FUN_1456e6602(void)

code * FUN_1456e6602(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1415a3140();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenCardCopyPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000068;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca06098;
  return FUN_1456e6578;
}



// FUNCTION 1456e6694 FUN_1456e6694 body=62 status=ok
// SIG undefined FUN_1456e6694(void)

void FUN_1456e6694(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e7a900(param_1,iVar1);
  }
  FUN_1456e69ad((longlong)iVar1 * 0x1a8 + *param_1,1);
  return;
}



// FUNCTION 1456e66d2 FUN_1456e66d2 body=501 status=ok
// SIG undefined FUN_1456e66d2(void)

void FUN_1456e66d2(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined1 local_60;
  PSRWLOCK *local_58;
  longlong local_50;
  PSRWLOCK local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((((lVar3 != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
      (plVar6 = *(longlong **)(param_2 + 0x20), plVar6 != (longlong *)0x0)) && (0 < (int)plVar6[1]))
  {
    iVar5 = (int)plVar6[1];
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar7 = *(longlong *)(param_2 + 0x18);
    }
    local_48 = (PSRWLOCK)(lVar7 + 0x168);
    local_40 = 0;
    AcquireSRWLockShared(local_48);
    local_38 = lVar7;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0xb0);
    lVar7 = (longlong)param_3 * 0x1a8;
    local_50 = lVar3 + lVar7;
    local_58 = &local_48;
    local_68 = lVar3 + 0x180 + lVar7;
    local_70 = lVar3 + 0x19c + lVar7;
    local_78 = lVar3 + 0x198 + lVar7;
    local_60 = 1;
    FUN_1442baf18(&local_58,2,lVar3 + 400 + lVar7,lVar3 + 0x194 + lVar7);
    local_68 = lVar3 + lVar7 + 0x170;
    local_70 = lVar3 + 0x158 + lVar7;
    local_78 = lVar3 + lVar7 + 0x164;
    local_60 = 0;
    FUN_1442baf18(&local_58,1,lVar3 + lVar7 + 0x15c,lVar3 + lVar7 + 0x160);
    local_68 = lVar3 + lVar7 + 0x148;
    local_70 = lVar3 + 0x130 + lVar7;
    local_78 = lVar3 + 0x13c + lVar7;
    local_60 = 0;
    FUN_1442baf18(&local_58,0,lVar3 + 0x134 + lVar7,lVar3 + 0x138 + lVar7);
    if (local_40 == 0) {
      ReleaseSRWLockShared(local_48);
    }
    else {
      ReleaseSRWLockExclusive(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456e68c8 FUN_1456e68c8 body=114 status=ok
// SIG undefined FUN_1456e68c8(void)

void FUN_1456e68c8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148e7a900(param_1,iVar1);
    }
    FUN_1456e69ad((longlong)iVar1 * 0x1a8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1456e69d6(param_1,param_2,iVar1 - param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1456e693a FUN_1456e693a body=115 status=ok
// SIG undefined FUN_1456e693a(void)

void FUN_1456e693a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x1a8,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x1a8)) {
      uVar2 = uVar1 / 0x1a8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1a8,8);
  }
  return;
}



// FUNCTION 1456e69ad FUN_1456e69ad body=41 status=ok
// SIG undefined FUN_1456e69ad(void)

void FUN_1456e69ad(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1456e6b64(param_1);
    param_1 = param_1 + 0x1a8;
  }
  return;
}



// FUNCTION 1456e69d6 FUN_1456e69d6 body=100 status=ok
// SIG undefined FUN_1456e69d6(void)

void FUN_1456e69d6(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x1a8 + *param_1);
  FUN_1456e6a3a(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x1a8 + (longlong)_Dst),(longlong)iVar2 * 0x1a8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1456e6a3a FUN_1456e6a3a body=41 status=ok
// SIG undefined FUN_1456e6a3a(void)

void FUN_1456e6a3a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1456e6a64(param_1);
    param_1 = param_1 + 0x1a8;
  }
  return;
}



// FUNCTION 1456e6a64 FUN_1456e6a64 body=256 status=ok
// SIG undefined FUN_1456e6a64(void)

void FUN_1456e6a64(longlong *param_1)

{
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456e6b64 FUN_1456e6b64 body=400 status=ok
// SIG undefined FUN_1456e6b64(void)

longlong FUN_1456e6b64(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1400b22c2(param_1,&DAT_149e02088);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x18) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_1400b22c2(param_1 + 0x38,&DAT_149e02088);
  FUN_140056680(param_1 + 0x48,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_1400b22c2(param_1 + 0x60,&DAT_149e02088);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  FUN_1400b22c2(param_1 + 0x78,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x88,&DAT_149e02088);
  *(undefined8 *)(param_1 + 0x98) = 0x3f800000;
  uVar1 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0xa0) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xb0) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(undefined8 *)(param_1 + 0xc0) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 200) = 0x3fdcccccc0000000;
  *(undefined8 *)(param_1 + 0xd0) = 0x3fd1eb8520000000;
  *(undefined8 *)(param_1 + 0xd8) = 0x4010000000000000;
  *(undefined4 *)(param_1 + 0xe0) = 0x40b00000;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0x43870000;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0x3fc00000;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0x42c8000042c80000;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0x42c8000042c80000;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x18e) = 0;
  *(undefined8 *)(param_1 + 0x196) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  return param_1;
}



// FUNCTION 1456e6cf4 FUN_1456e6cf4 body=165 status=ok
// SIG undefined FUN_1456e6cf4(void)

void FUN_1456e6cf4(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x10) + (param_2 & 0xffff) * 2);
  if ((ushort)param_2 != 0) {
    uVar5 = param_2 & 0xffffffff;
    uVar6 = (int)(param_2 & 0xffff) + 0x1ffffU >> 1;
    do {
      uVar4 = (ushort)uVar5;
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar6 & 0xffff) * 2);
      if (*(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 4) <=
          *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 4)) goto LAB_1456e6d6c;
      uVar5 = (ulonglong)(((uint)uVar5 & 0xffff) * 2);
      *(ushort *)(*(longlong *)(param_1 + 0x10) + uVar5) = uVar2;
      *(ushort *)
       (*(longlong *)(param_1 + 0x20) +
       (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x10) + uVar5) * 2) = uVar4;
      uVar5 = (ulonglong)uVar6;
      sVar3 = (short)uVar6;
      uVar6 = (int)((uVar6 & 0xffff) - 1) >> 1;
    } while (sVar3 != 0);
  }
  uVar4 = 0;
LAB_1456e6d6c:
  if (uVar4 != (ushort)param_2) {
    *(ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)((uint)uVar4 * 2)) = uVar1;
    *(ushort *)
     (*(longlong *)(param_1 + 0x20) +
     (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)((uint)uVar4 * 2)) * 2) =
         uVar4;
  }
  return;
}



// FUNCTION 1456e6df2 FUN_1456e6df2 body=584 status=ok
// SIG undefined FUN_1456e6df2(void)

void FUN_1456e6df2(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((*(char *)(param_1 + 0x138) == '\x01') && (0 < *(int *)(param_1 + 0xc0))) ||
      ((*(char *)(param_1 + 0x139) == '\x01' && (0 < *(int *)(param_1 + 0xc4))))) &&
     ((*(int *)(param_1 + 0x104) < *(int *)(param_1 + 0xd8) &&
      ((longlong)*(int *)(param_1 + 0x128) != 0)))) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x120) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x120) + lVar5) != 0)) {
        FUN_1446f470e(&local_98,L"fps_histogram",1);
        FUN_140056680(local_90,L"bifrost_ue_performance");
        local_80 = local_98;
        plVar1 = (longlong *)(param_1 + 0xd0);
        local_78 = 0;
        uStack_70 = 0;
        lVar5 = param_1 + 0xe0;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar5;
        if (*(int *)(param_1 + 0xf8) == 0) {
          iVar6 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar6 = *(int *)(param_1 + 0xf8);
        }
        uStack_a0 = CONCAT44(uStack_4c,uStack_50);
        local_a8 = local_58;
        uVar2 = local_a8;
        local_b8 = (undefined4)local_68;
        uStack_b4 = local_68._4_4_;
        uStack_b0 = (undefined4)uStack_60;
        uStack_ac = uStack_60._4_4_;
        local_a8._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        local_c0 = plVar1;
        if ((local_a8._4_4_ != iVar6) || (uStack_60 != lVar5)) {
          bVar7 = 0;
          iVar4 = local_a8._4_4_;
          local_a8 = uVar2;
          do {
            do {
              lVar8 = *local_c0 + (longlong)iVar4 * 0x6f8 + 8;
              bVar3 = FUN_140214462(lVar8,param_1,local_90);
              bVar7 = bVar7 | bVar3;
              FUN_1456e703c(lVar8);
              local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~uStack_b4);
              FUN_1449c0562(&local_b8);
              iVar4 = local_a8._4_4_;
            } while (local_a8._4_4_ != iVar6);
          } while ((CONCAT44(uStack_ac,uStack_b0) != lVar5) || (local_c0 != plVar1));
          uVar2 = local_a8;
          if ((bVar7 & 1) != 0) {
            FUN_1402143c0(param_1 + 0x120,local_90);
            uVar2 = local_a8;
          }
        }
        local_a8 = uVar2;
        FUN_14021421e(local_90);
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x128) * 0x10 != lVar5);
  }
  FUN_1407f4802(param_1 + 0xd0,0);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456e703c FUN_1456e703c body=172 status=ok
// SIG undefined FUN_1456e703c(void)

void FUN_1456e703c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_140214320();
  FUN_1456e70e8(param_1 + 0xa8);
  iVar1 = *(int *)(param_1 + 0x84);
  FUN_1402142c4(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x84) != 0)) {
    FUN_148a65cda(param_1 + 0x78);
  }
  *(undefined8 *)(param_1 + 0x660) = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x650) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x658) = uVar2;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x638) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x640) = uVar2;
  *(undefined8 *)(param_1 + 0x648) = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x668) = 0;
  *(undefined4 *)(param_1 + 0x670) = 0;
  *(undefined8 *)(param_1 + 0x678) = 0;
  return;
}



// FUNCTION 1456e70e8 FUN_1456e70e8 body=72 status=ok
// SIG undefined FUN_1456e70e8(void)

void FUN_1456e70e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x580);
  if (*(longlong *)(param_1 + 0x580) == 0) {
    lVar1 = param_1;
  }
  FUN_1456e7130(lVar1,*(undefined4 *)(param_1 + 0x588));
  *(undefined4 *)(param_1 + 0x588) = 0;
  if (*(int *)(param_1 + 0x58c) != 0) {
    FUN_1456e7174(param_1);
    return;
  }
  return;
}



// FUNCTION 1456e7130 FUN_1456e7130 body=68 status=ok
// SIG undefined FUN_1456e7130(void)

void FUN_1456e7130(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x60;
    do {
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1448fc100(param_1);
      param_1 = param_1 + 0xb0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1456e7174 FUN_1456e7174 body=92 status=ok
// SIG undefined FUN_1456e7174(void)

void FUN_1456e7174(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x58c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x58c) = 0;
    if (*(void **)((longlong)param_1 + 0x580) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x580),
              (longlong)*(int *)((longlong)param_1 + 0x588) * 0xb0);
      FUN_1446efa72((longlong)param_1 + 0x580,0,0,0xb0);
      return;
    }
  }
  return;
}



// FUNCTION 1456e71d0 FUN_1456e71d0 body=132 status=ok
// SIG undefined FUN_1456e71d0(void)

void FUN_1456e71d0(longlong param_1,int param_2)

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



// FUNCTION 1456e7254 FUN_1456e7254 body=226 status=ok
// SIG undefined FUN_1456e7254(void)

longlong * FUN_1456e7254(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463d0f2e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e733c FUN_1456e733c body=138 status=ok
// SIG undefined FUN_1456e733c(void)

code * FUN_1456e733c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClothToLocal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000235;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463d103e;
}



// FUNCTION 1456e73c6 FUN_1456e73c6 body=138 status=ok
// SIG undefined FUN_1456e73c6(void)

code * FUN_1456e73c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClothBlendWeight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000238;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147adf04c;
}



// FUNCTION 1456e7450 FUN_1456e7450 body=205 status=ok
// SIG undefined FUN_1456e7450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456e7450(void)

{
  if ((DAT_14ca5006f & 2) == 0) {
    DAT_14ca5006f = DAT_14ca5006f | 2;
    _DAT_14ca50010 = L"FShadowProjectionNoTransformVS";
    _DAT_14ca50028 = FUN_146826540;
    _DAT_14ca50030 = FUN_146825d77;
    _DAT_14ca50038 = FUN_146825fd6;
    _DAT_14ca50040 = FUN_1407e02ea;
    _DAT_14ca50048 = FUN_146826273;
    _DAT_14ca50020 = FUN_1472ee5b4;
    _DAT_14ca50060 = 0xffffffff000000e0;
    _DAT_14ca50068 = 8;
    DAT_14ca5006c = 0;
    _DAT_14ca50050 = &LAB_1472ee5e0;
    FUN_1456e751e();
    FUN_1407e00cc(&DAT_14ca50008);
    return;
  }
  return;
}



// FUNCTION 1456e751e FUN_1456e751e body=123 status=ok
// SIG undefined FUN_1456e751e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456e751e(void)

{
  _DAT_14ca572d0 = L"BASE";
  DAT_14ca572fa = 4;
  _DAT_14ca572d8 = FUN_140b35ae4();
  _DAT_14ca572e0 = DAT_14ca50018;
  _DAT_14ca572e8 = &LAB_14682652b;
  DAT_14ca50018 = &DAT_14ca572d0;
  DAT_14ca5006d = DAT_14ca5006d + '\x01';
  _DAT_14ca572f0 = 0x100000000;
  if (*(char *)(_DAT_14ca572d8 + 100) != '\0') {
    DAT_14ca5006e = DAT_14ca5006e + '\x01';
  }
  return;
}



// FUNCTION 1456e759a FUN_1456e759a body=226 status=ok
// SIG undefined FUN_1456e759a(void)

undefined8 FUN_1456e759a(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined4 *local_80;
  int *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined4 **local_60;
  undefined4 local_54;
  undefined8 local_50;
  int local_44;
  longlong local_40;
  undefined1 **local_38;
  code *local_30;
  longlong *local_28;
  code **local_20;
  code *local_18;
  undefined8 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_44 = param_2;
  if (-1 < param_2) {
    local_70 = &local_50;
    local_50 = 0;
    local_80 = &local_54;
    local_54 = 0;
    local_60 = &local_80;
    local_78 = &local_44;
    local_68 = &LAB_143cbcba8;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      local_28 = &local_40;
      local_38 = &local_68;
      local_20 = &local_30;
      local_30 = FUN_143cbca2e;
      local_10 = &local_20;
      local_18 = FUN_1487df56e;
      local_40 = param_1;
      FUN_1447c5ba2(*(longlong *)(param_1 + 0x40));
      uVar1 = local_50;
      goto LAB_1456e7657;
    }
  }
  uVar1 = 0;
LAB_1456e7657:
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e767e FUN_1456e767e body=274 status=ok
// SIG undefined FUN_1456e767e(void)

undefined4 * FUN_1456e767e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1456e7820(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0xffffffff00000000;
  cVar1 = FUN_1456e7792(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_1456e7908(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e7792 FUN_1456e7792 body=141 status=ok
// SIG undefined FUN_1456e7792(void)

undefined8 FUN_1456e7792(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar2 = FUN_1456e7ac6();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      uVar3 = *param_3;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0x14) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x14) = uVar3;
      FUN_147be0e3e(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_1456e77b6;
    }
  }
  uVar3 = 0;
LAB_1456e77b6:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e7820 FUN_1456e7820 body=231 status=ok
// SIG undefined FUN_1456e7820(void)

int * FUN_1456e7820(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1456e7908 FUN_1456e7908 body=445 status=ok
// SIG undefined FUN_1456e7908(void)

void FUN_1456e7908(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 1456e7ac6 FUN_1456e7ac6 body=180 status=ok
// SIG undefined FUN_1456e7ac6(void)

int FUN_1456e7ac6(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_140434a50(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1456e7b54;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1456e7b54:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e7b7c FUN_1456e7b7c body=316 status=ok
// SIG undefined FUN_1456e7b7c(void)

undefined4 * FUN_1456e7b7c(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148e2200a(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar7 = *(uint *)*param_2;
  *local_38 = uVar7;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar2 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    uVar7 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar4 = FUN_148e22118(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14cbd5630 - DAT_14cbd565c;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14cbd5670)) {
      uVar7 = DAT_14cbd5670 - 1U & uVar7;
      local_38[7] = uVar7;
      puVar6 = DAT_14cbd5668;
      if (DAT_14cbd5668 == (undefined *)0x0) {
        puVar6 = &DAT_14cbd5660;
      }
      local_38[6] = *(uint *)(puVar6 + ((longlong)DAT_14cbd5670 - 1U & (longlong)(int)uVar7) * 4);
      puVar6 = DAT_14cbd5668;
      if (DAT_14cbd5668 == (undefined *)0x0) {
        puVar6 = &DAT_14cbd5660;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cbd5670 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14cbd5670 = iVar9;
      FUN_148e22260();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e7cba FUN_1456e7cba body=111 status=ok
// SIG undefined FUN_1456e7cba(void)

void FUN_1456e7cba(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7a0));
  local_28 = &local_30;
  FUN_14021dcb8(param_1 + 0x790);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7a0));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e7d2a FUN_1456e7d2a body=138 status=ok
// SIG undefined FUN_1456e7d2a(void)

void FUN_1456e7d2a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1456e7db4 FUN_1456e7db4 body=226 status=ok
// SIG undefined FUN_1456e7db4(void)

longlong * FUN_1456e7db4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14647197a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e7e98 FUN_1456e7e98 body=130 status=ok
// SIG undefined FUN_1456e7e98(void)

undefined1 * FUN_1456e7e98(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148188d34;
}



// FUNCTION 1456e7f1a FUN_1456e7f1a body=138 status=ok
// SIG undefined FUN_1456e7f1a(void)

code * FUN_1456e7f1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MipLevels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456e7e98;
}



// FUNCTION 1456e7fa4 FUN_1456e7fa4 body=138 status=ok
// SIG undefined FUN_1456e7fa4(void)

code * FUN_1456e7fa4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148188caa;
}



// FUNCTION 1456e802e FUN_1456e802e body=39 status=ok
// SIG undefined FUN_1456e802e(void)

void FUN_1456e802e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_1456e8056(uVar1,param_1);
  return;
}



// FUNCTION 1456e8056 FUN_1456e8056 body=1072 status=ok
// SIG undefined FUN_1456e8056(void)

longlong * FUN_1456e8056(longlong *param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  dVar15 = (double)param_2[0x5b];
  dVar1 = (double)param_2[0x5a];
  *(float *)((longlong)param_1 + 0x4c) = (float)(double)param_2[0x59];
  *(float *)(param_1 + 10) = (float)dVar1;
  *(float *)((longlong)param_1 + 0x54) = (float)dVar15;
  if (param_2 == (longlong *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 3;
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
    goto LAB_1456e81b5;
  }
  lVar10 = FUN_14592c47e();
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar10 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
      lVar10 + 0x30)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  lVar10 = FUN_14596e7d6();
  if (*(int *)(param_2[2] + 0x38) < *(int *)(lVar10 + 0x38)) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
        lVar10 + 0x30) {
      plVar12 = param_2;
    }
  }
  lVar10 = FUN_14596e9ae();
  iVar11 = *(int *)(lVar10 + 0x38);
  iVar2 = *(int *)(param_2[2] + 0x38);
  if ((iVar2 < iVar11) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)iVar11 * 8) == lVar10 + 0x30)) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 3;
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
    if (bVar8) {
      if (plVar12 == (longlong *)0x0) {
        if (iVar11 <= iVar2) {
          *(undefined4 *)((longlong)param_1 + 0x24) = 2;
        }
        goto LAB_1456e81b5;
      }
      goto LAB_1456e8469;
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x24) = 3;
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
    if (bVar8) {
      if (plVar12 == (longlong *)0x0) goto LAB_1456e81b5;
LAB_1456e8469:
      *(undefined4 *)((longlong)param_1 + 0x24) = 1;
      *(int *)((longlong)param_1 + 0xac) = (int)plVar12[0x62];
      goto LAB_1456e81b5;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
LAB_1456e81b5:
  *param_1 = (longlong)param_2;
  lVar10 = FUN_1456e8488(param_2);
  param_1[3] = *(longlong *)(*param_1 + 0x2f0);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*param_1 + 0x304);
  dVar5 = (double)param_2[0x48];
  dVar6 = (double)param_2[0x49];
  dVar3 = (double)param_2[0x4a];
  local_f8 = (double)param_2[0x50];
  dVar7 = (double)param_2[0x51];
  dStack_c0 = (double)param_2[0x52];
  dVar16 = dVar6 + dVar6;
  dVar1 = dVar3 + dVar3;
  dVar15 = dVar5 * (dVar5 + dVar5);
  local_108 = (undefined2 *)((1.0 - (dVar3 * dVar1 + dVar6 * dVar16)) * local_f8);
  dVar4 = (1.0 - (dVar3 * dVar1 + dVar15)) * dVar7;
  local_b8 = (1.0 - (dVar15 + dVar6 * dVar16)) * dStack_c0;
  dVar15 = (double)param_2[0x4b];
  dVar3 = dVar1 * dVar15;
  dVar14 = (dVar5 + dVar5) * (double)param_2[0x4b];
  dVar15 = dVar16 * dVar15;
  dStack_100 = (dVar16 * dVar5 + dVar3) * local_f8;
  local_d8 = (dVar1 * dVar6 + dVar14) * dVar7;
  local_c8 = (dVar15 + (double)param_2[0x48] * dVar1) * dStack_c0;
  local_f8 = ((double)param_2[0x48] * dVar1 - dVar15) * local_f8;
  dStack_c0 = (dVar1 * dVar6 - dVar14) * dStack_c0;
  uStack_f0 = 0;
  local_e8._8_4_ = SUB84(dVar4,0);
  local_e8._0_8_ = (dVar16 * dVar5 - dVar3) * dVar7;
  local_e8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  uStack_d0 = 0;
  uStack_b0 = 0;
  local_a8 = param_2[0x4c];
  lStack_a0 = param_2[0x4d];
  local_98 = param_2[0x4e];
  uStack_90 = 0x3ff0000000000000;
  FUN_1456e85c8(param_1,&local_108);
  uVar13 = (**(code **)(*param_2 + 0x5e0))(param_2);
  *(undefined4 *)(param_1 + 8) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x2c4);
  local_108 = (undefined2 *)0x0;
  dStack_100 = 0.0;
  FUN_1401031ac(*param_1,0,&local_108);
  iVar11 = dStack_100._0_4_ + -1;
  puVar9 = local_108;
  if (dStack_100._0_4_ == 0) {
    iVar11 = 0;
    puVar9 = &DAT_149dfb77a;
  }
  uVar13 = FUN_144a49b4a(iVar11,puVar9);
  *(undefined4 *)(param_1 + 9) = uVar13;
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(bool *)(param_1 + 0x1c) = lVar10 == 0;
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e8488 FUN_1456e8488 body=318 status=ok
// SIG undefined FUN_1456e8488(void)

int * FUN_1456e8488(longlong param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(longlong *)(param_1 + 0xa8) != 0) && (lVar4 = FUN_144a79cc8(), lVar4 != 0)) &&
      (*(longlong *)(lVar4 + 0xc0) != 0)) &&
     (((lVar5 = FUN_1403358e4(), lVar5 != 0 && (*(longlong *)(lVar5 + 0x220) != 0)) ||
      ((*(longlong *)(lVar4 + 0x220) != 0 ||
       ((lVar5 = FUN_144a86a6e(*(undefined8 *)(lVar4 + 0xc0)), lVar5 != 0 &&
        (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xc0) + 0x30) + 0x220) != 0)))))))) {
    local_38 = *(undefined4 *)(param_1 + 0x2e0);
    uStack_34 = *(undefined4 *)(param_1 + 0x2e4);
    uStack_30 = *(undefined4 *)(param_1 + 0x2e8);
    uStack_2c = *(undefined4 *)(param_1 + 0x2ec);
    piVar6 = (int *)FUN_147ba5f5e();
    lVar4 = DAT_14cad20d8;
    if (piVar6 != (int *)0x0) {
      iVar1 = *piVar6;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar7 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar7 = (ulonglong)(bVar2 ^ 1);
      }
      iVar3 = *(int *)(lVar4 + uVar7 * 4);
      iVar8 = DAT_14ca84e64;
      if (iVar3 < DAT_14ca84e64) {
        iVar8 = iVar3;
      }
      iVar3 = 1;
      if (1 < iVar8) {
        iVar3 = iVar8;
      }
      if ((iVar1 == iVar3) || ((char)piVar6[10] != '\0')) goto LAB_1456e84af;
    }
  }
  piVar6 = (int *)0x0;
LAB_1456e84af:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar6;
}



// FUNCTION 1456e85c8 FUN_1456e85c8 body=1170 status=ok
// SIG undefined FUN_1456e85c8(void)

void FUN_1456e85c8(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_138 [30];
  undefined1 auStack_11a [2];
  undefined8 local_118;
  float fStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8 [18];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar1 = param_2[0xc];
  dVar2 = param_2[0xd];
  fVar7 = (float)dVar1;
  fVar9 = (float)dVar2;
  dVar3 = param_2[0xe];
  fVar11 = (float)dVar3;
  *(float *)(param_1 + 0x28) = fVar7;
  *(float *)(param_1 + 0x2c) = fVar9;
  *(float *)(param_1 + 0x30) = fVar11;
  *(float *)(param_1 + 0x34) = (float)(dVar1 - (double)fVar7);
  *(float *)(param_1 + 0x38) = (float)(dVar2 - (double)fVar9);
  *(float *)(param_1 + 0x3c) = (float)(dVar3 - (double)fVar11);
  local_d8[0] = (float)*param_2;
  local_d8[1] = (float)param_2[1];
  local_d8[2] = (float)param_2[2];
  local_d8[3] = (float)param_2[3];
  local_d8[4] = (float)param_2[4];
  local_d8[5] = (float)param_2[5];
  local_d8[6] = (float)param_2[6];
  local_d8[7] = (float)param_2[7];
  local_d8[8] = (float)param_2[8];
  local_d8[9] = (float)param_2[9];
  local_d8[10] = (float)param_2[10];
  local_d8[0xb] = (float)param_2[0xb];
  local_d8[0xf] = (float)param_2[0xf];
  local_d8[0xc] = 0.0;
  local_d8[0xd] = 0.0;
  local_d8[0xe] = 0.0;
  FUN_144906bb6(local_d8,&local_118);
  *(undefined8 *)(param_1 + 0x90) = local_e8;
  *(undefined8 *)(param_1 + 0x98) = uStack_e0;
  *(undefined8 *)(param_1 + 0x80) = local_f8;
  *(undefined8 *)(param_1 + 0x88) = uStack_f0;
  *(undefined8 *)(param_1 + 0x70) = local_108;
  *(undefined8 *)(param_1 + 0x78) = uStack_100;
  *(undefined1 **)(param_1 + 0x60) = local_118;
  *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_10c,fStack_110);
  fVar11 = DAT_14c846338;
  fVar9 = DAT_14c846330._4_4_;
  fVar7 = (float)DAT_14c846330;
  fVar12 = local_d8[4] * 0.0 + local_d8[0] + local_d8[8] * 0.0 + local_d8[0xc] * 0.0;
  fVar13 = local_d8[5] * 0.0 + local_d8[1] + local_d8[9] * 0.0 + local_d8[0xd] * 0.0;
  fVar14 = local_d8[6] * 0.0 + local_d8[2] + local_d8[10] * 0.0 + local_d8[0xe] * 0.0;
  fVar5 = fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13;
  if (((fVar5 != 1.0) || (fVar6 = fVar12, fVar8 = fVar13, fVar10 = fVar14, NAN(fVar5))) &&
     (fVar6 = (float)DAT_14c846330, fVar8 = DAT_14c846330._4_4_, fVar10 = DAT_14c846338,
     1e-08 <= fVar5)) {
    fVar5 = 1.0 / SQRT(fVar5);
    fVar6 = fVar12 * fVar5;
    fVar8 = fVar13 * fVar5;
    fVar10 = fVar14 * fVar5;
  }
  fVar5 = fVar8 * DAT_14c846330._4_4_;
  fVar13 = (float)DAT_14c846330 * fVar6;
  fVar12 = DAT_14c846338 * fVar10;
  *(float *)(param_1 + 0xb0) = fVar6;
  *(float *)(param_1 + 0xb4) = fVar8;
  *(float *)(param_1 + 0xb8) = fVar10;
  *(float *)(param_1 + 0xbc) = fVar12 + fVar13 + fVar5;
  fVar5 = local_d8[0xc] * 0.0 + (local_d8[0] * 0.0 - local_d8[4]) + local_d8[8] * 0.0;
  fVar12 = local_d8[0xd] * 0.0 + (local_d8[1] * 0.0 - local_d8[5]) + local_d8[9] * 0.0;
  fVar13 = local_d8[0xe] * 0.0 + (local_d8[2] * 0.0 - local_d8[6]) + local_d8[10] * 0.0;
  local_118 = &DAT_3f8000003f800000;
  fStack_110 = 1.0;
  lVar4 = 2;
  do {
    fVar14 = local_d8[lVar4] * local_d8[lVar4] +
             local_d8[lVar4 + -2] * local_d8[lVar4 + -2] +
             local_d8[lVar4 + -1] * local_d8[lVar4 + -1];
    *(uint *)(auStack_11a + lVar4) = -(uint)(1e-08 < fVar14) & (uint)SQRT(fVar14);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xe);
  *(float *)(param_1 + 0xa8) = fStack_110;
  *(undefined1 **)(param_1 + 0xa0) = local_118;
  fVar14 = fVar13 * fVar13 + fVar5 * fVar5 + fVar12 * fVar12;
  if (((fVar14 != 1.0) || (fVar6 = fVar5, fVar8 = fVar13, fVar10 = fVar12, NAN(fVar14))) &&
     (fVar6 = fVar7, fVar8 = fVar11, fVar10 = fVar9, 1e-08 <= fVar14)) {
    fVar7 = 1.0 / SQRT(fVar14);
    fVar6 = fVar7 * fVar5;
    fVar8 = fVar13 * fVar7;
    fVar10 = fVar12 * fVar7;
  }
  *(double *)(param_1 + 0xc0) = (double)(fVar6 * local_118._4_4_);
  *(double *)(param_1 + 200) = (double)(fVar10 * local_118._4_4_);
  *(double *)(param_1 + 0xd0) = (double)(fVar8 * local_118._4_4_);
  *(double *)(param_1 + 0xd8) = (double)(local_118._4_4_ / fStack_110);
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456e8a5c FUN_1456e8a5c body=761 status=ok
// SIG undefined FUN_1456e8a5c(void)

void FUN_1456e8a5c(longlong *param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  wchar_t *local_d8;
  int local_d0;
  wchar_t *local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar5 = FUN_1456e8d56();
  *(char *)(param_1 + 0x45) = cVar5;
  if (cVar5 == '\0') goto LAB_1456e8a91;
  lVar6 = FUN_14479d2ce(param_1 + 8);
  if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0xa8) == 0)) {
    pwVar10 = L"NULL";
    bVar4 = true;
  }
  else {
    puVar1 = *(undefined4 **)(*(longlong *)(lVar6 + 0xa8) + 8);
    puVar9 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar9 = puVar1;
    }
    local_c8 = (wchar_t *)0x0;
    uStack_c0 = 0;
    FUN_1400b2348(puVar9,&local_c8,1);
    pwVar10 = local_c8;
    if ((int)uStack_c0 == 0) {
      pwVar10 = L"";
    }
    bVar4 = false;
  }
  FUN_140230a18(local_80,pwVar10);
  lVar6 = param_1[6];
  lVar8 = *(longlong *)(lVar6 + 0x10);
  if (lVar8 == 0) {
    uVar7 = FUN_14656c012();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(lVar6 + 0x10) = lVar8;
  }
  if (*(longlong *)(lVar6 + 0x18) == 0) {
    if ((*(longlong *)(lVar6 + 8) != 0) && (lVar8 != 0)) {
      plVar2 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 != '\0')) {
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar6 + 8));
        *(longlong *)(lVar6 + 0x18) = lVar8;
        if (lVar8 != 0) goto LAB_1456e8b53;
        bVar3 = false;
        pwVar10 = L"NULL";
        goto LAB_1456e8b88;
      }
      *(undefined8 *)(lVar6 + 0x18) = 0;
    }
    pwVar10 = L"NULL";
    bVar3 = false;
  }
  else {
LAB_1456e8b53:
    local_e0 = *(undefined8 *)(param_1[6] + 8);
    FUN_1400021e4(&local_e0,&local_d8);
    pwVar10 = local_d8;
    if (local_d0 == 0) {
      pwVar10 = L"";
    }
    bVar3 = true;
  }
LAB_1456e8b88:
  FUN_140230a18(local_60,pwVar10);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"[S:{0}; UIDD:{1}]",&local_a0);
  if (param_1 + 0x46 == &local_90) {
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x46] != 0) {
      FUN_1400020a8();
    }
    param_1[0x46] = local_90;
    local_90 = 0;
    *(undefined4 *)(param_1 + 0x47) = (undefined4)local_88;
    *(undefined4 *)((longlong)param_1 + 0x23c) = local_88._4_4_;
    local_88 = 0;
  }
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  lVar6 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x20;
  } while (lVar6 != 0);
  if ((bVar3) && (local_d8 != (wchar_t *)0x0)) {
    FUN_1400020a8();
  }
  if ((!bVar4) && (local_c8 != (wchar_t *)0x0)) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x18))(param_1);
LAB_1456e8a91:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456e8d56 FUN_1456e8d56 body=87 status=ok
// SIG undefined FUN_1456e8d56(void)

undefined8 FUN_1456e8d56(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x40);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x88) != 0)) &&
     (*(longlong **)(lVar1 + 0x90) != (longlong *)0x0)) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(lVar1 + 0x90) + 8))();
    if (plVar2 != (longlong *)0x0) {
      lVar1 = (**(code **)(*plVar2 + 0x5d8))(plVar2);
      if (lVar1 != 0) {
        uVar3 = FUN_14124e3da(lVar1);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1456e8dae FUN_1456e8dae body=1037 status=ok
// SIG undefined FUN_1456e8dae(void)

undefined1 * FUN_1456e8dae(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x48] = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_142789544;
  local_88[0] = FUN_14276d564;
  FUN_140dc6248(0,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar3 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar3 = &local_68;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_14278955e;
  local_88[0] = FUN_14276d564;
  FUN_140dc6248(param_1,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar3 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar3 = &local_68;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  puVar1 = param_1 + 0x30;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_142789578;
  local_88[0] = FUN_14276d564;
  FUN_140dc6248(param_1,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar3 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar3 = &local_68;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_14278958e;
  local_88[0] = FUN_14276d564;
  FUN_140dc6248(puVar1,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar3 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar3 = &local_68;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_1427895a8;
  local_88[0] = FUN_14276d564;
  FUN_140dc6248(puVar1,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar3 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar3 = &local_68;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  puVar2 = param_1 + 0x18;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_1427895c2;
  local_88[0] = FUN_14276d564;
  FUN_140dc6248(puVar1,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar3 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar3 = &local_68;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_1427895d8;
  local_88[0] = FUN_14276d564;
  FUN_140dc6248(puVar2,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar3 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar3 = &local_68;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_1427895f2;
  local_88[0] = FUN_14276d564;
  FUN_140dc6248(puVar2,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar3 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar3 = &local_68;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_14278960c;
  local_88[0] = FUN_14276d564;
  FUN_140dc6248(puVar2,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar3 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar3 = &local_68;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_142789622;
  local_88[0] = FUN_14276d564;
  FUN_140dc6248(param_1 + 0x48,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar3 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar3 = &local_68;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_14278963c;
  local_88[0] = FUN_14276d564;
  FUN_140dc6248(puVar2,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar3 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar3 = &local_68;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e1d860;
  local_60 = FUN_142789656;
  local_88[0] = FUN_14276d564;
  FUN_140dc6248(param_1 + 0x48,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar3 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar3 = local_78;
    }
    (*(code *)(*pppuVar3)[2])(pppuVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e91bc FUN_1456e91bc body=24 status=ok
// SIG undefined FUN_1456e91bc(void)

void FUN_1456e91bc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001456e91d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1456e91d4 FUN_1456e91d4 body=122 status=ok
// SIG undefined FUN_1456e91d4(void)

void FUN_1456e91d4(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1456e924e FUN_1456e924e body=159 status=ok
// SIG undefined FUN_1456e924e(void)

void FUN_1456e924e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1456e928b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1456e928b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1456e928b:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456e92e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1456e92ee FUN_1456e92ee body=423 status=ok
// SIG undefined FUN_1456e92ee(void)

undefined8 * FUN_1456e92ee(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x7c007d007b0060;
  puVar1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_149e191e0;
  local_68[0] = FUN_142761cac;
  local_40 = param_1;
  FUN_140dc6248(puVar1,local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_149e19200;
  local_68[0] = FUN_142761ee0;
  local_40 = param_1;
  FUN_140dc6248(puVar1,local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_149e19220;
  local_68[0] = FUN_142762302;
  local_40 = param_1;
  FUN_140dc6248(puVar1,local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_149e19240;
  local_68[0] = FUN_1427624b0;
  local_40 = param_1;
  FUN_140dc6248(puVar1,local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar2 = &local_48;
    if (local_58 != (undefined ***)0x0) {
      pppuVar2 = local_58;
    }
    (*(code *)(*pppuVar2)[2])(pppuVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456e9496 FUN_1456e9496 body=592 status=ok
// SIG undefined FUN_1456e9496(void)

undefined8 * FUN_1456e9496(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  uVar3 = param_2[0xe];
  uVar4 = param_2[0xf];
  uVar5 = param_2[0x10];
  uVar6 = param_2[0x11];
  uVar7 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar7;
  param_1[0x10] = uVar5;
  param_1[0x11] = uVar6;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  return param_1;
}



// FUNCTION 1456e96e6 FUN_1456e96e6 body=65 status=ok
// SIG undefined FUN_1456e96e6(void)

void FUN_1456e96e6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + -0x18);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x9c) & 9) == 1)) {
    FUN_141062a52(lVar1,0);
    FUN_144907e2c(*(undefined8 *)(param_1 + -0x18),0,1,0);
    return;
  }
  return;
}



// FUNCTION 1456e9728 FUN_1456e9728 body=256 status=ok
// SIG undefined FUN_1456e9728(void)

void FUN_1456e9728(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x180) == '\x01') {
    dVar1 = param_2[2] * DAT_14c8463c8 + *param_2 * DAT_14c8463b8 + param_2[1] * DAT_14c8463c0;
    dVar2 = dVar1;
    if (1.0 <= dVar1) {
      dVar2 = 1.0;
    }
    acos((double)(-(ulonglong)(dVar1 < -1.0) & 0xbff0000000000000 |
                 ~-(ulonglong)(dVar1 < -1.0) & (ulonglong)dVar2));
  }
  return;
}



// FUNCTION 1456e9828 FUN_1456e9828 body=289 status=ok
// SIG undefined FUN_1456e9828(void)

double * FUN_1456e9828(double *param_1,longlong param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [28];
  int local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  longlong local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_2 == 0) || (*param_3 < 0)) || (param_3[1] < 0)) {
    param_1[2] = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  FUN_14381406a(&local_30);
  uVar5 = FUN_143814011(*(undefined8 *)(local_30 + 0x78),param_3);
  cVar4 = FUN_140181581(uVar5,param_3[1],0);
  if (cVar4 == '\0') {
    param_1[2] = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  }
  else {
    local_4c = param_3[1];
    FUN_144c52b10(local_68,uVar5,&local_4c,&local_48);
    *param_1 = (double)local_48;
    param_1[1] = (double)fStack_44;
    param_1[2] = (double)fStack_40;
  }
  if (local_28 == '\x01') {
    ReleaseSRWLockShared((PSRWLOCK)(local_30 + 0x250));
  }
  FUN_144afd2cc(&DAT_14cb1d000);
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1456e994a FUN_1456e994a body=97 status=ok
// SIG undefined FUN_1456e994a(void)

void FUN_1456e994a(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined8 uVar6;
  
  cVar5 = *param_1;
  if (cVar5 == '\x01') {
    dVar2 = *(double *)(param_1 + 0x18);
    dVar3 = *(double *)(param_1 + 0x10);
    dVar4 = *(double *)(param_1 + 8);
    *param_2 = 1;
    param_2[1] = (float)dVar4;
    param_2[2] = (float)dVar3;
    param_2[3] = (float)dVar2;
    return;
  }
  if (cVar5 != '\x02') {
    if (cVar5 != '\x03') {
      *param_2 = 0;
      return;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x24);
    *param_2 = 3;
    *(undefined8 *)(param_2 + 1) = uVar6;
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *param_2 = 2;
  param_2[1] = uVar1;
  return;
}


