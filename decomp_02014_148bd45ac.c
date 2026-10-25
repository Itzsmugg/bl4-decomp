// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148bd45ac FUN_148bd45ac body=203 status=ok
// SIG undefined FUN_148bd45ac(void)

void FUN_148bd45ac(longlong *param_1,longlong param_2)

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
  cVar2 = (**(code **)(*param_1 + 0x6d8))(param_1,local_24 != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerInputHeld_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x6e0))(param_1,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bd4688 FUN_148bd4688 body=335 status=ok
// SIG undefined FUN_148bd4688(void)

void FUN_148bd4688(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined **local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = &PTR_FUN_14b023b08;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x3b9cbb9e;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  pppuVar1 = &local_80;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d6183c(&local_90,pppuVar1);
  if (&local_90 == param_3) {
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_90;
    local_90 = 0;
    *(undefined4 *)(param_3 + 1) = local_88;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_84;
  }
  FUN_140485912(&local_80);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bd47db FUN_148bd47db body=62 status=ok
// SIG undefined FUN_148bd47db(void)

void FUN_148bd47db(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bd4826 FUN_148bd4826 body=156 status=ok
// SIG undefined FUN_148bd4826(void)

void FUN_148bd4826(undefined8 param_1,longlong param_2)

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
  FUN_148cc8702(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bd48c4 FUN_148bd48c4 body=156 status=ok
// SIG undefined FUN_148bd48c4(void)

void FUN_148bd48c4(undefined8 param_1,longlong param_2)

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
  FUN_148cc890e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bd4962 FUN_148bd4962 body=619 status=ok
// SIG undefined FUN_148bd4962(void)

void FUN_148bd4962(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined4 local_14c;
  undefined4 local_ac;
  undefined4 local_80;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
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
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  memset(local_150,0,0x100);
  local_80 = 0xffffffff;
  local_14c = 0x3f800000;
  local_ac = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_150);
  }
  local_170 = local_150;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_170 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = &local_168;
  local_158 = local_40;
  local_168 = local_50;
  uStack_164 = uStack_4c;
  uStack_160 = uStack_48;
  uStack_15c = uStack_44;
  FUN_148cc8522(param_1,local_28,local_30,local_38);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bd4bce FUN_148bd4bce body=92 status=ok
// SIG undefined FUN_148bd4bce(void)

void FUN_148bd4bce(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba5148);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bd4c2c FUN_148bd4c2c body=92 status=ok
// SIG undefined FUN_148bd4c2c(void)

void FUN_148bd4c2c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba5158);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bd4c8e FUN_148bd4c8e body=158 status=ok
// SIG undefined FUN_148bd4c8e(void)

void FUN_148bd4c8e(undefined8 param_1,longlong param_2)

{
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
  FUN_148cc86a8(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bd4d52 FUN_148bd4d52 body=163 status=ok
// SIG undefined FUN_148bd4d52(void)

void FUN_148bd4d52(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_148e08cf6(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bd4dfa FUN_148bd4dfa body=37 status=ok
// SIG undefined FUN_148bd4dfa(void)

void FUN_148bd4dfa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148e08c0e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bd4e42 FUN_148bd4e42 body=256 status=ok
// SIG undefined FUN_148bd4e42(void)

void FUN_148bd4e42(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1460d6fb4(param_1,puVar2,local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bd4f56 FUN_148bd4f56 body=48 status=ok
// SIG undefined FUN_148bd4f56(void)

longlong FUN_148bd4f56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd4f8e FUN_148bd4f8e body=48 status=ok
// SIG undefined FUN_148bd4f8e(void)

longlong FUN_148bd4f8e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd4fc6 FUN_148bd4fc6 body=48 status=ok
// SIG undefined FUN_148bd4fc6(void)

longlong FUN_148bd4fc6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd500e FUN_148bd500e body=48 status=ok
// SIG undefined FUN_148bd500e(void)

longlong FUN_148bd500e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5046 FUN_148bd5046 body=48 status=ok
// SIG undefined FUN_148bd5046(void)

longlong FUN_148bd5046(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x538;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd507e FUN_148bd507e body=48 status=ok
// SIG undefined FUN_148bd507e(void)

longlong FUN_148bd507e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x540;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd50b6 FUN_148bd50b6 body=48 status=ok
// SIG undefined FUN_148bd50b6(void)

longlong FUN_148bd50b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c0;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd50ee FUN_148bd50ee body=48 status=ok
// SIG undefined FUN_148bd50ee(void)

longlong FUN_148bd50ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c8;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd512c FUN_148bd512c body=48 status=ok
// SIG undefined FUN_148bd512c(void)

longlong FUN_148bd512c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d0;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5164 FUN_148bd5164 body=48 status=ok
// SIG undefined FUN_148bd5164(void)

longlong FUN_148bd5164(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d8;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd519c FUN_148bd519c body=48 status=ok
// SIG undefined FUN_148bd519c(void)

longlong FUN_148bd519c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e0;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd51cc FUN_148bd51cc body=48 status=ok
// SIG undefined FUN_148bd51cc(void)

longlong FUN_148bd51cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e8;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd51fc FUN_148bd51fc body=48 status=ok
// SIG undefined FUN_148bd51fc(void)

longlong FUN_148bd51fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd522c FUN_148bd522c body=48 status=ok
// SIG undefined FUN_148bd522c(void)

longlong FUN_148bd522c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd525c FUN_148bd525c body=48 status=ok
// SIG undefined FUN_148bd525c(void)

longlong FUN_148bd525c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd528c FUN_148bd528c body=48 status=ok
// SIG undefined FUN_148bd528c(void)

longlong FUN_148bd528c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd52bc FUN_148bd52bc body=48 status=ok
// SIG undefined FUN_148bd52bc(void)

longlong FUN_148bd52bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd52ec FUN_148bd52ec body=48 status=ok
// SIG undefined FUN_148bd52ec(void)

longlong FUN_148bd52ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd531c FUN_148bd531c body=48 status=ok
// SIG undefined FUN_148bd531c(void)

longlong FUN_148bd531c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd534c FUN_148bd534c body=48 status=ok
// SIG undefined FUN_148bd534c(void)

longlong FUN_148bd534c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd537c FUN_148bd537c body=48 status=ok
// SIG undefined FUN_148bd537c(void)

longlong FUN_148bd537c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd53ac FUN_148bd53ac body=48 status=ok
// SIG undefined FUN_148bd53ac(void)

longlong FUN_148bd53ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd53dc FUN_148bd53dc body=48 status=ok
// SIG undefined FUN_148bd53dc(void)

longlong FUN_148bd53dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd540c FUN_148bd540c body=48 status=ok
// SIG undefined FUN_148bd540c(void)

longlong FUN_148bd540c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd543c FUN_148bd543c body=48 status=ok
// SIG undefined FUN_148bd543c(void)

longlong FUN_148bd543c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd546c FUN_148bd546c body=48 status=ok
// SIG undefined FUN_148bd546c(void)

longlong FUN_148bd546c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd549c FUN_148bd549c body=48 status=ok
// SIG undefined FUN_148bd549c(void)

longlong FUN_148bd549c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd54cc FUN_148bd54cc body=48 status=ok
// SIG undefined FUN_148bd54cc(void)

longlong FUN_148bd54cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd54fc FUN_148bd54fc body=48 status=ok
// SIG undefined FUN_148bd54fc(void)

longlong FUN_148bd54fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd552c FUN_148bd552c body=48 status=ok
// SIG undefined FUN_148bd552c(void)

longlong FUN_148bd552c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd555c FUN_148bd555c body=48 status=ok
// SIG undefined FUN_148bd555c(void)

longlong FUN_148bd555c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd558c FUN_148bd558c body=48 status=ok
// SIG undefined FUN_148bd558c(void)

longlong FUN_148bd558c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd55bc FUN_148bd55bc body=48 status=ok
// SIG undefined FUN_148bd55bc(void)

longlong FUN_148bd55bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd55ec FUN_148bd55ec body=48 status=ok
// SIG undefined FUN_148bd55ec(void)

longlong FUN_148bd55ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd561c FUN_148bd561c body=48 status=ok
// SIG undefined FUN_148bd561c(void)

longlong FUN_148bd561c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd564c FUN_148bd564c body=48 status=ok
// SIG undefined FUN_148bd564c(void)

longlong FUN_148bd564c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd567c FUN_148bd567c body=48 status=ok
// SIG undefined FUN_148bd567c(void)

longlong FUN_148bd567c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd56ac FUN_148bd56ac body=48 status=ok
// SIG undefined FUN_148bd56ac(void)

longlong FUN_148bd56ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd56dc FUN_148bd56dc body=48 status=ok
// SIG undefined FUN_148bd56dc(void)

longlong FUN_148bd56dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd570c FUN_148bd570c body=48 status=ok
// SIG undefined FUN_148bd570c(void)

longlong FUN_148bd570c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd573c FUN_148bd573c body=48 status=ok
// SIG undefined FUN_148bd573c(void)

longlong FUN_148bd573c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd576c FUN_148bd576c body=45 status=ok
// SIG undefined FUN_148bd576c(void)

longlong FUN_148bd576c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd579a FUN_148bd579a body=48 status=ok
// SIG undefined FUN_148bd579a(void)

longlong FUN_148bd579a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd57ca FUN_148bd57ca body=48 status=ok
// SIG undefined FUN_148bd57ca(void)

longlong FUN_148bd57ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd57fa FUN_148bd57fa body=48 status=ok
// SIG undefined FUN_148bd57fa(void)

longlong FUN_148bd57fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5832 FUN_148bd5832 body=48 status=ok
// SIG undefined FUN_148bd5832(void)

longlong FUN_148bd5832(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd586a FUN_148bd586a body=48 status=ok
// SIG undefined FUN_148bd586a(void)

longlong FUN_148bd586a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd58a2 FUN_148bd58a2 body=48 status=ok
// SIG undefined FUN_148bd58a2(void)

longlong FUN_148bd58a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd58da FUN_148bd58da body=48 status=ok
// SIG undefined FUN_148bd58da(void)

longlong FUN_148bd58da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5912 FUN_148bd5912 body=48 status=ok
// SIG undefined FUN_148bd5912(void)

longlong FUN_148bd5912(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5952 FUN_148bd5952 body=48 status=ok
// SIG undefined FUN_148bd5952(void)

longlong FUN_148bd5952(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5982 FUN_148bd5982 body=48 status=ok
// SIG undefined FUN_148bd5982(void)

longlong FUN_148bd5982(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd59ba FUN_148bd59ba body=48 status=ok
// SIG undefined FUN_148bd59ba(void)

longlong FUN_148bd59ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd59ea FUN_148bd59ea body=48 status=ok
// SIG undefined FUN_148bd59ea(void)

longlong FUN_148bd59ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5a22 FUN_148bd5a22 body=48 status=ok
// SIG undefined FUN_148bd5a22(void)

longlong FUN_148bd5a22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5a6a FUN_148bd5a6a body=48 status=ok
// SIG undefined FUN_148bd5a6a(void)

longlong FUN_148bd5a6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5aa2 FUN_148bd5aa2 body=48 status=ok
// SIG undefined FUN_148bd5aa2(void)

longlong FUN_148bd5aa2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5ad2 FUN_148bd5ad2 body=48 status=ok
// SIG undefined FUN_148bd5ad2(void)

longlong FUN_148bd5ad2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5b0a FUN_148bd5b0a body=48 status=ok
// SIG undefined FUN_148bd5b0a(void)

longlong FUN_148bd5b0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5b42 FUN_148bd5b42 body=48 status=ok
// SIG undefined FUN_148bd5b42(void)

longlong FUN_148bd5b42(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5b7a FUN_148bd5b7a body=48 status=ok
// SIG undefined FUN_148bd5b7a(void)

longlong FUN_148bd5b7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5bb2 FUN_148bd5bb2 body=48 status=ok
// SIG undefined FUN_148bd5bb2(void)

longlong FUN_148bd5bb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5bea FUN_148bd5bea body=48 status=ok
// SIG undefined FUN_148bd5bea(void)

longlong FUN_148bd5bea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5c22 FUN_148bd5c22 body=48 status=ok
// SIG undefined FUN_148bd5c22(void)

longlong FUN_148bd5c22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5c5a FUN_148bd5c5a body=48 status=ok
// SIG undefined FUN_148bd5c5a(void)

longlong FUN_148bd5c5a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5c92 FUN_148bd5c92 body=48 status=ok
// SIG undefined FUN_148bd5c92(void)

longlong FUN_148bd5c92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5cca FUN_148bd5cca body=48 status=ok
// SIG undefined FUN_148bd5cca(void)

longlong FUN_148bd5cca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5d12 FUN_148bd5d12 body=48 status=ok
// SIG undefined FUN_148bd5d12(void)

longlong FUN_148bd5d12(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5d4a FUN_148bd5d4a body=48 status=ok
// SIG undefined FUN_148bd5d4a(void)

longlong FUN_148bd5d4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5d82 FUN_148bd5d82 body=48 status=ok
// SIG undefined FUN_148bd5d82(void)

longlong FUN_148bd5d82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5dba FUN_148bd5dba body=48 status=ok
// SIG undefined FUN_148bd5dba(void)

longlong FUN_148bd5dba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5df2 FUN_148bd5df2 body=48 status=ok
// SIG undefined FUN_148bd5df2(void)

longlong FUN_148bd5df2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5e2a FUN_148bd5e2a body=48 status=ok
// SIG undefined FUN_148bd5e2a(void)

longlong FUN_148bd5e2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5e62 FUN_148bd5e62 body=48 status=ok
// SIG undefined FUN_148bd5e62(void)

longlong FUN_148bd5e62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5e92 FUN_148bd5e92 body=48 status=ok
// SIG undefined FUN_148bd5e92(void)

longlong FUN_148bd5e92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x25f8;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5ec2 FUN_148bd5ec2 body=45 status=ok
// SIG undefined FUN_148bd5ec2(void)

longlong FUN_148bd5ec2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5ef0 FUN_148bd5ef0 body=45 status=ok
// SIG undefined FUN_148bd5ef0(void)

longlong FUN_148bd5ef0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5f1e FUN_148bd5f1e body=45 status=ok
// SIG undefined FUN_148bd5f1e(void)

longlong FUN_148bd5f1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd5f6a FUN_148bd5f6a body=63 status=ok
// SIG undefined FUN_148bd5f6a(void)

undefined1 FUN_148bd5f6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd60a2(param_2,param_3);
    param_3 = param_3 + 0x518;
    param_2 = param_2 + 0x518;
  }
  return 1;
}



// FUNCTION 148bd5fd2 FUN_148bd5fd2 body=59 status=ok
// SIG undefined FUN_148bd5fd2(void)

undefined8 FUN_148bd5fd2(longlong *param_1)

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



// FUNCTION 148bd601e FUN_148bd601e body=65 status=ok
// SIG undefined FUN_148bd601e(void)

void FUN_148bd601e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xa3) == '\x01') {
    *param_2 = &PTR_FUN_14b693f70;
    if (param_2[0x9a] != 0) {
      FUN_1400020a8();
    }
    FUN_140c09192(param_2);
    *(undefined1 *)(param_2 + 0xa3) = 0;
  }
  return;
}



// FUNCTION 148bd60a2 FUN_148bd60a2 body=142 status=ok
// SIG undefined FUN_148bd60a2(void)

longlong FUN_148bd60a2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_145c6a5f0();
  FUN_1459a0a08(param_1 + 0x4d0,param_2 + 0x4d0);
  *(undefined1 *)(param_1 + 0x4e0) = *(undefined1 *)(param_2 + 0x4e0);
  if ((*(longlong *)(param_1 + 0x4e8) != *(longlong *)(param_2 + 0x4e8)) ||
     (*(int *)(param_1 + 0x4f0) != *(int *)(param_2 + 0x4f0))) {
    *(longlong *)(param_1 + 0x4e8) = *(longlong *)(param_2 + 0x4e8);
    *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
    *(undefined8 *)(param_1 + 0x4f8) = 0;
  }
  *(undefined1 *)(param_1 + 0x510) = *(undefined1 *)(param_2 + 0x510);
  uVar1 = *(undefined8 *)(param_2 + 0x508);
  *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_2 + 0x500);
  *(undefined8 *)(param_1 + 0x508) = uVar1;
  return param_1;
}



// FUNCTION 148bd6132 FUN_148bd6132 body=57 status=ok
// SIG undefined FUN_148bd6132(void)

void FUN_148bd6132(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4d18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4d18 = FUN_140002ddd(FUN_1465c07c5,uVar1,L"InventoryAugmentDef_AttributeModifier");
  }
  return;
}



// FUNCTION 148bd618a FUN_148bd618a body=63 status=ok
// SIG undefined FUN_148bd618a(void)

undefined1 FUN_148bd618a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd62c2(param_2,param_3);
    param_3 = param_3 + 0x6d8;
    param_2 = param_2 + 0x6d8;
  }
  return 1;
}



// FUNCTION 148bd61f2 FUN_148bd61f2 body=59 status=ok
// SIG undefined FUN_148bd61f2(void)

undefined8 FUN_148bd61f2(longlong *param_1)

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



// FUNCTION 148bd623e FUN_148bd623e body=65 status=ok
// SIG undefined FUN_148bd623e(void)

void FUN_148bd623e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xdb) == '\x01') {
    *param_2 = &PTR_FUN_14b693f90;
    if (param_2[0xb0] != 0) {
      FUN_1400020a8();
    }
    FUN_140c09192(param_2);
    *(undefined1 *)(param_2 + 0xdb) = 0;
  }
  return;
}



// FUNCTION 148bd62c2 FUN_148bd62c2 body=505 status=ok
// SIG undefined FUN_148bd62c2(void)

longlong FUN_148bd62c2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_145c6a5f0();
  if ((*(longlong *)(param_1 + 0x4d0) != *(longlong *)(param_2 + 0x4d0)) ||
     (*(int *)(param_1 + 0x4d8) != *(int *)(param_2 + 0x4d8))) {
    *(longlong *)(param_1 + 0x4d0) = *(longlong *)(param_2 + 0x4d0);
    *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
    *(undefined8 *)(param_1 + 0x4e0) = 0;
  }
  FUN_140d02432(param_1 + 0x4e8,param_2 + 0x4e8);
  if ((*(longlong *)(param_1 + 0x538) != *(longlong *)(param_2 + 0x538)) ||
     (*(int *)(param_1 + 0x540) != *(int *)(param_2 + 0x540))) {
    *(longlong *)(param_1 + 0x538) = *(longlong *)(param_2 + 0x538);
    *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_2 + 0x540);
    *(undefined8 *)(param_1 + 0x548) = 0;
  }
  FUN_14118c70e(param_1 + 0x550,param_2 + 0x550);
  if ((*(longlong *)(param_1 + 0x590) != *(longlong *)(param_2 + 0x590)) ||
     (*(int *)(param_1 + 0x598) != *(int *)(param_2 + 0x598))) {
    *(longlong *)(param_1 + 0x590) = *(longlong *)(param_2 + 0x590);
    *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_2 + 0x598);
    *(undefined8 *)(param_1 + 0x5a0) = 0;
  }
  *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_2 + 0x5b0);
  *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_2 + 0x5a8);
  if ((*(longlong *)(param_1 + 0x5b8) != *(longlong *)(param_2 + 0x5b8)) ||
     (*(int *)(param_1 + 0x5c0) != *(int *)(param_2 + 0x5c0))) {
    *(longlong *)(param_1 + 0x5b8) = *(longlong *)(param_2 + 0x5b8);
    *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_2 + 0x5c0);
    *(undefined8 *)(param_1 + 0x5c8) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x5d0);
  uVar2 = *(undefined4 *)(param_2 + 0x5d4);
  uVar3 = *(undefined4 *)(param_2 + 0x5d8);
  uVar4 = *(undefined4 *)(param_2 + 0x5dc);
  uVar5 = *(undefined4 *)(param_2 + 0x5e4);
  uVar6 = *(undefined4 *)(param_2 + 0x5e8);
  uVar7 = *(undefined4 *)(param_2 + 0x5ec);
  *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_2 + 0x5e0);
  *(undefined4 *)(param_1 + 0x5e4) = uVar5;
  *(undefined4 *)(param_1 + 0x5e8) = uVar6;
  *(undefined4 *)(param_1 + 0x5ec) = uVar7;
  *(undefined4 *)(param_1 + 0x5d0) = uVar1;
  *(undefined4 *)(param_1 + 0x5d4) = uVar2;
  *(undefined4 *)(param_1 + 0x5d8) = uVar3;
  *(undefined4 *)(param_1 + 0x5dc) = uVar4;
  FUN_140d02432(param_1 + 0x5f0,param_2 + 0x5f0);
  FUN_140d02432(param_1 + 0x640,param_2 + 0x640);
  *(undefined2 *)(param_1 + 0x698) = *(undefined2 *)(param_2 + 0x698);
  *(undefined8 *)(param_1 + 0x690) = *(undefined8 *)(param_2 + 0x690);
  if ((*(longlong *)(param_1 + 0x6a0) != *(longlong *)(param_2 + 0x6a0)) ||
     (*(int *)(param_1 + 0x6a8) != *(int *)(param_2 + 0x6a8))) {
    *(longlong *)(param_1 + 0x6a0) = *(longlong *)(param_2 + 0x6a0);
    *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_2 + 0x6a8);
    *(undefined8 *)(param_1 + 0x6b0) = 0;
  }
  uVar8 = *(undefined8 *)(param_2 + 0x6b8);
  uVar9 = *(undefined8 *)(param_2 + 0x6c0);
  uVar10 = *(undefined8 *)(param_2 + 0x6d0);
  *(undefined8 *)(param_1 + 0x6c8) = *(undefined8 *)(param_2 + 0x6c8);
  *(undefined8 *)(param_1 + 0x6d0) = uVar10;
  *(undefined8 *)(param_1 + 0x6b8) = uVar8;
  *(undefined8 *)(param_1 + 0x6c0) = uVar9;
  return param_1;
}



