// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14516e290 FUN_14516e290 body=60 status=ok
// SIG undefined FUN_14516e290(void)

bool FUN_14516e290(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x9f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x13], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516e2d0 FUN_14516e2d0 body=81 status=ok
// SIG undefined FUN_14516e2d0(void)

bool FUN_14516e2d0(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xa7 < *puVar1) && ((code *)puVar1[0x14] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x14])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516e330 FUN_14516e330 body=78 status=ok
// SIG undefined FUN_14516e330(void)

bool FUN_14516e330(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xaf < *puVar1) && ((code *)puVar1[0x15] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x15])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516e380 FUN_14516e380 body=81 status=ok
// SIG undefined FUN_14516e380(void)

bool FUN_14516e380(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xb7 < *puVar1) && ((code *)puVar1[0x16] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x16])(puVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516e3e0 FUN_14516e3e0 body=81 status=ok
// SIG undefined FUN_14516e3e0(void)

bool FUN_14516e3e0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xbf < *puVar1) && ((code *)puVar1[0x17] != (code *)0x0)) {
    iVar2 = (*(code *)puVar1[0x17])(puVar1,*(undefined8 *)(param_2 + 8));
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 14516e440 FUN_14516e440 body=211 status=ok
// SIG undefined FUN_14516e440(void)

ulonglong FUN_14516e440(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 200) || (puVar1[0x18] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d750c0(&local_res8);
      iVar3 = (*(code *)puVar1[0x18])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14516e520 FUN_14516e520 body=211 status=ok
// SIG undefined FUN_14516e520(void)

ulonglong FUN_14516e520(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xd0) || (puVar1[0x19] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d73d20(&local_res8);
      iVar3 = (*(code *)puVar1[0x19])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14516e600 FUN_14516e600 body=211 status=ok
// SIG undefined FUN_14516e600(void)

ulonglong FUN_14516e600(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xd8) || (puVar1[0x1a] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_144d75250(&local_res8);
      iVar3 = (*(code *)puVar1[0x1a])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14516e6e0 FUN_14516e6e0 body=64 status=ok
// SIG undefined FUN_14516e6e0(void)

undefined8 * FUN_14516e6e0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14516dc10();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 14516e770 FUN_14516e770 body=226 status=ok
// SIG undefined FUN_14516e770(void)

void FUN_14516e770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined **local_20;
  undefined8 *local_18;
  char local_10;
  
  uVar4 = 0xfffffffffffffffe;
  uVar2 = cef_string_list_size();
  local_20 = &PTR_FUN_14ba6d600;
  uVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_10 = '\0';
  if (uVar2 != 0) {
    do {
      if (local_18 == (undefined8 *)0x0) {
        local_18 = (undefined8 *)FUN_14494321d(0x18);
        *local_18 = 0;
        local_18[1] = 0;
        local_18[2] = 0;
        local_10 = '\x01';
      }
      cef_string_list_value(param_1,uVar3,local_18,param_4,uVar4);
      FUN_14516efc0(param_2,&local_20);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  puVar1 = local_18;
  if ((local_18 != (undefined8 *)0x0) && (local_10 != '\0')) {
    cef_string_utf16_clear(local_18);
    thunk_FUN_1400020a8(puVar1,0x18);
  }
  return;
}



// FUNCTION 14516e860 FUN_14516e860 body=127 status=ok
// SIG undefined FUN_14516e860(void)

void FUN_14516e860(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (param_1[1] - *param_1) / 6 + (param_1[1] - *param_1 >> 0x3f);
  lVar1 = (lVar1 >> 2) - (lVar1 >> 0x3f);
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      cef_string_list_append(param_2,*(undefined8 *)(*param_1 + 8 + lVar2));
      lVar2 = lVar2 + 0x18;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14516e8e0 FUN_14516e8e0 body=583 status=ok
// SIG undefined FUN_14516e8e0(void)

void FUN_14516e8e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined **local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined **local_a0;
  undefined8 *local_98;
  char local_90;
  undefined **local_88;
  longlong local_80;
  char local_78;
  undefined **local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined1 local_48 [16];
  
  local_58 = 0xfffffffffffffffe;
  uVar3 = cef_string_map_size();
  local_b8 = &PTR_FUN_14ba6d600;
  puVar4 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  local_a8 = '\0';
  local_a0 = &PTR_FUN_14ba6d600;
  puVar5 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  local_90 = '\0';
  uVar8 = 0;
  if (uVar3 != 0) {
    do {
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_14494321d(0x18);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        local_a8 = '\x01';
        local_b0 = puVar4;
      }
      cef_string_map_key(param_1,uVar8,puVar4);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_14494321d(0x18);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        local_90 = '\x01';
        local_98 = puVar5;
      }
      cef_string_map_value(param_1,uVar8,puVar5);
      uVar6 = FUN_14516f2b0(&local_88,&local_b8,&local_a0);
      puVar7 = (undefined8 *)FUN_14494321d(0x50);
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      *puVar7 = *param_2;
      if (puVar7 + 1 != (undefined8 *)0x0) {
        puVar7[1] = *param_2;
      }
      if (puVar7 + 2 != (undefined8 *)0x0) {
        puVar7[2] = *param_2;
      }
      *(undefined2 *)(puVar7 + 3) = 0;
      puVar1 = puVar7 + 4;
      local_50 = puVar1;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_14516f3f0(puVar1,uVar6);
      }
      FUN_14516f550(param_2,local_48,0,puVar1,puVar7);
      local_70 = &PTR_FUN_14ba6d600;
      if (local_68 != 0) {
        if (local_60 != '\0') {
          cef_string_utf16_clear();
          thunk_FUN_1400020a8(local_68,0x18);
        }
        local_68 = 0;
        local_60 = '\0';
      }
      local_88 = &PTR_FUN_14ba6d600;
      if ((local_80 != 0) && (local_78 != '\0')) {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_80,0x18);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar3);
  }
  cVar2 = local_a8;
  if ((puVar5 != (undefined8 *)0x0) && (local_90 != '\0')) {
    cef_string_utf16_clear(puVar5);
    thunk_FUN_1400020a8(puVar5,0x18);
  }
  if ((puVar4 != (undefined8 *)0x0) && (cVar2 != '\0')) {
    cef_string_utf16_clear(puVar4);
    thunk_FUN_1400020a8(puVar4,0x18);
  }
  return;
}



// FUNCTION 14516eb30 FUN_14516eb30 body=147 status=ok
// SIG undefined FUN_14516eb30(void)

void FUN_14516eb30(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)*param_1;
  if (plVar4 != (longlong *)*param_1) {
    do {
      cef_string_map_append(param_2,plVar4[5],plVar4[8]);
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        plVar2 = (longlong *)plVar4[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          plVar4 = plVar2;
          plVar2 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar2 + 0x19);
            plVar4 = plVar2;
            plVar2 = (longlong *)*plVar2;
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar2 = plVar4;
          while ((plVar4 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar2 = plVar4;
          }
        }
      }
    } while (plVar4 != (longlong *)*param_1);
  }
  return;
}



// FUNCTION 14516ebd0 FUN_14516ebd0 body=465 status=ok
// SIG undefined FUN_14516ebd0(void)

void FUN_14516ebd0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined **local_a8;
  undefined8 *local_a0;
  undefined1 local_98;
  undefined **local_90;
  undefined8 *local_88;
  undefined1 local_80;
  undefined **local_78;
  longlong local_70;
  char local_68;
  undefined **local_60;
  longlong local_58;
  char local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  local_48 = 0xfffffffffffffffe;
  uVar3 = cef_string_multimap_size();
  local_90 = &PTR_FUN_14ba6d600;
  puVar4 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  bVar2 = false;
  local_80 = 0;
  local_a8 = &PTR_FUN_14ba6d600;
  puVar5 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  bVar1 = false;
  local_98 = 0;
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_14494321d(0x18);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        bVar2 = true;
        local_80 = 1;
        local_88 = puVar4;
      }
      cef_string_multimap_key(param_1,uVar7,puVar4);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_14494321d(0x18);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        bVar1 = true;
        local_98 = 1;
        local_a0 = puVar5;
      }
      cef_string_multimap_value(param_1,uVar7,puVar5);
      uVar6 = FUN_14516f2b0(&local_78,&local_90,&local_a8);
      FUN_14516f760(param_2,local_40,uVar6);
      local_60 = &PTR_FUN_14ba6d600;
      if (local_58 != 0) {
        if (local_50 != '\0') {
          cef_string_utf16_clear();
          thunk_FUN_1400020a8(local_58,0x18);
        }
        local_58 = 0;
        local_50 = '\0';
      }
      local_78 = &PTR_FUN_14ba6d600;
      if ((local_70 != 0) && (local_68 != '\0')) {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_70,0x18);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  if ((puVar5 != (undefined8 *)0x0) && (bVar1)) {
    cef_string_utf16_clear(puVar5);
    thunk_FUN_1400020a8(puVar5,0x18);
  }
  if ((puVar4 != (undefined8 *)0x0) && (bVar2)) {
    cef_string_utf16_clear(puVar4);
    thunk_FUN_1400020a8(puVar4,0x18);
  }
  return;
}



// FUNCTION 14516edb0 FUN_14516edb0 body=147 status=ok
// SIG undefined FUN_14516edb0(void)

void FUN_14516edb0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)*param_1;
  if (plVar4 != (longlong *)*param_1) {
    do {
      cef_string_multimap_append(param_2,plVar4[5],plVar4[8]);
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        plVar2 = (longlong *)plVar4[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          plVar4 = plVar2;
          plVar2 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar2 + 0x19);
            plVar4 = plVar2;
            plVar2 = (longlong *)*plVar2;
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar2 = plVar4;
          while ((plVar4 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar2 = plVar4;
          }
        }
      }
    } while (plVar4 != (longlong *)*param_1);
  }
  return;
}



// FUNCTION 14516ee50 FUN_14516ee50 body=111 status=ok
// SIG undefined FUN_14516ee50(void)

