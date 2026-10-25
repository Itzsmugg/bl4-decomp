// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1458da74a FUN_1458da74a body=32 status=ok
// SIG undefined FUN_1458da74a(void)

undefined8 * FUN_1458da74a(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_149fa6e80;
  return param_1;
}



// FUNCTION 1458da770 FUN_1458da770 body=228 status=ok
// SIG undefined FUN_1458da770(void)

longlong FUN_1458da770(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad1c60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_1479ed3d7;
    local_40 = &LAB_14582fa8c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xb80;
    FUN_14081cfa3(L"/Script/Engine",L"PostProcessComponent",&DAT_14cad1c60,FUN_1463ba080);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1c60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458da856 FUN_1458da856 body=456 status=ok
// SIG undefined FUN_1458da856(void)

void FUN_1458da856(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x128);
    if ((lVar2 == 0) || (lVar2 = FUN_1447210f0(lVar2), lVar2 == 0)) {
      if ((longlong)*(int *)(param_1 + 0x138) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x130);
        lVar6 = (longlong)*(int *)(param_1 + 0x138) * 0x68;
        do {
          lVar4 = FUN_14479d2ce(lVar5);
          if ((lVar4 != 0) &&
             ((lVar2 = *(longlong *)(lVar4 + 0xb0), lVar2 != 0 ||
              (lVar2 = FUN_1448abda6(lVar4), lVar2 != 0)))) goto LAB_1458da969;
          lVar5 = lVar5 + 0x68;
          lVar6 = lVar6 + -0x68;
        } while (lVar6 != 0);
      }
    }
    else {
LAB_1458da969:
      if ((*(byte *)(lVar2 + 0x153) & 0x20) == 0) {
        lVar2 = FUN_14479d2ce(param_1 + 0x128);
        if (lVar2 != 0) {
          FUN_140aeefbc(lVar2,0,1);
        }
        if ((longlong)*(int *)(param_1 + 0x138) != 0) {
          lVar2 = *(longlong *)(param_1 + 0x130);
          lVar5 = (longlong)*(int *)(param_1 + 0x138) * 0x68;
          do {
            plVar3 = (longlong *)FUN_14479d2ce(lVar2);
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x420))(plVar3,0);
            }
            lVar2 = lVar2 + 0x68;
            lVar5 = lVar5 + -0x68;
          } while (lVar5 != 0);
        }
        goto LAB_1458da8f7;
      }
    }
  }
  local_40 = *(undefined4 *)(param_1 + 0x130);
  uStack_3c = *(undefined4 *)(param_1 + 0x134);
  uStack_38 = *(undefined4 *)(param_1 + 0x138);
  uStack_34 = *(undefined4 *)(param_1 + 0x13c);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  local_30 = *(undefined8 *)(param_1 + 0x128);
  local_58 = 0;
  local_48 = &PTR_LAB_14ae0eb30;
  local_68 = FUN_143ab7fd4;
  FUN_1407461b0(1);
  FUN_141308248(0,0);
LAB_1458da8f7:
  FUN_141308248(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_145df2d7e(param_1 + 0x130,0);
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458daa20 FUN_1458daa20 body=53 status=ok
// SIG undefined FUN_1458daa20(void)

void FUN_1458daa20(longlong *param_1)

{
  FUN_1458daa56();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458daa56 FUN_1458daa56 body=346 status=ok
// SIG undefined FUN_1458daa56(void)

void FUN_1458daa56(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x20 + (longlong)iStack_4c * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458dabb2 FUN_1458dabb2 body=9 status=ok
// SIG undefined FUN_1458dabb2(void)

void FUN_1458dabb2(longlong param_1)

{
  FUN_1458dabbc(param_1 + 0x10);
  return;
}



// FUNCTION 1458dabbc FUN_1458dabbc body=135 status=ok
// SIG undefined FUN_1458dabbc(void)

void FUN_1458dabbc(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14afdf910;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
  do {
    *(undefined ***)((longlong)param_1 + lVar1 + 0xb0) = &PTR_FUN_14a46be50;
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x118) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)((longlong)param_1 + lVar1 + 0xb0) = &PTR_FUN_14a177080;
    FUN_144a78a1a((longlong)param_1 + lVar1 + 0xb8);
    lVar1 = lVar1 + -0x90;
  } while (lVar1 != -0x120);
  return;
}



// FUNCTION 1458dac4a FUN_1458dac4a body=228 status=ok
// SIG undefined FUN_1458dac4a(void)

longlong FUN_1458dac4a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb62038 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459878b0;
    local_38 = &LAB_1486e0701;
    local_40 = &LAB_1464f64cf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxProfileProgressRoleFiltered",&DAT_14cb62038,&DAT_1486e0700
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62038;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dad38 FUN_1458dad38 body=112 status=ok
// SIG undefined FUN_1458dad38(void)

undefined8 * FUN_1458dad38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1406ed334(param_1,uVar1);
  *param_1 = &PTR_FUN_14b214db0;
  param_1[0x1f] = &PTR_FUN_14b215120;
  *(undefined2 *)(param_1 + 0x20) = 1;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xf00000d0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x200;
  return param_1;
}



// FUNCTION 1458dadb4 FUN_1458dadb4 body=351 status=ok
// SIG undefined FUN_1458dadb4(void)

undefined8 * FUN_1458dadb4(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_50,L"CameraComponent",1);
  uVar1 = FUN_1458daf14();
  FUN_140486538(param_2,local_50);
  FUN_14048646a(param_2 + 0x20,local_50,uVar1,0);
  FUN_1458daffa(param_1,param_2);
  *param_1 = &PTR_FUN_14b71f010;
  param_1[0x19f] = &PTR_FUN_14b71f650;
  param_1[0x1a0] = &PTR_FUN_14b71f680;
  *(undefined4 *)(param_1 + 0x1a1) = 0;
  *(undefined1 *)(param_1 + 0x1a2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd14) = 0;
  *(undefined4 *)(param_1 + 0x1a3) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd1c) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xd24) = 0x40000000;
  FUN_14130828c(&local_48,0x41a00000);
  param_1[0x1a3] = local_48;
  *(undefined4 *)(param_1 + 0x1a5) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2c) = 0;
  *(undefined4 *)(param_1 + 0x1a6) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xd34) = 0x40000000;
  FUN_14130828c(&local_48,0x41a00000);
  param_1[0x1a5] = local_48;
  *(undefined1 *)(param_1 + 0x1a7) = 1;
  *(undefined8 *)((longlong)param_1 + 0xd3c) = 0x40a0000040a00000;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  param_1[0x1b0] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458daf14 FUN_1458daf14 body=228 status=ok
// SIG undefined FUN_1458daf14(void)

longlong FUN_1458daf14(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba8df0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14635ee40;
    local_38 = &LAB_148c0217f;
    local_40 = FUN_14583d03f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xd50;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCineCameraComponent",&DAT_14cba8df0,&DAT_148c0217e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba8df0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458daffa FUN_1458daffa body=333 status=ok
// SIG undefined FUN_1458daffa(void)

longlong * FUN_1458daffa(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"CameraComponent",1);
  uVar4 = FUN_14130829c();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar4,0);
  FUN_1458db148(param_1,param_2);
  *param_1 = (longlong)&PTR_FUN_14a5606f0;
  *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0xc84) = 0;
  lVar6 = DAT_14c846500;
  param_1[0x191] = DAT_14c8464f8;
  param_1[0x192] = lVar6;
  param_1[0x193] = DAT_14c846508;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x199) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xccc) = uVar1;
  *(undefined4 *)(param_1 + 0x19a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xcd4) = uVar3;
  param_1[0x19b] = DAT_14c8464f0;
  *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) & 0xfe;
  lVar6 = param_1[0x73];
  if (lVar6 != 0) {
    lVar5 = FUN_14130829c();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_1458db107;
  }
  lVar6 = 0;
LAB_1458db107:
  param_1[0x19e] = lVar6;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  (**(code **)(*param_1 + 0x400))(param_1,1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458db148 FUN_1458db148 body=461 status=ok
// SIG undefined FUN_1458db148(void)

undefined8 * FUN_1458db148(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a8011f0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  FUN_144894d4c(param_1 + 0x78);
  FUN_1446f470e(&local_20,L"SceneComponent",1);
  uVar2 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x74] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x74];
  }
  param_1[0x39] = lVar3;
  FUN_1446f470e(&local_28,L"CameraComponent",1);
  uVar2 = FUN_144a79bde();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_28,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x73] = lVar3;
  *(undefined4 *)(lVar3 + 0x2a8) = 0x42b40000;
  *(byte *)(param_1[0x73] + 0x2d1) = *(byte *)(param_1[0x73] + 0x2d1) | 1;
  *(undefined4 *)(param_1[0x73] + 0x2cc) = 0x3fe38e3b;
  *(undefined4 *)(param_1[0x73] + 0x340) = 0x3f800000;
  FUN_140486fc4(param_1[0x73],param_1[0x74],0);
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 1;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0x42b400003fe38e3b;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0x3f800000;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458db33c FUN_1458db33c body=63 status=ok
// SIG undefined FUN_1458db33c(void)

void FUN_1458db33c(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1458db454(param_1 + -0x440);
  if (cVar1 != '\0') {
    FUN_1458db37c(param_1 + -0x440);
    return;
  }
  FUN_1415c9d86(param_1 + 0x1bc8);
  return;
}



// FUNCTION 1458db37c FUN_1458db37c body=214 status=ok
// SIG undefined FUN_1458db37c(void)

void FUN_1458db37c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406c9d00(param_1 + 0x15f8,&local_30);
  if (local_28 == 0) {
    uVar3 = FUN_140927942();
    local_28 = FUN_14477b664(uVar3);
  }
  if (((local_20 == 0) && (local_28 != 0)) && (local_30 != 0)) {
    plVar1 = *(longlong **)(local_28 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      local_20 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      local_20 = FUN_144aff482(uVar3,&local_30);
    }
  }
  FUN_1408da346(param_1 + 0x21d0,param_1);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458db454 FUN_1458db454 body=230 status=ok
// SIG undefined FUN_1458db454(void)

undefined8 FUN_1458db454(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406c9d00(param_1 + 0x15f8,&local_28);
  if (local_20 == 0) {
    uVar4 = FUN_140927942();
    local_20 = FUN_14477b664(uVar4);
  }
  if (local_18 == (longlong *)0x0) {
    uVar4 = 0;
    if ((local_20 == 0) || (local_28 == 0)) goto LAB_1458db4ac;
    plVar1 = *(longlong **)(local_20 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        local_18 = (longlong *)FUN_144aff482(uVar4,&local_28);
        if (local_18 != (longlong *)0x0) goto LAB_1458db48f;
      }
    }
  }
  else {
LAB_1458db48f:
    lVar3 = (**(code **)(*local_18 + 0x128))(local_18);
    if (lVar3 != 0) {
      uVar4 = FUN_1402611f4(lVar3);
      goto LAB_1458db4ac;
    }
  }
  uVar4 = 0;
LAB_1458db4ac:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458db53c FUN_1458db53c body=300 status=ok
// SIG undefined FUN_1458db53c(void)

longlong * FUN_1458db53c(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b99b9d0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f470;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b99b9d0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f470;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 1458db668 FUN_1458db668 body=300 status=ok
// SIG undefined FUN_1458db668(void)

longlong * FUN_1458db668(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f5c0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f5c0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 1458db794 FUN_1458db794 body=130 status=ok
// SIG undefined FUN_1458db794(void)

undefined8 FUN_1458db794(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  FUN_14009d848(&local_38,param_3);
  FUN_1448b6402(param_1 + 0x58,param_2,&local_38);
  FUN_1449db362(&local_38);
  FUN_1458db818(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458db818 FUN_1458db818 body=108 status=ok
// SIG undefined FUN_1458db818(void)

void FUN_1458db818(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar2 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x58) + 8 + lVar2) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar2) != 0)) {
        if (*(char *)(param_1 + 0x40) != '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0x40) = 1;
        uVar1 = FUN_1405b64ec(param_1);
        *(undefined1 *)(param_1 + 0x41) = uVar1;
        if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
          return;
        }
        FUN_140df6042(param_1);
        return;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x60) * 0x10 != lVar2);
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined2 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1458db884 FUN_1458db884 body=185 status=ok
// SIG undefined FUN_1458db884(void)

