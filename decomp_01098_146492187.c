// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146492187 FUN_146492187 body=47 status=ok
// SIG undefined FUN_146492187(void)

longlong FUN_146492187(void)

{
  if (DAT_14cb4c278 == 0) {
    FUN_14000fc22(&DAT_14cb4c278,&PTR_FUN_14aeee6f8);
  }
  return DAT_14cb4c278;
}



// FUNCTION 1464921b6 FUN_1464921b6 body=34 status=ok
// SIG undefined FUN_1464921b6(void)

void FUN_1464921b6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141225b54();
  FUN_14069c8d6(uVar1,&PTR_s_FreeAllMeshes_14aeee740,4);
  return;
}



// FUNCTION 1464921dd FUN_1464921dd body=46 status=ok
// SIG undefined FUN_1464921dd(void)

void FUN_1464921dd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aeee980;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 14649220c FUN_14649220c body=40 status=ok
// SIG undefined FUN_14649220c(void)

undefined8 FUN_14649220c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146492234 FUN_146492234 body=40 status=ok
// SIG undefined FUN_146492234(void)

undefined8 FUN_146492234(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14649225c FUN_14649225c body=40 status=ok
// SIG undefined FUN_14649225c(void)

undefined8 FUN_14649225c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146492284 FUN_146492284 body=40 status=ok
// SIG undefined FUN_146492284(void)

undefined8 FUN_146492284(undefined8 param_1,int param_2)

{
  FUN_145bfa934();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464922ac FUN_1464922ac body=40 status=ok
// SIG undefined FUN_1464922ac(void)

undefined8 FUN_1464922ac(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464922d4 FUN_1464922d4 body=40 status=ok
// SIG undefined FUN_1464922d4(void)

undefined8 FUN_1464922d4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464922fc FUN_1464922fc body=29 status=ok
// SIG undefined FUN_1464922fc(void)

undefined8 FUN_1464922fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14649231a FUN_14649231a body=93 status=ok
// SIG undefined FUN_14649231a(void)

void FUN_14649231a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aef0800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146492378 FUN_146492378 body=29 status=ok
// SIG undefined FUN_146492378(void)

undefined8 FUN_146492378(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146492396 FUN_146492396 body=55 status=ok
// SIG undefined FUN_146492396(void)

void FUN_146492396(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c390 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4c390 = FUN_140002ddd(FUN_1464923cd,uVar1,L"ModelingToolsAxisFilter");
  }
  return;
}



// FUNCTION 1464923cd FUN_1464923cd body=47 status=ok
// SIG undefined FUN_1464923cd(void)

longlong FUN_1464923cd(void)

{
  if (DAT_14cb4c388 == 0) {
    FUN_14086a14e(&DAT_14cb4c388,&PTR_FUN_14aef0a30);
  }
  return DAT_14cb4c388;
}



// FUNCTION 1464923fc FUN_1464923fc body=48 status=ok
// SIG undefined FUN_1464923fc(void)

void FUN_1464923fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000003;
  *puVar1 = &PTR_FUN_14aefd070;
  return;
}



// FUNCTION 14649242c FUN_14649242c body=47 status=ok
// SIG undefined FUN_14649242c(void)

longlong FUN_14649242c(void)

{
  if (DAT_14cb4c3a0 == 0) {
    FUN_1409ce572(&DAT_14cb4c3a0,&PTR_FUN_14aef0b50);
  }
  return DAT_14cb4c3a0;
}



// FUNCTION 14649245b FUN_14649245b body=47 status=ok
// SIG undefined FUN_14649245b(void)

longlong FUN_14649245b(void)

{
  if (DAT_14cb4c3b8 == 0) {
    FUN_1409ce572(&DAT_14cb4c3b8,&PTR_FUN_14aef0bc0);
  }
  return DAT_14cb4c3b8;
}



// FUNCTION 14649248a FUN_14649248a body=47 status=ok
// SIG undefined FUN_14649248a(void)

longlong FUN_14649248a(void)

{
  if (DAT_14cb4c3d0 == 0) {
    FUN_1409ce572(&DAT_14cb4c3d0,&PTR_FUN_14aef0c60);
  }
  return DAT_14cb4c3d0;
}



// FUNCTION 1464924be FUN_1464924be body=47 status=ok
// SIG undefined FUN_1464924be(void)

longlong FUN_1464924be(void)

{
  if (DAT_14cb4c538 == 0) {
    FUN_14073dd9a(&DAT_14cb4c538,&PTR_LAB_14aef3cf8);
  }
  return DAT_14cb4c538;
}



// FUNCTION 1464924ed FUN_1464924ed body=47 status=ok
// SIG undefined FUN_1464924ed(void)

longlong FUN_1464924ed(void)

{
  if (DAT_14cb4c400 == 0) {
    FUN_14073dd9a(&DAT_14cb4c400,&PTR_LAB_14aef0d48);
  }
  return DAT_14cb4c400;
}



// FUNCTION 14649251c FUN_14649251c body=55 status=ok
// SIG undefined FUN_14649251c(void)

void FUN_14649251c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c418 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4c418 = FUN_140002ddd(FUN_146492553,uVar1,L"ModelingToolsColorChannelFilter");
  }
  return;
}



// FUNCTION 146492553 FUN_146492553 body=49 status=ok
// SIG undefined FUN_146492553(void)

longlong FUN_146492553(void)

{
  if (DAT_14cb4c410 == 0) {
    FUN_14086a14e(&DAT_14cb4c410,&PTR_FUN_14aef12c0);
  }
  return DAT_14cb4c410;
}



// FUNCTION 146492584 FUN_146492584 body=48 status=ok
// SIG undefined FUN_146492584(void)

void FUN_146492584(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000004;
  *puVar1 = &PTR_FUN_14aefd4f0;
  return;
}



// FUNCTION 1464925b4 FUN_1464925b4 body=35 status=ok
// SIG undefined FUN_1464925b4(void)

void FUN_1464925b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef13c0;
  return;
}



// FUNCTION 1464925d7 FUN_1464925d7 body=47 status=ok
// SIG undefined FUN_1464925d7(void)

longlong FUN_1464925d7(void)

{
  if (DAT_14cb4c430 == 0) {
    FUN_14073dd9a(&DAT_14cb4c430,&PTR_LAB_14aef1378);
  }
  return DAT_14cb4c430;
}



// FUNCTION 146492606 FUN_146492606 body=35 status=ok
// SIG undefined FUN_146492606(void)

void FUN_146492606(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef1720;
  return;
}



// FUNCTION 146492629 FUN_146492629 body=47 status=ok
// SIG undefined FUN_146492629(void)

longlong FUN_146492629(void)

{
  if (DAT_14cb4c448 == 0) {
    FUN_14073dd9a(&DAT_14cb4c448,&PTR_LAB_14aef16d8);
  }
  return DAT_14cb4c448;
}



// FUNCTION 146492658 FUN_146492658 body=35 status=ok
// SIG undefined FUN_146492658(void)

void FUN_146492658(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef1a90;
  return;
}



// FUNCTION 14649267b FUN_14649267b body=47 status=ok
// SIG undefined FUN_14649267b(void)

longlong FUN_14649267b(void)

{
  if (DAT_14cb4c460 == 0) {
    FUN_14073dd9a(&DAT_14cb4c460,&PTR_LAB_14aef1a48);
  }
  return DAT_14cb4c460;
}



// FUNCTION 1464926aa FUN_1464926aa body=73 status=ok
// SIG undefined FUN_1464926aa(void)

