// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1463dc703 FUN_1463dc703 body=47 status=ok
// SIG undefined FUN_1463dc703(void)

longlong FUN_1463dc703(void)

{
  if (DAT_14cae67e8 == 0) {
    FUN_14000fc22(&DAT_14cae67e8,&PTR_FUN_14a95dbb8);
  }
  return DAT_14cae67e8;
}



// FUNCTION 1463dc732 FUN_1463dc732 body=47 status=ok
// SIG undefined FUN_1463dc732(void)

longlong FUN_1463dc732(void)

{
  if (DAT_14cae67f0 == 0) {
    FUN_14000fc22(&DAT_14cae67f0,&PTR_FUN_14a95dce8);
  }
  return DAT_14cae67f0;
}



// FUNCTION 1463dc761 FUN_1463dc761 body=47 status=ok
// SIG undefined FUN_1463dc761(void)

longlong FUN_1463dc761(void)

{
  if (DAT_14cae67f8 == 0) {
    FUN_14000fc22(&DAT_14cae67f8,&PTR_FUN_14a95dd78);
  }
  return DAT_14cae67f8;
}



// FUNCTION 1463dc790 FUN_1463dc790 body=47 status=ok
// SIG undefined FUN_1463dc790(void)

longlong FUN_1463dc790(void)

{
  if (DAT_14cae6800 == 0) {
    FUN_14000fc22(&DAT_14cae6800,&PTR_FUN_14a95de58);
  }
  return DAT_14cae6800;
}



// FUNCTION 1463dc7bf FUN_1463dc7bf body=47 status=ok
// SIG undefined FUN_1463dc7bf(void)

longlong FUN_1463dc7bf(void)

{
  if (DAT_14cae6808 == 0) {
    FUN_14000fc22(&DAT_14cae6808,&PTR_FUN_14a95df70);
  }
  return DAT_14cae6808;
}



// FUNCTION 1463dc7ee FUN_1463dc7ee body=47 status=ok
// SIG undefined FUN_1463dc7ee(void)

longlong FUN_1463dc7ee(void)

{
  if (DAT_14cae6810 == 0) {
    FUN_14000fc22(&DAT_14cae6810,&PTR_FUN_14a95e0e0);
  }
  return DAT_14cae6810;
}



// FUNCTION 1463dc81d FUN_1463dc81d body=47 status=ok
// SIG undefined FUN_1463dc81d(void)

longlong FUN_1463dc81d(void)

{
  if (DAT_14cae6818 == 0) {
    FUN_14000fc22(&DAT_14cae6818,&PTR_FUN_14a95e1b0);
  }
  return DAT_14cae6818;
}



// FUNCTION 1463dc84c FUN_1463dc84c body=204 status=ok
// SIG undefined FUN_1463dc84c(void)

void FUN_1463dc84c(undefined8 param_1,longlong param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [36];
  int local_24;
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
  iVar2 = local_24;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_24 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = local_24 + -1;
    uVar1 = rand();
    iVar2 = (int)((float)iVar2 * ((float)(uVar1 & 0x7fff) / 32767.0));
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
  }
  *param_3 = iVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463dc919 FUN_1463dc919 body=47 status=ok
// SIG undefined FUN_1463dc919(void)

longlong FUN_1463dc919(void)

{
  if (DAT_14cae6820 == 0) {
    FUN_14000fc22(&DAT_14cae6820,&PTR_FUN_14a95e280);
  }
  return DAT_14cae6820;
}



// FUNCTION 1463dc948 FUN_1463dc948 body=47 status=ok
// SIG undefined FUN_1463dc948(void)

longlong FUN_1463dc948(void)

{
  if (DAT_14cae6828 == 0) {
    FUN_14000fc22(&DAT_14cae6828,&PTR_FUN_14a95e3a0);
  }
  return DAT_14cae6828;
}



// FUNCTION 1463dc977 FUN_1463dc977 body=47 status=ok
// SIG undefined FUN_1463dc977(void)

longlong FUN_1463dc977(void)

{
  if (DAT_14cae6830 == 0) {
    FUN_14000fc22(&DAT_14cae6830,&PTR_FUN_14a95e4c0);
  }
  return DAT_14cae6830;
}



// FUNCTION 1463dc9a6 FUN_1463dc9a6 body=47 status=ok
// SIG undefined FUN_1463dc9a6(void)

longlong FUN_1463dc9a6(void)

{
  if (DAT_14cae6838 == 0) {
    FUN_14000fc22(&DAT_14cae6838,&PTR_FUN_14a95e5e0);
  }
  return DAT_14cae6838;
}



// FUNCTION 1463dc9d5 FUN_1463dc9d5 body=47 status=ok
// SIG undefined FUN_1463dc9d5(void)

longlong FUN_1463dc9d5(void)

{
  if (DAT_14cae6840 == 0) {
    FUN_14000fc22(&DAT_14cae6840,&PTR_FUN_14a95e750);
  }
  return DAT_14cae6840;
}



// FUNCTION 1463dca04 FUN_1463dca04 body=47 status=ok
// SIG undefined FUN_1463dca04(void)

longlong FUN_1463dca04(void)

{
  if (DAT_14cae6848 == 0) {
    FUN_14000fc22(&DAT_14cae6848,&PTR_FUN_14a95e888);
  }
  return DAT_14cae6848;
}



// FUNCTION 1463dca33 FUN_1463dca33 body=47 status=ok
// SIG undefined FUN_1463dca33(void)

longlong FUN_1463dca33(void)

{
  if (DAT_14cae6850 == 0) {
    FUN_14000fc22(&DAT_14cae6850,&PTR_FUN_14a95e980);
  }
  return DAT_14cae6850;
}



// FUNCTION 1463dca62 FUN_1463dca62 body=47 status=ok
// SIG undefined FUN_1463dca62(void)

longlong FUN_1463dca62(void)

{
  if (DAT_14cae6858 == 0) {
    FUN_14000fc22(&DAT_14cae6858,&PTR_FUN_14a95eb08);
  }
  return DAT_14cae6858;
}



// FUNCTION 1463dca91 FUN_1463dca91 body=47 status=ok
// SIG undefined FUN_1463dca91(void)

longlong FUN_1463dca91(void)

{
  if (DAT_14cae6860 == 0) {
    FUN_14000fc22(&DAT_14cae6860,&PTR_FUN_14a95ec50);
  }
  return DAT_14cae6860;
}



// FUNCTION 1463dcac0 FUN_1463dcac0 body=47 status=ok
// SIG undefined FUN_1463dcac0(void)

longlong FUN_1463dcac0(void)

{
  if (DAT_14cae6868 == 0) {
    FUN_14000fc22(&DAT_14cae6868,&PTR_FUN_14a95ed40);
  }
  return DAT_14cae6868;
}



// FUNCTION 1463dcaef FUN_1463dcaef body=47 status=ok
// SIG undefined FUN_1463dcaef(void)

longlong FUN_1463dcaef(void)

{
  if (DAT_14cae6870 == 0) {
    FUN_14000fc22(&DAT_14cae6870,&PTR_FUN_14a95ee70);
  }
  return DAT_14cae6870;
}



// FUNCTION 1463dcb1e FUN_1463dcb1e body=47 status=ok
// SIG undefined FUN_1463dcb1e(void)

longlong FUN_1463dcb1e(void)

{
  if (DAT_14cae6878 == 0) {
    FUN_14000fc22(&DAT_14cae6878,&PTR_FUN_14a95ef10);
  }
  return DAT_14cae6878;
}



// FUNCTION 1463dcb4d FUN_1463dcb4d body=47 status=ok
// SIG undefined FUN_1463dcb4d(void)

longlong FUN_1463dcb4d(void)

{
  if (DAT_14cae6880 == 0) {
    FUN_14000fc22(&DAT_14cae6880,&PTR_FUN_14a95f000);
  }
  return DAT_14cae6880;
}



// FUNCTION 1463dcb7c FUN_1463dcb7c body=47 status=ok
// SIG undefined FUN_1463dcb7c(void)

longlong FUN_1463dcb7c(void)

{
  if (DAT_14cae6888 == 0) {
    FUN_14000fc22(&DAT_14cae6888,&PTR_FUN_14a95f158);
  }
  return DAT_14cae6888;
}



// FUNCTION 1463dcbab FUN_1463dcbab body=47 status=ok
// SIG undefined FUN_1463dcbab(void)

longlong FUN_1463dcbab(void)

{
  if (DAT_14cae6890 == 0) {
    FUN_14000fc22(&DAT_14cae6890,&PTR_FUN_14a95f2e0);
  }
  return DAT_14cae6890;
}



// FUNCTION 1463dcbda FUN_1463dcbda body=47 status=ok
// SIG undefined FUN_1463dcbda(void)

longlong FUN_1463dcbda(void)

{
  if (DAT_14cae6898 == 0) {
    FUN_14000fc22(&DAT_14cae6898,&PTR_FUN_14a95f428);
  }
  return DAT_14cae6898;
}



// FUNCTION 1463dcc09 FUN_1463dcc09 body=47 status=ok
// SIG undefined FUN_1463dcc09(void)

longlong FUN_1463dcc09(void)

{
  if (DAT_14cae68a0 == 0) {
    FUN_14000fc22(&DAT_14cae68a0,&PTR_FUN_14a95f5b0);
  }
  return DAT_14cae68a0;
}



// FUNCTION 1463dcc38 FUN_1463dcc38 body=47 status=ok
// SIG undefined FUN_1463dcc38(void)

longlong FUN_1463dcc38(void)

{
  if (DAT_14cae68a8 == 0) {
    FUN_14000fc22(&DAT_14cae68a8,&PTR_FUN_14a95f760);
  }
  return DAT_14cae68a8;
}



// FUNCTION 1463dcc67 FUN_1463dcc67 body=47 status=ok
// SIG undefined FUN_1463dcc67(void)

longlong FUN_1463dcc67(void)

{
  if (DAT_14cae68b0 == 0) {
    FUN_14000fc22(&DAT_14cae68b0,&PTR_FUN_14a95f930);
  }
  return DAT_14cae68b0;
}



// FUNCTION 1463dcc96 FUN_1463dcc96 body=47 status=ok
// SIG undefined FUN_1463dcc96(void)

longlong FUN_1463dcc96(void)

{
  if (DAT_14cae68b8 == 0) {
    FUN_14000fc22(&DAT_14cae68b8,&PTR_FUN_14a95fae0);
  }
  return DAT_14cae68b8;
}