uint FUN_14516ee50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) &&
     ((*(longlong *)(param_2 + 8) == 0 || (*(longlong *)(*(longlong *)(param_2 + 8) + 8) == 0)))) {
    return 0;
  }
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) {
    return 1;
  }
  if ((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0)) {
    uVar2 = cef_string_utf16_cmp();
    return uVar2 >> 0x1f;
  }
  return 0;
}



// FUNCTION 14516eec0 FUN_14516eec0 body=109 status=ok
// SIG undefined FUN_14516eec0(void)

void FUN_14516eec0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 0x18) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 14516ef40 FUN_14516ef40 body=124 status=ok
// SIG undefined FUN_14516ef40(void)

ulonglong FUN_14516ef40(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 0x18;
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
    uVar2 = FUN_14494321d();
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return uVar2;
}



// FUNCTION 14516efc0 FUN_14516efc0 body=301 status=ok
// SIG undefined FUN_14516efc0(void)

void FUN_14516efc0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  uVar1 = param_1[1];
  if ((param_2 < uVar1) && (*param_1 <= param_2)) {
    lVar6 = param_2 - *param_1;
    lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
    if (uVar1 == param_1[2]) {
      FUN_14516f1e0(param_1);
    }
    puVar2 = (undefined8 *)param_1[1];
    uVar1 = *param_1;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_14ba6d600;
      uVar5 = 0;
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      puVar3 = *(undefined8 **)(uVar1 + ((lVar6 >> 2) - (lVar6 >> 0x3f)) * 0x18 + 8);
      uVar4 = uVar5;
      if (puVar3 != (undefined8 *)0x0) {
        uVar5 = *puVar3;
        uVar4 = puVar3[1];
      }
      FUN_149048250(puVar2,uVar5,uVar4,1,uVar7);
    }
  }
  else {
    if (uVar1 == param_1[2]) {
      FUN_14516f1e0(param_1);
    }
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_14ba6d600;
      uVar5 = 0;
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      puVar3 = *(undefined8 **)(param_2 + 8);
      uVar4 = uVar5;
      if (puVar3 != (undefined8 *)0x0) {
        uVar5 = *puVar3;
        uVar4 = puVar3[1];
      }
      FUN_149048250(puVar2,uVar5,uVar4,1,uVar7);
    }
  }
  param_1[1] = param_1[1] + 0x18;
  return;
}



// FUNCTION 14516f0f0 FUN_14516f0f0 body=236 status=ok
// SIG undefined FUN_14516f0f0(void)

void FUN_14516f0f0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8;
  
  lVar2 = FUN_14516ef40();
  FUN_14516fb60(*param_1,param_1[1],lVar2,param_1,0,local_res8);
  puVar4 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar3 = (longlong)puVar1 - (longlong)puVar4;
  lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
  if (puVar4 != (undefined8 *)0x0) {
    for (; puVar4 != puVar1; puVar4 = puVar4 + 3) {
      (**(code **)*puVar4)(puVar4,0);
    }
    FUN_14516eec0(param_1,*param_1,(param_1[2] - *param_1) / 0x18);
  }
  param_1[2] = lVar2 + param_2 * 0x18;
  *param_1 = lVar2;
  param_1[1] = lVar2 + ((lVar3 >> 2) - (lVar3 >> 0x3f)) * 0x18;
  return;
}



// FUNCTION 14516f1e0 FUN_14516f1e0 body=199 status=ok
// SIG undefined FUN_14516f1e0(void)

void FUN_14516f1e0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)((param_1[2] - param_1[1]) / 0x18)) {
    return;
  }
  lVar1 = (param_1[1] - *param_1) / 0x18;
  if (0xaaaaaaaaaaaaaaaU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = lVar1 + param_2;
  uVar2 = (param_1[2] - *param_1) / 0x18;
  uVar3 = 0;
  if (uVar2 <= 0xaaaaaaaaaaaaaaa - (uVar2 >> 1)) {
    uVar3 = (uVar2 >> 1) + uVar2;
  }
  if (param_2 <= uVar3) {
    param_2 = uVar3;
  }
  FUN_14516f0f0(param_1,param_2);
  return;
}



// FUNCTION 14516f2b0 FUN_14516f2b0 body=31 status=ok
// SIG undefined FUN_14516f2b0(void)

undefined8 FUN_14516f2b0(undefined8 param_1)

{
  FUN_14516f4a0();
  return param_1;
}



// FUNCTION 14516f2d0 FUN_14516f2d0 body=130 status=ok
// SIG undefined FUN_14516f2d0(void)

void FUN_14516f2d0(undefined8 *param_1)

{
  param_1[3] = &PTR_FUN_14ba6d600;
  if (param_1[4] != 0) {
    if (*(char *)(param_1 + 5) != '\0') {
      cef_string_utf16_clear();
      thunk_FUN_1400020a8(param_1[4],0x18);
    }
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  *param_1 = &PTR_FUN_14ba6d600;
  if (param_1[1] != 0) {
    if (*(char *)(param_1 + 2) != '\0') {
      cef_string_utf16_clear();
      thunk_FUN_1400020a8(param_1[1],0x18);
    }
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14516f360 FUN_14516f360 body=130 status=ok
// SIG undefined FUN_14516f360(void)

void FUN_14516f360(undefined8 *param_1)

{
  param_1[3] = &PTR_FUN_14ba6d600;
  if (param_1[4] != 0) {
    if (*(char *)(param_1 + 5) != '\0') {
      cef_string_utf16_clear();
      thunk_FUN_1400020a8(param_1[4],0x18);
    }
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  *param_1 = &PTR_FUN_14ba6d600;
  if (param_1[1] != 0) {
    if (*(char *)(param_1 + 2) != '\0') {
      cef_string_utf16_clear();
      thunk_FUN_1400020a8(param_1[1],0x18);
    }
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14516f3f0 FUN_14516f3f0 body=176 status=ok
// SIG undefined FUN_14516f3f0(void)

undefined8 * FUN_14516f3f0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_14ba6d600;
  uVar4 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = *(undefined8 **)(param_2 + 8);
  uVar3 = uVar4;
  uVar2 = uVar4;
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = *puVar1;
    uVar2 = puVar1[1];
  }
  FUN_149048250(param_1,uVar3,uVar2,1,0xfffffffffffffffe);
  param_1[3] = &PTR_FUN_14ba6d600;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  uVar2 = uVar4;
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = *puVar1;
    uVar2 = puVar1[1];
  }
  FUN_149048250(param_1 + 3,uVar4,uVar2,1,uVar5);
  return param_1;
}



// FUNCTION 14516f4a0 FUN_14516f4a0 body=176 status=ok
// SIG undefined FUN_14516f4a0(void)

undefined8 * FUN_14516f4a0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_14ba6d600;
  uVar4 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = *(undefined8 **)(param_2 + 8);
  uVar3 = uVar4;
  uVar2 = uVar4;
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = *puVar1;
    uVar2 = puVar1[1];
  }
  FUN_149048250(param_1,uVar3,uVar2,1,0xfffffffffffffffe);
  param_1[3] = &PTR_FUN_14ba6d600;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  puVar1 = *(undefined8 **)(param_3 + 8);
  uVar2 = uVar4;
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = *puVar1;
    uVar2 = puVar1[1];
  }
  FUN_149048250(param_1 + 3,uVar4,uVar2,1,uVar5);
  return param_1;
}



// FUNCTION 14516f550 FUN_14516f550 body=526 status=ok
// SIG undefined FUN_14516f550(void)

undefined8 *
FUN_14516f550(longlong *param_1,undefined8 *param_2,char param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  uVar5 = 1;
  puVar6 = (undefined8 *)((undefined8 *)*param_1)[1];
  cVar4 = *(char *)((longlong)puVar6 + 0x19);
  puVar2 = (undefined8 *)*param_1;
  while (cVar4 == '\0') {
    if (param_3 == '\0') {
      lVar1 = *(longlong *)(param_4 + 8);
      if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) &&
         ((puVar6[5] == 0 || (*(longlong *)(puVar6[5] + 8) == 0)))) {
        uVar5 = 0;
      }
      else if ((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) {
        uVar5 = 0xffffffff;
      }
      else if ((puVar6[5] == 0) || (*(longlong *)(puVar6[5] + 8) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = cef_string_utf16_cmp();
      }
      uVar5 = uVar5 >> 0x1f;
    }
    else {
      lVar1 = puVar6[5];
      if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) &&
         ((*(longlong *)(param_4 + 8) == 0 || (*(longlong *)(*(longlong *)(param_4 + 8) + 8) == 0)))
         ) {
        uVar5 = 1;
      }
      else if ((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) {
        uVar5 = 0;
      }
      else if ((*(longlong *)(param_4 + 8) == 0) ||
              (*(longlong *)(*(longlong *)(param_4 + 8) + 8) == 0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = cef_string_utf16_cmp();
        uVar5 = ~uVar5 >> 0x1f;
      }
    }
    if ((char)uVar5 == '\0') {
      puVar7 = (undefined8 *)puVar6[2];
    }
    else {
      puVar7 = (undefined8 *)*puVar6;
    }
    puVar2 = puVar6;
    puVar6 = puVar7;
    cVar4 = *(char *)((longlong)puVar7 + 0x19);
  }
  puVar6 = puVar2;
  if ((char)uVar5 != '\0') {
    if (puVar2 == *(undefined8 **)*param_1) {
      uVar5 = 1;
      goto LAB_14516f67e;
    }
    if (*(char *)((longlong)puVar2 + 0x19) == '\0') {
      puVar6 = (undefined8 *)*puVar2;
      if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
        cVar4 = *(char *)((longlong)puVar6[2] + 0x19);
        puVar7 = (undefined8 *)puVar6[2];
        while (cVar4 == '\0') {
          cVar4 = *(char *)((longlong)puVar7[2] + 0x19);
          puVar6 = puVar7;
          puVar7 = (undefined8 *)puVar7[2];
        }
      }
      else {
        cVar4 = *(char *)((longlong)puVar2[1] + 0x19);
        puVar7 = (undefined8 *)puVar2[1];
        puVar6 = puVar2;
        while ((puVar3 = puVar7, cVar4 == '\0' && (puVar6 == (undefined8 *)*puVar3))) {
          cVar4 = *(char *)((longlong)puVar3[1] + 0x19);
          puVar7 = (undefined8 *)puVar3[1];
          puVar6 = puVar3;
        }
        if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
          puVar6 = puVar3;
        }
      }
    }
    else {
      puVar6 = (undefined8 *)puVar2[2];
    }
  }
  cVar4 = FUN_14516ee50(puVar6 + 4,param_4);
  if (cVar4 == '\0') {
    FUN_14516f360(param_5 + 0x20);
    thunk_FUN_1400020a8(param_5);
    *param_2 = puVar6;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_14516f67e:
  puVar6 = (undefined8 *)FUN_14516f8b0(param_1,local_res8,uVar5,puVar2,param_4,param_5);
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = *puVar6;
  return param_2;
}