// FUNCTION 148bd64bc FUN_148bd64bc body=57 status=ok
// SIG undefined FUN_148bd64bc(void)

void FUN_148bd64bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4d30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4d30 = FUN_140002ddd(FUN_1465c085b,uVar1,L"InventoryAugmentDef_Damage");
  }
  return;
}



// FUNCTION 148bd6522 FUN_148bd6522 body=63 status=ok
// SIG undefined FUN_148bd6522(void)

undefined1 FUN_148bd6522(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd6646(param_2,param_3);
    param_3 = param_3 + 0x5c8;
    param_2 = param_2 + 0x5c8;
  }
  return 1;
}



// FUNCTION 148bd658a FUN_148bd658a body=59 status=ok
// SIG undefined FUN_148bd658a(void)

undefined8 FUN_148bd658a(longlong *param_1)

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



// FUNCTION 148bd65d6 FUN_148bd65d6 body=38 status=ok
// SIG undefined FUN_148bd65d6(void)

void FUN_148bd65d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x5c8) == '\x01') {
    FUN_140c09192(param_2);
    *(undefined1 *)(param_2 + 0x5c8) = 0;
  }
  return;
}



// FUNCTION 148bd6646 FUN_148bd6646 body=90 status=ok
// SIG undefined FUN_148bd6646(void)