void FUN_1464926aa(void)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0x3f733333;
  uStack_14 = 0x3d4ccccd;
  uStack_10 = 0x3d4ccccd;
  uStack_c = 0x3f800000;
  FUN_1411ab38a(&local_18,&DAT_14cb4c9d4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464926f4 FUN_1464926f4 body=73 status=ok
// SIG undefined FUN_1464926f4(void)

void FUN_1464926f4(void)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_14 = 0x3e99999a;
  uStack_10 = 0x3f733333;
  uStack_c = 0x3f800000;
  FUN_1411ab38a(&local_18,&DAT_14cb4c9d8);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14649273e FUN_14649273e body=47 status=ok
// SIG undefined FUN_14649273e(void)

longlong FUN_14649273e(void)

{
  if (DAT_14cb4c470 == 0) {
    FUN_1409ce572(&DAT_14cb4c470,&PTR_FUN_14aef1db0);
  }
  return DAT_14cb4c470;
}



// FUNCTION 14649276d FUN_14649276d body=47 status=ok
// SIG undefined FUN_14649276d(void)

longlong FUN_14649276d(void)

{
  if (DAT_14cb4c488 == 0) {
    FUN_1409ce572(&DAT_14cb4c488,&PTR_FUN_14aef1e20);
  }
  return DAT_14cb4c488;
}



// FUNCTION 1464927a1 FUN_1464927a1 body=47 status=ok
// SIG undefined FUN_1464927a1(void)

longlong FUN_1464927a1(void)

{
  if (DAT_14cb4c4a8 == 0) {
    FUN_14073dd9a(&DAT_14cb4c4a8,&PTR_LAB_14aef2688);
  }
  return DAT_14cb4c4a8;
}



// FUNCTION 1464927d0 FUN_1464927d0 body=32 status=ok
// SIG undefined FUN_1464927d0(void)

void FUN_1464927d0(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_1412202b0(param_1);
  *param_1 = &PTR_FUN_14aef2a90;
  return;
}



// FUNCTION 1464927f0 FUN_1464927f0 body=49 status=ok
// SIG undefined FUN_1464927f0(void)

longlong FUN_1464927f0(void)

{
  if (DAT_14cb4c4c8 == 0) {
    FUN_14073dd9a(&DAT_14cb4c4c8,&PTR_LAB_14aef2a48);
  }
  return DAT_14cb4c4c8;
}



// FUNCTION 146492821 FUN_146492821 body=35 status=ok
// SIG undefined FUN_146492821(void)

void FUN_146492821(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef2e20;
  return;
}



// FUNCTION 146492849 FUN_146492849 body=47 status=ok
// SIG undefined FUN_146492849(void)

longlong FUN_146492849(void)

{
  if (DAT_14cb4c4e0 == 0) {
    FUN_14073dd9a(&DAT_14cb4c4e0,&PTR_LAB_14aef2dd8);
  }
  return DAT_14cb4c4e0;
}



// FUNCTION 146492878 FUN_146492878 body=49 status=ok
// SIG undefined FUN_146492878(void)

longlong FUN_146492878(void)

{
  if (DAT_14cb4c508 == 0) {
    FUN_14073dd9a(&DAT_14cb4c508,&PTR_LAB_14aef3660);
  }
  return DAT_14cb4c508;
}



// FUNCTION 1464928a9 FUN_1464928a9 body=47 status=ok
// SIG undefined FUN_1464928a9(void)

longlong FUN_1464928a9(void)

{
  if (DAT_14cb4c4f0 == 0) {
    FUN_14000fc22(&DAT_14cb4c4f0,&PTR_FUN_14aef3120);
  }
  return DAT_14cb4c4f0;
}



// FUNCTION 1464928d8 FUN_1464928d8 body=47 status=ok
// SIG undefined FUN_1464928d8(void)

longlong FUN_1464928d8(void)

{
  if (DAT_14cb4c4f8 == 0) {
    FUN_14000fc22(&DAT_14cb4c4f8,&PTR_FUN_14aef3170);
  }
  return DAT_14cb4c4f8;
}



// FUNCTION 146492908 FUN_146492908 body=34 status=ok
// SIG undefined FUN_146492908(void)

void FUN_146492908(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14595beea();
  FUN_14069c8d6(uVar1,&PTR_s_InvertSelection_14aef31b0,2);
  return;
}



// FUNCTION 14649292a FUN_14649292a body=89 status=ok
// SIG undefined FUN_14649292a(void)

void FUN_14649292a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef36a0;
  *(undefined4 *)(puVar1 + 0x15) = 0x10101;
  *(undefined1 *)((longlong)puVar1 + 0xac) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xad) = 0x1010101;
  *(undefined2 *)((longlong)puVar1 + 0xb1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xb3) = 0x1010101;
  puVar1[0x17] = 0;
  return;
}



// FUNCTION 146492988 FUN_146492988 body=47 status=ok
// SIG undefined FUN_146492988(void)

longlong FUN_146492988(void)

{
  if (DAT_14cb4c518 == 0) {
    FUN_1409ce572(&DAT_14cb4c518,&PTR_FUN_14aef39b0);
  }
  return DAT_14cb4c518;
}



// FUNCTION 1464929c4 FUN_1464929c4 body=47 status=ok
// SIG undefined FUN_1464929c4(void)

longlong FUN_1464929c4(void)

{
  if (DAT_14cb4c568 == 0) {
    FUN_14073dd9a(&DAT_14cb4c568,&PTR_LAB_14aef3e58);
  }
  return DAT_14cb4c568;
}



// FUNCTION 1464929f3 FUN_1464929f3 body=47 status=ok
// SIG undefined FUN_1464929f3(void)

longlong FUN_1464929f3(void)

{
  if (DAT_14cb4c580 == 0) {
    FUN_14073dd9a(&DAT_14cb4c580,&PTR_LAB_14aef41b8);
  }
  return DAT_14cb4c580;
}



// FUNCTION 146492a22 FUN_146492a22 body=35 status=ok
// SIG undefined FUN_146492a22(void)

void FUN_146492a22(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1457f5c70(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef4540;
  return;
}



// FUNCTION 146492a45 FUN_146492a45 body=49 status=ok
// SIG undefined FUN_146492a45(void)

longlong FUN_146492a45(void)

{
  if (DAT_14cb4c598 == 0) {
    FUN_14073dd9a(&DAT_14cb4c598,&PTR_LAB_14aef44f8);
  }
  return DAT_14cb4c598;
}



// FUNCTION 146492a76 FUN_146492a76 body=35 status=ok
// SIG undefined FUN_146492a76(void)

void FUN_146492a76(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef4930;
  return;
}



// FUNCTION 146492a99 FUN_146492a99 body=47 status=ok
// SIG undefined FUN_146492a99(void)

longlong FUN_146492a99(void)

{
  if (DAT_14cb4c5b0 == 0) {
    FUN_14073dd9a(&DAT_14cb4c5b0,&PTR_LAB_14aef48e8);
  }
  return DAT_14cb4c5b0;
}



// FUNCTION 146492ac8 FUN_146492ac8 body=82 status=ok
// SIG undefined FUN_146492ac8(void)

void FUN_146492ac8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef4e40;
  *(undefined4 *)(puVar1 + 0x15) = 0x80;
  *(undefined2 *)((longlong)puVar1 + 0xac) = 0;
  puVar1[0x16] = 0x3ff0000000000000;
  puVar1[0x17] = 0;
  return;
}



// FUNCTION 146492b1f FUN_146492b1f body=47 status=ok
// SIG undefined FUN_146492b1f(void)

longlong FUN_146492b1f(void)

{
  if (DAT_14cb4c5c8 == 0) {
    FUN_14073dd9a(&DAT_14cb4c5c8,&PTR_LAB_14aef4df8);
  }
  return DAT_14cb4c5c8;
}



// FUNCTION 146492b4e FUN_146492b4e body=35 status=ok
// SIG undefined FUN_146492b4e(void)

void FUN_146492b4e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e6d9f4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef5300;
  return;
}



// FUNCTION 146492b71 FUN_146492b71 body=49 status=ok
// SIG undefined FUN_146492b71(void)

longlong FUN_146492b71(void)

{
  if (DAT_14cb4c5f0 == 0) {
    FUN_14073dd9a(&DAT_14cb4c5f0,&PTR_LAB_14aef52b8);
  }
  return DAT_14cb4c5f0;
}



// FUNCTION 146492ba2 FUN_146492ba2 body=47 status=ok
// SIG undefined FUN_146492ba2(void)

longlong FUN_146492ba2(void)

{
  if (DAT_14cb4c600 == 0) {
    FUN_1409ce572(&DAT_14cb4c600,&PTR_FUN_14aef5640);
  }
  return DAT_14cb4c600;
}



// FUNCTION 146492bd6 FUN_146492bd6 body=47 status=ok
// SIG undefined FUN_146492bd6(void)

longlong FUN_146492bd6(void)

{
  if (DAT_14cb4c620 == 0) {
    FUN_14073dd9a(&DAT_14cb4c620,&PTR_LAB_14aef5828);
  }
  return DAT_14cb4c620;
}



// FUNCTION 146492c05 FUN_146492c05 body=42 status=ok
// SIG undefined FUN_146492c05(void)

void FUN_146492c05(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef5c50;
  *(undefined1 *)(puVar1 + 0x15) = 1;
  return;
}



// FUNCTION 146492c34 FUN_146492c34 body=47 status=ok
// SIG undefined FUN_146492c34(void)

longlong FUN_146492c34(void)

{
  if (DAT_14cb4c638 == 0) {
    FUN_14073dd9a(&DAT_14cb4c638,&PTR_LAB_14aef5c08);
  }
  return DAT_14cb4c638;
}



// FUNCTION 146492c63 FUN_146492c63 body=42 status=ok
// SIG undefined FUN_146492c63(void)

void FUN_146492c63(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef6010;
  *(undefined1 *)(puVar1 + 0x15) = 1;
  return;
}



// FUNCTION 146492c92 FUN_146492c92 body=47 status=ok
// SIG undefined FUN_146492c92(void)

longlong FUN_146492c92(void)

{
  if (DAT_14cb4c650 == 0) {
    FUN_14073dd9a(&DAT_14cb4c650,&PTR_LAB_14aef5fc8);
  }
  return DAT_14cb4c650;
}



// FUNCTION 146492cc1 FUN_146492cc1 body=125 status=ok
// SIG undefined FUN_146492cc1(void)

void FUN_146492cc1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fe66fa(puVar1);
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *puVar1 = &PTR_FUN_14aef6650;
  puVar1[5] = &PTR_FUN_14aef6a60;
  puVar1[0x13] = &PTR_FUN_14aef6a80;
  puVar1[0x17] = &PTR_FUN_14aef6ab0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  return;
}