// FUNCTION 14516f760 FUN_14516f760 body=334 status=ok
// SIG undefined FUN_14516f760(void)

undefined8 * FUN_14516f760(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *local_res20;
  undefined8 uVar10;
  longlong *plVar11;
  
  uVar10 = 0xfffffffffffffffe;
  plVar7 = (longlong *)FUN_14494321d(0x50);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = *param_1;
    if (plVar7 + 1 != (longlong *)0x0) {
      plVar7[1] = *param_1;
    }
    if (plVar7 + 2 != (longlong *)0x0) {
      plVar7[2] = *param_1;
    }
    *(undefined2 *)(plVar7 + 3) = 0;
    plVar1 = plVar7 + 4;
    local_res20 = plVar1;
    plVar11 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      FUN_14516f3f0(plVar1,param_3);
    }
    puVar8 = (undefined8 *)((undefined8 *)*param_1)[1];
    uVar6 = 1;
    cVar2 = *(char *)((longlong)puVar8 + 0x19);
    puVar4 = (undefined8 *)*param_1;
    while (cVar2 == '\0') {
      lVar3 = plVar7[5];
      if (((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) &&
         ((puVar8[5] == 0 || (*(longlong *)(puVar8[5] + 8) == 0)))) {
        uVar5 = 0;
      }
      else if ((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) {
        uVar5 = 0xffffffff;
      }
      else if ((puVar8[5] == 0) || (*(longlong *)(puVar8[5] + 8) == 0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = cef_string_utf16_cmp();
      }
      uVar6 = uVar5 >> 0x1f;
      if ((int)uVar5 < 0) {
        puVar9 = (undefined8 *)*puVar8;
      }
      else {
        puVar9 = (undefined8 *)puVar8[2];
      }
      puVar4 = puVar8;
      puVar8 = puVar9;
      cVar2 = *(char *)((longlong)puVar9 + 0x19);
    }
    puVar8 = (undefined8 *)
             FUN_14516fc10(param_1,&local_res20,uVar6,puVar4,plVar1,plVar7,uVar10,plVar11);
    *param_2 = *puVar8;
    *(undefined1 *)(param_2 + 1) = 1;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}



// FUNCTION 14516f8b0 FUN_14516f8b0 body=679 status=ok
// SIG undefined FUN_14516f8b0(void)

undefined8 *
FUN_14516f8b0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (0x333333333333331 < (ulonglong)param_1[1]) {
    FUN_14516f360(param_6 + 4);
    thunk_FUN_1400020a8(param_6);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar4 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_14516f940;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_14516f940;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_14516f940:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar5 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar4 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar4 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)plVar5[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar4 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar4 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar4 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar5 = *(longlong **)(plVar5[1] + 8);
      }
      else {
        if (plVar5 == (longlong *)plVar6[2]) {
          plVar5 = (longlong *)plVar6[2];
          plVar6[2] = *plVar5;
          if (*(char *)(*plVar5 + 0x19) == '\0') {
            *(longlong **)(*plVar5 + 8) = plVar6;
          }
          plVar5[1] = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar5;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar5;
            }
            else {
              plVar7[2] = (longlong)plVar5;
            }
          }
          *plVar5 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar5;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_14516fb2f:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (plVar5 == (longlong *)*plVar6) {
          lVar4 = *plVar6;
          *plVar6 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x19) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar6;
          }
          *(longlong *)(lVar4 + 8) = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong *)(*param_1 + 8) = lVar4;
          }
          else {
            plVar5 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)plVar5[2]) {
              plVar5[2] = lVar4;
            }
            else {
              *plVar5 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar6;
          plVar6[1] = lVar4;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar3 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar3) {
            *puVar3 = plVar7;
          }
          else {
            puVar3[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_14516fb2f;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
      plVar5 = *(longlong **)(plVar5[1] + 8);
    }
    cVar1 = *(char *)(plVar5[1] + 0x18);
  } while( true );
}



// FUNCTION 14516fb60 FUN_14516fb60 body=171 status=ok
// SIG undefined FUN_14516fb60(void)

undefined8 * FUN_14516fb60(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    plVar5 = param_1 + 1;
    do {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = &PTR_FUN_14ba6d600;
        param_3[1] = 0;
        *(undefined1 *)(param_3 + 2) = 0;
        puVar2 = (undefined8 *)*plVar5;
        uVar4 = 0;
        uVar3 = 0;
        if (puVar2 != (undefined8 *)0x0) {
          uVar4 = *puVar2;
          uVar3 = puVar2[1];
        }
        FUN_149048250(param_3,uVar4,uVar3,1,uVar6);
      }
      param_3 = param_3 + 3;
      plVar1 = plVar5 + 2;
      plVar5 = plVar5 + 3;
    } while (plVar1 != param_2);
  }
  return param_3;
}



// FUNCTION 14516fc10 FUN_14516fc10 body=679 status=ok
// SIG undefined FUN_14516fc10(void)

undefined8 *
FUN_14516fc10(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (0x333333333333331 < (ulonglong)param_1[1]) {
    FUN_14516f360(param_6 + 4);
    thunk_FUN_1400020a8(param_6);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar4 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_14516fca0;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_14516fca0;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_14516fca0:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar5 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar4 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar4 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)plVar5[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar4 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar4 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar4 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar5 = *(longlong **)(plVar5[1] + 8);
      }
      else {
        if (plVar5 == (longlong *)plVar6[2]) {
          plVar5 = (longlong *)plVar6[2];
          plVar6[2] = *plVar5;
          if (*(char *)(*plVar5 + 0x19) == '\0') {
            *(longlong **)(*plVar5 + 8) = plVar6;
          }
          plVar5[1] = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar5;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar5;
            }
            else {
              plVar7[2] = (longlong)plVar5;
            }
          }
          *plVar5 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar5;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_14516fe8f:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (plVar5 == (longlong *)*plVar6) {
          lVar4 = *plVar6;
          *plVar6 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x19) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar6;
          }
          *(longlong *)(lVar4 + 8) = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong *)(*param_1 + 8) = lVar4;
          }
          else {
            plVar5 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)plVar5[2]) {
              plVar5[2] = lVar4;
            }
            else {
              *plVar5 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar6;
          plVar6[1] = lVar4;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar3 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar3) {
            *puVar3 = plVar7;
          }
          else {
            puVar3[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_14516fe8f;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
      plVar5 = *(longlong **)(plVar5[1] + 8);
    }
    cVar1 = *(char *)(plVar5[1] + 0x18);
  } while( true );
}



// FUNCTION 14516fec0 FUN_14516fec0 body=3 status=ok
// SIG undefined FUN_14516fec0(void)

void FUN_14516fec0(void)

{
  return;
}



// FUNCTION 14516fed0 FUN_14516fed0 body=48 status=ok
// SIG undefined FUN_14516fed0(void)

void FUN_14516fed0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516ff00 FUN_14516ff00 body=48 status=ok
// SIG undefined FUN_14516ff00(void)

