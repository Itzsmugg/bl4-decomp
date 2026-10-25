// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1463df790 FUN_1463df790 body=47 status=ok
// SIG undefined FUN_1463df790(void)

longlong FUN_1463df790(void)

{
  if (DAT_14cae70e8 == 0) {
    FUN_14000fc22(&DAT_14cae70e8,&PTR_FUN_14a975e28);
  }
  return DAT_14cae70e8;
}



// FUNCTION 1463df7bf FUN_1463df7bf body=47 status=ok
// SIG undefined FUN_1463df7bf(void)

longlong FUN_1463df7bf(void)

{
  if (DAT_14cae70f0 == 0) {
    FUN_14000fc22(&DAT_14cae70f0,&PTR_FUN_14a975f78);
  }
  return DAT_14cae70f0;
}



// FUNCTION 1463df7ee FUN_1463df7ee body=47 status=ok
// SIG undefined FUN_1463df7ee(void)

longlong FUN_1463df7ee(void)

{
  if (DAT_14cae70f8 == 0) {
    FUN_14000fc22(&DAT_14cae70f8,&PTR_FUN_14a9760e8);
  }
  return DAT_14cae70f8;
}



// FUNCTION 1463df81d FUN_1463df81d body=47 status=ok
// SIG undefined FUN_1463df81d(void)

longlong FUN_1463df81d(void)

{
  if (DAT_14cae7100 == 0) {
    FUN_14000fc22(&DAT_14cae7100,&PTR_FUN_14a976248);
  }
  return DAT_14cae7100;
}



// FUNCTION 1463df84c FUN_1463df84c body=47 status=ok
// SIG undefined FUN_1463df84c(void)

longlong FUN_1463df84c(void)

{
  if (DAT_14cae7108 == 0) {
    FUN_14000fc22(&DAT_14cae7108,&PTR_FUN_14a9763e8);
  }
  return DAT_14cae7108;
}



// FUNCTION 1463df87b FUN_1463df87b body=47 status=ok
// SIG undefined FUN_1463df87b(void)

longlong FUN_1463df87b(void)

{
  if (DAT_14cae7110 == 0) {
    FUN_14000fc22(&DAT_14cae7110,&PTR_FUN_14a976518);
  }
  return DAT_14cae7110;
}



// FUNCTION 1463df8aa FUN_1463df8aa body=47 status=ok
// SIG undefined FUN_1463df8aa(void)

longlong FUN_1463df8aa(void)

{
  if (DAT_14cae7118 == 0) {
    FUN_14000fc22(&DAT_14cae7118,&PTR_FUN_14a976638);
  }
  return DAT_14cae7118;
}



// FUNCTION 1463df8d9 FUN_1463df8d9 body=47 status=ok
// SIG undefined FUN_1463df8d9(void)

longlong FUN_1463df8d9(void)

{
  if (DAT_14cae7120 == 0) {
    FUN_14000fc22(&DAT_14cae7120,&PTR_FUN_14a976758);
  }
  return DAT_14cae7120;
}



// FUNCTION 1463df908 FUN_1463df908 body=273 status=ok
// SIG undefined FUN_1463df908(void)

void FUN_1463df908(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [40];
  int local_20;
  uint local_1c;
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = 0;
  if (local_20 - 1U < 0x1f) {
    do {
      uVar2 = 1;
      if ((int)(1 << ((byte)iVar1 & 0x1f) & local_1c) < 1) goto LAB_1463df9b1;
      iVar1 = iVar1 + 1;
    } while (local_20 != iVar1);
  }
  uVar2 = 0;
LAB_1463df9b1:
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1463dfa1a FUN_1463dfa1a body=47 status=ok
// SIG undefined FUN_1463dfa1a(void)

longlong FUN_1463dfa1a(void)

{
  if (DAT_14cae7128 == 0) {
    FUN_14000fc22(&DAT_14cae7128,&PTR_FUN_14a976828);
  }
  return DAT_14cae7128;
}



// FUNCTION 1463dfa4a FUN_1463dfa4a body=255 status=ok
// SIG undefined FUN_1463dfa4a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1463dfa4a(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20 + 1);
  }
  puVar1 = (uint *)(local_20 + 1);
  if (*(uint **)(param_2 + 0x38) != (uint *)0x0) {
    puVar1 = *(uint **)(param_2 + 0x38);
  }
  local_20[0] = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20[0] < 0x20) {
    *puVar1 = *puVar1 | 1 << ((byte)local_20[0] & 0x1f);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463dfb4a FUN_1463dfb4a body=34 status=ok
// SIG undefined FUN_1463dfb4a(void)

void FUN_1463dfb4a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a71a7e();
  FUN_14069c8d6(uVar1,&PTR_s_BitIsMarked_14a976870,0xd);
  return;
}



// FUNCTION 1463dfb6c FUN_1463dfb6c body=35 status=ok
// SIG undefined FUN_1463dfb6c(void)

void FUN_1463dfb6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a976ab0;
  return;
}



// FUNCTION 1463dfb90 FUN_1463dfb90 body=55 status=ok
// SIG undefined FUN_1463dfb90(void)

void FUN_1463dfb90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae7160 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae7160 = FUN_140002ddd(FUN_1463dfbc7,uVar1,L"DrawToRenderTargetContext");
  }
  return;
}



// FUNCTION 1463dfbc7 FUN_1463dfbc7 body=49 status=ok
// SIG undefined FUN_1463dfbc7(void)

longlong FUN_1463dfbc7(void)

{
  if (DAT_14cae7158 == 0) {
    FUN_14086a14e(&DAT_14cae7158,&PTR_FUN_14a976e18);
  }
  return DAT_14cae7158;
}



// FUNCTION 1463dfbf8 FUN_1463dfbf8 body=48 status=ok
// SIG undefined FUN_1463dfbf8(void)

void FUN_1463dfbf8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14a9b0300;
  return;
}



// FUNCTION 1463dfc28 FUN_1463dfc28 body=47 status=ok
// SIG undefined FUN_1463dfc28(void)

longlong FUN_1463dfc28(void)

{
  if (DAT_14cae7170 == 0) {
    FUN_14000fc22(&DAT_14cae7170,&PTR_FUN_14a976ff8);
  }
  return DAT_14cae7170;
}



// FUNCTION 1463dfc57 FUN_1463dfc57 body=47 status=ok
// SIG undefined FUN_1463dfc57(void)

longlong FUN_1463dfc57(void)

{
  if (DAT_14cae7178 == 0) {
    FUN_14000fc22(&DAT_14cae7178,&PTR_FUN_14a977300);
  }
  return DAT_14cae7178;
}



// FUNCTION 1463dfc86 FUN_1463dfc86 body=47 status=ok
// SIG undefined FUN_1463dfc86(void)

longlong FUN_1463dfc86(void)

{
  if (DAT_14cae7180 == 0) {
    FUN_14000fc22(&DAT_14cae7180,&PTR_FUN_14a9773f0);
  }
  return DAT_14cae7180;
}



// FUNCTION 1463dfcb5 FUN_1463dfcb5 body=47 status=ok
// SIG undefined FUN_1463dfcb5(void)

longlong FUN_1463dfcb5(void)

{
  if (DAT_14cae7188 == 0) {
    FUN_14000fc22(&DAT_14cae7188,&PTR_FUN_14a977520);
  }
  return DAT_14cae7188;
}



// FUNCTION 1463dfce4 FUN_1463dfce4 body=47 status=ok
// SIG undefined FUN_1463dfce4(void)

longlong FUN_1463dfce4(void)

{
  if (DAT_14cae7190 == 0) {
    FUN_14000fc22(&DAT_14cae7190,&PTR_FUN_14a977668);
  }
  return DAT_14cae7190;
}



// FUNCTION 1463dfd13 FUN_1463dfd13 body=47 status=ok
// SIG undefined FUN_1463dfd13(void)

longlong FUN_1463dfd13(void)

{
  if (DAT_14cae7198 == 0) {
    FUN_14000fc22(&DAT_14cae7198,&PTR_FUN_14a9777b8);
  }
  return DAT_14cae7198;
}



// FUNCTION 1463dfd42 FUN_1463dfd42 body=47 status=ok
// SIG undefined FUN_1463dfd42(void)

longlong FUN_1463dfd42(void)

{
  if (DAT_14cae71a0 == 0) {
    FUN_14000fc22(&DAT_14cae71a0,&PTR_FUN_14a977908);
  }
  return DAT_14cae71a0;
}



// FUNCTION 1463dfd71 FUN_1463dfd71 body=47 status=ok
// SIG undefined FUN_1463dfd71(void)

longlong FUN_1463dfd71(void)

{
  if (DAT_14cae71a8 == 0) {
    FUN_14000fc22(&DAT_14cae71a8,&PTR_FUN_14a977a58);
  }
  return DAT_14cae71a8;
}



// FUNCTION 1463dfda0 FUN_1463dfda0 body=47 status=ok
// SIG undefined FUN_1463dfda0(void)

longlong FUN_1463dfda0(void)

{
  if (DAT_14cae71b0 == 0) {
    FUN_14000fc22(&DAT_14cae71b0,&PTR_FUN_14a977d08);
  }
  return DAT_14cae71b0;
}



// FUNCTION 1463dfdcf FUN_1463dfdcf body=47 status=ok
// SIG undefined FUN_1463dfdcf(void)

longlong FUN_1463dfdcf(void)

{
  if (DAT_14cae71b8 == 0) {
    FUN_14000fc22(&DAT_14cae71b8,&PTR_FUN_14a977fd8);
  }
  return DAT_14cae71b8;
}



// FUNCTION 1463dfdfe FUN_1463dfdfe body=47 status=ok
// SIG undefined FUN_1463dfdfe(void)

longlong FUN_1463dfdfe(void)

{
  if (DAT_14cae71c0 == 0) {
    FUN_14000fc22(&DAT_14cae71c0,&PTR_FUN_14a9782a8);
  }
  return DAT_14cae71c0;
}



// FUNCTION 1463dfe2d FUN_1463dfe2d body=47 status=ok
// SIG undefined FUN_1463dfe2d(void)

longlong FUN_1463dfe2d(void)

{
  if (DAT_14cae71c8 == 0) {
    FUN_14000fc22(&DAT_14cae71c8,&PTR_FUN_14a9783e8);
  }
  return DAT_14cae71c8;
}



// FUNCTION 1463dfe5c FUN_1463dfe5c body=47 status=ok
// SIG undefined FUN_1463dfe5c(void)

longlong FUN_1463dfe5c(void)

{
  if (DAT_14cae71d0 == 0) {
    FUN_14000fc22(&DAT_14cae71d0,&PTR_FUN_14a9784a0);
  }
  return DAT_14cae71d0;
}



// FUNCTION 1463dfe8b FUN_1463dfe8b body=47 status=ok
// SIG undefined FUN_1463dfe8b(void)

longlong FUN_1463dfe8b(void)

{
  if (DAT_14cae71d8 == 0) {
    FUN_14000fc22(&DAT_14cae71d8,&PTR_FUN_14a978590);
  }
  return DAT_14cae71d8;
}



// FUNCTION 1463dfeba FUN_1463dfeba body=47 status=ok
// SIG undefined FUN_1463dfeba(void)

longlong FUN_1463dfeba(void)

{
  if (DAT_14cae71e0 == 0) {
    FUN_14000fc22(&DAT_14cae71e0,&PTR_FUN_14a9786f8);
  }
  return DAT_14cae71e0;
}