// FUNCTION 146492d3e FUN_146492d3e body=49 status=ok
// SIG undefined FUN_146492d3e(void)

longlong FUN_146492d3e(void)

{
  if (DAT_14cb4c668 == 0) {
    FUN_14073dd9a(&DAT_14cb4c668,&PTR_LAB_14aef6608);
  }
  return DAT_14cb4c668;
}



// FUNCTION 146492d6f FUN_146492d6f body=35 status=ok
// SIG undefined FUN_146492d6f(void)

void FUN_146492d6f(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e6d9f4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef6d70;
  return;
}



// FUNCTION 146492d92 FUN_146492d92 body=49 status=ok
// SIG undefined FUN_146492d92(void)

longlong FUN_146492d92(void)

{
  if (DAT_14cb4c8b0 == 0) {
    FUN_14073dd9a(&DAT_14cb4c8b0,&PTR_LAB_14aef9b58);
  }
  return DAT_14cb4c8b0;
}



// FUNCTION 146492dc3 FUN_146492dc3 body=47 status=ok
// SIG undefined FUN_146492dc3(void)

longlong FUN_146492dc3(void)

{
  if (DAT_14cb4c680 == 0) {
    FUN_14073dd9a(&DAT_14cb4c680,&PTR_LAB_14aef6d28);
  }
  return DAT_14cb4c680;
}



// FUNCTION 146492df2 FUN_146492df2 body=49 status=ok
// SIG undefined FUN_146492df2(void)

longlong FUN_146492df2(void)

{
  if (DAT_14cb4c8c8 == 0) {
    FUN_14073dd9a(&DAT_14cb4c8c8,&PTR_LAB_14aef9fb8);
  }
  return DAT_14cb4c8c8;
}



// FUNCTION 146492e23 FUN_146492e23 body=47 status=ok
// SIG undefined FUN_146492e23(void)

longlong FUN_146492e23(void)

{
  if (DAT_14cb4c698 == 0) {
    FUN_14073dd9a(&DAT_14cb4c698,&PTR_LAB_14aef70e8);
  }
  return DAT_14cb4c698;
}



// FUNCTION 146492e52 FUN_146492e52 body=139 status=ok
// SIG undefined FUN_146492e52(void)

void FUN_146492e52(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fe66fa(puVar1);
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *puVar1 = &PTR_FUN_14aef7740;
  puVar1[5] = &PTR_FUN_14aef7b60;
  puVar1[0x13] = &PTR_FUN_14aef7b80;
  puVar1[0x17] = &PTR_FUN_14aef7bb0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  return;
}



// FUNCTION 146492edd FUN_146492edd body=49 status=ok
// SIG undefined FUN_146492edd(void)

longlong FUN_146492edd(void)

{
  if (DAT_14cb4c6f0 == 0) {
    FUN_14073dd9a(&DAT_14cb4c6f0,&PTR_LAB_14aef76f8);
  }
  return DAT_14cb4c6f0;
}



// FUNCTION 146492f0e FUN_146492f0e body=35 status=ok
// SIG undefined FUN_146492f0e(void)

void FUN_146492f0e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1457ff23c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef7cb0;
  return;
}



// FUNCTION 146492f31 FUN_146492f31 body=49 status=ok
// SIG undefined FUN_146492f31(void)

longlong FUN_146492f31(void)

{
  if (DAT_14cb4c708 == 0) {
    FUN_14073dd9a(&DAT_14cb4c708,&PTR_LAB_14aef7c68);
  }
  return DAT_14cb4c708;
}



// FUNCTION 146492f62 FUN_146492f62 body=35 status=ok
// SIG undefined FUN_146492f62(void)

void FUN_146492f62(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e6d9f4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef8070;
  return;
}



// FUNCTION 146492f85 FUN_146492f85 body=78 status=ok
// SIG undefined FUN_146492f85(void)

void FUN_146492f85(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fe66fa(puVar1);
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *puVar1 = &PTR_FUN_14aef8430;
  puVar1[5] = &PTR_FUN_14aef87d0;
  puVar1[0x13] = &PTR_FUN_14aef87f0;
  puVar1[0x16] = 0;
  return;
}



// FUNCTION 146492fd3 FUN_146492fd3 body=35 status=ok
// SIG undefined FUN_146492fd3(void)

void FUN_146492fd3(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e6d9f4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef8920;
  return;
}



// FUNCTION 146492ff6 FUN_146492ff6 body=49 status=ok
// SIG undefined FUN_146492ff6(void)

longlong FUN_146492ff6(void)

{
  if (DAT_14cb4c7d0 == 0) {
    FUN_14073dd9a(&DAT_14cb4c7d0,&PTR_LAB_14aef88d8);
  }
  return DAT_14cb4c7d0;
}



// FUNCTION 146493027 FUN_146493027 body=99 status=ok
// SIG undefined FUN_146493027(void)

void FUN_146493027(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fe66fa(puVar1);
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *puVar1 = &PTR_FUN_14aef8dc0;
  puVar1[5] = &PTR_FUN_14aef9190;
  puVar1[0x13] = &PTR_FUN_14aef91b0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  return;
}



// FUNCTION 14649308a FUN_14649308a body=49 status=ok
// SIG undefined FUN_14649308a(void)

longlong FUN_14649308a(void)

{
  if (DAT_14cb4c7e8 == 0) {
    FUN_14073dd9a(&DAT_14cb4c7e8,&PTR_LAB_14aef8d78);
  }
  return DAT_14cb4c7e8;
}



// FUNCTION 1464930bb FUN_1464930bb body=35 status=ok
// SIG undefined FUN_1464930bb(void)

void FUN_1464930bb(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e6d9f4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef92e0;
  return;
}



// FUNCTION 1464930de FUN_1464930de body=49 status=ok
// SIG undefined FUN_1464930de(void)

longlong FUN_1464930de(void)

{
  if (DAT_14cb4c840 == 0) {
    FUN_14073dd9a(&DAT_14cb4c840,&PTR_LAB_14aef9298);
  }
  return DAT_14cb4c840;
}



// FUNCTION 14649310f FUN_14649310f body=68 status=ok
// SIG undefined FUN_14649310f(void)

void FUN_14649310f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141249ec6(puVar1);
  *puVar1 = &PTR_FUN_14aef96a0;
  puVar1[5] = &PTR_FUN_14aef9a50;
  puVar1[0x13] = &PTR_FUN_14aef9a70;
  puVar1[0x15] = 0;
  return;
}



// FUNCTION 146493153 FUN_146493153 body=49 status=ok
// SIG undefined FUN_146493153(void)

longlong FUN_146493153(void)

{
  if (DAT_14cb4c858 == 0) {
    FUN_14073dd9a(&DAT_14cb4c858,&PTR_LAB_14aef9658);
  }
  return DAT_14cb4c858;
}



// FUNCTION 146493184 FUN_146493184 body=35 status=ok
// SIG undefined FUN_146493184(void)

void FUN_146493184(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e6d9f4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef9ba0;
  return;
}



// FUNCTION 1464931af FUN_1464931af body=62 status=ok
// SIG undefined FUN_1464931af(void)

void FUN_1464931af(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14aefa530;
  puVar1[5] = &PTR_FUN_14aefa7e0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 2;
  return;
}



// FUNCTION 1464931f3 FUN_1464931f3 body=47 status=ok
// SIG undefined FUN_1464931f3(void)

longlong FUN_1464931f3(void)

{
  if (DAT_14cb4c920 == 0) {
    FUN_14073dd9a(&DAT_14cb4c920,&PTR_LAB_14aefa4e8);
  }
  return DAT_14cb4c920;
}



// FUNCTION 146493222 FUN_146493222 body=47 status=ok
// SIG undefined FUN_146493222(void)

longlong FUN_146493222(void)

{
  if (DAT_14cb4c940 == 0) {
    FUN_14073dd9a(&DAT_14cb4c940,&PTR_LAB_14aefaa00);
  }
  return DAT_14cb4c940;
}



// FUNCTION 146493251 FUN_146493251 body=47 status=ok
// SIG undefined FUN_146493251(void)

longlong FUN_146493251(void)

{
  if (DAT_14cb4c930 == 0) {
    FUN_14000fc22(&DAT_14cb4c930,&PTR_FUN_14aefa8f8);
  }
  return DAT_14cb4c930;
}



// FUNCTION 146493280 FUN_146493280 body=34 status=ok
// SIG undefined FUN_146493280(void)

void FUN_146493280(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145995ee0();
  FUN_14069c8d6(uVar1,&PTR_s_SetDynamicMesh_14aefa940,1);
  return;
}



// FUNCTION 1464932a7 FUN_1464932a7 body=49 status=ok
// SIG undefined FUN_1464932a7(void)

longlong FUN_1464932a7(void)

{
  if (DAT_14cb4c978 == 0) {
    FUN_14073dd9a(&DAT_14cb4c978,&PTR_LAB_14aefc3d0);
  }
  return DAT_14cb4c978;
}



// FUNCTION 1464932d8 FUN_1464932d8 body=47 status=ok
// SIG undefined FUN_1464932d8(void)

