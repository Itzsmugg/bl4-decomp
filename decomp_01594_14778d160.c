// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14778d160 FUN_14778d160 body=285 status=ok
// SIG undefined FUN_14778d160(void)

undefined8 FUN_14778d160(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_468 [40];
  undefined8 local_440;
  wchar_t *local_438;
  undefined6 *local_430;
  ulonglong *local_428;
  char local_420;
  wchar_t local_418 [14];
  undefined6 local_3fc;
  undefined2 uStack_3f6;
  undefined6 uStack_3f4;
  undefined6 local_3ee [122];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_438 = local_418;
  local_420 = '\0';
  local_428 = &local_18;
  builtin_wcsncpy(local_418 + 10,L"get(",4);
  builtin_wcsncpy(local_418,L"SObjectWid",10);
  local_430 = &local_3fc;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uStack_3f4 = 0x7200740070;
    local_3fc = 0x6c0075006e;
    uStack_3f6 = 0x6c;
    local_430 = local_3ee;
  }
  else {
    local_440 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
    FUN_14005eb5c(&local_440,&local_438);
  }
  if (local_428 <= (ulonglong *)((longlong)local_430 + 2)) {
    FUN_140213274(&local_438,1);
  }
  *(undefined2 *)local_430 = 0x29;
  *(undefined2 *)((longlong)local_430 + 2) = 0;
  local_430 = (undefined6 *)((longlong)local_430 + 2);
  FUN_140056680(param_2,local_438);
  if (local_420 == '\x01') {
    FUN_1400020a8(local_438);
  }
  if ((local_18 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778d27e FUN_14778d27e body=173 status=ok
// SIG undefined FUN_14778d27e(void)

undefined8 FUN_14778d27e(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      local_18 = &local_21;
      local_20 = FUN_141073f72;
      lVar3 = FUN_144a773aa(&local_20,&DAT_14c75ec34);
      if (*(char *)(lVar3 + 0x20) == '\0') {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x368))();
        goto LAB_14778d2fd;
      }
    }
  }
  uVar2 = 0;
LAB_14778d2fd:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778d32c FUN_14778d32c body=250 status=ok
// SIG undefined FUN_14778d32c(void)

undefined1 *
FUN_14778d32c(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x380))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778d3e8;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778d3e8:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778d428 FUN_14778d428 body=177 status=ok
// SIG undefined FUN_14778d428(void)

void FUN_14778d428(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_20 = &local_29;
      local_28 = FUN_141073f72;
      lVar2 = FUN_144a773aa(&local_28,&DAT_14c75ec34);
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x388))
                  (*(longlong **)(param_1 + 0x278),param_2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778d4da FUN_14778d4da body=195 status=ok
// SIG undefined FUN_14778d4da(void)

void FUN_14778d4da(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa(&local_38,&DAT_14c75ec34);
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x390))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778d59e FUN_14778d59e body=250 status=ok
// SIG undefined FUN_14778d59e(void)

undefined1 *
FUN_14778d59e(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3b8))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778d65a;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778d65a:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778d69a FUN_14778d69a body=250 status=ok
// SIG undefined FUN_14778d69a(void)

undefined1 *
FUN_14778d69a(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3c0))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778d756;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778d756:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778d796 FUN_14778d796 body=319 status=ok
// SIG undefined FUN_14778d796(void)

undefined1 *
FUN_14778d796(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_118 [47];
  undefined1 local_e9;
  code *local_e8;
  undefined1 *local_e0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_e0 = &local_e9;
      local_e8 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3c8))
                  (*(longlong **)(param_1 + 0x278),&local_e8,param_3,param_4);
        if ((char)local_e8 == '\0') {
          FUN_14171f816(param_1,param_2,param_3,param_4);
        }
        else {
          FUN_1428fd920(param_2,&local_e8);
        }
        FUN_14493db24(&local_e8);
        goto LAB_14778d85a;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778d85a:
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778d8d6 FUN_14778d8d6 body=319 status=ok
// SIG undefined FUN_14778d8d6(void)

undefined1 *
FUN_14778d8d6(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_118 [47];
  undefined1 local_e9;
  code *local_e8;
  undefined1 *local_e0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_e0 = &local_e9;
      local_e8 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3d0))
                  (*(longlong **)(param_1 + 0x278),&local_e8,param_3,param_4);
        if ((char)local_e8 == '\0') {
          FUN_14287b30e(param_1,param_2,param_3,param_4);
        }
        else {
          FUN_1428fd920(param_2,&local_e8);
        }
        FUN_14493db24(&local_e8);
        goto LAB_14778d99a;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778d99a:
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778da16 FUN_14778da16 body=319 status=ok
// SIG undefined FUN_14778da16(void)

undefined1 *
FUN_14778da16(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_118 [47];
  undefined1 local_e9;
  code *local_e8;
  undefined1 *local_e0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_e0 = &local_e9;
      local_e8 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3d8))
                  (*(longlong **)(param_1 + 0x278),&local_e8,param_3,param_4);
        if ((char)local_e8 == '\0') {
          FUN_140431476(param_1,param_2,param_3,param_4);
        }
        else {
          FUN_1428fd920(param_2,&local_e8);
        }
        FUN_14493db24(&local_e8);
        goto LAB_14778dada;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778dada:
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778db56 FUN_14778db56 body=250 status=ok
// SIG undefined FUN_14778db56(void)

undefined1 *
FUN_14778db56(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3e0))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778dc12;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778dc12:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778dc52 FUN_14778dc52 body=250 status=ok
// SIG undefined FUN_14778dc52(void)

undefined1 *
FUN_14778dc52(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 1000))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778dd0e;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778dd0e:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778dd4e FUN_14778dd4e body=250 status=ok
// SIG undefined FUN_14778dd4e(void)

undefined1 *
FUN_14778dd4e(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3f0))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778de0a;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778de0a:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778de4a FUN_14778de4a body=250 status=ok
// SIG undefined FUN_14778de4a(void)

undefined1 *
FUN_14778de4a(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3f8))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778df06;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778df06:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778df46 FUN_14778df46 body=190 status=ok
// SIG undefined FUN_14778df46(void)

void FUN_14778df46(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  code *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1403d1d7a();
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_28 = &local_31;
      local_30 = FUN_141073f72;
      lVar2 = FUN_144a773aa(&local_30,&DAT_14c75ec34);
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x400))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778e006 FUN_14778e006 body=182 status=ok
// SIG undefined FUN_14778e006(void)

void FUN_14778e006(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1403d1e68();
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_20 = &local_29;
      local_28 = FUN_141073f72;
      lVar2 = FUN_144a773aa(&local_28,&DAT_14c75ec34);
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x408))
                  (*(longlong **)(param_1 + 0x278),param_2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778e0be FUN_14778e0be body=250 status=ok
// SIG undefined FUN_14778e0be(void)

undefined1 *
FUN_14778e0be(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x410))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778e17a;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778e17a:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778e1ba FUN_14778e1ba body=225 status=ok
// SIG undefined FUN_14778e1ba(void)

undefined1 *
FUN_14778e1ba(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa(&local_38,&DAT_14c75ec34);
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x480))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778e25d;
      }
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 1;
LAB_14778e25d:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778e29c FUN_14778e29c body=250 status=ok
// SIG undefined FUN_14778e29c(void)

undefined1 *
FUN_14778e29c(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x418))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778e358;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778e358:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778e398 FUN_14778e398 body=881 status=ok
// SIG undefined FUN_14778e398(void)

undefined1 * FUN_14778e398(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_198 [32];
  double *local_178;
  undefined4 local_170;
  undefined8 *local_168;
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_130;
  longlong *local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  longlong local_100;
  code *local_f8;
  double *local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) {
      local_f0 = &local_110;
      local_f8 = FUN_141073f72;
      lVar7 = FUN_144a773aa();
      if (*(char *)(lVar7 + 0x20) == '\0') {
        local_100 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x420))
                  (*(longlong **)(param_1 + 0x278),param_3,param_4,&local_100);
        if (local_100 != 0) {
          local_108 = (double)*(float *)(param_4 + 0x24);
          local_110 = (double)*(float *)(param_4 + 0x20);
          local_118 = (double)(*(float *)(param_3 + 0x20) * (float)DAT_14c84635c +
                               *(float *)(param_3 + 0x28) * DAT_14c84635c._4_4_ +
                              *(float *)(param_3 + 0x30));
          local_120 = (double)((float)DAT_14c84635c * *(float *)(param_3 + 0x1c) +
                               DAT_14c84635c._4_4_ * *(float *)(param_3 + 0x24) +
                              *(float *)(param_3 + 0x2c));
          local_170 = FUN_14778e70a(*(undefined8 *)(param_1 + 0x278));
          plVar8 = *(longlong **)(param_1 + 0x10);
          if (plVar8 == (longlong *)0x0) {
LAB_14778e566:
            local_168 = &local_148;
            local_148 = 0;
            plStack_140 = (longlong *)0x0;
            local_178 = &local_120;
            FUN_14778e8a8(&local_130,local_100,*(undefined4 *)(param_4 + 0x58),&local_110);
          }
          else {
            iVar5 = (int)plVar8[1];
            do {
              if (iVar5 == 0) goto LAB_14778e566;
              LOCK();
              iVar4 = (int)plVar8[1];
              bVar9 = iVar5 == iVar4;
              if (bVar9) {
                *(int *)(plVar8 + 1) = iVar5 + 1;
                iVar4 = iVar5;
              }
              iVar5 = iVar4;
              UNLOCK();
            } while (!bVar9);
            uVar6 = *(undefined8 *)(param_1 + 8);
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
            local_168 = &local_148;
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            local_178 = &local_120;
            local_148 = uVar6;
            plStack_140 = plVar8;
            FUN_14778e8a8(&local_130,local_100,*(undefined4 *)(param_4 + 0x58),&local_110);
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          local_f8 = (code *)CONCAT71(local_f8._1_7_,1);
          local_d8 = 0;
          local_f0 = (double *)0x0;
          uStack_e8 = 0;
          memset(local_d0,0,0x88);
          local_48 = 0x20702;
          local_44 = 0;
          local_158 = local_130;
          local_150 = local_128;
          plVar8 = (longlong *)0x0;
          if (local_128 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_128 + 1) = (int)local_128[1] + 1;
            UNLOCK();
            plVar8 = local_128;
          }
          uVar6 = FUN_1469af032(&local_f8,&local_158);
          FUN_1403d4c6e(param_2,uVar6);
          FUN_14493db24(&local_f8);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          goto LAB_14778e49c;
        }
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778e49c:
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14778e70a FUN_14778e70a body=412 status=ok
// SIG undefined FUN_14778e70a(void)

undefined8 FUN_14778e70a(undefined8 param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caba7f0) && (FUN_144b3d300(&DAT_14caba7f0), DAT_14caba7f0 == -1)) {
    DAT_14caba7e0 = DAT_14c872be0;
    DAT_14caba7ec = '\0';
    atexit((_func_5014 *)&LAB_14333cef8);
    _Init_thread_footer(&DAT_14caba7f0);
  }
  if ((DAT_14caba7ec == '\x01') && (DAT_14caba7e0 == DAT_14c872be0)) {
    uVar6 = 0;
  }
  else {
    lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    uVar5 = 0x3f800000;
    uVar6 = 0;
    if ((lVar2 != 0) &&
       (((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
         ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
        (lVar2 = FUN_1449baec6(lVar2), lVar2 != 0)))) {
      FUN_14039c14e(lVar2,&local_38);
      plVar3 = (longlong *)FUN_1401e2c50();
      lVar2 = plVar3[0x22];
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 1000))(plVar3);
        lVar2 = plVar3[0x22];
      }
      uVar4 = FUN_1401e2bac(lVar2,CONCAT44((int)local_30,(int)local_38));
      uVar5 = (undefined4)uVar4;
      uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    DAT_14caba7ec = '\x01';
    DAT_14caba7e0 = DAT_14c872be0;
    DAT_14caba7e8 = uVar5;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar6,DAT_14caba7e8);
}



// FUNCTION 14778e8a8 FUN_14778e8a8 body=1608 status=ok
// SIG undefined FUN_14778e8a8(void)

longlong *
FUN_14778e8a8(longlong *param_1,longlong param_2,undefined4 param_3,double *param_4,double *param_5,
             undefined4 param_6,longlong *param_7)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_578 [32];
  longlong **local_558;
  undefined4 local_550;
  undefined1 local_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined1 local_531;
  undefined1 local_530 [8];
  longlong *local_528;
  longlong *local_518 [2];
  undefined1 local_508 [16];
  undefined1 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  longlong *local_4d8;
  code *local_4d0;
  undefined8 *local_4c8;
  undefined4 local_328;
  undefined1 local_324;
  undefined1 local_320 [24];
  longlong *local_308;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_578;
  lVar8 = FUN_14001cc68(0xc0,0x10);
  FUN_147791906(lVar8);
  *param_1 = lVar8;
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14a55e740;
  plVar9[2] = lVar8;
  param_1[1] = (longlong)plVar9;
  if ((lVar8 != 0) &&
     (((*(longlong *)(lVar8 + 8) == 0 || (*(longlong *)(lVar8 + 0x10) == 0)) ||
      (*(int *)(*(longlong *)(lVar8 + 0x10) + 8) < 1)))) {
    if (plVar9 == (longlong *)0x0) {
      *(longlong *)(lVar8 + 8) = lVar8;
      plVar12 = *(longlong **)(lVar8 + 0x10);
      if (plVar12 != (longlong *)0x0) {
LAB_14778ed7d:
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        *(longlong **)(lVar8 + 0x10) = plVar9;
        if (plVar9 != (longlong *)0x0) goto LAB_14778eeab;
      }
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      *(longlong *)(lVar8 + 8) = lVar8;
      if (*(longlong **)(lVar8 + 0x10) != plVar9) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar12 = *(longlong **)(lVar8 + 0x10);
        if (plVar12 != (longlong *)0x0) goto LAB_14778ed7d;
        *(longlong **)(lVar8 + 0x10) = plVar9;
      }
LAB_14778eeab:
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  lVar8 = *param_1;
  *(undefined4 *)(lVar8 + 0xb0) = param_3;
  dVar3 = param_5[1];
  dVar4 = param_4[1];
  *(double *)(lVar8 + 0x90) = *param_5 - *param_4;
  *(double *)(lVar8 + 0x98) = dVar3 - dVar4;
  uVar5 = *(undefined4 *)((longlong)param_5 + 4);
  uVar6 = *(undefined4 *)(param_5 + 1);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0xc);
  *(undefined4 *)(lVar8 + 0xa0) = *(undefined4 *)param_5;
  *(undefined4 *)(lVar8 + 0xa4) = uVar5;
  *(undefined4 *)(lVar8 + 0xa8) = uVar6;
  *(undefined4 *)(lVar8 + 0xac) = uVar7;
  lVar10 = *param_7;
  *(longlong *)(lVar8 + 0x68) = lVar10;
  plVar9 = (longlong *)param_7[1];
  plVar12 = *(longlong **)(lVar8 + 0x70);
  if (plVar12 != plVar9) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      plVar12 = *(longlong **)(lVar8 + 0x70);
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    *(longlong **)(lVar8 + 0x70) = plVar9;
    lVar10 = *param_7;
    lVar8 = *param_1;
  }
  uVar11 = (**(code **)(**(longlong **)(lVar10 + 0x278) + 0x180))();
  uVar11 = FUN_1449baec6(uVar11);
  FUN_14485c47a(lVar8 + 0x78,uVar11);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(lVar8 + 0x60) = param_2;
  if (*(longlong *)(param_2 + 0x40) == 0) {
    FUN_140a570d8(&local_4d0);
    FUN_140009b9a(local_518,param_2 + 0x28);
    FUN_14023423e(local_508,local_518);
    local_4f8 = 1;
    local_4f0 = 0;
    uStack_4e8 = 0;
    uVar11 = FUN_140a54906(&local_4d0,local_508);
    local_558 = (longlong **)&local_531;
    FUN_140a54526(local_530,"STextBlock",".\\Runtime/UMG/Private/Slate/UMGDragDropOp.cpp",0xba);
    FUN_140a52852(local_530,&local_4e0,uVar11);
    plVar9 = local_4d8;
    if (local_4d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4d8 + 1) = (int)local_4d8[1] + 1;
      UNLOCK();
      if (local_4d8 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_4d8 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*local_4d8)(local_4d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    plVar12 = local_528;
    if (local_528 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_528 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_528)(local_528);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (local_518[0] != (longlong *)0x0) {
      (**(code **)(*local_518[0] + 0x10))();
    }
    FUN_140a59ae6(&local_4d0);
  }
  else {
    local_4c8 = &local_4e0;
    local_4d0 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_2 + 0x40),local_530);
    plVar9 = local_528;
    if (local_528 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_528 + 1) = (int)local_528[1] + 1;
      UNLOCK();
      if (local_528 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_528 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*local_528)(local_528);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
  }
  FUN_145ab0522(&local_4d0);
  local_550 = param_6;
  local_54c = 1;
  local_548 = 0;
  uStack_540 = 0;
  local_324 = 1;
  local_328 = param_6;
  FUN_144a450dc(local_320,&local_548);
  FUN_1449db362(&local_548);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (local_308 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_308 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_308)(local_308);
      LOCK();
      piVar1 = (int *)((longlong)local_308 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_308 + 0x10))(local_308);
      }
    }
  }
  local_558 = local_518;
  FUN_145ab0e62(local_530,"SDPIScaler",".\\Runtime/UMG/Private/Slate/UMGDragDropOp.cpp",0xc4);
  FUN_145aaff4c(local_530,&local_4e0,&local_4d0);
  plVar12 = local_4d8;
  if (local_4d8 == (longlong *)0x0) {
    lVar8 = *param_1;
    *(undefined8 *)(lVar8 + 0x80) = local_4e0;
    plVar13 = *(longlong **)(lVar8 + 0x88);
    if (plVar13 == (longlong *)0x0) goto LAB_14778ec2d;
    *(undefined8 *)(lVar8 + 0x88) = 0;
LAB_14778ee60:
    LOCK();
    plVar12 = plVar13 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 != 0) goto LAB_14778ec2d;
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_4d8 + 1) = (int)local_4d8[1] + 1;
    UNLOCK();
    lVar8 = *param_1;
    *(undefined8 *)(lVar8 + 0x80) = local_4e0;
    plVar13 = *(longlong **)(lVar8 + 0x88);
    if (local_4d8 != plVar13) {
      *(longlong **)(lVar8 + 0x88) = local_4d8;
      if (plVar13 == (longlong *)0x0) goto LAB_14778ec2d;
      goto LAB_14778ee60;
    }
    LOCK();
    plVar13 = local_4d8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 != 0) goto LAB_14778ec2d;
    (**(code **)*local_4d8)(local_4d8);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar13 = plVar12;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
LAB_14778ec2d:
  if (local_4d8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_4d8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_4d8)(local_4d8);
      LOCK();
      piVar1 = (int *)((longlong)local_4d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_4d8 + 0x10))(local_4d8);
      }
    }
  }
  if (local_528 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_528 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_528)(local_528);
      LOCK();
      piVar1 = (int *)((longlong)local_528 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_528 + 0x10))(local_528);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar9 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_145aafefe(&local_4d0);
  plVar12 = (longlong *)*param_1;
  FUN_14171f99a(plVar12[0x10]);
  (**(code **)(*plVar12 + 0x58))(plVar12);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar9 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = (longlong *)param_7[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar9 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_578) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778eef2 FUN_14778eef2 body=311 status=ok
// SIG undefined FUN_14778eef2(void)

void FUN_14778eef2(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_3 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    FUN_1477ad01e();
    cVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,&DAT_14caba858);
    if (cVar6 != '\0') {
      lVar5 = *(longlong *)(param_3 + 0x78);
      plVar4 = *(longlong **)(param_3 + 0x80);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x278) != 0)) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) {
          local_38 = &local_41;
          local_40 = FUN_141073f72;
          lVar7 = FUN_144a773aa(&local_40,&DAT_14c75ec34);
          if (*(char *)(lVar7 + 0x20) == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x278) + 0x428))
                      (*(longlong **)(param_1 + 0x278),param_2,param_3,*(undefined8 *)(lVar5 + 0x60)
                      );
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778f02a FUN_14778f02a body=297 status=ok
// SIG undefined FUN_14778f02a(void)

void FUN_14778f02a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_2 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    FUN_1477ad01e();
    cVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,&DAT_14caba858);
    if (cVar6 != '\0') {
      lVar5 = *(longlong *)(param_2 + 0x78);
      plVar4 = *(longlong **)(param_2 + 0x80);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x278) != 0)) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) {
          local_30 = &local_39;
          local_38 = FUN_141073f72;
          lVar7 = FUN_144a773aa(&local_38,&DAT_14c75ec34);
          if (*(char *)(lVar7 + 0x20) == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x278) + 0x430))
                      (*(longlong **)(param_1 + 0x278),param_2,*(undefined8 *)(lVar5 + 0x60));
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778f154 FUN_14778f154 body=368 status=ok
// SIG undefined FUN_14778f154(void)

undefined1 * FUN_14778f154(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  code *local_48;
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar8 = *(longlong **)(param_4 + 0x78);
  if (plVar8 != (longlong *)0x0) {
    FUN_1477ad01e();
    cVar5 = (**(code **)(*plVar8 + 0x50))();
    if (cVar5 != '\0') {
      lVar4 = *(longlong *)(param_4 + 0x78);
      plVar8 = *(longlong **)(param_4 + 0x80);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x278) != 0)) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) {
          local_40 = &local_49;
          local_48 = FUN_141073f72;
          lVar7 = FUN_144a773aa();
          if (*(char *)(lVar7 + 0x20) == '\0') {
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x438))
                              (*(longlong **)(param_1 + 0x278),param_3,param_4,
                               *(undefined8 *)(lVar4 + 0x60));
            goto LAB_14778f180;
          }
        }
      }
      uVar6 = 0;
      goto LAB_14778f180;
    }
  }
  uVar6 = 0;
  plVar8 = (longlong *)0x0;
LAB_14778f180:
  *param_2 = uVar6;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778f2c6 FUN_14778f2c6 body=368 status=ok
// SIG undefined FUN_14778f2c6(void)

undefined1 * FUN_14778f2c6(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  code *local_48;
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar8 = *(longlong **)(param_4 + 0x78);
  if (plVar8 != (longlong *)0x0) {
    FUN_1477ad01e();
    cVar5 = (**(code **)(*plVar8 + 0x50))();
    if (cVar5 != '\0') {
      lVar4 = *(longlong *)(param_4 + 0x78);
      plVar8 = *(longlong **)(param_4 + 0x80);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x278) != 0)) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) {
          local_40 = &local_49;
          local_48 = FUN_141073f72;
          lVar7 = FUN_144a773aa();
          if (*(char *)(lVar7 + 0x20) == '\0') {
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x440))
                              (*(longlong **)(param_1 + 0x278),param_3,param_4,
                               *(undefined8 *)(lVar4 + 0x60));
            goto LAB_14778f2f2;
          }
        }
      }
      uVar6 = 0;
      goto LAB_14778f2f2;
    }
  }
  uVar6 = 0;
  plVar8 = (longlong *)0x0;
LAB_14778f2f2:
  *param_2 = uVar6;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778f438 FUN_14778f438 body=297 status=ok
// SIG undefined FUN_14778f438(void)

void FUN_14778f438(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_2 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    FUN_1477ad01e();
    cVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,&DAT_14caba858);
    if (cVar6 != '\0') {
      lVar5 = *(longlong *)(param_2 + 0x78);
      plVar4 = *(longlong **)(param_2 + 0x80);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x278) != 0)) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) {
          local_30 = &local_39;
          local_38 = FUN_141073f72;
          lVar7 = FUN_144a773aa(&local_38,&DAT_14c75ec34);
          if (*(char *)(lVar7 + 0x20) == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x278) + 0x448))
                      (*(longlong **)(param_1 + 0x278),param_2,*(undefined8 *)(lVar5 + 0x60));
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778f562 FUN_14778f562 body=250 status=ok
// SIG undefined FUN_14778f562(void)

undefined1 *
FUN_14778f562(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x450))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778f61e;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778f61e:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778f65e FUN_14778f65e body=250 status=ok
// SIG undefined FUN_14778f65e(void)

undefined1 *
FUN_14778f65e(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x458))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778f71a;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778f71a:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778f75a FUN_14778f75a body=250 status=ok
// SIG undefined FUN_14778f75a(void)

undefined1 *
FUN_14778f75a(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x460))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778f816;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778f816:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778f856 FUN_14778f856 body=250 status=ok
// SIG undefined FUN_14778f856(void)

undefined1 *
FUN_14778f856(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x468))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778f912;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778f912:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778f952 FUN_14778f952 body=250 status=ok
// SIG undefined FUN_14778f952(void)

undefined1 *
FUN_14778f952(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x470))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778fa0e;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778fa0e:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778fa4e FUN_14778fa4e body=250 status=ok
// SIG undefined FUN_14778fa4e(void)

undefined1 *
FUN_14778fa4e(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_30 = &local_39;
      local_38 = FUN_141073f72;
      lVar2 = FUN_144a773aa();
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x478))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778fb0a;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14778fb0a:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778fb5c FUN_14778fb5c body=411 status=ok
// SIG undefined FUN_14778fb5c(void)

undefined8 *
FUN_14778fb5c(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong **)(param_1 + 0x278) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x378))();
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3a8))
                (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
    }
  }
  FUN_145bff8f6(param_1,&local_88,param_3,param_4);
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      local_38 = &local_41;
      local_40 = FUN_141073f72;
      lVar3 = FUN_144a773aa(&local_40,&DAT_14c75ec34);
      if (*(char *)(lVar3 + 0x20) == '\0') {
        local_98 = &local_88;
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3b0))
                  (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4);
        goto LAB_14778fca7;
      }
    }
  }
  *param_2 = local_88;
  param_2[1] = uStack_80;
  local_88 = 0;
  uStack_80 = 0;
  param_2[2] = local_78;
  param_2[3] = uStack_70;
  local_78 = 0;
  uStack_70 = 0;
  param_2[4] = local_68;
  local_68 = 0;
  *(undefined4 *)(param_2 + 5) = local_60;
  local_60 = 0;
  *(undefined1 *)(param_2 + 6) = local_58;
LAB_14778fca7:
  FUN_14171dea8(&local_88);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778fcfe FUN_14778fcfe body=182 status=ok
// SIG undefined FUN_14778fcfe(void)

