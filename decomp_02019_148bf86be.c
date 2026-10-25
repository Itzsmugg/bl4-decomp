// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148bf86be FUN_148bf86be body=163 status=ok
// SIG undefined FUN_148bf86be(void)

void FUN_148bf86be(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_148cceb76(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf87a6 FUN_148bf87a6 body=37 status=ok
// SIG undefined FUN_148bf87a6(void)

void FUN_148bf87a6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140ed89b6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bf87d0 FUN_148bf87d0 body=37 status=ok
// SIG undefined FUN_148bf87d0(void)

void FUN_148bf87d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148cce8c2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bf8822 FUN_148bf8822 body=261 status=ok
// SIG undefined FUN_148bf8822(void)

void FUN_148bf8822(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  (**(code **)(*(longlong *)(param_1 + 0x3c60) + 0x28))(param_1 + 0x3c60,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf892e FUN_148bf892e body=261 status=ok
// SIG undefined FUN_148bf892e(void)

void FUN_148bf892e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  (**(code **)(*(longlong *)(param_1 + 0x3c60) + 0x40))(param_1 + 0x3c60,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf8a38 FUN_148bf8a38 body=322 status=ok
// SIG undefined FUN_148bf8a38(void)

void FUN_148bf8a38(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [38];
  undefined1 local_22;
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
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_22 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_22);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_22);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d42226(param_1,local_20,local_21,local_22);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf8c00 FUN_148bf8c00 body=151 status=ok
// SIG undefined FUN_148bf8c00(void)

void FUN_148bf8c00(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148ccd7a6(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf8c9c FUN_148bf8c9c body=156 status=ok
// SIG undefined FUN_148bf8c9c(void)

void FUN_148bf8c9c(undefined8 param_1,longlong param_2)

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
  FUN_148cce9bc(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf8d50 FUN_148bf8d50 body=156 status=ok
// SIG undefined FUN_148bf8d50(void)

void FUN_148bf8d50(undefined8 param_1,longlong param_2)

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
  FUN_148ccf65c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf8dee FUN_148bf8dee body=204 status=ok
// SIG undefined FUN_148bf8dee(void)

void FUN_148bf8dee(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148ccc738(param_1,plVar1);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf8ebc FUN_148bf8ebc body=204 status=ok
// SIG undefined FUN_148bf8ebc(void)

void FUN_148bf8ebc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148ccc80e(param_1,plVar1);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf8f8a FUN_148bf8f8a body=47 status=ok
// SIG undefined FUN_148bf8f8a(void)

void FUN_148bf8f8a(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba8010);
                    /* WARNING: Could not recover jumptable at 0x000148bf8fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148bf8fba FUN_148bf8fba body=72 status=ok
// SIG undefined FUN_148bf8fba(void)

void FUN_148bf8fba(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xb58))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148bf8fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb60))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerGiveUp_Validate");
  return;
}



// FUNCTION 148bf9002 FUN_148bf9002 body=126 status=ok
// SIG undefined FUN_148bf9002(void)

void FUN_148bf9002(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_23 = param_5;
  local_30 = param_2;
  local_28 = param_3;
  local_24 = param_4;
  uVar1 = FUN_14477b072(param_1 + -0x3a30,DAT_14cba8020);
  (**(code **)(*(longlong *)(param_1 + -0x3a30) + 0x248))(param_1 + -0x3a30,uVar1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf908e FUN_148bf908e body=481 status=ok
// SIG undefined FUN_148bf908e(void)

void FUN_148bf908e(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  iVar2 = local_38;
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_3c != 0;
  cVar3 = (**(code **)(*param_1 + 0xaf0))(param_1,local_30,local_34,iVar2 != 0);
  if (cVar3 == '\0') {
    FUN_1468998ea(L"ServerLockWeaponActions_Validate");
  }
  else {
    local_48 = iVar1 != 0;
    (**(code **)(*param_1 + 0xaf8))(param_1,local_30,local_34,iVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf9284 FUN_148bf9284 body=115 status=ok
// SIG undefined FUN_148bf9284(void)

void FUN_148bf9284(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  uVar1 = FUN_14477b072(param_1 + -0x3a30,DAT_14cba80d0);
  (**(code **)(*(longlong *)(param_1 + -0x3a30) + 0x248))(param_1 + -0x3a30,uVar1,&local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf92fe FUN_148bf92fe body=381 status=ok
// SIG undefined FUN_148bf92fe(void)

void FUN_148bf92fe(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0xb10))(param_1,local_24,local_28,local_2c != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerStopWeaponActions_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xb18))(param_1,local_24,local_28,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf947c FUN_148bf947c body=72 status=ok
// SIG undefined FUN_148bf947c(void)

void FUN_148bf947c(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x9f8))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148bf94ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa00))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerTryToUncarry_Validate");
  return;
}



// FUNCTION 148bf94c4 FUN_148bf94c4 body=112 status=ok
// SIG undefined FUN_148bf94c4(void)

void FUN_148bf94c4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  uVar1 = FUN_14477b072(param_1 + -0x3a30,DAT_14cba8100);
  (**(code **)(*(longlong *)(param_1 + -0x3a30) + 0x248))(param_1 + -0x3a30,uVar1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf9536 FUN_148bf9536 body=289 status=ok
// SIG undefined FUN_148bf9536(void)

void FUN_148bf9536(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  cVar1 = (**(code **)(*param_1 + 0xae0))(param_1,local_20,local_24);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerUnlockWeaponActions_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xae8))(param_1,local_20,local_24);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf965e FUN_148bf965e body=178 status=ok
// SIG undefined FUN_148bf965e(void)

void FUN_148bf965e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar1 = FUN_148ccf5c8(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf9716 FUN_148bf9716 body=158 status=ok
// SIG undefined FUN_148bf9716(void)

void FUN_148bf9716(undefined8 param_1,longlong param_2)

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
  FUN_14034ef3a(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf97ba FUN_148bf97ba body=158 status=ok
// SIG undefined FUN_148bf97ba(void)

void FUN_148bf97ba(undefined8 param_1,longlong param_2)

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
  FUN_148ccc55e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf985a FUN_148bf985a body=169 status=ok
// SIG undefined FUN_148bf985a(void)

void FUN_148bf985a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_148ccc5ae(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf9904 FUN_148bf9904 body=169 status=ok
// SIG undefined FUN_148bf9904(void)

void FUN_148bf9904(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_148cccaee(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf99ae FUN_148bf99ae body=169 status=ok
// SIG undefined FUN_148bf99ae(void)

void FUN_148bf99ae(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_148ccc652(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf9a58 FUN_148bf9a58 body=204 status=ok
// SIG undefined FUN_148bf9a58(void)

void FUN_148bf9a58(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148ccc6a4(param_1,plVar1);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf9b26 FUN_148bf9b26 body=169 status=ok
// SIG undefined FUN_148bf9b26(void)

void FUN_148bf9b26(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_148ccc600(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf9bd0 FUN_148bf9bd0 body=204 status=ok
// SIG undefined FUN_148bf9bd0(void)

void FUN_148bf9bd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148ccc77a(param_1,plVar1);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf9c9e FUN_148bf9c9e body=169 status=ok
// SIG undefined FUN_148bf9c9e(void)

void FUN_148bf9c9e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_148ccc850(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf9d48 FUN_148bf9d48 body=169 status=ok
// SIG undefined FUN_148bf9d48(void)

void FUN_148bf9d48(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_148cccb40(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf9df2 FUN_148bf9df2 body=169 status=ok
// SIG undefined FUN_148bf9df2(void)

void FUN_148bf9df2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_148ccc8a2(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf9e9c FUN_148bf9e9c body=169 status=ok
// SIG undefined FUN_148bf9e9c(void)

void FUN_148bf9e9c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_148ccca9c(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf9f4a FUN_148bf9f4a body=264 status=ok
// SIG undefined FUN_148bf9f4a(void)

void FUN_148bf9f4a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_2c;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cce124(param_1,iVar1 != 0,puVar2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfa05e FUN_148bfa05e body=158 status=ok
// SIG undefined FUN_148bfa05e(void)

void FUN_148bfa05e(undefined8 param_1,longlong param_2)

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
  FUN_145950952(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfa102 FUN_148bfa102 body=264 status=ok
// SIG undefined FUN_148bfa102(void)

void FUN_148bfa102(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_2c;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1418d56de(param_1,iVar1 != 0,puVar2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfa210 FUN_148bfa210 body=264 status=ok
// SIG undefined FUN_148bfa210(void)

void FUN_148bfa210(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_2c;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1418d56de(param_1,iVar1 != 0,puVar2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfa31a FUN_148bfa31a body=209 status=ok
// SIG undefined FUN_148bfa31a(void)

void FUN_148bfa31a(undefined8 param_1,longlong param_2)

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
  FUN_146210ace(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfa3ec FUN_148bfa3ec body=209 status=ok
// SIG undefined FUN_148bfa3ec(void)

void FUN_148bfa3ec(undefined8 param_1,longlong param_2)

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
  FUN_145704c8c(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfa4c2 FUN_148bfa4c2 body=158 status=ok
// SIG undefined FUN_148bfa4c2(void)

void FUN_148bfa4c2(undefined8 param_1,longlong param_2)

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
  FUN_148ccc0fc(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfa568 FUN_148bfa568 body=178 status=ok
// SIG undefined FUN_148bfa568(void)

void FUN_148bfa568(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar1 = FUN_148ccf612(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfa61c FUN_148bfa61c body=209 status=ok
// SIG undefined FUN_148bfa61c(void)

void FUN_148bfa61c(undefined8 param_1,longlong param_2)

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
  FUN_14111ff08(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfa6f2 FUN_148bfa6f2 body=239 status=ok
// SIG undefined FUN_148bfa6f2(void)

void FUN_148bfa6f2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [35];
  undefined1 local_25;
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
  local_25 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cce880(param_1,iVar1 != 0,local_25);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfa7e6 FUN_148bfa7e6 body=158 status=ok
// SIG undefined FUN_148bfa7e6(void)

void FUN_148bfa7e6(undefined8 param_1,longlong param_2)

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
  FUN_148cce7d2(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfa88c FUN_148bfa88c body=163 status=ok
// SIG undefined FUN_148bfa88c(void)

void FUN_148bfa88c(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_148ccebac(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfa930 FUN_148bfa930 body=72 status=ok
// SIG undefined FUN_148bfa930(void)

void FUN_148bfa930(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xa38))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148bfa960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa40))(param_1);
    return;
  }
  FUN_1468998ea(L"StartHealSelf_Validate");
  return;
}



// FUNCTION 148bfa97e FUN_148bfa97e body=163 status=ok
// SIG undefined FUN_148bfa97e(void)

void FUN_148bfa97e(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_148ccec40(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfaa22 FUN_148bfaa22 body=72 status=ok
// SIG undefined FUN_148bfaa22(void)

void FUN_148bfaa22(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xa28))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148bfaa52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa30))(param_1);
    return;
  }
  FUN_1468998ea(L"StopHealSelf_Validate");
  return;
}



// FUNCTION 148bfaa74 FUN_148bfaa74 body=239 status=ok
// SIG undefined FUN_148bfaa74(void)

void FUN_148bfaa74(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cce29e(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfab80 FUN_148bfab80 body=156 status=ok
// SIG undefined FUN_148bfab80(void)

void FUN_148bfab80(undefined8 param_1,longlong param_2)

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
  FUN_148ccfb56(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfac5e FUN_148bfac5e body=48 status=ok
// SIG undefined FUN_148bfac5e(void)

longlong FUN_148bfac5e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfac8e FUN_148bfac8e body=48 status=ok
// SIG undefined FUN_148bfac8e(void)

longlong FUN_148bfac8e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfacbe FUN_148bfacbe body=48 status=ok
// SIG undefined FUN_148bfacbe(void)

longlong FUN_148bfacbe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfacee FUN_148bfacee body=48 status=ok
// SIG undefined FUN_148bfacee(void)

longlong FUN_148bfacee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfad1e FUN_148bfad1e body=48 status=ok
// SIG undefined FUN_148bfad1e(void)

longlong FUN_148bfad1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfad4e FUN_148bfad4e body=48 status=ok
// SIG undefined FUN_148bfad4e(void)

longlong FUN_148bfad4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfad7e FUN_148bfad7e body=48 status=ok
// SIG undefined FUN_148bfad7e(void)

longlong FUN_148bfad7e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfadae FUN_148bfadae body=48 status=ok
// SIG undefined FUN_148bfadae(void)

longlong FUN_148bfadae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfadde FUN_148bfadde body=48 status=ok
// SIG undefined FUN_148bfadde(void)

longlong FUN_148bfadde(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfae0e FUN_148bfae0e body=48 status=ok
// SIG undefined FUN_148bfae0e(void)

longlong FUN_148bfae0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfae3e FUN_148bfae3e body=48 status=ok
// SIG undefined FUN_148bfae3e(void)

longlong FUN_148bfae3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfae6e FUN_148bfae6e body=48 status=ok
// SIG undefined FUN_148bfae6e(void)

longlong FUN_148bfae6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfae9e FUN_148bfae9e body=48 status=ok
// SIG undefined FUN_148bfae9e(void)

longlong FUN_148bfae9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfaece FUN_148bfaece body=48 status=ok
// SIG undefined FUN_148bfaece(void)

longlong FUN_148bfaece(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfaefe FUN_148bfaefe body=48 status=ok
// SIG undefined FUN_148bfaefe(void)

longlong FUN_148bfaefe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfaf2e FUN_148bfaf2e body=48 status=ok
// SIG undefined FUN_148bfaf2e(void)

longlong FUN_148bfaf2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfaf5e FUN_148bfaf5e body=48 status=ok
// SIG undefined FUN_148bfaf5e(void)

longlong FUN_148bfaf5e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfaf8e FUN_148bfaf8e body=48 status=ok
// SIG undefined FUN_148bfaf8e(void)

longlong FUN_148bfaf8e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfafbe FUN_148bfafbe body=48 status=ok
// SIG undefined FUN_148bfafbe(void)

longlong FUN_148bfafbe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfafee FUN_148bfafee body=48 status=ok
// SIG undefined FUN_148bfafee(void)

longlong FUN_148bfafee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb01e FUN_148bfb01e body=48 status=ok
// SIG undefined FUN_148bfb01e(void)

longlong FUN_148bfb01e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb04e FUN_148bfb04e body=48 status=ok
// SIG undefined FUN_148bfb04e(void)

longlong FUN_148bfb04e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb07e FUN_148bfb07e body=48 status=ok
// SIG undefined FUN_148bfb07e(void)

longlong FUN_148bfb07e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb0ae FUN_148bfb0ae body=48 status=ok
// SIG undefined FUN_148bfb0ae(void)

longlong FUN_148bfb0ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb0de FUN_148bfb0de body=48 status=ok
// SIG undefined FUN_148bfb0de(void)

longlong FUN_148bfb0de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb10e FUN_148bfb10e body=48 status=ok
// SIG undefined FUN_148bfb10e(void)

longlong FUN_148bfb10e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb13e FUN_148bfb13e body=48 status=ok
// SIG undefined FUN_148bfb13e(void)

longlong FUN_148bfb13e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb16e FUN_148bfb16e body=48 status=ok
// SIG undefined FUN_148bfb16e(void)

longlong FUN_148bfb16e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb19e FUN_148bfb19e body=48 status=ok
// SIG undefined FUN_148bfb19e(void)

longlong FUN_148bfb19e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb1ce FUN_148bfb1ce body=45 status=ok
// SIG undefined FUN_148bfb1ce(void)

longlong FUN_148bfb1ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a3c2fe(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb1fc FUN_148bfb1fc body=48 status=ok
// SIG undefined FUN_148bfb1fc(void)

longlong FUN_148bfb1fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_140ce0512(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb22c FUN_148bfb22c body=48 status=ok
// SIG undefined FUN_148bfb22c(void)

longlong FUN_148bfb22c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_140ce0512(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb25c FUN_148bfb25c body=48 status=ok
// SIG undefined FUN_148bfb25c(void)

longlong FUN_148bfb25c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb28c FUN_148bfb28c body=48 status=ok
// SIG undefined FUN_148bfb28c(void)

longlong FUN_148bfb28c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb2bc FUN_148bfb2bc body=48 status=ok
// SIG undefined FUN_148bfb2bc(void)

longlong FUN_148bfb2bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb2ec FUN_148bfb2ec body=48 status=ok
// SIG undefined FUN_148bfb2ec(void)

longlong FUN_148bfb2ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb31c FUN_148bfb31c body=48 status=ok
// SIG undefined FUN_148bfb31c(void)

longlong FUN_148bfb31c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb34c FUN_148bfb34c body=48 status=ok
// SIG undefined FUN_148bfb34c(void)

longlong FUN_148bfb34c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb37c FUN_148bfb37c body=48 status=ok
// SIG undefined FUN_148bfb37c(void)

longlong FUN_148bfb37c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb3ac FUN_148bfb3ac body=48 status=ok
// SIG undefined FUN_148bfb3ac(void)

longlong FUN_148bfb3ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb3dc FUN_148bfb3dc body=48 status=ok
// SIG undefined FUN_148bfb3dc(void)

longlong FUN_148bfb3dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb40c FUN_148bfb40c body=48 status=ok
// SIG undefined FUN_148bfb40c(void)

longlong FUN_148bfb40c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb43c FUN_148bfb43c body=48 status=ok
// SIG undefined FUN_148bfb43c(void)

longlong FUN_148bfb43c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb46c FUN_148bfb46c body=48 status=ok
// SIG undefined FUN_148bfb46c(void)

longlong FUN_148bfb46c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb49c FUN_148bfb49c body=48 status=ok
// SIG undefined FUN_148bfb49c(void)

longlong FUN_148bfb49c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb4cc FUN_148bfb4cc body=48 status=ok
// SIG undefined FUN_148bfb4cc(void)

longlong FUN_148bfb4cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb4fc FUN_148bfb4fc body=48 status=ok
// SIG undefined FUN_148bfb4fc(void)

longlong FUN_148bfb4fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb52c FUN_148bfb52c body=48 status=ok
// SIG undefined FUN_148bfb52c(void)

longlong FUN_148bfb52c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb55c FUN_148bfb55c body=48 status=ok
// SIG undefined FUN_148bfb55c(void)

longlong FUN_148bfb55c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb58c FUN_148bfb58c body=48 status=ok
// SIG undefined FUN_148bfb58c(void)

longlong FUN_148bfb58c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb5bc FUN_148bfb5bc body=48 status=ok
// SIG undefined FUN_148bfb5bc(void)

longlong FUN_148bfb5bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb5ec FUN_148bfb5ec body=48 status=ok
// SIG undefined FUN_148bfb5ec(void)

longlong FUN_148bfb5ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb61c FUN_148bfb61c body=48 status=ok
// SIG undefined FUN_148bfb61c(void)

longlong FUN_148bfb61c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb64c FUN_148bfb64c body=48 status=ok
// SIG undefined FUN_148bfb64c(void)

longlong FUN_148bfb64c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb67c FUN_148bfb67c body=48 status=ok
// SIG undefined FUN_148bfb67c(void)

longlong FUN_148bfb67c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb6ac FUN_148bfb6ac body=48 status=ok
// SIG undefined FUN_148bfb6ac(void)

longlong FUN_148bfb6ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb6dc FUN_148bfb6dc body=48 status=ok
// SIG undefined FUN_148bfb6dc(void)

longlong FUN_148bfb6dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb70c FUN_148bfb70c body=48 status=ok
// SIG undefined FUN_148bfb70c(void)

longlong FUN_148bfb70c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb73c FUN_148bfb73c body=48 status=ok
// SIG undefined FUN_148bfb73c(void)

longlong FUN_148bfb73c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb76c FUN_148bfb76c body=48 status=ok
// SIG undefined FUN_148bfb76c(void)

longlong FUN_148bfb76c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb79c FUN_148bfb79c body=48 status=ok
// SIG undefined FUN_148bfb79c(void)

longlong FUN_148bfb79c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb7cc FUN_148bfb7cc body=45 status=ok
// SIG undefined FUN_148bfb7cc(void)

longlong FUN_148bfb7cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141692ee4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb7fa FUN_148bfb7fa body=48 status=ok
// SIG undefined FUN_148bfb7fa(void)

longlong FUN_148bfb7fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x860;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb82a FUN_148bfb82a body=48 status=ok
// SIG undefined FUN_148bfb82a(void)

longlong FUN_148bfb82a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x868;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb85a FUN_148bfb85a body=48 status=ok
// SIG undefined FUN_148bfb85a(void)

longlong FUN_148bfb85a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x870;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb88a FUN_148bfb88a body=48 status=ok
// SIG undefined FUN_148bfb88a(void)

longlong FUN_148bfb88a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10a0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb8ba FUN_148bfb8ba body=48 status=ok
// SIG undefined FUN_148bfb8ba(void)

longlong FUN_148bfb8ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10a8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb8ea FUN_148bfb8ea body=48 status=ok
// SIG undefined FUN_148bfb8ea(void)

longlong FUN_148bfb8ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10b0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb91a FUN_148bfb91a body=48 status=ok
// SIG undefined FUN_148bfb91a(void)

longlong FUN_148bfb91a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10b8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb94a FUN_148bfb94a body=48 status=ok
// SIG undefined FUN_148bfb94a(void)

longlong FUN_148bfb94a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10c0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb97a FUN_148bfb97a body=48 status=ok
// SIG undefined FUN_148bfb97a(void)

longlong FUN_148bfb97a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10c8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb9aa FUN_148bfb9aa body=48 status=ok
// SIG undefined FUN_148bfb9aa(void)

longlong FUN_148bfb9aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10d0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfb9da FUN_148bfb9da body=48 status=ok
// SIG undefined FUN_148bfb9da(void)

longlong FUN_148bfb9da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10d8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfba0a FUN_148bfba0a body=48 status=ok
// SIG undefined FUN_148bfba0a(void)

longlong FUN_148bfba0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10e0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfba3a FUN_148bfba3a body=48 status=ok
// SIG undefined FUN_148bfba3a(void)

longlong FUN_148bfba3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10e8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfba6a FUN_148bfba6a body=48 status=ok
// SIG undefined FUN_148bfba6a(void)

longlong FUN_148bfba6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10f0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfba9a FUN_148bfba9a body=48 status=ok
// SIG undefined FUN_148bfba9a(void)

longlong FUN_148bfba9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10f8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbaca FUN_148bfbaca body=48 status=ok
// SIG undefined FUN_148bfbaca(void)

longlong FUN_148bfbaca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1110;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbafa FUN_148bfbafa body=48 status=ok
// SIG undefined FUN_148bfbafa(void)

longlong FUN_148bfbafa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a80;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbb2a FUN_148bfbb2a body=48 status=ok
// SIG undefined FUN_148bfbb2a(void)

longlong FUN_148bfbb2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a88;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbb5a FUN_148bfbb5a body=48 status=ok
// SIG undefined FUN_148bfbb5a(void)

longlong FUN_148bfbb5a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a90;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbb8a FUN_148bfbb8a body=48 status=ok
// SIG undefined FUN_148bfbb8a(void)

longlong FUN_148bfbb8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ad8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbbba FUN_148bfbbba body=48 status=ok
// SIG undefined FUN_148bfbbba(void)

longlong FUN_148bfbbba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ae0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbbea FUN_148bfbbea body=48 status=ok
// SIG undefined FUN_148bfbbea(void)

longlong FUN_148bfbbea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ae8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbc1a FUN_148bfbc1a body=48 status=ok
// SIG undefined FUN_148bfbc1a(void)

longlong FUN_148bfbc1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b08;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbc4a FUN_148bfbc4a body=48 status=ok
// SIG undefined FUN_148bfbc4a(void)

longlong FUN_148bfbc4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b20;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbc7a FUN_148bfbc7a body=48 status=ok
// SIG undefined FUN_148bfbc7a(void)

longlong FUN_148bfbc7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b28;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbcaa FUN_148bfbcaa body=48 status=ok
// SIG undefined FUN_148bfbcaa(void)

longlong FUN_148bfbcaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b30;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbcda FUN_148bfbcda body=48 status=ok
// SIG undefined FUN_148bfbcda(void)

longlong FUN_148bfbcda(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b38;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbd0a FUN_148bfbd0a body=48 status=ok
// SIG undefined FUN_148bfbd0a(void)

longlong FUN_148bfbd0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b40;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbd3a FUN_148bfbd3a body=48 status=ok
// SIG undefined FUN_148bfbd3a(void)

longlong FUN_148bfbd3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b48;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbd6a FUN_148bfbd6a body=48 status=ok
// SIG undefined FUN_148bfbd6a(void)

longlong FUN_148bfbd6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b50;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbd9a FUN_148bfbd9a body=48 status=ok
// SIG undefined FUN_148bfbd9a(void)

longlong FUN_148bfbd9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b58;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbdca FUN_148bfbdca body=48 status=ok
// SIG undefined FUN_148bfbdca(void)

longlong FUN_148bfbdca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b60;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbdfa FUN_148bfbdfa body=48 status=ok
// SIG undefined FUN_148bfbdfa(void)

longlong FUN_148bfbdfa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b98;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbe2a FUN_148bfbe2a body=48 status=ok
// SIG undefined FUN_148bfbe2a(void)

longlong FUN_148bfbe2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ba0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbe5a FUN_148bfbe5a body=48 status=ok
// SIG undefined FUN_148bfbe5a(void)

longlong FUN_148bfbe5a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ba8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbe8a FUN_148bfbe8a body=48 status=ok
// SIG undefined FUN_148bfbe8a(void)

longlong FUN_148bfbe8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bb0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbeba FUN_148bfbeba body=48 status=ok
// SIG undefined FUN_148bfbeba(void)

longlong FUN_148bfbeba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bb8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbeea FUN_148bfbeea body=48 status=ok
// SIG undefined FUN_148bfbeea(void)

longlong FUN_148bfbeea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bc0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbf1a FUN_148bfbf1a body=48 status=ok
// SIG undefined FUN_148bfbf1a(void)

longlong FUN_148bfbf1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bc8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbf4a FUN_148bfbf4a body=48 status=ok
// SIG undefined FUN_148bfbf4a(void)

longlong FUN_148bfbf4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3be0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbf7a FUN_148bfbf7a body=48 status=ok
// SIG undefined FUN_148bfbf7a(void)

longlong FUN_148bfbf7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3be8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbfaa FUN_148bfbfaa body=48 status=ok
// SIG undefined FUN_148bfbfaa(void)

longlong FUN_148bfbfaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bf0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfbfda FUN_148bfbfda body=48 status=ok
// SIG undefined FUN_148bfbfda(void)

longlong FUN_148bfbfda(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bf8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc00a FUN_148bfc00a body=48 status=ok
// SIG undefined FUN_148bfc00a(void)

longlong FUN_148bfc00a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c00;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc03a FUN_148bfc03a body=48 status=ok
// SIG undefined FUN_148bfc03a(void)

longlong FUN_148bfc03a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c08;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc06a FUN_148bfc06a body=48 status=ok
// SIG undefined FUN_148bfc06a(void)

longlong FUN_148bfc06a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c10;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc09a FUN_148bfc09a body=48 status=ok
// SIG undefined FUN_148bfc09a(void)

longlong FUN_148bfc09a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c18;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc0ca FUN_148bfc0ca body=48 status=ok
// SIG undefined FUN_148bfc0ca(void)

longlong FUN_148bfc0ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c20;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc0fa FUN_148bfc0fa body=48 status=ok
// SIG undefined FUN_148bfc0fa(void)

longlong FUN_148bfc0fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c28;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc12a FUN_148bfc12a body=48 status=ok
// SIG undefined FUN_148bfc12a(void)

longlong FUN_148bfc12a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c30;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc15a FUN_148bfc15a body=48 status=ok
// SIG undefined FUN_148bfc15a(void)

longlong FUN_148bfc15a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c38;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc18a FUN_148bfc18a body=48 status=ok
// SIG undefined FUN_148bfc18a(void)

longlong FUN_148bfc18a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c40;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc1ba FUN_148bfc1ba body=48 status=ok
// SIG undefined FUN_148bfc1ba(void)

longlong FUN_148bfc1ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c48;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc1ea FUN_148bfc1ea body=48 status=ok
// SIG undefined FUN_148bfc1ea(void)

longlong FUN_148bfc1ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c50;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc21a FUN_148bfc21a body=48 status=ok
// SIG undefined FUN_148bfc21a(void)

longlong FUN_148bfc21a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c58;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc24a FUN_148bfc24a body=48 status=ok
// SIG undefined FUN_148bfc24a(void)

longlong FUN_148bfc24a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c60;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc27a FUN_148bfc27a body=48 status=ok
// SIG undefined FUN_148bfc27a(void)

longlong FUN_148bfc27a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c68;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfc34e FUN_148bfc34e body=59 status=ok
// SIG undefined FUN_148bfc34e(void)

undefined8 FUN_148bfc34e(longlong *param_1)

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



// FUNCTION 148bfc45c FUN_148bfc45c body=59 status=ok
// SIG undefined FUN_148bfc45c(void)

undefined8 FUN_148bfc45c(longlong *param_1)

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



// FUNCTION 148bfc51c FUN_148bfc51c body=63 status=ok
// SIG undefined FUN_148bfc51c(void)

undefined1 FUN_148bfc51c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bfc638(param_2,param_3);
    param_3 = param_3 + 0x550;
    param_2 = param_2 + 0x550;
  }
  return 1;
}



// FUNCTION 148bfc584 FUN_148bfc584 body=59 status=ok
// SIG undefined FUN_148bfc584(void)

undefined8 FUN_148bfc584(longlong *param_1)

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



// FUNCTION 148bfc5d0 FUN_148bfc5d0 body=40 status=ok
// SIG undefined FUN_148bfc5d0(void)

void FUN_148bfc5d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x550) == '\x01') {
    FUN_145a0b59a(param_2);
    *(undefined1 *)(param_2 + 0x550) = 0;
  }
  return;
}



// FUNCTION 148bfc638 FUN_148bfc638 body=298 status=ok
// SIG undefined FUN_148bfc638(void)

longlong FUN_148bfc638(longlong param_1,longlong param_2)

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
  undefined8 uVar12;
  
  FUN_148b897b2();
  uVar12 = *(undefined8 *)(param_2 + 0x460);
  *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_2 + 0x458);
  *(undefined8 *)(param_1 + 0x460) = uVar12;
  *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(param_2 + 0x468);
  uVar1 = *(undefined4 *)(param_2 + 0x474);
  uVar2 = *(undefined4 *)(param_2 + 0x478);
  uVar3 = *(undefined4 *)(param_2 + 0x47c);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x474) = uVar1;
  *(undefined4 *)(param_1 + 0x478) = uVar2;
  *(undefined4 *)(param_1 + 0x47c) = uVar3;
  FUN_144a787a6(param_1 + 0x480,param_2 + 0x480);
  FUN_14065c7a4(param_1 + 0x490,param_2 + 0x490);
  uVar1 = *(undefined4 *)(param_2 + 0x4a4);
  uVar2 = *(undefined4 *)(param_2 + 0x4a8);
  uVar3 = *(undefined4 *)(param_2 + 0x4ac);
  uVar4 = *(undefined4 *)(param_2 + 0x4b0);
  uVar5 = *(undefined4 *)(param_2 + 0x4b4);
  uVar6 = *(undefined4 *)(param_2 + 0x4b8);
  uVar7 = *(undefined4 *)(param_2 + 0x4bc);
  uVar8 = *(undefined4 *)(param_2 + 0x4be);
  uVar9 = *(undefined4 *)(param_2 + 0x4c2);
  uVar10 = *(undefined4 *)(param_2 + 0x4c6);
  uVar11 = *(undefined4 *)(param_2 + 0x4ca);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4a4) = uVar1;
  *(undefined4 *)(param_1 + 0x4a8) = uVar2;
  *(undefined4 *)(param_1 + 0x4ac) = uVar3;
  *(undefined4 *)(param_1 + 0x4b0) = uVar4;
  *(undefined4 *)(param_1 + 0x4b4) = uVar5;
  *(undefined4 *)(param_1 + 0x4b8) = uVar6;
  *(undefined4 *)(param_1 + 0x4bc) = uVar7;
  *(undefined4 *)(param_1 + 0x4be) = uVar8;
  *(undefined4 *)(param_1 + 0x4c2) = uVar9;
  *(undefined4 *)(param_1 + 0x4c6) = uVar10;
  *(undefined4 *)(param_1 + 0x4ca) = uVar11;
  *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(param_2 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
  FUN_144a7bb84(param_1 + 0x4e0,param_2 + 0x4e0);
  FUN_144a82394(param_1 + 0x4f8,param_2 + 0x4f8);
  *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_2 + 0x500);
  uVar1 = *(undefined4 *)(param_2 + 0x50c);
  uVar2 = *(undefined4 *)(param_2 + 0x510);
  uVar3 = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = uVar1;
  *(undefined4 *)(param_1 + 0x510) = uVar2;
  *(undefined4 *)(param_1 + 0x514) = uVar3;
  FUN_144a787a6(param_1 + 0x518,param_2 + 0x518);
  *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_2 + 0x528);
  uVar1 = *(undefined4 *)(param_2 + 0x534);
  uVar2 = *(undefined4 *)(param_2 + 0x538);
  uVar3 = *(undefined4 *)(param_2 + 0x53c);
  *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_2 + 0x530);
  *(undefined4 *)(param_1 + 0x534) = uVar1;
  *(undefined4 *)(param_1 + 0x538) = uVar2;
  *(undefined4 *)(param_1 + 0x53c) = uVar3;
  FUN_144a787a6(param_1 + 0x540,param_2 + 0x540);
  return param_1;
}



// FUNCTION 148bfc7dc FUN_148bfc7dc body=59 status=ok
// SIG undefined FUN_148bfc7dc(void)

undefined8 FUN_148bfc7dc(longlong *param_1)

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



// FUNCTION 148bfc87e FUN_148bfc87e body=66 status=ok
// SIG undefined FUN_148bfc87e(void)

void FUN_148bfc87e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c87310(param_2);
  *param_2 = &PTR_FUN_14b6fa540;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb2) = 0;
  *(undefined8 *)((longlong)param_2 + 0xba) = 0;
  return;
}



// FUNCTION 148bfc8d6 FUN_148bfc8d6 body=178 status=ok
// SIG undefined FUN_148bfc8d6(void)

undefined8 FUN_148bfc8d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
    do {
      if (*(char *)(param_3 + -0xa0) == '\0') {
        *(undefined1 *)(param_2 + -0xa0) = 0;
        *(undefined8 *)(param_2 + -0xa8) = *(undefined8 *)(param_3 + -0xa8);
      }
      puVar5 = (undefined8 *)(param_3 + -0x98);
      puVar6 = (undefined8 *)(param_2 + -0x98);
      for (lVar4 = 0xf; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
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
      param_3 = param_3 + 200;
      param_2 = param_2 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bfc9b0 FUN_148bfc9b0 body=59 status=ok
// SIG undefined FUN_148bfc9b0(void)

undefined8 FUN_148bfc9b0(longlong *param_1)

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



// FUNCTION 148bfc9fc FUN_148bfc9fc body=65 status=ok
// SIG undefined FUN_148bfc9fc(void)

void FUN_148bfc9fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x19) == '\x01') {
    *param_2 = &PTR_FUN_14b6fa540;
    if (param_2[0x16] != 0) {
      FUN_1400020a8();
    }
    FUN_1458f55d6(param_2);
    *(undefined1 *)(param_2 + 0x19) = 0;
  }
  return;
}



// FUNCTION 148bfca8c FUN_148bfca8c body=57 status=ok
// SIG undefined FUN_148bfca8c(void)

void FUN_148bfca8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7758 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7758 = FUN_140002ddd(FUN_1465ccec9,uVar1,L"OakCameraShake");
  }
  return;
}



// FUNCTION 148bfcac6 FUN_148bfcac6 body=130 status=ok
// SIG undefined FUN_148bfcac6(void)

longlong * FUN_148bfcac6(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x180,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b6fa570;
  FUN_148d1e53e(plVar3 + 2,param_1);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 148bfcb48 FUN_148bfcb48 body=67 status=ok
// SIG undefined FUN_148bfcb48(void)

void FUN_148bfcb48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b402570;
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
                    /* WARNING: Could not recover jumptable at 0x000148bfcb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148bfcb8c FUN_148bfcb8c body=29 status=ok
// SIG undefined FUN_148bfcb8c(void)

undefined8 FUN_148bfcb8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfcc12 FUN_148bfcc12 body=91 status=ok
// SIG undefined FUN_148bfcc12(void)

undefined8 FUN_148bfcc12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bfcc96 FUN_148bfcc96 body=59 status=ok
// SIG undefined FUN_148bfcc96(void)

undefined8 FUN_148bfcc96(longlong *param_1)

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



// FUNCTION 148bfccdc FUN_148bfccdc body=34 status=ok
// SIG undefined FUN_148bfccdc(void)

void FUN_148bfccdc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14584898a(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148bfcd4c FUN_148bfcd4c body=38 status=ok
// SIG undefined FUN_148bfcd4c(void)

undefined8 FUN_148bfcd4c(undefined8 param_1,int param_2)

{
  FUN_14584898a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfcd72 FUN_148bfcd72 body=55 status=ok
// SIG undefined FUN_148bfcd72(void)

void FUN_148bfcd72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7770 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7770 = FUN_140002ddd(FUN_1465ccf5f,uVar1,L"OakCapitalGameData");
  }
  return;
}



// FUNCTION 148bfce16 FUN_148bfce16 body=144 status=ok
// SIG undefined FUN_148bfce16(void)

undefined8 FUN_148bfce16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = param_3 + lVar6;
      lVar2 = param_2 + 0x20 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar1 + 8);
      uVar3 = *(undefined4 *)(lVar1 + 0x14);
      uVar4 = *(undefined4 *)(lVar1 + 0x18);
      uVar5 = *(undefined4 *)(lVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x10);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      FUN_144a787a6(param_2 + lVar6 + 0x40,param_3 + lVar6 + 0x40);
      *(undefined1 *)(param_2 + lVar6 + 0x50) = *(undefined1 *)(param_3 + lVar6 + 0x50);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bfcece FUN_148bfcece body=59 status=ok
// SIG undefined FUN_148bfcece(void)

undefined8 FUN_148bfcece(longlong *param_1)

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



// FUNCTION 148bfcf14 FUN_148bfcf14 body=58 status=ok
// SIG undefined FUN_148bfcf14(void)

void FUN_148bfcf14(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14b6fa860;
    if (param_2[8] != 0) {
      FUN_1400020a8();
    }
    FUN_14584898a(param_2);
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 148bfcf9c FUN_148bfcf9c body=57 status=ok
// SIG undefined FUN_148bfcf9c(void)

void FUN_148bfcf9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7788 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7788 = FUN_140002ddd(FUN_1465ccfbe,uVar1,L"OakCurrencyGameData");
  }
  return;
}



// FUNCTION 148bfd00a FUN_148bfd00a body=63 status=ok
// SIG undefined FUN_148bfd00a(void)

undefined1 FUN_148bfd00a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    param_3 = param_3 + 0x458;
    param_2 = param_2 + 0x458;
  }
  return 1;
}



// FUNCTION 148bfd072 FUN_148bfd072 body=59 status=ok
// SIG undefined FUN_148bfd072(void)

undefined8 FUN_148bfd072(longlong *param_1)

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



// FUNCTION 148bfd0be FUN_148bfd0be body=38 status=ok
// SIG undefined FUN_148bfd0be(void)

void FUN_148bfd0be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x458) == '\x01') {
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x458) = 0;
  }
  return;
}



// FUNCTION 148bfd1a6 FUN_148bfd1a6 body=59 status=ok
// SIG undefined FUN_148bfd1a6(void)

undefined8 FUN_148bfd1a6(longlong *param_1)

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



// FUNCTION 148bfd248 FUN_148bfd248 body=54 status=ok
// SIG undefined FUN_148bfd248(void)

void FUN_148bfd248(longlong *param_1)

{
  FUN_148bfd27e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148bfd27e FUN_148bfd27e body=128 status=ok
// SIG undefined FUN_148bfd27e(void)

void FUN_148bfd27e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148bfd34a FUN_148bfd34a body=54 status=ok
// SIG undefined FUN_148bfd34a(void)

undefined1 FUN_148bfd34a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bfd448(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148bfd3a8 FUN_148bfd3a8 body=59 status=ok
// SIG undefined FUN_148bfd3a8(void)

undefined8 FUN_148bfd3a8(longlong *param_1)

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



// FUNCTION 148bfd448 FUN_148bfd448 body=112 status=ok
// SIG undefined FUN_148bfd448(void)

undefined8 * FUN_148bfd448(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 != param_1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  lVar5 = param_2[4];
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[4];
    }
  }
  param_1[4] = lVar5;
  param_1[5] = param_2[5];
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 148bfd4ba FUN_148bfd4ba body=32 status=ok
// SIG undefined FUN_148bfd4ba(void)

void FUN_148bfd4ba(undefined8 param_1,longlong param_2)

{
  FUN_140f23ff6(param_2);
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  return;
}



// FUNCTION 148bfd514 FUN_148bfd514 body=59 status=ok
// SIG undefined FUN_148bfd514(void)

undefined8 FUN_148bfd514(longlong *param_1)

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



// FUNCTION 148bfd560 FUN_148bfd560 body=55 status=ok
// SIG undefined FUN_148bfd560(void)

void FUN_148bfd560(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    if (*(longlong *)(param_2 + 0x110) != 0) {
      FUN_1400020a8();
    }
    FUN_1409def00(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 148bfd5e6 FUN_148bfd5e6 body=68 status=ok
// SIG undefined FUN_148bfd5e6(void)

longlong FUN_148bfd5e6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14036e94c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  FUN_141119068(lVar2,1);
  return lVar2;
}



// FUNCTION 148bfd62e FUN_148bfd62e body=115 status=ok
// SIG undefined FUN_148bfd62e(void)

void FUN_148bfd62e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bfd6a1 FUN_148bfd6a1 body=161 status=ok
// SIG undefined FUN_148bfd6a1(void)

void FUN_148bfd6a1(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = 0;
    bVar9 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar10) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 8 + lVar10) = 0xffffffff;
      puVar2 = (undefined4 *)(param_2 + 0xc + lVar10);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (undefined4 *)(param_1 + 0xc + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      *(undefined1 *)(param_1 + 0x1c + lVar10) = *(undefined1 *)(param_2 + 0x1c + lVar10);
      lVar4 = *(longlong *)(param_2 + 0x20 + lVar10);
      *(longlong *)(param_1 + 0x20 + lVar10) = lVar4;
      if (((bVar9 & 1) != 0) && (lVar4 != 0)) {
        FUN_1456cec3c();
        bVar9 = DAT_14c950c29;
      }
      lVar4 = param_1 + lVar10;
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_2 + 0x28 + lVar10);
      puVar1 = (undefined8 *)(param_2 + 0x30 + lVar10);
      uVar8 = puVar1[1];
      *(undefined8 *)(lVar4 + 0x30) = *puVar1;
      *(undefined8 *)(lVar4 + 0x38) = uVar8;
      *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(param_2 + 0x40 + lVar10);
      lVar10 = lVar10 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148bfd76c FUN_148bfd76c body=100 status=ok
// SIG undefined FUN_148bfd76c(void)

undefined1 FUN_148bfd76c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bfd7f8 FUN_148bfd7f8 body=59 status=ok
// SIG undefined FUN_148bfd7f8(void)

undefined8 FUN_148bfd7f8(longlong *param_1)

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



// FUNCTION 148bfd8e6 FUN_148bfd8e6 body=59 status=ok
// SIG undefined FUN_148bfd8e6(void)

undefined8 FUN_148bfd8e6(longlong *param_1)

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



// FUNCTION 148bfd9de FUN_148bfd9de body=59 status=ok
// SIG undefined FUN_148bfd9de(void)

undefined8 FUN_148bfd9de(longlong *param_1)

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



// FUNCTION 148bfdb18 FUN_148bfdb18 body=59 status=ok
// SIG undefined FUN_148bfdb18(void)

undefined8 FUN_148bfdb18(longlong *param_1)

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



// FUNCTION 148bfdb5e FUN_148bfdb5e body=38 status=ok
// SIG undefined FUN_148bfdb5e(void)

void FUN_148bfdb5e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148bfdc28 FUN_148bfdc28 body=29 status=ok
// SIG undefined FUN_148bfdc28(void)

undefined8 FUN_148bfdc28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfdc56 FUN_148bfdc56 body=69 status=ok
// SIG undefined FUN_148bfdc56(void)

undefined8 * FUN_148bfdc56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6fe720;
  FUN_143ded88a(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfdcd4 FUN_148bfdcd4 body=75 status=ok
// SIG undefined FUN_148bfdcd4(void)

void * FUN_148bfdcd4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x230);
  FUN_140290480(param_2);
  FUN_140290480((longlong)param_2 + 0xb8);
  FUN_140290480((longlong)param_2 + 0x170);
  *(undefined4 *)((longlong)param_2 + 0x228) = 0;
  return param_2;
}



// FUNCTION 148bfdd72 FUN_148bfdd72 body=29 status=ok
// SIG undefined FUN_148bfdd72(void)

undefined8 FUN_148bfdd72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfdda8 FUN_148bfdda8 body=29 status=ok
// SIG undefined FUN_148bfdda8(void)

undefined8 FUN_148bfdda8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfdddc FUN_148bfdddc body=29 status=ok
// SIG undefined FUN_148bfdddc(void)

undefined8 FUN_148bfdddc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfddfe FUN_148bfddfe body=54 status=ok
// SIG undefined FUN_148bfddfe(void)

undefined8 * FUN_148bfddfe(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\GbxBody/GbxBodyNode_FirstPerson.h"
                ,0x57,L"Pure virtual not implemented (%s)",
                L"IGbxFirstPersonStateOwner::GetFirstPersonState");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148bfdeba FUN_148bfdeba body=29 status=ok
// SIG undefined FUN_148bfdeba(void)

undefined8 FUN_148bfdeba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfdef8 FUN_148bfdef8 body=29 status=ok
// SIG undefined FUN_148bfdef8(void)

undefined8 FUN_148bfdef8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfdf1c FUN_148bfdf1c body=47 status=ok
// SIG undefined FUN_148bfdf1c(void)

undefined8 * FUN_148bfdf1c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6ff130;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfdf58 FUN_148bfdf58 body=47 status=ok
// SIG undefined FUN_148bfdf58(void)

undefined8 * FUN_148bfdf58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6ff130;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfdf88 FUN_148bfdf88 body=38 status=ok
// SIG undefined FUN_148bfdf88(void)

undefined8 FUN_148bfdf88(undefined8 param_1,int param_2)

{
  FUN_140c21e34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfdfae FUN_148bfdfae body=38 status=ok
// SIG undefined FUN_148bfdfae(void)

undefined8 FUN_148bfdfae(undefined8 param_1,int param_2)

{
  FUN_1418c7d38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfdfda FUN_148bfdfda body=95 status=ok
// SIG undefined FUN_148bfdfda(void)

longlong FUN_148bfdfda(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0xc0) = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)(param_1 + 0xc9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0xc9) = 0;
  }
  FUN_14079057a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfe046 FUN_148bfe046 body=32 status=ok
// SIG undefined FUN_148bfe046(void)

undefined8 FUN_148bfe046(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSubsystemCollection");
  return param_2;
}



// FUNCTION 148bfe316 FUN_148bfe316 body=239 status=ok
// SIG undefined FUN_148bfe316(void)

void FUN_148bfe316(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [47];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  puVar1 = &local_19;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cd0654(local_18,puVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfe40c FUN_148bfe40c body=530 status=ok
// SIG undefined FUN_148bfe40c(void)

void FUN_148bfe40c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined ***pppuVar2;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  int local_9c;
  undefined **local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x3b9cbb9e;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_98 = &PTR_FUN_14b6355f0;
  local_30 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  pppuVar2 = *(undefined ****)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  iVar1 = local_9c;
  local_a0 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  if (pppuVar2 == (undefined ***)0x0) {
    pppuVar2 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1440b013a(local_28,pppuVar2,iVar1 != 0,local_a0);
  FUN_140485912(&local_98);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfe620 FUN_148bfe620 body=244 status=ok
// SIG undefined FUN_148bfe620(void)

void FUN_148bfe620(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1440af9f0(local_68,local_20);
  *param_3 = local_68[0];
  if (DAT_14c950c29 == '\x01') {
    if (local_60 == 0) {
      local_60 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *(longlong *)(param_3 + 8) = local_60;
  *(undefined4 *)(param_3 + 0x10) = local_58;
  *(undefined4 *)(param_3 + 0x14) = uStack_54;
  *(undefined4 *)(param_3 + 0x18) = uStack_50;
  *(undefined4 *)(param_3 + 0x1c) = uStack_4c;
  *(undefined4 *)(param_3 + 0x20) = local_48;
  *(undefined4 *)(param_3 + 0x24) = uStack_44;
  *(undefined4 *)(param_3 + 0x28) = uStack_40;
  *(undefined4 *)(param_3 + 0x2c) = uStack_3c;
  *(undefined4 *)(param_3 + 0x30) = local_38;
  *(undefined4 *)(param_3 + 0x34) = uStack_34;
  *(undefined4 *)(param_3 + 0x38) = uStack_30;
  *(undefined4 *)(param_3 + 0x3c) = uStack_2c;
  *(undefined8 *)(param_3 + 0x40) = local_28;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfe71c FUN_148bfe71c body=427 status=ok
// SIG undefined FUN_148bfe71c(void)

void FUN_148bfe71c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_40 = 0;
  local_38 = 0x7102;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1440afbb4(local_18,local_20,local_24,puVar1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfe8ce FUN_148bfe8ce body=464 status=ok
// SIG undefined FUN_148bfe8ce(void)

void FUN_148bfe8ce(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  uVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_60 = FUN_14477b664(uVar3);
  local_58 = local_38;
  uVar2 = FUN_148cd0566(local_28,local_30,&local_68,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfeaa6 FUN_148bfeaa6 body=341 status=ok
// SIG undefined FUN_148bfeaa6(void)

void FUN_148bfeaa6(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  int local_24;
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
  FUN_1440afe5e(local_20,iVar1 != 0,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfec02 FUN_148bfec02 body=148 status=ok
// SIG undefined FUN_148bfec02(void)

void FUN_148bfec02(undefined8 param_1,longlong param_2)

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
  FUN_1440b005c(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfec9e FUN_148bfec9e body=322 status=ok
// SIG undefined FUN_148bfec9e(void)

void FUN_148bfec9e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1440b0c80(local_18,local_1c,local_20 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfede8 FUN_148bfede8 body=426 status=ok
// SIG undefined FUN_148bfede8(void)

void FUN_148bfede8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  int local_4c;
  void *local_48;
  ulonglong uStack_40;
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
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  _Src = local_48;
  iVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar2 == 0) {
    local_54 = 0;
  }
  else {
    FUN_144a06ca8(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar2 << 2);
  }
  FUN_148cd06ae(local_30,&local_60,iVar1 != 0);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bfef96 FUN_148bfef96 body=48 status=ok
// SIG undefined FUN_148bfef96(void)

longlong FUN_148bfef96(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x568;
  FUN_140bf2514(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfefc6 FUN_148bfefc6 body=48 status=ok
// SIG undefined FUN_148bfefc6(void)

longlong FUN_148bfefc6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x630;
  FUN_140bf2514(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bfeff6 FUN_148bfeff6 body=45 status=ok
// SIG undefined FUN_148bfeff6(void)

longlong FUN_148bfeff6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bff024 FUN_148bff024 body=45 status=ok
// SIG undefined FUN_148bff024(void)

longlong FUN_148bff024(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bff052 FUN_148bff052 body=45 status=ok
// SIG undefined FUN_148bff052(void)

longlong FUN_148bff052(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bff080 FUN_148bff080 body=37 status=ok
// SIG undefined FUN_148bff080(void)

void FUN_148bff080(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe00);
  FUN_1418c88e6(param_2);
  return;
}



// FUNCTION 148bff0fa FUN_148bff0fa body=59 status=ok
// SIG undefined FUN_148bff0fa(void)

undefined8 FUN_148bff0fa(longlong *param_1)

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



// FUNCTION 148bff146 FUN_148bff146 body=38 status=ok
// SIG undefined FUN_148bff146(void)

void FUN_148bff146(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe00) == '\x01') {
    FUN_14403c2b4(param_2);
    *(undefined1 *)(param_2 + 0xe00) = 0;
  }
  return;
}



// FUNCTION 148bff224 FUN_148bff224 body=91 status=ok
// SIG undefined FUN_148bff224(void)

undefined1 FUN_148bff224(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140b4e72c(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0x70);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_3 + 0x70);
      }
    }
    param_3 = param_3 + 0x78;
    *(longlong *)(param_2 + 0x70) = lVar1;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148bff2a8 FUN_148bff2a8 body=59 status=ok
// SIG undefined FUN_148bff2a8(void)

undefined8 FUN_148bff2a8(longlong *param_1)

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



// FUNCTION 148bff34a FUN_148bff34a body=38 status=ok
// SIG undefined FUN_148bff34a(void)

undefined8 FUN_148bff34a(undefined8 param_1,int param_2)

{
  FUN_14403c2b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bff394 FUN_148bff394 body=63 status=ok
// SIG undefined FUN_148bff394(void)

undefined1 FUN_148bff394(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148badccc(param_2,param_3);
    param_3 = param_3 + 0x298;
    param_2 = param_2 + 0x298;
  }
  return 1;
}