longlong FUN_1464932d8(void)

{
  if (DAT_14cb4c958 == 0) {
    FUN_14000fc22(&DAT_14cb4c958,&PTR_FUN_14aefc110);
  }
  return DAT_14cb4c958;
}



// FUNCTION 146493307 FUN_146493307 body=47 status=ok
// SIG undefined FUN_146493307(void)

longlong FUN_146493307(void)

{
  if (DAT_14cb4c960 == 0) {
    FUN_14000fc22(&DAT_14cb4c960,&PTR_FUN_14aefc150);
  }
  return DAT_14cb4c960;
}



// FUNCTION 146493336 FUN_146493336 body=47 status=ok
// SIG undefined FUN_146493336(void)

longlong FUN_146493336(void)

{
  if (DAT_14cb4c968 == 0) {
    FUN_14000fc22(&DAT_14cb4c968,&PTR_FUN_14aefc1f8);
  }
  return DAT_14cb4c968;
}



// FUNCTION 146493366 FUN_146493366 body=34 status=ok
// SIG undefined FUN_146493366(void)

void FUN_146493366(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141153e08();
  FUN_14069c8d6(uVar1,&PTR_s_AddLines_14aefc240,3);
  return;
}



// FUNCTION 14649338e FUN_14649338e body=40 status=ok
// SIG undefined FUN_14649338e(void)

undefined8 FUN_14649338e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464933b6 FUN_1464933b6 body=40 status=ok
// SIG undefined FUN_1464933b6(void)

undefined8 FUN_1464933b6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464933de FUN_1464933de body=40 status=ok
// SIG undefined FUN_1464933de(void)