void FUN_14778fcfe(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140d9616c();
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
      local_20 = &local_29;
      local_28 = FUN_141073f72;
      lVar2 = FUN_144a773aa(&local_28,&DAT_14c75ec34);
      if (*(char *)(lVar2 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x488))
                  (*(longlong **)(param_1 + 0x278),param_2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14778fdb6 FUN_14778fdb6 body=208 status=ok
// SIG undefined FUN_14778fdb6(void)

void FUN_14778fdb6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 unaff_R14;
  ulonglong uVar9;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_2 + 0x34) = *(byte *)(param_2 + 0x34) | *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 8) == '\0') {
    *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | *(byte *)(param_1 + 10);
  }
  lVar6 = FUN_1410f9d84();
  if ((lVar6 != 0) &&
     (uVar9 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),*(char *)(param_1 + 10)),
     *(char *)(param_1 + 10) != '\0')) {
    do {
      uVar8 = CONCAT71((int7)((uVar9 & 0xffffffff) >> 8),-(char)(uVar9 & 0xffffffff) & (byte)uVar9);
      pbVar7 = (byte *)FUN_14128687a(lVar6,uVar8);
      if ((*pbVar7 & 1) != 0) {
        FUN_14750ba7a(&local_38,uVar8);
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0x18))();
        }
        plVar3 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_30)(local_30);
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
      iVar5 = (int)uVar9 + -1;
      bVar4 = (byte)iVar5 & (byte)uVar9;
      uVar9 = (ulonglong)CONCAT31((int3)((uint)iVar5 >> 8),bVar4);
    } while (bVar4 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14778fe88 FUN_14778fe88 body=60 status=ok
// SIG undefined FUN_14778fe88(void)

undefined8 * FUN_14778fe88(undefined8 *param_1)

{
  FUN_140a560dc();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd;
  *param_1 = &PTR_FUN_14a544e30;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  return param_1;
}



// FUNCTION 14778fec4 FUN_14778fec4 body=407 status=ok
// SIG undefined FUN_14778fec4(void)

void FUN_14778fec4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined1 *)(param_1 + 0x1e0) = *(undefined1 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) != 0) {
    FUN_1477aa946(param_1 + 0x1e8,0);
  }
  plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a55e650;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14a55e670;
  *(undefined1 *)(plVar3 + 3) = 1;
  *(undefined4 *)(plVar3 + 9) = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x4c) = 0xffffffff00000080;
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1f8) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x200);
    lVar4 = 0x10;
    if (plVar5 == (longlong *)0x0) goto LAB_14778ffe4;
    *(undefined8 *)(param_1 + 0x200) = 0;
LAB_14778ffa2:
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
    if (plVar3 != (longlong *)0x0) goto LAB_14778ffc4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x1f8) = plVar3 + 2;
    plVar5 = *(longlong **)(param_1 + 0x200);
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x200) = plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_14778ffa2;
    }
LAB_14778ffc4:
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x1f8);
LAB_14778ffe4:
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 8) = *(undefined1 *)(param_1 + 0x1e0);
  }
  return;
}



// FUNCTION 14779005c FUN_14779005c body=22 status=ok
// SIG undefined FUN_14779005c(void)

void FUN_14779005c(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1e0) = param_2;
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x1f8) + 8) = param_2;
  }
  return;
}



// FUNCTION 147790072 FUN_147790072 body=220 status=ok
// SIG undefined FUN_147790072(void)

void FUN_147790072(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  void *_Src;
  longlong lVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0x1f0) = iVar2;
  if (iVar2 == 0 && *(int *)(param_1 + 500) == 0) {
    *(undefined4 *)(param_1 + 500) = 0;
  }
  else {
    FUN_1477aa946((undefined8 *)(param_1 + 0x1e8),iVar2);
    if (iVar2 != 0) {
      memcpy(*(void **)(param_1 + 0x1e8),_Src,(longlong)iVar2);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x1f8);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 9) == '\0')) {
    *(undefined1 *)(lVar4 + 10) = 0;
    lVar4 = FUN_1410f9d84();
    if ((lVar4 != 0) && (iVar2 = *(int *)(param_1 + 0x1f0), (longlong)iVar2 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x1e8);
      lVar6 = 0;
      do {
        bVar1 = *(byte *)(lVar3 + lVar6);
        _Src = (void *)CONCAT71((int7)((ulonglong)_Src >> 8),bVar1);
        pbVar5 = (byte *)FUN_14128687a(lVar4,(ulonglong)_Src & 0xffffffff);
        if ((*pbVar5 & 1) != 0) {
          pbVar5 = (byte *)(*(longlong *)(param_1 + 0x1f8) + 10);
          *pbVar5 = *pbVar5 | bVar1;
        }
        lVar6 = lVar6 + 1;
      } while (iVar2 != lVar6);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x1f8) + 9) = 1;
  }
  return;
}



// FUNCTION 14779014e FUN_14779014e body=66 status=ok
// SIG undefined FUN_14779014e(void)

void FUN_14779014e(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_147762966(*(longlong *)(param_1 + 0x1f8) + 0x10,param_2);
  }
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147762c48(param_2);
  return;
}



// FUNCTION 147790190 FUN_147790190 body=109 status=ok
// SIG undefined FUN_147790190(void)

int FUN_147790190(longlong param_1)

{
  undefined8 in_stack_00000028;
  int in_stack_00000030;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x1f8);
  local_18 = *(longlong *)(param_1 + 0x200);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_14022c4fa(in_stack_00000028,in_stack_00000030,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return in_stack_00000030 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779020c FUN_14779020c body=237 status=ok
// SIG undefined FUN_14779020c(void)

undefined8
FUN_14779020c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14a55e6d0;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477902fa FUN_1477902fa body=40 status=ok
// SIG undefined FUN_1477902fa(void)

void FUN_1477902fa(longlong param_1)

{
  FUN_14032aaf4(param_1 + 0x268,0);
  FUN_14032abc4(param_1 + 0x268,1);
  return;
}



// FUNCTION 147790322 FUN_147790322 body=462 status=ok
// SIG undefined FUN_147790322(void)

void FUN_147790322(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a54d190;
  param_1[0x4d] = &PTR_FUN_14a54d3d0;
  if (DAT_14c98e618 != 0) {
    FUN_140457ffc(DAT_14c968098 + 0xf0,param_1);
  }
  FUN_14493c441(param_1[0x92]);
  local_28 = &local_30;
  local_30 = param_1;
  FUN_1477aac02();
  param_1[0x94] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xa8];
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
  plVar3 = (longlong *)param_1[0x8c];
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
  plVar3 = (longlong *)param_1[0x8a];
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
  plVar3 = (longlong *)param_1[0x88];
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
  if (*(char *)(param_1 + 0x85) == '\x01') {
    if (*(char *)((longlong)param_1 + 0x41c) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x41c) = 0;
    }
    if (param_1[0x7d] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x85) = 0;
  }
  param_1[0x5e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x72];
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
  FUN_1402bc654(param_1 + 0x4d);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477904f2 FUN_1477904f2 body=163 status=ok
// SIG undefined FUN_1477904f2(void)