void FUN_14516ff00(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516ff30 FUN_14516ff30 body=48 status=ok
// SIG undefined FUN_14516ff30(void)

void FUN_14516ff30(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516ff60 FUN_14516ff60 body=48 status=ok
// SIG undefined FUN_14516ff60(void)

void FUN_14516ff60(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516ff90 FUN_14516ff90 body=48 status=ok
// SIG undefined FUN_14516ff90(void)

void FUN_14516ff90(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516ffc0 FUN_14516ffc0 body=48 status=ok
// SIG undefined FUN_14516ffc0(void)

void FUN_14516ffc0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 14516fff0 FUN_14516fff0 body=48 status=ok
// SIG undefined FUN_14516fff0(void)

void FUN_14516fff0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145170020 FUN_145170020 body=48 status=ok
// SIG undefined FUN_145170020(void)

void FUN_145170020(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145170050 FUN_145170050 body=48 status=ok
// SIG undefined FUN_145170050(void)

void FUN_145170050(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145170080 FUN_145170080 body=48 status=ok
// SIG undefined FUN_145170080(void)

void FUN_145170080(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1451700b0 FUN_1451700b0 body=48 status=ok
// SIG undefined FUN_1451700b0(void)

void FUN_1451700b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1451700e0 FUN_1451700e0 body=48 status=ok
// SIG undefined FUN_1451700e0(void)

void FUN_1451700e0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145170110 FUN_145170110 body=48 status=ok
// SIG undefined FUN_145170110(void)

void FUN_145170110(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145170140 FUN_145170140 body=48 status=ok
// SIG undefined FUN_145170140(void)

void FUN_145170140(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145170170 FUN_145170170 body=48 status=ok
// SIG undefined FUN_145170170(void)

void FUN_145170170(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1451701a0 FUN_1451701a0 body=58 status=ok
// SIG undefined FUN_1451701a0(void)

longlong * FUN_1451701a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1451701e0 FUN_1451701e0 body=52 status=ok
// SIG undefined FUN_1451701e0(void)

int FUN_1451701e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 200);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145170220 FUN_145170220 body=80 status=ok
// SIG undefined FUN_145170220(void)

undefined8 FUN_145170220(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0x19;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1451702b0 FUN_1451702b0 body=20 status=ok
// SIG undefined FUN_1451702b0(void)

undefined8 * FUN_1451702b0(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1451702f0 FUN_1451702f0 body=42 status=ok
// SIG undefined FUN_1451702f0(void)

undefined1 FUN_1451702f0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 145170320 FUN_145170320 body=42 status=ok
// SIG undefined FUN_145170320(void)

undefined1 FUN_145170320(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145170350 FUN_145170350 body=42 status=ok
// SIG undefined FUN_145170350(void)

undefined1 FUN_145170350(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145170380 FUN_145170380 body=43 status=ok
// SIG undefined FUN_145170380(void)

undefined8 * FUN_145170380(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1451703b0 FUN_1451703b0 body=342 status=ok
// SIG undefined FUN_1451703b0(void)

undefined8 * FUN_1451703b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c38258;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c7301fc;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0xa8);
  param_1[5] = &LAB_1451702d0;
  param_1[6] = FUN_1451702f0;
  param_1[7] = FUN_145170320;
  param_1[8] = FUN_145170350;
  param_1[4] = 0xa8;
  *param_1 = &PTR_FUN_149c38280;
  param_1[9] = FUN_145170db0;
  param_1[10] = FUN_145170e70;
  param_1[0xb] = FUN_145170f30;
  param_1[0xc] = FUN_145170ff0;
  param_1[0xd] = FUN_1451710b0;
  param_1[0xe] = FUN_145171170;
  param_1[0xf] = FUN_145171230;
  param_1[0x10] = FUN_1451712f0;
  param_1[0x11] = FUN_1451713b0;
  param_1[0x12] = FUN_145171470;
  param_1[0x13] = FUN_145171530;
  param_1[0x14] = FUN_1451715f0;
  param_1[0x15] = FUN_1451716b0;
  param_1[0x16] = FUN_145171770;
  param_1[0x17] = FUN_145171830;
  param_1[0x18] = FUN_1451718f0;
  return param_1;
}



// FUNCTION 145170510 FUN_145170510 body=43 status=ok
// SIG undefined FUN_145170510(void)

undefined8 * FUN_145170510(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 145170540 FUN_145170540 body=135 status=ok
// SIG undefined FUN_145170540(void)

undefined8 * FUN_145170540(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x78);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453e6a50(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 1451705d0 FUN_1451705d0 body=135 status=ok
// SIG undefined FUN_1451705d0(void)

undefined8 * FUN_1451705d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x70);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453e7260(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145170660 FUN_145170660 body=135 status=ok
// SIG undefined FUN_145170660(void)

undefined8 * FUN_145170660(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x58);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453e7cc0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 1451706f0 FUN_1451706f0 body=135 status=ok
// SIG undefined FUN_1451706f0(void)

undefined8 * FUN_1451706f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0xa0);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453e8300(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145170780 FUN_145170780 body=135 status=ok
// SIG undefined FUN_145170780(void)

undefined8 * FUN_145170780(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x60);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453e90b0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145170810 FUN_145170810 body=135 status=ok
// SIG undefined FUN_145170810(void)

undefined8 * FUN_145170810(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x60);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453e9960(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 1451708a0 FUN_1451708a0 body=135 status=ok
// SIG undefined FUN_1451708a0(void)

undefined8 * FUN_1451708a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x58);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453ea3c0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145170930 FUN_145170930 body=135 status=ok
// SIG undefined FUN_145170930(void)

undefined8 * FUN_145170930(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x68);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453ea790(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 1451709c0 FUN_1451709c0 body=135 status=ok
// SIG undefined FUN_1451709c0(void)

undefined8 * FUN_1451709c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x70);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453eac80(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145170a50 FUN_145170a50 body=135 status=ok
// SIG undefined FUN_145170a50(void)

undefined8 * FUN_145170a50(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x60);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453eb4e0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145170ae0 FUN_145170ae0 body=135 status=ok
// SIG undefined FUN_145170ae0(void)

undefined8 * FUN_145170ae0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x70);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453eba30(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145170b70 FUN_145170b70 body=135 status=ok
// SIG undefined FUN_145170b70(void)

undefined8 * FUN_145170b70(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x70);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453ec4c0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145170c00 FUN_145170c00 body=135 status=ok
// SIG undefined FUN_145170c00(void)

undefined8 * FUN_145170c00(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0x80);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453ecb90(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145170c90 FUN_145170c90 body=135 status=ok
// SIG undefined FUN_145170c90(void)

undefined8 * FUN_145170c90(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(200);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453ed7d0(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145170d20 FUN_145170d20 body=135 status=ok
// SIG undefined FUN_145170d20(void)

undefined8 * FUN_145170d20(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar1 = FUN_14494321d(0xa8);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_1453ef350(lVar1);
    }
    puVar2[2] = *param_1;
    (**(code **)*puVar2)(puVar2);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}



// FUNCTION 145170db0 FUN_145170db0 body=184 status=ok
// SIG undefined FUN_145170db0(void)

undefined8 FUN_145170db0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145170540(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 145170e70 FUN_145170e70 body=185 status=ok
// SIG undefined FUN_145170e70(void)

undefined8 FUN_145170e70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_1451705d0(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 145170f30 FUN_145170f30 body=185 status=ok
// SIG undefined FUN_145170f30(void)

undefined8 FUN_145170f30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145170660(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 145170ff0 FUN_145170ff0 body=185 status=ok
// SIG undefined FUN_145170ff0(void)

undefined8 FUN_145170ff0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x18))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_1451706f0(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1451710b0 FUN_1451710b0 body=185 status=ok
// SIG undefined FUN_1451710b0(void)

undefined8 FUN_1451710b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x20))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145170780(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 145171170 FUN_145171170 body=185 status=ok
// SIG undefined FUN_145171170(void)

undefined8 FUN_145171170(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x28))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145170810(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 145171230 FUN_145171230 body=185 status=ok
// SIG undefined FUN_145171230(void)

undefined8 FUN_145171230(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x30))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_1451708a0(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1451712f0 FUN_1451712f0 body=185 status=ok
// SIG undefined FUN_1451712f0(void)

undefined8 FUN_1451712f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x38))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145170930(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1451713b0 FUN_1451713b0 body=185 status=ok
// SIG undefined FUN_1451713b0(void)

undefined8 FUN_1451713b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x40))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_1451709c0(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 145171470 FUN_145171470 body=185 status=ok
// SIG undefined FUN_145171470(void)

undefined8 FUN_145171470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x48))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145170a50(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 145171530 FUN_145171530 body=185 status=ok
// SIG undefined FUN_145171530(void)

undefined8 FUN_145171530(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x50))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145170ae0(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1451715f0 FUN_1451715f0 body=185 status=ok
// SIG undefined FUN_1451715f0(void)

undefined8 FUN_1451715f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x58))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145170b70(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1451716b0 FUN_1451716b0 body=185 status=ok
// SIG undefined FUN_1451716b0(void)

undefined8 FUN_1451716b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x60))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145170c00(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 145171770 FUN_145171770 body=185 status=ok
// SIG undefined FUN_145171770(void)

undefined8 FUN_145171770(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x68))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145170c90(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 145171830 FUN_145171830 body=185 status=ok
// SIG undefined FUN_145171830(void)

undefined8 FUN_145171830(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1451701a0(local_res18,param_1,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*(longlong *)*puVar1 + 0x70))((longlong *)*puVar1,&local_res10);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
    local_res8 = local_res10;
    if (local_res10 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)))();
    }
    uVar2 = FUN_145170d20(&local_res8);
    if (local_res10 != 0) {
      (**(code **)(*(longlong *)
                    (local_res10 + 8 + (longlong)*(int *)(*(longlong *)(local_res10 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1451718f0 FUN_1451718f0 body=259 status=ok
// SIG undefined FUN_1451718f0(void)

undefined1
FUN_1451718f0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,longlong param_5
             )

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong local_38 [2];
  undefined4 *local_28;
  undefined1 *local_20;
  
  local_38[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_5 == 0)) {
    uVar2 = 0;
  }
  else {
    local_28 = local_res8;
    local_20 = local_48;
    puVar3 = (undefined8 *)FUN_1451701a0(local_38,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d77b10(local_res8,param_5);
    uVar5 = FUN_14516a830(local_48,param_3);
    uVar6 = FUN_144d7a4e0(local_40,param_2);
    uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,uVar6,uVar5,param_4,uVar4);
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 145171a00 FUN_145171a00 body=58 status=ok
// SIG undefined FUN_145171a00(void)

longlong * FUN_145171a00(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 145171a40 FUN_145171a40 body=49 status=ok
// SIG undefined FUN_145171a40(void)

int FUN_145171a40(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x70);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145171a80 FUN_145171a80 body=77 status=ok
// SIG undefined FUN_145171a80(void)

undefined8 FUN_145171a80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xe;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 145171b30 FUN_145171b30 body=42 status=ok
// SIG undefined FUN_145171b30(void)

undefined1 FUN_145171b30(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 145171b60 FUN_145171b60 body=42 status=ok
// SIG undefined FUN_145171b60(void)

undefined1 FUN_145171b60(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145171b90 FUN_145171b90 body=42 status=ok
// SIG undefined FUN_145171b90(void)

undefined1 FUN_145171b90(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145171bc0 FUN_145171bc0 body=43 status=ok
// SIG undefined FUN_145171bc0(void)

undefined8 * FUN_145171bc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 145171bf0 FUN_145171bf0 body=189 status=ok
// SIG undefined FUN_145171bf0(void)

undefined8 * FUN_145171bf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c389d8;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c730200;
  param_1[3] = param_1;
  memset(param_1 + 4,0,0x50);
  param_1[5] = &LAB_145171b10;
  param_1[6] = FUN_145171b30;
  param_1[7] = FUN_145171b60;
  param_1[8] = FUN_145171b90;
  param_1[4] = 0x50;
  *param_1 = &PTR_FUN_149c38a00;
  param_1[9] = FUN_145171d10;
  param_1[10] = FUN_145171dd0;
  param_1[0xb] = FUN_145171e90;
  param_1[0xc] = FUN_145171fb0;
  param_1[0xd] = FUN_145172040;
  return param_1;
}



// FUNCTION 145171cb0 FUN_145171cb0 body=84 status=ok
// SIG undefined FUN_145171cb0(void)

undefined8 *
FUN_145171cb0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149c38a00;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 145171d10 FUN_145171d10 body=181 status=ok
// SIG undefined FUN_145171d10(void)

undefined1 FUN_145171d10(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_18 [2];
  
  local_18[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_145171a00(local_18,param_1);
    puVar2 = (undefined8 *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_res8,param_2);
    uVar1 = (**(code **)*puVar2)(puVar2,uVar3,param_3,param_4);
    if (local_18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_18[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar1;
}



// FUNCTION 145171dd0 FUN_145171dd0 body=191 status=ok
// SIG undefined FUN_145171dd0(void)

void FUN_145171dd0(longlong param_1,longlong param_2,undefined4 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_18 [2];
  
  local_18[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)FUN_145171a00(local_18,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_144d7a4e0(local_res8,param_2);
    (**(code **)(*plVar1 + 8))(plVar1,uVar3,param_3,param_4 != 0,param_5,param_6);
    if (local_18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_18[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 145171e90 FUN_145171e90 body=277 status=ok
// SIG undefined FUN_145171e90(void)

void FUN_145171e90(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_48 [2];
  undefined **local_38;
  longlong local_30;
  char local_28;
  
  local_48[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    puVar2 = (undefined8 *)FUN_145171a00(local_48,param_1);
    plVar1 = (longlong *)*puVar2;
    local_38 = &PTR_FUN_14ba6d600;
    local_28 = '\0';
    local_30 = param_3;
    uVar3 = FUN_144d7a4e0(local_res8,param_2);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar3,&local_38,param_4,param_5);
    local_38 = &PTR_FUN_14ba6d600;
    if (local_30 != 0) {
      if (local_28 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_30,0x18);
      }
      local_30 = 0;
      local_28 = '\0';
    }
    if (local_48[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_48[0] + 8 + (longlong)*(int *)(*(longlong *)(local_48[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 145171fb0 FUN_145171fb0 body=136 status=ok
// SIG undefined FUN_145171fb0(void)

void FUN_145171fb0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_145171a00(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x18))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 145172040 FUN_145172040 body=136 status=ok
// SIG undefined FUN_145172040(void)

void FUN_145172040(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_145171a00(local_res18,param_1);
    plVar1 = (longlong *)*puVar3;
    uVar4 = FUN_144d7a4e0(local_res8,param_2);
    lVar2 = *plVar1;
    (**(code **)(lVar2 + 0x20))(plVar1,uVar4,lVar2,param_4,uVar5);
    if (local_res18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_res18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_res18[0] + 8) + 4))
                  + 8))();
    }
  }
  return;
}



// FUNCTION 1451720d0 FUN_1451720d0 body=58 status=ok
// SIG undefined FUN_1451720d0(void)

longlong * FUN_1451720d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 145172110 FUN_145172110 body=49 status=ok
// SIG undefined FUN_145172110(void)

int FUN_145172110(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145172150 FUN_145172150 body=77 status=ok
// SIG undefined FUN_145172150(void)

undefined8 FUN_145172150(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 145172200 FUN_145172200 body=42 status=ok
// SIG undefined FUN_145172200(void)

undefined1 FUN_145172200(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 145172230 FUN_145172230 body=42 status=ok
// SIG undefined FUN_145172230(void)

undefined1 FUN_145172230(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145172260 FUN_145172260 body=42 status=ok
// SIG undefined FUN_145172260(void)

undefined1 FUN_145172260(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145172290 FUN_145172290 body=43 status=ok
// SIG undefined FUN_145172290(void)

undefined8 * FUN_145172290(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1451722c0 FUN_1451722c0 body=107 status=ok
// SIG undefined FUN_1451722c0(void)

undefined8 * FUN_1451722c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c38b18;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c730204;
  param_1[3] = param_1;
  param_1[5] = &LAB_1451721e0;
  param_1[6] = FUN_145172200;
  param_1[7] = FUN_145172230;
  param_1[8] = FUN_145172260;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149c38b40;
  param_1[9] = FUN_145172480;
  return param_1;
}



// FUNCTION 145172330 FUN_145172330 body=84 status=ok
// SIG undefined FUN_145172330(void)

undefined8 *
FUN_145172330(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149c38b40;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 145172390 FUN_145172390 body=230 status=ok
// SIG undefined FUN_145172390(void)

longlong * FUN_145172390(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_1453f0d90(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7441c8;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 145172480 FUN_145172480 body=255 status=ok
// SIG undefined FUN_145172480(void)

void FUN_145172480(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  longlong local_38 [2];
  undefined **local_28;
  longlong local_20;
  char local_18;
  
  local_38[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar1 = (undefined8 *)FUN_1451720d0(local_38,param_1);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_145172390(local_res8,param_4);
    local_28 = &PTR_FUN_14ba6d600;
    local_18 = '\0';
    local_20 = param_2;
    (**(code **)*puVar1)(puVar1,&local_28,param_3,uVar2);
    local_28 = &PTR_FUN_14ba6d600;
    if (local_20 != 0) {
      if (local_18 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_20,0x18);
      }
      local_20 = 0;
      local_18 = '\0';
    }
    if (local_38[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_38[0] + 8 + (longlong)*(int *)(*(longlong *)(local_38[0] + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 145172580 FUN_145172580 body=48 status=ok
// SIG undefined FUN_145172580(void)

void FUN_145172580(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1451725b0 FUN_1451725b0 body=58 status=ok
// SIG undefined FUN_1451725b0(void)

longlong * FUN_1451725b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1451725f0 FUN_1451725f0 body=49 status=ok
// SIG undefined FUN_1451725f0(void)

int FUN_1451725f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145172630 FUN_145172630 body=77 status=ok
// SIG undefined FUN_145172630(void)

undefined8 FUN_145172630(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1451726e0 FUN_1451726e0 body=42 status=ok
// SIG undefined FUN_1451726e0(void)

undefined1 FUN_1451726e0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 145172710 FUN_145172710 body=42 status=ok
// SIG undefined FUN_145172710(void)

undefined1 FUN_145172710(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145172740 FUN_145172740 body=42 status=ok
// SIG undefined FUN_145172740(void)

undefined1 FUN_145172740(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145172770 FUN_145172770 body=43 status=ok
// SIG undefined FUN_145172770(void)

undefined8 * FUN_145172770(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1451727a0 FUN_1451727a0 body=107 status=ok
// SIG undefined FUN_1451727a0(void)

undefined8 * FUN_1451727a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c38c08;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c730208;
  param_1[3] = param_1;
  param_1[5] = &LAB_1451726c0;
  param_1[6] = FUN_1451726e0;
  param_1[7] = FUN_145172710;
  param_1[8] = FUN_145172740;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149c38c30;
  param_1[9] = FUN_145172870;
  return param_1;
}



// FUNCTION 145172810 FUN_145172810 body=84 status=ok
// SIG undefined FUN_145172810(void)

undefined8 *
FUN_145172810(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149c38c30;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 145172870 FUN_145172870 body=187 status=ok
// SIG undefined FUN_145172870(void)

undefined1
FUN_145172870(longlong param_1,longlong param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_18 [2];
  
  local_18[1] = 0xfffffffffffffffe;
  local_res8[0] = 0;
  FUN_14516fec0();
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_1451725b0(local_18,param_1);
    puVar2 = (undefined8 *)*puVar2;
    uVar3 = FUN_144d7a730(local_res8,param_2);
    uVar1 = (**(code **)*puVar2)(puVar2,uVar3,param_3 != 0,param_4,param_5);
    if (local_18[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_18[0] + 8 + (longlong)*(int *)(*(longlong *)(local_18[0] + 8) + 4)) + 8))
                ();
    }
  }
  return uVar1;
}



// FUNCTION 145172930 FUN_145172930 body=58 status=ok
// SIG undefined FUN_145172930(void)

longlong * FUN_145172930(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 145172970 FUN_145172970 body=49 status=ok
// SIG undefined FUN_145172970(void)

int FUN_145172970(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1451729b0 FUN_1451729b0 body=77 status=ok
// SIG undefined FUN_1451729b0(void)

undefined8 FUN_1451729b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 145172a60 FUN_145172a60 body=42 status=ok
// SIG undefined FUN_145172a60(void)

undefined1 FUN_145172a60(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 145172a90 FUN_145172a90 body=42 status=ok
// SIG undefined FUN_145172a90(void)

undefined1 FUN_145172a90(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145172ac0 FUN_145172ac0 body=42 status=ok
// SIG undefined FUN_145172ac0(void)

undefined1 FUN_145172ac0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145172af0 FUN_145172af0 body=43 status=ok
// SIG undefined FUN_145172af0(void)

undefined8 * FUN_145172af0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 145172b20 FUN_145172b20 body=107 status=ok
// SIG undefined FUN_145172b20(void)

undefined8 * FUN_145172b20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c38ca8;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c73020c;
  param_1[3] = param_1;
  param_1[5] = &LAB_145172a40;
  param_1[6] = FUN_145172a60;
  param_1[7] = FUN_145172a90;
  param_1[8] = FUN_145172ac0;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149c38cd0;
  param_1[9] = FUN_145172bf0;
  return param_1;
}



// FUNCTION 145172b90 FUN_145172b90 body=84 status=ok
// SIG undefined FUN_145172b90(void)

undefined8 *
FUN_145172b90(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149c38cd0;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 145172bf0 FUN_145172bf0 body=225 status=ok
// SIG undefined FUN_145172bf0(void)

void FUN_145172bf0(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 uVar3;
  undefined **local_20;
  longlong local_18;
  char local_10;
  
  uVar3 = 0xfffffffffffffffe;
  local_res8 = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = (undefined8 *)FUN_145172930(&local_res8,param_1);
    local_20 = &PTR_FUN_14ba6d600;
    local_10 = '\0';
    local_18 = param_2;
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,&local_20,param_3 != 0,param_4,uVar3);
    local_20 = &PTR_FUN_14ba6d600;
    if (local_18 != 0) {
      if (local_10 != '\0') {
        cef_string_utf16_clear();
        thunk_FUN_1400020a8(local_18,0x18);
      }
      local_18 = 0;
      local_10 = '\0';
    }
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return;
}



// FUNCTION 145172ce0 FUN_145172ce0 body=58 status=ok
// SIG undefined FUN_145172ce0(void)

longlong * FUN_145172ce0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 145172d20 FUN_145172d20 body=49 status=ok
// SIG undefined FUN_145172d20(void)

int FUN_145172d20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145172d60 FUN_145172d60 body=77 status=ok
// SIG undefined FUN_145172d60(void)

undefined8 FUN_145172d60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 145172e10 FUN_145172e10 body=42 status=ok
// SIG undefined FUN_145172e10(void)

undefined1 FUN_145172e10(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 145172e40 FUN_145172e40 body=42 status=ok
// SIG undefined FUN_145172e40(void)

undefined1 FUN_145172e40(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145172e70 FUN_145172e70 body=42 status=ok
// SIG undefined FUN_145172e70(void)

undefined1 FUN_145172e70(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145172ea0 FUN_145172ea0 body=43 status=ok
// SIG undefined FUN_145172ea0(void)

undefined8 * FUN_145172ea0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 145172ed0 FUN_145172ed0 body=107 status=ok
// SIG undefined FUN_145172ed0(void)

undefined8 * FUN_145172ed0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c38d48;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c730210;
  param_1[3] = param_1;
  param_1[5] = &LAB_145172df0;
  param_1[6] = FUN_145172e10;
  param_1[7] = FUN_145172e40;
  param_1[8] = FUN_145172e70;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149c38d70;
  param_1[9] = FUN_145172fa0;
  return param_1;
}



// FUNCTION 145172f40 FUN_145172f40 body=84 status=ok
// SIG undefined FUN_145172f40(void)

undefined8 *
FUN_145172f40(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149c38d70;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 145172fa0 FUN_145172fa0 body=264 status=ok
// SIG undefined FUN_145172fa0(void)

void FUN_145172fa0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 uVar4;
  undefined8 *local_20;
  undefined8 *puStack_18;
  longlong local_10;
  
  uVar4 = 0xfffffffffffffffe;
  local_res8 = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (-1 < param_2)) {
    local_20 = (undefined8 *)0x0;
    puStack_18 = (undefined8 *)0x0;
    local_10 = 0;
    FUN_14516e770(param_3,&local_20);
    puVar3 = (undefined8 *)FUN_145172ce0(&local_res8,param_1);
    (*(code *)**(undefined8 **)*puVar3)((undefined8 *)*puVar3,param_2,&local_20,param_4,uVar4);
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    puVar2 = puStack_18;
    puVar3 = local_20;
    if (local_20 != (undefined8 *)0x0) {
      for (; puVar3 != puVar2; puVar3 = puVar3 + 3) {
        (**(code **)*puVar3)(puVar3,0);
      }
      FUN_14516eec0(&local_20,local_20,(local_10 - (longlong)local_20) / 0x18);
    }
  }
  return;
}



// FUNCTION 1451730b0 thunk_FUN_1451730c0 body=5 status=ok
// SIG undefined thunk_FUN_1451730c0(void)

void thunk_FUN_1451730c0(void)

{
  FUN_1451730c0();
  return;
}



// FUNCTION 1451730c0 FUN_1451730c0 body=128 status=ok
// SIG undefined FUN_1451730c0(void)

void FUN_1451730c0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      (**(code **)*puVar2)(puVar2,0);
    }
    FUN_14516eec0(param_1,*param_1,(param_1[2] - *param_1) / 0x18);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145173140 FUN_145173140 body=48 status=ok
// SIG undefined FUN_145173140(void)

longlong FUN_145173140(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 145173170 FUN_145173170 body=152 status=ok
// SIG undefined FUN_145173170(void)

undefined8 FUN_145173170(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c730214) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1) + 8))
                ();
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 145173210 FUN_145173210 body=40 status=ok
// SIG undefined FUN_145173210(void)

int FUN_145173210(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145173240 FUN_145173240 body=105 status=ok
// SIG undefined FUN_145173240(void)

undefined8 FUN_145173240(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_145173420(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1451732b0 FUN_1451732b0 body=34 status=ok
// SIG undefined FUN_1451732b0(void)

bool FUN_1451732b0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1451732e0 FUN_1451732e0 body=38 status=ok
// SIG undefined FUN_1451732e0(void)

bool FUN_1451732e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 145173310 FUN_145173310 body=85 status=ok
// SIG undefined FUN_145173310(void)

longlong FUN_145173310(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c38eb0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c38f50;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145173370 FUN_145173370 body=167 status=ok
// SIG undefined FUN_145173370(void)

undefined8 * FUN_145173370(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149c39040;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149c38de8;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149c38e88;
  *param_1 = &PTR__purecall_149c38eb0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c38f50;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149c38f78;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c39018;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 145173420 FUN_145173420 body=124 status=ok
// SIG undefined FUN_145173420(void)

void FUN_145173420(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149c38f78;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c39018;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c38eb0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c38f50;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 1451734a0 FUN_1451734a0 body=96 status=ok
// SIG undefined FUN_1451734a0(void)

undefined8 *
FUN_1451734a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_145173cf0(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145173500 FUN_145173500 body=54 status=ok
// SIG undefined FUN_145173500(void)

bool FUN_145173500(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145173540 FUN_145173540 body=47 status=ok
// SIG undefined FUN_145173540(void)

void FUN_145173540(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[7],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145173566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145173570 FUN_145173570 body=54 status=ok
// SIG undefined FUN_145173570(void)

bool FUN_145173570(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1451735b0 FUN_1451735b0 body=47 status=ok
// SIG undefined FUN_1451735b0(void)

void FUN_1451735b0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[9],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001451735d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 1451735e0 FUN_1451735e0 body=54 status=ok
// SIG undefined FUN_1451735e0(void)

bool FUN_1451735e0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145173620 FUN_145173620 body=47 status=ok
// SIG undefined FUN_145173620(void)

void FUN_145173620(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xb],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145173646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145173650 FUN_145173650 body=47 status=ok
// SIG undefined FUN_145173650(void)

void FUN_145173650(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x67 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xc],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145173676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145173680 FUN_145173680 body=47 status=ok
// SIG undefined FUN_145173680(void)

void FUN_145173680(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x6f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xd],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001451736a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 1451736b0 FUN_1451736b0 body=49 status=ok
// SIG undefined FUN_1451736b0(void)

undefined8 FUN_1451736b0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0x77 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xe],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001451736d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1451736f0 FUN_1451736f0 body=205 status=ok
// SIG undefined FUN_1451736f0(void)

ulonglong FUN_1451736f0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong *local_res10;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = param_2;
  uVar4 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x80) || (puVar1[0xf] == 0)) {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar4 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(uVar2 + 8) + 4) + uVar2 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      if (local_res8 != 0) {
        (*(code *)**(undefined8 **)
                    (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      }
      uVar5 = FUN_145173170(&local_res8);
      iVar3 = (*(code *)puVar1[0xf])(puVar1,uVar5);
      uVar4 = *param_2;
      if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 + 8 + (longlong)*(int *)(*(longlong *)(uVar4 + 8) + 4)) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1451737c0 FUN_1451737c0 body=60 status=ok
// SIG undefined FUN_1451737c0(void)

bool FUN_1451737c0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x87 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x10], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145173800 FUN_145173800 body=60 status=ok
// SIG undefined FUN_145173800(void)

bool FUN_145173800(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x8f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x11], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145173840 FUN_145173840 body=102 status=ok
// SIG undefined FUN_145173840(void)

undefined8 *
FUN_145173840(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x97 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x12], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_14516a830(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1451738b0 FUN_1451738b0 body=102 status=ok
// SIG undefined FUN_1451738b0(void)

undefined8 *
FUN_1451738b0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x9f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x13], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_14516a830(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145173920 FUN_145173920 body=123 status=ok
// SIG undefined FUN_145173920(void)

undefined8 * FUN_145173920(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xa7 < *puVar1) && ((code *)puVar1[0x14] != (code *)0x0)) {
    uVar2 = (*(code *)puVar1[0x14])(puVar1,param_3);
    FUN_14516a830(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1451739a0 FUN_1451739a0 body=124 status=ok
// SIG undefined FUN_1451739a0(void)

undefined8 * FUN_1451739a0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xaf < *puVar1) && ((code *)puVar1[0x15] != (code *)0x0)) {
    uVar2 = (*(code *)puVar1[0x15])(puVar1,*(undefined8 *)(param_3 + 8));
    FUN_14516a830(param_2,uVar2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145173a20 FUN_145173a20 body=55 status=ok
// SIG undefined FUN_145173a20(void)

undefined8 FUN_145173a20(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  FUN_14516fec0();
  if ((0xb7 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x16],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145173a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 145173a60 FUN_145173a60 body=435 status=ok
// SIG undefined FUN_145173a60(void)

void FUN_145173a60(longlong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *_Dst;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_res8;
  undefined8 *local_res18;
  
  puVar7 = (undefined8 *)0x0;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
  FUN_14516fec0();
  puVar1 = (ulonglong *)param_1[-1];
  if ((0xbf < *puVar1) && (puVar1[0x17] != 0)) {
    puVar8 = (undefined8 *)((longlong)(param_2[1] - *param_2) >> 3);
    local_res18 = puVar8;
    local_res8 = (undefined8 *)(**(code **)(*param_1 + 0x88))(param_1);
    ppuVar5 = &local_res18;
    if (puVar8 <= local_res8) {
      ppuVar5 = &local_res8;
    }
    local_res8 = *ppuVar5;
    _Dst = puVar7;
    if (local_res8 != (undefined8 *)0x0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_res8;
      uVar4 = SUB168(ZEXT816(8) * auVar3,0);
      if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
        uVar4 = 0xffffffffffffffff;
      }
      _Dst = (undefined8 *)FUN_144a7d36f(uVar4);
      if ((_Dst != (undefined8 *)0x0) &&
         (memset(_Dst,0,(longlong)local_res8 * 8), puVar6 = puVar7, puVar8 != (undefined8 *)0x0)) {
        do {
          _Dst[(longlong)puVar6] = *(undefined8 *)(*param_2 + (longlong)puVar6 * 8);
          puVar6 = (undefined8 *)((longlong)puVar6 + 1);
        } while (puVar6 < puVar8);
      }
    }
    (*(code *)puVar1[0x17])(puVar1,&local_res8,_Dst);
    param_2[1] = *param_2;
    if ((local_res8 != (undefined8 *)0x0) && (_Dst != (undefined8 *)0x0)) {
      puVar8 = _Dst;
      if (local_res8 != (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)param_2[1];
          if ((puVar8 < puVar6) && (puVar2 = (undefined8 *)*param_2, puVar2 <= puVar8)) {
            if (puVar6 == (undefined8 *)param_2[2]) {
              FUN_145173f20(param_2,1);
            }
            if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
              *(undefined8 *)param_2[1] =
                   *(undefined8 *)(*param_2 + ((longlong)puVar8 - (longlong)puVar2 >> 3) * 8);
            }
          }
          else {
            if (puVar6 == (undefined8 *)param_2[2]) {
              FUN_145173f20(param_2,1);
            }
            if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
              *(undefined8 *)param_2[1] = *puVar8;
            }
          }
          param_2[1] = param_2[1] + 8;
          puVar7 = (undefined8 *)((longlong)puVar7 + 1);
          puVar8 = puVar8 + 1;
        } while (puVar7 < local_res8);
      }
      thunk_FUN_1400020a8(_Dst);
    }
  }
  return;
}



// FUNCTION 145173c20 FUN_145173c20 body=141 status=ok
// SIG undefined FUN_145173c20(void)

void FUN_145173c20(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((199 < *puVar1) && (puVar1[0x18] != 0)) {
    lVar2 = cef_string_list_alloc();
    if (lVar2 != 0) {
      FUN_14516e860(param_2,lVar2);
    }
    (*(code *)puVar1[0x18])(puVar1,lVar2);
    if (lVar2 != 0) {
      FUN_144d739a0(param_2);
      FUN_14516e770(lVar2,param_2);
      cef_string_list_free(lVar2);
    }
  }
  return;
}



// FUNCTION 145173cb0 FUN_145173cb0 body=64 status=ok
// SIG undefined FUN_145173cb0(void)

undefined8 * FUN_145173cb0(undefined8 *param_1,ulonglong param_2)

{
  FUN_145173420();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145173cf0 FUN_145173cf0 body=230 status=ok
// SIG undefined FUN_145173cf0(void)

longlong * FUN_145173cf0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_144d78550(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c7078e4;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 145173de0 FUN_145173de0 body=48 status=ok
// SIG undefined FUN_145173de0(void)

void FUN_145173de0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 145173e10 FUN_145173e10 body=109 status=ok
// SIG undefined FUN_145173e10(void)

void FUN_145173e10(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x1fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 8) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 145173e90 FUN_145173e90 body=131 status=ok
// SIG undefined FUN_145173e90(void)

void FUN_145173e90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  
  _Dst = (void *)FUN_148274c86();
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    FUN_145173e10(param_1,lVar1,param_1[2] - lVar1 >> 3);
  }
  *param_1 = (longlong)_Dst;
  param_1[2] = (longlong)((longlong)_Dst + param_2 * 8);
  param_1[1] = (longlong)((longlong)_Dst + (lVar2 - lVar1 >> 3) * 8);
  return;
}



// FUNCTION 145173f20 FUN_145173f20 body=129 status=ok
// SIG undefined FUN_145173f20(void)

void FUN_145173f20(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)(param_1[2] - param_1[1] >> 3)) {
    return;
  }
  lVar2 = param_1[1] - *param_1 >> 3;
  if (0x1fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = param_2 + lVar2;
  uVar3 = param_1[2] - *param_1 >> 3;
  uVar1 = 0;
  if (uVar3 <= 0x1fffffffffffffff - (uVar3 >> 1)) {
    uVar1 = (uVar3 >> 1) + uVar3;
  }
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  FUN_145173e90(param_1,param_2);
  return;
}



// FUNCTION 145173ff0 FUN_145173ff0 body=48 status=ok
// SIG undefined FUN_145173ff0(void)

longlong FUN_145173ff0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 145174020 FUN_145174020 body=230 status=ok
// SIG undefined FUN_145174020(void)

longlong * FUN_145174020(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_14494321d(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_145174280(puVar2 + 4,1,param_3,param_4,uVar3,uVar4);
    }
    *puVar2 = DAT_14c730218;
    *(longlong *)(puVar2 + 2) = param_2;
    puVar1 = puVar2 + 4;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
    }
    if (*(code **)(*(longlong *)(puVar2 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(puVar2 + 2) + 0x10))();
    }
    *param_1 = (longlong)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1))();
      (**(code **)(*(longlong *)
                    ((longlong)*(int *)(*(longlong *)(puVar2 + 6) + 4) + 8 + (longlong)puVar1) + 8))
                ();
    }
  }
  return param_1;
}



// FUNCTION 145174110 FUN_145174110 body=40 status=ok
// SIG undefined FUN_145174110(void)

int FUN_145174110(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145174140 FUN_145174140 body=105 status=ok
// SIG undefined FUN_145174140(void)

undefined8 FUN_145174140(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_145174330(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1451741b0 FUN_1451741b0 body=34 status=ok
// SIG undefined FUN_1451741b0(void)

bool FUN_1451741b0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1451741e0 FUN_1451741e0 body=38 status=ok
// SIG undefined FUN_1451741e0(void)

bool FUN_1451741e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 145174210 FUN_145174210 body=11 status=ok
// SIG undefined FUN_145174210(void)

undefined8 FUN_145174210(void)

{
  return 0;
}



// FUNCTION 145174220 FUN_145174220 body=85 status=ok
// SIG undefined FUN_145174220(void)

longlong FUN_145174220(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c39200;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c392c8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145174280 FUN_145174280 body=167 status=ok
// SIG undefined FUN_145174280(void)

undefined8 * FUN_145174280(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149c393e0;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149c39110;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149c391d8;
  *param_1 = &PTR__purecall_149c39200;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c392c8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149c392f0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c393b8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 145174330 FUN_145174330 body=124 status=ok
// SIG undefined FUN_145174330(void)

void FUN_145174330(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149c392f0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c393b8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c39200;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c392c8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 1451743b0 FUN_1451743b0 body=96 status=ok
// SIG undefined FUN_1451743b0(void)

undefined8 *
FUN_1451743b0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_145174020(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145174410 FUN_145174410 body=54 status=ok
// SIG undefined FUN_145174410(void)

bool FUN_145174410(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145174450 FUN_145174450 body=54 status=ok
// SIG undefined FUN_145174450(void)

bool FUN_145174450(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145174490 FUN_145174490 body=54 status=ok
// SIG undefined FUN_145174490(void)

bool FUN_145174490(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x47 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 1451744d0 FUN_1451744d0 body=54 status=ok
// SIG undefined FUN_1451744d0(void)

bool FUN_1451744d0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145174510 FUN_145174510 body=222 status=ok
// SIG undefined FUN_145174510(void)

undefined8 * FUN_145174510(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x58) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1451745f0 FUN_1451745f0 body=222 status=ok
// SIG undefined FUN_1451745f0(void)

undefined8 * FUN_1451745f0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x60) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xb], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1451746d0 FUN_1451746d0 body=222 status=ok
// SIG undefined FUN_1451746d0(void)

undefined8 * FUN_1451746d0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x68) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xc], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 1451747b0 FUN_1451747b0 body=222 status=ok
// SIG undefined FUN_1451747b0(void)

undefined8 * FUN_1451747b0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x70) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xd], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 145174890 FUN_145174890 body=222 status=ok
// SIG undefined FUN_145174890(void)

undefined8 * FUN_145174890(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x78) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xe], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 145174970 FUN_145174970 body=225 status=ok
// SIG undefined FUN_145174970(void)

undefined8 * FUN_145174970(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x80) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xf], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 145174a60 FUN_145174a60 body=228 status=ok
// SIG undefined FUN_145174a60(void)

undefined8 * FUN_145174a60(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x88) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x10], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 145174b50 FUN_145174b50 body=194 status=ok
// SIG undefined FUN_145174b50(void)

undefined8 FUN_145174b50(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  longlong *local_res10;
  
  local_res10 = param_2;
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x90) || (puVar1[0x11] == 0)) {
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))
                ();
    }
    uVar3 = 0;
  }
  else {
    local_res8 = *param_2;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
    }
    uVar3 = FUN_145175080(&local_res8);
    uVar3 = (*(code *)puVar1[0x11])(puVar1,uVar3);
    lVar2 = *param_2;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)(lVar2 + 8 + (longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 145174c20 FUN_145174c20 body=166 status=ok
// SIG undefined FUN_145174c20(void)

bool FUN_145174c20(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x97 < *puVar1) && (puVar1[0x12] != 0)) {
    lVar3 = cef_string_list_alloc();
    if (lVar3 != 0) {
      FUN_14516e860(param_2,lVar3);
    }
    iVar2 = (*(code *)puVar1[0x12])(puVar1,lVar3);
    if (lVar3 != 0) {
      FUN_144d739a0(param_2);
      FUN_14516e770(lVar3,param_2);
      cef_string_list_free(lVar3);
    }
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145174cd0 FUN_145174cd0 body=63 status=ok
// SIG undefined FUN_145174cd0(void)

void FUN_145174cd0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0x9f < *puVar1) && ((code *)puVar1[0x13] != (code *)0x0)) {
    (*(code *)puVar1[0x13])(puVar1,*(undefined8 *)(param_2 + 8));
  }
  return;
}



// FUNCTION 145174d10 FUN_145174d10 body=63 status=ok
// SIG undefined FUN_145174d10(void)

void FUN_145174d10(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xa7 < *puVar1) && ((code *)puVar1[0x14] != (code *)0x0)) {
    (*(code *)puVar1[0x14])(puVar1,*(undefined8 *)(param_2 + 8));
  }
  return;
}



// FUNCTION 145174d50 FUN_145174d50 body=63 status=ok
// SIG undefined FUN_145174d50(void)

void FUN_145174d50(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xaf < *puVar1) && ((code *)puVar1[0x15] != (code *)0x0)) {
    (*(code *)puVar1[0x15])(puVar1,*(undefined8 *)(param_2 + 8));
  }
  return;
}



// FUNCTION 145174d90 FUN_145174d90 body=63 status=ok
// SIG undefined FUN_145174d90(void)

void FUN_145174d90(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xb7 < *puVar1) && ((code *)puVar1[0x16] != (code *)0x0)) {
    (*(code *)puVar1[0x16])(puVar1,*(undefined8 *)(param_2 + 8));
  }
  return;
}



// FUNCTION 145174dd0 FUN_145174dd0 body=63 status=ok
// SIG undefined FUN_145174dd0(void)

void FUN_145174dd0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((0xbf < *puVar1) && ((code *)puVar1[0x17] != (code *)0x0)) {
    (*(code *)puVar1[0x17])(puVar1,*(undefined8 *)(param_2 + 8));
  }
  return;
}



// FUNCTION 145174e10 FUN_145174e10 body=63 status=ok
// SIG undefined FUN_145174e10(void)

void FUN_145174e10(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((199 < *puVar1) && ((code *)puVar1[0x18] != (code *)0x0)) {
    (*(code *)puVar1[0x18])(puVar1,*(undefined8 *)(param_2 + 8));
  }
  return;
}



// FUNCTION 145174e50 FUN_145174e50 body=53 status=ok
// SIG undefined FUN_145174e50(void)

void FUN_145174e50(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0xcf < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0x19],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145174e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145174e90 FUN_145174e90 body=100 status=ok
// SIG undefined FUN_145174e90(void)

void FUN_145174e90(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((((0xd7 < *puVar1) && ((code *)puVar1[0x1a] != (code *)0x0)) &&
      (lVar2 = *(longlong *)(param_2 + 8), lVar2 != 0)) && (*(longlong *)(lVar2 + 8) != 0)) {
    (*(code *)puVar1[0x1a])(puVar1,lVar2,*(undefined8 *)(param_3 + 8));
  }
  return;
}



// FUNCTION 145174f00 FUN_145174f00 body=102 status=ok
// SIG undefined FUN_145174f00(void)

undefined8 *
FUN_145174f00(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0xdf < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1b], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_145172390(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145174f70 FUN_145174f70 body=129 status=ok
// SIG undefined FUN_145174f70(void)

undefined8 * FUN_145174f70(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0xe8) || (puVar1[0x1c] == 0)) {
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    uVar2 = (*(code *)puVar1[0x1c])(puVar1);
    puVar3 = param_2 + 1;
    if (param_2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    *puVar3 = 0;
    param_2[2] = 0;
    param_2[1] = uVar2;
  }
  *param_2 = &PTR_FUN_14ba6c738;
  return param_2;
}



// FUNCTION 145175000 FUN_145175000 body=60 status=ok
// SIG undefined FUN_145175000(void)

bool FUN_145175000(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0xef < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0x1d], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145175040 FUN_145175040 body=64 status=ok
// SIG undefined FUN_145175040(void)

undefined8 * FUN_145175040(undefined8 *param_1,ulonglong param_2)

{
  FUN_145174330();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145175080 FUN_145175080 body=156 status=ok
// SIG undefined FUN_145175080(void)

undefined8 FUN_145175080(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(lVar1 + -0x10) == DAT_14c7441cc) {
    pcVar2 = *(code **)(*(longlong *)(lVar1 + -8) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(lVar1 + -8);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  else {
    uVar3 = FUN_1453f1540(*(int *)(lVar1 + -0x10),lVar1,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar3;
}



// FUNCTION 145175120 FUN_145175120 body=48 status=ok
// SIG undefined FUN_145175120(void)

void FUN_145175120(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



// FUNCTION 1451751a0 FUN_1451751a0 body=125 status=ok
// SIG undefined FUN_1451751a0(void)

longlong FUN_1451751a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else if ((int)plVar1[-2] == DAT_14c73021c) {
    if (*(code **)(plVar1[-1] + 8) != (code *)0x0) {
      (**(code **)(plVar1[-1] + 8))();
    }
    lVar2 = plVar1[-1];
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 8))();
    }
  }
  else {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 145175220 FUN_145175220 body=40 status=ok
// SIG undefined FUN_145175220(void)

int FUN_145175220(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -8) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145175250 FUN_145175250 body=104 status=ok
// SIG undefined FUN_145175250(void)

undefined8
FUN_145175250(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if (*(code **)(param_1[-1] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-1] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -2 != (undefined8 *)0x0) {
      *param_1 = &PTR_FUN_149c395c8;
      FUN_14516fec0();
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -2,0x20,param_3,param_4,uVar3);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1451752c0 FUN_1451752c0 body=34 status=ok
// SIG undefined FUN_1451752c0(void)

bool FUN_1451752c0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1451752f0 FUN_1451752f0 body=38 status=ok
// SIG undefined FUN_1451752f0(void)

bool FUN_1451752f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -8);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 145175320 FUN_145175320 body=21 status=ok
// SIG undefined FUN_145175320(void)

undefined8 * FUN_145175320(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_149c395c8;
  return param_1;
}



// FUNCTION 145175340 FUN_145175340 body=222 status=ok
// SIG undefined FUN_145175340(void)

undefined8 * FUN_145175340(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x30) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 145175420 FUN_145175420 body=222 status=ok
// SIG undefined FUN_145175420(void)

undefined8 * FUN_145175420(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x38) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 145175500 FUN_145175500 body=96 status=ok
// SIG undefined FUN_145175500(void)

undefined8 *
FUN_145175500(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d73c30(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145175560 FUN_145175560 body=157 status=ok
// SIG undefined FUN_145175560(void)

ulonglong FUN_145175560(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *local_res8;
  longlong *local_res10;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res10 = param_2;
  uVar3 = FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if ((*puVar1 < 0x48) || (puVar1[8] == 0)) {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*(longlong *)*param_2 + 8))();
    }
  }
  else {
    local_res8 = (undefined8 *)*param_2;
    if (local_res8 != (undefined8 *)0x0) {
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)();
      }
      uVar4 = FUN_1451751a0(&local_res8);
      iVar2 = (*(code *)puVar1[8])(puVar1,uVar4,param_3,param_4,uVar5);
      if ((longlong *)*param_2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_2 + 8))();
      }
      return (ulonglong)(iVar2 != 0);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 145175600 FUN_145175600 body=96 status=ok
// SIG undefined FUN_145175600(void)

undefined8 *
FUN_145175600(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_145175790(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145175660 FUN_145175660 body=96 status=ok
// SIG undefined FUN_145175660(void)

undefined8 *
FUN_145175660(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x57 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[10], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_144d7a930(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1451756c0 FUN_1451756c0 body=54 status=ok
// SIG undefined FUN_1451756c0(void)

bool FUN_1451756c0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x5f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[0xb], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145175700 FUN_145175700 body=47 status=ok
// SIG undefined FUN_145175700(void)

void FUN_145175700(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x67 < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[0xc],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145175726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145175730 FUN_145175730 body=84 status=ok
// SIG undefined FUN_145175730(void)

undefined8 *
FUN_145175730(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149c395c8;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 145175790 FUN_145175790 body=188 status=ok
// SIG undefined FUN_145175790(void)

longlong * FUN_145175790(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else if (*(int *)(param_2 + -0x18) == DAT_14c730228) {
    lVar1 = *(longlong *)(param_2 + -0x10);
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1))();
    }
    (**(code **)(**(longlong **)(param_2 + -8) + 8))();
    *param_1 = lVar1;
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1))();
      (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + 8 + lVar1) + 8))
                ();
    }
  }
  else {
    FUN_145176780(param_1,*(int *)(param_2 + -0x18),param_2,param_4,0,0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 145175850 FUN_145175850 body=43 status=ok
// SIG undefined FUN_145175850(void)

undefined8 * FUN_145175850(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c39748;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 145175880 FUN_145175880 body=43 status=ok
// SIG undefined FUN_145175880(void)

undefined8 * FUN_145175880(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c39748;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1451758b0 FUN_1451758b0 body=48 status=ok
// SIG undefined FUN_1451758b0(void)

longlong FUN_1451758b0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1451758e0 FUN_1451758e0 body=40 status=ok
// SIG undefined FUN_1451758e0(void)

int FUN_1451758e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145175910 FUN_145175910 body=105 status=ok
// SIG undefined FUN_145175910(void)

undefined8 FUN_145175910(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_145175af0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145175980 FUN_145175980 body=34 status=ok
// SIG undefined FUN_145175980(void)

bool FUN_145175980(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 1451759b0 FUN_1451759b0 body=38 status=ok
// SIG undefined FUN_1451759b0(void)

bool FUN_1451759b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 1451759e0 FUN_1451759e0 body=85 status=ok
// SIG undefined FUN_1451759e0(void)

longlong FUN_1451759e0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c397d0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c39820;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145175a40 FUN_145175a40 body=167 status=ok
// SIG undefined FUN_145175a40(void)

undefined8 * FUN_145175a40(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149c398c0;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149c39758;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149c397a8;
  *param_1 = &PTR__purecall_149c397d0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c39820;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149c39848;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149c39898;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 145175af0 FUN_145175af0 body=124 status=ok
// SIG undefined FUN_145175af0(void)

void FUN_145175af0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149c39848;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c39898;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149c397d0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149c39820;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145175b70 FUN_145175b70 body=54 status=ok
// SIG undefined FUN_145175b70(void)

bool FUN_145175b70(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  FUN_14516fec0();
  if ((0x2f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)();
    return iVar2 != 0;
  }
  return false;
}



// FUNCTION 145175bb0 FUN_145175bb0 body=222 status=ok
// SIG undefined FUN_145175bb0(void)

undefined8 * FUN_145175bb0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x38) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 145175c90 FUN_145175c90 body=222 status=ok
// SIG undefined FUN_145175c90(void)

undefined8 * FUN_145175c90(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x40) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 145175d70 FUN_145175d70 body=222 status=ok
// SIG undefined FUN_145175d70(void)

undefined8 * FUN_145175d70(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x48) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[8], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 145175e50 FUN_145175e50 body=222 status=ok
// SIG undefined FUN_145175e50(void)

undefined8 * FUN_145175e50(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x50) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[9], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}