undefined8 FUN_1464933de(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146493406 FUN_146493406 body=40 status=ok
// SIG undefined FUN_146493406(void)

undefined8 FUN_146493406(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14649342e FUN_14649342e body=40 status=ok
// SIG undefined FUN_14649342e(void)

undefined8 FUN_14649342e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146493456 FUN_146493456 body=40 status=ok
// SIG undefined FUN_146493456(void)

undefined8 FUN_146493456(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14649347e FUN_14649347e body=40 status=ok
// SIG undefined FUN_14649347e(void)

undefined8 FUN_14649347e(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464934a6 FUN_1464934a6 body=40 status=ok
// SIG undefined FUN_1464934a6(void)

undefined8 FUN_1464934a6(undefined8 param_1,int param_2)

{
  FUN_1456c3a46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464934ce FUN_1464934ce body=40 status=ok
// SIG undefined FUN_1464934ce(void)

undefined8 FUN_1464934ce(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464934f6 FUN_1464934f6 body=40 status=ok
// SIG undefined FUN_1464934f6(void)

undefined8 FUN_1464934f6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14649351e FUN_14649351e body=40 status=ok
// SIG undefined FUN_14649351e(void)

undefined8 FUN_14649351e(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146493546 FUN_146493546 body=40 status=ok
// SIG undefined FUN_146493546(void)

undefined8 FUN_146493546(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14649356e FUN_14649356e body=40 status=ok
// SIG undefined FUN_14649356e(void)

undefined8 FUN_14649356e(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146493596 FUN_146493596 body=40 status=ok
// SIG undefined FUN_146493596(void)

undefined8 FUN_146493596(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464935be FUN_1464935be body=40 status=ok
// SIG undefined FUN_1464935be(void)

undefined8 FUN_1464935be(undefined8 param_1,int param_2)

{
  FUN_1458506c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464935e6 FUN_1464935e6 body=40 status=ok
// SIG undefined FUN_1464935e6(void)

undefined8 FUN_1464935e6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14649360e FUN_14649360e body=40 status=ok
// SIG undefined FUN_14649360e(void)

undefined8 FUN_14649360e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146493636 FUN_146493636 body=40 status=ok
// SIG undefined FUN_146493636(void)

undefined8 FUN_146493636(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14649365e FUN_14649365e body=40 status=ok
// SIG undefined FUN_14649365e(void)

undefined8 FUN_14649365e(undefined8 param_1,int param_2)

{
  FUN_1411412a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146493686 FUN_146493686 body=40 status=ok
// SIG undefined FUN_146493686(void)

undefined8 FUN_146493686(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464936ae FUN_1464936ae body=40 status=ok
// SIG undefined FUN_1464936ae(void)

undefined8 FUN_1464936ae(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464936d6 FUN_1464936d6 body=40 status=ok
// SIG undefined FUN_1464936d6(void)

undefined8 FUN_1464936d6(undefined8 param_1,int param_2)

{
  thunk_FUN_1411412f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464936fe FUN_1464936fe body=40 status=ok
// SIG undefined FUN_1464936fe(void)

undefined8 FUN_1464936fe(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146493726 FUN_146493726 body=40 status=ok
// SIG undefined FUN_146493726(void)

undefined8 FUN_146493726(undefined8 param_1,int param_2)

{
  FUN_145865dac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14649374e FUN_14649374e body=29 status=ok
// SIG undefined FUN_14649374e(void)

undefined8 FUN_14649374e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14649376c FUN_14649376c body=29 status=ok
// SIG undefined FUN_14649376c(void)

undefined8 FUN_14649376c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14649378a FUN_14649378a body=24 status=ok
// SIG undefined FUN_14649378a(void)

bool FUN_14649378a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1464937a7 FUN_1464937a7 body=47 status=ok
// SIG undefined FUN_1464937a7(void)

longlong FUN_1464937a7(void)

{
  if (DAT_14cb4c9f8 == 0) {
    FUN_14073dd9a(&DAT_14cb4c9f8,&PTR_LAB_14aeffe88);
  }
  return DAT_14cb4c9f8;
}



// FUNCTION 1464937e6 FUN_1464937e6 body=47 status=ok
// SIG undefined FUN_1464937e6(void)

longlong FUN_1464937e6(void)

{
  if (DAT_14cb4ca10 == 0) {
    FUN_14073dd9a(&DAT_14cb4ca10,&PTR_LAB_14af00278);
  }
  return DAT_14cb4ca10;
}



// FUNCTION 146493815 FUN_146493815 body=47 status=ok
// SIG undefined FUN_146493815(void)

longlong FUN_146493815(void)

{
  if (DAT_14cb4ca28 == 0) {
    FUN_14073dd9a(&DAT_14cb4ca28,&PTR_LAB_14af00d78);
  }
  return DAT_14cb4ca28;
}



// FUNCTION 146493849 FUN_146493849 body=47 status=ok
// SIG undefined FUN_146493849(void)

longlong FUN_146493849(void)

{
  if (DAT_14cb4ca40 == 0) {
    FUN_14073dd9a(&DAT_14cb4ca40,&PTR_LAB_14af01ad8);
  }
  return DAT_14cb4ca40;
}



// FUNCTION 146493883 FUN_146493883 body=47 status=ok
// SIG undefined FUN_146493883(void)

longlong FUN_146493883(void)

{
  if (DAT_14cb4ca58 == 0) {
    FUN_14073dd9a(&DAT_14cb4ca58,&PTR_LAB_14af02768);
  }
  return DAT_14cb4ca58;
}



// FUNCTION 1464938b2 FUN_1464938b2 body=40 status=ok
// SIG undefined FUN_1464938b2(void)

void FUN_1464938b2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = FUN_14007ca06();
  FUN_14588cc1a(param_1,uVar1);
  *param_1 = &PTR_FUN_14af02b80;
  return;
}



// FUNCTION 1464938df FUN_1464938df body=47 status=ok
// SIG undefined FUN_1464938df(void)

longlong FUN_1464938df(void)

{
  if (DAT_14cb4ca70 == 0) {
    FUN_14073dd9a(&DAT_14cb4ca70,&PTR_LAB_14af02b38);
  }
  return DAT_14cb4ca70;
}



// FUNCTION 14649390e FUN_14649390e body=47 status=ok
// SIG undefined FUN_14649390e(void)

longlong FUN_14649390e(void)

{
  if (DAT_14cb4ca80 == 0) {
    FUN_14000fc22(&DAT_14cb4ca80,&PTR_FUN_14af03270);
  }
  return DAT_14cb4ca80;
}



// FUNCTION 14649393d FUN_14649393d body=47 status=ok
// SIG undefined FUN_14649393d(void)

longlong FUN_14649393d(void)

{
  if (DAT_14cb4ca88 == 0) {
    FUN_14000fc22(&DAT_14cb4ca88,&PTR_FUN_14af03360);
  }
  return DAT_14cb4ca88;
}



// FUNCTION 14649396c FUN_14649396c body=47 status=ok
// SIG undefined FUN_14649396c(void)

longlong FUN_14649396c(void)

{
  if (DAT_14cb4ca90 == 0) {
    FUN_14000fc22(&DAT_14cb4ca90,&PTR_FUN_14af03450);
  }
  return DAT_14cb4ca90;
}



// FUNCTION 14649399b FUN_14649399b body=47 status=ok
// SIG undefined FUN_14649399b(void)

longlong FUN_14649399b(void)

{
  if (DAT_14cb4ca98 == 0) {
    FUN_14000fc22(&DAT_14cb4ca98,&PTR_FUN_14af03540);
  }
  return DAT_14cb4ca98;
}



// FUNCTION 1464939ca FUN_1464939ca body=47 status=ok
// SIG undefined FUN_1464939ca(void)

longlong FUN_1464939ca(void)

{
  if (DAT_14cb4caa0 == 0) {
    FUN_14000fc22(&DAT_14cb4caa0,&PTR_FUN_14af03590);
  }
  return DAT_14cb4caa0;
}



// FUNCTION 1464939f9 FUN_1464939f9 body=47 status=ok
// SIG undefined FUN_1464939f9(void)

longlong FUN_1464939f9(void)

{
  if (DAT_14cb4caa8 == 0) {
    FUN_14000fc22(&DAT_14cb4caa8,&PTR_FUN_14af03670);
  }
  return DAT_14cb4caa8;
}



// FUNCTION 146493a28 FUN_146493a28 body=47 status=ok
// SIG undefined FUN_146493a28(void)

longlong FUN_146493a28(void)

{
  if (DAT_14cb4cab0 == 0) {
    FUN_14000fc22(&DAT_14cb4cab0,&PTR_FUN_14af03750);
  }
  return DAT_14cb4cab0;
}



// FUNCTION 146493a57 FUN_146493a57 body=47 status=ok
// SIG undefined FUN_146493a57(void)

longlong FUN_146493a57(void)

{
  if (DAT_14cb4cab8 == 0) {
    FUN_14000fc22(&DAT_14cb4cab8,&PTR_FUN_14af03830);
  }
  return DAT_14cb4cab8;
}



// FUNCTION 146493a86 FUN_146493a86 body=47 status=ok
// SIG undefined FUN_146493a86(void)

longlong FUN_146493a86(void)

{
  if (DAT_14cb4cac0 == 0) {
    FUN_14000fc22(&DAT_14cb4cac0,&PTR_FUN_14af038c8);
  }
  return DAT_14cb4cac0;
}



// FUNCTION 146493ab5 FUN_146493ab5 body=47 status=ok
// SIG undefined FUN_146493ab5(void)

longlong FUN_146493ab5(void)

{
  if (DAT_14cb4cac8 == 0) {
    FUN_14000fc22(&DAT_14cb4cac8,&PTR_FUN_14af03978);
  }
  return DAT_14cb4cac8;
}



// FUNCTION 146493ae4 FUN_146493ae4 body=47 status=ok
// SIG undefined FUN_146493ae4(void)

longlong FUN_146493ae4(void)

{
  if (DAT_14cb4cad0 == 0) {
    FUN_14000fc22(&DAT_14cb4cad0,&PTR_FUN_14af03a18);
  }
  return DAT_14cb4cad0;
}



// FUNCTION 146493b13 FUN_146493b13 body=47 status=ok
// SIG undefined FUN_146493b13(void)

longlong FUN_146493b13(void)

{
  if (DAT_14cb4cad8 == 0) {
    FUN_14000fc22(&DAT_14cb4cad8,&PTR_FUN_14af03ab8);
  }
  return DAT_14cb4cad8;
}



// FUNCTION 146493b42 FUN_146493b42 body=47 status=ok
// SIG undefined FUN_146493b42(void)

longlong FUN_146493b42(void)

{
  if (DAT_14cb4cae0 == 0) {
    FUN_14000fc22(&DAT_14cb4cae0,&PTR_FUN_14af03bd8);
  }
  return DAT_14cb4cae0;
}



// FUNCTION 146493b71 FUN_146493b71 body=47 status=ok
// SIG undefined FUN_146493b71(void)

longlong FUN_146493b71(void)

{
  if (DAT_14cb4cae8 == 0) {
    FUN_14000fc22(&DAT_14cb4cae8,&PTR_FUN_14af03cf8);
  }
  return DAT_14cb4cae8;
}



// FUNCTION 146493ba0 FUN_146493ba0 body=47 status=ok
// SIG undefined FUN_146493ba0(void)

longlong FUN_146493ba0(void)

{
  if (DAT_14cb4caf0 == 0) {
    FUN_14000fc22(&DAT_14cb4caf0,&PTR_FUN_14af03e20);
  }
  return DAT_14cb4caf0;
}



// FUNCTION 146493bcf FUN_146493bcf body=47 status=ok
// SIG undefined FUN_146493bcf(void)

longlong FUN_146493bcf(void)

{
  if (DAT_14cb4caf8 == 0) {
    FUN_14000fc22(&DAT_14cb4caf8,&PTR_FUN_14af03ec0);
  }
  return DAT_14cb4caf8;
}



// FUNCTION 146493bfe FUN_146493bfe body=47 status=ok
// SIG undefined FUN_146493bfe(void)

longlong FUN_146493bfe(void)

{
  if (DAT_14cb4cb00 == 0) {
    FUN_14000fc22(&DAT_14cb4cb00,&PTR_FUN_14af03f60);
  }
  return DAT_14cb4cb00;
}



// FUNCTION 146493c2d FUN_146493c2d body=47 status=ok
// SIG undefined FUN_146493c2d(void)

longlong FUN_146493c2d(void)

{
  if (DAT_14cb4cb08 == 0) {
    FUN_14000fc22(&DAT_14cb4cb08,&PTR_FUN_14af040a0);
  }
  return DAT_14cb4cb08;
}



// FUNCTION 146493c5c FUN_146493c5c body=47 status=ok
// SIG undefined FUN_146493c5c(void)

longlong FUN_146493c5c(void)

{
  if (DAT_14cb4cb10 == 0) {
    FUN_14000fc22(&DAT_14cb4cb10,&PTR_FUN_14af041d0);
  }
  return DAT_14cb4cb10;
}



// FUNCTION 146493c8b FUN_146493c8b body=47 status=ok
// SIG undefined FUN_146493c8b(void)

longlong FUN_146493c8b(void)

{
  if (DAT_14cb4cb18 == 0) {
    FUN_14000fc22(&DAT_14cb4cb18,&PTR_FUN_14af04300);
  }
  return DAT_14cb4cb18;
}



// FUNCTION 146493cba FUN_146493cba body=47 status=ok
// SIG undefined FUN_146493cba(void)

longlong FUN_146493cba(void)

{
  if (DAT_14cb4cb20 == 0) {
    FUN_14000fc22(&DAT_14cb4cb20,&PTR_FUN_14af04430);
  }
  return DAT_14cb4cb20;
}



// FUNCTION 146493cea FUN_146493cea body=34 status=ok
// SIG undefined FUN_146493cea(void)

void FUN_146493cea(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1410fb3ea();
  FUN_14069c8d6(uVar1,&PTR_s_AddLineSet_14af04470,0x15);
  return;
}



// FUNCTION 146493d18 FUN_146493d18 body=55 status=ok
// SIG undefined FUN_146493d18(void)

void FUN_146493d18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cb48 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cb48 = FUN_140002ddd(FUN_146493d4f,uVar1,L"RenderableTriangleVertex");
  }
  return;
}



// FUNCTION 146493d4f FUN_146493d4f body=49 status=ok
// SIG undefined FUN_146493d4f(void)

longlong FUN_146493d4f(void)

{
  if (DAT_14cb4cb40 == 0) {
    FUN_14086a14e(&DAT_14cb4cb40,&PTR_FUN_14af04f20);
  }
  return DAT_14cb4cb40;
}



// FUNCTION 146493d80 FUN_146493d80 body=48 status=ok
// SIG undefined FUN_146493d80(void)

void FUN_146493d80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14af0faa0;
  return;
}



// FUNCTION 146493db0 FUN_146493db0 body=55 status=ok
// SIG undefined FUN_146493db0(void)

void FUN_146493db0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cb60 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cb60 = FUN_140002ddd(FUN_146493de7,uVar1,L"RenderableTriangle");
  }
  return;
}



// FUNCTION 146493de7 FUN_146493de7 body=47 status=ok
// SIG undefined FUN_146493de7(void)

longlong FUN_146493de7(void)

{
  if (DAT_14cb4cb58 == 0) {
    FUN_14086a14e(&DAT_14cb4cb58,&PTR_FUN_14af050d8);
  }
  return DAT_14cb4cb58;
}



// FUNCTION 146493e16 FUN_146493e16 body=48 status=ok
// SIG undefined FUN_146493e16(void)

void FUN_146493e16(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000e0;
  *puVar1 = &PTR_FUN_14af0fc00;
  return;
}



// FUNCTION 146493e4b FUN_146493e4b body=47 status=ok
// SIG undefined FUN_146493e4b(void)

longlong FUN_146493e4b(void)

{
  if (DAT_14cb4cb78 == 0) {
    FUN_14073dd9a(&DAT_14cb4cb78,&PTR_LAB_14af051e8);
  }
  return DAT_14cb4cb78;
}



// FUNCTION 146493e7a FUN_146493e7a body=47 status=ok
// SIG undefined FUN_146493e7a(void)

longlong FUN_146493e7a(void)

{
  if (DAT_14cb4cb88 == 0) {
    FUN_1409ce572(&DAT_14cb4cb88,&PTR_FUN_14af05eb0);
  }
  return DAT_14cb4cb88;
}



// FUNCTION 146493ea9 FUN_146493ea9 body=100 status=ok
// SIG undefined FUN_146493ea9(void)

void FUN_146493ea9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14af06120;
  *(undefined1 *)(puVar1 + 0x15) = 1;
  *(undefined8 *)((longlong)puVar1 + 0xac) = 0x3f80000000000001;
  puVar1[0x17] = 0x3ff0000000000000;
  puVar1[0x18] = 0x3fe0000000000000;
  *(undefined1 *)(puVar1 + 0x19) = 1;
  return;
}



// FUNCTION 146493f12 FUN_146493f12 body=47 status=ok
// SIG undefined FUN_146493f12(void)

longlong FUN_146493f12(void)

{
  if (DAT_14cb4cba8 == 0) {
    FUN_14073dd9a(&DAT_14cb4cba8,&PTR_LAB_14af060d8);
  }
  return DAT_14cb4cba8;
}



// FUNCTION 146493f47 FUN_146493f47 body=47 status=ok
// SIG undefined FUN_146493f47(void)

longlong FUN_146493f47(void)

{
  if (DAT_14cb4cbc0 == 0) {
    FUN_14073dd9a(&DAT_14cb4cbc0,&PTR_LAB_14af06648);
  }
  return DAT_14cb4cbc0;
}



// FUNCTION 146493f7b FUN_146493f7b body=47 status=ok
// SIG undefined FUN_146493f7b(void)

longlong FUN_146493f7b(void)

{
  if (DAT_14cb4cbd8 == 0) {
    FUN_14073dd9a(&DAT_14cb4cbd8,&PTR_LAB_14af069f8);
  }
  return DAT_14cb4cbd8;
}



// FUNCTION 146493faa FUN_146493faa body=47 status=ok
// SIG undefined FUN_146493faa(void)

longlong FUN_146493faa(void)

{
  if (DAT_14cb4cbf0 == 0) {
    FUN_14073dd9a(&DAT_14cb4cbf0,&PTR_LAB_14af07308);
  }
  return DAT_14cb4cbf0;
}



// FUNCTION 146493fdf FUN_146493fdf body=47 status=ok
// SIG undefined FUN_146493fdf(void)

longlong FUN_146493fdf(void)

{
  if (DAT_14cb4cc38 == 0) {
    FUN_14073dd9a(&DAT_14cb4cc38,&PTR_LAB_14af07da8);
  }
  return DAT_14cb4cc38;
}



// FUNCTION 146494013 FUN_146494013 body=47 status=ok
// SIG undefined FUN_146494013(void)

longlong FUN_146494013(void)

{
  if (DAT_14cb4cc50 == 0) {
    FUN_14073dd9a(&DAT_14cb4cc50,&PTR_LAB_14af08448);
  }
  return DAT_14cb4cc50;
}



// FUNCTION 146494047 FUN_146494047 body=47 status=ok
// SIG undefined FUN_146494047(void)

longlong FUN_146494047(void)

{
  if (DAT_14cb4ccc8 == 0) {
    FUN_14073dd9a(&DAT_14cb4ccc8,&PTR_LAB_14af08bc8);
  }
  return DAT_14cb4ccc8;
}



// FUNCTION 146494076 FUN_146494076 body=47 status=ok
// SIG undefined FUN_146494076(void)

longlong FUN_146494076(void)

{
  if (DAT_14cb4cce0 == 0) {
    FUN_14073dd9a(&DAT_14cb4cce0,&PTR_LAB_14af08f88);
  }
  return DAT_14cb4cce0;
}



// FUNCTION 1464940aa FUN_1464940aa body=47 status=ok
// SIG undefined FUN_1464940aa(void)

longlong FUN_1464940aa(void)

{
  if (DAT_14cb4ccf8 == 0) {
    FUN_14073dd9a(&DAT_14cb4ccf8,&PTR_LAB_14af09558);
  }
  return DAT_14cb4ccf8;
}



// FUNCTION 1464940df FUN_1464940df body=47 status=ok
// SIG undefined FUN_1464940df(void)

longlong FUN_1464940df(void)

{
  if (DAT_14cb4cd40 == 0) {
    FUN_14073dd9a(&DAT_14cb4cd40,&PTR_LAB_14af09bb8);
  }
  return DAT_14cb4cd40;
}



// FUNCTION 146494113 FUN_146494113 body=47 status=ok
// SIG undefined FUN_146494113(void)

longlong FUN_146494113(void)

{
  if (DAT_14cb4cd58 == 0) {
    FUN_14073dd9a(&DAT_14cb4cd58,&PTR_LAB_14af0a208);
  }
  return DAT_14cb4cd58;
}



// FUNCTION 146494147 FUN_146494147 body=47 status=ok
// SIG undefined FUN_146494147(void)

longlong FUN_146494147(void)

{
  if (DAT_14cb4cd70 == 0) {
    FUN_14073dd9a(&DAT_14cb4cd70,&PTR_LAB_14af0a798);
  }
  return DAT_14cb4cd70;
}



// FUNCTION 146494176 FUN_146494176 body=47 status=ok
// SIG undefined FUN_146494176(void)

longlong FUN_146494176(void)

{
  if (DAT_14cb4cd88 == 0) {
    FUN_14073dd9a(&DAT_14cb4cd88,&PTR_LAB_14af0ab58);
  }
  return DAT_14cb4cd88;
}



// FUNCTION 1464941a5 FUN_1464941a5 body=47 status=ok
// SIG undefined FUN_1464941a5(void)

longlong FUN_1464941a5(void)

{
  if (DAT_14cb4cd98 == 0) {
    FUN_1409ce572(&DAT_14cb4cd98,&PTR_FUN_14af0af30);
  }
  return DAT_14cb4cd98;
}



// FUNCTION 1464941d4 FUN_1464941d4 body=47 status=ok
// SIG undefined FUN_1464941d4(void)

longlong FUN_1464941d4(void)

{
  if (DAT_14cb4cdb0 == 0) {
    FUN_1409ce572(&DAT_14cb4cdb0,&PTR_FUN_14af0afc0);
  }
  return DAT_14cb4cdb0;
}



// FUNCTION 146494203 FUN_146494203 body=47 status=ok
// SIG undefined FUN_146494203(void)

longlong FUN_146494203(void)

{
  if (DAT_14cb4cdc8 == 0) {
    FUN_1409ce572(&DAT_14cb4cdc8,&PTR_FUN_14af0b040);
  }
  return DAT_14cb4cdc8;
}



// FUNCTION 146494232 FUN_146494232 body=49 status=ok
// SIG undefined FUN_146494232(void)

void FUN_146494232(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14af0b330;
  puVar1[0x15] = &DAT_100000001;
  puVar1[0x16] = 0x13f000000;
  return;
}



// FUNCTION 146494268 FUN_146494268 body=47 status=ok
// SIG undefined FUN_146494268(void)

longlong FUN_146494268(void)

{
  if (DAT_14cb4cde8 == 0) {
    FUN_14073dd9a(&DAT_14cb4cde8,&PTR_LAB_14af0b2e8);
  }
  return DAT_14cb4cde8;
}



// FUNCTION 146494297 FUN_146494297 body=47 status=ok
// SIG undefined FUN_146494297(void)

longlong FUN_146494297(void)

{
  if (DAT_14cb4ce00 == 0) {
    FUN_14073dd9a(&DAT_14cb4ce00,&PTR_LAB_14af0b8a8);
  }
  return DAT_14cb4ce00;
}



// FUNCTION 1464942cb FUN_1464942cb body=47 status=ok
// SIG undefined FUN_1464942cb(void)

longlong FUN_1464942cb(void)

{
  if (DAT_14cb4ce48 == 0) {
    FUN_14073dd9a(&DAT_14cb4ce48,&PTR_LAB_14af0be68);
  }
  return DAT_14cb4ce48;
}



// FUNCTION 1464942ff FUN_1464942ff body=47 status=ok
// SIG undefined FUN_1464942ff(void)

longlong FUN_1464942ff(void)

{
  if (DAT_14cb4ce60 == 0) {
    FUN_14073dd9a(&DAT_14cb4ce60,&PTR_LAB_14af0c478);
  }
  return DAT_14cb4ce60;
}



// FUNCTION 14649433e FUN_14649433e body=192 status=ok
// SIG undefined FUN_14649433e(void)

void FUN_14649433e(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14af12890;
  puVar1[3] = &DAT_14cb4ce88;
  puVar1[4] = FUN_1459cf6e6;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464943ff FUN_1464943ff body=46 status=ok
// SIG undefined FUN_1464943ff(void)

void FUN_1464943ff(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14af0cd00;
  *(undefined4 *)(puVar1 + 7) = 0x1000000;
  *(undefined1 *)((longlong)puVar1 + 0x3c) = 3;
  return;
}



// FUNCTION 14649442d FUN_14649442d body=47 status=ok
// SIG undefined FUN_14649442d(void)

longlong FUN_14649442d(void)

{
  if (DAT_14cb4ce98 == 0) {
    FUN_14073dd9a(&DAT_14cb4ce98,&PTR_LAB_14af0ccb8);
  }
  return DAT_14cb4ce98;
}



// FUNCTION 14649445c FUN_14649445c body=47 status=ok
// SIG undefined FUN_14649445c(void)

longlong FUN_14649445c(void)

{
  if (DAT_14cb4cea8 == 0) {
    FUN_1409ce572(&DAT_14cb4cea8,&PTR_FUN_14af0d020);
  }
  return DAT_14cb4cea8;
}



// FUNCTION 14649448b FUN_14649448b body=67 status=ok
// SIG undefined FUN_14649448b(void)

void FUN_14649448b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14af0d2c0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x15;
  puVar1[8] = 0x3f80000042c80000;
  *(undefined4 *)(puVar1 + 9) = 0x3f000000;
  return;
}



// FUNCTION 1464944ce FUN_1464944ce body=47 status=ok
// SIG undefined FUN_1464944ce(void)

longlong FUN_1464944ce(void)

{
  if (DAT_14cb4cec8 == 0) {
    FUN_14073dd9a(&DAT_14cb4cec8,&PTR_LAB_14af0d278);
  }
  return DAT_14cb4cec8;
}



// FUNCTION 1464944fd FUN_1464944fd body=49 status=ok
// SIG undefined FUN_1464944fd(void)

longlong FUN_1464944fd(void)

{
  if (DAT_14cb4ced8 == 0) {
    FUN_1409ce572(&DAT_14cb4ced8,&PTR_FUN_14af0d6b0);
  }
  return DAT_14cb4ced8;
}



// FUNCTION 14649452e FUN_14649452e body=47 status=ok
// SIG undefined FUN_14649452e(void)

longlong FUN_14649452e(void)

{
  if (DAT_14cb4cef0 == 0) {
    FUN_1409ce572(&DAT_14cb4cef0,&PTR_FUN_14af0d720);
  }
  return DAT_14cb4cef0;
}



// FUNCTION 14649455d FUN_14649455d body=47 status=ok
// SIG undefined FUN_14649455d(void)

longlong FUN_14649455d(void)

{
  if (DAT_14cb4cf08 == 0) {
    FUN_1409ce572(&DAT_14cb4cf08,&PTR_FUN_14af0d7b0);
  }
  return DAT_14cb4cf08;
}



// FUNCTION 14649458c FUN_14649458c body=55 status=ok
// SIG undefined FUN_14649458c(void)

void FUN_14649458c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cf28 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cf28 = FUN_140002ddd(FUN_1464945c3,uVar1,L"CreateMeshObjectParams");
  }
  return;
}



// FUNCTION 1464945c3 FUN_1464945c3 body=47 status=ok
// SIG undefined FUN_1464945c3(void)

longlong FUN_1464945c3(void)

{
  if (DAT_14cb4cf20 == 0) {
    FUN_14086a14e(&DAT_14cb4cf20,&PTR_FUN_14af0deb0);
  }
  return DAT_14cb4cf20;
}



// FUNCTION 1464945f2 FUN_1464945f2 body=48 status=ok
// SIG undefined FUN_1464945f2(void)

void FUN_1464945f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000670;
  *puVar1 = &PTR_FUN_14af10710;
  return;
}



// FUNCTION 146494622 FUN_146494622 body=55 status=ok
// SIG undefined FUN_146494622(void)

void FUN_146494622(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cf40 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cf40 = FUN_140002ddd(FUN_146494659,uVar1,L"CreateMeshObjectResult");
  }
  return;
}



// FUNCTION 146494659 FUN_146494659 body=47 status=ok
// SIG undefined FUN_146494659(void)

longlong FUN_146494659(void)

{
  if (DAT_14cb4cf38 == 0) {
    FUN_14086a14e(&DAT_14cb4cf38,&PTR_FUN_14af0e0d0);
  }
  return DAT_14cb4cf38;
}



// FUNCTION 146494688 FUN_146494688 body=48 status=ok
// SIG undefined FUN_146494688(void)

void FUN_146494688(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14af10870;
  return;
}



// FUNCTION 1464946b8 FUN_1464946b8 body=55 status=ok
// SIG undefined FUN_1464946b8(void)

void FUN_1464946b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cf58 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cf58 = FUN_140002ddd(FUN_1464946ef,uVar1,L"CreateTextureObjectParams");
  }
  return;
}



// FUNCTION 1464946ef FUN_1464946ef body=47 status=ok
// SIG undefined FUN_1464946ef(void)

longlong FUN_1464946ef(void)

{
  if (DAT_14cb4cf50 == 0) {
    FUN_14086a14e(&DAT_14cb4cf50,&PTR_FUN_14af0e340);
  }
  return DAT_14cb4cf50;
}



// FUNCTION 14649471e FUN_14649471e body=48 status=ok
// SIG undefined FUN_14649471e(void)

void FUN_14649471e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14af109d0;
  return;
}



// FUNCTION 14649474e FUN_14649474e body=55 status=ok
// SIG undefined FUN_14649474e(void)

void FUN_14649474e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cf70 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cf70 = FUN_140002ddd(FUN_146494785,uVar1,L"CreateTextureObjectResult");
  }
  return;
}



// FUNCTION 146494785 FUN_146494785 body=47 status=ok
// SIG undefined FUN_146494785(void)

longlong FUN_146494785(void)

{
  if (DAT_14cb4cf68 == 0) {
    FUN_14086a14e(&DAT_14cb4cf68,&PTR_FUN_14af0e4a8);
  }
  return DAT_14cb4cf68;
}



// FUNCTION 1464947b4 FUN_1464947b4 body=48 status=ok
// SIG undefined FUN_1464947b4(void)

void FUN_1464947b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14af10b30;
  return;
}



// FUNCTION 1464947e4 FUN_1464947e4 body=55 status=ok
// SIG undefined FUN_1464947e4(void)

void FUN_1464947e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cf88 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cf88 = FUN_140002ddd(FUN_14649481b,uVar1,L"CreateMaterialObjectParams");
  }
  return;
}