void FUN_1477904f2(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x490);
  lVar4 = *(longlong *)(lVar3 + 0x18);
  if (lVar4 == 0) {
    uVar2 = FUN_14001cc68(0x40,0x10);
    FUN_141301b58(uVar2,1,1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x18) = uVar2;
    lVar3 = *(longlong *)(param_1 + 0x490);
    lVar4 = *(longlong *)(lVar3 + 0x18);
  }
  plVar1 = *(longlong **)(lVar3 + 0x20);
  FUN_147790596(lVar4);
  FUN_147790640(lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0;
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 0xfe) & 1) != 0)) {
    *(undefined4 *)(plVar1 + 0x27) = 0x3f800000;
    *(byte *)((longlong)plVar1 + 0xfe) = *(byte *)((longlong)plVar1 + 0xfe) & 0xfe;
                    /* WARNING: Could not recover jumptable at 0x00014779058e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x318))(plVar1);
    return;
  }
  return;
}



// FUNCTION 147790596 FUN_147790596 body=169 status=ok
// SIG undefined FUN_147790596(void)

void FUN_147790596(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x2a) = 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar2 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar2,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return;
    }
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (bVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001477905f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 8))(*(longlong **)(param_1 + 0x18),1);
  return;
}



// FUNCTION 147790640 FUN_147790640 body=165 status=ok
// SIG undefined FUN_147790640(void)

void FUN_147790640(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar2 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar2,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return;
    }
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (bVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147790696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),0);
  return;
}



// FUNCTION 1477906e6 FUN_1477906e6 body=102 status=ok
// SIG undefined FUN_1477906e6(void)

void FUN_1477906e6(longlong param_1)

{
  byte bVar1;
  
  bVar1 = DAT_14c7610c4 != 0 & *(byte *)(param_1 + 0x470);
  if (*(byte *)(param_1 + 0x471) == bVar1) {
    return;
  }
  *(byte *)(param_1 + 0x471) = bVar1;
  *(byte *)(param_1 + 0x38) = bVar1 << 7 | *(byte *)(param_1 + 0x38) & 0x7f;
  FUN_144a88240(param_1 + 0x18,param_1);
  FUN_14032aaf4(param_1 + 0x268,0);
  return;
}



// FUNCTION 14779074c FUN_14779074c body=93 status=ok
// SIG undefined FUN_14779074c(void)

void FUN_14779074c(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x438) != 0) {
    FUN_14287b374(param_1);
  }
  FUN_1469315e8(param_1 + 0x268,1);
  lVar1 = FUN_14007026e(&DAT_14c967f20,*(undefined4 *)(param_1 + 0x20));
  if (lVar1 != 0) {
    FUN_1469315e8(lVar1,1);
  }
  FUN_1477906e6(param_1);
  *(undefined1 *)(param_1 + 0x474) = 1;
  return;
}



// FUNCTION 1477907ce FUN_1477907ce body=20 status=ok
// SIG undefined FUN_1477907ce(void)

void FUN_1477907ce(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x470) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x470) = param_2;
  FUN_14779074c();
  return;
}



// FUNCTION 1477907e2 FUN_1477907e2 body=178 status=ok
// SIG undefined FUN_1477907e2(void)

void FUN_1477907e2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x438) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x440);
    if (plVar5 == (longlong *)0x0) goto LAB_147790879;
    *(undefined8 *)(param_1 + 0x440) = 0;
LAB_147790841:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147790879;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x438) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x440);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x440) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_147790879;
      goto LAB_147790841;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_147790879;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_147790879:
  FUN_140a58896(param_1 + 0x1e0,param_2);
  return;
}



// FUNCTION 147790894 FUN_147790894 body=12 status=ok
// SIG undefined FUN_147790894(void)

undefined8 FUN_147790894(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x28);
}



// FUNCTION 1477908a0 FUN_1477908a0 body=169 status=ok
// SIG undefined FUN_1477908a0(void)

void FUN_1477908a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x28) = 0;
    lVar1 = 0x20;
  }
  else {
    lVar1 = FUN_144a772c4();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      param_2 = FUN_14090ceee(param_2,DAT_14c951640,0);
    }
    lVar1 = *(longlong *)(param_1 + 0x490);
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(lVar1 + 0x28) = param_2;
    lVar1 = 0x28;
  }
  FUN_140648376(param_1 + 0x2f0,*(undefined8 *)(*(longlong *)(param_1 + 0x490) + lVar1));
  FUN_1477904f2(param_1);
  return;
}



// FUNCTION 14779094a FUN_14779094a body=8 status=ok
// SIG undefined FUN_14779094a(void)

void FUN_14779094a(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x550) = param_2;
  return;
}



// FUNCTION 147790952 FUN_147790952 body=12 status=ok
// SIG undefined FUN_147790952(void)

void FUN_147790952(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x488);
  return;
}



// FUNCTION 147790974 FUN_147790974 body=14 status=ok
// SIG undefined FUN_147790974(void)

void FUN_147790974(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x468) = param_2;
  *(undefined4 *)(param_1 + 0x46c) = param_3;
  return;
}



// FUNCTION 147790982 FUN_147790982 body=930 status=ok
// SIG undefined FUN_147790982(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147790982(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,char param_6)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1c8 [40];
  longlong *local_1a0;
  longlong local_198;
  double local_190;
  float local_188;
  double local_180;
  float local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  char local_14c;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  LARGE_INTEGER local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lpCriticalSection =
       (LPCRITICAL_SECTION)(**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x160))();
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar6 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar6,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar4 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_147790ca5;
    bVar4 = DAT_14c8442b8 & 1;
  }
  if (bVar4 == 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      FUN_14171f9c0(*param_2);
      FUN_1405d299c(*param_2,*(undefined4 *)(param_5 + 6));
    }
    local_138 = *param_5;
    uStack_130 = param_5[1];
    uStack_120 = *(undefined4 *)(param_5 + 3);
    uStack_11c = *(undefined4 *)((longlong)param_5 + 0x1c);
    local_118 = *(undefined4 *)(param_5 + 4);
    uStack_114 = *(undefined4 *)((longlong)param_5 + 0x24);
    uStack_110 = param_5[5];
    local_108 = *(undefined4 *)(param_5 + 6);
    uStack_104 = *(undefined4 *)((longlong)param_5 + 0x34);
    uStack_100 = *(undefined4 *)(param_5 + 7);
    uStack_fc = *(undefined4 *)((longlong)param_5 + 0x3c);
    local_128 = (float)*(double *)(param_1 + 0x30);
    fStack_124 = (float)*(double *)(param_1 + 0x38);
    local_1a0 = *(longlong **)(param_1 + 0x18);
    lVar5 = (**(code **)(*local_1a0 + 0x20))();
    local_148 = *param_2;
    local_140 = param_2[1];
    if (local_140 != 0) {
      LOCK();
      *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
      UNLOCK();
    }
    uVar6 = FUN_1405d2af8(lVar5,&local_148);
    uStack_110 = uVar6;
    FUN_14020eb82(param_4,&local_158);
    if (local_14c == '\x01') {
      FUN_140762f42(uVar6,&local_f8);
      FUN_140762ef2(param_1 + 8,&local_f8);
      FUN_140762ea4(local_f8.QuadPart,local_f0);
      if (local_f8.QuadPart != 0) {
        FUN_1400020a8();
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))(*(longlong **)(param_1 + 0x18),lVar5);
      *(undefined8 *)(lVar5 + 0x60) = local_158;
      local_190 = DAT_14c866ff8 - _DAT_14c86a9d8;
      local_188 = (float)DAT_14c759090;
      local_198 = lVar5;
      QueryPerformanceCounter(&local_f8);
      local_180 = ((double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8;
      local_178 = (float)DAT_14c759090;
      lVar7 = FUN_1447b4020(param_3);
      local_170 = lVar7 + 0x50;
      if (lVar7 == 0) {
        local_170 = 0;
      }
      local_168 = *(undefined8 *)(param_1 + 0x18);
      local_160 = *(undefined1 *)(param_1 + 0x2b);
      (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x1a0))
                (*(longlong **)(DAT_14c98e618 + 0x20),&local_198,param_6);
      iVar2 = *(int *)(param_1 + 0x10);
      if ((longlong)iVar2 != 0) {
        lVar7 = *(longlong *)(param_1 + 8);
        lVar8 = 0;
        do {
          uVar6 = param_5[5];
          FUN_146953686(*(undefined8 *)(lVar7 + lVar8),&local_f8,param_5[3]);
          FUN_140579244(uVar6,&local_f8);
          plVar3 = (longlong *)CONCAT44(uStack_ec,local_f0);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar8);
      }
    }
    else {
      FUN_1405d3048(uVar6);
    }
    if (param_6 == '\0') {
      (**(code **)(*local_1a0 + 0x28))(local_1a0,lVar5);
    }
  }
LAB_147790ca5:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147790d26 FUN_147790d26 body=83 status=ok
// SIG undefined FUN_147790d26(void)

double * FUN_147790d26(longlong param_1,double *param_2)

{
  float fVar1;
  float *pfVar2;
  
  if (*(char *)(param_1 + 0x471) == '\x01') {
    pfVar2 = (float *)&DAT_14c84635c;
    if ((*(byte *)(*(longlong *)(param_1 + 0x438) + 0x31) & 0x20) != 0) {
      pfVar2 = (float *)(*(longlong *)(param_1 + 0x438) + 0x168);
    }
    fVar1 = pfVar2[1];
    *param_2 = (double)*pfVar2;
    param_2[1] = (double)fVar1;
  }
  else {
    FUN_140105618(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 147790d7a FUN_147790d7a body=108 status=ok
// SIG undefined FUN_147790d7a(void)

ulonglong FUN_147790d7a(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  
  cVar1 = *(char *)(param_1 + 0x471);
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x30) < '\0') {
      FUN_1469315e4(param_1 + 0x268,1);
    }
    FUN_142860bc8(param_1 + 0x268);
    if (*(char *)(param_1 + 0x2e0) == '\x01') {
      uVar2 = FUN_144b012e6(param_1);
      FUN_14287b89e(param_1,param_2,uVar2);
    }
  }
  return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) ^ 1) & 0xffffffff;
}



// FUNCTION 147790de6 FUN_147790de6 body=86 status=ok
// SIG undefined FUN_147790de6(void)

undefined8 * FUN_147790de6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x209) == '\x01') {
    plVar3 = (longlong *)FUN_144b012e6(param_1 + -0x268);
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2,0);
  }
  else {
    *param_2 = DAT_14c98dec8;
    lVar2 = DAT_14c98ded0;
    param_2[1] = DAT_14c98ded0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 147790e3c FUN_147790e3c body=802 status=ok
// SIG undefined FUN_147790e3c(void)

void FUN_147790e3c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_168 [32];
  float *local_148;
  float *local_140;
  float *local_138;
  undefined1 local_130;
  float local_120;
  float local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  float local_104;
  undefined8 local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined1 local_c4;
  undefined1 local_c0 [56];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar1 = (undefined8 *)FUN_144b013ec(param_1 + -0x268);
  fVar2 = SQRT(*(float *)((longlong)puVar1 + 0x24) * *(float *)((longlong)puVar1 + 0x24) +
               *(float *)(puVar1 + 5) * *(float *)(puVar1 + 5));
  fVar3 = SQRT(*(float *)((longlong)puVar1 + 0x1c) * *(float *)((longlong)puVar1 + 0x1c) +
               *(float *)(puVar1 + 4) * *(float *)(puVar1 + 4));
  local_104 = *(float *)(puVar1 + 1);
  fVar4 = 1.0 / (local_104 * local_104);
  fVar5 = local_104 * fVar4;
  fVar4 = fVar4 * -0.0;
  local_74 = *(float *)((longlong)puVar1 + 0x2c) * fVar4 + *(float *)(puVar1 + 6) * fVar5 +
             (-*(float *)((longlong)puVar1 + 0xc) * fVar4 - fVar5 * *(float *)(puVar1 + 2));
  local_78 = *(float *)((longlong)puVar1 + 0x2c) * fVar5 + *(float *)(puVar1 + 6) * fVar4 +
             (-*(float *)((longlong)puVar1 + 0xc) * fVar5 - *(float *)(puVar1 + 2) * fVar4);
  local_7c = fVar2 * fVar5 + fVar4 * 0.0;
  local_80 = fVar2 * fVar4 + fVar5 * 0.0;
  local_84 = fVar4 * fVar3 + fVar5 * 0.0;
  local_88 = fVar5 * fVar3 + fVar4 * 0.0;
  local_118 = *puVar1;
  local_e4 = (float)*(undefined8 *)((longlong)puVar1 + 0xc);
  local_e0 = (float)((ulonglong)*(undefined8 *)((longlong)puVar1 + 0xc) >> 0x20);
  local_138 = &local_dc;
  local_c8 = local_e4 * 0.0 + local_e0 + 0.0;
  local_cc = local_e0 * 0.0 + local_e4 + 0.0;
  local_dc = local_104 + 0.0;
  local_d8 = local_104 * 0.0 + 0.0;
  local_c4 = 0;
  local_100 = CONCAT44(local_e0 + 0.0,local_e4 + 0.0);
  local_11c = (float)DAT_14c8463f8;
  local_120 = (float)DAT_14c8463f0;
  local_148 = &local_120;
  local_140 = &local_104;
  local_110 = 0x3f800000;
  local_108 = 0;
  local_f8 = local_118;
  local_f0 = local_104;
  local_ec = local_100;
  local_d4 = local_d8;
  local_d0 = local_dc;
  FUN_146978c22(local_c0);
  local_130 = *(undefined1 *)(param_2 + 0x38);
  local_138 = *(float **)(param_2 + 0x20);
  local_148 = *(float **)(param_2 + 0x28);
  local_140 = (float *)CONCAT44(local_140._4_4_,*(undefined4 *)(param_2 + 0x34));
  FUN_1400c0302(param_1 + -0x268,*(undefined8 *)(param_2 + 0x18),local_c0,param_2);
  if ((local_70 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147791160 FUN_147791160 body=208 status=ok
// SIG undefined FUN_147791160(void)

void FUN_147791160(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
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
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
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
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000147791224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147791230 FUN_147791230 body=436 status=ok
// SIG undefined FUN_147791230(void)

void FUN_147791230(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_238 [32];
  undefined1 *local_218;
  undefined1 local_209;
  undefined8 local_208;
  longlong *local_200;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0 [440];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar4 = param_3[1];
  *(undefined8 *)(param_1 + 0x268) = *param_3;
  *(undefined8 *)(param_1 + 0x270) = uVar4;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0x3fe0000000000000;
  *(undefined8 *)(param_1 + 0x290) = 0x3fe0000000000000;
  FUN_146350a26(local_1d0);
  local_218 = &local_209;
  FUN_146124132(&local_208,"SConstraintCanvas",
                ".\\Runtime/UMG/Private/Slate/SWorldWidgetScreenLayer.cpp",0x33);
  if (local_200 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_200 + 1) = (int)local_200[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = local_208;
  *(longlong **)(param_1 + 0x2f0) = local_200;
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
  FUN_145e31788(&local_208,&local_1f0,local_1d0);
  local_1e0 = local_1f0;
  local_1d8 = local_1e8;
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_1e0);
  plVar3 = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1e8 + 0x10))(local_1e8);
      }
    }
  }
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_200 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar2 = (int *)((longlong)local_200 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_200 + 0x10))(local_200);
      }
    }
  }
  FUN_146350aa0(local_1d0);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477913e6 FUN_1477913e6 body=790 status=ok
// SIG undefined FUN_1477913e6(void)

void FUN_1477913e6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_458 [32];
  undefined1 *local_438;
  undefined1 local_429;
  undefined1 local_428 [8];
  longlong *local_420;
  undefined8 local_410;
  longlong *local_408;
  undefined8 local_400;
  longlong *local_3f8;
  undefined8 local_3f0 [59];
  undefined8 local_218;
  longlong *local_210;
  undefined8 local_148 [34];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_458;
  if (param_2 == 0) goto LAB_147791410;
  local_148[0] = 0;
  local_3f0[0] = 0;
  FUN_14485c47a(local_3f0);
  local_148[0] = local_3f0[0];
  uVar6 = FUN_144a78877();
  lVar7 = FUN_1477aacdc(param_1 + 0x298,uVar6,local_148);
  FUN_14485c47a(lVar7 + 4,param_2);
  lVar8 = FUN_14587db9c();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
      != lVar8 + 0x30)) {
    param_2 = 0;
  }
  *(longlong *)(lVar7 + 0x10) = param_2;
  uVar9 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(lVar7 + 0x28) = uVar9;
    plVar10 = *(longlong **)(lVar7 + 0x30);
    if (plVar10 != (longlong *)0x0) {
      *(undefined8 *)(lVar7 + 0x30) = 0;
LAB_1477916c2:
      LOCK();
      plVar4 = plVar10 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001477916b2:
        if (iVar3 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(lVar7 + 0x28) = uVar9;
    plVar10 = *(longlong **)(lVar7 + 0x30);
    if (plVar4 == plVar10) {
      LOCK();
      plVar10 = plVar4 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar10 = plVar4;
        goto joined_r0x0001477916b2;
      }
    }
    else {
      *(longlong **)(lVar7 + 0x30) = plVar4;
      if (plVar10 != (longlong *)0x0) goto LAB_1477916c2;
    }
  }
  FUN_146a8b3e6(*(undefined8 *)(param_1 + 0x2e8),local_148);
  *(undefined8 *)(lVar7 + 0x38) = local_148[0];
  FUN_140a53a96(local_3f0);
  plVar10 = local_210;
  local_218 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_210 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      puVar5 = (undefined8 *)*local_210;
      local_210 = plVar4;
      (*(code *)*puVar5)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar4 = local_210;
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        plVar4 = local_210;
      }
    }
  }
  local_210 = plVar4;
  local_438 = &local_429;
  FUN_140a53d66(local_428,&DAT_149efe19f,".\\Runtime/UMG/Private/Slate/SWorldWidgetScreenLayer.cpp",
                0x4d);
  uVar9 = FUN_140a534e6(local_428,lVar7 + 0x18);
  FUN_140a50bf4(uVar9,&local_410,local_3f0);
  local_400 = local_410;
  local_3f8 = local_408;
  if (local_408 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_408 + 1) = (int)local_408[1] + 1;
    UNLOCK();
  }
  FUN_1476d5fce(local_148,&local_400);
  plVar4 = local_3f8;
  if (local_3f8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_3f8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_3f8)(local_3f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_408 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_408 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_408)(local_408);
      LOCK();
      piVar1 = (int *)((longlong)local_408 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_408 + 0x10))(local_408);
      }
    }
  }
  if (local_420 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_420 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_420)(local_420);
      LOCK();
      piVar1 = (int *)((longlong)local_420 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_420 + 0x10))(local_420);
      }
    }
  }
  FUN_140a5660c(local_3f0);
  FUN_1476d6056(local_148);
LAB_147791410:
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477916fe FUN_1477916fe body=290 status=ok
// SIG undefined FUN_1477916fe(void)

void FUN_1477916fe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    iVar2 = (int)local_38;
    iVar3 = local_38._4_4_;
    uVar4 = FUN_144a78877(local_38 & 0xffffffff,local_38._4_4_);
    if (*(int *)(param_1 + 0x2a0) != *(int *)(param_1 + 0x2cc)) {
      lVar6 = param_1 + 0x2d0;
      if (*(longlong *)(param_1 + 0x2d8) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x2d8);
      }
      iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x2e0) - 1U & uVar4) * 4);
      if (iVar5 != -1) {
        lVar6 = *(longlong *)(param_1 + 0x298);
        do {
          lVar7 = (longlong)iVar5 * 0x50;
          lVar1 = lVar6 + lVar7;
          if ((*(int *)(lVar6 + lVar7) == iVar2) && (*(int *)(lVar6 + 4 + lVar7) == iVar3)) {
            if (((char *)(lVar1 + 8) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 8) == '\0')
               ) {
              FUN_147791822(param_1);
              local_38 = 0;
              FUN_14485c47a(&local_38,param_2);
              local_40 = local_38;
              FUN_1477ab33a((longlong *)(param_1 + 0x298));
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x48);
        } while (iVar5 != -1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147791822 FUN_147791822 body=216 status=ok
// SIG undefined FUN_147791822(void)

void FUN_147791822(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 1;
  lVar4 = *(longlong *)(param_2 + 0x18);
  plVar5 = *(longlong **)(param_2 + 0x20);
  if (plVar5 == (longlong *)0x0) {
    if (lVar4 == 0) goto LAB_1477918be;
    uVar6 = *(undefined8 *)(param_1 + 0x2e8);
    local_20 = (longlong *)0x0;
LAB_147791869:
    local_28 = lVar4;
    FUN_146a8b64c(uVar6,&local_28);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (plVar5 == (longlong *)0x0) goto LAB_1477918be;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x2e8);
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_20 = plVar5;
      goto LAB_147791869;
    }
  }
  LOCK();
  plVar3 = plVar5 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_1477918be:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147791906 FUN_147791906 body=108 status=ok
// SIG undefined FUN_147791906(void)

undefined8 * FUN_147791906(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_146947702();
  param_1[10] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  FUN_1405bceb4(param_1 + 10);
  *param_1 = &PTR_FUN_14a54d780;
  param_1[10] = &PTR_FUN_14a54d7f0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = (**(code **)(*DAT_14c968098 + 0x60))();
  param_1[0x17] = uVar1;
  return param_1;
}



// FUNCTION 147791990 FUN_147791990 body=32 status=ok
// SIG undefined FUN_147791990(void)

undefined8 FUN_147791990(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FUMGDragDropOp");
  return param_2;
}



// FUNCTION 1477919ca FUN_1477919ca body=367 status=ok
// SIG undefined FUN_1477919ca(void)

void FUN_1477919ca(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined1 local_d0 [136];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    if (((char)param_2 == '\0') || (*(int *)(param_3 + 0x58) != *(int *)(param_1 + 0xb0))) {
      plVar4 = *(longlong **)(param_1 + 0x70);
      if (plVar4 != (longlong *)0x0) {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_147791a5d;
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar8 = iVar7 == iVar6;
          if (bVar8) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar8);
        lVar5 = *(longlong *)(param_1 + 0x68);
        if (lVar5 != 0) {
          plStack_e0 = *(longlong **)(param_1 + 0x10);
          if (plStack_e0 == (longlong *)0x0) {
LAB_147791ab1:
            local_e8 = 0;
            plStack_e0 = (longlong *)0x0;
            bVar8 = true;
          }
          else {
            iVar7 = (int)plStack_e0[1];
            do {
              if (iVar7 == 0) goto LAB_147791ab1;
              LOCK();
              iVar6 = (int)plStack_e0[1];
              bVar8 = iVar7 == iVar6;
              if (bVar8) {
                *(int *)(plStack_e0 + 1) = iVar7 + 1;
                iVar6 = iVar7;
              }
              iVar7 = iVar6;
              UNLOCK();
            } while (!bVar8);
            local_e8 = *(undefined8 *)(param_1 + 8);
            LOCK();
            *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
            UNLOCK();
            bVar8 = false;
          }
          plVar1 = plStack_e0;
          FUN_1403d061a(local_d0,param_3,&local_e8);
          FUN_14778f438(lVar5,local_d0);
          FUN_1469ac82c(local_d0);
          if (!bVar8) {
            LOCK();
            plVar3 = plVar1 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar1)(plVar1);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
        }
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
LAB_147791a5d:
      FUN_14778a2ac(*(undefined8 *)(param_1 + 0x60),param_3);
    }
    else {
      FUN_14778a8e4(*(longlong *)(param_1 + 0x60),param_3);
    }
  }
  thunk_FUN_146946e70(param_1,param_2,param_3);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147791b3a FUN_147791b3a body=409 status=ok
// SIG undefined FUN_147791b3a(void)

void FUN_147791b3a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x58) != *(int *)(param_1 + 0xb0)) {
    return;
  }
  FUN_14778a5c8(*(longlong *)(param_1 + 0x60),param_2);
  lVar1 = *(longlong *)(param_1 + 0x60);
  pfVar4 = (float *)&DAT_14c84635c;
  if ((*(byte *)(*(longlong *)(param_1 + 0x80) + 0x31) & 0x20) != 0) {
    pfVar4 = (float *)(*(longlong *)(param_1 + 0x80) + 0x168);
  }
  dVar5 = (double)pfVar4[1];
  dVar6 = (double)*pfVar4;
  dVar2 = *(double *)(lVar1 + 0x58) * dVar5 + (double)*(float *)(param_2 + 0x24);
  dVar3 = *(double *)(lVar1 + 0x50) * dVar6 + (double)*(float *)(param_2 + 0x20);
  switch(*(undefined1 *)(lVar1 + 0x48)) {
  case 0:
    dVar3 = dVar3 + *(double *)(param_1 + 0x90);
    dVar2 = dVar2 + *(double *)(param_1 + 0x98);
  default:
    goto switchD_147791be9_caseD_1;
  case 2:
    dVar5 = dVar5 * -0.0;
    dVar6 = dVar6 * -0.5;
    break;
  case 3:
    dVar5 = dVar5 * -0.0;
    goto LAB_147791c37;
  case 4:
    dVar5 = dVar5 * -0.5;
    dVar6 = dVar6 * -0.0;
    break;
  case 5:
    dVar5 = dVar5 * 0.5;
    dVar6 = dVar6 * 0.5;
  case 9:
    dVar3 = dVar3 - dVar6;
    goto LAB_147791c6d;
  case 6:
    dVar5 = dVar5 * -0.5;
LAB_147791c37:
    dVar3 = dVar3 - dVar6;
    goto LAB_147791c5b;
  case 7:
    dVar6 = dVar6 * -0.0;
    goto LAB_147791c69;
  case 8:
    dVar6 = dVar6 * -0.5;
LAB_147791c69:
    dVar3 = dVar3 + dVar6;
LAB_147791c6d:
    dVar2 = dVar2 - dVar5;
    goto switchD_147791be9_caseD_1;
  }
  dVar3 = dVar3 + dVar6;
LAB_147791c5b:
  dVar2 = dVar2 + dVar5;
switchD_147791be9_caseD_1:
  dVar5 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
  dVar5 = dVar5 - *(double *)(param_1 + 0xb8);
  if (dVar5 < 0.15) {
    dVar5 = dVar5 / 0.15;
    dVar2 = (dVar2 - *(double *)(param_1 + 0xa8)) * dVar5 + *(double *)(param_1 + 0xa8);
    dVar3 = (dVar3 - *(double *)(param_1 + 0xa0)) * dVar5 + *(double *)(param_1 + 0xa0);
  }
  *(double *)(param_1 + 0x40) = dVar3;
  *(double *)(param_1 + 0x48) = dVar2;
  return;
}



// FUNCTION 147791cf6 FUN_147791cf6 body=520 status=ok
// SIG undefined FUN_147791cf6(void)

char * FUN_147791cf6(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  longlong *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146946ff8();
  if (*param_2 == '\0') {
    local_68 = 1;
    local_60 = (longlong *)0x0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 1;
    FUN_1428f71fa(param_2,&local_68);
    FUN_1428f6884(&local_68);
  }
  lVar6 = FUN_14479d2ce(param_1 + 0x78);
  if (lVar6 != 0) {
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0xc0))(lVar6 + 0x28,&local_68,0,param_2);
    if (CONCAT71(uStack_67,local_68) != 0) {
      local_70 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      local_88 = 0;
      local_80 = *(longlong *)(lVar6 + 0x118);
      if (local_80 != 0) {
        iVar5 = *(int *)(local_80 + 8);
        do {
          if (iVar5 == 0) {
            local_80 = 0;
            goto LAB_147791e74;
          }
          LOCK();
          iVar3 = *(int *)(local_80 + 8);
          bVar7 = iVar5 == iVar3;
          if (bVar7) {
            *(int *)(local_80 + 8) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar7);
        if (local_80 != 0) {
          local_88 = *(undefined8 *)(lVar6 + 0x110);
        }
      }
LAB_147791e74:
      local_78 = CONCAT71(uStack_67,local_68);
      FUN_1469b83ee(param_2,&local_88,&local_78);
      plVar4 = local_60;
      if ((CONCAT71(uStack_67,local_68) != 0) && (local_60 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (plVar4 != (longlong *)0x0) {
    iVar5 = (int)plVar4[1];
    do {
      if (iVar5 == 0) goto LAB_147791e18;
      LOCK();
      iVar3 = (int)plVar4[1];
      bVar7 = iVar5 == iVar3;
      if (bVar7) {
        *(int *)(plVar4 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar7);
    if (((*(longlong *)(param_1 + 0x68) != 0) &&
        (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x278), lVar6 != 0)) &&
       ((*(byte *)(lVar6 + 0xd9) & 8) != 0)) {
      local_30 = FUN_14775e068();
      local_68 = 1;
      local_60 = (longlong *)0x0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      FUN_1428f71fa(param_2,&local_68);
      FUN_1428f6884(&local_68);
    }
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_147791e18:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147791f00 FUN_147791f00 body=1303 status=ok
// SIG undefined FUN_147791f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_147791f00(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                       float param_5,double *param_6,undefined1 param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  LARGE_INTEGER LVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  LPCRITICAL_SECTION local_1c0;
  LARGE_INTEGER local_1b8;
  double local_1b0;
  float local_1a8;
  double local_1a0;
  float local_198;
  longlong local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_178;
  char local_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 local_158;
  longlong *local_150;
  LARGE_INTEGER *local_148;
  undefined8 local_140;
  float local_138;
  undefined4 local_134;
  undefined2 local_130;
  longlong local_128;
  longlong local_120;
  float local_118;
  float local_114;
  LARGE_INTEGER local_110;
  longlong *local_108;
  undefined8 local_100;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar3 = (**(code **)(*(longlong *)*param_2 + 0x208))();
  if (cVar3 == '\0') {
    uVar5 = 0;
    goto LAB_147791fb6;
  }
  lpCriticalSection =
       (LPCRITICAL_SECTION)(**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x160))();
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar6 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar6,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if (DAT_14c872bf0 == '\x01') {
    uVar5 = 0;
    if ((DAT_14c872bf1 == '\x01') && ((DAT_14c8442b8 & 1) == 0)) {
LAB_147791ffe:
      local_1d0 = param_3;
      local_1c0 = lpCriticalSection;
      if (*(char *)(param_1 + 0x28) == '\x01') {
        FUN_14171f9c0(*param_2);
        FUN_1405d299c(*param_2,param_5);
      }
      fVar12 = param_5 * 0.0;
      local_1c8 = param_4[1];
      local_178 = DAT_14c84635c;
      LVar10.s.HighPart = (LONG)(fVar12 + 0.0);
      LVar10.s.LowPart = (DWORD)(fVar12 + 0.0);
      uVar6 = CONCAT44((float)(param_6[1] * (double)(1.0 / param_5)) * param_5,fVar12);
      plVar9 = (longlong *)CONCAT44(fVar12,(float)((double)(1.0 / param_5) * *param_6) * param_5);
      local_1d8 = param_4;
      local_110 = LVar10;
      local_108 = plVar9;
      local_100 = uVar6;
      FUN_144b01024(&local_110,&local_168);
      local_114 = fStack_15c - fStack_164;
      local_118 = fStack_160 - local_168;
      local_110 = LVar10;
      local_108 = plVar9;
      local_100 = uVar6;
      FUN_144b01024(&local_110,&local_1b8);
      local_110 = local_1b8;
      FUN_14020e8f6(local_1c8,&local_110,&local_118,&local_178);
      plVar9 = *(longlong **)(param_1 + 0x18);
      LVar10.QuadPart = (**(code **)(*plVar9 + 0x20))(plVar9);
      local_128 = *param_2;
      local_120 = param_2[1];
      if (local_120 != 0) {
        LOCK();
        *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
        UNLOCK();
      }
      uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),param_7);
      uVar6 = FUN_1405d2af8(LVar10.QuadPart,&local_128);
      local_168 = -1.0;
      fStack_164 = -1.0;
      fStack_160 = -1.0;
      fStack_15c = -1.0;
      local_158 = 0;
      local_130 = 0x101;
      local_138 = param_5;
      local_150 = local_1d8;
      local_134 = 0;
      local_148 = &local_110;
      local_140 = uVar6;
      FUN_146980a5e(*param_2,&local_168);
      FUN_14020eb82(*param_2 + 0x268,&local_178,&local_168);
      if (local_16c == '\x01') {
        local_1d8 = plVar9;
        FUN_140762f42(uVar6,&local_110);
        FUN_140762ef2(param_1 + 8,&local_110);
        FUN_140762ea4(local_110.QuadPart,(ulonglong)local_108 & 0xffffffff);
        if (local_110.QuadPart != 0) {
          FUN_1400020a8();
        }
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                  (*(longlong **)(param_1 + 0x18),LVar10.QuadPart);
        *(undefined8 *)(LVar10.QuadPart + 0x60) = local_178;
        local_1b0 = DAT_14c866ff8 - _DAT_14c86a9d8;
        local_1a8 = (float)DAT_14c759090;
        local_1b8.QuadPart = LVar10.QuadPart;
        QueryPerformanceCounter(&local_110);
        local_1a0 = ((double)local_110.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8;
        local_198 = (float)DAT_14c759090;
        lVar4 = FUN_1447b4020(local_1d0);
        local_190 = lVar4 + 0x50;
        if (lVar4 == 0) {
          local_190 = 0;
        }
        local_188 = *(undefined8 *)(param_1 + 0x18);
        local_180 = *(undefined1 *)(param_1 + 0x2b);
        uVar5 = CONCAT71((int7)((ulonglong)&local_110 >> 8),local_16c);
        uVar8 = uVar7 & 0xffffffff;
        (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x1a0))
                  (*(longlong **)(DAT_14c98e618 + 0x20),&local_1b8,uVar7 & 0xffffffff);
        iVar2 = *(int *)(param_1 + 0x10);
        plVar9 = local_1d8;
        if ((longlong)iVar2 != 0) {
          lVar4 = *(longlong *)(param_1 + 8);
          lVar11 = 0;
          do {
            uVar6 = local_140;
            FUN_146953686(*(undefined8 *)(lVar4 + lVar11),&local_110,local_150);
            FUN_140579244(uVar6,&local_110);
            if (local_108 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_108 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_108 + 0x10))();
              }
            }
            lVar11 = lVar11 + 0x10;
            plVar9 = local_1d8;
          } while ((longlong)iVar2 * 0x10 != lVar11);
        }
      }
      else {
        FUN_1405d3048(uVar6);
        uVar5 = 0;
        uVar8 = uVar7;
      }
      lpCriticalSection = local_1c0;
      if ((char)uVar8 == '\0') {
        (**(code **)(*plVar9 + 0x28))(plVar9,LVar10.QuadPart);
      }
    }
  }
  else {
    if (DAT_14c8442b8 == 0) goto LAB_147791ffe;
    uVar5 = 0;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_147791fb6:
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147792418 FUN_147792418 body=193 status=ok
// SIG undefined FUN_147792418(void)

void FUN_147792418(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1477924da(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477924da FUN_1477924da body=293 status=ok
// SIG undefined FUN_1477924da(void)

longlong * FUN_1477924da(longlong param_1,longlong *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    lVar4 = FUN_14120aa3a();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      lVar6 = *param_2;
      goto LAB_147792519;
    }
  }
  lVar6 = 0;
LAB_147792519:
  plVar5 = (longlong *)FUN_14779f305(param_1,lVar6,0,0,0,0,0,0);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar5);
  }
  iVar1 = *(int *)(param_1 + 0x260);
  *(uint *)(param_1 + 0x260) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x264) < iVar1 + 1U) {
    FUN_1477ac702((longlong *)(param_1 + 600),iVar1);
  }
  *(longlong **)(*(longlong *)(param_1 + 600) + (longlong)iVar1 * 8) = plVar5;
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar5);
  }
  bVar2 = *(byte *)(param_1 + 0x270);
  if ((bVar2 & 4) != 0) {
    (**(code **)(*plVar5 + 0x2a0))(plVar5);
    bVar2 = *(byte *)(param_1 + 0x270);
  }
  if ((bVar2 & 8) != 0) {
    (**(code **)(*plVar5 + 0x2a8))(plVar5);
    cVar3 = (**(code **)(*plVar5 + 0x2b8))(plVar5);
    if (cVar3 != '\0') {
      FUN_1417aaa18(param_1);
    }
  }
  return plVar5;
}



// FUNCTION 147792606 FUN_147792606 body=161 status=ok
// SIG undefined FUN_147792606(void)

void FUN_147792606(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477926a8(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477926a8 FUN_1477926a8 body=736 status=ok
// SIG undefined FUN_1477926a8(void)

ulonglong FUN_1477926a8(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined2 local_cb;
  undefined1 local_c9;
  undefined1 local_c8 [24];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_84;
  undefined2 local_83;
  undefined1 local_81;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar3 = (**(code **)(*param_1 + 0x180))();
  lVar4 = FUN_1476cdb84(uVar3);
  if (lVar4 != 0) {
    lVar5 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if (lVar5 != 0) {
      uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if ((*(byte *)((longlong)param_1 + 0xd9) & 0x20) == 0) {
        local_b0 = 0x3ff0000000000000;
        local_9c = 0;
        local_90 = 0;
        local_84 = 1;
        local_98 = 0;
        local_a0 = 0;
        local_a4 = 0;
        local_a8 = 0;
        uVar7 = 0;
        uVar8 = 0x3ff00000;
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
      }
      else {
        FUN_1476ccd1e(lVar4,local_c8,param_1);
        uVar11 = (undefined4)local_c8._0_8_;
        uVar12 = SUB84(local_c8._0_8_,4);
        uVar9 = (undefined4)local_c8._8_8_;
        uVar10 = SUB84(local_c8._8_8_,4);
        uVar7 = (undefined4)local_c8._16_8_;
        uVar8 = SUB84(local_c8._16_8_,4);
        local_80._0_3_ = CONCAT12(local_81,local_83);
      }
      local_110 = CONCAT44(uVar12,uVar11);
      local_108 = CONCAT44(uVar10,uVar9);
      local_100 = CONCAT44(uVar8,uVar7);
      local_cb = (undefined2)local_80;
      local_c9 = local_80._2_1_;
      local_f8 = local_b0;
      local_f0 = local_a8;
      local_ec = local_a4;
      local_e8 = local_a0;
      local_e4 = local_9c;
      local_e0 = local_98;
      local_d8 = local_90;
      local_d0 = param_2;
      local_cc = local_84;
      uVar3 = (**(code **)(*param_1 + 0x2d0))(param_1);
      FUN_1476ccc38(lVar4,param_1,uVar3,&local_110);
      goto LAB_14779284d;
    }
    FUN_1446ddc76(local_128,&DAT_14a492018,1);
    FUN_14276766e(local_c8,local_128);
    local_80 = L"AddToPlayerScreen_NoPlayer";
    local_78 = 0x1a;
    FUN_1446e940c(local_12c,&local_80);
    local_80 = (wchar_t *)&DAT_14a50ca4a;
    local_78 = 3;
    FUN_1446e940c(local_130,&local_80);
    FUN_140208bae(&local_80,local_130,local_12c,L"AddToPlayerScreen Failed.  No Owning Player!");
    FUN_142767974(local_c8,local_120,&local_80);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)local_118 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_118 + 0x10))(local_118);
        }
      }
    }
    if (local_80 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_80 + 0x10))();
    }
    FUN_1427678c0(local_c8);
  }
  uVar6 = 0;
LAB_14779284d:
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779298a FUN_14779298a body=154 status=ok
// SIG undefined FUN_14779298a(void)

void FUN_14779298a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_147792a26(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147792a26 FUN_147792a26 body=433 status=ok
// SIG undefined FUN_147792a26(void)

void FUN_147792a26(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined2 local_c3;
  undefined1 local_c1;
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined2 local_74;
  undefined1 local_72;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1476cdb84(uVar1);
  if (lVar2 != 0) {
    if ((*(byte *)((longlong)param_1 + 0xd9) & 0x20) == 0) {
      local_a8 = 0x3ff0000000000000;
      local_94 = 0;
      local_88 = 0;
      local_7c = 1;
      local_90 = 0;
      local_98 = 0;
      local_9c = 0;
      local_a0 = 0;
      uVar3 = 0;
      uVar4 = 0x3ff00000;
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      FUN_1476ccd1e(lVar2,local_c0,param_1);
      uVar7 = (undefined4)local_c0._0_8_;
      uVar8 = SUB84(local_c0._0_8_,4);
      uVar5 = (undefined4)local_c0._8_8_;
      uVar6 = SUB84(local_c0._8_8_,4);
      uVar3 = (undefined4)local_c0._16_8_;
      uVar4 = SUB84(local_c0._16_8_,4);
      local_74 = local_7b;
      local_72 = local_79;
    }
    local_108 = CONCAT44(uVar8,uVar7);
    local_100 = CONCAT44(uVar6,uVar5);
    local_f8 = CONCAT44(uVar4,uVar3);
    local_c3 = local_74;
    local_c1 = local_72;
    local_f0 = local_a8;
    local_e8 = local_a0;
    local_e4 = local_9c;
    local_e0 = local_98;
    local_dc = local_94;
    local_d8 = local_90;
    local_d0 = local_88;
    local_c8 = param_2;
    local_c4 = local_7c;
    FUN_1476cca3a(lVar2,param_1);
  }
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147792bd8 FUN_147792bd8 body=393 status=ok
// SIG undefined FUN_147792bd8(void)

void FUN_147792bd8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_68 = local_48;
  FUN_147792d62(param_1,local_20,&local_58,local_39);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147792d62 FUN_147792d62 body=181 status=ok
// SIG undefined FUN_147792d62(void)

void FUN_147792d62(longlong param_1,longlong param_2,longlong *param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  lVar3 = *param_3;
  lVar4 = param_3[1];
  iVar2 = *(int *)(param_1 + 0x2b0);
  *(uint *)(param_1 + 0x2b0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2b4) < iVar2 + 1U) {
    FUN_1477ac1a0((longlong *)(param_1 + 0x2a8),iVar2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar2 * 0x28);
  *plVar1 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  plVar1[1] = lVar3;
  plVar1[2] = lVar4;
  *(undefined1 *)(plVar1 + 3) = param_4;
  *(undefined8 *)((longlong)plVar1 + 0x1c) = param_5;
  return;
}



// FUNCTION 147792e18 FUN_147792e18 body=240 status=ok
// SIG undefined FUN_147792e18(void)

void FUN_147792e18(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
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
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_147792f0a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147792f0a FUN_147792f0a body=170 status=ok
// SIG undefined FUN_147792f0a(void)

void FUN_147792f0a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  lVar3 = *param_3;
  lVar4 = param_3[1];
  iVar2 = *(int *)(param_1 + 0x2b0);
  *(uint *)(param_1 + 0x2b0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2b4) < iVar2 + 1U) {
    FUN_1477ac1a0((longlong *)(param_1 + 0x2a8),iVar2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar2 * 0x28);
  *plVar1 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  plVar1[1] = lVar3;
  plVar1[2] = lVar4;
  *(undefined1 *)(plVar1 + 3) = 1;
  *(undefined8 *)((longlong)plVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 147792fb4 FUN_147792fb4 body=240 status=ok
// SIG undefined FUN_147792fb4(void)

void FUN_147792fb4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
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
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_1477930a6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477930a6 FUN_1477930a6 body=170 status=ok
// SIG undefined FUN_1477930a6(void)

void FUN_1477930a6(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  lVar3 = *param_3;
  lVar4 = param_3[1];
  iVar2 = *(int *)(param_1 + 0x2b0);
  *(uint *)(param_1 + 0x2b0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2b4) < iVar2 + 1U) {
    FUN_1477ac1a0((longlong *)(param_1 + 0x2a8),iVar2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar2 * 0x28);
  *plVar1 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  plVar1[1] = lVar3;
  plVar1[2] = lVar4;
  *(undefined1 *)(plVar1 + 3) = 0;
  *(undefined8 *)((longlong)plVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 147793166 FUN_147793166 body=185 status=ok
// SIG undefined FUN_147793166(void)

void FUN_147793166(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x1f0) == 0) {
      lVar3 = lVar1 + 0x460;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf8);
    }
    local_30 = 0;
    FUN_14485c47a(&local_30,param_1);
    FUN_1406338de(lVar3,local_30);
    uVar2 = FUN_144a88394(lVar1);
    if (param_1 != (longlong *)0x0) {
      FUN_1410d4dde(uVar2,param_1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147793232 FUN_147793232 body=37 status=ok
// SIG undefined FUN_147793232(void)

void FUN_147793232(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1476c6a7e();
  FUN_1476c8dc8(uVar1);
  return;
}



// FUNCTION 147793258 FUN_147793258 body=88 status=ok
// SIG undefined FUN_147793258(void)

void FUN_147793258(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477932b2(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477932b2 FUN_1477932b2 body=137 status=ok
// SIG undefined FUN_1477932b2(void)

undefined8 * FUN_1477932b2(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [48];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)((longlong)param_1 + 0xd9) & 0x20) != 0) {
    uVar1 = (**(code **)(*param_1 + 0x180))();
    lVar2 = FUN_1476cdb84(uVar1);
    if (lVar2 != 0) {
      FUN_1476ccd1e(lVar2,local_68,param_1);
      *(undefined4 *)param_2 = local_38;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_34;
      *(undefined4 *)(param_2 + 1) = uStack_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779333e FUN_14779333e body=96 status=ok
// SIG undefined FUN_14779333e(void)

void FUN_14779333e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477933a0(param_1,&local_38);
  param_3[4] = local_28;
  param_3[5] = uStack_24;
  param_3[6] = uStack_20;
  param_3[7] = uStack_1c;
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477933a0 FUN_1477933a0 body=151 status=ok
// SIG undefined FUN_1477933a0(void)

undefined8 * FUN_1477933a0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)((longlong)param_1 + 0xd9) & 0x20) != 0) {
    uVar1 = (**(code **)(*param_1 + 0x180))();
    lVar2 = FUN_1476cdb84(uVar1);
    if (lVar2 != 0) {
      FUN_1476ccd1e(lVar2,&local_68,param_1);
      param_2[2] = local_58;
      param_2[3] = uStack_50;
      *(undefined4 *)param_2 = local_68;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_64;
      *(undefined4 *)(param_2 + 1) = uStack_60;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_5c;
      goto LAB_1477933da;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0x3ff0000000000000;
  param_2[3] = 0x3ff0000000000000;
LAB_1477933da:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147793438 FUN_147793438 body=165 status=ok
// SIG undefined FUN_147793438(void)

void FUN_147793438(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_1477934de(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477934de FUN_1477934de body=121 status=ok
// SIG undefined FUN_1477934de(void)

float FUN_1477934de(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (param_2 != 0) {
    lVar2 = FUN_14779c2fc();
    if (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 0x250);
      fVar3 = ((float)((lVar1 >> 0x20) * (longlong)(int)*(undefined8 *)(lVar2 + 0x25c)) +
              (float)(int)((ulonglong)lVar1 >> 0x20) *
              (float)((ulonglong)*(undefined8 *)(lVar2 + 0x25c) >> 0x20)) / (float)(int)lVar1;
    }
  }
  return fVar3;
}



// FUNCTION 147793558 FUN_147793558 body=193 status=ok
// SIG undefined FUN_147793558(void)

void FUN_147793558(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_14779361a(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779361a FUN_14779361a body=192 status=ok
// SIG undefined FUN_14779361a(void)

longlong FUN_14779361a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x260);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 600);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_14779366e:
          lVar4 = FUN_14120aa3a();
          if ((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) goto LAB_147793681;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30) {
            lVar5 = 0;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_14779366e;
LAB_147793681:
          lVar5 = 0;
        }
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          return lVar3;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return 0;
}



// FUNCTION 1477936da FUN_1477936da body=255 status=ok
// SIG undefined FUN_1477936da(void)

void FUN_1477936da(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_40 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1477937da(param_1,&local_38,&local_40);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477937da FUN_1477937da body=232 status=ok
// SIG undefined FUN_1477937da(void)

longlong * FUN_1477937da(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x260);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 600);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      lVar6 = *param_3;
      if ((lVar6 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar6);
LAB_147793833:
        lVar5 = FUN_14120aa3a();
        if ((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_147793846;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30) {
          lVar6 = 0;
        }
      }
      else {
        if (lVar6 != 0) goto LAB_147793833;
LAB_147793846:
        lVar6 = 0;
      }
      lVar5 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1477ac67c(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return param_2;
}



// FUNCTION 1477938c6 FUN_1477938c6 body=37 status=ok
// SIG undefined FUN_1477938c6(void)

void FUN_1477938c6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14775bd5a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477938ec FUN_1477938ec body=58 status=ok
// SIG undefined FUN_1477938ec(void)

void FUN_1477938ec(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x448);
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 147793926 FUN_147793926 body=58 status=ok
// SIG undefined FUN_147793926(void)

void FUN_147793926(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x3d0);
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 147793966 FUN_147793966 body=197 status=ok
// SIG undefined FUN_147793966(void)

void FUN_147793966(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
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
  if (local_28 != 0) {
    lVar2 = FUN_14779c2fc(param_1);
    if (lVar2 != 0) {
      iVar1 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x38))(lVar2 + 0x28);
      bVar3 = iVar1 == 1;
      goto LAB_1477939c7;
    }
  }
  bVar3 = false;
LAB_1477939c7:
  *param_3 = bVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147793a32 FUN_147793a32 body=224 status=ok
// SIG undefined FUN_147793a32(void)

void FUN_147793a32(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
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
  uVar1 = 1;
  if ((local_28 != 0) && ((longlong)*(int *)(param_1 + 0x228) != 0)) {
    plVar3 = *(longlong **)(param_1 + 0x220);
    lVar2 = (longlong)*(int *)(param_1 + 0x228) << 3;
    do {
      if (*(longlong *)(*plVar3 + 0x210) == local_28) {
        if (plVar3 != (longlong *)0x0) {
          uVar1 = *(undefined1 *)(*plVar3 + 0x2b4);
        }
        break;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147793b34 FUN_147793b34 body=11 status=ok
// SIG undefined FUN_147793b34(void)

bool FUN_147793b34(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x228);
}



// FUNCTION 147793b40 FUN_147793b40 body=94 status=ok
// SIG undefined FUN_147793b40(void)

undefined1 FUN_147793b40(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  uVar1 = FUN_14477b072(param_1,DAT_14cab9780);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147793baa FUN_147793baa body=226 status=ok
// SIG undefined FUN_147793baa(void)

void FUN_147793baa(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
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
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  if (lVar1 == 0) {
LAB_147793c46:
    uVar2 = 0;
  }
  else {
    iVar3 = *(uint *)(lVar1 + 0x178) + 1;
    lVar4 = (ulonglong)*(uint *)(lVar1 + 0x178) << 4;
    do {
      lVar4 = lVar4 + -0x10;
      iVar3 = iVar3 + -1;
      if (iVar3 < 1) goto LAB_147793c46;
    } while (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x170) + lVar4) + 4) != local_28);
    uVar2 = 1;
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147793cb4 FUN_147793cb4 body=398 status=ok
// SIG undefined FUN_147793cb4(void)

void FUN_147793cb4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_30;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_14475a8dc();
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
  iVar1 = local_30;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = &local_58;
  local_58 = (undefined4)local_48;
  uStack_54 = local_48._4_4_;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  FUN_147793e44(param_1,local_28,local_29,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147793e44 FUN_147793e44 body=372 status=ok
// SIG undefined FUN_147793e44(void)

void FUN_147793e44(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined7 local_d7;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98;
  code *local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined8 local_60;
  longlong lStack_58;
  undefined8 local_50;
  longlong lStack_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[0x54] == 0) {
    (**(code **)(*param_1 + 0x498))(param_1);
    if (param_1[0x54] == 0) goto LAB_147793e91;
  }
  local_7f = 0;
  uStack_7c = (undefined4)param_2;
  uStack_78 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_74 = 0xffffffff;
  uStack_70 = 0;
  lStack_68 = 0;
  local_60 = 0;
  lStack_58 = 0;
  local_50 = 0;
  lStack_48 = 0;
  local_40 = 0;
  local_80 = param_4;
  uStack_7e = param_3;
  uVar2 = FUN_14779d1a2(&uStack_70);
  local_90 = FUN_14779d346;
  local_88 = 0;
  FUN_14779d288(uVar2,param_1,&local_90,param_5);
  lVar1 = param_1[0x54];
  local_d8 = local_80;
  local_d7 = CONCAT43(uStack_7c,CONCAT12(uStack_7d,CONCAT11(uStack_7e,local_7f)));
  uStack_d0 = uStack_78;
  uStack_cc = uStack_74;
  uStack_c8 = (undefined4)uStack_70;
  uStack_c4 = uStack_70._4_4_;
  local_c0 = lStack_68;
  if (lStack_68 != 0) {
    LOCK();
    *(int *)(lStack_68 + 8) = *(int *)(lStack_68 + 8) + 1;
    UNLOCK();
  }
  local_b8 = local_60;
  local_b0 = lStack_58;
  if (lStack_58 != 0) {
    LOCK();
    *(int *)(lStack_58 + 8) = *(int *)(lStack_58 + 8) + 1;
    UNLOCK();
  }
  local_a8 = local_50;
  local_a0 = lStack_48;
  if (lStack_48 != 0) {
    LOCK();
    *(int *)(lStack_48 + 8) = *(int *)(lStack_48 + 8) + 1;
    UNLOCK();
  }
  local_98 = local_40;
  FUN_1479e08fa(lVar1);
  FUN_14128edda(&uStack_70);
LAB_147793e91:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147793fba FUN_147793fba body=377 status=ok
// SIG undefined FUN_147793fba(void)

undefined8
FUN_147793fba(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_147794134(&local_168);
  plVar5 = local_100;
  if (&local_168 != param_3) {
    local_138 = param_3[6];
    local_168 = *param_3;
    uStack_160 = param_3[1];
    local_158 = param_3[2];
    uStack_150 = param_3[3];
    local_148 = param_3[4];
    uStack_140 = param_3[5];
  }
  local_118 = param_4[3];
  local_128 = *(undefined4 *)(param_4 + 1);
  uStack_124 = *(undefined4 *)((longlong)param_4 + 0xc);
  uStack_120 = *(undefined4 *)(param_4 + 2);
  uStack_11c = *(undefined4 *)((longlong)param_4 + 0x14);
  local_110 = param_4[4];
  local_108 = param_4[5];
  plVar3 = (longlong *)param_4[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_100;
      local_100 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_100;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_100;
      }
    }
  }
  local_100 = plVar3;
  local_f8 = param_4[7];
  local_f0 = *(undefined4 *)(param_4 + 8);
  uVar6 = FUN_14477b072(param_1,DAT_14cab97b8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_168);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_147794204(&local_168);
  *param_4 = &PTR_FUN_149eda6d0;
  plVar5 = (longlong *)param_4[6];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147794134 FUN_147794134 body=206 status=ok
// SIG undefined FUN_147794134(void)

longlong FUN_147794134(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14570e3a0();
  local_32 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_14694c88a(param_1 + 0x38,&local_58,&local_32,0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda6f0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  memset((void *)(param_1 + 0xa8),0,0x88);
  *(undefined4 *)(param_1 + 0x130) = 0x20702;
  *(undefined1 *)(param_1 + 0x134) = 0;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147794204 FUN_147794204 body=82 status=ok
// SIG undefined FUN_147794204(void)

void FUN_147794204(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0x80);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda6d0;
  plVar3 = *(longlong **)(param_1 + 0x68);
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
                    /* WARNING: Could not recover jumptable at 0x00014779424b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147794256 FUN_147794256 body=144 status=ok
// SIG undefined FUN_147794256(void)

void FUN_147794256(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cab97c8);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_28 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001477942e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 800))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477942f0 FUN_1477942f0 body=160 status=ok
// SIG undefined FUN_1477942f0(void)

void FUN_1477942f0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 800))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147794392 FUN_147794392 body=144 status=ok
// SIG undefined FUN_147794392(void)

void FUN_147794392(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cab97d8);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_28 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147794423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x318))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779442c FUN_14779442c body=160 status=ok
// SIG undefined FUN_14779442c(void)

void FUN_14779442c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x318))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477944ce FUN_1477944ce body=383 status=ok
// SIG undefined FUN_1477944ce(void)

/* WARNING: Removing unreachable block (ram,0x00014779458d) */
/* WARNING: Removing unreachable block (ram,0x000147794594) */
/* WARNING: Removing unreachable block (ram,0x0001477945a3) */

void FUN_1477944ce(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined3 uStack_50;
  undefined4 uStack_4d;
  undefined4 uStack_49;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = &PTR_FUN_149eda650;
  local_a0 = *(undefined8 *)(param_2 + 0x18);
  local_b0 = *(undefined8 *)(param_2 + 8);
  uStack_a8 = *(undefined8 *)(param_2 + 0x10);
  local_98 = *(undefined4 *)(param_2 + 0x20);
  uStack_94 = *(undefined4 *)(param_2 + 0x24);
  uStack_90 = *(undefined4 *)(param_2 + 0x28);
  uStack_8c = *(undefined4 *)(param_2 + 0x2c);
  local_88 = *(undefined4 *)(param_2 + 0x30);
  uStack_84 = *(undefined4 *)(param_2 + 0x34);
  uStack_80 = *(undefined4 *)(param_2 + 0x38);
  uStack_7c = *(undefined4 *)(param_2 + 0x3c);
  local_78 = *(undefined8 *)(param_2 + 0x40);
  local_70 = *(undefined8 *)(param_2 + 0x48);
  plStack_68 = *(longlong **)(param_2 + 0x50);
  if (plStack_68 == (longlong *)0x0) {
    plStack_68 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
    UNLOCK();
  }
  local_60 = *(undefined8 *)(param_2 + 0x58);
  uStack_58 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  uStack_4d = *(undefined4 *)(param_2 + 0x6b);
  uStack_49 = *(undefined4 *)(param_2 + 0x6f);
  uStack_54 = (undefined2)uVar3;
  uStack_52 = (undefined1)((uint)uVar3 >> 0x10);
  uStack_50 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x67) >> 8);
  uStack_51 = (undefined1)((uint)uVar3 >> 0x18);
  local_40 = param_3;
  uVar5 = FUN_14477b072(param_1,DAT_14cab97e8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_b8);
  plVar4 = plStack_68;
  local_b8 = &PTR_FUN_149eda650;
  if (plStack_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_68)(plStack_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14779464e FUN_14779464e body=506 status=ok
// SIG undefined FUN_14779464e(void)

/* WARNING: Removing unreachable block (ram,0x000147794772) */
/* WARNING: Removing unreachable block (ram,0x000147794779) */
/* WARNING: Removing unreachable block (ram,0x000147794788) */

void FUN_14779464e(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 local_cc;
  undefined4 uStack_c8;
  uint local_c4;
  undefined **local_c0;
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined3 uStack_58;
  undefined4 uStack_55;
  undefined4 uStack_51;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  uStack_f0 = 0x3f800000;
  local_e8 = 0;
  uStack_e4 = (undefined4)DAT_14c84635c;
  uStack_e0 = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
  uStack_dc = 0x3f800000;
  uStack_d8 = 0;
  uStack_d4 = 0x3f80000000000000;
  local_cc = 0;
  uStack_c8 = 0;
  local_c4 = local_c4 & 0xffffff00;
  local_c0 = &PTR_FUN_149eda650;
  if (&local_f8 != param_2) {
    uStack_c8 = (undefined4)param_2[6];
    local_c4 = (uint)((ulonglong)param_2[6] >> 0x20);
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    uStack_d8 = *(undefined4 *)(param_2 + 4);
    uStack_d4 = *(undefined8 *)((longlong)param_2 + 0x24);
    local_cc = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_e8 = (undefined4)param_2[2];
    uStack_e4 = (undefined4)((ulonglong)param_2[2] >> 0x20);
    uStack_e0 = (undefined4)param_2[3];
    uStack_dc = (undefined4)((ulonglong)param_2[3] >> 0x20);
  }
  local_a8 = *(undefined8 *)(param_3 + 0x18);
  uVar5 = *(undefined8 *)(param_3 + 8);
  local_b8 = (undefined2)uVar5;
  uStack_b6 = (undefined1)((ulonglong)uVar5 >> 0x10);
  uStack_b5 = (undefined1)((ulonglong)uVar5 >> 0x18);
  uStack_b4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_b0 = (undefined4)*(undefined8 *)(param_3 + 0x10);
  uStack_ac = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  local_a0 = *(undefined4 *)(param_3 + 0x20);
  uStack_9c = *(undefined4 *)(param_3 + 0x24);
  uStack_98 = *(undefined4 *)(param_3 + 0x28);
  uStack_94 = *(undefined4 *)(param_3 + 0x2c);
  local_90 = *(undefined4 *)(param_3 + 0x30);
  uStack_8c = *(undefined4 *)(param_3 + 0x34);
  uStack_88 = *(undefined4 *)(param_3 + 0x38);
  uStack_84 = *(undefined4 *)(param_3 + 0x3c);
  local_80 = *(undefined8 *)(param_3 + 0x40);
  local_78 = *(undefined8 *)(param_3 + 0x48);
  plStack_70 = *(longlong **)(param_3 + 0x50);
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
    UNLOCK();
  }
  local_68 = *(undefined8 *)(param_3 + 0x58);
  uStack_60 = *(undefined4 *)(param_3 + 0x60);
  uVar3 = *(undefined4 *)(param_3 + 100);
  uStack_55 = *(undefined4 *)(param_3 + 0x6b);
  uStack_51 = *(undefined4 *)(param_3 + 0x6f);
  uStack_5c = (undefined2)uVar3;
  uStack_5a = (undefined1)((uint)uVar3 >> 0x10);
  uStack_58 = (undefined3)((uint)*(undefined4 *)(param_3 + 0x67) >> 8);
  uStack_59 = (undefined1)((uint)uVar3 >> 0x18);
  local_48 = *param_4;
  uVar5 = FUN_14477b072(param_1,DAT_14cab97f8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_f8);
  plVar4 = plStack_70;
  *param_4 = local_48;
  local_c0 = &PTR_FUN_149eda650;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779484a FUN_14779484a body=534 status=ok
// SIG undefined FUN_14779484a(void)

/* WARNING: Removing unreachable block (ram,0x00014779496e) */
/* WARNING: Removing unreachable block (ram,0x000147794975) */
/* WARNING: Removing unreachable block (ram,0x000147794984) */

void FUN_14779484a(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 local_cc;
  undefined4 uStack_c8;
  uint local_c4;
  undefined **local_c0;
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined3 uStack_58;
  undefined4 uStack_55;
  undefined4 uStack_51;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  uStack_f0 = 0x3f800000;
  local_e8 = 0;
  uStack_e4 = (undefined4)DAT_14c84635c;
  uStack_e0 = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
  uStack_dc = 0x3f800000;
  uStack_d8 = 0;
  uStack_d4 = 0x3f80000000000000;
  local_cc = 0;
  uStack_c8 = 0;
  local_c4 = local_c4 & 0xffffff00;
  local_c0 = &PTR_FUN_149eda650;
  if (&local_f8 != param_2) {
    uStack_c8 = (undefined4)param_2[6];
    local_c4 = (uint)((ulonglong)param_2[6] >> 0x20);
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    uStack_d8 = *(undefined4 *)(param_2 + 4);
    uStack_d4 = *(undefined8 *)((longlong)param_2 + 0x24);
    local_cc = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_e8 = (undefined4)param_2[2];
    uStack_e4 = (undefined4)((ulonglong)param_2[2] >> 0x20);
    uStack_e0 = (undefined4)param_2[3];
    uStack_dc = (undefined4)((ulonglong)param_2[3] >> 0x20);
  }
  local_a8 = param_3[3];
  uVar5 = param_3[1];
  local_b8 = (undefined2)uVar5;
  uStack_b6 = (undefined1)((ulonglong)uVar5 >> 0x10);
  uStack_b5 = (undefined1)((ulonglong)uVar5 >> 0x18);
  uStack_b4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_b0 = (undefined4)param_3[2];
  uStack_ac = (undefined4)((ulonglong)param_3[2] >> 0x20);
  local_a0 = *(undefined4 *)(param_3 + 4);
  uStack_9c = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_98 = *(undefined4 *)(param_3 + 5);
  uStack_94 = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_90 = *(undefined4 *)(param_3 + 6);
  uStack_8c = *(undefined4 *)((longlong)param_3 + 0x34);
  uStack_88 = *(undefined4 *)(param_3 + 7);
  uStack_84 = *(undefined4 *)((longlong)param_3 + 0x3c);
  local_80 = param_3[8];
  local_78 = param_3[9];
  plStack_70 = (longlong *)param_3[10];
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
    UNLOCK();
  }
  local_68 = param_3[0xb];
  uStack_60 = *(undefined4 *)(param_3 + 0xc);
  uVar4 = *(undefined4 *)((longlong)param_3 + 100);
  uStack_55 = *(undefined4 *)((longlong)param_3 + 0x6b);
  uStack_51 = *(undefined4 *)((longlong)param_3 + 0x6f);
  uStack_5c = (undefined2)uVar4;
  uStack_5a = (undefined1)((uint)uVar4 >> 0x10);
  uStack_58 = (undefined3)((uint)*(undefined4 *)((longlong)param_3 + 0x67) >> 8);
  uStack_59 = (undefined1)((uint)uVar4 >> 0x18);
  local_48 = param_4;
  uVar5 = FUN_14477b072(param_1,DAT_14cab9808);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_f8);
  plVar3 = plStack_70;
  local_c0 = &PTR_FUN_149eda650;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *param_3 = &PTR_FUN_149eda650;
  plVar3 = (longlong *)param_3[10];
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
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147794a62 FUN_147794a62 body=424 status=ok
// SIG undefined FUN_147794a62(void)