longlong FUN_148bd6646(longlong param_1,longlong param_2)

{
  FUN_145c6a5f0();
  FUN_140d02432(param_1 + 0x4d0,param_2 + 0x4d0);
  FUN_140d02432(param_1 + 0x520,param_2 + 0x520);
  FUN_140d02432(param_1 + 0x570,param_2 + 0x570);
  *(undefined1 *)(param_1 + 0x5c0) = *(undefined1 *)(param_2 + 0x5c0);
  return param_1;
}



// FUNCTION 148bd66c0 FUN_148bd66c0 body=63 status=ok
// SIG undefined FUN_148bd66c0(void)

undefined1 FUN_148bd66c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd67dc(param_2,param_3);
    param_3 = param_3 + 0x670;
    param_2 = param_2 + 0x670;
  }
  return 1;
}



// FUNCTION 148bd6728 FUN_148bd6728 body=59 status=ok
// SIG undefined FUN_148bd6728(void)

undefined8 FUN_148bd6728(longlong *param_1)

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



// FUNCTION 148bd6774 FUN_148bd6774 body=38 status=ok
// SIG undefined FUN_148bd6774(void)

void FUN_148bd6774(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x670) == '\x01') {
    FUN_1410ea7e8(param_2);
    *(undefined1 *)(param_2 + 0x670) = 0;
  }
  return;
}



// FUNCTION 148bd67dc FUN_148bd67dc body=278 status=ok
// SIG undefined FUN_148bd67dc(void)

longlong FUN_148bd67dc(longlong param_1,longlong param_2)

{
  FUN_145c6a5f0();
  *(undefined2 *)(param_1 + 0x4d0) = *(undefined2 *)(param_2 + 0x4d0);
  FUN_1401f3db8(param_1 + 0x4d8,param_2 + 0x4d8);
  FUN_14118c70e(param_1 + 0x4f0,param_2 + 0x4f0);
  FUN_140d02432(param_1 + 0x530,param_2 + 0x530);
  FUN_140d02432(param_1 + 0x580,param_2 + 0x580);
  *(undefined1 *)(param_1 + 0x5d0) = *(undefined1 *)(param_2 + 0x5d0);
  FUN_140115bdc(param_1 + 0x5d8,param_2 + 0x5d8);
  FUN_14150acc4(param_1 + 0x5f8,param_2 + 0x5f8);
  *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_2 + 0x610);
  *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_2 + 0x618);
  FUN_144a7bb84(param_1 + 0x620,param_2 + 0x620);
  FUN_144a82394(param_1 + 0x638,param_2 + 0x638);
  *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_2 + 0x640);
  *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(param_2 + 0x648);
  FUN_144a7bb84(param_1 + 0x650,param_2 + 0x650);
  FUN_144a82394(param_1 + 0x668,param_2 + 0x668);
  return param_1;
}



