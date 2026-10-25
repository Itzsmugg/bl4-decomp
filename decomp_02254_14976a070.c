// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14976a070 FUN_14976a070 body=123 status=ok
// SIG undefined FUN_14976a070(void)

void FUN_14976a070(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25198 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25198 = FUN_140002ddd(FUN_1467544af,uVar1,L"DivisionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25198,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976a0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976a0ec FUN_14976a0ec body=93 status=ok
// SIG undefined FUN_14976a0ec(void)

void FUN_14976a0ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25198 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25198 = FUN_140002ddd(FUN_1467544af,uVar2,L"DivisionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25198,param_1);
  return;
}



// FUNCTION 14976a14a FUN_14976a14a body=55 status=ok
// SIG undefined FUN_14976a14a(void)

void FUN_14976a14a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25198 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25198 = FUN_140002ddd(FUN_1467544af,uVar1,L"DivisionDataflowNode");
  }
  return;
}



// FUNCTION 14976a182 FUN_14976a182 body=233 status=ok
// SIG undefined FUN_14976a182(void)

ulonglong FUN_14976a182(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDivisionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976a21c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976a21c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976a21c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976a21c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976a26e FUN_14976a26e body=43 status=ok
// SIG undefined FUN_14976a26e(void)

void FUN_14976a26e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be529d0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976a29a FUN_14976a29a body=43 status=ok
// SIG undefined FUN_14976a29a(void)

void FUN_14976a29a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be529d0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976a2ea FUN_14976a2ea body=76 status=ok
// SIG undefined FUN_14976a2ea(void)

undefined8 FUN_14976a2ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976a35e FUN_14976a35e body=59 status=ok
// SIG undefined FUN_14976a35e(void)

undefined8 FUN_14976a35e(longlong *param_1)

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



// FUNCTION 14976a3aa FUN_14976a3aa body=40 status=ok
// SIG undefined FUN_14976a3aa(void)

void FUN_14976a3aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976a420 FUN_14976a420 body=38 status=ok
// SIG undefined FUN_14976a420(void)

undefined8 FUN_14976a420(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976a446 FUN_14976a446 body=38 status=ok
// SIG undefined FUN_14976a446(void)

undefined8 FUN_14976a446(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSafeReciprocalDataflowNode",1);
  return param_2;
}



// FUNCTION 14976a46c FUN_14976a46c body=38 status=ok
// SIG undefined FUN_14976a46c(void)

undefined8 FUN_14976a46c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SafeReciprocal",1);
  return param_2;
}



// FUNCTION 14976a492 FUN_14976a492 body=38 status=ok
// SIG undefined FUN_14976a492(void)

undefined8 FUN_14976a492(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976a4b8 FUN_14976a4b8 body=32 status=ok
// SIG undefined FUN_14976a4b8(void)

undefined8 FUN_14976a4b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976a4d8 FUN_14976a4d8 body=123 status=ok
// SIG undefined FUN_14976a4d8(void)

void FUN_14976a4d8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc251b0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc251b0 = FUN_140002ddd(FUN_146754545,uVar1,L"SafeReciprocalDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc251b0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976a554 FUN_14976a554 body=93 status=ok
// SIG undefined FUN_14976a554(void)

void FUN_14976a554(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc251b0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc251b0 = FUN_140002ddd(FUN_146754545,uVar2,L"SafeReciprocalDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc251b0,param_1);
  return;
}



// FUNCTION 14976a5b2 FUN_14976a5b2 body=55 status=ok
// SIG undefined FUN_14976a5b2(void)

void FUN_14976a5b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc251b0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc251b0 = FUN_140002ddd(FUN_146754545,uVar1,L"SafeReciprocalDataflowNode");
  }
  return;
}



// FUNCTION 14976a5ea FUN_14976a5ea body=233 status=ok
// SIG undefined FUN_14976a5ea(void)

ulonglong FUN_14976a5ea(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FSafeReciprocalDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976a684;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976a684;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976a684;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976a684:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976a6d6 FUN_14976a6d6 body=43 status=ok
// SIG undefined FUN_14976a6d6(void)

void FUN_14976a6d6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be52c70;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976a702 FUN_14976a702 body=43 status=ok
// SIG undefined FUN_14976a702(void)

void FUN_14976a702(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be52c70;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976a752 FUN_14976a752 body=76 status=ok
// SIG undefined FUN_14976a752(void)

undefined8 FUN_14976a752(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976a7c6 FUN_14976a7c6 body=59 status=ok
// SIG undefined FUN_14976a7c6(void)

undefined8 FUN_14976a7c6(longlong *param_1)

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



// FUNCTION 14976a812 FUN_14976a812 body=40 status=ok
// SIG undefined FUN_14976a812(void)

void FUN_14976a812(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976a888 FUN_14976a888 body=38 status=ok
// SIG undefined FUN_14976a888(void)

undefined8 FUN_14976a888(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976a8ae FUN_14976a8ae body=38 status=ok
// SIG undefined FUN_14976a8ae(void)

undefined8 FUN_14976a8ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSquareDataflowNode",1);
  return param_2;
}



// FUNCTION 14976a8d4 FUN_14976a8d4 body=38 status=ok
// SIG undefined FUN_14976a8d4(void)

undefined8 FUN_14976a8d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Square",1);
  return param_2;
}



// FUNCTION 14976a8fa FUN_14976a8fa body=38 status=ok
// SIG undefined FUN_14976a8fa(void)

undefined8 FUN_14976a8fa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976a920 FUN_14976a920 body=32 status=ok
// SIG undefined FUN_14976a920(void)

undefined8 FUN_14976a920(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976a940 FUN_14976a940 body=123 status=ok
// SIG undefined FUN_14976a940(void)

void FUN_14976a940(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc251c8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc251c8 = FUN_140002ddd(FUN_1467545db,uVar1,L"SquareDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc251c8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976a9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976a9bc FUN_14976a9bc body=93 status=ok
// SIG undefined FUN_14976a9bc(void)

void FUN_14976a9bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc251c8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc251c8 = FUN_140002ddd(FUN_1467545db,uVar2,L"SquareDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc251c8,param_1);
  return;
}



// FUNCTION 14976aa1a FUN_14976aa1a body=55 status=ok
// SIG undefined FUN_14976aa1a(void)

void FUN_14976aa1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc251c8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc251c8 = FUN_140002ddd(FUN_1467545db,uVar1,L"SquareDataflowNode");
  }
  return;
}



// FUNCTION 14976aa52 FUN_14976aa52 body=233 status=ok
// SIG undefined FUN_14976aa52(void)

ulonglong FUN_14976aa52(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FSquareDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976aaec;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976aaec;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976aaec;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976aaec:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976ab3e FUN_14976ab3e body=43 status=ok
// SIG undefined FUN_14976ab3e(void)

void FUN_14976ab3e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be52f00;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976ab6a FUN_14976ab6a body=43 status=ok
// SIG undefined FUN_14976ab6a(void)

void FUN_14976ab6a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be52f00;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976abba FUN_14976abba body=76 status=ok
// SIG undefined FUN_14976abba(void)

undefined8 FUN_14976abba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976ac2e FUN_14976ac2e body=59 status=ok
// SIG undefined FUN_14976ac2e(void)

undefined8 FUN_14976ac2e(longlong *param_1)

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



// FUNCTION 14976ac7a FUN_14976ac7a body=40 status=ok
// SIG undefined FUN_14976ac7a(void)

void FUN_14976ac7a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976acf0 FUN_14976acf0 body=38 status=ok
// SIG undefined FUN_14976acf0(void)

undefined8 FUN_14976acf0(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976ad16 FUN_14976ad16 body=38 status=ok
// SIG undefined FUN_14976ad16(void)

undefined8 FUN_14976ad16(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSquareRootDataflowNode",1);
  return param_2;
}



// FUNCTION 14976ad3c FUN_14976ad3c body=38 status=ok
// SIG undefined FUN_14976ad3c(void)

undefined8 FUN_14976ad3c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SquareRoot",1);
  return param_2;
}



// FUNCTION 14976ad62 FUN_14976ad62 body=38 status=ok
// SIG undefined FUN_14976ad62(void)

undefined8 FUN_14976ad62(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976ad88 FUN_14976ad88 body=32 status=ok
// SIG undefined FUN_14976ad88(void)

undefined8 FUN_14976ad88(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976ada8 FUN_14976ada8 body=123 status=ok
// SIG undefined FUN_14976ada8(void)

void FUN_14976ada8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc251e0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc251e0 = FUN_140002ddd(FUN_146754671,uVar1,L"SquareRootDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc251e0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976ae20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976ae24 FUN_14976ae24 body=93 status=ok
// SIG undefined FUN_14976ae24(void)

void FUN_14976ae24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc251e0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc251e0 = FUN_140002ddd(FUN_146754671,uVar2,L"SquareRootDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc251e0,param_1);
  return;
}



// FUNCTION 14976ae82 FUN_14976ae82 body=55 status=ok
// SIG undefined FUN_14976ae82(void)

void FUN_14976ae82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc251e0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc251e0 = FUN_140002ddd(FUN_146754671,uVar1,L"SquareRootDataflowNode");
  }
  return;
}



// FUNCTION 14976aeba FUN_14976aeba body=233 status=ok
// SIG undefined FUN_14976aeba(void)

ulonglong FUN_14976aeba(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FSquareRootDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976af54;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976af54;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976af54;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976af54:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976afa6 FUN_14976afa6 body=43 status=ok
// SIG undefined FUN_14976afa6(void)

void FUN_14976afa6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be53190;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976afd2 FUN_14976afd2 body=43 status=ok
// SIG undefined FUN_14976afd2(void)

void FUN_14976afd2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be53190;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976b022 FUN_14976b022 body=76 status=ok
// SIG undefined FUN_14976b022(void)

undefined8 FUN_14976b022(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976b096 FUN_14976b096 body=59 status=ok
// SIG undefined FUN_14976b096(void)

undefined8 FUN_14976b096(longlong *param_1)

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



// FUNCTION 14976b0e2 FUN_14976b0e2 body=40 status=ok
// SIG undefined FUN_14976b0e2(void)

void FUN_14976b0e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976b158 FUN_14976b158 body=38 status=ok
// SIG undefined FUN_14976b158(void)

undefined8 FUN_14976b158(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976b17e FUN_14976b17e body=38 status=ok
// SIG undefined FUN_14976b17e(void)

undefined8 FUN_14976b17e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FInverseSqrtDataflowNode",1);
  return param_2;
}



// FUNCTION 14976b1a4 FUN_14976b1a4 body=38 status=ok
// SIG undefined FUN_14976b1a4(void)

undefined8 FUN_14976b1a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"InverseSqrt",1);
  return param_2;
}



// FUNCTION 14976b1ca FUN_14976b1ca body=38 status=ok
// SIG undefined FUN_14976b1ca(void)

undefined8 FUN_14976b1ca(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976b1f0 FUN_14976b1f0 body=32 status=ok
// SIG undefined FUN_14976b1f0(void)

undefined8 FUN_14976b1f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976b210 FUN_14976b210 body=123 status=ok
// SIG undefined FUN_14976b210(void)

void FUN_14976b210(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc251f8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc251f8 = FUN_140002ddd(FUN_146754707,uVar1,L"InverseSqrtDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc251f8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976b288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976b28c FUN_14976b28c body=93 status=ok
// SIG undefined FUN_14976b28c(void)

void FUN_14976b28c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc251f8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc251f8 = FUN_140002ddd(FUN_146754707,uVar2,L"InverseSqrtDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc251f8,param_1);
  return;
}



// FUNCTION 14976b2ea FUN_14976b2ea body=55 status=ok
// SIG undefined FUN_14976b2ea(void)

void FUN_14976b2ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc251f8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc251f8 = FUN_140002ddd(FUN_146754707,uVar1,L"InverseSqrtDataflowNode");
  }
  return;
}



// FUNCTION 14976b322 FUN_14976b322 body=233 status=ok
// SIG undefined FUN_14976b322(void)

ulonglong FUN_14976b322(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FInverseSqrtDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976b3bc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976b3bc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976b3bc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976b3bc:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976b40e FUN_14976b40e body=43 status=ok
// SIG undefined FUN_14976b40e(void)

void FUN_14976b40e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be53430;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976b43a FUN_14976b43a body=43 status=ok
// SIG undefined FUN_14976b43a(void)

void FUN_14976b43a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be53430;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976b48a FUN_14976b48a body=76 status=ok
// SIG undefined FUN_14976b48a(void)

undefined8 FUN_14976b48a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976b4fe FUN_14976b4fe body=59 status=ok
// SIG undefined FUN_14976b4fe(void)

undefined8 FUN_14976b4fe(longlong *param_1)

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



// FUNCTION 14976b54a FUN_14976b54a body=40 status=ok
// SIG undefined FUN_14976b54a(void)

void FUN_14976b54a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976b5c0 FUN_14976b5c0 body=38 status=ok
// SIG undefined FUN_14976b5c0(void)

undefined8 FUN_14976b5c0(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976b5e6 FUN_14976b5e6 body=38 status=ok
// SIG undefined FUN_14976b5e6(void)

undefined8 FUN_14976b5e6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCubeDataflowNode",1);
  return param_2;
}



// FUNCTION 14976b60c FUN_14976b60c body=38 status=ok
// SIG undefined FUN_14976b60c(void)

undefined8 FUN_14976b60c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8616,1);
  return param_2;
}



// FUNCTION 14976b632 FUN_14976b632 body=38 status=ok
// SIG undefined FUN_14976b632(void)

undefined8 FUN_14976b632(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976b658 FUN_14976b658 body=32 status=ok
// SIG undefined FUN_14976b658(void)

undefined8 FUN_14976b658(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976b678 FUN_14976b678 body=123 status=ok
// SIG undefined FUN_14976b678(void)

void FUN_14976b678(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25210 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25210 = FUN_140002ddd(FUN_14675479d,uVar1,L"CubeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25210,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976b6f4 FUN_14976b6f4 body=93 status=ok
// SIG undefined FUN_14976b6f4(void)

void FUN_14976b6f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25210 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25210 = FUN_140002ddd(FUN_14675479d,uVar2,L"CubeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25210,param_1);
  return;
}



// FUNCTION 14976b752 FUN_14976b752 body=55 status=ok
// SIG undefined FUN_14976b752(void)

void FUN_14976b752(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25210 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25210 = FUN_140002ddd(FUN_14675479d,uVar1,L"CubeDataflowNode");
  }
  return;
}



// FUNCTION 14976b78a FUN_14976b78a body=233 status=ok
// SIG undefined FUN_14976b78a(void)

ulonglong FUN_14976b78a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FCubeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976b824;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976b824;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976b824;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976b824:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976b876 FUN_14976b876 body=43 status=ok
// SIG undefined FUN_14976b876(void)

void FUN_14976b876(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be536c0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976b8a2 FUN_14976b8a2 body=43 status=ok
// SIG undefined FUN_14976b8a2(void)

void FUN_14976b8a2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be536c0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976b8f2 FUN_14976b8f2 body=76 status=ok
// SIG undefined FUN_14976b8f2(void)

undefined8 FUN_14976b8f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976b966 FUN_14976b966 body=59 status=ok
// SIG undefined FUN_14976b966(void)

undefined8 FUN_14976b966(longlong *param_1)

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



// FUNCTION 14976b9b2 FUN_14976b9b2 body=40 status=ok
// SIG undefined FUN_14976b9b2(void)

void FUN_14976b9b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976ba28 FUN_14976ba28 body=38 status=ok
// SIG undefined FUN_14976ba28(void)

undefined8 FUN_14976ba28(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976ba4e FUN_14976ba4e body=38 status=ok
// SIG undefined FUN_14976ba4e(void)

undefined8 FUN_14976ba4e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FNegateDataflowNode",1);
  return param_2;
}



// FUNCTION 14976ba74 FUN_14976ba74 body=38 status=ok
// SIG undefined FUN_14976ba74(void)

undefined8 FUN_14976ba74(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Negate",1);
  return param_2;
}



// FUNCTION 14976ba9a FUN_14976ba9a body=38 status=ok
// SIG undefined FUN_14976ba9a(void)

undefined8 FUN_14976ba9a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976bac0 FUN_14976bac0 body=32 status=ok
// SIG undefined FUN_14976bac0(void)

undefined8 FUN_14976bac0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976bae0 FUN_14976bae0 body=123 status=ok
// SIG undefined FUN_14976bae0(void)

void FUN_14976bae0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25228 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25228 = FUN_140002ddd(FUN_146754833,uVar1,L"NegateDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25228,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976bb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976bb5c FUN_14976bb5c body=93 status=ok
// SIG undefined FUN_14976bb5c(void)

void FUN_14976bb5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25228 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25228 = FUN_140002ddd(FUN_146754833,uVar2,L"NegateDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25228,param_1);
  return;
}



// FUNCTION 14976bbba FUN_14976bbba body=55 status=ok
// SIG undefined FUN_14976bbba(void)

void FUN_14976bbba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25228 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25228 = FUN_140002ddd(FUN_146754833,uVar1,L"NegateDataflowNode");
  }
  return;
}



// FUNCTION 14976bbf2 FUN_14976bbf2 body=233 status=ok
// SIG undefined FUN_14976bbf2(void)

ulonglong FUN_14976bbf2(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FNegateDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976bc8c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976bc8c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976bc8c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976bc8c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976bcde FUN_14976bcde body=43 status=ok
// SIG undefined FUN_14976bcde(void)

void FUN_14976bcde(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be53950;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976bd0a FUN_14976bd0a body=43 status=ok
// SIG undefined FUN_14976bd0a(void)

void FUN_14976bd0a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be53950;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976bd5a FUN_14976bd5a body=76 status=ok
// SIG undefined FUN_14976bd5a(void)

undefined8 FUN_14976bd5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976bdce FUN_14976bdce body=59 status=ok
// SIG undefined FUN_14976bdce(void)

undefined8 FUN_14976bdce(longlong *param_1)

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



// FUNCTION 14976be1a FUN_14976be1a body=40 status=ok
// SIG undefined FUN_14976be1a(void)

void FUN_14976be1a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976be90 FUN_14976be90 body=38 status=ok
// SIG undefined FUN_14976be90(void)

undefined8 FUN_14976be90(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976beb6 FUN_14976beb6 body=38 status=ok
// SIG undefined FUN_14976beb6(void)

undefined8 FUN_14976beb6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FAbsDataflowNode",1);
  return param_2;
}



// FUNCTION 14976bedc FUN_14976bedc body=38 status=ok
// SIG undefined FUN_14976bedc(void)

undefined8 FUN_14976bedc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8500,1);
  return param_2;
}



// FUNCTION 14976bf02 FUN_14976bf02 body=38 status=ok
// SIG undefined FUN_14976bf02(void)

undefined8 FUN_14976bf02(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976bf28 FUN_14976bf28 body=32 status=ok
// SIG undefined FUN_14976bf28(void)

undefined8 FUN_14976bf28(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976bf48 FUN_14976bf48 body=123 status=ok
// SIG undefined FUN_14976bf48(void)

void FUN_14976bf48(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25240 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25240 = FUN_140002ddd(FUN_1467548c9,uVar1,L"AbsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25240,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976bfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976bfc4 FUN_14976bfc4 body=93 status=ok
// SIG undefined FUN_14976bfc4(void)

void FUN_14976bfc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25240 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25240 = FUN_140002ddd(FUN_1467548c9,uVar2,L"AbsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25240,param_1);
  return;
}



// FUNCTION 14976c022 FUN_14976c022 body=55 status=ok
// SIG undefined FUN_14976c022(void)

void FUN_14976c022(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25240 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25240 = FUN_140002ddd(FUN_1467548c9,uVar1,L"AbsDataflowNode");
  }
  return;
}



// FUNCTION 14976c05a FUN_14976c05a body=233 status=ok
// SIG undefined FUN_14976c05a(void)

ulonglong FUN_14976c05a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FAbsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976c0f4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976c0f4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976c0f4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976c0f4:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976c146 FUN_14976c146 body=43 status=ok
// SIG undefined FUN_14976c146(void)

void FUN_14976c146(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be53be0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976c172 FUN_14976c172 body=43 status=ok
// SIG undefined FUN_14976c172(void)

void FUN_14976c172(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be53be0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976c1c2 FUN_14976c1c2 body=76 status=ok
// SIG undefined FUN_14976c1c2(void)

undefined8 FUN_14976c1c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976c236 FUN_14976c236 body=59 status=ok
// SIG undefined FUN_14976c236(void)

undefined8 FUN_14976c236(longlong *param_1)

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



// FUNCTION 14976c282 FUN_14976c282 body=40 status=ok
// SIG undefined FUN_14976c282(void)

void FUN_14976c282(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976c2f8 FUN_14976c2f8 body=38 status=ok
// SIG undefined FUN_14976c2f8(void)

undefined8 FUN_14976c2f8(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976c31e FUN_14976c31e body=38 status=ok
// SIG undefined FUN_14976c31e(void)

undefined8 FUN_14976c31e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFloorDataflowNode",1);
  return param_2;
}



// FUNCTION 14976c344 FUN_14976c344 body=38 status=ok
// SIG undefined FUN_14976c344(void)

undefined8 FUN_14976c344(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Floor",1);
  return param_2;
}



// FUNCTION 14976c36a FUN_14976c36a body=38 status=ok
// SIG undefined FUN_14976c36a(void)

undefined8 FUN_14976c36a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976c390 FUN_14976c390 body=32 status=ok
// SIG undefined FUN_14976c390(void)

undefined8 FUN_14976c390(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976c3b0 FUN_14976c3b0 body=123 status=ok
// SIG undefined FUN_14976c3b0(void)

void FUN_14976c3b0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25258 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25258 = FUN_140002ddd(FUN_14675495f,uVar1,L"FloorDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25258,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976c428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976c42c FUN_14976c42c body=93 status=ok
// SIG undefined FUN_14976c42c(void)

void FUN_14976c42c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25258 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25258 = FUN_140002ddd(FUN_14675495f,uVar2,L"FloorDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25258,param_1);
  return;
}



// FUNCTION 14976c48a FUN_14976c48a body=55 status=ok
// SIG undefined FUN_14976c48a(void)

void FUN_14976c48a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25258 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25258 = FUN_140002ddd(FUN_14675495f,uVar1,L"FloorDataflowNode");
  }
  return;
}



// FUNCTION 14976c4c2 FUN_14976c4c2 body=233 status=ok
// SIG undefined FUN_14976c4c2(void)

ulonglong FUN_14976c4c2(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FFloorDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976c55c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976c55c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976c55c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976c55c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976c5ae FUN_14976c5ae body=43 status=ok
// SIG undefined FUN_14976c5ae(void)

void FUN_14976c5ae(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be53e70;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976c5da FUN_14976c5da body=43 status=ok
// SIG undefined FUN_14976c5da(void)

void FUN_14976c5da(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be53e70;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976c62a FUN_14976c62a body=76 status=ok
// SIG undefined FUN_14976c62a(void)

undefined8 FUN_14976c62a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976c69e FUN_14976c69e body=59 status=ok
// SIG undefined FUN_14976c69e(void)

undefined8 FUN_14976c69e(longlong *param_1)

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



// FUNCTION 14976c6ea FUN_14976c6ea body=40 status=ok
// SIG undefined FUN_14976c6ea(void)

void FUN_14976c6ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976c760 FUN_14976c760 body=38 status=ok
// SIG undefined FUN_14976c760(void)

undefined8 FUN_14976c760(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976c786 FUN_14976c786 body=38 status=ok
// SIG undefined FUN_14976c786(void)

undefined8 FUN_14976c786(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCeilDataflowNode",1);
  return param_2;
}



// FUNCTION 14976c7ac FUN_14976c7ac body=38 status=ok
// SIG undefined FUN_14976c7ac(void)

undefined8 FUN_14976c7ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8586,1);
  return param_2;
}



// FUNCTION 14976c7d2 FUN_14976c7d2 body=38 status=ok
// SIG undefined FUN_14976c7d2(void)

undefined8 FUN_14976c7d2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976c7f8 FUN_14976c7f8 body=32 status=ok
// SIG undefined FUN_14976c7f8(void)

undefined8 FUN_14976c7f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976c818 FUN_14976c818 body=123 status=ok
// SIG undefined FUN_14976c818(void)

void FUN_14976c818(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25270 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25270 = FUN_140002ddd(FUN_1467549f5,uVar1,L"CeilDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25270,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976c890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976c894 FUN_14976c894 body=93 status=ok
// SIG undefined FUN_14976c894(void)

void FUN_14976c894(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25270 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25270 = FUN_140002ddd(FUN_1467549f5,uVar2,L"CeilDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25270,param_1);
  return;
}



// FUNCTION 14976c8f2 FUN_14976c8f2 body=55 status=ok
// SIG undefined FUN_14976c8f2(void)

void FUN_14976c8f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25270 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25270 = FUN_140002ddd(FUN_1467549f5,uVar1,L"CeilDataflowNode");
  }
  return;
}



// FUNCTION 14976c92a FUN_14976c92a body=233 status=ok
// SIG undefined FUN_14976c92a(void)

ulonglong FUN_14976c92a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FCeilDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976c9c4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976c9c4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976c9c4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976c9c4:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976ca16 FUN_14976ca16 body=43 status=ok
// SIG undefined FUN_14976ca16(void)

void FUN_14976ca16(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be54100;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976ca42 FUN_14976ca42 body=43 status=ok
// SIG undefined FUN_14976ca42(void)

void FUN_14976ca42(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be54100;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976ca92 FUN_14976ca92 body=76 status=ok
// SIG undefined FUN_14976ca92(void)

undefined8 FUN_14976ca92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976cb06 FUN_14976cb06 body=59 status=ok
// SIG undefined FUN_14976cb06(void)

undefined8 FUN_14976cb06(longlong *param_1)

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



// FUNCTION 14976cb52 FUN_14976cb52 body=40 status=ok
// SIG undefined FUN_14976cb52(void)

void FUN_14976cb52(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976cbc8 FUN_14976cbc8 body=38 status=ok
// SIG undefined FUN_14976cbc8(void)

undefined8 FUN_14976cbc8(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976cbee FUN_14976cbee body=38 status=ok
// SIG undefined FUN_14976cbee(void)

undefined8 FUN_14976cbee(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRoundDataflowNode",1);
  return param_2;
}



// FUNCTION 14976cc14 FUN_14976cc14 body=38 status=ok
// SIG undefined FUN_14976cc14(void)

undefined8 FUN_14976cc14(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Round",1);
  return param_2;
}



// FUNCTION 14976cc3a FUN_14976cc3a body=38 status=ok
// SIG undefined FUN_14976cc3a(void)

undefined8 FUN_14976cc3a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976cc60 FUN_14976cc60 body=32 status=ok
// SIG undefined FUN_14976cc60(void)

undefined8 FUN_14976cc60(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976cc80 FUN_14976cc80 body=123 status=ok
// SIG undefined FUN_14976cc80(void)

void FUN_14976cc80(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25288 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25288 = FUN_140002ddd(FUN_146754a8b,uVar1,L"RoundDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25288,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976ccf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976ccfc FUN_14976ccfc body=93 status=ok
// SIG undefined FUN_14976ccfc(void)

void FUN_14976ccfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25288 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25288 = FUN_140002ddd(FUN_146754a8b,uVar2,L"RoundDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25288,param_1);
  return;
}



// FUNCTION 14976cd5a FUN_14976cd5a body=55 status=ok
// SIG undefined FUN_14976cd5a(void)

void FUN_14976cd5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25288 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25288 = FUN_140002ddd(FUN_146754a8b,uVar1,L"RoundDataflowNode");
  }
  return;
}



// FUNCTION 14976cd92 FUN_14976cd92 body=233 status=ok
// SIG undefined FUN_14976cd92(void)

ulonglong FUN_14976cd92(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FRoundDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976ce2c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976ce2c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976ce2c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976ce2c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976ce7e FUN_14976ce7e body=43 status=ok
// SIG undefined FUN_14976ce7e(void)

void FUN_14976ce7e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be54390;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976ceaa FUN_14976ceaa body=43 status=ok
// SIG undefined FUN_14976ceaa(void)

void FUN_14976ceaa(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be54390;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976cefa FUN_14976cefa body=76 status=ok
// SIG undefined FUN_14976cefa(void)

undefined8 FUN_14976cefa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976cf6e FUN_14976cf6e body=59 status=ok
// SIG undefined FUN_14976cf6e(void)

undefined8 FUN_14976cf6e(longlong *param_1)

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



// FUNCTION 14976cfba FUN_14976cfba body=40 status=ok
// SIG undefined FUN_14976cfba(void)

void FUN_14976cfba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976d030 FUN_14976d030 body=38 status=ok
// SIG undefined FUN_14976d030(void)

undefined8 FUN_14976d030(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976d056 FUN_14976d056 body=38 status=ok
// SIG undefined FUN_14976d056(void)

undefined8 FUN_14976d056(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FTruncDataflowNode",1);
  return param_2;
}



// FUNCTION 14976d07c FUN_14976d07c body=38 status=ok
// SIG undefined FUN_14976d07c(void)

undefined8 FUN_14976d07c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Trunc",1);
  return param_2;
}



// FUNCTION 14976d0a2 FUN_14976d0a2 body=38 status=ok
// SIG undefined FUN_14976d0a2(void)

undefined8 FUN_14976d0a2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976d0c8 FUN_14976d0c8 body=32 status=ok
// SIG undefined FUN_14976d0c8(void)

undefined8 FUN_14976d0c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976d0e8 FUN_14976d0e8 body=123 status=ok
// SIG undefined FUN_14976d0e8(void)

void FUN_14976d0e8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc252a0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc252a0 = FUN_140002ddd(FUN_146754b21,uVar1,L"TruncDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc252a0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976d160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976d164 FUN_14976d164 body=93 status=ok
// SIG undefined FUN_14976d164(void)

void FUN_14976d164(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc252a0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc252a0 = FUN_140002ddd(FUN_146754b21,uVar2,L"TruncDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc252a0,param_1);
  return;
}



// FUNCTION 14976d1c2 FUN_14976d1c2 body=55 status=ok
// SIG undefined FUN_14976d1c2(void)

void FUN_14976d1c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc252a0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc252a0 = FUN_140002ddd(FUN_146754b21,uVar1,L"TruncDataflowNode");
  }
  return;
}



// FUNCTION 14976d1fa FUN_14976d1fa body=233 status=ok
// SIG undefined FUN_14976d1fa(void)

ulonglong FUN_14976d1fa(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FTruncDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976d294;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976d294;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976d294;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976d294:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976d2e6 FUN_14976d2e6 body=43 status=ok
// SIG undefined FUN_14976d2e6(void)

void FUN_14976d2e6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be54620;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976d312 FUN_14976d312 body=43 status=ok
// SIG undefined FUN_14976d312(void)

void FUN_14976d312(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be54620;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976d362 FUN_14976d362 body=76 status=ok
// SIG undefined FUN_14976d362(void)

undefined8 FUN_14976d362(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976d3d6 FUN_14976d3d6 body=59 status=ok
// SIG undefined FUN_14976d3d6(void)

undefined8 FUN_14976d3d6(longlong *param_1)

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



// FUNCTION 14976d422 FUN_14976d422 body=40 status=ok
// SIG undefined FUN_14976d422(void)

void FUN_14976d422(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976d498 FUN_14976d498 body=38 status=ok
// SIG undefined FUN_14976d498(void)

undefined8 FUN_14976d498(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976d4be FUN_14976d4be body=38 status=ok
// SIG undefined FUN_14976d4be(void)

undefined8 FUN_14976d4be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFracDataflowNode",1);
  return param_2;
}



// FUNCTION 14976d4e4 FUN_14976d4e4 body=38 status=ok
// SIG undefined FUN_14976d4e4(void)

undefined8 FUN_14976d4e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8716,1);
  return param_2;
}



// FUNCTION 14976d50a FUN_14976d50a body=38 status=ok
// SIG undefined FUN_14976d50a(void)

undefined8 FUN_14976d50a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976d530 FUN_14976d530 body=32 status=ok
// SIG undefined FUN_14976d530(void)

undefined8 FUN_14976d530(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976d550 FUN_14976d550 body=123 status=ok
// SIG undefined FUN_14976d550(void)

void FUN_14976d550(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc252b8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc252b8 = FUN_140002ddd(FUN_146754bb7,uVar1,L"FracDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc252b8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976d5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976d5cc FUN_14976d5cc body=93 status=ok
// SIG undefined FUN_14976d5cc(void)

void FUN_14976d5cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc252b8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc252b8 = FUN_140002ddd(FUN_146754bb7,uVar2,L"FracDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc252b8,param_1);
  return;
}



// FUNCTION 14976d62a FUN_14976d62a body=55 status=ok
// SIG undefined FUN_14976d62a(void)

void FUN_14976d62a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc252b8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc252b8 = FUN_140002ddd(FUN_146754bb7,uVar1,L"FracDataflowNode");
  }
  return;
}



// FUNCTION 14976d662 FUN_14976d662 body=233 status=ok
// SIG undefined FUN_14976d662(void)

ulonglong FUN_14976d662(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FFracDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976d6fc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976d6fc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976d6fc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976d6fc:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976d74e FUN_14976d74e body=53 status=ok
// SIG undefined FUN_14976d74e(void)

void FUN_14976d74e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be548b0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 14976d784 FUN_14976d784 body=53 status=ok
// SIG undefined FUN_14976d784(void)

void FUN_14976d784(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be548b0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 14976d7de FUN_14976d7de body=88 status=ok
// SIG undefined FUN_14976d7de(void)

undefined8 FUN_14976d7de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 14976d85e FUN_14976d85e body=59 status=ok
// SIG undefined FUN_14976d85e(void)

undefined8 FUN_14976d85e(longlong *param_1)

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



// FUNCTION 14976d8aa FUN_14976d8aa body=40 status=ok
// SIG undefined FUN_14976d8aa(void)

void FUN_14976d8aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14976d920 FUN_14976d920 body=38 status=ok
// SIG undefined FUN_14976d920(void)

undefined8 FUN_14976d920(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976d946 FUN_14976d946 body=38 status=ok
// SIG undefined FUN_14976d946(void)

undefined8 FUN_14976d946(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMinDataflowNode",1);
  return param_2;
}



// FUNCTION 14976d96c FUN_14976d96c body=38 status=ok
// SIG undefined FUN_14976d96c(void)

undefined8 FUN_14976d96c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149e4faf8,1);
  return param_2;
}



// FUNCTION 14976d992 FUN_14976d992 body=38 status=ok
// SIG undefined FUN_14976d992(void)

undefined8 FUN_14976d992(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976d9b8 FUN_14976d9b8 body=32 status=ok
// SIG undefined FUN_14976d9b8(void)

undefined8 FUN_14976d9b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976d9d8 FUN_14976d9d8 body=123 status=ok
// SIG undefined FUN_14976d9d8(void)

void FUN_14976d9d8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc252d0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc252d0 = FUN_140002ddd(FUN_146754c4d,uVar1,L"MinDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc252d0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976da50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976da54 FUN_14976da54 body=93 status=ok
// SIG undefined FUN_14976da54(void)

void FUN_14976da54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc252d0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc252d0 = FUN_140002ddd(FUN_146754c4d,uVar2,L"MinDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc252d0,param_1);
  return;
}



// FUNCTION 14976dab2 FUN_14976dab2 body=55 status=ok
// SIG undefined FUN_14976dab2(void)

void FUN_14976dab2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc252d0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc252d0 = FUN_140002ddd(FUN_146754c4d,uVar1,L"MinDataflowNode");
  }
  return;
}



// FUNCTION 14976daea FUN_14976daea body=233 status=ok
// SIG undefined FUN_14976daea(void)

ulonglong FUN_14976daea(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FMinDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976db84;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976db84;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976db84;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976db84:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976dbd6 FUN_14976dbd6 body=53 status=ok
// SIG undefined FUN_14976dbd6(void)

void FUN_14976dbd6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be54b40;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 14976dc0c FUN_14976dc0c body=53 status=ok
// SIG undefined FUN_14976dc0c(void)

void FUN_14976dc0c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be54b40;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 14976dc66 FUN_14976dc66 body=88 status=ok
// SIG undefined FUN_14976dc66(void)

undefined8 FUN_14976dc66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 14976dce6 FUN_14976dce6 body=59 status=ok
// SIG undefined FUN_14976dce6(void)

undefined8 FUN_14976dce6(longlong *param_1)

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



// FUNCTION 14976dd32 FUN_14976dd32 body=40 status=ok
// SIG undefined FUN_14976dd32(void)

void FUN_14976dd32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14976dda8 FUN_14976dda8 body=38 status=ok
// SIG undefined FUN_14976dda8(void)

undefined8 FUN_14976dda8(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976ddce FUN_14976ddce body=38 status=ok
// SIG undefined FUN_14976ddce(void)

undefined8 FUN_14976ddce(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMaxDataflowNode",1);
  return param_2;
}



// FUNCTION 14976ddf4 FUN_14976ddf4 body=38 status=ok
// SIG undefined FUN_14976ddf4(void)

undefined8 FUN_14976ddf4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149e4fb40,1);
  return param_2;
}



// FUNCTION 14976de1a FUN_14976de1a body=38 status=ok
// SIG undefined FUN_14976de1a(void)

undefined8 FUN_14976de1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976de40 FUN_14976de40 body=32 status=ok
// SIG undefined FUN_14976de40(void)

undefined8 FUN_14976de40(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976de60 FUN_14976de60 body=123 status=ok
// SIG undefined FUN_14976de60(void)

void FUN_14976de60(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc252e8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc252e8 = FUN_140002ddd(FUN_146754ce3,uVar1,L"MaxDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc252e8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976ded8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976dedc FUN_14976dedc body=93 status=ok
// SIG undefined FUN_14976dedc(void)

void FUN_14976dedc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc252e8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc252e8 = FUN_140002ddd(FUN_146754ce3,uVar2,L"MaxDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc252e8,param_1);
  return;
}



// FUNCTION 14976df3a FUN_14976df3a body=55 status=ok
// SIG undefined FUN_14976df3a(void)

void FUN_14976df3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc252e8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc252e8 = FUN_140002ddd(FUN_146754ce3,uVar1,L"MaxDataflowNode");
  }
  return;
}



// FUNCTION 14976df72 FUN_14976df72 body=233 status=ok
// SIG undefined FUN_14976df72(void)

ulonglong FUN_14976df72(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FMaxDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976e00c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976e00c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976e00c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976e00c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976e05e FUN_14976e05e body=42 status=ok
// SIG undefined FUN_14976e05e(void)

void FUN_14976e05e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be54dd0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14976e088 FUN_14976e088 body=42 status=ok
// SIG undefined FUN_14976e088(void)

void FUN_14976e088(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be54dd0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14976e0d6 FUN_14976e0d6 body=76 status=ok
// SIG undefined FUN_14976e0d6(void)

undefined1 FUN_14976e0d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 14976e14a FUN_14976e14a body=59 status=ok
// SIG undefined FUN_14976e14a(void)

undefined8 FUN_14976e14a(longlong *param_1)

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



// FUNCTION 14976e196 FUN_14976e196 body=40 status=ok
// SIG undefined FUN_14976e196(void)

void FUN_14976e196(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14976e20c FUN_14976e20c body=38 status=ok
// SIG undefined FUN_14976e20c(void)

undefined8 FUN_14976e20c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976e232 FUN_14976e232 body=38 status=ok
// SIG undefined FUN_14976e232(void)

undefined8 FUN_14976e232(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMin3DataflowNode",1);
  return param_2;
}



// FUNCTION 14976e258 FUN_14976e258 body=38 status=ok
// SIG undefined FUN_14976e258(void)

undefined8 FUN_14976e258(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_14be54ef2,1);
  return param_2;
}



// FUNCTION 14976e27e FUN_14976e27e body=38 status=ok
// SIG undefined FUN_14976e27e(void)

undefined8 FUN_14976e27e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976e2a4 FUN_14976e2a4 body=32 status=ok
// SIG undefined FUN_14976e2a4(void)

undefined8 FUN_14976e2a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976e2c4 FUN_14976e2c4 body=123 status=ok
// SIG undefined FUN_14976e2c4(void)

void FUN_14976e2c4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25300 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25300 = FUN_140002ddd(FUN_146754d79,uVar1,L"Min3DataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25300,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976e33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976e340 FUN_14976e340 body=93 status=ok
// SIG undefined FUN_14976e340(void)

void FUN_14976e340(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25300 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25300 = FUN_140002ddd(FUN_146754d79,uVar2,L"Min3DataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25300,param_1);
  return;
}



// FUNCTION 14976e39e FUN_14976e39e body=55 status=ok
// SIG undefined FUN_14976e39e(void)

void FUN_14976e39e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25300 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25300 = FUN_140002ddd(FUN_146754d79,uVar1,L"Min3DataflowNode");
  }
  return;
}



// FUNCTION 14976e3d6 FUN_14976e3d6 body=233 status=ok
// SIG undefined FUN_14976e3d6(void)

ulonglong FUN_14976e3d6(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FMin3DataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976e470;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976e470;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976e470;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976e470:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976e4c2 FUN_14976e4c2 body=42 status=ok
// SIG undefined FUN_14976e4c2(void)

void FUN_14976e4c2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be55060;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14976e4ec FUN_14976e4ec body=42 status=ok
// SIG undefined FUN_14976e4ec(void)

void FUN_14976e4ec(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be55060;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14976e53a FUN_14976e53a body=76 status=ok
// SIG undefined FUN_14976e53a(void)

undefined1 FUN_14976e53a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 14976e5ae FUN_14976e5ae body=59 status=ok
// SIG undefined FUN_14976e5ae(void)

undefined8 FUN_14976e5ae(longlong *param_1)

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



// FUNCTION 14976e5fa FUN_14976e5fa body=40 status=ok
// SIG undefined FUN_14976e5fa(void)

void FUN_14976e5fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14976e670 FUN_14976e670 body=38 status=ok
// SIG undefined FUN_14976e670(void)

undefined8 FUN_14976e670(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976e696 FUN_14976e696 body=38 status=ok
// SIG undefined FUN_14976e696(void)

undefined8 FUN_14976e696(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMax3DataflowNode",1);
  return param_2;
}



// FUNCTION 14976e6bc FUN_14976e6bc body=38 status=ok
// SIG undefined FUN_14976e6bc(void)

undefined8 FUN_14976e6bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_14be55182,1);
  return param_2;
}



// FUNCTION 14976e6e2 FUN_14976e6e2 body=38 status=ok
// SIG undefined FUN_14976e6e2(void)

undefined8 FUN_14976e6e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976e708 FUN_14976e708 body=32 status=ok
// SIG undefined FUN_14976e708(void)

undefined8 FUN_14976e708(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976e728 FUN_14976e728 body=123 status=ok
// SIG undefined FUN_14976e728(void)

void FUN_14976e728(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25318 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25318 = FUN_140002ddd(FUN_146754e0f,uVar1,L"Max3DataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25318,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976e7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976e7a4 FUN_14976e7a4 body=93 status=ok
// SIG undefined FUN_14976e7a4(void)

void FUN_14976e7a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25318 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25318 = FUN_140002ddd(FUN_146754e0f,uVar2,L"Max3DataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25318,param_1);
  return;
}



// FUNCTION 14976e802 FUN_14976e802 body=55 status=ok
// SIG undefined FUN_14976e802(void)

void FUN_14976e802(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25318 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25318 = FUN_140002ddd(FUN_146754e0f,uVar1,L"Max3DataflowNode");
  }
  return;
}



// FUNCTION 14976e83a FUN_14976e83a body=233 status=ok
// SIG undefined FUN_14976e83a(void)

ulonglong FUN_14976e83a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FMax3DataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976e8d4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976e8d4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976e8d4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976e8d4:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976e926 FUN_14976e926 body=43 status=ok
// SIG undefined FUN_14976e926(void)

void FUN_14976e926(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be552f0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976e952 FUN_14976e952 body=43 status=ok
// SIG undefined FUN_14976e952(void)

void FUN_14976e952(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be552f0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14976e9a2 FUN_14976e9a2 body=76 status=ok
// SIG undefined FUN_14976e9a2(void)

undefined8 FUN_14976e9a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14976ea16 FUN_14976ea16 body=59 status=ok
// SIG undefined FUN_14976ea16(void)

undefined8 FUN_14976ea16(longlong *param_1)

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



// FUNCTION 14976ea62 FUN_14976ea62 body=40 status=ok
// SIG undefined FUN_14976ea62(void)

void FUN_14976ea62(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14976ead8 FUN_14976ead8 body=38 status=ok
// SIG undefined FUN_14976ead8(void)

undefined8 FUN_14976ead8(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976eafe FUN_14976eafe body=38 status=ok
// SIG undefined FUN_14976eafe(void)

undefined8 FUN_14976eafe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSignDataflowNode",1);
  return param_2;
}



// FUNCTION 14976eb24 FUN_14976eb24 body=38 status=ok
// SIG undefined FUN_14976eb24(void)

undefined8 FUN_14976eb24(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149fb8a56,1);
  return param_2;
}



// FUNCTION 14976eb4a FUN_14976eb4a body=38 status=ok
// SIG undefined FUN_14976eb4a(void)

undefined8 FUN_14976eb4a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 14976eb70 FUN_14976eb70 body=32 status=ok
// SIG undefined FUN_14976eb70(void)

undefined8 FUN_14976eb70(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14976eb90 FUN_14976eb90 body=123 status=ok
// SIG undefined FUN_14976eb90(void)

void FUN_14976eb90(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25330 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25330 = FUN_140002ddd(FUN_146754ea5,uVar1,L"SignDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25330,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014976ec08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14976ec0c FUN_14976ec0c body=93 status=ok
// SIG undefined FUN_14976ec0c(void)

void FUN_14976ec0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25330 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25330 = FUN_140002ddd(FUN_146754ea5,uVar2,L"SignDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25330,param_1);
  return;
}



// FUNCTION 14976ec6a FUN_14976ec6a body=55 status=ok
// SIG undefined FUN_14976ec6a(void)

void FUN_14976ec6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25330 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25330 = FUN_140002ddd(FUN_146754ea5,uVar1,L"SignDataflowNode");
  }
  return;
}



// FUNCTION 14976eca2 FUN_14976eca2 body=233 status=ok
// SIG undefined FUN_14976eca2(void)

ulonglong FUN_14976eca2(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FSignDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14976ed3c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14976ed3c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14976ed3c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14976ed3c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14976ed8e FUN_14976ed8e body=46 status=ok
// SIG undefined FUN_14976ed8e(void)

void FUN_14976ed8e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be55580;
  param_2[0x33] = 0;
  param_2[0x34] = 0x3f800000;
  return;
}



// FUNCTION 14976edbc FUN_14976edbc body=46 status=ok
// SIG undefined FUN_14976edbc(void)

void FUN_14976edbc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be55580;
  param_2[0x33] = 0;
  param_2[0x34] = 0x3f800000;
  return;
}



// FUNCTION 14976ee0e FUN_14976ee0e body=76 status=ok
// SIG undefined FUN_14976ee0e(void)

undefined1 FUN_14976ee0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 14976ee82 FUN_14976ee82 body=59 status=ok
// SIG undefined FUN_14976ee82(void)

undefined8 FUN_14976ee82(longlong *param_1)

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



// FUNCTION 14976eece FUN_14976eece body=40 status=ok
// SIG undefined FUN_14976eece(void)

void FUN_14976eece(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14976ef44 FUN_14976ef44 body=38 status=ok
// SIG undefined FUN_14976ef44(void)

undefined8 FUN_14976ef44(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14976ef6a FUN_14976ef6a body=38 status=ok
// SIG undefined FUN_14976ef6a(void)

undefined8 FUN_14976ef6a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FClampDataflowNode",1);
  return param_2;
}



// FUNCTION 14976ef90 FUN_14976ef90 body=38 status=ok
// SIG undefined FUN_14976ef90(void)

undefined8 FUN_14976ef90(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Clamp",1);
  return param_2;
}