// FUNCTION 14649481b FUN_14649481b body=47 status=ok
// SIG undefined FUN_14649481b(void)

longlong FUN_14649481b(void)

{
  if (DAT_14cb4cf80 == 0) {
    FUN_14086a14e(&DAT_14cb4cf80,&PTR_FUN_14af0e670);
  }
  return DAT_14cb4cf80;
}



// FUNCTION 14649484a FUN_14649484a body=48 status=ok
// SIG undefined FUN_14649484a(void)

void FUN_14649484a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14af10c90;
  return;
}



// FUNCTION 14649487a FUN_14649487a body=55 status=ok
// SIG undefined FUN_14649487a(void)

void FUN_14649487a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cfa0 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cfa0 = FUN_140002ddd(FUN_1464948b1,uVar1,L"CreateMaterialObjectResult");
  }
  return;
}



// FUNCTION 1464948b1 FUN_1464948b1 body=47 status=ok
// SIG undefined FUN_1464948b1(void)

longlong FUN_1464948b1(void)

{
  if (DAT_14cb4cf98 == 0) {
    FUN_14086a14e(&DAT_14cb4cf98,&PTR_FUN_14af0e7d8);
  }
  return DAT_14cb4cf98;
}



// FUNCTION 1464948e0 FUN_1464948e0 body=48 status=ok
// SIG undefined FUN_1464948e0(void)