// FUNCTION 1463dfee9 FUN_1463dfee9 body=47 status=ok
// SIG undefined FUN_1463dfee9(void)

longlong FUN_1463dfee9(void)

{
  if (DAT_14cae71e8 == 0) {
    FUN_14000fc22(&DAT_14cae71e8,&PTR_FUN_14a978860);
  }
  return DAT_14cae71e8;
}



// FUNCTION 1463dff18 FUN_1463dff18 body=47 status=ok
// SIG undefined FUN_1463dff18(void)

longlong FUN_1463dff18(void)

{
  if (DAT_14cae71f0 == 0) {
    FUN_14000fc22(&DAT_14cae71f0,&PTR_FUN_14a9789d8);
  }
  return DAT_14cae71f0;
}



// FUNCTION 1463dff47 FUN_1463dff47 body=47 status=ok
// SIG undefined FUN_1463dff47(void)

longlong FUN_1463dff47(void)

{
  if (DAT_14cae71f8 == 0) {
    FUN_14000fc22(&DAT_14cae71f8,&PTR_FUN_14a978b00);
  }
  return DAT_14cae71f8;
}



// FUNCTION 1463dff76 FUN_1463dff76 body=47 status=ok
// SIG undefined FUN_1463dff76(void)

longlong FUN_1463dff76(void)

{
  if (DAT_14cae7200 == 0) {
    FUN_14000fc22(&DAT_14cae7200,&PTR_FUN_14a978dc0);
  }
  return DAT_14cae7200;
}



// FUNCTION 1463dffa5 FUN_1463dffa5 body=47 status=ok
// SIG undefined FUN_1463dffa5(void)

longlong FUN_1463dffa5(void)

{
  if (DAT_14cae7208 == 0) {
    FUN_14000fc22(&DAT_14cae7208,&PTR_FUN_14a978fe8);
  }
  return DAT_14cae7208;
}



// FUNCTION 1463dffd4 FUN_1463dffd4 body=47 status=ok
// SIG undefined FUN_1463dffd4(void)

longlong FUN_1463dffd4(void)

{
  if (DAT_14cae7210 == 0) {
    FUN_14000fc22(&DAT_14cae7210,&PTR_FUN_14a9791a0);
  }
  return DAT_14cae7210;
}



// FUNCTION 1463e0003 FUN_1463e0003 body=47 status=ok
// SIG undefined FUN_1463e0003(void)

longlong FUN_1463e0003(void)

{
  if (DAT_14cae7218 == 0) {
    FUN_14000fc22(&DAT_14cae7218,&PTR_FUN_14a9793b8);
  }
  return DAT_14cae7218;
}



// FUNCTION 1463e0032 FUN_1463e0032 body=47 status=ok
// SIG undefined FUN_1463e0032(void)

longlong FUN_1463e0032(void)

{
  if (DAT_14cae7220 == 0) {
    FUN_14000fc22(&DAT_14cae7220,&PTR_FUN_14a9795c0);
  }
  return DAT_14cae7220;
}



// FUNCTION 1463e0061 FUN_1463e0061 body=47 status=ok
// SIG undefined FUN_1463e0061(void)

longlong FUN_1463e0061(void)

{
  if (DAT_14cae7228 == 0) {
    FUN_14000fc22(&DAT_14cae7228,&PTR_FUN_14a9798a8);
  }
  return DAT_14cae7228;
}



// FUNCTION 1463e0090 FUN_1463e0090 body=47 status=ok
// SIG undefined FUN_1463e0090(void)

longlong FUN_1463e0090(void)

{
  if (DAT_14cae7230 == 0) {
    FUN_14000fc22(&DAT_14cae7230,&PTR_FUN_14a979aa8);
  }
  return DAT_14cae7230;
}



// FUNCTION 1463e00bf FUN_1463e00bf body=47 status=ok
// SIG undefined FUN_1463e00bf(void)

longlong FUN_1463e00bf(void)

{
  if (DAT_14cae7238 == 0) {
    FUN_14000fc22(&DAT_14cae7238,&PTR_FUN_14a979cb0);
  }
  return DAT_14cae7238;
}



// FUNCTION 1463e00ee FUN_1463e00ee body=47 status=ok
// SIG undefined FUN_1463e00ee(void)

longlong FUN_1463e00ee(void)

{
  if (DAT_14cae7240 == 0) {
    FUN_14000fc22(&DAT_14cae7240,&PTR_FUN_14a979e60);
  }
  return DAT_14cae7240;
}



// FUNCTION 1463e011d FUN_1463e011d body=47 status=ok
// SIG undefined FUN_1463e011d(void)

longlong FUN_1463e011d(void)

{
  if (DAT_14cae7248 == 0) {
    FUN_14000fc22(&DAT_14cae7248,&PTR_FUN_14a979ec0);
  }
  return DAT_14cae7248;
}



// FUNCTION 1463e014c FUN_1463e014c body=47 status=ok
// SIG undefined FUN_1463e014c(void)

longlong FUN_1463e014c(void)

{
  if (DAT_14cae7250 == 0) {
    FUN_14000fc22(&DAT_14cae7250,&PTR_FUN_14a979f60);
  }
  return DAT_14cae7250;
}



// FUNCTION 1463e017b FUN_1463e017b body=47 status=ok
// SIG undefined FUN_1463e017b(void)

longlong FUN_1463e017b(void)

{
  if (DAT_14cae7258 == 0) {
    FUN_14000fc22(&DAT_14cae7258,&PTR_FUN_14a97a150);
  }
  return DAT_14cae7258;
}



// FUNCTION 1463e01aa FUN_1463e01aa body=47 status=ok
// SIG undefined FUN_1463e01aa(void)

longlong FUN_1463e01aa(void)

{
  if (DAT_14cae7260 == 0) {
    FUN_14000fc22(&DAT_14cae7260,&PTR_FUN_14a97a328);
  }
  return DAT_14cae7260;
}



// FUNCTION 1463e01d9 FUN_1463e01d9 body=47 status=ok
// SIG undefined FUN_1463e01d9(void)

longlong FUN_1463e01d9(void)

{
  if (DAT_14cae7268 == 0) {
    FUN_14000fc22(&DAT_14cae7268,&PTR_FUN_14a97a4f8);
  }
  return DAT_14cae7268;
}



// FUNCTION 1463e0208 FUN_1463e0208 body=47 status=ok
// SIG undefined FUN_1463e0208(void)

longlong FUN_1463e0208(void)

{
  if (DAT_14cae7270 == 0) {
    FUN_14000fc22(&DAT_14cae7270,&PTR_FUN_14a97a6c8);
  }
  return DAT_14cae7270;
}



// FUNCTION 1463e0237 FUN_1463e0237 body=47 status=ok
// SIG undefined FUN_1463e0237(void)

longlong FUN_1463e0237(void)

{
  if (DAT_14cae7278 == 0) {
    FUN_14000fc22(&DAT_14cae7278,&PTR_FUN_14a97a7f0);
  }
  return DAT_14cae7278;
}



// FUNCTION 1463e0266 FUN_1463e0266 body=47 status=ok
// SIG undefined FUN_1463e0266(void)

longlong FUN_1463e0266(void)

{
  if (DAT_14cae7280 == 0) {
    FUN_14000fc22(&DAT_14cae7280,&PTR_FUN_14a97a930);
  }
  return DAT_14cae7280;
}



// FUNCTION 1463e0296 FUN_1463e0296 body=34 status=ok
// SIG undefined FUN_1463e0296(void)

void FUN_1463e0296(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a71b6a();
  FUN_14069c8d6(uVar1,&PTR_s_BeginDrawCanvasToRenderTarget_14a97a970,0x23);
  return;
}



// FUNCTION 1463e02b8 FUN_1463e02b8 body=35 status=ok
// SIG undefined FUN_1463e02b8(void)

void FUN_1463e02b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a97ae60;
  return;
}



// FUNCTION 1463e02db FUN_1463e02db body=47 status=ok
// SIG undefined FUN_1463e02db(void)

longlong FUN_1463e02db(void)

{
  if (DAT_14cae72a0 == 0) {
    FUN_14000fc22(&DAT_14cae72a0,&PTR_FUN_14a97c580);
  }
  return DAT_14cae72a0;
}



// FUNCTION 1463e030a FUN_1463e030a body=47 status=ok
// SIG undefined FUN_1463e030a(void)

longlong FUN_1463e030a(void)

{
  if (DAT_14cae72a8 == 0) {
    FUN_14000fc22(&DAT_14cae72a8,&PTR_FUN_14a97c720);
  }
  return DAT_14cae72a8;
}



// FUNCTION 1463e0339 FUN_1463e0339 body=47 status=ok
// SIG undefined FUN_1463e0339(void)

longlong FUN_1463e0339(void)

{
  if (DAT_14cae72b0 == 0) {
    FUN_14000fc22(&DAT_14cae72b0,&PTR_FUN_14a97c8c0);
  }
  return DAT_14cae72b0;
}



// FUNCTION 1463e0368 FUN_1463e0368 body=47 status=ok
// SIG undefined FUN_1463e0368(void)

longlong FUN_1463e0368(void)

{
  if (DAT_14cae72b8 == 0) {
    FUN_14000fc22(&DAT_14cae72b8,&PTR_FUN_14a97ca58);
  }
  return DAT_14cae72b8;
}



// FUNCTION 1463e0397 FUN_1463e0397 body=47 status=ok
// SIG undefined FUN_1463e0397(void)

longlong FUN_1463e0397(void)

{
  if (DAT_14cae72c0 == 0) {
    FUN_14000fc22(&DAT_14cae72c0,&PTR_FUN_14a97cc00);
  }
  return DAT_14cae72c0;
}



// FUNCTION 1463e03c6 FUN_1463e03c6 body=47 status=ok
// SIG undefined FUN_1463e03c6(void)

longlong FUN_1463e03c6(void)

{
  if (DAT_14cae72c8 == 0) {
    FUN_14000fc22(&DAT_14cae72c8,&PTR_FUN_14a97cda0);
  }
  return DAT_14cae72c8;
}



// FUNCTION 1463e03f5 FUN_1463e03f5 body=47 status=ok
// SIG undefined FUN_1463e03f5(void)

longlong FUN_1463e03f5(void)

{
  if (DAT_14cae72d0 == 0) {
    FUN_14000fc22(&DAT_14cae72d0,&PTR_FUN_14a97cf40);
  }
  return DAT_14cae72d0;
}



// FUNCTION 1463e0424 FUN_1463e0424 body=47 status=ok
// SIG undefined FUN_1463e0424(void)

longlong FUN_1463e0424(void)

{
  if (DAT_14cae72d8 == 0) {
    FUN_14000fc22(&DAT_14cae72d8,&PTR_FUN_14a97d0e0);
  }
  return DAT_14cae72d8;
}



// FUNCTION 1463e0453 FUN_1463e0453 body=47 status=ok
// SIG undefined FUN_1463e0453(void)

longlong FUN_1463e0453(void)

{
  if (DAT_14cae72e0 == 0) {
    FUN_14000fc22(&DAT_14cae72e0,&PTR_FUN_14a97d280);
  }
  return DAT_14cae72e0;
}



// FUNCTION 1463e0482 FUN_1463e0482 body=47 status=ok
// SIG undefined FUN_1463e0482(void)

longlong FUN_1463e0482(void)