/* WARNING: Removing unreachable block (ram,0x000147794b21) */
/* WARNING: Removing unreachable block (ram,0x000147794b28) */
/* WARNING: Removing unreachable block (ram,0x000147794b37) */

void FUN_147794a62(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined3 uStack_50;
  undefined4 uStack_4d;
  undefined4 uStack_49;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = &PTR_FUN_149eda650;
  local_a0 = param_2[3];
  local_b0 = param_2[1];
  uStack_a8 = param_2[2];
  local_98 = *(undefined4 *)(param_2 + 4);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_90 = *(undefined4 *)(param_2 + 5);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_88 = *(undefined4 *)(param_2 + 6);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_80 = *(undefined4 *)(param_2 + 7);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_78 = param_2[8];
  local_70 = param_2[9];
  plStack_68 = (longlong *)param_2[10];
  if (plStack_68 == (longlong *)0x0) {
    plStack_68 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
    UNLOCK();
  }
  local_60 = param_2[0xb];
  uStack_58 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)((longlong)param_2 + 100);
  uStack_4d = *(undefined4 *)((longlong)param_2 + 0x6b);
  uStack_49 = *(undefined4 *)((longlong)param_2 + 0x6f);
  uStack_54 = (undefined2)uVar4;
  uStack_52 = (undefined1)((uint)uVar4 >> 0x10);
  uStack_50 = (undefined3)((uint)*(undefined4 *)((longlong)param_2 + 0x67) >> 8);
  uStack_51 = (undefined1)((uint)uVar4 >> 0x18);
  local_40 = param_3;
  uVar5 = FUN_14477b072(param_1,DAT_14cab9818);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_b8);
  plVar3 = plStack_68;
  local_b8 = &PTR_FUN_149eda650;
  if (plStack_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_68)(plStack_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *param_2 = &PTR_FUN_149eda650;
  plVar3 = (longlong *)param_2[10];
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147794c0c FUN_147794c0c body=546 status=ok
// SIG undefined FUN_147794c0c(void)

/* WARNING: Removing unreachable block (ram,0x000147794d33) */
/* WARNING: Removing unreachable block (ram,0x000147794d3a) */
/* WARNING: Removing unreachable block (ram,0x000147794d49) */

ulonglong FUN_147794c0c(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4
                       )

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 local_cc;
  undefined4 uStack_c8;
  uint local_c4;
  undefined **local_c0;
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined3 uStack_58;
  undefined4 uStack_55;
  undefined4 uStack_51;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  uStack_f0 = 0x3f800000;
  local_e8 = 0;
  uStack_e4 = (undefined4)DAT_14c84635c;
  uStack_e0 = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
  uStack_dc = 0x3f800000;
  uStack_d8 = 0;
  uStack_d4 = 0x3f80000000000000;
  local_cc = 0;
  uStack_c8 = 0;
  local_c4 = local_c4 & 0xffffff00;
  local_c0 = &PTR_FUN_149eda650;
  local_40 = 0;
  if (&local_f8 != param_2) {
    uStack_c8 = (undefined4)param_2[6];
    local_c4 = (uint)((ulonglong)param_2[6] >> 0x20);
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    uStack_d8 = *(undefined4 *)(param_2 + 4);
    uStack_d4 = *(undefined8 *)((longlong)param_2 + 0x24);
    local_cc = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_e8 = (undefined4)param_2[2];
    uStack_e4 = (undefined4)((ulonglong)param_2[2] >> 0x20);
    uStack_e0 = (undefined4)param_2[3];
    uStack_dc = (undefined4)((ulonglong)param_2[3] >> 0x20);
  }
  local_a8 = param_3[3];
  uVar5 = param_3[1];
  local_b8 = (undefined2)uVar5;
  uStack_b6 = (undefined1)((ulonglong)uVar5 >> 0x10);
  uStack_b5 = (undefined1)((ulonglong)uVar5 >> 0x18);
  uStack_b4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_b0 = (undefined4)param_3[2];
  uStack_ac = (undefined4)((ulonglong)param_3[2] >> 0x20);
  local_a0 = *(undefined4 *)(param_3 + 4);
  uStack_9c = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_98 = *(undefined4 *)(param_3 + 5);
  uStack_94 = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_90 = *(undefined4 *)(param_3 + 6);
  uStack_8c = *(undefined4 *)((longlong)param_3 + 0x34);
  uStack_88 = *(undefined4 *)(param_3 + 7);
  uStack_84 = *(undefined4 *)((longlong)param_3 + 0x3c);
  local_80 = param_3[8];
  local_78 = param_3[9];
  plStack_70 = (longlong *)param_3[10];
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
    UNLOCK();
  }
  local_68 = param_3[0xb];
  uStack_60 = *(undefined4 *)(param_3 + 0xc);
  uVar4 = *(undefined4 *)((longlong)param_3 + 100);
  uStack_55 = *(undefined4 *)((longlong)param_3 + 0x6b);
  uStack_51 = *(undefined4 *)((longlong)param_3 + 0x6f);
  uStack_5c = (undefined2)uVar4;
  uStack_5a = (undefined1)((uint)uVar4 >> 0x10);
  uStack_58 = (undefined3)((uint)*(undefined4 *)((longlong)param_3 + 0x67) >> 8);
  uStack_59 = (undefined1)((uint)uVar4 >> 0x18);
  local_48 = param_4;
  uVar5 = FUN_14477b072(param_1,DAT_14cab9828);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_f8);
  plVar3 = plStack_70;
  uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),local_40);
  local_c0 = &PTR_FUN_149eda650;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *param_3 = &PTR_FUN_149eda650;
  plVar3 = (longlong *)param_3[10];
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
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147794e38 FUN_147794e38 body=546 status=ok
// SIG undefined FUN_147794e38(void)

/* WARNING: Removing unreachable block (ram,0x000147794f5f) */
/* WARNING: Removing unreachable block (ram,0x000147794f66) */
/* WARNING: Removing unreachable block (ram,0x000147794f75) */