void FUN_1464948e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14af10df0;
  return;
}



// FUNCTION 146494910 FUN_146494910 body=55 status=ok
// SIG undefined FUN_146494910(void)

void FUN_146494910(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cfb8 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cfb8 = FUN_140002ddd(FUN_146494947,uVar1,L"CreateActorParams");
  }
  return;
}



// FUNCTION 146494947 FUN_146494947 body=47 status=ok
// SIG undefined FUN_146494947(void)

longlong FUN_146494947(void)

{
  if (DAT_14cb4cfb0 == 0) {
    FUN_14086a14e(&DAT_14cb4cfb0,&PTR_FUN_14af0e9d0);
  }
  return DAT_14cb4cfb0;
}



// FUNCTION 146494976 FUN_146494976 body=48 status=ok
// SIG undefined FUN_146494976(void)

void FUN_146494976(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000090;
  *puVar1 = &PTR_FUN_14af10f50;
  return;
}



// FUNCTION 1464949a6 FUN_1464949a6 body=55 status=ok
// SIG undefined FUN_1464949a6(void)

void FUN_1464949a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4cfd0 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4cfd0 = FUN_140002ddd(FUN_1464949dd,uVar1,L"CreateActorResult");
  }
  return;
}



// FUNCTION 1464949dd FUN_1464949dd body=47 status=ok
// SIG undefined FUN_1464949dd(void)

longlong FUN_1464949dd(void)

{
  if (DAT_14cb4cfc8 == 0) {
    FUN_14086a14e(&DAT_14cb4cfc8,&PTR_FUN_14af0eb20);
  }
  return DAT_14cb4cfc8;
}



// FUNCTION 146494a0c FUN_146494a0c body=48 status=ok
// SIG undefined FUN_146494a0c(void)

void FUN_146494a0c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14af110c0;
  return;
}



// FUNCTION 146494a3c FUN_146494a3c body=49 status=ok
// SIG undefined FUN_146494a3c(void)