{
  if (DAT_14cae72e8 == 0) {
    FUN_14000fc22(&DAT_14cae72e8,&PTR_FUN_14a97d430);
  }
  return DAT_14cae72e8;
}



// FUNCTION 1463e04b1 FUN_1463e04b1 body=47 status=ok
// SIG undefined FUN_1463e04b1(void)

longlong FUN_1463e04b1(void)

{
  if (DAT_14cae72f0 == 0) {
    FUN_14000fc22(&DAT_14cae72f0,&PTR_FUN_14a97d548);
  }
  return DAT_14cae72f0;
}



// FUNCTION 1463e04e0 FUN_1463e04e0 body=47 status=ok
// SIG undefined FUN_1463e04e0(void)

longlong FUN_1463e04e0(void)

{
  if (DAT_14cae72f8 == 0) {
    FUN_14000fc22(&DAT_14cae72f8,&PTR_FUN_14a97d728);
  }
  return DAT_14cae72f8;
}



// FUNCTION 1463e050f FUN_1463e050f body=47 status=ok
// SIG undefined FUN_1463e050f(void)

longlong FUN_1463e050f(void)

{
  if (DAT_14cae7300 == 0) {
    FUN_14000fc22(&DAT_14cae7300,&PTR_FUN_14a97d808);
  }
  return DAT_14cae7300;
}



// FUNCTION 1463e053e FUN_1463e053e body=47 status=ok
// SIG undefined FUN_1463e053e(void)

longlong FUN_1463e053e(void)

{
  if (DAT_14cae7308 == 0) {
    FUN_14000fc22(&DAT_14cae7308,&PTR_FUN_14a97d8f8);
  }
  return DAT_14cae7308;
}



// FUNCTION 1463e056d FUN_1463e056d body=47 status=ok
// SIG undefined FUN_1463e056d(void)

longlong FUN_1463e056d(void)

{
  if (DAT_14cae7310 == 0) {
    FUN_14000fc22(&DAT_14cae7310,&PTR_FUN_14a97d9d8);
  }
  return DAT_14cae7310;
}



// FUNCTION 1463e059c FUN_1463e059c body=47 status=ok
// SIG undefined FUN_1463e059c(void)

longlong FUN_1463e059c(void)

{
  if (DAT_14cae7318 == 0) {
    FUN_14000fc22(&DAT_14cae7318,&PTR_FUN_14a97dab8);
  }
  return DAT_14cae7318;
}



// FUNCTION 1463e05cb FUN_1463e05cb body=47 status=ok
// SIG undefined FUN_1463e05cb(void)

longlong FUN_1463e05cb(void)

{
  if (DAT_14cae7320 == 0) {
    FUN_14000fc22(&DAT_14cae7320,&PTR_FUN_14a97db98);
  }
  return DAT_14cae7320;
}



// FUNCTION 1463e05fa FUN_1463e05fa body=47 status=ok
// SIG undefined FUN_1463e05fa(void)

longlong FUN_1463e05fa(void)

{
  if (DAT_14cae7328 == 0) {
    FUN_14000fc22(&DAT_14cae7328,&PTR_FUN_14a97dc78);
  }
  return DAT_14cae7328;
}



// FUNCTION 1463e0629 FUN_1463e0629 body=47 status=ok
// SIG undefined FUN_1463e0629(void)

longlong FUN_1463e0629(void)

{
  if (DAT_14cae7330 == 0) {
    FUN_14000fc22(&DAT_14cae7330,&PTR_FUN_14a97dd60);
  }
  return DAT_14cae7330;
}



// FUNCTION 1463e0658 FUN_1463e0658 body=177 status=ok
// SIG undefined FUN_1463e0658(void)

