// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1445e4006 FUN_1445e4006 body=53 status=ok
// SIG undefined FUN_1445e4006(void)

void FUN_1445e4006(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be08d90;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_ActivityInvite_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e403c FUN_1445e403c body=102 status=ok
// SIG undefined FUN_1445e403c(void)

undefined8 * FUN_1445e403c(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_ActivityInvite_PartyId(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e40a4 FUN_1445e40a4 body=685 status=ok
// SIG undefined FUN_1445e40a4(void)

void FUN_1445e40a4(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e42ed;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e41f5:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e4212;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e4214;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e41f5;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e4212:
  local_f0 = (undefined1 *)0x0;
LAB_1445e4214:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e42ed:
  local_100 = local_58;
  Discord_ActivityInvite_SetPartyId(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e4352 FUN_1445e4352 body=102 status=ok
// SIG undefined FUN_1445e4352(void)

undefined8 * FUN_1445e4352(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_ActivityInvite_SessionId(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e43ba FUN_1445e43ba body=685 status=ok
// SIG undefined FUN_1445e43ba(void)

void FUN_1445e43ba(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e4603;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e450b:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e4528;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e452a;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e450b;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e4528:
  local_f0 = (undefined1 *)0x0;
LAB_1445e452a:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e4603:
  local_100 = local_58;
  Discord_ActivityInvite_SetSessionId(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e4668 FUN_1445e4668 body=53 status=ok
// SIG undefined FUN_1445e4668(void)

void FUN_1445e4668(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be09030;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_ActivityAssets_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e469e FUN_1445e469e body=111 status=ok
// SIG undefined FUN_1445e469e(void)

undefined8 * FUN_1445e469e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_ActivityAssets_LargeImage(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e470e FUN_1445e470e body=685 status=ok
// SIG undefined FUN_1445e470e(void)

void FUN_1445e470e(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e4957;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e485f:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e487c;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e487e;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e485f;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e487c:
  local_f8 = (undefined1 *)0x0;
LAB_1445e487e:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e4957:
  local_f8 = local_58;
  Discord_ActivityAssets_SetLargeImage(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e49bc FUN_1445e49bc body=111 status=ok
// SIG undefined FUN_1445e49bc(void)

undefined8 * FUN_1445e49bc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_ActivityAssets_LargeText(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e4a2c FUN_1445e4a2c body=685 status=ok
// SIG undefined FUN_1445e4a2c(void)

void FUN_1445e4a2c(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e4c75;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e4b7d:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e4b9a;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e4b9c;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e4b7d;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e4b9a:
  local_f8 = (undefined1 *)0x0;
LAB_1445e4b9c:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e4c75:
  local_f8 = local_58;
  Discord_ActivityAssets_SetLargeText(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e4cda FUN_1445e4cda body=111 status=ok
// SIG undefined FUN_1445e4cda(void)

undefined8 * FUN_1445e4cda(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_ActivityAssets_LargeUrl(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e4d4a FUN_1445e4d4a body=685 status=ok
// SIG undefined FUN_1445e4d4a(void)

void FUN_1445e4d4a(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e4f93;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e4e9b:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e4eb8;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e4eba;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e4e9b;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e4eb8:
  local_f8 = (undefined1 *)0x0;
LAB_1445e4eba:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e4f93:
  local_f8 = local_58;
  Discord_ActivityAssets_SetLargeUrl(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e4ff8 FUN_1445e4ff8 body=111 status=ok
// SIG undefined FUN_1445e4ff8(void)

undefined8 * FUN_1445e4ff8(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_ActivityAssets_SmallImage(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e5068 FUN_1445e5068 body=685 status=ok
// SIG undefined FUN_1445e5068(void)

void FUN_1445e5068(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e52b1;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e51b9:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e51d6;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e51d8;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e51b9;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e51d6:
  local_f8 = (undefined1 *)0x0;
LAB_1445e51d8:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e52b1:
  local_f8 = local_58;
  Discord_ActivityAssets_SetSmallImage(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e5316 FUN_1445e5316 body=111 status=ok
// SIG undefined FUN_1445e5316(void)

undefined8 * FUN_1445e5316(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_ActivityAssets_SmallText(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e5386 FUN_1445e5386 body=685 status=ok
// SIG undefined FUN_1445e5386(void)

void FUN_1445e5386(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e55cf;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e54d7:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e54f4;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e54f6;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e54d7;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e54f4:
  local_f8 = (undefined1 *)0x0;
LAB_1445e54f6:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e55cf:
  local_f8 = local_58;
  Discord_ActivityAssets_SetSmallText(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e5634 FUN_1445e5634 body=111 status=ok
// SIG undefined FUN_1445e5634(void)

undefined8 * FUN_1445e5634(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_ActivityAssets_SmallUrl(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e56a4 FUN_1445e56a4 body=685 status=ok
// SIG undefined FUN_1445e56a4(void)

void FUN_1445e56a4(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e58ed;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e57f5:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e5812;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e5814;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e57f5;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e5812:
  local_f8 = (undefined1 *)0x0;
LAB_1445e5814:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e58ed:
  local_f8 = local_58;
  Discord_ActivityAssets_SetSmallUrl(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e5952 FUN_1445e5952 body=111 status=ok
// SIG undefined FUN_1445e5952(void)

undefined8 * FUN_1445e5952(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_ActivityAssets_InviteCoverImage(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e59c2 FUN_1445e59c2 body=685 status=ok
// SIG undefined FUN_1445e59c2(void)

void FUN_1445e59c2(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e5c0b;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e5b13:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e5b30;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e5b32;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e5b13;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e5b30:
  local_f8 = (undefined1 *)0x0;
LAB_1445e5b32:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e5c0b:
  local_f8 = local_58;
  Discord_ActivityAssets_SetInviteCoverImage(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e5c70 FUN_1445e5c70 body=53 status=ok
// SIG undefined FUN_1445e5c70(void)

void FUN_1445e5c70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be092d0;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_ActivityTimestamps_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e5ca6 FUN_1445e5ca6 body=53 status=ok
// SIG undefined FUN_1445e5ca6(void)

void FUN_1445e5ca6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be09570;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_ActivityParty_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e5cdc FUN_1445e5cdc body=102 status=ok
// SIG undefined FUN_1445e5cdc(void)

undefined8 * FUN_1445e5cdc(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_ActivityParty_Id(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e5d44 FUN_1445e5d44 body=685 status=ok
// SIG undefined FUN_1445e5d44(void)

void FUN_1445e5d44(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e5f8d;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e5e95:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e5eb2;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e5eb4;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e5e95;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e5eb2:
  local_f0 = (undefined1 *)0x0;
LAB_1445e5eb4:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e5f8d:
  local_100 = local_58;
  Discord_ActivityParty_SetId(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e5ff2 FUN_1445e5ff2 body=53 status=ok
// SIG undefined FUN_1445e5ff2(void)

void FUN_1445e5ff2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be09810;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_ActivitySecrets_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e6028 FUN_1445e6028 body=102 status=ok
// SIG undefined FUN_1445e6028(void)

undefined8 * FUN_1445e6028(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_ActivitySecrets_Join(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e6090 FUN_1445e6090 body=685 status=ok
// SIG undefined FUN_1445e6090(void)

void FUN_1445e6090(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e62d9;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e61e1:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e61fe;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e6200;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e61e1;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e61fe:
  local_f0 = (undefined1 *)0x0;
LAB_1445e6200:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e62d9:
  local_100 = local_58;
  Discord_ActivitySecrets_SetJoin(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e633e FUN_1445e633e body=53 status=ok
// SIG undefined FUN_1445e633e(void)

void FUN_1445e633e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be09ab0;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_ActivityButton_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e6374 FUN_1445e6374 body=102 status=ok
// SIG undefined FUN_1445e6374(void)

undefined8 * FUN_1445e6374(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_ActivityButton_Label(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e63dc FUN_1445e63dc body=685 status=ok
// SIG undefined FUN_1445e63dc(void)

void FUN_1445e63dc(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e6625;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e652d:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e654a;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e654c;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e652d;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e654a:
  local_f0 = (undefined1 *)0x0;
LAB_1445e654c:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e6625:
  local_100 = local_58;
  Discord_ActivityButton_SetLabel(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e668a FUN_1445e668a body=102 status=ok
// SIG undefined FUN_1445e668a(void)

undefined8 * FUN_1445e668a(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_ActivityButton_Url(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e66f2 FUN_1445e66f2 body=685 status=ok
// SIG undefined FUN_1445e66f2(void)

void FUN_1445e66f2(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e693b;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e6843:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e6860;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e6862;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e6843;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e6860:
  local_f0 = (undefined1 *)0x0;
LAB_1445e6862:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e693b:
  local_100 = local_58;
  Discord_ActivityButton_SetUrl(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e69a0 FUN_1445e69a0 body=53 status=ok
// SIG undefined FUN_1445e69a0(void)

void FUN_1445e69a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be09d50;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_Activity_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e69d6 FUN_1445e69d6 body=214 status=ok
// SIG undefined FUN_1445e69d6(void)

longlong * FUN_1445e69d6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  Discord_Activity_GetButtons(param_1 + 0x28,&local_38);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_30 & 0xffffffff);
  }
  if ((int)local_30 != 0) {
    FUN_14460057c(param_2);
  }
  if (local_30 != 0) {
    uVar3 = 0;
    do {
      lVar2 = FUN_1445e6aae(DAT_14c951640);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(local_38 + uVar3 * 8);
      *(undefined4 *)(lVar2 + 0x30) = 1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446006b0(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_30);
  }
  Discord_Free(local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e6aae FUN_1445e6aae body=175 status=ok
// SIG undefined FUN_1445e6aae(void)

undefined8 FUN_1445e6aae(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14459fcce();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e6b5e FUN_1445e6b5e body=102 status=ok
// SIG undefined FUN_1445e6b5e(void)

undefined8 * FUN_1445e6b5e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_Activity_Name(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e6bc6 FUN_1445e6bc6 body=685 status=ok
// SIG undefined FUN_1445e6bc6(void)

void FUN_1445e6bc6(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e6e0f;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e6d17:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e6d34;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e6d36;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e6d17;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e6d34:
  local_f0 = (undefined1 *)0x0;
LAB_1445e6d36:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e6e0f:
  local_100 = local_58;
  Discord_Activity_SetName(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e6e74 FUN_1445e6e74 body=111 status=ok
// SIG undefined FUN_1445e6e74(void)

undefined8 * FUN_1445e6e74(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_Activity_State(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e6ee4 FUN_1445e6ee4 body=685 status=ok
// SIG undefined FUN_1445e6ee4(void)

void FUN_1445e6ee4(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e712d;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e7035:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e7052;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e7054;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e7035;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e7052:
  local_f8 = (undefined1 *)0x0;
LAB_1445e7054:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e712d:
  local_f8 = local_58;
  Discord_Activity_SetState(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e7192 FUN_1445e7192 body=111 status=ok
// SIG undefined FUN_1445e7192(void)

undefined8 * FUN_1445e7192(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_Activity_StateUrl(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e7202 FUN_1445e7202 body=685 status=ok
// SIG undefined FUN_1445e7202(void)

void FUN_1445e7202(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e744b;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e7353:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e7370;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e7372;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e7353;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e7370:
  local_f8 = (undefined1 *)0x0;
LAB_1445e7372:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e744b:
  local_f8 = local_58;
  Discord_Activity_SetStateUrl(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e74b0 FUN_1445e74b0 body=111 status=ok
// SIG undefined FUN_1445e74b0(void)

undefined8 * FUN_1445e74b0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_Activity_Details(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e7520 FUN_1445e7520 body=685 status=ok
// SIG undefined FUN_1445e7520(void)

void FUN_1445e7520(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e7769;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e7671:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e768e;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e7690;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e7671;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e768e:
  local_f8 = (undefined1 *)0x0;
LAB_1445e7690:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e7769:
  local_f8 = local_58;
  Discord_Activity_SetDetails(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e77ce FUN_1445e77ce body=111 status=ok
// SIG undefined FUN_1445e77ce(void)

undefined8 * FUN_1445e77ce(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_Activity_DetailsUrl(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e783e FUN_1445e783e body=685 status=ok
// SIG undefined FUN_1445e783e(void)

void FUN_1445e783e(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e7a87;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e798f:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e79ac;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e79ae;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e798f;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e79ac:
  local_f8 = (undefined1 *)0x0;
LAB_1445e79ae:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e7a87:
  local_f8 = local_58;
  Discord_Activity_SetDetailsUrl(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e7aec FUN_1445e7aec body=96 status=ok
// SIG undefined FUN_1445e7aec(void)

longlong FUN_1445e7aec(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_Activity_Assets(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445e7b4d(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e7b4d FUN_1445e7b4d body=175 status=ok
// SIG undefined FUN_1445e7b4d(void)

undefined8 FUN_1445e7b4d(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14459d1ae();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e7bfe FUN_1445e7bfe body=96 status=ok
// SIG undefined FUN_1445e7bfe(void)

longlong FUN_1445e7bfe(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_Activity_Timestamps(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445e7c5f(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e7c5f FUN_1445e7c5f body=175 status=ok
// SIG undefined FUN_1445e7c5f(void)

undefined8 FUN_1445e7c5f(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14459dae2();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e7d10 FUN_1445e7d10 body=96 status=ok
// SIG undefined FUN_1445e7d10(void)

longlong FUN_1445e7d10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_Activity_Party(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445e7d71(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e7d71 FUN_1445e7d71 body=175 status=ok
// SIG undefined FUN_1445e7d71(void)

undefined8 FUN_1445e7d71(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14459eba8();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e7e22 FUN_1445e7e22 body=96 status=ok
// SIG undefined FUN_1445e7e22(void)

longlong FUN_1445e7e22(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_Activity_Secrets(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445e7e83(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e7e83 FUN_1445e7e83 body=175 status=ok
// SIG undefined FUN_1445e7e83(void)

undefined8 FUN_1445e7e83(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14459f22a();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e7f34 FUN_1445e7f34 body=53 status=ok
// SIG undefined FUN_1445e7f34(void)

void FUN_1445e7f34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be09ff0;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_ClientResult_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e7f6a FUN_1445e7f6a body=102 status=ok
// SIG undefined FUN_1445e7f6a(void)

undefined8 * FUN_1445e7f6a(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_ClientResult_ToString(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e7fd2 FUN_1445e7fd2 body=102 status=ok
// SIG undefined FUN_1445e7fd2(void)

undefined8 * FUN_1445e7fd2(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_ClientResult_Error(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e803a FUN_1445e803a body=685 status=ok
// SIG undefined FUN_1445e803a(void)

void FUN_1445e803a(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e8283;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e818b:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e81a8;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e81aa;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e818b;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e81a8:
  local_f0 = (undefined1 *)0x0;
LAB_1445e81aa:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e8283:
  local_100 = local_58;
  Discord_ClientResult_SetError(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e82e8 FUN_1445e82e8 body=102 status=ok
// SIG undefined FUN_1445e82e8(void)

undefined8 * FUN_1445e82e8(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_ClientResult_ResponseBody(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e8350 FUN_1445e8350 body=685 status=ok
// SIG undefined FUN_1445e8350(void)

void FUN_1445e8350(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e8599;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e84a1:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e84be;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e84c0;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e84a1;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e84be:
  local_f0 = (undefined1 *)0x0;
LAB_1445e84c0:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e8599:
  local_100 = local_58;
  Discord_ClientResult_SetResponseBody(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e85fe FUN_1445e85fe body=53 status=ok
// SIG undefined FUN_1445e85fe(void)

void FUN_1445e85fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0a290;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_AuthorizationCodeChallenge_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e8634 FUN_1445e8634 body=102 status=ok
// SIG undefined FUN_1445e8634(void)

undefined8 * FUN_1445e8634(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_AuthorizationCodeChallenge_Challenge(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e869c FUN_1445e869c body=685 status=ok
// SIG undefined FUN_1445e869c(void)

void FUN_1445e869c(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e88e5;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e87ed:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e880a;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e880c;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e87ed;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e880a:
  local_f0 = (undefined1 *)0x0;
LAB_1445e880c:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e88e5:
  local_100 = local_58;
  Discord_AuthorizationCodeChallenge_SetChallenge(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e894a FUN_1445e894a body=53 status=ok
// SIG undefined FUN_1445e894a(void)

void FUN_1445e894a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0a530;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_AuthorizationCodeVerifier_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e897f FUN_1445e897f body=175 status=ok
// SIG undefined FUN_1445e897f(void)

undefined8 FUN_1445e897f(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445a63f8();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e8a30 FUN_1445e8a30 body=115 status=ok
// SIG undefined FUN_1445e8a30(void)

undefined8 * FUN_1445e8a30(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  Discord_AuthorizationCodeVerifier_Verifier(param_1 + 0x28,&local_48);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_48,uStack_40 & 0xffffffff);
  Discord_Free(local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e8aa4 FUN_1445e8aa4 body=685 status=ok
// SIG undefined FUN_1445e8aa4(void)

void FUN_1445e8aa4(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e8ced;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e8bf5:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e8c12;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e8c14;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e8bf5;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e8c12:
  local_f0 = (undefined1 *)0x0;
LAB_1445e8c14:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e8ced:
  local_100 = local_58;
  Discord_AuthorizationCodeVerifier_SetVerifier(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e8d52 FUN_1445e8d52 body=53 status=ok
// SIG undefined FUN_1445e8d52(void)

void FUN_1445e8d52(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0a7d0;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_AuthorizationArgs_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e8d88 FUN_1445e8d88 body=102 status=ok
// SIG undefined FUN_1445e8d88(void)

undefined8 * FUN_1445e8d88(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_AuthorizationArgs_Scopes(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e8df0 FUN_1445e8df0 body=685 status=ok
// SIG undefined FUN_1445e8df0(void)

void FUN_1445e8df0(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e9039;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e8f41:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e8f5e;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e8f60;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e8f41;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e8f5e:
  local_f0 = (undefined1 *)0x0;
LAB_1445e8f60:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e9039:
  local_100 = local_58;
  Discord_AuthorizationArgs_SetScopes(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e909e FUN_1445e909e body=111 status=ok
// SIG undefined FUN_1445e909e(void)

undefined8 * FUN_1445e909e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_AuthorizationArgs_State(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e910e FUN_1445e910e body=685 status=ok
// SIG undefined FUN_1445e910e(void)

void FUN_1445e910e(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e9357;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e925f:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e927c;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e927e;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e925f;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e927c:
  local_f8 = (undefined1 *)0x0;
LAB_1445e927e:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e9357:
  local_f8 = local_58;
  Discord_AuthorizationArgs_SetState(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e93bc FUN_1445e93bc body=111 status=ok
// SIG undefined FUN_1445e93bc(void)

undefined8 * FUN_1445e93bc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_AuthorizationArgs_Nonce(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e942c FUN_1445e942c body=685 status=ok
// SIG undefined FUN_1445e942c(void)

void FUN_1445e942c(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e9675;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e957d:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e959a;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e959c;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e957d;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e959a:
  local_f8 = (undefined1 *)0x0;
LAB_1445e959c:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e9675:
  local_f8 = local_58;
  Discord_AuthorizationArgs_SetNonce(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e96da FUN_1445e96da body=96 status=ok
// SIG undefined FUN_1445e96da(void)

longlong FUN_1445e96da(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_AuthorizationArgs_CodeChallenge(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445e897f(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e973c FUN_1445e973c body=111 status=ok
// SIG undefined FUN_1445e973c(void)

undefined8 * FUN_1445e973c(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_AuthorizationArgs_CustomSchemeParam(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e97ac FUN_1445e97ac body=685 status=ok
// SIG undefined FUN_1445e97ac(void)

void FUN_1445e97ac(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445e99f5;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e98fd:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e991a;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445e991c;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445e98fd;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e991a:
  local_f8 = (undefined1 *)0x0;
LAB_1445e991c:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445e99f5:
  local_f8 = local_58;
  Discord_AuthorizationArgs_SetCustomSchemeParam(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e9a5a FUN_1445e9a5a body=53 status=ok
// SIG undefined FUN_1445e9a5a(void)

void FUN_1445e9a5a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0aa70;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_DeviceAuthorizationArgs_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e9a90 FUN_1445e9a90 body=102 status=ok
// SIG undefined FUN_1445e9a90(void)

undefined8 * FUN_1445e9a90(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_DeviceAuthorizationArgs_Scopes(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e9af8 FUN_1445e9af8 body=685 status=ok
// SIG undefined FUN_1445e9af8(void)

void FUN_1445e9af8(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445e9d41;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445e9c49:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445e9c66;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445e9c68;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445e9c49;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445e9c66:
  local_f0 = (undefined1 *)0x0;
LAB_1445e9c68:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445e9d41:
  local_100 = local_58;
  Discord_DeviceAuthorizationArgs_SetScopes(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445e9da6 FUN_1445e9da6 body=53 status=ok
// SIG undefined FUN_1445e9da6(void)

void FUN_1445e9da6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0ad10;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_VoiceStateHandle_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e9ddc FUN_1445e9ddc body=53 status=ok
// SIG undefined FUN_1445e9ddc(void)

void FUN_1445e9ddc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0afb0;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_VADThresholdSettings_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e9e12 FUN_1445e9e12 body=53 status=ok
// SIG undefined FUN_1445e9e12(void)

void FUN_1445e9e12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0b250;
  if (*(int *)(param_1 + 8) == 1) {
    Discord_Call_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445e9e48 FUN_1445e9e48 body=101 status=ok
// SIG undefined FUN_1445e9e48(void)

undefined8 * FUN_1445e9e48(undefined8 *param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_Call_ErrorToString(param_2,&local_28);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140a6aedf(param_1,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e9eae FUN_1445e9eae body=183 status=ok
// SIG undefined FUN_1445e9eae(void)

longlong * FUN_1445e9eae(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  Discord_Call_GetParticipants(param_1 + 0x28,&local_38);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_30 & 0xffffffff);
  }
  if ((int)local_30 != 0) {
    FUN_14460080a(param_2);
  }
  if (local_30 != 0) {
    uVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(local_38 + uVar3 * 8);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14460093e(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_30);
  }
  Discord_Free(local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445e9f67 FUN_1445e9f67 body=175 status=ok
// SIG undefined FUN_1445e9f67(void)

undefined8 FUN_1445e9f67(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445aa0d8();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ea018 FUN_1445ea018 body=96 status=ok
// SIG undefined FUN_1445ea018(void)

longlong FUN_1445ea018(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_Call_GetVoiceStateHandle(param_1 + 0x28,param_2,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445ea079(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ea079 FUN_1445ea079 body=175 status=ok
// SIG undefined FUN_1445ea079(void)

undefined8 FUN_1445ea079(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445a97f2();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ea12a FUN_1445ea12a body=95 status=ok
// SIG undefined FUN_1445ea12a(void)

void FUN_1445ea12a(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1445ea16e;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
LAB_1445ea16e:
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445ea194 FUN_1445ea194 body=95 status=ok
// SIG undefined FUN_1445ea194(void)

void FUN_1445ea194(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1445ea1d8;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
LAB_1445ea1d8:
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445ea212 FUN_1445ea212 body=101 status=ok
// SIG undefined FUN_1445ea212(void)

undefined8 * FUN_1445ea212(undefined8 *param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_Call_StatusToString(param_2,&local_28);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140a6aedf(param_1,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ea278 FUN_1445ea278 body=53 status=ok
// SIG undefined FUN_1445ea278(void)

void FUN_1445ea278(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0b4f0;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_ChannelHandle_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445ea2ae FUN_1445ea2ae body=102 status=ok
// SIG undefined FUN_1445ea2ae(void)

undefined8 * FUN_1445ea2ae(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_ChannelHandle_Name(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ea316 FUN_1445ea316 body=183 status=ok
// SIG undefined FUN_1445ea316(void)

longlong * FUN_1445ea316(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  Discord_ChannelHandle_Recipients(param_1 + 0x28,&local_38);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_30 & 0xffffffff);
  }
  if ((int)local_30 != 0) {
    FUN_14460080a(param_2);
  }
  if (local_30 != 0) {
    uVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(local_38 + uVar3 * 8);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14460093e(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_30);
  }
  Discord_Free(local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ea3d0 FUN_1445ea3d0 body=53 status=ok
// SIG undefined FUN_1445ea3d0(void)

void FUN_1445ea3d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0b790;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_GuildMinimal_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445ea406 FUN_1445ea406 body=102 status=ok
// SIG undefined FUN_1445ea406(void)

undefined8 * FUN_1445ea406(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_GuildMinimal_Name(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ea46e FUN_1445ea46e body=685 status=ok
// SIG undefined FUN_1445ea46e(void)

void FUN_1445ea46e(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445ea6b7;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445ea5bf:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445ea5dc;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445ea5de;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445ea5bf;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445ea5dc:
  local_f0 = (undefined1 *)0x0;
LAB_1445ea5de:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445ea6b7:
  local_100 = local_58;
  Discord_GuildMinimal_SetName(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445ea71c FUN_1445ea71c body=53 status=ok
// SIG undefined FUN_1445ea71c(void)

void FUN_1445ea71c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0ba30;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_GuildChannel_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445ea752 FUN_1445ea752 body=102 status=ok
// SIG undefined FUN_1445ea752(void)

undefined8 * FUN_1445ea752(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_GuildChannel_Name(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ea7ba FUN_1445ea7ba body=685 status=ok
// SIG undefined FUN_1445ea7ba(void)

void FUN_1445ea7ba(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445eaa03;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445ea90b:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445ea928;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445ea92a;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445ea90b;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445ea928:
  local_f0 = (undefined1 *)0x0;
LAB_1445ea92a:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445eaa03:
  local_100 = local_58;
  Discord_GuildChannel_SetName(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445eaa68 FUN_1445eaa68 body=96 status=ok
// SIG undefined FUN_1445eaa68(void)

longlong FUN_1445eaa68(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_GuildChannel_LinkedLobby(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445eaac9(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eaac9 FUN_1445eaac9 body=175 status=ok
// SIG undefined FUN_1445eaac9(void)

undefined8 FUN_1445eaac9(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445b1772();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eab7a FUN_1445eab7a body=53 status=ok
// SIG undefined FUN_1445eab7a(void)

void FUN_1445eab7a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0bcd0;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_LinkedLobby_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445eabb0 FUN_1445eabb0 body=53 status=ok
// SIG undefined FUN_1445eabb0(void)

void FUN_1445eabb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0bf70;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_LinkedChannel_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445eabe6 FUN_1445eabe6 body=102 status=ok
// SIG undefined FUN_1445eabe6(void)

undefined8 * FUN_1445eabe6(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_LinkedChannel_Name(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eac4e FUN_1445eac4e body=685 status=ok
// SIG undefined FUN_1445eac4e(void)

void FUN_1445eac4e(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445eae97;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445ead9f:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445eadbc;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445eadbe;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445ead9f;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445eadbc:
  local_f0 = (undefined1 *)0x0;
LAB_1445eadbe:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445eae97:
  local_100 = local_58;
  Discord_LinkedChannel_SetName(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445eaefc FUN_1445eaefc body=53 status=ok
// SIG undefined FUN_1445eaefc(void)

void FUN_1445eaefc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0c210;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_RelationshipHandle_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445eaf32 FUN_1445eaf32 body=96 status=ok
// SIG undefined FUN_1445eaf32(void)

longlong FUN_1445eaf32(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_RelationshipHandle_User(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445eaf93(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eaf93 FUN_1445eaf93 body=175 status=ok
// SIG undefined FUN_1445eaf93(void)

undefined8 FUN_1445eaf93(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445b3f16();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb044 FUN_1445eb044 body=53 status=ok
// SIG undefined FUN_1445eb044(void)

void FUN_1445eb044(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0c4b0;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_UserApplicationProfileHandle_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445eb07a FUN_1445eb07a body=102 status=ok
// SIG undefined FUN_1445eb07a(void)

undefined8 * FUN_1445eb07a(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_UserApplicationProfileHandle_AvatarHash(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb0e2 FUN_1445eb0e2 body=102 status=ok
// SIG undefined FUN_1445eb0e2(void)

undefined8 * FUN_1445eb0e2(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_UserApplicationProfileHandle_Metadata(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb14a FUN_1445eb14a body=111 status=ok
// SIG undefined FUN_1445eb14a(void)

undefined8 * FUN_1445eb14a(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_UserApplicationProfileHandle_ProviderId(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb1ba FUN_1445eb1ba body=102 status=ok
// SIG undefined FUN_1445eb1ba(void)

undefined8 * FUN_1445eb1ba(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_UserApplicationProfileHandle_ProviderIssuedUserId(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb222 FUN_1445eb222 body=102 status=ok
// SIG undefined FUN_1445eb222(void)

undefined8 * FUN_1445eb222(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_UserApplicationProfileHandle_Username(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb28a FUN_1445eb28a body=53 status=ok
// SIG undefined FUN_1445eb28a(void)

void FUN_1445eb28a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0c750;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_UserHandle_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445eb2c0 FUN_1445eb2c0 body=111 status=ok
// SIG undefined FUN_1445eb2c0(void)

undefined8 * FUN_1445eb2c0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_UserHandle_Avatar(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb330 FUN_1445eb330 body=101 status=ok
// SIG undefined FUN_1445eb330(void)

undefined8 * FUN_1445eb330(undefined8 *param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_UserHandle_AvatarTypeToString(param_2,&local_28);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140a6aedf(param_1,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb396 FUN_1445eb396 body=113 status=ok
// SIG undefined FUN_1445eb396(void)

undefined8 *
FUN_1445eb396(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_UserHandle_AvatarUrl(param_1 + 0x28,param_3,param_4,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb408 FUN_1445eb408 body=102 status=ok
// SIG undefined FUN_1445eb408(void)

undefined8 * FUN_1445eb408(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_UserHandle_DisplayName(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb470 FUN_1445eb470 body=96 status=ok
// SIG undefined FUN_1445eb470(void)

longlong FUN_1445eb470(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_UserHandle_GameActivity(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445eb4d1(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb4d1 FUN_1445eb4d1 body=175 status=ok
// SIG undefined FUN_1445eb4d1(void)

undefined8 FUN_1445eb4d1(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445a3a78();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb582 FUN_1445eb582 body=111 status=ok
// SIG undefined FUN_1445eb582(void)

undefined8 * FUN_1445eb582(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_UserHandle_GlobalName(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb5f2 FUN_1445eb5f2 body=175 status=ok
// SIG undefined FUN_1445eb5f2(void)

undefined8 FUN_1445eb5f2(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445b2822();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb6a2 FUN_1445eb6a2 body=214 status=ok
// SIG undefined FUN_1445eb6a2(void)

longlong * FUN_1445eb6a2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  Discord_UserHandle_UserApplicationProfiles(param_1 + 0x28,&local_38);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_30 & 0xffffffff);
  }
  if ((int)local_30 != 0) {
    FUN_144600ce8(param_2);
  }
  if (local_30 != 0) {
    uVar3 = 0;
    do {
      lVar2 = FUN_1445eb77a(DAT_14c951640);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(local_38 + uVar3 * 8);
      *(undefined4 *)(lVar2 + 0x30) = 1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_144600e1c(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_30);
  }
  Discord_Free(local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb77a FUN_1445eb77a body=175 status=ok
// SIG undefined FUN_1445eb77a(void)

undefined8 FUN_1445eb77a(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445b2e28();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb82a FUN_1445eb82a body=102 status=ok
// SIG undefined FUN_1445eb82a(void)

undefined8 * FUN_1445eb82a(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_UserHandle_Username(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb892 FUN_1445eb892 body=53 status=ok
// SIG undefined FUN_1445eb892(void)

void FUN_1445eb892(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0c9f0;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_LobbyMemberHandle_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445eb8c8 FUN_1445eb8c8 body=108 status=ok
// SIG undefined FUN_1445eb8c8(void)

undefined8 FUN_1445eb8c8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  Discord_LobbyMemberHandle_Metadata(param_1 + 0x28,&local_30);
  FUN_1445eb935(param_2,&local_30);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  Discord_FreeProperties();
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eb935 FUN_1445eb935 body=286 status=ok
// SIG undefined FUN_1445eb935(void)

undefined8 * FUN_1445eb935(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  longlong local_98 [4];
  longlong *local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (*param_2 != 0) {
    lVar2 = 8;
    uVar1 = 0;
    do {
      local_98[2] = 0;
      local_98[3] = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      FUN_140a6aedf(local_98 + 2,*(undefined8 *)((param_2[1] - 8) + lVar2),
                    *(undefined4 *)(param_2[1] + lVar2));
      FUN_140a6aedf(local_98,*(undefined8 *)((param_2[2] - 8) + lVar2),
                    *(undefined4 *)(param_2[2] + lVar2));
      local_78 = local_98 + 2;
      local_70 = local_98;
      FUN_1411f1c38(param_1,local_64,&local_78,0);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      if (local_98[2] != 0) {
        FUN_1400020a8();
      }
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar1 < *param_2);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eba54 FUN_1445eba54 body=96 status=ok
// SIG undefined FUN_1445eba54(void)

longlong FUN_1445eba54(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_LobbyMemberHandle_User(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445eaf93(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ebab6 FUN_1445ebab6 body=53 status=ok
// SIG undefined FUN_1445ebab6(void)

void FUN_1445ebab6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0cc90;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_LobbyHandle_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445ebaec FUN_1445ebaec body=96 status=ok
// SIG undefined FUN_1445ebaec(void)

longlong FUN_1445ebaec(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_LobbyHandle_GetCallInfoHandle(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445ebb4d(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ebb4d FUN_1445ebb4d body=175 status=ok
// SIG undefined FUN_1445ebb4d(void)

undefined8 FUN_1445ebb4d(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445dfc5c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ebbfe FUN_1445ebbfe body=96 status=ok
// SIG undefined FUN_1445ebbfe(void)

longlong FUN_1445ebbfe(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_LobbyHandle_GetLobbyMemberHandle(param_1 + 0x28,param_2,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445ebc5f(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ebc5f FUN_1445ebc5f body=175 status=ok
// SIG undefined FUN_1445ebc5f(void)

undefined8 FUN_1445ebc5f(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445b4328();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ebd10 FUN_1445ebd10 body=96 status=ok
// SIG undefined FUN_1445ebd10(void)

longlong FUN_1445ebd10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_LobbyHandle_LinkedChannel(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445ebd71(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ebd71 FUN_1445ebd71 body=175 status=ok
// SIG undefined FUN_1445ebd71(void)

undefined8 FUN_1445ebd71(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445b2464();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ebe22 FUN_1445ebe22 body=183 status=ok
// SIG undefined FUN_1445ebe22(void)

longlong * FUN_1445ebe22(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  Discord_LobbyHandle_LobbyMemberIds(param_1 + 0x28,&local_38);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_30 & 0xffffffff);
  }
  if ((int)local_30 != 0) {
    FUN_14460080a(param_2);
  }
  if (local_30 != 0) {
    uVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(local_38 + uVar3 * 8);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14460093e(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_30);
  }
  Discord_Free(local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ebedc FUN_1445ebedc body=214 status=ok
// SIG undefined FUN_1445ebedc(void)

longlong * FUN_1445ebedc(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  Discord_LobbyHandle_LobbyMembers(param_1 + 0x28,&local_38);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_30 & 0xffffffff);
  }
  if ((int)local_30 != 0) {
    FUN_144600f76(param_2);
  }
  if (local_30 != 0) {
    uVar3 = 0;
    do {
      lVar2 = FUN_1445ebc5f(DAT_14c951640);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(local_38 + uVar3 * 8);
      *(undefined4 *)(lVar2 + 0x30) = 1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446010aa(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_30);
  }
  Discord_Free(local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ebfb4 FUN_1445ebfb4 body=108 status=ok
// SIG undefined FUN_1445ebfb4(void)

undefined8 FUN_1445ebfb4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  Discord_LobbyHandle_Metadata(param_1 + 0x28,&local_30);
  FUN_1445eb935(param_2,&local_30);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  Discord_FreeProperties();
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec022 FUN_1445ec022 body=53 status=ok
// SIG undefined FUN_1445ec022(void)

void FUN_1445ec022(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0cf30;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_AdditionalContent_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445ec058 FUN_1445ec058 body=101 status=ok
// SIG undefined FUN_1445ec058(void)

undefined8 * FUN_1445ec058(undefined8 *param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_AdditionalContent_TypeToString(param_2,&local_28);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140a6aedf(param_1,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec0be FUN_1445ec0be body=111 status=ok
// SIG undefined FUN_1445ec0be(void)

undefined8 * FUN_1445ec0be(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_AdditionalContent_Title(param_1 + 0x28,&local_20);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140a6aedf(param_2,local_20,local_18);
    Discord_Free(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec12e FUN_1445ec12e body=685 status=ok
// SIG undefined FUN_1445ec12e(void)

void FUN_1445ec12e(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 **local_100;
  undefined1 *local_f8;
  longlong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f0 = 0;
      goto LAB_1445ec377;
    }
  }
  local_100 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445ec27f:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445ec29c;
      FUN_1446efa72(local_100,0,uVar5,1);
      local_f8 = local_60;
      goto LAB_1445ec29e;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
        if (cVar3 != '\0') goto LAB_1445ec27f;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f8);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445ec29c:
  local_f8 = (undefined1 *)0x0;
LAB_1445ec29e:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f8;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f8,&local_e4);
  } while (cVar3 != '\0');
  local_f0 = (longlong)(int)local_50;
LAB_1445ec377:
  local_f8 = local_58;
  Discord_AdditionalContent_SetTitle(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445ec3dc FUN_1445ec3dc body=53 status=ok
// SIG undefined FUN_1445ec3dc(void)

void FUN_1445ec3dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0d1d0;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_MessageHandle_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445ec412 FUN_1445ec412 body=96 status=ok
// SIG undefined FUN_1445ec412(void)

longlong FUN_1445ec412(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_MessageHandle_AdditionalContent(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445ec473(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec473 FUN_1445ec473 body=175 status=ok
// SIG undefined FUN_1445ec473(void)

undefined8 FUN_1445ec473(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445b5f48();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec524 FUN_1445ec524 body=96 status=ok
// SIG undefined FUN_1445ec524(void)

longlong FUN_1445ec524(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_MessageHandle_Author(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445eaf93(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec586 FUN_1445ec586 body=96 status=ok
// SIG undefined FUN_1445ec586(void)

longlong FUN_1445ec586(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_MessageHandle_Channel(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445ec5e7(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec5e7 FUN_1445ec5e7 body=175 status=ok
// SIG undefined FUN_1445ec5e7(void)

undefined8 FUN_1445ec5e7(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445ae64e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec698 FUN_1445ec698 body=102 status=ok
// SIG undefined FUN_1445ec698(void)

undefined8 * FUN_1445ec698(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_MessageHandle_Content(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec700 FUN_1445ec700 body=96 status=ok
// SIG undefined FUN_1445ec700(void)

longlong FUN_1445ec700(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_MessageHandle_Lobby(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445ec761(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec761 FUN_1445ec761 body=175 status=ok
// SIG undefined FUN_1445ec761(void)

undefined8 FUN_1445ec761(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445b4b72();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec812 FUN_1445ec812 body=108 status=ok
// SIG undefined FUN_1445ec812(void)

undefined8 FUN_1445ec812(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  Discord_MessageHandle_Metadata(param_1 + 0x28,&local_30);
  FUN_1445eb935(param_2,&local_30);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  Discord_FreeProperties();
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec880 FUN_1445ec880 body=108 status=ok
// SIG undefined FUN_1445ec880(void)

undefined8 FUN_1445ec880(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  Discord_MessageHandle_ModerationMetadata(param_1 + 0x28,&local_30);
  FUN_1445eb935(param_2,&local_30);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  Discord_FreeProperties();
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec8ee FUN_1445ec8ee body=102 status=ok
// SIG undefined FUN_1445ec8ee(void)

undefined8 * FUN_1445ec8ee(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_MessageHandle_RawContent(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec956 FUN_1445ec956 body=96 status=ok
// SIG undefined FUN_1445ec956(void)

longlong FUN_1445ec956(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_MessageHandle_Recipient(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445eaf93(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ec9b8 FUN_1445ec9b8 body=53 status=ok
// SIG undefined FUN_1445ec9b8(void)

void FUN_1445ec9b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0d470;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_AudioDevice_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445ec9ee FUN_1445ec9ee body=102 status=ok
// SIG undefined FUN_1445ec9ee(void)

undefined8 * FUN_1445ec9ee(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_AudioDevice_Id(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eca56 FUN_1445eca56 body=685 status=ok
// SIG undefined FUN_1445eca56(void)

void FUN_1445eca56(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445ecc9f;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445ecba7:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445ecbc4;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445ecbc6;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445ecba7;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445ecbc4:
  local_f0 = (undefined1 *)0x0;
LAB_1445ecbc6:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445ecc9f:
  local_100 = local_58;
  Discord_AudioDevice_SetId(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445ecd04 FUN_1445ecd04 body=102 status=ok
// SIG undefined FUN_1445ecd04(void)

undefined8 * FUN_1445ecd04(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_AudioDevice_Name(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ecd6c FUN_1445ecd6c body=685 status=ok
// SIG undefined FUN_1445ecd6c(void)

void FUN_1445ecd6c(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445ecfb5;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445ecebd:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445eceda;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445ecedc;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445ecebd;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445eceda:
  local_f0 = (undefined1 *)0x0;
LAB_1445ecedc:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445ecfb5:
  local_100 = local_58;
  Discord_AudioDevice_SetName(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445ed01a FUN_1445ed01a body=53 status=ok
// SIG undefined FUN_1445ed01a(void)

void FUN_1445ed01a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0d710;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_UserMessageSummary_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445ed050 FUN_1445ed050 body=53 status=ok
// SIG undefined FUN_1445ed050(void)

void FUN_1445ed050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0d9b0;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_ClientCreateOptions_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445ed086 FUN_1445ed086 body=102 status=ok
// SIG undefined FUN_1445ed086(void)

undefined8 * FUN_1445ed086(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_ClientCreateOptions_WebBase(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ed0ee FUN_1445ed0ee body=685 status=ok
// SIG undefined FUN_1445ed0ee(void)

void FUN_1445ed0ee(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445ed337;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445ed23f:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445ed25c;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445ed25e;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445ed23f;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445ed25c:
  local_f0 = (undefined1 *)0x0;
LAB_1445ed25e:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445ed337:
  local_100 = local_58;
  Discord_ClientCreateOptions_SetWebBase(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445ed39c FUN_1445ed39c body=102 status=ok
// SIG undefined FUN_1445ed39c(void)

undefined8 * FUN_1445ed39c(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_ClientCreateOptions_ApiBase(param_1 + 0x28,&local_28);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a6aedf(param_2,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ed404 FUN_1445ed404 body=685 status=ok
// SIG undefined FUN_1445ed404(void)

void FUN_1445ed404(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_2[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_f8 = 0;
      goto LAB_1445ed64d;
    }
  }
  local_108 = &local_60;
  local_60 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar6 = sVar4 & 0xffffffff;
  pwVar8 = _Str;
  do {
    iVar9 = (int)uVar6;
    if (iVar9 < 1) {
LAB_1445ed555:
      local_50 = local_e4;
      uVar5 = local_e4 + 1;
      if (uVar5 < 0x81) goto LAB_1445ed572;
      FUN_1446efa72(local_108,0,uVar5,1);
      local_f0 = local_60;
      goto LAB_1445ed574;
    }
    wVar1 = *pwVar8;
    uVar5 = (uint)(ushort)wVar1;
    pwVar7 = pwVar8 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
        if (cVar3 != '\0') goto LAB_1445ed555;
        break;
      }
      if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
        pwVar7 = pwVar8 + 2;
        uVar10 = iVar9 - 2;
      }
    }
    cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
    uVar6 = (ulonglong)uVar10;
    pwVar8 = pwVar7;
  } while (cVar3 != '\0');
  local_50 = 0xffffffff;
  uVar5 = 0;
LAB_1445ed572:
  local_f0 = (undefined1 *)0x0;
LAB_1445ed574:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar9 = (int)sVar4 + 1;
  local_e4 = uVar5;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar5 = (uint)(ushort)wVar1;
    pwVar8 = _Str + 1;
    iVar2 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar5,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = _Str + 2;
        iVar2 = iVar9 + -2;
      }
    }
    iVar9 = iVar2;
    _Str = pwVar8;
    cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
  } while (cVar3 != '\0');
  local_f8 = (longlong)(int)local_50;
LAB_1445ed64d:
  local_100 = local_58;
  Discord_ClientCreateOptions_SetApiBase(param_1 + 0x28);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445ed6b2 FUN_1445ed6b2 body=53 status=ok
// SIG undefined FUN_1445ed6b2(void)

void FUN_1445ed6b2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0dc50;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_Client_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445ed6e8 FUN_1445ed6e8 body=1189 status=ok
// SIG undefined FUN_1445ed6e8(void)

void FUN_1445ed6e8(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  wchar_t wVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  size_t sVar5;
  uint uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  undefined1 *local_1a8;
  longlong local_1a0;
  undefined1 **local_198;
  longlong local_190;
  undefined1 **local_188;
  uint local_17c;
  undefined1 *local_178 [16];
  undefined1 **local_f8;
  undefined1 **local_f0;
  uint local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(int *)(param_2 + 1) == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (pwVar9 == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar11 = 0;
  }
  else {
    sVar5 = wcslen(pwVar9);
    local_188 = (undefined1 **)((ulonglong)local_188 & 0xffffffff00000000);
    local_178[0] = (undefined1 *)CONCAT44(local_178[0]._4_4_,0x7fffffff);
    uVar7 = sVar5 & 0xffffffff;
    pwVar10 = pwVar9;
    do {
      iVar12 = (int)uVar7;
      if (iVar12 < 1) {
LAB_1445ed819:
        local_50 = (int)local_188;
        uVar6 = (int)local_188 + 1;
        if (uVar6 < 0x81) goto LAB_1445ed836;
        FUN_1446efa72(&local_60,0,uVar6,1);
        local_178[0] = local_60;
        goto LAB_1445ed838;
      }
      wVar1 = *pwVar10;
      uVar6 = (uint)(ushort)wVar1;
      pwVar8 = pwVar10 + 1;
      uVar13 = iVar12 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar12 == 1) {
          cVar4 = FUN_140024707(uVar6,&local_188,local_178);
          if (cVar4 != '\0') goto LAB_1445ed819;
          break;
        }
        if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
          pwVar8 = pwVar10 + 2;
          uVar13 = iVar12 - 2;
        }
      }
      cVar4 = FUN_140024707(uVar6,&local_188,local_178);
      uVar7 = (ulonglong)uVar13;
      pwVar10 = pwVar8;
    } while (cVar4 != '\0');
    local_50 = -1;
    uVar6 = 0;
LAB_1445ed836:
    local_178[0] = (undefined1 *)0x0;
LAB_1445ed838:
    if (local_178[0] == (undefined1 *)0x0) {
      local_178[0] = local_e0;
    }
    iVar12 = (int)sVar5 + 1;
    local_188 = (undefined1 **)CONCAT44(local_188._4_4_,uVar6);
    local_58 = local_178[0];
    do {
      if (iVar12 < 1) break;
      wVar1 = *pwVar9;
      uVar6 = (uint)(ushort)wVar1;
      pwVar10 = pwVar9 + 1;
      iVar3 = iVar12 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar12 == 1) {
          FUN_1400247af(uVar6,local_178,&local_188);
          break;
        }
        if (((ushort)*pwVar10 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar10 + 0xfca02400;
          pwVar10 = pwVar9 + 2;
          iVar3 = iVar12 + -2;
        }
      }
      iVar12 = iVar3;
      pwVar9 = pwVar10;
      cVar4 = FUN_1400247af(uVar6,local_178,&local_188);
    } while (cVar4 != '\0');
    lVar11 = (longlong)local_50;
  }
  puVar2 = local_58;
  if (*(int *)(param_3 + 1) == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)*param_3;
  }
  local_f8 = (undefined1 **)0x0;
  if (pwVar9 == (wchar_t *)0x0) {
    local_f0 = (undefined1 **)0x0;
    local_e8 = 0;
    local_190 = 0;
  }
  else {
    local_1b0 = param_1;
    sVar5 = wcslen(pwVar9);
    local_17c = 0;
    local_188 = (undefined1 **)CONCAT44(local_188._4_4_,0x7fffffff);
    uVar7 = sVar5 & 0xffffffff;
    pwVar10 = pwVar9;
    do {
      iVar12 = (int)uVar7;
      if (iVar12 < 1) {
LAB_1445eda1c:
        local_e8 = local_17c;
        uVar6 = local_17c + 1;
        if (uVar6 < 0x81) goto LAB_1445eda39;
        FUN_1446efa72(&local_f8,0,uVar6,1);
        local_188 = local_f8;
        goto LAB_1445eda3b;
      }
      wVar1 = *pwVar10;
      uVar6 = (uint)(ushort)wVar1;
      pwVar8 = pwVar10 + 1;
      uVar13 = iVar12 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar12 == 1) {
          cVar4 = FUN_140024707(uVar6,&local_17c,&local_188);
          if (cVar4 != '\0') goto LAB_1445eda1c;
          break;
        }
        if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
          uVar13 = iVar12 - 2;
          pwVar8 = pwVar10 + 2;
        }
      }
      pwVar10 = pwVar8;
      cVar4 = FUN_140024707(uVar6,&local_17c,&local_188);
      uVar7 = (ulonglong)uVar13;
    } while (cVar4 != '\0');
    local_e8 = 0xffffffff;
    uVar6 = 0;
LAB_1445eda39:
    local_188 = (undefined1 **)0x0;
LAB_1445eda3b:
    if (local_188 == (undefined1 **)0x0) {
      local_188 = local_178;
    }
    iVar12 = (int)sVar5 + 1;
    local_17c = uVar6;
    local_f0 = local_188;
    do {
      if (iVar12 < 1) break;
      wVar1 = *pwVar9;
      uVar6 = (uint)(ushort)wVar1;
      pwVar10 = pwVar9 + 1;
      iVar3 = iVar12 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar12 == 1) {
          FUN_1400247af(uVar6,&local_188,&local_17c);
          break;
        }
        if (((ushort)*pwVar10 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar10 + 0xfca02400;
          pwVar10 = pwVar9 + 2;
          iVar3 = iVar12 + -2;
        }
      }
      iVar12 = iVar3;
      pwVar9 = pwVar10;
      cVar4 = FUN_1400247af(uVar6,&local_188,&local_17c);
    } while (cVar4 != '\0');
    local_190 = (longlong)(int)local_e8;
    param_1 = local_1b0;
  }
  local_1a8 = puVar2;
  local_1a0 = lVar11;
  local_198 = local_f0;
  Discord_Client_InitWithBases(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 1;
  if (local_f8 != (undefined1 **)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445edb8e FUN_1445edb8e body=101 status=ok
// SIG undefined FUN_1445edb8e(void)

undefined8 * FUN_1445edb8e(undefined8 *param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_Client_ErrorToString(param_2,&local_28);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140a6aedf(param_1,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445edbf4 FUN_1445edbf4 body=98 status=ok
// SIG undefined FUN_1445edbf4(void)

undefined8 * FUN_1445edbf4(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_Client_GetDefaultAudioDeviceId(&local_28);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140a6aedf(param_1,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445edc58 FUN_1445edc58 body=98 status=ok
// SIG undefined FUN_1445edc58(void)

undefined8 * FUN_1445edc58(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_Client_GetDefaultCommunicationScopes(&local_28);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140a6aedf(param_1,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445edcbc FUN_1445edcbc body=98 status=ok
// SIG undefined FUN_1445edcbc(void)

undefined8 * FUN_1445edcbc(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_Client_GetDefaultPresenceScopes(&local_28);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140a6aedf(param_1,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445edd20 FUN_1445edd20 body=98 status=ok
// SIG undefined FUN_1445edd20(void)

undefined8 * FUN_1445edd20(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_Client_GetVersionHash(&local_28);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140a6aedf(param_1,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445edd84 FUN_1445edd84 body=101 status=ok
// SIG undefined FUN_1445edd84(void)

undefined8 * FUN_1445edd84(undefined8 *param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_Client_StatusToString(param_2,&local_28);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140a6aedf(param_1,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445eddea FUN_1445eddea body=101 status=ok
// SIG undefined FUN_1445eddea(void)

undefined8 * FUN_1445eddea(undefined8 *param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  Discord_Client_ThreadToString(param_2,&local_28);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140a6aedf(param_1,local_28,local_20);
  Discord_Free(local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ede64 FUN_1445ede64 body=105 status=ok
// SIG undefined FUN_1445ede64(void)

longlong FUN_1445ede64(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_Client_GetCall(param_1 + 0x28,param_2,&local_20);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445edece(DAT_14c951640);
    *(undefined4 *)(lVar2 + 0x28) = local_20;
    *(undefined4 *)(lVar2 + 0x2c) = uStack_1c;
    *(undefined4 *)(lVar2 + 0x30) = uStack_18;
    *(undefined4 *)(lVar2 + 0x34) = uStack_14;
    *(undefined8 *)(lVar2 + 0x38) = local_10;
    *(undefined4 *)(lVar2 + 0x40) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445edece FUN_1445edece body=175 status=ok
// SIG undefined FUN_1445edece(void)

undefined8 FUN_1445edece(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445ae220();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445edf7e FUN_1445edf7e body=235 status=ok
// SIG undefined FUN_1445edf7e(void)

longlong * FUN_1445edf7e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  Discord_Client_GetCalls(param_1 + 0x28,&local_40);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)local_38 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_38 & 0xffffffff);
  }
  if ((int)local_38 != 0) {
    FUN_144601204(param_2);
  }
  if (local_38 != 0) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      lVar6 = FUN_1445edece(DAT_14c951640);
      puVar1 = (undefined4 *)(local_40 + lVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar6 + 0x28) = *puVar1;
      *(undefined4 *)(lVar6 + 0x2c) = uVar3;
      *(undefined4 *)(lVar6 + 0x30) = uVar4;
      *(undefined4 *)(lVar6 + 0x34) = uVar5;
      *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(local_40 + 0x10 + lVar7);
      *(undefined4 *)(lVar6 + 0x40) = 1;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_144601338(param_2,iVar2);
      }
      *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar6;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (uVar8 < local_38);
  }
  Discord_Free(local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ee09e FUN_1445ee09e body=95 status=ok
// SIG undefined FUN_1445ee09e(void)

void FUN_1445ee09e(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1445ee0e2;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
LAB_1445ee0e2:
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445ee0fe FUN_1445ee0fe body=683 status=ok
// SIG undefined FUN_1445ee0fe(void)

void FUN_1445ee0fe(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  char cVar7;
  size_t sVar8;
  uint uVar9;
  ulonglong uVar10;
  wchar_t *_Str;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar11 = 0;
  }
  else {
    sVar8 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar10 = sVar8 & 0xffffffff;
    pwVar13 = _Str;
    do {
      iVar14 = (int)uVar10;
      if (iVar14 < 1) {
LAB_1445ee22f:
        local_50 = local_e4;
        uVar9 = local_e4 + 1;
        if (uVar9 < 0x81) goto LAB_1445ee24c;
        FUN_1446efa72(&local_60,0,uVar9,1);
        local_f0 = local_60;
        goto LAB_1445ee24e;
      }
      wVar1 = *pwVar13;
      uVar9 = (uint)(ushort)wVar1;
      pwVar12 = pwVar13 + 1;
      uVar15 = iVar14 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          cVar7 = FUN_140024707(uVar9,&local_e4,&local_f0);
          if (cVar7 != '\0') goto LAB_1445ee22f;
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = pwVar13 + 2;
          uVar15 = iVar14 - 2;
        }
      }
      cVar7 = FUN_140024707(uVar9,&local_e4,&local_f0);
      uVar10 = (ulonglong)uVar15;
      pwVar13 = pwVar12;
    } while (cVar7 != '\0');
    local_50 = 0xffffffff;
    uVar9 = 0;
LAB_1445ee24c:
    local_f0 = (undefined1 *)0x0;
LAB_1445ee24e:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar14 = (int)sVar8 + 1;
    local_e4 = uVar9;
    local_58 = local_f0;
    do {
      if (iVar14 < 1) break;
      wVar1 = *_Str;
      uVar9 = (uint)(ushort)wVar1;
      pwVar13 = _Str + 1;
      iVar6 = iVar14 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          FUN_1400247af(uVar9,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar13 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar13 + 0xfca02400;
          pwVar13 = _Str + 2;
          iVar6 = iVar14 + -2;
        }
      }
      iVar14 = iVar6;
      _Str = pwVar13;
      cVar7 = FUN_1400247af(uVar9,&local_f0,&local_e4);
    } while (cVar7 != '\0');
    lVar11 = (longlong)(int)local_50;
  }
  puVar5 = local_58;
  local_108 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *local_108 = *param_3;
  local_108[1] = uVar2;
  local_108[2] = uVar3;
  local_108[3] = uVar4;
  local_100 = puVar5;
  local_f8 = lVar11;
  Discord_Client_SetInputDevice(param_1 + 0x28,&local_100,FUN_1445f5864,&LAB_1445ee3aa);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445ee3b4 FUN_1445ee3b4 body=95 status=ok
// SIG undefined FUN_1445ee3b4(void)

void FUN_1445ee3b4(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1445ee3f8;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
LAB_1445ee3f8:
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445ee41e FUN_1445ee41e body=683 status=ok
// SIG undefined FUN_1445ee41e(void)

void FUN_1445ee41e(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  char cVar7;
  size_t sVar8;
  uint uVar9;
  ulonglong uVar10;
  wchar_t *_Str;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar11 = 0;
  }
  else {
    sVar8 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar10 = sVar8 & 0xffffffff;
    pwVar13 = _Str;
    do {
      iVar14 = (int)uVar10;
      if (iVar14 < 1) {
LAB_1445ee54f:
        local_50 = local_e4;
        uVar9 = local_e4 + 1;
        if (uVar9 < 0x81) goto LAB_1445ee56c;
        FUN_1446efa72(&local_60,0,uVar9,1);
        local_f0 = local_60;
        goto LAB_1445ee56e;
      }
      wVar1 = *pwVar13;
      uVar9 = (uint)(ushort)wVar1;
      pwVar12 = pwVar13 + 1;
      uVar15 = iVar14 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          cVar7 = FUN_140024707(uVar9,&local_e4,&local_f0);
          if (cVar7 != '\0') goto LAB_1445ee54f;
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = pwVar13 + 2;
          uVar15 = iVar14 - 2;
        }
      }
      cVar7 = FUN_140024707(uVar9,&local_e4,&local_f0);
      uVar10 = (ulonglong)uVar15;
      pwVar13 = pwVar12;
    } while (cVar7 != '\0');
    local_50 = 0xffffffff;
    uVar9 = 0;
LAB_1445ee56c:
    local_f0 = (undefined1 *)0x0;
LAB_1445ee56e:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar14 = (int)sVar8 + 1;
    local_e4 = uVar9;
    local_58 = local_f0;
    do {
      if (iVar14 < 1) break;
      wVar1 = *_Str;
      uVar9 = (uint)(ushort)wVar1;
      pwVar13 = _Str + 1;
      iVar6 = iVar14 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          FUN_1400247af(uVar9,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar13 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar13 + 0xfca02400;
          pwVar13 = _Str + 2;
          iVar6 = iVar14 + -2;
        }
      }
      iVar14 = iVar6;
      _Str = pwVar13;
      cVar7 = FUN_1400247af(uVar9,&local_f0,&local_e4);
    } while (cVar7 != '\0');
    lVar11 = (longlong)(int)local_50;
  }
  puVar5 = local_58;
  local_108 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *local_108 = *param_3;
  local_108[1] = uVar2;
  local_108[2] = uVar3;
  local_108[3] = uVar4;
  local_100 = puVar5;
  local_f8 = lVar11;
  Discord_Client_SetOutputDevice(param_1 + 0x28,&local_100,FUN_1445f59b8,&LAB_1445ee6ca);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445ee6de FUN_1445ee6de body=105 status=ok
// SIG undefined FUN_1445ee6de(void)

longlong FUN_1445ee6de(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = Discord_Client_StartCall(param_1 + 0x28,param_2,&local_20);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445edece(DAT_14c951640);
    *(undefined4 *)(lVar2 + 0x28) = local_20;
    *(undefined4 *)(lVar2 + 0x2c) = uStack_1c;
    *(undefined4 *)(lVar2 + 0x30) = uStack_18;
    *(undefined4 *)(lVar2 + 0x34) = uStack_14;
    *(undefined8 *)(lVar2 + 0x38) = local_10;
    *(undefined4 *)(lVar2 + 0x40) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ee748 FUN_1445ee748 body=236 status=ok
// SIG undefined FUN_1445ee748(void)

longlong FUN_1445ee748(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  code *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar5 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *puVar5 = *param_3;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  local_60 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *local_60 = *param_4;
  local_60[1] = uVar1;
  local_60[2] = uVar2;
  local_60[3] = uVar3;
  local_58 = &local_48;
  local_68 = &LAB_1445ee836;
  local_70 = FUN_1445f5bda;
  local_78 = puVar5;
  cVar4 = Discord_Client_StartCallWithAudioCallbacks
                    (param_1 + 0x28,param_2,FUN_1445f5b0a,&LAB_1445ee840);
  if (cVar4 == '\0') {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_1445edece(DAT_14c951640);
    *(undefined4 *)(lVar6 + 0x28) = local_48;
    *(undefined4 *)(lVar6 + 0x2c) = uStack_44;
    *(undefined4 *)(lVar6 + 0x30) = uStack_40;
    *(undefined4 *)(lVar6 + 0x34) = uStack_3c;
    *(undefined8 *)(lVar6 + 0x38) = local_38;
    *(undefined4 *)(lVar6 + 0x40) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ee854 FUN_1445ee854 body=175 status=ok
// SIG undefined FUN_1445ee854(void)

undefined8 FUN_1445ee854(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445a6dda();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445ee904 FUN_1445ee904 body=697 status=ok
// SIG undefined FUN_1445ee904(void)

void FUN_1445ee904(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  wchar_t *_Str;
  int iVar15;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar14 = 0;
  }
  else {
    local_108 = param_3;
    sVar9 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar12 = _Str;
    do {
      iVar15 = (int)uVar11;
      if (iVar15 < 1) {
LAB_1445eea39:
        local_50 = local_e4;
        uVar10 = local_e4 + 1;
        if (uVar10 < 0x81) goto LAB_1445eea52;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_f0 = local_60;
        goto LAB_1445eea54;
      }
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar6 = pwVar12 + 1;
      uVar13 = iVar15 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
          if (cVar8 != '\0') goto LAB_1445eea39;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar13 = iVar15 - 2;
          pwVar6 = pwVar12 + 2;
        }
      }
      pwVar12 = pwVar6;
      cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar13;
    } while (cVar8 != '\0');
    local_50 = 0xffffffff;
    uVar10 = 0;
LAB_1445eea52:
    local_f0 = (undefined1 *)0x0;
LAB_1445eea54:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar15 = (int)sVar9 + 1;
    local_e4 = uVar10;
    local_58 = local_f0;
    do {
      if (iVar15 < 1) break;
      wVar1 = *_Str;
      uVar10 = (uint)(ushort)wVar1;
      pwVar12 = _Str + 1;
      iVar7 = iVar15 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          FUN_1400247af(uVar10,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = _Str + 2;
          iVar7 = iVar15 + -2;
        }
      }
      iVar15 = iVar7;
      cVar8 = FUN_1400247af(uVar10,&local_f0,&local_e4);
      _Str = pwVar12;
    } while (cVar8 != '\0');
    lVar14 = (longlong)(int)local_50;
    param_3 = local_108;
  }
  puVar5 = local_58;
  local_110 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *local_110 = *param_4;
  local_110[1] = uVar2;
  local_110[2] = uVar3;
  local_110[3] = uVar4;
  local_118 = &LAB_1445eebbe;
  local_100 = puVar5;
  local_f8 = lVar14;
  Discord_Client_ExchangeChildToken(param_1 + 0x28,&local_100,param_3,FUN_1445f5e32);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445eebc8 FUN_1445eebc8 body=698 status=ok
// SIG undefined FUN_1445eebc8(void)

void FUN_1445eebc8(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined4 *param_4)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *_Str;
  int iVar15;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 *local_110;
  undefined1 local_101;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar13 = 0;
  }
  else {
    local_101 = param_2;
    sVar9 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar14 = _Str;
    do {
      iVar15 = (int)uVar11;
      if (iVar15 < 1) {
LAB_1445eecfd:
        local_50 = local_e4;
        uVar10 = local_e4 + 1;
        if (uVar10 < 0x81) goto LAB_1445eed16;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_f0 = local_60;
        goto LAB_1445eed18;
      }
      wVar1 = *pwVar14;
      uVar10 = (uint)(ushort)wVar1;
      pwVar6 = pwVar14 + 1;
      uVar12 = iVar15 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
          if (cVar8 != '\0') goto LAB_1445eecfd;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar12 = iVar15 - 2;
          pwVar6 = pwVar14 + 2;
        }
      }
      pwVar14 = pwVar6;
      cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar12;
    } while (cVar8 != '\0');
    local_50 = 0xffffffff;
    uVar10 = 0;
LAB_1445eed16:
    local_f0 = (undefined1 *)0x0;
LAB_1445eed18:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar15 = (int)sVar9 + 1;
    local_e4 = uVar10;
    local_58 = local_f0;
    do {
      if (iVar15 < 1) break;
      wVar1 = *_Str;
      uVar10 = (uint)(ushort)wVar1;
      pwVar14 = _Str + 1;
      iVar7 = iVar15 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          FUN_1400247af(uVar10,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
          pwVar14 = _Str + 2;
          iVar7 = iVar15 + -2;
        }
      }
      iVar15 = iVar7;
      cVar8 = FUN_1400247af(uVar10,&local_f0,&local_e4);
      _Str = pwVar14;
    } while (cVar8 != '\0');
    lVar13 = (longlong)(int)local_50;
    param_2 = local_101;
  }
  puVar5 = local_58;
  local_110 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *local_110 = *param_4;
  local_110[1] = uVar2;
  local_110[2] = uVar3;
  local_110[3] = uVar4;
  local_118 = &LAB_1445eee84;
  local_100 = puVar5;
  local_f8 = lVar13;
  Discord_Client_FetchCurrentUser(param_1 + 0x28,param_2,&local_100,FUN_1445f6010);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445eee8e FUN_1445eee8e body=725 status=ok
// SIG undefined FUN_1445eee8e(void)

void FUN_1445eee8e(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  wchar_t *_Str;
  int iVar15;
  undefined1 auStack_148 [32];
  code *local_128;
  undefined1 *local_120;
  undefined4 *local_118;
  undefined8 local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_4 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_4;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar14 = 0;
  }
  else {
    local_108 = param_2;
    sVar9 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar12 = _Str;
    do {
      iVar15 = (int)uVar11;
      if (iVar15 < 1) {
LAB_1445eefcc:
        local_50 = local_e4;
        uVar10 = local_e4 + 1;
        if (uVar10 < 0x81) goto LAB_1445eefe5;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_f0 = local_60;
        goto LAB_1445eefe7;
      }
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar6 = pwVar12 + 1;
      uVar13 = iVar15 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
          if (cVar8 != '\0') goto LAB_1445eefcc;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar13 = iVar15 - 2;
          pwVar6 = pwVar12 + 2;
        }
      }
      pwVar12 = pwVar6;
      cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar13;
    } while (cVar8 != '\0');
    local_50 = 0xffffffff;
    uVar10 = 0;
LAB_1445eefe5:
    local_f0 = (undefined1 *)0x0;
LAB_1445eefe7:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar15 = (int)sVar9 + 1;
    local_e4 = uVar10;
    local_58 = local_f0;
    do {
      if (iVar15 < 1) break;
      wVar1 = *_Str;
      uVar10 = (uint)(ushort)wVar1;
      pwVar12 = _Str + 1;
      iVar7 = iVar15 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          FUN_1400247af(uVar10,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = _Str + 2;
          iVar7 = iVar15 + -2;
        }
      }
      iVar15 = iVar7;
      cVar8 = FUN_1400247af(uVar10,&local_f0,&local_e4);
      _Str = pwVar12;
    } while (cVar8 != '\0');
    lVar14 = (longlong)(int)local_50;
    param_2 = local_108;
  }
  puVar5 = local_58;
  local_118 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *local_118 = *param_5;
  local_118[1] = uVar2;
  local_118[2] = uVar3;
  local_118[3] = uVar4;
  local_120 = &LAB_1445ef164;
  local_128 = FUN_1445f6158;
  local_100 = puVar5;
  local_f8 = lVar14;
  Discord_Client_GetProvisionalToken(param_1 + 0x28,param_2,param_3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445ef16e FUN_1445ef16e body=1938 status=ok
// SIG undefined FUN_1445ef16e(void)

void FUN_1445ef16e(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 ***pppuVar5;
  undefined1 **ppuVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_2b8 [32];
  undefined8 ***local_298;
  code *local_290;
  undefined1 *local_288;
  undefined4 *local_280;
  undefined1 *local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  undefined1 *local_250;
  longlong local_248;
  undefined1 **local_240;
  longlong local_238;
  undefined1 ***local_230;
  longlong local_228;
  undefined1 ***local_220;
  uint local_214;
  undefined1 **local_210 [16];
  undefined1 ***local_190;
  undefined1 ***local_188;
  uint local_180;
  undefined1 *local_178 [16];
  undefined1 **local_f8;
  undefined1 **local_f0;
  int local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (*(int *)(param_3 + 1) == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  local_260 = param_1;
  local_258 = param_2;
  if (pwVar12 == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_268 = 0;
  }
  else {
    sVar9 = wcslen(pwVar12);
    local_210[0] = (undefined1 **)((ulonglong)local_210[0] & 0xffffffff00000000);
    local_178[0] = (undefined1 *)CONCAT44(local_178[0]._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar14 = pwVar12;
    do {
      iVar18 = (int)uVar11;
      if (iVar18 < 1) {
LAB_1445ef2c5:
        local_50 = (int)local_210[0];
        uVar10 = (int)local_210[0] + 1;
        if (uVar10 < 0x81) goto LAB_1445ef2e1;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_178[0] = local_60;
        goto LAB_1445ef2e3;
      }
      wVar1 = *pwVar14;
      uVar10 = (uint)(ushort)wVar1;
      pwVar15 = pwVar14 + 1;
      uVar17 = iVar18 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          cVar8 = FUN_140024707(uVar10,local_210,local_178);
          if (cVar8 != '\0') goto LAB_1445ef2c5;
          break;
        }
        if (((ushort)*pwVar15 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar15 + 0xfca02400;
          pwVar15 = pwVar14 + 2;
          uVar17 = iVar18 - 2;
        }
      }
      cVar8 = FUN_140024707(uVar10,local_210,local_178);
      uVar11 = (ulonglong)uVar17;
      pwVar14 = pwVar15;
    } while (cVar8 != '\0');
    local_50 = -1;
    uVar10 = 0;
LAB_1445ef2e1:
    local_178[0] = (undefined1 *)0x0;
LAB_1445ef2e3:
    if (local_178[0] == (undefined1 *)0x0) {
      local_178[0] = local_e0;
    }
    iVar18 = (int)sVar9 + 1;
    local_210[0] = (undefined1 **)CONCAT44(local_210[0]._4_4_,uVar10);
    local_58 = local_178[0];
    do {
      if (iVar18 < 1) break;
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar14 = pwVar12 + 1;
      iVar7 = iVar18 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          FUN_1400247af(uVar10,local_178,local_210);
          break;
        }
        if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
          pwVar14 = pwVar12 + 2;
          iVar7 = iVar18 + -2;
        }
      }
      iVar18 = iVar7;
      cVar8 = FUN_1400247af(uVar10,local_178,local_210);
      pwVar12 = pwVar14;
    } while (cVar8 != '\0');
    local_268 = (longlong)local_50;
  }
  if (*(int *)(param_4 + 1) == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)*param_4;
  }
  local_f8 = (undefined1 **)0x0;
  local_270 = local_58;
  if (pwVar12 == (wchar_t *)0x0) {
    local_f0 = (undefined1 **)0x0;
    local_e8 = 0;
    lVar13 = 0;
  }
  else {
    sVar9 = wcslen(pwVar12);
    local_220 = (undefined1 ***)((ulonglong)local_220 & 0xffffffff00000000);
    local_210[0] = (undefined1 **)CONCAT44(local_210[0]._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar14 = pwVar12;
    do {
      iVar18 = (int)uVar11;
      if (iVar18 < 1) {
LAB_1445ef4f0:
        local_e8 = (int)local_220;
        uVar10 = (int)local_220 + 1;
        if (uVar10 < 0x81) goto LAB_1445ef510;
        FUN_1446efa72(&local_f8,0,uVar10,1);
        local_210[0] = local_f8;
        goto LAB_1445ef512;
      }
      wVar1 = *pwVar14;
      uVar10 = (uint)(ushort)wVar1;
      pwVar15 = pwVar14 + 1;
      uVar17 = iVar18 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_220,local_210);
          if (cVar8 != '\0') goto LAB_1445ef4f0;
          break;
        }
        if (((ushort)*pwVar15 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar15 + 0xfca02400;
          pwVar15 = pwVar14 + 2;
          uVar17 = iVar18 - 2;
        }
      }
      cVar8 = FUN_140024707(uVar10,&local_220,local_210);
      uVar11 = (ulonglong)uVar17;
      pwVar14 = pwVar15;
    } while (cVar8 != '\0');
    local_e8 = -1;
    uVar10 = 0;
LAB_1445ef510:
    local_210[0] = (undefined1 **)0x0;
LAB_1445ef512:
    if (local_210[0] == (undefined1 **)0x0) {
      local_210[0] = local_178;
    }
    iVar18 = (int)sVar9 + 1;
    local_220 = (undefined1 ***)CONCAT44(local_220._4_4_,uVar10);
    local_f0 = local_210[0];
    do {
      if (iVar18 < 1) break;
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar14 = pwVar12 + 1;
      iVar7 = iVar18 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          FUN_1400247af(uVar10,local_210,&local_220);
          break;
        }
        if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
          pwVar14 = pwVar12 + 2;
          iVar7 = iVar18 + -2;
        }
      }
      iVar18 = iVar7;
      pwVar12 = pwVar14;
      cVar8 = FUN_1400247af(uVar10,local_210,&local_220);
    } while (cVar8 != '\0');
    lVar13 = (longlong)local_e8;
  }
  ppuVar6 = local_f0;
  if (*(int *)(param_5 + 1) == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)*param_5;
  }
  local_190 = (undefined1 ***)0x0;
  if (pwVar12 == (wchar_t *)0x0) {
    local_188 = (undefined1 ***)0x0;
    local_180 = 0;
    lVar16 = 0;
  }
  else {
    sVar9 = wcslen(pwVar12);
    local_214 = 0;
    local_220 = (undefined1 ***)CONCAT44(local_220._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar14 = pwVar12;
    do {
      iVar18 = (int)uVar11;
      if (iVar18 < 1) {
LAB_1445ef70c:
        local_180 = local_214;
        uVar10 = local_214 + 1;
        if (uVar10 < 0x81) goto LAB_1445ef72c;
        FUN_1446efa72(&local_190,0,uVar10,1);
        local_220 = local_190;
        goto LAB_1445ef72e;
      }
      wVar1 = *pwVar14;
      uVar10 = (uint)(ushort)wVar1;
      pwVar15 = pwVar14 + 1;
      uVar17 = iVar18 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_214,&local_220);
          if (cVar8 != '\0') goto LAB_1445ef70c;
          break;
        }
        if (((ushort)*pwVar15 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar15 + 0xfca02400;
          uVar17 = iVar18 - 2;
          pwVar15 = pwVar14 + 2;
        }
      }
      pwVar14 = pwVar15;
      cVar8 = FUN_140024707(uVar10,&local_214,&local_220);
      uVar11 = (ulonglong)uVar17;
    } while (cVar8 != '\0');
    local_180 = 0xffffffff;
    uVar10 = 0;
LAB_1445ef72c:
    local_220 = (undefined1 ***)0x0;
LAB_1445ef72e:
    if (local_220 == (undefined1 ***)0x0) {
      local_220 = local_210;
    }
    iVar18 = (int)sVar9 + 1;
    local_214 = uVar10;
    local_188 = local_220;
    do {
      if (iVar18 < 1) break;
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar14 = pwVar12 + 1;
      iVar7 = iVar18 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          FUN_1400247af(uVar10,&local_220,&local_214);
          break;
        }
        if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
          pwVar14 = pwVar12 + 2;
          iVar7 = iVar18 + -2;
        }
      }
      iVar18 = iVar7;
      pwVar12 = pwVar14;
      cVar8 = FUN_1400247af(uVar10,&local_220,&local_214);
    } while (cVar8 != '\0');
    lVar16 = (longlong)(int)local_180;
  }
  pppuVar5 = local_188;
  local_280 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_6[1];
  uVar3 = param_6[2];
  uVar4 = param_6[3];
  *local_280 = *param_6;
  local_280[1] = uVar2;
  local_280[2] = uVar3;
  local_280[3] = uVar4;
  local_298 = &local_230;
  local_250 = local_270;
  local_248 = local_268;
  local_288 = &LAB_1445ef164;
  local_290 = FUN_1445f63a8;
  local_240 = ppuVar6;
  local_238 = lVar13;
  local_230 = pppuVar5;
  local_228 = lVar16;
  Discord_Client_GetToken(local_260 + 0x28,local_258);
  if (local_190 != (undefined1 ***)0x0) {
    FUN_1400020a8();
  }
  if (local_f8 != (undefined1 **)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445ef902 FUN_1445ef902 body=732 status=ok
// SIG undefined FUN_1445ef902(void)

void FUN_1445ef902(longlong param_1,longlong param_2,undefined1 param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  wchar_t *_Str;
  int iVar16;
  undefined1 auStack_148 [32];
  code *local_128;
  undefined1 *local_120;
  undefined4 *local_118;
  undefined1 local_101;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar15 = param_2 + 0x28;
  if (param_2 == 0) {
    lVar15 = 0;
  }
  if (*(int *)(param_4 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_4;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar13 = 0;
  }
  else {
    local_101 = param_3;
    sVar9 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar14 = _Str;
    do {
      iVar16 = (int)uVar11;
      if (iVar16 < 1) {
LAB_1445efa48:
        local_50 = local_e4;
        uVar10 = local_e4 + 1;
        if (uVar10 < 0x81) goto LAB_1445efa61;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_f0 = local_60;
        goto LAB_1445efa63;
      }
      wVar1 = *pwVar14;
      uVar10 = (uint)(ushort)wVar1;
      pwVar6 = pwVar14 + 1;
      uVar12 = iVar16 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar16 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
          if (cVar8 != '\0') goto LAB_1445efa48;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar12 = iVar16 - 2;
          pwVar6 = pwVar14 + 2;
        }
      }
      pwVar14 = pwVar6;
      cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar12;
    } while (cVar8 != '\0');
    local_50 = 0xffffffff;
    uVar10 = 0;
LAB_1445efa61:
    local_f0 = (undefined1 *)0x0;
LAB_1445efa63:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar16 = (int)sVar9 + 1;
    local_e4 = uVar10;
    local_58 = local_f0;
    do {
      if (iVar16 < 1) break;
      wVar1 = *_Str;
      uVar10 = (uint)(ushort)wVar1;
      pwVar14 = _Str + 1;
      iVar7 = iVar16 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar16 == 1) {
          FUN_1400247af(uVar10,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
          pwVar14 = _Str + 2;
          iVar7 = iVar16 + -2;
        }
      }
      iVar16 = iVar7;
      cVar8 = FUN_1400247af(uVar10,&local_f0,&local_e4);
      _Str = pwVar14;
    } while (cVar8 != '\0');
    lVar13 = (longlong)(int)local_50;
    param_3 = local_101;
  }
  puVar5 = local_58;
  local_118 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *local_118 = *param_5;
  local_118[1] = uVar2;
  local_118[2] = uVar3;
  local_118[3] = uVar4;
  local_120 = &LAB_1445ef164;
  local_128 = FUN_1445f6848;
  local_100 = puVar5;
  local_f8 = lVar13;
  Discord_Client_GetTokenFromDeviceProvisionalMerge(param_1 + 0x28,lVar15,param_3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445efbe0 FUN_1445efbe0 body=2556 status=ok
// SIG undefined FUN_1445efbe0(void)

void FUN_1445efbe0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,byte param_6,undefined8 *param_7,undefined4 *param_8)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  undefined1 ***pppuVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_378 [32];
  undefined8 ***local_358;
  uint local_350;
  undefined8 ***local_348;
  code *local_340;
  undefined1 *local_338;
  undefined4 *local_330;
  undefined1 **local_328;
  longlong local_320;
  undefined1 *local_318;
  longlong local_310;
  longlong local_308;
  undefined8 local_300;
  undefined1 *local_2f8;
  longlong local_2f0;
  undefined1 **local_2e8;
  longlong local_2e0;
  undefined1 ***local_2d8;
  longlong local_2d0;
  undefined8 ***local_2c8;
  longlong local_2c0;
  undefined8 ***local_2b8;
  uint local_2ac;
  undefined1 ***local_2a8 [16];
  undefined8 ***local_228;
  undefined8 ***local_220;
  uint local_218;
  undefined1 **local_210 [16];
  undefined1 ***local_190;
  undefined1 ***local_188;
  int local_180;
  undefined1 *local_178 [16];
  undefined1 **local_f8;
  undefined1 **local_f0;
  int local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (*(int *)(param_3 + 1) == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  local_308 = param_1;
  local_300 = param_2;
  if (pwVar12 == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_310 = 0;
  }
  else {
    sVar9 = wcslen(pwVar12);
    local_210[0] = (undefined1 **)((ulonglong)local_210[0] & 0xffffffff00000000);
    local_178[0] = (undefined1 *)CONCAT44(local_178[0]._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar14 = pwVar12;
    do {
      iVar18 = (int)uVar11;
      if (iVar18 < 1) {
LAB_1445efd26:
        local_50 = (int)local_210[0];
        uVar10 = (int)local_210[0] + 1;
        if (uVar10 < 0x81) goto LAB_1445efd42;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_178[0] = local_60;
        goto LAB_1445efd44;
      }
      wVar1 = *pwVar14;
      uVar10 = (uint)(ushort)wVar1;
      pwVar15 = pwVar14 + 1;
      uVar16 = iVar18 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          cVar8 = FUN_140024707(uVar10,local_210,local_178);
          if (cVar8 != '\0') goto LAB_1445efd26;
          break;
        }
        if (((ushort)*pwVar15 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar15 + 0xfca02400;
          pwVar15 = pwVar14 + 2;
          uVar16 = iVar18 - 2;
        }
      }
      cVar8 = FUN_140024707(uVar10,local_210,local_178);
      uVar11 = (ulonglong)uVar16;
      pwVar14 = pwVar15;
    } while (cVar8 != '\0');
    local_50 = -1;
    uVar10 = 0;
LAB_1445efd42:
    local_178[0] = (undefined1 *)0x0;
LAB_1445efd44:
    if (local_178[0] == (undefined1 *)0x0) {
      local_178[0] = local_e0;
    }
    iVar18 = (int)sVar9 + 1;
    local_210[0] = (undefined1 **)CONCAT44(local_210[0]._4_4_,uVar10);
    local_58 = local_178[0];
    do {
      if (iVar18 < 1) break;
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar14 = pwVar12 + 1;
      iVar7 = iVar18 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          FUN_1400247af(uVar10,local_178,local_210);
          break;
        }
        if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
          pwVar14 = pwVar12 + 2;
          iVar7 = iVar18 + -2;
        }
      }
      iVar18 = iVar7;
      cVar8 = FUN_1400247af(uVar10,local_178,local_210);
      pwVar12 = pwVar14;
    } while (cVar8 != '\0');
    local_310 = (longlong)local_50;
  }
  if (*(int *)(param_4 + 1) == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)*param_4;
  }
  local_f8 = (undefined1 **)0x0;
  local_318 = local_58;
  if (pwVar12 == (wchar_t *)0x0) {
    local_f0 = (undefined1 **)0x0;
    local_e8 = 0;
    local_320 = 0;
  }
  else {
    sVar9 = wcslen(pwVar12);
    local_2a8[0] = (undefined1 ***)((ulonglong)local_2a8[0] & 0xffffffff00000000);
    local_210[0] = (undefined1 **)CONCAT44(local_210[0]._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar14 = pwVar12;
    do {
      iVar18 = (int)uVar11;
      if (iVar18 < 1) {
LAB_1445eff51:
        local_e8 = (int)local_2a8[0];
        uVar10 = (int)local_2a8[0] + 1;
        if (uVar10 < 0x81) goto LAB_1445eff71;
        FUN_1446efa72(&local_f8,0,uVar10,1);
        local_210[0] = local_f8;
        goto LAB_1445eff73;
      }
      wVar1 = *pwVar14;
      uVar10 = (uint)(ushort)wVar1;
      pwVar15 = pwVar14 + 1;
      uVar11 = (ulonglong)(iVar18 - 1);
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          cVar8 = FUN_140024707(uVar10,local_2a8,local_210);
          if (cVar8 != '\0') goto LAB_1445eff51;
          break;
        }
        if (((ushort)*pwVar15 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar15 + 0xfca02400;
          pwVar15 = pwVar14 + 2;
          uVar11 = (ulonglong)(iVar18 - 2);
        }
      }
      cVar8 = FUN_140024707(uVar10,local_2a8,local_210);
      pwVar14 = pwVar15;
    } while (cVar8 != '\0');
    local_e8 = -1;
    uVar10 = 0;
LAB_1445eff71:
    local_210[0] = (undefined1 **)0x0;
LAB_1445eff73:
    if (local_210[0] == (undefined1 **)0x0) {
      local_210[0] = local_178;
    }
    iVar18 = (int)sVar9 + 1;
    local_2a8[0] = (undefined1 ***)CONCAT44(local_2a8[0]._4_4_,uVar10);
    local_f0 = local_210[0];
    do {
      if (iVar18 < 1) break;
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar14 = pwVar12 + 1;
      iVar7 = iVar18 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          FUN_1400247af(uVar10,local_210,local_2a8);
          break;
        }
        if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
          pwVar14 = pwVar12 + 2;
          iVar7 = iVar18 + -2;
        }
      }
      iVar18 = iVar7;
      pwVar12 = pwVar14;
      cVar8 = FUN_1400247af(uVar10,local_210,local_2a8);
    } while (cVar8 != '\0');
    local_320 = (longlong)local_e8;
  }
  if (*(int *)(param_5 + 1) == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)*param_5;
  }
  local_190 = (undefined1 ***)0x0;
  local_328 = local_f0;
  if (pwVar12 == (wchar_t *)0x0) {
    local_188 = (undefined1 ***)0x0;
    local_180 = 0;
    lVar13 = 0;
  }
  else {
    sVar9 = wcslen(pwVar12);
    local_2b8 = (undefined8 ***)((ulonglong)local_2b8 & 0xffffffff00000000);
    local_2a8[0] = (undefined1 ***)CONCAT44(local_2a8[0]._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar14 = pwVar12;
    do {
      iVar18 = (int)uVar11;
      if (iVar18 < 1) {
LAB_1445f017e:
        local_180 = (int)local_2b8;
        uVar10 = (int)local_2b8 + 1;
        if (uVar10 < 0x81) goto LAB_1445f019e;
        FUN_1446efa72(&local_190,0,uVar10,1);
        local_2a8[0] = local_190;
        goto LAB_1445f01a0;
      }
      wVar1 = *pwVar14;
      uVar10 = (uint)(ushort)wVar1;
      pwVar15 = pwVar14 + 1;
      uVar16 = iVar18 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_2b8,local_2a8);
          if (cVar8 != '\0') goto LAB_1445f017e;
          break;
        }
        if (((ushort)*pwVar15 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar15 + 0xfca02400;
          pwVar15 = pwVar14 + 2;
          uVar16 = iVar18 - 2;
        }
      }
      cVar8 = FUN_140024707(uVar10,&local_2b8,local_2a8);
      uVar11 = (ulonglong)uVar16;
      pwVar14 = pwVar15;
    } while (cVar8 != '\0');
    local_180 = -1;
    uVar10 = 0;
LAB_1445f019e:
    local_2a8[0] = (undefined1 ***)0x0;
LAB_1445f01a0:
    if (local_2a8[0] == (undefined1 ***)0x0) {
      local_2a8[0] = local_210;
    }
    iVar18 = (int)sVar9 + 1;
    local_2b8 = (undefined8 ***)CONCAT44(local_2b8._4_4_,uVar10);
    local_188 = local_2a8[0];
    do {
      if (iVar18 < 1) break;
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar14 = pwVar12 + 1;
      iVar7 = iVar18 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          FUN_1400247af(uVar10,local_2a8,&local_2b8);
          break;
        }
        if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
          pwVar14 = pwVar12 + 2;
          iVar7 = iVar18 + -2;
        }
      }
      iVar18 = iVar7;
      pwVar12 = pwVar14;
      cVar8 = FUN_1400247af(uVar10,local_2a8,&local_2b8);
    } while (cVar8 != '\0');
    lVar13 = (longlong)local_180;
  }
  pppuVar6 = local_188;
  if (*(int *)(param_7 + 1) == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)*param_7;
  }
  local_228 = (undefined1 ****)0x0;
  if (pwVar12 == (wchar_t *)0x0) {
    local_220 = (undefined1 ****)0x0;
    local_218 = 0;
    lVar17 = 0;
  }
  else {
    sVar9 = wcslen(pwVar12);
    local_2ac = 0;
    local_2b8 = (undefined8 ***)CONCAT44(local_2b8._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar14 = pwVar12;
    do {
      iVar18 = (int)uVar11;
      if (iVar18 < 1) {
LAB_1445f03a4:
        local_218 = local_2ac;
        uVar10 = local_2ac + 1;
        if (uVar10 < 0x81) goto LAB_1445f03c4;
        FUN_1446efa72(&local_228,0,uVar10,1);
        local_2b8 = local_228;
        goto LAB_1445f03c6;
      }
      wVar1 = *pwVar14;
      uVar10 = (uint)(ushort)wVar1;
      pwVar15 = pwVar14 + 1;
      uVar16 = iVar18 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_2ac,&local_2b8);
          if (cVar8 != '\0') goto LAB_1445f03a4;
          break;
        }
        if (((ushort)*pwVar15 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar15 + 0xfca02400;
          pwVar15 = pwVar14 + 2;
          uVar16 = iVar18 - 2;
        }
      }
      cVar8 = FUN_140024707(uVar10,&local_2ac,&local_2b8);
      uVar11 = (ulonglong)uVar16;
      pwVar14 = pwVar15;
    } while (cVar8 != '\0');
    local_218 = 0xffffffff;
    uVar10 = 0;
LAB_1445f03c4:
    local_2b8 = (undefined1 ****)0x0;
LAB_1445f03c6:
    if ((undefined1 ****)local_2b8 == (undefined1 ****)0x0) {
      local_2b8 = local_2a8;
    }
    iVar18 = (int)sVar9 + 1;
    local_2ac = uVar10;
    local_220 = local_2b8;
    do {
      if (iVar18 < 1) break;
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar14 = pwVar12 + 1;
      iVar7 = iVar18 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar18 == 1) {
          FUN_1400247af(uVar10,&local_2b8,&local_2ac);
          break;
        }
        if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
          pwVar14 = pwVar12 + 2;
          iVar7 = iVar18 + -2;
        }
      }
      iVar18 = iVar7;
      pwVar12 = pwVar14;
      cVar8 = FUN_1400247af(uVar10,&local_2b8,&local_2ac);
    } while (cVar8 != '\0');
    lVar17 = (longlong)(int)local_218;
  }
  pppuVar5 = local_220;
  local_330 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_8[1];
  uVar3 = param_8[2];
  uVar4 = param_8[3];
  *local_330 = *param_8;
  local_330[1] = uVar2;
  local_330[2] = uVar3;
  local_330[3] = uVar4;
  local_348 = &local_2c8;
  local_358 = &local_2d8;
  local_2e8 = local_328;
  local_2e0 = local_320;
  local_2f8 = local_318;
  local_2f0 = local_310;
  local_338 = &LAB_1445ef164;
  local_340 = FUN_1445f6a98;
  local_350 = (uint)param_6;
  local_2d8 = pppuVar6;
  local_2d0 = lVar13;
  local_2c8 = pppuVar5;
  local_2c0 = lVar17;
  Discord_Client_GetTokenFromProvisionalMerge(local_308 + 0x28,local_300);
  if ((undefined1 ****)local_228 != (undefined1 ****)0x0) {
    FUN_1400020a8();
  }
  if (local_190 != (undefined1 ***)0x0) {
    FUN_1400020a8();
  }
  if (local_f8 != (undefined1 **)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f05de FUN_1445f05de body=646 status=ok
// SIG undefined FUN_1445f05de(void)

void FUN_1445f05de(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_f8 = 0;
  }
  else {
    sVar4 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar6 = sVar4 & 0xffffffff;
    pwVar8 = _Str;
    do {
      iVar9 = (int)uVar6;
      if (iVar9 < 1) {
LAB_1445f070f:
        local_50 = local_e4;
        uVar5 = local_e4 + 1;
        if (uVar5 < 0x81) goto LAB_1445f072c;
        FUN_1446efa72(&local_60,0,uVar5,1);
        local_f0 = local_60;
        goto LAB_1445f072e;
      }
      wVar1 = *pwVar8;
      uVar5 = (uint)(ushort)wVar1;
      pwVar7 = pwVar8 + 1;
      uVar10 = iVar9 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar9 == 1) {
          cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
          if (cVar3 != '\0') goto LAB_1445f070f;
          break;
        }
        if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
          uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
          pwVar7 = pwVar8 + 2;
          uVar10 = iVar9 - 2;
        }
      }
      cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
      uVar6 = (ulonglong)uVar10;
      pwVar8 = pwVar7;
    } while (cVar3 != '\0');
    local_50 = 0xffffffff;
    uVar5 = 0;
LAB_1445f072c:
    local_f0 = (undefined1 *)0x0;
LAB_1445f072e:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar9 = (int)sVar4 + 1;
    local_e4 = uVar5;
    local_58 = local_f0;
    do {
      if (iVar9 < 1) break;
      wVar1 = *_Str;
      uVar5 = (uint)(ushort)wVar1;
      pwVar8 = _Str + 1;
      iVar2 = iVar9 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar9 == 1) {
          FUN_1400247af(uVar5,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
          uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
          pwVar8 = _Str + 2;
          iVar2 = iVar9 + -2;
        }
      }
      iVar9 = iVar2;
      _Str = pwVar8;
      cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
    } while (cVar3 != '\0');
    local_f8 = (longlong)(int)local_50;
  }
  local_100 = local_58;
  Discord_Client_OpenAuthorizeDeviceScreen(param_1 + 0x28,param_2);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f0866 FUN_1445f0866 body=698 status=ok
// SIG undefined FUN_1445f0866(void)

void FUN_1445f0866(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  wchar_t *_Str;
  int iVar15;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar14 = 0;
  }
  else {
    local_108 = param_2;
    sVar9 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar12 = _Str;
    do {
      iVar15 = (int)uVar11;
      if (iVar15 < 1) {
LAB_1445f099c:
        local_50 = local_e4;
        uVar10 = local_e4 + 1;
        if (uVar10 < 0x81) goto LAB_1445f09b5;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_f0 = local_60;
        goto LAB_1445f09b7;
      }
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar6 = pwVar12 + 1;
      uVar13 = iVar15 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
          if (cVar8 != '\0') goto LAB_1445f099c;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar13 = iVar15 - 2;
          pwVar6 = pwVar12 + 2;
        }
      }
      pwVar12 = pwVar6;
      cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar13;
    } while (cVar8 != '\0');
    local_50 = 0xffffffff;
    uVar10 = 0;
LAB_1445f09b5:
    local_f0 = (undefined1 *)0x0;
LAB_1445f09b7:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar15 = (int)sVar9 + 1;
    local_e4 = uVar10;
    local_58 = local_f0;
    do {
      if (iVar15 < 1) break;
      wVar1 = *_Str;
      uVar10 = (uint)(ushort)wVar1;
      pwVar12 = _Str + 1;
      iVar7 = iVar15 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          FUN_1400247af(uVar10,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = _Str + 2;
          iVar7 = iVar15 + -2;
        }
      }
      iVar15 = iVar7;
      cVar8 = FUN_1400247af(uVar10,&local_f0,&local_e4);
      _Str = pwVar12;
    } while (cVar8 != '\0');
    lVar14 = (longlong)(int)local_50;
    param_2 = local_108;
  }
  puVar5 = local_58;
  local_110 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *local_110 = *param_4;
  local_110[1] = uVar2;
  local_110[2] = uVar3;
  local_110[3] = uVar4;
  local_118 = &LAB_1445ef164;
  local_100 = puVar5;
  local_f8 = lVar14;
  Discord_Client_RefreshToken(param_1 + 0x28,param_2,&local_100,FUN_1445f6ce8);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f0b2c FUN_1445f0b2c body=698 status=ok
// SIG undefined FUN_1445f0b2c(void)

void FUN_1445f0b2c(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  wchar_t *_Str;
  int iVar15;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar14 = 0;
  }
  else {
    local_108 = param_2;
    sVar9 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar12 = _Str;
    do {
      iVar15 = (int)uVar11;
      if (iVar15 < 1) {
LAB_1445f0c62:
        local_50 = local_e4;
        uVar10 = local_e4 + 1;
        if (uVar10 < 0x81) goto LAB_1445f0c7b;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_f0 = local_60;
        goto LAB_1445f0c7d;
      }
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar6 = pwVar12 + 1;
      uVar13 = iVar15 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
          if (cVar8 != '\0') goto LAB_1445f0c62;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar13 = iVar15 - 2;
          pwVar6 = pwVar12 + 2;
        }
      }
      pwVar12 = pwVar6;
      cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar13;
    } while (cVar8 != '\0');
    local_50 = 0xffffffff;
    uVar10 = 0;
LAB_1445f0c7b:
    local_f0 = (undefined1 *)0x0;
LAB_1445f0c7d:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar15 = (int)sVar9 + 1;
    local_e4 = uVar10;
    local_58 = local_f0;
    do {
      if (iVar15 < 1) break;
      wVar1 = *_Str;
      uVar10 = (uint)(ushort)wVar1;
      pwVar12 = _Str + 1;
      iVar7 = iVar15 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          FUN_1400247af(uVar10,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = _Str + 2;
          iVar7 = iVar15 + -2;
        }
      }
      iVar15 = iVar7;
      cVar8 = FUN_1400247af(uVar10,&local_f0,&local_e4);
      _Str = pwVar12;
    } while (cVar8 != '\0');
    lVar14 = (longlong)(int)local_50;
    param_2 = local_108;
  }
  puVar5 = local_58;
  local_110 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *local_110 = *param_4;
  local_110[1] = uVar2;
  local_110[2] = uVar3;
  local_110[3] = uVar4;
  local_118 = &LAB_1445f0de8;
  local_100 = puVar5;
  local_f8 = lVar14;
  Discord_Client_RevokeToken(param_1 + 0x28,param_2,&local_100,FUN_1445f6fbc);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f0e06 FUN_1445f0e06 body=725 status=ok
// SIG undefined FUN_1445f0e06(void)

void FUN_1445f0e06(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  wchar_t *_Str;
  int iVar15;
  undefined1 auStack_148 [32];
  code *local_128;
  undefined1 *local_120;
  undefined4 *local_118;
  undefined8 local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_4 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_4;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar14 = 0;
  }
  else {
    local_108 = param_2;
    sVar9 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar12 = _Str;
    do {
      iVar15 = (int)uVar11;
      if (iVar15 < 1) {
LAB_1445f0f44:
        local_50 = local_e4;
        uVar10 = local_e4 + 1;
        if (uVar10 < 0x81) goto LAB_1445f0f5d;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_f0 = local_60;
        goto LAB_1445f0f5f;
      }
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar6 = pwVar12 + 1;
      uVar13 = iVar15 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
          if (cVar8 != '\0') goto LAB_1445f0f44;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar13 = iVar15 - 2;
          pwVar6 = pwVar12 + 2;
        }
      }
      pwVar12 = pwVar6;
      cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar13;
    } while (cVar8 != '\0');
    local_50 = 0xffffffff;
    uVar10 = 0;
LAB_1445f0f5d:
    local_f0 = (undefined1 *)0x0;
LAB_1445f0f5f:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar15 = (int)sVar9 + 1;
    local_e4 = uVar10;
    local_58 = local_f0;
    do {
      if (iVar15 < 1) break;
      wVar1 = *_Str;
      uVar10 = (uint)(ushort)wVar1;
      pwVar12 = _Str + 1;
      iVar7 = iVar15 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          FUN_1400247af(uVar10,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = _Str + 2;
          iVar7 = iVar15 + -2;
        }
      }
      iVar15 = iVar7;
      cVar8 = FUN_1400247af(uVar10,&local_f0,&local_e4);
      _Str = pwVar12;
    } while (cVar8 != '\0');
    lVar14 = (longlong)(int)local_50;
    param_2 = local_108;
  }
  puVar5 = local_58;
  local_118 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *local_118 = *param_5;
  local_118[1] = uVar2;
  local_118[2] = uVar3;
  local_118[3] = uVar4;
  local_120 = &LAB_1445f10dc;
  local_128 = FUN_1445f7170;
  local_100 = puVar5;
  local_f8 = lVar14;
  Discord_Client_UnmergeIntoProvisionalAccount(param_1 + 0x28,param_2,param_3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f10e6 FUN_1445f10e6 body=683 status=ok
// SIG undefined FUN_1445f10e6(void)

void FUN_1445f10e6(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  char cVar7;
  size_t sVar8;
  uint uVar9;
  ulonglong uVar10;
  wchar_t *_Str;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar11 = 0;
  }
  else {
    sVar8 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar10 = sVar8 & 0xffffffff;
    pwVar13 = _Str;
    do {
      iVar14 = (int)uVar10;
      if (iVar14 < 1) {
LAB_1445f1217:
        local_50 = local_e4;
        uVar9 = local_e4 + 1;
        if (uVar9 < 0x81) goto LAB_1445f1234;
        FUN_1446efa72(&local_60,0,uVar9,1);
        local_f0 = local_60;
        goto LAB_1445f1236;
      }
      wVar1 = *pwVar13;
      uVar9 = (uint)(ushort)wVar1;
      pwVar12 = pwVar13 + 1;
      uVar15 = iVar14 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          cVar7 = FUN_140024707(uVar9,&local_e4,&local_f0);
          if (cVar7 != '\0') goto LAB_1445f1217;
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = pwVar13 + 2;
          uVar15 = iVar14 - 2;
        }
      }
      cVar7 = FUN_140024707(uVar9,&local_e4,&local_f0);
      uVar10 = (ulonglong)uVar15;
      pwVar13 = pwVar12;
    } while (cVar7 != '\0');
    local_50 = 0xffffffff;
    uVar9 = 0;
LAB_1445f1234:
    local_f0 = (undefined1 *)0x0;
LAB_1445f1236:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar14 = (int)sVar8 + 1;
    local_e4 = uVar9;
    local_58 = local_f0;
    do {
      if (iVar14 < 1) break;
      wVar1 = *_Str;
      uVar9 = (uint)(ushort)wVar1;
      pwVar13 = _Str + 1;
      iVar6 = iVar14 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          FUN_1400247af(uVar9,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar13 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar13 + 0xfca02400;
          pwVar13 = _Str + 2;
          iVar6 = iVar14 + -2;
        }
      }
      iVar14 = iVar6;
      _Str = pwVar13;
      cVar7 = FUN_1400247af(uVar9,&local_f0,&local_e4);
    } while (cVar7 != '\0');
    lVar11 = (longlong)(int)local_50;
  }
  puVar5 = local_58;
  local_108 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *local_108 = *param_3;
  local_108[1] = uVar2;
  local_108[2] = uVar3;
  local_108[3] = uVar4;
  local_100 = puVar5;
  local_f8 = lVar11;
  Discord_Client_UpdateProvisionalAccountDisplayName
            (param_1 + 0x28,&local_100,FUN_1445f721c,&LAB_1445f1392);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f139c FUN_1445f139c body=698 status=ok
// SIG undefined FUN_1445f139c(void)

void FUN_1445f139c(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined4 *param_4)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *_Str;
  int iVar15;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 *local_110;
  undefined1 local_101;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar13 = 0;
  }
  else {
    local_101 = param_2;
    sVar9 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar14 = _Str;
    do {
      iVar15 = (int)uVar11;
      if (iVar15 < 1) {
LAB_1445f14d1:
        local_50 = local_e4;
        uVar10 = local_e4 + 1;
        if (uVar10 < 0x81) goto LAB_1445f14ea;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_f0 = local_60;
        goto LAB_1445f14ec;
      }
      wVar1 = *pwVar14;
      uVar10 = (uint)(ushort)wVar1;
      pwVar6 = pwVar14 + 1;
      uVar12 = iVar15 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
          if (cVar8 != '\0') goto LAB_1445f14d1;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar12 = iVar15 - 2;
          pwVar6 = pwVar14 + 2;
        }
      }
      pwVar14 = pwVar6;
      cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar12;
    } while (cVar8 != '\0');
    local_50 = 0xffffffff;
    uVar10 = 0;
LAB_1445f14ea:
    local_f0 = (undefined1 *)0x0;
LAB_1445f14ec:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar15 = (int)sVar9 + 1;
    local_e4 = uVar10;
    local_58 = local_f0;
    do {
      if (iVar15 < 1) break;
      wVar1 = *_Str;
      uVar10 = (uint)(ushort)wVar1;
      pwVar14 = _Str + 1;
      iVar7 = iVar15 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          FUN_1400247af(uVar10,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
          pwVar14 = _Str + 2;
          iVar7 = iVar15 + -2;
        }
      }
      iVar15 = iVar7;
      cVar8 = FUN_1400247af(uVar10,&local_f0,&local_e4);
      _Str = pwVar14;
    } while (cVar8 != '\0');
    lVar13 = (longlong)(int)local_50;
    param_2 = local_101;
  }
  puVar5 = local_58;
  local_110 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *local_110 = *param_4;
  local_110[1] = uVar2;
  local_110[2] = uVar3;
  local_110[3] = uVar4;
  local_118 = &LAB_1445f1658;
  local_100 = puVar5;
  local_f8 = lVar13;
  Discord_Client_UpdateToken(param_1 + 0x28,param_2,&local_100,FUN_1445f7318);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f166c FUN_1445f166c body=724 status=ok
// SIG undefined FUN_1445f166c(void)

void FUN_1445f166c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  wchar_t *_Str;
  int iVar15;
  undefined1 auStack_148 [32];
  code *local_128;
  undefined1 *local_120;
  undefined4 *local_118;
  undefined8 local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_4 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_4;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar14 = 0;
  }
  else {
    local_108 = param_3;
    sVar9 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar12 = _Str;
    do {
      iVar15 = (int)uVar11;
      if (iVar15 < 1) {
LAB_1445f17aa:
        local_50 = local_e4;
        uVar10 = local_e4 + 1;
        if (uVar10 < 0x81) goto LAB_1445f17c3;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_f0 = local_60;
        goto LAB_1445f17c5;
      }
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar6 = pwVar12 + 1;
      uVar13 = iVar15 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
          if (cVar8 != '\0') goto LAB_1445f17aa;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar13 = iVar15 - 2;
          pwVar6 = pwVar12 + 2;
        }
      }
      pwVar12 = pwVar6;
      cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar13;
    } while (cVar8 != '\0');
    local_50 = 0xffffffff;
    uVar10 = 0;
LAB_1445f17c3:
    local_f0 = (undefined1 *)0x0;
LAB_1445f17c5:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar15 = (int)sVar9 + 1;
    local_e4 = uVar10;
    local_58 = local_f0;
    do {
      if (iVar15 < 1) break;
      wVar1 = *_Str;
      uVar10 = (uint)(ushort)wVar1;
      pwVar12 = _Str + 1;
      iVar7 = iVar15 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          FUN_1400247af(uVar10,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = _Str + 2;
          iVar7 = iVar15 + -2;
        }
      }
      iVar15 = iVar7;
      cVar8 = FUN_1400247af(uVar10,&local_f0,&local_e4);
      _Str = pwVar12;
    } while (cVar8 != '\0');
    lVar14 = (longlong)(int)local_50;
    param_3 = local_108;
  }
  puVar5 = local_58;
  local_118 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *local_118 = *param_5;
  local_118[1] = uVar2;
  local_118[2] = uVar3;
  local_118[3] = uVar4;
  local_120 = &LAB_1445f1942;
  local_128 = FUN_1445f7470;
  local_100 = puVar5;
  local_f8 = lVar14;
  Discord_Client_EditUserMessage(param_1 + 0x28,param_2,param_3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f194c FUN_1445f194c body=96 status=ok
// SIG undefined FUN_1445f194c(void)

longlong FUN_1445f194c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_Client_GetChannelHandle(param_1 + 0x28,param_2,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445ec5e7(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f19b8 FUN_1445f19b8 body=96 status=ok
// SIG undefined FUN_1445f19b8(void)

longlong FUN_1445f19b8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_Client_GetMessageHandle(param_1 + 0x28,param_2,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445f1a19(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f1a19 FUN_1445f1a19 body=175 status=ok
// SIG undefined FUN_1445f1a19(void)

undefined8 FUN_1445f1a19(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445b6960();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f1ade FUN_1445f1ade body=145 status=ok
// SIG undefined FUN_1445f1ade(void)

void FUN_1445f1ade(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *puVar4 = *param_3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  puVar5 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *puVar5 = *param_4;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  Discord_Client_OpenMessageInDiscord
            (param_1 + 0x28,param_2,FUN_1445f7f6a,&LAB_1445f1b7a,puVar4,FUN_1445f7fee,&LAB_1445f1b70
             ,puVar5);
  return;
}



// FUNCTION 1445f1b84 FUN_1445f1b84 body=698 status=ok
// SIG undefined FUN_1445f1b84(void)

void FUN_1445f1b84(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  wchar_t *_Str;
  int iVar15;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar14 = 0;
  }
  else {
    local_108 = param_2;
    sVar9 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar12 = _Str;
    do {
      iVar15 = (int)uVar11;
      if (iVar15 < 1) {
LAB_1445f1cba:
        local_50 = local_e4;
        uVar10 = local_e4 + 1;
        if (uVar10 < 0x81) goto LAB_1445f1cd3;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_f0 = local_60;
        goto LAB_1445f1cd5;
      }
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar6 = pwVar12 + 1;
      uVar13 = iVar15 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
          if (cVar8 != '\0') goto LAB_1445f1cba;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar13 = iVar15 - 2;
          pwVar6 = pwVar12 + 2;
        }
      }
      pwVar12 = pwVar6;
      cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar13;
    } while (cVar8 != '\0');
    local_50 = 0xffffffff;
    uVar10 = 0;
LAB_1445f1cd3:
    local_f0 = (undefined1 *)0x0;
LAB_1445f1cd5:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar15 = (int)sVar9 + 1;
    local_e4 = uVar10;
    local_58 = local_f0;
    do {
      if (iVar15 < 1) break;
      wVar1 = *_Str;
      uVar10 = (uint)(ushort)wVar1;
      pwVar12 = _Str + 1;
      iVar7 = iVar15 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          FUN_1400247af(uVar10,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = _Str + 2;
          iVar7 = iVar15 + -2;
        }
      }
      iVar15 = iVar7;
      cVar8 = FUN_1400247af(uVar10,&local_f0,&local_e4);
      _Str = pwVar12;
    } while (cVar8 != '\0');
    lVar14 = (longlong)(int)local_50;
    param_2 = local_108;
  }
  puVar5 = local_58;
  local_110 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *local_110 = *param_4;
  local_110[1] = uVar2;
  local_110[2] = uVar3;
  local_110[3] = uVar4;
  local_118 = &LAB_1445f1e40;
  local_100 = puVar5;
  local_f8 = lVar14;
  Discord_Client_SendLobbyMessage(param_1 + 0x28,param_2,&local_100,FUN_1445f809a);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f1e4a FUN_1445f1e4a body=651 status=ok
// SIG undefined FUN_1445f1e4a(void)

longlong * FUN_1445f1e4a(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [40];
  uint local_80;
  int local_7c;
  ulonglong local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar7 = (longlong)(int)param_2[1] - (longlong)*(int *)((longlong)param_2 + 0x34);
  *param_1 = lVar7;
  lVar7 = Discord_Alloc(lVar7 * 0x10);
  param_1[1] = lVar7;
  lVar7 = Discord_Alloc(*param_1 << 4);
  param_1[2] = lVar7;
  local_60 = (uint *)(param_2 + 2);
  uVar3 = *(uint *)(param_2 + 5);
  local_70 = param_1;
  if (uVar3 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar12 = 0;
    uVar5 = 0;
  }
  else {
    puVar6 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar6 = local_60;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar12 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar12 = uVar3 - 1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar12 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_1445f1f41;
        iVar12 = iVar12 + 0x20;
        uVar5 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar14 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar5 & uVar5);
    uVar2 = uVar15 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar5 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar5) {
      uVar5 = uVar3;
    }
  }
  if (uVar5 != uVar3) {
    local_80 = 0xffffffff;
    lVar7 = 0;
    local_78 = (ulonglong)uVar3;
    local_68 = param_2;
    do {
      lVar10 = *local_68;
      local_7c = iVar12;
      FUN_1445f8152(&local_58,lVar10 + (longlong)(int)uVar5 * 0x28);
      plVar4 = local_68;
      puVar1 = (undefined4 *)(param_1[1] + lVar7 * 0x10);
      *puVar1 = local_58;
      puVar1[1] = uStack_54;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
      FUN_1445f8152(&local_58,lVar10 + (longlong)(int)uVar5 * 0x28 + 0x10);
      puVar1 = (undefined4 *)(param_1[2] + lVar7 * 0x10);
      *puVar1 = local_58;
      puVar1[1] = uStack_54;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
      local_80 = ~(uint)uVar15 & local_80;
      puVar6 = (uint *)plVar4[4];
      if (puVar6 == (uint *)0x0) {
        puVar6 = local_60;
      }
      uVar3 = *(uint *)(plVar4 + 5);
      iVar13 = (int)uVar14;
      lVar10 = (longlong)iVar13;
      uVar5 = puVar6[lVar10] & local_80;
      iVar12 = local_7c;
      if (uVar5 == 0) {
        iVar8 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar8 = uVar3 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar12 = local_7c + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar13 < iVar8) {
          lVar11 = 0;
          do {
            uVar5 = puVar6[lVar10 + lVar11 + 1];
            if (uVar5 != 0) {
              uVar14 = (ulonglong)(iVar13 + (int)lVar11 + 1);
              local_80 = 0xffffffff;
              goto LAB_1445f206f;
            }
            iVar12 = iVar12 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar9 - lVar10 != lVar11);
          local_80 = 0xffffffff;
          iVar13 = iVar9;
        }
        uVar14 = (ulonglong)(iVar13 + 1);
        uVar5 = uVar3;
      }
      else {
LAB_1445f206f:
        uVar15 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar15 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar5 = (iVar12 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar5) {
          uVar5 = uVar3;
        }
      }
      lVar7 = lVar7 + 1;
    } while (uVar5 != (uint)local_78);
  }
LAB_1445f1f41:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_70;
}



// FUNCTION 1445f20d6 FUN_1445f20d6 body=801 status=ok
// SIG undefined FUN_1445f20d6(void)

void FUN_1445f20d6(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  wchar_t wVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  wchar_t *pwVar4;
  int iVar5;
  char cVar6;
  size_t sVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  uint uVar11;
  longlong lVar12;
  wchar_t *_Str;
  int iVar13;
  undefined1 auStack_178 [32];
  code *local_158;
  undefined1 *local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined1 *local_138;
  longlong local_130;
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  uint local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar12 = 0;
  }
  else {
    local_140 = param_2;
    sVar7 = wcslen(_Str);
    local_110 = 0;
    local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
    uVar9 = sVar7 & 0xffffffff;
    pwVar10 = _Str;
    do {
      iVar13 = (int)uVar9;
      if (iVar13 < 1) {
LAB_1445f221a:
        local_50 = local_110;
        uVar8 = local_110 + 1;
        if (uVar8 < 0x81) goto LAB_1445f2233;
        FUN_1446efa72(&local_60,0,uVar8,1);
        local_f8 = local_60;
        goto LAB_1445f2235;
      }
      wVar1 = *pwVar10;
      uVar8 = (uint)(ushort)wVar1;
      pwVar4 = pwVar10 + 1;
      uVar11 = iVar13 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar13 == 1) {
          cVar6 = FUN_140024707(uVar8,&local_110,&local_f8);
          if (cVar6 != '\0') goto LAB_1445f221a;
          break;
        }
        if (((ushort)*pwVar4 & 0xfc00) == 0xdc00) {
          uVar8 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar4 + 0xfca02400;
          uVar11 = iVar13 - 2;
          pwVar4 = pwVar10 + 2;
        }
      }
      pwVar10 = pwVar4;
      cVar6 = FUN_140024707(uVar8,&local_110,&local_f8);
      uVar9 = (ulonglong)uVar11;
    } while (cVar6 != '\0');
    local_50 = 0xffffffff;
    uVar8 = 0;
LAB_1445f2233:
    local_f8 = (undefined1 *)0x0;
LAB_1445f2235:
    if (local_f8 == (undefined1 *)0x0) {
      local_f8 = local_e0;
    }
    iVar13 = (int)sVar7 + 1;
    local_110 = uVar8;
    local_58 = local_f8;
    do {
      if (iVar13 < 1) break;
      wVar1 = *_Str;
      uVar8 = (uint)(ushort)wVar1;
      pwVar10 = _Str + 1;
      iVar5 = iVar13 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar13 == 1) {
          FUN_1400247af(uVar8,&local_f8,&local_110);
          break;
        }
        if (((ushort)*pwVar10 & 0xfc00) == 0xdc00) {
          uVar8 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar10 + 0xfca02400;
          pwVar10 = _Str + 2;
          iVar5 = iVar13 + -2;
        }
      }
      iVar13 = iVar5;
      cVar6 = FUN_1400247af(uVar8,&local_f8,&local_110);
      _Str = pwVar10;
    } while (cVar6 != '\0');
    lVar12 = (longlong)(int)local_50;
    param_2 = local_140;
  }
  puVar3 = local_58;
  FUN_1445f1e4a(&local_110,param_4);
  local_148 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_5[1];
  *local_148 = *param_5;
  local_148[1] = uVar2;
  local_128 = local_110;
  uStack_124 = uStack_10c;
  uStack_120 = uStack_108;
  uStack_11c = uStack_104;
  local_118 = local_100;
  local_150 = &LAB_1445f1e40;
  local_158 = FUN_1445f83ce;
  local_138 = puVar3;
  local_130 = lVar12;
  Discord_Client_SendLobbyMessageWithMetadata(param_1 + 0x28,param_2);
  local_e8 = local_100;
  local_f8 = (undefined1 *)CONCAT44(uStack_10c,local_110);
  uStack_f0 = uStack_108;
  uStack_ec = uStack_104;
  Discord_FreeProperties();
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f23f8 FUN_1445f23f8 body=698 status=ok
// SIG undefined FUN_1445f23f8(void)

void FUN_1445f23f8(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  wchar_t *_Str;
  int iVar15;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar14 = 0;
  }
  else {
    local_108 = param_2;
    sVar9 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar12 = _Str;
    do {
      iVar15 = (int)uVar11;
      if (iVar15 < 1) {
LAB_1445f252e:
        local_50 = local_e4;
        uVar10 = local_e4 + 1;
        if (uVar10 < 0x81) goto LAB_1445f2547;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_f0 = local_60;
        goto LAB_1445f2549;
      }
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar6 = pwVar12 + 1;
      uVar13 = iVar15 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
          if (cVar8 != '\0') goto LAB_1445f252e;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar13 = iVar15 - 2;
          pwVar6 = pwVar12 + 2;
        }
      }
      pwVar12 = pwVar6;
      cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar13;
    } while (cVar8 != '\0');
    local_50 = 0xffffffff;
    uVar10 = 0;
LAB_1445f2547:
    local_f0 = (undefined1 *)0x0;
LAB_1445f2549:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar15 = (int)sVar9 + 1;
    local_e4 = uVar10;
    local_58 = local_f0;
    do {
      if (iVar15 < 1) break;
      wVar1 = *_Str;
      uVar10 = (uint)(ushort)wVar1;
      pwVar12 = _Str + 1;
      iVar7 = iVar15 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          FUN_1400247af(uVar10,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = _Str + 2;
          iVar7 = iVar15 + -2;
        }
      }
      iVar15 = iVar7;
      cVar8 = FUN_1400247af(uVar10,&local_f0,&local_e4);
      _Str = pwVar12;
    } while (cVar8 != '\0');
    lVar14 = (longlong)(int)local_50;
    param_2 = local_108;
  }
  puVar5 = local_58;
  local_110 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *local_110 = *param_4;
  local_110[1] = uVar2;
  local_110[2] = uVar3;
  local_110[3] = uVar4;
  local_118 = &LAB_1445f1e40;
  local_100 = puVar5;
  local_f8 = lVar14;
  Discord_Client_SendUserMessage(param_1 + 0x28,param_2,&local_100,FUN_1445f8486);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f26b4 FUN_1445f26b4 body=801 status=ok
// SIG undefined FUN_1445f26b4(void)

void FUN_1445f26b4(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  wchar_t wVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  wchar_t *pwVar4;
  int iVar5;
  char cVar6;
  size_t sVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  uint uVar11;
  longlong lVar12;
  wchar_t *_Str;
  int iVar13;
  undefined1 auStack_178 [32];
  code *local_158;
  undefined1 *local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined1 *local_138;
  longlong local_130;
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  uint local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar12 = 0;
  }
  else {
    local_140 = param_2;
    sVar7 = wcslen(_Str);
    local_110 = 0;
    local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
    uVar9 = sVar7 & 0xffffffff;
    pwVar10 = _Str;
    do {
      iVar13 = (int)uVar9;
      if (iVar13 < 1) {
LAB_1445f27f8:
        local_50 = local_110;
        uVar8 = local_110 + 1;
        if (uVar8 < 0x81) goto LAB_1445f2811;
        FUN_1446efa72(&local_60,0,uVar8,1);
        local_f8 = local_60;
        goto LAB_1445f2813;
      }
      wVar1 = *pwVar10;
      uVar8 = (uint)(ushort)wVar1;
      pwVar4 = pwVar10 + 1;
      uVar11 = iVar13 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar13 == 1) {
          cVar6 = FUN_140024707(uVar8,&local_110,&local_f8);
          if (cVar6 != '\0') goto LAB_1445f27f8;
          break;
        }
        if (((ushort)*pwVar4 & 0xfc00) == 0xdc00) {
          uVar8 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar4 + 0xfca02400;
          uVar11 = iVar13 - 2;
          pwVar4 = pwVar10 + 2;
        }
      }
      pwVar10 = pwVar4;
      cVar6 = FUN_140024707(uVar8,&local_110,&local_f8);
      uVar9 = (ulonglong)uVar11;
    } while (cVar6 != '\0');
    local_50 = 0xffffffff;
    uVar8 = 0;
LAB_1445f2811:
    local_f8 = (undefined1 *)0x0;
LAB_1445f2813:
    if (local_f8 == (undefined1 *)0x0) {
      local_f8 = local_e0;
    }
    iVar13 = (int)sVar7 + 1;
    local_110 = uVar8;
    local_58 = local_f8;
    do {
      if (iVar13 < 1) break;
      wVar1 = *_Str;
      uVar8 = (uint)(ushort)wVar1;
      pwVar10 = _Str + 1;
      iVar5 = iVar13 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar13 == 1) {
          FUN_1400247af(uVar8,&local_f8,&local_110);
          break;
        }
        if (((ushort)*pwVar10 & 0xfc00) == 0xdc00) {
          uVar8 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar10 + 0xfca02400;
          pwVar10 = _Str + 2;
          iVar5 = iVar13 + -2;
        }
      }
      iVar13 = iVar5;
      cVar6 = FUN_1400247af(uVar8,&local_f8,&local_110);
      _Str = pwVar10;
    } while (cVar6 != '\0');
    lVar12 = (longlong)(int)local_50;
    param_2 = local_140;
  }
  puVar3 = local_58;
  FUN_1445f1e4a(&local_110,param_4);
  local_148 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_5[1];
  *local_148 = *param_5;
  local_148[1] = uVar2;
  local_128 = local_110;
  uStack_124 = uStack_10c;
  uStack_120 = uStack_108;
  uStack_11c = uStack_104;
  local_118 = local_100;
  local_150 = &LAB_1445f1e40;
  local_158 = FUN_1445f853e;
  local_138 = puVar3;
  local_130 = lVar12;
  Discord_Client_SendUserMessageWithMetadata(param_1 + 0x28,param_2);
  local_e8 = local_100;
  local_f8 = (undefined1 *)CONCAT44(uStack_10c,local_110);
  uStack_f0 = uStack_108;
  uStack_ec = uStack_104;
  Discord_FreeProperties();
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f29e0 FUN_1445f29e0 body=95 status=ok
// SIG undefined FUN_1445f29e0(void)

void FUN_1445f29e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1445f2a24;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
LAB_1445f2a24:
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445f2a68 FUN_1445f2a68 body=650 status=ok
// SIG undefined FUN_1445f2a68(void)

undefined4 FUN_1445f2a68(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  size_t sVar5;
  uint uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  wchar_t *_Str;
  wchar_t *pwVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_f8 = 0;
  }
  else {
    sVar5 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar7 = sVar5 & 0xffffffff;
    pwVar9 = _Str;
    do {
      iVar10 = (int)uVar7;
      if (iVar10 < 1) {
LAB_1445f2b98:
        local_50 = local_e4;
        uVar6 = local_e4 + 1;
        if (uVar6 < 0x81) goto LAB_1445f2bb5;
        FUN_1446efa72(&local_60,0,uVar6,1);
        local_f0 = local_60;
        goto LAB_1445f2bb7;
      }
      wVar1 = *pwVar9;
      uVar6 = (uint)(ushort)wVar1;
      pwVar8 = pwVar9 + 1;
      uVar11 = iVar10 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar10 == 1) {
          cVar3 = FUN_140024707(uVar6,&local_e4,&local_f0);
          if (cVar3 != '\0') goto LAB_1445f2b98;
          break;
        }
        if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
          pwVar8 = pwVar9 + 2;
          uVar11 = iVar10 - 2;
        }
      }
      cVar3 = FUN_140024707(uVar6,&local_e4,&local_f0);
      uVar7 = (ulonglong)uVar11;
      pwVar9 = pwVar8;
    } while (cVar3 != '\0');
    local_50 = 0xffffffff;
    uVar6 = 0;
LAB_1445f2bb5:
    local_f0 = (undefined1 *)0x0;
LAB_1445f2bb7:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar10 = (int)sVar5 + 1;
    local_e4 = uVar6;
    local_58 = local_f0;
    do {
      if (iVar10 < 1) break;
      wVar1 = *_Str;
      uVar6 = (uint)(ushort)wVar1;
      pwVar9 = _Str + 1;
      iVar2 = iVar10 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar10 == 1) {
          FUN_1400247af(uVar6,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar9 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar9 + 0xfca02400;
          pwVar9 = _Str + 2;
          iVar2 = iVar10 + -2;
        }
      }
      iVar10 = iVar2;
      _Str = pwVar9;
      cVar3 = FUN_1400247af(uVar6,&local_f0,&local_e4);
    } while (cVar3 != '\0');
    local_f8 = (longlong)(int)local_50;
  }
  local_100 = local_58;
  uVar4 = Discord_Client_SetLogDir(param_1 + 0x28,&local_100,param_3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1445f2cf4 FUN_1445f2cf4 body=95 status=ok
// SIG undefined FUN_1445f2cf4(void)

void FUN_1445f2cf4(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1445f2d38;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
LAB_1445f2d38:
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445f2d5e FUN_1445f2d5e body=646 status=ok
// SIG undefined FUN_1445f2d5e(void)

void FUN_1445f2d5e(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  wchar_t *_Str;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_f8 = 0;
  }
  else {
    sVar4 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar6 = sVar4 & 0xffffffff;
    pwVar8 = _Str;
    do {
      iVar9 = (int)uVar6;
      if (iVar9 < 1) {
LAB_1445f2e8e:
        local_50 = local_e4;
        uVar5 = local_e4 + 1;
        if (uVar5 < 0x81) goto LAB_1445f2eab;
        FUN_1446efa72(&local_60,0,uVar5,1);
        local_f0 = local_60;
        goto LAB_1445f2ead;
      }
      wVar1 = *pwVar8;
      uVar5 = (uint)(ushort)wVar1;
      pwVar7 = pwVar8 + 1;
      uVar10 = iVar9 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar9 == 1) {
          cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
          if (cVar3 != '\0') goto LAB_1445f2e8e;
          break;
        }
        if (((ushort)*pwVar7 & 0xfc00) == 0xdc00) {
          uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar7 + 0xfca02400;
          pwVar7 = pwVar8 + 2;
          uVar10 = iVar9 - 2;
        }
      }
      cVar3 = FUN_140024707(uVar5,&local_e4,&local_f0);
      uVar6 = (ulonglong)uVar10;
      pwVar8 = pwVar7;
    } while (cVar3 != '\0');
    local_50 = 0xffffffff;
    uVar5 = 0;
LAB_1445f2eab:
    local_f0 = (undefined1 *)0x0;
LAB_1445f2ead:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar9 = (int)sVar4 + 1;
    local_e4 = uVar5;
    local_58 = local_f0;
    do {
      if (iVar9 < 1) break;
      wVar1 = *_Str;
      uVar5 = (uint)(ushort)wVar1;
      pwVar8 = _Str + 1;
      iVar2 = iVar9 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar9 == 1) {
          FUN_1400247af(uVar5,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
          uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
          pwVar8 = _Str + 2;
          iVar2 = iVar9 + -2;
        }
      }
      iVar9 = iVar2;
      _Str = pwVar8;
      cVar3 = FUN_1400247af(uVar5,&local_f0,&local_e4);
    } while (cVar3 != '\0');
    local_f8 = (longlong)(int)local_50;
  }
  local_100 = local_58;
  Discord_Client_SetVoiceLogDir(param_1 + 0x28,&local_100,param_3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f2fe6 FUN_1445f2fe6 body=683 status=ok
// SIG undefined FUN_1445f2fe6(void)

void FUN_1445f2fe6(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  char cVar7;
  size_t sVar8;
  uint uVar9;
  ulonglong uVar10;
  wchar_t *_Str;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar11 = 0;
  }
  else {
    sVar8 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar10 = sVar8 & 0xffffffff;
    pwVar13 = _Str;
    do {
      iVar14 = (int)uVar10;
      if (iVar14 < 1) {
LAB_1445f3117:
        local_50 = local_e4;
        uVar9 = local_e4 + 1;
        if (uVar9 < 0x81) goto LAB_1445f3134;
        FUN_1446efa72(&local_60,0,uVar9,1);
        local_f0 = local_60;
        goto LAB_1445f3136;
      }
      wVar1 = *pwVar13;
      uVar9 = (uint)(ushort)wVar1;
      pwVar12 = pwVar13 + 1;
      uVar15 = iVar14 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          cVar7 = FUN_140024707(uVar9,&local_e4,&local_f0);
          if (cVar7 != '\0') goto LAB_1445f3117;
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = pwVar13 + 2;
          uVar15 = iVar14 - 2;
        }
      }
      cVar7 = FUN_140024707(uVar9,&local_e4,&local_f0);
      uVar10 = (ulonglong)uVar15;
      pwVar13 = pwVar12;
    } while (cVar7 != '\0');
    local_50 = 0xffffffff;
    uVar9 = 0;
LAB_1445f3134:
    local_f0 = (undefined1 *)0x0;
LAB_1445f3136:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar14 = (int)sVar8 + 1;
    local_e4 = uVar9;
    local_58 = local_f0;
    do {
      if (iVar14 < 1) break;
      wVar1 = *_Str;
      uVar9 = (uint)(ushort)wVar1;
      pwVar13 = _Str + 1;
      iVar6 = iVar14 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          FUN_1400247af(uVar9,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar13 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar13 + 0xfca02400;
          pwVar13 = _Str + 2;
          iVar6 = iVar14 + -2;
        }
      }
      iVar14 = iVar6;
      _Str = pwVar13;
      cVar7 = FUN_1400247af(uVar9,&local_f0,&local_e4);
    } while (cVar7 != '\0');
    lVar11 = (longlong)(int)local_50;
  }
  puVar5 = local_58;
  local_108 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *local_108 = *param_3;
  local_108[1] = uVar2;
  local_108[2] = uVar3;
  local_108[3] = uVar4;
  local_100 = puVar5;
  local_f8 = lVar11;
  Discord_Client_CreateOrJoinLobby(param_1 + 0x28,&local_100,FUN_1445f8baa,&LAB_1445f3292);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f329c FUN_1445f329c body=884 status=ok
// SIG undefined FUN_1445f329c(void)

void FUN_1445f329c(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  wchar_t wVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  wchar_t *pwVar4;
  int iVar5;
  char cVar6;
  size_t sVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  uint uVar11;
  wchar_t *_Str;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_1b8 [32];
  code *local_198;
  undefined1 *local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined1 *local_178;
  longlong local_170;
  uint local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  uint local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar13 = 0;
  }
  else {
    local_180 = param_4;
    sVar7 = wcslen(_Str);
    local_110 = 0;
    local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
    uVar9 = sVar7 & 0xffffffff;
    pwVar10 = _Str;
    do {
      iVar12 = (int)uVar9;
      if (iVar12 < 1) {
LAB_1445f33e5:
        local_50 = local_110;
        uVar8 = local_110 + 1;
        if (uVar8 < 0x81) goto LAB_1445f3401;
        FUN_1446efa72(&local_60,0,uVar8,1);
        local_f8 = local_60;
        goto LAB_1445f3403;
      }
      wVar1 = *pwVar10;
      uVar8 = (uint)(ushort)wVar1;
      pwVar4 = pwVar10 + 1;
      uVar11 = iVar12 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar12 == 1) {
          cVar6 = FUN_140024707(uVar8,&local_110,&local_f8);
          if (cVar6 != '\0') goto LAB_1445f33e5;
          break;
        }
        if (((ushort)*pwVar4 & 0xfc00) == 0xdc00) {
          uVar8 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar4 + 0xfca02400;
          uVar11 = iVar12 - 2;
          pwVar4 = pwVar10 + 2;
        }
      }
      pwVar10 = pwVar4;
      cVar6 = FUN_140024707(uVar8,&local_110,&local_f8);
      uVar9 = (ulonglong)uVar11;
    } while (cVar6 != '\0');
    local_50 = 0xffffffff;
    uVar8 = 0;
LAB_1445f3401:
    local_f8 = (undefined1 *)0x0;
LAB_1445f3403:
    if (local_f8 == (undefined1 *)0x0) {
      local_f8 = local_e0;
    }
    iVar12 = (int)sVar7 + 1;
    local_110 = uVar8;
    local_58 = local_f8;
    do {
      if (iVar12 < 1) break;
      wVar1 = *_Str;
      uVar8 = (uint)(ushort)wVar1;
      pwVar10 = _Str + 1;
      iVar5 = iVar12 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar12 == 1) {
          FUN_1400247af(uVar8,&local_f8,&local_110);
          break;
        }
        if (((ushort)*pwVar10 & 0xfc00) == 0xdc00) {
          uVar8 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar10 + 0xfca02400;
          pwVar10 = _Str + 2;
          iVar5 = iVar12 + -2;
        }
      }
      iVar12 = iVar5;
      cVar6 = FUN_1400247af(uVar8,&local_f8,&local_110);
      _Str = pwVar10;
    } while (cVar6 != '\0');
    lVar13 = (longlong)(int)local_50;
    param_4 = local_180;
  }
  puVar3 = local_58;
  FUN_1445f1e4a(&local_110,param_3);
  FUN_1445f1e4a(local_128,param_4);
  local_188 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_5[1];
  *local_188 = *param_5;
  local_188[1] = uVar2;
  local_138 = local_118;
  local_158 = local_100;
  local_168 = local_110;
  uStack_164 = uStack_10c;
  uStack_160 = uStack_108;
  uStack_15c = uStack_104;
  local_190 = &LAB_1445f3292;
  local_198 = FUN_1445f8c62;
  local_178 = puVar3;
  local_170 = lVar13;
  Discord_Client_CreateOrJoinLobbyWithMetadata(param_1 + 0x28);
  local_e8 = local_118;
  uStack_f0 = uStack_120;
  uStack_ec = uStack_11c;
  Discord_FreeProperties(&local_f8);
  local_e8 = local_100;
  local_f8 = (undefined1 *)CONCAT44(uStack_10c,local_110);
  uStack_f0 = uStack_108;
  uStack_ec = uStack_104;
  Discord_FreeProperties(&local_f8);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f361c FUN_1445f361c body=96 status=ok
// SIG undefined FUN_1445f361c(void)

longlong FUN_1445f361c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_Client_GetLobbyHandle(param_1 + 0x28,param_2,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445ec761(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f367e FUN_1445f367e body=183 status=ok
// SIG undefined FUN_1445f367e(void)

longlong * FUN_1445f367e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  Discord_Client_GetLobbyIds(param_1 + 0x28,&local_38);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_30 & 0xffffffff);
  }
  if ((int)local_30 != 0) {
    FUN_14460080a(param_2);
  }
  if (local_30 != 0) {
    uVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(local_38 + uVar3 * 8);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14460093e(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_30);
  }
  Discord_Free(local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f3742 FUN_1445f3742 body=145 status=ok
// SIG undefined FUN_1445f3742(void)

void FUN_1445f3742(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *puVar4 = *param_3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  puVar5 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *puVar5 = *param_4;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  Discord_Client_JoinLinkedLobbyGuild
            (param_1 + 0x28,param_2,FUN_1445f968a,&LAB_1445f1b7a,puVar4,FUN_1445f970e,&LAB_1445f37d4
             ,puVar5);
  return;
}



// FUNCTION 1445f3842 FUN_1445f3842 body=650 status=ok
// SIG undefined FUN_1445f3842(void)

undefined4 FUN_1445f3842(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  size_t sVar5;
  uint uVar6;
  ulonglong uVar7;
  wchar_t *_Str;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_f8 = 0;
  }
  else {
    sVar5 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar7 = sVar5 & 0xffffffff;
    pwVar9 = _Str;
    do {
      iVar10 = (int)uVar7;
      if (iVar10 < 1) {
LAB_1445f3973:
        local_50 = local_e4;
        uVar6 = local_e4 + 1;
        if (uVar6 < 0x81) goto LAB_1445f3990;
        FUN_1446efa72(&local_60,0,uVar6,1);
        local_f0 = local_60;
        goto LAB_1445f3992;
      }
      wVar1 = *pwVar9;
      uVar6 = (uint)(ushort)wVar1;
      pwVar8 = pwVar9 + 1;
      uVar11 = iVar10 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar10 == 1) {
          cVar3 = FUN_140024707(uVar6,&local_e4,&local_f0);
          if (cVar3 != '\0') goto LAB_1445f3973;
          break;
        }
        if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
          pwVar8 = pwVar9 + 2;
          uVar11 = iVar10 - 2;
        }
      }
      cVar3 = FUN_140024707(uVar6,&local_e4,&local_f0);
      uVar7 = (ulonglong)uVar11;
      pwVar9 = pwVar8;
    } while (cVar3 != '\0');
    local_50 = 0xffffffff;
    uVar6 = 0;
LAB_1445f3990:
    local_f0 = (undefined1 *)0x0;
LAB_1445f3992:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar10 = (int)sVar5 + 1;
    local_e4 = uVar6;
    local_58 = local_f0;
    do {
      if (iVar10 < 1) break;
      wVar1 = *_Str;
      uVar6 = (uint)(ushort)wVar1;
      pwVar9 = _Str + 1;
      iVar2 = iVar10 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar10 == 1) {
          FUN_1400247af(uVar6,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar9 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar9 + 0xfca02400;
          pwVar9 = _Str + 2;
          iVar2 = iVar10 + -2;
        }
      }
      iVar10 = iVar2;
      _Str = pwVar9;
      cVar3 = FUN_1400247af(uVar6,&local_f0,&local_e4);
    } while (cVar3 != '\0');
    local_f8 = (longlong)(int)local_50;
  }
  local_100 = local_58;
  uVar4 = Discord_Client_RegisterLaunchCommand(param_1 + 0x28,param_2);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1445f3ace FUN_1445f3ace body=698 status=ok
// SIG undefined FUN_1445f3ace(void)

void FUN_1445f3ace(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  wchar_t *_Str;
  int iVar15;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar14 = 0;
  }
  else {
    local_108 = param_2;
    sVar9 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar11 = sVar9 & 0xffffffff;
    pwVar12 = _Str;
    do {
      iVar15 = (int)uVar11;
      if (iVar15 < 1) {
LAB_1445f3c04:
        local_50 = local_e4;
        uVar10 = local_e4 + 1;
        if (uVar10 < 0x81) goto LAB_1445f3c1d;
        FUN_1446efa72(&local_60,0,uVar10,1);
        local_f0 = local_60;
        goto LAB_1445f3c1f;
      }
      wVar1 = *pwVar12;
      uVar10 = (uint)(ushort)wVar1;
      pwVar6 = pwVar12 + 1;
      uVar13 = iVar15 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
          if (cVar8 != '\0') goto LAB_1445f3c04;
          break;
        }
        if (((ushort)*pwVar6 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar6 + 0xfca02400;
          uVar13 = iVar15 - 2;
          pwVar6 = pwVar12 + 2;
        }
      }
      pwVar12 = pwVar6;
      cVar8 = FUN_140024707(uVar10,&local_e4,&local_f0);
      uVar11 = (ulonglong)uVar13;
    } while (cVar8 != '\0');
    local_50 = 0xffffffff;
    uVar10 = 0;
LAB_1445f3c1d:
    local_f0 = (undefined1 *)0x0;
LAB_1445f3c1f:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar15 = (int)sVar9 + 1;
    local_e4 = uVar10;
    local_58 = local_f0;
    do {
      if (iVar15 < 1) break;
      wVar1 = *_Str;
      uVar10 = (uint)(ushort)wVar1;
      pwVar12 = _Str + 1;
      iVar7 = iVar15 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar15 == 1) {
          FUN_1400247af(uVar10,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar10 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = _Str + 2;
          iVar7 = iVar15 + -2;
        }
      }
      iVar15 = iVar7;
      cVar8 = FUN_1400247af(uVar10,&local_f0,&local_e4);
      _Str = pwVar12;
    } while (cVar8 != '\0');
    lVar14 = (longlong)(int)local_50;
    param_2 = local_108;
  }
  puVar5 = local_58;
  local_110 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *local_110 = *param_4;
  local_110[1] = uVar2;
  local_110[2] = uVar3;
  local_110[3] = uVar4;
  local_118 = &LAB_1445f3d8a;
  local_100 = puVar5;
  local_f8 = lVar14;
  Discord_Client_SendActivityInvite(param_1 + 0x28,param_2,&local_100,FUN_1445fa03e);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f3d94 FUN_1445f3d94 body=95 status=ok
// SIG undefined FUN_1445f3d94(void)

void FUN_1445f3d94(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1445f3dd8;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
LAB_1445f3dd8:
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445f3dfe FUN_1445f3dfe body=95 status=ok
// SIG undefined FUN_1445f3dfe(void)

void FUN_1445f3dfe(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1445f3e42;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
LAB_1445f3e42:
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445f3e90 FUN_1445f3e90 body=214 status=ok
// SIG undefined FUN_1445f3e90(void)

longlong * FUN_1445f3e90(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  Discord_Client_GetRelationships(param_1 + 0x28,&local_38);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_30 & 0xffffffff);
  }
  if ((int)local_30 != 0) {
    FUN_144601932(param_2);
  }
  if (local_30 != 0) {
    uVar3 = 0;
    do {
      lVar2 = FUN_1445eb5f2(DAT_14c951640);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(local_38 + uVar3 * 8);
      *(undefined4 *)(lVar2 + 0x30) = 1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_144601a66(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_30);
  }
  Discord_Free(local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f3f68 FUN_1445f3f68 body=218 status=ok
// SIG undefined FUN_1445f3f68(void)

longlong * FUN_1445f3f68(longlong param_1,longlong *param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  Discord_Client_GetRelationshipsByGroup(param_1 + 0x28,param_3,&local_38);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_30 & 0xffffffff);
  }
  if ((int)local_30 != 0) {
    FUN_144601932(param_2);
  }
  if (local_30 != 0) {
    uVar3 = 0;
    do {
      lVar2 = FUN_1445eb5f2(DAT_14c951640);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(local_38 + uVar3 * 8);
      *(undefined4 *)(lVar2 + 0x30) = 1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_144601a66(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_30);
  }
  Discord_Free(local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f4044 FUN_1445f4044 body=789 status=ok
// SIG undefined FUN_1445f4044(void)

longlong * FUN_1445f4044(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  wchar_t wVar1;
  char cVar2;
  size_t sVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  wchar_t *_Str;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  longlong local_100;
  undefined1 *local_f8;
  ulonglong local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_100 = 0;
  }
  else {
    sVar3 = wcslen(_Str);
    local_e4 = 0;
    local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
    uVar10 = sVar3 & 0xffffffff;
    pwVar9 = _Str;
    do {
      iVar6 = (int)uVar10;
      if (iVar6 < 1) {
LAB_1445f4175:
        local_50 = local_e4;
        uVar5 = local_e4 + 1;
        if (uVar5 < 0x81) goto LAB_1445f4192;
        FUN_1446efa72(&local_60,0,uVar5,1);
        local_f8 = local_60;
        goto LAB_1445f4194;
      }
      wVar1 = *pwVar9;
      uVar5 = (uint)(ushort)wVar1;
      pwVar8 = pwVar9 + 1;
      uVar11 = iVar6 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar6 == 1) {
          cVar2 = FUN_140024707(uVar5,&local_e4,&local_f8);
          if (cVar2 != '\0') goto LAB_1445f4175;
          break;
        }
        if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
          uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
          pwVar8 = pwVar9 + 2;
          uVar11 = iVar6 - 2;
        }
      }
      cVar2 = FUN_140024707(uVar5,&local_e4,&local_f8);
      uVar10 = (ulonglong)uVar11;
      pwVar9 = pwVar8;
    } while (cVar2 != '\0');
    local_50 = 0xffffffff;
    uVar5 = 0;
LAB_1445f4192:
    local_f8 = (undefined1 *)0x0;
LAB_1445f4194:
    if (local_f8 == (undefined1 *)0x0) {
      local_f8 = local_e0;
    }
    iVar6 = (int)sVar3 + 1;
    local_e4 = uVar5;
    local_58 = local_f8;
    do {
      if (iVar6 < 1) break;
      wVar1 = *_Str;
      uVar5 = (uint)(ushort)wVar1;
      pwVar9 = _Str + 1;
      iVar7 = iVar6 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar6 == 1) {
          FUN_1400247af(uVar5,&local_f8,&local_e4);
          break;
        }
        if (((ushort)*pwVar9 & 0xfc00) == 0xdc00) {
          uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar9 + 0xfca02400;
          iVar7 = iVar6 + -2;
          pwVar9 = _Str + 2;
        }
      }
      _Str = pwVar9;
      cVar2 = FUN_1400247af(uVar5,&local_f8,&local_e4);
      iVar6 = iVar7;
    } while (cVar2 != '\0');
    local_100 = (longlong)(int)local_50;
  }
  local_108 = local_58;
  Discord_Client_SearchFriendsByUsername(param_1 + 0x28,&local_108,&local_f8);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)local_f0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_f0 & 0xffffffff);
  }
  if ((int)local_f0 != 0) {
    FUN_144601bc0(param_2);
  }
  if (local_f0 != 0) {
    uVar10 = 0;
    do {
      lVar4 = FUN_1445eaf93(DAT_14c951640);
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(local_f8 + uVar10 * 8);
      *(undefined4 *)(lVar4 + 0x30) = 1;
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_144601cf0(param_2,iVar6);
      }
      *(longlong *)(*param_2 + (longlong)iVar6 * 8) = lVar4;
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_f0);
  }
  Discord_Free(local_f8);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1445f435c FUN_1445f435c body=683 status=ok
// SIG undefined FUN_1445f435c(void)

void FUN_1445f435c(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  char cVar7;
  size_t sVar8;
  uint uVar9;
  ulonglong uVar10;
  wchar_t *_Str;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar11 = 0;
  }
  else {
    sVar8 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar10 = sVar8 & 0xffffffff;
    pwVar13 = _Str;
    do {
      iVar14 = (int)uVar10;
      if (iVar14 < 1) {
LAB_1445f448d:
        local_50 = local_e4;
        uVar9 = local_e4 + 1;
        if (uVar9 < 0x81) goto LAB_1445f44aa;
        FUN_1446efa72(&local_60,0,uVar9,1);
        local_f0 = local_60;
        goto LAB_1445f44ac;
      }
      wVar1 = *pwVar13;
      uVar9 = (uint)(ushort)wVar1;
      pwVar12 = pwVar13 + 1;
      uVar15 = iVar14 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          cVar7 = FUN_140024707(uVar9,&local_e4,&local_f0);
          if (cVar7 != '\0') goto LAB_1445f448d;
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = pwVar13 + 2;
          uVar15 = iVar14 - 2;
        }
      }
      cVar7 = FUN_140024707(uVar9,&local_e4,&local_f0);
      uVar10 = (ulonglong)uVar15;
      pwVar13 = pwVar12;
    } while (cVar7 != '\0');
    local_50 = 0xffffffff;
    uVar9 = 0;
LAB_1445f44aa:
    local_f0 = (undefined1 *)0x0;
LAB_1445f44ac:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar14 = (int)sVar8 + 1;
    local_e4 = uVar9;
    local_58 = local_f0;
    do {
      if (iVar14 < 1) break;
      wVar1 = *_Str;
      uVar9 = (uint)(ushort)wVar1;
      pwVar13 = _Str + 1;
      iVar6 = iVar14 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          FUN_1400247af(uVar9,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar13 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar13 + 0xfca02400;
          pwVar13 = _Str + 2;
          iVar6 = iVar14 + -2;
        }
      }
      iVar14 = iVar6;
      _Str = pwVar13;
      cVar7 = FUN_1400247af(uVar9,&local_f0,&local_e4);
    } while (cVar7 != '\0');
    lVar11 = (longlong)(int)local_50;
  }
  puVar5 = local_58;
  local_108 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *local_108 = *param_3;
  local_108[1] = uVar2;
  local_108[2] = uVar3;
  local_108[3] = uVar4;
  local_100 = puVar5;
  local_f8 = lVar11;
  Discord_Client_SendDiscordFriendRequest(param_1 + 0x28,&local_100,FUN_1445faeb6,&LAB_1445f4608);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f4612 FUN_1445f4612 body=683 status=ok
// SIG undefined FUN_1445f4612(void)

void FUN_1445f4612(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  char cVar7;
  size_t sVar8;
  uint uVar9;
  ulonglong uVar10;
  wchar_t *_Str;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar11 = 0;
  }
  else {
    sVar8 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar10 = sVar8 & 0xffffffff;
    pwVar13 = _Str;
    do {
      iVar14 = (int)uVar10;
      if (iVar14 < 1) {
LAB_1445f4743:
        local_50 = local_e4;
        uVar9 = local_e4 + 1;
        if (uVar9 < 0x81) goto LAB_1445f4760;
        FUN_1446efa72(&local_60,0,uVar9,1);
        local_f0 = local_60;
        goto LAB_1445f4762;
      }
      wVar1 = *pwVar13;
      uVar9 = (uint)(ushort)wVar1;
      pwVar12 = pwVar13 + 1;
      uVar15 = iVar14 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          cVar7 = FUN_140024707(uVar9,&local_e4,&local_f0);
          if (cVar7 != '\0') goto LAB_1445f4743;
          break;
        }
        if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
          pwVar12 = pwVar13 + 2;
          uVar15 = iVar14 - 2;
        }
      }
      cVar7 = FUN_140024707(uVar9,&local_e4,&local_f0);
      uVar10 = (ulonglong)uVar15;
      pwVar13 = pwVar12;
    } while (cVar7 != '\0');
    local_50 = 0xffffffff;
    uVar9 = 0;
LAB_1445f4760:
    local_f0 = (undefined1 *)0x0;
LAB_1445f4762:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar14 = (int)sVar8 + 1;
    local_e4 = uVar9;
    local_58 = local_f0;
    do {
      if (iVar14 < 1) break;
      wVar1 = *_Str;
      uVar9 = (uint)(ushort)wVar1;
      pwVar13 = _Str + 1;
      iVar6 = iVar14 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar14 == 1) {
          FUN_1400247af(uVar9,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar13 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar13 + 0xfca02400;
          pwVar13 = _Str + 2;
          iVar6 = iVar14 + -2;
        }
      }
      iVar14 = iVar6;
      _Str = pwVar13;
      cVar7 = FUN_1400247af(uVar9,&local_f0,&local_e4);
    } while (cVar7 != '\0');
    lVar11 = (longlong)(int)local_50;
  }
  puVar5 = local_58;
  local_108 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *local_108 = *param_3;
  local_108[1] = uVar2;
  local_108[2] = uVar3;
  local_108[3] = uVar4;
  local_100 = puVar5;
  local_f8 = lVar11;
  Discord_Client_SendGameFriendRequest(param_1 + 0x28,&local_100,FUN_1445fb00e,&LAB_1445f4608);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1445f48d2 FUN_1445f48d2 body=96 status=ok
// SIG undefined FUN_1445f48d2(void)

longlong FUN_1445f48d2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_Client_GetCurrentUserV2(param_1 + 0x28,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445eaf93(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f493e FUN_1445f493e body=96 status=ok
// SIG undefined FUN_1445f493e(void)

longlong FUN_1445f493e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_Client_GetUser(param_1 + 0x28,param_2,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445eaf93(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f49b4 FUN_1445f49b4 body=53 status=ok
// SIG undefined FUN_1445f49b4(void)

void FUN_1445f49b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be0def0;
  if (*(int *)(param_1 + 6) == 1) {
    Discord_CallInfoHandle_Drop(param_1 + 5);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1445f49ea FUN_1445f49ea body=183 status=ok
// SIG undefined FUN_1445f49ea(void)

longlong * FUN_1445f49ea(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  Discord_CallInfoHandle_GetParticipants(param_1 + 0x28,&local_38);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_30 & 0xffffffff);
  }
  if ((int)local_30 != 0) {
    FUN_14460080a(param_2);
  }
  if (local_30 != 0) {
    uVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(local_38 + uVar3 * 8);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14460093e(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_30);
  }
  Discord_Free(local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f4aa4 FUN_1445f4aa4 body=96 status=ok
// SIG undefined FUN_1445f4aa4(void)

longlong FUN_1445f4aa4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = Discord_CallInfoHandle_GetVoiceStateHandle(param_1 + 0x28,param_2,&local_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1445ea079(DAT_14c951640);
    *(undefined8 *)(lVar2 + 0x28) = local_10;
    *(undefined4 *)(lVar2 + 0x30) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f4b06 FUN_1445f4b06 body=140 status=ok
// SIG undefined FUN_1445f4b06(void)

void FUN_1445f4b06(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_2[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar2 != 0) {
        FUN_144595c9a(param_2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f4b92 FUN_1445f4b92 body=149 status=ok
// SIG undefined FUN_1445f4b92(void)

void FUN_1445f4b92(undefined8 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_3[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar2 != 0) {
        FUN_144595d41(param_3,param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f4c28 FUN_1445f4c28 body=149 status=ok
// SIG undefined FUN_1445f4c28(void)

void FUN_1445f4c28(undefined8 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
      (uVar1 = *param_3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_3[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_3 + 2),1);
      if (lVar2 != 0) {
        FUN_144595df3(param_3,param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f4cbe FUN_1445f4cbe body=156 status=ok
// SIG undefined FUN_1445f4cbe(void)

void FUN_1445f4cbe(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_4 + 2) != 0) && (param_4[1] != 0)) {
    uVar1 = *param_4;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_4[1])) &&
          ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_4 + 2),1);
        if (lVar2 != 0) {
          FUN_144595e9f(param_4,param_1,param_2,param_3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1445f4d5a FUN_1445f4d5a body=131 status=ok
// SIG undefined FUN_1445f4d5a(void)

void FUN_1445f4d5a(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar2 != 0) {
        FUN_144595f4f(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f4dde FUN_1445f4dde body=131 status=ok
// SIG undefined FUN_1445f4dde(void)

void FUN_1445f4dde(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar2 != 0) {
        FUN_144595fc6(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f4e61 FUN_1445f4e61 body=175 status=ok
// SIG undefined FUN_1445f4e61(void)

undefined8 FUN_1445f4e61(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445b7a3c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f4f12 FUN_1445f4f12 body=172 status=ok
// SIG undefined FUN_1445f4f12(void)

void FUN_1445f4f12(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f4e61(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144596042(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f4fbe FUN_1445f4fbe body=172 status=ok
// SIG undefined FUN_1445f4fbe(void)

void FUN_1445f4fbe(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f4e61(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_1445960e4(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f506a FUN_1445f506a body=304 status=ok
// SIG undefined FUN_1445f506a(void)

void FUN_1445f506a(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1445f50cb;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_1445f50cb:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1445f519a FUN_1445f519a body=346 status=ok
// SIG undefined FUN_1445f519a(void)

void FUN_1445f519a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1445f522c;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1445f522c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1445f52f4 FUN_1445f52f4 body=347 status=ok
// SIG undefined FUN_1445f52f4(void)

void FUN_1445f52f4(longlong *param_1,uint *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  uVar5 = param_1[1];
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5 & 0xffffffff);
  }
  if ((int)uVar5 != 0) {
    FUN_1445f506a(&local_48);
    uVar5 = param_1[1];
  }
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      lVar3 = FUN_1445f4e61(DAT_14c951640);
      uVar1 = uStack_40;
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(*param_1 + uVar5 * 8);
      *(undefined4 *)(lVar3 + 0x30) = 1;
      lVar6 = (longlong)(int)uStack_40;
      uVar2 = (int)uStack_40 + 1;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
      if (uStack_40._4_4_ < uVar2) {
        FUN_1445f519a(&local_48,uVar1 & 0xffffffff);
      }
      *(longlong *)(local_48 + lVar6 * 8) = lVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_1[1]);
  }
  Discord_Free(*param_1);
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar2 = *param_2, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_144596186(param_2,&local_48);
      }
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f5452 FUN_1445f5452 body=347 status=ok
// SIG undefined FUN_1445f5452(void)

void FUN_1445f5452(longlong *param_1,uint *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  uVar5 = param_1[1];
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5 & 0xffffffff);
  }
  if ((int)uVar5 != 0) {
    FUN_1445f506a(&local_48);
    uVar5 = param_1[1];
  }
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      lVar3 = FUN_1445f4e61(DAT_14c951640);
      uVar1 = uStack_40;
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(*param_1 + uVar5 * 8);
      *(undefined4 *)(lVar3 + 0x30) = 1;
      lVar6 = (longlong)(int)uStack_40;
      uVar2 = (int)uStack_40 + 1;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
      if (uStack_40._4_4_ < uVar2) {
        FUN_1445f519a(&local_48,uVar1 & 0xffffffff);
      }
      *(longlong *)(local_48 + lVar6 * 8) = lVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_1[1]);
  }
  Discord_Free(*param_1);
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar2 = *param_2, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_1445962a0(param_2,&local_48);
      }
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f55b0 FUN_1445f55b0 body=514 status=ok
// SIG undefined FUN_1445f55b0(void)

void FUN_1445f55b0(longlong *param_1,longlong *param_2,uint *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  uVar6 = param_1[1];
  if (-1 < (int)uVar6) {
    if ((int)uVar6 != 0) {
      FUN_1445f506a(&local_58);
      uVar6 = param_1[1];
    }
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        lVar3 = FUN_1445f4e61(DAT_14c951640);
        uVar1 = uStack_50;
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(*param_1 + uVar6 * 8);
        *(undefined4 *)(lVar3 + 0x30) = 1;
        lVar5 = (longlong)(int)uStack_50;
        uVar2 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
        if (uStack_50._4_4_ < uVar2) {
          FUN_1445f519a(&local_58,uVar1 & 0xffffffff);
        }
        *(longlong *)(local_58 + lVar5 * 8) = lVar3;
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulonglong)param_1[1]);
    }
    Discord_Free(*param_1);
    local_68 = 0;
    uStack_60 = 0;
    uVar6 = param_2[1];
    if (-1 < (int)uVar6) {
      if ((int)uVar6 != 0) {
        FUN_1445f506a(&local_68);
        uVar6 = param_2[1];
      }
      if (uVar6 != 0) {
        uVar6 = 0;
        do {
          lVar3 = FUN_1445f4e61(DAT_14c951640);
          uVar1 = uStack_60;
          *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(*param_2 + uVar6 * 8);
          *(undefined4 *)(lVar3 + 0x30) = 1;
          lVar5 = (longlong)(int)uStack_60;
          uVar2 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
          if (uStack_60._4_4_ < uVar2) {
            FUN_1445f519a(&local_68,uVar1 & 0xffffffff);
          }
          *(longlong *)(local_68 + lVar5 * 8) = lVar3;
          uVar6 = uVar6 + 1;
        } while (uVar6 < (ulonglong)param_2[1]);
      }
      Discord_Free(*param_2);
      if ((((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) &&
          (uVar2 = *param_3, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar4 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_3[1])) &&
           (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
          lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_3 + 2),1);
          if (lVar3 != 0) {
            FUN_144596362(param_3,&local_58,&local_68);
          }
        }
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar6 & 0xffffffff);
}



// FUNCTION 1445f57b4 FUN_1445f57b4 body=175 status=ok
// SIG undefined FUN_1445f57b4(void)

undefined8 FUN_1445f57b4(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1445a5a10();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445f5864 FUN_1445f5864 body=172 status=ok
// SIG undefined FUN_1445f5864(void)

void FUN_1445f5864(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_14459644d(param_2,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1445f592e FUN_1445f592e body=138 status=ok
// SIG undefined FUN_1445f592e(void)

void FUN_1445f592e(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) {
    uVar1 = *param_2;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_2[1])) &&
          ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_2 + 2),1);
        if (lVar2 != 0) {
          FUN_1445964f4(param_2,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1445f59b8 FUN_1445f59b8 body=172 status=ok
// SIG undefined FUN_1445f59b8(void)

void FUN_1445f59b8(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1445f57b4(DAT_14c951640);
  *(undefined8 *)(lVar2 + 0x28) = *param_1;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if (lVar3 != 0) {
        FUN_14459659a(param_2,lVar2);
        return;
      }
    }
  }
  return;
}