longlong * FUN_1458db884(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406eeb88(param_1,&local_28,&DAT_14cbd3198);
  if (local_28 != 0) {
    uVar4 = FUN_1458db940();
    cVar3 = FUN_1448093f4(local_28,uVar4);
    if (cVar3 != '\0') {
      *param_2 = local_28;
      param_2[1] = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_1458db8e1;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1458db8e1:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458db940 FUN_1458db940 body=55 status=ok
// SIG undefined FUN_1458db940(void)

void FUN_1458db940(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaeb68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaeb68 = FUN_140002ddd(FUN_1465eca5b,uVar1,L"OakSkillDelegates");
  }
  return;
}



// FUNCTION 1458db978 FUN_1458db978 body=300 status=ok
// SIG undefined FUN_1458db978(void)

longlong * FUN_1458db978(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f4e0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f4e0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 1458dbaa4 FUN_1458dbaa4 body=112 status=ok
// SIG undefined FUN_1458dbaa4(void)

void FUN_1458dbaa4(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"Children",1);
  FUN_145a5eba6(param_1,local_28,local_30,0x1e0);
  FUN_1458dbb16(local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dbb16 FUN_1458dbb16 body=285 status=ok
// SIG undefined FUN_1458dbb16(void)

void FUN_1458dbb16(undefined8 param_1)

{
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68[0] = 2;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1446ddc76(&local_70,"Slot.Size",1);
  local_a8 = local_68;
  FUN_1458dbc34(param_1,local_88,local_70,0x20);
  FUN_1449db362(&local_60);
  local_88[0] = 2;
  local_80 = 0;
  uStack_78 = 0;
  FUN_1446ddc76(&local_90,"Slot.Position",1);
  local_a8 = local_88;
  FUN_1458dbc34(param_1,local_68,local_90,0x10);
  FUN_1446ddc76(&local_98,"Slot.Size",1);
  FUN_1458dbcc0(local_68,local_98);
  FUN_1449db362(&local_80);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dbc34 FUN_1458dbc34 body=139 status=ok
// SIG undefined FUN_1458dbc34(void)

undefined8
FUN_1458dbc34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 *local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_1;
  local_28[0] = *param_5;
  local_30 = local_28;
  local_20 = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(param_5 + 8) = 0;
  local_18 = *(undefined4 *)(param_5 + 0x10);
  *(undefined4 *)(param_5 + 0x10) = 0;
  local_38 = param_4;
  FUN_141309508(uVar1,param_2,param_1[1],param_3);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dbcc0 FUN_1458dbcc0 body=53 status=ok
// SIG undefined FUN_1458dbcc0(void)

longlong * FUN_1458dbcc0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = (int)param_1[2];
  if ((-1 < (longlong)iVar1) && (plVar2 = (longlong *)*param_1, iVar1 < (int)plVar2[1])) {
    FUN_1414f3ac0(plVar2,param_1[1],(longlong)iVar1 * 0x58 + *plVar2,param_2);
  }
  return param_1;
}



// FUNCTION 1458dbd00 FUN_1458dbd00 body=137 status=ok
// SIG undefined FUN_1458dbd00(void)

undefined8 * FUN_1458dbd00(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1458dbe66();
  *param_1 = &PTR_FUN_14bab34a0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3c) = 0xffffffff00000080;
  *puVar2 = &PTR_FUN_14bab42b0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x12;
  return param_1;
}



// FUNCTION 1458dbd8a FUN_1458dbd8a body=75 status=ok
// SIG undefined FUN_1458dbd8a(void)

undefined8 * FUN_1458dbd8a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bab4340;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1458dbdd6(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458dbdd6 FUN_1458dbdd6 body=53 status=ok
// SIG undefined FUN_1458dbdd6(void)

void FUN_1458dbdd6(longlong *param_1)

{
  FUN_1458dbe0c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458dbe0c FUN_1458dbe0c body=90 status=ok
// SIG undefined FUN_1458dbe0c(void)

void FUN_1458dbe0c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1456b4004(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458dbe66 FUN_1458dbe66 body=160 status=ok
// SIG undefined FUN_1458dbe66(void)

undefined8 * FUN_1458dbe66(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_14130963a();
  *param_1 = &PTR_FUN_14bab3c00;
  param_1[7] = 0xa0000000a;
  *(undefined4 *)(param_1 + 8) = 10;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14bab4340;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = 6;
  return param_1;
}



// FUNCTION 1458dbf06 FUN_1458dbf06 body=155 status=ok
// SIG undefined FUN_1458dbf06(void)

void FUN_1458dbf06(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1458dbfa2(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dbfa2 FUN_1458dbfa2 body=23 status=ok
// SIG undefined FUN_1458dbfa2(void)

void FUN_1458dbfa2(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1458dbfba(param_1,*(undefined1 *)(param_1 + 0xbd8));
    return;
  }
  FUN_1458dbfba(0,0);
  return;
}



// FUNCTION 1458dbfba FUN_1458dbfba body=140 status=ok
// SIG undefined FUN_1458dbfba(void)

undefined8 FUN_1458dbfba(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458dc048(local_30,param_1,param_2);
  plVar1 = (longlong *)FUN_1405faa04(local_30);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_14018fb44();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),
                       *(undefined1 *)((longlong)plVar1 + 0x121));
      goto LAB_1458dc025;
    }
  }
  uVar4 = 0;
LAB_1458dc025:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dc048 FUN_1458dc048 body=179 status=ok
// SIG undefined FUN_1458dc048(void)

longlong * FUN_1458dc048(longlong *param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0x3002;
  param_1[2] = 0;
  if ((param_2 != 0) && ((int)(uint)param_3 < *(int *)(param_2 + 0xbf0))) {
    plVar1 = *(longlong **)
              (*(longlong *)(param_2 + 0xbe8) + 8 +
              (ulonglong)param_3 * 0x80 + (ulonglong)param_3 * 8);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x2e0))();
      if (lVar2 != 0) {
        uVar3 = FUN_144a7ff8c(lVar2 + 8);
        FUN_1447325ac(uVar3,&local_20,1);
        if (local_20 != 0) {
          param_1[2] = 0;
        }
        *param_1 = local_20;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dc0fc FUN_1458dc0fc body=52 status=ok
// SIG undefined FUN_1458dc0fc(void)

void FUN_1458dc0fc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x970);
  memset(_Dst,0,0x970);
  FUN_14130966e(_Dst);
  return;
}



// FUNCTION 1458dc130 FUN_1458dc130 body=40 status=ok
// SIG undefined FUN_1458dc130(void)

undefined8 FUN_1458dc130(undefined8 param_1,int param_2)

{
  FUN_1458dc158();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458dc158 FUN_1458dc158 body=112 status=ok
// SIG undefined FUN_1458dc158(void)

void FUN_1458dc158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aef8dc0;
  param_1[5] = &PTR_FUN_14aef9190;
  param_1[0x13] = &PTR_FUN_14aef91b0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1458dc1c8(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1411412a8(param_1);
  return;
}



// FUNCTION 1458dc1c8 FUN_1458dc1c8 body=65 status=ok
// SIG undefined FUN_1458dc1c8(void)

void FUN_1458dc1c8(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_140345f8a(puVar1 + -0x12);
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458dc20a FUN_1458dc20a body=82 status=ok
// SIG undefined FUN_1458dc20a(void)

void FUN_1458dc20a(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    FUN_1458dc25e(local_28,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dc25e FUN_1458dc25e body=76 status=ok
// SIG undefined FUN_1458dc25e(void)

void FUN_1458dc25e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_1458dc2aa(lVar1,param_2,param_4,0xffffffffffffffff,0);
  }
  return;
}



// FUNCTION 1458dc2aa FUN_1458dc2aa body=274 status=ok
// SIG undefined FUN_1458dc2aa(void)

void FUN_1458dc2aa(longlong param_1,undefined4 *param_2,undefined1 param_3,ulonglong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_c8 [32];
  code **local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar2 = param_4 < 0xffffffff00000000 && (int)param_4 != -1;
  local_88 = *(longlong *)(param_2 + 4);
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_78[0] = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x30,8);
  *local_68 = (longlong)&PTR_FUN_14aa1de20;
  local_68[3] = local_88;
  *(undefined4 *)(local_68 + 1) = local_98;
  *(undefined4 *)((longlong)local_68 + 0xc) = uStack_94;
  *(undefined4 *)(local_68 + 2) = uStack_90;
  *(undefined4 *)((longlong)local_68 + 0x14) = uStack_8c;
  *(undefined1 *)(local_68 + 4) = param_3;
  *(bool *)((longlong)local_68 + 0x21) = bVar2;
  local_68[5] = param_1;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_1436229e6;
  }
  local_a8 = local_78;
  FUN_140f482b4(param_1,param_4,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar2) & 0xffffffff,
                param_5);
  if (local_78[0] != (code *)0x0) {
    plVar1 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar1 = local_58;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dc3c6 FUN_1458dc3c6 body=197 status=ok
// SIG undefined FUN_1458dc3c6(void)

undefined8 * FUN_1458dc3c6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14077009c(param_1,uVar1);
  *param_1 = &PTR_FUN_14ac29800;
  param_1[6] = 0x4280000043000000;
  param_1[7] = 0x4348000042e00000;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0x43000000;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x43000000;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x43800000;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x6e) = 1;
  *(undefined4 *)(param_1 + 0xe) = 10;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x404000003f000000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x4220000041800000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x3fc000003f59999a;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xa0000000a;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x37;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x42c80000ff00ff00;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x420c000042aa0000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x42b4000042b40000;
  return param_1;
}



// FUNCTION 1458dc48c FUN_1458dc48c body=309 status=ok
// SIG undefined FUN_1458dc48c(void)

undefined4 * FUN_1458dc48c(undefined4 *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458dc628(local_48);
  uVar2 = ((undefined8 *)*param_3)[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = uVar2;
  local_40[4] = 0xffffffff00000000;
  local_40[2] = 0;
  local_40[3] = 0;
  cVar3 = FUN_1458dc5c2(param_2,local_40,local_48);
  if (cVar3 == '\0') {
    uVar4 = DAT_14c895ff0 - DAT_14c89601c;
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= DAT_14c896030)) {
      param_2 = DAT_14c896030 - 1U & param_2;
      *(uint *)(local_40 + 5) = param_2;
      puVar5 = DAT_14c896028;
      if (DAT_14c896028 == (undefined *)0x0) {
        puVar5 = &DAT_14c896020;
      }
      *(undefined4 *)((longlong)local_40 + 0x24) =
           *(undefined4 *)(puVar5 + ((longlong)DAT_14c896030 - 1U & (longlong)(int)param_2) * 4);
      puVar5 = DAT_14c896028;
      if (DAT_14c896028 == (undefined *)0x0) {
        puVar5 = &DAT_14c896020;
      }
      *(undefined4 *)(puVar5 + ((longlong)DAT_14c896030 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14c896030 = iVar7;
      FUN_141309aac();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dc5c2 FUN_1458dc5c2 body=102 status=ok
// SIG undefined FUN_1458dc5c2(void)

undefined8 FUN_1458dc5c2(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  if ((DAT_14c895ff0 - DAT_14c89601c != 1) &&
     (iVar11 = FUN_141309a2c(), lVar10 = DAT_14c895fe8, iVar11 != -1)) {
    lVar12 = (longlong)iVar11 * 0x2c;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    *(undefined4 *)(DAT_14c895fe8 + 0x20 + lVar12) = param_2[8];
    puVar1 = (undefined4 *)(lVar10 + 0x10 + lVar12);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar10 + lVar12);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14682daa2(*param_3);
    *param_3 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 1458dc628 FUN_1458dc628 body=279 status=ok
// SIG undefined FUN_1458dc628(void)

int * FUN_1458dc628(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c896018;
  iVar3 = DAT_14c895ff0;
  if (DAT_14c89601c == 0) {
    iVar2 = DAT_14c895ff0 + 1;
    bVar7 = DAT_14c895ff4 == DAT_14c895ff0;
    DAT_14c895ff0 = iVar2;
    if (bVar7) {
      FUN_1458dc740(&DAT_14c895fe8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c895ff8,1);
    puVar4 = DAT_14c896008;
    if (DAT_14c896008 == (undefined *)0x0) {
      puVar4 = &DAT_14c895ff8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c896018;
    DAT_14c896018 = *(int *)(DAT_14c895fe8 + 4 + lVar6 * 0x2c);
    DAT_14c89601c = DAT_14c89601c + -1;
    if (DAT_14c89601c != 0) {
      *(undefined4 *)(DAT_14c895fe8 + (longlong)DAT_14c896018 * 0x2c) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c895ff8;
  if (DAT_14c896008 != (undefined *)0x0) {
    puVar4 = DAT_14c896008;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x2c + DAT_14c895fe8;
  return param_1;
}



// FUNCTION 1458dc740 FUN_1458dc740 body=143 status=ok
// SIG undefined FUN_1458dc740(void)

void FUN_1458dc740(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x2c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2c)) {
      uVar5 = uVar4 / 0x2c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x2c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458dc7d8 FUN_1458dc7d8 body=276 status=ok
// SIG undefined FUN_1458dc7d8(void)

undefined8 * FUN_1458dc7d8(undefined8 *param_1)

{
  FUN_1458dc8ec();
  *param_1 = &PTR_FUN_14b824100;
  param_1[6] = &PTR_FUN_14b8243f0;
  param_1[7] = &PTR_LAB_14b824480;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 1;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  return param_1;
}



// FUNCTION 1458dc8ec FUN_1458dc8ec body=54 status=ok
// SIG undefined FUN_1458dc8ec(void)

undefined8 * FUN_1458dc8ec(undefined8 *param_1)

{
  FUN_140c8816c();
  *param_1 = &PTR_FUN_14b8336d0;
  param_1[6] = &PTR_FUN_14b8339c0;
  param_1[7] = &PTR_LAB_14b833a50;
  return param_1;
}



// FUNCTION 1458dc92e FUN_1458dc92e body=134 status=ok
// SIG undefined FUN_1458dc92e(void)

undefined8 * FUN_1458dc92e(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0xb) = 2;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 3;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_14a580fe0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0xd) = 3;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 1458dc9c2 FUN_1458dc9c2 body=40 status=ok
// SIG undefined FUN_1458dc9c2(void)

undefined8 FUN_1458dc9c2(undefined8 param_1,int param_2)

{
  FUN_1458dc9ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458dc9ea FUN_1458dc9ea body=91 status=ok
// SIG undefined FUN_1458dc9ea(void)

void FUN_1458dc9ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4914a0;
  FUN_140659899(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aff06f0;
  if (param_1[0x16] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458dca46 FUN_1458dca46 body=326 status=ok
// SIG undefined FUN_1458dca46(void)

undefined4 * FUN_1458dca46(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1458dccac(param_1,local_48);
  FUN_1458dcb8e(param_3,local_40);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_1458dcc04(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1463abe1a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dcb8e FUN_1458dcb8e body=117 status=ok
// SIG undefined FUN_1458dcb8e(void)

undefined8 * FUN_1458dcb8e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = *puVar2;
  param_2[2] = 0;
  iVar1 = *(int *)(puVar2 + 2);
  _Src = (void *)puVar2[1];
  *(int *)(param_2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  }
  else {
    FUN_144756262(param_2 + 2,iVar1,0);
    memcpy((void *)param_2[2],_Src,(longlong)iVar1 * 0x60);
  }
  return param_2;
}



// FUNCTION 1458dcc04 FUN_1458dcc04 body=168 status=ok
// SIG undefined FUN_1458dcc04(void)

undefined8 FUN_1458dcc04(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          if (plVar8[2] != 0) {
            FUN_1400020a8();
          }
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_14794bd94(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1458dccac FUN_1458dccac body=240 status=ok
// SIG undefined FUN_1458dccac(void)

int * FUN_1458dccac(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1458dcd9c FUN_1458dcd9c body=40 status=ok
// SIG undefined FUN_1458dcd9c(void)

undefined8 FUN_1458dcd9c(undefined8 param_1,int param_2)

{
  FUN_1458dcdc4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458dcdc4 FUN_1458dcdc4 body=87 status=ok
// SIG undefined FUN_1458dcdc4(void)

void FUN_1458dcdc4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a500a60;
  param_1[5] = &PTR_FUN_14a500d80;
  plVar3 = (longlong *)param_1[0x31];
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
  FUN_14110c0da(param_1);
  return;
}



// FUNCTION 1458dce1c FUN_1458dce1c body=160 status=ok
// SIG undefined FUN_1458dce1c(void)

void FUN_1458dce1c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = 0;
    do {
      FUN_141309f44(local_50,param_2);
      if (*(longlong *)(lVar2 + 8 + lVar3) == local_48) {
        FUN_141309f44(local_50,param_2);
        local_40 = local_50;
        FUN_1458dcebe(param_1 + 8);
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458dcebe FUN_1458dcebe body=240 status=ok
// SIG undefined FUN_1458dcebe(void)

void FUN_1458dcebe(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar2 = *param_1;
    iVar13 = 0;
    bVar7 = *(longlong *)(lVar2 + 8) == *(longlong *)(*param_2 + 8);
    iVar10 = 0;
    do {
      lVar9 = (longlong)iVar10;
      iVar4 = iVar10 + 1;
      if (iVar10 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      lVar5 = lVar9 * 0x10;
      plVar8 = (longlong *)(lVar2 + 0x18 + lVar5);
      iVar11 = iVar10;
      do {
        lVar9 = lVar9 + 1;
        iVar12 = iVar4;
        if (lVar6 <= lVar9) break;
        lVar3 = *plVar8;
        iVar11 = iVar11 + 1;
        plVar8 = plVar8 + 2;
        iVar12 = iVar11;
      } while (bVar7 == (lVar3 == *(longlong *)(*param_2 + 8)));
      if (bVar7 == false) {
        if (iVar13 != iVar10) {
          memmove((void *)((longlong)iVar13 * 0x10 + lVar2),(void *)(lVar5 + lVar2),
                  (longlong)(iVar12 - iVar10) << 4);
        }
        iVar13 = iVar13 + (iVar12 - iVar10);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar10 = iVar12;
    } while (lVar9 < lVar6);
    *(int *)(param_1 + 1) = iVar13;
  }
  return;
}



// FUNCTION 1458dcfae FUN_1458dcfae body=111 status=ok
// SIG undefined FUN_1458dcfae(void)

void FUN_1458dcfae(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar1 = param_1[4];
    }
    else {
      lVar1 = 0;
    }
    if (*(char *)(lVar1 + 0x178) == '\x03') {
      FUN_14130a010();
      *(int *)((longlong)param_1 + 0x5c) = *(int *)((longlong)param_1 + 0x5c) + 1;
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        plVar2 = (longlong *)param_1[4];
      }
      else {
        plVar2 = (longlong *)0x0;
      }
      *(int *)(plVar2 + 0x92) = (int)plVar2[0x92] + 1;
      (**(code **)(*plVar2 + 0x578))();
                    /* WARNING: Could not recover jumptable at 0x0001458dd007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x3d8))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1458dd080 FUN_1458dd080 body=43 status=ok
// SIG undefined FUN_1458dd080(void)

undefined8 FUN_1458dd080(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 != 0) {
    uVar2 = FUN_1401b0f18();
    uVar2 = FUN_144a7ff9e(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1458dd0ac FUN_1458dd0ac body=123 status=ok
// SIG undefined FUN_1458dd0ac(void)

void FUN_1458dd0ac(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  FUN_1458dd128();
  plVar1 = *(longlong **)(param_1 + 0x20);
  uVar4 = 0x3f800000;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1413206c6();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = *(undefined4 *)((longlong)plVar1 + 0x2e4);
    }
  }
  *(undefined4 *)(param_1 + 0x188) = uVar4;
  FUN_14132047a(param_1,0,1);
  return;
}



// FUNCTION 1458dd128 FUN_1458dd128 body=71 status=ok
// SIG undefined FUN_1458dd128(void)

void FUN_1458dd128(longlong param_1)

{
  char cVar1;
  
  if (((*(longlong *)(param_1 + 0x20) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x20) + 0x210) == '\x01')) &&
     (*(longlong *)(param_1 + 0x18) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x10);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001458dd168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x88))();
      return;
    }
  }
  return;
}



// FUNCTION 1458dd170 FUN_1458dd170 body=21 status=ok
// SIG undefined FUN_1458dd170(void)

undefined8 FUN_1458dd170(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1458dd18c FUN_1458dd18c body=412 status=ok
// SIG undefined FUN_1458dd18c(void)

void FUN_1458dd18c(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_148 [32];
  code **local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_108 [64];
  longlong local_c8;
  undefined4 local_c0;
  code *local_b8 [2];
  longlong *local_a8;
  longlong local_98 [5];
  undefined1 local_70 [64];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  FUN_1458dd360(local_70,param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  uVar2 = FUN_1401cb356();
  FUN_1458dd360(local_108,local_70);
  local_b8[0] = (code *)0x0;
  plVar3 = (longlong *)FUN_14001cc68(0x58,8);
  *plVar3 = (longlong)&PTR_LAB_14be80af0;
  local_a8 = plVar3;
  FUN_1458dd360(plVar3 + 1,local_108);
  if (plVar3 != (longlong *)&DAT_fffffffffffffff8) {
    local_b8[0] = FUN_145e311ea;
  }
  local_128 = local_b8;
  FUN_1401cbba4(uVar2,local_118,L"bookmark_emit",0);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_110 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
  if (local_b8[0] != (code *)0x0) {
    plVar3 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar3 = local_98;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1458dd32a(local_108);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1458dd32a(local_70);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dd32a FUN_1458dd32a body=53 status=ok
// SIG undefined FUN_1458dd32a(void)

void FUN_1458dd32a(longlong *param_1)

{
  FUN_1458dd3de();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458dd360 FUN_1458dd360 body=125 status=ok
// SIG undefined FUN_1458dd360(void)

undefined8 * FUN_1458dd360(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1458dd568();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1458dd3de FUN_1458dd3de body=392 status=ok
// SIG undefined FUN_1458dd3de(void)

void FUN_1458dd3de(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar4 = *local_78;
      *(undefined ***)(lVar4 + 8 + (longlong)iStack_5c * 0x28) = &PTR_FUN_14a184350;
      plVar5 = *(longlong **)(lVar4 + 0x18 + (longlong)iStack_5c * 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458dd568 FUN_1458dd568 body=481 status=ok
// SIG undefined FUN_1458dd568(void)

longlong * FUN_1458dd568(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar10 = 0;
    local_50 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar8 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, local_50 != plVar1)) {
      do {
        local_68 = uVar8;
        lVar4 = *local_80;
        *(undefined ***)(lVar4 + 8 + (longlong)iVar9 * 0x28) = &PTR_FUN_14a184350;
        plVar5 = *(longlong **)(lVar4 + 0x18 + (longlong)iVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (((local_68._4_4_ != iVar10) || (local_70 != plVar1)) || (local_80 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1458dd74a FUN_1458dd74a body=40 status=ok
// SIG undefined FUN_1458dd74a(void)

undefined8 FUN_1458dd74a(undefined8 param_1,int param_2)

{
  FUN_1458dd772();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458dd772 FUN_1458dd772 body=102 status=ok
// SIG undefined FUN_1458dd772(void)

void FUN_1458dd772(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3bff20;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1458dd7d8(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458dd7d8 FUN_1458dd7d8 body=53 status=ok
// SIG undefined FUN_1458dd7d8(void)

void FUN_1458dd7d8(longlong *param_1)

{
  FUN_1458dd80e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458dd80e FUN_1458dd80e body=350 status=ok
// SIG undefined FUN_1458dd80e(void)

void FUN_1458dd80e(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x48 + (longlong)iStack_4c * 0x60) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458dd96e FUN_1458dd96e body=180 status=ok
// SIG undefined FUN_1458dd96e(void)

void FUN_1458dd96e(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    uVar3 = FUN_144a800f8();
    lVar4 = FUN_144718840(param_2,uVar3);
    if (lVar4 != 0) {
      FUN_1402f20d0(param_1 + 0xda8,&local_38);
      if (local_38 != 0) {
        FUN_1458dda24(local_38,param_1 + 0xda8,lVar4,param_3);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dda24 FUN_1458dda24 body=541 status=ok
// SIG undefined FUN_1458dda24(void)

void FUN_1458dda24(longlong param_1,longlong *param_2,ulonglong param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_958 [32];
  undefined8 local_938;
  undefined8 uStack_930;
  undefined1 local_4b0;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_958;
  if (((param_2 != (longlong *)0x0) && (param_3 != 0)) &&
     (*(int *)(param_1 + 0x1b90) != *(int *)(param_1 + 0x1bb4))) {
    uVar3 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x1bb8;
    if (*(longlong *)(param_1 + 0x1bc0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1bc0);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x1bc8) - 1U & (uVar3 >> 0x10 ^ uVar3))
                             * 4);
    if (iVar5 != -1) {
      lVar4 = param_1 + 0x1b28;
      if (*(longlong *)(param_1 + 0x1b88) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x1b88);
      }
      do {
        plVar6 = (longlong *)(lVar4 + (longlong)iVar5 * 0x18);
        if ((longlong *)*plVar6 == param_2) {
          if (((plVar6 != (longlong *)0x0) && (plVar6 = plVar6 + 1, plVar6 != (longlong *)0x0)) &&
             (*plVar6 != 0)) {
            if (*(int *)(&DAT_00001868 + param_1) == *(int *)(param_1 + 0x18a4)) goto LAB_1458ddb9e;
            uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
            uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
            lVar4 = param_1 + 0x18a8;
            if (*(longlong *)(param_1 + 0x1aa8) != 0) {
              lVar4 = *(longlong *)(param_1 + 0x1aa8);
            }
            iVar5 = *(int *)(lVar4 + (ulonglong)
                                     (*(int *)(param_1 + 0x1ab0) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4
                            );
            if (iVar5 == -1) goto LAB_1458ddb9e;
            lVar4 = param_1 + 0x60;
            if (*(longlong *)(&DAT_00001860 + param_1) != 0) {
              lVar4 = *(longlong *)(&DAT_00001860 + param_1);
            }
            goto LAB_1458ddb83;
          }
          break;
        }
        iVar5 = (int)plVar6[2];
      } while (iVar5 != -1);
    }
  }
  goto LAB_1458ddbf8;
  while (iVar5 = (int)puVar1[2], iVar5 != -1) {
LAB_1458ddb83:
    puVar1 = (ulonglong *)(lVar4 + (longlong)iVar5 * 0x18);
    if (*puVar1 == param_3) {
      if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
        FUN_1458ddd08(puVar1[1],param_2,param_4);
      }
      break;
    }
  }
LAB_1458ddb9e:
  cVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  if (cVar2 == '\0') {
    local_4b0 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_938 = 0;
    uStack_930 = 0;
    FUN_1458ddc42(*plVar6,&local_938,0,0);
    FUN_14023c33c(&local_938);
  }
LAB_1458ddbf8:
  if ((local_18 ^ (ulonglong)auStack_958) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458ddc42 FUN_1458ddc42 body=197 status=ok
// SIG undefined FUN_1458ddc42(void)

void FUN_1458ddc42(longlong param_1,undefined4 *param_2,uint param_3,char param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  
  cVar6 = FUN_14065e264((undefined4 *)(param_1 + 0x18));
  if (cVar6 == '\0') {
    if (param_4 != '\0') {
      FUN_14065e6bc(param_1,param_3);
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)(param_1 + 0x18) = *param_2;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    FUN_140dd1076(param_1 + 0x28,param_2 + 4);
    FUN_140dd1076(param_1 + 0x4a8,param_2 + 0x124);
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x915);
    *(undefined8 *)(param_1 + 0x928) = *(undefined8 *)(param_2 + 0x244);
    *(undefined8 *)(param_1 + 0x92d) = uVar2;
    if (((byte)param_3 < 2) &&
       (pfVar1 = (float *)(param_1 + 0x948 + (ulonglong)(param_3 & 0xff) * 8),
       *pfVar1 <= 0.0 && *pfVar1 != 0.0)) {
      *(undefined4 *)(param_1 + 0x948 + (ulonglong)(param_3 & 0xff) * 8) = 0;
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_141367a8a(*(longlong *)(param_1 + 8) + 0x40,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458ddd08 FUN_1458ddd08 body=215 status=ok
// SIG undefined FUN_1458ddd08(void)

void FUN_1458ddd08(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    lVar2 = 200;
    if ((char)param_3 != '\0') {
      if ((param_3 & 0xff) != 1) goto LAB_1458ddd93;
      lVar2 = 0xe0;
    }
    plVar3 = (longlong *)(lVar2 + param_1);
    if (plVar3 != (longlong *)0x0) {
      FUN_1401036f0(local_50,param_2);
      local_40 = local_50;
      iVar1 = FUN_1458ddde0(plVar3 + 1);
      if (iVar1 != 0) {
        if (((int)plVar3[2] == 0) && (*plVar3 != 0)) {
          FUN_1489ae990(param_1,*plVar3,0);
          *plVar3 = 0;
        }
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                  (*(longlong **)(param_1 + 0x10),param_2,param_3);
      }
    }
  }
LAB_1458ddd93:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ddde0 FUN_1458ddde0 body=273 status=ok
// SIG undefined FUN_1458ddde0(void)

int FUN_1458ddde0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    lVar1 = *param_1;
    iVar5 = 0;
    bVar13 = *(longlong *)(lVar1 + 8) == *(longlong *)(*param_2 + 8);
    iVar10 = 0;
    do {
      lVar9 = (longlong)iVar10;
      iVar3 = iVar10 + 1;
      if (iVar10 + 1 < iVar6) {
        iVar3 = iVar6;
      }
      lVar4 = lVar9 * 0x10;
      plVar8 = (longlong *)(lVar1 + 0x18 + lVar4);
      iVar12 = iVar10;
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar3;
        if (lVar7 <= lVar9) break;
        lVar2 = *plVar8;
        iVar12 = iVar12 + 1;
        plVar8 = plVar8 + 2;
        iVar11 = iVar12;
      } while (bVar13 == (lVar2 == *(longlong *)(*param_2 + 8)));
      if (bVar13 == false) {
        if (iVar5 != iVar10) {
          memmove((void *)((longlong)iVar5 * 0x10 + lVar1),(void *)(lVar4 + lVar1),
                  (longlong)(iVar11 - iVar10) << 4);
        }
        iVar5 = iVar5 + (iVar11 - iVar10);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar10 = iVar11;
    } while (lVar9 < lVar7);
    *(int *)(param_1 + 1) = iVar5;
    iVar6 = iVar6 - iVar5;
  }
  return iVar6;
}



// FUNCTION 1458ddef2 FUN_1458ddef2 body=127 status=ok
// SIG undefined FUN_1458ddef2(void)

void FUN_1458ddef2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1458ddf72();
  if (((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x2c70) != 0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x2c70) + 0xcf8) & 1) != 0)) {
    lVar2 = (**(code **)(*param_2 + 0x108))(param_2);
    if (lVar2 != 0) {
      lVar3 = FUN_144a2f878();
      iVar1 = *(int *)(lVar3 + 0x38);
      if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
           lVar3 + 0x30)) && (*(char *)(lVar2 + 0x73eb) == '\x01')) {
        FUN_145da254a(lVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),2));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458ddf72 FUN_1458ddf72 body=134 status=ok
// SIG undefined FUN_1458ddf72(void)

void FUN_1458ddf72(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  if ((((*(longlong *)(param_1 + 0x1848) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) &&
      (*(char *)(param_1 + 0x1842) == '\0')) &&
     (((*(byte *)(param_1 + 0x65) & 2) == 0 &&
      (uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x1848) + 0xc03),
      (*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)))) {
    *(undefined1 *)(param_1 + 0x1842) = 1;
    *(undefined1 *)(param_1 + 0x1841) = uVar1;
    FUN_1410e896a(param_1);
  }
  *(undefined1 *)(param_1 + 0x1843) = 1;
  FUN_1447cd2ec(param_1 + 0x15b8,0);
  FUN_1447f69b6(param_1 + 0x15c8);
  FUN_14126fd86(param_1,param_2);
  return;
}



// FUNCTION 1458ddff8 FUN_1458ddff8 body=40 status=ok
// SIG undefined FUN_1458ddff8(void)

undefined8 FUN_1458ddff8(undefined8 param_1,int param_2)

{
  FUN_1458de020();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458de020 FUN_1458de020 body=69 status=ok
// SIG undefined FUN_1458de020(void)

void FUN_1458de020(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a49acc0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1458de066(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458de066 FUN_1458de066 body=53 status=ok
// SIG undefined FUN_1458de066(void)

void FUN_1458de066(longlong *param_1)

{
  FUN_1458de09c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458de09c FUN_1458de09c body=347 status=ok
// SIG undefined FUN_1458de09c(void)

void FUN_1458de09c(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_147592a46(*local_68 + (longlong)iStack_4c * 0x50 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458de1f8 FUN_1458de1f8 body=39 status=ok
// SIG undefined FUN_1458de1f8(void)

void FUN_1458de1f8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458de220(puVar1);
  *puVar1 = &PTR_FUN_14aeac450;
  *(undefined1 *)(puVar1 + 0x18) = 1;
  return;
}



// FUNCTION 1458de220 FUN_1458de220 body=431 status=ok
// SIG undefined FUN_1458de220(void)

undefined8 * FUN_1458de220(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14130a082();
  *param_1 = &PTR_FUN_14aeab700;
  param_1[8] = 0;
  param_1[10] = 0;
  local_98 = param_1[8];
  local_50 = param_1[9];
  local_88 = (longlong *)param_1[10];
  local_40 = param_1[0xb];
  local_38 = param_1[0xc];
  uStack_30 = param_1[0xd];
  local_28 = param_1[0xe];
  uStack_20 = param_1[0xf];
  uVar1 = local_28;
  uVar2 = uStack_20;
  local_48 = local_88;
  local_58 = local_98;
  param_1[0xe] = CONCAT44(uStack_64,local_68);
  param_1[0xf] = CONCAT44(uStack_5c,uStack_60);
  param_1[0xc] = &PTR_LAB_14aeb56e0;
  param_1[0xd] = &LAB_143b4de1a;
  param_1[10] = 0;
  param_1[0xb] = uStack_80;
  param_1[8] = FUN_14841bf2a;
  param_1[9] = uStack_90;
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = local_38;
  uStack_70 = uStack_30;
  uStack_90 = local_50;
  uStack_80 = local_40;
  local_28 = uVar1;
  uStack_20 = uVar2;
  if (local_98 != 0) {
    plVar3 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar3 = &local_78;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *param_1 = &PTR_FUN_14aeae4e0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458de3d0 FUN_1458de3d0 body=132 status=ok
// SIG undefined FUN_1458de3d0(void)

void FUN_1458de3d0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458de456 FUN_1458de456 body=304 status=ok
// SIG undefined FUN_1458de456(void)

void FUN_1458de456(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_140a3abf4();
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x620) != 0) {
      FUN_14480f766(lVar2 + 0x1618);
      *(undefined8 *)(param_1 + 0x620) = 0;
    }
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,2,0x10);
    local_30 = 2;
    *local_38 = &PTR_LAB_14b4024f0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_38[2] = lVar3;
    *local_38 = &PTR_FUN_14b402020;
    local_38[3] = param_1;
    FUN_140d0180e(lVar2 + 0x1618,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *(undefined8 *)(param_1 + 0x620) = local_40;
  }
  FUN_140a3ab1e(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458de596 FUN_1458de596 body=59 status=ok
// SIG undefined FUN_1458de596(void)

undefined8 * FUN_1458de596(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b221f50;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458de5e0 FUN_1458de5e0 body=59 status=ok
// SIG undefined FUN_1458de5e0(void)

undefined8 * FUN_1458de5e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b650200;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458de61c FUN_1458de61c body=40 status=ok
// SIG undefined FUN_1458de61c(void)

void FUN_1458de61c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001458de641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1458de644 FUN_1458de644 body=106 status=ok
// SIG undefined FUN_1458de644(void)

void FUN_1458de644(longlong param_1,double *param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (9.99999905104687e-09 <=
      param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]) {
    cVar1 = FUN_144729dda(param_1 + 0x30);
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001458de6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar2 + 0x3b48) + 0x48))(lVar2 + 0x3b48);
      return;
    }
  }
  return;
}



// FUNCTION 1458de6ae FUN_1458de6ae body=94 status=ok
// SIG undefined FUN_1458de6ae(void)

void FUN_1458de6ae(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  cVar3 = FUN_14130ac92(lVar2);
  if (cVar3 != '\0') {
    bVar1 = *(byte *)(lVar2 + 0xbd8);
    if ((int)(uint)bVar1 < *(int *)(lVar2 + 0xbf0)) {
      uVar4 = *(undefined8 *)
               (*(longlong *)(lVar2 + 0xbe8) + 0x10 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8
               );
    }
    else {
      uVar4 = 0;
    }
    FUN_14485c47a(param_1 + 0x118,uVar4);
    return;
  }
  return;
}



// FUNCTION 1458de70c FUN_1458de70c body=254 status=ok
// SIG undefined FUN_1458de70c(void)

undefined8 FUN_1458de70c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  
  if (*(longlong *)(param_1 + 0x11e8) == 0) goto LAB_1458de7b2;
  if (*(char *)(*(longlong *)(param_1 + 0x11e8) + 0x1c10) == '\0') {
    cVar7 = FUN_144a80e0c();
    if (cVar7 == '\0') {
      lVar2 = *(longlong *)(param_1 + 0x11e8);
      if (lVar2 == 0) {
LAB_1458de7b2:
        uVar9 = FUN_1458de80a(param_1);
        return uVar9;
      }
      lVar3 = *(longlong *)(lVar2 + 0x1eb8);
      plVar4 = *(longlong **)(lVar2 + 0x1ec0);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (lVar3 == 0) {
        bVar8 = 0;
      }
      else {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x11e8) + 0x1eb8);
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x11e8) + 0x1ec0);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        bVar8 = (**(code **)(*plVar5 + 0x98))();
        bVar8 = bVar8 ^ 1;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar6 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar4 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      if (bVar8 == 0) goto LAB_1458de7b2;
    }
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 1458de80a FUN_1458de80a body=60 status=ok
// SIG undefined FUN_1458de80a(void)

undefined8 FUN_1458de80a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x858) != 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x858) + 0x1518) == 0) {
      cVar1 = FUN_144a61b4f();
      if (cVar1 != '\0') goto LAB_1458de831;
    }
    return 0;
  }
LAB_1458de831:
  uVar2 = FUN_1458de846(param_1);
  return uVar2;
}



// FUNCTION 1458de846 FUN_1458de846 body=88 status=ok
// SIG undefined FUN_1458de846(void)

ulonglong FUN_1458de846(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  
  if (((((*(byte *)(param_1 + 0x550) & 2) == 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x430), lVar1 != 0)) &&
      (cVar3 = (**(code **)(*(longlong *)(lVar1 + 0x178) + 0x110))(lVar1 + 0x178), cVar3 != '\0'))
     && (plVar2 = *(longlong **)(param_1 + 0x1c8), plVar2 != (longlong *)0x0)) {
    uVar4 = (**(code **)(*plVar2 + 0x480))(plVar2,0);
    return uVar4 ^ 1;
  }
  return 0;
}



// FUNCTION 1458de8a8 FUN_1458de8a8 body=125 status=ok
// SIG undefined FUN_1458de8a8(void)

void FUN_1458de8a8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9a07f0;
  param_1[4] = &PTR_FUN_14b9a0830;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b9a0840;
  param_1[4] = &PTR_LAB_14b9a0880;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 1458de925 FUN_1458de925 body=127 status=ok
// SIG undefined FUN_1458de925(void)

void FUN_1458de925(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458de9a4(puVar1);
  *puVar1 = &PTR_FUN_14ba23a20;
  puVar1[5] = &PTR_FUN_14ba23dd0;
  puVar1[0x13] = &PTR_FUN_14ba23df0;
  puVar1[0x16] = &PTR_FUN_14ba23e20;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 1;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  return;
}



// FUNCTION 1458de9a4 FUN_1458de9a4 body=68 status=ok
// SIG undefined FUN_1458de9a4(void)

undefined8 * FUN_1458de9a4(undefined8 *param_1)

{
  FUN_141249ec6();
  *param_1 = &PTR_FUN_14aef96a0;
  param_1[5] = &PTR_FUN_14aef9a50;
  param_1[0x13] = &PTR_FUN_14aef9a70;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 1458de9f4 FUN_1458de9f4 body=107 status=ok
// SIG undefined FUN_1458de9f4(void)

void FUN_1458de9f4(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_1458dea43:
      FUN_14130acc6(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1411e04c2(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1458dea43;
  FUN_1458dea60(param_1);
  FUN_14130acc6(param_1,param_2);
  return;
}



// FUNCTION 1458dea60 FUN_1458dea60 body=325 status=ok
// SIG undefined FUN_1458dea60(void)

void FUN_1458dea60(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458deba6 FUN_1458deba6 body=195 status=ok
// SIG undefined FUN_1458deba6(void)

longlong * FUN_1458deba6(uint param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c966df8 != DAT_14c966e24) {
    puVar3 = &DAT_14c966e28;
    if (DAT_14c966e30 != (undefined *)0x0) {
      puVar3 = DAT_14c966e30;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14c966e38 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c966df0 + (longlong)iVar2 * 0x28);
        if (*plVar1 == *param_2) {
          if (plVar1 != (longlong *)0x0) goto LAB_1458dec42;
          break;
        }
        iVar2 = (int)plVar1[4];
      } while (iVar2 != -1);
    }
  }
  local_20 = param_2;
  FUN_1458dec6a(&local_14,param_1);
  plVar1 = (longlong *)(DAT_14c966df0 + (longlong)local_14 * 0x28);
LAB_1458dec42:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1 + 1;
}



// FUNCTION 1458dec6a FUN_1458dec6a body=297 status=ok
// SIG undefined FUN_1458dec6a(void)

undefined4 * FUN_1458dec6a(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458deeca(local_48);
  FUN_1458ded94(param_3,local_40);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  cVar2 = FUN_1458dee18(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14c966df8 - DAT_14c966e24;
    if (uVar3 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14c966e38)) {
      param_2 = DAT_14c966e38 - 1U & param_2;
      *(uint *)(local_40 + 0x24) = param_2;
      puVar4 = DAT_14c966e30;
      if (DAT_14c966e30 == (undefined *)0x0) {
        puVar4 = &DAT_14c966e28;
      }
      *(undefined4 *)(local_40 + 0x20) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14c966e38 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14c966e30;
      if (DAT_14c966e30 == (undefined *)0x0) {
        puVar4 = &DAT_14c966e28;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14c966e38 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14c966e38 = iVar6;
      FUN_14130aec2();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ded94 FUN_1458ded94 body=131 status=ok
// SIG undefined FUN_1458ded94(void)

undefined8 * FUN_1458ded94(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  FUN_144a5dc74(&local_38);
  local_28 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_14023423e(param_2 + 1,&local_38);
  param_2[3] = local_28;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dee18 FUN_1458dee18 body=177 status=ok
// SIG undefined FUN_1458dee18(void)

undefined8 FUN_1458dee18(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  int iVar10;
  
  if ((DAT_14c966df8 - DAT_14c966e24 != 1) && (DAT_14c966df8 != DAT_14c966e24)) {
    puVar9 = &DAT_14c966e28;
    if (DAT_14c966e30 != (undefined *)0x0) {
      puVar9 = DAT_14c966e30;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(DAT_14c966e38 - 1U & param_1) * 4);
    if (iVar10 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c966df0 + (longlong)iVar10 * 0x28);
        if (*plVar1 == *param_2) {
          if ((longlong *)plVar1[1] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar1[1] + 0x10))();
          }
          lVar6 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar7 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
          lVar8 = param_2[3];
          uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
          *(int *)(plVar1 + 2) = (int)param_2[2];
          *(undefined4 *)((longlong)plVar1 + 0x14) = uVar4;
          *(int *)(plVar1 + 3) = (int)lVar8;
          *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar5;
          *(int *)plVar1 = (int)lVar6;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_146912e80(*param_3);
          *param_3 = iVar10;
          return 1;
        }
        iVar10 = (int)plVar1[4];
      } while (iVar10 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1458deeca FUN_1458deeca body=283 status=ok
// SIG undefined FUN_1458deeca(void)

int * FUN_1458deeca(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c966e20;
  iVar3 = DAT_14c966df8;
  if (DAT_14c966e24 == 0) {
    iVar2 = DAT_14c966df8 + 1;
    bVar7 = DAT_14c966dfc == DAT_14c966df8;
    DAT_14c966df8 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14c966df0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c966e00,1);
    puVar4 = DAT_14c966e10;
    if (DAT_14c966e10 == (undefined *)0x0) {
      puVar4 = &DAT_14c966e00;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c966e20;
    DAT_14c966e20 = *(int *)(DAT_14c966df0 + 4 + lVar6 * 0x28);
    DAT_14c966e24 = DAT_14c966e24 + -1;
    if (DAT_14c966e24 != 0) {
      *(undefined4 *)(DAT_14c966df0 + (longlong)DAT_14c966e20 * 0x28) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c966e00;
  if (DAT_14c966e10 != (undefined *)0x0) {
    puVar4 = DAT_14c966e10;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14c966df0;
  return param_1;
}



// FUNCTION 1458defe6 FUN_1458defe6 body=40 status=ok
// SIG undefined FUN_1458defe6(void)

undefined8 FUN_1458defe6(undefined8 param_1,int param_2)

{
  FUN_1458df00e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458df00e FUN_1458df00e body=77 status=ok
// SIG undefined FUN_1458df00e(void)

void FUN_1458df00e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9ed960;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458df05c thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458df062 FUN_1458df062 body=40 status=ok
// SIG undefined FUN_1458df062(void)

undefined8 FUN_1458df062(undefined8 param_1,int param_2)

{
  FUN_1458df08a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458df08a FUN_1458df08a body=314 status=ok
// SIG undefined FUN_1458df08a(void)

void FUN_1458df08a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 unaff_RSI;
  
  *param_1 = &PTR_FUN_14b1c27b0;
  param_1[5] = &PTR_FUN_14b1c31b0;
  param_1[6] = &PTR_LAB_14b1c31f0;
  param_1[0x55] = &PTR_FUN_14b1c3240;
  param_1[0x56] = &PTR_FUN_14b1c32c0;
  param_1[0x57] = &PTR_FUN_14b1c32d0;
  param_1[0xcf] = &PTR_FUN_14b1c3300;
  if (param_1[0x11d] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x11a) == '\x01') {
    *(undefined1 *)(param_1 + 0x11a) = 0;
  }
  if (param_1[0x108] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x106] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  FUN_14129d1b2(param_1 + 0xd0);
  *param_1 = &PTR_FUN_14b217d70;
  param_1[5] = &PTR_LAB_14b218770;
  param_1[6] = &PTR_LAB_14b2187b0;
  param_1[0x55] = &PTR_LAB_14b218800;
  param_1[0x56] = &PTR_LAB_14b218880;
  param_1[0x57] = &PTR_LAB_14b218890;
  if (*(char *)(param_1 + 0xce) == '\x01') {
    *(undefined1 *)(param_1 + 0xce) = 0;
    FUN_14006e5d0();
    return;
  }
  *param_1 = &PTR_FUN_14a85ebb0;
  param_1[5] = &PTR_FUN_14a85f5b0;
  param_1[6] = &PTR_LAB_14a85f5f0;
  param_1[0x55] = &PTR_FUN_14a85f640;
  param_1[0x56] = &PTR_FUN_14a85f6c0;
  param_1[0x57] = &PTR_FUN_14a85f6d0;
  FUN_144760e21(param_1[0xc1],*(undefined4 *)(param_1 + 0xc2),param_3,param_4,unaff_RSI);
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xbe],*(undefined4 *)(param_1 + 0xbf),param_3,param_4,unaff_RSI);
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xba] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0xb6];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144760d56(param_1 + 0x82);
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x6f) == '\x01') {
    *(undefined1 *)(param_1 + 0x6f) = 0;
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5e));
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 1458df1c6 FUN_1458df1c6 body=94 status=ok
// SIG undefined FUN_1458df1c6(void)

void FUN_1458df1c6(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x38);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x38);
    FUN_140545fa2(uVar1);
  }
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    FUN_1458df226(uVar1,1);
    return;
  }
  return;
}



// FUNCTION 1458df226 FUN_1458df226 body=354 status=ok
// SIG undefined FUN_1458df226(void)

void FUN_1458df226(longlong *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_1458df38a(param_1 + 0xc1d,0);
  if (cVar3 != '\0') {
    local_3c = 0xffffffff;
    local_40 = 0xffffffff;
    lVar6 = FUN_14011c349();
    FUN_140ae5c1d(lVar6 + 0x78,&local_3c,&local_40);
    uVar4 = FUN_14042831e(param_1);
    uVar2 = local_3c;
    uVar1 = local_40;
    uVar9 = (ulonglong)uVar4;
    uVar5 = FUN_1403ae46b();
    if ((uVar4 == uVar5) && (lVar6 = (**(code **)(*param_1 + 0x5e8))(param_1), lVar6 != 0)) {
      lVar7 = FUN_144a7b4ca();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        uVar5 = *(byte *)(lVar6 + 0xce4) - 1;
        if (*(byte *)(lVar6 + 0xce4) == 0) {
          uVar5 = uVar4;
        }
        uVar9 = (ulonglong)uVar5;
      }
    }
    if ((int)uVar2 <= (int)uVar1) {
      uVar4 = uVar2 - 1;
      do {
        iVar8 = (int)uVar9;
        if (param_2 == '\0') {
          uVar5 = iVar8 - 1;
          if (iVar8 <= (int)uVar2) {
            uVar5 = uVar1;
          }
        }
        else {
          uVar5 = iVar8 + 1;
          if ((int)uVar1 <= iVar8) {
            uVar5 = uVar2;
          }
        }
        uVar9 = (ulonglong)uVar5;
        if ((((-1 < (int)uVar5) && ((int)uVar5 < (int)param_1[0xf1e])) &&
            (lVar6 = uVar9 * 0x48 + param_1[0xf1d], lVar6 != 0)) &&
           (((*(longlong *)(lVar6 + 0x20) != 0 && (*(longlong *)(lVar6 + 0x28) != 0)) &&
            (*(char *)(lVar6 + 0x10) == '\0')))) {
          FUN_14130b0ce(param_1,uVar5,0,0);
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458df38a FUN_1458df38a body=9 status=ok
// SIG undefined FUN_1458df38a(void)

byte FUN_1458df38a(longlong param_1)

{
  return *(byte *)(param_1 + 0x128) ^ 1;
}



// FUNCTION 1458df394 FUN_1458df394 body=229 status=ok
// SIG undefined FUN_1458df394(void)

void FUN_1458df394(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
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
  local_58 = local_38;
  local_50 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_30 + 0xc) = *(int *)((longlong)plStack_30 + 0xc) + 1;
    UNLOCK();
  }
  local_48 = (undefined4)local_28;
  uStack_44 = local_28._4_4_;
  uStack_40 = (undefined4)uStack_20;
  uStack_3c = uStack_20._4_4_;
  uVar2 = FUN_1458df47a();
  *param_3 = uVar2;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458df47a FUN_1458df47a body=187 status=ok
// SIG undefined FUN_1458df47a(void)

ulonglong FUN_1458df47a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  byte unaff_BL;
  undefined8 unaff_RSI;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar6 = 0;
        goto LAB_1458df4d7;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*param_1 != 0);
    if (*param_1 != 0) {
      local_38 = (undefined4)param_1[2];
      uStack_34 = *(undefined4 *)((longlong)param_1 + 0x14);
      uStack_30 = (undefined4)param_1[3];
      uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1c);
      unaff_BL = FUN_1458df536();
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
LAB_1458df4d7:
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),(byte)uVar6 & unaff_BL) & 0xffffffff;
}



// FUNCTION 1458df536 FUN_1458df536 body=138 status=ok
// SIG undefined FUN_1458df536(void)

undefined8 FUN_1458df536(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0) {
    uVar2 = FUN_1447addd0(param_2,0x10);
    iVar3 = FUN_1404fa484((longlong *)(param_1 + 0x140),uVar2,param_2);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x140);
      lVar6 = lVar1 + (longlong)iVar3 * 0x40;
      if ((((lVar6 != 0) &&
           (plVar4 = (longlong *)((longlong)iVar3 * 0x40 + lVar1 + 0x10), plVar4 != (longlong *)0x0)
           ) && (*plVar4 != 0)) &&
         ((*(longlong *)(lVar6 + 0x18) != 0 && ((DAT_14cb26569 & 1) != 0)))) {
        uVar5 = FUN_144904448(lVar6 + 0x20);
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1458df5c0 FUN_1458df5c0 body=40 status=ok
// SIG undefined FUN_1458df5c0(void)

undefined8 FUN_1458df5c0(undefined8 param_1,int param_2)

{
  FUN_1458df5e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458df5e8 FUN_1458df5e8 body=253 status=ok
// SIG undefined FUN_1458df5e8(void)

void FUN_1458df5e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8b62e0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_1458df6e6(param_1 + 0x26);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_14130b420(param_1 + 0x1c);
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_1458df71d(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458df6e6 FUN_1458df6e6 body=55 status=ok
// SIG undefined FUN_1458df6e6(void)

void FUN_1458df6e6(longlong *param_1)

{
  FUN_14130b4d2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458df71d FUN_1458df71d body=63 status=ok
// SIG undefined FUN_1458df71d(void)

void FUN_1458df71d(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x60);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_14130b420(puVar1 + -0x12);
      puVar1 = puVar1 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458df75c FUN_1458df75c body=63 status=ok
// SIG undefined FUN_1458df75c(void)

undefined1 FUN_1458df75c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1458df79c(param_2,param_3);
    param_3 = param_3 + 0x458;
    param_2 = param_2 + 0x458;
  }
  return 1;
}



// FUNCTION 1458df79c FUN_1458df79c body=298 status=ok
// SIG undefined FUN_1458df79c(void)

longlong FUN_1458df79c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1458df92a(param_1 + 0x20,param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  if ((*(longlong *)(param_1 + 0x40) != *(longlong *)(param_2 + 0x40)) ||
     (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  FUN_1401f3db8(param_1 + 0x78,param_2 + 0x78);
  FUN_1458df988(param_1 + 0x90,param_2 + 0x90);
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  if ((*(longlong *)(param_1 + 0xb0) != *(longlong *)(param_2 + 0xb0)) ||
     (*(int *)(param_1 + 0xb8) != *(int *)(param_2 + 0xb8))) {
    *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  FUN_1458df8c6(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



// FUNCTION 1458df8c6 FUN_1458df8c6 body=100 status=ok
// SIG undefined FUN_1458df8c6(void)

longlong FUN_1458df8c6(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_14053c976(param_1 + 0x10,param_2 + 0x10);
  FUN_14053c976(param_1 + 0x130,param_2 + 0x130);
  FUN_14053c976(param_1 + 0x250,param_2 + 0x250);
  *(undefined2 *)(param_1 + 0x370) = *(undefined2 *)(param_2 + 0x370);
  *(undefined1 *)(param_1 + 0x372) = *(undefined1 *)(param_2 + 0x372);
  return param_1;
}



// FUNCTION 1458df92a FUN_1458df92a body=93 status=ok
// SIG undefined FUN_1458df92a(void)

undefined8 * FUN_1458df92a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14029b636(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14877ddd2(param_1,iVar1);
      FUN_14877de45(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1458df988 FUN_1458df988 body=88 status=ok
// SIG undefined FUN_1458df988(void)

longlong * FUN_1458df988(longlong *param_1,longlong *param_2)

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



// FUNCTION 1458df9e0 FUN_1458df9e0 body=45 status=ok
// SIG undefined FUN_1458df9e0(void)

undefined8 FUN_1458df9e0(undefined8 param_1,int param_2)

{
  FUN_1458dfa0e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x6c8);
  }
  return param_1;
}



// FUNCTION 1458dfa0e FUN_1458dfa0e body=218 status=ok
// SIG undefined FUN_1458dfa0e(void)

void FUN_1458dfa0e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b60c1d0;
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  FUN_144a2da94(param_1 + 0xc6);
  FUN_144a2da94(param_1 + 0xbe);
  FUN_144a2da94(param_1 + 0xb6);
  FUN_144a2da94(param_1 + 0xaf);
  FUN_144a2da94(param_1 + 0xa7);
  FUN_144a2da94(param_1 + 0x9f);
  FUN_144a2da94(param_1 + 0x93);
  FUN_144a2da94(param_1 + 0x8c);
  FUN_14076ba26(param_1 + 0x3a);
  FUN_144a2da94(param_1 + 0x33);
  *param_1 = &PTR_FUN_14ac52c60;
  FUN_14076bc70(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1458dfae8 FUN_1458dfae8 body=83 status=ok
// SIG undefined FUN_1458dfae8(void)

uint * FUN_1458dfae8(undefined8 param_1,uint *param_2)

{
  undefined1 auStack_48 [43];
  uint local_1d;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14130b6cc(param_1,&local_1d);
  local_1d = local_1d & 0xffffff;
  *(undefined1 *)(param_2 + 1) = local_19;
  *param_2 = local_1d;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458dfb3c FUN_1458dfb3c body=20 status=ok
// SIG undefined FUN_1458dfb3c(void)

undefined8 FUN_1458dfb3c(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1458dfb50 FUN_1458dfb50 body=29 status=ok
// SIG undefined FUN_1458dfb50(void)

void FUN_1458dfb50(void)

{
  FUN_140b78bbe();
  FUN_140b79ab4();
  FUN_140b7b06a();
  FUN_140b79196();
  return;
}



// FUNCTION 1458dfb6e FUN_1458dfb6e body=40 status=ok
// SIG undefined FUN_1458dfb6e(void)

undefined8 FUN_1458dfb6e(undefined8 param_1,int param_2)

{
  FUN_1458dfb96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458dfb96 FUN_1458dfb96 body=87 status=ok
// SIG undefined FUN_1458dfb96(void)

void FUN_1458dfb96(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac179e0;
  FUN_1458dfc18(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1458dfbed(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458dfbed FUN_1458dfbed body=43 status=ok
// SIG undefined FUN_1458dfbed(void)

void FUN_1458dfbed(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147ef64ba(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 1458dfc18 FUN_1458dfc18 body=69 status=ok
// SIG undefined FUN_1458dfc18(void)

void FUN_1458dfc18(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x88);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458dfc5e FUN_1458dfc5e body=58 status=ok
// SIG undefined FUN_1458dfc5e(void)

void FUN_1458dfc5e(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0xd78)) {
    lVar1 = 0;
    do {
      FUN_14130b6da(*(undefined8 *)(*(longlong *)(param_1 + 0xd70) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xd78));
  }
  return;
}



// FUNCTION 1458dfc98 FUN_1458dfc98 body=40 status=ok
// SIG undefined FUN_1458dfc98(void)

undefined8 FUN_1458dfc98(undefined8 param_1,int param_2)

{
  FUN_1458dfcc0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458dfcc0 FUN_1458dfcc0 body=69 status=ok
// SIG undefined FUN_1458dfcc0(void)

void FUN_1458dfcc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6da7b0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1458dfd06(param_1);
  return;
}



// FUNCTION 1458dfd06 FUN_1458dfd06 body=63 status=ok
// SIG undefined FUN_1458dfd06(void)

void FUN_1458dfd06(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6da150;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458dfd54 FUN_1458dfd54 body=72 status=ok
// SIG undefined FUN_1458dfd54(void)

undefined8 * FUN_1458dfd54(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1412c0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1411f306c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458dfd9c FUN_1458dfd9c body=40 status=ok
// SIG undefined FUN_1458dfd9c(void)

undefined8 FUN_1458dfd9c(undefined8 param_1,int param_2)

{
  FUN_1458dfdc4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458dfdc4 FUN_1458dfdc4 body=206 status=ok
// SIG undefined FUN_1458dfdc4(void)

void FUN_1458dfdc4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5151f0;
  param_1[5] = &PTR_FUN_14a515550;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x50];
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
  plVar3 = (longlong *)param_1[0x4e];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 1458dfe92 FUN_1458dfe92 body=40 status=ok
// SIG undefined FUN_1458dfe92(void)

undefined8 FUN_1458dfe92(undefined8 param_1,int param_2)

{
  FUN_1458dfeba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458dfeba FUN_1458dfeba body=586 status=ok
// SIG undefined FUN_1458dfeba(void)

void FUN_1458dfeba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7380d0;
  param_1[0x72] = &PTR_FUN_14b738730;
  param_1[0x73] = &PTR_FUN_14b738750;
  param_1[0x74] = &PTR_FUN_14b738780;
  param_1[0x75] = &PTR_FUN_14b738790;
  param_1[0x76] = &PTR_FUN_14b738800;
  param_1[0x77] = &PTR_FUN_14b738830;
  param_1[0x78] = &PTR_FUN_14b738860;
  param_1[0x7f] = &PTR_FUN_14b738910;
  param_1[0x80] = &PTR_FUN_14b738980;
  param_1[0x81] = &PTR_FUN_14b7389f0;
  param_1[0x82] = &PTR_FUN_14b738a20;
  param_1[0x83] = &PTR_FUN_14b738a60;
  param_1[0x84] = &PTR_FUN_14b738b00;
  param_1[0x85] = &PTR_FUN_14b738b20;
  param_1[0x89] = &PTR_FUN_14b738b40;
  param_1[0x8a] = &PTR_FUN_14b738c00;
  param_1[0x8b] = &PTR_FUN_14b738c80;
  param_1[0x8c] = &PTR_FUN_14b738cd0;
  param_1[0x8d] = &PTR_FUN_14b738d10;
  param_1[0x8e] = &PTR_FUN_14b738d30;
  param_1[0x8f] = &PTR_FUN_14b738d50;
  param_1[0x90] = &PTR_FUN_14b738d70;
  param_1[0x91] = &PTR_FUN_14b738d90;
  param_1[0x92] = &PTR_FUN_14b738db0;
  param_1[0x93] = &PTR_FUN_14b738dd0;
  param_1[0x94] = &PTR_FUN_14b738df0;
  param_1[0x95] = &PTR_FUN_14b738e10;
  param_1[0x96] = &PTR_FUN_14b738e30;
  param_1[0x34b] = &PTR_FUN_14b738e50;
  param_1[0x34c] = &PTR_FUN_14b738e90;
  param_1[0x34d] = &PTR_FUN_14b738eb0;
  param_1[0x350] = &PTR_FUN_14b738ef0;
  param_1[0x351] = &PTR_FUN_14b738f20;
  param_1[0x38c] = &PTR_FUN_14b738f40;
  param_1[0x38d] = &PTR_FUN_14b738f80;
  FUN_1406398aa(param_1 + 0x3dc,1);
  param_1[0x394] = &PTR_FUN_14b738fe0;
  if (param_1[0x39c] != 0) {
    FUN_140872868(param_1 + 0x394);
  }
  FUN_1458e0104(param_1 + 0x394);
  FUN_1458e0158(param_1);
  return;
}



// FUNCTION 1458e0104 FUN_1458e0104 body=83 status=ok
// SIG undefined FUN_1458e0104(void)

void FUN_1458e0104(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b10f3d0;
  if (param_1[8] == 0) {
    *param_1 = &PTR_FUN_14b0236e0;
  }
  else {
    FUN_140872868(param_1);
    *param_1 = &PTR_FUN_14b0236e0;
    if (param_1[8] != 0) {
      FUN_140872868(param_1);
    }
  }
  FUN_1403d7c6c(param_1);
  return;
}



// FUNCTION 1458e0158 FUN_1458e0158 body=799 status=ok
// SIG undefined FUN_1458e0158(void)

void FUN_1458e0158(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1113c0;
  param_1[0x72] = &PTR_FUN_14b111a20;
  param_1[0x73] = &PTR_FUN_14b111a40;
  param_1[0x74] = &PTR_FUN_14b111a70;
  param_1[0x75] = &PTR_FUN_14b111a80;
  param_1[0x76] = &PTR_FUN_14b111af0;
  param_1[0x77] = &PTR_FUN_14b111b20;
  param_1[0x78] = &PTR_FUN_14b111b50;
  param_1[0x7f] = &PTR_FUN_14b111c00;
  param_1[0x80] = &PTR_FUN_14b111c70;
  param_1[0x81] = &PTR_FUN_14b111ce0;
  param_1[0x82] = &PTR_FUN_14b111d10;
  param_1[0x83] = &PTR_FUN_14b111d50;
  param_1[0x84] = &PTR_FUN_14b111df0;
  param_1[0x85] = &PTR_FUN_14b111e10;
  param_1[0x89] = &PTR_FUN_14b111e30;
  param_1[0x8a] = &PTR_FUN_14b111ef0;
  param_1[0x8b] = &PTR_FUN_14b111f70;
  param_1[0x8c] = &PTR_FUN_14b111fc0;
  param_1[0x8d] = &PTR_FUN_14b112000;
  param_1[0x8e] = &PTR_FUN_14b112020;
  param_1[0x8f] = &PTR_FUN_14b112040;
  param_1[0x90] = &PTR_FUN_14b112060;
  param_1[0x91] = &PTR_FUN_14b112080;
  param_1[0x92] = &PTR_FUN_14b1120a0;
  param_1[0x93] = &PTR_FUN_14b1120c0;
  param_1[0x94] = &PTR_FUN_14b1120e0;
  param_1[0x95] = &PTR_FUN_14b112100;
  param_1[0x96] = &PTR_FUN_14b112120;
  param_1[0x34b] = &PTR_FUN_14b112140;
  param_1[0x34c] = &PTR_FUN_14b112180;
  param_1[0x34d] = &PTR_FUN_14b1121a0;
  param_1[0x350] = &PTR_FUN_14b1121e0;
  param_1[0x351] = &PTR_FUN_14b112210;
  if (param_1[0x387] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x382) = 0;
  if (param_1[0x381] != 0) {
    FUN_1400020a8();
  }
  FUN_1458e0478(param_1 + 0x379);
  if (param_1[0x377] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36f] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x36e) == '\x01') {
    *(undefined1 *)(param_1 + 0x36e) = 0;
  }
  FUN_14130c001(param_1[0x367],*(undefined4 *)(param_1 + 0x368));
  if (param_1[0x367] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x363) = 0;
  if (param_1[0x362] != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_1 + 0x35a);
  param_1[0x34d] = &PTR_FUN_14b0db260;
  plVar3 = (longlong *)param_1[0x34f];
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
  FUN_140639d0a(param_1);
  return;
}



// FUNCTION 1458e0478 FUN_1458e0478 body=55 status=ok
// SIG undefined FUN_1458e0478(void)

void FUN_1458e0478(longlong *param_1)

{
  FUN_1458e04b0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458e04b0 FUN_1458e04b0 body=123 status=ok
// SIG undefined FUN_1458e04b0(void)

void FUN_1458e04b0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458e052c FUN_1458e052c body=96 status=ok
// SIG undefined FUN_1458e052c(void)

undefined8 * FUN_1458e052c(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_1 = &PTR__purecall_14a3dd718;
  FUN_1458e058e();
  FUN_1458e0604(&DAT_14caa8420,local_18,param_1,&LAB_1457e1e66);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e058e FUN_1458e058e body=117 status=ok
// SIG undefined FUN_1458e058e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1458e058e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa8438) {
    FUN_144b3d300(&DAT_14caa8438);
    if (DAT_14caa8438 == -1) {
      DAT_14caa8420 = 0;
      _DAT_14caa8428 = 0;
      _DAT_14caa8430 = 2;
      atexit(FUN_14327471f);
      _Init_thread_footer(&DAT_14caa8438);
    }
  }
  return &DAT_14caa8420;
}



// FUNCTION 1458e0604 FUN_1458e0604 body=228 status=ok
// SIG undefined FUN_1458e0604(void)

undefined8
FUN_1458e0604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14a3e1bd0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e06f4 FUN_1458e06f4 body=189 status=ok
// SIG undefined FUN_1458e06f4(void)

undefined8 * FUN_1458e06f4(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1458e07b2();
  *param_1 = &PTR_FUN_14abeb710;
  param_1[5] = &PTR_FUN_14abeba40;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_1400b22c2(&local_28,"Blackboard Based Condition");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  *(undefined1 *)((longlong)param_1 + 0xb9) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e07b2 FUN_1458e07b2 body=294 status=ok
// SIG undefined FUN_1458e07b2(void)

undefined8 * FUN_1458e07b2(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abebc10;
  param_1[5] = &PTR_FUN_14abebf40;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffff;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) & 0xfe;
  FUN_1400b22c2(&local_28,"BlackboardBase");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    local_28 = 0;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8 | 3;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 199;
  plVar1 = (longlong *)FUN_1413f6fa8();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  *(uint *)((longlong)param_1 + 0x8c) =
       *(uint *)((longlong)param_1 + 0x8c) & 0xfffffffe | (uint)*(byte *)(lVar2 + 0xd4);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e08da FUN_1458e08da body=26 status=ok
// SIG undefined FUN_1458e08da(void)

void FUN_1458e08da(undefined8 param_1)

{
  FUN_1401c3c2c();
  FUN_1458e08f4(param_1);
  return;
}



// FUNCTION 1458e08f4 FUN_1458e08f4 body=132 status=ok
// SIG undefined FUN_1458e08f4(void)

void FUN_1458e08f4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  lVar1 = FUN_1458e098c(lVar1);
  if (lVar1 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e098c FUN_1458e098c body=176 status=ok
// SIG undefined FUN_1458e098c(void)

undefined8 FUN_1458e098c(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14130c0c2(&local_28,param_1);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if (local_28 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(local_28 + 0x70);
      }
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      goto LAB_1458e09ef;
    }
  }
  uVar6 = 0;
LAB_1458e09ef:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1458e0a4a FUN_1458e0a4a body=228 status=ok
// SIG undefined FUN_1458e0a4a(void)

longlong FUN_1458e0a4a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaec30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146508aac;
    local_38 = &LAB_148c407c9;
    local_40 = FUN_1465eceaa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/OakGame",L"OakSkillNetSpecializationComponent",&DAT_14cbaec30,
                  &DAT_148c407c8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaec30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e0b3e FUN_1458e0b3e body=40 status=ok
// SIG undefined FUN_1458e0b3e(void)

undefined8 FUN_1458e0b3e(undefined8 param_1,int param_2)

{
  FUN_1458e0b66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458e0b66 FUN_1458e0b66 body=439 status=ok
// SIG undefined FUN_1458e0b66(void)

void FUN_1458e0b66(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6ac9b0;
  if ((param_1[0xe2] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xe2] + 0x50));
  }
  if ((param_1[0xdc] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xdc] + 0x50));
  }
  if ((param_1[0xd6] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xd6] + 0x50));
  }
  if ((param_1[0xd0] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xd0] + 0x50));
  }
  if ((param_1[0xca] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xca] + 0x50));
  }
  if ((param_1[0xc4] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xc4] + 0x50));
  }
  if ((param_1[0xbe] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xbe] + 0x50));
  }
  if ((param_1[0xb8] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xb8] + 0x50));
  }
  if ((param_1[0xb2] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xb2] + 0x50));
  }
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  FUN_14075380c(param_1);
  return;
}



// FUNCTION 1458e0d1e FUN_1458e0d1e body=69 status=ok
// SIG undefined FUN_1458e0d1e(void)

undefined8 * FUN_1458e0d1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4a26f0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1404db954(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458e0d64 thunk_FUN_1404db954 body=5 status=ok
// SIG undefined thunk_FUN_1404db954(void)

void thunk_FUN_1404db954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a492200;
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458e0d6a FUN_1458e0d6a body=106 status=ok
// SIG undefined FUN_1458e0d6a(void)

void FUN_1458e0d6a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    local_18 = param_3[2];
    local_28 = *param_3;
    uStack_20 = param_3[1];
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    FUN_1458e0dd6(local_48,&local_48,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e0dd6 FUN_1458e0dd6 body=76 status=ok
// SIG undefined FUN_1458e0dd6(void)

void FUN_1458e0dd6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_4,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_1458e0e22(lVar1,param_2,param_3,0xffffffffffffffff,0);
  }
  return;
}



// FUNCTION 1458e0e22 FUN_1458e0e22 body=297 status=ok
// SIG undefined FUN_1458e0e22(void)

void FUN_1458e0e22(longlong param_1,undefined8 *param_2,undefined4 *param_3,ulonglong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bVar2 = param_4 < 0xffffffff00000000 && (int)param_4 != -1;
  local_98 = param_2[2];
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  uStack_90 = *param_3;
  uStack_8c = param_3[1];
  uStack_88 = param_3[2];
  uStack_84 = param_3[3];
  uStack_80 = *(undefined8 *)(param_3 + 4);
  local_78[0] = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x48,8);
  *local_68 = (longlong)&PTR_FUN_14aa1de80;
  *(undefined4 *)(local_68 + 5) = uStack_88;
  *(undefined4 *)((longlong)local_68 + 0x2c) = uStack_84;
  *(undefined4 *)(local_68 + 6) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)local_68 + 0x34) = uStack_80._4_4_;
  *(undefined4 *)(local_68 + 3) = (undefined4)local_98;
  *(undefined4 *)((longlong)local_68 + 0x1c) = local_98._4_4_;
  *(undefined4 *)(local_68 + 4) = uStack_90;
  *(undefined4 *)((longlong)local_68 + 0x24) = uStack_8c;
  *(undefined4 *)(local_68 + 1) = (undefined4)local_a8;
  *(undefined4 *)((longlong)local_68 + 0xc) = local_a8._4_4_;
  *(undefined4 *)(local_68 + 2) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)local_68 + 0x14) = uStack_a0._4_4_;
  *(bool *)(local_68 + 7) = bVar2;
  local_68[8] = param_1;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_143622d00;
  }
  local_b8 = local_78;
  FUN_140f482b4(param_1,param_4,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar2) & 0xffffffff,
                param_5);
  if (local_78[0] != (code *)0x0) {
    plVar1 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar1 = local_58;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e0f4c FUN_1458e0f4c body=124 status=ok
// SIG undefined FUN_1458e0f4c(void)

longlong * FUN_1458e0f4c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b92ee90;
  FUN_1458e0fc8(plVar3 + 2,0);
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



// FUNCTION 1458e0fc8 FUN_1458e0fc8 body=91 status=ok
// SIG undefined FUN_1458e0fc8(void)

undefined8 * FUN_1458e0fc8(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_1458e1024(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_1458e1024();
  }
  FUN_141067fd6(param_1,param_2);
  *param_1 = &PTR_FUN_14b9a3990;
  return param_1;
}



// FUNCTION 1458e1024 FUN_1458e1024 body=228 status=ok
// SIG undefined FUN_1458e1024(void)

longlong FUN_1458e1024(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbfde8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465aab14;
    local_38 = &LAB_148cb4787;
    local_40 = FUN_1410b6e77;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2920;
    FUN_14081cfa3(L"/Script/OakGame",L"ResurrectTravelStationObject",&DAT_14cbbfde8,&DAT_148cb4786);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbfde8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e110a FUN_1458e110a body=9 status=ok
// SIG undefined FUN_1458e110a(void)

void FUN_1458e110a(longlong param_1)

{
  FUN_14130c426(param_1 + 0x10);
  return;
}



// FUNCTION 1458e111c FUN_1458e111c body=239 status=ok
// SIG undefined FUN_1458e111c(void)

undefined8 * FUN_1458e111c(undefined8 *param_1)

{
  FUN_1406046aa();
  *param_1 = &PTR_FUN_14b7fbf30;
  param_1[5] = &PTR_LAB_14b7fc230;
  param_1[6] = &PTR_LAB_14b7fc260;
  param_1[0x14] = &PTR_LAB_14b7fc290;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf00000d0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xf00000d0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 7;
  *(undefined1 *)((longlong)param_1 + 0x174) = 1;
  param_1[0x2f] = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 1458e120c FUN_1458e120c body=218 status=ok
// SIG undefined FUN_1458e120c(void)

void FUN_1458e120c(undefined8 param_1,longlong param_2)

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
  FUN_1458e12e8();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e12e8 FUN_1458e12e8 body=132 status=ok
// SIG undefined FUN_1458e12e8(void)

void FUN_1458e12e8(void)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1400b22c2(&local_18,"WeaponChanged");
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar1 = local_18;
    if (local_10 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458e136e FUN_1458e136e body=179 status=ok
// SIG undefined FUN_1458e136e(void)

bool FUN_1458e136e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e1422 FUN_1458e1422 body=46 status=ok
// SIG undefined FUN_1458e1422(void)

void FUN_1458e1422(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  if (*param_4 != '\x01') {
    return;
  }
  FUN_1458e1450();
  FUN_1458e1ab6(param_1);
  FUN_1458e1cd6(param_1);
  return;
}



// FUNCTION 1458e1450 FUN_1458e1450 body=510 status=ok
// SIG undefined FUN_1458e1450(void)

void FUN_1458e1450(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar3 = FUN_1408bb964(param_1 + 0x44);
      if (lVar3 != 0) {
        lVar4 = FUN_1403ca142();
        if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
            (lVar3 = *(longlong *)(lVar3 + 0x1e0), lVar3 != 0)) &&
           (lVar4 = *(longlong *)(lVar3 + 0x30), lVar4 != 0)) {
          lVar3 = *(longlong *)(lVar3 + 0x68);
          lVar5 = FUN_14130c5c8();
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
              (lVar3 != 0)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            FUN_140d27df6(lVar3,local_2c,lVar2);
            if (*(longlong *)(param_1 + 0x58) == 0) {
              local_48 = (undefined8 *)0x0;
              local_40 = 0;
              FUN_1446efa72(&local_48,0,3,0x10);
              puVar1 = local_48;
              local_40 = 3;
              *local_48 = &PTR_LAB_14b98d0c0;
              LOCK();
              UNLOCK();
              lVar3 = DAT_14c758608 + 1;
              lVar2 = DAT_14c758608 + 1;
              if (lVar3 == 0) {
                LOCK();
                UNLOCK();
                lVar3 = DAT_14c758608 + 2;
                lVar2 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar2;
              local_48[2] = lVar3;
              *local_48 = &PTR_FUN_14b9b8690;
              local_48[3] = 0;
              FUN_14485c47a(local_48 + 3,param_1);
              puVar1[4] = FUN_14162ccb2;
              *(undefined4 *)(puVar1 + 5) = 0;
              FUN_1458e16ec(lVar4,&local_38,local_2c,&local_48);
              *(undefined8 *)(param_1 + 0x58) = local_38;
              FUN_1449db362(&local_48);
            }
            FUN_1458e1650(lVar4,local_2c);
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



// FUNCTION 1458e1650 FUN_1458e1650 body=155 status=ok
// SIG undefined FUN_1458e1650(void)

void FUN_1458e1650(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(longlong *)(param_1 + 0x1b0) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
    local_14 = FUN_140b9fef0(lVar1,param_2,0);
    lVar1 = FUN_140b9ffa8(param_1);
    if (lVar1 != 0) {
      lVar2 = FUN_14130c6ae();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_1458e19a0(lVar1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e16ec FUN_1458e16ec body=184 status=ok
// SIG undefined FUN_1458e16ec(void)

undefined8 *
FUN_1458e16ec(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  if (((*(longlong *)(param_1 + 0x1b0) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
    local_24 = FUN_140b9fef0(lVar1,param_3,0);
    lVar1 = FUN_140b9ffa8(param_1);
    if (lVar1 != 0) {
      lVar2 = FUN_14130c6ae();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_1458e17a6(lVar1,param_2,param_4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e17a6 FUN_1458e17a6 body=160 status=ok
// SIG undefined FUN_1458e17a6(void)

undefined8 * FUN_1458e17a6(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar1 != '\0') {
      local_38 = 0;
      local_30 = 0;
      FUN_1458e1848(&local_38,param_3);
      FUN_1458e18c6(param_1 + 0x198,param_2,&local_38);
      FUN_1449db362(&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e1848 FUN_1458e1848 body=124 status=ok
// SIG undefined FUN_1458e1848(void)

void FUN_1458e1848(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e18c6 FUN_1458e18c6 body=216 status=ok
// SIG undefined FUN_1458e18c6(void)

undefined8 * FUN_1458e18c6(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e19a0 FUN_1458e19a0 body=277 status=ok
// SIG undefined FUN_1458e19a0(void)

void FUN_1458e19a0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x159) == '\0') {
    *(undefined1 *)(param_1 + 0x159) = 1;
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar4 = 0;
    }
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar1 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14b4345a0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14b4347a0;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar1[4] = FUN_1415c790a;
    FUN_14130c794(uVar4,param_1,&local_30,1);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e1ab6 FUN_1458e1ab6 body=329 status=ok
// SIG undefined FUN_1458e1ab6(void)

void FUN_1458e1ab6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined7 uStack_57;
  longlong *local_50;
  PSRWLOCK local_48;
  int local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_1405c673d();
  FUN_1402815f4(param_1,&local_58);
  lVar4 = *(longlong *)(CONCAT71(uStack_57,local_58) + 0x3e0);
  local_48 = (PSRWLOCK)(lVar4 + 0xc0);
  local_40 = 1;
  AcquireSRWLockExclusive(local_48);
  *(int *)(lVar4 + 0xb8) = *(int *)(lVar4 + 0xb8) + 1;
  local_30 = 1;
  local_38 = lVar4;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  FUN_14130caba(param_1,&local_48,uVar3);
  lVar4 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      lVar4 = FUN_1402a1246(lVar4);
      if (lVar4 != 0) {
        local_58 = *(undefined1 *)(lVar4 + 0x710);
        FUN_1458e1c14(param_1,&local_48,uVar3);
      }
    }
  }
  if (local_40 != 0) {
    if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001458e1bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive(local_48);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
}



// FUNCTION 1458e1c14 FUN_1458e1c14 body=193 status=ok
// SIG undefined FUN_1458e1c14(void)

void FUN_1458e1c14(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_1402a1246(lVar1);
      if (lVar1 != 0) {
        FUN_14130ca8a(param_3,&local_30,*param_4,1);
        lVar1 = *(longlong *)(param_2 + 0x10);
        if (local_30 == *(longlong *)(lVar1 + 0x78)) {
          if (*(int *)(lVar1 + 0x80) != 0) goto LAB_1458e1ca0;
          iVar3 = 1;
        }
        else {
          iVar3 = *(int *)(lVar1 + 0x80) + 1;
        }
        *(longlong *)(lVar1 + 0x78) = local_30;
        *(int *)(lVar1 + 0x80) = iVar3;
      }
    }
  }
LAB_1458e1ca0:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e1cd6 FUN_1458e1cd6 body=757 status=ok
// SIG undefined FUN_1458e1cd6(void)

void FUN_1458e1cd6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  char local_98 [4];
  longlong local_94;
  uint local_8c;
  char local_88 [4];
  longlong local_84;
  uint local_7c;
  PSRWLOCK local_78;
  int local_70;
  uint *local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  longlong *local_50;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1402815f4(param_1,&local_58);
  puVar7 = *(uint **)(CONCAT71(uStack_57,local_58) + 0x3e0);
  local_78 = (PSRWLOCK)(puVar7 + 0x30);
  local_70 = 1;
  AcquireSRWLockExclusive(local_78);
  puVar7[0x2e] = puVar7[0x2e] + 1;
  local_60 = 1;
  local_68 = puVar7;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  local_88[0] = '\0';
  local_84 = 0;
  local_7c = 0;
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_1414ae211(&local_58);
  lVar5 = FUN_140149a73(uVar4,0);
  if (lVar5 != 0) {
    FUN_14039fc7b(&local_58,local_88,lVar5,0);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  puVar7 = local_68;
  if (local_88[0] == '\x03') {
    bVar8 = local_84 == 0;
LAB_1458e1dc3:
    uVar3 = (uint)!bVar8;
  }
  else {
    uVar3 = local_7c;
    if (local_88[0] != '\x02') {
      if (local_88[0] == '\x01') {
        bVar8 = local_7c == 0;
        goto LAB_1458e1dc3;
      }
      uVar3 = 0;
    }
  }
  if (uVar3 == *local_68) {
    if (local_68[1] == 0) {
      uVar6 = 1;
      goto LAB_1458e1f5a;
    }
  }
  else {
    uVar6 = local_68[1] + 1;
LAB_1458e1f5a:
    *local_68 = uVar3;
    local_68[1] = uVar6;
  }
  uVar4 = FUN_1405c673d();
  FUN_14130caba(param_1,&local_78,uVar4);
  local_98[0] = '\0';
  local_94 = 0;
  local_8c = 0;
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_1414ae1a9(&local_58);
  lVar5 = FUN_140149a73(uVar4,0);
  if (lVar5 != 0) {
    FUN_14039fc7b(&local_58,local_98,lVar5,0);
    puVar7 = local_68;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] == '\x03') {
    bVar8 = local_94 == 0;
LAB_1458e1e72:
    uVar3 = (uint)!bVar8;
  }
  else {
    uVar3 = local_8c;
    if ((local_98[0] != '\x02') && (uVar3 = 0, local_98[0] == '\x01')) {
      bVar8 = local_8c == 0;
      goto LAB_1458e1e72;
    }
  }
  if (uVar3 == puVar7[2]) {
    if (puVar7[3] == 0) {
      uVar6 = 1;
      goto LAB_1458e1fba;
    }
  }
  else {
    uVar6 = puVar7[3] + 1;
LAB_1458e1fba:
    puVar7[2] = uVar3;
    puVar7[3] = uVar6;
  }
  if (local_98[0] == '\x03') {
    bVar8 = local_94 == 0;
  }
  else {
    if (local_98[0] == '\x02') {
      local_58 = (undefined1)local_8c;
      goto LAB_1458e1e9d;
    }
    if (local_98[0] != '\x01') {
      local_58 = 0;
      goto LAB_1458e1e9d;
    }
    bVar8 = local_8c == 0;
  }
  local_58 = !bVar8;
LAB_1458e1e9d:
  uVar4 = FUN_1405c673d();
  FUN_1458e1fcc(param_1,&local_78,uVar4,&local_58);
  if (local_70 == 0) {
    ReleaseSRWLockShared(local_78);
  }
  else {
    ReleaseSRWLockExclusive(local_78);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458e1fcc FUN_1458e1fcc body=273 status=ok
// SIG undefined FUN_1458e1fcc(void)

void FUN_1458e1fcc(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar2 = FUN_1402a1246(lVar2);
      if (lVar2 != 0) {
        if (*param_4 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
        uVar4 = FUN_1405c673d();
        uVar1 = FUN_148cef1ee(uVar4,*(undefined1 *)(lVar2 + 0x710),*param_4);
        FUN_14130ca8a(param_3,&local_30,uVar1,1);
        lVar2 = *(longlong *)(param_2 + 0x10);
        if (local_30 == *(longlong *)(lVar2 + 0xa0)) {
          if (*(int *)(lVar2 + 0xa8) != 0) goto LAB_1458e20d1;
          iVar5 = 1;
        }
        else {
          iVar5 = *(int *)(lVar2 + 0xa8) + 1;
        }
        *(longlong *)(lVar2 + 0xa0) = local_30;
        *(int *)(lVar2 + 0xa8) = iVar5;
      }
    }
  }
LAB_1458e20d1:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e20f2 FUN_1458e20f2 body=147 status=ok
// SIG undefined FUN_1458e20f2(void)

void FUN_1458e20f2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458e2194 FUN_1458e2194 body=54 status=ok
// SIG undefined FUN_1458e2194(void)

undefined8 * FUN_1458e2194(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b00bc40;
  FUN_14051f4c4(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458e21d4 FUN_1458e21d4 body=59 status=ok
// SIG undefined FUN_1458e21d4(void)

void FUN_1458e21d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b942af0;
  FUN_14597589f(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140c72088(param_1);
  return;
}



// FUNCTION 1458e2210 FUN_1458e2210 body=192 status=ok
// SIG undefined FUN_1458e2210(void)

void FUN_1458e2210(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14caf7188 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
    FUN_1458e22d2(puVar1,param_1);
    local_20 = puVar1;
  }
  else {
    (**(code **)*DAT_14caf7188)(DAT_14caf7188,&local_20,param_1);
  }
  ppuVar2 = (undefined8 **)(param_1 + 0x210);
  if (ppuVar2 != &local_20) {
    puVar1 = *ppuVar2;
    *ppuVar2 = local_20;
    local_20 = (undefined8 *)0x0;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1458e227b;
    (**(code **)*puVar1)(puVar1,1);
  }
  if (local_20 != (undefined8 *)0x0) {
    (**(code **)*local_20)(local_20,1);
  }
LAB_1458e227b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e22d2 FUN_1458e22d2 body=206 status=ok
// SIG undefined FUN_1458e22d2(void)

undefined8 * FUN_1458e22d2(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  *param_1 = &PTR_FUN_14aa35ae0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    lVar7 = FUN_1458e23a0();
    param_1[0xf] = lVar7;
    plVar8 = (longlong *)FUN_144800528();
    lVar9 = plVar8[0x22];
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 1000))(plVar8);
      lVar9 = plVar8[0x22];
    }
    uVar1 = *(undefined8 *)(lVar9 + 0x118);
    uVar2 = *(undefined8 *)(lVar9 + 0x120);
    uVar3 = *(undefined8 *)(lVar9 + 0x128);
    uVar4 = *(undefined8 *)(lVar9 + 0x130);
    uVar5 = *(undefined8 *)(lVar9 + 0x138);
    uVar6 = *(undefined8 *)(lVar9 + 0x140);
    *(undefined4 *)(lVar7 + 0xdc) = *(undefined4 *)(lVar9 + 0x148);
    *(undefined8 *)(lVar7 + 0xcc) = uVar5;
    *(undefined8 *)(lVar7 + 0xd4) = uVar6;
    *(undefined8 *)(lVar7 + 0xbc) = uVar3;
    *(undefined8 *)(lVar7 + 0xc4) = uVar4;
    *(undefined8 *)(lVar7 + 0xac) = uVar1;
    *(undefined8 *)(lVar7 + 0xb4) = uVar2;
  }
  return param_1;
}



// FUNCTION 1458e23a0 FUN_1458e23a0 body=95 status=ok
// SIG undefined FUN_1458e23a0(void)

void * FUN_1458e23a0(longlong param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x440);
  memset(_Dst,0,0x440);
  FUN_1458e2400(_Dst);
  if ((*(byte *)((longlong)_Dst + 0x41) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1e8) = 1;
  }
  *(longlong *)((longlong)_Dst + 0x18) = param_1;
  FUN_141300b68(param_1 + 0x70,_Dst);
  return _Dst;
}



// FUNCTION 1458e2400 FUN_1458e2400 body=229 status=ok
// SIG undefined FUN_1458e2400(void)

undefined8 * FUN_1458e2400(undefined8 *param_1)

{
  FUN_1458e24e6();
  *param_1 = &PTR_FUN_14aa4ccd0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x42c800003dcccccd;
  *(undefined1 **)((longlong)param_1 + 0xb4) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x43c800003f800000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x3ecccccd00000000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x1a) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x1b) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x42c80000;
  FUN_1458e258c(param_1 + 0x1c);
  FUN_1458e258c(param_1 + 0x46);
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  return param_1;
}



// FUNCTION 1458e24e6 FUN_1458e24e6 body=166 status=ok
// SIG undefined FUN_1458e24e6(void)

undefined8 * FUN_1458e24e6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 8) = 0x401;
  *param_1 = &PTR_FUN_14aa4cdd0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xb] = puVar1;
  param_1[10] = puVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xf] = puVar1;
  param_1[0xe] = puVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0x13] = puVar1;
  param_1[0x12] = puVar1;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 1458e258c FUN_1458e258c body=333 status=ok
// SIG undefined FUN_1458e258c(void)

longlong FUN_1458e258c(longlong param_1)

{
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x43c80000;
  *(undefined1 *)(param_1 + 0x14) = DAT_14cafa558;
  *(undefined1 *)(param_1 + 0x1c) = DAT_14cafa559;
  *(undefined1 *)(param_1 + 0x24) = DAT_14c76190c;
  FUN_1458e26da(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0xa8) = 0xa00000000;
  *(undefined4 *)(param_1 + 0xb4) = 0x41200000;
  *(undefined4 *)(param_1 + 0xbc) = 0x40800000;
  *(undefined4 *)(param_1 + 0xc4) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xcc) = 0x40000000;
  *(undefined1 *)(param_1 + 0xd4) = DAT_14cafa568;
  *(undefined1 *)(param_1 + 0xdc) = DAT_14cafa569;
  *(undefined1 *)(param_1 + 0xe4) = DAT_14c761932;
  *(undefined4 *)(param_1 + 0xec) = DAT_14c761934;
  *(undefined4 *)(param_1 + 0xf4) = DAT_14c761938;
  *(undefined4 *)(param_1 + 0xfc) = DAT_14c76193c;
  *(undefined4 *)(param_1 + 0x104) = DAT_14c761940;
  *(undefined2 *)(param_1 + 0x10c) = DAT_14caf7c70;
  *(undefined2 *)(param_1 + 0x114) = DAT_14caf7c74;
  *(undefined1 *)(param_1 + 0x11c) = DAT_14caf7c78;
  *(undefined1 *)(param_1 + 0x124) = DAT_14caf7c79;
  *(undefined1 *)(param_1 + 300) = DAT_14c761824;
  *(undefined1 *)(param_1 + 0x134) = DAT_14caf7c7a;
  *(undefined1 *)(param_1 + 0x13c) = DAT_14caf7c7b;
  *(undefined1 *)(param_1 + 0x144) = DAT_14c761825;
  *(undefined1 *)(param_1 + 0x14c) = DAT_14caf7c7c;
  return param_1;
}



// FUNCTION 1458e26da FUN_1458e26da body=188 status=ok
// SIG undefined FUN_1458e26da(void)

void FUN_1458e26da(longlong param_1)

{
  *(undefined4 *)(param_1 + 4) = DAT_14cafa55c;
  *(undefined4 *)(param_1 + 0xc) = DAT_14c761910;
  *(undefined4 *)(param_1 + 0x14) = DAT_14c761914;
  *(undefined4 *)(param_1 + 0x1c) = DAT_14cafa560;
  *(undefined4 *)(param_1 + 0x24) = DAT_14c761918;
  *(undefined4 *)(param_1 + 0x2c) = DAT_14c76191c;
  *(undefined4 *)(param_1 + 0x34) = DAT_14c761920;
  *(undefined4 *)(param_1 + 0x3c) = DAT_14c761924;
  *(undefined4 *)(param_1 + 0x44) = DAT_14c761928;
  *(undefined4 *)(param_1 + 0x4c) = DAT_14c76192c;
  *(undefined1 *)(param_1 + 0x54) = DAT_14cafa564;
  *(undefined1 *)(param_1 + 0x5c) = DAT_14cafa565;
  *(undefined1 *)(param_1 + 100) = DAT_14c761930;
  *(undefined1 *)(param_1 + 0x6c) = DAT_14cafa566;
  *(undefined1 *)(param_1 + 0x74) = DAT_14cafa567;
  *(undefined1 *)(param_1 + 0x7c) = DAT_14c761931;
  return;
}



// FUNCTION 1458e279e FUN_1458e279e body=387 status=ok
// SIG undefined FUN_1458e279e(void)

undefined8 * FUN_1458e279e(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140d4f264();
  *param_1 = &PTR_FUN_14b975680;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0xf00000d0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0xf00000d0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0xf00000d0;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = L"/Script/OakGame.InventoryAugment_DurationVariance";
  local_30 = 0x31;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e2922 FUN_1458e2922 body=40 status=ok
// SIG undefined FUN_1458e2922(void)

undefined8 FUN_1458e2922(undefined8 param_1,int param_2)

{
  FUN_1458e294a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458e294a FUN_1458e294a body=57 status=ok
// SIG undefined FUN_1458e294a(void)

void FUN_1458e294a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b63e4e0;
  FUN_1458e2983(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 1458e2983 FUN_1458e2983 body=38 status=ok
// SIG undefined FUN_1458e2983(void)

void FUN_1458e2983(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458e29aa(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1458e29aa FUN_1458e29aa body=94 status=ok
// SIG undefined FUN_1458e29aa(void)

void FUN_1458e29aa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b23f4f0;
  plVar3 = (longlong *)param_1[6];
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
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458e2a08 FUN_1458e2a08 body=109 status=ok
// SIG undefined FUN_1458e2a08(void)

int FUN_1458e2a08(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e2a7c FUN_1458e2a7c body=57 status=ok
// SIG undefined FUN_1458e2a7c(void)

void FUN_1458e2a7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb251a8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb251a8 = FUN_140002ddd(FUN_146445e7a,uVar1,L"GbxAudioGraphState_Parallel");
  }
  return;
}



// FUNCTION 1458e2abc FUN_1458e2abc body=57 status=ok
// SIG undefined FUN_1458e2abc(void)

void FUN_1458e2abc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ab10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ab10 = FUN_140002ddd(FUN_1464cbb34,uVar1,L"GbxBrainAspect_Follow");
  }
  return;
}



// FUNCTION 1458e2afc FUN_1458e2afc body=57 status=ok
// SIG undefined FUN_1458e2afc(void)

void FUN_1458e2afc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69178 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69178 = FUN_140002ddd(FUN_14651f2ac,uVar1,L"GpsGenerator_InventoryPickups");
  }
  return;
}



// FUNCTION 1458e2b3c FUN_1458e2b3c body=57 status=ok
// SIG undefined FUN_1458e2b3c(void)

void FUN_1458e2b3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1958 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1958 = FUN_140002ddd(FUN_1465b0c2e,uVar1,L"GbxMomentNodeState_OakTravelToAINode");
  }
  return;
}



// FUNCTION 1458e2b7e FUN_1458e2b7e body=166 status=ok
// SIG undefined FUN_1458e2b7e(void)

undefined8 * FUN_1458e2b7e(undefined8 *param_1)

{
  FUN_141224d42();
  *param_1 = &PTR_FUN_14ac8cf40;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x34] = &PTR_FUN_14a1a0a80;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x39) = 0xc4750000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x40] = &PTR_FUN_14a1a0aa0;
  *(undefined4 *)(param_1 + 0x43) = 2;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  return param_1;
}



// FUNCTION 1458e2c24 FUN_1458e2c24 body=72 status=ok
// SIG undefined FUN_1458e2c24(void)

undefined8 * FUN_1458e2c24(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6b81a0;
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  FUN_1458e2c6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458e2c6c FUN_1458e2c6c body=124 status=ok
// SIG undefined FUN_1458e2c6c(void)

void FUN_1458e2c6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b06a760;
  FUN_14051f4c4(param_1 + 0x6f);
  FUN_14051f4c4(param_1 + 0x59);
  FUN_14051f4c4(param_1 + 0x42);
  FUN_14051f4c4(param_1 + 0x2c);
  FUN_14051f4c4(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1458e2ce8(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458e2ce8 FUN_1458e2ce8 body=55 status=ok
// SIG undefined FUN_1458e2ce8(void)

void FUN_1458e2ce8(longlong *param_1)

{
  FUN_1458e2d20(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458e2d20 FUN_1458e2d20 body=121 status=ok
// SIG undefined FUN_1458e2d20(void)

void FUN_1458e2d20(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458e2d9a FUN_1458e2d9a body=40 status=ok
// SIG undefined FUN_1458e2d9a(void)

undefined8 FUN_1458e2d9a(undefined8 param_1,int param_2)

{
  FUN_1458e2dc2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458e2dc2 FUN_1458e2dc2 body=72 status=ok
// SIG undefined FUN_1458e2dc2(void)

void FUN_1458e2dc2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b01a590;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140fbdbe2(param_1 + 0x10);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458e2e0a FUN_1458e2e0a body=36 status=ok
// SIG undefined FUN_1458e2e0a(void)

void FUN_1458e2e0a(undefined8 param_1)

{
  FUN_1458e3280();
  FUN_1458e2edc(param_1);
  FUN_1458e2e2e(param_1,0);
  return;
}



// FUNCTION 1458e2e2e FUN_1458e2e2e body=172 status=ok
// SIG undefined FUN_1458e2e2e(void)

void FUN_1458e2e2e(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (param_2 == '\0') {
        local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x18);
        FUN_1458e2f44(lVar1 + 0x7c78);
      }
      else {
        local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x18);
        FUN_1458e3040(lVar1 + 0x7c78,&local_28,*(longlong *)(param_1 + 0x170) + 0x4d0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e2edc FUN_1458e2edc body=104 status=ok
// SIG undefined FUN_1458e2edc(void)

void FUN_1458e2edc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (*(longlong *)(&DAT_00006850 + lVar1) != 0)) &&
       (*(longlong *)(param_1 + 0x178) != 0)) {
      FUN_14480f766(*(longlong *)(&DAT_00006850 + lVar1) + 0x41e8);
    }
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  return;
}



// FUNCTION 1458e2f44 FUN_1458e2f44 body=251 status=ok
// SIG undefined FUN_1458e2f44(void)

void FUN_1458e2f44(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int local_4c;
  
  iVar1 = *(int *)(param_1 + 0x238);
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x230);
    local_4c = 0;
    bVar5 = *plVar2 == *param_2;
    iVar9 = 0;
    do {
      lVar7 = (longlong)iVar9;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      plVar6 = plVar2 + lVar7 * 0xb + 0xb;
      iVar11 = iVar9;
      lVar8 = lVar7;
      do {
        lVar8 = lVar8 + 1;
        iVar10 = iVar4;
        if (lVar12 <= lVar8) break;
        lVar3 = *plVar6;
        iVar11 = iVar11 + 1;
        plVar6 = plVar6 + 0xb;
        iVar10 = iVar11;
      } while (bVar5 == (lVar3 == *param_2));
      iVar4 = iVar10 - iVar9;
      if (bVar5 == false) {
        if (local_4c != iVar9) {
          memmove(plVar2 + (longlong)local_4c * 0xb,plVar2 + lVar7 * 0xb,(longlong)iVar4 * 0x58);
        }
        local_4c = local_4c + iVar4;
      }
      else {
        FUN_140e10c43(plVar2 + lVar7 * 0xb,iVar4);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar9 = iVar10;
    } while (lVar8 < lVar12);
    *(int *)(param_1 + 0x238) = local_4c;
  }
  return;
}



// FUNCTION 1458e3040 FUN_1458e3040 body=190 status=ok
// SIG undefined FUN_1458e3040(void)

void FUN_1458e3040(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x230);
  iVar1 = *(int *)(param_1 + 0x238);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    lVar4 = lVar5 * 0x58;
    plVar3 = plVar2;
    do {
      if (*plVar3 == *param_2) {
        if (plVar3 != (longlong *)0x0) goto LAB_1458e30bf;
        break;
      }
      plVar3 = plVar3 + 0xb;
      lVar4 = lVar4 + -0x58;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 0x238) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x23c) < iVar1 + 1U) {
    FUN_1458e31f0((undefined8 *)(param_1 + 0x230),iVar1);
    plVar2 = *(longlong **)(param_1 + 0x230);
  }
  plVar3 = plVar2 + lVar5 * 0xb;
  plVar2[lVar5 * 0xb + 8] = 0;
  (plVar2 + lVar5 * 0xb + 8)[1] = 0;
  plVar2[lVar5 * 0xb + 6] = 0;
  (plVar2 + lVar5 * 0xb + 6)[1] = 0;
  plVar2[lVar5 * 0xb + 4] = 0;
  (plVar2 + lVar5 * 0xb + 4)[1] = 0;
  plVar2[lVar5 * 0xb + 2] = 0;
  (plVar2 + lVar5 * 0xb + 2)[1] = 0;
  plVar2[lVar5 * 0xb] = 0;
  (plVar2 + lVar5 * 0xb)[1] = 0;
  plVar2[lVar5 * 0xb + 10] = 0;
  plVar2[lVar5 * 0xb] = *param_2;
LAB_1458e30bf:
  FUN_1458e30fe(plVar3 + 1,param_3);
  return;
}



// FUNCTION 1458e30fe FUN_1458e30fe body=120 status=ok
// SIG undefined FUN_1458e30fe(void)

longlong FUN_1458e30fe(longlong param_1,longlong param_2)

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
    FUN_1458e3176(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1458e3176 FUN_1458e3176 body=121 status=ok
// SIG undefined FUN_1458e3176(void)

undefined8 * FUN_1458e3176(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1410a2e32(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447cc1b4(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0xc);
    }
  }
  return param_1;
}



// FUNCTION 1458e31f0 FUN_1458e31f0 body=143 status=ok
// SIG undefined FUN_1458e31f0(void)

void FUN_1458e31f0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458e3280 FUN_1458e3280 body=261 status=ok
// SIG undefined FUN_1458e3280(void)

void FUN_1458e3280(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140670e16();
  lVar1 = FUN_140a29fb0(*(undefined8 *)(param_1 + 0x38));
  if (lVar1 != 0) {
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FUN_1400bc8c2(lVar1);
  }
  lVar1 = FUN_14479d2ce(param_1 + 0x168);
  if (lVar1 != 0) {
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FUN_1400bc8c2(lVar1 + 0x1218);
  }
  lVar1 = FUN_14479d2ce(param_1 + 0x168);
  if (lVar1 != 0) {
    FUN_1409df526(lVar1,&DAT_14cb8ceb8);
  }
  if ((param_2 == '\x01') && (lVar1 = *(longlong *)(param_1 + 0x38), lVar1 != 0)) {
    lVar2 = FUN_14070cc62();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30 && (lVar1 = *(longlong *)(lVar1 + 0x858), lVar1 != 0)))) {
      iVar3 = 2;
      if (2 < *(int *)(lVar1 + 0x153c)) {
        iVar3 = *(int *)(lVar1 + 0x153c);
      }
      *(int *)(lVar1 + 0x153c) = iVar3;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e3386 FUN_1458e3386 body=27 status=ok
// SIG undefined FUN_1458e3386(void)

void FUN_1458e3386(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(char *)(param_1 + 0x178) != '\x03')) {
    FUN_1458e33a2(param_1 + 0x4ea0);
    return;
  }
  return;
}



// FUNCTION 1458e33a2 FUN_1458e33a2 body=9 status=ok
// SIG undefined FUN_1458e33a2(void)

void FUN_1458e33a2(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x50);
  return;
}



// FUNCTION 1458e33ac FUN_1458e33ac body=216 status=ok
// SIG undefined FUN_1458e33ac(void)

void FUN_1458e33ac(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_14011c349();
  cVar1 = FUN_14486ea84(param_2);
  if (cVar1 != '\0') {
    lVar3 = FUN_14008e0ae(param_2);
    lVar3 = *(longlong *)(lVar3 + 0x10);
    lVar2 = FUN_14011c2be(lVar2 + 0x250);
    if (lVar3 == lVar2) {
      lVar2 = FUN_144a883b6(param_1 + 0x30);
      if (lVar2 != 0) {
        lVar3 = FUN_144a2f878();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          uVar4 = (**(code **)(*(longlong *)(lVar2 + 0x3a20) + 0x10))(lVar2 + 0x3a20);
          FUN_140457ffc(uVar4,param_1);
        }
      }
      FUN_1457cbe48(param_1);
      cVar1 = FUN_140083514(param_1 + 0xb0,0);
      if ((cVar1 != '\0') && (cVar1 = FUN_14008355a(param_1 + 0xb8,0), cVar1 != '\0')) {
        return;
      }
      FUN_145acb64c(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1458e3484 FUN_1458e3484 body=29 status=ok
// SIG undefined FUN_1458e3484(void)

void FUN_1458e3484(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1458e34a2 FUN_1458e34a2 body=77 status=ok
// SIG undefined FUN_1458e34a2(void)

undefined8 * FUN_1458e34a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14be80af0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1458dd32a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458e34f0 FUN_1458e34f0 body=70 status=ok
// SIG undefined FUN_1458e34f0(void)

longlong FUN_1458e34f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1458e3564(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_1458e3536(lVar2,1);
  return lVar2;
}



// FUNCTION 1458e3536 FUN_1458e3536 body=45 status=ok
// SIG undefined FUN_1458e3536(void)

void FUN_1458e3536(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 1458e3564 FUN_1458e3564 body=147 status=ok
// SIG undefined FUN_1458e3564(void)

void FUN_1458e3564(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458e35f8 FUN_1458e35f8 body=40 status=ok
// SIG undefined FUN_1458e35f8(void)

undefined8 FUN_1458e35f8(undefined8 param_1,int param_2)

{
  FUN_1458e3620();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458e3620 FUN_1458e3620 body=688 status=ok
// SIG undefined FUN_1458e3620(void)

void FUN_1458e3620(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b68f310;
  param_1[0x72] = &PTR_FUN_14b68f9a0;
  param_1[0x73] = &PTR_FUN_14b68f9c0;
  param_1[0x74] = &PTR_FUN_14b68f9f0;
  param_1[0x75] = &PTR_FUN_14b68fa00;
  param_1[0x76] = &PTR_FUN_14b68fa70;
  param_1[0x77] = &PTR_FUN_14b68faa0;
  param_1[0x78] = &PTR_FUN_14b68fad0;
  param_1[0x7f] = &PTR_FUN_14b68fb80;
  param_1[0x80] = &PTR_FUN_14b68fbf0;
  param_1[0x81] = &PTR_FUN_14b68fc60;
  param_1[0x82] = &PTR_FUN_14b68fc90;
  param_1[0x83] = &PTR_FUN_14b68fcd0;
  param_1[0x84] = &PTR_FUN_14b68fd70;
  param_1[0x85] = &PTR_FUN_14b68fd90;
  param_1[0x89] = &PTR_FUN_14b68fdb0;
  param_1[0x8a] = &PTR_FUN_14b68fe70;
  param_1[0x8b] = &PTR_FUN_14b68fef0;
  param_1[0x8c] = &PTR_FUN_14b68ff40;
  param_1[0x8d] = &PTR_FUN_14b68ff80;
  param_1[0x8e] = &PTR_FUN_14b68ffa0;
  param_1[0x8f] = &PTR_FUN_14b68ffc0;
  param_1[0x90] = &PTR_FUN_14b68ffe0;
  param_1[0x91] = &PTR_FUN_14b690000;
  param_1[0x92] = &PTR_FUN_14b690020;
  param_1[0x93] = &PTR_FUN_14b690040;
  param_1[0x94] = &PTR_FUN_14b690060;
  param_1[0x95] = &PTR_FUN_14b690080;
  param_1[0x96] = &PTR_FUN_14b6900a0;
  param_1[0x34b] = &PTR_FUN_14b6900c0;
  param_1[0x352] = &PTR_FUN_14b6900d0;
  param_1[0x353] = &PTR_FUN_14b690110;
  param_1[0x354] = &PTR_FUN_14b690150;
  param_1[0x355] = &PTR_FUN_14b6901a0;
  param_1[0x356] = &PTR_FUN_14b6901d0;
  param_1[0x359] = &PTR_FUN_14b690210;
  param_1[0x35a] = &PTR_FUN_14b690220;
  param_1[0x35b] = &PTR_FUN_14b690250;
  param_1[0x35c] = &PTR_FUN_14b6902f0;
  param_1[0x4bf] = &PTR_FUN_14b690310;
  param_1[0x4df] = &PTR_FUN_14b690320;
  plVar2 = (longlong *)param_1[0x546];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x543];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1458e38d0(param_1 + 0x4e8);
  param_1[0x4df] = &PTR_LAB_14b693f40;
  if (param_1[0x4e5] != 0) {
    FUN_1400020a8();
  }
  FUN_14102816a(param_1);
  return;
}



// FUNCTION 1458e38d0 FUN_1458e38d0 body=83 status=ok
// SIG undefined FUN_1458e38d0(void)

void FUN_1458e38d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b693830;
  if (param_1[8] == 0) {
    *param_1 = &PTR_FUN_14b5ecc40;
  }
  else {
    FUN_140872868(param_1);
    *param_1 = &PTR_FUN_14b5ecc40;
    if (param_1[8] != 0) {
      FUN_140872868(param_1);
    }
  }
  FUN_140639928(param_1);
  return;
}



// FUNCTION 1458e3932 FUN_1458e3932 body=36 status=ok
// SIG undefined FUN_1458e3932(void)

undefined8 FUN_1458e3932(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1458e3962 FUN_1458e3962 body=39 status=ok
// SIG undefined FUN_1458e3962(void)

undefined8 * FUN_1458e3962(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a7043a0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1458e3998 FUN_1458e3998 body=36 status=ok
// SIG undefined FUN_1458e3998(void)

undefined8 FUN_1458e3998(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1458e39ca FUN_1458e39ca body=36 status=ok
// SIG undefined FUN_1458e39ca(void)

undefined8 FUN_1458e39ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1458e39fc FUN_1458e39fc body=61 status=ok
// SIG undefined FUN_1458e39fc(void)

undefined8 * FUN_1458e39fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b280800;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458e3a48 FUN_1458e3a48 body=36 status=ok
// SIG undefined FUN_1458e3a48(void)

undefined8 FUN_1458e3a48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1458e3a7a FUN_1458e3a7a body=36 status=ok
// SIG undefined FUN_1458e3a7a(void)

undefined8 FUN_1458e3a7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1458e3aac FUN_1458e3aac body=36 status=ok
// SIG undefined FUN_1458e3aac(void)

undefined8 FUN_1458e3aac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1458e3ade FUN_1458e3ade body=36 status=ok
// SIG undefined FUN_1458e3ade(void)

undefined8 FUN_1458e3ade(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1458e3b10 FUN_1458e3b10 body=36 status=ok
// SIG undefined FUN_1458e3b10(void)

undefined8 FUN_1458e3b10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1458e3b3c FUN_1458e3b3c body=42 status=ok
// SIG undefined FUN_1458e3b3c(void)

undefined8 * FUN_1458e3b3c(undefined8 *param_1)

{
  FUN_1458d0582();
  *param_1 = &PTR_FUN_14b7e2320;
  FUN_143e0ae28(param_1,0);
  return param_1;
}



// FUNCTION 1458e3b66 FUN_1458e3b66 body=124 status=ok
// SIG undefined FUN_1458e3b66(void)

longlong * FUN_1458e3b66(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x248,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b8e31f0;
  FUN_1458e3be2(plVar3 + 2,0);
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



// FUNCTION 1458e3be2 FUN_1458e3be2 body=101 status=ok
// SIG undefined FUN_1458e3be2(void)

undefined8 * FUN_1458e3be2(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_1402095ca(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_1402095ca();
  }
  FUN_140aed452(param_1,param_2);
  *param_1 = &PTR_FUN_14b95e610;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  return param_1;
}



// FUNCTION 1458e3c48 FUN_1458e3c48 body=689 status=ok
// SIG undefined FUN_1458e3c48(void)

undefined8 FUN_1458e3c48(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    lVar1 = param_1 + 8;
    cVar2 = FUN_144729dda(lVar1);
    if (cVar2 != '\0') {
      uVar3 = FUN_14479d2ce(lVar1);
      lVar4 = FUN_141313386(param_2,uVar3);
      if (*param_3 == 0 && lVar4 == 0) {
        lVar4 = FUN_14479d2ce(lVar1);
        lVar4 = *(longlong *)(lVar4 + 0x430);
        lVar8 = 0x38;
        if (lVar4 != 0) {
          lVar5 = FUN_140993a2e();
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
             (lVar8 = 200, (&DAT_00001100)[lVar4] == '\x01')) {
            lVar8 = 0x38;
          }
        }
        if (*(char *)(param_2 + 0x84 + lVar8) == '\x01') {
          local_78 = 0.0;
          dStack_70 = 0.0;
          uVar7 = 0;
          local_68 = 0.0;
          local_88 = 0;
          local_98 = 0;
          uStack_90 = 0;
          uVar3 = FUN_14479d2ce(lVar1);
          FUN_141313b0e(uVar3,&local_78,&local_98);
          local_a8 = 0;
          uStack_a0 = 0;
          FUN_145735bf6(param_1,param_2,&local_a8);
          if ((longlong)(int)uStack_a0 == 0) {
            lVar4 = 0;
          }
          else {
            lVar8 = (longlong)(int)uStack_a0 * 0x118;
            lVar5 = local_a8 + 0xc0;
            fVar13 = 3.4028235e+38;
            lVar4 = 0;
            do {
              lVar6 = FUN_14485cccc(lVar5);
              if (lVar6 != 0) {
                uVar3 = FUN_14479d2ce(lVar1);
                cVar2 = FUN_14189bc40(param_2,lVar6,uVar3);
                if ((cVar2 != '\0') &&
                   (dVar10 = *(double *)(lVar5 + -0x98) - local_68,
                   dVar12 = *(double *)(lVar5 + -0xa0) - dStack_70,
                   dVar11 = *(double *)(lVar5 + -0xa8) - local_78,
                   fVar9 = (float)(dVar10 * dVar10 + dVar11 * dVar11 + dVar12 * dVar12),
                   fVar9 < fVar13)) {
                  lVar4 = lVar6;
                  fVar13 = fVar9;
                }
              }
              lVar5 = lVar5 + 0x118;
              lVar8 = lVar8 + -0x118;
            } while (lVar8 != 0);
            uVar7 = uStack_a0 & 0xffffffff;
          }
          FUN_14121cbdb(local_a8,uVar7);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          goto LAB_1458e3e81;
        }
LAB_1458e3d15:
        if (*param_3 != 0) {
          uVar3 = FUN_14479d2ce(lVar1);
          cVar2 = FUN_14189bc40(param_2,*param_3,uVar3);
          if (cVar2 == '\0') {
            *param_3 = 0;
          }
          else {
            lVar4 = *param_3;
            if (lVar4 != 0) goto LAB_1458e3e8d;
          }
        }
      }
      else {
LAB_1458e3e81:
        if (lVar4 == 0) goto LAB_1458e3d15;
        *param_3 = lVar4;
LAB_1458e3e8d:
        if ((*(longlong *)(param_1 + 0x18) != 0) &&
           (cVar2 = FUN_144729dda(param_1 + 0x10), cVar2 != '\0')) {
          uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                            (*(longlong **)(param_1 + 0x18),param_2,lVar4);
          goto LAB_1458e3d21;
        }
      }
    }
  }
  uVar3 = 0;
LAB_1458e3d21:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e3efa FUN_1458e3efa body=325 status=ok
// SIG undefined FUN_1458e3efa(void)

undefined8 *
FUN_1458e3efa(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined4 local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined4 *local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_d8 [3];
  undefined1 local_c0 [80];
  longlong local_70;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_118 = param_2;
  FUN_144a886e6(local_c0,0,&local_e8,0);
  lVar2 = FUN_1447210f0(param_2);
  if (lVar2 != 0) {
    local_e8 = 2;
    local_f8 = &DAT_14cad0f08;
    local_100 = &DAT_14cad0f10;
    local_110 = 2;
    local_118 = local_d8;
    local_108 = local_c0;
    local_e4 = param_4;
    cVar1 = FUN_14052f4ca(lVar2,&local_e8,param_3,&DAT_14c8463d0);
    if (cVar1 != '\0') {
      FUN_1458e4040(param_1,local_d8);
      goto LAB_1458e3fc0;
    }
  }
  *param_1 = 0;
  param_1[1] = 0xffffffff00000000;
LAB_1458e3fc0:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e4040 FUN_1458e4040 body=77 status=ok
// SIG undefined FUN_1458e4040(void)

undefined8 * FUN_1458e4040(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1458e408e(param_1,iVar1,0);
    FUN_144a80303(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1458e408e FUN_1458e408e body=115 status=ok
// SIG undefined FUN_1458e408e(void)

void FUN_1458e408e(longlong param_1,int param_2,int param_3)

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