void FUN_1463e0658(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *puVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463e070a FUN_1463e070a body=47 status=ok
// SIG undefined FUN_1463e070a(void)

longlong FUN_1463e070a(void)

{
  if (DAT_14cae7338 == 0) {
    FUN_14000fc22(&DAT_14cae7338,&PTR_FUN_14a97de50);
  }
  return DAT_14cae7338;
}



// FUNCTION 1463e0739 FUN_1463e0739 body=47 status=ok
// SIG undefined FUN_1463e0739(void)

longlong FUN_1463e0739(void)

{
  if (DAT_14cae7340 == 0) {
    FUN_14000fc22(&DAT_14cae7340,&PTR_FUN_14a97df38);
  }
  return DAT_14cae7340;
}



// FUNCTION 1463e0768 FUN_1463e0768 body=47 status=ok
// SIG undefined FUN_1463e0768(void)

longlong FUN_1463e0768(void)

{
  if (DAT_14cae7348 == 0) {
    FUN_14000fc22(&DAT_14cae7348,&PTR_FUN_14a97e030);
  }
  return DAT_14cae7348;
}



// FUNCTION 1463e0797 FUN_1463e0797 body=47 status=ok
// SIG undefined FUN_1463e0797(void)

longlong FUN_1463e0797(void)

{
  if (DAT_14cae7350 == 0) {
    FUN_14000fc22(&DAT_14cae7350,&PTR_FUN_14a97e108);
  }
  return DAT_14cae7350;
}



// FUNCTION 1463e07c6 FUN_1463e07c6 body=47 status=ok
// SIG undefined FUN_1463e07c6(void)

longlong FUN_1463e07c6(void)

{
  if (DAT_14cae7358 == 0) {
    FUN_14000fc22(&DAT_14cae7358,&PTR_FUN_14a97e1e8);
  }
  return DAT_14cae7358;
}



// FUNCTION 1463e07f5 FUN_1463e07f5 body=47 status=ok
// SIG undefined FUN_1463e07f5(void)

longlong FUN_1463e07f5(void)

{
  if (DAT_14cae7360 == 0) {
    FUN_14000fc22(&DAT_14cae7360,&PTR_FUN_14a97e2c8);
  }
  return DAT_14cae7360;
}



// FUNCTION 1463e0824 FUN_1463e0824 body=229 status=ok
// SIG undefined FUN_1463e0824(void)

void FUN_1463e0824(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_140002266(&local_30,&DAT_149e063bc,local_1c);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463e090a FUN_1463e090a body=47 status=ok
// SIG undefined FUN_1463e090a(void)

longlong FUN_1463e090a(void)

{
  if (DAT_14cae7368 == 0) {
    FUN_14000fc22(&DAT_14cae7368,&PTR_FUN_14a97e3b8);
  }
  return DAT_14cae7368;
}



// FUNCTION 1463e0939 FUN_1463e0939 body=47 status=ok
// SIG undefined FUN_1463e0939(void)

longlong FUN_1463e0939(void)

{
  if (DAT_14cae7370 == 0) {
    FUN_14000fc22(&DAT_14cae7370,&PTR_FUN_14a97e498);
  }
  return DAT_14cae7370;
}



// FUNCTION 1463e0968 FUN_1463e0968 body=47 status=ok
// SIG undefined FUN_1463e0968(void)

longlong FUN_1463e0968(void)

{
  if (DAT_14cae7378 == 0) {
    FUN_14000fc22(&DAT_14cae7378,&PTR_FUN_14a97e578);
  }
  return DAT_14cae7378;
}



// FUNCTION 1463e0998 FUN_1463e0998 body=233 status=ok
// SIG undefined FUN_1463e0998(void)

void FUN_1463e0998(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_20 = local_28;
  FUN_1400021e4(&local_20,&local_38);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463e0a82 FUN_1463e0a82 body=47 status=ok
// SIG undefined FUN_1463e0a82(void)

longlong FUN_1463e0a82(void)

{
  if (DAT_14cae7380 == 0) {
    FUN_14000fc22(&DAT_14cae7380,&PTR_FUN_14a97e658);
  }
  return DAT_14cae7380;
}



// FUNCTION 1463e0ab1 FUN_1463e0ab1 body=47 status=ok
// SIG undefined FUN_1463e0ab1(void)

longlong FUN_1463e0ab1(void)

{
  if (DAT_14cae7388 == 0) {
    FUN_14000fc22(&DAT_14cae7388,&PTR_FUN_14a97e760);
  }
  return DAT_14cae7388;
}



// FUNCTION 1463e0ae0 FUN_1463e0ae0 body=47 status=ok
// SIG undefined FUN_1463e0ae0(void)

longlong FUN_1463e0ae0(void)

{
  if (DAT_14cae7390 == 0) {
    FUN_14000fc22(&DAT_14cae7390,&PTR_FUN_14a97e848);
  }
  return DAT_14cae7390;
}



// FUNCTION 1463e0b0f FUN_1463e0b0f body=47 status=ok
// SIG undefined FUN_1463e0b0f(void)

longlong FUN_1463e0b0f(void)

{
  if (DAT_14cae7398 == 0) {
    FUN_14000fc22(&DAT_14cae7398,&PTR_FUN_14a97e9a0);
  }
  return DAT_14cae7398;
}



// FUNCTION 1463e0b3e FUN_1463e0b3e body=47 status=ok
// SIG undefined FUN_1463e0b3e(void)

longlong FUN_1463e0b3e(void)

{
  if (DAT_14cae73a0 == 0) {
    FUN_14000fc22(&DAT_14cae73a0,&PTR_FUN_14a97ea78);
  }
  return DAT_14cae73a0;
}



// FUNCTION 1463e0b6d FUN_1463e0b6d body=47 status=ok
// SIG undefined FUN_1463e0b6d(void)

longlong FUN_1463e0b6d(void)

{
  if (DAT_14cae73a8 == 0) {
    FUN_14000fc22(&DAT_14cae73a8,&PTR_FUN_14a97eb58);
  }
  return DAT_14cae73a8;
}



// FUNCTION 1463e0b9c FUN_1463e0b9c body=47 status=ok
// SIG undefined FUN_1463e0b9c(void)

longlong FUN_1463e0b9c(void)

{
  if (DAT_14cae73b0 == 0) {
    FUN_14000fc22(&DAT_14cae73b0,&PTR_FUN_14a97ec38);
  }
  return DAT_14cae73b0;
}



// FUNCTION 1463e0bcb FUN_1463e0bcb body=47 status=ok
// SIG undefined FUN_1463e0bcb(void)

longlong FUN_1463e0bcb(void)

{
  if (DAT_14cae73b8 == 0) {
    FUN_14000fc22(&DAT_14cae73b8,&PTR_FUN_14a97ed18);
  }
  return DAT_14cae73b8;
}



// FUNCTION 1463e0bfa FUN_1463e0bfa body=47 status=ok
// SIG undefined FUN_1463e0bfa(void)

longlong FUN_1463e0bfa(void)

{
  if (DAT_14cae73c0 == 0) {
    FUN_14000fc22(&DAT_14cae73c0,&PTR_FUN_14a97ee60);
  }
  return DAT_14cae73c0;
}



// FUNCTION 1463e0c29 FUN_1463e0c29 body=47 status=ok
// SIG undefined FUN_1463e0c29(void)

longlong FUN_1463e0c29(void)

{
  if (DAT_14cae73c8 == 0) {
    FUN_14000fc22(&DAT_14cae73c8,&PTR_FUN_14a97efa0);
  }
  return DAT_14cae73c8;
}



// FUNCTION 1463e0c58 FUN_1463e0c58 body=47 status=ok
// SIG undefined FUN_1463e0c58(void)

longlong FUN_1463e0c58(void)

{
  if (DAT_14cae73d0 == 0) {
    FUN_14000fc22(&DAT_14cae73d0,&PTR_FUN_14a97f0e0);
  }
  return DAT_14cae73d0;
}



// FUNCTION 1463e0c87 FUN_1463e0c87 body=47 status=ok
// SIG undefined FUN_1463e0c87(void)

longlong FUN_1463e0c87(void)

{
  if (DAT_14cae73d8 == 0) {
    FUN_14000fc22(&DAT_14cae73d8,&PTR_FUN_14a97f210);
  }
  return DAT_14cae73d8;
}



// FUNCTION 1463e0cb6 FUN_1463e0cb6 body=47 status=ok
// SIG undefined FUN_1463e0cb6(void)

longlong FUN_1463e0cb6(void)

{
  if (DAT_14cae73e0 == 0) {
    FUN_14000fc22(&DAT_14cae73e0,&PTR_FUN_14a97f2f8);
  }
  return DAT_14cae73e0;
}



// FUNCTION 1463e0ce5 FUN_1463e0ce5 body=47 status=ok
// SIG undefined FUN_1463e0ce5(void)

longlong FUN_1463e0ce5(void)

{
  if (DAT_14cae73e8 == 0) {
    FUN_14000fc22(&DAT_14cae73e8,&PTR_FUN_14a97f3d8);
  }
  return DAT_14cae73e8;
}



// FUNCTION 1463e0d14 FUN_1463e0d14 body=47 status=ok
// SIG undefined FUN_1463e0d14(void)

longlong FUN_1463e0d14(void)

{
  if (DAT_14cae73f0 == 0) {
    FUN_14000fc22(&DAT_14cae73f0,&PTR_FUN_14a97f4b8);
  }
  return DAT_14cae73f0;
}



// FUNCTION 1463e0d43 FUN_1463e0d43 body=47 status=ok
// SIG undefined FUN_1463e0d43(void)

longlong FUN_1463e0d43(void)

{
  if (DAT_14cae73f8 == 0) {
    FUN_14000fc22(&DAT_14cae73f8,&PTR_FUN_14a97f598);
  }
  return DAT_14cae73f8;
}



// FUNCTION 1463e0d72 FUN_1463e0d72 body=252 status=ok
// SIG undefined FUN_1463e0d72(void)

void FUN_1463e0d72(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_20;
  FUN_140002266(&local_40,L"X=%3.3f Y=%3.3f Z=%3.3f",local_30,local_28);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463e0e6f FUN_1463e0e6f body=47 status=ok
// SIG undefined FUN_1463e0e6f(void)

longlong FUN_1463e0e6f(void)

{
  if (DAT_14cae7400 == 0) {
    FUN_14000fc22(&DAT_14cae7400,&PTR_FUN_14a97f6f0);
  }
  return DAT_14cae7400;
}



// FUNCTION 1463e0e9e FUN_1463e0e9e body=47 status=ok
// SIG undefined FUN_1463e0e9e(void)

longlong FUN_1463e0e9e(void)

{
  if (DAT_14cae7408 == 0) {
    FUN_14000fc22(&DAT_14cae7408,&PTR_FUN_14a97f870);
  }
  return DAT_14cae7408;
}



// FUNCTION 1463e0ecd FUN_1463e0ecd body=47 status=ok
// SIG undefined FUN_1463e0ecd(void)

longlong FUN_1463e0ecd(void)

{
  if (DAT_14cae7410 == 0) {
    FUN_14000fc22(&DAT_14cae7410,&PTR_FUN_14a97f9a0);
  }
  return DAT_14cae7410;
}



// FUNCTION 1463e0efc FUN_1463e0efc body=47 status=ok
// SIG undefined FUN_1463e0efc(void)

longlong FUN_1463e0efc(void)

{
  if (DAT_14cae7418 == 0) {
    FUN_14000fc22(&DAT_14cae7418,&PTR_FUN_14a97fad8);
  }
  return DAT_14cae7418;
}



// FUNCTION 1463e0f2b FUN_1463e0f2b body=47 status=ok
// SIG undefined FUN_1463e0f2b(void)

longlong FUN_1463e0f2b(void)

{
  if (DAT_14cae7420 == 0) {
    FUN_14000fc22(&DAT_14cae7420,&PTR_FUN_14a97fc00);
  }
  return DAT_14cae7420;
}



// FUNCTION 1463e0f5a FUN_1463e0f5a body=47 status=ok
// SIG undefined FUN_1463e0f5a(void)

longlong FUN_1463e0f5a(void)

{
  if (DAT_14cae7428 == 0) {
    FUN_14000fc22(&DAT_14cae7428,&PTR_FUN_14a97fd20);
  }
  return DAT_14cae7428;
}



// FUNCTION 1463e0f89 FUN_1463e0f89 body=47 status=ok
// SIG undefined FUN_1463e0f89(void)

longlong FUN_1463e0f89(void)

{
  if (DAT_14cae7430 == 0) {
    FUN_14000fc22(&DAT_14cae7430,&PTR_FUN_14a97ff00);
  }
  return DAT_14cae7430;
}



// FUNCTION 1463e0fb8 FUN_1463e0fb8 body=47 status=ok
// SIG undefined FUN_1463e0fb8(void)

longlong FUN_1463e0fb8(void)

{
  if (DAT_14cae7438 == 0) {
    FUN_14000fc22(&DAT_14cae7438,&PTR_FUN_14a980028);
  }
  return DAT_14cae7438;
}



// FUNCTION 1463e0fe7 FUN_1463e0fe7 body=47 status=ok
// SIG undefined FUN_1463e0fe7(void)

longlong FUN_1463e0fe7(void)

{
  if (DAT_14cae7440 == 0) {
    FUN_14000fc22(&DAT_14cae7440,&PTR_FUN_14a980140);
  }
  return DAT_14cae7440;
}



// FUNCTION 1463e1016 FUN_1463e1016 body=47 status=ok
// SIG undefined FUN_1463e1016(void)

longlong FUN_1463e1016(void)

{
  if (DAT_14cae7448 == 0) {
    FUN_14000fc22(&DAT_14cae7448,&PTR_FUN_14a980290);
  }
  return DAT_14cae7448;
}



// FUNCTION 1463e1045 FUN_1463e1045 body=47 status=ok
// SIG undefined FUN_1463e1045(void)

longlong FUN_1463e1045(void)

{
  if (DAT_14cae7450 == 0) {
    FUN_14000fc22(&DAT_14cae7450,&PTR_FUN_14a980360);
  }
  return DAT_14cae7450;
}



// FUNCTION 1463e1074 FUN_1463e1074 body=47 status=ok
// SIG undefined FUN_1463e1074(void)

longlong FUN_1463e1074(void)

{
  if (DAT_14cae7458 == 0) {
    FUN_14000fc22(&DAT_14cae7458,&PTR_FUN_14a980440);
  }
  return DAT_14cae7458;
}



// FUNCTION 1463e10a3 FUN_1463e10a3 body=47 status=ok
// SIG undefined FUN_1463e10a3(void)

longlong FUN_1463e10a3(void)

{
  if (DAT_14cae7460 == 0) {
    FUN_14000fc22(&DAT_14cae7460,&PTR_FUN_14a980590);
  }
  return DAT_14cae7460;
}



// FUNCTION 1463e10d2 FUN_1463e10d2 body=47 status=ok
// SIG undefined FUN_1463e10d2(void)

longlong FUN_1463e10d2(void)

{
  if (DAT_14cae7468 == 0) {
    FUN_14000fc22(&DAT_14cae7468,&PTR_FUN_14a980698);
  }
  return DAT_14cae7468;
}



// FUNCTION 1463e1101 FUN_1463e1101 body=47 status=ok
// SIG undefined FUN_1463e1101(void)

longlong FUN_1463e1101(void)

{
  if (DAT_14cae7470 == 0) {
    FUN_14000fc22(&DAT_14cae7470,&PTR_FUN_14a9807a8);
  }
  return DAT_14cae7470;
}



// FUNCTION 1463e1130 FUN_1463e1130 body=47 status=ok
// SIG undefined FUN_1463e1130(void)

longlong FUN_1463e1130(void)

{
  if (DAT_14cae7478 == 0) {
    FUN_14000fc22(&DAT_14cae7478,&PTR_FUN_14a9808c0);
  }
  return DAT_14cae7478;
}



// FUNCTION 1463e115f FUN_1463e115f body=47 status=ok
// SIG undefined FUN_1463e115f(void)

longlong FUN_1463e115f(void)

{
  if (DAT_14cae7480 == 0) {
    FUN_14000fc22(&DAT_14cae7480,&PTR_FUN_14a980988);
  }
  return DAT_14cae7480;
}



// FUNCTION 1463e118e FUN_1463e118e body=47 status=ok
// SIG undefined FUN_1463e118e(void)

longlong FUN_1463e118e(void)

{
  if (DAT_14cae7488 == 0) {
    FUN_14000fc22(&DAT_14cae7488,&PTR_FUN_14a980b00);
  }
  return DAT_14cae7488;
}



// FUNCTION 1463e11bd FUN_1463e11bd body=47 status=ok
// SIG undefined FUN_1463e11bd(void)

longlong FUN_1463e11bd(void)

{
  if (DAT_14cae7490 == 0) {
    FUN_14000fc22(&DAT_14cae7490,&PTR_FUN_14a980c48);
  }
  return DAT_14cae7490;
}



// FUNCTION 1463e11ec FUN_1463e11ec body=47 status=ok
// SIG undefined FUN_1463e11ec(void)

longlong FUN_1463e11ec(void)

{
  if (DAT_14cae7498 == 0) {
    FUN_14000fc22(&DAT_14cae7498,&PTR_FUN_14a980d80);
  }
  return DAT_14cae7498;
}



// FUNCTION 1463e121b FUN_1463e121b body=47 status=ok
// SIG undefined FUN_1463e121b(void)

longlong FUN_1463e121b(void)

{
  if (DAT_14cae74a0 == 0) {
    FUN_14000fc22(&DAT_14cae74a0,&PTR_FUN_14a980eb8);
  }
  return DAT_14cae74a0;
}



// FUNCTION 1463e124a FUN_1463e124a body=47 status=ok
// SIG undefined FUN_1463e124a(void)

longlong FUN_1463e124a(void)

{
  if (DAT_14cae74a8 == 0) {
    FUN_14000fc22(&DAT_14cae74a8,&PTR_FUN_14a980fe0);
  }
  return DAT_14cae74a8;
}



// FUNCTION 1463e1279 FUN_1463e1279 body=47 status=ok
// SIG undefined FUN_1463e1279(void)

longlong FUN_1463e1279(void)

{
  if (DAT_14cae74b0 == 0) {
    FUN_14000fc22(&DAT_14cae74b0,&PTR_FUN_14a9810f8);
  }
  return DAT_14cae74b0;
}



// FUNCTION 1463e12a8 FUN_1463e12a8 body=47 status=ok
// SIG undefined FUN_1463e12a8(void)

longlong FUN_1463e12a8(void)

{
  if (DAT_14cae74b8 == 0) {
    FUN_14000fc22(&DAT_14cae74b8,&PTR_FUN_14a9812b8);
  }
  return DAT_14cae74b8;
}



// FUNCTION 1463e12d7 FUN_1463e12d7 body=47 status=ok
// SIG undefined FUN_1463e12d7(void)

longlong FUN_1463e12d7(void)

{
  if (DAT_14cae74c0 == 0) {
    FUN_14000fc22(&DAT_14cae74c0,&PTR_FUN_14a981448);
  }
  return DAT_14cae74c0;
}



// FUNCTION 1463e1306 FUN_1463e1306 body=47 status=ok
// SIG undefined FUN_1463e1306(void)

longlong FUN_1463e1306(void)

{
  if (DAT_14cae74c8 == 0) {
    FUN_14000fc22(&DAT_14cae74c8,&PTR_FUN_14a9815f8);
  }
  return DAT_14cae74c8;
}



// FUNCTION 1463e1335 FUN_1463e1335 body=47 status=ok
// SIG undefined FUN_1463e1335(void)

longlong FUN_1463e1335(void)

{
  if (DAT_14cae74d0 == 0) {
    FUN_14000fc22(&DAT_14cae74d0,&PTR_FUN_14a9816c0);
  }
  return DAT_14cae74d0;
}



// FUNCTION 1463e1364 FUN_1463e1364 body=47 status=ok
// SIG undefined FUN_1463e1364(void)

longlong FUN_1463e1364(void)

{
  if (DAT_14cae74d8 == 0) {
    FUN_14000fc22(&DAT_14cae74d8,&PTR_FUN_14a9817c8);
  }
  return DAT_14cae74d8;
}



// FUNCTION 1463e1393 FUN_1463e1393 body=47 status=ok
// SIG undefined FUN_1463e1393(void)

longlong FUN_1463e1393(void)

{
  if (DAT_14cae74e0 == 0) {
    FUN_14000fc22(&DAT_14cae74e0,&PTR_FUN_14a9818d8);
  }
  return DAT_14cae74e0;
}



// FUNCTION 1463e13c2 FUN_1463e13c2 body=47 status=ok
// SIG undefined FUN_1463e13c2(void)

longlong FUN_1463e13c2(void)

{
  if (DAT_14cae74e8 == 0) {
    FUN_14000fc22(&DAT_14cae74e8,&PTR_FUN_14a9819e8);
  }
  return DAT_14cae74e8;
}



// FUNCTION 1463e13f1 FUN_1463e13f1 body=47 status=ok
// SIG undefined FUN_1463e13f1(void)

longlong FUN_1463e13f1(void)

{
  if (DAT_14cae74f0 == 0) {
    FUN_14000fc22(&DAT_14cae74f0,&PTR_FUN_14a981ac8);
  }
  return DAT_14cae74f0;
}



// FUNCTION 1463e1420 FUN_1463e1420 body=47 status=ok
// SIG undefined FUN_1463e1420(void)

longlong FUN_1463e1420(void)

{
  if (DAT_14cae74f8 == 0) {
    FUN_14000fc22(&DAT_14cae74f8,&PTR_FUN_14a981ba8);
  }
  return DAT_14cae74f8;
}



// FUNCTION 1463e144f FUN_1463e144f body=47 status=ok
// SIG undefined FUN_1463e144f(void)

longlong FUN_1463e144f(void)

{
  if (DAT_14cae7500 == 0) {
    FUN_14000fc22(&DAT_14cae7500,&PTR_FUN_14a981df0);
  }
  return DAT_14cae7500;
}



// FUNCTION 1463e147e FUN_1463e147e body=681 status=ok
// SIG undefined FUN_1463e147e(void)

void FUN_1463e147e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_80;
  byte local_6a;
  byte local_69;
  longlong local_68 [9];
  
  local_68[8] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68[6] = 0;
  local_68[7] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 6);
  }
  local_68[4] = 0;
  local_68[5] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar2 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_69 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  local_6a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = (uint)local_6a;
  local_88 = (uint)local_69;
  uVar1 = FUN_1407cdbc6(local_68 + 6,local_68 + 4,plVar2,plVar3);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[4] != 0) {
    FUN_1400020a8();
  }
  if (local_68[6] != 0) {
    FUN_1400020a8();
  }
  if ((local_68[8] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463e1728 FUN_1463e1728 body=47 status=ok
// SIG undefined FUN_1463e1728(void)

longlong FUN_1463e1728(void)

{
  if (DAT_14cae7508 == 0) {
    FUN_14000fc22(&DAT_14cae7508,&PTR_FUN_14a981f60);
  }
  return DAT_14cae7508;
}



// FUNCTION 1463e1757 FUN_1463e1757 body=47 status=ok
// SIG undefined FUN_1463e1757(void)

longlong FUN_1463e1757(void)

{
  if (DAT_14cae7510 == 0) {
    FUN_14000fc22(&DAT_14cae7510,&PTR_FUN_14a982048);
  }
  return DAT_14cae7510;
}



// FUNCTION 1463e1786 FUN_1463e1786 body=47 status=ok
// SIG undefined FUN_1463e1786(void)

longlong FUN_1463e1786(void)

{
  if (DAT_14cae7518 == 0) {
    FUN_14000fc22(&DAT_14cae7518,&PTR_FUN_14a982118);
  }
  return DAT_14cae7518;
}



// FUNCTION 1463e17b5 FUN_1463e17b5 body=47 status=ok
// SIG undefined FUN_1463e17b5(void)

longlong FUN_1463e17b5(void)

{
  if (DAT_14cae7520 == 0) {
    FUN_14000fc22(&DAT_14cae7520,&PTR_FUN_14a9821e8);
  }
  return DAT_14cae7520;
}



// FUNCTION 1463e17e4 FUN_1463e17e4 body=47 status=ok
// SIG undefined FUN_1463e17e4(void)

longlong FUN_1463e17e4(void)

{
  if (DAT_14cae7528 == 0) {
    FUN_14000fc22(&DAT_14cae7528,&PTR_FUN_14a9822b8);
  }
  return DAT_14cae7528;
}



// FUNCTION 1463e1813 FUN_1463e1813 body=47 status=ok
// SIG undefined FUN_1463e1813(void)

longlong FUN_1463e1813(void)

{
  if (DAT_14cae7530 == 0) {
    FUN_14000fc22(&DAT_14cae7530,&PTR_FUN_14a982390);
  }
  return DAT_14cae7530;
}



// FUNCTION 1463e1842 FUN_1463e1842 body=34 status=ok
// SIG undefined FUN_1463e1842(void)

void FUN_1463e1842(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a71c56();
  FUN_14069c8d6(uVar1,&PTR_s_BuildString_Bool_14a9823d0,0x53);
  return;
}



// FUNCTION 1463e1864 FUN_1463e1864 body=35 status=ok
// SIG undefined FUN_1463e1864(void)

void FUN_1463e1864(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a982ec0;
  return;
}



// FUNCTION 1463e1887 FUN_1463e1887 body=49 status=ok
// SIG undefined FUN_1463e1887(void)

longlong FUN_1463e1887(void)

{
  if (DAT_14cae7598 == 0) {
    FUN_14073dd9a(&DAT_14cae7598,&PTR_LAB_14a983c70);
  }
  return DAT_14cae7598;
}



// FUNCTION 1463e18b8 FUN_1463e18b8 body=47 status=ok
// SIG undefined FUN_1463e18b8(void)

longlong FUN_1463e18b8(void)

{
  if (DAT_14cae7550 == 0) {
    FUN_14000fc22(&DAT_14cae7550,&PTR_FUN_14a983300);
  }
  return DAT_14cae7550;
}



// FUNCTION 1463e18e7 FUN_1463e18e7 body=47 status=ok
// SIG undefined FUN_1463e18e7(void)

longlong FUN_1463e18e7(void)

{
  if (DAT_14cae7558 == 0) {
    FUN_14000fc22(&DAT_14cae7558,&PTR_FUN_14a983468);
  }
  return DAT_14cae7558;
}



// FUNCTION 1463e1916 FUN_1463e1916 body=47 status=ok
// SIG undefined FUN_1463e1916(void)

longlong FUN_1463e1916(void)

{
  if (DAT_14cae7560 == 0) {
    FUN_14000fc22(&DAT_14cae7560,&PTR_FUN_14a983550);
  }
  return DAT_14cae7560;
}



// FUNCTION 1463e1945 FUN_1463e1945 body=47 status=ok
// SIG undefined FUN_1463e1945(void)

longlong FUN_1463e1945(void)

{
  if (DAT_14cae7568 == 0) {
    FUN_14000fc22(&DAT_14cae7568,&PTR_FUN_14a9836b8);
  }
  return DAT_14cae7568;
}



// FUNCTION 1463e1974 FUN_1463e1974 body=47 status=ok
// SIG undefined FUN_1463e1974(void)

longlong FUN_1463e1974(void)

{
  if (DAT_14cae7570 == 0) {
    FUN_14000fc22(&DAT_14cae7570,&PTR_FUN_14a9837d8);
  }
  return DAT_14cae7570;
}



// FUNCTION 1463e19a3 FUN_1463e19a3 body=47 status=ok
// SIG undefined FUN_1463e19a3(void)

longlong FUN_1463e19a3(void)

{
  if (DAT_14cae7578 == 0) {
    FUN_14000fc22(&DAT_14cae7578,&PTR_FUN_14a9838b8);
  }
  return DAT_14cae7578;
}



// FUNCTION 1463e19d2 FUN_1463e19d2 body=47 status=ok
// SIG undefined FUN_1463e19d2(void)

longlong FUN_1463e19d2(void)

{
  if (DAT_14cae7580 == 0) {
    FUN_14000fc22(&DAT_14cae7580,&PTR_FUN_14a9839e0);
  }
  return DAT_14cae7580;
}



// FUNCTION 1463e1a01 FUN_1463e1a01 body=47 status=ok
// SIG undefined FUN_1463e1a01(void)

longlong FUN_1463e1a01(void)

{
  if (DAT_14cae7588 == 0) {
    FUN_14000fc22(&DAT_14cae7588,&PTR_FUN_14a983ac8);
  }
  return DAT_14cae7588;
}



// FUNCTION 1463e1a30 FUN_1463e1a30 body=34 status=ok
// SIG undefined FUN_1463e1a30(void)

void FUN_1463e1a30(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a71d42();
  FUN_14069c8d6(uVar1,&PTR_s_GetKeysFromStringTable_14a983b10,8);
  return;
}



// FUNCTION 1463e1a52 FUN_1463e1a52 body=35 status=ok
// SIG undefined FUN_1463e1a52(void)

void FUN_1463e1a52(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a983cb0;
  return;
}



// FUNCTION 1463e1a75 FUN_1463e1a75 body=47 status=ok
// SIG undefined FUN_1463e1a75(void)

longlong FUN_1463e1a75(void)

{
  if (DAT_14cae75c8 == 0) {
    FUN_1409ce572(&DAT_14cae75c8,&PTR_FUN_14a984070);
  }
  return DAT_14cae75c8;
}



// FUNCTION 1463e1aa4 FUN_1463e1aa4 body=47 status=ok
// SIG undefined FUN_1463e1aa4(void)

longlong FUN_1463e1aa4(void)

{
  if (DAT_14cae75e0 == 0) {
    FUN_1409ce572(&DAT_14cae75e0,&PTR_FUN_14a9840f0);
  }
  return DAT_14cae75e0;
}



// FUNCTION 1463e1ad3 FUN_1463e1ad3 body=47 status=ok
// SIG undefined FUN_1463e1ad3(void)

longlong FUN_1463e1ad3(void)

{
  if (DAT_14cae75f8 == 0) {
    FUN_1409ce572(&DAT_14cae75f8,&PTR_FUN_14a984180);
  }
  return DAT_14cae75f8;
}



// FUNCTION 1463e1b02 FUN_1463e1b02 body=55 status=ok
// SIG undefined FUN_1463e1b02(void)

void FUN_1463e1b02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae7618 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae7618 = FUN_140002ddd(FUN_1463e1b39,uVar1,L"GenericStruct");
  }
  return;
}



// FUNCTION 1463e1b39 FUN_1463e1b39 body=47 status=ok
// SIG undefined FUN_1463e1b39(void)

longlong FUN_1463e1b39(void)

{
  if (DAT_14cae7610 == 0) {
    FUN_14086a14e(&DAT_14cae7610,&PTR_FUN_14a984220);
  }
  return DAT_14cae7610;
}



// FUNCTION 1463e1b68 FUN_1463e1b68 body=48 status=ok
// SIG undefined FUN_1463e1b68(void)

void FUN_1463e1b68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14a9b06a0;
  return;
}