// FUNCTION 148bd68f4 FUN_148bd68f4 body=57 status=ok
// SIG undefined FUN_148bd68f4(void)

void FUN_148bd68f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4d90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4d90 = FUN_140002ddd(FUN_1465c09e5,uVar1,L"InventoryAugmentDef_HitAndReact");
  }
  return;
}



// FUNCTION 148bd694c FUN_148bd694c body=97 status=ok
// SIG undefined FUN_148bd694c(void)

undefined1 FUN_148bd694c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145c6a5f0(param_2,param_3);
    FUN_1401f3db8(param_2 + 0x4d0,param_3 + 0x4d0);
    *(undefined1 *)(param_2 + 0x4e8) = *(undefined1 *)(param_3 + 0x4e8);
    param_2 = param_2 + 0x4f0;
    param_3 = param_3 + 0x4f0;
  }
  return 1;
}



// FUNCTION 148bd69d6 FUN_148bd69d6 body=59 status=ok
// SIG undefined FUN_148bd69d6(void)

undefined8 FUN_148bd69d6(longlong *param_1)

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



// FUNCTION 148bd6a22 FUN_148bd6a22 body=38 status=ok
// SIG undefined FUN_148bd6a22(void)

void FUN_148bd6a22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4f0) == '\x01') {
    FUN_140e2cd22(param_2);
    *(undefined1 *)(param_2 + 0x4f0) = 0;
  }
  return;
}



// FUNCTION 148bd6a8c FUN_148bd6a8c body=57 status=ok
// SIG undefined FUN_148bd6a8c(void)

void FUN_148bd6a8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4da8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4da8 = FUN_140002ddd(FUN_1465c0a7b,uVar1,L"InventoryAugmentDef_ShotModifier");
  }
  return;
}



// FUNCTION 148bd6b48 FUN_148bd6b48 body=59 status=ok
// SIG undefined FUN_148bd6b48(void)

undefined8 FUN_148bd6b48(longlong *param_1)

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



// FUNCTION 148bd6be8 FUN_148bd6be8 body=29 status=ok
// SIG undefined FUN_148bd6be8(void)

undefined8 FUN_148bd6be8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd6c06 FUN_148bd6c06 body=55 status=ok
// SIG undefined FUN_148bd6c06(void)

void FUN_148bd6c06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4dc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4dc0 = FUN_140002ddd(FUN_1465c0b11,uVar1,L"InventoryAugmentEventPayload");
  }
  return;
}



// FUNCTION 148bd6cc4 FUN_148bd6cc4 body=59 status=ok
// SIG undefined FUN_148bd6cc4(void)

undefined8 FUN_148bd6cc4(longlong *param_1)

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



// FUNCTION 148bd6d64 FUN_148bd6d64 body=29 status=ok
// SIG undefined FUN_148bd6d64(void)

undefined8 FUN_148bd6d64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd6d82 FUN_148bd6d82 body=57 status=ok
// SIG undefined FUN_148bd6d82(void)

void FUN_148bd6d82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4dd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4dd8 = FUN_140002ddd(FUN_1465c0b70,uVar1,L"InventoryAugmentCausedDamageEventPayload");
  }
  return;
}



// FUNCTION 148bd6e42 FUN_148bd6e42 body=59 status=ok
// SIG undefined FUN_148bd6e42(void)

undefined8 FUN_148bd6e42(longlong *param_1)

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



// FUNCTION 148bd6ee2 FUN_148bd6ee2 body=29 status=ok
// SIG undefined FUN_148bd6ee2(void)

undefined8 FUN_148bd6ee2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd6f34 FUN_148bd6f34 body=151 status=ok
// SIG undefined FUN_148bd6f34(void)

undefined8 FUN_148bd6f34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_148bd70b4(param_2 + lVar6 + 8,param_3 + lVar6 + 8);
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_140c41132(lVar1 + 0x18,lVar2 + 0x18);
      uVar3 = *(undefined4 *)(lVar2 + 0x7c);
      uVar4 = *(undefined4 *)(lVar2 + 0x80);
      uVar5 = *(undefined4 *)(lVar2 + 0x84);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar2 + 0x78);
      *(undefined4 *)(lVar1 + 0x7c) = uVar3;
      *(undefined4 *)(lVar1 + 0x80) = uVar4;
      *(undefined4 *)(lVar1 + 0x84) = uVar5;
      FUN_148bd7112(param_2 + lVar6 + 0x88,param_3 + lVar6 + 0x88);
      lVar6 = lVar6 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bd6ff4 FUN_148bd6ff4 body=59 status=ok
// SIG undefined FUN_148bd6ff4(void)

undefined8 FUN_148bd6ff4(longlong *param_1)

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



// FUNCTION 148bd7040 FUN_148bd7040 body=38 status=ok
// SIG undefined FUN_148bd7040(void)

void FUN_148bd7040(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_144029a20(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148bd70b4 FUN_148bd70b4 body=93 status=ok
// SIG undefined FUN_148bd70b4(void)

undefined8 * FUN_148bd70b4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1418c5716(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bd716a(param_1,iVar1);
      FUN_148bd71dc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bd7112 FUN_148bd7112 body=88 status=ok
// SIG undefined FUN_148bd7112(void)

undefined8 * FUN_148bd7112(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145c98a7c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bd716a FUN_148bd716a body=114 status=ok
// SIG undefined FUN_148bd716a(void)

void FUN_148bd716a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x160,8);
    iVar2 = (int)(uVar1 / 0x160);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x160,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bd71dc FUN_148bd71dc body=60 status=ok
// SIG undefined FUN_148bd71dc(void)

void FUN_148bd71dc(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bd7218(param_1,param_2);
    param_1 = param_1 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return;
}



// FUNCTION 148bd7218 FUN_148bd7218 body=466 status=ok
// SIG undefined FUN_148bd7218(void)

undefined4 * FUN_148bd7218(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_144a76ff0(param_1 + 6,param_2 + 6);
  FUN_144a76ff0(param_1 + 0xc,param_2 + 0xc);
  FUN_144a76ff0(param_1 + 0x12,param_2 + 0x12);
  FUN_144a76ff0(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 2;
  if (param_2 == param_1) {
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x26) = 0;
    param_1[0x28] = 2;
    *(undefined8 *)(param_1 + 0x29) = 0;
    *(undefined8 *)(param_1 + 0x2b) = 0;
    *(undefined8 *)(param_1 + 0x2d) = 0x200000000;
    *(undefined8 *)(param_1 + 0x2f) = 0;
    *(undefined8 *)(param_1 + 0x31) = 0;
    param_1[0x33] = 0;
    *(undefined8 *)(param_1 + 0x34) = 2;
  }
  else {
    FUN_148bd73ea(param_1 + 0x1e,param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x28) = 2;
    FUN_1401b31d8(param_1 + 0x24,param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x2e) = 2;
    FUN_1401b31d8(param_1 + 0x2a,param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x32) = 0;
    *(undefined8 *)(param_1 + 0x34) = 2;
    FUN_140f86ba4(param_1 + 0x30,param_2 + 0x30);
  }
  param_1[0x3a] = param_2[0x3a];
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  param_1[0x3c] = param_2[0x3c];
  FUN_144a7f96e(param_1 + 0x3e,param_2 + 0x3e);
  uVar4 = *(undefined8 *)(param_2 + 0x46);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x46) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  param_1[0x4a] = param_2[0x4a];
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = param_2[0x4e];
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x52);
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x157);
  *(undefined8 *)((longlong)param_1 + 0x14f) = *(undefined8 *)((longlong)param_2 + 0x14f);
  *(undefined8 *)((longlong)param_1 + 0x157) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x52) = uVar5;
  return param_1;
}



// FUNCTION 148bd73ea FUN_148bd73ea body=304 status=ok
// SIG undefined FUN_148bd73ea(void)

void FUN_148bd73ea(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148bd751c FUN_148bd751c body=38 status=ok
// SIG undefined FUN_148bd751c(void)

undefined8 FUN_148bd751c(undefined8 param_1,int param_2)

{
  FUN_144029a20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd756e FUN_148bd756e body=63 status=ok
// SIG undefined FUN_148bd756e(void)

undefined1 FUN_148bd756e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd7720(param_2,param_3);
    param_3 = param_3 + 0x390;
    param_2 = param_2 + 0x390;
  }
  return 1;
}



