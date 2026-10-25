// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14867df6c FUN_14867df6c body=180 status=ok
// SIG undefined FUN_14867df6c(void)

void FUN_14867df6c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
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
  FUN_140c07d12(param_1,local_40,local_28);
  FUN_14867e022(param_3,local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867e022 FUN_14867e022 body=84 status=ok
// SIG undefined FUN_14867e022(void)

longlong * FUN_14867e022(longlong *param_1,longlong *param_2)

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



// FUNCTION 14867e07c FUN_14867e07c body=163 status=ok
// SIG undefined FUN_14867e07c(void)

void FUN_14867e07c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  uVar1 = FUN_14880f9fe(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867e126 FUN_14867e126 body=163 status=ok
// SIG undefined FUN_14867e126(void)

void FUN_14867e126(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
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
  uVar1 = FUN_14100415a(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867e1ce FUN_14867e1ce body=37 status=ok
// SIG undefined FUN_14867e1ce(void)

void FUN_14867e1ce(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1400b0b74();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14867e1f8 FUN_14867e1f8 body=37 status=ok
// SIG undefined FUN_14867e1f8(void)

void FUN_14867e1f8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1411a2d84();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14867e226 FUN_14867e226 body=37 status=ok
// SIG undefined FUN_14867e226(void)

void FUN_14867e226(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143e4a8c2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14867e256 FUN_14867e256 body=165 status=ok
// SIG undefined FUN_14867e256(void)

void FUN_14867e256(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143e4a860(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867e320 FUN_14867e320 body=37 status=ok
// SIG undefined FUN_14867e320(void)

void FUN_14867e320(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14022771e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14867e380 FUN_14867e380 body=88 status=ok
// SIG undefined FUN_14867e380(void)

void FUN_14867e380(longlong param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_144b397ea();
  if (lVar2 == 0) {
    bVar4 = false;
  }
  else {
    uVar3 = FUN_144b397ea(param_1);
    bVar4 = false;
    cVar1 = FUN_1411057e8(uVar3,0);
    if (cVar1 != '\0') {
      bVar4 = *(longlong *)(param_1 + 0x110) != 0;
    }
  }
  *param_3 = bVar4;
  return;
}



// FUNCTION 14867e3de FUN_14867e3de body=302 status=ok
// SIG undefined FUN_14867e3de(void)

void FUN_14867e3de(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  lVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_144b397ea(param_1);
  if (lVar3 != 0) {
    uVar4 = FUN_144b397ea(param_1);
    bVar5 = false;
    cVar2 = FUN_1411057e8(uVar4,0);
    if (cVar2 == '\0') goto LAB_14867e4c1;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar3 = FUN_144b397ea(param_1);
      if (lVar3 != 0) {
        uVar4 = FUN_144b397ea(param_1);
        lVar3 = FUN_140153468(uVar4);
        bVar5 = false;
        if ((lVar1 != 0) && (lVar3 != 0)) {
          lVar3 = FUN_144b397ea(param_1);
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            uVar4 = FUN_144b397ea(param_1);
            lVar3 = FUN_140153468(uVar4);
          }
          bVar5 = lVar3 == lVar1;
        }
        goto LAB_14867e4c1;
      }
    }
  }
  bVar5 = false;
LAB_14867e4c1:
  *param_3 = bVar5;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867e512 FUN_14867e512 body=37 status=ok
// SIG undefined FUN_14867e512(void)

void FUN_14867e512(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140042218();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14867e53e FUN_14867e53e body=156 status=ok
// SIG undefined FUN_14867e53e(void)

void FUN_14867e53e(undefined8 param_1,longlong param_2)

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
  FUN_14880fb18(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867e5dc FUN_14867e5dc body=156 status=ok
// SIG undefined FUN_14867e5dc(void)

void FUN_14867e5dc(undefined8 param_1,longlong param_2)

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
  FUN_14880f9a6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867e67a FUN_14867e67a body=296 status=ok
// SIG undefined FUN_14867e67a(void)

void FUN_14867e67a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  FUN_14880f894(param_1,local_20,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867e7aa FUN_14867e7aa body=294 status=ok
// SIG undefined FUN_14867e7aa(void)

void FUN_14867e7aa(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7add4();
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
  iVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0xc70))(param_1,local_24,local_28 != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerDebugGrantMovementType_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xc78))(param_1,local_24,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867e8d2 FUN_14867e8d2 body=47 status=ok
// SIG undefined FUN_14867e8d2(void)

void FUN_14867e8d2(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb5ba98);
                    /* WARNING: Could not recover jumptable at 0x00014867e8fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 14867e902 FUN_14867e902 body=72 status=ok
// SIG undefined FUN_14867e902(void)

void FUN_14867e902(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xca8))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014867e932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xcb0))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerStopMoveTo_Validate");
  return;
}



// FUNCTION 14867e94a FUN_14867e94a body=156 status=ok
// SIG undefined FUN_14867e94a(void)

void FUN_14867e94a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140c07c00(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867e9ee FUN_14867e9ee body=340 status=ok
// SIG undefined FUN_14867e9ee(void)

void FUN_14867e9ee(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined8 local_28;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1459e1ee6(param_1,local_28,local_30,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867eb4a FUN_14867eb4a body=758 status=ok
// SIG undefined FUN_14867eb4a(void)

void FUN_14867eb4a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
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
  FUN_144a64e42();
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
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = &local_78;
  local_68 = local_50;
  local_78 = local_60;
  uStack_70 = uStack_58;
  local_88 = local_48;
  local_90 = local_3c;
  local_98 = local_38;
  uVar1 = FUN_14880f69a(param_1,local_28,local_30,local_34);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867ee42 FUN_14867ee42 body=154 status=ok
// SIG undefined FUN_14867ee42(void)

void FUN_14867ee42(undefined8 param_1,longlong param_2)

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
  thunk_FUN_1410fee4e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867eede FUN_14867eede body=237 status=ok
// SIG undefined FUN_14867eede(void)

void FUN_14867eede(undefined8 param_1,longlong param_2)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_141105774(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14867f056 FUN_14867f056 body=41 status=ok
// SIG undefined FUN_14867f056(void)

void FUN_14867f056(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x88);
  *param_2 = &PTR_FUN_14b0eda30;
  return;
}



// FUNCTION 14867f0e0 FUN_14867f0e0 body=63 status=ok
// SIG undefined FUN_14867f0e0(void)

undefined1 FUN_14867f0e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867f270(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 14867f148 FUN_14867f148 body=59 status=ok
// SIG undefined FUN_14867f148(void)

undefined8 FUN_14867f148(longlong *param_1)

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



// FUNCTION 14867f194 FUN_14867f194 body=38 status=ok
// SIG undefined FUN_14867f194(void)

void FUN_14867f194(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_140af8b9e(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 14867f20c FUN_14867f20c body=43 status=ok
// SIG undefined FUN_14867f20c(void)

undefined8 FUN_14867f20c(undefined8 param_1,int param_2)

{
  FUN_140af8b9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14867f238 FUN_14867f238 body=55 status=ok
// SIG undefined FUN_14867f238(void)

void FUN_14867f238(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b830 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b830 = FUN_140002ddd(FUN_1464d0b51,uVar1,L"GbxCharacterMaterialParameterDef");
  }
  return;
}



// FUNCTION 14867f270 FUN_14867f270 body=133 status=ok
// SIG undefined FUN_14867f270(void)

longlong FUN_14867f270(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_14867f2f6(param_1 + 0x18,param_2 + 0x18);
  FUN_14867f352(param_1 + 0x28,param_2 + 0x28);
  FUN_147bbdbf2(param_1 + 0x38,param_2 + 0x38);
  FUN_147bbdca4(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  FUN_14867f3aa(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 14867f2f6 FUN_14867f2f6 body=92 status=ok
// SIG undefined FUN_14867f2f6(void)

undefined8 * FUN_14867f2f6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14867f408(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 14867f352 FUN_14867f352 body=88 status=ok
// SIG undefined FUN_14867f352(void)

undefined8 * FUN_14867f352(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14867f482(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14867f3aa FUN_14867f3aa body=93 status=ok
// SIG undefined FUN_14867f3aa(void)

undefined8 * FUN_14867f3aa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140af8ca7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14867f4e4(param_1,iVar1);
      FUN_14867f557(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14867f408 FUN_14867f408 body=121 status=ok
// SIG undefined FUN_14867f408(void)

void FUN_14867f408(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14867f482 FUN_14867f482 body=98 status=ok
// SIG undefined FUN_14867f482(void)

void FUN_14867f482(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14867f4e4 FUN_14867f4e4 body=115 status=ok
// SIG undefined FUN_14867f4e4(void)

void FUN_14867f4e4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,0x10);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14867f557 FUN_14867f557 body=60 status=ok
// SIG undefined FUN_14867f557(void)

void FUN_14867f557(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_143c4d7e0(param_1,param_2);
    param_1 = param_1 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return;
}



// FUNCTION 14867f594 FUN_14867f594 body=28 status=ok
// SIG undefined FUN_14867f594(void)

undefined8 FUN_14867f594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14867f5bc FUN_14867f5bc body=266 status=ok
// SIG undefined FUN_14867f5bc(void)

void FUN_14867f5bc(undefined8 param_1,void *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2,0,0x180);
  *(undefined8 *)((longlong)param_2 + 8) = 0xbf800000bf800000;
  *(undefined ***)((longlong)param_2 + 0x18) = &PTR_FUN_14b00bdf8;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined4 *)((longlong)param_2 + 0x88) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x8c) = 0x404;
  *(undefined **)((longlong)param_2 + 0x20) = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined ***)((longlong)param_2 + 200) = &PTR_FUN_14b00bdf8;
  *(undefined4 *)((longlong)param_2 + 0x100) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x104) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  *(undefined8 *)((longlong)param_2 + 0x128) = 0;
  *(undefined8 *)((longlong)param_2 + 0x130) = 0;
  *(undefined4 *)((longlong)param_2 + 0x138) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x13c) = 0x404;
  *(undefined **)((longlong)param_2 + 0xd0) = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_2 + 0x170) = 0;
  *(undefined8 *)((longlong)param_2 + 0x160) = 0;
  *(undefined8 *)((longlong)param_2 + 0x168) = 0;
  *(undefined8 *)((longlong)param_2 + 0x150) = 0;
  *(undefined8 *)((longlong)param_2 + 0x158) = 0;
  *(undefined8 *)((longlong)param_2 + 0x140) = 0;
  *(undefined8 *)((longlong)param_2 + 0x148) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)((longlong)param_2 + 0x180);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14867f6c6 FUN_14867f6c6 body=278 status=ok
// SIG undefined FUN_14867f6c6(void)

void FUN_14867f6c6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0xbf800000bf800000;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[3] = &PTR_FUN_14b00bdf8;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
  param_2[0xd] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x8c) = 0x404;
  param_2[4] = &DAT_14a176f00;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = &PTR_FUN_14b00bdf8;
  param_2[0x1f] = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined8 *)((longlong)param_2 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x10c) = 0;
  param_2[0x23] = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  *(undefined4 *)(param_2 + 0x27) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x13c) = 0x404;
  param_2[0x1a] = &DAT_14a176f00;
  param_2[0x2e] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x30;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14867f7dc FUN_14867f7dc body=37 status=ok
// SIG undefined FUN_14867f7dc(void)

void FUN_14867f7dc(undefined8 param_1,longlong param_2)

{
  FUN_14051f4c4(param_2 + 200);
  FUN_14051f4c4(param_2 + 0x18);
  return;
}



// FUNCTION 14867f818 FUN_14867f818 body=63 status=ok
// SIG undefined FUN_14867f818(void)

undefined1 FUN_14867f818(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141850044(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 14867f880 FUN_14867f880 body=59 status=ok
// SIG undefined FUN_14867f880(void)

undefined8 FUN_14867f880(longlong *param_1)

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



// FUNCTION 14867f8cc FUN_14867f8cc body=51 status=ok
// SIG undefined FUN_14867f8cc(void)

void FUN_14867f8cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_14051f4c4(param_2 + 200);
    FUN_14051f4c4(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 14867f950 FUN_14867f950 body=338 status=ok
// SIG undefined FUN_14867f950(void)

void FUN_14867f950(undefined8 param_1,void *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2,0,0x250);
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)((longlong)param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)((longlong)param_2 + 0x70);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0xbf800000bf800000;
  *(undefined ***)((longlong)param_2 + 0xe8) = &PTR_FUN_14b00bdf8;
  *(undefined4 *)((longlong)param_2 + 0x120) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x124) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x138) = 0;
  *(undefined8 *)((longlong)param_2 + 0x148) = 0;
  *(undefined8 *)((longlong)param_2 + 0x150) = 0;
  *(undefined4 *)((longlong)param_2 + 0x158) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x15c) = 0x404;
  *(undefined **)((longlong)param_2 + 0xf0) = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_2 + 0x160) = 0;
  *(undefined8 *)((longlong)param_2 + 0x168) = 0;
  *(undefined8 *)((longlong)param_2 + 0x170) = 0;
  *(undefined8 *)((longlong)param_2 + 0x178) = 0;
  *(undefined8 *)((longlong)param_2 + 0x180) = 0;
  *(undefined8 *)((longlong)param_2 + 0x188) = 0;
  *(undefined8 *)((longlong)param_2 + 400) = 0;
  *(undefined ***)((longlong)param_2 + 0x198) = &PTR_FUN_14b00bdf8;
  *(undefined4 *)((longlong)param_2 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1f8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x200) = 0;
  *(undefined4 *)((longlong)param_2 + 0x208) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0x404;
  *(undefined **)((longlong)param_2 + 0x1a0) = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_2 + 0x240) = 0;
  *(undefined8 *)((longlong)param_2 + 0x230) = 0;
  *(undefined8 *)((longlong)param_2 + 0x238) = 0;
  *(undefined8 *)((longlong)param_2 + 0x220) = 0;
  *(undefined8 *)((longlong)param_2 + 0x228) = 0;
  *(undefined8 *)((longlong)param_2 + 0x210) = 0;
  *(undefined8 *)((longlong)param_2 + 0x218) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)((longlong)param_2 + 0x250);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14867faa2 FUN_14867faa2 body=365 status=ok
// SIG undefined FUN_14867faa2(void)

void FUN_14867faa2(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x70);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0xbf800000bf800000;
  param_2[0xe0] = 0;
  *(undefined ***)(param_2 + 0xe8) = &PTR_FUN_14b00bdf8;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined4 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)(param_2 + 300) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined4 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined4 *)(param_2 + 0x158) = 0x7f7fffff;
  *(undefined2 *)(param_2 + 0x15c) = 0x404;
  *(undefined **)(param_2 + 0xf0) = &DAT_14a176f00;
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x168) = 0;
  *(undefined8 *)(param_2 + 0x170) = 0;
  *(undefined8 *)(param_2 + 0x178) = 0;
  *(undefined8 *)(param_2 + 0x180) = 0;
  *(undefined8 *)(param_2 + 0x188) = 0;
  *(undefined8 *)(param_2 + 400) = 0;
  *(undefined ***)(param_2 + 0x198) = &PTR_FUN_14b00bdf8;
  *(undefined8 *)(param_2 + 0x1c8) = 0;
  *(undefined4 *)(param_2 + 0x1d0) = 0;
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  *(undefined8 *)(param_2 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)(param_2 + 0x1dc) = 0;
  *(undefined8 *)(param_2 + 0x1e8) = 0;
  *(undefined4 *)(param_2 + 0x1f0) = 0;
  *(undefined8 *)(param_2 + 0x1f8) = 0;
  *(undefined8 *)(param_2 + 0x200) = 0;
  *(undefined4 *)(param_2 + 0x208) = 0x7f7fffff;
  *(undefined2 *)(param_2 + 0x20c) = 0x404;
  *(undefined **)(param_2 + 0x1a0) = &DAT_14a176f00;
  *(undefined8 *)(param_2 + 0x240) = 0;
  *(undefined8 *)(param_2 + 0x230) = 0;
  *(undefined8 *)(param_2 + 0x238) = 0;
  *(undefined8 *)(param_2 + 0x220) = 0;
  *(undefined8 *)(param_2 + 0x228) = 0;
  *(undefined8 *)(param_2 + 0x210) = 0;
  *(undefined8 *)(param_2 + 0x218) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x250);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14867fc10 FUN_14867fc10 body=40 status=ok
// SIG undefined FUN_14867fc10(void)

void FUN_14867fc10(undefined8 param_1,longlong param_2)

{
  FUN_14051f4c4(param_2 + 0x198);
  FUN_14051f4c4(param_2 + 0xe8);
  return;
}



// FUNCTION 14867fc4e FUN_14867fc4e body=109 status=ok
// SIG undefined FUN_14867fc4e(void)

undefined8 FUN_14867fc4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xd0);
      FUN_141850044(param_2 + lVar1 + 0xd0,param_3 + lVar1 + 0xd0);
      lVar1 = lVar1 + 0x2b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14867fce4 FUN_14867fce4 body=59 status=ok
// SIG undefined FUN_14867fce4(void)

undefined8 FUN_14867fce4(longlong *param_1)

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



// FUNCTION 14867fd30 FUN_14867fd30 body=54 status=ok
// SIG undefined FUN_14867fd30(void)

void FUN_14867fd30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2b0) == '\x01') {
    FUN_14051f4c4(param_2 + 0x198);
    FUN_14051f4c4(param_2 + 0xe8);
    *(undefined1 *)(param_2 + 0x2b0) = 0;
  }
  return;
}



// FUNCTION 14867fe0a FUN_14867fe0a body=112 status=ok
// SIG undefined FUN_14867fe0a(void)

undefined1 FUN_14867fe0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      plVar1[3] = *(longlong *)(param_3 + 0x18 + lVar8);
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14867fea2 FUN_14867fea2 body=59 status=ok
// SIG undefined FUN_14867fea2(void)

undefined8 FUN_14867fea2(longlong *param_1)

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



// FUNCTION 14867ff90 FUN_14867ff90 body=59 status=ok
// SIG undefined FUN_14867ff90(void)

undefined8 FUN_14867ff90(longlong *param_1)

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



// FUNCTION 14868005e FUN_14868005e body=101 status=ok
// SIG undefined FUN_14868005e(void)

undefined8 FUN_14868005e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      *(undefined1 *)(param_2 + 0x20 + lVar1) = *(undefined1 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486800ec FUN_1486800ec body=59 status=ok
// SIG undefined FUN_1486800ec(void)

undefined8 FUN_1486800ec(longlong *param_1)

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



// FUNCTION 148680132 FUN_148680132 body=43 status=ok
// SIG undefined FUN_148680132(void)

void FUN_148680132(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1486801d0 FUN_1486801d0 body=75 status=ok
// SIG undefined FUN_1486801d0(void)

undefined1 FUN_1486801d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_1486802f2(param_2,param_3);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148680244 FUN_148680244 body=59 status=ok
// SIG undefined FUN_148680244(void)

undefined8 FUN_148680244(longlong *param_1)

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



// FUNCTION 14868028a FUN_14868028a body=34 status=ok
// SIG undefined FUN_14868028a(void)

void FUN_14868028a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1458c7310(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1486802f2 FUN_1486802f2 body=122 status=ok
// SIG undefined FUN_1486802f2(void)

longlong FUN_1486802f2(longlong param_1,longlong param_2)

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
    FUN_14868036c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14868036c FUN_14868036c body=250 status=ok
// SIG undefined FUN_14868036c(void)

longlong * FUN_14868036c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1458c7394(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
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
          FUN_141850364(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148680468 FUN_148680468 body=57 status=ok
// SIG undefined FUN_148680468(void)

void FUN_148680468(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bba8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bba8 = FUN_140002ddd(FUN_1464d1518,uVar1,L"JumpGoalCollectionDef");
  }
  return;
}



// FUNCTION 1486804a2 FUN_1486804a2 body=28 status=ok
// SIG undefined FUN_1486804a2(void)

undefined8 FUN_1486804a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486804ee FUN_1486804ee body=63 status=ok
// SIG undefined FUN_1486804ee(void)

undefined1 FUN_1486804ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148680618(param_2,param_3);
    param_3 = param_3 + 0x260;
    param_2 = param_2 + 0x260;
  }
  return 1;
}



// FUNCTION 148680556 FUN_148680556 body=59 status=ok
// SIG undefined FUN_148680556(void)

undefined8 FUN_148680556(longlong *param_1)

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



// FUNCTION 1486805a2 FUN_1486805a2 body=40 status=ok
// SIG undefined FUN_1486805a2(void)

void FUN_1486805a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x260) == '\x01') {
    FUN_1458124e2(param_2);
    *(undefined1 *)(param_2 + 0x260) = 0;
  }
  return;
}



// FUNCTION 148680618 FUN_148680618 body=667 status=ok
// SIG undefined FUN_148680618(void)

longlong FUN_148680618(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1d) = uVar1;
  FUN_145bed7d2(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  if ((*(longlong *)(param_1 + 0x50) != *(longlong *)(param_2 + 0x50)) ||
     (*(int *)(param_1 + 0x58) != *(int *)(param_2 + 0x58))) {
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if ((*(longlong *)(param_1 + 0x68) != *(longlong *)(param_2 + 0x68)) ||
     (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70))) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  FUN_1486808b4(param_1 + 0x80,param_2 + 0x80);
  if ((*(longlong *)(param_1 + 0xd0) != *(longlong *)(param_2 + 0xd0)) ||
     (*(int *)(param_1 + 0xd8) != *(int *)(param_2 + 0xd8))) {
    *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if ((*(longlong *)(param_1 + 0xe8) != *(longlong *)(param_2 + 0xe8)) ||
     (*(int *)(param_1 + 0xf0) != *(int *)(param_2 + 0xf0))) {
    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  *(undefined1 *)(param_1 + 0x102) = *(undefined1 *)(param_2 + 0x102);
  *(undefined2 *)(param_1 + 0x100) = *(undefined2 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  FUN_1447715ec(param_1 + 0x118,param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  *(undefined2 *)(param_1 + 0x148) = *(undefined2 *)(param_2 + 0x148);
  *(undefined1 *)(param_1 + 0x14a) = *(undefined1 *)(param_2 + 0x14a);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  FUN_1447715ec(param_1 + 0x160,param_2 + 0x160);
  *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x188);
  *(undefined2 *)(param_1 + 400) = *(undefined2 *)(param_2 + 400);
  *(undefined1 *)(param_1 + 0x192) = *(undefined1 *)(param_2 + 0x192);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  FUN_1447715ec(param_1 + 0x1a8,param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined2 *)(param_1 + 0x1d8) = *(undefined2 *)(param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x1da) = *(undefined1 *)(param_2 + 0x1da);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  FUN_1447715ec(param_1 + 0x1f0,param_2 + 0x1f0);
  *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(param_2 + 0x218);
  uVar1 = *(undefined8 *)(param_2 + 0x220);
  uVar2 = *(undefined8 *)(param_2 + 0x228);
  uVar3 = *(undefined8 *)(param_2 + 0x230);
  uVar4 = *(undefined8 *)(param_2 + 0x238);
  uVar5 = *(undefined8 *)(param_2 + 0x240);
  uVar6 = *(undefined8 *)(param_2 + 0x248);
  uVar7 = *(undefined8 *)(param_2 + 0x254);
  *(undefined8 *)(param_1 + 0x24c) = *(undefined8 *)(param_2 + 0x24c);
  *(undefined8 *)(param_1 + 0x254) = uVar7;
  *(undefined8 *)(param_1 + 0x240) = uVar5;
  *(undefined8 *)(param_1 + 0x248) = uVar6;
  *(undefined8 *)(param_1 + 0x230) = uVar3;
  *(undefined8 *)(param_1 + 0x238) = uVar4;
  *(undefined8 *)(param_1 + 0x220) = uVar1;
  *(undefined8 *)(param_1 + 0x228) = uVar2;
  return param_1;
}



// FUNCTION 1486808b4 FUN_1486808b4 body=122 status=ok
// SIG undefined FUN_1486808b4(void)

longlong FUN_1486808b4(longlong param_1,longlong param_2)

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
    FUN_14868092e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14868092e FUN_14868092e body=227 status=ok
// SIG undefined FUN_14868092e(void)

longlong * FUN_14868092e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1458125bc(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar4 = 0;
      uVar5 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(lVar2 + lVar4);
          *(undefined4 *)(lVar3 + 4 + lVar4) = *(undefined4 *)(lVar2 + 4 + lVar4);
        }
        else {
          *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
          *(undefined8 *)(lVar3 + 8 + lVar4) = *(undefined8 *)(lVar2 + 8 + lVar4);
          *(undefined4 *)(lVar3 + 0x10 + lVar4) = *(undefined4 *)(lVar2 + 0x10 + lVar4);
          *(undefined8 *)(lVar3 + 0x18 + lVar4) = 0;
          *(undefined8 *)(lVar3 + 0x20 + lVar4) = *(undefined8 *)(lVar2 + 0x20 + lVar4);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148680a12 FUN_148680a12 body=57 status=ok
// SIG undefined FUN_148680a12(void)

void FUN_148680a12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bbc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bbc0 = FUN_140002ddd(FUN_1464d20c3,uVar1,L"GbxCharacterMovementDef");
  }
  return;
}



// FUNCTION 148680a94 FUN_148680a94 body=59 status=ok
// SIG undefined FUN_148680a94(void)

undefined8 FUN_148680a94(longlong *param_1)

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



// FUNCTION 148680b7a FUN_148680b7a body=120 status=ok
// SIG undefined FUN_148680b7a(void)

undefined8 FUN_148680b7a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined2 *)(param_3 + lVar3);
      lVar2 = param_2 + 0x18 + lVar3;
      *(undefined1 *)(lVar2 + -0x16) = *(undefined1 *)(puVar1 + 1);
      *(undefined2 *)(lVar2 + -0x18) = *puVar1;
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(puVar1 + 4);
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar1 + 8);
      FUN_1447715ec(lVar2,puVar1 + 0xc);
      *(undefined1 *)(lVar2 + 0x28) = *(undefined1 *)(puVar1 + 0x20);
      lVar3 = lVar3 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148680c1a FUN_148680c1a body=59 status=ok
// SIG undefined FUN_148680c1a(void)

undefined8 FUN_148680c1a(longlong *param_1)

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



// FUNCTION 148680c60 FUN_148680c60 body=40 status=ok
// SIG undefined FUN_148680c60(void)

void FUN_148680c60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148680d2e FUN_148680d2e body=148 status=ok
// SIG undefined FUN_148680d2e(void)

void FUN_148680d2e(undefined8 param_1,longlong param_2)

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
  FUN_14880464a(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148680dc4 FUN_148680dc4 body=148 status=ok
// SIG undefined FUN_148680dc4(void)

void FUN_148680dc4(undefined8 param_1,longlong param_2)

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
  FUN_1488046e2(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148680e5a FUN_148680e5a body=273 status=ok
// SIG undefined FUN_148680e5a(void)

void FUN_148680e5a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
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
  local_38 = 0;
  local_30 = 0xc3769d17;
  local_28 = 0;
  FUN_1446ef920();
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
  local_48 = local_30;
  local_40 = 0;
  FUN_1488045e6(local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148680f6c FUN_148680f6c body=230 status=ok
// SIG undefined FUN_148680f6c(void)

void FUN_148680f6c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  FUN_14880455e(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148681054 FUN_148681054 body=273 status=ok
// SIG undefined FUN_148681054(void)

void FUN_148681054(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
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
  local_38 = 0;
  local_30 = 0xc3769d17;
  local_28 = 0;
  FUN_1446ef920();
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
  local_48 = local_30;
  local_40 = 0;
  FUN_1488045ee(local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148681166 FUN_148681166 body=273 status=ok
// SIG undefined FUN_148681166(void)

void FUN_148681166(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
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
  local_38 = 0;
  local_30 = 0xc3769d17;
  local_28 = 0;
  FUN_1446ef920();
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
  local_48 = local_30;
  local_40 = 0;
  FUN_1488044b6(local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148681278 FUN_148681278 body=356 status=ok
// SIG undefined FUN_148681278(void)

void FUN_148681278(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
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
  local_38 = 0;
  local_30 = 0xc3769d17;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  local_48 = 0;
  FUN_14880440c(local_20,&local_58,local_40);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486813de FUN_1486813de body=273 status=ok
// SIG undefined FUN_1486813de(void)

void FUN_1486813de(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
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
  local_38 = 0;
  local_30 = 0xc3769d17;
  local_28 = 0;
  FUN_1446ef920();
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
  local_48 = local_30;
  local_40 = 0;
  FUN_14880450a(local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148681572 FUN_148681572 body=45 status=ok
// SIG undefined FUN_148681572(void)

longlong FUN_148681572(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486815a0 FUN_1486815a0 body=48 status=ok
// SIG undefined FUN_1486815a0(void)

longlong FUN_1486815a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  thunk_FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486815d0 FUN_1486815d0 body=48 status=ok
// SIG undefined FUN_1486815d0(void)

longlong FUN_1486815d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  thunk_FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681600 FUN_148681600 body=48 status=ok
// SIG undefined FUN_148681600(void)

longlong FUN_148681600(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  thunk_FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681630 FUN_148681630 body=48 status=ok
// SIG undefined FUN_148681630(void)

longlong FUN_148681630(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681660 FUN_148681660 body=48 status=ok
// SIG undefined FUN_148681660(void)

longlong FUN_148681660(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681690 FUN_148681690 body=48 status=ok
// SIG undefined FUN_148681690(void)

longlong FUN_148681690(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486816c0 FUN_1486816c0 body=48 status=ok
// SIG undefined FUN_1486816c0(void)

longlong FUN_1486816c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486816f0 FUN_1486816f0 body=48 status=ok
// SIG undefined FUN_1486816f0(void)

longlong FUN_1486816f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681720 FUN_148681720 body=48 status=ok
// SIG undefined FUN_148681720(void)

longlong FUN_148681720(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681750 FUN_148681750 body=48 status=ok
// SIG undefined FUN_148681750(void)

longlong FUN_148681750(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681780 FUN_148681780 body=48 status=ok
// SIG undefined FUN_148681780(void)

longlong FUN_148681780(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486817b0 FUN_1486817b0 body=48 status=ok
// SIG undefined FUN_1486817b0(void)

longlong FUN_1486817b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486817e0 FUN_1486817e0 body=48 status=ok
// SIG undefined FUN_1486817e0(void)

longlong FUN_1486817e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681810 FUN_148681810 body=48 status=ok
// SIG undefined FUN_148681810(void)

longlong FUN_148681810(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681840 FUN_148681840 body=48 status=ok
// SIG undefined FUN_148681840(void)

longlong FUN_148681840(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681870 FUN_148681870 body=48 status=ok
// SIG undefined FUN_148681870(void)

longlong FUN_148681870(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486818a0 FUN_1486818a0 body=48 status=ok
// SIG undefined FUN_1486818a0(void)

longlong FUN_1486818a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486818d0 FUN_1486818d0 body=48 status=ok
// SIG undefined FUN_1486818d0(void)

longlong FUN_1486818d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681900 FUN_148681900 body=48 status=ok
// SIG undefined FUN_148681900(void)

longlong FUN_148681900(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681930 FUN_148681930 body=48 status=ok
// SIG undefined FUN_148681930(void)

longlong FUN_148681930(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681960 FUN_148681960 body=48 status=ok
// SIG undefined FUN_148681960(void)

longlong FUN_148681960(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681990 FUN_148681990 body=48 status=ok
// SIG undefined FUN_148681990(void)

longlong FUN_148681990(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486819c0 FUN_1486819c0 body=48 status=ok
// SIG undefined FUN_1486819c0(void)

longlong FUN_1486819c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486819f0 FUN_1486819f0 body=48 status=ok
// SIG undefined FUN_1486819f0(void)

longlong FUN_1486819f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681a20 FUN_148681a20 body=48 status=ok
// SIG undefined FUN_148681a20(void)

longlong FUN_148681a20(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681a50 FUN_148681a50 body=48 status=ok
// SIG undefined FUN_148681a50(void)

longlong FUN_148681a50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a60;
  FUN_140fbd98a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148681b52 FUN_148681b52 body=54 status=ok
// SIG undefined FUN_148681b52(void)

undefined1 FUN_148681b52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146145712(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148681bb0 FUN_148681bb0 body=59 status=ok
// SIG undefined FUN_148681bb0(void)

undefined8 FUN_148681bb0(longlong *param_1)

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



// FUNCTION 148681cd6 FUN_148681cd6 body=59 status=ok
// SIG undefined FUN_148681cd6(void)

undefined8 FUN_148681cd6(longlong *param_1)

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



// FUNCTION 148681d78 FUN_148681d78 body=55 status=ok
// SIG undefined FUN_148681d78(void)

void FUN_148681d78(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1458d9fc2(param_2);
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0x28) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  return;
}



// FUNCTION 148681db0 FUN_148681db0 body=55 status=ok
// SIG undefined FUN_148681db0(void)

void FUN_148681db0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1458d9fc2(param_2);
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0x28) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  return;
}



// FUNCTION 148681e00 FUN_148681e00 body=39 status=ok
// SIG undefined FUN_148681e00(void)

undefined8 FUN_148681e00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148681e50 FUN_148681e50 body=59 status=ok
// SIG undefined FUN_148681e50(void)

undefined8 FUN_148681e50(longlong *param_1)

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



// FUNCTION 148681fd4 FUN_148681fd4 body=84 status=ok
// SIG undefined FUN_148681fd4(void)

undefined1 FUN_148681fd4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146145712(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x74);
    uVar2 = *(undefined4 *)(param_3 + 0x78);
    uVar3 = *(undefined4 *)(param_3 + 0x7c);
    uVar4 = *(undefined4 *)(param_3 + 0x80);
    uVar5 = *(undefined4 *)(param_3 + 0x84);
    uVar6 = *(undefined4 *)(param_3 + 0x88);
    uVar7 = *(undefined4 *)(param_3 + 0x8c);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    *(undefined4 *)(param_2 + 0x74) = uVar1;
    *(undefined4 *)(param_2 + 0x78) = uVar2;
    *(undefined4 *)(param_2 + 0x7c) = uVar3;
    *(undefined4 *)(param_2 + 0x80) = uVar4;
    *(undefined4 *)(param_2 + 0x84) = uVar5;
    *(undefined4 *)(param_2 + 0x88) = uVar6;
    *(undefined4 *)(param_2 + 0x8c) = uVar7;
    param_2 = param_2 + 0x90;
    param_3 = param_3 + 0x90;
  }
  return 1;
}



// FUNCTION 148682050 FUN_148682050 body=59 status=ok
// SIG undefined FUN_148682050(void)

undefined8 FUN_148682050(longlong *param_1)

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



// FUNCTION 148682126 FUN_148682126 body=63 status=ok
// SIG undefined FUN_148682126(void)

undefined1 FUN_148682126(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148682250(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 14868218e FUN_14868218e body=59 status=ok
// SIG undefined FUN_14868218e(void)

undefined8 FUN_14868218e(longlong *param_1)

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



// FUNCTION 1486821da FUN_1486821da body=40 status=ok
// SIG undefined FUN_1486821da(void)

void FUN_1486821da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_14581863c(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 148682250 FUN_148682250 body=320 status=ok
// SIG undefined FUN_148682250(void)

longlong FUN_148682250(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  if ((*(longlong *)(param_1 + 0x58) != *(longlong *)(param_2 + 0x58)) ||
     (*(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60))) {
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if ((*(longlong *)(param_1 + 0x70) != *(longlong *)(param_2 + 0x70)) ||
     (*(int *)(param_1 + 0x78) != *(int *)(param_2 + 0x78))) {
    *(longlong *)(param_1 + 0x70) = *(longlong *)(param_2 + 0x70);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  FUN_144a7bb84(param_1 + 0x88,param_2 + 0x88);
  FUN_144a7bb84(param_1 + 0xa0,param_2 + 0xa0);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  if ((*(longlong *)(param_1 + 200) != *(longlong *)(param_2 + 200)) ||
     (*(int *)(param_1 + 0xd0) != *(int *)(param_2 + 0xd0))) {
    *(longlong *)(param_1 + 200) = *(longlong *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  puVar6 = (undefined8 *)(param_2 + 0xe0);
  puVar7 = (undefined8 *)(param_1 + 0xe0);
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  return param_1;
}



// FUNCTION 148682392 FUN_148682392 body=57 status=ok
// SIG undefined FUN_148682392(void)

void FUN_148682392(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bca8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bca8 = FUN_140002ddd(FUN_1464d271f,uVar1,L"GbxCharacterSlidingDef");
  }
  return;
}



// FUNCTION 148682438 FUN_148682438 body=59 status=ok
// SIG undefined FUN_148682438(void)

undefined8 FUN_148682438(longlong *param_1)

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



// FUNCTION 148682530 FUN_148682530 body=59 status=ok
// SIG undefined FUN_148682530(void)

undefined8 FUN_148682530(longlong *param_1)

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



// FUNCTION 1486825f0 FUN_1486825f0 body=63 status=ok
// SIG undefined FUN_1486825f0(void)

undefined1 FUN_1486825f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14868271a(param_2,param_3);
    param_3 = param_3 + 0x4e8;
    param_2 = param_2 + 0x4e8;
  }
  return 1;
}



// FUNCTION 148682658 FUN_148682658 body=59 status=ok
// SIG undefined FUN_148682658(void)

undefined8 FUN_148682658(longlong *param_1)

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



// FUNCTION 1486826a4 FUN_1486826a4 body=40 status=ok
// SIG undefined FUN_1486826a4(void)

void FUN_1486826a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4e8) == '\x01') {
    FUN_14587aa7c(param_2);
    *(undefined1 *)(param_2 + 0x4e8) = 0;
  }
  return;
}



// FUNCTION 14868271a FUN_14868271a body=1056 status=ok
// SIG undefined FUN_14868271a(void)

longlong FUN_14868271a(longlong param_1,longlong param_2)

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
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar10 = *(undefined4 *)(param_2 + 0x40);
  uVar11 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 0x40) = uVar10;
  *(undefined4 *)(param_1 + 0x44) = uVar11;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_1447715ec(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x92);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  FUN_1447715ec(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  uVar1 = *(undefined4 *)(param_2 + 0xec);
  uVar2 = *(undefined4 *)(param_2 + 0xf0);
  uVar3 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  *(undefined4 *)(param_1 + 0xf4) = uVar3;
  FUN_144a787a6(param_1 + 0xf8,param_2 + 0xf8);
  FUN_14065c7a4(param_1 + 0x108,param_2 + 0x108);
  uVar12 = *(undefined8 *)(param_2 + 0x120);
  uVar1 = *(undefined4 *)(param_2 + 0x128);
  uVar2 = *(undefined4 *)(param_2 + 300);
  uVar3 = *(undefined4 *)(param_2 + 0x130);
  uVar4 = *(undefined4 *)(param_2 + 0x134);
  uVar5 = *(undefined4 *)(param_2 + 0x136);
  uVar6 = *(undefined4 *)(param_2 + 0x13a);
  uVar7 = *(undefined4 *)(param_2 + 0x13e);
  uVar8 = *(undefined4 *)(param_2 + 0x142);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x120) = uVar12;
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  *(undefined4 *)(param_1 + 300) = uVar2;
  *(undefined4 *)(param_1 + 0x130) = uVar3;
  *(undefined4 *)(param_1 + 0x134) = uVar4;
  *(undefined4 *)(param_1 + 0x136) = uVar5;
  *(undefined4 *)(param_1 + 0x13a) = uVar6;
  *(undefined4 *)(param_1 + 0x13e) = uVar7;
  *(undefined4 *)(param_1 + 0x142) = uVar8;
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  uVar1 = *(undefined4 *)(param_2 + 0x154);
  uVar2 = *(undefined4 *)(param_2 + 0x158);
  uVar3 = *(undefined4 *)(param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  *(undefined4 *)(param_1 + 0x15c) = uVar3;
  FUN_144a787a6(param_1 + 0x160,param_2 + 0x160);
  FUN_14065c7a4(param_1 + 0x170,param_2 + 0x170);
  uVar12 = *(undefined8 *)(param_2 + 0x188);
  uVar1 = *(undefined4 *)(param_2 + 400);
  uVar2 = *(undefined4 *)(param_2 + 0x194);
  uVar3 = *(undefined4 *)(param_2 + 0x198);
  uVar4 = *(undefined4 *)(param_2 + 0x19c);
  uVar5 = *(undefined4 *)(param_2 + 0x19e);
  uVar6 = *(undefined4 *)(param_2 + 0x1a2);
  uVar7 = *(undefined4 *)(param_2 + 0x1a6);
  uVar8 = *(undefined4 *)(param_2 + 0x1aa);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = uVar12;
  *(undefined4 *)(param_1 + 400) = uVar1;
  *(undefined4 *)(param_1 + 0x194) = uVar2;
  *(undefined4 *)(param_1 + 0x198) = uVar3;
  *(undefined4 *)(param_1 + 0x19c) = uVar4;
  *(undefined4 *)(param_1 + 0x19e) = uVar5;
  *(undefined4 *)(param_1 + 0x1a2) = uVar6;
  *(undefined4 *)(param_1 + 0x1a6) = uVar7;
  *(undefined4 *)(param_1 + 0x1aa) = uVar8;
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  uVar1 = *(undefined4 *)(param_2 + 0x1bc);
  uVar2 = *(undefined4 *)(param_2 + 0x1c0);
  uVar3 = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x1c0) = uVar2;
  *(undefined4 *)(param_1 + 0x1c4) = uVar3;
  FUN_144a787a6(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_14065c7a4(param_1 + 0x1d8,param_2 + 0x1d8);
  uVar12 = *(undefined8 *)(param_2 + 0x1f0);
  uVar1 = *(undefined4 *)(param_2 + 0x1f8);
  uVar2 = *(undefined4 *)(param_2 + 0x1fc);
  uVar3 = *(undefined4 *)(param_2 + 0x200);
  uVar4 = *(undefined4 *)(param_2 + 0x204);
  uVar5 = *(undefined4 *)(param_2 + 0x206);
  uVar6 = *(undefined4 *)(param_2 + 0x20a);
  uVar7 = *(undefined4 *)(param_2 + 0x20e);
  uVar8 = *(undefined4 *)(param_2 + 0x212);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1f0) = uVar12;
  *(undefined4 *)(param_1 + 0x1f8) = uVar1;
  *(undefined4 *)(param_1 + 0x1fc) = uVar2;
  *(undefined4 *)(param_1 + 0x200) = uVar3;
  *(undefined4 *)(param_1 + 0x204) = uVar4;
  *(undefined4 *)(param_1 + 0x206) = uVar5;
  *(undefined4 *)(param_1 + 0x20a) = uVar6;
  *(undefined4 *)(param_1 + 0x20e) = uVar7;
  *(undefined4 *)(param_1 + 0x212) = uVar8;
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  uVar1 = *(undefined4 *)(param_2 + 0x224);
  uVar2 = *(undefined4 *)(param_2 + 0x228);
  uVar3 = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = uVar1;
  *(undefined4 *)(param_1 + 0x228) = uVar2;
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  FUN_144a787a6(param_1 + 0x230,param_2 + 0x230);
  FUN_14065c7a4(param_1 + 0x240,param_2 + 0x240);
  uVar12 = *(undefined8 *)(param_2 + 600);
  uVar1 = *(undefined4 *)(param_2 + 0x260);
  uVar2 = *(undefined4 *)(param_2 + 0x264);
  uVar3 = *(undefined4 *)(param_2 + 0x268);
  uVar4 = *(undefined4 *)(param_2 + 0x26c);
  uVar5 = *(undefined4 *)(param_2 + 0x26e);
  uVar6 = *(undefined4 *)(param_2 + 0x272);
  uVar7 = *(undefined4 *)(param_2 + 0x276);
  uVar8 = *(undefined4 *)(param_2 + 0x27a);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  *(undefined8 *)(param_1 + 600) = uVar12;
  *(undefined4 *)(param_1 + 0x260) = uVar1;
  *(undefined4 *)(param_1 + 0x264) = uVar2;
  *(undefined4 *)(param_1 + 0x268) = uVar3;
  *(undefined4 *)(param_1 + 0x26c) = uVar4;
  *(undefined4 *)(param_1 + 0x26e) = uVar5;
  *(undefined4 *)(param_1 + 0x272) = uVar6;
  *(undefined4 *)(param_1 + 0x276) = uVar7;
  *(undefined4 *)(param_1 + 0x27a) = uVar8;
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x280);
  uVar1 = *(undefined4 *)(param_2 + 0x28c);
  uVar2 = *(undefined4 *)(param_2 + 0x290);
  uVar3 = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x28c) = uVar1;
  *(undefined4 *)(param_1 + 0x290) = uVar2;
  *(undefined4 *)(param_1 + 0x294) = uVar3;
  FUN_144a787a6(param_1 + 0x298,param_2 + 0x298);
  FUN_14065c7a4(param_1 + 0x2a8,param_2 + 0x2a8);
  uVar12 = *(undefined8 *)(param_2 + 0x2c0);
  uVar1 = *(undefined4 *)(param_2 + 0x2c8);
  uVar2 = *(undefined4 *)(param_2 + 0x2cc);
  uVar3 = *(undefined4 *)(param_2 + 0x2d0);
  uVar4 = *(undefined4 *)(param_2 + 0x2d4);
  uVar5 = *(undefined4 *)(param_2 + 0x2d6);
  uVar6 = *(undefined4 *)(param_2 + 0x2da);
  uVar7 = *(undefined4 *)(param_2 + 0x2de);
  uVar8 = *(undefined4 *)(param_2 + 0x2e2);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2c0) = uVar12;
  *(undefined4 *)(param_1 + 0x2c8) = uVar1;
  *(undefined4 *)(param_1 + 0x2cc) = uVar2;
  *(undefined4 *)(param_1 + 0x2d0) = uVar3;
  *(undefined4 *)(param_1 + 0x2d4) = uVar4;
  *(undefined4 *)(param_1 + 0x2d6) = uVar5;
  *(undefined4 *)(param_1 + 0x2da) = uVar6;
  *(undefined4 *)(param_1 + 0x2de) = uVar7;
  *(undefined4 *)(param_1 + 0x2e2) = uVar8;
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  uVar1 = *(undefined4 *)(param_2 + 0x2f4);
  uVar2 = *(undefined4 *)(param_2 + 0x2f8);
  uVar3 = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x2f4) = uVar1;
  *(undefined4 *)(param_1 + 0x2f8) = uVar2;
  *(undefined4 *)(param_1 + 0x2fc) = uVar3;
  FUN_144a787a6(param_1 + 0x300,param_2 + 0x300);
  FUN_14065c7a4(param_1 + 0x310,param_2 + 0x310);
  uVar1 = *(undefined4 *)(param_2 + 0x324);
  uVar2 = *(undefined4 *)(param_2 + 0x328);
  uVar3 = *(undefined4 *)(param_2 + 0x32c);
  uVar4 = *(undefined4 *)(param_2 + 0x330);
  uVar5 = *(undefined4 *)(param_2 + 0x334);
  uVar6 = *(undefined4 *)(param_2 + 0x338);
  uVar7 = *(undefined4 *)(param_2 + 0x33c);
  uVar8 = *(undefined4 *)(param_2 + 0x33e);
  uVar9 = *(undefined4 *)(param_2 + 0x342);
  uVar10 = *(undefined4 *)(param_2 + 0x346);
  uVar11 = *(undefined4 *)(param_2 + 0x34a);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  *(undefined4 *)(param_1 + 0x324) = uVar1;
  *(undefined4 *)(param_1 + 0x328) = uVar2;
  *(undefined4 *)(param_1 + 0x32c) = uVar3;
  *(undefined4 *)(param_1 + 0x330) = uVar4;
  *(undefined4 *)(param_1 + 0x334) = uVar5;
  *(undefined4 *)(param_1 + 0x338) = uVar6;
  *(undefined4 *)(param_1 + 0x33c) = uVar7;
  *(undefined4 *)(param_1 + 0x33e) = uVar8;
  *(undefined4 *)(param_1 + 0x342) = uVar9;
  *(undefined4 *)(param_1 + 0x346) = uVar10;
  *(undefined4 *)(param_1 + 0x34a) = uVar11;
  FUN_141844d90(param_1 + 0x350,param_2 + 0x350);
  FUN_141844d90(param_1 + 0x368,param_2 + 0x368);
  FUN_141844d90(param_1 + 0x380,param_2 + 0x380);
  FUN_148682b3a(param_1 + 0x398,param_2 + 0x398);
  FUN_14123c256(param_1 + 1000,param_2 + 1000);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
  FUN_144a7bb84(param_1 + 0x408,param_2 + 0x408);
  FUN_144a7bb84(param_1 + 0x420,param_2 + 0x420);
  FUN_144a7bb84(param_1 + 0x438,param_2 + 0x438);
  FUN_144a7bb84(param_1 + 0x450,param_2 + 0x450);
  FUN_144a7bb84(param_1 + 0x468,param_2 + 0x468);
  FUN_144a7bb84(param_1 + 0x480,param_2 + 0x480);
  FUN_148682cf8(param_1 + 0x498,param_2 + 0x498);
  return param_1;
}



// FUNCTION 148682b3a FUN_148682b3a body=122 status=ok
// SIG undefined FUN_148682b3a(void)

longlong FUN_148682b3a(longlong param_1,longlong param_2)

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
    FUN_148682bb4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148682bb4 FUN_148682bb4 body=210 status=ok
// SIG undefined FUN_148682bb4(void)

undefined8 * FUN_148682bb4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14587acdc(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_148682c86(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148682c86 FUN_148682c86 body=114 status=ok
// SIG undefined FUN_148682c86(void)

undefined8 * FUN_148682c86(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148682cf8 FUN_148682cf8 body=122 status=ok
// SIG undefined FUN_148682cf8(void)

longlong FUN_148682cf8(longlong param_1,longlong param_2)

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
    FUN_148682d72(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148682d72 FUN_148682d72 body=250 status=ok
// SIG undefined FUN_148682d72(void)

longlong * FUN_148682d72(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14587ae5e(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1406cd6a8(param_1);
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
          FUN_1412bd664(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x38 + lVar6) = *(undefined8 *)(lVar2 + 0x38 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x40;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148682e6e FUN_148682e6e body=57 status=ok
// SIG undefined FUN_148682e6e(void)

void FUN_148682e6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bd38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bd38 = FUN_140002ddd(FUN_1464d2973,uVar1,L"GbxSwimmingDef");
  }
  return;
}



// FUNCTION 148682ef4 FUN_148682ef4 body=59 status=ok
// SIG undefined FUN_148682ef4(void)

undefined8 FUN_148682ef4(longlong *param_1)

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



// FUNCTION 148683008 FUN_148683008 body=59 status=ok
// SIG undefined FUN_148683008(void)

undefined8 FUN_148683008(longlong *param_1)

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



// FUNCTION 14868304e FUN_14868304e body=32 status=ok
// SIG undefined FUN_14868304e(void)

void FUN_14868304e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_141850490(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 14868310e FUN_14868310e body=70 status=ok
// SIG undefined FUN_14868310e(void)

undefined1 FUN_14868310e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1406fa324(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14868317c FUN_14868317c body=59 status=ok
// SIG undefined FUN_14868317c(void)

undefined8 FUN_14868317c(longlong *param_1)

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



// FUNCTION 1486831c2 FUN_1486831c2 body=48 status=ok
// SIG undefined FUN_1486831c2(void)

void FUN_1486831c2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14b0f7930;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 148683240 FUN_148683240 body=62 status=ok
// SIG undefined FUN_148683240(void)

undefined8 * FUN_148683240(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0f7930;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1486832f0 FUN_1486832f0 body=81 status=ok
// SIG undefined FUN_1486832f0(void)

undefined8 FUN_1486832f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_141289ada(param_2 + -0x18,param_3 + -0x18);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_148683504(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14868336a FUN_14868336a body=59 status=ok
// SIG undefined FUN_14868336a(void)

undefined8 FUN_14868336a(longlong *param_1)

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



// FUNCTION 1486833b0 FUN_1486833b0 body=34 status=ok
// SIG undefined FUN_1486833b0(void)

void FUN_1486833b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_148683484(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148683420 FUN_148683420 body=43 status=ok
// SIG undefined FUN_148683420(void)

undefined8 FUN_148683420(undefined8 param_1,int param_2)

{
  FUN_148683484();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14868344c FUN_14868344c body=55 status=ok
// SIG undefined FUN_14868344c(void)

void FUN_14868344c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bdb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bdb0 = FUN_140002ddd(FUN_1464d2c1d,uVar1,L"GbxChoiceGlobals");
  }
  return;
}



// FUNCTION 148683484 FUN_148683484 body=71 status=ok
// SIG undefined FUN_148683484(void)

void FUN_148683484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0f7aa0;
  FUN_1486834cb(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1486834cb FUN_1486834cb body=56 status=ok
// SIG undefined FUN_1486834cb(void)

void FUN_1486834cb(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b0f7930;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 148683504 FUN_148683504 body=95 status=ok
// SIG undefined FUN_148683504(void)

undefined8 * FUN_148683504(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1486834cb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148683564(param_1,iVar1);
      FUN_1486835d7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148683564 FUN_148683564 body=115 status=ok
// SIG undefined FUN_148683564(void)

void FUN_148683564(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486835d7 FUN_1486835d7 body=146 status=ok
// SIG undefined FUN_1486835d7(void)

void FUN_1486835d7(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x18);
    piVar5 = (int *)(param_2 + 0x20);
    do {
      puVar4[-3] = &PTR_FUN_14b0f7930;
      iVar1 = piVar5[-5];
      iVar2 = piVar5[-4];
      iVar3 = piVar5[-3];
      *(int *)(puVar4 + -2) = piVar5[-6];
      *(int *)((longlong)puVar4 + -0xc) = iVar1;
      *(int *)(puVar4 + -1) = iVar2;
      *(int *)((longlong)puVar4 + -4) = iVar3;
      *puVar4 = 0;
      iVar1 = *piVar5;
      _Src = *(void **)(piVar5 + -2);
      *(int *)(puVar4 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        FUN_1401b309e(puVar4,iVar1,0);
        memcpy((void *)*puVar4,_Src,(longlong)iVar1 << 3);
      }
      puVar4 = puVar4 + 5;
      piVar5 = piVar5 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486836d6 FUN_1486836d6 body=170 status=ok
// SIG undefined FUN_1486836d6(void)

void FUN_1486836d6(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  FUN_144a78877(((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4),
                ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
                (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868386c FUN_14868386c body=59 status=ok
// SIG undefined FUN_14868386c(void)

undefined8 FUN_14868386c(longlong *param_1)

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



// FUNCTION 14868394a FUN_14868394a body=80 status=ok
// SIG undefined FUN_14868394a(void)

undefined8 FUN_14868394a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_148683a7c(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486839c2 FUN_1486839c2 body=59 status=ok
// SIG undefined FUN_1486839c2(void)

undefined8 FUN_1486839c2(longlong *param_1)

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



// FUNCTION 148683a08 FUN_148683a08 body=38 status=ok
// SIG undefined FUN_148683a08(void)

void FUN_148683a08(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148683a7c FUN_148683a7c body=89 status=ok
// SIG undefined FUN_148683a7c(void)

undefined8 * FUN_148683a7c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148683ad6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 148683ad6 FUN_148683ad6 body=115 status=ok
// SIG undefined FUN_148683ad6(void)

void FUN_148683ad6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148683b68 FUN_148683b68 body=46 status=ok
// SIG undefined FUN_148683b68(void)

void FUN_148683b68(undefined8 param_1,longlong param_2)

{
  FUN_148683cb8(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148683bac FUN_148683bac body=72 status=ok
// SIG undefined FUN_148683bac(void)

undefined1 FUN_148683bac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_148683ce8(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148683c1c FUN_148683c1c body=59 status=ok
// SIG undefined FUN_148683c1c(void)

undefined8 FUN_148683c1c(longlong *param_1)

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



// FUNCTION 148683cb8 FUN_148683cb8 body=47 status=ok
// SIG undefined FUN_148683cb8(void)

void FUN_148683cb8(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148683ce8 FUN_148683ce8 body=95 status=ok
// SIG undefined FUN_148683ce8(void)

undefined8 * FUN_148683ce8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148683cb8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148683d48(param_1,iVar1);
      FUN_148683daa(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148683d48 FUN_148683d48 body=98 status=ok
// SIG undefined FUN_148683d48(void)

void FUN_148683d48(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148683daa FUN_148683daa body=52 status=ok
// SIG undefined FUN_148683daa(void)

void FUN_148683daa(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148683dde(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148683dde FUN_148683dde body=119 status=ok
// SIG undefined FUN_148683dde(void)

undefined8 * FUN_148683dde(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_148683ad6(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 0xc);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 148683e56 FUN_148683e56 body=52 status=ok
// SIG undefined FUN_148683e56(void)

void FUN_148683e56(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_148683cb8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148683e8a FUN_148683e8a body=37 status=ok
// SIG undefined FUN_148683e8a(void)

void FUN_148683e8a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  FUN_143c4e5d8(param_2);
  return;
}



// FUNCTION 148683edc FUN_148683edc body=186 status=ok
// SIG undefined FUN_148683edc(void)

undefined8 FUN_148683edc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
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
      FUN_141289ada(param_2 + lVar14 + 8,param_3 + lVar14 + 8);
      *(undefined1 *)(param_2 + lVar14 + 0x18) = *(undefined1 *)(param_3 + lVar14 + 0x18);
      FUN_144a7bb84(param_2 + lVar14 + 0x20,param_3 + lVar14 + 0x20);
      lVar1 = param_2 + lVar14;
      lVar2 = param_3 + lVar14;
      FUN_144a7bb84(lVar1 + 0x38,lVar2 + 0x38);
      uVar3 = *(undefined4 *)(lVar2 + 0x54);
      uVar4 = *(undefined4 *)(lVar2 + 0x58);
      uVar5 = *(undefined4 *)(lVar2 + 0x5c);
      uVar6 = *(undefined4 *)(lVar2 + 0x60);
      uVar7 = *(undefined4 *)(lVar2 + 100);
      uVar8 = *(undefined4 *)(lVar2 + 0x68);
      uVar9 = *(undefined4 *)(lVar2 + 0x6c);
      uVar10 = *(undefined4 *)(lVar2 + 0x70);
      uVar11 = *(undefined4 *)(lVar2 + 0x74);
      uVar12 = *(undefined4 *)(lVar2 + 0x78);
      uVar13 = *(undefined4 *)(lVar2 + 0x7c);
      *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(lVar2 + 0x50);
      *(undefined4 *)(lVar1 + 0x54) = uVar3;
      *(undefined4 *)(lVar1 + 0x58) = uVar4;
      *(undefined4 *)(lVar1 + 0x5c) = uVar5;
      *(undefined4 *)(lVar1 + 0x60) = uVar6;
      *(undefined4 *)(lVar1 + 100) = uVar7;
      *(undefined4 *)(lVar1 + 0x68) = uVar8;
      *(undefined4 *)(lVar1 + 0x6c) = uVar9;
      *(undefined4 *)(lVar1 + 0x70) = uVar10;
      *(undefined4 *)(lVar1 + 0x74) = uVar11;
      *(undefined4 *)(lVar1 + 0x78) = uVar12;
      *(undefined4 *)(lVar1 + 0x7c) = uVar13;
      *(undefined4 *)(lVar1 + 0x7f) = *(undefined4 *)(lVar2 + 0x7f);
      lVar14 = lVar14 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148683fbe FUN_148683fbe body=59 status=ok
// SIG undefined FUN_148683fbe(void)

undefined8 FUN_148683fbe(longlong *param_1)

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



// FUNCTION 14868400a FUN_14868400a body=49 status=ok
// SIG undefined FUN_14868400a(void)

void FUN_14868400a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 14868408e FUN_14868408e body=57 status=ok
// SIG undefined FUN_14868408e(void)

undefined8 * FUN_14868408e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1486840c8 FUN_1486840c8 body=55 status=ok
// SIG undefined FUN_1486840c8(void)

void FUN_1486840c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5be98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5be98 = FUN_140002ddd(FUN_1464d3121,uVar1,L"GbxCinematicModeDef");
  }
  return;
}



// FUNCTION 148684100 FUN_148684100 body=28 status=ok
// SIG undefined FUN_148684100(void)

undefined8 FUN_148684100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148684176 FUN_148684176 body=59 status=ok
// SIG undefined FUN_148684176(void)

undefined8 FUN_148684176(longlong *param_1)

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



// FUNCTION 148684218 FUN_148684218 body=58 status=ok
// SIG undefined FUN_148684218(void)

void FUN_148684218(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b0f84e0;
  FUN_144a5dc74(param_2 + 3);
  *(undefined4 *)(param_2 + 5) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x2c) = 2;
  return;
}



// FUNCTION 148684268 FUN_148684268 body=54 status=ok
// SIG undefined FUN_148684268(void)

undefined1 FUN_148684268(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486843ae(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1486842c6 FUN_1486842c6 body=59 status=ok
// SIG undefined FUN_1486842c6(void)

undefined8 FUN_1486842c6(longlong *param_1)

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



// FUNCTION 14868430c FUN_14868430c body=32 status=ok
// SIG undefined FUN_14868430c(void)

void FUN_14868430c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_148684372(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148684372 FUN_148684372 body=60 status=ok
// SIG undefined FUN_148684372(void)

void FUN_148684372(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0f84e0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1486843ae FUN_1486843ae body=99 status=ok
// SIG undefined FUN_1486843ae(void)

longlong FUN_1486843ae(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_2 + 0x2c);
  return param_1;
}



// FUNCTION 148684412 FUN_148684412 body=104 status=ok
// SIG undefined FUN_148684412(void)

undefined8 FUN_148684412(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14887a842(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868447c FUN_14868447c body=28 status=ok
// SIG undefined FUN_14868447c(void)

undefined8 FUN_14868447c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148684504 FUN_148684504 body=59 status=ok
// SIG undefined FUN_148684504(void)

undefined8 FUN_148684504(longlong *param_1)

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



// FUNCTION 1486845a4 FUN_1486845a4 body=55 status=ok
// SIG undefined FUN_1486845a4(void)

void FUN_1486845a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bf10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bf10 = FUN_140002ddd(FUN_1464d330d,uVar1,L"GbxClosestSpeakerValueResolver");
  }
  return;
}



// FUNCTION 148684676 FUN_148684676 body=75 status=ok
// SIG undefined FUN_148684676(void)

undefined1 FUN_148684676(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_1486847a8();
      lVar6 = lVar6 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486846ea FUN_1486846ea body=59 status=ok
// SIG undefined FUN_1486846ea(void)

undefined8 FUN_1486846ea(longlong *param_1)

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



// FUNCTION 148684730 FUN_148684730 body=54 status=ok
// SIG undefined FUN_148684730(void)

void FUN_148684730(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    *(undefined4 *)(param_2 + 0x58) = 0;
    if (*(longlong *)(param_2 + 0x50) != 0) {
      FUN_1400020a8();
    }
    FUN_140f8e768(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1486847a8 FUN_1486847a8 body=122 status=ok
// SIG undefined FUN_1486847a8(void)

longlong FUN_1486847a8(longlong param_1,longlong param_2)

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
    FUN_148684822(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148684822 FUN_148684822 body=122 status=ok
// SIG undefined FUN_148684822(void)

undefined8 * FUN_148684822(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140f8e7a0(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406245f8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x1c);
    }
  }
  return param_1;
}



// FUNCTION 148684928 FUN_148684928 body=59 status=ok
// SIG undefined FUN_148684928(void)

undefined8 FUN_148684928(longlong *param_1)

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



// FUNCTION 1486849c8 FUN_1486849c8 body=55 status=ok
// SIG undefined FUN_1486849c8(void)

void FUN_1486849c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bf70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bf70 = FUN_140002ddd(FUN_1464d34c9,uVar1,L"GbxCondition_AIReachedNode");
  }
  return;
}



// FUNCTION 148684a1e FUN_148684a1e body=125 status=ok
// SIG undefined FUN_148684a1e(void)

undefined8 FUN_148684a1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      *(undefined1 *)(param_2 + -0x68) = *(undefined1 *)(param_3 + -0x68);
      *(undefined1 *)(param_2 + -0x60) = *(undefined1 *)(param_3 + -0x60);
      *(undefined8 *)(param_2 + -0x58) = *(undefined8 *)(param_3 + -0x58);
      *(undefined4 *)(param_2 + -0x50) = *(undefined4 *)(param_3 + -0x50);
      FUN_1447715ec(param_2 + -0x48,param_3 + -0x48);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x10);
      uVar6 = *(undefined4 *)(param_3 + -0xc);
      uVar7 = *(undefined4 *)(param_3 + -8);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined4 *)(param_2 + -0x10) = uVar5;
      *(undefined4 *)(param_2 + -0xc) = uVar6;
      *(undefined4 *)(param_2 + -8) = uVar7;
      FUN_148648a6c(param_2,param_3);
      param_3 = param_3 + 0xc0;
      param_2 = param_2 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148684ac4 FUN_148684ac4 body=59 status=ok
// SIG undefined FUN_148684ac4(void)

undefined8 FUN_148684ac4(longlong *param_1)

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



// FUNCTION 148684b10 FUN_148684b10 body=38 status=ok
// SIG undefined FUN_148684b10(void)

void FUN_148684b10(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_148684b7a(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148684b7a FUN_148684b7a body=81 status=ok
// SIG undefined FUN_148684b7a(void)

void FUN_148684b7a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0f9070;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_14118ae8e(param_1 + 0xe);
  if (param_1[8] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148684bcc FUN_148684bcc body=55 status=ok
// SIG undefined FUN_148684bcc(void)

void FUN_148684bcc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bf88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bf88 = FUN_140002ddd(FUN_1464d355f,uVar1,L"GbxCondition_Fact");
  }
  return;
}



// FUNCTION 148684c52 FUN_148684c52 body=74 status=ok
// SIG undefined FUN_148684c52(void)

undefined1 FUN_148684c52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1403de7ba(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148684cc4 FUN_148684cc4 body=59 status=ok
// SIG undefined FUN_148684cc4(void)

undefined8 FUN_148684cc4(longlong *param_1)

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



// FUNCTION 148684d0a FUN_148684d0a body=34 status=ok
// SIG undefined FUN_148684d0a(void)

void FUN_148684d0a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_145897940(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148684d7a FUN_148684d7a body=55 status=ok
// SIG undefined FUN_148684d7a(void)

void FUN_148684d7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bfa0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bfa0 = FUN_140002ddd(FUN_1464d35f5,uVar1,L"GbxCondition_HasActorPartTags");
  }
  return;
}



// FUNCTION 148684e00 FUN_148684e00 body=74 status=ok
// SIG undefined FUN_148684e00(void)

undefined1 FUN_148684e00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1403de7ba(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148684e72 FUN_148684e72 body=59 status=ok
// SIG undefined FUN_148684e72(void)

undefined8 FUN_148684e72(longlong *param_1)

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



// FUNCTION 148684eb8 FUN_148684eb8 body=34 status=ok
// SIG undefined FUN_148684eb8(void)

void FUN_148684eb8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1458044dc(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148684f28 FUN_148684f28 body=55 status=ok
// SIG undefined FUN_148684f28(void)

void FUN_148684f28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bfb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bfb8 = FUN_140002ddd(FUN_1464d368b,uVar1,L"GbxCondition_HasGameplayTags");
  }
  return;
}



// FUNCTION 148684f96 FUN_148684f96 body=191 status=ok
// SIG undefined FUN_148684f96(void)

void FUN_148684f96(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145d89b32(param_1,plVar1);
  FUN_14148f26f(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148685064 FUN_148685064 body=374 status=ok
// SIG undefined FUN_148685064(void)

void FUN_148685064(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
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
  local_3c = 0;
  FUN_144a7452c();
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
  local_58 = local_38;
  uVar2 = FUN_14477b664(uStack_30);
  local_50 = FUN_14477b664(uVar2);
  local_48 = local_28;
  FUN_143cf5e22(local_20,&local_58,uVar1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148685219 FUN_148685219 body=7 status=ok
// SIG undefined FUN_148685219(void)

void FUN_148685219(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 14868522e FUN_14868522e body=7 status=ok
// SIG undefined FUN_14868522e(void)

void FUN_14868522e(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 148685262 FUN_148685262 body=39 status=ok
// SIG undefined FUN_148685262(void)

void FUN_148685262(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143d10c0e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14868528a FUN_14868528a body=39 status=ok
// SIG undefined FUN_14868528a(void)

void FUN_14868528a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143d10cfa();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1486852c4 FUN_1486852c4 body=430 status=ok
// SIG undefined FUN_1486852c4(void)

void FUN_1486852c4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
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
  iVar1 = local_34;
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
  uVar2 = FUN_143d0faf2(param_1,local_30,iVar1 != 0,local_38);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148685494 FUN_148685494 body=304 status=ok
// SIG undefined FUN_148685494(void)

void FUN_148685494(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5c450) {
    FUN_144b3d300(&DAT_14cb5c450);
    if (DAT_14cb5c450 == -1) {
      FUN_1446f470e(&DAT_14cb5c448,L"GbxActorData",1);
      _Init_thread_footer(&DAT_14cb5c450);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5c45c) {
    FUN_144b3d300(&DAT_14cb5c45c);
    if (DAT_14cb5c45c == -1) {
      FUN_1446f470e(&DAT_14cb5c454,L"Blackboard",1);
      _Init_thread_footer(&DAT_14cb5c45c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5c468) {
    FUN_144b3d300(&DAT_14cb5c468);
    if (DAT_14cb5c468 == -1) {
      FUN_1446f470e(&DAT_14cb5c460,L"FactsConduit",1);
      _Init_thread_footer(&DAT_14cb5c468);
      return;
    }
  }
  return;
}



// FUNCTION 1486855c4 FUN_1486855c4 body=45 status=ok
// SIG undefined FUN_1486855c4(void)

longlong FUN_1486855c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14067cd44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486855f2 FUN_1486855f2 body=48 status=ok
// SIG undefined FUN_1486855f2(void)

longlong FUN_1486855f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14067cd44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148685622 FUN_148685622 body=48 status=ok
// SIG undefined FUN_148685622(void)

longlong FUN_148685622(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14067cd44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148685652 FUN_148685652 body=48 status=ok
// SIG undefined FUN_148685652(void)

longlong FUN_148685652(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14067cd44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486856b6 FUN_1486856b6 body=48 status=ok
// SIG undefined FUN_1486856b6(void)

longlong FUN_1486856b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1457417a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486856f6 FUN_1486856f6 body=48 status=ok
// SIG undefined FUN_1486856f6(void)

longlong FUN_1486856f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1457417a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868573e FUN_14868573e body=48 status=ok
// SIG undefined FUN_14868573e(void)

longlong FUN_14868573e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1457417a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148685780 FUN_148685780 body=26 status=ok
// SIG undefined FUN_148685780(void)

undefined8 FUN_148685780(longlong param_1,undefined8 param_2)

{
  FUN_1488259aa(param_1 + -8);
  return param_2;
}



// FUNCTION 1486857a4 FUN_1486857a4 body=48 status=ok
// SIG undefined FUN_1486857a4(void)

longlong FUN_1486857a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1457417a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486857fe FUN_1486857fe body=48 status=ok
// SIG undefined FUN_1486857fe(void)

longlong FUN_1486857fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1457417a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148685836 FUN_148685836 body=154 status=ok
// SIG undefined FUN_148685836(void)

undefined8 FUN_148685836(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406c9d00(param_1 + 0x30,&local_58);
  if (local_50 == 0) {
    local_50 = FUN_140927942();
  }
  uVar1 = FUN_14477b664(local_50);
  local_40 = local_58;
  uVar1 = FUN_14477b664(uVar1);
  local_38 = FUN_14477b664(uVar1);
  local_30 = local_48;
  FUN_1411f1bdc(param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486858d2 FUN_1486858d2 body=48 status=ok
// SIG undefined FUN_1486858d2(void)

longlong FUN_1486858d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1457417a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868590a FUN_14868590a body=48 status=ok
// SIG undefined FUN_14868590a(void)

longlong FUN_14868590a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_1457417a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148685942 FUN_148685942 body=48 status=ok
// SIG undefined FUN_148685942(void)

longlong FUN_148685942(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_1457417a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148685982 FUN_148685982 body=48 status=ok
// SIG undefined FUN_148685982(void)

longlong FUN_148685982(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_1457417a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486859c2 FUN_1486859c2 body=48 status=ok
// SIG undefined FUN_1486859c2(void)

longlong FUN_1486859c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_1457417a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148685a6c FUN_148685a6c body=59 status=ok
// SIG undefined FUN_148685a6c(void)

undefined8 FUN_148685a6c(longlong *param_1)

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



// FUNCTION 148685b2c FUN_148685b2c body=172 status=ok
// SIG undefined FUN_148685b2c(void)

undefined8 FUN_148685b2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_3 + lVar2;
      plVar3 = (longlong *)(param_2 + 0x18 + lVar2);
      *(undefined1 *)(plVar3 + -2) = *(undefined1 *)(lVar1 + 8);
      *(undefined2 *)(plVar3 + -1) = *(undefined2 *)(lVar1 + 0x10);
      (**(code **)(*plVar3 + 0x20))(plVar3,0);
      plVar3[1] = *(longlong *)(lVar1 + 0x20);
      FUN_1406022fe(param_2 + lVar2 + 0x28,lVar1 + 0x28);
      plVar3 = (longlong *)(param_2 + lVar2 + 0x38);
      (**(code **)(*plVar3 + 0x20))(plVar3,0);
      *(undefined8 *)(param_2 + lVar2 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
      FUN_1406022fe(param_2 + lVar2 + 0x48);
      lVar2 = lVar2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148685c00 FUN_148685c00 body=59 status=ok
// SIG undefined FUN_148685c00(void)

undefined8 FUN_148685c00(longlong *param_1)

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



// FUNCTION 148685c46 FUN_148685c46 body=32 status=ok
// SIG undefined FUN_148685c46(void)

void FUN_148685c46(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148685caa(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148685caa FUN_148685caa body=145 status=ok
// SIG undefined FUN_148685caa(void)

void FUN_148685caa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b105bd0;
  param_1[7] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    FUN_140115c12(param_1 + 9,0);
  }
  param_1[8] = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_140115c12(param_1 + 5,0);
  }
  param_1[4] = 0;
  if (param_1[5] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148685e20 FUN_148685e20 body=59 status=ok
// SIG undefined FUN_148685e20(void)

undefined8 FUN_148685e20(longlong *param_1)

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



// FUNCTION 148685ec0 FUN_148685ec0 body=55 status=ok
// SIG undefined FUN_148685ec0(void)

void FUN_148685ec0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c018 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c018 = FUN_140002ddd(FUN_1464d3d89,uVar1,L"GbxCondition_HealthType");
  }
  return;
}



// FUNCTION 148685fbe FUN_148685fbe body=59 status=ok
// SIG undefined FUN_148685fbe(void)

undefined8 FUN_148685fbe(longlong *param_1)

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



// FUNCTION 14868605e FUN_14868605e body=55 status=ok
// SIG undefined FUN_14868605e(void)

void FUN_14868605e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c030 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c030 = FUN_140002ddd(FUN_1464d3e1f,uVar1,L"GbxCondition_InventoryType");
  }
  return;
}



// FUNCTION 1486860ec FUN_1486860ec body=95 status=ok
// SIG undefined FUN_1486860ec(void)

undefined1 FUN_1486860ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + 8 + lVar1) = *(undefined1 *)(param_3 + 8 + lVar1);
      FUN_140862116(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined1 *)(param_2 + 0x28 + lVar1) = *(undefined1 *)(param_3 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148686174 FUN_148686174 body=59 status=ok
// SIG undefined FUN_148686174(void)

undefined8 FUN_148686174(longlong *param_1)

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



// FUNCTION 148686214 FUN_148686214 body=55 status=ok
// SIG undefined FUN_148686214(void)

void FUN_148686214(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c048 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c048 = FUN_140002ddd(FUN_1464d3eb5,uVar1,L"GbxCondition_IsGbxActorDef");
  }
  return;
}



// FUNCTION 148686314 FUN_148686314 body=59 status=ok
// SIG undefined FUN_148686314(void)

undefined8 FUN_148686314(longlong *param_1)

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



// FUNCTION 1486863b4 FUN_1486863b4 body=57 status=ok
// SIG undefined FUN_1486863b4(void)

void FUN_1486863b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c060 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c060 = FUN_140002ddd(FUN_1464d3f4b,uVar1,L"GbxCondition_IsInMap");
  }
  return;
}



// FUNCTION 14868646e FUN_14868646e body=59 status=ok
// SIG undefined FUN_14868646e(void)

undefined8 FUN_14868646e(longlong *param_1)

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



// FUNCTION 14868650e FUN_14868650e body=55 status=ok
// SIG undefined FUN_14868650e(void)

void FUN_14868650e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c078 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c078 = FUN_140002ddd(FUN_1464d3fe1,uVar1,L"GbxCondition_IsMissionReplayActive");
  }
  return;
}



// FUNCTION 14868659e FUN_14868659e body=84 status=ok
// SIG undefined FUN_14868659e(void)

undefined8 FUN_14868659e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
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
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14868661a FUN_14868661a body=59 status=ok
// SIG undefined FUN_14868661a(void)

undefined8 FUN_14868661a(longlong *param_1)

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



// FUNCTION 148686660 FUN_148686660 body=48 status=ok
// SIG undefined FUN_148686660(void)

void FUN_148686660(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14b103380;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 1486866de FUN_1486866de body=55 status=ok
// SIG undefined FUN_1486866de(void)

void FUN_1486866de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c090 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c090 = FUN_140002ddd(FUN_1464d4077,uVar1,L"GbxCondition_IsPerformingControlledMove");
  }
  return;
}