// FUNCTION 1463e1b98 FUN_1463e1b98 body=47 status=ok
// SIG undefined FUN_1463e1b98(void)

longlong FUN_1463e1b98(void)

{
  if (DAT_14cae7628 == 0) {
    FUN_14000fc22(&DAT_14cae7628,&PTR_FUN_14a9842c8);
  }
  return DAT_14cae7628;
}



// FUNCTION 1463e1bc7 FUN_1463e1bc7 body=47 status=ok
// SIG undefined FUN_1463e1bc7(void)

longlong FUN_1463e1bc7(void)

{
  if (DAT_14cae7630 == 0) {
    FUN_14000fc22(&DAT_14cae7630,&PTR_FUN_14a984380);
  }
  return DAT_14cae7630;
}



// FUNCTION 1463e1bf6 FUN_1463e1bf6 body=47 status=ok
// SIG undefined FUN_1463e1bf6(void)

longlong FUN_1463e1bf6(void)

{
  if (DAT_14cae7638 == 0) {
    FUN_14000fc22(&DAT_14cae7638,&PTR_FUN_14a9844c0);
  }
  return DAT_14cae7638;
}



// FUNCTION 1463e1c25 FUN_1463e1c25 body=47 status=ok
// SIG undefined FUN_1463e1c25(void)