// FUNCTION 148bd75d6 FUN_148bd75d6 body=59 status=ok
// SIG undefined FUN_148bd75d6(void)

undefined8 FUN_148bd75d6(longlong *param_1)

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



// FUNCTION 148bd7622 FUN_148bd7622 body=40 status=ok
// SIG undefined FUN_148bd7622(void)

void FUN_148bd7622(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x390) == '\x01') {
    FUN_14598a15a(param_2);
    *(undefined1 *)(param_2 + 0x390) = 0;
  }
  return;
}



// FUNCTION 148bd7698 FUN_148bd7698 body=55 status=ok
// SIG undefined FUN_148bd7698(void)

void FUN_148bd7698(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4e38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4e38 = FUN_140002ddd(FUN_1465c0d2d,uVar1,L"InventoryAugment_ActorScript");
  }
  return;
}



// FUNCTION 148bd76d0 FUN_148bd76d0 body=48 status=ok
// SIG undefined FUN_148bd76d0(void)

longlong FUN_148bd76d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2e8;
  FUN_14598a15a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd7700 FUN_148bd7700 body=32 status=ok
// SIG undefined FUN_148bd7700(void)

undefined8 FUN_148bd7700(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FInventoryAugment_ActorScript");
  return param_2;
}



// FUNCTION 148bd7720 FUN_148bd7720 body=136 status=ok
// SIG undefined FUN_148bd7720(void)

longlong FUN_148bd7720(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148bd331c();
  FUN_1486591ec(param_1 + 0x2f8,param_2 + 0x2f8);
  uVar3 = *(undefined8 *)(param_2 + 0x378);
  lVar4 = *(longlong *)(param_2 + 0x380);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x378) = uVar3;
  *(longlong *)(param_1 + 0x380) = lVar4;
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
  *(undefined1 *)(param_1 + 0x388) = *(undefined1 *)(param_2 + 0x388);
  return param_1;
}



// FUNCTION 148bd77aa FUN_148bd77aa body=81 status=ok
// SIG undefined FUN_148bd77aa(void)

void FUN_148bd77aa(undefined8 param_1,undefined8 *param_2)

{
  FUN_14128dafa(param_2);
  *param_2 = &PTR_FUN_14b692540;
  param_2[0x67] = 0;
  param_2[0x5d] = 0;
  param_2[0x5e] = 0;
  param_2[0x5f] = 0;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0;
  *(undefined8 *)((longlong)param_2 + 0x324) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32c) = 0;
  return;
}



// FUNCTION 148bd7820 FUN_148bd7820 body=63 status=ok
// SIG undefined FUN_148bd7820(void)

undefined1 FUN_148bd7820(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd7982(param_2,param_3);
    param_3 = param_3 + 0x340;
    param_2 = param_2 + 0x340;
  }
  return 1;
}



// FUNCTION 148bd7888 FUN_148bd7888 body=59 status=ok
// SIG undefined FUN_148bd7888(void)

undefined8 FUN_148bd7888(longlong *param_1)

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



// FUNCTION 148bd78d4 FUN_148bd78d4 body=40 status=ok
// SIG undefined FUN_148bd78d4(void)

void FUN_148bd78d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x340) == '\x01') {
    FUN_145934b9e(param_2);
    *(undefined1 *)(param_2 + 0x340) = 0;
  }
  return;
}



// FUNCTION 148bd794a FUN_148bd794a body=55 status=ok
// SIG undefined FUN_148bd794a(void)

void FUN_148bd794a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4e50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4e50 = FUN_140002ddd(FUN_1465c0dc3,uVar1,L"InventoryAugment_AttributeModifier");
  }
  return;
}



// FUNCTION 148bd7982 FUN_148bd7982 body=186 status=ok
// SIG undefined FUN_148bd7982(void)

longlong FUN_148bd7982(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148bd331c();
  FUN_1459a0a08(param_1 + 0x2e8,param_2 + 0x2e8);
  FUN_140f82514(param_1 + 0x2f8,param_2 + 0x2f8);
  FUN_144a67f5c(param_1 + 0x308,param_2 + 0x308);
  uVar3 = *(undefined8 *)(param_2 + 0x318);
  lVar4 = *(longlong *)(param_2 + 800);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 800);
  *(undefined8 *)(param_1 + 0x318) = uVar3;
  *(longlong *)(param_1 + 800) = lVar4;
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
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_2 + 0x338);
  uVar3 = *(undefined8 *)(param_2 + 0x330);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x328);
  *(undefined8 *)(param_1 + 0x330) = uVar3;
  return param_1;
}



// FUNCTION 148bd7a3e FUN_148bd7a3e body=75 status=ok
// SIG undefined FUN_148bd7a3e(void)

void FUN_148bd7a3e(undefined8 param_1,undefined8 *param_2)

{
  FUN_14128dafa(param_2);
  *param_2 = &PTR_FUN_14b692720;
  param_2[0x5d] = 0;
  param_2[0x5e] = 0;
  param_2[0x5f] = 0;
  *(undefined4 *)(param_2 + 0x60) = 0x3002;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  return;
}



// FUNCTION 148bd7aae FUN_148bd7aae body=63 status=ok
// SIG undefined FUN_148bd7aae(void)

undefined1 FUN_148bd7aae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd7c10(param_2,param_3);
    param_3 = param_3 + 0x328;
    param_2 = param_2 + 0x328;
  }
  return 1;
}



// FUNCTION 148bd7b16 FUN_148bd7b16 body=59 status=ok
// SIG undefined FUN_148bd7b16(void)

undefined8 FUN_148bd7b16(longlong *param_1)

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



// FUNCTION 148bd7b62 FUN_148bd7b62 body=40 status=ok
// SIG undefined FUN_148bd7b62(void)

void FUN_148bd7b62(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x328) == '\x01') {
    FUN_145d3d16e(param_2);
    *(undefined1 *)(param_2 + 0x328) = 0;
  }
  return;
}



// FUNCTION 148bd7bd8 FUN_148bd7bd8 body=55 status=ok
// SIG undefined FUN_148bd7bd8(void)

void FUN_148bd7bd8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4e68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4e68 = FUN_140002ddd(FUN_1465c0e59,uVar1,L"InventoryAugment_Damage");
  }
  return;
}



// FUNCTION 148bd7c10 FUN_148bd7c10 body=193 status=ok
// SIG undefined FUN_148bd7c10(void)

longlong FUN_148bd7c10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148bd331c();
  uVar3 = *(undefined8 *)(param_2 + 0x2e8);
  lVar4 = *(longlong *)(param_2 + 0x2f0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = uVar3;
  *(longlong *)(param_1 + 0x2f0) = lVar4;
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
  if ((*(longlong *)(param_1 + 0x2f8) != *(longlong *)(param_2 + 0x2f8)) ||
     (*(int *)(param_1 + 0x300) != *(int *)(param_2 + 0x300))) {
    *(longlong *)(param_1 + 0x2f8) = *(longlong *)(param_2 + 0x2f8);
    *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  uVar3 = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
  *(undefined8 *)(param_1 + 0x318) = uVar3;
  return param_1;
}



// FUNCTION 148bd7cd2 FUN_148bd7cd2 body=65 status=ok
// SIG undefined FUN_148bd7cd2(void)

void FUN_148bd7cd2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x308);
  FUN_14128dafa(param_2);
  *param_2 = &PTR_FUN_14b694010;
  param_2[0x5d] = 0;
  param_2[0x5e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2fc) = 0;
  return;
}



// FUNCTION 148bd7d14 FUN_148bd7d14 body=49 status=ok
// SIG undefined FUN_148bd7d14(void)

void FUN_148bd7d14(undefined8 param_1,undefined8 *param_2)

{
  FUN_14128dafa(param_2);
  *param_2 = &PTR_FUN_14b694010;
  param_2[0x5d] = 0;
  param_2[0x5e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2fc) = 0;
  return;
}



// FUNCTION 148bd7d6a FUN_148bd7d6a body=63 status=ok
// SIG undefined FUN_148bd7d6a(void)

undefined1 FUN_148bd7d6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd7ef0(param_2,param_3);
    param_3 = param_3 + 0x308;
    param_2 = param_2 + 0x308;
  }
  return 1;
}



// FUNCTION 148bd7dd2 FUN_148bd7dd2 body=59 status=ok
// SIG undefined FUN_148bd7dd2(void)

undefined8 FUN_148bd7dd2(longlong *param_1)

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



// FUNCTION 148bd7e1e FUN_148bd7e1e body=38 status=ok
// SIG undefined FUN_148bd7e1e(void)

void FUN_148bd7e1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x308) == '\x01') {
    FUN_148d49992(param_2);
    *(undefined1 *)(param_2 + 0x308) = 0;
  }
  return;
}