ulonglong FUN_147794e38(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4
                       )

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 local_cc;
  undefined4 uStack_c8;
  uint local_c4;
  undefined **local_c0;
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined3 uStack_58;
  undefined4 uStack_55;
  undefined4 uStack_51;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  uStack_f0 = 0x3f800000;
  local_e8 = 0;
  uStack_e4 = (undefined4)DAT_14c84635c;
  uStack_e0 = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
  uStack_dc = 0x3f800000;
  uStack_d8 = 0;
  uStack_d4 = 0x3f80000000000000;
  local_cc = 0;
  uStack_c8 = 0;
  local_c4 = local_c4 & 0xffffff00;
  local_c0 = &PTR_FUN_149eda650;
  local_40 = 0;
  if (&local_f8 != param_2) {
    uStack_c8 = (undefined4)param_2[6];
    local_c4 = (uint)((ulonglong)param_2[6] >> 0x20);
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    uStack_d8 = *(undefined4 *)(param_2 + 4);
    uStack_d4 = *(undefined8 *)((longlong)param_2 + 0x24);
    local_cc = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_e8 = (undefined4)param_2[2];
    uStack_e4 = (undefined4)((ulonglong)param_2[2] >> 0x20);
    uStack_e0 = (undefined4)param_2[3];
    uStack_dc = (undefined4)((ulonglong)param_2[3] >> 0x20);
  }
  local_a8 = param_3[3];
  uVar5 = param_3[1];
  local_b8 = (undefined2)uVar5;
  uStack_b6 = (undefined1)((ulonglong)uVar5 >> 0x10);
  uStack_b5 = (undefined1)((ulonglong)uVar5 >> 0x18);
  uStack_b4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_b0 = (undefined4)param_3[2];
  uStack_ac = (undefined4)((ulonglong)param_3[2] >> 0x20);
  local_a0 = *(undefined4 *)(param_3 + 4);
  uStack_9c = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_98 = *(undefined4 *)(param_3 + 5);
  uStack_94 = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_90 = *(undefined4 *)(param_3 + 6);
  uStack_8c = *(undefined4 *)((longlong)param_3 + 0x34);
  uStack_88 = *(undefined4 *)(param_3 + 7);
  uStack_84 = *(undefined4 *)((longlong)param_3 + 0x3c);
  local_80 = param_3[8];
  local_78 = param_3[9];
  plStack_70 = (longlong *)param_3[10];
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
    UNLOCK();
  }
  local_68 = param_3[0xb];
  uStack_60 = *(undefined4 *)(param_3 + 0xc);
  uVar4 = *(undefined4 *)((longlong)param_3 + 100);
  uStack_55 = *(undefined4 *)((longlong)param_3 + 0x6b);
  uStack_51 = *(undefined4 *)((longlong)param_3 + 0x6f);
  uStack_5c = (undefined2)uVar4;
  uStack_5a = (undefined1)((uint)uVar4 >> 0x10);
  uStack_58 = (undefined3)((uint)*(undefined4 *)((longlong)param_3 + 0x67) >> 8);
  uStack_59 = (undefined1)((uint)uVar4 >> 0x18);
  local_48 = param_4;
  uVar5 = FUN_14477b072(param_1,DAT_14cab9838);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_f8);
  plVar3 = plStack_70;
  uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),local_40);
  local_c0 = &PTR_FUN_149eda650;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *param_3 = &PTR_FUN_149eda650;
  plVar3 = (longlong *)param_3[10];
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
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147795064 FUN_147795064 body=210 status=ok
// SIG undefined FUN_147795064(void)

undefined8
FUN_147795064(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_147795138(&local_128);
  if (&local_128 != param_3) {
    local_f8 = *(undefined8 *)(param_3 + 0xc);
    local_128 = *param_3;
    uStack_124 = param_3[1];
    uStack_120 = param_3[2];
    uStack_11c = param_3[3];
    local_118 = *(undefined8 *)(param_3 + 4);
    uStack_110 = *(undefined8 *)(param_3 + 6);
    local_108 = *(undefined8 *)(param_3 + 8);
    uStack_100 = *(undefined8 *)(param_3 + 10);
  }
  local_f0 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cab9858);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_128);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_14493db24(local_e8);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147795138 FUN_147795138 body=86 status=ok
// SIG undefined FUN_147795138(void)

longlong FUN_147795138(longlong param_1)

{
  FUN_14570e3a0();
  *(undefined1 *)(param_1 + 0x38) = 2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  memset((void *)(param_1 + 0x68),0,0x88);
  *(undefined4 *)(param_1 + 0xf0) = 0x20702;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  return param_1;
}



// FUNCTION 14779518e FUN_14779518e body=235 status=ok
// SIG undefined FUN_14779518e(void)

undefined8 FUN_14779518e(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_14779527a(&local_148);
  if (&local_148 != param_3) {
    local_118 = param_3[6];
    local_148 = *param_3;
    uStack_140 = param_3[1];
    local_138 = param_3[2];
    uStack_130 = param_3[3];
    local_128 = param_3[4];
    uStack_120 = param_3[5];
  }
  local_f8 = *(undefined8 *)(param_4 + 0x18);
  local_108 = *(undefined4 *)(param_4 + 8);
  uStack_104 = *(undefined4 *)(param_4 + 0xc);
  uStack_100 = *(undefined4 *)(param_4 + 0x10);
  uStack_fc = *(undefined4 *)(param_4 + 0x14);
  local_f0 = *(undefined2 *)(param_4 + 0x20);
  uVar1 = FUN_14477b072(param_1,DAT_14cab9878);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_148);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_14493db24(local_e8);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779527a FUN_14779527a body=112 status=ok
// SIG undefined FUN_14779527a(void)

longlong FUN_14779527a(longlong param_1)

{
  FUN_14570e3a0();
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda6b0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  memset((void *)(param_1 + 0x88),0,0x88);
  *(undefined4 *)(param_1 + 0x110) = 0x20702;
  *(undefined1 *)(param_1 + 0x114) = 0;
  return param_1;
}



// FUNCTION 1477952ea FUN_1477952ea body=366 status=ok
// SIG undefined FUN_1477952ea(void)

undefined8
FUN_1477952ea(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [192];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_14779545a(&local_168);
  plVar5 = local_100;
  if (&local_168 != param_3) {
    local_138 = param_3[6];
    local_168 = *param_3;
    uStack_160 = param_3[1];
    local_158 = param_3[2];
    uStack_150 = param_3[3];
    local_148 = param_3[4];
    uStack_140 = param_3[5];
  }
  local_118 = param_4[3];
  local_128 = *(undefined4 *)(param_4 + 1);
  uStack_124 = *(undefined4 *)((longlong)param_4 + 0xc);
  uStack_120 = *(undefined4 *)(param_4 + 2);
  uStack_11c = *(undefined4 *)((longlong)param_4 + 0x14);
  local_110 = param_4[4];
  local_108 = param_4[5];
  plVar3 = (longlong *)param_4[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_100;
      local_100 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_100;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_100;
      }
    }
  }
  local_100 = plVar3;
  local_f8 = param_4[7];
  uVar6 = FUN_14477b072(param_1,DAT_14cab9888);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_168);
  FUN_1403d4c6e(param_2,local_f0);
  FUN_1477954d4(&local_168);
  *param_4 = &PTR_FUN_149eda6d0;
  plVar5 = (longlong *)param_4[6];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779545a FUN_14779545a body=121 status=ok
// SIG undefined FUN_14779545a(void)

longlong FUN_14779545a(longlong param_1)

{
  FUN_14570e3a0();
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda6d0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  memset((void *)(param_1 + 0xa0),0,0x88);
  *(undefined4 *)(param_1 + 0x128) = 0x20702;
  *(undefined1 *)(param_1 + 300) = 0;
  return param_1;
}



// FUNCTION 1477954d4 FUN_1477954d4 body=79 status=ok
// SIG undefined FUN_1477954d4(void)

void FUN_1477954d4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0x78);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda6d0;
  plVar3 = *(longlong **)(param_1 + 0x68);
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
                    /* WARNING: Could not recover jumptable at 0x000147795518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147795524 FUN_147795524 body=366 status=ok
// SIG undefined FUN_147795524(void)

undefined8
FUN_147795524(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [192];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_147795694(&local_168);
  plVar5 = local_100;
  if (&local_168 != param_3) {
    local_138 = param_3[6];
    local_168 = *param_3;
    uStack_160 = param_3[1];
    local_158 = param_3[2];
    uStack_150 = param_3[3];
    local_148 = param_3[4];
    uStack_140 = param_3[5];
  }
  local_118 = param_4[3];
  local_128 = *(undefined4 *)(param_4 + 1);
  uStack_124 = *(undefined4 *)((longlong)param_4 + 0xc);
  uStack_120 = *(undefined4 *)(param_4 + 2);
  uStack_11c = *(undefined4 *)((longlong)param_4 + 0x14);
  local_110 = param_4[4];
  local_108 = param_4[5];
  plVar3 = (longlong *)param_4[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_100;
      local_100 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_100;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_100;
      }
    }
  }
  local_100 = plVar3;
  local_f8 = param_4[7];
  uVar6 = FUN_14477b072(param_1,DAT_14cab9898);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_168);
  FUN_1403d4c6e(param_2,local_f0);
  FUN_14779570e(&local_168);
  *param_4 = &PTR_FUN_149eda6d0;
  plVar5 = (longlong *)param_4[6];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147795694 FUN_147795694 body=121 status=ok
// SIG undefined FUN_147795694(void)

longlong FUN_147795694(longlong param_1)

{
  FUN_14570e3a0();
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda6d0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  memset((void *)(param_1 + 0xa0),0,0x88);
  *(undefined4 *)(param_1 + 0x128) = 0x20702;
  *(undefined1 *)(param_1 + 300) = 0;
  return param_1;
}



// FUNCTION 14779570e FUN_14779570e body=79 status=ok
// SIG undefined FUN_14779570e(void)

void FUN_14779570e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0x78);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda6d0;
  plVar3 = *(longlong **)(param_1 + 0x68);
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
                    /* WARNING: Could not recover jumptable at 0x000147795752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14779575e FUN_14779575e body=236 status=ok
// SIG undefined FUN_14779575e(void)

undefined8 FUN_14779575e(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150 [12];
  undefined1 local_f0 [192];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_14779584c(&local_1a8);
  if (&local_1a8 != param_3) {
    local_178 = param_3[6];
    local_1a8 = *param_3;
    uStack_1a0 = param_3[1];
    local_198 = param_3[2];
    uStack_190 = param_3[3];
    local_188 = param_3[4];
    uStack_180 = param_3[5];
  }
  local_158 = *(undefined8 *)(param_4 + 0x18);
  local_168 = *(undefined4 *)(param_4 + 8);
  uStack_164 = *(undefined4 *)(param_4 + 0xc);
  uStack_160 = *(undefined4 *)(param_4 + 0x10);
  uStack_15c = *(undefined4 *)(param_4 + 0x14);
  puVar3 = (undefined8 *)(param_4 + 0x20);
  puVar4 = local_150;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_14477b072(param_1,DAT_14cab98a8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1a8);
  FUN_1403d4c6e(param_2,local_f0);
  FUN_14493db24(local_f0);
  if ((local_30 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779584c FUN_14779584c body=163 status=ok
// SIG undefined FUN_14779584c(void)

longlong FUN_14779584c(longlong param_1)

{
  FUN_14570e3a0();
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfe00;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda710;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  memset((void *)(param_1 + 0xe0),0,0x88);
  *(undefined4 *)(param_1 + 0x168) = 0x20702;
  *(undefined1 *)(param_1 + 0x16c) = 0;
  return param_1;
}



// FUNCTION 1477958f0 FUN_1477958f0 body=356 status=ok
// SIG undefined FUN_1477958f0(void)

undefined8 FUN_1477958f0(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_147795a56(&local_198);
  plVar5 = local_110;
  if (&local_198 != param_3) {
    local_168 = param_3[6];
    local_198 = *param_3;
    uStack_190 = param_3[1];
    local_188 = param_3[2];
    uStack_180 = param_3[3];
    local_178 = param_3[4];
    uStack_170 = param_3[5];
  }
  local_148 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 8);
  uStack_150 = *(undefined8 *)(param_4 + 0x10);
  local_140 = *(undefined4 *)(param_4 + 0x20);
  uStack_13c = *(undefined4 *)(param_4 + 0x24);
  uStack_138 = *(undefined4 *)(param_4 + 0x28);
  uStack_134 = *(undefined4 *)(param_4 + 0x2c);
  local_130 = *(undefined4 *)(param_4 + 0x30);
  uStack_12c = *(undefined4 *)(param_4 + 0x34);
  uStack_128 = *(undefined4 *)(param_4 + 0x38);
  uStack_124 = *(undefined4 *)(param_4 + 0x3c);
  local_120 = *(undefined8 *)(param_4 + 0x40);
  local_118 = *(undefined8 *)(param_4 + 0x48);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_110;
      local_110 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_110;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_110;
      }
    }
  }
  local_110 = plVar3;
  uStack_108 = *(undefined4 *)(param_4 + 0x58);
  uStack_104 = *(undefined4 *)(param_4 + 0x5c);
  uStack_100 = *(undefined4 *)(param_4 + 0x60);
  uStack_fc = *(undefined4 *)(param_4 + 100);
  uStack_f5 = *(undefined4 *)(param_4 + 0x6b);
  uStack_f1 = *(undefined4 *)(param_4 + 0x6f);
  uStack_f8 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uVar6 = FUN_14477b072(param_1,DAT_14cab98b8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_198);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_147795b16(&local_198);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147795a56 FUN_147795a56 body=192 status=ok
// SIG undefined FUN_147795a56(void)

longlong FUN_147795a56(longlong param_1)

{
  FUN_14570e3a0();
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfe00;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_14c96b1e8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  memset((void *)(param_1 + 0xd8),0,0x88);
  *(undefined4 *)(param_1 + 0x160) = 0x20702;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 147795b16 FUN_147795b16 body=85 status=ok
// SIG undefined FUN_147795b16(void)

void FUN_147795b16(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0xb0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  plVar3 = *(longlong **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x000147795b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147795b6c FUN_147795b6c body=356 status=ok
// SIG undefined FUN_147795b6c(void)

undefined8 FUN_147795b6c(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_147795cd2(&local_198);
  plVar5 = local_110;
  if (&local_198 != param_3) {
    local_168 = param_3[6];
    local_198 = *param_3;
    uStack_190 = param_3[1];
    local_188 = param_3[2];
    uStack_180 = param_3[3];
    local_178 = param_3[4];
    uStack_170 = param_3[5];
  }
  local_148 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 8);
  uStack_150 = *(undefined8 *)(param_4 + 0x10);
  local_140 = *(undefined4 *)(param_4 + 0x20);
  uStack_13c = *(undefined4 *)(param_4 + 0x24);
  uStack_138 = *(undefined4 *)(param_4 + 0x28);
  uStack_134 = *(undefined4 *)(param_4 + 0x2c);
  local_130 = *(undefined4 *)(param_4 + 0x30);
  uStack_12c = *(undefined4 *)(param_4 + 0x34);
  uStack_128 = *(undefined4 *)(param_4 + 0x38);
  uStack_124 = *(undefined4 *)(param_4 + 0x3c);
  local_120 = *(undefined8 *)(param_4 + 0x40);
  local_118 = *(undefined8 *)(param_4 + 0x48);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_110;
      local_110 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_110;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_110;
      }
    }
  }
  local_110 = plVar3;
  uStack_108 = *(undefined4 *)(param_4 + 0x58);
  uStack_104 = *(undefined4 *)(param_4 + 0x5c);
  uStack_100 = *(undefined4 *)(param_4 + 0x60);
  uStack_fc = *(undefined4 *)(param_4 + 100);
  uStack_f5 = *(undefined4 *)(param_4 + 0x6b);
  uStack_f1 = *(undefined4 *)(param_4 + 0x6f);
  uStack_f8 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uVar6 = FUN_14477b072(param_1,DAT_14cab98c8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_198);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_147795d92(&local_198);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147795cd2 FUN_147795cd2 body=192 status=ok
// SIG undefined FUN_147795cd2(void)

longlong FUN_147795cd2(longlong param_1)

{
  FUN_14570e3a0();
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfe00;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_14c96b1e8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  memset((void *)(param_1 + 0xd8),0,0x88);
  *(undefined4 *)(param_1 + 0x160) = 0x20702;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 147795d92 FUN_147795d92 body=85 status=ok
// SIG undefined FUN_147795d92(void)

void FUN_147795d92(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0xb0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  plVar3 = *(longlong **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x000147795ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147795de8 FUN_147795de8 body=356 status=ok
// SIG undefined FUN_147795de8(void)

undefined8 FUN_147795de8(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_147795f4e(&local_198);
  plVar5 = local_110;
  if (&local_198 != param_3) {
    local_168 = param_3[6];
    local_198 = *param_3;
    uStack_190 = param_3[1];
    local_188 = param_3[2];
    uStack_180 = param_3[3];
    local_178 = param_3[4];
    uStack_170 = param_3[5];
  }
  local_148 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 8);
  uStack_150 = *(undefined8 *)(param_4 + 0x10);
  local_140 = *(undefined4 *)(param_4 + 0x20);
  uStack_13c = *(undefined4 *)(param_4 + 0x24);
  uStack_138 = *(undefined4 *)(param_4 + 0x28);
  uStack_134 = *(undefined4 *)(param_4 + 0x2c);
  local_130 = *(undefined4 *)(param_4 + 0x30);
  uStack_12c = *(undefined4 *)(param_4 + 0x34);
  uStack_128 = *(undefined4 *)(param_4 + 0x38);
  uStack_124 = *(undefined4 *)(param_4 + 0x3c);
  local_120 = *(undefined8 *)(param_4 + 0x40);
  local_118 = *(undefined8 *)(param_4 + 0x48);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_110;
      local_110 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_110;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_110;
      }
    }
  }
  local_110 = plVar3;
  uStack_108 = *(undefined4 *)(param_4 + 0x58);
  uStack_104 = *(undefined4 *)(param_4 + 0x5c);
  uStack_100 = *(undefined4 *)(param_4 + 0x60);
  uStack_fc = *(undefined4 *)(param_4 + 100);
  uStack_f5 = *(undefined4 *)(param_4 + 0x6b);
  uStack_f1 = *(undefined4 *)(param_4 + 0x6f);
  uStack_f8 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uVar6 = FUN_14477b072(param_1,DAT_14cab98d8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_198);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_14779600e(&local_198);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147795f4e FUN_147795f4e body=192 status=ok
// SIG undefined FUN_147795f4e(void)

longlong FUN_147795f4e(longlong param_1)

{
  FUN_14570e3a0();
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfe00;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_14c96b1e8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  memset((void *)(param_1 + 0xd8),0,0x88);
  *(undefined4 *)(param_1 + 0x160) = 0x20702;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 14779600e FUN_14779600e body=85 status=ok
// SIG undefined FUN_14779600e(void)

void FUN_14779600e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0xb0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  plVar3 = *(longlong **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x000147796058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147796064 FUN_147796064 body=474 status=ok
// SIG undefined FUN_147796064(void)

/* WARNING: Removing unreachable block (ram,0x000147796182) */
/* WARNING: Removing unreachable block (ram,0x000147796188) */
/* WARNING: Removing unreachable block (ram,0x000147796196) */

void FUN_147796064(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 local_bc;
  undefined4 uStack_b8;
  uint local_b4;
  undefined **local_b0;
  undefined2 local_a8;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined3 uStack_48;
  undefined4 uStack_45;
  undefined4 uStack_41;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  uStack_e0 = 0x3f800000;
  local_d8 = 0;
  uStack_d4 = (undefined4)DAT_14c84635c;
  uStack_d0 = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
  uStack_cc = 0x3f800000;
  uStack_c8 = 0;
  uStack_c4 = 0x3f80000000000000;
  local_bc = 0;
  uStack_b8 = 0;
  local_b4 = local_b4 & 0xffffff00;
  local_b0 = &PTR_FUN_149eda650;
  if (&local_e8 != param_2) {
    uStack_b8 = (undefined4)param_2[6];
    local_b4 = (uint)((ulonglong)param_2[6] >> 0x20);
    local_e8 = *param_2;
    uStack_e0 = param_2[1];
    uStack_c8 = *(undefined4 *)(param_2 + 4);
    uStack_c4 = *(undefined8 *)((longlong)param_2 + 0x24);
    local_bc = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_d8 = (undefined4)param_2[2];
    uStack_d4 = (undefined4)((ulonglong)param_2[2] >> 0x20);
    uStack_d0 = (undefined4)param_2[3];
    uStack_cc = (undefined4)((ulonglong)param_2[3] >> 0x20);
  }
  local_98 = *(undefined8 *)(param_3 + 0x18);
  uVar5 = *(undefined8 *)(param_3 + 8);
  local_a8 = (undefined2)uVar5;
  uStack_a6 = (undefined1)((ulonglong)uVar5 >> 0x10);
  uStack_a5 = (undefined1)((ulonglong)uVar5 >> 0x18);
  uStack_a4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_a0 = (undefined4)*(undefined8 *)(param_3 + 0x10);
  uStack_9c = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  local_90 = *(undefined4 *)(param_3 + 0x20);
  uStack_8c = *(undefined4 *)(param_3 + 0x24);
  uStack_88 = *(undefined4 *)(param_3 + 0x28);
  uStack_84 = *(undefined4 *)(param_3 + 0x2c);
  local_80 = *(undefined4 *)(param_3 + 0x30);
  uStack_7c = *(undefined4 *)(param_3 + 0x34);
  uStack_78 = *(undefined4 *)(param_3 + 0x38);
  uStack_74 = *(undefined4 *)(param_3 + 0x3c);
  local_70 = *(undefined8 *)(param_3 + 0x40);
  local_68 = *(undefined8 *)(param_3 + 0x48);
  plStack_60 = *(longlong **)(param_3 + 0x50);
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  local_58 = *(undefined8 *)(param_3 + 0x58);
  uStack_50 = *(undefined4 *)(param_3 + 0x60);
  uVar3 = *(undefined4 *)(param_3 + 100);
  uStack_45 = *(undefined4 *)(param_3 + 0x6b);
  uStack_41 = *(undefined4 *)(param_3 + 0x6f);
  uStack_4c = (undefined2)uVar3;
  uStack_4a = (undefined1)((uint)uVar3 >> 0x10);
  uStack_48 = (undefined3)((uint)*(undefined4 *)(param_3 + 0x67) >> 8);
  uStack_49 = (undefined1)((uint)uVar3 >> 0x18);
  uVar5 = FUN_14477b072(param_1,DAT_14cab98f8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_e8);
  plVar4 = plStack_60;
  local_b0 = &PTR_FUN_149eda650;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147796240 FUN_147796240 body=356 status=ok
// SIG undefined FUN_147796240(void)

/* WARNING: Removing unreachable block (ram,0x0001477962ee) */
/* WARNING: Removing unreachable block (ram,0x0001477962f4) */
/* WARNING: Removing unreachable block (ram,0x000147796302) */

void FUN_147796240(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined3 uStack_40;
  undefined4 uStack_3d;
  undefined4 uStack_39;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = &PTR_FUN_149eda650;
  local_90 = *(undefined8 *)(param_2 + 0x18);
  local_a0 = *(undefined8 *)(param_2 + 8);
  uStack_98 = *(undefined8 *)(param_2 + 0x10);
  local_88 = *(undefined4 *)(param_2 + 0x20);
  uStack_84 = *(undefined4 *)(param_2 + 0x24);
  uStack_80 = *(undefined4 *)(param_2 + 0x28);
  uStack_7c = *(undefined4 *)(param_2 + 0x2c);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  uStack_74 = *(undefined4 *)(param_2 + 0x34);
  uStack_70 = *(undefined4 *)(param_2 + 0x38);
  uStack_6c = *(undefined4 *)(param_2 + 0x3c);
  local_68 = *(undefined8 *)(param_2 + 0x40);
  local_60 = *(undefined8 *)(param_2 + 0x48);
  plStack_58 = *(longlong **)(param_2 + 0x50);
  if (plStack_58 == (longlong *)0x0) {
    plStack_58 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
    UNLOCK();
  }
  local_50 = *(undefined8 *)(param_2 + 0x58);
  uStack_48 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  uStack_3d = *(undefined4 *)(param_2 + 0x6b);
  uStack_39 = *(undefined4 *)(param_2 + 0x6f);
  uStack_44 = (undefined2)uVar3;
  uStack_42 = (undefined1)((uint)uVar3 >> 0x10);
  uStack_40 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x67) >> 8);
  uStack_41 = (undefined1)((uint)uVar3 >> 0x18);
  uVar5 = FUN_14477b072(param_1,DAT_14cab9908);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_a8);
  plVar4 = plStack_58;
  local_a8 = &PTR_FUN_149eda650;
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477963a6 FUN_1477963a6 body=356 status=ok
// SIG undefined FUN_1477963a6(void)

undefined8 FUN_1477963a6(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14779650c(&local_198);
  plVar5 = local_110;
  if (&local_198 != param_3) {
    local_168 = param_3[6];
    local_198 = *param_3;
    uStack_190 = param_3[1];
    local_188 = param_3[2];
    uStack_180 = param_3[3];
    local_178 = param_3[4];
    uStack_170 = param_3[5];
  }
  local_148 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 8);
  uStack_150 = *(undefined8 *)(param_4 + 0x10);
  local_140 = *(undefined4 *)(param_4 + 0x20);
  uStack_13c = *(undefined4 *)(param_4 + 0x24);
  uStack_138 = *(undefined4 *)(param_4 + 0x28);
  uStack_134 = *(undefined4 *)(param_4 + 0x2c);
  local_130 = *(undefined4 *)(param_4 + 0x30);
  uStack_12c = *(undefined4 *)(param_4 + 0x34);
  uStack_128 = *(undefined4 *)(param_4 + 0x38);
  uStack_124 = *(undefined4 *)(param_4 + 0x3c);
  local_120 = *(undefined8 *)(param_4 + 0x40);
  local_118 = *(undefined8 *)(param_4 + 0x48);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_110;
      local_110 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_110;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_110;
      }
    }
  }
  local_110 = plVar3;
  uStack_108 = *(undefined4 *)(param_4 + 0x58);
  uStack_104 = *(undefined4 *)(param_4 + 0x5c);
  uStack_100 = *(undefined4 *)(param_4 + 0x60);
  uStack_fc = *(undefined4 *)(param_4 + 100);
  uStack_f5 = *(undefined4 *)(param_4 + 0x6b);
  uStack_f1 = *(undefined4 *)(param_4 + 0x6f);
  uStack_f8 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uVar6 = FUN_14477b072(param_1,DAT_14cab9918);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_198);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_1477965cc(&local_198);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779650c FUN_14779650c body=192 status=ok
// SIG undefined FUN_14779650c(void)

longlong FUN_14779650c(longlong param_1)