longlong FUN_1463e1c25(void)

{
  if (DAT_14cae7640 == 0) {
    FUN_14000fc22(&DAT_14cae7640,&PTR_FUN_14a984638);
  }
  return DAT_14cae7640;
}



// FUNCTION 1463e1c54 FUN_1463e1c54 body=47 status=ok
// SIG undefined FUN_1463e1c54(void)

longlong FUN_1463e1c54(void)

{
  if (DAT_14cae7648 == 0) {
    FUN_14000fc22(&DAT_14cae7648,&PTR_FUN_14a9849c0);
  }
  return DAT_14cae7648;
}



// FUNCTION 1463e1c83 FUN_1463e1c83 body=47 status=ok
// SIG undefined FUN_1463e1c83(void)

longlong FUN_1463e1c83(void)

{
  if (DAT_14cae7650 == 0) {
    FUN_14000fc22(&DAT_14cae7650,&PTR_FUN_14a984d50);
  }
  return DAT_14cae7650;
}



// FUNCTION 1463e1cb2 FUN_1463e1cb2 body=47 status=ok
// SIG undefined FUN_1463e1cb2(void)

longlong FUN_1463e1cb2(void)

{
  if (DAT_14cae7658 == 0) {
    FUN_14000fc22(&DAT_14cae7658,&PTR_FUN_14a985288);
  }
  return DAT_14cae7658;
}



// FUNCTION 1463e1ce1 FUN_1463e1ce1 body=47 status=ok
// SIG undefined FUN_1463e1ce1(void)

longlong FUN_1463e1ce1(void)

{
  if (DAT_14cae7660 == 0) {
    FUN_14000fc22(&DAT_14cae7660,&PTR_FUN_14a985790);
  }
  return DAT_14cae7660;
}



// FUNCTION 1463e1d10 FUN_1463e1d10 body=47 status=ok
// SIG undefined FUN_1463e1d10(void)

longlong FUN_1463e1d10(void)

{
  if (DAT_14cae7668 == 0) {
    FUN_14000fc22(&DAT_14cae7668,&PTR_FUN_14a985cd8);
  }
  return DAT_14cae7668;
}



// FUNCTION 1463e1d3f FUN_1463e1d3f body=47 status=ok
// SIG undefined FUN_1463e1d3f(void)

longlong FUN_1463e1d3f(void)

{
  if (DAT_14cae7670 == 0) {
    FUN_14000fc22(&DAT_14cae7670,&PTR_FUN_14a9861a0);
  }
  return DAT_14cae7670;
}



// FUNCTION 1463e1d6e FUN_1463e1d6e body=47 status=ok
// SIG undefined FUN_1463e1d6e(void)

longlong FUN_1463e1d6e(void)

{
  if (DAT_14cae7678 == 0) {
    FUN_14000fc22(&DAT_14cae7678,&PTR_FUN_14a986668);
  }
  return DAT_14cae7678;
}



// FUNCTION 1463e1d9d FUN_1463e1d9d body=47 status=ok
// SIG undefined FUN_1463e1d9d(void)

longlong FUN_1463e1d9d(void)

{
  if (DAT_14cae7680 == 0) {
    FUN_14000fc22(&DAT_14cae7680,&PTR_FUN_14a986b78);
  }
  return DAT_14cae7680;
}



// FUNCTION 1463e1dcc FUN_1463e1dcc body=47 status=ok
// SIG undefined FUN_1463e1dcc(void)

longlong FUN_1463e1dcc(void)

{
  if (DAT_14cae7688 == 0) {
    FUN_14000fc22(&DAT_14cae7688,&PTR_FUN_14a987090);
  }
  return DAT_14cae7688;
}



// FUNCTION 1463e1dfb FUN_1463e1dfb body=47 status=ok
// SIG undefined FUN_1463e1dfb(void)

longlong FUN_1463e1dfb(void)

{
  if (DAT_14cae7690 == 0) {
    FUN_14000fc22(&DAT_14cae7690,&PTR_FUN_14a987198);
  }
  return DAT_14cae7690;
}



// FUNCTION 1463e1e2a FUN_1463e1e2a body=47 status=ok
// SIG undefined FUN_1463e1e2a(void)

longlong FUN_1463e1e2a(void)

{
  if (DAT_14cae7698 == 0) {
    FUN_14000fc22(&DAT_14cae7698,&PTR_FUN_14a987298);
  }
  return DAT_14cae7698;
}



// FUNCTION 1463e1e59 FUN_1463e1e59 body=47 status=ok
// SIG undefined FUN_1463e1e59(void)

longlong FUN_1463e1e59(void)

{
  if (DAT_14cae76a0 == 0) {
    FUN_14000fc22(&DAT_14cae76a0,&PTR_FUN_14a987378);
  }
  return DAT_14cae76a0;
}



// FUNCTION 1463e1e88 FUN_1463e1e88 body=47 status=ok
// SIG undefined FUN_1463e1e88(void)

longlong FUN_1463e1e88(void)

{
  if (DAT_14cae76a8 == 0) {
    FUN_14000fc22(&DAT_14cae76a8,&PTR_FUN_14a987410);
  }
  return DAT_14cae76a8;
}



// FUNCTION 1463e1eb7 FUN_1463e1eb7 body=47 status=ok
// SIG undefined FUN_1463e1eb7(void)

longlong FUN_1463e1eb7(void)

{
  if (DAT_14cae76b0 == 0) {
    FUN_14000fc22(&DAT_14cae76b0,&PTR_FUN_14a9874f0);
  }
  return DAT_14cae76b0;
}



// FUNCTION 1463e1ee6 FUN_1463e1ee6 body=47 status=ok
// SIG undefined FUN_1463e1ee6(void)

longlong FUN_1463e1ee6(void)

{
  if (DAT_14cae76b8 == 0) {
    FUN_14000fc22(&DAT_14cae76b8,&PTR_FUN_14a987898);
  }
  return DAT_14cae76b8;
}



// FUNCTION 1463e1f15 FUN_1463e1f15 body=47 status=ok
// SIG undefined FUN_1463e1f15(void)

longlong FUN_1463e1f15(void)

{
  if (DAT_14cae76c0 == 0) {
    FUN_14000fc22(&DAT_14cae76c0,&PTR_FUN_14a987c40);
  }
  return DAT_14cae76c0;
}



// FUNCTION 1463e1f44 FUN_1463e1f44 body=47 status=ok
// SIG undefined FUN_1463e1f44(void)

longlong FUN_1463e1f44(void)

{
  if (DAT_14cae76c8 == 0) {
    FUN_14000fc22(&DAT_14cae76c8,&PTR_FUN_14a988140);
  }
  return DAT_14cae76c8;
}



// FUNCTION 1463e1f73 FUN_1463e1f73 body=47 status=ok
// SIG undefined FUN_1463e1f73(void)

longlong FUN_1463e1f73(void)

{
  if (DAT_14cae76d0 == 0) {
    FUN_14000fc22(&DAT_14cae76d0,&PTR_FUN_14a988638);
  }
  return DAT_14cae76d0;
}



// FUNCTION 1463e1fa2 FUN_1463e1fa2 body=47 status=ok
// SIG undefined FUN_1463e1fa2(void)

longlong FUN_1463e1fa2(void)

{
  if (DAT_14cae76d8 == 0) {
    FUN_14000fc22(&DAT_14cae76d8,&PTR_FUN_14a988b80);
  }
  return DAT_14cae76d8;
}



// FUNCTION 1463e1fd1 FUN_1463e1fd1 body=47 status=ok
// SIG undefined FUN_1463e1fd1(void)

longlong FUN_1463e1fd1(void)

{
  if (DAT_14cae76e0 == 0) {
    FUN_14000fc22(&DAT_14cae76e0,&PTR_FUN_14a989038);
  }
  return DAT_14cae76e0;
}



// FUNCTION 1463e2000 FUN_1463e2000 body=47 status=ok
// SIG undefined FUN_1463e2000(void)

longlong FUN_1463e2000(void)

{
  if (DAT_14cae76e8 == 0) {
    FUN_14000fc22(&DAT_14cae76e8,&PTR_FUN_14a9894f0);
  }
  return DAT_14cae76e8;
}



// FUNCTION 1463e202f FUN_1463e202f body=47 status=ok
// SIG undefined FUN_1463e202f(void)

longlong FUN_1463e202f(void)

{
  if (DAT_14cae76f0 == 0) {
    FUN_14000fc22(&DAT_14cae76f0,&PTR_FUN_14a9899f8);
  }
  return DAT_14cae76f0;
}



// FUNCTION 1463e205e FUN_1463e205e body=47 status=ok
// SIG undefined FUN_1463e205e(void)

longlong FUN_1463e205e(void)

{
  if (DAT_14cae76f8 == 0) {
    FUN_14000fc22(&DAT_14cae76f8,&PTR_FUN_14a989a48);
  }
  return DAT_14cae76f8;
}



// FUNCTION 1463e208d FUN_1463e208d body=47 status=ok
// SIG undefined FUN_1463e208d(void)

longlong FUN_1463e208d(void)

{
  if (DAT_14cae7700 == 0) {
    FUN_14000fc22(&DAT_14cae7700,&PTR_FUN_14a989d68);
  }
  return DAT_14cae7700;
}



// FUNCTION 1463e20bc FUN_1463e20bc body=47 status=ok
// SIG undefined FUN_1463e20bc(void)

longlong FUN_1463e20bc(void)