// FUNCTION 148bd7e92 FUN_148bd7e92 body=38 status=ok
// SIG undefined FUN_148bd7e92(void)

undefined8 FUN_148bd7e92(undefined8 param_1,int param_2)

{
  FUN_148d49992();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd7eb8 FUN_148bd7eb8 body=55 status=ok
// SIG undefined FUN_148bd7eb8(void)

void FUN_148bd7eb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4e80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4e80 = FUN_140002ddd(FUN_1465c0eef,uVar1,L"InventoryAugment_DurationVariance");
  }
  return;
}



// FUNCTION 148bd7ef0 FUN_148bd7ef0 body=133 status=ok
// SIG undefined FUN_148bd7ef0(void)

longlong FUN_148bd7ef0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148bd331c();
  uVar3 = *(undefined8 *)(param_2 + 0x2e8);
  lVar4 = *(longlong *)(param_2 + 0x2f0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = uVar3;
  *(longlong *)(param_1 + 0x2f0) = lVar4;
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
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  return param_1;
}



// FUNCTION 148bd7f76 FUN_148bd7f76 body=105 status=ok
// SIG undefined FUN_148bd7f76(void)

void FUN_148bd7f76(undefined8 param_1,undefined8 *param_2)

{
  FUN_14128dafa(param_2);
  *param_2 = &PTR_FUN_14b692a50;
  *(undefined1 *)((longlong)param_2 + 0x304) = 0;
  param_2[0x5d] = 0;
  param_2[0x5e] = 0;
  param_2[0x5f] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  param_2[0x68] = 0;
  *(undefined4 *)(param_2 + 0x69) = 0;
  param_2[0x6a] = 0;
  param_2[0x6b] = 0;
  return;
}



// FUNCTION 148bd8004 FUN_148bd8004 body=63 status=ok
// SIG undefined FUN_148bd8004(void)

undefined1 FUN_148bd8004(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd8166(param_2,param_3);
    param_3 = param_3 + 0x360;
    param_2 = param_2 + 0x360;
  }
  return 1;
}



// FUNCTION 148bd806c FUN_148bd806c body=59 status=ok
// SIG undefined FUN_148bd806c(void)

undefined8 FUN_148bd806c(longlong *param_1)

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



// FUNCTION 148bd80b8 FUN_148bd80b8 body=40 status=ok
// SIG undefined FUN_148bd80b8(void)

void FUN_148bd80b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x360) == '\x01') {
    FUN_14602af46(param_2);
    *(undefined1 *)(param_2 + 0x360) = 0;
  }
  return;
}



// FUNCTION 148bd812e FUN_148bd812e body=55 status=ok
// SIG undefined FUN_148bd812e(void)

void FUN_148bd812e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4e98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4e98 = FUN_140002ddd(FUN_1465c0f85,uVar1,L"InventoryAugment_HitAndReact");
  }
  return;
}



// FUNCTION 148bd8166 FUN_148bd8166 body=290 status=ok
// SIG undefined FUN_148bd8166(void)

longlong FUN_148bd8166(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148bd331c();
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  uVar3 = *(undefined8 *)(param_2 + 0x2f0);
  lVar4 = *(longlong *)(param_2 + 0x2f8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x2f0) = uVar3;
  *(longlong *)(param_1 + 0x2f8) = lVar4;
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
  *(undefined1 *)(param_1 + 0x304) = *(undefined1 *)(param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  FUN_14150acc4(param_1 + 0x308,param_2 + 0x308);
  FUN_144029c9e(param_1 + 800,param_2 + 800);
  FUN_141818ba6(param_1 + 0x330,param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x348);
  uVar3 = *(undefined8 *)(param_2 + 0x350);
  lVar4 = *(longlong *)(param_2 + 0x358);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x358);
  *(undefined8 *)(param_1 + 0x350) = uVar3;
  *(longlong *)(param_1 + 0x358) = lVar4;
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
  return param_1;
}



// FUNCTION 148bd828a FUN_148bd828a body=49 status=ok
// SIG undefined FUN_148bd828a(void)

void FUN_148bd828a(undefined8 param_1,undefined8 *param_2)

{
  FUN_14128dafa(param_2);
  *param_2 = &PTR_FUN_14b692c20;
  param_2[0x5d] = 0;
  param_2[0x5e] = 0;
  *(undefined1 *)(param_2 + 0x5f) = 0;
  return;
}



// FUNCTION 148bd82e0 FUN_148bd82e0 body=63 status=ok
// SIG undefined FUN_148bd82e0(void)

undefined1 FUN_148bd82e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd8442(param_2,param_3);
    param_3 = param_3 + 0x300;
    param_2 = param_2 + 0x300;
  }
  return 1;
}



// FUNCTION 148bd8348 FUN_148bd8348 body=59 status=ok
// SIG undefined FUN_148bd8348(void)

undefined8 FUN_148bd8348(longlong *param_1)

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



// FUNCTION 148bd8394 FUN_148bd8394 body=40 status=ok
// SIG undefined FUN_148bd8394(void)

void FUN_148bd8394(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x300) == '\x01') {
    FUN_145d3d1e0(param_2);
    *(undefined1 *)(param_2 + 0x300) = 0;
  }
  return;
}



// FUNCTION 148bd840a FUN_148bd840a body=55 status=ok
// SIG undefined FUN_148bd840a(void)

void FUN_148bd840a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4eb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4eb0 = FUN_140002ddd(FUN_1465c101b,uVar1,L"InventoryAugment_ShotModifier");
  }
  return;
}



// FUNCTION 148bd8442 FUN_148bd8442 body=119 status=ok
// SIG undefined FUN_148bd8442(void)