{
  FUN_14570e3a0();
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfe00;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_14c96b1e8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  memset((void *)(param_1 + 0xd8),0,0x88);
  *(undefined4 *)(param_1 + 0x160) = 0x20702;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 1477965cc FUN_1477965cc body=85 status=ok
// SIG undefined FUN_1477965cc(void)

void FUN_1477965cc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0xb0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  plVar3 = *(longlong **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x000147796616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147796622 FUN_147796622 body=356 status=ok
// SIG undefined FUN_147796622(void)

undefined8 FUN_147796622(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_147796788(&local_198);
  plVar5 = local_110;
  if (&local_198 != param_3) {
    local_168 = param_3[6];
    local_198 = *param_3;
    uStack_190 = param_3[1];
    local_188 = param_3[2];
    uStack_180 = param_3[3];
    local_178 = param_3[4];
    uStack_170 = param_3[5];
  }
  local_148 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 8);
  uStack_150 = *(undefined8 *)(param_4 + 0x10);
  local_140 = *(undefined4 *)(param_4 + 0x20);
  uStack_13c = *(undefined4 *)(param_4 + 0x24);
  uStack_138 = *(undefined4 *)(param_4 + 0x28);
  uStack_134 = *(undefined4 *)(param_4 + 0x2c);
  local_130 = *(undefined4 *)(param_4 + 0x30);
  uStack_12c = *(undefined4 *)(param_4 + 0x34);
  uStack_128 = *(undefined4 *)(param_4 + 0x38);
  uStack_124 = *(undefined4 *)(param_4 + 0x3c);
  local_120 = *(undefined8 *)(param_4 + 0x40);
  local_118 = *(undefined8 *)(param_4 + 0x48);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_110;
      local_110 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_110;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_110;
      }
    }
  }
  local_110 = plVar3;
  uStack_108 = *(undefined4 *)(param_4 + 0x58);
  uStack_104 = *(undefined4 *)(param_4 + 0x5c);
  uStack_100 = *(undefined4 *)(param_4 + 0x60);
  uStack_fc = *(undefined4 *)(param_4 + 100);
  uStack_f5 = *(undefined4 *)(param_4 + 0x6b);
  uStack_f1 = *(undefined4 *)(param_4 + 0x6f);
  uStack_f8 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uVar6 = FUN_14477b072(param_1,DAT_14cab9928);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_198);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_147796848(&local_198);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147796788 FUN_147796788 body=192 status=ok
// SIG undefined FUN_147796788(void)

longlong FUN_147796788(longlong param_1)