// FUNCTION 1463dccc5 FUN_1463dccc5 body=47 status=ok
// SIG undefined FUN_1463dccc5(void)

longlong FUN_1463dccc5(void)

{
  if (DAT_14cae68c0 == 0) {
    FUN_14000fc22(&DAT_14cae68c0,&PTR_FUN_14a95fcb0);
  }
  return DAT_14cae68c0;
}



// FUNCTION 1463dccf4 FUN_1463dccf4 body=47 status=ok
// SIG undefined FUN_1463dccf4(void)

longlong FUN_1463dccf4(void)

{
  if (DAT_14cae68c8 == 0) {
    FUN_14000fc22(&DAT_14cae68c8,&PTR_FUN_14a95ff38);
  }
  return DAT_14cae68c8;
}



// FUNCTION 1463dcd23 FUN_1463dcd23 body=47 status=ok
// SIG undefined FUN_1463dcd23(void)

longlong FUN_1463dcd23(void)

{
  if (DAT_14cae68d0 == 0) {
    FUN_14000fc22(&DAT_14cae68d0,&PTR_FUN_14a95ffd8);
  }
  return DAT_14cae68d0;
}



// FUNCTION 1463dcd52 FUN_1463dcd52 body=47 status=ok
// SIG undefined FUN_1463dcd52(void)

longlong FUN_1463dcd52(void)

{
  if (DAT_14cae68d8 == 0) {
    FUN_14000fc22(&DAT_14cae68d8,&PTR_FUN_14a960080);
  }
  return DAT_14cae68d8;
}



// FUNCTION 1463dcd81 FUN_1463dcd81 body=47 status=ok
// SIG undefined FUN_1463dcd81(void)

longlong FUN_1463dcd81(void)

{
  if (DAT_14cae68e0 == 0) {
    FUN_14000fc22(&DAT_14cae68e0,&PTR_FUN_14a960120);
  }
  return DAT_14cae68e0;
}



// FUNCTION 1463dcdb0 FUN_1463dcdb0 body=47 status=ok
// SIG undefined FUN_1463dcdb0(void)

longlong FUN_1463dcdb0(void)

{
  if (DAT_14cae68e8 == 0) {
    FUN_14000fc22(&DAT_14cae68e8,&PTR_FUN_14a9601c0);
  }
  return DAT_14cae68e8;
}



// FUNCTION 1463dcddf FUN_1463dcddf body=47 status=ok
// SIG undefined FUN_1463dcddf(void)

longlong FUN_1463dcddf(void)

{
  if (DAT_14cae68f0 == 0) {
    FUN_14000fc22(&DAT_14cae68f0,&PTR_FUN_14a9602a0);
  }
  return DAT_14cae68f0;
}



// FUNCTION 1463dce0e FUN_1463dce0e body=47 status=ok
// SIG undefined FUN_1463dce0e(void)

longlong FUN_1463dce0e(void)

{
  if (DAT_14cae68f8 == 0) {
    FUN_14000fc22(&DAT_14cae68f8,&PTR_FUN_14a960438);
  }
  return DAT_14cae68f8;
}



// FUNCTION 1463dce3d FUN_1463dce3d body=47 status=ok
// SIG undefined FUN_1463dce3d(void)

longlong FUN_1463dce3d(void)

{
  if (DAT_14cae6900 == 0) {
    FUN_14000fc22(&DAT_14cae6900,&PTR_FUN_14a960520);
  }
  return DAT_14cae6900;
}



// FUNCTION 1463dce6c FUN_1463dce6c body=47 status=ok
// SIG undefined FUN_1463dce6c(void)

longlong FUN_1463dce6c(void)

{
  if (DAT_14cae6908 == 0) {
    FUN_14000fc22(&DAT_14cae6908,&PTR_FUN_14a9606c8);
  }
  return DAT_14cae6908;
}



// FUNCTION 1463dce9b FUN_1463dce9b body=47 status=ok
// SIG undefined FUN_1463dce9b(void)

longlong FUN_1463dce9b(void)

{
  if (DAT_14cae6910 == 0) {
    FUN_14000fc22(&DAT_14cae6910,&PTR_FUN_14a960880);
  }
  return DAT_14cae6910;
}



// FUNCTION 1463dceca FUN_1463dceca body=47 status=ok
// SIG undefined FUN_1463dceca(void)

longlong FUN_1463dceca(void)

{
  if (DAT_14cae6918 == 0) {
    FUN_14000fc22(&DAT_14cae6918,&PTR_FUN_14a960a30);
  }
  return DAT_14cae6918;
}



// FUNCTION 1463dcef9 FUN_1463dcef9 body=47 status=ok
// SIG undefined FUN_1463dcef9(void)

longlong FUN_1463dcef9(void)

{
  if (DAT_14cae6920 == 0) {
    FUN_14000fc22(&DAT_14cae6920,&PTR_FUN_14a960ba0);
  }
  return DAT_14cae6920;
}



// FUNCTION 1463dcf28 FUN_1463dcf28 body=47 status=ok
// SIG undefined FUN_1463dcf28(void)

longlong FUN_1463dcf28(void)

{
  if (DAT_14cae6928 == 0) {
    FUN_14000fc22(&DAT_14cae6928,&PTR_FUN_14a960cd0);
  }
  return DAT_14cae6928;
}



// FUNCTION 1463dcf57 FUN_1463dcf57 body=47 status=ok
// SIG undefined FUN_1463dcf57(void)

longlong FUN_1463dcf57(void)

{
  if (DAT_14cae6930 == 0) {
    FUN_14000fc22(&DAT_14cae6930,&PTR_FUN_14a960d90);
  }
  return DAT_14cae6930;
}



// FUNCTION 1463dcf86 FUN_1463dcf86 body=47 status=ok
// SIG undefined FUN_1463dcf86(void)

longlong FUN_1463dcf86(void)

{
  if (DAT_14cae6938 == 0) {
    FUN_14000fc22(&DAT_14cae6938,&PTR_FUN_14a960e58);
  }
  return DAT_14cae6938;
}



// FUNCTION 1463dcfb5 FUN_1463dcfb5 body=47 status=ok
// SIG undefined FUN_1463dcfb5(void)

longlong FUN_1463dcfb5(void)

{
  if (DAT_14cae6940 == 0) {
    FUN_14000fc22(&DAT_14cae6940,&PTR_FUN_14a960f68);
  }
  return DAT_14cae6940;
}



// FUNCTION 1463dcfe4 FUN_1463dcfe4 body=261 status=ok
// SIG undefined FUN_1463dcfe4(void)