longlong FUN_148bd8442(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148bd331c();
  uVar3 = *(undefined8 *)(param_2 + 0x2e8);
  lVar4 = *(longlong *)(param_2 + 0x2f0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = uVar3;
  *(longlong *)(param_1 + 0x2f0) = lVar4;
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
  *(undefined1 *)(param_1 + 0x2f8) = *(undefined1 *)(param_2 + 0x2f8);
  return param_1;
}



// FUNCTION 148bd8526 FUN_148bd8526 body=59 status=ok
// SIG undefined FUN_148bd8526(void)

undefined8 FUN_148bd8526(longlong *param_1)

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



// FUNCTION 148bd85c8 FUN_148bd85c8 body=107 status=ok
// SIG undefined FUN_148bd85c8(void)

void FUN_148bd85c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b692f60;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
  param_2[0xd] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0;
  *(undefined2 *)(param_2 + 0xf) = 1;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 148bd864a FUN_148bd864a body=63 status=ok
// SIG undefined FUN_148bd864a(void)

undefined1 FUN_148bd864a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd87a6(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148bd86b2 FUN_148bd86b2 body=59 status=ok
// SIG undefined FUN_148bd86b2(void)

undefined8 FUN_148bd86b2(longlong *param_1)

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



// FUNCTION 148bd86fe FUN_148bd86fe body=40 status=ok
// SIG undefined FUN_148bd86fe(void)

void FUN_148bd86fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_145891cda(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148bd876c FUN_148bd876c body=57 status=ok
// SIG undefined FUN_148bd876c(void)

void FUN_148bd876c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4ee0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4ee0 = FUN_140002ddd(FUN_1465c1110,uVar1,L"InventoryContainerDef");
  }
  return;
}



// FUNCTION 148bd87a6 FUN_148bd87a6 body=91 status=ok
// SIG undefined FUN_148bd87a6(void)

longlong FUN_148bd87a6(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_148bd8802(param_1 + 0x18,param_2 + 0x18);
  FUN_140816cc4(param_1 + 0x28,param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_2 + 0x78);
  FUN_148bd885a(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 148bd8802 FUN_148bd8802 body=88 status=ok
// SIG undefined FUN_148bd8802(void)

undefined8 * FUN_148bd8802(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bd88ae(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bd885a FUN_148bd885a body=84 status=ok
// SIG undefined FUN_148bd885a(void)

longlong * FUN_148bd885a(longlong *param_1,longlong *param_2)

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



// FUNCTION 148bd88ae FUN_148bd88ae body=98 status=ok
// SIG undefined FUN_148bd88ae(void)

void FUN_148bd88ae(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bd8912 FUN_148bd8912 body=28 status=ok
// SIG undefined FUN_148bd8912(void)

undefined8 FUN_148bd8912(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148bd8940 FUN_148bd8940 body=51 status=ok
// SIG undefined FUN_148bd8940(void)

void FUN_148bd8940(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  FUN_144a5dc74(param_2 + 3);
  FUN_144a5dc74(param_2 + 5);
  return;
}



// FUNCTION 148bd8974 FUN_148bd8974 body=51 status=ok
// SIG undefined FUN_148bd8974(void)

void FUN_148bd8974(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148bd899c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148bd89be FUN_148bd89be body=54 status=ok
// SIG undefined FUN_148bd89be(void)

undefined1 FUN_148bd89be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd8ae6(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148bd8a1c FUN_148bd8a1c body=59 status=ok
// SIG undefined FUN_148bd8a1c(void)

undefined8 FUN_148bd8a1c(longlong *param_1)

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



// FUNCTION 148bd8a62 FUN_148bd8a62 body=54 status=ok
// SIG undefined FUN_148bd8a62(void)

void FUN_148bd8a62(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
    }
    if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148bd8ae6 FUN_148bd8ae6 body=134 status=ok
// SIG undefined FUN_148bd8ae6(void)

undefined4 * FUN_148bd8ae6(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  plVar1 = *(longlong **)(param_2 + 6);
  plVar2 = *(longlong **)(param_1 + 6);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 6) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[8] = param_2[8];
  plVar1 = *(longlong **)(param_2 + 10);
  plVar2 = *(longlong **)(param_1 + 10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0xc] = param_2[0xc];
  return param_1;
}



// FUNCTION 148bd8b6e FUN_148bd8b6e body=50 status=ok
// SIG undefined FUN_148bd8b6e(void)

void FUN_148bd8b6e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b693260;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 148bd8bb6 FUN_148bd8bb6 body=80 status=ok
// SIG undefined FUN_148bd8bb6(void)

undefined8 FUN_148bd8bb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      if (*(char *)(param_3 + -8) == '\0') {
        *(undefined1 *)(param_2 + -8) = 0;
        *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      }
      FUN_148bd8d22(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bd8c2e FUN_148bd8c2e body=59 status=ok
// SIG undefined FUN_148bd8c2e(void)

undefined8 FUN_148bd8c2e(longlong *param_1)

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



// FUNCTION 148bd8c74 FUN_148bd8c74 body=34 status=ok
// SIG undefined FUN_148bd8c74(void)

void FUN_148bd8c74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145940844(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148bd8ce8 FUN_148bd8ce8 body=57 status=ok
// SIG undefined FUN_148bd8ce8(void)

void FUN_148bd8ce8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4f28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4f28 = FUN_140002ddd(FUN_1465c1238,uVar1,L"InventoryEquipmentDef");
  }
  return;
}



// FUNCTION 148bd8d22 FUN_148bd8d22 body=95 status=ok
// SIG undefined FUN_148bd8d22(void)

undefined8 * FUN_148bd8d22(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14594088b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bd8d82(param_1,iVar1);
      FUN_148bd8df1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bd8d82 FUN_148bd8d82 body=111 status=ok
// SIG undefined FUN_148bd8d82(void)

void FUN_148bd8d82(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bd8df1 FUN_148bd8df1 body=139 status=ok
// SIG undefined FUN_148bd8df1(void)

void FUN_148bd8df1(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = 0;
    do {
      *(undefined8 *)(param_1 + 0x10 + lVar9) = *(undefined8 *)(param_2 + 0x10 + lVar9);
      puVar1 = (undefined4 *)(param_2 + lVar9);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      plVar5 = *(longlong **)(param_2 + 0x18 + lVar9);
      *(longlong **)(param_1 + 0x18 + lVar9) = plVar5;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      lVar3 = param_1 + lVar9;
      lVar4 = param_2 + lVar9;
      *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar4 + 0x20);
      plVar5 = *(longlong **)(lVar4 + 0x28);
      *(longlong **)(lVar3 + 0x28) = plVar5;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(lVar4 + 0x30);
      lVar9 = lVar9 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148bd8e7e FUN_148bd8e7e body=28 status=ok
// SIG undefined FUN_148bd8e7e(void)

undefined8 FUN_148bd8e7e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148bd8efc FUN_148bd8efc body=123 status=ok
// SIG undefined FUN_148bd8efc(void)

undefined8 FUN_148bd8efc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
    do {
      uVar4 = *(undefined8 *)(param_3 + -0x48);
      *(undefined8 *)(param_2 + -0x50) = *(undefined8 *)(param_3 + -0x50);
      *(undefined8 *)(param_2 + -0x48) = uVar4;
      *(undefined8 *)(param_2 + -0x40) = *(undefined8 *)(param_3 + -0x40);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      FUN_144a787a6(param_2 + -0x28,param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bd8fa0 FUN_148bd8fa0 body=59 status=ok
// SIG undefined FUN_148bd8fa0(void)

undefined8 FUN_148bd8fa0(longlong *param_1)

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



// FUNCTION 148bd8fe6 FUN_148bd8fe6 body=32 status=ok
// SIG undefined FUN_148bd8fe6(void)

void FUN_148bd8fe6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_148bd904a(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148bd904a FUN_148bd904a body=59 status=ok
// SIG undefined FUN_148bd904a(void)

void FUN_148bd904a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b694088;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148bd9086 FUN_148bd9086 body=79 status=ok
// SIG undefined FUN_148bd9086(void)

undefined8 * FUN_148bd9086(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b695510;
  FUN_1449e6b18((longlong)param_1 + 0x34);
  FUN_1449e6b18(param_1 + 5);
  FUN_1449e6b18((longlong)param_1 + 0x1c);
  FUN_1449e6b18(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd9148 FUN_148bd9148 body=63 status=ok
// SIG undefined FUN_148bd9148(void)

undefined1 FUN_148bd9148(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd92f8(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148bd91b0 FUN_148bd91b0 body=59 status=ok
// SIG undefined FUN_148bd91b0(void)

undefined8 FUN_148bd91b0(longlong *param_1)

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



// FUNCTION 148bd91fc FUN_148bd91fc body=38 status=ok
// SIG undefined FUN_148bd91fc(void)

void FUN_148bd91fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_148bd9270(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148bd9270 FUN_148bd9270 body=135 status=ok
// SIG undefined FUN_148bd9270(void)

void FUN_148bd9270(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b693560;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1411cd0cc(param_1 + 3);
  return;
}



// FUNCTION 148bd92f8 FUN_148bd92f8 body=139 status=ok
// SIG undefined FUN_148bd92f8(void)

longlong FUN_148bd92f8(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  uVar7 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  FUN_148bd93de(param_1 + 0x18,param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  lVar3 = *(longlong *)(param_2 + 0x70);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(longlong *)(param_1 + 0x70) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_140311eb6(param_1 + 0x78,param_2 + 0x78);
  FUN_140311eb6(param_1 + 0x88,param_2 + 0x88);
  FUN_148bd9384(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 148bd9384 FUN_148bd9384 body=89 status=ok
// SIG undefined FUN_148bd9384(void)

undefined8 * FUN_148bd9384(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bd953e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bd93de FUN_148bd93de body=122 status=ok
// SIG undefined FUN_148bd93de(void)

longlong FUN_148bd93de(longlong param_1,longlong param_2)

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
    FUN_148bd9458(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148bd9458 FUN_148bd9458 body=229 status=ok
// SIG undefined FUN_148bd9458(void)

longlong * FUN_148bd9458(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1411cd104(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar4 + 8 + lVar5) = *(undefined8 *)(lVar2 + 8 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 0x10 + lVar5);
          *(longlong *)(lVar4 + 0x10 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x18 + lVar5) = *(undefined8 *)(lVar2 + 0x18 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 148bd953e FUN_148bd953e body=115 status=ok
// SIG undefined FUN_148bd953e(void)

void FUN_148bd953e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bd95d0 FUN_148bd95d0 body=63 status=ok
// SIG undefined FUN_148bd95d0(void)

undefined1 FUN_148bd95d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd9712(param_2,param_3);
    param_3 = param_3 + 0x4a8;
    param_2 = param_2 + 0x4a8;
  }
  return 1;
}



// FUNCTION 148bd9638 FUN_148bd9638 body=59 status=ok
// SIG undefined FUN_148bd9638(void)

undefined8 FUN_148bd9638(longlong *param_1)

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



// FUNCTION 148bd9684 FUN_148bd9684 body=65 status=ok
// SIG undefined FUN_148bd9684(void)

void FUN_148bd9684(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x95) == '\x01') {
    *param_2 = &PTR_FUN_14b6936d0;
    if (param_2[0x8f] != 0) {
      FUN_1400020a8();
    }
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x95) = 0;
  }
  return;
}



// FUNCTION 148bd9712 FUN_148bd9712 body=118 status=ok
// SIG undefined FUN_148bd9712(void)

longlong FUN_148bd9712(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_148b897b2();
  *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_2 + 0x458);
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0x460);
  uVar1 = *(undefined4 *)(param_2 + 0x46c);
  uVar2 = *(undefined4 *)(param_2 + 0x470);
  uVar3 = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x46c) = uVar1;
  *(undefined4 *)(param_1 + 0x470) = uVar2;
  *(undefined4 *)(param_1 + 0x474) = uVar3;
  FUN_144a787a6(param_1 + 0x478,param_2 + 0x478);
  *(undefined1 *)(param_1 + 0x488) = *(undefined1 *)(param_2 + 0x488);
  FUN_1457892b8(param_1 + 0x490,param_2 + 0x490);
  return param_1;
}



// FUNCTION 148bd9790 FUN_148bd9790 body=38 status=ok
// SIG undefined FUN_148bd9790(void)

undefined8 FUN_148bd9790(undefined8 param_1,int param_2)

{
  FUN_1458e38d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd97b6 FUN_148bd97b6 body=55 status=ok
// SIG undefined FUN_148bd97b6(void)

void FUN_148bd97b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba52b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba52b0 = FUN_140002ddd(FUN_1465c1bf5,uVar1,L"LevelTravelStationObjectBodyState");
  }
  return;
}



// FUNCTION 148bd97ee FUN_148bd97ee body=57 status=ok
// SIG undefined FUN_148bd97ee(void)

void FUN_148bd97ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5280 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5280 = FUN_140002ddd(FUN_1465c1aef,uVar1,L"LevelTravelStationObjectBodySettings");
  }
  return;
}



// FUNCTION 148bd9876 FUN_148bd9876 body=63 status=ok
// SIG undefined FUN_148bd9876(void)

undefined1 FUN_148bd9876(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 148bd98de FUN_148bd98de body=59 status=ok
// SIG undefined FUN_148bd98de(void)

undefined8 FUN_148bd98de(longlong *param_1)

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



// FUNCTION 148bd992a FUN_148bd992a body=38 status=ok
// SIG undefined FUN_148bd992a(void)

void FUN_148bd992a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148bd99a8 FUN_148bd99a8 body=48 status=ok
// SIG undefined FUN_148bd99a8(void)

void FUN_148bd99a8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b693830;
  return;
}



// FUNCTION 148bd99d8 FUN_148bd99d8 body=32 status=ok
// SIG undefined FUN_148bd99d8(void)

void FUN_148bd99d8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b693830;
  return;
}



// FUNCTION 148bd9a52 FUN_148bd9a52 body=59 status=ok
// SIG undefined FUN_148bd9a52(void)

undefined8 FUN_148bd9a52(longlong *param_1)

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



// FUNCTION 148bd9a9e FUN_148bd9a9e body=40 status=ok
// SIG undefined FUN_148bd9a9e(void)

void FUN_148bd9a9e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_1458e38d0(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 148bd9b16 FUN_148bd9b16 body=32 status=ok
// SIG undefined FUN_148bd9b16(void)

void FUN_148bd9b16(undefined8 param_1,undefined8 *param_2)

{
  FUN_141021b94(param_2);
  *param_2 = &PTR_FUN_14b693d30;
  return;
}



// FUNCTION 148bd9b4c FUN_148bd9b4c body=139 status=ok
// SIG undefined FUN_148bd9b4c(void)

undefined8 FUN_148bd9b4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    *(undefined1 *)(param_2 + 0x458) = *(undefined1 *)(param_3 + 0x458);
    *(undefined8 *)(param_2 + 0x460) = *(undefined8 *)(param_3 + 0x460);
    uVar1 = *(undefined4 *)(param_3 + 0x46c);
    uVar2 = *(undefined4 *)(param_3 + 0x470);
    uVar3 = *(undefined4 *)(param_3 + 0x474);
    *(undefined4 *)(param_2 + 0x468) = *(undefined4 *)(param_3 + 0x468);
    *(undefined4 *)(param_2 + 0x46c) = uVar1;
    *(undefined4 *)(param_2 + 0x470) = uVar2;
    *(undefined4 *)(param_2 + 0x474) = uVar3;
    FUN_144a787a6(param_2 + 0x478,param_3 + 0x478);
    *(undefined8 *)(param_2 + 0x488) = *(undefined8 *)(param_3 + 0x488);
    param_2 = param_2 + 0x490;
    param_3 = param_3 + 0x490;
  }
  return 1;
}



// FUNCTION 148bd9c00 FUN_148bd9c00 body=59 status=ok
// SIG undefined FUN_148bd9c00(void)

undefined8 FUN_148bd9c00(longlong *param_1)

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



// FUNCTION 148bd9c4c FUN_148bd9c4c body=65 status=ok
// SIG undefined FUN_148bd9c4c(void)

void FUN_148bd9c4c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x92) == '\x01') {
    *param_2 = &PTR_FUN_14b5ecae0;
    if (param_2[0x8f] != 0) {
      FUN_1400020a8();
    }
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x92) = 0;
  }
  return;
}



// FUNCTION 148bd9cd0 FUN_148bd9cd0 body=238 status=ok
// SIG undefined FUN_148bd9cd0(void)

void FUN_148bd9cd0(undefined8 param_1,longlong param_2)

{
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
  FUN_148d6b4fa(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bd9dc0 FUN_148bd9dc0 body=619 status=ok
// SIG undefined FUN_148bd9dc0(void)

void FUN_148bd9dc0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined4 local_14c;
  undefined4 local_ac;
  undefined4 local_80;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
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
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  memset(local_150,0,0x100);
  local_80 = 0xffffffff;
  local_14c = 0x3f800000;
  local_ac = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_150);
  }
  local_170 = local_150;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_170 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = &local_168;
  local_158 = local_40;
  local_168 = local_50;
  uStack_164 = uStack_4c;
  uStack_160 = uStack_48;
  uStack_15c = uStack_44;
  FUN_148d6afbe(param_1,local_28,local_30,local_38);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bda02c FUN_148bda02c body=234 status=ok
// SIG undefined FUN_148bda02c(void)

void FUN_148bda02c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d6afb0(param_1,local_20,local_21);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bda118 FUN_148bda118 body=209 status=ok
// SIG undefined FUN_148bda118(void)

void FUN_148bda118(undefined8 param_1,longlong param_2)

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
  FUN_148d6b602(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bda24a FUN_148bda24a body=254 status=ok
// SIG undefined FUN_148bda24a(void)

void FUN_148bda24a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = *puVar1;
  FUN_1400021e4(&local_20,&local_48);
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
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bda35c FUN_148bda35c body=48 status=ok
// SIG undefined FUN_148bda35c(void)

longlong FUN_148bda35c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda394 FUN_148bda394 body=48 status=ok
// SIG undefined FUN_148bda394(void)

longlong FUN_148bda394(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda3cc FUN_148bda3cc body=48 status=ok
// SIG undefined FUN_148bda3cc(void)

longlong FUN_148bda3cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda404 FUN_148bda404 body=48 status=ok
// SIG undefined FUN_148bda404(void)

longlong FUN_148bda404(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda434 FUN_148bda434 body=48 status=ok
// SIG undefined FUN_148bda434(void)

longlong FUN_148bda434(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda464 FUN_148bda464 body=48 status=ok
// SIG undefined FUN_148bda464(void)

longlong FUN_148bda464(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda494 FUN_148bda494 body=48 status=ok
// SIG undefined FUN_148bda494(void)

longlong FUN_148bda494(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda4cc FUN_148bda4cc body=48 status=ok
// SIG undefined FUN_148bda4cc(void)

longlong FUN_148bda4cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda4fc FUN_148bda4fc body=48 status=ok
// SIG undefined FUN_148bda4fc(void)

longlong FUN_148bda4fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda534 FUN_148bda534 body=48 status=ok
// SIG undefined FUN_148bda534(void)

longlong FUN_148bda534(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda56c FUN_148bda56c body=48 status=ok
// SIG undefined FUN_148bda56c(void)

longlong FUN_148bda56c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda59c FUN_148bda59c body=48 status=ok
// SIG undefined FUN_148bda59c(void)

longlong FUN_148bda59c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda5cc FUN_148bda5cc body=48 status=ok
// SIG undefined FUN_148bda5cc(void)

longlong FUN_148bda5cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda604 FUN_148bda604 body=48 status=ok
// SIG undefined FUN_148bda604(void)

longlong FUN_148bda604(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda63c FUN_148bda63c body=48 status=ok
// SIG undefined FUN_148bda63c(void)

longlong FUN_148bda63c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda674 FUN_148bda674 body=48 status=ok
// SIG undefined FUN_148bda674(void)

longlong FUN_148bda674(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bda6ac FUN_148bda6ac body=48 status=ok
// SIG undefined FUN_148bda6ac(void)

longlong FUN_148bda6ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


