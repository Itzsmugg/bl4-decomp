// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1486df8ea FUN_1486df8ea body=210 status=ok
// SIG undefined FUN_1486df8ea(void)

void FUN_1486df8ea(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x38))(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486df9be FUN_1486df9be body=71 status=ok
// SIG undefined FUN_1486df9be(void)

undefined8 * FUN_1486df9be(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1486dfa20 FUN_1486dfa20 body=139 status=ok
// SIG undefined FUN_1486dfa20(void)

void FUN_1486dfa20(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487c58ac(param_1,&local_28);
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



// FUNCTION 1486dfaba FUN_1486dfaba body=218 status=ok
// SIG undefined FUN_1486dfaba(void)

void FUN_1486dfaba(longlong param_1,longlong param_2,void **param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x418);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x410);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1486e150e(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 << 3);
  }
  if (&local_38 == param_3) {
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dfb96 FUN_1486dfb96 body=47 status=ok
// SIG undefined FUN_1486dfb96(void)

void FUN_1486dfb96(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb61dd0);
                    /* WARNING: Could not recover jumptable at 0x0001486dfbc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1486dfbc6 FUN_1486dfbc6 body=47 status=ok
// SIG undefined FUN_1486dfbc6(void)

void FUN_1486dfbc6(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb61de0);
                    /* WARNING: Could not recover jumptable at 0x0001486dfbf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1486dfbf6 FUN_1486dfbf6 body=92 status=ok
// SIG undefined FUN_1486dfbf6(void)

void FUN_1486dfbf6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb61df0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dfc54 FUN_1486dfc54 body=92 status=ok
// SIG undefined FUN_1486dfc54(void)

void FUN_1486dfc54(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb61e00);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dfcd0 FUN_1486dfcd0 body=197 status=ok
// SIG undefined FUN_1486dfcd0(void)

void FUN_1486dfcd0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb61e38) {
    FUN_144b3d300(&DAT_14cb61e38);
    if (DAT_14cb61e38 == -1) {
      FUN_1446f470e(&DAT_14cb61e30,L"PlayerStateArray",1);
      _Init_thread_footer(&DAT_14cb61e38);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb61e44) {
    FUN_144b3d300(&DAT_14cb61e44);
    if (DAT_14cb61e44 == -1) {
      FUN_1446f470e(&DAT_14cb61e3c,L"StableIndex",1);
      _Init_thread_footer(&DAT_14cb61e44);
      return;
    }
  }
  return;
}



// FUNCTION 1486dfda6 FUN_1486dfda6 body=190 status=ok
// SIG undefined FUN_1486dfda6(void)

void FUN_1486dfda6(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [24];
  longlong local_68;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144a63cba(local_80);
  FUN_144a63cba(local_58);
  FUN_1447715ec(local_80,param_2);
  FUN_1447715ec(local_58,param_3);
  uVar1 = FUN_14477b072(param_1,DAT_14cb61ea8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_80);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dfe66 FUN_1486dfe66 body=288 status=ok
// SIG undefined FUN_1486dfe66(void)

void FUN_1486dfe66(longlong *param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a63cba(local_40);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  FUN_144a63cba(local_68);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x708))(param_1,local_40,local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dffe4 FUN_1486dffe4 body=158 status=ok
// SIG undefined FUN_1486dffe4(void)

void FUN_1486dffe4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x740))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e0084 FUN_1486e0084 body=190 status=ok
// SIG undefined FUN_1486e0084(void)

void FUN_1486e0084(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [24];
  longlong local_68;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144a63cba(local_80);
  FUN_144a63cba(local_58);
  FUN_1447715ec(local_80,param_2);
  FUN_1447715ec(local_58,param_3);
  uVar1 = FUN_14477b072(param_1,DAT_14cb61ec8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_80);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e0144 FUN_1486e0144 body=288 status=ok
// SIG undefined FUN_1486e0144(void)

void FUN_1486e0144(longlong *param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a63cba(local_40);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  FUN_144a63cba(local_68);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x710))(param_1,local_40,local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e0266 FUN_1486e0266 body=92 status=ok
// SIG undefined FUN_1486e0266(void)

void FUN_1486e0266(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb61ed8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e02c4 FUN_1486e02c4 body=92 status=ok
// SIG undefined FUN_1486e02c4(void)

void FUN_1486e02c4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb61ee8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e034e FUN_1486e034e body=183 status=ok
// SIG undefined FUN_1486e034e(void)

void FUN_1486e034e(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_14a5af930;
  local_38 = 0;
  uStack_30 = 0;
  FUN_141238a10(&local_58);
  uVar1 = FUN_14477b072(param_1,DAT_14cb61f30);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
  local_58 = &PTR_FUN_14a5af930;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_58 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e0406 FUN_1486e0406 body=278 status=ok
// SIG undefined FUN_1486e0406(void)

void FUN_1486e0406(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_50 = &PTR_FUN_14a5af930;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x730))(param_1,&local_50);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSetPlatformUniqueId_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x738))(param_1,&local_50);
  }
  local_50 = &PTR_FUN_14a5af930;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])(&local_48);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e051e FUN_1486e051e body=91 status=ok
// SIG undefined FUN_1486e051e(void)

void FUN_1486e051e(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb61f40);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e057e FUN_1486e057e body=203 status=ok
// SIG undefined FUN_1486e057e(void)

void FUN_1486e057e(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1,local_24 != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerSetRealtimeGameplayStatus_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x728))(param_1,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e0656 FUN_1486e0656 body=156 status=ok
// SIG undefined FUN_1486e0656(void)

void FUN_1486e0656(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_143e09728(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e0728 FUN_1486e0728 body=95 status=ok
// SIG undefined FUN_1486e0728(void)

void FUN_1486e0728(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_1c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb62120);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e0788 FUN_1486e0788 body=239 status=ok
// SIG undefined FUN_1486e0788(void)

void FUN_1486e0788(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b8))(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e0878 FUN_1486e0878 body=47 status=ok
// SIG undefined FUN_1486e0878(void)

void FUN_1486e0878(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb62130);
                    /* WARNING: Could not recover jumptable at 0x0001486e08a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1486e08c2 FUN_1486e08c2 body=91 status=ok
// SIG undefined FUN_1486e08c2(void)

void FUN_1486e08c2(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb62140);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e091e FUN_1486e091e body=158 status=ok
// SIG undefined FUN_1486e091e(void)

void FUN_1486e091e(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2a8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e09be FUN_1486e09be body=47 status=ok
// SIG undefined FUN_1486e09be(void)

void FUN_1486e09be(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb62150);
                    /* WARNING: Could not recover jumptable at 0x0001486e09ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1486e0a3c FUN_1486e0a3c body=92 status=ok
// SIG undefined FUN_1486e0a3c(void)

void FUN_1486e0a3c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb622d0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e0a9a FUN_1486e0a9a body=160 status=ok
// SIG undefined FUN_1486e0a9a(void)

void FUN_1486e0a9a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e0b50 FUN_1486e0b50 body=48 status=ok
// SIG undefined FUN_1486e0b50(void)

longlong FUN_1486e0b50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_145ea4ae4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486e0c10 FUN_1486e0c10 body=59 status=ok
// SIG undefined FUN_1486e0c10(void)

undefined8 FUN_1486e0c10(longlong *param_1)

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



// FUNCTION 1486e0cac FUN_1486e0cac body=55 status=ok
// SIG undefined FUN_1486e0cac(void)

void FUN_1486e0cac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61d08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61d08 = FUN_140002ddd(FUN_1464f56bf,uVar1,L"GbxPlayerControllerContextResolver");
  }
  return;
}



// FUNCTION 1486e0d04 FUN_1486e0d04 body=48 status=ok
// SIG undefined FUN_1486e0d04(void)

void FUN_1486e0d04(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486e0d4a FUN_1486e0d4a body=83 status=ok
// SIG undefined FUN_1486e0d4a(void)

undefined8 FUN_1486e0d4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      FUN_1486e0e62(param_2 + -0x10,param_3 + -0x10);
      FUN_1486e0eb2(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e0dc6 FUN_1486e0dc6 body=59 status=ok
// SIG undefined FUN_1486e0dc6(void)

undefined8 FUN_1486e0dc6(longlong *param_1)

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



// FUNCTION 1486e0e62 FUN_1486e0e62 body=79 status=ok
// SIG undefined FUN_1486e0e62(void)

undefined8 * FUN_1486e0e62(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486e0f02(param_1,iVar1);
      FUN_1486e0f75(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486e0eb2 FUN_1486e0eb2 body=79 status=ok
// SIG undefined FUN_1486e0eb2(void)

undefined8 * FUN_1486e0eb2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486e0faa(param_1,iVar1);
      FUN_1486e100c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486e0f02 FUN_1486e0f02 body=115 status=ok
// SIG undefined FUN_1486e0f02(void)

void FUN_1486e0f02(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486e0f75 FUN_1486e0f75 body=52 status=ok
// SIG undefined FUN_1486e0f75(void)

void FUN_1486e0f75(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486df9be(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486e0faa FUN_1486e0faa body=98 status=ok
// SIG undefined FUN_1486e0faa(void)

void FUN_1486e0faa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486e100c FUN_1486e100c body=96 status=ok
// SIG undefined FUN_1486e100c(void)

void FUN_1486e100c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486e106e FUN_1486e106e body=52 status=ok
// SIG undefined FUN_1486e106e(void)

void FUN_1486e106e(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1486e10f6 FUN_1486e10f6 body=79 status=ok
// SIG undefined FUN_1486e10f6(void)

undefined8 FUN_1486e10f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145c8b2a6(param_2,param_3);
    FUN_1486e120e(param_2 + 0x18,param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    *(undefined1 *)(param_2 + 0x34) = *(undefined1 *)(param_3 + 0x34);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 1486e116e FUN_1486e116e body=59 status=ok
// SIG undefined FUN_1486e116e(void)

undefined8 FUN_1486e116e(longlong *param_1)

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



// FUNCTION 1486e120e FUN_1486e120e body=84 status=ok
// SIG undefined FUN_1486e120e(void)

longlong * FUN_1486e120e(longlong *param_1,longlong *param_2)

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



// FUNCTION 1486e12c8 FUN_1486e12c8 body=85 status=ok
// SIG undefined FUN_1486e12c8(void)

undefined8 FUN_1486e12c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x18 + lVar1) = *(undefined4 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e1346 FUN_1486e1346 body=59 status=ok
// SIG undefined FUN_1486e1346(void)

undefined8 FUN_1486e1346(longlong *param_1)

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



// FUNCTION 1486e138c FUN_1486e138c body=43 status=ok
// SIG undefined FUN_1486e138c(void)

void FUN_1486e138c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1486e140a FUN_1486e140a body=52 status=ok
// SIG undefined FUN_1486e140a(void)

undefined8 * FUN_1486e140a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486e143e FUN_1486e143e body=55 status=ok
// SIG undefined FUN_1486e143e(void)

void FUN_1486e143e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61db8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61db8 = FUN_140002ddd(FUN_1464f597e,uVar1,L"GbxPlayerGroupDef");
  }
  return;
}



// FUNCTION 1486e1476 FUN_1486e1476 body=104 status=ok
// SIG undefined FUN_1486e1476(void)

undefined8 FUN_1486e1476(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14892d0fe(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e14e0 FUN_1486e14e0 body=28 status=ok
// SIG undefined FUN_1486e14e0(void)

undefined8 FUN_1486e14e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486e150e FUN_1486e150e body=98 status=ok
// SIG undefined FUN_1486e150e(void)

void FUN_1486e150e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486e15ca FUN_1486e15ca body=59 status=ok
// SIG undefined FUN_1486e15ca(void)

undefined8 FUN_1486e15ca(longlong *param_1)

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



// FUNCTION 1486e166a FUN_1486e166a body=55 status=ok
// SIG undefined FUN_1486e166a(void)

void FUN_1486e166a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61fc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61fc8 = FUN_140002ddd(FUN_1464f6297,uVar1,L"GbxPlayerStateContextResolver");
  }
  return;
}



// FUNCTION 1486e16fc FUN_1486e16fc body=59 status=ok
// SIG undefined FUN_1486e16fc(void)

undefined8 FUN_1486e16fc(longlong *param_1)

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



// FUNCTION 1486e1798 FUN_1486e1798 body=55 status=ok
// SIG undefined FUN_1486e1798(void)

void FUN_1486e1798(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62010 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62010 = FUN_140002ddd(FUN_1464f6431,uVar1,L"GbxPrimaryCharacterContextResolver");
  }
  return;
}



// FUNCTION 1486e17d0 FUN_1486e17d0 body=63 status=ok
// SIG undefined FUN_1486e17d0(void)

void FUN_1486e17d0(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 0;
  *param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  FUN_144a7a8f6(param_2 + 3);
  *(undefined4 *)((longlong)param_2 + 0x24) = 0xffffffff;
  FUN_1447a97f4(param_2 + 5,&DAT_14c9485f0);
  return;
}



// FUNCTION 1486e185c FUN_1486e185c body=59 status=ok
// SIG undefined FUN_1486e185c(void)

undefined8 FUN_1486e185c(longlong *param_1)

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



// FUNCTION 1486e18a2 FUN_1486e18a2 body=40 status=ok
// SIG undefined FUN_1486e18a2(void)

void FUN_1486e18a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1486e197a FUN_1486e197a body=59 status=ok
// SIG undefined FUN_1486e197a(void)

undefined8 FUN_1486e197a(longlong *param_1)

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



// FUNCTION 1486e19c0 FUN_1486e19c0 body=38 status=ok
// SIG undefined FUN_1486e19c0(void)

void FUN_1486e19c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1486e1a54 FUN_1486e1a54 body=63 status=ok
// SIG undefined FUN_1486e1a54(void)

undefined1 FUN_1486e1a54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486e1c6c(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 1486e1abc FUN_1486e1abc body=59 status=ok
// SIG undefined FUN_1486e1abc(void)

undefined8 FUN_1486e1abc(longlong *param_1)

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



// FUNCTION 1486e1b08 FUN_1486e1b08 body=38 status=ok
// SIG undefined FUN_1486e1b08(void)

void FUN_1486e1b08(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_140e8adf6(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 1486e1b68 FUN_1486e1b68 body=260 status=ok
// SIG undefined FUN_1486e1b68(void)

undefined8 * FUN_1486e1b68(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b1e5a50;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  lVar1 = FUN_140fd591a();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = *(undefined8 *)(lVar1 + 0x20);
  uVar2 = FUN_14477b664(*(undefined8 *)(lVar1 + 0x28));
  uVar2 = FUN_14477b664(uVar2);
  param_1[5] = uVar2;
  param_1[6] = *(undefined8 *)(lVar1 + 0x30);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 1486e1c6c FUN_1486e1c6c body=163 status=ok
// SIG undefined FUN_1486e1c6c(void)

longlong FUN_1486e1c6c(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_1486b7d4c(param_1 + 0x20,param_2 + 0x20);
  FUN_1401f3db8(param_1 + 0x38,param_2 + 0x38);
  FUN_1401f3db8(param_1 + 0x50,param_2 + 0x50);
  FUN_1486e1d10(param_1 + 0x68,param_2 + 0x68);
  FUN_1486e1f3e(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined2 *)(param_1 + 0x108) = *(undefined2 *)(param_2 + 0x108);
  FUN_14124fed2(param_1 + 0x110,param_2 + 0x110);
  FUN_1403de7ba(param_1 + 0x128,param_2 + 0x128);
  return param_1;
}



// FUNCTION 1486e1d10 FUN_1486e1d10 body=122 status=ok
// SIG undefined FUN_1486e1d10(void)

longlong FUN_1486e1d10(longlong param_1,longlong param_2)

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
    FUN_1486e1d8a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486e1d8a FUN_1486e1d8a body=264 status=ok
// SIG undefined FUN_1486e1d8a(void)

longlong * FUN_1486e1d8a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e8b2a6(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140f20a84(param_1);
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
          FUN_1486e1e92(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x88 + lVar6) = *(undefined8 *)(lVar2 + 0x88 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x90;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1486e1e92 FUN_1486e1e92 body=100 status=ok
// SIG undefined FUN_1486e1e92(void)

undefined4 * FUN_1486e1e92(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1401f3da4(param_1 + 6,param_2 + 6);
  FUN_1401f3da4(param_1 + 0xc,param_2 + 0xc);
  FUN_1486e1ef6(param_1 + 0x12,param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  FUN_1403de7ba(param_1 + 0x18,param_2 + 0x18);
  return param_1;
}



// FUNCTION 1486e1ef6 FUN_1486e1ef6 body=71 status=ok
// SIG undefined FUN_1486e1ef6(void)

undefined8 * FUN_1486e1ef6(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1486e1f3e FUN_1486e1f3e body=122 status=ok
// SIG undefined FUN_1486e1f3e(void)

longlong FUN_1486e1f3e(longlong param_1,longlong param_2)

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
    FUN_1486e1fb8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486e1fb8 FUN_1486e1fb8 body=273 status=ok
// SIG undefined FUN_1486e1fb8(void)

longlong * FUN_1486e1fb8(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e8afc0(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_147249674(param_1);
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
          FUN_1486e20ca(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x118 + lVar6) = *(undefined8 *)(lVar2 + 0x118 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x120;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1486e20ca FUN_1486e20ca body=342 status=ok
// SIG undefined FUN_1486e20ca(void)

undefined8 * FUN_1486e20ca(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  FUN_1401f3da4(param_1 + 3,param_2 + 3);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  FUN_144a7f96e(param_1 + 7,param_2 + 7);
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  param_1[0xc] = param_2[0xc];
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  FUN_144a7f96e(param_1 + 0x12,param_2 + 0x12);
  uVar2 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar2;
  param_1[0x17] = param_2[0x17];
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  FUN_1486e1ef6(param_1 + 0x1b,param_2 + 0x1b);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_1403de7ba(param_1 + 0x1e,param_2 + 0x1e);
  return param_1;
}



// FUNCTION 1486e2290 FUN_1486e2290 body=131 status=ok
// SIG undefined FUN_1486e2290(void)

undefined8 FUN_1486e2290(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      *(undefined8 *)(param_2 + lVar1 + 0x18) = *(undefined8 *)(param_3 + lVar1 + 0x18);
      FUN_1486e23ea(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      FUN_1486e243a(param_2 + lVar1 + 0x30,param_3 + lVar1 + 0x30);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e233c FUN_1486e233c body=59 status=ok
// SIG undefined FUN_1486e233c(void)

undefined8 FUN_1486e233c(longlong *param_1)

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



// FUNCTION 1486e2382 FUN_1486e2382 body=34 status=ok
// SIG undefined FUN_1486e2382(void)

void FUN_1486e2382(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1457eb384(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1486e23ea FUN_1486e23ea body=79 status=ok
// SIG undefined FUN_1486e23ea(void)

undefined8 * FUN_1486e23ea(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486e248a(param_1,iVar1);
      FUN_1486e24fd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486e243a FUN_1486e243a body=79 status=ok
// SIG undefined FUN_1486e243a(void)

undefined8 * FUN_1486e243a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486e2532(param_1,iVar1);
      FUN_1486e25a5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486e248a FUN_1486e248a body=115 status=ok
// SIG undefined FUN_1486e248a(void)

void FUN_1486e248a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486e24fd FUN_1486e24fd body=52 status=ok
// SIG undefined FUN_1486e24fd(void)

void FUN_1486e24fd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_141855aec(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486e2532 FUN_1486e2532 body=115 status=ok
// SIG undefined FUN_1486e2532(void)

void FUN_1486e2532(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486e25a5 FUN_1486e25a5 body=52 status=ok
// SIG undefined FUN_1486e25a5(void)

void FUN_1486e25a5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486e1ef6(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486e2654 FUN_1486e2654 body=59 status=ok
// SIG undefined FUN_1486e2654(void)

undefined8 FUN_1486e2654(longlong *param_1)

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



// FUNCTION 1486e26f4 FUN_1486e26f4 body=29 status=ok
// SIG undefined FUN_1486e26f4(void)

undefined8 FUN_1486e26f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486e2712 FUN_1486e2712 body=55 status=ok
// SIG undefined FUN_1486e2712(void)

void FUN_1486e2712(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62230 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62230 = FUN_140002ddd(FUN_1464f6c81,uVar1,L"GbxProgressionBehaviorData");
  }
  return;
}



// FUNCTION 1486e274a FUN_1486e274a body=54 status=ok
// SIG undefined FUN_1486e274a(void)

undefined8 * FUN_1486e274a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Progression/GbxProgressionBehaviorData.h"
                ,0x20,L"Pure virtual not implemented (%s)",
                L"FGbxProgressionBehaviorData::DoCreateProgressionBehavior");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1486e27ea FUN_1486e27ea body=59 status=ok
// SIG undefined FUN_1486e27ea(void)

undefined8 FUN_1486e27ea(longlong *param_1)

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



// FUNCTION 1486e288a FUN_1486e288a body=29 status=ok
// SIG undefined FUN_1486e288a(void)

undefined8 FUN_1486e288a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486e28a8 FUN_1486e28a8 body=55 status=ok
// SIG undefined FUN_1486e28a8(void)

void FUN_1486e28a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62248 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62248 = FUN_140002ddd(FUN_1464f6d17,uVar1,L"GbxProgressionCommand");
  }
  return;
}



// FUNCTION 1486e28e0 FUN_1486e28e0 body=42 status=ok
// SIG undefined FUN_1486e28e0(void)

undefined8 FUN_1486e28e0(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Progression/Commands/GbxProgressionCommand.h"
                ,0x13,L"Pure virtual not implemented (%s)",L"FGbxProgressionCommand::ExecuteCommand"
               );
  return 0;
}



// FUNCTION 1486e290a FUN_1486e290a body=32 status=ok
// SIG undefined FUN_1486e290a(void)

undefined8 FUN_1486e290a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1486e294a FUN_1486e294a body=54 status=ok
// SIG undefined FUN_1486e294a(void)

undefined1 FUN_1486e294a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486e2a38(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1486e29a8 FUN_1486e29a8 body=59 status=ok
// SIG undefined FUN_1486e29a8(void)

undefined8 FUN_1486e29a8(longlong *param_1)

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



// FUNCTION 1486e2a38 FUN_1486e2a38 body=93 status=ok
// SIG undefined FUN_1486e2a38(void)

undefined8 * FUN_1486e2a38(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1408f1035(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486e2a96(param_1,iVar1);
      FUN_1486e2b09(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486e2a96 FUN_1486e2a96 body=115 status=ok
// SIG undefined FUN_1486e2a96(void)

void FUN_1486e2a96(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486e2b09 FUN_1486e2b09 body=52 status=ok
// SIG undefined FUN_1486e2b09(void)

void FUN_1486e2b09(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486e2b3e FUN_1486e2b3e body=48 status=ok
// SIG undefined FUN_1486e2b3e(void)

void FUN_1486e2b3e(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1408f1035(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1486e2bac FUN_1486e2bac body=54 status=ok
// SIG undefined FUN_1486e2bac(void)

undefined1 FUN_1486e2bac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486e2d0c(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1486e2c0a FUN_1486e2c0a body=59 status=ok
// SIG undefined FUN_1486e2c0a(void)

undefined8 FUN_1486e2c0a(longlong *param_1)

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



// FUNCTION 1486e2c50 FUN_1486e2c50 body=32 status=ok
// SIG undefined FUN_1486e2c50(void)

void FUN_1486e2c50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1486e2cb6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1486e2cb6 FUN_1486e2cb6 body=85 status=ok
// SIG undefined FUN_1486e2cb6(void)

void FUN_1486e2cb6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1e6370;
  FUN_140ff24c0(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1486e2d0c FUN_1486e2d0c body=77 status=ok
// SIG undefined FUN_1486e2d0c(void)

longlong FUN_1486e2d0c(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_1486b7da0(param_1 + 0x18,param_2 + 0x18);
  FUN_1486e23ea(param_1 + 0x30,param_2 + 0x30);
  FUN_1486e2d5a(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 1486e2d5a FUN_1486e2d5a body=93 status=ok
// SIG undefined FUN_1486e2d5a(void)

undefined8 * FUN_1486e2d5a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ff24c0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486e2db8(param_1,iVar1);
      FUN_1486e2e1a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486e2db8 FUN_1486e2db8 body=98 status=ok
// SIG undefined FUN_1486e2db8(void)

void FUN_1486e2db8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486e2e1a FUN_1486e2e1a body=52 status=ok
// SIG undefined FUN_1486e2e1a(void)

void FUN_1486e2e1a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486e2e4e(param_1,param_2);
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return;
}



// FUNCTION 1486e2e4e FUN_1486e2e4e body=77 status=ok
// SIG undefined FUN_1486e2e4e(void)

undefined8 * FUN_1486e2e4e(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1486e2a96(param_1,iVar1,0);
    FUN_1486e2b09(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1486e2e9c FUN_1486e2e9c body=104 status=ok
// SIG undefined FUN_1486e2e9c(void)

undefined8 FUN_1486e2e9c(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14893237c(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e2f06 FUN_1486e2f06 body=28 status=ok
// SIG undefined FUN_1486e2f06(void)

undefined8 FUN_1486e2f06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486e2f76 FUN_1486e2f76 body=103 status=ok
// SIG undefined FUN_1486e2f76(void)

undefined8 FUN_1486e2f76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1418557ae(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(param_2 + 0x30 + lVar6) = *(undefined8 *)(param_3 + 0x30 + lVar6);
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e3006 FUN_1486e3006 body=59 status=ok
// SIG undefined FUN_1486e3006(void)

undefined8 FUN_1486e3006(longlong *param_1)

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



// FUNCTION 1486e309a FUN_1486e309a body=55 status=ok
// SIG undefined FUN_1486e309a(void)

void FUN_1486e309a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb622a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb622a8 = FUN_140002ddd(FUN_1464f6ed5,uVar1,L"GbxProgressionCommand_ActivateNode");
  }
  return;
}



// FUNCTION 1486e3106 FUN_1486e3106 body=95 status=ok
// SIG undefined FUN_1486e3106(void)

undefined8 FUN_1486e3106(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1418557ae(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      *(undefined4 *)(param_2 + 0x28 + lVar1) = *(undefined4 *)(param_3 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e318e FUN_1486e318e body=59 status=ok
// SIG undefined FUN_1486e318e(void)

undefined8 FUN_1486e318e(longlong *param_1)

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



// FUNCTION 1486e3222 FUN_1486e3222 body=55 status=ok
// SIG undefined FUN_1486e3222(void)

void FUN_1486e3222(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb622c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb622c0 = FUN_140002ddd(FUN_1464f6f6b,uVar1,L"GbxProgressionCommand_SpendPoints");
  }
  return;
}



// FUNCTION 1486e32ac FUN_1486e32ac body=88 status=ok
// SIG undefined FUN_1486e32ac(void)

undefined1 FUN_1486e32ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_141289ada(param_2 + -0x20,param_3 + -0x20);
      FUN_1486e3414(param_2 + -0x10,param_3 + -0x10);
      FUN_1486e3464(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e332c FUN_1486e332c body=59 status=ok
// SIG undefined FUN_1486e332c(void)

undefined8 FUN_1486e332c(longlong *param_1)

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



// FUNCTION 1486e3372 FUN_1486e3372 body=34 status=ok
// SIG undefined FUN_1486e3372(void)

void FUN_1486e3372(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14597405e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1486e33da FUN_1486e33da body=57 status=ok
// SIG undefined FUN_1486e33da(void)

void FUN_1486e33da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62310 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62310 = FUN_140002ddd(FUN_1464f70bd,uVar1,L"GbxProgressionDef");
  }
  return;
}



// FUNCTION 1486e3414 FUN_1486e3414 body=79 status=ok
// SIG undefined FUN_1486e3414(void)

undefined8 * FUN_1486e3414(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486e34c4(param_1,iVar1);
      FUN_1486e3537(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486e3464 FUN_1486e3464 body=95 status=ok
// SIG undefined FUN_1486e3464(void)

undefined8 * FUN_1486e3464(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459740b3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486e356c(param_1,iVar1);
      FUN_1486e35df(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486e34c4 FUN_1486e34c4 body=115 status=ok
// SIG undefined FUN_1486e34c4(void)

void FUN_1486e34c4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486e3537 FUN_1486e3537 body=52 status=ok
// SIG undefined FUN_1486e3537(void)

void FUN_1486e3537(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1457a6bbc(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486e356c FUN_1486e356c body=115 status=ok
// SIG undefined FUN_1486e356c(void)

void FUN_1486e356c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486e35df FUN_1486e35df body=52 status=ok
// SIG undefined FUN_1486e35df(void)

void FUN_1486e35df(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486e3614 FUN_1486e3614 body=28 status=ok
// SIG undefined FUN_1486e3614(void)

undefined8 FUN_1486e3614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486e3688 FUN_1486e3688 body=59 status=ok
// SIG undefined FUN_1486e3688(void)

undefined8 FUN_1486e3688(longlong *param_1)

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



// FUNCTION 1486e36d4 FUN_1486e36d4 body=38 status=ok
// SIG undefined FUN_1486e36d4(void)

void FUN_1486e36d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_140f5e41a(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 1486e3748 FUN_1486e3748 body=98 status=ok
// SIG undefined FUN_1486e3748(void)

void FUN_1486e3748(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486e37b2 FUN_1486e37b2 body=302 status=ok
// SIG undefined FUN_1486e37b2(void)

void FUN_1486e37b2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_1489356fc(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e38e8 FUN_1486e38e8 body=288 status=ok
// SIG undefined FUN_1486e38e8(void)

void FUN_1486e38e8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_1486e3a0a(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e3a0a FUN_1486e3a0a body=117 status=ok
// SIG undefined FUN_1486e3a0a(void)

void FUN_1486e3a0a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_1;
  uVar1 = FUN_14477b664(param_1[1]);
  local_38 = FUN_14477b664(uVar1);
  local_30 = param_1[2];
  local_28 = param_1[3];
  FUN_1489356fc(&local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e3a80 FUN_1486e3a80 body=302 status=ok
// SIG undefined FUN_1486e3a80(void)

void FUN_1486e3a80(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_148935724(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e3bb0 FUN_1486e3bb0 body=288 status=ok
// SIG undefined FUN_1486e3bb0(void)

void FUN_1486e3bb0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_1486e3cd2(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e3cd2 FUN_1486e3cd2 body=117 status=ok
// SIG undefined FUN_1486e3cd2(void)

void FUN_1486e3cd2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_1;
  uVar1 = FUN_14477b664(param_1[1]);
  local_38 = FUN_14477b664(uVar1);
  local_30 = param_1[2];
  local_28 = param_1[3];
  FUN_148935724(&local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e3d48 FUN_1486e3d48 body=302 status=ok
// SIG undefined FUN_1486e3d48(void)

void FUN_1486e3d48(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_14893569c(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e3e78 FUN_1486e3e78 body=288 status=ok
// SIG undefined FUN_1486e3e78(void)

void FUN_1486e3e78(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_1486e3f9a(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e3f9a FUN_1486e3f9a body=117 status=ok
// SIG undefined FUN_1486e3f9a(void)

void FUN_1486e3f9a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_1;
  uVar1 = FUN_14477b664(param_1[1]);
  local_38 = FUN_14477b664(uVar1);
  local_30 = param_1[2];
  local_28 = param_1[3];
  FUN_14893569c(&local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e4010 FUN_1486e4010 body=288 status=ok
// SIG undefined FUN_1486e4010(void)

void FUN_1486e4010(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_1486e4132(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e4132 FUN_1486e4132 body=117 status=ok
// SIG undefined FUN_1486e4132(void)

void FUN_1486e4132(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_1;
  uVar1 = FUN_14477b664(param_1[1]);
  local_38 = FUN_14477b664(uVar1);
  local_30 = param_1[2];
  local_28 = param_1[3];
  FUN_141416fd8(&local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e41ae FUN_1486e41ae body=302 status=ok
// SIG undefined FUN_1486e41ae(void)

void FUN_1486e41ae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_1489356d4(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e42e4 FUN_1486e42e4 body=288 status=ok
// SIG undefined FUN_1486e42e4(void)

void FUN_1486e42e4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_1486e4406(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e4406 FUN_1486e4406 body=117 status=ok
// SIG undefined FUN_1486e4406(void)

void FUN_1486e4406(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_1;
  uVar1 = FUN_14477b664(param_1[1]);
  local_38 = FUN_14477b664(uVar1);
  local_30 = param_1[2];
  local_28 = param_1[3];
  FUN_1489356d4(&local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e4482 FUN_1486e4482 body=302 status=ok
// SIG undefined FUN_1486e4482(void)

void FUN_1486e4482(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_148935640(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e45b8 FUN_1486e45b8 body=288 status=ok
// SIG undefined FUN_1486e45b8(void)

void FUN_1486e45b8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_1486e46da(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e46da FUN_1486e46da body=117 status=ok
// SIG undefined FUN_1486e46da(void)

void FUN_1486e46da(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_1;
  uVar1 = FUN_14477b664(param_1[1]);
  local_38 = FUN_14477b664(uVar1);
  local_30 = param_1[2];
  local_28 = param_1[3];
  FUN_148935640(&local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e4756 FUN_1486e4756 body=302 status=ok
// SIG undefined FUN_1486e4756(void)

void FUN_1486e4756(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_14893560a(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e488c FUN_1486e488c body=288 status=ok
// SIG undefined FUN_1486e488c(void)

void FUN_1486e488c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar3);
  local_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  uStack_58 = (undefined4)uStack_30;
  uStack_54 = uStack_30._4_4_;
  uVar2 = FUN_1486e49ae(&local_70,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e49ae FUN_1486e49ae body=117 status=ok
// SIG undefined FUN_1486e49ae(void)

void FUN_1486e49ae(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_1;
  uVar1 = FUN_14477b664(param_1[1]);
  local_38 = FUN_14477b664(uVar1);
  local_30 = param_1[2];
  local_28 = param_1[3];
  FUN_14893560a(&local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e4a24 FUN_1486e4a24 body=262 status=ok
// SIG undefined FUN_1486e4a24(void)

void FUN_1486e4a24(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar3 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14477b664(uStack_50);
  uVar2 = FUN_14477b664(uVar1);
  uVar1 = local_48;
  local_68 = (undefined4)uStack_40;
  uStack_64 = uStack_40._4_4_;
  uStack_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  local_80 = uVar3;
  uVar3 = FUN_14477b664(uVar2);
  local_78 = FUN_14477b664(uVar3);
  local_70 = uVar1;
  FUN_1486e5184(param_3,&local_80);
  *(undefined4 *)(param_3 + 0x18) = local_68;
  *(undefined4 *)(param_3 + 0x1c) = uStack_64;
  *(undefined4 *)(param_3 + 0x20) = uStack_60;
  *(undefined4 *)(param_3 + 0x24) = uStack_5c;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e4b2c FUN_1486e4b2c body=241 status=ok
// SIG undefined FUN_1486e4b2c(void)

void FUN_1486e4b2c(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar4 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14477b664(uStack_50);
  uVar3 = FUN_14477b664(uVar2);
  uVar1 = uStack_40;
  uVar2 = local_48;
  local_78 = uVar4;
  uVar4 = FUN_14477b664(uVar3);
  local_70 = FUN_14477b664(uVar4);
  local_68 = uVar2;
  local_60 = uVar1;
  FUN_1486e5184(param_3,&local_78);
  *(undefined8 *)(param_3 + 0x18) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e4c1e FUN_1486e4c1e body=241 status=ok
// SIG undefined FUN_1486e4c1e(void)

void FUN_1486e4c1e(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar4 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14477b664(uStack_50);
  uVar3 = FUN_14477b664(uVar2);
  uVar1 = uStack_40;
  uVar2 = local_48;
  local_78 = uVar4;
  uVar4 = FUN_14477b664(uVar3);
  local_70 = FUN_14477b664(uVar4);
  local_68 = uVar2;
  local_60 = uVar1;
  FUN_1486e5184(param_3,&local_78);
  *(undefined8 *)(param_3 + 0x18) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e4d10 FUN_1486e4d10 body=544 status=ok
// SIG undefined FUN_1486e4d10(void)

void FUN_1486e4d10(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_188 [36];
  undefined4 local_164;
  longlong local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0xf00000d0;
  local_80 = 0;
  local_78 = 0x3f800000;
  local_160 = param_3;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  uVar10 = local_d8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = FUN_14477b664(CONCAT44(uStack_cc,local_d0));
  uVar7 = FUN_14477b664(uVar6);
  uVar3 = local_b8;
  uVar2 = uStack_c0;
  uVar6 = CONCAT44(uStack_c4,uStack_c8);
  uVar8 = FUN_14477b664(uStack_b0);
  uVar9 = FUN_14477b664(uVar8);
  uVar5 = local_78;
  uVar4 = uStack_90;
  uVar8 = local_a8;
  local_158 = (undefined4)uStack_a0;
  uStack_154 = uStack_a0._4_4_;
  uStack_150 = (undefined4)local_98;
  uStack_14c = local_98._4_4_;
  local_164 = local_88;
  local_140 = uVar10;
  uVar10 = FUN_14477b664(uVar7);
  local_138 = FUN_14477b664(uVar10);
  local_128[0] = uVar2;
  local_120 = uVar3;
  local_130 = uVar6;
  uVar6 = FUN_14477b664(uVar9);
  local_118 = FUN_14477b664(uVar6);
  lVar1 = local_160;
  local_110 = uVar8;
  local_108 = local_158;
  uStack_104 = uStack_154;
  uStack_100 = uStack_150;
  uStack_fc = uStack_14c;
  local_f8 = uVar4;
  local_f0 = local_164;
  local_e8 = 0;
  local_e0 = uVar5;
  FUN_1486e51d8(local_160,&local_140);
  FUN_140f85fd4(lVar1 + 0x18,local_128);
  if ((local_70 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e4fa0 FUN_1486e4fa0 body=75 status=ok
// SIG undefined FUN_1486e4fa0(void)

undefined8 * FUN_1486e4fa0(undefined8 *param_1)

{
  FUN_14131b9ca();
  *param_1 = &PTR_FUN_14b1ee290;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 1486e4ff0 FUN_1486e4ff0 body=156 status=ok
// SIG undefined FUN_1486e4ff0(void)

void FUN_1486e4ff0(undefined8 param_1,longlong param_2)

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
  FUN_1488329a0(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e5090 FUN_1486e5090 body=197 status=ok
// SIG undefined FUN_1486e5090(void)

void FUN_1486e5090(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb626f8) {
    FUN_144b3d300(&DAT_14cb626f8);
    if (DAT_14cb626f8 == -1) {
      FUN_1446f470e(&DAT_14cb626f0,L"NiagaraAsset",1);
      _Init_thread_footer(&DAT_14cb626f8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb62704) {
    FUN_144b3d300(&DAT_14cb62704);
    if (DAT_14cb62704 == -1) {
      FUN_1446f470e(&DAT_14cb626fc,L"Parameters",1);
      _Init_thread_footer(&DAT_14cb62704);
      return;
    }
  }
  return;
}



// FUNCTION 1486e5156 FUN_1486e5156 body=45 status=ok
// SIG undefined FUN_1486e5156(void)

longlong FUN_1486e5156(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140b871ca(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486e5184 FUN_1486e5184 body=84 status=ok
// SIG undefined FUN_1486e5184(void)

longlong * FUN_1486e5184(longlong *param_1,longlong *param_2)

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



// FUNCTION 1486e51d8 FUN_1486e51d8 body=84 status=ok
// SIG undefined FUN_1486e51d8(void)

longlong * FUN_1486e51d8(longlong *param_1,longlong *param_2)

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



// FUNCTION 1486e5274 FUN_1486e5274 body=59 status=ok
// SIG undefined FUN_1486e5274(void)

undefined8 FUN_1486e5274(longlong *param_1)

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



// FUNCTION 1486e537e FUN_1486e537e body=83 status=ok
// SIG undefined FUN_1486e537e(void)

undefined8 FUN_1486e537e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_141855c14(param_2,param_3);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e53fa FUN_1486e53fa body=59 status=ok
// SIG undefined FUN_1486e53fa(void)

undefined8 FUN_1486e53fa(longlong *param_1)

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



// FUNCTION 1486e5440 FUN_1486e5440 body=43 status=ok
// SIG undefined FUN_1486e5440(void)

void FUN_1486e5440(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 1486e54b2 FUN_1486e54b2 body=57 status=ok
// SIG undefined FUN_1486e54b2(void)

void FUN_1486e54b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62438 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62438 = FUN_140002ddd(FUN_1464f7afd,uVar1,L"GbxProgressPointPoolDef");
  }
  return;
}



// FUNCTION 1486e54ec FUN_1486e54ec body=28 status=ok
// SIG undefined FUN_1486e54ec(void)

undefined8 FUN_1486e54ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486e555e FUN_1486e555e body=67 status=ok
// SIG undefined FUN_1486e555e(void)

undefined1 FUN_1486e555e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b7d4c(param_2,param_3);
    FUN_140d02432(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 1486e55ca FUN_1486e55ca body=59 status=ok
// SIG undefined FUN_1486e55ca(void)

undefined8 FUN_1486e55ca(longlong *param_1)

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



// FUNCTION 1486e56ba FUN_1486e56ba body=54 status=ok
// SIG undefined FUN_1486e56ba(void)

undefined1 FUN_1486e56ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141855ce4(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1486e5718 FUN_1486e5718 body=59 status=ok
// SIG undefined FUN_1486e5718(void)

undefined8 FUN_1486e5718(longlong *param_1)

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



// FUNCTION 1486e575e FUN_1486e575e body=32 status=ok
// SIG undefined FUN_1486e575e(void)

void FUN_1486e575e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_140a404be(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1486e5802 FUN_1486e5802 body=95 status=ok
// SIG undefined FUN_1486e5802(void)

undefined8 FUN_1486e5802(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1418557ae(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      *(undefined4 *)(param_2 + 0x28 + lVar1) = *(undefined4 *)(param_3 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e588a FUN_1486e588a body=59 status=ok
// SIG undefined FUN_1486e588a(void)

undefined8 FUN_1486e588a(longlong *param_1)

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



// FUNCTION 1486e591e FUN_1486e591e body=55 status=ok
// SIG undefined FUN_1486e591e(void)

void FUN_1486e591e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb624b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb624b0 = FUN_140002ddd(FUN_1464f7cf3,uVar1,L"GbxProgressPointsNode_ValueResolver");
  }
  return;
}



// FUNCTION 1486e59b4 FUN_1486e59b4 body=85 status=ok
// SIG undefined FUN_1486e59b4(void)

undefined8 FUN_1486e59b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1486b7d4c(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e5a32 FUN_1486e5a32 body=59 status=ok
// SIG undefined FUN_1486e5a32(void)

undefined8 FUN_1486e5a32(longlong *param_1)

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



// FUNCTION 1486e5ad2 FUN_1486e5ad2 body=55 status=ok
// SIG undefined FUN_1486e5ad2(void)

void FUN_1486e5ad2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb624e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb624e0 = FUN_140002ddd(FUN_1464f7db9,uVar1,L"GbxProgressPointsPoolOps_ValueResolver");
  }
  return;
}



// FUNCTION 1486e5b9e FUN_1486e5b9e body=59 status=ok
// SIG undefined FUN_1486e5b9e(void)

undefined8 FUN_1486e5b9e(longlong *param_1)

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



// FUNCTION 1486e5c9c FUN_1486e5c9c body=59 status=ok
// SIG undefined FUN_1486e5c9c(void)

undefined8 FUN_1486e5c9c(longlong *param_1)

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



// FUNCTION 1486e5ce2 FUN_1486e5ce2 body=37 status=ok
// SIG undefined FUN_1486e5ce2(void)

void FUN_1486e5ce2(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1486e5d56 FUN_1486e5d56 body=121 status=ok
// SIG undefined FUN_1486e5d56(void)

void FUN_1486e5d56(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    iVar2 = (int)(uVar1 / 0x1c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1486e5e94 FUN_1486e5e94 body=118 status=ok
// SIG undefined FUN_1486e5e94(void)

undefined8 FUN_1486e5e94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar14);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = puVar1[9];
      uVar12 = puVar1[10];
      uVar13 = puVar1[0xb];
      lVar2 = param_2 + 0x30 + lVar14;
      *(undefined4 *)(lVar2 + -0x10) = puVar1[8];
      *(undefined4 *)(lVar2 + -0xc) = uVar11;
      *(undefined4 *)(lVar2 + -8) = uVar12;
      *(undefined4 *)(lVar2 + -4) = uVar13;
      *(undefined4 *)(lVar2 + -0x20) = uVar7;
      *(undefined4 *)(lVar2 + -0x1c) = uVar8;
      *(undefined4 *)(lVar2 + -0x18) = uVar9;
      *(undefined4 *)(lVar2 + -0x14) = uVar10;
      *(undefined4 *)(lVar2 + -0x30) = uVar3;
      *(undefined4 *)(lVar2 + -0x2c) = uVar4;
      *(undefined4 *)(lVar2 + -0x28) = uVar5;
      *(undefined4 *)(lVar2 + -0x24) = uVar6;
      FUN_1447bdc4c(lVar2,puVar1 + 0xc);
      *(undefined2 *)(lVar2 + 0x10) = *(undefined2 *)(puVar1 + 0x10);
      lVar14 = lVar14 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e5f32 FUN_1486e5f32 body=59 status=ok
// SIG undefined FUN_1486e5f32(void)

undefined8 FUN_1486e5f32(longlong *param_1)

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



// FUNCTION 1486e5f78 FUN_1486e5f78 body=38 status=ok
// SIG undefined FUN_1486e5f78(void)

void FUN_1486e5f78(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1486e6034 FUN_1486e6034 body=54 status=ok
// SIG undefined FUN_1486e6034(void)

undefined1 FUN_1486e6034(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486e6146(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1486e6092 FUN_1486e6092 body=59 status=ok
// SIG undefined FUN_1486e6092(void)

undefined8 FUN_1486e6092(longlong *param_1)

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



// FUNCTION 1486e60d8 FUN_1486e60d8 body=32 status=ok
// SIG undefined FUN_1486e60d8(void)

void FUN_1486e60d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_141855d28(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1486e6146 FUN_1486e6146 body=69 status=ok
// SIG undefined FUN_1486e6146(void)

longlong FUN_1486e6146(longlong param_1,longlong param_2)

{
  FUN_1405b70a4();
  FUN_14054c6c4(param_1 + 0x10,param_2 + 0x10);
  FUN_144721cf4(param_1 + 0x20,param_2 + 0x20);
  FUN_14054c6c4(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 1486e61c0 FUN_1486e61c0 body=75 status=ok
// SIG undefined FUN_1486e61c0(void)

undefined1 FUN_1486e61c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_1486d0488(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e6234 FUN_1486e6234 body=59 status=ok
// SIG undefined FUN_1486e6234(void)

undefined8 FUN_1486e6234(longlong *param_1)

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



// FUNCTION 1486e627a FUN_1486e627a body=32 status=ok
// SIG undefined FUN_1486e627a(void)

void FUN_1486e627a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1486e62d4(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1486e62d4 FUN_1486e62d4 body=59 status=ok
// SIG undefined FUN_1486e62d4(void)

void FUN_1486e62d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1f33b0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1486e6310 FUN_1486e6310 body=28 status=ok
// SIG undefined FUN_1486e6310(void)

undefined8 FUN_1486e6310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486e6360 FUN_1486e6360 body=87 status=ok
// SIG undefined FUN_1486e6360(void)

undefined1 FUN_1486e6360(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1400fce78(param_2,param_3);
    FUN_1486e64c2(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1486e63e0 FUN_1486e63e0 body=59 status=ok
// SIG undefined FUN_1486e63e0(void)

undefined8 FUN_1486e63e0(longlong *param_1)

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



// FUNCTION 1486e6426 FUN_1486e6426 body=32 status=ok
// SIG undefined FUN_1486e6426(void)

void FUN_1486e6426(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1486e6488(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1486e6488 FUN_1486e6488 body=57 status=ok
// SIG undefined FUN_1486e6488(void)

void FUN_1486e6488(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1447cd778(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1486e64c2 FUN_1486e64c2 body=79 status=ok
// SIG undefined FUN_1486e64c2(void)

undefined8 * FUN_1486e64c2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486e6512(param_1,iVar1);
      FUN_1486e6585(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486e6512 FUN_1486e6512 body=115 status=ok
// SIG undefined FUN_1486e6512(void)

void FUN_1486e6512(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486e6585 FUN_1486e6585 body=52 status=ok
// SIG undefined FUN_1486e6585(void)

void FUN_1486e6585(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486e65ba(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486e65ba FUN_1486e65ba body=71 status=ok
// SIG undefined FUN_1486e65ba(void)

undefined8 * FUN_1486e65ba(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1486e667c FUN_1486e667c body=63 status=ok
// SIG undefined FUN_1486e667c(void)

undefined1 FUN_1486e667c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486e67e4(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 1486e66e4 FUN_1486e66e4 body=59 status=ok
// SIG undefined FUN_1486e66e4(void)

undefined8 FUN_1486e66e4(longlong *param_1)

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



// FUNCTION 1486e6730 FUN_1486e6730 body=40 status=ok
// SIG undefined FUN_1486e6730(void)

void FUN_1486e6730(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1457f3496(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1486e67aa FUN_1486e67aa body=57 status=ok
// SIG undefined FUN_1486e67aa(void)

void FUN_1486e67aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62648 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62648 = FUN_140002ddd(FUN_1464f8365,uVar1,L"GbxRadioStationDef");
  }
  return;
}



// FUNCTION 1486e67e4 FUN_1486e67e4 body=129 status=ok
// SIG undefined FUN_1486e67e4(void)

longlong FUN_1486e67e4(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_1486e6866(param_1 + 0x18,param_2 + 0x18);
  FUN_1486e6866(param_1 + 0x28,param_2 + 0x28);
  FUN_1486e6866(param_1 + 0x38,param_2 + 0x38);
  FUN_1486e6866(param_1 + 0x48,param_2 + 0x48);
  FUN_1486e6866(param_1 + 0x58,param_2 + 0x58);
  FUN_1486e6866(param_1 + 0x68,param_2 + 0x68);
  FUN_1486e6866(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 1486e6866 FUN_1486e6866 body=93 status=ok
// SIG undefined FUN_1486e6866(void)

undefined8 * FUN_1486e6866(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410a8800(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486e68c4(param_1,iVar1);
      FUN_1486e6926(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486e68c4 FUN_1486e68c4 body=98 status=ok
// SIG undefined FUN_1486e68c4(void)

void FUN_1486e68c4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486e6926 FUN_1486e6926 body=52 status=ok
// SIG undefined FUN_1486e6926(void)

void FUN_1486e6926(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486e695a(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1486e695a FUN_1486e695a body=95 status=ok
// SIG undefined FUN_1486e695a(void)

longlong FUN_1486e695a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_14055304a();
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    FUN_1486e6512((undefined8 *)(param_1 + 0x10),iVar1,0);
    FUN_1486e6585(*(undefined8 *)(param_1 + 0x10),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1486e69ba FUN_1486e69ba body=28 status=ok
// SIG undefined FUN_1486e69ba(void)

undefined8 FUN_1486e69ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486e6a1c FUN_1486e6a1c body=63 status=ok
// SIG undefined FUN_1486e6a1c(void)

undefined1 FUN_1486e6a1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486e6b3e(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 1486e6a84 FUN_1486e6a84 body=59 status=ok
// SIG undefined FUN_1486e6a84(void)

undefined8 FUN_1486e6a84(longlong *param_1)

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



// FUNCTION 1486e6ad0 FUN_1486e6ad0 body=40 status=ok
// SIG undefined FUN_1486e6ad0(void)

void FUN_1486e6ad0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1486e6bc8(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1486e6b3e FUN_1486e6b3e body=136 status=ok
// SIG undefined FUN_1486e6b3e(void)

longlong FUN_1486e6b3e(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_141289ada(param_1 + 0x30,param_2 + 0x30);
  FUN_1486b93ee(param_1 + 0x40,param_2 + 0x40);
  FUN_1486b944e(param_1 + 0x50,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  FUN_1486c066e(param_1 + 0x68,param_2 + 0x68);
  FUN_1486b944e(param_1 + 0x78,param_2 + 0x78);
  FUN_140115bdc(param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



// FUNCTION 1486e6bc8 FUN_1486e6bc8 body=173 status=ok
// SIG undefined FUN_1486e6bc8(void)

void FUN_1486e6bc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1f0d00;
  param_1[0x11] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    FUN_140115c12(param_1 + 0x13,0);
  }
  param_1[0x12] = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145a19e1a(param_1 + 5);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1486e6c76 FUN_1486e6c76 body=43 status=ok
// SIG undefined FUN_1486e6c76(void)

undefined8 FUN_1486e6c76(undefined8 param_1,int param_2)

{
  FUN_1486e6bc8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1486e6ca2 FUN_1486e6ca2 body=55 status=ok
// SIG undefined FUN_1486e6ca2(void)

void FUN_1486e6ca2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62690 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62690 = FUN_140002ddd(FUN_1464f85f6,uVar1,L"GbxRecipeDef");
  }
  return;
}



// FUNCTION 1486e6cda FUN_1486e6cda body=80 status=ok
// SIG undefined FUN_1486e6cda(void)

void FUN_1486e6cda(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_1488da6c0(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e6d2c FUN_1486e6d2c body=28 status=ok
// SIG undefined FUN_1486e6d2c(void)

undefined8 FUN_1486e6d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486e6d8e FUN_1486e6d8e body=54 status=ok
// SIG undefined FUN_1486e6d8e(void)

undefined1 FUN_1486e6d8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447bdc4c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1486e6dec FUN_1486e6dec body=59 status=ok
// SIG undefined FUN_1486e6dec(void)

undefined8 FUN_1486e6dec(longlong *param_1)

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



// FUNCTION 1486e6e32 FUN_1486e6e32 body=37 status=ok
// SIG undefined FUN_1486e6e32(void)

void FUN_1486e6e32(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1486e6f02 FUN_1486e6f02 body=294 status=ok
// SIG undefined FUN_1486e6f02(void)

undefined8 FUN_1486e6f02(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

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
        (*(code *)(&PTR_caseD_2_14b1f3420)[*(byte *)(param_3 + 7)])(&local_e8,param_3);
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
        (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[uVar8 & 0xff])(&local_e8);
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



// FUNCTION 1486e702a FUN_1486e702a body=31 status=ok
// SIG undefined FUN_1486e702a(void)

undefined1
FUN_1486e702a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_148941802(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1486e704a FUN_1486e704a body=317 status=ok
// SIG undefined FUN_1486e704a(void)

undefined4
FUN_1486e704a(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
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
    FUN_148941c62(param_3,param_2,param_4,param_5);
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
  uVar1 = FUN_148941c62(param_3,param_2,&local_98,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_a8);
  if ((local_9c & 4) != 0) {
    (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[uStack_60 & 0xff])();
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1486e7188 FUN_1486e7188 body=39 status=ok
// SIG undefined FUN_1486e7188(void)

void FUN_1486e7188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1489418da(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 1486e71c4 FUN_1486e71c4 body=59 status=ok
// SIG undefined FUN_1486e71c4(void)

undefined8 FUN_1486e71c4(longlong *param_1)

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



// FUNCTION 1486e720a FUN_1486e720a body=41 status=ok
// SIG undefined FUN_1486e720a(void)

void FUN_1486e720a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_2 + 0x38)])(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1486e72da FUN_1486e72da body=62 status=ok
// SIG undefined FUN_1486e72da(void)

undefined1 FUN_1486e72da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14124fed2(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e7340 FUN_1486e7340 body=59 status=ok
// SIG undefined FUN_1486e7340(void)

undefined8 FUN_1486e7340(longlong *param_1)

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



// FUNCTION 1486e73e0 FUN_1486e73e0 body=34 status=ok
// SIG undefined FUN_1486e73e0(void)

undefined8 FUN_1486e73e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1486e7402 FUN_1486e7402 body=55 status=ok
// SIG undefined FUN_1486e7402(void)

void FUN_1486e7402(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62740 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62740 = FUN_140002ddd(FUN_1464f889b,uVar1,L"GbxRewardData");
  }
  return;
}



// FUNCTION 1486e743a FUN_1486e743a body=63 status=ok
// SIG undefined FUN_1486e743a(void)

undefined8 FUN_1486e743a(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Rewards/GbxRewardData.h",
                0x1c,L"Pure virtual not implemented (%s)",L"FGbxRewardData::GetReadableDescription")
  ;
  FUN_140056680(param_2,L"Unimplemented");
  return param_2;
}



// FUNCTION 1486e747a FUN_1486e747a body=42 status=ok
// SIG undefined FUN_1486e747a(void)

undefined8 FUN_1486e747a(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Rewards/GbxRewardData.h",
                0x24,L"Pure virtual not implemented (%s)",L"FGbxRewardData::ProcessReward");
  return 0;
}



// FUNCTION 1486e74b2 FUN_1486e74b2 body=32 status=ok
// SIG undefined FUN_1486e74b2(void)

undefined8 FUN_1486e74b2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Invalid");
  return param_2;
}



// FUNCTION 1486e752e FUN_1486e752e body=62 status=ok
// SIG undefined FUN_1486e752e(void)

undefined1 FUN_1486e752e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14124fed2(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486e7594 FUN_1486e7594 body=59 status=ok
// SIG undefined FUN_1486e7594(void)

undefined8 FUN_1486e7594(longlong *param_1)

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



// FUNCTION 1486e7634 FUN_1486e7634 body=34 status=ok
// SIG undefined FUN_1486e7634(void)

undefined8 FUN_1486e7634(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1486e7656 FUN_1486e7656 body=55 status=ok
// SIG undefined FUN_1486e7656(void)

void FUN_1486e7656(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62758 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62758 = FUN_140002ddd(FUN_1464f8933,uVar1,L"GbxRewardDataUnique");
  }
  return;
}



// FUNCTION 1486e7712 FUN_1486e7712 body=59 status=ok
// SIG undefined FUN_1486e7712(void)

undefined8 FUN_1486e7712(longlong *param_1)

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



// FUNCTION 1486e77b2 FUN_1486e77b2 body=57 status=ok
// SIG undefined FUN_1486e77b2(void)

void FUN_1486e77b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62770 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62770 = FUN_140002ddd(FUN_1464f8992,uVar1,L"GbxRewardData_Currency");
  }
  return;
}



// FUNCTION 1486e780a FUN_1486e780a body=248 status=ok
// SIG undefined FUN_1486e780a(void)

void FUN_1486e780a(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = *(undefined8 *)(param_2 + 4);
  local_60 = *(undefined8 *)(param_2 + 6);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 8));
  local_58 = FUN_14477b664(uVar1);
  local_50 = *(undefined8 *)(param_2 + 10);
  FUN_1459ff440(&local_48,param_2 + 0xc);
  uStack_38 = (undefined1)*(undefined8 *)(param_2 + 0x10);
  uStack_37 = (undefined7)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 8);
  uStack_30 = *(undefined1 *)(param_2 + 0x12);
  uVar1 = FUN_14477b072(param_1,DAT_14cb62918);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_78);
  FUN_140de863f(local_48,uStack_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140de863f(*(undefined8 *)(param_2 + 0xc),param_2[0xe]);
  if (*(longlong *)(param_2 + 0xc) != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e7904 FUN_1486e7904 body=280 status=ok
// SIG undefined FUN_1486e7904(void)

void FUN_1486e7904(longlong *param_1,longlong param_2)

{
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [80];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_70[0] = 0;
  local_68 = 0;
  local_60 = &DAT_3f800000ffffffff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1459c8e8c(local_c0,local_70);
  (**(code **)(*param_1 + 0x2a8))(param_1,local_c0);
  FUN_140de863f(lStack_40,local_38 & 0xffffffff);
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e7a1e FUN_1486e7a1e body=130 status=ok
// SIG undefined FUN_1486e7a1e(void)

void FUN_1486e7a1e(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1486e7aa2(&local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14cb62928);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  FUN_141165946(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e7aa2 FUN_1486e7aa2 body=93 status=ok
// SIG undefined FUN_1486e7aa2(void)

undefined8 * FUN_1486e7aa2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141165946(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486ed2d4(param_1,iVar1);
      FUN_1486ed347(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486e7b00 FUN_1486e7b00 body=186 status=ok
// SIG undefined FUN_1486e7b00(void)

void FUN_1486e7b00(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_28);
  FUN_141165946(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e7bbc FUN_1486e7bbc body=91 status=ok
// SIG undefined FUN_1486e7bbc(void)

void FUN_1486e7bbc(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb62938);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e7c18 FUN_1486e7c18 body=158 status=ok
// SIG undefined FUN_1486e7c18(void)

void FUN_1486e7c18(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2c0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486e7cb8 FUN_1486e7cb8 body=47 status=ok
// SIG undefined FUN_1486e7cb8(void)

void FUN_1486e7cb8(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb62948);
                    /* WARNING: Could not recover jumptable at 0x0001486e7ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1486e7d02 FUN_1486e7d02 body=91 status=ok
// SIG undefined FUN_1486e7d02(void)

void FUN_1486e7d02(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb62958);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