void FUN_1463dcfe4(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = -(ulonglong)(local_28 != 0.0) & (ulonglong)(local_20 / local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463dd0ea FUN_1463dd0ea body=47 status=ok
// SIG undefined FUN_1463dd0ea(void)

longlong FUN_1463dd0ea(void)

{
  if (DAT_14cae6948 == 0) {
    FUN_14000fc22(&DAT_14cae6948,&PTR_FUN_14a961008);
  }
  return DAT_14cae6948;
}



// FUNCTION 1463dd119 FUN_1463dd119 body=47 status=ok
// SIG undefined FUN_1463dd119(void)

longlong FUN_1463dd119(void)

{
  if (DAT_14cae6950 == 0) {
    FUN_14000fc22(&DAT_14cae6950,&PTR_FUN_14a9611a0);
  }
  return DAT_14cae6950;
}



// FUNCTION 1463dd148 FUN_1463dd148 body=47 status=ok
// SIG undefined FUN_1463dd148(void)

longlong FUN_1463dd148(void)

{
  if (DAT_14cae6958 == 0) {
    FUN_14000fc22(&DAT_14cae6958,&PTR_FUN_14a961320);
  }
  return DAT_14cae6958;
}



// FUNCTION 1463dd177 FUN_1463dd177 body=47 status=ok
// SIG undefined FUN_1463dd177(void)

longlong FUN_1463dd177(void)

{
  if (DAT_14cae6960 == 0) {
    FUN_14000fc22(&DAT_14cae6960,&PTR_FUN_14a961480);
  }
  return DAT_14cae6960;
}



// FUNCTION 1463dd1a6 FUN_1463dd1a6 body=47 status=ok
// SIG undefined FUN_1463dd1a6(void)

longlong FUN_1463dd1a6(void)

{
  if (DAT_14cae6968 == 0) {
    FUN_14000fc22(&DAT_14cae6968,&PTR_FUN_14a9615e0);
  }
  return DAT_14cae6968;
}



// FUNCTION 1463dd1d5 FUN_1463dd1d5 body=47 status=ok
// SIG undefined FUN_1463dd1d5(void)

longlong FUN_1463dd1d5(void)

{
  if (DAT_14cae6970 == 0) {
    FUN_14000fc22(&DAT_14cae6970,&PTR_FUN_14a961740);
  }
  return DAT_14cae6970;
}



// FUNCTION 1463dd204 FUN_1463dd204 body=47 status=ok
// SIG undefined FUN_1463dd204(void)

longlong FUN_1463dd204(void)

{
  if (DAT_14cae6978 == 0) {
    FUN_14000fc22(&DAT_14cae6978,&PTR_FUN_14a9618b0);
  }
  return DAT_14cae6978;
}



// FUNCTION 1463dd233 FUN_1463dd233 body=47 status=ok
// SIG undefined FUN_1463dd233(void)

longlong FUN_1463dd233(void)

{
  if (DAT_14cae6980 == 0) {
    FUN_14000fc22(&DAT_14cae6980,&PTR_FUN_14a961a20);
  }
  return DAT_14cae6980;
}



// FUNCTION 1463dd262 FUN_1463dd262 body=47 status=ok
// SIG undefined FUN_1463dd262(void)

longlong FUN_1463dd262(void)

{
  if (DAT_14cae6988 == 0) {
    FUN_14000fc22(&DAT_14cae6988,&PTR_FUN_14a961b80);
  }
  return DAT_14cae6988;
}



// FUNCTION 1463dd291 FUN_1463dd291 body=47 status=ok
// SIG undefined FUN_1463dd291(void)

longlong FUN_1463dd291(void)

{
  if (DAT_14cae6990 == 0) {
    FUN_14000fc22(&DAT_14cae6990,&PTR_FUN_14a961ce0);
  }
  return DAT_14cae6990;
}



// FUNCTION 1463dd2c0 FUN_1463dd2c0 body=47 status=ok
// SIG undefined FUN_1463dd2c0(void)

longlong FUN_1463dd2c0(void)

{
  if (DAT_14cae6998 == 0) {
    FUN_14000fc22(&DAT_14cae6998,&PTR_FUN_14a961e50);
  }
  return DAT_14cae6998;
}



// FUNCTION 1463dd2ef FUN_1463dd2ef body=47 status=ok
// SIG undefined FUN_1463dd2ef(void)

longlong FUN_1463dd2ef(void)

{
  if (DAT_14cae69a0 == 0) {
    FUN_14000fc22(&DAT_14cae69a0,&PTR_FUN_14a961fc0);
  }
  return DAT_14cae69a0;
}



// FUNCTION 1463dd31e FUN_1463dd31e body=47 status=ok
// SIG undefined FUN_1463dd31e(void)

longlong FUN_1463dd31e(void)

{
  if (DAT_14cae69a8 == 0) {
    FUN_14000fc22(&DAT_14cae69a8,&PTR_FUN_14a9620d0);
  }
  return DAT_14cae69a8;
}



// FUNCTION 1463dd34d FUN_1463dd34d body=47 status=ok
// SIG undefined FUN_1463dd34d(void)

longlong FUN_1463dd34d(void)

{
  if (DAT_14cae69b0 == 0) {
    FUN_14000fc22(&DAT_14cae69b0,&PTR_FUN_14a9621c0);
  }
  return DAT_14cae69b0;
}



// FUNCTION 1463dd37c FUN_1463dd37c body=47 status=ok
// SIG undefined FUN_1463dd37c(void)

longlong FUN_1463dd37c(void)

{
  if (DAT_14cae69b8 == 0) {
    FUN_14000fc22(&DAT_14cae69b8,&PTR_FUN_14a9622b8);
  }
  return DAT_14cae69b8;
}



// FUNCTION 1463dd3ab FUN_1463dd3ab body=47 status=ok
// SIG undefined FUN_1463dd3ab(void)

longlong FUN_1463dd3ab(void)

{
  if (DAT_14cae69c0 == 0) {
    FUN_14000fc22(&DAT_14cae69c0,&PTR_FUN_14a9623a8);
  }
  return DAT_14cae69c0;
}



// FUNCTION 1463dd3da FUN_1463dd3da body=47 status=ok
// SIG undefined FUN_1463dd3da(void)

longlong FUN_1463dd3da(void)

{
  if (DAT_14cae69c8 == 0) {
    FUN_14000fc22(&DAT_14cae69c8,&PTR_FUN_14a9624a0);
  }
  return DAT_14cae69c8;
}



// FUNCTION 1463dd409 FUN_1463dd409 body=47 status=ok
// SIG undefined FUN_1463dd409(void)

longlong FUN_1463dd409(void)

{
  if (DAT_14cae69d0 == 0) {
    FUN_14000fc22(&DAT_14cae69d0,&PTR_FUN_14a962570);
  }
  return DAT_14cae69d0;
}



// FUNCTION 1463dd438 FUN_1463dd438 body=47 status=ok
// SIG undefined FUN_1463dd438(void)

longlong FUN_1463dd438(void)

{
  if (DAT_14cae69d8 == 0) {
    FUN_14000fc22(&DAT_14cae69d8,&PTR_FUN_14a962640);
  }
  return DAT_14cae69d8;
}



// FUNCTION 1463dd467 FUN_1463dd467 body=47 status=ok
// SIG undefined FUN_1463dd467(void)

longlong FUN_1463dd467(void)

{
  if (DAT_14cae69e0 == 0) {
    FUN_14000fc22(&DAT_14cae69e0,&PTR_FUN_14a962710);
  }
  return DAT_14cae69e0;
}



// FUNCTION 1463dd496 FUN_1463dd496 body=47 status=ok
// SIG undefined FUN_1463dd496(void)

longlong FUN_1463dd496(void)

{
  if (DAT_14cae69e8 == 0) {
    FUN_14000fc22(&DAT_14cae69e8,&PTR_FUN_14a9627d0);
  }
  return DAT_14cae69e8;
}



// FUNCTION 1463dd4c5 FUN_1463dd4c5 body=47 status=ok
// SIG undefined FUN_1463dd4c5(void)

longlong FUN_1463dd4c5(void)

{
  if (DAT_14cae69f0 == 0) {
    FUN_14000fc22(&DAT_14cae69f0,&PTR_FUN_14a962910);
  }
  return DAT_14cae69f0;
}



// FUNCTION 1463dd4f4 FUN_1463dd4f4 body=47 status=ok
// SIG undefined FUN_1463dd4f4(void)

longlong FUN_1463dd4f4(void)

{
  if (DAT_14cae69f8 == 0) {
    FUN_14000fc22(&DAT_14cae69f8,&PTR_FUN_14a962a50);
  }
  return DAT_14cae69f8;
}



// FUNCTION 1463dd523 FUN_1463dd523 body=47 status=ok
// SIG undefined FUN_1463dd523(void)

longlong FUN_1463dd523(void)

{
  if (DAT_14cae6a00 == 0) {
    FUN_14000fc22(&DAT_14cae6a00,&PTR_FUN_14a962b40);
  }
  return DAT_14cae6a00;
}



// FUNCTION 1463dd552 FUN_1463dd552 body=47 status=ok
// SIG undefined FUN_1463dd552(void)

longlong FUN_1463dd552(void)

{
  if (DAT_14cae6a08 == 0) {
    FUN_14000fc22(&DAT_14cae6a08,&PTR_FUN_14a962c08);
  }
  return DAT_14cae6a08;
}



// FUNCTION 1463dd581 FUN_1463dd581 body=47 status=ok
// SIG undefined FUN_1463dd581(void)

longlong FUN_1463dd581(void)

{
  if (DAT_14cae6a10 == 0) {
    FUN_14000fc22(&DAT_14cae6a10,&PTR_FUN_14a962cd0);
  }
  return DAT_14cae6a10;
}



// FUNCTION 1463dd5b0 FUN_1463dd5b0 body=47 status=ok
// SIG undefined FUN_1463dd5b0(void)

longlong FUN_1463dd5b0(void)

{
  if (DAT_14cae6a18 == 0) {
    FUN_14000fc22(&DAT_14cae6a18,&PTR_FUN_14a962e00);
  }
  return DAT_14cae6a18;
}



// FUNCTION 1463dd5df FUN_1463dd5df body=47 status=ok
// SIG undefined FUN_1463dd5df(void)

longlong FUN_1463dd5df(void)

{
  if (DAT_14cae6a20 == 0) {
    FUN_14000fc22(&DAT_14cae6a20,&PTR_FUN_14a962f38);
  }
  return DAT_14cae6a20;
}



// FUNCTION 1463dd60e FUN_1463dd60e body=47 status=ok
// SIG undefined FUN_1463dd60e(void)

longlong FUN_1463dd60e(void)

{
  if (DAT_14cae6a28 == 0) {
    FUN_14000fc22(&DAT_14cae6a28,&PTR_FUN_14a963078);
  }
  return DAT_14cae6a28;
}



// FUNCTION 1463dd63d FUN_1463dd63d body=47 status=ok
// SIG undefined FUN_1463dd63d(void)

longlong FUN_1463dd63d(void)

{
  if (DAT_14cae6a30 == 0) {
    FUN_14000fc22(&DAT_14cae6a30,&PTR_FUN_14a963190);
  }
  return DAT_14cae6a30;
}



// FUNCTION 1463dd66c FUN_1463dd66c body=47 status=ok
// SIG undefined FUN_1463dd66c(void)

longlong FUN_1463dd66c(void)

{
  if (DAT_14cae6a38 == 0) {
    FUN_14000fc22(&DAT_14cae6a38,&PTR_FUN_14a9632b0);
  }
  return DAT_14cae6a38;
}



// FUNCTION 1463dd69b FUN_1463dd69b body=47 status=ok
// SIG undefined FUN_1463dd69b(void)

longlong FUN_1463dd69b(void)

{
  if (DAT_14cae6a40 == 0) {
    FUN_14000fc22(&DAT_14cae6a40,&PTR_FUN_14a9633c8);
  }
  return DAT_14cae6a40;
}



// FUNCTION 1463dd6ca FUN_1463dd6ca body=47 status=ok
// SIG undefined FUN_1463dd6ca(void)

longlong FUN_1463dd6ca(void)

{
  if (DAT_14cae6a48 == 0) {
    FUN_14000fc22(&DAT_14cae6a48,&PTR_FUN_14a9634f0);
  }
  return DAT_14cae6a48;
}



// FUNCTION 1463dd6f9 FUN_1463dd6f9 body=47 status=ok
// SIG undefined FUN_1463dd6f9(void)

longlong FUN_1463dd6f9(void)

{
  if (DAT_14cae6a50 == 0) {
    FUN_14000fc22(&DAT_14cae6a50,&PTR_FUN_14a963628);
  }
  return DAT_14cae6a50;
}



// FUNCTION 1463dd728 FUN_1463dd728 body=47 status=ok
// SIG undefined FUN_1463dd728(void)

longlong FUN_1463dd728(void)

{
  if (DAT_14cae6a58 == 0) {
    FUN_14000fc22(&DAT_14cae6a58,&PTR_FUN_14a963768);
  }
  return DAT_14cae6a58;
}



// FUNCTION 1463dd757 FUN_1463dd757 body=47 status=ok
// SIG undefined FUN_1463dd757(void)

longlong FUN_1463dd757(void)

{
  if (DAT_14cae6a60 == 0) {
    FUN_14000fc22(&DAT_14cae6a60,&PTR_FUN_14a9638a0);
  }
  return DAT_14cae6a60;
}



// FUNCTION 1463dd786 FUN_1463dd786 body=47 status=ok
// SIG undefined FUN_1463dd786(void)

longlong FUN_1463dd786(void)

{
  if (DAT_14cae6a68 == 0) {
    FUN_14000fc22(&DAT_14cae6a68,&PTR_FUN_14a9639d8);
  }
  return DAT_14cae6a68;
}



// FUNCTION 1463dd7b5 FUN_1463dd7b5 body=47 status=ok
// SIG undefined FUN_1463dd7b5(void)

longlong FUN_1463dd7b5(void)

{
  if (DAT_14cae6a70 == 0) {
    FUN_14000fc22(&DAT_14cae6a70,&PTR_FUN_14a963b00);
  }
  return DAT_14cae6a70;
}



// FUNCTION 1463dd7e4 FUN_1463dd7e4 body=47 status=ok
// SIG undefined FUN_1463dd7e4(void)

longlong FUN_1463dd7e4(void)

{
  if (DAT_14cae6a78 == 0) {
    FUN_14000fc22(&DAT_14cae6a78,&PTR_FUN_14a963c38);
  }
  return DAT_14cae6a78;
}



// FUNCTION 1463dd813 FUN_1463dd813 body=47 status=ok
// SIG undefined FUN_1463dd813(void)

longlong FUN_1463dd813(void)

{
  if (DAT_14cae6a80 == 0) {
    FUN_14000fc22(&DAT_14cae6a80,&PTR_FUN_14a963d70);
  }
  return DAT_14cae6a80;
}



// FUNCTION 1463dd842 FUN_1463dd842 body=47 status=ok
// SIG undefined FUN_1463dd842(void)

longlong FUN_1463dd842(void)

{
  if (DAT_14cae6a88 == 0) {
    FUN_14000fc22(&DAT_14cae6a88,&PTR_FUN_14a963ea0);
  }
  return DAT_14cae6a88;
}



// FUNCTION 1463dd871 FUN_1463dd871 body=47 status=ok
// SIG undefined FUN_1463dd871(void)

longlong FUN_1463dd871(void)

{
  if (DAT_14cae6a90 == 0) {
    FUN_14000fc22(&DAT_14cae6a90,&PTR_FUN_14a963fd0);
  }
  return DAT_14cae6a90;
}



// FUNCTION 1463dd8a0 FUN_1463dd8a0 body=47 status=ok
// SIG undefined FUN_1463dd8a0(void)

longlong FUN_1463dd8a0(void)

{
  if (DAT_14cae6a98 == 0) {
    FUN_14000fc22(&DAT_14cae6a98,&PTR_FUN_14a964100);
  }
  return DAT_14cae6a98;
}



// FUNCTION 1463dd8cf FUN_1463dd8cf body=47 status=ok
// SIG undefined FUN_1463dd8cf(void)

longlong FUN_1463dd8cf(void)

{
  if (DAT_14cae6aa0 == 0) {
    FUN_14000fc22(&DAT_14cae6aa0,&PTR_FUN_14a9641c0);
  }
  return DAT_14cae6aa0;
}



// FUNCTION 1463dd8fe FUN_1463dd8fe body=47 status=ok
// SIG undefined FUN_1463dd8fe(void)

longlong FUN_1463dd8fe(void)

{
  if (DAT_14cae6aa8 == 0) {
    FUN_14000fc22(&DAT_14cae6aa8,&PTR_FUN_14a9643f0);
  }
  return DAT_14cae6aa8;
}



// FUNCTION 1463dd92d FUN_1463dd92d body=47 status=ok
// SIG undefined FUN_1463dd92d(void)

longlong FUN_1463dd92d(void)

{
  if (DAT_14cae6ab0 == 0) {
    FUN_14000fc22(&DAT_14cae6ab0,&PTR_FUN_14a964530);
  }
  return DAT_14cae6ab0;
}



// FUNCTION 1463dd95c FUN_1463dd95c body=47 status=ok
// SIG undefined FUN_1463dd95c(void)

longlong FUN_1463dd95c(void)

{
  if (DAT_14cae6ab8 == 0) {
    FUN_14000fc22(&DAT_14cae6ab8,&PTR_FUN_14a9645d0);
  }
  return DAT_14cae6ab8;
}



// FUNCTION 1463dd98b FUN_1463dd98b body=47 status=ok
// SIG undefined FUN_1463dd98b(void)

longlong FUN_1463dd98b(void)

{
  if (DAT_14cae6ac0 == 0) {
    FUN_14000fc22(&DAT_14cae6ac0,&PTR_FUN_14a964670);
  }
  return DAT_14cae6ac0;
}



// FUNCTION 1463dd9ba FUN_1463dd9ba body=47 status=ok
// SIG undefined FUN_1463dd9ba(void)

longlong FUN_1463dd9ba(void)

{
  if (DAT_14cae6ac8 == 0) {
    FUN_14000fc22(&DAT_14cae6ac8,&PTR_FUN_14a964798);
  }
  return DAT_14cae6ac8;
}



// FUNCTION 1463dd9e9 FUN_1463dd9e9 body=47 status=ok
// SIG undefined FUN_1463dd9e9(void)

longlong FUN_1463dd9e9(void)

{
  if (DAT_14cae6ad0 == 0) {
    FUN_14000fc22(&DAT_14cae6ad0,&PTR_FUN_14a964838);
  }
  return DAT_14cae6ad0;
}



// FUNCTION 1463dda18 FUN_1463dda18 body=47 status=ok
// SIG undefined FUN_1463dda18(void)

longlong FUN_1463dda18(void)

{
  if (DAT_14cae6ad8 == 0) {
    FUN_14000fc22(&DAT_14cae6ad8,&PTR_FUN_14a9649e8);
  }
  return DAT_14cae6ad8;
}



// FUNCTION 1463dda47 FUN_1463dda47 body=47 status=ok
// SIG undefined FUN_1463dda47(void)

longlong FUN_1463dda47(void)

{
  if (DAT_14cae6ae0 == 0) {
    FUN_14000fc22(&DAT_14cae6ae0,&PTR_FUN_14a964b90);
  }
  return DAT_14cae6ae0;
}



// FUNCTION 1463dda76 FUN_1463dda76 body=47 status=ok
// SIG undefined FUN_1463dda76(void)

longlong FUN_1463dda76(void)

{
  if (DAT_14cae6ae8 == 0) {
    FUN_14000fc22(&DAT_14cae6ae8,&PTR_FUN_14a964c20);
  }
  return DAT_14cae6ae8;
}



// FUNCTION 1463ddaa5 FUN_1463ddaa5 body=47 status=ok
// SIG undefined FUN_1463ddaa5(void)

longlong FUN_1463ddaa5(void)

{
  if (DAT_14cae6af0 == 0) {
    FUN_14000fc22(&DAT_14cae6af0,&PTR_FUN_14a964d60);
  }
  return DAT_14cae6af0;
}



// FUNCTION 1463ddad4 FUN_1463ddad4 body=47 status=ok
// SIG undefined FUN_1463ddad4(void)

longlong FUN_1463ddad4(void)

{
  if (DAT_14cae6af8 == 0) {
    FUN_14000fc22(&DAT_14cae6af8,&PTR_FUN_14a964e48);
  }
  return DAT_14cae6af8;
}



// FUNCTION 1463ddb03 FUN_1463ddb03 body=47 status=ok
// SIG undefined FUN_1463ddb03(void)

longlong FUN_1463ddb03(void)

{
  if (DAT_14cae6b00 == 0) {
    FUN_14000fc22(&DAT_14cae6b00,&PTR_FUN_14a964f30);
  }
  return DAT_14cae6b00;
}



// FUNCTION 1463ddb32 FUN_1463ddb32 body=47 status=ok
// SIG undefined FUN_1463ddb32(void)

longlong FUN_1463ddb32(void)

{
  if (DAT_14cae6b08 == 0) {
    FUN_14000fc22(&DAT_14cae6b08,&PTR_FUN_14a965010);
  }
  return DAT_14cae6b08;
}



// FUNCTION 1463ddb61 FUN_1463ddb61 body=47 status=ok
// SIG undefined FUN_1463ddb61(void)

longlong FUN_1463ddb61(void)

{
  if (DAT_14cae6b10 == 0) {
    FUN_14000fc22(&DAT_14cae6b10,&PTR_FUN_14a9650f0);
  }
  return DAT_14cae6b10;
}



// FUNCTION 1463ddb90 FUN_1463ddb90 body=47 status=ok
// SIG undefined FUN_1463ddb90(void)

longlong FUN_1463ddb90(void)

{
  if (DAT_14cae6b18 == 0) {
    FUN_14000fc22(&DAT_14cae6b18,&PTR_FUN_14a9651d8);
  }
  return DAT_14cae6b18;
}



// FUNCTION 1463ddbbf FUN_1463ddbbf body=47 status=ok
// SIG undefined FUN_1463ddbbf(void)

longlong FUN_1463ddbbf(void)

{
  if (DAT_14cae6b20 == 0) {
    FUN_14000fc22(&DAT_14cae6b20,&PTR_FUN_14a9652b8);
  }
  return DAT_14cae6b20;
}



// FUNCTION 1463ddbee FUN_1463ddbee body=47 status=ok
// SIG undefined FUN_1463ddbee(void)

longlong FUN_1463ddbee(void)

{
  if (DAT_14cae6b28 == 0) {
    FUN_14000fc22(&DAT_14cae6b28,&PTR_FUN_14a9653f0);
  }
  return DAT_14cae6b28;
}



// FUNCTION 1463ddc1d FUN_1463ddc1d body=47 status=ok
// SIG undefined FUN_1463ddc1d(void)

longlong FUN_1463ddc1d(void)

{
  if (DAT_14cae6b30 == 0) {
    FUN_14000fc22(&DAT_14cae6b30,&PTR_FUN_14a965520);
  }
  return DAT_14cae6b30;
}



// FUNCTION 1463ddc4c FUN_1463ddc4c body=47 status=ok
// SIG undefined FUN_1463ddc4c(void)

longlong FUN_1463ddc4c(void)

{
  if (DAT_14cae6b38 == 0) {
    FUN_14000fc22(&DAT_14cae6b38,&PTR_FUN_14a965650);
  }
  return DAT_14cae6b38;
}



// FUNCTION 1463ddc7b FUN_1463ddc7b body=47 status=ok
// SIG undefined FUN_1463ddc7b(void)

longlong FUN_1463ddc7b(void)

{
  if (DAT_14cae6b40 == 0) {
    FUN_14000fc22(&DAT_14cae6b40,&PTR_FUN_14a965790);
  }
  return DAT_14cae6b40;
}



// FUNCTION 1463ddcaa FUN_1463ddcaa body=47 status=ok
// SIG undefined FUN_1463ddcaa(void)

longlong FUN_1463ddcaa(void)

{
  if (DAT_14cae6b48 == 0) {
    FUN_14000fc22(&DAT_14cae6b48,&PTR_FUN_14a965820);
  }
  return DAT_14cae6b48;
}



// FUNCTION 1463ddcd9 FUN_1463ddcd9 body=47 status=ok
// SIG undefined FUN_1463ddcd9(void)

longlong FUN_1463ddcd9(void)

{
  if (DAT_14cae6b50 == 0) {
    FUN_14000fc22(&DAT_14cae6b50,&PTR_FUN_14a965a50);
  }
  return DAT_14cae6b50;
}



// FUNCTION 1463ddd08 FUN_1463ddd08 body=47 status=ok
// SIG undefined FUN_1463ddd08(void)

longlong FUN_1463ddd08(void)

{
  if (DAT_14cae6b58 == 0) {
    FUN_14000fc22(&DAT_14cae6b58,&PTR_FUN_14a965ae8);
  }
  return DAT_14cae6b58;
}



// FUNCTION 1463ddd37 FUN_1463ddd37 body=47 status=ok
// SIG undefined FUN_1463ddd37(void)

longlong FUN_1463ddd37(void)

{
  if (DAT_14cae6b60 == 0) {
    FUN_14000fc22(&DAT_14cae6b60,&PTR_FUN_14a965b88);
  }
  return DAT_14cae6b60;
}



// FUNCTION 1463ddd66 FUN_1463ddd66 body=47 status=ok
// SIG undefined FUN_1463ddd66(void)

longlong FUN_1463ddd66(void)

{
  if (DAT_14cae6b68 == 0) {
    FUN_14000fc22(&DAT_14cae6b68,&PTR_FUN_14a965c20);
  }
  return DAT_14cae6b68;
}



// FUNCTION 1463ddd95 FUN_1463ddd95 body=47 status=ok
// SIG undefined FUN_1463ddd95(void)

longlong FUN_1463ddd95(void)

{
  if (DAT_14cae6b70 == 0) {
    FUN_14000fc22(&DAT_14cae6b70,&PTR_FUN_14a965dd0);
  }
  return DAT_14cae6b70;
}



// FUNCTION 1463dddc4 FUN_1463dddc4 body=47 status=ok
// SIG undefined FUN_1463dddc4(void)

longlong FUN_1463dddc4(void)

{
  if (DAT_14cae6b78 == 0) {
    FUN_14000fc22(&DAT_14cae6b78,&PTR_FUN_14a965f88);
  }
  return DAT_14cae6b78;
}



// FUNCTION 1463dddf3 FUN_1463dddf3 body=47 status=ok
// SIG undefined FUN_1463dddf3(void)

longlong FUN_1463dddf3(void)

{
  if (DAT_14cae6b80 == 0) {
    FUN_14000fc22(&DAT_14cae6b80,&PTR_FUN_14a966070);
  }
  return DAT_14cae6b80;
}



// FUNCTION 1463dde22 FUN_1463dde22 body=47 status=ok
// SIG undefined FUN_1463dde22(void)

longlong FUN_1463dde22(void)

{
  if (DAT_14cae6b88 == 0) {
    FUN_14000fc22(&DAT_14cae6b88,&PTR_FUN_14a9661a0);
  }
  return DAT_14cae6b88;
}



// FUNCTION 1463dde51 FUN_1463dde51 body=47 status=ok
// SIG undefined FUN_1463dde51(void)

longlong FUN_1463dde51(void)

{
  if (DAT_14cae6b90 == 0) {
    FUN_14000fc22(&DAT_14cae6b90,&PTR_FUN_14a9662d0);
  }
  return DAT_14cae6b90;
}



// FUNCTION 1463dde80 FUN_1463dde80 body=47 status=ok
// SIG undefined FUN_1463dde80(void)

longlong FUN_1463dde80(void)

{
  if (DAT_14cae6b98 == 0) {
    FUN_14000fc22(&DAT_14cae6b98,&PTR_FUN_14a966400);
  }
  return DAT_14cae6b98;
}



// FUNCTION 1463ddeaf FUN_1463ddeaf body=47 status=ok
// SIG undefined FUN_1463ddeaf(void)

longlong FUN_1463ddeaf(void)

{
  if (DAT_14cae6ba0 == 0) {
    FUN_14000fc22(&DAT_14cae6ba0,&PTR_FUN_14a9664e0);
  }
  return DAT_14cae6ba0;
}



// FUNCTION 1463ddede FUN_1463ddede body=47 status=ok
// SIG undefined FUN_1463ddede(void)

longlong FUN_1463ddede(void)

{
  if (DAT_14cae6ba8 == 0) {
    FUN_14000fc22(&DAT_14cae6ba8,&PTR_FUN_14a966610);
  }
  return DAT_14cae6ba8;
}



// FUNCTION 1463ddf0d FUN_1463ddf0d body=47 status=ok
// SIG undefined FUN_1463ddf0d(void)

longlong FUN_1463ddf0d(void)

{
  if (DAT_14cae6bb0 == 0) {
    FUN_14000fc22(&DAT_14cae6bb0,&PTR_FUN_14a9666f8);
  }
  return DAT_14cae6bb0;
}



// FUNCTION 1463ddf3c FUN_1463ddf3c body=47 status=ok
// SIG undefined FUN_1463ddf3c(void)

longlong FUN_1463ddf3c(void)

{
  if (DAT_14cae6bb8 == 0) {
    FUN_14000fc22(&DAT_14cae6bb8,&PTR_FUN_14a966838);
  }
  return DAT_14cae6bb8;
}



// FUNCTION 1463ddf6b FUN_1463ddf6b body=47 status=ok
// SIG undefined FUN_1463ddf6b(void)

longlong FUN_1463ddf6b(void)

{
  if (DAT_14cae6bc0 == 0) {
    FUN_14000fc22(&DAT_14cae6bc0,&PTR_FUN_14a966920);
  }
  return DAT_14cae6bc0;
}



// FUNCTION 1463ddf9a FUN_1463ddf9a body=47 status=ok
// SIG undefined FUN_1463ddf9a(void)

longlong FUN_1463ddf9a(void)

{
  if (DAT_14cae6bc8 == 0) {
    FUN_14000fc22(&DAT_14cae6bc8,&PTR_FUN_14a966a50);
  }
  return DAT_14cae6bc8;
}



// FUNCTION 1463ddfc9 FUN_1463ddfc9 body=47 status=ok
// SIG undefined FUN_1463ddfc9(void)

longlong FUN_1463ddfc9(void)

{
  if (DAT_14cae6bd0 == 0) {
    FUN_14000fc22(&DAT_14cae6bd0,&PTR_FUN_14a966b30);
  }
  return DAT_14cae6bd0;
}



// FUNCTION 1463ddff8 FUN_1463ddff8 body=47 status=ok
// SIG undefined FUN_1463ddff8(void)

longlong FUN_1463ddff8(void)

{
  if (DAT_14cae6bd8 == 0) {
    FUN_14000fc22(&DAT_14cae6bd8,&PTR_FUN_14a966c58);
  }
  return DAT_14cae6bd8;
}



// FUNCTION 1463de027 FUN_1463de027 body=47 status=ok
// SIG undefined FUN_1463de027(void)

longlong FUN_1463de027(void)

{
  if (DAT_14cae6be0 == 0) {
    FUN_14000fc22(&DAT_14cae6be0,&PTR_FUN_14a966d38);
  }
  return DAT_14cae6be0;
}



// FUNCTION 1463de056 FUN_1463de056 body=47 status=ok
// SIG undefined FUN_1463de056(void)

longlong FUN_1463de056(void)

{
  if (DAT_14cae6be8 == 0) {
    FUN_14000fc22(&DAT_14cae6be8,&PTR_FUN_14a966e28);
  }
  return DAT_14cae6be8;
}



// FUNCTION 1463de085 FUN_1463de085 body=47 status=ok
// SIG undefined FUN_1463de085(void)

longlong FUN_1463de085(void)

{
  if (DAT_14cae6bf0 == 0) {
    FUN_14000fc22(&DAT_14cae6bf0,&PTR_FUN_14a966fc8);
  }
  return DAT_14cae6bf0;
}



// FUNCTION 1463de0b4 FUN_1463de0b4 body=47 status=ok
// SIG undefined FUN_1463de0b4(void)

longlong FUN_1463de0b4(void)

{
  if (DAT_14cae6bf8 == 0) {
    FUN_14000fc22(&DAT_14cae6bf8,&PTR_FUN_14a9670a0);
  }
  return DAT_14cae6bf8;
}



// FUNCTION 1463de0e3 FUN_1463de0e3 body=47 status=ok
// SIG undefined FUN_1463de0e3(void)

longlong FUN_1463de0e3(void)

{
  if (DAT_14cae6c00 == 0) {
    FUN_14000fc22(&DAT_14cae6c00,&PTR_FUN_14a967180);
  }
  return DAT_14cae6c00;
}



// FUNCTION 1463de112 FUN_1463de112 body=47 status=ok
// SIG undefined FUN_1463de112(void)

longlong FUN_1463de112(void)

{
  if (DAT_14cae6c08 == 0) {
    FUN_14000fc22(&DAT_14cae6c08,&PTR_FUN_14a967268);
  }
  return DAT_14cae6c08;
}



// FUNCTION 1463de141 FUN_1463de141 body=47 status=ok
// SIG undefined FUN_1463de141(void)

longlong FUN_1463de141(void)

{
  if (DAT_14cae6c10 == 0) {
    FUN_14000fc22(&DAT_14cae6c10,&PTR_FUN_14a967348);
  }
  return DAT_14cae6c10;
}



// FUNCTION 1463de170 FUN_1463de170 body=47 status=ok
// SIG undefined FUN_1463de170(void)

longlong FUN_1463de170(void)

{
  if (DAT_14cae6c18 == 0) {
    FUN_14000fc22(&DAT_14cae6c18,&PTR_FUN_14a9673e0);
  }
  return DAT_14cae6c18;
}



// FUNCTION 1463de19f FUN_1463de19f body=47 status=ok
// SIG undefined FUN_1463de19f(void)

longlong FUN_1463de19f(void)

{
  if (DAT_14cae6c20 == 0) {
    FUN_14000fc22(&DAT_14cae6c20,&PTR_FUN_14a967520);
  }
  return DAT_14cae6c20;
}



// FUNCTION 1463de1ce FUN_1463de1ce body=47 status=ok
// SIG undefined FUN_1463de1ce(void)

longlong FUN_1463de1ce(void)

{
  if (DAT_14cae6c28 == 0) {
    FUN_14000fc22(&DAT_14cae6c28,&PTR_FUN_14a967600);
  }
  return DAT_14cae6c28;
}



// FUNCTION 1463de1fd FUN_1463de1fd body=47 status=ok
// SIG undefined FUN_1463de1fd(void)

longlong FUN_1463de1fd(void)

{
  if (DAT_14cae6c30 == 0) {
    FUN_14000fc22(&DAT_14cae6c30,&PTR_FUN_14a967698);
  }
  return DAT_14cae6c30;
}



// FUNCTION 1463de22c FUN_1463de22c body=47 status=ok
// SIG undefined FUN_1463de22c(void)

longlong FUN_1463de22c(void)

{
  if (DAT_14cae6c38 == 0) {
    FUN_14000fc22(&DAT_14cae6c38,&PTR_FUN_14a967838);
  }
  return DAT_14cae6c38;
}



// FUNCTION 1463de25b FUN_1463de25b body=47 status=ok
// SIG undefined FUN_1463de25b(void)

longlong FUN_1463de25b(void)

{
  if (DAT_14cae6c40 == 0) {
    FUN_14000fc22(&DAT_14cae6c40,&PTR_FUN_14a967960);
  }
  return DAT_14cae6c40;
}



// FUNCTION 1463de28a FUN_1463de28a body=47 status=ok
// SIG undefined FUN_1463de28a(void)

longlong FUN_1463de28a(void)

{
  if (DAT_14cae6c48 == 0) {
    FUN_14000fc22(&DAT_14cae6c48,&PTR_FUN_14a967ac8);
  }
  return DAT_14cae6c48;
}



// FUNCTION 1463de2b9 FUN_1463de2b9 body=47 status=ok
// SIG undefined FUN_1463de2b9(void)

longlong FUN_1463de2b9(void)

{
  if (DAT_14cae6c50 == 0) {
    FUN_14000fc22(&DAT_14cae6c50,&PTR_FUN_14a967bf0);
  }
  return DAT_14cae6c50;
}



// FUNCTION 1463de2e8 FUN_1463de2e8 body=47 status=ok
// SIG undefined FUN_1463de2e8(void)

longlong FUN_1463de2e8(void)

{
  if (DAT_14cae6c58 == 0) {
    FUN_14000fc22(&DAT_14cae6c58,&PTR_FUN_14a967d20);
  }
  return DAT_14cae6c58;
}



// FUNCTION 1463de317 FUN_1463de317 body=47 status=ok
// SIG undefined FUN_1463de317(void)

longlong FUN_1463de317(void)

{
  if (DAT_14cae6c60 == 0) {
    FUN_14000fc22(&DAT_14cae6c60,&PTR_FUN_14a967e50);
  }
  return DAT_14cae6c60;
}



// FUNCTION 1463de346 FUN_1463de346 body=47 status=ok
// SIG undefined FUN_1463de346(void)

longlong FUN_1463de346(void)

{
  if (DAT_14cae6c68 == 0) {
    FUN_14000fc22(&DAT_14cae6c68,&PTR_FUN_14a967f80);
  }
  return DAT_14cae6c68;
}



// FUNCTION 1463de375 FUN_1463de375 body=47 status=ok
// SIG undefined FUN_1463de375(void)

longlong FUN_1463de375(void)

{
  if (DAT_14cae6c70 == 0) {
    FUN_14000fc22(&DAT_14cae6c70,&PTR_FUN_14a9680b0);
  }
  return DAT_14cae6c70;
}



// FUNCTION 1463de3a4 FUN_1463de3a4 body=47 status=ok
// SIG undefined FUN_1463de3a4(void)

longlong FUN_1463de3a4(void)

{
  if (DAT_14cae6c78 == 0) {
    FUN_14000fc22(&DAT_14cae6c78,&PTR_FUN_14a9681d8);
  }
  return DAT_14cae6c78;
}



// FUNCTION 1463de3d3 FUN_1463de3d3 body=47 status=ok
// SIG undefined FUN_1463de3d3(void)

longlong FUN_1463de3d3(void)

{
  if (DAT_14cae6c80 == 0) {
    FUN_14000fc22(&DAT_14cae6c80,&PTR_FUN_14a968300);
  }
  return DAT_14cae6c80;
}



// FUNCTION 1463de402 FUN_1463de402 body=47 status=ok
// SIG undefined FUN_1463de402(void)

longlong FUN_1463de402(void)

{
  if (DAT_14cae6c88 == 0) {
    FUN_14000fc22(&DAT_14cae6c88,&PTR_FUN_14a968438);
  }
  return DAT_14cae6c88;
}



// FUNCTION 1463de431 FUN_1463de431 body=47 status=ok
// SIG undefined FUN_1463de431(void)

longlong FUN_1463de431(void)

{
  if (DAT_14cae6c90 == 0) {
    FUN_14000fc22(&DAT_14cae6c90,&PTR_FUN_14a968560);
  }
  return DAT_14cae6c90;
}



// FUNCTION 1463de460 FUN_1463de460 body=47 status=ok
// SIG undefined FUN_1463de460(void)

longlong FUN_1463de460(void)

{
  if (DAT_14cae6c98 == 0) {
    FUN_14000fc22(&DAT_14cae6c98,&PTR_FUN_14a9685f8);
  }
  return DAT_14cae6c98;
}



// FUNCTION 1463de48f FUN_1463de48f body=47 status=ok
// SIG undefined FUN_1463de48f(void)

longlong FUN_1463de48f(void)

{
  if (DAT_14cae6ca0 == 0) {
    FUN_14000fc22(&DAT_14cae6ca0,&PTR_FUN_14a968690);
  }
  return DAT_14cae6ca0;
}



// FUNCTION 1463de4be FUN_1463de4be body=47 status=ok
// SIG undefined FUN_1463de4be(void)

longlong FUN_1463de4be(void)

{
  if (DAT_14cae6ca8 == 0) {
    FUN_14000fc22(&DAT_14cae6ca8,&PTR_FUN_14a968770);
  }
  return DAT_14cae6ca8;
}



// FUNCTION 1463de4ed FUN_1463de4ed body=47 status=ok
// SIG undefined FUN_1463de4ed(void)

longlong FUN_1463de4ed(void)

{
  if (DAT_14cae6cb0 == 0) {
    FUN_14000fc22(&DAT_14cae6cb0,&PTR_FUN_14a968858);
  }
  return DAT_14cae6cb0;
}



// FUNCTION 1463de51c FUN_1463de51c body=47 status=ok
// SIG undefined FUN_1463de51c(void)

longlong FUN_1463de51c(void)

{
  if (DAT_14cae6cb8 == 0) {
    FUN_14000fc22(&DAT_14cae6cb8,&PTR_FUN_14a968938);
  }
  return DAT_14cae6cb8;
}



// FUNCTION 1463de54b FUN_1463de54b body=47 status=ok
// SIG undefined FUN_1463de54b(void)

longlong FUN_1463de54b(void)

{
  if (DAT_14cae6cc0 == 0) {
    FUN_14000fc22(&DAT_14cae6cc0,&PTR_FUN_14a968a28);
  }
  return DAT_14cae6cc0;
}



// FUNCTION 1463de57a FUN_1463de57a body=47 status=ok
// SIG undefined FUN_1463de57a(void)

longlong FUN_1463de57a(void)

{
  if (DAT_14cae6cc8 == 0) {
    FUN_14000fc22(&DAT_14cae6cc8,&PTR_FUN_14a968b18);
  }
  return DAT_14cae6cc8;
}



// FUNCTION 1463de5a9 FUN_1463de5a9 body=47 status=ok
// SIG undefined FUN_1463de5a9(void)

longlong FUN_1463de5a9(void)

{
  if (DAT_14cae6cd0 == 0) {
    FUN_14000fc22(&DAT_14cae6cd0,&PTR_FUN_14a968bf8);
  }
  return DAT_14cae6cd0;
}



// FUNCTION 1463de5d8 FUN_1463de5d8 body=47 status=ok
// SIG undefined FUN_1463de5d8(void)

longlong FUN_1463de5d8(void)

{
  if (DAT_14cae6cd8 == 0) {
    FUN_14000fc22(&DAT_14cae6cd8,&PTR_FUN_14a968ce0);
  }
  return DAT_14cae6cd8;
}



// FUNCTION 1463de607 FUN_1463de607 body=47 status=ok
// SIG undefined FUN_1463de607(void)

longlong FUN_1463de607(void)

{
  if (DAT_14cae6ce0 == 0) {
    FUN_14000fc22(&DAT_14cae6ce0,&PTR_FUN_14a968e10);
  }
  return DAT_14cae6ce0;
}



// FUNCTION 1463de636 FUN_1463de636 body=47 status=ok
// SIG undefined FUN_1463de636(void)

longlong FUN_1463de636(void)

{
  if (DAT_14cae6ce8 == 0) {
    FUN_14000fc22(&DAT_14cae6ce8,&PTR_FUN_14a968ef0);
  }
  return DAT_14cae6ce8;
}



// FUNCTION 1463de665 FUN_1463de665 body=47 status=ok
// SIG undefined FUN_1463de665(void)

longlong FUN_1463de665(void)

{
  if (DAT_14cae6cf0 == 0) {
    FUN_14000fc22(&DAT_14cae6cf0,&PTR_FUN_14a969020);
  }
  return DAT_14cae6cf0;
}



// FUNCTION 1463de694 FUN_1463de694 body=47 status=ok
// SIG undefined FUN_1463de694(void)

longlong FUN_1463de694(void)

{
  if (DAT_14cae6cf8 == 0) {
    FUN_14000fc22(&DAT_14cae6cf8,&PTR_FUN_14a969148);
  }
  return DAT_14cae6cf8;
}



// FUNCTION 1463de6c3 FUN_1463de6c3 body=47 status=ok
// SIG undefined FUN_1463de6c3(void)

longlong FUN_1463de6c3(void)

{
  if (DAT_14cae6d00 == 0) {
    FUN_14000fc22(&DAT_14cae6d00,&PTR_FUN_14a969230);
  }
  return DAT_14cae6d00;
}



// FUNCTION 1463de6f2 FUN_1463de6f2 body=47 status=ok
// SIG undefined FUN_1463de6f2(void)

longlong FUN_1463de6f2(void)

{
  if (DAT_14cae6d08 == 0) {
    FUN_14000fc22(&DAT_14cae6d08,&PTR_FUN_14a9692c8);
  }
  return DAT_14cae6d08;
}



// FUNCTION 1463de721 FUN_1463de721 body=47 status=ok
// SIG undefined FUN_1463de721(void)

longlong FUN_1463de721(void)

{
  if (DAT_14cae6d10 == 0) {
    FUN_14000fc22(&DAT_14cae6d10,&PTR_FUN_14a969400);
  }
  return DAT_14cae6d10;
}



// FUNCTION 1463de750 FUN_1463de750 body=47 status=ok
// SIG undefined FUN_1463de750(void)

longlong FUN_1463de750(void)

{
  if (DAT_14cae6d18 == 0) {
    FUN_14000fc22(&DAT_14cae6d18,&PTR_FUN_14a969528);
  }
  return DAT_14cae6d18;
}



// FUNCTION 1463de77f FUN_1463de77f body=47 status=ok
// SIG undefined FUN_1463de77f(void)

longlong FUN_1463de77f(void)

{
  if (DAT_14cae6d20 == 0) {
    FUN_14000fc22(&DAT_14cae6d20,&PTR_FUN_14a969608);
  }
  return DAT_14cae6d20;
}



// FUNCTION 1463de7ae FUN_1463de7ae body=47 status=ok
// SIG undefined FUN_1463de7ae(void)

longlong FUN_1463de7ae(void)

{
  if (DAT_14cae6d28 == 0) {
    FUN_14000fc22(&DAT_14cae6d28,&PTR_FUN_14a9696f8);
  }
  return DAT_14cae6d28;
}



// FUNCTION 1463de7dd FUN_1463de7dd body=47 status=ok
// SIG undefined FUN_1463de7dd(void)

longlong FUN_1463de7dd(void)

{
  if (DAT_14cae6d30 == 0) {
    FUN_14000fc22(&DAT_14cae6d30,&PTR_FUN_14a969790);
  }
  return DAT_14cae6d30;
}



// FUNCTION 1463de80c FUN_1463de80c body=47 status=ok
// SIG undefined FUN_1463de80c(void)

longlong FUN_1463de80c(void)

{
  if (DAT_14cae6d38 == 0) {
    FUN_14000fc22(&DAT_14cae6d38,&PTR_FUN_14a9698c8);
  }
  return DAT_14cae6d38;
}



// FUNCTION 1463de83b FUN_1463de83b body=47 status=ok
// SIG undefined FUN_1463de83b(void)

longlong FUN_1463de83b(void)

{
  if (DAT_14cae6d40 == 0) {
    FUN_14000fc22(&DAT_14cae6d40,&PTR_FUN_14a9699b8);
  }
  return DAT_14cae6d40;
}



// FUNCTION 1463de86a FUN_1463de86a body=47 status=ok
// SIG undefined FUN_1463de86a(void)

longlong FUN_1463de86a(void)

{
  if (DAT_14cae6d48 == 0) {
    FUN_14000fc22(&DAT_14cae6d48,&PTR_FUN_14a969a50);
  }
  return DAT_14cae6d48;
}



// FUNCTION 1463de899 FUN_1463de899 body=47 status=ok
// SIG undefined FUN_1463de899(void)

longlong FUN_1463de899(void)

{
  if (DAT_14cae6d50 == 0) {
    FUN_14000fc22(&DAT_14cae6d50,&PTR_FUN_14a969bb0);
  }
  return DAT_14cae6d50;
}



// FUNCTION 1463de8c8 FUN_1463de8c8 body=47 status=ok
// SIG undefined FUN_1463de8c8(void)

longlong FUN_1463de8c8(void)

{
  if (DAT_14cae6d58 == 0) {
    FUN_14000fc22(&DAT_14cae6d58,&PTR_FUN_14a969d38);
  }
  return DAT_14cae6d58;
}



// FUNCTION 1463de8f7 FUN_1463de8f7 body=47 status=ok
// SIG undefined FUN_1463de8f7(void)

longlong FUN_1463de8f7(void)

{
  if (DAT_14cae6d60 == 0) {
    FUN_14000fc22(&DAT_14cae6d60,&PTR_FUN_14a969eb0);
  }
  return DAT_14cae6d60;
}



// FUNCTION 1463de926 FUN_1463de926 body=47 status=ok
// SIG undefined FUN_1463de926(void)

longlong FUN_1463de926(void)

{
  if (DAT_14cae6d68 == 0) {
    FUN_14000fc22(&DAT_14cae6d68,&PTR_FUN_14a969ff0);
  }
  return DAT_14cae6d68;
}



// FUNCTION 1463de955 FUN_1463de955 body=47 status=ok
// SIG undefined FUN_1463de955(void)

longlong FUN_1463de955(void)

{
  if (DAT_14cae6d70 == 0) {
    FUN_14000fc22(&DAT_14cae6d70,&PTR_FUN_14a96a0d8);
  }
  return DAT_14cae6d70;
}



// FUNCTION 1463de984 FUN_1463de984 body=47 status=ok
// SIG undefined FUN_1463de984(void)

longlong FUN_1463de984(void)

{
  if (DAT_14cae6d78 == 0) {
    FUN_14000fc22(&DAT_14cae6d78,&PTR_FUN_14a96a1c8);
  }
  return DAT_14cae6d78;
}



// FUNCTION 1463de9b3 FUN_1463de9b3 body=47 status=ok
// SIG undefined FUN_1463de9b3(void)

longlong FUN_1463de9b3(void)

{
  if (DAT_14cae6d80 == 0) {
    FUN_14000fc22(&DAT_14cae6d80,&PTR_FUN_14a96a2c0);
  }
  return DAT_14cae6d80;
}



// FUNCTION 1463de9e2 FUN_1463de9e2 body=47 status=ok
// SIG undefined FUN_1463de9e2(void)

longlong FUN_1463de9e2(void)

{
  if (DAT_14cae6d88 == 0) {
    FUN_14000fc22(&DAT_14cae6d88,&PTR_FUN_14a96a360);
  }
  return DAT_14cae6d88;
}



// FUNCTION 1463dea11 FUN_1463dea11 body=47 status=ok
// SIG undefined FUN_1463dea11(void)

longlong FUN_1463dea11(void)

{
  if (DAT_14cae6d90 == 0) {
    FUN_14000fc22(&DAT_14cae6d90,&PTR_FUN_14a96a3f8);
  }
  return DAT_14cae6d90;
}



// FUNCTION 1463dea40 FUN_1463dea40 body=47 status=ok
// SIG undefined FUN_1463dea40(void)

longlong FUN_1463dea40(void)

{
  if (DAT_14cae6d98 == 0) {
    FUN_14000fc22(&DAT_14cae6d98,&PTR_FUN_14a96a490);
  }
  return DAT_14cae6d98;
}



// FUNCTION 1463dea6f FUN_1463dea6f body=47 status=ok
// SIG undefined FUN_1463dea6f(void)

longlong FUN_1463dea6f(void)

{
  if (DAT_14cae6da0 == 0) {
    FUN_14000fc22(&DAT_14cae6da0,&PTR_FUN_14a96a870);
  }
  return DAT_14cae6da0;
}



// FUNCTION 1463dea9e FUN_1463dea9e body=47 status=ok
// SIG undefined FUN_1463dea9e(void)

longlong FUN_1463dea9e(void)

{
  if (DAT_14cae6da8 == 0) {
    FUN_14000fc22(&DAT_14cae6da8,&PTR_FUN_14a96aa18);
  }
  return DAT_14cae6da8;
}



// FUNCTION 1463deacd FUN_1463deacd body=47 status=ok
// SIG undefined FUN_1463deacd(void)

longlong FUN_1463deacd(void)

{
  if (DAT_14cae6db0 == 0) {
    FUN_14000fc22(&DAT_14cae6db0,&PTR_FUN_14a96abd0);
  }
  return DAT_14cae6db0;
}



// FUNCTION 1463deafc FUN_1463deafc body=47 status=ok
// SIG undefined FUN_1463deafc(void)

longlong FUN_1463deafc(void)

{
  if (DAT_14cae6db8 == 0) {
    FUN_14000fc22(&DAT_14cae6db8,&PTR_FUN_14a96ad38);
  }
  return DAT_14cae6db8;
}



// FUNCTION 1463deb2b FUN_1463deb2b body=47 status=ok
// SIG undefined FUN_1463deb2b(void)

longlong FUN_1463deb2b(void)

{
  if (DAT_14cae6dc0 == 0) {
    FUN_14000fc22(&DAT_14cae6dc0,&PTR_FUN_14a96ae00);
  }
  return DAT_14cae6dc0;
}



// FUNCTION 1463deb5a FUN_1463deb5a body=183 status=ok
// SIG undefined FUN_1463deb5a(void)

void FUN_1463deb5a(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  *param_3 = SQRT(local_20 * local_20 + local_30 * local_30 + local_28 * local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463dec12 FUN_1463dec12 body=47 status=ok
// SIG undefined FUN_1463dec12(void)

longlong FUN_1463dec12(void)

{
  if (DAT_14cae6dc8 == 0) {
    FUN_14000fc22(&DAT_14cae6dc8,&PTR_FUN_14a96aed8);
  }
  return DAT_14cae6dc8;
}



// FUNCTION 1463dec41 FUN_1463dec41 body=47 status=ok
// SIG undefined FUN_1463dec41(void)

longlong FUN_1463dec41(void)

{
  if (DAT_14cae6dd0 == 0) {
    FUN_14000fc22(&DAT_14cae6dd0,&PTR_FUN_14a96afb0);
  }
  return DAT_14cae6dd0;
}



// FUNCTION 1463dec70 FUN_1463dec70 body=47 status=ok
// SIG undefined FUN_1463dec70(void)

longlong FUN_1463dec70(void)

{
  if (DAT_14cae6dd8 == 0) {
    FUN_14000fc22(&DAT_14cae6dd8,&PTR_FUN_14a96b090);
  }
  return DAT_14cae6dd8;
}



// FUNCTION 1463dec9f FUN_1463dec9f body=47 status=ok
// SIG undefined FUN_1463dec9f(void)

longlong FUN_1463dec9f(void)

{
  if (DAT_14cae6de0 == 0) {
    FUN_14000fc22(&DAT_14cae6de0,&PTR_FUN_14a96b168);
  }
  return DAT_14cae6de0;
}



// FUNCTION 1463decce FUN_1463decce body=47 status=ok
// SIG undefined FUN_1463decce(void)

longlong FUN_1463decce(void)

{
  if (DAT_14cae6de8 == 0) {
    FUN_14000fc22(&DAT_14cae6de8,&PTR_FUN_14a96b240);
  }
  return DAT_14cae6de8;
}



// FUNCTION 1463decfd FUN_1463decfd body=47 status=ok
// SIG undefined FUN_1463decfd(void)

longlong FUN_1463decfd(void)

{
  if (DAT_14cae6df0 == 0) {
    FUN_14000fc22(&DAT_14cae6df0,&PTR_FUN_14a96b3a0);
  }
  return DAT_14cae6df0;
}



// FUNCTION 1463ded2c FUN_1463ded2c body=47 status=ok
// SIG undefined FUN_1463ded2c(void)

longlong FUN_1463ded2c(void)

{
  if (DAT_14cae6df8 == 0) {
    FUN_14000fc22(&DAT_14cae6df8,&PTR_FUN_14a96b520);
  }
  return DAT_14cae6df8;
}



// FUNCTION 1463ded5b FUN_1463ded5b body=47 status=ok
// SIG undefined FUN_1463ded5b(void)

longlong FUN_1463ded5b(void)

{
  if (DAT_14cae6e00 == 0) {
    FUN_14000fc22(&DAT_14cae6e00,&PTR_FUN_14a96b6a0);
  }
  return DAT_14cae6e00;
}



// FUNCTION 1463ded8a FUN_1463ded8a body=47 status=ok
// SIG undefined FUN_1463ded8a(void)

longlong FUN_1463ded8a(void)

{
  if (DAT_14cae6e08 == 0) {
    FUN_14000fc22(&DAT_14cae6e08,&PTR_FUN_14a96b7e8);
  }
  return DAT_14cae6e08;
}



// FUNCTION 1463dedb9 FUN_1463dedb9 body=47 status=ok
// SIG undefined FUN_1463dedb9(void)

longlong FUN_1463dedb9(void)

{
  if (DAT_14cae6e10 == 0) {
    FUN_14000fc22(&DAT_14cae6e10,&PTR_FUN_14a96b8f8);
  }
  return DAT_14cae6e10;
}



// FUNCTION 1463dede8 FUN_1463dede8 body=47 status=ok
// SIG undefined FUN_1463dede8(void)

longlong FUN_1463dede8(void)

{
  if (DAT_14cae6e18 == 0) {
    FUN_14000fc22(&DAT_14cae6e18,&PTR_FUN_14a96ba08);
  }
  return DAT_14cae6e18;
}



// FUNCTION 1463dee18 FUN_1463dee18 body=34 status=ok
// SIG undefined FUN_1463dee18(void)

void FUN_1463dee18(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a71992();
  FUN_14069c8d6(uVar1,&PTR_DAT_14a96ba50,0x2df);
  return;
}



// FUNCTION 1463dee5c FUN_1463dee5c body=69 status=ok
// SIG undefined FUN_1463dee5c(void)

undefined8 * FUN_1463dee5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a920b20;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463deea2 FUN_1463deea2 body=69 status=ok
// SIG undefined FUN_1463deea2(void)

undefined8 * FUN_1463deea2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9210a0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463deee8 FUN_1463deee8 body=40 status=ok
// SIG undefined FUN_1463deee8(void)

undefined8 FUN_1463deee8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463def10 FUN_1463def10 body=40 status=ok
// SIG undefined FUN_1463def10(void)

undefined8 FUN_1463def10(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463def38 FUN_1463def38 body=69 status=ok
// SIG undefined FUN_1463def38(void)

undefined8 * FUN_1463def38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a924400;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463def7e FUN_1463def7e body=40 status=ok
// SIG undefined FUN_1463def7e(void)

undefined8 FUN_1463def7e(undefined8 param_1,int param_2)

{
  FUN_1459c89fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463defa6 FUN_1463defa6 body=40 status=ok
// SIG undefined FUN_1463defa6(void)

undefined8 FUN_1463defa6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463defce FUN_1463defce body=40 status=ok
// SIG undefined FUN_1463defce(void)

undefined8 FUN_1463defce(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463deff6 FUN_1463deff6 body=40 status=ok
// SIG undefined FUN_1463deff6(void)

undefined8 FUN_1463deff6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df01e FUN_1463df01e body=40 status=ok
// SIG undefined FUN_1463df01e(void)

undefined8 FUN_1463df01e(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df046 FUN_1463df046 body=40 status=ok
// SIG undefined FUN_1463df046(void)

undefined8 FUN_1463df046(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df06e FUN_1463df06e body=40 status=ok
// SIG undefined FUN_1463df06e(void)

undefined8 FUN_1463df06e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df096 FUN_1463df096 body=40 status=ok
// SIG undefined FUN_1463df096(void)

undefined8 FUN_1463df096(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df0be FUN_1463df0be body=40 status=ok
// SIG undefined FUN_1463df0be(void)

undefined8 FUN_1463df0be(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df0e6 FUN_1463df0e6 body=40 status=ok
// SIG undefined FUN_1463df0e6(void)

undefined8 FUN_1463df0e6(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df10e FUN_1463df10e body=40 status=ok
// SIG undefined FUN_1463df10e(void)

undefined8 FUN_1463df10e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df136 FUN_1463df136 body=29 status=ok
// SIG undefined FUN_1463df136(void)

undefined8 FUN_1463df136(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df154 FUN_1463df154 body=29 status=ok
// SIG undefined FUN_1463df154(void)

undefined8 FUN_1463df154(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df172 FUN_1463df172 body=29 status=ok
// SIG undefined FUN_1463df172(void)

undefined8 FUN_1463df172(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df190 FUN_1463df190 body=29 status=ok
// SIG undefined FUN_1463df190(void)

undefined8 FUN_1463df190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df1ae FUN_1463df1ae body=29 status=ok
// SIG undefined FUN_1463df1ae(void)

undefined8 FUN_1463df1ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df1cc FUN_1463df1cc body=29 status=ok
// SIG undefined FUN_1463df1cc(void)

undefined8 FUN_1463df1cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df1ea FUN_1463df1ea body=136 status=ok
// SIG undefined FUN_1463df1ea(void)

code * FUN_1463df1ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumCustomDataFloats";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e36542;
}



// FUNCTION 1463df272 FUN_1463df272 body=136 status=ok
// SIG undefined FUN_1463df272(void)

code * FUN_1463df272(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancingFadeOutParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145729370;
}



// FUNCTION 1463df2fa FUN_1463df2fa body=136 status=ok
// SIG undefined FUN_1463df2fa(void)

code * FUN_1463df2fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancingViewZCompareOne";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145729262;
}



// FUNCTION 1463df382 FUN_1463df382 body=29 status=ok
// SIG undefined FUN_1463df382(void)

undefined8 FUN_1463df382(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df3a0 FUN_1463df3a0 body=29 status=ok
// SIG undefined FUN_1463df3a0(void)

undefined8 FUN_1463df3a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df3be FUN_1463df3be body=29 status=ok
// SIG undefined FUN_1463df3be(void)

undefined8 FUN_1463df3be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df3dc FUN_1463df3dc body=29 status=ok
// SIG undefined FUN_1463df3dc(void)

undefined8 FUN_1463df3dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df3fa FUN_1463df3fa body=29 status=ok
// SIG undefined FUN_1463df3fa(void)

undefined8 FUN_1463df3fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df418 FUN_1463df418 body=29 status=ok
// SIG undefined FUN_1463df418(void)

undefined8 FUN_1463df418(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df436 FUN_1463df436 body=29 status=ok
// SIG undefined FUN_1463df436(void)

undefined8 FUN_1463df436(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df454 FUN_1463df454 body=29 status=ok
// SIG undefined FUN_1463df454(void)

undefined8 FUN_1463df454(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df472 FUN_1463df472 body=29 status=ok
// SIG undefined FUN_1463df472(void)

undefined8 FUN_1463df472(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df490 FUN_1463df490 body=29 status=ok
// SIG undefined FUN_1463df490(void)

undefined8 FUN_1463df490(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df4ae FUN_1463df4ae body=29 status=ok
// SIG undefined FUN_1463df4ae(void)

undefined8 FUN_1463df4ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df4cc FUN_1463df4cc body=29 status=ok
// SIG undefined FUN_1463df4cc(void)

undefined8 FUN_1463df4cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df4ea FUN_1463df4ea body=29 status=ok
// SIG undefined FUN_1463df4ea(void)

undefined8 FUN_1463df4ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df508 FUN_1463df508 body=147 status=ok
// SIG undefined FUN_1463df508(void)

void FUN_1463df508(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1463df59c FUN_1463df59c body=71 status=ok
// SIG undefined FUN_1463df59c(void)

void FUN_1463df59c(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14cae4e75 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463df5ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14cae4e68 + 0x18))(&DAT_14cae4e68,uVar1,*(code **)(DAT_14cae4e68 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14cae4e68,0);
  return;
}



// FUNCTION 1463df5e4 FUN_1463df5e4 body=29 status=ok
// SIG undefined FUN_1463df5e4(void)

undefined8 FUN_1463df5e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463df601 FUN_1463df601 body=49 status=ok
// SIG undefined FUN_1463df601(void)

longlong FUN_1463df601(void)

{
  if (DAT_14cae7138 == 0) {
    FUN_14073dd9a(&DAT_14cae7138,&PTR_LAB_14a976a70);
  }
  return DAT_14cae7138;
}



// FUNCTION 1463df632 FUN_1463df632 body=47 status=ok
// SIG undefined FUN_1463df632(void)

longlong FUN_1463df632(void)

{
  if (DAT_14cae70c8 == 0) {
    FUN_14000fc22(&DAT_14cae70c8,&PTR_FUN_14a975a48);
  }
  return DAT_14cae70c8;
}



// FUNCTION 1463df661 FUN_1463df661 body=47 status=ok
// SIG undefined FUN_1463df661(void)

longlong FUN_1463df661(void)

{
  if (DAT_14cae70d0 == 0) {
    FUN_14000fc22(&DAT_14cae70d0,&PTR_FUN_14a975ad8);
  }
  return DAT_14cae70d0;
}



// FUNCTION 1463df690 FUN_1463df690 body=161 status=ok
// SIG undefined FUN_1463df690(void)

void FUN_1463df690(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  puVar1 = &local_14;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar1 = 0;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463df732 FUN_1463df732 body=47 status=ok
// SIG undefined FUN_1463df732(void)

longlong FUN_1463df732(void)

{
  if (DAT_14cae70d8 == 0) {
    FUN_14000fc22(&DAT_14cae70d8,&PTR_FUN_14a975bb0);
  }
  return DAT_14cae70d8;
}



// FUNCTION 1463df761 FUN_1463df761 body=47 status=ok
// SIG undefined FUN_1463df761(void)

longlong FUN_1463df761(void)

{
  if (DAT_14cae70e0 == 0) {
    FUN_14000fc22(&DAT_14cae70e0,&PTR_FUN_14a975cf0);
  }
  return DAT_14cae70e0;
}