{
  FUN_14570e3a0();
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfe00;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_14c96b1e8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  memset((void *)(param_1 + 0xd8),0,0x88);
  *(undefined4 *)(param_1 + 0x160) = 0x20702;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 147796848 FUN_147796848 body=85 status=ok
// SIG undefined FUN_147796848(void)

void FUN_147796848(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0xb0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  plVar3 = *(longlong **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x000147796892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14779689e FUN_14779689e body=182 status=ok
// SIG undefined FUN_14779689e(void)

void FUN_14779689e(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14779bfd2();
  local_28 = *(undefined1 *)(param_2 + 10);
  local_30 = *(undefined8 *)(param_2 + 8);
  local_38 = param_2[6];
  local_40 = *(undefined8 *)(param_2 + 4);
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  local_24 = param_2[0xb];
  uVar1 = FUN_14477b072(param_1,DAT_14cab9938);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_50);
  *param_2 = local_50;
  param_2[1] = uStack_4c;
  param_2[2] = uStack_48;
  param_2[3] = uStack_44;
  *(undefined8 *)(param_2 + 4) = local_40;
  param_2[6] = local_38;
  *(undefined8 *)(param_2 + 8) = local_30;
  *(undefined1 *)(param_2 + 10) = local_28;
  param_2[0xb] = local_24;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147796956 FUN_147796956 body=366 status=ok
// SIG undefined FUN_147796956(void)

undefined8
FUN_147796956(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [192];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_147796ac6(&local_168);
  plVar5 = local_100;
  if (&local_168 != param_3) {
    local_138 = param_3[6];
    local_168 = *param_3;
    uStack_160 = param_3[1];
    local_158 = param_3[2];
    uStack_150 = param_3[3];
    local_148 = param_3[4];
    uStack_140 = param_3[5];
  }
  local_118 = param_4[3];
  local_128 = *(undefined4 *)(param_4 + 1);
  uStack_124 = *(undefined4 *)((longlong)param_4 + 0xc);
  uStack_120 = *(undefined4 *)(param_4 + 2);
  uStack_11c = *(undefined4 *)((longlong)param_4 + 0x14);
  local_110 = param_4[4];
  local_108 = param_4[5];
  plVar3 = (longlong *)param_4[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_100;
      local_100 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_100;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_100;
      }
    }
  }
  local_100 = plVar3;
  local_f8 = param_4[7];
  uVar6 = FUN_14477b072(param_1,DAT_14cab9948);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_168);
  FUN_1403d4c6e(param_2,local_f0);
  FUN_147796b40(&local_168);
  *param_4 = &PTR_FUN_149eda6d0;
  plVar5 = (longlong *)param_4[6];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147796ac6 FUN_147796ac6 body=121 status=ok
// SIG undefined FUN_147796ac6(void)

longlong FUN_147796ac6(longlong param_1)

{
  FUN_14570e3a0();
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda6d0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  memset((void *)(param_1 + 0xa0),0,0x88);
  *(undefined4 *)(param_1 + 0x128) = 0x20702;
  *(undefined1 *)(param_1 + 300) = 0;
  return param_1;
}



// FUNCTION 147796b40 FUN_147796b40 body=79 status=ok
// SIG undefined FUN_147796b40(void)

void FUN_147796b40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0x78);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda6d0;
  plVar3 = *(longlong **)(param_1 + 0x68);
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
                    /* WARNING: Could not recover jumptable at 0x000147796b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147796b90 FUN_147796b90 body=356 status=ok
// SIG undefined FUN_147796b90(void)

undefined8 FUN_147796b90(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_147796cf6(&local_198);
  plVar5 = local_110;
  if (&local_198 != param_3) {
    local_168 = param_3[6];
    local_198 = *param_3;
    uStack_190 = param_3[1];
    local_188 = param_3[2];
    uStack_180 = param_3[3];
    local_178 = param_3[4];
    uStack_170 = param_3[5];
  }
  local_148 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 8);
  uStack_150 = *(undefined8 *)(param_4 + 0x10);
  local_140 = *(undefined4 *)(param_4 + 0x20);
  uStack_13c = *(undefined4 *)(param_4 + 0x24);
  uStack_138 = *(undefined4 *)(param_4 + 0x28);
  uStack_134 = *(undefined4 *)(param_4 + 0x2c);
  local_130 = *(undefined4 *)(param_4 + 0x30);
  uStack_12c = *(undefined4 *)(param_4 + 0x34);
  uStack_128 = *(undefined4 *)(param_4 + 0x38);
  uStack_124 = *(undefined4 *)(param_4 + 0x3c);
  local_120 = *(undefined8 *)(param_4 + 0x40);
  local_118 = *(undefined8 *)(param_4 + 0x48);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_110;
      local_110 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_110;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_110;
      }
    }
  }
  local_110 = plVar3;
  uStack_108 = *(undefined4 *)(param_4 + 0x58);
  uStack_104 = *(undefined4 *)(param_4 + 0x5c);
  uStack_100 = *(undefined4 *)(param_4 + 0x60);
  uStack_fc = *(undefined4 *)(param_4 + 100);
  uStack_f5 = *(undefined4 *)(param_4 + 0x6b);
  uStack_f1 = *(undefined4 *)(param_4 + 0x6f);
  uStack_f8 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uVar6 = FUN_14477b072(param_1,DAT_14cab9958);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_198);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_147796db6(&local_198);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147796cf6 FUN_147796cf6 body=192 status=ok
// SIG undefined FUN_147796cf6(void)

longlong FUN_147796cf6(longlong param_1)

{
  FUN_14570e3a0();
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfe00;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_14c96b1e8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  memset((void *)(param_1 + 0xd8),0,0x88);
  *(undefined4 *)(param_1 + 0x160) = 0x20702;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 147796db6 FUN_147796db6 body=85 status=ok
// SIG undefined FUN_147796db6(void)

void FUN_147796db6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0xb0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  plVar3 = *(longlong **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x000147796e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147796e0c FUN_147796e0c body=356 status=ok
// SIG undefined FUN_147796e0c(void)

undefined8 FUN_147796e0c(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_147796f72(&local_198);
  plVar5 = local_110;
  if (&local_198 != param_3) {
    local_168 = param_3[6];
    local_198 = *param_3;
    uStack_190 = param_3[1];
    local_188 = param_3[2];
    uStack_180 = param_3[3];
    local_178 = param_3[4];
    uStack_170 = param_3[5];
  }
  local_148 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 8);
  uStack_150 = *(undefined8 *)(param_4 + 0x10);
  local_140 = *(undefined4 *)(param_4 + 0x20);
  uStack_13c = *(undefined4 *)(param_4 + 0x24);
  uStack_138 = *(undefined4 *)(param_4 + 0x28);
  uStack_134 = *(undefined4 *)(param_4 + 0x2c);
  local_130 = *(undefined4 *)(param_4 + 0x30);
  uStack_12c = *(undefined4 *)(param_4 + 0x34);
  uStack_128 = *(undefined4 *)(param_4 + 0x38);
  uStack_124 = *(undefined4 *)(param_4 + 0x3c);
  local_120 = *(undefined8 *)(param_4 + 0x40);
  local_118 = *(undefined8 *)(param_4 + 0x48);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_110;
      local_110 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_110;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_110;
      }
    }
  }
  local_110 = plVar3;
  uStack_108 = *(undefined4 *)(param_4 + 0x58);
  uStack_104 = *(undefined4 *)(param_4 + 0x5c);
  uStack_100 = *(undefined4 *)(param_4 + 0x60);
  uStack_fc = *(undefined4 *)(param_4 + 100);
  uStack_f5 = *(undefined4 *)(param_4 + 0x6b);
  uStack_f1 = *(undefined4 *)(param_4 + 0x6f);
  uStack_f8 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uVar6 = FUN_14477b072(param_1,DAT_14cab9978);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_198);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_147797032(&local_198);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147796f72 FUN_147796f72 body=192 status=ok
// SIG undefined FUN_147796f72(void)

longlong FUN_147796f72(longlong param_1)

{
  FUN_14570e3a0();
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfe00;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_14c96b1e8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  memset((void *)(param_1 + 0xd8),0,0x88);
  *(undefined4 *)(param_1 + 0x160) = 0x20702;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 147797032 FUN_147797032 body=85 status=ok
// SIG undefined FUN_147797032(void)

void FUN_147797032(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0xb0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  plVar3 = *(longlong **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x00014779707c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147797088 FUN_147797088 body=356 status=ok
// SIG undefined FUN_147797088(void)

undefined8 FUN_147797088(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1477971ee(&local_198);
  plVar5 = local_110;
  if (&local_198 != param_3) {
    local_168 = param_3[6];
    local_198 = *param_3;
    uStack_190 = param_3[1];
    local_188 = param_3[2];
    uStack_180 = param_3[3];
    local_178 = param_3[4];
    uStack_170 = param_3[5];
  }
  local_148 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 8);
  uStack_150 = *(undefined8 *)(param_4 + 0x10);
  local_140 = *(undefined4 *)(param_4 + 0x20);
  uStack_13c = *(undefined4 *)(param_4 + 0x24);
  uStack_138 = *(undefined4 *)(param_4 + 0x28);
  uStack_134 = *(undefined4 *)(param_4 + 0x2c);
  local_130 = *(undefined4 *)(param_4 + 0x30);
  uStack_12c = *(undefined4 *)(param_4 + 0x34);
  uStack_128 = *(undefined4 *)(param_4 + 0x38);
  uStack_124 = *(undefined4 *)(param_4 + 0x3c);
  local_120 = *(undefined8 *)(param_4 + 0x40);
  local_118 = *(undefined8 *)(param_4 + 0x48);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_110;
      local_110 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_110;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_110;
      }
    }
  }
  local_110 = plVar3;
  uStack_108 = *(undefined4 *)(param_4 + 0x58);
  uStack_104 = *(undefined4 *)(param_4 + 0x5c);
  uStack_100 = *(undefined4 *)(param_4 + 0x60);
  uStack_fc = *(undefined4 *)(param_4 + 100);
  uStack_f5 = *(undefined4 *)(param_4 + 0x6b);
  uStack_f1 = *(undefined4 *)(param_4 + 0x6f);
  uStack_f8 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uVar6 = FUN_14477b072(param_1,DAT_14cab9988);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_198);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_1477972ae(&local_198);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477971ee FUN_1477971ee body=192 status=ok
// SIG undefined FUN_1477971ee(void)

longlong FUN_1477971ee(longlong param_1)

{
  FUN_14570e3a0();
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfe00;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_14c96b1e8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  memset((void *)(param_1 + 0xd8),0,0x88);
  *(undefined4 *)(param_1 + 0x160) = 0x20702;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 1477972ae FUN_1477972ae body=85 status=ok
// SIG undefined FUN_1477972ae(void)

void FUN_1477972ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0xb0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  plVar3 = *(longlong **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x0001477972f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147797304 FUN_147797304 body=356 status=ok
// SIG undefined FUN_147797304(void)

undefined8 FUN_147797304(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14779746a(&local_198);
  plVar5 = local_110;
  if (&local_198 != param_3) {
    local_168 = param_3[6];
    local_198 = *param_3;
    uStack_190 = param_3[1];
    local_188 = param_3[2];
    uStack_180 = param_3[3];
    local_178 = param_3[4];
    uStack_170 = param_3[5];
  }
  local_148 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 8);
  uStack_150 = *(undefined8 *)(param_4 + 0x10);
  local_140 = *(undefined4 *)(param_4 + 0x20);
  uStack_13c = *(undefined4 *)(param_4 + 0x24);
  uStack_138 = *(undefined4 *)(param_4 + 0x28);
  uStack_134 = *(undefined4 *)(param_4 + 0x2c);
  local_130 = *(undefined4 *)(param_4 + 0x30);
  uStack_12c = *(undefined4 *)(param_4 + 0x34);
  uStack_128 = *(undefined4 *)(param_4 + 0x38);
  uStack_124 = *(undefined4 *)(param_4 + 0x3c);
  local_120 = *(undefined8 *)(param_4 + 0x40);
  local_118 = *(undefined8 *)(param_4 + 0x48);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_110;
      local_110 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_110;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_110;
      }
    }
  }
  local_110 = plVar3;
  uStack_108 = *(undefined4 *)(param_4 + 0x58);
  uStack_104 = *(undefined4 *)(param_4 + 0x5c);
  uStack_100 = *(undefined4 *)(param_4 + 0x60);
  uStack_fc = *(undefined4 *)(param_4 + 100);
  uStack_f5 = *(undefined4 *)(param_4 + 0x6b);
  uStack_f1 = *(undefined4 *)(param_4 + 0x6f);
  uStack_f8 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uVar6 = FUN_14477b072(param_1,DAT_14cab9998);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_198);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_14779752a(&local_198);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779746a FUN_14779746a body=192 status=ok
// SIG undefined FUN_14779746a(void)

longlong FUN_14779746a(longlong param_1)

{
  FUN_14570e3a0();
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfe00;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_14c96b1e8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  memset((void *)(param_1 + 0xd8),0,0x88);
  *(undefined4 *)(param_1 + 0x160) = 0x20702;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 14779752a FUN_14779752a body=85 status=ok
// SIG undefined FUN_14779752a(void)

void FUN_14779752a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0xb0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  plVar3 = *(longlong **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x000147797574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147797580 FUN_147797580 body=356 status=ok
// SIG undefined FUN_147797580(void)

undefined8 FUN_147797580(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1477976e6(&local_198);
  plVar5 = local_110;
  if (&local_198 != param_3) {
    local_168 = param_3[6];
    local_198 = *param_3;
    uStack_190 = param_3[1];
    local_188 = param_3[2];
    uStack_180 = param_3[3];
    local_178 = param_3[4];
    uStack_170 = param_3[5];
  }
  local_148 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 8);
  uStack_150 = *(undefined8 *)(param_4 + 0x10);
  local_140 = *(undefined4 *)(param_4 + 0x20);
  uStack_13c = *(undefined4 *)(param_4 + 0x24);
  uStack_138 = *(undefined4 *)(param_4 + 0x28);
  uStack_134 = *(undefined4 *)(param_4 + 0x2c);
  local_130 = *(undefined4 *)(param_4 + 0x30);
  uStack_12c = *(undefined4 *)(param_4 + 0x34);
  uStack_128 = *(undefined4 *)(param_4 + 0x38);
  uStack_124 = *(undefined4 *)(param_4 + 0x3c);
  local_120 = *(undefined8 *)(param_4 + 0x40);
  local_118 = *(undefined8 *)(param_4 + 0x48);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_110;
      local_110 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_110;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_110;
      }
    }
  }
  local_110 = plVar3;
  uStack_108 = *(undefined4 *)(param_4 + 0x58);
  uStack_104 = *(undefined4 *)(param_4 + 0x5c);
  uStack_100 = *(undefined4 *)(param_4 + 0x60);
  uStack_fc = *(undefined4 *)(param_4 + 100);
  uStack_f5 = *(undefined4 *)(param_4 + 0x6b);
  uStack_f1 = *(undefined4 *)(param_4 + 0x6f);
  uStack_f8 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uVar6 = FUN_14477b072(param_1,DAT_14cab99a8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_198);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_1477977a6(&local_198);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477976e6 FUN_1477976e6 body=192 status=ok
// SIG undefined FUN_1477976e6(void)

longlong FUN_1477976e6(longlong param_1)

{
  FUN_14570e3a0();
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfe00;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_14c96b1e8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  memset((void *)(param_1 + 0xd8),0,0x88);
  *(undefined4 *)(param_1 + 0x160) = 0x20702;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 1477977a6 FUN_1477977a6 body=85 status=ok
// SIG undefined FUN_1477977a6(void)

void FUN_1477977a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0xb0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  plVar3 = *(longlong **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x0001477977f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477977fc FUN_1477977fc body=356 status=ok
// SIG undefined FUN_1477977fc(void)

undefined8 FUN_1477977fc(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_147797962(&local_198);
  plVar5 = local_110;
  if (&local_198 != param_3) {
    local_168 = param_3[6];
    local_198 = *param_3;
    uStack_190 = param_3[1];
    local_188 = param_3[2];
    uStack_180 = param_3[3];
    local_178 = param_3[4];
    uStack_170 = param_3[5];
  }
  local_148 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 8);
  uStack_150 = *(undefined8 *)(param_4 + 0x10);
  local_140 = *(undefined4 *)(param_4 + 0x20);
  uStack_13c = *(undefined4 *)(param_4 + 0x24);
  uStack_138 = *(undefined4 *)(param_4 + 0x28);
  uStack_134 = *(undefined4 *)(param_4 + 0x2c);
  local_130 = *(undefined4 *)(param_4 + 0x30);
  uStack_12c = *(undefined4 *)(param_4 + 0x34);
  uStack_128 = *(undefined4 *)(param_4 + 0x38);
  uStack_124 = *(undefined4 *)(param_4 + 0x3c);
  local_120 = *(undefined8 *)(param_4 + 0x40);
  local_118 = *(undefined8 *)(param_4 + 0x48);
  plVar3 = *(longlong **)(param_4 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_110;
      local_110 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_110;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = local_110;
      }
    }
  }
  local_110 = plVar3;
  uStack_108 = *(undefined4 *)(param_4 + 0x58);
  uStack_104 = *(undefined4 *)(param_4 + 0x5c);
  uStack_100 = *(undefined4 *)(param_4 + 0x60);
  uStack_fc = *(undefined4 *)(param_4 + 100);
  uStack_f5 = *(undefined4 *)(param_4 + 0x6b);
  uStack_f1 = *(undefined4 *)(param_4 + 0x6f);
  uStack_f8 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uVar6 = FUN_14477b072(param_1,DAT_14cab99b8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_198);
  FUN_1403d4c6e(param_2,local_e8);
  FUN_147797a22(&local_198);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147797962 FUN_147797962 body=192 status=ok
// SIG undefined FUN_147797962(void)

longlong FUN_147797962(longlong param_1)

{
  FUN_14570e3a0();
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfe00;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_14c96b1e8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  memset((void *)(param_1 + 0xd8),0,0x88);
  *(undefined4 *)(param_1 + 0x160) = 0x20702;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 147797a22 FUN_147797a22 body=85 status=ok
// SIG undefined FUN_147797a22(void)

void FUN_147797a22(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14493db24(param_1 + 0xb0);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_149eda650;
  plVar3 = *(longlong **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x000147797a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147797a78 FUN_147797a78 body=165 status=ok
// SIG undefined FUN_147797a78(void)

void FUN_147797a78(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_147797b1e(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147797b1e FUN_147797b1e body=134 status=ok
// SIG undefined FUN_147797b1e(void)

float FUN_147797b1e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (param_2 != 0) {
    lVar2 = FUN_14779c2fc();
    if (lVar2 != 0) {
      FUN_1476c7bb4(lVar2);
      lVar1 = *(longlong *)(lVar2 + 0x250);
      fVar3 = ((float)((lVar1 >> 0x20) * (longlong)(int)*(undefined8 *)(lVar2 + 0x25c)) +
              (float)(int)((ulonglong)lVar1 >> 0x20) *
              (float)((ulonglong)*(undefined8 *)(lVar2 + 0x25c) >> 0x20)) / (float)(int)lVar1;
    }
  }
  return fVar3;
}



// FUNCTION 147797baa FUN_147797baa body=596 status=ok
// SIG undefined FUN_147797baa(void)

void FUN_147797baa(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_50;
  undefined1 local_48;
  int local_3c;
  undefined4 local_38;
  byte local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_3c != 0;
  local_50 = local_38;
  local_58 = (uint)local_31;
  uVar1 = FUN_14333c8c0(param_1,local_28,local_2c,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147797e06 FUN_147797e06 body=319 status=ok
// SIG undefined FUN_147797e06(void)

void FUN_147797e06(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  int local_30;
  undefined4 local_2c;
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
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
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
  uVar1 = FUN_147797f46(param_1,local_28,local_2c,local_30 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147797f46 FUN_147797f46 body=134 status=ok
// SIG undefined FUN_147797f46(void)

longlong FUN_147797f46(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14779c2fc();
  if ((lVar2 == 0) ||
     (iVar1 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x38))(lVar2 + 0x28), iVar1 != 1)) {
    lVar2 = FUN_14333c8c0(param_1,param_2,0,1,0,param_3,param_4);
  }
  else if (*(char *)(lVar2 + 0x2b4) == '\0') {
    FUN_1476c7e9a(lVar2);
  }
  return lVar2;
}



// FUNCTION 147797fd2 FUN_147797fd2 body=319 status=ok
// SIG undefined FUN_147797fd2(void)

void FUN_147797fd2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  int local_30;
  undefined4 local_2c;
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
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
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
  uVar1 = FUN_147798112(param_1,local_28,local_2c,local_30 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147798112 FUN_147798112 body=134 status=ok
// SIG undefined FUN_147798112(void)

longlong FUN_147798112(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14779c2fc();
  if ((lVar2 == 0) ||
     (iVar1 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x38))(lVar2 + 0x28), iVar1 != 1)) {
    lVar2 = FUN_14333c8c0(param_1,param_2,0,1,1,param_3,param_4);
  }
  else if (*(char *)(lVar2 + 0x2b4) == '\x01') {
    FUN_1476c7e9a(lVar2);
  }
  return lVar2;
}



// FUNCTION 14779819e FUN_14779819e body=684 status=ok
// SIG undefined FUN_14779819e(void)

void FUN_14779819e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_60;
  undefined4 local_58;
  undefined1 local_50;
  int local_40;
  undefined4 local_3c;
  byte local_35;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
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
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
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
  local_35 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_35);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_35);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_40 != 0;
  local_58 = local_3c;
  local_60 = (uint)local_35;
  local_68 = local_34;
  uVar1 = FUN_14333c93c(param_1,local_28,local_2c,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779844c FUN_14779844c body=148 status=ok
// SIG undefined FUN_14779844c(void)

void FUN_14779844c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477984e2(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477984e2 FUN_1477984e2 body=106 status=ok
// SIG undefined FUN_1477984e2(void)

void FUN_1477984e2(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    local_28[1] = 0;
    local_28[2] = 0;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_1);
    }
    local_28[0] = param_1;
    FUN_1469a9da8(DAT_14c98e618,local_28,0);
  }
  if ((local_28[3] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147798552 FUN_147798552 body=165 status=ok
// SIG undefined FUN_147798552(void)

void FUN_147798552(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_1477985f8(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477985f8 FUN_1477985f8 body=250 status=ok
// SIG undefined FUN_1477985f8(void)

float FUN_1477985f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x218) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x210);
      lVar3 = (longlong)*(int *)(param_1 + 0x218) * 0x38;
      do {
        if (*plVar2 == param_2) {
          if (plVar2 != (longlong *)0x0) goto LAB_147798641;
          break;
        }
        plVar2 = plVar2 + 7;
        lVar3 = lVar3 + -0x38;
      } while (lVar3 != 0);
    }
    plVar2 = (longlong *)FUN_14779c6ca(param_1 + 0x210);
LAB_147798641:
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *plVar2 = param_2;
    *(undefined1 *)(plVar2 + 1) = 5;
    FUN_1417aaa18(param_1);
    lVar3 = FUN_14779c2fc(param_1,param_2);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(lVar3 + 0x250);
      fVar4 = ((float)((lVar1 >> 0x20) * (longlong)(int)*(undefined8 *)(lVar3 + 0x25c)) +
              (float)(int)((ulonglong)lVar1 >> 0x20) *
              (float)((ulonglong)*(undefined8 *)(lVar3 + 0x25c) >> 0x20)) / (float)(int)lVar1;
    }
  }
  return fVar4;
}



// FUNCTION 1477986f8 FUN_1477986f8 body=546 status=ok
// SIG undefined FUN_1477986f8(void)

void FUN_1477986f8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_50;
  undefined1 local_48;
  int local_34;
  undefined4 local_30;
  byte local_29;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_34 != 0;
  local_50 = local_30;
  local_58 = (uint)local_29;
  FUN_14779891c(param_1,local_20,local_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779891c FUN_14779891c body=336 status=ok
// SIG undefined FUN_14779891c(void)

void FUN_14779891c(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 local_63;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x218) != 0) {
      plVar1 = *(longlong **)(param_1 + 0x210);
      lVar2 = (longlong)*(int *)(param_1 + 0x218) * 0x38;
      do {
        if (*plVar1 == param_2) {
          if (plVar1 != (longlong *)0x0) goto LAB_1477989a5;
          break;
        }
        plVar1 = plVar1 + 7;
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    plVar1 = (longlong *)FUN_14779c6ca(param_1 + 0x210);
LAB_1477989a5:
    local_98 = 0;
    local_90 = 6;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_63 = 0;
    FUN_14779c706(plVar1);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *plVar1 = param_2;
    *(undefined1 *)(plVar1 + 1) = 0;
    *(undefined4 *)((longlong)plVar1 + 0xc) = param_3;
    *(undefined1 *)(plVar1 + 2) = 1;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = param_4;
    *(undefined1 *)(plVar1 + 4) = 1;
    *(undefined4 *)((longlong)plVar1 + 0x24) = param_5;
    *(undefined1 *)(plVar1 + 5) = 1;
    *(undefined4 *)((longlong)plVar1 + 0x2c) = param_6;
    *(undefined1 *)(plVar1 + 6) = 1;
    *(undefined1 *)((longlong)plVar1 + 0x34) = param_7;
    *(undefined1 *)((longlong)plVar1 + 0x35) = 1;
    FUN_1417aaa18(param_1);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147798a74 FUN_147798a74 body=311 status=ok
// SIG undefined FUN_147798a74(void)

void FUN_147798a74(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147798bac(param_1,local_20,local_24,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147798bac FUN_147798bac body=179 status=ok
// SIG undefined FUN_147798bac(void)

void FUN_147798bac(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    return;
  }
  if ((longlong)*(int *)(param_1 + 0x218) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x210);
    lVar1 = (longlong)*(int *)(param_1 + 0x218) * 0x38;
    do {
      if (*plVar2 == param_2) {
        if (plVar2 != (longlong *)0x0) goto LAB_147798c0b;
        break;
      }
      plVar2 = plVar2 + 7;
      lVar1 = lVar1 + -0x38;
    } while (lVar1 != 0);
  }
  plVar2 = (longlong *)FUN_14779c6ca(param_1 + 0x210);
LAB_147798c0b:
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *plVar2 = param_2;
  *(undefined1 *)(plVar2 + 1) = 2;
  *(undefined4 *)((longlong)plVar2 + 0x2c) = param_3;
  *(undefined1 *)(plVar2 + 6) = 1;
  *(undefined1 *)((longlong)plVar2 + 0x34) = param_4;
  *(undefined1 *)((longlong)plVar2 + 0x35) = 1;
  FUN_1417aaa18(param_1);
  return;
}



// FUNCTION 147798c66 FUN_147798c66 body=311 status=ok
// SIG undefined FUN_147798c66(void)

void FUN_147798c66(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147798d9e(param_1,local_20,local_24,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147798d9e FUN_147798d9e body=179 status=ok
// SIG undefined FUN_147798d9e(void)

void FUN_147798d9e(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    return;
  }
  if ((longlong)*(int *)(param_1 + 0x218) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x210);
    lVar1 = (longlong)*(int *)(param_1 + 0x218) * 0x38;
    do {
      if (*plVar2 == param_2) {
        if (plVar2 != (longlong *)0x0) goto LAB_147798dfd;
        break;
      }
      plVar2 = plVar2 + 7;
      lVar1 = lVar1 + -0x38;
    } while (lVar1 != 0);
  }
  plVar2 = (longlong *)FUN_14779c6ca(param_1 + 0x210);
LAB_147798dfd:
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *plVar2 = param_2;
  *(undefined1 *)(plVar2 + 1) = 3;
  *(undefined4 *)((longlong)plVar2 + 0x2c) = param_3;
  *(undefined1 *)(plVar2 + 6) = 1;
  *(undefined1 *)((longlong)plVar2 + 0x34) = param_4;
  *(undefined1 *)((longlong)plVar2 + 0x35) = 1;
  FUN_1417aaa18(param_1);
  return;
}



// FUNCTION 147798e58 FUN_147798e58 body=627 status=ok
// SIG undefined FUN_147798e58(void)

void FUN_147798e58(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  uint local_50;
  undefined4 local_48;
  undefined1 local_40;
  int local_38;
  undefined4 local_34;
  byte local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  local_34 = 0;
  FUN_144a64e42();
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
  local_40 = local_38 != 0;
  local_48 = local_34;
  local_50 = (uint)local_2d;
  local_58 = local_2c;
  FUN_1477990cc(param_1,local_20,local_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477990cc FUN_1477990cc body=284 status=ok
// SIG undefined FUN_1477990cc(void)

void FUN_1477990cc(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    return;
  }
  if ((longlong)*(int *)(param_1 + 0x218) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x210);
    lVar1 = (longlong)*(int *)(param_1 + 0x218) * 0x38;
    do {
      if (*plVar2 == param_2) {
        if (plVar2 != (longlong *)0x0) goto LAB_14779915b;
        break;
      }
      plVar2 = plVar2 + 7;
      lVar1 = lVar1 + -0x38;
    } while (lVar1 != 0);
  }
  plVar2 = (longlong *)FUN_14779c6ca(param_1 + 0x210);
LAB_14779915b:
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *plVar2 = param_2;
  *(undefined1 *)(plVar2 + 1) = 1;
  *(undefined4 *)((longlong)plVar2 + 0xc) = param_3;
  *(undefined1 *)(plVar2 + 2) = 1;
  *(undefined4 *)((longlong)plVar2 + 0x14) = param_4;
  *(undefined1 *)(plVar2 + 3) = 1;
  *(undefined4 *)((longlong)plVar2 + 0x1c) = param_5;
  *(undefined1 *)(plVar2 + 4) = 1;
  *(undefined4 *)((longlong)plVar2 + 0x24) = param_6;
  *(undefined1 *)(plVar2 + 5) = 1;
  *(undefined4 *)((longlong)plVar2 + 0x2c) = param_7;
  *(undefined1 *)(plVar2 + 6) = 1;
  *(undefined1 *)((longlong)plVar2 + 0x34) = param_8;
  *(undefined1 *)((longlong)plVar2 + 0x35) = 1;
  FUN_1417aaa18(param_1);
  return;
}



// FUNCTION 1477991fe FUN_1477991fe body=1365 status=ok
// SIG undefined FUN_1477991fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1477991fe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar28 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_138 [40];
  undefined1 local_110 [64];
  longlong local_d0;
  ulonglong local_c0;
  
  auVar16 = _DAT_149931e80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((longlong)*(int *)(param_1 + 0x218) != 0) {
    uVar18 = (longlong)*(int *)(param_1 + 0x218) * 0x38 - 0x38U >> 3;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar18;
    auVar22._8_4_ = SUB164(auVar23 * ZEXT816(0x2492492492492493),8);
    auVar22._0_8_ = uVar18 / 7;
    auVar22._12_4_ = (int)(uVar18 / 0x700000000);
    puVar19 = (undefined1 *)(*(longlong *)(param_1 + 0x210) + 0x350);
    uVar20 = 0;
    auVar23 = pmovsxbq(in_XMM1,0xf0e);
    auVar24 = pmovsxbq(in_XMM2,0xd0c);
    auVar25 = pmovsxbq(in_XMM3,0xb0a);
    auVar26 = pmovsxbq(in_XMM4,0x908);
    auVar27 = pmovsxbq(in_XMM5,0x706);
    auVar28 = pmovsxbq(unaff_XMM6,0x504);
    auVar29 = pmovsxbq(unaff_XMM7,0x302);
    auVar30 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar31._8_4_ = (int)uVar20;
      auVar31._0_8_ = uVar20;
      auVar31._12_4_ = (int)(uVar20 >> 0x20);
      auVar34 = auVar22 | auVar16;
      auVar35 = (auVar31 | auVar30) ^ auVar16;
      lVar33 = auVar34._0_8_;
      auVar36._0_8_ = -(ulonglong)(lVar33 < auVar35._0_8_);
      lVar21 = auVar34._8_8_;
      auVar36._8_8_ = -(ulonglong)(lVar21 < auVar35._8_8_);
      auVar43 = pshuflw(unaff_XMM14,auVar36,0xe8);
      auVar35._8_4_ = 0xffffffff;
      auVar35._0_8_ = 0xffffffffffffffff;
      auVar35._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar43 ^ auVar35,auVar43 ^ auVar35);
      if ((auVar35._0_4_ & 1) != 0) {
        puVar19[-0x348] = 4;
      }
      auVar36 = packssdw(auVar36,auVar36);
      auVar43._8_4_ = 0xffffffff;
      auVar43._0_8_ = 0xffffffffffffffff;
      auVar43._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar43,auVar36 ^ auVar43);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[1] & 1) != 0) {
        puVar19[-0x310] = 4;
      }
      auVar36 = (auVar31 | auVar29) ^ auVar16;
      auVar37._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar21 < auVar36._8_8_);
      auVar35 = packssdw(auVar35,auVar37);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar3,auVar35 ^ auVar3);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[2] & 1) != 0) {
        puVar19[-0x2d8] = 4;
      }
      auVar36 = pshufhw(auVar37,auVar37,0x84);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar4,auVar36 ^ auVar4);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[3] & 1) != 0) {
        puVar19[-0x2a0] = 4;
      }
      auVar36 = (auVar31 | auVar28) ^ auVar16;
      auVar38._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar21 < auVar36._8_8_);
      auVar35 = pshuflw(auVar35,auVar38,0xe8);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar5,auVar35 ^ auVar5);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[4] & 1) != 0) {
        puVar19[-0x268] = 4;
      }
      auVar36 = packssdw(auVar38,auVar38);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar6,auVar36 ^ auVar6);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[5] & 1) != 0) {
        puVar19[-0x230] = 4;
      }
      auVar36 = (auVar31 | auVar27) ^ auVar16;
      auVar39._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar39._8_8_ = -(ulonglong)(lVar21 < auVar36._8_8_);
      auVar35 = packssdw(auVar35,auVar39);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar7,auVar35 ^ auVar7);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[6] & 1) != 0) {
        puVar19[-0x1f8] = 4;
      }
      auVar36 = pshufhw(auVar39,auVar39,0x84);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar8,auVar36 ^ auVar8);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[7] & 1) != 0) {
        puVar19[-0x1c0] = 4;
      }
      auVar36 = (auVar31 | auVar26) ^ auVar16;
      auVar40._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar40._8_8_ = -(ulonglong)(lVar21 < auVar36._8_8_);
      auVar35 = pshuflw(auVar35,auVar40,0xe8);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar9,auVar35 ^ auVar9);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[8] & 1) != 0) {
        puVar19[-0x188] = 4;
      }
      auVar36 = packssdw(auVar40,auVar40);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar10,auVar36 ^ auVar10);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[9] & 1) != 0) {
        puVar19[-0x150] = 4;
      }
      auVar36 = (auVar31 | auVar25) ^ auVar16;
      auVar41._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar41._8_8_ = -(ulonglong)(lVar21 < auVar36._8_8_);
      auVar35 = packssdw(auVar35,auVar41);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar11,auVar35 ^ auVar11);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[10] & 1) != 0) {
        puVar19[-0x118] = 4;
      }
      auVar36 = pshufhw(auVar41,auVar41,0x84);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar12,auVar36 ^ auVar12);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[0xb] & 1) != 0) {
        puVar19[-0xe0] = 4;
      }
      auVar36 = (auVar31 | auVar24) ^ auVar16;
      auVar42._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar42._8_8_ = -(ulonglong)(lVar21 < auVar36._8_8_);
      auVar35 = pshuflw(auVar35,auVar42,0xe8);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar13,auVar35 ^ auVar13);
      unaff_XMM14 = packsswb(auVar35,auVar35);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar19[-0xa8] = 4;
      }
      auVar35 = packssdw(auVar42,auVar42);
      auVar14._8_4_ = 0xffffffff;
      auVar14._0_8_ = 0xffffffffffffffff;
      auVar14._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar14,auVar35 ^ auVar14);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[0xd] & 1) != 0) {
        puVar19[-0x70] = 4;
      }
      auVar35 = (auVar31 | auVar23) ^ auVar16;
      auVar32._0_8_ = -(ulonglong)(lVar33 < auVar35._0_8_);
      auVar32._8_8_ = -(ulonglong)(lVar21 < auVar35._8_8_);
      auVar35 = packssdw(auVar34,auVar32);
      auVar34._8_4_ = 0xffffffff;
      auVar34._0_8_ = 0xffffffffffffffff;
      auVar34._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar34,auVar35 ^ auVar34);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[0xe] & 1) != 0) {
        puVar19[-0x38] = 4;
      }
      auVar35 = pshufhw(auVar32,auVar32,0x84);
      auVar15._8_4_ = 0xffffffff;
      auVar15._0_8_ = 0xffffffffffffffff;
      auVar15._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar15,auVar35 ^ auVar15);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[0xf] & 1) != 0) {
        *puVar19 = 4;
      }
      uVar20 = uVar20 + 0x10;
      puVar19 = puVar19 + 0x380;
    } while ((uVar18 / 7 + 0x10 & 0xfffffffffffffff0) != uVar20);
  }
  local_d0 = 0;
  FUN_1477abb5a(local_110,*(undefined8 *)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x228),0);
  iVar1 = *(int *)(param_1 + 0x228);
  if ((longlong)iVar1 != 0) {
    lVar33 = *(longlong *)(param_1 + 0x220);
    lVar21 = 0;
    do {
      lVar2 = *(longlong *)(lVar33 + lVar21);
      iVar17 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x38))(lVar2 + 0x28);
      if (iVar17 == 1) {
        FUN_1477997f2(param_1,*(undefined8 *)(lVar2 + 0x210));
      }
      lVar21 = lVar21 + 8;
    } while ((longlong)iVar1 * 8 != lVar21);
  }
  FUN_1417aaa18(param_1);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147799754 FUN_147799754 body=156 status=ok
// SIG undefined FUN_147799754(void)

void FUN_147799754(undefined8 param_1,longlong param_2)

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
  FUN_1477997f2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477997f2 FUN_1477997f2 body=128 status=ok
// SIG undefined FUN_1477997f2(void)

void FUN_1477997f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    return;
  }
  if ((longlong)*(int *)(param_1 + 0x218) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x210);
    lVar1 = (longlong)*(int *)(param_1 + 0x218) * 0x38;
    do {
      if (*plVar2 == param_2) {
        if (plVar2 != (longlong *)0x0) goto LAB_147799840;
        break;
      }
      plVar2 = plVar2 + 7;
      lVar1 = lVar1 + -0x38;
    } while (lVar1 != 0);
  }
  plVar2 = (longlong *)FUN_14779c6ca(param_1 + 0x210);
LAB_147799840:
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *plVar2 = param_2;
  *(undefined1 *)(plVar2 + 1) = 4;
  FUN_1417aaa18(param_1);
  return;
}



// FUNCTION 147799872 FUN_147799872 body=83 status=ok
// SIG undefined FUN_147799872(void)

void FUN_147799872(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (param_1[0x54] != 0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477998bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xce0))(plVar1,param_1[0x54],*(code **)(*plVar1 + 0xce0));
      return;
    }
  }
  return;
}



// FUNCTION 1477998c6 FUN_1477998c6 body=156 status=ok
// SIG undefined FUN_1477998c6(void)

void FUN_1477998c6(undefined8 param_1,longlong param_2)

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
  FUN_147799964(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147799964 FUN_147799964 body=161 status=ok
// SIG undefined FUN_147799964(void)

void FUN_147799964(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (longlong *)0x0) {
    local_28 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar2 = FUN_14779f410(param_1 + 600,&local_28);
    if ((iVar2 != 0) && ((*(byte *)(param_1 + 0x270) & 8) != 0)) {
      cVar1 = (**(code **)(*param_2 + 0x2b8))(param_2);
      (**(code **)(*param_2 + 0x2b0))(param_2);
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147799a16 FUN_147799a16 body=185 status=ok
// SIG undefined FUN_147799a16(void)

void FUN_147799a16(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147799ad0(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147799ad0 FUN_147799ad0 body=557 status=ok
// SIG undefined FUN_147799ad0(void)

void FUN_147799ad0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_178 [32];
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x2000000000;
  iVar1 = *(int *)(param_1 + 0x260);
  if (0 < (longlong)iVar1) {
    iVar12 = -iVar1;
    uVar10 = (longlong)iVar1;
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 600) + -8 + uVar10 * 8);
      lVar11 = *param_2;
      if ((lVar11 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar11);
LAB_147799b59:
        lVar8 = FUN_14120aa3a();
        if (((lVar8 == 0) || (*(int *)(lVar11 + 0x38) < *(int *)(lVar8 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
            lVar8 + 0x30)) goto LAB_147799b7b;
      }
      else {
        if (lVar11 != 0) goto LAB_147799b59;
LAB_147799b7b:
        lVar11 = 0;
      }
      uVar5 = local_50;
      lVar8 = *(longlong *)(lVar13 + 0x10);
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30)) {
        lVar11 = (longlong)(int)local_50;
        uVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar7);
        if (local_50._4_4_ < uVar7) {
          FUN_1477ac24c(local_158,uVar5 & 0xffffffff);
        }
        puVar9 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar9 = local_158;
        }
        *(longlong *)(puVar9 + lVar11 * 8) = lVar13;
        uVar7 = *(uint *)(param_1 + 0x260);
        if (uVar10 != uVar7) {
          iVar1 = uVar7 + iVar12;
          if (0 < (int)(uVar7 + iVar12)) {
            iVar1 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 600) + uVar10 * 8 + -8),
                  (void *)(*(longlong *)(param_1 + 600) + (longlong)(int)(uVar7 - iVar1) * 8),
                  (longlong)iVar1 << 3);
          uVar7 = *(uint *)(param_1 + 0x260);
        }
        *(uint *)(param_1 + 0x260) = uVar7 - 1;
        FUN_1477ac788((longlong *)(param_1 + 600));
      }
      iVar12 = iVar12 + 1;
      bVar3 = 1 < uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar3);
  }
  if ((*(byte *)(param_1 + 0x270) & 8) != 0) {
    puVar9 = local_158;
    if (local_58 != (undefined1 *)0x0) {
      puVar9 = local_58;
    }
    lVar13 = (longlong)(int)local_50;
    if (lVar13 != 0) {
      lVar11 = 0;
      bVar6 = 0;
      do {
        plVar2 = *(longlong **)(puVar9 + lVar11);
        bVar4 = bVar6 & 1;
        bVar6 = 1;
        if (bVar4 == 0) {
          bVar6 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
        }
        (**(code **)(*plVar2 + 0x2b0))(plVar2);
        lVar11 = lVar11 + 8;
      } while (lVar13 * 8 != lVar11);
      if (bVar6 != 0) {
        FUN_1417aaa18(param_1);
      }
    }
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147799d18 FUN_147799d18 body=169 status=ok
// SIG undefined FUN_147799d18(void)

void FUN_147799d18(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
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
  lVar1 = FUN_14779c2fc(param_1,local_20);
  if (lVar1 != 0) {
    FUN_1476c7e9a(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147799dc2 FUN_147799dc2 body=155 status=ok
// SIG undefined FUN_147799dc2(void)

void FUN_147799dc2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_147799e5e(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147799e5e FUN_147799e5e body=277 status=ok
// SIG undefined FUN_147799e5e(void)

void FUN_147799e5e(longlong *param_1,double *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_b8 [9];
  undefined8 local_70 [6];
  double local_40;
  double dStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1476cdb84(uVar1);
  if (lVar2 != 0) {
    if ((*(byte *)((longlong)param_1 + 0xd9) & 0x20) == 0) {
      local_d8 = *param_2;
      dStack_d0 = param_2[1];
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0x3ff0000000000000;
      local_f0 = 0x3ff0000000000000;
      local_e8 = 0;
      uStack_e0 = 0;
      local_c8 = 0;
      local_c4 = 1;
    }
    else {
      FUN_1476ccd1e(lVar2,local_70,param_1);
      if ((local_40 == *param_2) && (!NAN(local_40) && !NAN(*param_2))) {
        if ((dStack_38 == param_2[1]) && (!NAN(dStack_38) && !NAN(param_2[1]))) goto LAB_147799ee9;
      }
      local_40 = *param_2;
      dStack_38 = param_2[1];
      puVar4 = local_70;
      puVar5 = local_b8;
      for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    FUN_1476cd358(lVar2,param_1);
  }
LAB_147799ee9:
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147799f74 FUN_147799f74 body=177 status=ok
// SIG undefined FUN_147799f74(void)

void FUN_147799f74(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_28;
  uStack_44 = local_28._4_4_;
  uStack_40 = (undefined4)uStack_20;
  uStack_3c = uStack_20._4_4_;
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  FUN_14779a026(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779a026 FUN_14779a026 body=304 status=ok
// SIG undefined FUN_14779a026(void)

void FUN_14779a026(longlong *param_1,double *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  undefined1 auStack_128 [32];
  double local_108;
  double dStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  double local_c0 [9];
  double local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1476cdb84(uVar1);
  if (lVar2 != 0) {
    if ((*(byte *)((longlong)param_1 + 0xd9) & 0x20) == 0) {
      local_108 = *param_2;
      dStack_100 = param_2[1];
      local_f8 = *(undefined4 *)(param_2 + 2);
      uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_f0 = *(undefined4 *)(param_2 + 3);
      uStack_ec = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      local_c4 = 1;
    }
    else {
      FUN_1476ccd1e(lVar2,local_78,param_1);
      if ((local_78[0] == *param_2) && (!NAN(local_78[0]) && !NAN(*param_2))) {
        if ((local_78[1] == param_2[1]) && (!NAN(local_78[1]) && !NAN(param_2[1]))) {
          if (((double)CONCAT44(uStack_64,local_68) == param_2[2]) &&
             (!NAN((double)CONCAT44(uStack_64,local_68)) && !NAN(param_2[2]))) {
            if (((double)CONCAT44(uStack_5c,uStack_60) == param_2[3]) &&
               (!NAN((double)CONCAT44(uStack_5c,uStack_60)) && !NAN(param_2[3])))
            goto LAB_14779a0ab;
          }
        }
      }
      local_68 = *(undefined4 *)(param_2 + 2);
      uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_60 = *(undefined4 *)(param_2 + 3);
      uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_78[0] = *param_2;
      local_78[1] = param_2[1];
      pdVar4 = local_78;
      pdVar5 = local_c0;
      for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
        *pdVar5 = *pdVar4;
        pdVar4 = pdVar4 + 1;
        pdVar5 = pdVar5 + 1;
      }
    }
    FUN_1476cd358(lVar2,param_1);
  }
LAB_14779a0ab:
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14779a158 FUN_14779a158 body=274 status=ok
// SIG undefined FUN_14779a158(void)

void FUN_14779a158(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_38 != 0) {
    lVar2 = FUN_14779c2fc(param_1);
    if (lVar2 != 0) {
      FUN_14779c802(lVar2,uVar1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779a26c FUN_14779a26c body=155 status=ok
// SIG undefined FUN_14779a26c(void)

void FUN_14779a26c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_14779a308(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779a308 FUN_14779a308 body=185 status=ok
// SIG undefined FUN_14779a308(void)

void FUN_14779a308(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)(param_1 + 0x170) = *param_2;
  *(undefined4 *)(param_1 + 0x174) = uVar5;
  *(undefined4 *)(param_1 + 0x178) = uVar6;
  *(undefined4 *)(param_1 + 0x17c) = uVar7;
  plVar3 = *(longlong **)(param_1 + 0x110);
  if (plVar3 != (longlong *)0x0) {
    iVar9 = (int)plVar3[1];
    do {
      if (iVar9 == 0) goto LAB_14779a3a4;
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *(longlong *)(param_1 + 0x108);
    if (lVar4 != 0) {
      local_48 = *(undefined8 *)(param_1 + 0x170);
      uStack_40 = *(undefined8 *)(param_1 + 0x178);
      local_38 = 1;
      local_30 = 0;
      uStack_28 = 0;
      FUN_140a5c650(lVar4 + 0x240,lVar4,&local_48);
      FUN_1449db362(&local_30);
    }
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
LAB_14779a3a4:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14779a3c2 FUN_14779a3c2 body=155 status=ok
// SIG undefined FUN_14779a3c2(void)

void FUN_14779a3c2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_14779a45e(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779a45e FUN_14779a45e body=341 status=ok
// SIG undefined FUN_14779a45e(void)

void FUN_14779a45e(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_238 [40];
  undefined8 local_210 [9];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168 [9];
  undefined8 local_120 [9];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c0 [9];
  undefined8 local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1476cdb84(uVar1);
  if (lVar2 != 0) {
    if ((*(byte *)((longlong)param_1 + 0xd9) & 0x20) == 0) {
      local_178 = *param_2;
      uStack_170 = param_2[1];
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1b8 = 0x3ff0000000000000;
      uStack_1b0 = 0x3ff0000000000000;
      local_188 = 0x100000000;
      FUN_1476cd70e(local_78);
      lVar3 = 9;
      puVar5 = local_78;
      puVar4 = local_210;
    }
    else {
      puVar5 = local_78;
      FUN_1476ccd1e(lVar2,puVar5,param_1);
      local_d8 = *(undefined4 *)param_2;
      uStack_d4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_d0 = *(undefined4 *)(param_2 + 1);
      uStack_cc = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar4 = puVar5;
      puVar6 = local_120;
      for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_1476cd70e(local_c0);
      puVar4 = local_c0;
      puVar6 = puVar5;
      for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar4 = local_168;
      lVar3 = 9;
    }
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_1476cd358(lVar2,param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779a5b4 FUN_14779a5b4 body=179 status=ok
// SIG undefined FUN_14779a5b4(void)

void FUN_14779a5b4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0x3f800000;
  uStack_28 = 0;
  uStack_24 = 0x3f800000;
  uStack_20 = 0x3f800000;
  local_1c = local_1c & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_1c;
  local_48 = local_2c;
  uStack_44 = uStack_28;
  uStack_40 = uStack_24;
  uStack_3c = uStack_20;
  FUN_14779a668(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779a668 FUN_14779a668 body=201 status=ok
// SIG undefined FUN_14779a668(void)

void FUN_14779a668(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x1a0) = param_2[4];
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)(param_1 + 400) = *param_2;
  *(undefined4 *)(param_1 + 0x194) = uVar5;
  *(undefined4 *)(param_1 + 0x198) = uVar6;
  *(undefined4 *)(param_1 + 0x19c) = uVar7;
  plVar3 = *(longlong **)(param_1 + 0x110);
  if (plVar3 != (longlong *)0x0) {
    iVar9 = (int)plVar3[1];
    do {
      if (iVar9 == 0) goto LAB_14779a714;
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *(longlong *)(param_1 + 0x108);
    if (lVar4 != 0) {
      local_38 = *(undefined4 *)(param_1 + 0x1a0);
      local_48 = *(undefined8 *)(param_1 + 400);
      uStack_40 = *(undefined8 *)(param_1 + 0x198);
      local_34 = 1;
      local_30 = 0;
      uStack_28 = 0;
      FUN_140a5c8a2(lVar4 + 0x250,lVar4,&local_48);
      FUN_1449db362(&local_30);
    }
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
LAB_14779a714:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14779a736 FUN_14779a736 body=205 status=ok
// SIG undefined FUN_14779a736(void)

void FUN_14779a736(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  if (lVar1 != 0) {
    *(byte *)(param_1 + 0x20c) = *(byte *)(param_1 + 0x20c) & 0xfd | (local_1c != 0) * '\x02';
    *(byte *)(lVar1 + 0x194) = *(byte *)(lVar1 + 0x194) & 0xfe | local_1c != 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779a804 FUN_14779a804 body=170 status=ok
// SIG undefined FUN_14779a804(void)

void FUN_14779a804(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    *(undefined4 *)(param_1 + 0x208) = local_1c;
    *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 400) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779a8b0 FUN_14779a8b0 body=245 status=ok
// SIG undefined FUN_14779a8b0(void)

void FUN_14779a8b0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  uVar1 = local_24;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_14779c2fc(param_1,local_20);
  if (lVar2 != 0) {
    FUN_1476c82d6(lVar2,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779a9a6 FUN_14779a9a6 body=211 status=ok
// SIG undefined FUN_14779a9a6(void)

void FUN_14779a9a6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_38 != (longlong *)0x0) {
    cVar2 = (**(code **)(*local_38 + 0x6c8))(local_38);
    if (cVar2 != '\0') {
      FUN_145bf8224(&local_30,plVar1);
      *(undefined4 *)(param_1 + 0x2b8) = local_30;
      *(undefined4 *)(param_1 + 700) = uStack_2c;
      *(undefined4 *)(param_1 + 0x2c0) = uStack_28;
      *(undefined4 *)(param_1 + 0x2c4) = uStack_24;
      *(undefined8 *)(param_1 + 0x2c8) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779aa7a FUN_14779aa7a body=163 status=ok
// SIG undefined FUN_14779aa7a(void)

void FUN_14779aa7a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_14779ab1e(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779ab1e FUN_14779ab1e body=240 status=ok
// SIG undefined FUN_14779ab1e(void)

void FUN_14779ab1e(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)(param_1 + 0x1f8) = *param_2;
  *(undefined4 *)(param_1 + 0x1fc) = uVar5;
  *(undefined4 *)(param_1 + 0x200) = uVar6;
  *(undefined4 *)(param_1 + 0x204) = uVar7;
  plVar3 = *(longlong **)(param_1 + 0x110);
  if (plVar3 != (longlong *)0x0) {
    iVar9 = (int)plVar3[1];
    do {
      if (iVar9 == 0) goto LAB_14779abed;
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *(longlong *)(param_1 + 0x108);
    if (lVar4 != 0) {
      local_78 = *(undefined4 *)(param_1 + 0x1f8);
      uStack_74 = *(undefined4 *)(param_1 + 0x1fc);
      uStack_70 = *(undefined4 *)(param_1 + 0x200);
      uStack_6c = *(undefined4 *)(param_1 + 0x204);
      local_68 = 1;
      local_60 = 0;
      uStack_58 = 0;
      local_38 = 1;
      local_30 = 0;
      local_28 = 0;
      local_48 = local_78;
      uStack_44 = uStack_74;
      uStack_40 = uStack_70;
      uStack_3c = uStack_6c;
      FUN_140a58be0(&local_30,&local_60);
      FUN_140a58d14(lVar4 + 0x218,&local_48);
      FUN_1449db362(&local_60);
    }
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
LAB_14779abed:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14779ac10 FUN_14779ac10 body=267 status=ok
// SIG undefined FUN_14779ac10(void)

void FUN_14779ac10(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_14779c2fc(param_1,local_38);
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0xe0))(lVar2 + 0x28,uVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779ad22 FUN_14779ad22 body=234 status=ok
// SIG undefined FUN_14779ad22(void)

void FUN_14779ad22(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  uStack_44 = uStack_24;
  uStack_40 = uStack_20;
  uStack_3c = uStack_1c;
  FUN_14779ae0e(param_1,&local_48,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779ae0e FUN_14779ae0e body=362 status=ok
// SIG undefined FUN_14779ae0e(void)

void FUN_14779ae0e(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_238 [32];
  undefined1 local_218;
  undefined8 local_210 [9];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168 [9];
  undefined8 local_120 [9];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8 [9];
  undefined8 local_80 [9];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1476cdb84(uVar1);
  if (lVar2 != 0) {
    local_218 = param_3;
    if ((*(byte *)((longlong)param_1 + 0xd9) & 0x20) == 0) {
      local_178 = *param_2;
      uStack_170 = param_2[1];
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1b8 = 0x3ff0000000000000;
      uStack_1b0 = 0x3ff0000000000000;
      local_188 = 0x100000000;
      FUN_1476cd9ac(local_80,&local_1c8,param_1);
      lVar3 = 9;
      puVar5 = local_80;
      puVar4 = local_210;
    }
    else {
      puVar5 = local_80;
      FUN_1476ccd1e(lVar2,puVar5,param_1);
      local_d8 = *(undefined4 *)param_2;
      uStack_d4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_d0 = *(undefined4 *)(param_2 + 1);
      uStack_cc = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar4 = puVar5;
      puVar6 = local_120;
      for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_1476cd9ac(local_c8,local_120,param_1);
      puVar4 = local_c8;
      puVar6 = puVar5;
      for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar4 = local_168;
      lVar3 = 9;
    }
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_1476cd358(lVar2,param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779af90 FUN_14779af90 body=208 status=ok
// SIG undefined FUN_14779af90(void)

void FUN_14779af90(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [64];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(byte *)(param_1 + 0x270) = *(byte *)(param_1 + 0x270) | 0x10;
  local_40 = (undefined1 *)0x0;
  FUN_1477abb5a(local_80,*(undefined8 *)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x228),0);
  puVar3 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar3 = local_80;
  }
  if ((longlong)local_38 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(puVar3 + lVar4);
      iVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x38))(lVar1 + 0x28);
      if (iVar2 == 1) {
        FUN_1476c7eac(lVar1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)local_38 * 8 != lVar4);
  }
  *(byte *)(param_1 + 0x270) = *(byte *)(param_1 + 0x270) & 0xef;
  FUN_1417aaa18(param_1);
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779b062 FUN_14779b062 body=156 status=ok
// SIG undefined FUN_14779b062(void)

void FUN_14779b062(undefined8 param_1,longlong param_2)

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
  FUN_14779b100(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779b100 FUN_14779b100 body=50 status=ok
// SIG undefined FUN_14779b100(void)

void FUN_14779b100(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14779c2fc();
    if (lVar1 != 0) {
      FUN_1476c7eac(lVar1);
      FUN_1417aaa18(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14779b132 FUN_14779b132 body=42 status=ok
// SIG undefined FUN_14779b132(void)

void FUN_14779b132(undefined8 param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14779af90();
  FUN_147793166(param_1);
  return;
}



// FUNCTION 14779b172 FUN_14779b172 body=228 status=ok
// SIG undefined FUN_14779b172(void)

void FUN_14779b172(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14779b258(param_1,local_20,local_21);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779b258 FUN_14779b258 body=122 status=ok
// SIG undefined FUN_14779b258(void)

void FUN_14779b258(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x2a0) != 0) &&
     (uVar3 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x2a0) + 0x178), 0 < (longlong)uVar3)) {
    lVar4 = uVar3 << 4;
    do {
      lVar4 = lVar4 + -0x10;
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x170) + lVar4);
      if ((*(longlong *)(lVar1 + 4) == param_2) && (*(char *)(lVar1 + 2) == param_3)) {
        FUN_1479e0cd4(*(longlong *)(param_1 + 0x2a0),(int)uVar3 + -1);
      }
      bVar2 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 14779b2d2 FUN_14779b2d2 body=193 status=ok
// SIG undefined FUN_14779b2d2(void)

void FUN_14779b2d2(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0x3f800000;
  local_48 = 0;
  uStack_44 = DAT_14c84635c;
  uStack_3c = 0x3f800000;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x3f800000;
  local_2c = 0;
  uStack_28 = 0;
  local_24 = local_24 & 0xffffff00;
  if (&local_58 != param_2) {
    uStack_28 = (undefined4)param_2[6];
    local_24 = (uint)((ulonglong)param_2[6] >> 0x20);
    local_58 = *param_2;
    uStack_50 = param_2[1];
    local_48 = *(undefined4 *)(param_2 + 2);
    uStack_44 = *(undefined8 *)((longlong)param_2 + 0x14);
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_38 = *(undefined4 *)(param_2 + 4);
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_30 = *(undefined4 *)(param_2 + 5);
    local_2c = *(undefined4 *)((longlong)param_2 + 0x2c);
  }
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cab9af8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779b394 FUN_14779b394 body=156 status=ok
// SIG undefined FUN_14779b394(void)

void FUN_14779b394(undefined8 param_1,longlong param_2)

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
  FUN_14779b432(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779b432 FUN_14779b432 body=261 status=ok
// SIG undefined FUN_14779b432(void)

void FUN_14779b432(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar2 = *(int *)(param_1 + 0x2b0);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x2a8);
    iVar14 = 0;
    bVar7 = (char)plVar3[3] == '\x01' && *plVar3 == param_2;
    iVar11 = 0;
    do {
      lVar9 = (longlong)iVar11;
      iVar4 = iVar11 + 1;
      if (iVar11 + 1 < iVar2) {
        iVar4 = iVar2;
      }
      plVar8 = plVar3 + lVar9 * 5 + 8;
      iVar12 = iVar11;
      lVar10 = lVar9;
      do {
        lVar10 = lVar10 + 1;
        iVar13 = iVar4;
        if (lVar6 <= lVar10) break;
        plVar1 = plVar8 + -3;
        lVar5 = *plVar8;
        iVar12 = iVar12 + 1;
        plVar8 = plVar8 + 5;
        iVar13 = iVar12;
      } while (bVar7 == ((char)lVar5 == '\x01' && *plVar1 == param_2));
      if (bVar7 == false) {
        if (iVar14 != iVar11) {
          memmove(plVar3 + (longlong)iVar14 * 5,plVar3 + lVar9 * 5,
                  (longlong)(iVar13 - iVar11) * 0x28);
        }
        iVar14 = iVar14 + (iVar13 - iVar11);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar11 = iVar13;
    } while (lVar10 < lVar6);
    *(int *)(param_1 + 0x2b0) = iVar14;
  }
  return;
}



// FUNCTION 14779b538 FUN_14779b538 body=156 status=ok
// SIG undefined FUN_14779b538(void)

void FUN_14779b538(undefined8 param_1,longlong param_2)

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
  FUN_14779b5d6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779b5d6 FUN_14779b5d6 body=261 status=ok
// SIG undefined FUN_14779b5d6(void)

void FUN_14779b5d6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar2 = *(int *)(param_1 + 0x2b0);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x2a8);
    iVar14 = 0;
    bVar7 = (char)plVar3[3] == '\0' && *plVar3 == param_2;
    iVar11 = 0;
    do {
      lVar9 = (longlong)iVar11;
      iVar4 = iVar11 + 1;
      if (iVar11 + 1 < iVar2) {
        iVar4 = iVar2;
      }
      plVar8 = plVar3 + lVar9 * 5 + 8;
      iVar12 = iVar11;
      lVar10 = lVar9;
      do {
        lVar10 = lVar10 + 1;
        iVar13 = iVar4;
        if (lVar6 <= lVar10) break;
        plVar1 = plVar8 + -3;
        lVar5 = *plVar8;
        iVar12 = iVar12 + 1;
        plVar8 = plVar8 + 5;
        iVar13 = iVar12;
      } while (bVar7 == ((char)lVar5 == '\0' && *plVar1 == param_2));
      if (bVar7 == false) {
        if (iVar14 != iVar11) {
          memmove(plVar3 + (longlong)iVar14 * 5,plVar3 + lVar9 * 5,
                  (longlong)(iVar13 - iVar11) * 0x28);
        }
        iVar14 = iVar14 + (iVar13 - iVar11);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar11 = iVar13;
    } while (lVar10 < lVar6);
    *(int *)(param_1 + 0x2b0) = iVar14;
  }
  return;
}



// FUNCTION 14779b6dc FUN_14779b6dc body=240 status=ok
// SIG undefined FUN_14779b6dc(void)

void FUN_14779b6dc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
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
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_14779b7ce(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779b7ce FUN_14779b7ce body=629 status=ok
// SIG undefined FUN_14779b7ce(void)

void FUN_14779b7ce(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  ulonglong local_88;
  undefined8 *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(uint *)(param_1 + 0x2b0);
  lVar8 = (longlong)(int)uVar1;
  local_80 = param_3;
  if (lVar8 != 0) {
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    local_90 = 0;
    bVar13 = false;
    local_78 = param_1;
    if (*plVar7 == param_2) {
      local_50 = *param_3;
      lVar6 = param_3[1];
      if (((((int)plVar7[1] == (int)local_50) &&
           (*(int *)((longlong)plVar7 + 0xc) == (int)((ulonglong)local_50 >> 0x20))) ||
          ((cVar2 = FUN_144729dda(plVar7 + 1), cVar2 == '\0' &&
           (cVar2 = FUN_144729dda(&local_50), cVar2 == '\0')))) && (plVar7[2] == lVar6)) {
        bVar13 = (char)plVar7[3] == '\x01';
      }
      else {
        bVar13 = false;
      }
    }
    local_60 = lVar8 + -1;
    local_68 = plVar7 + 8;
    uVar3 = 0;
    local_70 = plVar7;
    do {
      if ((int)(uVar3 + 1) < (int)uVar1) {
        do {
          local_88 = (ulonglong)uVar3;
          lVar9 = (longlong)(int)uVar3;
          lVar10 = local_60 - lVar9;
          plVar7 = local_68 + lVar9 * 5;
          bVar12 = true;
          lVar6 = 0;
          do {
            if (plVar7[-3] == param_2) {
              local_50 = *local_80;
              local_58 = local_80[1];
              if (((((int)plVar7[-2] != (int)local_50) ||
                   (*(int *)((longlong)plVar7 + -0xc) != (int)((ulonglong)local_50 >> 0x20))) &&
                  ((cVar2 = FUN_144729dda(plVar7 + -2), cVar2 != '\0' ||
                   (cVar2 = FUN_144729dda(&local_50), cVar2 != '\0')))) || (plVar7[-1] != local_58))
              goto LAB_14779b879;
              if (((char)*plVar7 == '\x01') != bVar13) {
                uVar5 = (uint)local_88;
                uVar3 = uVar5 + (int)lVar6 + 1;
                goto LAB_14779b903;
              }
            }
            else {
LAB_14779b879:
              if (bVar13) {
                if (bVar12 == false) goto LAB_14779b9b7;
                uVar3 = (int)local_88 + (int)lVar6 + 1;
                goto LAB_14779b917;
              }
            }
            bVar12 = lVar9 + lVar6 + 2 < lVar8;
            lVar6 = lVar6 + 1;
            plVar7 = plVar7 + 5;
          } while (lVar10 != lVar6);
          uVar5 = (uint)local_88;
          uVar3 = uVar1;
LAB_14779b903:
          bVar11 = bVar13 == false;
          uVar4 = uVar3;
          bVar13 = bVar12;
          if (bVar11) break;
          if (bVar12 == false) goto LAB_14779b9b7;
LAB_14779b917:
          bVar13 = false;
          uVar4 = uVar3 + 1;
          uVar5 = uVar3;
        } while ((int)(uVar3 + 1) < (int)uVar1);
      }
      else {
        if (bVar13 != false) break;
        uVar4 = uVar3 + 1;
        bVar13 = false;
        uVar5 = uVar3;
      }
      uVar3 = uVar4;
      uVar4 = (uint)local_90;
      if (uVar4 != uVar5) {
        memmove(local_70 + (longlong)(int)uVar4 * 5,local_70 + (longlong)(int)uVar5 * 5,
                (longlong)(int)(uVar3 - uVar5) * 0x28);
        uVar4 = (uint)local_90;
      }
      local_90 = (ulonglong)(uVar4 + (uVar3 - uVar5));
      bVar12 = bVar13 != false;
      bVar13 = true;
    } while (bVar12);
LAB_14779b9b7:
    *(int *)(local_78 + 0x2b0) = (int)local_90;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14779ba44 FUN_14779ba44 body=240 status=ok
// SIG undefined FUN_14779ba44(void)

void FUN_14779ba44(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
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
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_14779bb36(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779bb36 FUN_14779bb36 body=629 status=ok
// SIG undefined FUN_14779bb36(void)

void FUN_14779bb36(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  ulonglong local_88;
  undefined8 *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(uint *)(param_1 + 0x2b0);
  lVar8 = (longlong)(int)uVar1;
  local_80 = param_3;
  if (lVar8 != 0) {
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    local_90 = 0;
    bVar13 = false;
    local_78 = param_1;
    if (*plVar7 == param_2) {
      local_50 = *param_3;
      lVar6 = param_3[1];
      if (((((int)plVar7[1] == (int)local_50) &&
           (*(int *)((longlong)plVar7 + 0xc) == (int)((ulonglong)local_50 >> 0x20))) ||
          ((cVar2 = FUN_144729dda(plVar7 + 1), cVar2 == '\0' &&
           (cVar2 = FUN_144729dda(&local_50), cVar2 == '\0')))) && (plVar7[2] == lVar6)) {
        bVar13 = (char)plVar7[3] == '\0';
      }
      else {
        bVar13 = false;
      }
    }
    local_60 = lVar8 + -1;
    local_68 = plVar7 + 8;
    uVar3 = 0;
    local_70 = plVar7;
    do {
      if ((int)(uVar3 + 1) < (int)uVar1) {
        do {
          local_88 = (ulonglong)uVar3;
          lVar9 = (longlong)(int)uVar3;
          lVar10 = local_60 - lVar9;
          plVar7 = local_68 + lVar9 * 5;
          bVar12 = true;
          lVar6 = 0;
          do {
            if (plVar7[-3] == param_2) {
              local_50 = *local_80;
              local_58 = local_80[1];
              if (((((int)plVar7[-2] != (int)local_50) ||
                   (*(int *)((longlong)plVar7 + -0xc) != (int)((ulonglong)local_50 >> 0x20))) &&
                  ((cVar2 = FUN_144729dda(plVar7 + -2), cVar2 != '\0' ||
                   (cVar2 = FUN_144729dda(&local_50), cVar2 != '\0')))) || (plVar7[-1] != local_58))
              goto LAB_14779bbe1;
              if (((char)*plVar7 == '\0') != bVar13) {
                uVar5 = (uint)local_88;
                uVar3 = uVar5 + (int)lVar6 + 1;
                goto LAB_14779bc6b;
              }
            }
            else {
LAB_14779bbe1:
              if (bVar13) {
                if (bVar12 == false) goto LAB_14779bd1f;
                uVar3 = (int)local_88 + (int)lVar6 + 1;
                goto LAB_14779bc7f;
              }
            }
            bVar12 = lVar9 + lVar6 + 2 < lVar8;
            lVar6 = lVar6 + 1;
            plVar7 = plVar7 + 5;
          } while (lVar10 != lVar6);
          uVar5 = (uint)local_88;
          uVar3 = uVar1;
LAB_14779bc6b:
          bVar11 = bVar13 == false;
          uVar4 = uVar3;
          bVar13 = bVar12;
          if (bVar11) break;
          if (bVar12 == false) goto LAB_14779bd1f;
LAB_14779bc7f:
          bVar13 = false;
          uVar4 = uVar3 + 1;
          uVar5 = uVar3;
        } while ((int)(uVar3 + 1) < (int)uVar1);
      }
      else {
        if (bVar13 != false) break;
        uVar4 = uVar3 + 1;
        bVar13 = false;
        uVar5 = uVar3;
      }
      uVar3 = uVar4;
      uVar4 = (uint)local_90;
      if (uVar4 != uVar5) {
        memmove(local_70 + (longlong)(int)uVar4 * 5,local_70 + (longlong)(int)uVar5 * 5,
                (longlong)(int)(uVar3 - uVar5) * 0x28);
        uVar4 = (uint)local_90;
      }
      local_90 = (ulonglong)(uVar4 + (uVar3 - uVar5));
      bVar12 = bVar13 != false;
      bVar13 = true;
    } while (bVar12);
LAB_14779bd1f:
    *(int *)(local_78 + 0x2b0) = (int)local_90;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14779bdac FUN_14779bdac body=83 status=ok
// SIG undefined FUN_14779bdac(void)

void FUN_14779bdac(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (param_1[0x54] != 0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014779bdf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xce8))(plVar1,param_1[0x54],*(code **)(*plVar1 + 0xce8));
      return;
    }
  }
  return;
}



// FUNCTION 14779be0c FUN_14779be0c body=62 status=ok
// SIG undefined FUN_14779be0c(void)

void FUN_14779be0c(undefined8 param_1,undefined4 *param_2)

{
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
  FUN_14779a308();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779be60 FUN_14779be60 body=71 status=ok
// SIG undefined FUN_14779be60(void)

void FUN_14779be60(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  FUN_14779a668(local_28,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779beb4 FUN_14779beb4 body=14 status=ok
// SIG undefined FUN_14779beb4(void)

undefined8 * FUN_14779beb4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x200);
  *param_2 = *(undefined8 *)(param_1 + 0x1f8);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14779bec2 FUN_14779bec2 body=62 status=ok
// SIG undefined FUN_14779bec2(void)

void FUN_14779bec2(undefined8 param_1,undefined4 *param_2)

{
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
  FUN_14779ab1e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779bf34 FUN_14779bf34 body=9 status=ok
// SIG undefined FUN_14779bf34(void)

byte FUN_14779bf34(longlong param_1)

{
  return *(byte *)(param_1 + 0x20c) & 1;
}



// FUNCTION 14779bfd2 FUN_14779bfd2 body=195 status=ok
// SIG undefined FUN_14779bfd2(void)

void FUN_14779bfd2(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caba4d8) {
    FUN_144b3d300(&DAT_14caba4d8);
    if (DAT_14caba4d8 == -1) {
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
      FUN_1405d3502(&DAT_14cab9bc8,&local_28);
      plVar3 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      atexit((_func_5014 *)&LAB_14333ca0f);
      _Init_thread_footer(&DAT_14caba4d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779c096 FUN_14779c096 body=67 status=ok
// SIG undefined FUN_14779c096(void)

undefined8 FUN_14779c096(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_140e64c66();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_141318228(lVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14779c0da FUN_14779c0da body=111 status=ok
// SIG undefined FUN_14779c0da(void)

void FUN_14779c0da(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  undefined4 *local_20;
  code *local_18;
  undefined4 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x2b8) = *param_2;
  *(undefined4 *)(param_1 + 700) = uVar1;
  *(undefined4 *)(param_1 + 0x2c0) = uVar2;
  *(undefined4 *)(param_1 + 0x2c4) = uVar3;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (*(longlong *)(param_1 + 0x268) != 0) {
    local_10 = &local_20;
    local_18 = FUN_14333da3e;
    local_20 = param_2;
    FUN_140ec5510();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779c14a FUN_14779c14a body=8 status=ok
// SIG undefined FUN_14779c14a(void)

longlong FUN_14779c14a(longlong param_1)

{
  return param_1 + 0x2b8;
}



// FUNCTION 14779c152 FUN_14779c152 body=254 status=ok
// SIG undefined FUN_14779c152(void)

longlong FUN_14779c152(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18) == param_2) {
        lVar1 = *local_68 + (longlong)iStack_4c * 0x18;
        break;
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  else {
    lVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14779c252 FUN_14779c252 body=168 status=ok
// SIG undefined FUN_14779c252(void)

void FUN_14779c252(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  code *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cab9b48 != 0) {
    uVar4 = FUN_1405e2bf2();
    lVar5 = FUN_144a78ede(param_1,uVar4);
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 700);
      uVar2 = *(undefined4 *)(lVar5 + 0x2c0);
      uVar3 = *(undefined4 *)(lVar5 + 0x2c4);
      *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(lVar5 + 0x2b8);
      *(undefined4 *)((longlong)param_1 + 700) = uVar1;
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x2c4) = uVar3;
      param_1[0x59] = 0;
      if (param_1[0x4d] != 0) {
        local_28 = lVar5 + 0x2b8;
        local_18 = &local_28;
        local_20 = FUN_14333da3e;
        FUN_140ec5510();
      }
    }
    (**(code **)(*param_1 + 0x300))(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14779c2fc FUN_14779c2fc body=99 status=ok
// SIG undefined FUN_14779c2fc(void)

longlong FUN_14779c2fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 0x228) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x220);
    lVar2 = (longlong)*(int *)(param_1 + 0x228) << 3;
    do {
      lVar1 = *plVar3;
      if ((*(longlong *)(lVar1 + 0x210) == param_2) && ((*(byte *)(lVar1 + 0x2b5) & 1) == 0)) {
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        if (lVar1 != 0) {
          if (DAT_14c950c29 != '\0') {
            FUN_1456cec3c(lVar1);
            return lVar1;
          }
          return lVar1;
        }
        return 0;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 14779c360 FUN_14779c360 body=368 status=ok
// SIG undefined FUN_14779c360(void)

longlong FUN_14779c360(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2 == 0) || ((*(byte *)(param_1 + 0x270) & 0x10) != 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x230);
    if (lVar4 == 0) {
      lVar4 = FUN_1476c6a7e(param_1);
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      *(longlong *)(param_1 + 0x230) = lVar4;
    }
    FUN_1476c6b24(lVar4,param_1);
    if ((longlong)*(int *)(param_1 + 0x228) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x220);
      plVar1 = plVar3 + *(int *)(param_1 + 0x228);
      do {
        lVar4 = *plVar3;
        if (*(longlong *)(lVar4 + 0x210) == param_2) {
          if ((longlong)*(int *)(param_1 + 0x240) != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x238) + lVar5) == lVar4)
              goto LAB_14779c3c5;
              lVar5 = lVar5 + 8;
            } while ((longlong)*(int *)(param_1 + 0x240) * 8 != lVar5);
          }
          if ((*(byte *)(lVar4 + 0x2b5) & 1) == 0) {
            if (lVar4 != 0) {
              return lVar4;
            }
            break;
          }
        }
LAB_14779c3c5:
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
    lVar4 = FUN_14779c4d0(param_1);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    iVar2 = *(int *)(param_1 + 0x228);
    *(uint *)(param_1 + 0x228) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x22c) < iVar2 + 1U) {
      FUN_1477ab7a8((longlong *)(param_1 + 0x220),iVar2);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x220) + (longlong)iVar2 * 8) = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    FUN_1476c6902(lVar4,param_2,param_1);
  }
  return lVar4;
}



// FUNCTION 14779c4d0 FUN_14779c4d0 body=182 status=ok
// SIG undefined FUN_14779c4d0(void)

undefined8 FUN_14779c4d0(undefined8 param_1)

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
  local_b8 = FUN_1411f0008();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
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