{
  if (DAT_14cae7708 == 0) {
    FUN_14000fc22(&DAT_14cae7708,&PTR_FUN_14a98a090);
  }
  return DAT_14cae7708;
}



// FUNCTION 1463e20eb FUN_1463e20eb body=47 status=ok
// SIG undefined FUN_1463e20eb(void)

longlong FUN_1463e20eb(void)

{
  if (DAT_14cae7710 == 0) {
    FUN_14000fc22(&DAT_14cae7710,&PTR_FUN_14a98a148);
  }
  return DAT_14cae7710;
}



// FUNCTION 1463e211a FUN_1463e211a body=47 status=ok
// SIG undefined FUN_1463e211a(void)

longlong FUN_1463e211a(void)

{
  if (DAT_14cae7718 == 0) {
    FUN_14000fc22(&DAT_14cae7718,&PTR_FUN_14a98a240);
  }
  return DAT_14cae7718;
}



// FUNCTION 1463e2149 FUN_1463e2149 body=47 status=ok
// SIG undefined FUN_1463e2149(void)

longlong FUN_1463e2149(void)

{
  if (DAT_14cae7720 == 0) {
    FUN_14000fc22(&DAT_14cae7720,&PTR_FUN_14a98a340);
  }
  return DAT_14cae7720;
}



// FUNCTION 1463e2178 FUN_1463e2178 body=47 status=ok
// SIG undefined FUN_1463e2178(void)

longlong FUN_1463e2178(void)

{
  if (DAT_14cae7728 == 0) {
    FUN_14000fc22(&DAT_14cae7728,&PTR_FUN_14a98a428);
  }
  return DAT_14cae7728;
}



// FUNCTION 1463e21a7 FUN_1463e21a7 body=47 status=ok
// SIG undefined FUN_1463e21a7(void)

longlong FUN_1463e21a7(void)

{
  if (DAT_14cae7730 == 0) {
    FUN_14000fc22(&DAT_14cae7730,&PTR_FUN_14a98a570);
  }
  return DAT_14cae7730;
}



// FUNCTION 1463e21d6 FUN_1463e21d6 body=47 status=ok
// SIG undefined FUN_1463e21d6(void)

longlong FUN_1463e21d6(void)

{
  if (DAT_14cae7738 == 0) {
    FUN_14000fc22(&DAT_14cae7738,&PTR_FUN_14a98a668);
  }
  return DAT_14cae7738;
}



// FUNCTION 1463e2205 FUN_1463e2205 body=47 status=ok
// SIG undefined FUN_1463e2205(void)

longlong FUN_1463e2205(void)

{
  if (DAT_14cae7740 == 0) {
    FUN_14000fc22(&DAT_14cae7740,&PTR_FUN_14a98a750);
  }
  return DAT_14cae7740;
}



// FUNCTION 1463e2234 FUN_1463e2234 body=47 status=ok
// SIG undefined FUN_1463e2234(void)

longlong FUN_1463e2234(void)

{
  if (DAT_14cae7748 == 0) {
    FUN_14000fc22(&DAT_14cae7748,&PTR_FUN_14a98a840);
  }
  return DAT_14cae7748;
}



// FUNCTION 1463e2263 FUN_1463e2263 body=47 status=ok
// SIG undefined FUN_1463e2263(void)

longlong FUN_1463e2263(void)

{
  if (DAT_14cae7750 == 0) {
    FUN_14000fc22(&DAT_14cae7750,&PTR_FUN_14a98a938);
  }
  return DAT_14cae7750;
}



// FUNCTION 1463e2292 FUN_1463e2292 body=47 status=ok
// SIG undefined FUN_1463e2292(void)

longlong FUN_1463e2292(void)

{
  if (DAT_14cae7758 == 0) {
    FUN_14000fc22(&DAT_14cae7758,&PTR_FUN_14a98aa40);
  }
  return DAT_14cae7758;
}



// FUNCTION 1463e22c1 FUN_1463e22c1 body=47 status=ok
// SIG undefined FUN_1463e22c1(void)

longlong FUN_1463e22c1(void)

{
  if (DAT_14cae7760 == 0) {
    FUN_14000fc22(&DAT_14cae7760,&PTR_FUN_14a98ab40);
  }
  return DAT_14cae7760;
}



// FUNCTION 1463e22f0 FUN_1463e22f0 body=47 status=ok
// SIG undefined FUN_1463e22f0(void)

longlong FUN_1463e22f0(void)

{
  if (DAT_14cae7768 == 0) {
    FUN_14000fc22(&DAT_14cae7768,&PTR_FUN_14a98ac48);
  }
  return DAT_14cae7768;
}



// FUNCTION 1463e231f FUN_1463e231f body=47 status=ok
// SIG undefined FUN_1463e231f(void)

longlong FUN_1463e231f(void)

{
  if (DAT_14cae7770 == 0) {
    FUN_14000fc22(&DAT_14cae7770,&PTR_FUN_14a98ad58);
  }
  return DAT_14cae7770;
}



// FUNCTION 1463e234e FUN_1463e234e body=47 status=ok
// SIG undefined FUN_1463e234e(void)

longlong FUN_1463e234e(void)

{
  if (DAT_14cae7778 == 0) {
    FUN_14000fc22(&DAT_14cae7778,&PTR_FUN_14a98ae50);
  }
  return DAT_14cae7778;
}



// FUNCTION 1463e237d FUN_1463e237d body=47 status=ok
// SIG undefined FUN_1463e237d(void)

longlong FUN_1463e237d(void)

{
  if (DAT_14cae7780 == 0) {
    FUN_14000fc22(&DAT_14cae7780,&PTR_FUN_14a98af40);
  }
  return DAT_14cae7780;
}



// FUNCTION 1463e23ac FUN_1463e23ac body=47 status=ok
// SIG undefined FUN_1463e23ac(void)

longlong FUN_1463e23ac(void)

{
  if (DAT_14cae7788 == 0) {
    FUN_14000fc22(&DAT_14cae7788,&PTR_FUN_14a98b030);
  }
  return DAT_14cae7788;
}



// FUNCTION 1463e23db FUN_1463e23db body=47 status=ok
// SIG undefined FUN_1463e23db(void)

longlong FUN_1463e23db(void)

{
  if (DAT_14cae7790 == 0) {
    FUN_14000fc22(&DAT_14cae7790,&PTR_FUN_14a98b108);
  }
  return DAT_14cae7790;
}



// FUNCTION 1463e240a FUN_1463e240a body=47 status=ok
// SIG undefined FUN_1463e240a(void)

longlong FUN_1463e240a(void)

{
  if (DAT_14cae7798 == 0) {
    FUN_14000fc22(&DAT_14cae7798,&PTR_FUN_14a98b1e8);
  }
  return DAT_14cae7798;
}



// FUNCTION 1463e2439 FUN_1463e2439 body=47 status=ok
// SIG undefined FUN_1463e2439(void)

longlong FUN_1463e2439(void)

{
  if (DAT_14cae77a0 == 0) {
    FUN_14000fc22(&DAT_14cae77a0,&PTR_FUN_14a98b298);
  }
  return DAT_14cae77a0;
}



// FUNCTION 1463e2468 FUN_1463e2468 body=47 status=ok
// SIG undefined FUN_1463e2468(void)

longlong FUN_1463e2468(void)

{
  if (DAT_14cae77a8 == 0) {
    FUN_14000fc22(&DAT_14cae77a8,&PTR_FUN_14a98b3a8);
  }
  return DAT_14cae77a8;
}



// FUNCTION 1463e2497 FUN_1463e2497 body=47 status=ok
// SIG undefined FUN_1463e2497(void)

longlong FUN_1463e2497(void)

{
  if (DAT_14cae77b0 == 0) {
    FUN_14000fc22(&DAT_14cae77b0,&PTR_FUN_14a98b498);
  }
  return DAT_14cae77b0;
}



// FUNCTION 1463e24c6 FUN_1463e24c6 body=289 status=ok
// SIG undefined FUN_1463e24c6(void)