longlong FUN_146494a3c(void)

{
  if (DAT_14cb4d008 == 0) {
    FUN_14073dd9a(&DAT_14cb4d008,&PTR_LAB_14af0f020);
  }
  return DAT_14cb4d008;
}



// FUNCTION 146494a6d FUN_146494a6d body=47 status=ok
// SIG undefined FUN_146494a6d(void)

longlong FUN_146494a6d(void)

{
  if (DAT_14cb4cfe0 == 0) {
    FUN_14000fc22(&DAT_14cb4cfe0,&PTR_FUN_14af0ec18);
  }
  return DAT_14cb4cfe0;
}



// FUNCTION 146494a9c FUN_146494a9c body=47 status=ok
// SIG undefined FUN_146494a9c(void)

longlong FUN_146494a9c(void)

{
  if (DAT_14cb4cfe8 == 0) {
    FUN_14000fc22(&DAT_14cb4cfe8,&PTR_FUN_14af0ed18);
  }
  return DAT_14cb4cfe8;
}



// FUNCTION 146494acb FUN_146494acb body=47 status=ok
// SIG undefined FUN_146494acb(void)

longlong FUN_146494acb(void)

{
  if (DAT_14cb4cff0 == 0) {
    FUN_14000fc22(&DAT_14cb4cff0,&PTR_FUN_14af0ee00);
  }
  return DAT_14cb4cff0;
}



// FUNCTION 146494afa FUN_146494afa body=47 status=ok
// SIG undefined FUN_146494afa(void)

longlong FUN_146494afa(void)

{
  if (DAT_14cb4cff8 == 0) {
    FUN_14000fc22(&DAT_14cb4cff8,&PTR_FUN_14af0eef8);
  }
  return DAT_14cb4cff8;
}



// FUNCTION 146494b2a FUN_146494b2a body=34 status=ok
// SIG undefined FUN_146494b2a(void)

void FUN_146494b2a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a54a94();
  FUN_14069c8d6(uVar1,&PTR_s_CreateMaterialObject_14af0ef40,4);
  return;
}



// FUNCTION 146494b4c FUN_146494b4c body=35 status=ok
// SIG undefined FUN_146494b4c(void)

void FUN_146494b4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14af0f060;
  return;
}



// FUNCTION 146494b70 FUN_146494b70 body=40 status=ok
// SIG undefined FUN_146494b70(void)

undefined8 FUN_146494b70(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494b98 FUN_146494b98 body=40 status=ok
// SIG undefined FUN_146494b98(void)

undefined8 FUN_146494b98(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494bc0 FUN_146494bc0 body=40 status=ok
// SIG undefined FUN_146494bc0(void)

undefined8 FUN_146494bc0(undefined8 param_1,int param_2)

{
  FUN_145c37a52();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494be8 FUN_146494be8 body=40 status=ok
// SIG undefined FUN_146494be8(void)

undefined8 FUN_146494be8(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494c10 FUN_146494c10 body=69 status=ok
// SIG undefined FUN_146494c10(void)

undefined8 * FUN_146494c10(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14af06690;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494c56 FUN_146494c56 body=52 status=ok
// SIG undefined FUN_146494c56(void)

longlong FUN_146494c56(longlong param_1,int param_2)

{
  FUN_14598232c(param_1 + 0x30);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494c8a FUN_146494c8a body=40 status=ok
// SIG undefined FUN_146494c8a(void)

undefined8 FUN_146494c8a(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494cb2 FUN_146494cb2 body=40 status=ok
// SIG undefined FUN_146494cb2(void)

undefined8 FUN_146494cb2(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494cda FUN_146494cda body=40 status=ok
// SIG undefined FUN_146494cda(void)

undefined8 FUN_146494cda(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494d02 FUN_146494d02 body=40 status=ok
// SIG undefined FUN_146494d02(void)

undefined8 FUN_146494d02(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494d2a FUN_146494d2a body=29 status=ok
// SIG undefined FUN_146494d2a(void)

undefined8 FUN_146494d2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494d48 FUN_146494d48 body=29 status=ok
// SIG undefined FUN_146494d48(void)

undefined8 FUN_146494d48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494d66 FUN_146494d66 body=29 status=ok
// SIG undefined FUN_146494d66(void)

undefined8 FUN_146494d66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494d84 FUN_146494d84 body=29 status=ok
// SIG undefined FUN_146494d84(void)

undefined8 FUN_146494d84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494da2 FUN_146494da2 body=29 status=ok
// SIG undefined FUN_146494da2(void)

undefined8 FUN_146494da2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494dc0 FUN_146494dc0 body=29 status=ok
// SIG undefined FUN_146494dc0(void)

undefined8 FUN_146494dc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494dde FUN_146494dde body=29 status=ok
// SIG undefined FUN_146494dde(void)

undefined8 FUN_146494dde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494dfc FUN_146494dfc body=29 status=ok
// SIG undefined FUN_146494dfc(void)

undefined8 FUN_146494dfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494e1a FUN_146494e1a body=29 status=ok
// SIG undefined FUN_146494e1a(void)

undefined8 FUN_146494e1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494e38 FUN_146494e38 body=29 status=ok
// SIG undefined FUN_146494e38(void)

undefined8 FUN_146494e38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494e56 FUN_146494e56 body=93 status=ok
// SIG undefined FUN_146494e56(void)

void FUN_146494e56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af12890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146494eb4 FUN_146494eb4 body=29 status=ok
// SIG undefined FUN_146494eb4(void)

undefined8 FUN_146494eb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146494ed1 FUN_146494ed1 body=40 status=ok
// SIG undefined FUN_146494ed1(void)

void FUN_146494ed1(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = FUN_14007ca06();
  FUN_14588cc1a(param_1,uVar1);
  *param_1 = &PTR_FUN_14af12df0;
  return;
}



// FUNCTION 146494ef9 FUN_146494ef9 body=47 status=ok
// SIG undefined FUN_146494ef9(void)

longlong FUN_146494ef9(void)

{
  if (DAT_14cb4d618 == 0) {
    FUN_14073dd9a(&DAT_14cb4d618,&PTR_LAB_14af12da8);
  }
  return DAT_14cb4d618;
}



// FUNCTION 146494f28 FUN_146494f28 body=92 status=ok
// SIG undefined FUN_146494f28(void)

void FUN_146494f28(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14af13580;
  puVar1[5] = &PTR_LAB_14af13830;
  puVar1[6] = &PTR_LAB_14af13850;
  puVar1[7] = &PTR_LAB_14af13870;
  puVar1[9] = 0;
  puVar1[10] = 0;
  FUN_1457e37e0(puVar1 + 0xc);
  *(undefined1 *)(puVar1 + 0x26) = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  return;
}



// FUNCTION 146494f84 FUN_146494f84 body=47 status=ok
// SIG undefined FUN_146494f84(void)

longlong FUN_146494f84(void)

{
  if (DAT_14cb4d630 == 0) {
    FUN_14073dd9a(&DAT_14cb4d630,&PTR_LAB_14af13538);
  }
  return DAT_14cb4d630;
}



// FUNCTION 146494fb3 FUN_146494fb3 body=49 status=ok
// SIG undefined FUN_146494fb3(void)

longlong FUN_146494fb3(void)

{
  if (DAT_14cb4d660 == 0) {
    FUN_14073dd9a(&DAT_14cb4d660,&PTR_LAB_14af13db0);
  }
  return DAT_14cb4d660;
}



// FUNCTION 146494fe4 FUN_146494fe4 body=47 status=ok
// SIG undefined FUN_146494fe4(void)

longlong FUN_146494fe4(void)

{
  if (DAT_14cb4d640 == 0) {
    FUN_14000fc22(&DAT_14cb4d640,&PTR_FUN_14af13990);
  }
  return DAT_14cb4d640;
}



// FUNCTION 146495013 FUN_146495013 body=47 status=ok
// SIG undefined FUN_146495013(void)

longlong FUN_146495013(void)

{
  if (DAT_14cb4d648 == 0) {
    FUN_14000fc22(&DAT_14cb4d648,&PTR_FUN_14af13a68);
  }
  return DAT_14cb4d648;
}



// FUNCTION 146495042 FUN_146495042 body=47 status=ok
// SIG undefined FUN_146495042(void)

longlong FUN_146495042(void)

{
  if (DAT_14cb4d650 == 0) {
    FUN_14000fc22(&DAT_14cb4d650,&PTR_FUN_14af13b08);
  }
  return DAT_14cb4d650;
}



// FUNCTION 146495072 FUN_146495072 body=34 status=ok
// SIG undefined FUN_146495072(void)

void FUN_146495072(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14113c87a();
  FUN_14069c8d6(uVar1,&PTR_s_GetCurrentCreateMeshType_14af13b50,3);
  return;
}



// FUNCTION 146495099 FUN_146495099 body=47 status=ok
// SIG undefined FUN_146495099(void)

longlong FUN_146495099(void)

{
  if (DAT_14cb4d6c0 == 0) {
    FUN_1409ce572(&DAT_14cb4d6c0,&PTR_FUN_14af141a0);
  }
  return DAT_14cb4d6c0;
}