void FUN_1463e24c6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  longlong lStack_20;
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
  local_30 = 0xffffffffffffffff;
  uStack_28 = 0;
  lStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_30;
  uStack_44 = local_30._4_4_;
  uStack_40 = (undefined4)uStack_28;
  uStack_3c = uStack_28._4_4_;
  local_38 = lStack_20;
  if ((lStack_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1412eeba4(local_18,&local_48);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463e25e8 FUN_1463e25e8 body=47 status=ok
// SIG undefined FUN_1463e25e8(void)

longlong FUN_1463e25e8(void)

{
  if (DAT_14cae77b8 == 0) {
    FUN_14000fc22(&DAT_14cae77b8,&PTR_FUN_14a98b5e8);
  }
  return DAT_14cae77b8;
}



// FUNCTION 1463e2617 FUN_1463e2617 body=47 status=ok
// SIG undefined FUN_1463e2617(void)

longlong FUN_1463e2617(void)

{
  if (DAT_14cae77c0 == 0) {
    FUN_14000fc22(&DAT_14cae77c0,&PTR_FUN_14a98b730);
  }
  return DAT_14cae77c0;
}



// FUNCTION 1463e2646 FUN_1463e2646 body=47 status=ok
// SIG undefined FUN_1463e2646(void)

longlong FUN_1463e2646(void)

{
  if (DAT_14cae77c8 == 0) {
    FUN_14000fc22(&DAT_14cae77c8,&PTR_FUN_14a98b968);
  }
  return DAT_14cae77c8;
}



// FUNCTION 1463e2675 FUN_1463e2675 body=47 status=ok
// SIG undefined FUN_1463e2675(void)

longlong FUN_1463e2675(void)

{
  if (DAT_14cae77d0 == 0) {
    FUN_14000fc22(&DAT_14cae77d0,&PTR_FUN_14a98bba8);
  }
  return DAT_14cae77d0;
}



// FUNCTION 1463e26a4 FUN_1463e26a4 body=47 status=ok
// SIG undefined FUN_1463e26a4(void)

longlong FUN_1463e26a4(void)

{
  if (DAT_14cae77d8 == 0) {
    FUN_14000fc22(&DAT_14cae77d8,&PTR_FUN_14a98bce8);
  }
  return DAT_14cae77d8;
}



// FUNCTION 1463e26d3 FUN_1463e26d3 body=47 status=ok
// SIG undefined FUN_1463e26d3(void)

longlong FUN_1463e26d3(void)

{
  if (DAT_14cae77e0 == 0) {
    FUN_14000fc22(&DAT_14cae77e0,&PTR_FUN_14a98bf68);
  }
  return DAT_14cae77e0;
}



// FUNCTION 1463e2702 FUN_1463e2702 body=47 status=ok
// SIG undefined FUN_1463e2702(void)

longlong FUN_1463e2702(void)

{
  if (DAT_14cae77e8 == 0) {
    FUN_14000fc22(&DAT_14cae77e8,&PTR_FUN_14a98c2a0);
  }
  return DAT_14cae77e8;
}



// FUNCTION 1463e2731 FUN_1463e2731 body=47 status=ok
// SIG undefined FUN_1463e2731(void)

longlong FUN_1463e2731(void)

{
  if (DAT_14cae77f0 == 0) {
    FUN_14000fc22(&DAT_14cae77f0,&PTR_FUN_14a98c5c0);
  }
  return DAT_14cae77f0;
}



// FUNCTION 1463e2760 FUN_1463e2760 body=47 status=ok
// SIG undefined FUN_1463e2760(void)

longlong FUN_1463e2760(void)

{
  if (DAT_14cae77f8 == 0) {
    FUN_14000fc22(&DAT_14cae77f8,&PTR_FUN_14a98c8b8);
  }
  return DAT_14cae77f8;
}



// FUNCTION 1463e278f FUN_1463e278f body=47 status=ok
// SIG undefined FUN_1463e278f(void)

longlong FUN_1463e278f(void)

{
  if (DAT_14cae7800 == 0) {
    FUN_14000fc22(&DAT_14cae7800,&PTR_FUN_14a98cac0);
  }
  return DAT_14cae7800;
}



// FUNCTION 1463e27be FUN_1463e27be body=47 status=ok
// SIG undefined FUN_1463e27be(void)

longlong FUN_1463e27be(void)

{
  if (DAT_14cae7808 == 0) {
    FUN_14000fc22(&DAT_14cae7808,&PTR_FUN_14a98cd38);
  }
  return DAT_14cae7808;
}



// FUNCTION 1463e27ed FUN_1463e27ed body=47 status=ok
// SIG undefined FUN_1463e27ed(void)

longlong FUN_1463e27ed(void)

{
  if (DAT_14cae7810 == 0) {
    FUN_14000fc22(&DAT_14cae7810,&PTR_FUN_14a98cf50);
  }
  return DAT_14cae7810;
}



// FUNCTION 1463e281c FUN_1463e281c body=47 status=ok
// SIG undefined FUN_1463e281c(void)

longlong FUN_1463e281c(void)

{
  if (DAT_14cae7818 == 0) {
    FUN_14000fc22(&DAT_14cae7818,&PTR_FUN_14a98d170);
  }
  return DAT_14cae7818;
}



// FUNCTION 1463e284b FUN_1463e284b body=47 status=ok
// SIG undefined FUN_1463e284b(void)

longlong FUN_1463e284b(void)

{
  if (DAT_14cae7820 == 0) {
    FUN_14000fc22(&DAT_14cae7820,&PTR_FUN_14a98d340);
  }
  return DAT_14cae7820;
}



// FUNCTION 1463e287a FUN_1463e287a body=47 status=ok
// SIG undefined FUN_1463e287a(void)

longlong FUN_1463e287a(void)

{
  if (DAT_14cae7828 == 0) {
    FUN_14000fc22(&DAT_14cae7828,&PTR_FUN_14a98d530);
  }
  return DAT_14cae7828;
}



// FUNCTION 1463e28a9 FUN_1463e28a9 body=47 status=ok
// SIG undefined FUN_1463e28a9(void)

longlong FUN_1463e28a9(void)

{
  if (DAT_14cae7830 == 0) {
    FUN_14000fc22(&DAT_14cae7830,&PTR_FUN_14a98d750);
  }
  return DAT_14cae7830;
}



// FUNCTION 1463e28d8 FUN_1463e28d8 body=47 status=ok
// SIG undefined FUN_1463e28d8(void)

longlong FUN_1463e28d8(void)

{
  if (DAT_14cae7838 == 0) {
    FUN_14000fc22(&DAT_14cae7838,&PTR_FUN_14a98d908);
  }
  return DAT_14cae7838;
}



// FUNCTION 1463e2907 FUN_1463e2907 body=47 status=ok
// SIG undefined FUN_1463e2907(void)

longlong FUN_1463e2907(void)

{
  if (DAT_14cae7840 == 0) {
    FUN_14000fc22(&DAT_14cae7840,&PTR_FUN_14a98db38);
  }
  return DAT_14cae7840;
}



// FUNCTION 1463e2936 FUN_1463e2936 body=47 status=ok
// SIG undefined FUN_1463e2936(void)

longlong FUN_1463e2936(void)

{
  if (DAT_14cae7848 == 0) {
    FUN_14000fc22(&DAT_14cae7848,&PTR_FUN_14a98dd50);
  }
  return DAT_14cae7848;
}



// FUNCTION 1463e2965 FUN_1463e2965 body=47 status=ok
// SIG undefined FUN_1463e2965(void)

longlong FUN_1463e2965(void)

{
  if (DAT_14cae7850 == 0) {
    FUN_14000fc22(&DAT_14cae7850,&PTR_FUN_14a98dde0);
  }
  return DAT_14cae7850;
}



// FUNCTION 1463e2994 FUN_1463e2994 body=47 status=ok
// SIG undefined FUN_1463e2994(void)

longlong FUN_1463e2994(void)

{
  if (DAT_14cae7858 == 0) {
    FUN_14000fc22(&DAT_14cae7858,&PTR_FUN_14a98df18);
  }
  return DAT_14cae7858;
}



// FUNCTION 1463e29c3 FUN_1463e29c3 body=47 status=ok
// SIG undefined FUN_1463e29c3(void)

longlong FUN_1463e29c3(void)

{
  if (DAT_14cae7860 == 0) {
    FUN_14000fc22(&DAT_14cae7860,&PTR_FUN_14a98e058);
  }
  return DAT_14cae7860;
}



// FUNCTION 1463e29f2 FUN_1463e29f2 body=47 status=ok
// SIG undefined FUN_1463e29f2(void)

longlong FUN_1463e29f2(void)

{
  if (DAT_14cae7868 == 0) {
    FUN_14000fc22(&DAT_14cae7868,&PTR_FUN_14a98e198);
  }
  return DAT_14cae7868;
}



// FUNCTION 1463e2a21 FUN_1463e2a21 body=47 status=ok
// SIG undefined FUN_1463e2a21(void)

longlong FUN_1463e2a21(void)

{
  if (DAT_14cae7870 == 0) {
    FUN_14000fc22(&DAT_14cae7870,&PTR_FUN_14a98e2d8);
  }
  return DAT_14cae7870;
}



// FUNCTION 1463e2a50 FUN_1463e2a50 body=47 status=ok
// SIG undefined FUN_1463e2a50(void)

longlong FUN_1463e2a50(void)

{
  if (DAT_14cae7878 == 0) {
    FUN_14000fc22(&DAT_14cae7878,&PTR_FUN_14a98e410);
  }
  return DAT_14cae7878;
}



// FUNCTION 1463e2a7f FUN_1463e2a7f body=47 status=ok
// SIG undefined FUN_1463e2a7f(void)

longlong FUN_1463e2a7f(void)

{
  if (DAT_14cae7880 == 0) {
    FUN_14000fc22(&DAT_14cae7880,&PTR_FUN_14a98e4b0);
  }
  return DAT_14cae7880;
}



// FUNCTION 1463e2aae FUN_1463e2aae body=47 status=ok
// SIG undefined FUN_1463e2aae(void)

longlong FUN_1463e2aae(void)

{
  if (DAT_14cae7888 == 0) {
    FUN_14000fc22(&DAT_14cae7888,&PTR_FUN_14a98e558);
  }
  return DAT_14cae7888;
}



// FUNCTION 1463e2add FUN_1463e2add body=47 status=ok
// SIG undefined FUN_1463e2add(void)

longlong FUN_1463e2add(void)

{
  if (DAT_14cae7890 == 0) {
    FUN_14000fc22(&DAT_14cae7890,&PTR_FUN_14a98e5b0);
  }
  return DAT_14cae7890;
}



// FUNCTION 1463e2b0c FUN_1463e2b0c body=47 status=ok
// SIG undefined FUN_1463e2b0c(void)

longlong FUN_1463e2b0c(void)

{
  if (DAT_14cae7898 == 0) {
    FUN_14000fc22(&DAT_14cae7898,&PTR_FUN_14a98e698);
  }
  return DAT_14cae7898;
}



// FUNCTION 1463e2b3b FUN_1463e2b3b body=47 status=ok
// SIG undefined FUN_1463e2b3b(void)

longlong FUN_1463e2b3b(void)

{
  if (DAT_14cae78a0 == 0) {
    FUN_14000fc22(&DAT_14cae78a0,&PTR_FUN_14a98e790);
  }
  return DAT_14cae78a0;
}



// FUNCTION 1463e2b6a FUN_1463e2b6a body=47 status=ok
// SIG undefined FUN_1463e2b6a(void)

longlong FUN_1463e2b6a(void)

{
  if (DAT_14cae78a8 == 0) {
    FUN_14000fc22(&DAT_14cae78a8,&PTR_FUN_14a98e8a8);
  }
  return DAT_14cae78a8;
}



// FUNCTION 1463e2b99 FUN_1463e2b99 body=47 status=ok
// SIG undefined FUN_1463e2b99(void)

longlong FUN_1463e2b99(void)

{
  if (DAT_14cae78b0 == 0) {
    FUN_14000fc22(&DAT_14cae78b0,&PTR_FUN_14a98ea88);
  }
  return DAT_14cae78b0;
}



// FUNCTION 1463e2bc8 FUN_1463e2bc8 body=47 status=ok
// SIG undefined FUN_1463e2bc8(void)

longlong FUN_1463e2bc8(void)

{
  if (DAT_14cae78b8 == 0) {
    FUN_14000fc22(&DAT_14cae78b8,&PTR_FUN_14a98eb18);
  }
  return DAT_14cae78b8;
}



// FUNCTION 1463e2bf7 FUN_1463e2bf7 body=47 status=ok
// SIG undefined FUN_1463e2bf7(void)

longlong FUN_1463e2bf7(void)

{
  if (DAT_14cae78c0 == 0) {
    FUN_14000fc22(&DAT_14cae78c0,&PTR_FUN_14a98ebb0);
  }
  return DAT_14cae78c0;
}



// FUNCTION 1463e2c26 FUN_1463e2c26 body=47 status=ok
// SIG undefined FUN_1463e2c26(void)

longlong FUN_1463e2c26(void)

{
  if (DAT_14cae78c8 == 0) {
    FUN_14000fc22(&DAT_14cae78c8,&PTR_FUN_14a98ec40);
  }
  return DAT_14cae78c8;
}



// FUNCTION 1463e2c55 FUN_1463e2c55 body=47 status=ok
// SIG undefined FUN_1463e2c55(void)

longlong FUN_1463e2c55(void)

{
  if (DAT_14cae78d0 == 0) {
    FUN_14000fc22(&DAT_14cae78d0,&PTR_FUN_14a98ed28);
  }
  return DAT_14cae78d0;
}



// FUNCTION 1463e2c84 FUN_1463e2c84 body=47 status=ok
// SIG undefined FUN_1463e2c84(void)

longlong FUN_1463e2c84(void)

{
  if (DAT_14cae78d8 == 0) {
    FUN_14000fc22(&DAT_14cae78d8,&PTR_FUN_14a98ee20);
  }
  return DAT_14cae78d8;
}



// FUNCTION 1463e2cb3 FUN_1463e2cb3 body=47 status=ok
// SIG undefined FUN_1463e2cb3(void)

longlong FUN_1463e2cb3(void)

{
  if (DAT_14cae78e0 == 0) {
    FUN_14000fc22(&DAT_14cae78e0,&PTR_FUN_14a98ef20);
  }
  return DAT_14cae78e0;
}



// FUNCTION 1463e2ce2 FUN_1463e2ce2 body=47 status=ok
// SIG undefined FUN_1463e2ce2(void)

longlong FUN_1463e2ce2(void)

{
  if (DAT_14cae78e8 == 0) {
    FUN_14000fc22(&DAT_14cae78e8,&PTR_FUN_14a98efb0);
  }
  return DAT_14cae78e8;
}


